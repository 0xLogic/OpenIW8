/*
==============
HelicopterDynamics::SimulateRotorsNoPhysics
==============
*/

void __fastcall HelicopterDynamics::SimulateRotorsNoPhysics(HelicopterDynamics *this, float dT, float ail, float elev, float col)
{
  ?SimulateRotorsNoPhysics@HelicopterDynamics@@QEAAXMMMM@Z(this, dT, ail, elev, col);
}

/*
==============
FlightDynamicsRotorSystem::SetupRotor
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetupRotor(FlightDynamicsRotorSystem *this, int bladeCount, float bladeLength, float bladeWidth, float bladeWeight, float bladeMaxDeflection, float pitch, float yaw, float roll, Physics_WorldId worldId)
{
  ?SetupRotor@FlightDynamicsRotorSystem@@QEAAXHMMMMMMMW4Physics_WorldId@@@Z(this, bladeCount, bladeLength, bladeWidth, bladeWeight, bladeMaxDeflection, pitch, yaw, roll, worldId);
}

/*
==============
HelicopterDynamics::SimulateStationaryRotorBladesMovement
==============
*/

void __fastcall HelicopterDynamics::SimulateStationaryRotorBladesMovement(HelicopterDynamics *this, float dT)
{
  ?SimulateStationaryRotorBladesMovement@HelicopterDynamics@@QEAAXM@Z(this, dT);
}

/*
==============
HelicopterDynamics::ComputeLiftForces
==============
*/

void __fastcall HelicopterDynamics::ComputeLiftForces(HelicopterDynamics *this, float dT)
{
  ?ComputeLiftForces@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamicsRotorSystem::SetSwasplateRates
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwasplateRates(FlightDynamicsRotorSystem *this, float cyclic, float collective)
{
  ?SetSwasplateRates@FlightDynamicsRotorSystem@@QEAAXMM@Z(this, cyclic, collective);
}

/*
==============
HelicopterDynamics::GetMutableVfxData
==============
*/

HelicopterDynamics::VfxData *__fastcall HelicopterDynamics::GetMutableVfxData(HelicopterDynamics *this)
{
  return ?GetMutableVfxData@HelicopterDynamics@@QEBAAEAUVfxData@1@XZ(this);
}

/*
==============
HelicopterDynamics::PerformCoordinatedFlight
==============
*/

void __fastcall HelicopterDynamics::PerformCoordinatedFlight(HelicopterDynamics *this)
{
  ?PerformCoordinatedFlight@HelicopterDynamics@@UEAAXXZ(this);
}

/*
==============
HelicopterDynamics::Setup
==============
*/

bool __fastcall HelicopterDynamics::Setup(HelicopterDynamics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@HelicopterDynamics@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
HelicopterDynamics::PerformThrusterControl
==============
*/

void __fastcall HelicopterDynamics::PerformThrusterControl(HelicopterDynamics *this, float dT)
{
  ?PerformThrusterControl@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
HelicopterDynamics::TranslateUserControlInputsToFBW
==============
*/

void __fastcall HelicopterDynamics::TranslateUserControlInputsToFBW(HelicopterDynamics *this, float *aileronInput, float *elevatorInput, float *collectiveInput, float *rudderInput)
{
  ?TranslateUserControlInputsToFBW@HelicopterDynamics@@IEAAXAEAM000@Z(this, aileronInput, elevatorInput, collectiveInput, rudderInput);
}

/*
==============
FlightDynamicsRotorSystem::SetAirspeed
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetAirspeed(FlightDynamicsRotorSystem *this, vec3_t *airspeedVector)
{
  ?SetAirspeed@FlightDynamicsRotorSystem@@QEAAXTvec3_t@@@Z(this, airspeedVector);
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularPosition
==============
*/

double __fastcall FlightDynamicsRotorSystem::GetRotorAngularPosition(FlightDynamicsRotorSystem *this)
{
  double result; 

  *(float *)&result = ?GetRotorAngularPosition@FlightDynamicsRotorSystem@@QEBAMXZ(this);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::SetSwashplateDT
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwashplateDT(FlightDynamicsRotorSystem *this, float cyclicForward, float cyclicLateral, float collective, float dT)
{
  ?SetSwashplateDT@FlightDynamicsRotorSystem@@QEAAXMMMM@Z(this, cyclicForward, cyclicLateral, collective, dT);
}

/*
==============
HelicopterDynamics::LoadControlInputs
==============
*/

void __fastcall HelicopterDynamics::LoadControlInputs(HelicopterDynamics *this, const usercmd_s *cmd, float *rawControlInputs)
{
  ?LoadControlInputs@HelicopterDynamics@@MEAAXPEBUusercmd_s@@PEAM@Z(this, cmd, rawControlInputs);
}

/*
==============
FlightDynamicsRotorSystem::GetRotorTorqueAxis
==============
*/

void __fastcall FlightDynamicsRotorSystem::GetRotorTorqueAxis(FlightDynamicsRotorSystem *this, vec3_t *rotorTorqueAxis)
{
  ?GetRotorTorqueAxis@FlightDynamicsRotorSystem@@QEAAXPEATvec3_t@@@Z(this, rotorTorqueAxis);
}

/*
==============
HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetBladeAngleOffsetStrobeForRotorIndex@HelicopterDynamics@@QEBAMHH@Z(this, bladeIndex, rotorIndex);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::GetAveragePitchChange
==============
*/

double __fastcall FlightDynamicsRotorSystem::GetAveragePitchChange(FlightDynamicsRotorSystem *this)
{
  double result; 

  *(float *)&result = ?GetAveragePitchChange@FlightDynamicsRotorSystem@@QEBAMXZ(this);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation
==============
*/

void __fastcall FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(FlightDynamicsRotorSystem *this, vec4_t *newOrientationQuat, float dT)
{
  ?CalculateDeflectionFromOrientation@FlightDynamicsRotorSystem@@QEAAXTvec4_t@@M@Z(this, newOrientationQuat, dT);
}

/*
==============
HelicopterRotorBlade::ApplyDeflectionForce
==============
*/

double __fastcall HelicopterRotorBlade::ApplyDeflectionForce(HelicopterRotorBlade *this, float force, float centrifugalForce, float maxDeflection, float dT)
{
  double result; 

  *(float *)&result = ?ApplyDeflectionForce@HelicopterRotorBlade@@QEAAMMMMM@Z(this, force, centrifugalForce, maxDeflection, dT);
  return result;
}

/*
==============
HelicopterDynamics::GetStrobeEffectToggle
==============
*/

bool __fastcall HelicopterDynamics::GetStrobeEffectToggle(HelicopterDynamics *this, int rotorIndex)
{
  return ?GetStrobeEffectToggle@HelicopterDynamics@@QEBA_NH@Z(this, rotorIndex);
}

/*
==============
HelicopterDynamics::GetBladePitchStrobeForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetBladePitchStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetBladePitchStrobeForRotorIndex@HelicopterDynamics@@QEBAMHH@Z(this, bladeIndex, rotorIndex);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::GetAverageBladePitch
==============
*/

double __fastcall FlightDynamicsRotorSystem::GetAverageBladePitch(FlightDynamicsRotorSystem *this)
{
  double result; 

  *(float *)&result = ?GetAverageBladePitch@FlightDynamicsRotorSystem@@QEBAMXZ(this);
  return result;
}

/*
==============
CalculateDragAtDirection
==============
*/

void __fastcall CalculateDragAtDirection(vec3_t *inputVector, vec3_t *directionOfDrag, float dragCoeff, float dT, vec3_t *outVector)
{
  ?CalculateDragAtDirection@@YAXTvec3_t@@0MMAEAT1@@Z(inputVector, directionOfDrag, dragCoeff, dT, outVector);
}

/*
==============
HelicopterDynamics::NotifyClientImpact
==============
*/

void __fastcall HelicopterDynamics::NotifyClientImpact(HelicopterDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?NotifyClientImpact@HelicopterDynamics@@IEBAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
HelicopterDynamics::GetNumberOfBladesForRotorIndex
==============
*/

int __fastcall HelicopterDynamics::GetNumberOfBladesForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  return ?GetNumberOfBladesForRotorIndex@HelicopterDynamics@@QEBAHH@Z(this, rotorIndex);
}

/*
==============
FlightDynamicsRotorSystem::SetRotorAngularRPM
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetRotorAngularRPM(FlightDynamicsRotorSystem *this, float rpm)
{
  ?SetRotorAngularRPM@FlightDynamicsRotorSystem@@QEAAXM@Z(this, rpm);
}

/*
==============
HelicopterDynamics::SetFlyByWireInputVector
==============
*/

void __fastcall HelicopterDynamics::SetFlyByWireInputVector(HelicopterDynamics *this, vec3_t *fbwVector)
{
  ?SetFlyByWireInputVector@HelicopterDynamics@@UEAAXTvec3_t@@@Z(this, fbwVector);
}

/*
==============
HelicopterDynamics::BlendToPmoveObject
==============
*/

void __fastcall HelicopterDynamics::BlendToPmoveObject(HelicopterDynamics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  ?BlendToPmoveObject@HelicopterDynamics@@MEAAXMAEBVBgVehiclePhysics@@AEATvec3_t@@1@Z(this, deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
}

/*
==============
FlightDynamicsRotorSystem::SetSwashplate
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwashplate(FlightDynamicsRotorSystem *this, float cyclicForward, float cyclicLateral, float collective)
{
  ?SetSwashplate@FlightDynamicsRotorSystem@@QEAAXMMM@Z(this, cyclicForward, cyclicLateral, collective);
}

/*
==============
HelicopterDynamics::CalculateFlyByWireVector
==============
*/

void __fastcall HelicopterDynamics::CalculateFlyByWireVector(HelicopterDynamics *this, const float dT, int horizontalAxis, int verticalAxis, bool overideFlag)
{
  ?CalculateFlyByWireVector@HelicopterDynamics@@UEAAXMHH_N@Z(this, dT, horizontalAxis, verticalAxis, overideFlag);
}

/*
==============
HelicopterDynamics::PerformAutomaticControl
==============
*/

void __fastcall HelicopterDynamics::PerformAutomaticControl(HelicopterDynamics *this, float dT)
{
  ?PerformAutomaticControl@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamicsRotorSystem::SetRotorAngularPosition
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetRotorAngularPosition(FlightDynamicsRotorSystem *this, float angularPosition)
{
  ?SetRotorAngularPosition@FlightDynamicsRotorSystem@@QEAAXM@Z(this, angularPosition);
}

/*
==============
HelicopterDynamics::InitializeHelicopterRotors
==============
*/

void __fastcall HelicopterDynamics::InitializeHelicopterRotors(HelicopterDynamics *this)
{
  ?InitializeHelicopterRotors@HelicopterDynamics@@QEAAXXZ(this);
}

/*
==============
HelicopterDynamics::SpoolUpRotor
==============
*/

void __fastcall HelicopterDynamics::SpoolUpRotor(HelicopterDynamics *this, float newRPM)
{
  ?SpoolUpRotor@HelicopterDynamics@@QEAAXM@Z(this, newRPM);
}

/*
==============
HelicopterDynamics::GetAngularPositionForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetAngularPositionForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetAngularPositionForRotorIndex@HelicopterDynamics@@QEBAMH@Z(this, rotorIndex);
  return result;
}

/*
==============
HelicopterDynamics::SimulateRotorSpeed
==============
*/

void __fastcall HelicopterDynamics::SimulateRotorSpeed(HelicopterDynamics *this, float targetRPM, float dT)
{
  ?SimulateRotorSpeed@HelicopterDynamics@@QEAAXMM@Z(this, targetRPM, dT);
}

/*
==============
HelicopterDynamics::CollisionImpulseCallback
==============
*/

void __fastcall HelicopterDynamics::CollisionImpulseCallback(HelicopterDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@HelicopterDynamics@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
FlightDynamicsRotorSystem::ApplyShaftTorque
==============
*/

void __fastcall FlightDynamicsRotorSystem::ApplyShaftTorque(FlightDynamicsRotorSystem *this, float torque)
{
  ?ApplyShaftTorque@FlightDynamicsRotorSystem@@QEAAXM@Z(this, torque);
}

/*
==============
HelicopterDynamics::StartPlayerControlling
==============
*/

void __fastcall HelicopterDynamics::StartPlayerControlling(HelicopterDynamics *this)
{
  ?StartPlayerControlling@HelicopterDynamics@@UEAAXXZ(this);
}

/*
==============
HelicopterDynamics::SetSoundHorn
==============
*/

void __fastcall HelicopterDynamics::SetSoundHorn(HelicopterDynamics *this, unsigned int hornHash)
{
  ?SetSoundHorn@HelicopterDynamics@@UEAAXI@Z(this, hornHash);
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAxis
==============
*/

void __fastcall FlightDynamicsRotorSystem::GetRotorAxis(FlightDynamicsRotorSystem *this, vec3_t *axis)
{
  ?GetRotorAxis@FlightDynamicsRotorSystem@@QEAAXPEATvec3_t@@@Z(this, axis);
}

/*
==============
HelicopterDynamics::ApplyGravity
==============
*/

void __fastcall HelicopterDynamics::ApplyGravity(HelicopterDynamics *this, float dT)
{
  ?ApplyGravity@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
HelicopterDynamics::Reset
==============
*/

void __fastcall HelicopterDynamics::Reset(HelicopterDynamics *this)
{
  ?Reset@HelicopterDynamics@@UEAAXXZ(this);
}

/*
==============
HelicopterDynamics::GetBladeDeflectionForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetBladeDeflectionForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetBladeDeflectionForRotorIndex@HelicopterDynamics@@QEBAMHH@Z(this, bladeIndex, rotorIndex);
  return result;
}

/*
==============
HelicopterDynamics::GetRPMForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetRPMForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetRPMForRotorIndex@HelicopterDynamics@@QEBAMH@Z(this, rotorIndex);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularRPM
==============
*/

double __fastcall FlightDynamicsRotorSystem::GetRotorAngularRPM(FlightDynamicsRotorSystem *this)
{
  double result; 

  *(float *)&result = ?GetRotorAngularRPM@FlightDynamicsRotorSystem@@QEBAMXZ(this);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::UpdateGroundEffect
==============
*/

double __fastcall FlightDynamicsRotorSystem::UpdateGroundEffect(FlightDynamicsRotorSystem *this, float distance, float liftMultiplier, float dT)
{
  double result; 

  *(float *)&result = ?UpdateGroundEffect@FlightDynamicsRotorSystem@@QEAAMMMM@Z(this, distance, liftMultiplier, dT);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::Update
==============
*/

void __fastcall FlightDynamicsRotorSystem::Update(FlightDynamicsRotorSystem *this, float dT, bool drawBlade)
{
  ?Update@FlightDynamicsRotorSystem@@QEAAXM_N@Z(this, dT, drawBlade);
}

/*
==============
HelicopterDynamics::GetBladePitchForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetBladePitchForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetBladePitchForRotorIndex@HelicopterDynamics@@QEBAMHH@Z(this, bladeIndex, rotorIndex);
  return result;
}

/*
==============
HelicopterDynamics::SupportsFeature
==============
*/

bool __fastcall HelicopterDynamics::SupportsFeature(HelicopterDynamics *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@HelicopterDynamics@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
HelicopterDynamics::GetSoundValuesFD
==============
*/

void __fastcall HelicopterDynamics::GetSoundValuesFD(HelicopterDynamics *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, float *outGear, float *outMph, bool *outTurbineStart, bool *outTurbineStop, vec3_t *outPosition)
{
  ?GetSoundValuesFD@HelicopterDynamics@@UEBAXHHAEAM0000AEA_N1AEATvec3_t@@@Z(this, clientNum, time, outThrottle, outBrake, outRpmNormal, outGear, outMph, outTurbineStart, outTurbineStop, outPosition);
}

/*
==============
FlightDynamicsRotorSystem::UpdateSteps
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateSteps(FlightDynamicsRotorSystem *this, float dT, int steps, bool drawBlade)
{
  ?UpdateSteps@FlightDynamicsRotorSystem@@QEAAXMH_N@Z(this, dT, steps, drawBlade);
}

/*
==============
HelicopterDynamics::PerformControlSurfaces
==============
*/

void __fastcall HelicopterDynamics::PerformControlSurfaces(HelicopterDynamics *this, float dT)
{
  ?PerformControlSurfaces@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamicsRotorSystem::ResetForces
==============
*/

void __fastcall FlightDynamicsRotorSystem::ResetForces(FlightDynamicsRotorSystem *this)
{
  ?ResetForces@FlightDynamicsRotorSystem@@QEAAXXZ(this);
}

/*
==============
HelicopterDynamics::IsInAir
==============
*/

bool __fastcall HelicopterDynamics::IsInAir(HelicopterDynamics *this)
{
  return ?IsInAir@HelicopterDynamics@@UEBA_NXZ(this);
}

/*
==============
HelicopterDynamics::GetBladeIndexStrobeForRotorIndex
==============
*/

int __fastcall HelicopterDynamics::GetBladeIndexStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  return ?GetBladeIndexStrobeForRotorIndex@HelicopterDynamics@@QEBAHHH@Z(this, bladeIndex, rotorIndex);
}

/*
==============
FlightDynamicsRotorSystem::UpdateAirflowMomemtum
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateAirflowMomemtum(FlightDynamicsRotorSystem *this, vec3_t *liftForceVector, float dT)
{
  ?UpdateAirflowMomemtum@FlightDynamicsRotorSystem@@IEAAXTvec3_t@@M@Z(this, liftForceVector, dT);
}

/*
==============
HelicopterDynamics::StopPlayerControlling
==============
*/

void __fastcall HelicopterDynamics::StopPlayerControlling(HelicopterDynamics *this)
{
  ?StopPlayerControlling@HelicopterDynamics@@UEAAXXZ(this);
}

/*
==============
HelicopterDynamics::SimulateTurbineOperation
==============
*/

void __fastcall HelicopterDynamics::SimulateTurbineOperation(HelicopterDynamics *this, float dT)
{
  ?SimulateTurbineOperation@HelicopterDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
HelicopterDynamics::GetCameraFovDelta
==============
*/

double __fastcall HelicopterDynamics::GetCameraFovDelta(HelicopterDynamics *this)
{
  double result; 

  *(float *)&result = ?GetCameraFovDelta@HelicopterDynamics@@UEBAMXZ(this);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::SetPositionAndOrientation
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetPositionAndOrientation(FlightDynamicsRotorSystem *this, vec3_t *position, vec4_t *rotation)
{
  ?SetPositionAndOrientation@FlightDynamicsRotorSystem@@QEAAXTvec3_t@@Tvec4_t@@@Z(this, position, rotation);
}

/*
==============
HelicopterDynamics::DebugDraw
==============
*/

void __fastcall HelicopterDynamics::DebugDraw(HelicopterDynamics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@HelicopterDynamics@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HelicopterDynamics::SelectStickMode
==============
*/

void __fastcall HelicopterDynamics::SelectStickMode(HelicopterDynamics *this)
{
  ?SelectStickMode@HelicopterDynamics@@UEAAXXZ(this);
}

/*
==============
HelicopterDynamics::CalculateFlyByWireOffset
==============
*/

void __fastcall HelicopterDynamics::CalculateFlyByWireOffset(HelicopterDynamics *this, float scale, vec3_t *result)
{
  ?CalculateFlyByWireOffset@HelicopterDynamics@@UEBAXMAEATvec3_t@@@Z(this, scale, result);
}

/*
==============
HelicopterDynamics::GetAngularPositionStrobeForRotorIndex
==============
*/

double __fastcall HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  double result; 

  *(float *)&result = ?GetAngularPositionStrobeForRotorIndex@HelicopterDynamics@@QEBAMH@Z(this, rotorIndex);
  return result;
}

/*
==============
FlightDynamicsRotorSystem::UpdatePositionAndOrientation
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdatePositionAndOrientation(FlightDynamicsRotorSystem *this, vec3_t *position, vec4_t *rotation, float dT)
{
  ?UpdatePositionAndOrientation@FlightDynamicsRotorSystem@@QEAAXTvec3_t@@Tvec4_t@@M@Z(this, position, rotation, dT);
}

/*
==============
FlightDynamicsRotorSystem::UpdateRotor
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateRotor(FlightDynamicsRotorSystem *this, float dT, bool drawBlade)
{
  ?UpdateRotor@FlightDynamicsRotorSystem@@QEAAXM_N@Z(this, dT, drawBlade);
}

/*
==============
HelicopterDynamics::GetSoundHorn
==============
*/

unsigned int __fastcall HelicopterDynamics::GetSoundHorn(HelicopterDynamics *this)
{
  return ?GetSoundHorn@HelicopterDynamics@@UEBAIXZ(this);
}

/*
==============
HelicopterDynamics::ReactToServerEvent
==============
*/

void __fastcall HelicopterDynamics::ReactToServerEvent(HelicopterDynamics *this, unsigned int eventType, unsigned int eventParam)
{
  ?ReactToServerEvent@HelicopterDynamics@@UEAAXII@Z(this, eventType, eventParam);
}

/*
==============
HelicopterDynamics::GetMaxGovernorSpeed
==============
*/

double __fastcall HelicopterDynamics::GetMaxGovernorSpeed(HelicopterDynamics *this)
{
  double result; 

  *(float *)&result = ?GetMaxGovernorSpeed@HelicopterDynamics@@QEBAMXZ(this);
  return result;
}

/*
==============
HelicopterDynamics::KillTurbine
==============
*/

void __fastcall HelicopterDynamics::KillTurbine(HelicopterDynamics *this)
{
  ?KillTurbine@HelicopterDynamics@@QEAAXXZ(this);
}

/*
==============
HelicopterDynamics::VfxData::Reset
==============
*/

void __fastcall HelicopterDynamics::VfxData::Reset(HelicopterDynamics::VfxData *this)
{
  ?Reset@VfxData@HelicopterDynamics@@QEAAXXZ(this);
}

/*
==============
HelicopterDynamics::InitializeVariables
==============
*/

void __fastcall HelicopterDynamics::InitializeVariables(HelicopterDynamics *this)
{
  ?InitializeVariables@HelicopterDynamics@@QEAAXXZ(this);
}

/*
==============
HelicopterRotorBlade::ApplyDeflectionForce
==============
*/

float __fastcall HelicopterRotorBlade::ApplyDeflectionForce(HelicopterRotorBlade *this, double force, double centrifugalForce, double maxDeflection, float dT)
{
  char v34; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+18h], xmm2
    vcmpltss xmm4, xmm3, cs:__real@3a83126f
    vmovss  xmm0, cs:__real@3c23d70a
    vcomiss xmm3, cs:__real@3a83126f
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vblendvps xmm6, xmm3, xmm0, xmm4
    vmulss  xmm9, xmm6, cs:__real@40000000
    vmovss  xmm0, dword ptr [rcx+1Ch]; val
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps xmm13, xmm1
    vmovaps [rsp+0B8h+var_88], xmm14
    vmovaps [rsp+0B8h+var_98], xmm15
    vxorps  xmm15, xmm9, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm1, xmm15; min
    vmovaps xmm2, xmm9; max
    vmovss  [rsp+0B8h+arg_8], xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm12, [rsp+0B8h+arg_20]
    vmulss  xmm1, xmm12, dword ptr [rbx+20h]
    vmovss  xmm8, cs:__real@3f800000
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+1Ch], xmm0
    vaddss  xmm0, xmm6, xmm0
    vmovss  [rsp+0B8h+arg_20], xmm1
    vmovss  xmm1, cs:?HFD_BLADE_MIN_FORCE_FACTOR@@3MA; min
    vdivss  xmm0, xmm0, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm14, xmm14, xmm14
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vcomiss xmm13, xmm14 }
  if ( v34 )
  {
    __asm
    {
      vsubss  xmm0, xmm8, xmm0
      vxorps  xmm11, xmm0, cs:__xmm@80000000800000008000000080000000
    }
  }
  else
  {
    __asm { vmovaps xmm11, xmm0 }
  }
  __asm
  {
    vmovss  xmm1, cs:?HFD_BLADE_MAX_DEFLECTION_EXPO@@3MA; expo
    vmovaps xmm0, xmm11; value
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:?HFD_BLADE_MAX_DEFLECTION_FORCE@@3MA; float HFD_BLADE_MAX_DEFLECTION_FORCE
    vmovss  xmm4, [rsp+0B8h+arg_20]
    vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000; value
    vmovss  xmm1, cs:?HFD_BLADE_DEFLECTION_CENTRIFUGAL_EXPO@@3MA; expo
    vmulss  xmm7, xmm13, cs:?HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER@@3MA; float HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER
    vmulss  xmm6, xmm2, cs:?HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER@@3MA; float HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, [rsp+0B8h+arg_10]
    vmulss  xmm3, xmm1, cs:?HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER@@3MA; float HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER
    vandps  xmm11, xmm11, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm6, xmm7
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm4, cs:?HFD_BLADE_DEFLECTION_DAMPING@@3MA; float HFD_BLADE_DEFLECTION_DAMPING
    vdivss  xmm0, xmm4, cs:?HFD_BLADE_STIFFNESS_MASS_MULTIPLIER@@3MA; float HFD_BLADE_STIFFNESS_MASS_MULTIPLIER
    vsubss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm11, xmm2
    vsubss  xmm6, xmm13, xmm0
    vmulss  xmm0, xmm3, xmm12
    vaddss  xmm1, xmm0, dword ptr [rbx+20h]
    vmovss  dword ptr [rbx+20h], xmm1
    vmulss  xmm0, xmm12, cs:?HFD_BLADE_STIFFNESS_FACTOR_VEL@@3MA; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm3, xmm0, dword ptr [rbx+20h]
    vmulss  xmm2, xmm3, xmm12
    vaddss  xmm4, xmm2, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rbx+1Ch], xmm4
    vmovss  dword ptr [rbx+20h], xmm3
    vmulss  xmm0, xmm3, cs:?HFD_BLADE_DEFLECTION_POS_DAMPING@@3MA; float HFD_BLADE_DEFLECTION_POS_DAMPING
    vmulss  xmm3, xmm0, xmm12
    vsubss  xmm4, xmm4, xmm3
    vmovss  dword ptr [rbx+1Ch], xmm4
    vmulss  xmm0, xmm12, cs:?HFD_BLADE_STIFFNESS_FACTOR_POS@@3MA; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm0, xmm0, dword ptr [rbx+1Ch]; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm15; min
    vmovss  dword ptr [rbx+1Ch], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm15, [rsp+0B8h+var_98] }
  _R11 = &v93;
  __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
  _EAX = 0;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovd   xmm1, eax
  }
  _EAX = (unsigned __int64)&v93 < 0xB0;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm6, xmm2
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm13, xmmword ptr [r11-70h]
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::ApplyGravity
==============
*/
void HelicopterDynamics::ApplyGravity(HelicopterDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamicsRotorSystem::ApplyShaftTorque
==============
*/

void __fastcall FlightDynamicsRotorSystem::ApplyShaftTorque(FlightDynamicsRotorSystem *this, double torque)
{
  __asm { vmovss  dword ptr [rcx+4Ch], xmm1 }
}

/*
==============
HelicopterDynamics::BlendToPmoveObject
==============
*/

void __fastcall HelicopterDynamics::BlendToPmoveObject(HelicopterDynamics *this, double deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = this;
  __asm { vmovaps xmm6, xmm1 }
  FlightDynamics::BlendToPmoveObject(this, *(float *)&deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
  __asm
  {
    vmulss  xmm2, xmm6, dword ptr [rbx+47Ch]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm3, xmm0, xmm6
    vmulss  xmm0, xmm3, dword ptr [rdi+47Ch]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+47Ch], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+480h]
    vmulss  xmm0, xmm3, dword ptr [rdi+480h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+480h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+484h]
    vmulss  xmm0, xmm3, dword ptr [rdi+484h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+484h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+488h]
    vmulss  xmm0, xmm3, dword ptr [rdi+488h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+488h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+48Ch]
    vmulss  xmm0, xmm3, dword ptr [rdi+48Ch]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+48Ch], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+490h]
    vmulss  xmm0, xmm3, dword ptr [rdi+490h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+490h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+494h]
    vmulss  xmm0, xmm3, dword ptr [rdi+494h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+494h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+498h]
    vmulss  xmm0, xmm3, dword ptr [rdi+498h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+498h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+49Ch]
    vmulss  xmm0, xmm3, dword ptr [rdi+49Ch]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+49Ch], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+4A0h]
    vmulss  xmm0, xmm3, dword ptr [rdi+4A0h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+4A0h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+4A4h]
    vmulss  xmm0, xmm3, dword ptr [rdi+4A4h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+4A4h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+4A8h]
    vmulss  xmm0, xmm3, dword ptr [rdi+4A8h]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+4A8h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+4ACh]
    vmulss  xmm0, xmm3, dword ptr [rdi+4ACh]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+4ACh], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+4B0h]
    vmulss  xmm0, xmm3, dword ptr [rdi+4B0h]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+4B0h], xmm1
  }
}

/*
==============
FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation
==============
*/

void __fastcall FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(FlightDynamicsRotorSystem *this, vec4_t *newOrientationQuat, double dT)
{
  FlightDynamicsRotorSystem *v13; 
  int v15; 
  int v54; 
  vec3_t in; 
  vec4_t out; 
  vec3_t angles; 
  vec3_t v58; 
  vec3_t v59; 
  vec4_t v60; 
  vec4_t quat; 
  vec4_t v62; 

  __asm
  {
    vmovaps [rsp+140h+var_80], xmm10
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+140h+angles], xmm0
    vmovss  dword ptr [rsp+140h+angles+8], xmm0
    vmovss  xmm0, dword ptr [rcx+9Ch]
    vmulss  xmm1, xmm0, cs:__real@40c00000
  }
  v13 = this;
  __asm
  {
    vmovss  dword ptr [rsp+140h+angles+4], xmm1
    vmovaps xmm10, xmm2
  }
  AnglesToQuat(&angles, &quat);
  QuatMultiply(&quat, &v13->m_RotorAxisQuat, &out);
  QuatMultiply(&out, &v13->m_RotationQuat, &v62);
  QuatMultiply(&out, newOrientationQuat, &v60);
  v15 = 0;
  if ( v13->m_BladeCount > 0 )
  {
    _RDI = &v13->m_RotorBlades[0].m_BladeRotationDirection.v[2];
    __asm
    {
      vmovaps [rsp+140h+var_40], xmm6
      vmovaps [rsp+140h+var_50], xmm7
      vmovaps [rsp+140h+var_60], xmm8
      vmovss  xmm8, cs:__real@be4ccccd
      vmovaps [rsp+140h+var_70], xmm9
      vmovss  xmm9, cs:__real@3e4ccccd
    }
    do
    {
      if ( _RDI - 5 == (float *)&in && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( _RDI - 2 == (float *)&in && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      __asm
      {
        vmovss  xmm7, dword ptr [rdi-10h]
        vmovss  xmm5, dword ptr [rdi]
        vmovss  xmm4, dword ptr [rdi-0Ch]
        vmovss  xmm6, dword ptr [rdi-4]
        vmulss  xmm2, xmm6, dword ptr [r15]
        vmulss  xmm1, xmm5, xmm7
        vmulss  xmm0, xmm4, xmm6
        vsubss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm5, dword ptr [r15]
        vmovss  dword ptr [rsp+140h+in], xmm1
        vmulss  xmm1, xmm4, dword ptr [rbx]
        vsubss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbx]
        vmovss  dword ptr [rsp+140h+in+4], xmm1
        vsubss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rsp+140h+in+8], xmm1
      }
      QuatTransform(&v62, &v13->m_RotorBlades[v15].m_BladeDirection, &v59);
      QuatTransform(&v60, &v13->m_RotorBlades[v15].m_BladeDirection, &v58);
      QuatTransform(&v60, &in, (vec3_t *)&out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+var_D8+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+40h+var_C8+8]
        vmovss  xmm1, dword ptr [rsp+140h+var_D8+4]
        vsubss  xmm2, xmm1, dword ptr [rsp+140h+var_C8+4]
        vmulss  xmm3, xmm2, dword ptr [rsp+140h+out+4]
        vmovss  xmm0, dword ptr [rsp+140h+var_D8]
        vsubss  xmm1, xmm0, dword ptr [rsp+140h+var_C8]
        vmulss  xmm2, xmm1, dword ptr [rsp+140h+out]
        vmulss  xmm1, xmm4, dword ptr [rsp+140h+out+8]
        vaddss  xmm3, xmm3, xmm2
        vaddss  xmm2, xmm3, xmm1
        vmaxss  xmm0, xmm2, xmm8
        vminss  xmm1, xmm0, xmm9
        vdivss  xmm2, xmm1, dword ptr [r14+70h]
        vmulss  xmm3, xmm2, cs:?HFD_ROTOR_DEFLECTION_VELOCITY_FACTOR@@3MA; float HFD_ROTOR_DEFLECTION_VELOCITY_FACTOR
        vmulss  xmm0, xmm3, xmm10
        vaddss  xmm1, xmm0, dword ptr [rdi+0Ch]
        vmovss  [rsp+140h+var_110], xmm1
        vmovss  dword ptr [rdi+0Ch], xmm1
      }
      if ( (v54 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3708, ASSERT_TYPE_SANITY, "( !IS_NAN( m_RotorBlades[rotorBladeIndex].m_BladeDeflectionVelocity ) )", (const char *)&queryFormat, "!IS_NAN( m_RotorBlades[rotorBladeIndex].m_BladeDeflectionVelocity )") )
        __debugbreak();
      ++v15;
      _RDI += 11;
    }
    while ( v15 < v13->m_BladeCount );
    __asm
    {
      vmovaps xmm9, [rsp+140h+var_70]
      vmovaps xmm8, [rsp+140h+var_60]
      vmovaps xmm7, [rsp+140h+var_50]
      vmovaps xmm6, [rsp+140h+var_40]
    }
  }
  __asm { vmovaps xmm10, [rsp+140h+var_80] }
}

/*
==============
CalculateDragAtDirection
==============
*/

void __fastcall CalculateDragAtDirection(vec3_t *inputVector, vec3_t *directionOfDrag, double dragCoeff, double dT, vec3_t *outVector)
{
  _RAX = outVector;
  __asm
  {
    vmovaps xmm4, xmm2
    vmovaps [rsp+38h+var_18], xmm7
    vmovss  xmm7, dword ptr [rdx+4]
    vmulss  xmm0, xmm7, dword ptr [rcx+4]
    vmovaps [rsp+38h+var_28], xmm9
    vmovss  xmm9, dword ptr [rdx]
    vmulss  xmm1, xmm9, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+38h+var_38], xmm11
    vmovss  xmm11, dword ptr [rdx+8]
    vmulss  xmm1, xmm11, dword ptr [rcx+8]
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm4
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm2, xmm0, xmm3
    vandps  xmm0, xmm2, xmm4
    vandps  xmm1, xmm5, xmm4
    vcomiss xmm0, xmm1
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm5, xmm3
    vandps  xmm0, xmm0, xmm4
    vsubss  xmm2, xmm1, xmm0
    vsubss  xmm2, xmm0, xmm1
    vmulss  xmm0, xmm7, xmm2
    vaddss  xmm4, xmm0, dword ptr [rcx+4]
    vmulss  xmm1, xmm11, xmm2
    vaddss  xmm3, xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm9, xmm2
    vaddss  xmm2, xmm0, dword ptr [rcx]
    vmovss  dword ptr [rax], xmm2
    vmovss  dword ptr [rax+4], xmm4
    vmovss  dword ptr [rax+8], xmm3
    vmovaps xmm7, [rsp+38h+var_18]
    vmovaps xmm9, [rsp+38h+var_28]
    vmovaps xmm11, [rsp+38h+var_38]
  }
}

/*
==============
HelicopterDynamics::CalculateFlyByWireOffset
==============
*/
void HelicopterDynamics::CalculateFlyByWireOffset(HelicopterDynamics *this, float scale, vec3_t *result)
{
  const dvar_t *v6; 

  _RBX = result;
  _RDI = this;
  if ( !this->m_EnableFlyByWire )
    goto LABEL_7;
  v6 = DVARINT_fd_helicopter_fbw_status;
  if ( !DVARINT_fd_helicopter_fbw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_status") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer )
  {
    _RBX->v[0] = _RDI->m_UserControlInputs[8];
    _RBX->v[1] = _RDI->m_UserControlInputs[9];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+404h]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
LABEL_7:
    *(_QWORD *)_RBX->v = 0i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
HelicopterDynamics::CalculateFlyByWireVector
==============
*/
void HelicopterDynamics::CalculateFlyByWireVector(HelicopterDynamics *this, const float dT, int horizontalAxis, int verticalAxis)
{
  ;
}

/*
==============
HelicopterDynamics::CollisionImpulseCallback
==============
*/
void HelicopterDynamics::CollisionImpulseCallback(HelicopterDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  char v39; 
  char v40; 
  int v78; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+14h]
    vmovss  xmm1, dword ptr [rdx+18h]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RDI = cbData;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vsubss  xmm13, xmm1, dword ptr [rcx+230h]
    vmulss  xmm1, xmm13, dword ptr [rcx+360h]
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vsubss  xmm15, xmm0, dword ptr [rcx+22Ch]
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vsubss  xmm14, xmm0, dword ptr [rcx+234h]
    vmulss  xmm0, xmm15, dword ptr [rcx+35Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rcx+364h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  [rsp+0D8h+var_B8], xmm0
  }
  _RAX = BG_GetFlightDynamicsManager();
  __asm
  {
    vmovss  xmm10, dword ptr [rax+0Ch]
    vmovss  xmm11, dword ptr [rax+10h]
    vmovss  xmm12, dword ptr [rax+14h]
  }
  _RAX = BG_GetFlightDynamicsManager();
  __asm
  {
    vmulss  xmm1, xmm13, dword ptr [rbx+354h]
    vmulss  xmm0, xmm15, dword ptr [rbx+350h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rbx+358h]
    vmovss  xmm6, dword ptr [rax+24h]
    vmovss  xmm7, dword ptr [rax+28h]
    vmovss  xmm8, dword ptr [rax+2Ch]
    vaddss  xmm9, xmm2, xmm1
  }
  BG_GetFlightDynamicsManager();
  __asm
  {
    vmovss  xmm5, [rsp+0D8h+var_B8]
    vmulss  xmm1, xmm13, dword ptr [rbx+348h]
    vmulss  xmm0, xmm15, dword ptr [rbx+344h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rbx+34Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [rax+18h]
    vmulss  xmm0, xmm5, xmm10
    vmulss  xmm2, xmm9, xmm6
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm6, xmm3, xmm1
    vmulss  xmm1, xmm4, dword ptr [rax+1Ch]
    vmulss  xmm2, xmm5, xmm11
    vmulss  xmm0, xmm9, xmm7
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm5, xmm12
    vmovss  xmm5, cs:?HFD_COLLISION_BOUNCE_STRENGTH@@3MA; float HFD_COLLISION_BOUNCE_STRENGTH
    vaddss  xmm10, xmm3, xmm1
    vmulss  xmm1, xmm4, dword ptr [rax+20h]
    vmulss  xmm0, xmm9, xmm8
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm7, xmm3, xmm1
  }
  _RBX->m_collisionZone = HFD_COLLISION_ID_FUSELAGE;
  __asm { vcomiss xmm7, cs:?HFD_COLLISION_LANDING_GEAR_HEIGHT@@3MA; float HFD_COLLISION_LANDING_GEAR_HEIGHT }
  if ( v39 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+24h]
      vmulss  xmm3, xmm0, dword ptr [rbx+360h]
      vmovss  xmm1, dword ptr [rdi+20h]
      vmulss  xmm2, xmm1, dword ptr [rbx+35Ch]
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, dword ptr [rbx+364h]
    }
    _RBX->m_collisionZone = HFD_COLLISION_ID_LANDING_GEAR;
    __asm
    {
      vmovss  xmm0, cs:?HFD_COLLISION_LANDING_GEAR_ALLOWED_SPEED@@3MA; float HFD_COLLISION_LANDING_GEAR_ALLOWED_SPEED
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, cs:?HFD_COLLISION_LANDING_GEAR_ALLOWED_ANGLE@@3MA; float HFD_COLLISION_LANDING_GEAR_ALLOWED_ANGLE
    }
    if ( !(v39 | v40) )
    {
      __asm { vcomiss xmm0, dword ptr [rdi+2Ch] }
      if ( !(v39 | v40) )
      {
        HelicopterDynamics::NotifyClientImpact(_RBX, _RDI);
        goto LABEL_17;
      }
    }
    __asm
    {
      vcmpltss xmm1, xmm0, dword ptr [rdi+2Ch]
      vmovss  xmm0, cs:?HFD_COLLISION_BOUNCE_STRENGTH_LANDING@@3MA; float HFD_COLLISION_BOUNCE_STRENGTH_LANDING
      vblendvps xmm5, xmm5, xmm0, xmm1
    }
  }
  __asm { vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  *(_WORD *)&_RBX->m_applyCollisionExtraImpulse = 1;
  _RBX->m_LandingTimer = 0.0;
  __asm
  {
    vmovss  xmm0, cs:?HFD_MAIN_ROTOR_BLADE_LENGTH_SCALE_COLLISION@@3MA; float HFD_MAIN_ROTOR_BLADE_LENGTH_SCALE_COLLISION
    vmulss  xmm1, xmm0, cs:?HFD_MAIN_ROTOR_BLADE_LENGTH@@3MA; float HFD_MAIN_ROTOR_BLADE_LENGTH
    vmulss  xmm2, xmm1, cs:__real@3d21428b
    vcomiss xmm6, xmm2
  }
  if ( v39 )
  {
    __asm { vcomiss xmm7, cs:?HFD_COLLISION_MAIN_ROTOR_HEIGHT@@3MA; float HFD_COLLISION_MAIN_ROTOR_HEIGHT }
    if ( v39 | v40 )
      goto LABEL_13;
    v78 = HFD_COLLISION_ID_MAIN_ROTOR;
    _RBX->m_applyCollisionExtraAngularImpulse = -1;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm10, cs:?HFD_COLLISION_TAIL_ROTOR_PLACEMENT@@3MA; float HFD_COLLISION_TAIL_ROTOR_PLACEMENT
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( v39 | v40 )
    {
      v78 = HFD_COLLISION_ID_TAIL_FIN;
    }
    else
    {
      v78 = HFD_COLLISION_ID_TAIL_ROTOR;
      _RBX->m_applyCollisionExtraAngularImpulse = 1;
    }
  }
  _RBX->m_collisionZone = v78;
LABEL_13:
  if ( !_RBX->m_playerControlled || !_RBX->m_inputControlsEnabled )
  {
    __asm { vxorps  xmm5, xmm5, xmm5 }
    *(_WORD *)&_RBX->m_applyCollisionExtraImpulse = 0;
  }
  __asm
  {
    vmulss  xmm0, xmm5, dword ptr [rdi+20h]
    vmovss  dword ptr [rbx+950h], xmm0
    vmulss  xmm1, xmm5, dword ptr [rdi+24h]
    vmovss  dword ptr [rbx+954h], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+958h], xmm0
  }
  HelicopterDynamics::NotifyClientImpact(_RBX, _RDI);
  FlightDynamics::CollisionImpulseCallback(_RBX, _RDI);
LABEL_17:
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v98;
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
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
}

/*
==============
HelicopterDynamics::ComputeLiftForces
==============
*/

void __fastcall HelicopterDynamics::ComputeLiftForces(HelicopterDynamics *this, double dT)
{
  const dvar_t *v104; 
  bool Bool_Internal_DebugName; 
  char v219; 
  char v297; 
  char v298; 
  FlightDynamicsManager *FlightDynamicsManager; 
  bool v495; 
  FlightDynamicsManager *v609; 
  char v682; 
  char v683; 
  char v738; 
  char v739; 
  char v971; 
  char v972; 
  char v1179; 
  char v1180; 
  FlightDynamicsManager *v1212; 
  char v1268; 
  char v1269; 
  FlightDynamicsManager *v1499; 
  FlightDynamicsManager *v1506; 
  float *m_FBWControlInputs; 
  vec3_t *p_m_centerOfMassWs; 
  int v1613; 
  FlightDynamicsRotorSystem *p_m_MainRotor; 
  bool v1669; 
  bool v1670; 
  char v1691; 
  char v1692; 
  vec3_t *p_cross; 
  vec3_t *p_m_sideVector; 
  char m_applyCollisionExtraAngularImpulse; 
  const vec3_t *p_m_AirflowVelocity; 
  vec4_t *v1993; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float aileronInput; 
  float elevatorInput; 
  int v2040; 
  unsigned int unsignedInt; 
  float collectiveInput; 
  float rudderInput[2]; 
  HelicopterDynamics *p_m_GyroRudderStrength; 
  FlightDynamicsManager *v2062; 
  vec4_t v2085; 
  __int64 v2086; 
  vec4_t v2087; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t start; 
  vec3_t v2091; 
  vec3_t out; 
  vec3_t v0; 
  vec3_t v2094; 
  vec3_t a; 
  float v2097; 
  vec3_t end; 
  vec3_t v; 
  vec3_t b; 
  float v2102; 
  vec3_t dir; 
  vec3_t v2104; 
  vec3_t v2105; 
  vec3_t v2106; 
  vec3_t v2107; 
  vec4_t result; 
  vec4_t v2109; 
  trace_t v2110; 
  char v2111; 
  void *retaddr; 

  _RAX = &retaddr;
  v2086 = -2i64;
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
    vmovaps xmm12, xmm1
    vmovss  [rsp+3D0h+var_354], xmm1
  }
  _RSI = this;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::ComputeLiftForces");
  __asm { vmovss  xmm15, cs:__real@3f800000 }
  if ( !_RSI->m_playerControlled )
  {
    __asm { vcomiss xmm15, dword ptr [rsi+5B8h] }
    if ( _RSI->m_playerControlled )
    {
      _RSI->m_MainRotor.m_RotorRPM = 0.0;
      _RSI->m_TailRotor.m_RotorRPM = 0.0;
      goto LABEL_241;
    }
  }
  _RBX = DVARFLT_fd_helicopter_swash_driver;
  if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rsi+938h], xmm0
  }
  FlightDynamics::EnterSecondDerivativeMode(_RSI);
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+5B8h]
    vmovss  dword ptr [rbp+2D0h+var_318], xmm6
  }
  _R14 = &_RSI->m_Velocity;
  __asm
  {
    vmovss  xmm3, dword ptr [r14]
    vmovss  xmm4, dword ptr [r14+4]
    vmovss  xmm5, dword ptr [r14+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vmovss  [rbp+2D0h+var_2BC], xmm0
    vsqrtss xmm9, xmm0, xmm0
    vmovss  [rsp+3D0h+var_370], xmm9
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm1, xmm9, xmm15, xmm0
    vmovss  [rbp+2D0h+var_310], xmm1
    vdivss  xmm2, xmm15, xmm1
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbp+2D0h+v0], xmm0
    vmulss  xmm1, xmm2, xmm4
    vmovss  dword ptr [rbp+2D0h+v0+4], xmm1
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+2D0h+v0+8], xmm0
    vmulss  xmm2, xmm6, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
    vmovss  dword ptr [rsi+788h], xmm2
    vmovss  xmm0, cs:?HFD_TAIL_ROTOR_POSITION@@3MA; float HFD_TAIL_ROTOR_POSITION
    vmulss  xmm1, xmm0, dword ptr [rsi+344h]
    vmovss  [rbp+2D0h+var_2C8], xmm1
    vmulss  xmm1, xmm0, dword ptr [rsi+348h]
    vmovss  [rbp+2D0h+var_2C4], xmm1
    vmulss  xmm0, xmm0, dword ptr [rsi+34Ch]
    vmovss  [rbp+2D0h+var_310], xmm0
  }
  _R13 = &_RSI->m_RotationInertiaQuat;
  QuatTransform(&_RSI->m_RotationInertiaQuat, &_RSI->m_forwardVector, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+2D0h+out]
    vsubss  xmm2, xmm0, dword ptr [rsi+344h]
    vmovss  dword ptr [rbp+2D0h+out], xmm2
    vmovss  xmm1, dword ptr [rbp+2D0h+out+4]
    vsubss  xmm3, xmm1, dword ptr [rsi+348h]
    vmovss  dword ptr [rbp+2D0h+out+4], xmm3
    vmovss  xmm0, dword ptr [rbp+2D0h+out+8]
    vsubss  xmm1, xmm0, dword ptr [rsi+34Ch]
    vdivss  xmm8, xmm15, xmm12
    vmulss  xmm5, xmm2, xmm8
    vmovss  dword ptr [rbp+2D0h+out], xmm5
    vmulss  xmm6, xmm3, xmm8
    vmovss  dword ptr [rbp+2D0h+out+4], xmm6
    vmulss  xmm7, xmm1, xmm8
    vmovss  dword ptr [rbp+2D0h+out+8], xmm7
    vmulss  xmm1, xmm6, dword ptr [rsi+348h]
    vmulss  xmm0, xmm5, dword ptr [rsi+344h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsi+34Ch]
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm3, xmm0, xmm13
    vmulss  xmm0, xmm3, dword ptr [rsi+344h]
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rbp+2D0h+out], xmm1
    vmulss  xmm0, xmm3, dword ptr [rsi+348h]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbp+2D0h+out+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rsi+34Ch]
    vaddss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbp+2D0h+out+8], xmm1
  }
  QuatTransform(&_RSI->m_RotationInertiaQuat, &_RSI->m_sideVector, &v2094);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+2D0h+var_220]
    vsubss  xmm2, xmm0, dword ptr [rsi+350h]
    vmovss  dword ptr [rbp+2D0h+var_220], xmm2
    vmovss  xmm1, dword ptr [rbp+2D0h+var_220+4]
    vsubss  xmm3, xmm1, dword ptr [rsi+354h]
    vmovss  dword ptr [rbp+2D0h+var_220+4], xmm3
    vmovss  xmm0, dword ptr [rbp+2D0h+var_220+8]
    vsubss  xmm1, xmm0, dword ptr [rsi+358h]
    vmulss  xmm5, xmm8, xmm2
    vmovss  dword ptr [rbp+2D0h+var_220], xmm5
    vmulss  xmm6, xmm8, xmm3
    vmovss  dword ptr [rbp+2D0h+var_220+4], xmm6
    vmulss  xmm7, xmm8, xmm1
    vmovss  dword ptr [rbp+2D0h+var_220+8], xmm7
    vmulss  xmm1, xmm6, dword ptr [rsi+354h]
    vmulss  xmm0, xmm5, dword ptr [rsi+350h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsi+358h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm4, xmm0, xmm13
    vmulss  xmm2, xmm4, dword ptr [rsi+350h]
    vaddss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbp+2D0h+var_220], xmm1
    vmulss  xmm0, xmm4, dword ptr [rsi+354h]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbp+2D0h+var_220+4], xmm1
    vmulss  xmm0, xmm4, dword ptr [rsi+358h]
    vaddss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbp+2D0h+var_220+8], xmm1
    vmovss  xmm2, cs:?HFD_TAIL_ROTOR_LOCAL_VELOCITY_DIRECTION@@3MA; float HFD_TAIL_ROTOR_LOCAL_VELOCITY_DIRECTION
    vmulss  xmm3, xmm2, cs:?HFD_TAIL_ROTOR_POSITION@@3MA; float HFD_TAIL_ROTOR_POSITION
    vmulss  xmm0, xmm3, dword ptr [rbp+2D0h+out]
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmovss  dword ptr [rbp+2D0h+a], xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+2D0h+out+4]
    vaddss  xmm0, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [rbp+2D0h+a+4], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbp+2D0h+out+8]
    vaddss  xmm2, xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbp+2D0h+a+8], xmm2
  }
  v104 = DVARINT_fd_helicopter_fbw_status;
  if ( !DVARINT_fd_helicopter_fbw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_status") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v104);
  unsignedInt = v104->current.unsignedInt;
  __asm { vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO }
  _RAX = BG_GetFlightDynamicsManager();
  _RDI = &_RSI->m_upVector;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vmulss  xmm4, xmm0, dword ptr [rdi+4]
    vmovss  xmm2, dword ptr [rax+0Ch]
    vmulss  xmm3, xmm2, dword ptr [rdi]
    vaddss  xmm5, xmm4, xmm3
    vmovss  xmm0, dword ptr [rax+14h]
    vmulss  xmm2, xmm0, dword ptr [rdi+8]
    vaddss  xmm0, xmm5, xmm2; value
    vmovaps xmm1, xmm6; expo
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3D0h+var_35C], xmm0
    vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO
  }
  BG_GetFlightDynamicsManager();
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+354h]
    vmulss  xmm5, xmm2, dword ptr [rax+10h]
    vmovss  xmm3, dword ptr [rsi+350h]
    vmulss  xmm4, xmm3, dword ptr [rax+0Ch]
    vaddss  xmm4, xmm5, xmm4
    vmovss  xmm2, dword ptr [rsi+358h]
    vmulss  xmm3, xmm2, dword ptr [rax+14h]
    vaddss  xmm0, xmm4, xmm3; value
    vmovaps xmm1, xmm6; expo
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rbp+2D0h+var_324], xmm0
    vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO
  }
  BG_GetFlightDynamicsManager();
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+348h]
    vmulss  xmm5, xmm2, dword ptr [rax+10h]
    vmovss  xmm3, dword ptr [rsi+344h]
    vmulss  xmm4, xmm3, dword ptr [rax+0Ch]
    vaddss  xmm4, xmm5, xmm4
    vmovss  xmm2, dword ptr [rsi+34Ch]
    vmulss  xmm3, xmm2, dword ptr [rax+14h]
    vaddss  xmm0, xmm4, xmm3; value
    vmovaps xmm1, xmm6; expo
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rbp+2D0h+var_2E4], xmm0
    vmovss  [rsp+3D0h+var_358], xmm15
  }
  if ( unsignedInt )
    __asm { vmovss  xmm7, dword ptr [rsi+944h] }
  else
    __asm { vmovaps xmm7, xmm15 }
  __asm { vmovss  [rbp+2D0h+var_338], xmm7 }
  _RSI->m_TailRotor.m_SmoothCollective = HFD_TAIL_ROTOR_SMOOTH_COLLECTIVE;
  _RSI->m_MainRotor.m_SmoothCollective = HFD_MAIN_ROTOR_SMOOTH_COLLECTIVE;
  LOBYTE(v2040) = 0;
  if ( _RSI->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vmovss  dword ptr [rsi+8C4h], xmm0
    }
  }
  if ( !_RSI->m_inputControlsEnabled )
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vmovss  dword ptr [rsi+8C4h], xmm0
    }
    _RSI->m_EnableFlyByWire = 0;
    _RSI->m_ManualControlTimer = 1.0;
    __asm
    {
      vmovaps xmm7, xmm15
      vmovss  [rbp+2D0h+var_338], xmm7
    }
  }
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+3D0h+var_360], xmm0
    vmovss  [rsp+3D0h+collectiveInput], xmm0
    vmovss  xmm0, cs:?HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR@@3MA; float HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR
    vmulss  xmm1, xmm0, dword ptr [rsi+590h]; distance
    vmovss  xmm6, cs:?HFD_FBW_GROUND_PRESSURE_GAIN_EXPO@@3MA; float HFD_FBW_GROUND_PRESSURE_GAIN_EXPO
    vmovaps xmm3, xmm12; dT
    vmovss  xmm2, cs:?HFD_BLADE_GROUND_EFFECT_MULTIPLIER@@3MA; liftMultiplier
  }
  *(double *)&_XMM0 = FlightDynamicsRotorSystem::UpdateGroundEffect(&_RSI->m_MainRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm1, xmm6; expo }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm3, xmm0
    vmulss  xmm0, xmm8, cs:__real@3dcccccd
    vmovss  xmm2, dword ptr [rsi+914h]
    vcomiss xmm0, xmm15
  }
  if ( !(v219 | v298) )
  {
    __asm
    {
      vdivss  xmm1, xmm15, xmm0
      vmulss  xmm0, xmm1, xmm2
      vsubss  xmm2, xmm2, xmm0
      vmulss  xmm1, xmm1, xmm3
      vaddss  xmm3, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  dword ptr [rsi+914h], xmm3
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( unsignedInt )
  {
    if ( _RSI->m_EnableFlyByWire && _RSI->m_inputControlsEnabled )
      goto LABEL_24;
    if ( unsignedInt == 2 )
      goto LABEL_24;
    __asm { vcomiss xmm7, xmm15 }
    if ( unsignedInt < 2 )
    {
LABEL_24:
      __asm
      {
        vsubss  xmm0, xmm8, cs:__real@41f00000
        vmulss  xmm0, xmm0, cs:__real@3d088889; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  [rbp+2D0h+var_304], xmm0 }
      LOBYTE(v2040) = 1;
      _RSI->m_MainRotor.m_SmoothCollective = 0;
      _RSI->m_TailRotor.m_SmoothCollective = 0;
      __asm
      {
        vmovss  [rsp+3D0h+aileronInput], xmm11
        vmovss  [rbp+2D0h+rudderInput], xmm11
        vmovss  [rsp+3D0h+elevatorInput], xmm11
      }
      HelicopterDynamics::TranslateUserControlInputsToFBW(_RSI, &aileronInput, &elevatorInput, &collectiveInput, rudderInput);
      __asm
      {
        vmovss  xmm9, [rsp+3D0h+collectiveInput]
        vmovss  [rsp+3D0h+var_360], xmm9
        vandps  xmm0, xmm9, xmm14
        vmovss  xmm2, [rsp+3D0h+aileronInput]
        vmovss  [rsp+3D0h+var_390], xmm2
        vmovss  xmm10, [rsp+3D0h+elevatorInput]
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( v219 | v298 )
      {
        __asm
        {
          vmulss  xmm1, xmm12, cs:?HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_DOWN@@3MA; float HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_DOWN
          vandps  xmm0, xmm2, xmm14
          vmulss  xmm5, xmm0, xmm12
          vsubss  xmm0, xmm15, xmm1
          vmulss  xmm2, xmm0, dword ptr [rsi+92Ch]
          vmulss  xmm1, xmm1, xmm9
          vaddss  xmm3, xmm2, xmm1
          vandps  xmm0, xmm10, xmm14
          vmulss  xmm4, xmm0, xmm12
          vsubss  xmm0, xmm15, xmm5
          vmulss  xmm2, xmm0, xmm3
          vmulss  xmm1, xmm5, xmm9
          vaddss  xmm3, xmm2, xmm1
          vsubss  xmm0, xmm15, xmm4
          vmulss  xmm2, xmm0, xmm3
          vmulss  xmm1, xmm4, xmm9
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm12, cs:?HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_UP@@3MA; float HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_UP
          vsubss  xmm0, xmm15, xmm1
          vmulss  xmm2, xmm0, dword ptr [rsi+92Ch]
          vmulss  xmm1, xmm1, xmm9
        }
      }
      __asm
      {
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsi+92Ch], xmm2
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_start_no_input_before_spoolup, "fd_helicopter_start_no_input_before_spoolup") )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+5B8h]
          vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
          vsubss  xmm1, xmm0, cs:?HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD@@3MA; float HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD
          vcomiss xmm2, xmm1
        }
      }
      __asm
      {
        vmovss  xmm1, [rbp+2D0h+rudderInput]
        vmovss  [rsp+3D0h+collectiveInput], xmm1
        vmovss  xmm1, dword ptr [r14]
        vmovss  xmm0, dword ptr [r14+4]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vmovss  [rbp+2D0h+var_2EC], xmm0
        vmovss  xmm5, dword ptr [rbp+2D0h+v0+4]
        vmulss  xmm1, xmm5, dword ptr [rsi+348h]
        vmovss  xmm4, dword ptr [rbp+2D0h+v0]
        vmulss  xmm0, xmm4, dword ptr [rsi+344h]
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm3, dword ptr [rbp+2D0h+v0+8]
        vmulss  xmm0, xmm3, dword ptr [rsi+34Ch]
        vaddss  xmm0, xmm2, xmm0
        vmovss  [rbp+2D0h+var_34C], xmm0
        vmulss  xmm1, xmm5, dword ptr [rsi+354h]
        vmulss  xmm0, xmm4, dword ptr [rsi+350h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsi+358h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  [rsp+3D0h+var_388], xmm0
      }
      _RAX = BG_GetFlightDynamicsManager();
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0Ch]
        vxorps  xmm6, xmm0, xmm13
        vmovss  xmm1, dword ptr [rax+10h]
        vxorps  xmm7, xmm1, xmm13
        vmovss  xmm0, dword ptr [rax+14h]
        vxorps  xmm8, xmm0, xmm13
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_speedLimiter_range, "fd_helicopter_altitude_speedLimiter_range");
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vaddss  xmm2, xmm1, dword ptr [rsi+22Ch]
        vmovss  dword ptr [rbp+2D0h+var_290], xmm2
        vmulss  xmm3, xmm7, xmm0
        vaddss  xmm1, xmm3, dword ptr [rsi+230h]
        vmovss  dword ptr [rbp+2D0h+var_290+4], xmm1
        vmulss  xmm0, xmm0, xmm8
        vaddss  xmm2, xmm0, dword ptr [rsi+234h]
        vmovss  dword ptr [rbp+2D0h+var_290+8], xmm2
        vmovss  [rbp+2D0h+var_140.fraction], xmm15
      }
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_altitude_speedLimiter, "fd_helicopter_altitude_speedLimiter");
      v219 = 0;
      if ( Bool_Internal_DebugName )
      {
        v219 = 0;
        if ( _RSI->m_playerControlled )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+2D0h+var_290]
            vmovsd  qword ptr [rbp+2D0h+cross], xmm0
          }
          cross.v[2] = v2087.v[2];
          __asm
          {
            vmovsd  xmm0, qword ptr [rsi+22Ch]
            vmovsd  qword ptr [rbp+2D0h+var_290], xmm0
          }
          v2087.v[2] = _RSI->m_centerOfMassWs.v[2];
          FD_Trace(_RSI->m_worldId, &v2110, (const vec3_t *)&v2087, &cross, NULL, 2097, NULL);
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+2D0h+var_140.fraction]
        vmovss  [rbp+2D0h+var_2E8], xmm0
        vmovss  xmm1, cs:?HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_FORWARD@@3MA; float HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_FORWARD
        vmovss  xmm8, cs:__real@ba83126f
        vmovss  xmm0, [rbp+2D0h+var_34C]
        vcomiss xmm0, xmm8
      }
      if ( v219 )
      {
        __asm { vcomiss xmm10, xmm8 }
        if ( v219 )
          __asm { vmovss  xmm1, cs:?HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_BACKWARD@@3MA; float HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_BACKWARD }
        else
          __asm { vmulss  xmm1, xmm1, cs:__real@3f000000 }
      }
      __asm
      {
        vandps  xmm0, xmm0, xmm14
        vdivss  xmm6, xmm15, xmm1
        vmovss  xmm7, [rsp+3D0h+var_370]
        vmulss  xmm0, xmm7, xmm0
        vmulss  xmm0, xmm0, xmm6; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm0, xmm15, xmm0
        vmovss  [rsp+3D0h+var_38C], xmm0
        vmulss  xmm0, xmm6, xmm7; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm0, xmm15, xmm0
        vmovss  [rsp+3D0h+var_378], xmm0
        vmovss  xmm1, [rsp+3D0h+var_388]
        vandps  xmm1, xmm1, xmm14
        vmulss  xmm0, xmm7, xmm1
        vdivss  xmm0, xmm0, cs:?HFD_FBW_GYRO_AILERON_SPEED_LIMIT@@3MA; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm0, xmm15, xmm0
        vmovss  [rbp+2D0h+var_340], xmm0
        vdivss  xmm0, xmm7, cs:?HFD_FBW_GYRO_AILERON_SPEED_LIMIT@@3MA; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm6, xmm15, xmm0
        vmovss  [rsp+3D0h+var_358], xmm6
        vmovss  xmm1, cs:?HFD_FBW_GYRO_AILERON_SPEED_LIMIT_EXPO@@3MA; expo
        vmovaps xmm0, xmm6; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  [rbp+2D0h+var_33C], xmm0
        vmovss  xmm1, cs:?HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_EXPO@@3MA; expo
        vmovss  xmm0, [rsp+3D0h+var_378]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovss  dword ptr [rbp+2D0h+cross], xmm0 }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") && _RSI->m_playerControlled )
      {
        __asm
        {
          vmovss  xmm2, [rbp+2D0h+var_34C]
          vcomiss xmm2, xmm8
          vmovss  xmm0, dword ptr [rsi+8D4h]
          vsubss  xmm0, xmm0, xmm12; val
          vmovss  dword ptr [rsi+8D4h], xmm0
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+8D4h], xmm0
          vcomiss xmm0, cs:__real@3a83126f
        }
        if ( !(v219 | v298) )
        {
          __asm
          {
            vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_REVERSE_LIMITER_VEC_EXPO@@3MA; expo
            vmovaps xmm0, xmm6; value
          }
          *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_REVERSE_LIMITER_VEC_EXPO@@3MA; expo
            vmovss  xmm7, [rsp+3D0h+var_38C]
            vmovaps xmm0, xmm7; value
          }
          *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm1, xmm6, xmm6
            vmulss  xmm0, xmm0, xmm0
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vmovss  xmm6, dword ptr [rsi+8D8h]
            vandps  xmm6, xmm6, xmm14
            vsubss  xmm0, xmm15, xmm2; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vaddss  xmm0, xmm0, xmm6; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm1, xmm0, dword ptr [rsi+8D4h]
            vsubss  xmm2, xmm15, xmm1
            vmulss  xmm10, xmm10, xmm2
            vmulss  xmm6, xmm2, [rsp+3D0h+var_390]
          }
          goto LABEL_42;
        }
      }
      else
      {
        _RSI->m_GyroFBWEnhancerBackwardsAccumulator = 0.0;
      }
      __asm
      {
        vmovss  xmm7, [rsp+3D0h+var_38C]
        vmovss  xmm6, [rsp+3D0h+var_390]
      }
LABEL_42:
      __asm
      {
        vmovss  dword ptr [rsi+3E0h], xmm6
        vmovss  xmm0, [rsp+3D0h+collectiveInput]; value
        vmovss  dword ptr [rsi+3D4h], xmm0
        vmovss  dword ptr [rsi+3E8h], xmm9
        vmovss  dword ptr [rsi+3D8h], xmm10
        vmovss  xmm1, cs:?HFD_CONTROL_INPUT_RUDDER_DEADZONE@@3MA; deadzone
      }
      *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovss  [rbp+2D0h+rudderInput], xmm0
        vmovss  xmm1, cs:?HFD_CONTROL_INPUT_ELEVATOR_DEADZONE@@3MA; deadzone
        vmovaps xmm0, xmm10; value
      }
      *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vsubss  xmm3, xmm15, [rsp+3D0h+var_358]
        vsubss  xmm1, xmm15, xmm3
        vmulss  xmm4, xmm1, cs:?HFD_CONTROL_INPUT_ELEVATOR_EXPO@@3MA; float HFD_CONTROL_INPUT_ELEVATOR_EXPO
        vmulss  xmm3, xmm3, cs:?HFD_CONTROL_INPUT_ELEVATOR_EXPO_SPEED@@3MA; float HFD_CONTROL_INPUT_ELEVATOR_EXPO_SPEED
        vaddss  xmm1, xmm4, xmm3; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm10, xmm0
        vmovss  xmm1, cs:?HFD_CONTROL_INPUT_AILERON_DEADZONE@@3MA; deadzone
        vmovaps xmm0, xmm6; value
      }
      *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vsubss  xmm3, xmm15, [rbp+2D0h+var_33C]
        vsubss  xmm1, xmm15, xmm3
        vmulss  xmm4, xmm1, cs:?HFD_CONTROL_INPUT_AILERON_EXPO@@3MA; float HFD_CONTROL_INPUT_AILERON_EXPO
        vmulss  xmm3, xmm3, cs:?HFD_CONTROL_INPUT_AILERON_EXPO_SPEED@@3MA; float HFD_CONTROL_INPUT_AILERON_EXPO_SPEED
        vaddss  xmm1, xmm4, xmm3; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm0, [rbp+2D0h+var_34C]
        vcomiss xmm0, xmm11
      }
      if ( v297 | v298 )
      {
        __asm
        {
          vxorps  xmm1, xmm7, xmm13
          vcmpltss xmm0, xmm10, xmm1
          vblendvps xmm0, xmm10, xmm1, xmm0
          vmovaps xmm10, xmm0
          vmovss  [rsp+3D0h+elevatorInput], xmm0
        }
      }
      else
      {
        __asm { vcomiss xmm10, xmm7 }
        if ( !(v297 | v298) )
          __asm { vmovaps xmm10, xmm7 }
      }
      __asm
      {
        vmovss  xmm0, [rsp+3D0h+var_388]
        vcomiss xmm0, xmm11
        vmovss  xmm0, [rbp+2D0h+var_340]
      }
      if ( v297 )
      {
        __asm { vcomiss xmm6, xmm0 }
        if ( !(v297 | v298) )
          __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm
        {
          vxorps  xmm1, xmm0, xmm13
          vcmpltss xmm0, xmm6, xmm1
          vblendvps xmm0, xmm6, xmm1, xmm0
          vmovaps xmm6, xmm0
          vmovss  [rsp+3D0h+aileronInput], xmm0
        }
      }
      __asm
      {
        vmulss  xmm0, xmm9, dword ptr [rsi+93Ch]; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm3, xmm10, cs:__real@3f400000
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, xmm10
        vmulss  xmm0, xmm3, xmm0
        vaddss  xmm10, xmm2, xmm0
        vmovss  [rsp+3D0h+var_364], xmm10
        vmulss  xmm3, xmm9, dword ptr [rsi+93Ch]
        vandps  xmm3, xmm3, xmm14
        vmulss  xmm1, xmm6, cs:__real@3f000000
        vsubss  xmm0, xmm15, xmm3
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm1, xmm1, xmm3
        vaddss  xmm6, xmm2, xmm1
        vxorps  xmm0, xmm9, xmm13; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm3, xmm6, cs:__real@3f400000
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm0, xmm3, xmm0
        vaddss  xmm1, xmm2, xmm0
        vmovss  [rsp+3D0h+var_390], xmm1
        vmovaps xmm5, xmm1
        vmovss  xmm2, [rbp+2D0h+var_324]
        vmulss  xmm0, xmm1, xmm2
        vcomiss xmm0, xmm11
      }
      if ( !(v219 | v298) )
      {
        __asm
        {
          vandps  xmm0, xmm2, xmm14
          vsubss  xmm0, xmm15, xmm0
          vmulss  xmm5, xmm0, xmm1
          vmovss  [rsp+3D0h+var_390], xmm5
        }
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+350h]
        vmovss  dword ptr [rbp+2D0h+var_200], xmm4
        vmovss  xmm3, dword ptr [rsi+354h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm15, xmm0
        vmovss  [rbp+2D0h+var_334], xmm1
        vdivss  xmm1, xmm15, xmm1
        vmulss  xmm0, xmm4, xmm1
        vmovss  dword ptr [rbp+2D0h+var_200], xmm0
        vmulss  xmm1, xmm1, xmm3
        vmovss  dword ptr [rbp+2D0h+var_200+4], xmm1
        vmovss  [rbp+2D0h+var_1F8], xmm11
        vmovss  xmm4, dword ptr [rsi+344h]
        vmovss  dword ptr [rbp+2D0h+var_1C0], xmm4
        vmovss  xmm3, dword ptr [rsi+348h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm15, xmm0
        vmovss  [rbp+2D0h+var_334], xmm1
        vdivss  xmm1, xmm15, xmm1
        vmulss  xmm0, xmm4, xmm1
        vmovss  dword ptr [rbp+2D0h+var_1C0], xmm0
        vmulss  xmm1, xmm1, xmm3
        vmovss  dword ptr [rbp+2D0h+var_1C0+4], xmm1
        vmovss  [rbp+2D0h+var_1B8], xmm11
        vmulss  xmm2, xmm10, xmm10
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm0, xmm1, xmm1
        vmovss  [rsp+3D0h+aileronInput], xmm0
        vmovss  xmm2, dword ptr [r14]
        vsubss  xmm5, xmm2, dword ptr [rsi+8FCh]
        vmovss  xmm0, dword ptr [r14+4]
        vsubss  xmm4, xmm0, dword ptr [rsi+900h]
        vmovss  xmm1, dword ptr [r14+8]
        vsubss  xmm3, xmm1, dword ptr [rsi+904h]
        vmovss  dword ptr [rsi+8FCh], xmm2
        vmovss  xmm0, dword ptr [rsi+2E8h]
        vmovss  dword ptr [rsi+900h], xmm0
        vmovss  xmm1, dword ptr [rsi+2ECh]
        vmovss  dword ptr [rsi+904h], xmm1
        vdivss  xmm7, xmm15, xmm12
        vmulss  xmm0, xmm7, cs:?HFD_GYRO_ACCELERATION_PID_FACTOR@@3MA; float HFD_GYRO_ACCELERATION_PID_FACTOR
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm5, xmm0, xmm3
        vaddss  xmm10, xmm2, dword ptr [r14]
        vmovss  [rbp+2D0h+var_334], xmm10
        vaddss  xmm4, xmm1, dword ptr [r14+4]
        vmovss  [rbp+2D0h+var_2DC], xmm4
        vaddss  xmm6, xmm5, dword ptr [r14+8]
        vmovss  [rsp+3D0h+var_374], xmm6
        vmulss  xmm2, xmm10, dword ptr [rbp+2D0h+var_200]
        vmulss  xmm1, xmm4, dword ptr [rbp+2D0h+var_200+4]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, [rbp+2D0h+var_1F8]
        vaddss  xmm0, xmm3, xmm0
        vmovss  [rbp+2D0h+var_2C0], xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+348h]
        vmulss  xmm0, xmm10, dword ptr [rsi+344h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rsi+34Ch]
        vaddss  xmm0, xmm2, xmm1
        vmovss  [rbp+2D0h+var_2FC], xmm0
      }
      BG_GetFlightDynamicsManager();
      __asm
      {
        vmovss  xmm0, [rbp+2D0h+var_2DC]
        vmulss  xmm1, xmm0, dword ptr [rax+10h]
        vmulss  xmm0, xmm10, dword ptr [rax+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  [rbp+2D0h+var_350], xmm0
        vmovss  xmm3, cs:?HFD_GYRO_VELOCITY_PID_FACTOR@@3MA; float HFD_GYRO_VELOCITY_PID_FACTOR
        vmulss  xmm0, xmm3, dword ptr [r14]
        vaddss  xmm0, xmm0, dword ptr [rsi+22Ch]
        vmovss  [rbp+2D0h+var_2D4], xmm0
        vmulss  xmm1, xmm3, dword ptr [r14+4]
        vaddss  xmm0, xmm1, dword ptr [rsi+230h]
        vmovss  [rbp+2D0h+var_320], xmm0
        vmulss  xmm0, xmm3, dword ptr [r14+8]
        vaddss  xmm0, xmm0, dword ptr [rsi+234h]
        vmovss  [rbp+2D0h+var_308], xmm0
      }
      QuatTransform(&_RSI->m_RotationInertiaQuat, &_RSI->m_forwardVector, &v2104);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+1B4h]
        vmulss  xmm3, xmm0, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm2, xmm1, dword ptr [rsi+1B0h]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rsi+1B8h]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm2, xmm4, xmm1
        vmovss  [rsp+3D0h+var_388], xmm2
      }
      QuatTransform(&_RSI->m_RotationInertiaQuat, &_RSI->m_upVector, &v2104);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+var_1A0]
        vsubss  xmm2, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rbp+2D0h+var_1A0+4]
        vsubss  xmm4, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rbp+2D0h+var_1A0+8]
        vsubss  xmm3, xmm0, dword ptr [rdi+8]
        vmulss  xmm1, xmm7, cs:?HFD_GYRO_ANGULAR_CYCLIC_VELOCITY_FACTOR@@3MA; float HFD_GYRO_ANGULAR_CYCLIC_VELOCITY_FACTOR
        vmulss  xmm2, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm5, xmm3, xmm1
        vaddss  xmm7, xmm2, dword ptr [rdi]
        vmovss  dword ptr [rbp+2D0h+v1], xmm7
        vaddss  xmm6, xmm0, dword ptr [rsi+360h]
        vmovss  dword ptr [rbp+2D0h+v1+4], xmm6
        vaddss  xmm4, xmm5, dword ptr [rsi+364h]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vmovss  xmm10, cs:__real@80000000
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm15, xmm0
        vmovss  dword ptr [rbp+2D0h+var_330], xmm1
        vdivss  xmm2, xmm15, xmm1
        vmulss  xmm0, xmm7, xmm2
        vmovss  dword ptr [rbp+2D0h+v1], xmm0
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+2D0h+v1+4], xmm1
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbp+2D0h+v1+8], xmm0
      }
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      Vec3Cross(&FlightDynamicsManager->m_UpAxis, &v1, (vec3_t *)&v2087);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+2D0h+var_290+4]
        vmulss  xmm1, xmm5, dword ptr [rsi+348h]
        vmovss  xmm3, dword ptr [rbp+2D0h+var_290]
        vmulss  xmm0, xmm3, dword ptr [rsi+344h]
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm4, dword ptr [rbp+2D0h+var_290+8]
        vmulss  xmm0, xmm4, dword ptr [rsi+34Ch]
        vaddss  xmm0, xmm2, xmm0
        vmovss  [rbp+2D0h+var_2CC], xmm0
        vmulss  xmm1, xmm5, dword ptr [rsi+354h]
        vmulss  xmm0, xmm3, dword ptr [rsi+350h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+358h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  [rbp+2D0h+var_2F8], xmm0
        vmovss  xmm6, [rsp+3D0h+var_388]
        vmulss  xmm0, xmm6, dword ptr [rsi+344h]
        vaddss  xmm5, xmm0, dword ptr [rsi+350h]
        vmulss  xmm1, xmm6, dword ptr [rsi+348h]
        vaddss  xmm4, xmm1, dword ptr [rsi+354h]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm15, xmm0
        vmovss  dword ptr [rbp+2D0h+var_330], xmm1
        vdivss  xmm0, xmm15, xmm1
        vmulss  xmm1, xmm5, xmm0
        vmovss  [rbp+2D0h+var_2F4], xmm1
        vmulss  xmm0, xmm4, xmm0
        vmovss  [rbp+2D0h+var_2F0], xmm0
        vmovss  xmm3, dword ptr [rsi+344h]
        vmovss  dword ptr [rbp+2D0h+var_250], xmm3
        vmovss  xmm4, dword ptr [rsi+348h]
        vmovss  dword ptr [rbp+2D0h+var_250+4], xmm4
        vmulss  xmm2, xmm6, cs:?HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER@@3MA; float HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER
        vmulss  xmm1, xmm2, dword ptr [rsi+350h]
        vaddss  xmm6, xmm3, xmm1
        vmovss  dword ptr [rbp+2D0h+var_250], xmm6
        vmulss  xmm0, xmm2, dword ptr [rsi+354h]
        vaddss  xmm5, xmm4, xmm0
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm15, xmm0
        vmovss  dword ptr [rbp+2D0h+var_330], xmm1
        vdivss  xmm1, xmm15, xmm1
        vmulss  xmm0, xmm6, xmm1
        vmovss  dword ptr [rbp+2D0h+var_250], xmm0
        vmulss  xmm1, xmm5, xmm1
        vmovss  dword ptr [rbp+2D0h+var_250+4], xmm1
        vmovss  dword ptr [rbp+2D0h+var_250+8], xmm11
      }
      if ( _RSI->m_playerControlled && Physics_IsPredictiveWorld(_RSI->m_worldId) && Sys_IsMainThread() && DEBUG_DRAW_FBW_LINES )
      {
        __asm
        {
          vmovss  xmm6, cs:__real@43fa0000
          vmulss  xmm0, xmm6, dword ptr [rsi+4ECh]
          vaddss  xmm1, xmm0, dword ptr [rcx]
          vmovss  dword ptr [rbp+2D0h+end], xmm1
          vmulss  xmm0, xmm6, dword ptr [rsi+4F0h]
          vaddss  xmm1, xmm0, dword ptr [rcx+4]
          vmovss  dword ptr [rbp+2D0h+end+4], xmm1
          vmulss  xmm0, xmm6, dword ptr [rsi+4F4h]
          vaddss  xmm1, xmm0, dword ptr [rcx+8]
          vmovss  dword ptr [rbp+2D0h+end+8], xmm1
        }
        FD_DebugLine(&_RSI->m_centerOfMassWs, &end, &colorRed, 0, DEBUG_LINE_TIME);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+2D0h+var_250]
          vaddss  xmm2, xmm1, dword ptr [rcx]
          vmovss  dword ptr [rbp+2D0h+end], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+2D0h+var_250+4]
          vaddss  xmm1, xmm1, dword ptr [rcx+4]
          vmovss  dword ptr [rbp+2D0h+end+4], xmm1
          vmulss  xmm2, xmm6, dword ptr [rbp+2D0h+var_250+8]
          vaddss  xmm1, xmm2, dword ptr [rcx+8]
          vmovss  dword ptr [rbp+2D0h+end+8], xmm1
        }
        FD_DebugLine(&_RSI->m_centerOfMassWs, &end, &colorBlue, 0, DEBUG_LINE_TIME);
      }
      v495 = !_RSI->m_GyroRudderForwardVectorSet;
      if ( !_RSI->m_GyroRudderForwardVectorSet )
      {
        _RSI->m_GyroRudderForwardVectorSet = 1;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2D0h+var_250]
          vmovss  dword ptr [rsi+4ECh], xmm0
          vmovss  xmm1, dword ptr [rbp+2D0h+var_250+4]
          vmovss  dword ptr [rsi+4F0h], xmm1
          vmovss  xmm0, dword ptr [rbp+2D0h+var_250+8]
          vmovss  dword ptr [rsi+4F4h], xmm0
        }
      }
      __asm
      {
        vandps  xmm0, xmm8, xmm14
        vmovss  [rsp+3D0h+collectiveInput], xmm0
      }
      _RAX = &_RSI->m_GyroRudderStrength;
      __asm { vcomiss xmm0, cs:__real@3a83126f }
      if ( !v495 )
      {
        p_m_GyroRudderStrength = (HelicopterDynamics *)&_RSI->m_GyroRudderStrength;
        __asm
        {
          vmovss  xmm2, dword ptr [rax]
          vsubss  xmm0, xmm2, xmm8
          vandps  xmm0, xmm0, xmm14
          vcomiss xmm0, xmm15
        }
      }
      p_m_GyroRudderStrength = (HelicopterDynamics *)&_RSI->m_GyroRudderStrength;
      __asm
      {
        vmulss  xmm1, xmm12, cs:?HFD_FBW_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY@@3MA; float HFD_FBW_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY
        vsubss  xmm1, xmm15, xmm1
        vmulss  xmm0, xmm1, dword ptr [rax]
        vmovss  dword ptr [rax], xmm0
      }
      Vec3Cross(&_RSI->m_GyroRudderForwardVector, &v2091, (vec3_t *)&v2087);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+var_290+4]
        vmulss  xmm3, xmm0, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rbp+2D0h+var_290]
        vmulss  xmm2, xmm1, dword ptr [rdi]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+2D0h+var_290+8]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm0, xmm2, cs:?HFD_GYRO_TAIL_LOCK_STRENGTH@@3MA; value
        vmovss  xmm1, cs:?HFD_GYRO_TAIL_LOCK_STRENGTH_EXPO@@3MA; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm5, xmm0
        vmovss  [rsp+3D0h+var_368], xmm0
        vsubss  xmm0, xmm15, [rsp+3D0h+var_38C]
        vsubss  xmm1, xmm15, xmm0
        vmovss  [rbp+2D0h+var_30C], xmm1
        vmulss  xmm2, xmm1, cs:?HFD_FBW_GYRO_RUDDER_RATE_MANUAL@@3MA; float HFD_FBW_GYRO_RUDDER_RATE_MANUAL
        vmulss  xmm1, xmm0, cs:?HFD_FBW_GYRO_RUDDER_RATE_MANUAL_SPEED@@3MA; float HFD_FBW_GYRO_RUDDER_RATE_MANUAL_SPEED
        vaddss  xmm3, xmm2, xmm1
      }
      _RAX = (__int64)p_m_GyroRudderStrength;
      __asm
      {
        vmovss  xmm7, dword ptr [rax]
        vmulss  xmm4, xmm3, xmm7
        vandps  xmm4, xmm4, xmm14
        vsubss  xmm0, xmm15, xmm4
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm1, xmm4, xmm7
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm3, xmm8, cs:?HFD_GYRO_TAIL_MAX_TURN_RATE@@3MA; float HFD_GYRO_TAIL_MAX_TURN_RATE
        vmovss  xmm1, cs:?HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER@@3MA; float HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER
        vmulss  xmm2, xmm1, [rsp+3D0h+var_388]
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm3, xmm0, cs:?HFD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH@@3MA; float HFD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH
        vmulss  xmm1, xmm3, xmm12
        vmovss  xmm6, dword ptr [rsi+940h]
        vandps  xmm7, xmm7, xmm14
        vsubss  xmm0, xmm15, xmm7
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm1, xmm1, xmm7
        vsubss  xmm0, xmm2, xmm1; val
        vmovaps xmm2, xmm15; max
        vmovss  xmm10, cs:__real@bf800000
        vmovaps xmm1, xmm10; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm15, xmm6
        vmulss  xmm4, xmm1, xmm0
        vmovss  xmm2, [rbp+2D0h+var_304]
        vsubss  xmm1, xmm15, xmm2
        vmulss  xmm2, xmm2, cs:?HFD_FBW_RESPOSNE_RATE_RUDDER@@3MA; float HFD_FBW_RESPOSNE_RATE_RUDDER
        vmulss  xmm1, xmm1, cs:?HFD_FBW_RESPOSNE_RATE_RUDDER_LOW_HZ@@3MA; float HFD_FBW_RESPOSNE_RATE_RUDDER_LOW_HZ
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm3, xmm2, xmm12
        vsubss  xmm0, xmm15, xmm3
        vmulss  xmm2, xmm0, dword ptr [rsi+47Ch]
        vmulss  xmm1, xmm4, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsi+47Ch], xmm2
        vmovss  xmm1, [rsp+3D0h+var_368]
        vcomiss xmm1, xmm11
      }
      if ( v219 )
        __asm { vcmpltss xmm0, xmm11, xmm8 }
      else
        __asm { vcmpltss xmm0, xmm8, xmm11 }
      __asm
      {
        vblendvps xmm0, xmm11, xmm1, xmm0
        vmovss  [rsp+3D0h+var_388], xmm0
        vmovss  xmm6, cs:?HFD_FBW_GYRO_RUDDER_VECTOR_DELTA_MAX@@3MA; float HFD_FBW_GYRO_RUDDER_VECTOR_DELTA_MAX
        vmovss  xmm0, [rsp+3D0h+var_388]
        vandps  xmm0, xmm0, xmm14
        vsubss  xmm0, xmm15, xmm0; value
        vmovaps xmm1, xmm6; deadzone
      }
      *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, cs:?HFD_FBW_GYRO_RUDDER_SPEEDLIMITER_EXPO@@3MA; expo
        vmovss  xmm0, [rsp+3D0h+var_38C]; value
      }
      FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm0, xmm15, xmm0
        vmovss  [rbp+2D0h+var_2E0], xmm0
        vsubss  xmm1, xmm15, xmm0
        vmovss  [rbp+2D0h+var_2D8], xmm1
        vmulss  xmm0, xmm6, xmm0
        vaddss  xmm3, xmm0, xmm1
        vmovss  xmm0, [rbp+2D0h+var_30C]
        vmulss  xmm1, xmm0, cs:?HFD_FBW_GYRO_RUDDER_RATE@@3MA; float HFD_FBW_GYRO_RUDDER_RATE
        vsubss  xmm0, xmm15, [rsp+3D0h+var_38C]
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_RUDDER_RATE_AT_SPEED@@3MA; float HFD_FBW_GYRO_RUDDER_RATE_AT_SPEED
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm4, [rsp+3D0h+var_370]
        vmulss  xmm4, xmm4, cs:?HFD_FBW_GYRO_AIL_TO_RUDDER_SPEED@@3MA; float HFD_FBW_GYRO_AIL_TO_RUDDER_SPEED
        vmulss  xmm0, xmm3, xmm8
        vmulss  xmm3, xmm0, xmm2
        vmovss  xmm1, cs:?HFD_FBW_GYRO_AIL_TO_RUDDER_RATE@@3MA; float HFD_FBW_GYRO_AIL_TO_RUDDER_RATE
        vmulss  xmm2, xmm1, [rsp+3D0h+var_390]
        vmulss  xmm0, xmm2, xmm4
        vaddss  xmm3, xmm3, xmm0
        vsubss  xmm1, xmm15, dword ptr [rsi+940h]
        vmulss  xmm7, xmm1, xmm3
        vandps  xmm2, xmm7, xmm14
        vmulss  xmm1, xmm2, cs:?HFD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR@@3MA; float HFD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR
        vmulss  xmm0, xmm1, xmm12; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, dword ptr [rbp+2D0h+var_250]
        vsubss  xmm2, xmm1, dword ptr [rsi+4ECh]
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm4, xmm3, dword ptr [rsi+4ECh]
        vmovss  dword ptr [rsi+4ECh], xmm4
        vmovss  xmm1, dword ptr [rbp+2D0h+var_250+4]
        vsubss  xmm2, xmm1, dword ptr [rsi+4F0h]
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm4, xmm3, dword ptr [rsi+4F0h]
        vmovss  dword ptr [rsi+4F0h], xmm4
        vmovss  xmm0, dword ptr [rbp+2D0h+var_250+8]
        vsubss  xmm1, xmm0, dword ptr [rsi+4F4h]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsi+4F4h]
        vmovss  dword ptr [rsi+4F4h], xmm3
      }
      Vec3Normalize(&_RSI->m_GyroRudderForwardVector);
      v609 = BG_GetFlightDynamicsManager();
      Vec3Cross(&v609->m_UpAxis, &_RSI->m_GyroRudderForwardVector, (vec3_t *)&v2087);
      Vec3Normalize((vec3_t *)&v2087);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+940h]
        vsubss  xmm0, xmm15, xmm1
        vmulss  xmm2, xmm0, xmm7
        vmulss  xmm1, xmm1, xmm8
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm3, xmm2, xmm12
        vmulss  xmm0, xmm3, dword ptr [rbp+2D0h+var_290]
        vaddss  xmm1, xmm0, dword ptr [rsi+4ECh]
        vmovss  dword ptr [rsi+4ECh], xmm1
        vmulss  xmm2, xmm3, dword ptr [rbp+2D0h+var_290+4]
        vaddss  xmm0, xmm2, dword ptr [rsi+4F0h]
        vmovss  dword ptr [rsi+4F0h], xmm0
      }
      _RSI->m_GyroRudderForwardVector.v[2] = 0.0;
      Vec3Normalize(&_RSI->m_GyroRudderForwardVector);
      _RSI->m_FlyByWireNormalizedVector.v[0] = _RSI->m_GyroRudderForwardVector.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4F0h]
        vmovss  dword ptr [rsi+4CCh], xmm0
        vmovss  xmm1, dword ptr [rsi+4F4h]
        vmovss  dword ptr [rsi+4D0h], xmm1
      }
      _RAX = (__int64)p_m_GyroRudderStrength;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vandps  xmm0, xmm0, xmm14
        vmovss  xmm1, [rsp+3D0h+var_390]
        vandps  xmm1, xmm1, xmm14
        vmovss  [rbp+2D0h+var_344], xmm1
        vmovss  xmm8, [rsp+3D0h+var_364]
        vandps  xmm2, xmm8, xmm14
        vmovss  [rsp+3D0h+elevatorInput], xmm2
        vaddss  xmm0, xmm1, xmm0
        vaddss  xmm0, xmm0, xmm2; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm6, xmm15, [rsp+3D0h+var_38C]
        vmulss  xmm3, xmm0, xmm6
        vsubss  xmm1, xmm15, xmm3
        vmulss  xmm2, xmm1, cs:?HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE@@3MA; float HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE
        vmulss  xmm0, xmm3, cs:?HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE_SPEED@@3MA; float HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE_SPEED
        vaddss  xmm7, xmm2, xmm0
        vmovss  [rbp+2D0h+var_300], xmm7
      }
      _RAX = (__int64)p_m_GyroRudderStrength;
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vandps  xmm1, xmm1, xmm14
        vaddss  xmm0, xmm1, [rbp+2D0h+var_344]
        vaddss  xmm0, xmm0, [rsp+3D0h+elevatorInput]; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm3, xmm0, xmm6
        vsubss  xmm1, xmm15, xmm3
        vmulss  xmm2, xmm1, cs:?HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE@@3MA; float HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE
        vmulss  xmm0, xmm3, cs:?HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE_SPEED@@3MA; float HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE_SPEED
        vaddss  xmm0, xmm2, xmm0
        vmovss  [rsp+3D0h+var_368], xmm0
      }
      if ( _RSI->m_GyroAltitudeSet )
      {
        __asm
        {
          vmulss  xmm1, xmm12, cs:?HFD_GYRO_ALTITUDE_LOCK_STRENGTH_RATE@@3MA; float HFD_GYRO_ALTITUDE_LOCK_STRENGTH_RATE
          vaddss  xmm0, xmm1, dword ptr [rsi+90Ch]; val
          vmovss  dword ptr [rsi+90Ch], xmm0
          vmovss  xmm2, cs:?HFD_GYRO_ALTITUDE_LOCK_STRENGTH@@3MA; float HFD_GYRO_ALTITUDE_LOCK_STRENGTH
          vandps  xmm2, xmm2, xmm14; max
          vxorps  xmm1, xmm2, xmm13; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+90Ch], xmm0
          vdivss  xmm0, xmm0, cs:?HFD_GYRO_ALTITUDE_LOCK_STRENGTH@@3MA; float HFD_GYRO_ALTITUDE_LOCK_STRENGTH
          vmovss  [rsp+3D0h+var_388], xmm0
          vmovss  xmm0, cs:?HFD_HFD_GYRO_ALTITUDE_COLLECTIVE_FACTOR_SCALE@@3MA; float HFD_HFD_GYRO_ALTITUDE_COLLECTIVE_FACTOR_SCALE
          vmulss  xmm0, xmm0, [rbp+2D0h+var_350]
          vandps  xmm0, xmm0, xmm14; val
          vmovss  xmm2, cs:__real@42fe0000; max
          vmovss  xmm1, cs:?HFD_GYRO_ALTITUDE_COLLECTIVE_FACTOR_MIN@@3MA; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
        __asm
        {
          vsubss  xmm2, xmm15, xmm6
          vmulss  xmm4, xmm2, dword ptr [rax]
          vmulss  xmm3, xmm6, [rbp+2D0h+var_308]
          vaddss  xmm5, xmm4, xmm3
          vmovss  xmm2, dword ptr [rsi+910h]
          vsubss  xmm4, xmm2, xmm5
          vmulss  xmm3, xmm4, cs:?HFD_GYRO_ALTITUDE_DIFFERENCE_FACTOR@@3MA; float HFD_GYRO_ALTITUDE_DIFFERENCE_FACTOR
          vmulss  xmm0, xmm6, [rsp+3D0h+var_374]
          vaddss  xmm2, xmm0, xmm3
          vmulss  xmm6, xmm2, dword ptr [rsi+90Ch]
          vmovaps xmm2, xmm7; max
          vmovss  xmm1, [rsp+3D0h+var_368]; min
          vmovaps xmm0, xmm6; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  [rbp+2D0h+var_350], xmm0
          vmovss  xmm1, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_EXPO@@3MA; expo
          vmovss  xmm0, [rsp+3D0h+var_35C]; value
        }
        *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm0, xmm15, xmm0
          vmovss  [rsp+3D0h+var_368], xmm0
        }
        _RBX = vec3_t::operator[](&_RSI->m_Velocity, 2);
        vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vaddss  xmm3, xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rsi+910h]
          vsubss  xmm2, xmm1, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_THRESHOLD@@3MA; float HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_THRESHOLD
          vcomiss xmm3, xmm2
        }
        if ( v682 )
          goto LABEL_69;
        __asm { vcomiss xmm6, xmm7 }
        if ( v682 | v683 )
          goto LABEL_68;
        __asm
        {
          vmovss  xmm0, [rsp+3D0h+aileronInput]
          vcomiss xmm0, cs:__real@3c23d70a
        }
        if ( v682 | v683 )
        {
LABEL_68:
          __asm
          {
            vmulss  xmm1, xmm12, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN@@3MA; float HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN
            vsubss  xmm1, xmm15, xmm1
            vmulss  xmm0, xmm1, dword ptr [rsi+93Ch]
            vmovss  dword ptr [rsi+93Ch], xmm0
          }
        }
        else
        {
LABEL_69:
          __asm
          {
            vmulss  xmm4, xmm12, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP@@3MA; float HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP
            vmovss  xmm1, dword ptr [rsi+93Ch]
            vmulss  xmm2, xmm1, dword ptr [rsi+90Ch]
            vdivss  xmm3, xmm2, cs:?HFD_GYRO_ALTITUDE_LOCK_STRENGTH@@3MA; float HFD_GYRO_ALTITUDE_LOCK_STRENGTH
            vsubss  xmm0, xmm15, xmm4
            vmulss  xmm1, xmm0, xmm3
            vaddss  xmm2, xmm1, xmm4
            vmulss  xmm3, xmm2, [rsp+3D0h+var_368]
            vmovss  dword ptr [rsi+93Ch], xmm3
          }
        }
        __asm { vmovss  xmm6, dword ptr [rsi+910h] }
        vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
        __asm
        {
          vsubss  xmm0, xmm15, [rsp+3D0h+var_388]
          vmulss  xmm2, xmm0, dword ptr [rax]
          vmulss  xmm1, xmm6, [rsp+3D0h+var_388]
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsi+910h], xmm2
          vmovss  xmm0, cs:?HFD_FBW_RESPOSNE_RATE_COLLECTIVE@@3MA; float HFD_FBW_RESPOSNE_RATE_COLLECTIVE
          vmulss  xmm3, xmm0, [rbp+2D0h+var_304]
          vsubss  xmm0, xmm15, [rbp+2D0h+var_304]
          vmulss  xmm2, xmm0, cs:?HFD_FBW_RESPOSNE_RATE_COLLECTIVE_LOW_HZ@@3MA; float HFD_FBW_RESPOSNE_RATE_COLLECTIVE_LOW_HZ
          vaddss  xmm0, xmm3, xmm2
          vmulss  xmm4, xmm0, xmm12
          vsubss  xmm0, xmm15, xmm4
          vmulss  xmm2, xmm0, dword ptr [rsi+490h]
          vmulss  xmm1, xmm4, [rbp+2D0h+var_350]
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsi+490h], xmm2
          vandps  xmm7, xmm9, xmm14
          vmovss  [rsp+3D0h+var_388], xmm7
          vcomiss xmm7, cs:?HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD@@3MA; float HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD
        }
      }
      else
      {
        __asm
        {
          vandps  xmm0, xmm9, xmm14
          vmovss  [rsp+3D0h+var_388], xmm0
          vcomiss xmm0, cs:?HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD@@3MA; float HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD
        }
        if ( _RSI->m_GyroAltitudeSet )
        {
          vec3_t::operator[](&_RSI->m_linearVelocityWs, 2);
          __asm
          {
            vmovss  xmm0, cs:?HFD_FBW_GROUND_PRESSURE_SPEED_FACTOR@@3MA; float HFD_FBW_GROUND_PRESSURE_SPEED_FACTOR
            vmulss  xmm3, xmm0, dword ptr [rax]
            vmovss  xmm1, dword ptr [rsi+914h]
            vdivss  xmm2, xmm1, cs:?HFD_FBW_GROUND_PRESSURE_GAIN_THRESHOLD@@3MA; float HFD_FBW_GROUND_PRESSURE_GAIN_THRESHOLD
            vmulss  xmm0, xmm3, xmm2
            vxorps  xmm0, xmm0, xmm13; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovss  xmm1, cs:?HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD@@3MA; float HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD
            vmulss  xmm1, xmm1, cs:__real@3f0ccccd; deadzone
            vmovaps xmm0, xmm9; value
          }
          *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vmovaps xmm7, xmm0
            vsubss  xmm6, xmm6, xmm15
            vmulss  xmm1, xmm6, cs:?HFD_GYRO_ALTITUDE_MAX_DESCENT_RATE@@3MA; min
            vmovss  xmm2, cs:?HFD_GYRO_ALTITUDE_MAX_CLIMB_RATE@@3MA; max
            vmulss  xmm0, xmm0, xmm2; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm8, xmm0
            vmulss  xmm0, xmm7, xmm6; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vsubss  xmm1, xmm15, xmm0
            vmulss  xmm2, xmm1, cs:?HFD_GYRO_ALTITUDE_MAX_CHANGE_RATE_STRENGTH@@3MA; float HFD_GYRO_ALTITUDE_MAX_CHANGE_RATE_STRENGTH
            vsubss  xmm0, xmm8, [rbp+2D0h+var_350]
            vmulss  xmm2, xmm0, xmm2
            vmulss  xmm7, xmm2, xmm12
            vmovss  dword ptr [rsi+490h], xmm7
            vmovss  xmm0, cs:__real@3f733333
            vcomiss xmm0, dword ptr [rsi+940h]
          }
          if ( v738 | v739 )
          {
            __asm
            {
              vmovaps xmm2, xmm15; max
              vmovss  xmm1, cs:?HFD_FBW_LOWEST_COLLECTIVE_LANDED@@3MA; min
              vmovaps xmm0, xmm7; val
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovss  dword ptr [rsi+490h], xmm0 }
          }
          __asm
          {
            vmovss  xmm6, [rbp+2D0h+var_300]
            vcomiss xmm7, xmm6
          }
          if ( v738 | v739 )
          {
            __asm { vcomiss xmm9, cs:__real@3dcccccd }
            if ( v738 )
            {
              __asm
              {
                vmulss  xmm1, xmm12, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN@@3MA; float HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN
                vsubss  xmm1, xmm15, xmm1
                vmulss  xmm0, xmm1, dword ptr [rsi+93Ch]
                vmovss  dword ptr [rsi+93Ch], xmm0
              }
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm1, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_EXPO@@3MA; expo
              vmovss  xmm0, [rsp+3D0h+var_35C]; value
            }
            *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vmovaps xmm2, xmm15; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmulss  xmm3, xmm12, cs:?HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP_CHANGE@@3MA; float HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP_CHANGE
              vsubss  xmm2, xmm15, xmm0
              vmulss  xmm4, xmm3, xmm2
              vmulss  xmm5, xmm0, xmm12
              vsubss  xmm0, xmm15, xmm4
              vmulss  xmm1, xmm0, dword ptr [rsi+93Ch]
              vaddss  xmm2, xmm1, xmm4
              vsubss  xmm0, xmm15, xmm5
              vmulss  xmm1, xmm2, xmm0
              vmovss  dword ptr [rsi+93Ch], xmm1
            }
          }
          __asm
          {
            vmovaps xmm2, xmm6; max
            vmovss  xmm1, [rsp+3D0h+var_368]; min
            vmovss  xmm0, dword ptr [rsi+490h]; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  dword ptr [rsi+490h], xmm0
            vmovss  xmm8, [rsp+3D0h+var_364]
          }
        }
        else
        {
          _RSI->m_EmergencyLevelForCollective = 0.0;
          __asm
          {
            vmovss  xmm0, [rbp+2D0h+var_308]
            vmovss  dword ptr [rsi+910h], xmm0
          }
          _RSI->m_GyroAltiudeStrength = 0.0;
          _RSI->m_GyroAltitudeSet = 1;
        }
      }
      __asm
      {
        vmovss  xmm0, [rsp+3D0h+var_370]
        vmulss  xmm3, xmm0, cs:?HFD_FBW_GYRO_CYCLIC_SPEED_RATE@@3MA; float HFD_FBW_GYRO_CYCLIC_SPEED_RATE
        vsubss  xmm2, xmm15, xmm3
        vmulss  xmm1, xmm3, cs:?HFD_FBW_GYRO_CYCLIC_SPEED_FACTOR@@3MA; float HFD_FBW_GYRO_CYCLIC_SPEED_FACTOR
        vaddss  xmm4, xmm1, xmm2
        vmulss  xmm1, xmm3, cs:?HFD_FBW_GYRO_CYCLIC_SPEED_ELEV_FACTOR@@3MA; float HFD_FBW_GYRO_CYCLIC_SPEED_ELEV_FACTOR
        vaddss  xmm5, xmm1, xmm2
        vmovss  xmm0, cs:?HFD_FBW_GYRO_CYCLIC_AIL_RATE@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_RATE
        vmulss  xmm2, xmm0, [rsp+3D0h+var_390]
        vsubss  xmm1, xmm15, dword ptr [rsi+914h]
        vmulss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm4
        vmulss  xmm3, xmm2, xmm12
        vaddss  xmm1, xmm3, dword ptr [rsi+8CCh]
        vmovss  dword ptr [rsi+8CCh], xmm1
        vmulss  xmm2, xmm8, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE
        vsubss  xmm1, xmm15, dword ptr [rsi+914h]
        vmulss  xmm0, xmm2, xmm1
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm3, xmm2, xmm12
        vaddss  xmm1, xmm3, dword ptr [rsi+8D0h]
        vmovss  dword ptr [rsi+8D0h], xmm1
        vmovaps xmm2, xmm12; dT
        vmovss  xmm1, cs:?HFD_FBW_GYRO_CYCLIC_AIL_DRAG@@3MA; dragCoefficient
        vmovss  xmm0, dword ptr [rsi+8CCh]; value
      }
      *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+8CCh], xmm0
        vmovaps xmm2, xmm12; dT
        vmovss  xmm1, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_DRAG@@3MA; dragCoefficient
        vmovss  xmm0, dword ptr [rsi+8D0h]; value
      }
      *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+8D0h], xmm0
        vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO
      }
      BG_GetFlightDynamicsManager();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+v1+4]
        vmulss  xmm4, xmm0, dword ptr [rax+10h]
        vmovss  xmm2, dword ptr [rbp+2D0h+v1]
        vmulss  xmm3, xmm2, dword ptr [rax+0Ch]
        vaddss  xmm5, xmm4, xmm3
        vmovss  xmm0, dword ptr [rbp+2D0h+v1+8]
        vmulss  xmm2, xmm0, dword ptr [rax+14h]
        vaddss  xmm0, xmm5, xmm2; value
        vmovaps xmm1, xmm6; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  dword ptr [rbp+2D0h+var_330], xmm0
        vmovss  xmm2, cs:?HFD_FBW_GYRO_CYCLIC_AIL_CLAMP@@3MA; max
        vxorps  xmm1, xmm2, xmm13; min
        vmovss  xmm0, dword ptr [rsi+8CCh]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rbp+2D0h+var_300], xmm0
        vmovss  xmm1, dword ptr [r14+4]
        vmulss  xmm4, xmm1, dword ptr [rsi+348h]
        vmovss  xmm2, dword ptr [r14]
        vmulss  xmm3, xmm2, dword ptr [rsi+344h]
        vaddss  xmm5, xmm4, xmm3
        vmovss  xmm1, dword ptr [r14+8]
        vmulss  xmm2, xmm1, dword ptr [rsi+34Ch]
        vaddss  xmm3, xmm5, xmm2
        vmulss  xmm0, xmm3, xmm8
        vmovss  [rbp+2D0h+var_328], xmm0
        vcomiss xmm0, cs:__real@ba83126f
        vmovss  xmm0, dword ptr [rsi+8D0h]; val
      }
      if ( v219 )
        __asm { vmovss  xmm2, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_CLAMP_REVERSE@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_CLAMP_REVERSE }
      else
        __asm { vmovss  xmm2, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_CLAMP@@3MA; max }
      __asm { vxorps  xmm1, xmm2, xmm13; min }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rsp+3D0h+var_368], xmm0
        vmovss  xmm1, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_LIMITER_EXPO_ELEV@@3MA; expo
        vmovss  xmm0, [rsp+3D0h+var_38C]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  [rbp+2D0h+var_2D0], xmm0
        vmovss  xmm1, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_LIMITER_EXPO_AILE@@3MA; expo
        vmovss  xmm0, [rsp+3D0h+var_358]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm6, xmm0
        vsubss  xmm8, xmm15, xmm0
        vmulss  xmm4, xmm0, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL
        vmulss  xmm3, xmm8, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_SPEED@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_SPEED
        vaddss  xmm5, xmm4, xmm3
        vmovss  xmm3, dword ptr [rsi+92Ch]
        vandps  xmm3, xmm3, xmm14
        vsubss  xmm1, xmm15, xmm3
        vmulss  xmm2, xmm1, xmm5
        vmulss  xmm0, xmm3, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_COLLECTIVE@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_COLLECTIVE
        vaddss  xmm3, xmm2, xmm0
        vmovss  xmm0, [rsp+3D0h+collectiveInput]
        vsubss  xmm2, xmm15, xmm0
        vmulss  xmm1, xmm0, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_RUDDER_FACTOR@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_RUDDER_FACTOR
        vmulss  xmm0, xmm3, xmm2
        vaddss  xmm5, xmm1, xmm0
        vmulss  xmm3, xmm6, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT
        vmulss  xmm2, xmm8, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT_SPEED@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT_SPEED
        vaddss  xmm7, xmm3, xmm2
        vmulss  xmm4, xmm6, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO
        vmulss  xmm2, xmm8, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO_SPEED@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO_SPEED
        vaddss  xmm1, xmm4, xmm2; expo
        vxorps  xmm6, xmm7, xmm13
        vmulss  xmm0, xmm5, [rbp+2D0h+var_2C0]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, [rbp+2D0h+var_300]
        vaddss  xmm5, xmm0, xmm1
        vcomiss xmm1, xmm11
      }
      if ( v219 )
      {
        __asm
        {
          vandps  xmm1, xmm1, xmm14
          vmulss  xmm0, xmm1, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_LEFT@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_LEFT
          vmulss  xmm2, xmm0, [rbp+2D0h+var_30C]
          vsubss  xmm1, xmm15, [rsp+3D0h+var_38C]
          vmulss  xmm1, xmm1, cs:?HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_LEFT@@3MA; float HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_LEFT
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm1, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_RIGHT@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_RIGHT
          vmulss  xmm2, xmm1, [rbp+2D0h+var_30C]
          vsubss  xmm1, xmm15, [rsp+3D0h+var_38C]
          vmulss  xmm1, xmm1, cs:?HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_RIGHT@@3MA; float HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_RIGHT
        }
      }
      __asm
      {
        vaddss  xmm4, xmm2, xmm1
        vmovss  xmm1, [rsp+3D0h+var_35C]
        vsubss  xmm8, xmm15, xmm1
        vmulss  xmm3, xmm1, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL
        vmulss  xmm2, xmm8, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_EMERGENCY@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_EMERGENCY
        vaddss  xmm0, xmm3, xmm2
        vsubss  xmm3, xmm0, xmm4
        vmulss  xmm1, xmm3, [rbp+2D0h+var_2CC]
        vsubss  xmm0, xmm5, xmm1
        vmovss  [rbp+2D0h+var_350], xmm0
        vsubss  xmm6, xmm15, [rbp+2D0h+var_2D0]
        vsubss  xmm4, xmm15, xmm6
        vmulss  xmm3, xmm4, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV
        vmulss  xmm2, xmm6, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_SPEED@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_SPEED
        vaddss  xmm5, xmm3, xmm2
        vmulss  xmm3, xmm4, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT
        vmulss  xmm2, xmm6, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT_SPEED@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT_SPEED
        vaddss  xmm7, xmm3, xmm2
        vmovss  xmm4, dword ptr [rsi+92Ch]
        vandps  xmm4, xmm4, xmm14
        vsubss  xmm0, xmm15, xmm4
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm1, xmm4, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_COLLECTIVE@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_COLLECTIVE
        vaddss  xmm4, xmm2, xmm1
        vmovss  xmm0, [rsp+3D0h+collectiveInput]
        vmulss  xmm3, xmm0, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_RUDDER_FACTOR@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_RUDDER_FACTOR
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm0, xmm4, xmm1
        vaddss  xmm2, xmm3, xmm0
        vxorps  xmm6, xmm7, xmm13
        vmulss  xmm0, xmm2, [rbp+2D0h+var_2FC]; value
        vmovss  xmm1, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_EXPO@@3MA; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm3, [rsp+3D0h+var_368]
        vaddss  xmm1, xmm0, xmm3
        vsubss  xmm0, xmm15, [rbp+2D0h+var_344]
        vmulss  xmm6, xmm1, xmm0
        vsubss  xmm4, xmm15, [rsp+3D0h+elevatorInput]
        vandps  xmm3, xmm3, xmm14
        vmovss  xmm1, [rsp+3D0h+var_378]
        vsubss  xmm0, xmm15, xmm1
        vmovss  [rbp+2D0h+var_2FC], xmm0
        vmulss  xmm1, xmm1, cs:?HFD_GYRO_CYCLIC_INITIAL_FACTOR_ELEV_DECREASE@@3MA; float HFD_GYRO_CYCLIC_INITIAL_FACTOR_ELEV_DECREASE
        vmulss  xmm2, xmm1, xmm3
        vsubss  xmm0, xmm15, xmm3
        vmulss  xmm1, xmm0, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_DECREASE@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_DECREASE
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm15, xmm4
        vmulss  xmm3, xmm0, xmm2
        vmulss  xmm2, xmm4, cs:?HFD_GYRO_CYCLIC_SPEED_FACTOR_ELEV_DECREASE@@3MA; float HFD_GYRO_CYCLIC_SPEED_FACTOR_ELEV_DECREASE
        vaddss  xmm5, xmm3, xmm2
        vmovss  xmm0, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV
        vmulss  xmm4, xmm0, [rsp+3D0h+var_35C]
        vmulss  xmm2, xmm8, cs:?HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_EMERGENCY@@3MA; float HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_EMERGENCY
        vaddss  xmm0, xmm4, xmm2
        vsubss  xmm3, xmm0, xmm5
        vmulss  xmm1, xmm3, [rbp+2D0h+var_2F8]
        vsubss  xmm0, xmm6, xmm1
        vmovss  [rbp+2D0h+var_2F8], xmm0
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+3D0h+var_378], xmm0
      }
      if ( _RSI->m_GyroGPSlocationSet )
      {
        __asm
        {
          vmovss  xmm0, [rsp+3D0h+aileronInput]
          vcomiss xmm0, cs:?HFD_GYRO_GPS_CYCLIC_THRESHOLD@@3MA; float HFD_GYRO_GPS_CYCLIC_THRESHOLD
        }
        _RSI->m_GyroGPSlocationSet = 0;
      }
      else
      {
        __asm
        {
          vmovss  xmm2, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [r14]
          vmovss  xmm3, dword ptr [r14+8]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vcomiss xmm0, cs:?HFD_GYRO_GPS_VELOCITY_THRESHOLD@@3MA; float HFD_GYRO_GPS_VELOCITY_THRESHOLD
        }
      }
      __asm
      {
        vmovss  xmm2, cs:?HFD_GYRO_CYCLIC_RESPONSE_CLAMP@@3MA; max
        vxorps  xmm1, xmm2, xmm13; min
        vaddss  xmm0, xmm8, [rbp+2D0h+var_2F8]
        vmulss  xmm0, xmm0, cs:?HFD_GYRO_CYCLIC_POWER_ELEV@@3MA; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rbp+2D0h+var_2F4], xmm0
        vmovss  xmm3, cs:?HFD_GYRO_CYCLIC_RESPONSE_CLAMP@@3MA; float HFD_GYRO_CYCLIC_RESPONSE_CLAMP
        vxorps  xmm1, xmm3, xmm13; min
        vmovss  xmm2, [rbp+2D0h+var_350]
        vaddss  xmm2, xmm2, [rsp+3D0h+var_378]
        vmulss  xmm0, xmm2, cs:?HFD_GYRO_CYCLIC_POWER_AIL@@3MA; val
        vmovaps xmm2, xmm3; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rbp+2D0h+var_320], xmm0
        vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO
      }
      BG_GetFlightDynamicsManager();
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+2D0h+v1+4]
        vmulss  xmm5, xmm2, dword ptr [rax+10h]
        vmovss  xmm3, dword ptr [rbp+2D0h+v1]
        vmulss  xmm4, xmm3, dword ptr [rax+0Ch]
        vaddss  xmm4, xmm5, xmm4
        vmovss  xmm2, dword ptr [rbp+2D0h+v1+8]
        vmulss  xmm3, xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm4, xmm3; value
        vmovaps xmm1, xmm6; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm8, xmm0
        vmulss  xmm6, xmm0, [rsp+3D0h+var_38C]
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
        vcomiss xmm0, cs:?HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_ELEV_THRESHOLD@@3MA; float HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_ELEV_THRESHOLD
      }
      if ( v219 | v298 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+934h]
          vsubss  xmm0, xmm0, xmm12; val
        }
      }
      else
      {
        __asm { vaddss  xmm0, xmm12, dword ptr [rsi+934h] }
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+934h], xmm0
        vsubss  xmm0, xmm15, [rsp+3D0h+var_388]
        vmovss  xmm5, dword ptr [rsi+934h]
        vmulss  xmm2, xmm0, cs:?HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER@@3MA; float HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER
        vaddss  xmm3, xmm2, cs:?HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET@@3MA; float HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET
        vmulss  xmm4, xmm3, xmm5
        vsubss  xmm1, xmm15, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm4, xmm2
        vmovss  [rbp+2D0h+var_2F0], xmm0
        vmovss  xmm3, [rbp+2D0h+var_2EC]
        vdivss  xmm0, xmm3, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_STOP_SPEED@@3MA; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rsp+3D0h+var_378], xmm0
        vxorps  xmm2, xmm2, xmm2; max
        vmovaps xmm1, xmm10; min
        vmovss  xmm0, [rbp+2D0h+var_328]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm13
        vmovss  [rbp+2D0h+var_328], xmm0
        vxorps  xmm7, xmm7, xmm7
        vmovss  xmm0, cs:__real@ba83126f
        vmovss  xmm2, [rbp+2D0h+var_34C]
        vmovss  xmm6, [rsp+3D0h+var_364]
        vcomiss xmm2, xmm0
      }
      if ( v971 )
      {
        __asm { vcomiss xmm6, xmm0 }
        if ( v971 )
        {
          __asm
          {
            vsubss  xmm0, xmm15, [rbp+2D0h+var_33C]
            vmulss  xmm7, xmm0, cs:__real@40400000
          }
        }
        else
        {
          __asm { vcomiss xmm6, cs:__real@3a83126f }
          if ( !(v971 | v972) )
          {
            __asm
            {
              vmovss  xmm0, [rsp+3D0h+var_378]
              vxorps  xmm7, xmm0, xmm13
            }
          }
        }
      }
      __asm
      {
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm0, xmm9; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER_COLLECTIVE@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER_COLLECTIVE
        vaddss  xmm9, xmm2, xmm0
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_altitude_speedLimiter, "fd_helicopter_altitude_speedLimiter") && _RSI->m_playerControlled )
      {
        __asm { vmovss  cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE@@3MA, xmm10; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL
          vmovss  cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE@@3MA, xmm0; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE
        }
      }
      __asm
      {
        vxorps  xmm0, xmm6, xmm13; val
        vmovss  [rbp+2D0h+var_2EC], xmm0
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm0, xmm0, [rbp+2D0h+var_2E8]; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL
        vaddss  xmm6, xmm2, xmm0
        vmovss  xmm0, [rsp+3D0h+var_378]
        vsubss  xmm1, xmm0, [rbp+2D0h+var_328]
        vaddss  xmm0, xmm1, xmm7; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, cs:?HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_STOP@@3MA; float HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_STOP
        vmulss  xmm0, xmm0, xmm6
        vaddss  xmm3, xmm2, xmm0
        vcomiss xmm8, xmm9
      }
      _EAX = !(v219 | v298);
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm10, xmm3, xmm0
        vmovss  xmm0, [rbp+2D0h+var_2E4]
        vandps  xmm0, xmm0, xmm14
        vsubss  xmm6, xmm15, xmm0
        vmovss  xmm0, dword ptr [rbp+2D0h+v0+4]
        vmulss  xmm3, xmm0, dword ptr [rsi+354h]
        vmovss  xmm1, dword ptr [rbp+2D0h+v0]
        vmulss  xmm2, xmm1, dword ptr [rsi+350h]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+2D0h+v0+8]
        vmulss  xmm1, xmm0, dword ptr [rsi+358h]
        vaddss  xmm9, xmm4, xmm1
        vsubss  xmm0, xmm15, [rbp+2D0h+var_33C]
        vmulss  xmm0, xmm0, [rbp+2D0h+var_344]; value
        vmovss  xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_FACTOR_EXPO@@3MA; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm2, xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_ELEV@@3MA; float HFD_FBW_GYRO_RUDDER_TO_ELEV
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_RUDDER_TO_ELEV_SPEED@@3MA; float HFD_FBW_GYRO_RUDDER_TO_ELEV_SPEED
        vaddss  xmm8, xmm2, xmm0
        vmulss  xmm7, xmm6, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT
        vmulss  xmm2, xmm6, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT
        vxorps  xmm6, xmm2, xmm13
        vmovss  xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_EXPO@@3MA; expo
        vmovss  xmm0, [rbp+2D0h+rudderInput]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm2, xmm0, xmm9
        vsubss  xmm0, xmm15, [rbp+2D0h+var_33C]
        vmulss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm3, xmm8; val
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm6; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vandps  xmm2, xmm9, xmm14
        vmovss  xmm7, [rsp+3D0h+var_364]
        vmulss  xmm1, xmm9, xmm7
        vandps  xmm1, xmm1, xmm14
        vsubss  xmm1, xmm2, xmm1
        vmulss  xmm6, xmm1, xmm0
        vmovss  [rbp+2D0h+var_2E4], xmm6
        vandps  xmm0, xmm6, xmm14
        vmovss  xmm8, [rsp+3D0h+elevatorInput]
        vaddss  xmm0, xmm0, xmm8
        vmulss  xmm1, xmm0, [rbp+2D0h+var_2F0]
        vmulss  xmm0, xmm1, xmm10; val
        vmovaps xmm2, xmm15; max
        vmovss  xmm1, cs:__real@bf800000; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, [rbp+2D0h+var_304]
        vsubss  xmm1, xmm15, xmm2
        vmulss  xmm3, xmm1, cs:?HFD_FBW_RESPOSNE_RATE_CYCLIC_LOW_HZ@@3MA; float HFD_FBW_RESPOSNE_RATE_CYCLIC_LOW_HZ
        vmulss  xmm2, xmm2, cs:?HFD_FBW_RESPOSNE_RATE_CYCLIC@@3MA; float HFD_FBW_RESPOSNE_RATE_CYCLIC
        vaddss  xmm5, xmm3, xmm2
        vaddss  xmm3, xmm6, xmm7
        vmulss  xmm4, xmm3, xmm0
        vsubss  xmm0, xmm15, xmm0
        vmulss  xmm1, xmm0, [rbp+2D0h+var_2F4]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm12, xmm5
        vmovss  [rbp+2D0h+var_2E8], xmm1
        vsubss  xmm3, xmm15, xmm1
        vmovss  [rbp+2D0h+var_328], xmm3
        vmulss  xmm1, xmm2, xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+480h]
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rsi+480h], xmm1
        vmovss  xmm6, cs:?HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO
      }
      BG_GetFlightDynamicsManager();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+v1+4]
        vmulss  xmm4, xmm0, dword ptr [rax+10h]
        vmovss  xmm2, dword ptr [rbp+2D0h+v1]
        vmulss  xmm3, xmm2, dword ptr [rax+0Ch]
        vaddss  xmm5, xmm4, xmm3
        vmovss  xmm0, dword ptr [rbp+2D0h+v1+8]
        vmulss  xmm2, xmm0, dword ptr [rax+14h]
        vaddss  xmm0, xmm5, xmm2; value
        vmovaps xmm1, xmm6; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  [rsp+3D0h+var_35C], xmm0
        vmulss  xmm9, xmm0, [rbp+2D0h+var_340]
        vmovss  xmm1, [rbp+2D0h+var_2D8]
        vmulss  xmm1, xmm1, cs:?HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD@@3MA; float HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD
        vmovss  xmm0, [rbp+2D0h+var_2E0]
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD_SPEED@@3MA; float HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD_SPEED
        vaddss  xmm1, xmm1, xmm0
        vmovaps xmm2, xmm15; max
        vcomiss xmm6, xmm1
        vxorps  xmm1, xmm1, xmm1; min
      }
      if ( v219 | v298 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+930h]
          vsubss  xmm0, xmm0, xmm12; val
        }
      }
      else
      {
        __asm { vaddss  xmm0, xmm12, dword ptr [rsi+930h] }
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+930h], xmm0
        vsubss  xmm2, xmm15, xmm6
        vmovss  [rsp+3D0h+var_378], xmm2
        vmulss  xmm1, xmm7, cs:?HFD_GYRO_CYCLIC_VELOCITY_FACTOR_COLLECTIVE_MIX@@3MA; float HFD_GYRO_CYCLIC_VELOCITY_FACTOR_COLLECTIVE_MIX
        vmulss  xmm0, xmm1, xmm2
        vandps  xmm0, xmm0, xmm14; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [rsi+490h]
        vmovss  dword ptr [rsi+490h], xmm0
        vmovss  xmm4, dword ptr [rsi+930h]
        vsubss  xmm0, xmm15, [rsp+3D0h+var_388]
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER@@3MA; float HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER
        vaddss  xmm2, xmm0, cs:?HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET@@3MA; float HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET
        vmulss  xmm3, xmm2, xmm4
        vsubss  xmm0, xmm15, xmm4
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm11, xmm3, xmm1
        vmovss  xmm6, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_FACTOR_EXPO@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_FACTOR_EXPO
        vmovaps xmm2, xmm15; max
        vmovss  xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_MIN_ELEV@@3MA; min
        vmovaps xmm0, xmm8; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, [rbp+2D0h+var_2FC]; value
        vmovaps xmm1, xmm6; expo
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm1, xmm15, xmm0
        vmulss  xmm3, xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL
        vmulss  xmm0, xmm0, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED
        vaddss  xmm9, xmm3, xmm0
        vmovss  xmm0, [rbp+2D0h+var_324]
        vandps  xmm0, xmm0, xmm14
        vsubss  xmm8, xmm15, xmm0
      }
      vec3_t::operator[](&_RSI->m_forwardVector, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+v0+4]
        vmulss  xmm7, xmm0, dword ptr [rax]
      }
      vec3_t::operator[](&_RSI->m_forwardVector, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+v0]
        vmulss  xmm6, xmm0, dword ptr [rax]
      }
      vec3_t::operator[](&_RSI->m_forwardVector, 2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2D0h+v0+8]
        vmulss  xmm2, xmm0, dword ptr [rax]
        vaddss  xmm1, xmm6, xmm7
        vaddss  xmm10, xmm2, xmm1
        vandps  xmm10, xmm10, xmm14
        vmulss  xmm7, xmm8, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT
        vmulss  xmm2, xmm8, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT@@3MA; float HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT
        vxorps  xmm6, xmm2, xmm13
        vmovss  xmm1, cs:?HFD_FBW_GYRO_RUDDER_TO_AIL_EXPO@@3MA; expo
        vmovss  xmm0, [rbp+2D0h+rudderInput]; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm1, xmm15, [rsp+3D0h+var_38C]
        vmulss  xmm2, xmm0, xmm1
        vmulss  xmm0, xmm2, xmm9; val
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm6; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm15, [rbp+2D0h+var_344]
        vmulss  xmm7, xmm1, xmm0
        vmovss  xmm0, [rbp+2D0h+var_34C]
        vxorps  xmm0, xmm0, xmm13; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovss  xmm0, [rbp+2D0h+var_2EC]; val
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm1, xmm6, xmm0
        vsubss  xmm1, xmm15, xmm1
        vmulss  xmm6, xmm1, xmm7
        vsubss  xmm0, xmm15, [rsp+3D0h+var_358]
        vmulss  xmm2, xmm0, cs:?HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL
        vmovss  xmm0, cs:?HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_STOP@@3MA; float HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_STOP
        vmulss  xmm1, xmm0, [rsp+3D0h+var_358]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm10
        vandps  xmm0, xmm0, xmm14
        vaddss  xmm0, xmm0, [rbp+2D0h+var_344]
        vmulss  xmm1, xmm0, xmm11
        vmulss  xmm5, xmm1, xmm3
        vmovss  xmm0, [rbp+2D0h+rudderInput]
        vmulss  xmm4, xmm0, [rbp+2D0h+var_2E4]
        vandps  xmm4, xmm4, xmm14
        vxorps  xmm1, xmm0, xmm13
        vsubss  xmm0, xmm15, xmm4
        vmovss  xmm7, [rsp+3D0h+var_390]
        vmulss  xmm2, xmm0, xmm7
        vmulss  xmm1, xmm1, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm4, xmm5, dword ptr [rbp+2D0h+var_330]
        vaddss  xmm0, xmm3, xmm6
        vmulss  xmm2, xmm0, xmm4
        vsubss  xmm1, xmm15, xmm4
        vmulss  xmm0, xmm1, [rbp+2D0h+var_320]
        vaddss  xmm0, xmm2, xmm0; val
        vmovaps xmm2, xmm15; max
        vmovss  xmm6, cs:__real@bf800000
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+488h]
        vmulss  xmm1, xmm0, [rbp+2D0h+var_2E8]
        vmulss  xmm0, xmm2, [rbp+2D0h+var_328]
        vaddss  xmm3, xmm1, xmm0
        vmovss  dword ptr [rsi+488h], xmm3
        vxorps  xmm11, xmm11, xmm11
        vcomiss xmm3, xmm11
      }
      if ( v1179 )
      {
        __asm { vmulss  xmm0, xmm3, cs:?HFD_FBW_LEFT_RESPONSE_MODIFIER@@3MA; float HFD_FBW_LEFT_RESPONSE_MODIFIER }
      }
      else
      {
        if ( v1179 | v1180 )
          goto LABEL_109;
        __asm { vmulss  xmm0, xmm3, cs:?HFD_FBW_RIGHT_RESPONSE_MODIFIER@@3MA; val }
      }
      __asm
      {
        vmovaps xmm2, xmm15; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsi+488h], xmm0 }
LABEL_109:
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+480h]
        vcomiss xmm1, xmm11
      }
      if ( v1179 | v1180 )
      {
        __asm { vcomiss xmm11, dword ptr [rsi+488h] }
        if ( !v1179 )
          goto LABEL_114;
        __asm { vmulss  xmm0, xmm1, cs:?HFD_FBW_BACKWARD_RESPONSE_MODIFIER@@3MA; val }
      }
      else
      {
        __asm { vmulss  xmm0, xmm1, cs:?HFD_FBW_FORWARD_RESPONSE_MODIFIER@@3MA; float HFD_FBW_FORWARD_RESPONSE_MODIFIER }
      }
      __asm
      {
        vmovaps xmm2, xmm15; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsi+480h], xmm0 }
LABEL_114:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+47Ch]
        vcomiss xmm0, xmm11
      }
      if ( v1179 | v1180 )
      {
        if ( !v1179 )
        {
LABEL_119:
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") || !_RSI->m_playerControlled )
            goto LABEL_133;
          __asm
          {
            vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DEADZONE@@3MA; deadzone
            vmovss  xmm0, [rsp+3D0h+var_364]; value
          }
          *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vmovaps xmm10, xmm0
            vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DEADZONE@@3MA; deadzone
            vmovaps xmm0, xmm7; value
          }
          *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
          __asm { vmovss  [rbp+2D0h+var_324], xmm0 }
          _RBX = vec3_t::operator[](&_RSI->m_Velocity, 1);
          _RAX = vec3_t::operator[](&_RSI->m_sideVector, 1);
          __asm
          {
            vmovss  xmm9, dword ptr [rbx]
            vmovss  xmm8, dword ptr [rax]
          }
          _RBX = vec3_t::operator[](&_RSI->m_Velocity, 0);
          _RAX = vec3_t::operator[](&_RSI->m_sideVector, 0);
          __asm
          {
            vmovss  xmm7, dword ptr [rbx]
            vmovss  xmm6, dword ptr [rax]
          }
          _RBX = vec3_t::operator[](&_RSI->m_Velocity, 2);
          vec3_t::operator[](&_RSI->m_sideVector, 2);
          __asm
          {
            vmulss  xmm1, xmm8, xmm9
            vmulss  xmm0, xmm6, xmm7
            vaddss  xmm3, xmm1, xmm0
            vmovss  xmm1, dword ptr [rbx]
            vmulss  xmm2, xmm1, dword ptr [rax]
            vaddss  xmm6, xmm3, xmm2
          }
          v1212 = BG_GetFlightDynamicsManager();
          Vec3Cross(&v1212->m_UpAxis, &_RSI->m_GyroRudderForwardVector, (vec3_t *)&v2087);
          __asm { vmovss  dword ptr [rbp+2D0h+var_290+8], xmm11 }
          Vec3Normalize((vec3_t *)&v2087);
          __asm
          {
            vmulss  xmm1, xmm6, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_MULTIPLIER@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_MULTIPLIER
            vmovss  xmm0, [rbp+2D0h+var_324]
            vmulss  xmm0, xmm0, [rbp+2D0h+var_340]
            vmulss  xmm0, xmm1, xmm0; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm9, xmm0 }
          _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
          __asm { vmovss  xmm6, dword ptr [rax] }
          vec3_t::operator[](&_RSI->m_Velocity, 0);
          __asm
          {
            vmovss  xmm0, [rbp+2D0h+var_334]
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm9
            vaddss  xmm8, xmm2, dword ptr [rax]
          }
          _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
          __asm { vmovss  xmm6, dword ptr [rax] }
          vec3_t::operator[](&_RSI->m_Velocity, 1);
          __asm
          {
            vmovss  xmm0, [rbp+2D0h+var_2DC]
            vsubss  xmm0, xmm0, xmm6
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm7, xmm1, dword ptr [rax]
          }
          _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
          __asm { vmovss  xmm6, dword ptr [rax] }
          vec3_t::operator[](&_RSI->m_Velocity, 2);
          __asm
          {
            vmovss  xmm0, [rsp+3D0h+var_374]
            vsubss  xmm0, xmm0, xmm6
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm4, xmm1, dword ptr [rax]
            vmulss  xmm2, xmm8, dword ptr [rbp+2D0h+var_290]
            vmovss  xmm8, dword ptr [rbp+2D0h+var_290+4]
            vmulss  xmm0, xmm7, xmm8
            vaddss  xmm3, xmm2, xmm0
            vmovss  xmm7, dword ptr [rbp+2D0h+var_290+8]
            vmulss  xmm1, xmm4, xmm7
            vaddss  xmm0, xmm3, xmm1
            vmovss  [rbp+2D0h+var_334], xmm0
            vmovss  xmm6, cs:?HFD_FBW_GYRO_AILERON_SPEED_LIMIT_EXPO@@3MA; float HFD_FBW_GYRO_AILERON_SPEED_LIMIT_EXPO
            vandps  xmm0, xmm0, xmm14
            vdivss  xmm0, xmm0, cs:?HFD_FBW_GYRO_AILERON_RELATIVE_SPEED_LIMIT@@3MA; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vsubss  xmm0, xmm15, xmm0; value
            vmovaps xmm1, xmm6; expo
          }
          *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovss  [rsp+3D0h+var_390], xmm0
            vmulss  xmm2, xmm8, dword ptr [rbp+2D0h+v1+4]
            vmovss  xmm6, dword ptr [rbp+2D0h+var_290]
            vmulss  xmm1, xmm6, dword ptr [rbp+2D0h+v1]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm7, dword ptr [rbp+2D0h+v1+8]
            vaddss  xmm8, xmm3, xmm2
            vsubss  xmm1, xmm15, [rsp+3D0h+aileronInput]
            vaddss  xmm0, xmm1, dword ptr [rsi+93Ch]; val
            vmovaps xmm2, xmm15; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm0, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG
            vmovss  dword ptr [rbp+2D0h+var_330], xmm0
            vmulss  xmm1, xmm10, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_ELE@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_ELE
            vsubss  xmm0, xmm15, dword ptr [rsi+93Ch]
            vmulss  xmm0, xmm1, xmm0
            vmovss  [rbp+2D0h+var_2E0], xmm0
            vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_LEVELED_FACTOR_EXPO@@3MA; expo
            vmovss  xmm0, [rsp+3D0h+var_378]; value
          }
          *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovaps xmm4, xmm0
            vmovss  [rsp+3D0h+var_374], xmm0
            vmovss  xmm9, [rbp+2D0h+var_324]
            vmulss  xmm1, xmm8, xmm9
            vmovss  xmm7, [rbp+2D0h+var_334]
            vmulss  xmm10, xmm7, xmm9
            vcomiss xmm1, xmm11
          }
          if ( v1268 )
          {
            __asm { vcomiss xmm10, cs:?HFD_FBW_ENHANCER_TRANSITION_THRESHOLD@@3MA; float HFD_FBW_ENHANCER_TRANSITION_THRESHOLD }
            if ( v1268 | v1269 )
            {
              __asm
              {
                vandps  xmm8, xmm8, xmm14
                vmovss  xmm5, dword ptr [rsi+8D8h]
                vandps  xmm5, xmm5, xmm14
                vmulss  xmm0, xmm9, xmm8
                vsubss  xmm1, xmm0, dword ptr [rsi+8DCh]
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE
                vmovss  xmm13, [rsp+3D0h+var_390]
                vmulss  xmm0, xmm3, xmm13
                vmulss  xmm4, xmm0, xmm4
                vsubss  xmm1, xmm15, xmm5
                vmulss  xmm0, xmm4, xmm1
                vaddss  xmm0, xmm0, dword ptr [rsi+8E0h]
              }
            }
            else
            {
              __asm
              {
                vmulss  xmm1, xmm7, xmm12
                vmulss  xmm2, xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR
                vxorps  xmm7, xmm2, xmm13
              }
              vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmulss  xmm0, xmm6, xmm7
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+var_290+4]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+var_290+8]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm
              {
                vmovss  dword ptr [rax], xmm6
                vandps  xmm8, xmm8, xmm14
                vmovss  xmm5, dword ptr [rsi+8D8h]
                vandps  xmm5, xmm5, xmm14
                vmulss  xmm0, xmm9, xmm8
                vsubss  xmm1, xmm0, dword ptr [rsi+8DCh]
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE
                vmulss  xmm4, xmm3, [rsp+3D0h+var_374]
                vsubss  xmm0, xmm15, xmm5
                vmulss  xmm1, xmm4, xmm0
                vaddss  xmm0, xmm1, dword ptr [rsi+8E0h]
                vmovss  xmm13, [rsp+3D0h+var_390]
              }
            }
            __asm
            {
              vmovss  dword ptr [rsi+8E0h], xmm0
              vcomiss xmm10, xmm11
            }
            if ( v1268 )
            {
              __asm
              {
                vmovss  xmm6, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_EXPO@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_EXPO
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_THRESHOLD@@3MA; deadzone
                vmovaps xmm0, xmm13; value
              }
              *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
              __asm { vmovaps xmm1, xmm6; expo }
              FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm
              {
                vsubss  xmm1, xmm15, [rbp+2D0h+var_340]
                vaddss  xmm0, xmm1, xmm0; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovaps xmm8, xmm0
                vaddss  xmm0, xmm0, dword ptr [rsi+93Ch]; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovaps xmm7, xmm0
                vmovss  xmm6, dword ptr [rsi+488h]
                vmovss  xmm0, [rbp+2D0h+var_350]
                vmulss  xmm0, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_MULTIPLIER@@3MA; val
                vmovaps xmm2, xmm15; max
                vmovss  xmm9, cs:__real@bf800000
                vmovaps xmm1, xmm9; min
              }
              I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vsubss  xmm1, xmm15, xmm7
                vmulss  xmm2, xmm1, xmm0
                vmulss  xmm0, xmm7, xmm6
                vaddss  xmm2, xmm2, xmm0
                vmovss  dword ptr [rsi+488h], xmm2
                vsubss  xmm1, xmm8, xmm15
                vaddss  xmm0, xmm1, xmm8
                vmulss  xmm2, xmm0, dword ptr [rsi+8DCh]
                vmovss  dword ptr [rsi+8DCh], xmm2
              }
LABEL_132:
              __asm
              {
                vmovaps xmm2, xmm12; dT
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_DECAY@@3MA; dragCoefficient
                vmovss  xmm0, dword ptr [rsi+8DCh]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8DCh], xmm0
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_MULTIPLIER@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_MULTIPLIER
                vmulss  xmm2, xmm1, dword ptr [rsi+8E0h]
                vmulss  xmm3, xmm2, [rsp+3D0h+var_374]
                vmulss  xmm4, xmm3, xmm12
                vaddss  xmm0, xmm4, xmm0; val
                vmovss  dword ptr [rsi+8DCh], xmm0
                vmovaps xmm2, xmm15; max
                vmovaps xmm1, xmm9; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8DCh], xmm0
                vmovaps xmm2, xmm12; dT
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_RATE_DECAY@@3MA; dragCoefficient
                vmovss  xmm0, dword ptr [rsi+8E0h]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8E0h], xmm0
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL_SPEED_EXPO@@3MA; expo
                vsubss  xmm0, xmm15, [rsp+3D0h+var_38C]; value
              }
              *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm
              {
                vmovaps xmm6, xmm0
                vmulss  xmm2, xmm0, xmm13
                vmovss  xmm5, dword ptr [rsi+8D8h]
                vandps  xmm5, xmm5, xmm14
                vsubss  xmm1, xmm15, xmm2
                vmulss  xmm3, xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL
                vmulss  xmm2, xmm2, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_SPEED@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_SPEED
                vaddss  xmm4, xmm3, xmm2
                vsubss  xmm1, xmm15, dword ptr [rsi+93Ch]
                vmulss  xmm2, xmm4, xmm1
                vsubss  xmm0, xmm15, xmm5
                vmulss  xmm3, xmm2, xmm0
                vmulss  xmm12, xmm3, dword ptr [rsi+8DCh]
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
                vmovss  xmm0, [rsp+3D0h+var_360]; val
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm2, xmm6, [rsp+3D0h+var_378]
                vmulss  xmm0, xmm0, xmm2
                vmulss  xmm13, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL
                vxorps  xmm2, xmm2, xmm2; max
                vmovaps xmm1, xmm9; min
                vmovss  xmm0, [rsp+3D0h+var_360]; val
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vandps  xmm0, xmm0, xmm14
                vsubss  xmm1, xmm15, xmm6
                vmulss  xmm2, xmm1, [rsp+3D0h+var_35C]
                vmulss  xmm0, xmm0, xmm2
                vmulss  xmm14, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL_DOWN@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL_DOWN
                vmovss  xmm7, dword ptr [rbp+2D0h+var_330]
                vmulss  xmm6, xmm7, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmovss  xmm8, [rsp+3D0h+var_354]
                vmovaps xmm2, xmm8; dT
                vmovaps xmm1, xmm6; dragCoefficient
                vmovss  xmm0, dword ptr [rax]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm { vmovaps xmm6, xmm0 }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmovss  dword ptr [rax], xmm6
                vmulss  xmm6, xmm7, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmovaps xmm2, xmm8; dT
                vmovaps xmm1, xmm6; dragCoefficient
                vmovss  xmm0, dword ptr [rax]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm { vmovaps xmm6, xmm0 }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmovss  dword ptr [rax], xmm6
                vsubss  xmm0, xmm15, dword ptr [rbp+2D0h+cross]
                vmulss  xmm0, xmm0, cs:__real@40000000; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm6, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED
                vsubss  xmm0, xmm15, [rbp+2D0h+var_33C]
                vmulss  xmm0, xmm0, cs:__real@40000000; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm7, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED_AILERON@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED_AILERON
                vmovsd  xmm1, [rbp+2D0h+var_1C0]
                vmovsd  qword ptr [rbp+2D0h+var_290], xmm1
              }
              v2087.v[2] = v2102;
              __asm
              {
                vmovsd  xmm0, qword ptr [r14]
                vmovsd  qword ptr [rbp+2D0h+cross], xmm0
              }
              cross.v[2] = _RSI->m_Velocity.v[2];
              __asm
              {
                vmulss  xmm2, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vmovaps xmm3, xmm8
              }
              CalculateDragAtDirection(&cross, (vec3_t *)&v2087, *(float *)&_XMM2, *(float *)&_XMM3, &_RSI->m_Velocity);
              __asm
              {
                vmovsd  xmm0, [rbp+2D0h+var_200]
                vmovsd  qword ptr [rbp+2D0h+var_290], xmm0
              }
              v2087.v[2] = v2097;
              __asm
              {
                vmovsd  xmm0, qword ptr [r14]
                vmovsd  qword ptr [rbp+2D0h+cross], xmm0
              }
              cross.v[2] = _RSI->m_Velocity.v[2];
              __asm
              {
                vmulss  xmm2, xmm7, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vmovaps xmm3, xmm8
              }
              CalculateDragAtDirection(&cross, (vec3_t *)&v2087, *(float *)&_XMM2, *(float *)&_XMM3, &_RSI->m_Velocity);
              _RAX = vec3_t::operator[](&_RSI->m_forwardVector, 0);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+2D0h+var_290], xmm0
              }
              _RAX = vec3_t::operator[](&_RSI->m_forwardVector, 1);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+2D0h+var_290+4], xmm0
              }
              vec3_t::operator[](&_RSI->m_forwardVector, 2);
              __asm { vmovss  dword ptr [rbp+2D0h+var_290+8], xmm11 }
              Vec3Normalize((vec3_t *)&v2087);
              __asm
              {
                vmovss  xmm10, dword ptr [rbp+2D0h+var_290+4]
                vmulss  xmm1, xmm10, dword ptr [rbp+2D0h+v1+4]
                vmovss  xmm9, dword ptr [rbp+2D0h+var_290]
                vmulss  xmm0, xmm9, dword ptr [rbp+2D0h+v1]
                vaddss  xmm2, xmm1, xmm0
                vmovss  xmm11, dword ptr [rbp+2D0h+var_290+8]
                vmulss  xmm1, xmm11, dword ptr [rbp+2D0h+v1+8]
                vaddss  xmm7, xmm2, xmm1
                vmovss  xmm0, [rbp+2D0h+var_2E0]
                vmulss  xmm0, xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vmulss  xmm2, xmm0, [rsp+3D0h+var_38C]
                vsubss  xmm1, xmm15, dword ptr [rsi+8D8h]
                vmulss  xmm8, xmm2, xmm1
                vmulss  xmm0, xmm7, [rsp+3D0h+var_364]; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovaps xmm6, xmm0
                vmovss  xmm2, [rsp+3D0h+elevatorInput]; max
                vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
                vmulss  xmm0, xmm2, xmm7; val
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
                vmulss  xmm1, xmm6, xmm8
                vmulss  xmm0, xmm0, xmm1
                vmulss  xmm7, xmm0, [rsp+3D0h+var_354]
              }
              vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmulss  xmm0, xmm7, xmm9
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmulss  xmm0, xmm7, xmm10
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm
              {
                vmulss  xmm0, xmm7, xmm11
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm { vmovss  dword ptr [rax], xmm6 }
              _RAX = vec3_t::operator[](&_RSI->m_sideVector, 0);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+2D0h+v], xmm0
              }
              _RAX = vec3_t::operator[](&_RSI->m_sideVector, 1);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+2D0h+v+4], xmm0
              }
              _RAX = vec3_t::operator[](&_RSI->m_sideVector, 2);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+2D0h+v+8], xmm0
              }
              *vec3_t::operator[](&v, 2) = 0.0;
              Vec3Normalize(&v);
              __asm
              {
                vmovss  xmm1, [rsp+3D0h+collectiveInput]
                vsubss  xmm0, xmm15, xmm1
                vmulss  xmm2, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_RUD_ACCUMULATOR_DECAY@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_RUD_ACCUMULATOR_DECAY
                vmulss  xmm1, xmm1, cs:__real@40a00000
                vaddss  xmm2, xmm2, xmm1
                vmulss  xmm0, xmm2, [rsp+3D0h+var_354]
                vaddss  xmm0, xmm0, dword ptr [rsi+8D8h]; val
                vmovaps xmm2, xmm15; max
                vxorps  xmm11, xmm11, xmm11
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8D8h], xmm0
                vsubss  xmm1, xmm15, dword ptr [rsi+914h]
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vsubss  xmm0, xmm15, xmm0
                vmulss  xmm1, xmm3, xmm0
                vmovss  xmm12, [rsp+3D0h+var_354]
                vmulss  xmm7, xmm1, xmm12
              }
              vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+v]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+v+4]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+v+8]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm { vmovss  dword ptr [rax], xmm6 }
              v1499 = BG_GetFlightDynamicsManager();
              __asm
              {
                vsubss  xmm0, xmm15, dword ptr [rsi+914h]
                vmulss  xmm1, xmm0, xmm13
                vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vsubss  xmm0, xmm15, dword ptr [rsi+8D8h]
                vmulss  xmm1, xmm2, xmm0
                vmulss  xmm1, xmm1, xmm12; scale
              }
              Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &v1499->m_UpAxis, &_RSI->m_Velocity);
              v1506 = BG_GetFlightDynamicsManager();
              __asm
              {
                vmulss  xmm0, xmm14, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
                vmulss  xmm1, xmm0, xmm12; scale
              }
              Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &v1506->m_UpAxis, &_RSI->m_Velocity);
              __asm
              {
                vmovss  xmm1, [rsp+3D0h+var_38C]
                vmulss  xmm0, xmm1, [rbp+2D0h+var_34C]
                vmovss  xmm2, [rsp+3D0h+var_364]
                vsubss  xmm0, xmm2, xmm0
                vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
                vandps  xmm0, xmm0, xmm14; value
                vmovss  xmm2, cs:__real@40000000; range
                vmovss  xmm1, cs:__real@3f8ccccd; deadzone
              }
              *(double *)&_XMM0 = FlightDynamics::ComputeDeadzoneRange(*(float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
              __asm
              {
                vmovaps xmm2, xmm15; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm7, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_REVERSE@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_REVERSE
                vmulss  xmm6, xmm7, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmovaps xmm2, xmm12; dT
                vmovaps xmm1, xmm6; dragCoefficient
                vmovss  xmm0, dword ptr [rax]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm { vmovaps xmm6, xmm0 }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmovss  dword ptr [rax], xmm6
                vmulss  xmm6, xmm7, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmovaps xmm2, xmm12; dT
                vmovaps xmm1, xmm6; dragCoefficient
                vmovss  xmm0, dword ptr [rax]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm { vmovaps xmm6, xmm0 }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmovss  dword ptr [rax], xmm6
                vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
              }
LABEL_133:
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+480h]
                vmovss  dword ptr [rbp+2D0h+cross], xmm0
              }
              if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2427, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_ELEVATOR] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_ELEVATOR] )") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+488h]
                vmovss  dword ptr [rbp+2D0h+cross], xmm0
              }
              if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2428, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_AILERON] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_AILERON] )") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+490h]
                vmovss  dword ptr [rbp+2D0h+cross], xmm0
              }
              if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2429, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_VERTICAL] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_VERTICAL] )") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rsi+47Ch]
                vmovss  dword ptr [rbp+2D0h+cross], xmm0
              }
              if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2430, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_RUDDER] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_RUDDER] )") )
                __debugbreak();
              __asm { vmovss  xmm9, [rsp+3D0h+var_370] }
              goto LABEL_146;
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, cs:?HFD_FBW_ENHANCER_TRANSITION_THRESHOLD@@3MA; float HFD_FBW_ENHANCER_TRANSITION_THRESHOLD
              vcomiss xmm1, xmm0
            }
            if ( !(v1268 | v1269) )
              goto LABEL_129;
            __asm { vcomiss xmm10, xmm0 }
            if ( !(v1268 | v1269) )
            {
LABEL_129:
              __asm
              {
                vmovaps xmm2, xmm12; dT
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_EXTRA_RATE_DECAY@@3MA; dragCoefficient
                vmovss  xmm0, dword ptr [rsi+8DCh]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8DCh], xmm0
                vmovaps xmm2, xmm12; dT
                vmovss  xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_EXTRA_RATE_DECAY@@3MA; dragCoefficient
                vmovss  xmm0, dword ptr [rsi+8E0h]; value
              }
              *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsi+8E0h], xmm0
                vmulss  xmm1, xmm7, xmm12
                vmulss  xmm0, xmm1, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR
                vxorps  xmm7, xmm0, xmm13
              }
              vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm
              {
                vmulss  xmm0, xmm7, xmm6
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+var_290+4]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
              __asm { vmovss  dword ptr [rax], xmm6 }
              vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm
              {
                vmulss  xmm0, xmm7, dword ptr [rbp+2D0h+var_290+8]
                vaddss  xmm6, xmm0, dword ptr [rax]
              }
              _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
              __asm { vmovss  dword ptr [rax], xmm6 }
            }
            __asm { vmovss  xmm13, [rsp+3D0h+var_390] }
          }
          __asm { vmovss  xmm9, cs:__real@bf800000 }
          goto LABEL_132;
        }
        __asm { vmulss  xmm0, xmm0, cs:?HFD_FBW_RIGHT_RESPONSE_MODIFIER@@3MA; val }
      }
      else
      {
        __asm { vmulss  xmm0, xmm0, cs:?HFD_FBW_LEFT_RESPONSE_MODIFIER@@3MA; float HFD_FBW_LEFT_RESPONSE_MODIFIER }
      }
      __asm
      {
        vmovaps xmm2, xmm15; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsi+47Ch], xmm0 }
      goto LABEL_119;
    }
  }
LABEL_146:
  __asm
  {
    vmovss  xmm10, dword ptr [rsi+458h]
    vmovss  xmm8, dword ptr [rsi+444h]
    vmovss  xmm0, dword ptr [rsi+450h]
    vmovss  [rsp+3D0h+elevatorInput], xmm0
    vmovss  xmm0, dword ptr [rsi+448h]
    vmovss  [rsp+3D0h+aileronInput], xmm0
  }
  if ( (_BYTE)v2040 )
  {
    m_FBWControlInputs = _RSI->m_FBWControlInputs;
    *(_QWORD *)cross.v = _RSI->m_FBWControlInputs;
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm0, xmm10, xmm10
      vaddss  xmm0, xmm1, xmm0; value
      vmovss  xmm1, cs:__real@3f000000; expo
    }
    FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm8, xmm8, xmm0
      vmulss  xmm10, xmm10, xmm0
    }
    if ( !_RSI->m_playerControlled )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vcomiss xmm0, dword ptr [rsi+940h]
      }
      if ( _RSI->m_playerControlled )
      {
        __asm
        {
          vmovss  xmm8, cs:?HFD_ABANDONED_RUDDER_VALUE@@3MA; float HFD_ABANDONED_RUDDER_VALUE
          vmovss  xmm10, cs:?HFD_ABANDONED_COLLECTIVE_VALUE@@3MA; float HFD_ABANDONED_COLLECTIVE_VALUE
          vmovss  xmm2, cs:?HFD_ABANDONED_ELEVATOR_VALUE_SPEED@@3MA; float HFD_ABANDONED_ELEVATOR_VALUE_SPEED
          vcmpltss xmm1, xmm9, cs:?HFD_ABANDONED_SPEED_THRESHOLD@@3MA; float HFD_ABANDONED_SPEED_THRESHOLD
          vmovss  xmm0, cs:?HFD_ABANDONED_ELEVATOR_VALUE@@3MA; float HFD_ABANDONED_ELEVATOR_VALUE
          vblendvps xmm1, xmm2, xmm0, xmm1
          vmovss  [rsp+3D0h+aileronInput], xmm1
          vmovss  dword ptr [rbp+2D0h+cross], xmm1
        }
      }
    }
    _RSI->m_FBWControlInputs[1] = 0.0;
    _RSI->m_FBWControlInputs[3] = 0.0;
    *(_QWORD *)cross.v = _RSI->m_FBWControlInputs;
    _RSI->m_FBWControlInputs[0] = 0.0;
    _RSI->m_GyroRudderForwardVectorSet = 0;
    vec3_t::operator[](&_RSI->m_sideVector, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2D0h+out+4]
      vmulss  xmm7, xmm0, dword ptr [rax]
    }
    vec3_t::operator[](&_RSI->m_sideVector, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2D0h+out]
      vmulss  xmm6, xmm0, dword ptr [rax]
    }
    vec3_t::operator[](&_RSI->m_sideVector, 2);
    __asm
    {
      vaddss  xmm3, xmm7, xmm6
      vmovss  xmm0, dword ptr [rbp+2D0h+out+8]
      vmulss  xmm2, xmm0, dword ptr [rax]
      vaddss  xmm3, xmm3, xmm2
      vmulss  xmm4, xmm3, cs:?HFD_GYRO_ANGULAR_YAW_VELOCITY_FACTOR@@3MA; float HFD_GYRO_ANGULAR_YAW_VELOCITY_FACTOR
      vdivss  xmm0, xmm15, xmm12
      vmulss  xmm0, xmm4, xmm0; value
      vmovss  xmm1, cs:__real@40000000; expo
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:?HFD_MANUAL_FREELOOK_MULTIPLIER@@3MA; float HFD_MANUAL_FREELOOK_MULTIPLIER
      vmovss  dword ptr [rsi+3F4h], xmm1
    }
    _RSI->m_UserControlInputs[9] = 0.0;
    _RAX = vec3_t::operator[](&_RSI->m_forwardVector, 0);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&_RSI->m_FlyByWireNormalizedVector, 0);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_forwardVector, 1);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&_RSI->m_FlyByWireNormalizedVector, 1);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_forwardVector, 2);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&_RSI->m_FlyByWireNormalizedVector, 2);
    __asm { vmovss  dword ptr [rax], xmm6 }
    m_FBWControlInputs = _RSI->m_FBWControlInputs;
  }
  if ( !HFD_ALLOW_FULL_COLLECTIVE )
  {
    *(_QWORD *)cross.v = m_FBWControlInputs;
    __asm { vcomiss xmm10, xmm11 }
    if ( HFD_ALLOW_FULL_COLLECTIVE )
    {
      __asm
      {
        vsubss  xmm0, xmm15, xmm10
        vmulss  xmm1, xmm0, cs:?HFD_CENTER_COLLECTIVE_VALUE@@3MA; float HFD_CENTER_COLLECTIVE_VALUE
        vaddss  xmm10, xmm10, xmm1
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm10, xmm13
        vsubss  xmm0, xmm15, xmm1
        vmulss  xmm2, xmm0, cs:?HFD_CENTER_COLLECTIVE_VALUE@@3MA; float HFD_CENTER_COLLECTIVE_VALUE
        vmulss  xmm1, xmm1, cs:?HFD_LOWER_COLLECTIVE_VALUE@@3MA; float HFD_LOWER_COLLECTIVE_VALUE
        vaddss  xmm10, xmm2, xmm1
      }
    }
  }
  p_m_centerOfMassWs = &_RSI->m_centerOfMassWs;
  vec3_t::operator[](&_RSI->m_centerOfMassWs, 0);
  __asm
  {
    vmovss  xmm0, [rbp+2D0h+var_2C8]
    vaddss  xmm7, xmm0, dword ptr [rax]
  }
  vec3_t::operator[](&_RSI->m_centerOfMassWs, 1);
  __asm
  {
    vmovss  xmm0, [rbp+2D0h+var_2C4]
    vaddss  xmm9, xmm0, dword ptr [rax]
  }
  vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
  __asm
  {
    vmovss  xmm0, [rbp+2D0h+var_310]
    vaddss  xmm0, xmm0, dword ptr [rax]
    vmovss  [rbp+2D0h+var_310], xmm0
  }
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    __asm { vmovups xmm6, xmmword ptr [rsi+368h] }
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_Position, 0);
    __asm { vmovss  dword ptr [rax], xmm7 }
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_Position, 1);
    __asm { vmovss  dword ptr [rax], xmm9 }
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_Position, 2);
    __asm
    {
      vmovss  xmm0, [rbp+2D0h+var_310]
      vmovss  dword ptr [rax], xmm0
    }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 0);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 1);
    __asm { vextractps dword ptr [rax], xmm6, 1 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 2);
    __asm { vextractps dword ptr [rax], xmm6, 2 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 3);
    __asm { vextractps dword ptr [rax], xmm6, 3 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 0);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_PreviousRotationQuat, 0);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 1);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_PreviousRotationQuat, 1);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 2);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_PreviousRotationQuat, 2);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_RotationQuat, 3);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec4_t::operator[](&_RSI->m_TailRotor.m_PreviousRotationQuat, 3);
    __asm
    {
      vmovss  dword ptr [rax], xmm6
      vmovsd  xmm0, qword ptr [rbp+2D0h+a]
      vmovsd  qword ptr [rbp+2D0h+var_290], xmm0
    }
    v2087.v[2] = a.v[2];
    FlightDynamicsRotorSystem::SetAirspeed(&_RSI->m_TailRotor, (vec3_t *)&v2087);
    __asm
    {
      vmulss  xmm0, xmm8, [rbp+2D0h+var_338]
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmulss  xmm3, xmm1, cs:?HFD_CONTROL_INPUT_MULTI_TAIL_ROTOR@@3MA; collective
      vmovss  dword ptr [rsp+3D0h+fmt], xmm12
      vxorps  xmm2, xmm2, xmm2; cyclicLateral
      vxorps  xmm1, xmm1, xmm1; cyclicForward
    }
    FlightDynamicsRotorSystem::SetSwashplateDT(&_RSI->m_TailRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftForceVector, 0) = 0.0;
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftForceVector, 1) = 0.0;
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftForceVector, 2) = 0.0;
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftTorqueVector, 0) = 0.0;
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftTorqueVector, 1) = 0.0;
    *vec3_t::operator[](&_RSI->m_TailRotor.m_LiftTorqueVector, 2) = 0.0;
    __asm { vmovaps xmm1, xmm12; dT }
    v1613 = 6;
    if ( !_RSI->m_playerControlled )
      v1613 = 1;
    FlightDynamicsRotorSystem::UpdateSteps(&_RSI->m_TailRotor, *(float *)&_XMM1, v1613, 1);
    __asm { vmovss  xmm0, dword ptr [rsi+740h] }
    _RDI = &_RSI->m_upVector;
    p_m_centerOfMassWs = &_RSI->m_centerOfMassWs;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm8, [rbp+2D0h+var_338]
      vaddss  xmm1, xmm0, dword ptr [rsi+47Ch]
      vmulss  xmm3, xmm1, cs:?HFD_CONTROL_INPUT_MULTI_TAIL_ROTOR@@3MA; collective
      vmovss  dword ptr [rsp+3D0h+fmt], xmm12
      vxorps  xmm2, xmm2, xmm2; cyclicLateral
      vxorps  xmm1, xmm1, xmm1; cyclicForward
    }
    FlightDynamicsRotorSystem::SetSwashplateDT(&_RSI->m_TailRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm
  {
    vmovss  [rsp+3D0h+var_374], xmm0
    vmovss  xmm8, cs:?HFD_MAIN_ROTOR_VERTICAL_OFFSET@@3MA; float HFD_MAIN_ROTOR_VERTICAL_OFFSET
  }
  _RAX = vec3_t::operator[](_RDI, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  vec3_t::operator[](p_m_centerOfMassWs, 0);
  __asm
  {
    vmulss  xmm0, xmm8, xmm6
    vaddss  xmm9, xmm0, dword ptr [rax]
  }
  _RAX = vec3_t::operator[](_RDI, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  vec3_t::operator[](p_m_centerOfMassWs, 1);
  __asm
  {
    vmulss  xmm0, xmm8, xmm6
    vaddss  xmm7, xmm0, dword ptr [rax]
  }
  _RAX = vec3_t::operator[](_RDI, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  vec3_t::operator[](p_m_centerOfMassWs, 2);
  __asm
  {
    vmulss  xmm0, xmm8, xmm6
    vaddss  xmm6, xmm0, dword ptr [rax]
    vmovups xmm0, xmmword ptr [rsi+368h]
    vmovups xmmword ptr [rbp+2D0h+var_2B0], xmm0
  }
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_Position, 0);
  __asm { vmovss  dword ptr [rax], xmm9 }
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_Position, 1);
  __asm { vmovss  dword ptr [rax], xmm7 }
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_Position, 2);
  __asm
  {
    vmovss  dword ptr [rax], xmm6
    vmovups xmm0, xmmword ptr [rbp+2D0h+var_2B0]
    vmovdqa [rbp+2D0h+var_290], xmm0
    vmovaps xmm2, xmm12
  }
  FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(&_RSI->m_MainRotor, &v2087, *(float *)&_XMM2);
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_PreviousRotationQuat, 0);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_PreviousRotationQuat, 1);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_PreviousRotationQuat, 2);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 3);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_PreviousRotationQuat, 3);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2085, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 0);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2085, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 1);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2085, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 2);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2085, 3);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_MainRotor.m_RotationQuat, 3);
  __asm
  {
    vmovss  dword ptr [rax], xmm6
    vmovsd  xmm0, qword ptr [r14]
    vmovsd  qword ptr [rbp+2D0h+var_290], xmm0
  }
  v2087.v[2] = _RSI->m_Velocity.v[2];
  p_m_MainRotor = &_RSI->m_MainRotor;
  FlightDynamicsRotorSystem::SetAirspeed(&_RSI->m_MainRotor, (vec3_t *)&v2087);
  __asm
  {
    vmovss  xmm7, [rbp+2D0h+var_338]
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm10; b
    vmovss  xmm0, dword ptr [rsi+490h]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  [rsp+3D0h+var_354], xmm0
    vmovss  xmm2, cs:?HFD_COLLISION_TIME_DETECTION@@3MA; float HFD_COLLISION_TIME_DETECTION
    vcomiss xmm2, dword ptr [rsi+2B0h]
  }
  if ( v1669 || v1670 )
    goto LABEL_168;
  __asm
  {
    vmovss  xmm0, cs:__real@bdcccccd
    vcomiss xmm10, xmm0
  }
  if ( v1669 )
    goto LABEL_164;
  __asm
  {
    vmovss  xmm1, [rsp+3D0h+var_360]
    vcomiss xmm1, xmm0
  }
  if ( v1669 )
  {
LABEL_164:
    __asm
    {
      vmovss  dword ptr [rsi+2B0h], xmm2
      vmovss  xmm8, [rsp+3D0h+var_370]
      vcomiss xmm15, dword ptr [rsi+940h]
    }
    if ( !v1669 && !v1670 )
    {
      __asm { vcomiss xmm8, cs:__real@43960000 }
      if ( v1669 )
      {
        v1669 = _RSI->m_collisionZone < (unsigned int)HFD_COLLISION_ID_LANDING_GEAR;
        v1670 = _RSI->m_collisionZone == HFD_COLLISION_ID_LANDING_GEAR;
        if ( _RSI->m_collisionZone == HFD_COLLISION_ID_LANDING_GEAR )
        {
          __asm
          {
            vmovss  xmm1, cs:?HFD_FBW_LANDING_TIMER_LEVELED_EXPO@@3MA; expo
            vmovss  xmm0, [rsp+3D0h+var_35C]; value
          }
          *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm1, xmm0, [rsp+3D0h+var_358]
            vmulss  xmm2, xmm1, cs:?HFD_FBW_LANDING_TIMER_RATE@@3MA; float HFD_FBW_LANDING_TIMER_RATE
            vmulss  xmm3, xmm2, xmm12
            vaddss  xmm0, xmm3, dword ptr [rsi+940h]
            vmovss  dword ptr [rsi+940h], xmm0
          }
        }
      }
    }
  }
  else
  {
LABEL_168:
    __asm { vmovss  xmm8, [rsp+3D0h+var_370] }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+940h]
    vmovss  xmm0, [rsp+3D0h+var_360]
    vcomiss xmm3, xmm11
  }
  if ( v1669 || v1670 )
    goto LABEL_176;
  __asm { vcomiss xmm3, xmm15 }
  if ( !v1669 )
    goto LABEL_176;
  __asm
  {
    vmovss  xmm1, cs:__real@ba83126f
    vcomiss xmm10, xmm1
  }
  if ( v1669 || v1670 )
    goto LABEL_176;
  __asm { vcomiss xmm0, xmm1 }
  if ( v1669 || v1670 )
  {
LABEL_176:
    __asm
    {
      vmovss  xmm9, cs:__real@3a83126f
      vcomiss xmm10, xmm9
    }
    if ( !v1669 && !v1670 )
      goto LABEL_178;
    __asm { vcomiss xmm0, xmm9 }
    if ( !v1669 && !v1670 )
    {
LABEL_178:
      __asm
      {
        vmulss  xmm2, xmm12, cs:?HFD_COLLISION_TIME_DECAY@@3MA; float HFD_COLLISION_TIME_DECAY
        vsubss  xmm3, xmm3, xmm2
        vmovss  dword ptr [rsi+940h], xmm3
      }
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm12, cs:?HFD_COLLISION_TIME_DECAY@@3MA; float HFD_COLLISION_TIME_DECAY
      vsubss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsi+940h], xmm2
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
    {
      __asm
      {
        vmulss  xmm2, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER_RESTORE@@3MA; w
        vmovaps xmm1, xmm15; b
        vmovss  xmm0, dword ptr [rsi+928h]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+928h], xmm0
        vmulss  xmm2, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_MAIN_ROTOR_REDUCER_RESTORE@@3MA; w
        vmovaps xmm1, xmm15; b
        vmovss  xmm0, dword ptr [rsi+924h]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsi+924h], xmm0 }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+940h]
      vmovss  xmm9, cs:__real@3a83126f
    }
  }
  __asm
  {
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm3; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  dword ptr [rsi+940h], xmm0
    vcomiss xmm0, xmm9
  }
  if ( v1691 | v1692 )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
    {
      __asm
      {
        vmulss  xmm2, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER_RESTORE@@3MA; w
        vmovaps xmm1, xmm15; b
        vmovss  xmm0, dword ptr [rsi+928h]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+928h], xmm0
        vmulss  xmm2, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_MAIN_ROTOR_REDUCER_RESTORE@@3MA; w
        vmovaps xmm1, xmm15; b
        vmovss  xmm0, dword ptr [rsi+924h]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsi+924h], xmm0 }
    }
    goto LABEL_189;
  }
  __asm { vcomiss xmm7, xmm15 }
  if ( !v1691 )
  {
LABEL_189:
    __asm { vmovss  xmm0, [rsp+3D0h+elevatorInput] }
    goto LABEL_190;
  }
  __asm { vcomiss xmm0, cs:__real@3e800000 }
  if ( !(v1691 | v1692) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+3D0h+var_358]
      vcomiss xmm0, cs:__real@3f59999a
    }
    if ( !(v1691 | v1692) )
    {
      __asm
      {
        vmovaps xmm2, xmm6; w
        vmovss  xmm1, cs:?HFD_FBW_LOWEST_COLLECTIVE_LANDED@@3MA; b
        vmovss  xmm0, [rsp+3D0h+var_354]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rsp+3D0h+var_354], xmm0
        vmovaps xmm2, xmm6; w
        vxorps  xmm1, xmm1, xmm1; b
        vmovss  xmm0, dword ptr [rsi+480h]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+480h], xmm0
        vmovss  xmm2, dword ptr [rsi+940h]; w
        vxorps  xmm1, xmm1, xmm1; b
      }
      _RBX = *(_QWORD *)cross.v;
      __asm { vmovss  xmm0, dword ptr [rbx]; a }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm2, dword ptr [rsi+940h]; w
        vxorps  xmm1, xmm1, xmm1; b
        vmovss  xmm0, [rsp+3D0h+aileronInput]; a
      }
      *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  [rsp+3D0h+aileronInput], xmm0 }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
      {
        __asm
        {
          vmulss  xmm1, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG@@3MA; float HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG
          vmulss  xmm2, xmm1, dword ptr [rsi+940h]; frac
        }
        QuatSlerp(&_RSI->m_RotationInertiaQuat, &quat_identity, *(float *)&_XMM2, &result);
        _RAX = vec4_t::operator[](&result, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 0);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec4_t::operator[](&result, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 1);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec4_t::operator[](&result, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 2);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec4_t::operator[](&result, 3);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 3);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
        __asm
        {
          vmovss  xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+2D0h+var_290], xmm11
          vmovss  dword ptr [rbp+2D0h+var_290+4], xmm11
          vmovss  dword ptr [rbp+2D0h+var_290+8], xmm11
          vmulss  xmm1, xmm12, cs:?HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG@@3MA; float HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG
          vmulss  xmm2, xmm1, dword ptr [rsi+940h]; frac
        }
        Vec3Lerp(&_RSI->m_Velocity, (const vec3_t *)&v2087, *(float *)&_XMM2, &_RSI->m_Velocity);
        _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm0, cs:?HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER@@3MA; float HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER
          vmulss  xmm1, xmm0, dword ptr [rsi+940h]
          vmulss  xmm0, xmm1, xmm12; val
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm2, xmm0; w
          vxorps  xmm1, xmm1, xmm1; b
          vmovss  xmm0, dword ptr [rsi+928h]; a
        }
        *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+928h], xmm0
          vmovss  xmm1, cs:?HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER@@3MA; float HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER
          vmulss  xmm2, xmm1, dword ptr [rsi+940h]
          vmulss  xmm0, xmm2, xmm12; val
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm2, xmm0; w
          vxorps  xmm1, xmm1, xmm1; b
          vmovss  xmm0, dword ptr [rsi+924h]; a
        }
        *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rsi+924h], xmm0 }
      }
      p_m_MainRotor = &_RSI->m_MainRotor;
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+940h]; w
    vxorps  xmm1, xmm1, xmm1; b
    vmovss  xmm0, dword ptr [rsi+488h]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+488h], xmm0
    vmovss  xmm2, dword ptr [rsi+940h]; w
    vxorps  xmm1, xmm1, xmm1; b
    vmovss  xmm0, [rsp+3D0h+elevatorInput]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
LABEL_190:
  __asm
  {
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm0; b
    vmovss  xmm0, dword ptr [rsi+488h]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, [rsp+3D0h+aileronInput]
    vxorps  xmm1, xmm0, xmm13; b
    vmovaps xmm2, xmm7; w
    vmovss  xmm0, dword ptr [rsi+480h]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+3D0h+fmt], xmm12
    vmovss  xmm3, [rsp+3D0h+var_354]; collective
    vmovaps xmm2, xmm6; cyclicLateral
    vmovaps xmm1, xmm0; cyclicForward
  }
  FlightDynamicsRotorSystem::SetSwashplateDT(p_m_MainRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb);
  FlightDynamicsRotorSystem::ResetForces(p_m_MainRotor);
  __asm { vmovaps xmm1, xmm12; dT }
  if ( _RSI->m_playerControlled )
    FlightDynamicsRotorSystem::UpdateSteps(p_m_MainRotor, *(float *)&_XMM1, 6, 1);
  else
    FlightDynamicsRotorSystem::Update(p_m_MainRotor, *(float *)&_XMM1, 1);
  __asm
  {
    vmulss  xmm7, xmm12, cs:?HFD_TURBINE_DRAG@@3MA; float HFD_TURBINE_DRAG
    vmovss  xmm0, dword ptr [rsi+8C4h]
    vmovss  xmm10, dword ptr [rbp+2D0h+var_318]
    vsubss  xmm1, xmm0, xmm10
    vmulss  xmm0, xmm1, cs:?HFD_GOVERNOR_TORQUE_RESPONSE@@3MA; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vdivss  xmm2, xmm10, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; w
    vmovss  xmm1, cs:?HFD_TURBINE_MAX_TORQUE@@3MA; b
    vmovss  xmm0, cs:?HFD_TURBINE_START_TORQUE@@3MA; a
  }
  I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm6, xmm0; b
    vmovaps xmm2, xmm7; w
    vmovss  xmm0, dword ptr [rsi+8C8h]; a
  }
  *(double *)&_XMM0 = I_flerp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  dword ptr [rsi+8C8h], xmm0
    vsubss  xmm1, xmm0, [rsp+3D0h+var_374]
    vmovss  dword ptr [rsi+56Ch], xmm1
  }
  v2062 = BG_GetFlightDynamicsManager();
  FlightDynamics::RecalculateDirectionVectors(_RSI);
  __asm
  {
    vmulss  xmm0, xmm6, cs:?HFD_TURBINE_TORQUE_DAMPENER@@3MA; float HFD_TURBINE_TORQUE_DAMPENER
    vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
    vmulss  xmm2, xmm1, dword ptr [rsi+928h]
    vmulss  xmm3, xmm2, xmm12
    vxorps  xmm1, xmm3, xmm13; scale
  }
  Vec3Scale(&_RSI->m_upVector, *(float *)&_XMM1, &start);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_AirflowVelocity, 0);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2107, 0);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_AirflowVelocity, 1);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2107, 1);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_TailRotor.m_AirflowVelocity, 2);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2107, 2);
    __asm { vmovss  dword ptr [rax], xmm6 }
    Vec3Normalize(&v2107);
    __asm
    {
      vmulss  xmm0, xmm8, cs:?HFD_TAIL_ROTOR_AIRFLOW_FACTOR@@3MA; float HFD_TAIL_ROTOR_AIRFLOW_FACTOR
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_TailRotor.m_AirflowVelocity, *(float *)&_XMM1, &_RSI->m_sideVector, (vec3_t *)&v2087);
    Vec3Cross(&_RSI->m_forwardVector, (const vec3_t *)&v2087, &cross);
    *(double *)&_XMM0 = Vec3Dot(&_RSI->m_TailRotor.m_AirflowVelocity, &_RSI->m_sideVector);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm1, cs:?HFD_TAIL_ROTOR_AUTHORITY@@3MA; float HFD_TAIL_ROTOR_AUTHORITY
      vmulss  xmm2, xmm1, cs:?HFD_TAIL_ROTOR_POSITION@@3MA; float HFD_TAIL_ROTOR_POSITION
      vmulss  xmm3, xmm2, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm4, xmm3, dword ptr [rsi+928h]
      vmulss  xmm1, xmm4, xmm12
    }
    p_cross = &cross;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
      vmulss  xmm1, xmm0, dword ptr [rsi+784h]
      vmulss  xmm2, xmm1, cs:?HFD_TAIL_BASIC_ROTOR_STRENGTH@@3MA; float HFD_TAIL_BASIC_ROTOR_STRENGTH
      vmulss  xmm3, xmm2, cs:?HFD_TAIL_ROTOR_AUTHORITY@@3MA; float HFD_TAIL_ROTOR_AUTHORITY
      vmulss  xmm0, xmm3, cs:?HFD_TAIL_ROTOR_POSITION@@3MA; float HFD_TAIL_ROTOR_POSITION
      vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm2, xmm1, dword ptr [rsi+928h]
      vmulss  xmm1, xmm2, xmm12; scale
    }
    p_cross = &_RSI->m_upVector;
  }
  Vec3Mad(&start, *(float *)&_XMM1, p_cross, &start);
  __asm
  {
    vmulss  xmm0, xmm6, cs:?HFD_TAIL_ROTOR_AUTHORITY@@3MA; float HFD_TAIL_ROTOR_AUTHORITY
    vmulss  xmm1, xmm0, cs:?HFD_TAIL_ROTOR_INDUCED_TILT@@3MA; float HFD_TAIL_ROTOR_INDUCED_TILT
    vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
    vmulss  xmm1, xmm2, xmm12; scale
  }
  Vec3Mad(&start, *(float *)&_XMM1, &_RSI->m_forwardVector, &start);
  if ( HFD_USE_ADVANCED_MAIN_ROTOR )
  {
    _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_LiftTorqueVector, 0);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2105, 0);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_LiftTorqueVector, 1);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2105, 1);
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_LiftTorqueVector, 2);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&v2105, 2);
    __asm { vmovss  dword ptr [rax], xmm6 }
    *(double *)&_XMM0 = Vec3Normalize(&v2105);
    __asm
    {
      vmulss  xmm1, xmm0, cs:?HFD_MAIN_ROTOR_CYCLIC_AUTHORITY@@3MA; float HFD_MAIN_ROTOR_CYCLIC_AUTHORITY
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm3, xmm2, dword ptr [rsi+924h]
      vmulss  xmm1, xmm3, xmm12
    }
    p_m_sideVector = &v2105;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_MAIN_BASIC_ROTOR_STRENGTH@@3MA; float HFD_MAIN_BASIC_ROTOR_STRENGTH
      vmulss  xmm1, xmm0, dword ptr [rsi+5B0h]
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm1, xmm2, xmm12; scale
    }
    Vec3Mad(&start, *(float *)&_XMM1, &_RSI->m_forwardVector, &start);
    __asm
    {
      vmovss  xmm0, cs:?HFD_MAIN_BASIC_ROTOR_STRENGTH@@3MA; float HFD_MAIN_BASIC_ROTOR_STRENGTH
      vmulss  xmm1, xmm0, dword ptr [rsi+5ACh]
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm1, xmm2, xmm12; scale
    }
    p_m_sideVector = &_RSI->m_sideVector;
  }
  Vec3Mad(&start, *(float *)&_XMM1, p_m_sideVector, &start);
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_AirflowVelocity, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&b, 0);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_AirflowVelocity, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&b, 1);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec3_t::operator[](&_RSI->m_MainRotor.m_AirflowVelocity, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&b, 2);
  __asm { vmovss  dword ptr [rax], xmm6 }
  Vec3Add(&_RSI->m_MainRotor.m_LiftForceVector, &b, &b);
  Vec3Cross(&v0, &_RSI->m_upVector, &dir);
  *(double *)&_XMM0 = Vec3Dot(&v0, &_RSI->m_upVector);
  __asm { vmovaps xmm1, xmm0; angleOfAttack }
  *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
  __asm
  {
    vandps  xmm6, xmm0, xmm14
    vmovups xmm1, xmmword ptr [r13+0]
    vmovups [rbp+2D0h+var_290], xmm1
    vmulss  xmm2, xmm6, cs:?HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_DRAG@@3MA; float HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_DRAG
    vmulss  xmm2, xmm2, [rbp+2D0h+var_2BC]
    vmovaps xmm3, xmm12
  }
  FlightDynamics::ApplyRotationDragAroundAxis(&v2087, &dir, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RSI->m_RotationInertiaQuat);
  Vec3Normalize(&dir);
  Vec3Cross(&_RSI->m_upVector, &dir, (vec3_t *)&v2087);
  Vec3Cross(&_RSI->m_Velocity, (const vec3_t *)&v2087, &dir);
  __asm
  {
    vmulss  xmm0, xmm6, [rbp+2D0h+var_2BC]
    vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_VELOCITY@@3MA; float HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_VELOCITY
    vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
    vmulss  xmm1, xmm2, xmm12; scale
  }
  Vec3Mad(&start, *(float *)&_XMM1, &dir, &start);
  *(double *)&_XMM0 = Vec3Length(&b);
  __asm
  {
    vmovaps xmm7, xmm0
    vcomiss xmm0, xmm9
  }
  if ( !(v219 | v298) )
  {
    Vec3Cross(&_RSI->m_upVector, &b, (vec3_t *)&v2087);
    __asm { vmovss  xmm6, cs:?HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_EXPO@@3MA; float HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_EXPO }
    *(double *)&_XMM0 = Vec3Dot(&_RSI->m_upVector, &b);
    __asm
    {
      vdivss  xmm0, xmm0, xmm7; value
      vmovaps xmm1, xmm6; expo
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm0; scale }
    Vec3Scale((const vec3_t *)&v2087, *(float *)&_XMM1, (vec3_t *)&v2087);
    __asm
    {
      vmulss  xmm0, xmm8, cs:?HFD_AIRFRAME_ROTOR_CENTERING_TORQUE@@3MA; float HFD_AIRFRAME_ROTOR_CENTERING_TORQUE
      vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm1, xmm1, xmm12; scale
    }
    Vec3Mad(&start, *(float *)&_XMM1, (const vec3_t *)&v2087, &start);
    __asm
    {
      vmovss  xmm0, cs:?HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_AIRFLOW@@3MA; float HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_AIRFLOW
      vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm1, xmm1, xmm12; scale
    }
    Vec3Mad(&start, *(float *)&_XMM1, (const vec3_t *)&v2087, &start);
  }
  *(double *)&_XMM0 = Vec3Normalize(&start);
  __asm { vcomiss xmm0, xmm11 }
  if ( !(v219 | v298) )
  {
    __asm
    {
      vmovss  xmm2, cs:?HFD_MAX_ALLOWED_TORQUE@@3MA; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm0; angle }
    FlightDynamics::SetRotationNonLocal(_RSI, &start, *(float *)&_XMM2);
  }
  _RAX = vec3_t::operator[](&a, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&v2106, 0);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec3_t::operator[](&a, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&v2106, 1);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec3_t::operator[](&a, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec3_t::operator[](&v2106, 2);
  __asm { vmovss  dword ptr [rax], xmm6 }
  *(double *)&_XMM0 = Vec3Normalize(&v2106);
  __asm
  {
    vmovss  xmm6, cs:__real@41cb332c
    vmulss  xmm14, xmm0, xmm6
  }
  if ( _RSI->m_playerControlled )
  {
    __asm
    {
      vmulss  xmm1, xmm6, cs:?HFD_TAIL_ROTOR_POSITION@@3MA; float HFD_TAIL_ROTOR_POSITION
      vmulss  xmm11, xmm1, xmm9
    }
    Vec3Cross(&v2106, &_RSI->m_forwardVector, (vec3_t *)&v2087);
    *(double *)&_XMM0 = Vec3Dot((const vec3_t *)&v2087, &_RSI->m_upVector);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = Vec3Dot((const vec3_t *)&v2087, &_RSI->m_sideVector);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = Vec3Dot(&a, &_RSI->m_forwardVector);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm8, xmm2, cs:__real@350637be
      vmulss  xmm1, xmm14, xmm14
      vmulss  xmm9, xmm1, cs:__real@350637be
      vmovaps xmm1, xmm7; angleOfAttack
    }
    *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm6, xmm1, cs:?HFD_AIRFLOW_CENTERING_FORCE_RUDDER_LIFT@@3MA; float HFD_AIRFLOW_CENTERING_FORCE_RUDDER_LIFT
      vmulss  xmm0, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &_RSI->m_sideVector, &_RSI->m_Velocity);
    __asm
    {
      vmulss  xmm0, xmm6, xmm11
      vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm2, xmm1, xmm12; angle
    }
    FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_upVector, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm7; angleOfAttack }
    *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm9
      vmulss  xmm6, xmm1, cs:?HFD_AIRFLOW_CENTERING_FORCE_RUDDER_DRAG@@3MA; float HFD_AIRFLOW_CENTERING_FORCE_RUDDER_DRAG
      vmulss  xmm0, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &v0, &_RSI->m_Velocity);
    __asm
    {
      vmulss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm11
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm3, xmm2, xmm12
      vxorps  xmm2, xmm3, xmm13; angle
    }
    FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_upVector, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm10; angleOfAttack }
    *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm6, xmm1, cs:?HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_LIFT@@3MA; float HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_LIFT
      vmulss  xmm0, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &_RSI->m_upVector, &_RSI->m_Velocity);
    __asm
    {
      vmulss  xmm0, xmm6, xmm11
      vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm2, xmm1, xmm12; angle
    }
    FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_sideVector, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm10; angleOfAttack }
    *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm9
      vmulss  xmm6, xmm1, cs:?HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_DRAG@@3MA; float HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_DRAG
      vmulss  xmm0, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &v0, &_RSI->m_Velocity);
    __asm
    {
      vmulss  xmm0, xmm6, xmm10
      vmulss  xmm1, xmm0, xmm11
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm3, xmm2, xmm12
      vxorps  xmm2, xmm3, xmm13; angle
    }
    FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_sideVector, *(float *)&_XMM2);
    if ( _RSI->m_playerControlled )
    {
      Vec3Cross(&v0, &_RSI->m_forwardVector, (vec3_t *)&v2087);
      *(double *)&_XMM0 = Vec3Dot((const vec3_t *)&v2087, &_RSI->m_upVector);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Vec3Dot((const vec3_t *)&v2087, &_RSI->m_sideVector);
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = Vec3Dot(&_RSI->m_Velocity, &_RSI->m_forwardVector);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm7, xmm1, cs:__real@3f000000
        vmovaps xmm1, xmm6; angleOfAttack
      }
      *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm9, xmm1, cs:?HFD_FUSELAGE_LATERL_LIFT@@3MA; float HFD_FUSELAGE_LATERL_LIFT
        vmulss  xmm3, xmm9, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
        vmulss  xmm1, xmm3, xmm12; scale
      }
      Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &_RSI->m_sideVector, &_RSI->m_Velocity);
      __asm { vmovaps xmm1, xmm8; angleOfAttack }
      *(double *)&_XMM0 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v2062->m_AirfoilData, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm6, xmm1, cs:?HFD_FUSELAGE_HORIZONTAL_LIFT@@3MA; float HFD_FUSELAGE_HORIZONTAL_LIFT
        vmulss  xmm0, xmm6, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
        vmulss  xmm1, xmm0, xmm12; scale
      }
      Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &_RSI->m_upVector, &_RSI->m_Velocity);
      __asm
      {
        vmulss  xmm0, xmm6, cs:?HFD_FUSELAGE_CENTERING_MOMENT_HORIZONTAL@@3MA; float HFD_FUSELAGE_CENTERING_MOMENT_HORIZONTAL
        vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
        vmulss  xmm2, xmm1, xmm12; angle
      }
      FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_sideVector, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm9, cs:?HFD_FUSELAGE_CENTERING_MOMENT_LATERAL@@3MA; float HFD_FUSELAGE_CENTERING_MOMENT_LATERAL
        vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
        vmulss  xmm2, xmm1, xmm12; angle
      }
      FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_upVector, *(float *)&_XMM2);
    }
  }
  if ( !_RSI->m_applyCollisionExtraImpulse )
    goto LABEL_212;
  _RSI->m_GyroGPSlocationSet = 0;
  _RSI->m_applyCollisionExtraImpulse = 0;
  __asm { vmovaps xmm1, xmm12; scale }
  Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, &_RSI->m_collisionExtraImpulse, &_RSI->m_Velocity);
  m_applyCollisionExtraAngularImpulse = _RSI->m_applyCollisionExtraAngularImpulse;
  if ( m_applyCollisionExtraAngularImpulse == 1 )
  {
    *(double *)&_XMM0 = Vec3Length(&_RSI->m_collisionExtraImpulse);
    __asm
    {
      vmulss  xmm1, xmm0, cs:?HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH@@3MA; float HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm2, xmm2, xmm12
    }
LABEL_211:
    FlightDynamics::SetRotationNonLocal(_RSI, &_RSI->m_upVector, *(float *)&_XMM2);
    goto LABEL_212;
  }
  if ( m_applyCollisionExtraAngularImpulse == -1 )
  {
    *(double *)&_XMM0 = Vec3Length(&_RSI->m_collisionExtraImpulse);
    __asm
    {
      vmulss  xmm1, xmm0, cs:?HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH@@3MA; float HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MOI@@3MA; float HFD_AIRFRAME_INVERSE_MOI
      vmulss  xmm3, xmm2, xmm12
      vxorps  xmm2, xmm3, xmm13; angle
    }
    goto LABEL_211;
  }
LABEL_212:
  QuatMultiply(&_RSI->m_RotationInertiaQuat, &_RSI->m_RotationVelocity, &v2109);
  _RAX = vec4_t::operator[](&v2109, 0);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 0);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2109, 1);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 1);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2109, 2);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 2);
  __asm { vmovss  dword ptr [rax], xmm6 }
  _RAX = vec4_t::operator[](&v2109, 3);
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 3);
  __asm
  {
    vmovss  dword ptr [rax], xmm6
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rbp+2D0h+var_290], xmm0
    vmovaps xmm3, xmm12
    vmovss  xmm2, cs:?HFD_AIRFRAME_ROTATION_CYCLIC_PITCH_DRAG@@3MA; float HFD_AIRFRAME_ROTATION_CYCLIC_PITCH_DRAG
  }
  FlightDynamics::ApplyRotationDragAroundAxis(&v2087, &_RSI->m_sideVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RSI->m_RotationInertiaQuat);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rbp+2D0h+var_290], xmm0
    vmovaps xmm3, xmm12
    vmovss  xmm2, cs:?HFD_AIRFRAME_ROTATION_CYCLIC_AILERON_DRAG@@3MA; float HFD_AIRFRAME_ROTATION_CYCLIC_AILERON_DRAG
  }
  FlightDynamics::ApplyRotationDragAroundAxis(&v2087, &_RSI->m_forwardVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RSI->m_RotationInertiaQuat);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rbp+2D0h+var_290], xmm0
    vmovaps xmm3, xmm12
    vmovss  xmm2, cs:?HFD_AIRFRAME_ROTATION_TAIL_ROTOR_DRAG@@3MA; float HFD_AIRFRAME_ROTATION_TAIL_ROTOR_DRAG
  }
  FlightDynamics::ApplyRotationDragAroundAxis(&v2087, &_RSI->m_upVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RSI->m_RotationInertiaQuat);
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 0);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_244;
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 1);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_244;
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 2);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_244;
  _RAX = vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 3);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
  {
LABEL_244:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2848, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationInertiaQuat )[0] ) && !IS_NAN( ( m_RotationInertiaQuat )[1] ) && !IS_NAN( ( m_RotationInertiaQuat )[2] ) && !IS_NAN( ( m_RotationInertiaQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationInertiaQuat )[0] ) && !IS_NAN( ( m_RotationInertiaQuat )[1] ) && !IS_NAN( ( m_RotationInertiaQuat )[2] ) && !IS_NAN( ( m_RotationInertiaQuat )[3] )") )
      __debugbreak();
  }
  FlightDynamics::ExitSecondDerivativeMode(_RSI);
  _RAX = vec4_t::operator[](&_RSI->m_RotationQuaternion, 0);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_245;
  _RAX = vec4_t::operator[](&_RSI->m_RotationQuaternion, 1);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_245;
  _RAX = vec4_t::operator[](&_RSI->m_RotationQuaternion, 2);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_245;
  _RAX = vec4_t::operator[](&_RSI->m_RotationQuaternion, 3);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
  {
LABEL_245:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2852, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] )") )
      __debugbreak();
  }
  if ( HFD_USE_ADVANCED_MAIN_ROTOR )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_limiter, "fd_helicopter_altitude_limiter");
    __asm { vmovaps xmm6, xmm0 }
    _RAX = vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
    __asm { vcomiss xmm6, dword ptr [rax] }
    if ( v219 )
    {
      _RAX = vec3_t::operator[](&_RSI->m_centerOfMassWs, 2);
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm6, xmm0, xmm6
      }
      Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_limiter_range, "fd_helicopter_altitude_limiter_range");
      __asm
      {
        vdivss  xmm0, xmm6, xmm0; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vsubss  xmm15, xmm15, xmm0 }
    }
    __asm
    {
      vmulss  xmm1, xmm15, cs:?HFD_MAIN_ROTOR_LIFT_MULTIPLIER@@3MA; float HFD_MAIN_ROTOR_LIFT_MULTIPLIER
      vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
      vmulss  xmm3, xmm2, dword ptr [rsi+924h]
    }
    p_m_AirflowVelocity = &_RSI->m_MainRotor.m_AirflowVelocity;
  }
  else
  {
    p_m_AirflowVelocity = &_RSI->m_MainRotor.m_RotorAxis;
    __asm
    {
      vmovss  xmm0, cs:?HFD_MAIN_BASIC_ROTOR_LIFT_STRENGTH@@3MA; float HFD_MAIN_BASIC_ROTOR_LIFT_STRENGTH
      vmulss  xmm1, xmm0, dword ptr [rsi+5B4h]
      vmulss  xmm2, xmm1, cs:?HFD_MAIN_ROTOR_LIFT_MULTIPLIER@@3MA; float HFD_MAIN_ROTOR_LIFT_MULTIPLIER
      vmulss  xmm3, xmm2, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
    }
  }
  __asm { vmulss  xmm1, xmm3, xmm12; scale }
  Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, p_m_AirflowVelocity, &_RSI->m_Velocity);
  v1993 = (vec4_t *)&_RSI->m_sideVector;
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    __asm
    {
      vmovss  xmm0, [rsp+3D0h+var_370]
      vmulss  xmm0, xmm0, cs:?HFD_TAIL_ROTOR_AIRFLOW_FACTOR@@3MA; float HFD_TAIL_ROTOR_AIRFLOW_FACTOR
      vmulss  xmm1, xmm0, xmm12; scale
    }
    Vec3Mad(&_RSI->m_TailRotor.m_AirflowVelocity, *(float *)&_XMM1, (const vec3_t *)v1993, (vec3_t *)&v2087);
    __asm
    {
      vmovss  xmm0, cs:?HFD_TAIL_ROTOR_LIFT_MULTIPLIER@@3MA; float HFD_TAIL_ROTOR_LIFT_MULTIPLIER
      vmulss  xmm1, xmm0, dword ptr [rsi+928h]
    }
    v1993 = &v2087;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+784h]
      vmulss  xmm1, xmm0, dword ptr [rsi+928h]
      vmulss  xmm2, xmm1, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
      vmulss  xmm3, xmm2, cs:?HFD_TAIL_BASIC_ROTOR_LIFT_STRENGTH@@3MA; float HFD_TAIL_BASIC_ROTOR_LIFT_STRENGTH
      vmulss  xmm0, xmm3, cs:?HFD_TAIL_BASIC_ROTOR_STRENGTH@@3MA; float HFD_TAIL_BASIC_ROTOR_STRENGTH
      vmulss  xmm1, xmm0, cs:?HFD_TAIL_ROTOR_LIFT_MULTIPLIER@@3MA; float HFD_TAIL_ROTOR_LIFT_MULTIPLIER
    }
  }
  __asm
  {
    vmulss  xmm2, xmm1, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
    vmulss  xmm1, xmm2, xmm12; scale
  }
  Vec3Mad(&_RSI->m_Velocity, *(float *)&_XMM1, (const vec3_t *)v1993, &_RSI->m_Velocity);
  _RAX = vec3_t::operator[](&_RSI->m_Velocity, 0);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_246;
  _RAX = vec3_t::operator[](&_RSI->m_Velocity, 1);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
    goto LABEL_246;
  _RAX = vec3_t::operator[](&_RSI->m_Velocity, 2);
  __asm { vmovss  xmm0, dword ptr [rax]; x }
  if ( IS_NAN(*(float *)&_XMM0) )
  {
LABEL_246:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2885, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] )") )
      __debugbreak();
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_force_stationary, "fd_helicopter_force_stationary") )
  {
    *vec3_t::operator[](&_RSI->m_Velocity, 0) = 0.0;
    *vec3_t::operator[](&_RSI->m_Velocity, 1) = 0.0;
    *vec3_t::operator[](&_RSI->m_Velocity, 2) = 0.0;
    *vec3_t::operator[](&_RSI->m_Velocity, 2) = 1.0;
    *vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 0) = 0.0;
    *vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 1) = 0.0;
    *vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 2) = 0.0;
    *vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 3) = 0.0;
    *vec4_t::operator[](&_RSI->m_RotationInertiaQuat, 3) = 1.0;
  }
  _RAX = vec3_t::operator[](&_RSI->m_Position, 2);
  __asm
  {
    vmovss  xmm0, cs:__real@c59c4000
    vcomiss xmm0, dword ptr [rax]
  }
  if ( !(v219 | v298) )
    *vec3_t::operator[](&_RSI->m_Velocity, 2) = 1000.0;
LABEL_241:
  Sys_ProfEndNamedEvent();
  _R11 = &v2111;
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
HelicopterDynamics::DebugDraw
==============
*/
void HelicopterDynamics::DebugDraw(HelicopterDynamics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  vec4_t *setColor; 
  float v38; 
  char _Buffer[128]; 

  _RDI = y;
  _RSI = x;
  _RBX = this;
  if ( Sys_IsMainThread() && scrPlace && _RSI && _RDI && _RBX->m_playerControlled )
  {
    __asm
    {
      vmovss  xmm0, [rsp+118h+tabWidth]
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovaps [rsp+118h+var_38], xmm6
      vmovss  xmm6, [rsp+118h+charHeight]
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rbx+1A4h]
      vmovss  xmm2, dword ptr [rbx+1A8h]
      vmovss  xmm4, dword ptr [rbx+1ACh]
      vmovss  xmm3, dword ptr [rbx+5B8h]
      vmovss  xmm5, dword ptr [rbx+570h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm4, xmm0, cs:__real@3d68ba2f
      vcvtss2sd xmm2, xmm4, xmm4
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm5, xmm5, xmm5
      vmovq   r8, xmm2
      vmovq   r9, xmm3
      vmovsd  [rsp+118h+setColor], xmm5
    }
    j_sprintf(_Buffer, "%f MPH - %f RPM - torque %f ", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&setColor);
    __asm
    {
      vmovss  xmm0, cs:__real@41000000
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+118h+var_E0], xmm0
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorWhiteFaded, 0, 1, v38, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovaps xmm6, [rsp+118h+var_38]
      vmovss  dword ptr [rdi], xmm0
    }
  }
}

/*
==============
HelicopterDynamics::GetAngularPositionForRotorIndex
==============
*/
float HelicopterDynamics::GetAngularPositionForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rcx+78Ch] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rcx+5BCh] }
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetAngularPositionStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  bool v20; 
  char v40; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovss  xmm2, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:?HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR
    vmovss  xmm3, dword ptr [rcx+938h]
    vmovss  xmm4, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE
    vandps  xmm1, xmm2, xmm5
    vxorps  xmm7, xmm7, xmm7
  }
  if ( rotorIndex == 1 )
  {
    __asm
    {
      vmulss  xmm1, xmm2, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
      vmovss  xmm9, cs:?HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR_TAIL@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR_TAIL
      vmovss  xmm4, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL
      vxorps  xmm3, xmm3, xmm3
    }
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rcx+78Ch] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rcx+5BCh] }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm3
    vmulss  xmm8, xmm0, cs:__real@40c00000
  }
  v20 = rotorIndex == 0;
  if ( rotorIndex )
  {
    v20 = (unsigned int)rotorIndex <= 1;
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rcx+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rcx+5B8h] }
  }
  __asm
  {
    vandps  xmm0, xmm0, xmm5
    vdivss  xmm0, xmm0, cs:?HFD_ROTOR_STROBE_MULTIPLIER_HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_HZ
    vcomiss xmm0, xmm4
  }
  if ( v20 )
  {
    __asm { vmulss  xmm0, xmm8, cs:__real@3e2aaaab }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_58], xmm10
      vmovss  xmm10, cs:?HFD_ROTOR_STROBE_TIMING_EXPO@@3MA; float HFD_ROTOR_STROBE_TIMING_EXPO
    }
    if ( rotorIndex )
    {
      if ( rotorIndex == 1 )
        __asm { vmovss  xmm0, dword ptr [rcx+788h] }
      else
        __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rcx+5B8h] }
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vdivss  xmm0, xmm0, xmm1; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm10; expo }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm2, xmm1, cs:?HFD_ROTOR_STROBE_MULTIPLIER_1HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_1HZ
      vmovss  xmm1, cs:__real@43b40000; Y
      vmulss  xmm0, xmm0, xmm9
      vaddss  xmm2, xmm2, xmm0
      vmulss  xmm0, xmm2, xmm8; X
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vcomiss xmm0, xmm7
      vmulss  xmm1, xmm0, cs:__real@3e2aaaab
      vmovaps xmm10, [rsp+78h+var_58]
      vmovaps xmm6, [rsp+78h+var_18]
    }
    if ( v40 )
      __asm { vaddss  xmm0, xmm1, cs:__real@42700000 }
    else
      __asm { vmovaps xmm0, xmm1 }
  }
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::GetAverageBladePitch
==============
*/
float FlightDynamicsRotorSystem::GetAverageBladePitch(FlightDynamicsRotorSystem *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+0A0h] }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::GetAveragePitchChange
==============
*/
float FlightDynamicsRotorSystem::GetAveragePitchChange(FlightDynamicsRotorSystem *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+0A4h] }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int m_BladeCount; 
  int v17; 
  bool v24; 
  bool v25; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RSI = this;
  __asm { vmovaps xmmword ptr [rax-78h], xmm11 }
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      goto LABEL_8;
    m_BladeCount = this->m_TailRotor.m_BladeCount;
  }
  else
  {
    m_BladeCount = this->m_MainRotor.m_BladeCount;
  }
  if ( m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1317, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_8:
  __asm
  {
    vmovss  xmm7, cs:__real@43b40000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vdivss  xmm11, xmm7, xmm0
  }
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      goto LABEL_15;
    v17 = _RSI->m_TailRotor.m_BladeCount;
  }
  else
  {
    v17 = _RSI->m_MainRotor.m_BladeCount;
  }
  if ( v17 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1271, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_15:
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, ebp
    vxorps  xmm6, xmm6, xmm6
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rsi+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rsi+5B8h] }
  }
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm1, xmm0, cs:?HFD_ROTOR_STROBE_MULTIPLIER_HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_HZ
  }
  v24 = 0;
  v25 = rotorIndex == 0;
  if ( rotorIndex )
  {
    v24 = rotorIndex == 0;
    v25 = rotorIndex == 1;
    if ( rotorIndex != 1 )
      goto LABEL_32;
    __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL }
  }
  else
  {
    __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE }
  }
  if ( !v24 && !v25 )
  {
    __asm { vmovaps [rsp+0A8h+var_58], xmm9 }
    *(double *)&_XMM0 = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(_RSI, rotorIndex);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@40c00000; X
      vmovaps xmm1, xmm7; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm9, xmm0 }
    if ( rotorIndex )
      __asm { vmovss  xmm1, dword ptr [rsi+78Ch] }
    else
      __asm { vmovss  xmm1, dword ptr [rsi+5BCh] }
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40c00000; X
      vmovaps xmm1, xmm7; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm0, xmm9
      vcomiss xmm1, cs:__real@bc23d70a
      vmovaps xmm9, [rsp+0A8h+var_58]
    }
    if ( v24 )
    {
      __asm { vaddss  xmm2, xmm1, xmm7 }
    }
    else
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm2, xmm1, xmm6, xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm10, xmm2
      vmulss  xmm1, xmm0, cs:__real@3b360b61
      vcvttss2si eax, xmm1
    }
  }
LABEL_32:
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm10, [rsp+0A8h+var_68]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm0, xmm0, xmm11
    vmovaps xmm11, [rsp+0A8h+var_78]
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetBladeDeflectionForRotorIndex
==============
*/
float HelicopterDynamics::GetBladeDeflectionForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int m_BladeCount; 
  int v29; 
  bool v30; 
  int v32; 
  __int64 v53; 
  __int64 v54; 
  char v59; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm9
  }
  _R14 = this;
  __asm { vmovaps [rsp+0A8h+var_68], xmm10 }
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
    {
      m_BladeCount = 2;
      goto LABEL_9;
    }
    m_BladeCount = this->m_TailRotor.m_BladeCount;
  }
  else
  {
    m_BladeCount = this->m_MainRotor.m_BladeCount;
  }
  if ( m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1442, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_9:
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, edi
  }
  *(double *)&_XMM0 = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(_R14, rotorIndex);
  __asm
  {
    vmovss  xmm7, cs:__real@43b40000
    vmulss  xmm0, xmm0, cs:__real@40c00000; X
    vmovaps xmm1, xmm7; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm1, dword ptr [r14+78Ch] }
    else
      __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm { vmovss  xmm1, dword ptr [r14+5BCh] }
  }
  __asm
  {
    vmulss  xmm0, xmm1, cs:__real@40c00000; X
    vmovaps xmm1, xmm7; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, xmm9
    vcomiss xmm1, cs:__real@bc23d70a
  }
  if ( v30 )
  {
    __asm { vaddss  xmm2, xmm1, xmm7 }
  }
  else
  {
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm2, xmm1, xmm6, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm10, xmm2
    vmulss  xmm7, xmm0, cs:__real@3b360b61
    vcvttss2si r12d, xmm7
  }
  v29 = bladeIndex - _ER12;
  v30 = 0;
  if ( rotorIndex )
  {
    v30 = rotorIndex == 0;
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [r14+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [r14+5B8h] }
  }
  __asm { vcomiss xmm0, cs:__real@ba83126f }
  v32 = v29 + 1;
  if ( !v30 )
    v32 = v29 - 1;
  if ( v29 < m_BladeCount )
  {
    if ( v29 < 0 )
      v29 += m_BladeCount;
  }
  else
  {
    v29 -= m_BladeCount;
  }
  if ( v32 < m_BladeCount )
  {
    if ( v32 < 0 )
      v32 += m_BladeCount;
  }
  else
  {
    v32 -= m_BladeCount;
  }
  if ( (unsigned int)v29 >= 6 )
  {
    LODWORD(v53) = v29;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1482, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v53, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v32 >= 6 )
  {
    LODWORD(v54) = 6;
    LODWORD(v53) = v32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedNextBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedNextBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  if ( (unsigned int)bladeIndex >= 6 )
  {
    LODWORD(v54) = 6;
    LODWORD(v53) = bladeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1484, ASSERT_TYPE_ASSERT, "(unsigned)( bladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "bladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( !rotorIndex )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vcvtsi2ss xmm0, xmm0, r12d
      vsubss  xmm1, xmm7, xmm0
      vsubss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm2, xmm3
      vmulss  xmm1, xmm0, dword ptr [rcx+r14]
      vmulss  xmm0, xmm3, dword ptr [rcx+r14]
    }
    goto LABEL_45;
  }
  if ( rotorIndex == 1 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vcvtsi2ss xmm0, xmm0, r12d
      vsubss  xmm1, xmm7, xmm0
      vsubss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm2, xmm3
      vmulss  xmm1, xmm0, dword ptr [rcx+r14+7D4h]
      vmulss  xmm0, xmm3, dword ptr [rcx+r14+7D4h]
    }
LABEL_45:
    __asm { vaddss  xmm0, xmm1, xmm0 }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetBladeIndexStrobeForRotorIndex
==============
*/
__int64 HelicopterDynamics::GetBladeIndexStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int m_BladeCount; 
  bool v17; 
  bool v18; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_38], xmm10
  }
  _RBP = this;
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
    {
      m_BladeCount = 2;
      goto LABEL_9;
    }
    m_BladeCount = this->m_TailRotor.m_BladeCount;
  }
  else
  {
    m_BladeCount = this->m_MainRotor.m_BladeCount;
  }
  if ( m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1271, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_9:
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, esi
    vxorps  xmm6, xmm6, xmm6
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rbp+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rbp+5B8h] }
  }
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm1, xmm0, cs:?HFD_ROTOR_STROBE_MULTIPLIER_HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_HZ
  }
  v17 = 0;
  v18 = rotorIndex == 0;
  if ( rotorIndex )
  {
    v17 = rotorIndex == 0;
    v18 = rotorIndex == 1;
    if ( rotorIndex != 1 )
      goto LABEL_29;
    __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL }
  }
  else
  {
    __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE }
  }
  if ( !v17 && !v18 )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm9 }
    *(double *)&_XMM0 = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(_RBP, rotorIndex);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@40c00000; X
      vmovss  xmm1, cs:__real@43b40000; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm9, xmm0 }
    if ( rotorIndex )
      __asm { vmovss  xmm1, dword ptr [rbp+78Ch] }
    else
      __asm { vmovss  xmm1, dword ptr [rbp+5BCh] }
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40c00000; X
      vmovss  xmm1, cs:__real@43b40000; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm0, xmm9
      vcomiss xmm1, cs:__real@bc23d70a
      vmovaps xmm9, [rsp+68h+var_28]
    }
    if ( v17 )
    {
      __asm { vaddss  xmm2, xmm1, cs:__real@43b40000 }
    }
    else
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm2, xmm1, xmm6, xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm10, xmm2
      vmulss  xmm1, xmm0, cs:__real@3b360b61
      vcvttss2si eax, xmm1
    }
    bladeIndex -= _EAX;
    if ( bladeIndex < m_BladeCount )
    {
      if ( bladeIndex < 0 )
        bladeIndex += m_BladeCount;
    }
    else
    {
      bladeIndex -= m_BladeCount;
    }
  }
LABEL_29:
  result = (unsigned int)bladeIndex;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm10, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
HelicopterDynamics::GetBladePitchForRotorIndex
==============
*/
float HelicopterDynamics::GetBladePitchForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  _R9 = this;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
    {
      _RCX = 44i64 * bladeIndex;
      __asm { vmovss  xmm0, dword ptr [rcx+r9+7D0h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    _RCX = 44i64 * bladeIndex;
    __asm { vmovss  xmm0, dword ptr [rcx+r9+600h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetBladePitchStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetBladePitchStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  __int64 v12; 
  int m_BladeCount; 
  char v26; 
  int v34; 
  int v35; 
  __int64 v48; 
  __int64 v49; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBP = this;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v12 = bladeIndex;
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
    {
      m_BladeCount = 2;
      goto LABEL_9;
    }
    m_BladeCount = this->m_TailRotor.m_BladeCount;
  }
  else
  {
    m_BladeCount = this->m_MainRotor.m_BladeCount;
  }
  if ( m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1333, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_9:
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, esi
  }
  *(double *)&_XMM0 = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(_RBP, rotorIndex);
  __asm
  {
    vmovss  xmm7, cs:__real@40c00000
    vmovss  xmm6, cs:__real@43b40000
    vmulss  xmm0, xmm0, xmm7; X
    vmovaps xmm1, xmm6; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vxorps  xmm8, xmm8, xmm8
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm1, dword ptr [rbp+78Ch] }
    else
      __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm { vmovss  xmm1, dword ptr [rbp+5BCh] }
  }
  __asm
  {
    vmulss  xmm0, xmm1, xmm7; X
    vmovaps xmm1, xmm6; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, xmm9
    vcomiss xmm1, cs:__real@bc23d70a
  }
  if ( v26 )
  {
    __asm { vaddss  xmm2, xmm1, xmm6 }
  }
  else
  {
    __asm
    {
      vcmpltss xmm0, xmm1, xmm8
      vblendvps xmm2, xmm1, xmm8, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm10, xmm2
    vmulss  xmm1, xmm0, cs:__real@3b360b61
    vcvttss2si edx, xmm1
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm6, dword ptr [rbp+788h] }
    else
      __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  else
  {
    __asm { vmovss  xmm6, dword ptr [rbp+5B8h] }
  }
  v34 = v12 - _EDX;
  __asm { vcomiss xmm6, cs:__real@ba83126f }
  v35 = v12 - _EDX + 1;
  if ( (unsigned int)v12 >= _EDX )
    v35 = v12 - _EDX - 1;
  if ( v34 < m_BladeCount )
  {
    if ( v34 < 0 )
      v34 += m_BladeCount;
  }
  else
  {
    v34 -= m_BladeCount;
  }
  if ( v35 < m_BladeCount )
  {
    if ( v35 < 0 )
      v35 += m_BladeCount;
  }
  else
  {
    v35 -= m_BladeCount;
  }
  if ( (unsigned int)v34 >= 6 )
  {
    LODWORD(v48) = v34;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1374, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v48, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v35 >= 6 )
  {
    LODWORD(v49) = 6;
    LODWORD(v48) = v35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1375, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedNextBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedNextBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= 6 )
  {
    LODWORD(v49) = 6;
    LODWORD(v48) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( bladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "bladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  __asm
  {
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm9, xmm6, cs:?HFD_ROTOR_STROBE_MULTIPLIER_HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_HZ
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
    {
      __asm { vcomiss xmm9, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL }
      _RCX = 44 * v12;
      __asm { vmovss  xmm0, dword ptr [rcx+rbp+7D0h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    __asm { vcomiss xmm9, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE }
    _RCX = 44 * v12;
    __asm { vmovss  xmm0, dword ptr [rcx+rbp+600h] }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetCameraFovDelta
==============
*/
float HelicopterDynamics::GetCameraFovDelta(HelicopterDynamics *this)
{
  FlightDynamicsManager *FlightDynamicsManager; 
  LocalClientNum_t LocalClientForWorld; 

  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  if ( !FlightDynamicsManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 868, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
    __debugbreak();
  LocalClientForWorld = Physics_GetLocalClientForWorld(this->m_worldId);
  _RAX = FlightDynamicsManager::GetCameraCurrentData(FlightDynamicsManager, LocalClientForWorld);
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm { vmovss  xmm0, dword ptr [rax+110h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 871, ASSERT_TYPE_ASSERT, "(fdLocalCameraData)", (const char *)&queryFormat, "fdLocalCameraData") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+110h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetMaxGovernorSpeed
==============
*/
float HelicopterDynamics::GetMaxGovernorSpeed(HelicopterDynamics *this)
{
  __asm { vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED }
  return *(float *)&_XMM0;
}

/*
==============
HelicopterDynamics::GetMutableVfxData
==============
*/
HelicopterDynamics::VfxData *HelicopterDynamics::GetMutableVfxData(HelicopterDynamics *this)
{
  return &this->m_vfx;
}

/*
==============
HelicopterDynamics::GetNumberOfBladesForRotorIndex
==============
*/
__int64 HelicopterDynamics::GetNumberOfBladesForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  if ( !rotorIndex )
    return (unsigned int)this->m_MainRotor.m_BladeCount;
  if ( rotorIndex == 1 )
    return (unsigned int)this->m_TailRotor.m_BladeCount;
  return 2i64;
}

/*
==============
HelicopterDynamics::GetRPMForRotorIndex
==============
*/
float HelicopterDynamics::GetRPMForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rcx+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rcx+5B8h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularPosition
==============
*/
float FlightDynamicsRotorSystem::GetRotorAngularPosition(FlightDynamicsRotorSystem *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+9Ch] }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularRPM
==============
*/
float FlightDynamicsRotorSystem::GetRotorAngularRPM(FlightDynamicsRotorSystem *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+98h] }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAxis
==============
*/
void FlightDynamicsRotorSystem::GetRotorAxis(FlightDynamicsRotorSystem *this, vec3_t *axis)
{
  *axis = this->m_RotorAxis;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorTorqueAxis
==============
*/
void FlightDynamicsRotorSystem::GetRotorTorqueAxis(FlightDynamicsRotorSystem *this, vec3_t *rotorTorqueAxis)
{
  *rotorTorqueAxis = this->m_LiftTorqueVector;
}

/*
==============
HelicopterDynamics::GetSoundHorn
==============
*/
__int64 HelicopterDynamics::GetSoundHorn(HelicopterDynamics *this)
{
  return this->m_sound.Horn;
}

/*
==============
HelicopterDynamics::GetSoundValuesFD
==============
*/
void HelicopterDynamics::GetSoundValuesFD(HelicopterDynamics *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, float *outGear, float *outMph, bool *outTurbineStart, bool *outTurbineStop, vec3_t *outPosition)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+5B8h]
    vdivss  xmm0, xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; val
    vmovaps [rsp+38h+var_18], xmm7
  }
  _RBX = outThrottle;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RDI = this;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = outRpmNormal;
  __asm
  {
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm0, dword ptr [rdi+8C8h]
    vdivss  xmm0, xmm0, cs:?HFD_TURBINE_MAX_TORQUE@@3MA; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rdi+5C0h]
    vaddss  xmm0, xmm1, dword ptr [rdi+5C4h]; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = outGear;
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm7; max
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm0, dword ptr [rdi+4B4h]
    vmulss  xmm3, xmm0, cs:__real@37a7c5ac
  }
  _RAX = outBrake;
  __asm
  {
    vmovss  dword ptr [rax], xmm3
    vmovss  xmm0, dword ptr [rdi+790h]
    vaddss  xmm0, xmm0, dword ptr [rdi+794h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = outMph;
  __asm
  {
    vmovaps xmm7, [rsp+38h+var_18]
    vmovss  dword ptr [rax], xmm0
  }
  *outTurbineStart = _RDI->m_TurbineAudioIgniter;
  *outTurbineStop = _RDI->m_TurbineAudioShutdown;
  *outPosition = _RDI->m_TailRotor.m_Position;
}

/*
==============
HelicopterDynamics::GetStrobeEffectToggle
==============
*/
bool HelicopterDynamics::GetStrobeEffectToggle(HelicopterDynamics *this, int rotorIndex)
{
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      __asm { vmovss  xmm0, dword ptr [rcx+788h] }
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rcx+5B8h] }
  }
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm1, xmm0, cs:?HFD_ROTOR_STROBE_MULTIPLIER_HZ@@3MA; float HFD_ROTOR_STROBE_MULTIPLIER_HZ
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
    {
      __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL }
      return (unsigned int)rotorIndex > 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    __asm { vcomiss xmm1, cs:?HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE@@3MA; float HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE }
    return (unsigned __int8)rotorIndex != 0;
  }
}

/*
==============
HelicopterDynamics::InitializeHelicopterRotors
==============
*/
void HelicopterDynamics::InitializeHelicopterRotors(HelicopterDynamics *this)
{
  const dvar_t *v20; 
  float fmt; 
  float fmta; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 

  __asm
  {
    vmovss  xmm0, cs:?HFD_BLADE_MAX_DEFLECTION_MAIN@@3MA; float HFD_BLADE_MAX_DEFLECTION_MAIN
    vmovss  xmm1, cs:?HFD_MAIN_ROTOR_BLADE_WEIGHT@@3MA; float HFD_MAIN_ROTOR_BLADE_WEIGHT
  }
  _RDI = this;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, cs:__real@3d21428b
    vmulss  xmm3, xmm6, cs:?HFD_MAIN_ROTOR_BLADE_WIDTH@@3MA; bladeWidth
    vmulss  xmm2, xmm6, cs:?HFD_MAIN_ROTOR_BLADE_LENGTH@@3MA; bladeLength
    vmovaps [rsp+78h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+78h+var_38], xmm7
    vmovss  [rsp+78h+var_40], xmm7
    vmovss  dword ptr [rsp+78h+var_48], xmm7
    vmovss  dword ptr [rsp+78h+var_50], xmm0
    vmovss  dword ptr [rsp+78h+fmt], xmm1
  }
  FlightDynamicsRotorSystem::SetupRotor(&this->m_MainRotor, 5, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v25, v27, v29, v31, this->m_worldId);
  __asm
  {
    vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_COLLECTIVE@@3MA; float HFD_CONTROL_INPUT_DAMPER_COLLECTIVE
    vmovss  xmm0, cs:?HFD_CONTROL_INPUT_MULTI@@3MA; float HFD_CONTROL_INPUT_MULTI
    vmovss  dword ptr [rdi+5A4h], xmm0
    vmovss  xmm0, cs:__real@42b40000
    vmovss  dword ptr [rdi+5A8h], xmm1
    vmovss  xmm1, cs:?HFD_TAIL_ROTOR_BLADE_WEIGHT@@3MA; float HFD_TAIL_ROTOR_BLADE_WEIGHT
    vmulss  xmm3, xmm6, cs:?HFD_TAIL_ROTOR_BLADE_WIDTH@@3MA; bladeWidth
    vmulss  xmm2, xmm6, cs:?HFD_TAIL_ROTOR_BLADE_LENGTH@@3MA; bladeLength
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  xmm0, cs:?HFD_BLADE_MAX_DEFLECTION_TAIL@@3MA; float HFD_BLADE_MAX_DEFLECTION_TAIL
    vmovss  [rsp+78h+var_40], xmm7
    vmovss  dword ptr [rsp+78h+var_48], xmm7
    vmovss  dword ptr [rsp+78h+var_50], xmm0
    vmovss  dword ptr [rsp+78h+fmt], xmm1
  }
  FlightDynamicsRotorSystem::SetupRotor(&_RDI->m_TailRotor, 2, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v26, v28, v30, v32, _RDI->m_worldId);
  __asm
  {
    vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR@@3MA; float HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR
    vmovss  xmm0, cs:?HFD_CONTROL_INPUT_MULTI@@3MA; float HFD_CONTROL_INPUT_MULTI
    vmovss  dword ptr [rdi+778h], xmm1
    vmovss  xmm1, cs:__real@41100000; value
    vmovss  dword ptr [rdi+774h], xmm0
  }
  _RDI->m_NumberOfRotors = 2;
  Dvar_SetFloat_Internal(DVARFLT_fd_helicopter_swash_driver, *(float *)&_XMM1);
  v20 = DVARFLT_fd_helicopter_swash_driver;
  if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  LODWORD(_RDI->m_MainRotorSwashplateDriverOffset) = v20->current.integer;
}

/*
==============
HelicopterDynamics::InitializeVariables
==============
*/
void HelicopterDynamics::InitializeVariables(HelicopterDynamics *this)
{
  this->m_DynamicsModel = FD_ROTARY_WING;
  this->m_GyroAltiudeStrength = 0.0;
  this->m_GyroAltitudeSet = 0;
  this->m_GyroRudderForwardVectorSet = 0;
  *(_QWORD *)&this->m_GyroRudderStrength = 0i64;
  *(_QWORD *)&this->m_EmergencyLevelForCollective = 0i64;
  *(_QWORD *)&this->m_TurbineTorque = 0i64;
  *(_QWORD *)&this->m_GyroElevatorRate = 0i64;
  *(_QWORD *)&this->m_GyroManualLimiterAileron = 0i64;
  *(_QWORD *)&this->m_GyroFBWEnhancerRudderAccumulator = 0i64;
  this->m_GyroFBWEnhancerAileronAccumulatorVelocity = 0.0;
  this->m_ManualControlTimer = 0.0;
  *(_QWORD *)&this->m_PreviousUserControlled = 0i64;
  this->m_GyroGPSlocationSet = 0;
  *(_QWORD *)this->m_GyroVelocityDelta.v = 0i64;
  this->m_GyroVelocityDelta.v[2] = 0.0;
  this->m_MainRotorSwashplateDriverOffset = 0.0;
  *(_WORD *)&this->m_PreviousEnableFlyByWire = 0;
  this->m_NumberOfRotors = 0;
}

/*
==============
HelicopterDynamics::IsInAir
==============
*/
bool HelicopterDynamics::IsInAir(HelicopterDynamics *this)
{
  char v1; 
  char v2; 

  __asm
  {
    vmovss  xmm0, cs:?HFD_FUSELAGE_LANDED_THRESHOLD@@3MA; float HFD_FUSELAGE_LANDED_THRESHOLD
    vcomiss xmm0, dword ptr [rcx+940h]
  }
  return !(v1 | v2);
}

/*
==============
HelicopterDynamics::KillTurbine
==============
*/
void HelicopterDynamics::KillTurbine(HelicopterDynamics *this)
{
  this->m_GovernorRPM = 0.0;
}

/*
==============
HelicopterDynamics::LoadControlInputs
==============
*/
void HelicopterDynamics::LoadControlInputs(HelicopterDynamics *this, const usercmd_s *cmd, float *rawControlInputs)
{
  const dvar_t *v20; 
  const dvar_t *v45; 
  char v84; 

  __asm { vmovaps [rsp+0E8h+var_48], xmm7 }
  _R13 = rawControlInputs;
  __asm
  {
    vmovaps [rsp+0E8h+var_98], xmm12
    vmovaps [rsp+0E8h+var_A8], xmm15
  }
  _RBP = this;
  BgVehiclePhysics::UpdateHornInputControls(this, cmd, 4u, 0x2000u);
  __asm
  {
    vmovss  xmm12, cs:__real@3c010204
    vxorps  xmm15, xmm15, xmm15
    vcvtsi2ss xmm15, xmm15, eax
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
    vmovss  [rsp+0E8h+arg_8], xmm7
  }
  if ( (cmd->buttons & 0x8000000000000i64) == 0 )
  {
    v20 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
    if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@41200000; value
        vmovaps [rsp+0E8h+var_58], xmm8
        vmulss  xmm1, xmm15, xmm12
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; expo
        vmovaps [rsp+0E8h+var_68], xmm9
        vmovaps [rsp+0E8h+var_78], xmm10
        vmovaps [rsp+0E8h+var_88], xmm11
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm11, cs:__real@3f800000
        vmulss  xmm1, xmm7, xmm12
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; expo
        vsubss  xmm9, xmm0, xmm11
        vmovss  xmm0, cs:__real@41200000; value
      }
      *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vxorps  xmm1, xmm9, cs:__xmm@80000000800000008000000080000000
        vsubss  xmm10, xmm0, xmm11
        vxorps  xmm8, xmm8, xmm8
        vcmpless xmm0, xmm8, xmm15
        vblendvps xmm0, xmm1, xmm9, xmm0; val
        vmovss  xmm1, cs:__real@bf800000; min
        vmovaps xmm2, xmm11; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm15, xmm0, cs:__real@42fe0000
        vcmpless xmm0, xmm8, [rsp+0E8h+arg_8]
        vxorps  xmm3, xmm10, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm1, cs:__real@bf800000; min
        vblendvps xmm0, xmm3, xmm10, xmm0; val
        vmovaps xmm2, xmm11; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm7, xmm0, cs:__real@42fe0000
        vmovaps xmm11, [rsp+0E8h+var_88]
        vmovaps xmm10, [rsp+0E8h+var_78]
        vmovaps xmm9, [rsp+0E8h+var_68]
        vmovaps xmm8, [rsp+0E8h+var_58]
      }
    }
  }
  if ( (cmd->buttons & 0x1000) != 0 )
  {
    v45 = DVARBOOL_fd_helicopter_debug_cockpit;
    if ( !DVARBOOL_fd_helicopter_debug_cockpit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_debug_cockpit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.enabled )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3a83126f
      }
    }
  }
  _R11 = &v84;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r13+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [r13+14h], xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@42fe0000
    vmovss  dword ptr [r13+18h], xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r13+0], xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vsubss  xmm0, xmm1, xmm7
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovss  dword ptr [r13+0Ch], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vaddss  xmm0, xmm1, xmm15
    vmovaps xmm15, xmmword ptr [r11-70h]
    vmovss  dword ptr [r13+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r13+2Ch], xmm0
    vmulss  xmm0, xmm12, dword ptr [rbp+40Ch]
    vmovss  dword ptr [rbp+0F0h], xmm0
    vmulss  xmm1, xmm12, dword ptr [rbp+40Ch]
    vmovss  dword ptr [rbp+0D0h], xmm1
    vmulss  xmm1, xmm12, dword ptr [rbp+420h]
    vmovss  dword ptr [rbp+0E8h], xmm1
    vmulss  xmm0, xmm12, dword ptr [rbp+420h]
    vmovss  dword ptr [rbp+0C8h], xmm0
    vmulss  xmm0, xmm12, dword ptr [rbp+418h]
    vmovss  dword ptr [rbp+0ECh], xmm0
    vmulss  xmm1, xmm12, dword ptr [rbp+418h]
    vmovss  dword ptr [rbp+0CCh], xmm1
    vmulss  xmm1, xmm12, dword ptr [rbp+424h]
    vmovss  dword ptr [rbp+0F4h], xmm1
    vmulss  xmm0, xmm12, dword ptr [rbp+424h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovss  dword ptr [rbp+0D4h], xmm0
  }
}

/*
==============
HelicopterDynamics::NotifyClientImpact
==============
*/
void HelicopterDynamics::NotifyClientImpact(HelicopterDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  int m_collisionZone; 
  bool v5; 
  unsigned int PhysicsBodyId; 
  unsigned int v7; 
  BgVehicleEventSystem *v8; 
  __int64 v9; 
  bool v10; 

  if ( Physics_IsPredictiveWorld(this->m_worldId) && this->m_playerControlled )
  {
    m_collisionZone = this->m_collisionZone;
    v5 = m_collisionZone == HFD_COLLISION_ID_MAIN_ROTOR || m_collisionZone == HFD_COLLISION_ID_TAIL_ROTOR;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    v7 = cbData->bodyIds[0];
    v8 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v9 = 12i64;
    v10 = v5;
    if ( v7 == PhysicsBodyId )
      v9 = 16i64;
    v8->AircraftImpact(v8, this, &cbData->position, (*(unsigned int *)((char *)&cbData->worldId + v9) >> 19) & 0x3F, v10, &cbData->normal);
  }
}

/*
==============
HelicopterDynamics::PerformAutomaticControl
==============
*/

void __fastcall HelicopterDynamics::PerformAutomaticControl(HelicopterDynamics *this, double dT)
{
  const dvar_t *v12; 
  FlightDynamicsManager *FlightDynamicsManager; 
  bool v18; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v39; 
  char v40; 
  char v41; 
  bool m_EnableFlyByWire; 
  char v57; 
  bool v58; 
  const dvar_t *v72; 
  const dvar_t *v76; 
  FlightDynamicsManager *v77; 
  bool v84; 
  vec4_t v97[8]; 
  char v98; 
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
    vmovaps xmm10, xmm1
  }
  _RDI = this;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::PerformAutomaticControl");
  *(_WORD *)&_RDI->m_TurbineAudioIgniter = 0;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( _RDI->m_playerControlled )
  {
    if ( !_RDI->m_PreviousUserControlled )
      goto LABEL_10;
    v12 = DVARINT_fd_helicopter_turbine_mode;
    if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == 2 && !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
    {
LABEL_10:
      *(_WORD *)&_RDI->m_TurbineStarter = 257;
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      QuatTransform(&_RDI->m_RotationQuaternion, &FlightDynamicsManager->m_ForwardAxis, &_RDI->m_GyroRudderForwardVector);
      _RDI->m_GyroAltitude = _RDI->m_centerOfMassWs.v[2];
    }
    _RDI->m_EnableFlyByWire = 1;
  }
  else if ( _RDI->m_PreviousUserControlled )
  {
    __asm { vcomiss xmm11, dword ptr [rdi+8C4h] }
    _RDI->m_TurbineStarter = 0;
    _RDI->m_EnableFlyByWire = 0;
    _RDI->m_GovernorRPM = 0.0;
  }
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !_RDI->m_TurbineStarter )
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vcomiss xmm1, dword ptr [rdi+8C4h]
    }
    if ( _RDI->m_TurbineStarter )
    {
      v18 = !_RDI->m_playerControlled;
      if ( !_RDI->m_playerControlled )
      {
        __asm
        {
          vmovss  xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
          vmulss  xmm1, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED
          vmovss  xmm3, dword ptr [rdi+2E4h]
          vmulss  xmm0, xmm1, xmm3
          vmulss  xmm4, xmm0, xmm10
          vandps  xmm2, xmm4, xmm7
          vandps  xmm0, xmm3, xmm7
          vcomiss xmm2, xmm0
        }
        if ( _RDI->m_playerControlled )
          __asm { vxorps  xmm0, xmm0, xmm0 }
        else
          __asm { vsubss  xmm0, xmm3, xmm4 }
        __asm
        {
          vmovss  dword ptr [rdi+2E4h], xmm0
          vmovss  xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
          vmulss  xmm1, xmm0, cs:?HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED@@3MA; float HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED
          vmovss  xmm3, dword ptr [rdi+2E8h]
          vmulss  xmm0, xmm1, xmm3
          vmulss  xmm4, xmm0, xmm10
          vandps  xmm2, xmm4, xmm7
          vandps  xmm0, xmm3, xmm7
          vcomiss xmm2, xmm0
        }
        if ( v18 )
          __asm { vsubss  xmm0, xmm3, xmm4 }
        else
          __asm { vxorps  xmm0, xmm0, xmm0 }
        __asm { vmovss  dword ptr [rdi+2E8h], xmm0 }
      }
    }
  }
  v35 = DVARINT_fd_helicopter_allow_autostarter;
  if ( !DVARINT_fd_helicopter_allow_autostarter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_allow_autostarter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( !v35->current.integer )
    goto LABEL_30;
  v36 = DVARINT_fd_helicopter_turbine_mode;
  if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.integer == 1 )
  {
LABEL_30:
    if ( !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
    {
      Com_PrintWarning(16, "[HelicopterDynamics::PerformAutomaticControl] - Turbine was forced to stop via using the dVars. DON'T DO THIS EXCEPT FOR DEBUGGING PURPOSES!");
      _RDI->m_TurbineStarter = 0;
      _RDI->m_GovernorRPM = 0.0;
    }
  }
  if ( _RDI->m_TurbineStarter )
    goto LABEL_38;
  v37 = DVARINT_fd_helicopter_turbine_mode;
  if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.integer == 2 && !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
  {
LABEL_38:
    __asm { vmovss  xmm6, dword ptr [rdi+5B8h] }
    v39 = DVARFLT_fd_helicopter_start_spoolup_speed;
    if ( !DVARFLT_fd_helicopter_start_spoolup_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spoolup_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    __asm
    {
      vmulss  xmm3, xmm10, dword ptr [rbx+28h]
      vsubss  xmm1, xmm11, xmm3
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm0, xmm3, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vaddss  xmm2, xmm2, xmm0
      vmovss  dword ptr [rdi+5B8h], xmm2
      vmovss  xmm8, cs:__real@41200000
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vsubss  xmm1, xmm0, xmm8
      vcomiss xmm6, xmm1
    }
    if ( !(v40 | v41) )
      _RDI->m_TurbineStarter = 0;
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vsubss  xmm1, xmm0, cs:__real@43480000
      vcomiss xmm6, xmm1
    }
    if ( v40 | v41 )
    {
      _RBX = &_RDI->m_RotationInertiaQuat;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+0E8h+var_98], xmm0
        vmovaps xmm3, xmm10
        vmovaps xmm2, xmm8
      }
      FlightDynamics::ApplyRotationDragAroundAxis(v97, &_RDI->m_sideVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RDI->m_RotationInertiaQuat);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+0E8h+var_98], xmm0
        vmovaps xmm3, xmm10
        vmovaps xmm2, xmm8
      }
      FlightDynamics::ApplyRotationDragAroundAxis(v97, &_RDI->m_forwardVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RDI->m_RotationInertiaQuat);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+0E8h+var_98], xmm0
        vmovaps xmm3, xmm10
        vmovaps xmm2, xmm8
      }
      FlightDynamics::ApplyRotationDragAroundAxis(v97, &_RDI->m_upVector, *(const float *)&_XMM2, *(const float *)&_XMM3, &_RDI->m_RotationInertiaQuat);
    }
    else
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+234h]
        vmovss  xmm0, dword ptr [rdi+910h]
        vsubss  xmm1, xmm0, xmm2
        vandps  xmm1, xmm1, xmm7
        vcomiss xmm1, cs:__real@3a83126f
      }
      if ( !(v40 | v41) )
      {
        __asm { vmovss  dword ptr [rdi+910h], xmm2 }
        _RDI->m_GyroAltitudeSet = 1;
      }
      m_EnableFlyByWire = _RDI->m_EnableFlyByWire;
      v57 = 0;
      v58 = !m_EnableFlyByWire;
      if ( m_EnableFlyByWire )
      {
        _RDI->m_ManualControlTimer = 0.0;
        _RDI->m_PreviousEnableFlyByWire = m_EnableFlyByWire;
      }
      __asm
      {
        vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
        vmovss  dword ptr [rdi+8C4h], xmm0
      }
    }
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vsubss  xmm1, xmm0, cs:?HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD@@3MA; float HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD
      vcomiss xmm6, xmm1
    }
    if ( !(v57 | v58) )
    {
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_turbine_mode, 0);
      v72 = DVARBOOL_fd_helicopter_start_autotakeoff;
      if ( !DVARBOOL_fd_helicopter_start_autotakeoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_autotakeoff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v72);
      if ( v72->current.enabled )
      {
        _RBX = DVARFLT_fd_helicopter_start_autotakeoff_height;
        if ( !DVARFLT_fd_helicopter_start_autotakeoff_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_autotakeoff_height") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vaddss  xmm0, xmm0, dword ptr [rdi+910h]
          vmovss  dword ptr [rdi+910h], xmm0
        }
        _RDI->m_GyroAltitudeSet = 1;
      }
    }
  }
  v76 = DVARINT_fd_helicopter_start_spooled;
  if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  if ( v76->current.integer && !_RDI->m_PreviousUserControlled )
  {
    v77 = BG_GetFlightDynamicsManager();
    QuatTransform(&_RDI->m_RotationQuaternion, &v77->m_ForwardAxis, &_RDI->m_GyroRudderForwardVector);
    _RDI->m_GyroAltitude = _RDI->m_centerOfMassWs.v[2];
    _RDI->m_GyroAltitudeSet = 0;
    _RDI->m_GyroGPSlocation.v[0] = _RDI->m_centerOfMassWs.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+230h]
      vmovss  dword ptr [rdi+8F0h], xmm0
      vmovss  xmm1, dword ptr [rdi+234h]
      vmovss  dword ptr [rdi+8F4h], xmm1
    }
    _RDI->m_GyroGPSlocationSet = 0;
  }
  _RBX = DVARFLT_fd_helicopter_force_rotor_rpm;
  if ( !DVARFLT_fd_helicopter_force_rotor_rpm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_force_rotor_rpm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, cs:__real@3c23d70a
  }
  if ( !(v40 | v18) )
  {
    Com_PrintWarning(16, "[HelicopterDynamics::PerformAutomaticControl] - Turbine was forced to fixed RPM using dVars. DON'T DO THIS EXCEPT FOR DEBUGGING PURPOSES!");
    _RBX = DVARFLT_fd_helicopter_force_rotor_rpm;
    if ( !DVARFLT_fd_helicopter_force_rotor_rpm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_force_rotor_rpm") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rdi+5B8h], xmm0
    }
  }
  _RDI->m_PreviousUserControlled = _RDI->m_playerControlled;
  v84 = _RDI->m_EnableFlyByWire;
  if ( v84 != _RDI->m_PreviousEnableFlyByWire )
  {
    if ( v84 )
    {
      __asm
      {
        vmulss  xmm2, xmm10, cs:?HFD_FBW_TRANSITION_TIME_ENABLE@@3MA; float HFD_FBW_TRANSITION_TIME_ENABLE
        vmovss  xmm1, dword ptr [rdi+944h]
        vsubss  xmm3, xmm1, xmm2
        vmovss  dword ptr [rdi+944h], xmm3
        vcomiss xmm3, xmm9
      }
    }
    else
    {
      _RDI->m_FBWControlInputs[5] = -1.0;
      __asm
      {
        vcomiss xmm9, dword ptr [rdi+2ECh]
        vmulss  xmm1, xmm10, cs:?HFD_FBW_TRANSITION_TIME_DISABLE@@3MA; float HFD_FBW_TRANSITION_TIME_DISABLE
        vaddss  xmm2, xmm1, dword ptr [rdi+944h]
        vmovss  dword ptr [rdi+944h], xmm2
        vcomiss xmm2, xmm11
      }
    }
  }
  if ( !_RDI->m_inputControlsEnabled )
  {
    __asm { vcomiss xmm11, dword ptr [rdi+8C4h] }
    _RDI->m_ManualControlTimer = 1.0;
    _RDI->m_TurbineStarter = 0;
    _RDI->m_EnableFlyByWire = 0;
    _RDI->m_GovernorRPM = 0.0;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v98;
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
HelicopterDynamics::PerformControlSurfaces
==============
*/
void HelicopterDynamics::PerformControlSurfaces(HelicopterDynamics *this, float dT)
{
  ;
}

/*
==============
HelicopterDynamics::PerformCoordinatedFlight
==============
*/
void HelicopterDynamics::PerformCoordinatedFlight(HelicopterDynamics *this)
{
  ;
}

/*
==============
HelicopterDynamics::PerformThrusterControl
==============
*/

void __fastcall HelicopterDynamics::PerformThrusterControl(HelicopterDynamics *this, double dT)
{
  char v24; 
  char v25; 
  int v92; 
  int v93; 
  int v94; 
  vec3_t v95; 
  __int64 v96; 
  vec3_t v97; 
  vec3_t v98; 
  vec3_t v99; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  v96 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmm14, xmm1
  }
  _RBX = this;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::PerformThrusterControl");
  __asm
  {
    vmulss  xmm2, xmm14, cs:?HFD_GRAVITY_CORRECTOR@@3MA; float HFD_GRAVITY_CORRECTOR
    vaddss  xmm3, xmm2, dword ptr [rbx+2ECh]
    vmovss  dword ptr [rbx+2ECh], xmm3
    vmovss  xmm12, dword ptr [rbx+2E8h]
    vmovss  xmm0, dword ptr [rbx+2E4h]
    vmovaps xmm13, xmm3
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@4b3d1000
  }
  if ( !(v24 | v25) )
  {
    *(_QWORD *)_RBX->m_Velocity.v = 0i64;
    _RBX->m_Velocity.v[2] = 0.0;
    __asm
    {
      vxorps  xmm13, xmm3, xmm3
      vmovss  xmm12, dword ptr [rbx+2E8h]
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+348h]
    vmovss  xmm4, dword ptr [rbx+344h]
    vmovss  xmm7, dword ptr [rbx+2E4h]
    vmovss  xmm5, dword ptr [rbx+34Ch]
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm0, xmm12, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm13
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm10, xmm4, xmm3
    vmulss  xmm8, xmm6, xmm3
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rsp+130h+var_D0], xmm0
    vmovss  xmm6, dword ptr [rbx+360h]
    vmovss  xmm4, dword ptr [rbx+35Ch]
    vmovss  xmm5, dword ptr [rbx+364h]
    vmulss  xmm1, xmm6, xmm12
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm13
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm11, xmm4, xmm3
    vmulss  xmm9, xmm6, xmm3
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rsp+130h+var_C0], xmm0
    vmovss  xmm6, dword ptr [rbx+354h]
    vmovss  xmm4, dword ptr [rbx+350h]
    vmovss  xmm5, dword ptr [rbx+358h]
    vmulss  xmm1, xmm6, xmm12
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm13
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm7, xmm4, xmm3
    vmulss  xmm6, xmm6, xmm3
    vmulss  xmm0, xmm5, xmm3
    vmovss  [rbp+30h+var_B0], xmm0
    vunpcklps xmm1, xmm10, xmm8
    vmovsd  qword ptr [rsp+130h+var_D8], xmm1
    vmovsd  qword ptr [rsp+130h+var_F0], xmm1
  }
  v95.v[2] = v97.v[2];
  __asm
  {
    vmovss  xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
    vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_DRAG_FORWARD@@3MA; float HFD_AIRFRAME_DRAG_FORWARD
    vmovaps xmm2, xmm14
  }
  FlightDynamics::CalculateAeroDrag(&v95, *(float *)&_XMM1, *(float *)&_XMM2, &v97);
  __asm
  {
    vunpcklps xmm0, xmm11, xmm9
    vmovsd  qword ptr [rsp+130h+var_C8], xmm0
    vmovsd  qword ptr [rsp+130h+var_F0], xmm0
  }
  v95.v[2] = v98.v[2];
  __asm
  {
    vmovss  xmm0, cs:?HFD_AIRFRAME_DRAG_VERTICAL@@3MA; float HFD_AIRFRAME_DRAG_VERTICAL
    vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
    vmovaps xmm2, xmm14
  }
  FlightDynamics::CalculateAeroDrag(&v95, *(float *)&_XMM1, *(float *)&_XMM2, &v98);
  __asm
  {
    vunpcklps xmm0, xmm7, xmm6
    vmovsd  [rsp+130h+var_B8], xmm0
    vmovsd  qword ptr [rsp+130h+var_F0], xmm0
  }
  v95.v[2] = v99.v[2];
  __asm
  {
    vmovss  xmm0, cs:?HFD_AIRFRAME_DRAG_SIDEWAYS@@3MA; float HFD_AIRFRAME_DRAG_SIDEWAYS
    vmulss  xmm1, xmm0, cs:?HFD_AIRFRAME_INVERSE_MASS@@3MA; float HFD_AIRFRAME_INVERSE_MASS
    vmovaps xmm2, xmm14
  }
  FlightDynamics::CalculateAeroDrag(&v95, *(float *)&_XMM1, *(float *)&_XMM2, &v99);
  __asm
  {
    vmovss  xmm0, [rsp+130h+var_D8]
    vaddss  xmm2, xmm0, [rsp+130h+var_C8]
    vmovss  xmm1, [rsp+130h+var_D4]
    vaddss  xmm3, xmm1, [rsp+130h+var_C4]
    vmovss  xmm0, dword ptr [rsp+130h+var_D0]
    vaddss  xmm4, xmm0, dword ptr [rsp+130h+var_C0]
    vaddss  xmm5, xmm2, dword ptr [rsp+130h+var_B8]
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+var_B8+4]
    vaddss  xmm1, xmm4, [rbp+30h+var_B0]
    vmovss  dword ptr [rbx+2E4h], xmm5
    vmovss  dword ptr [rbx+2E8h], xmm2
    vmovss  dword ptr [rbx+2ECh], xmm1
    vmovss  [rsp+130h+var_100], xmm5
  }
  if ( (v92 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm { vmovss  [rsp+130h+var_100], xmm2 }
  if ( (v93 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm { vmovss  [rsp+130h+var_100], xmm1 }
  if ( (v94 & 0x7F800000) == 2139095040 )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3195, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] )") )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  _R11 = &vars0;
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
  }
}

/*
==============
HelicopterDynamics::ReactToServerEvent
==============
*/
void HelicopterDynamics::ReactToServerEvent(HelicopterDynamics *this, unsigned int eventType, unsigned int eventParam)
{
  BgVehicleEventSystem *v5; 

  if ( eventType == 169 && !this->m_pmoveObject )
  {
    v5 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    v5->Horn(v5, this, eventParam, 0);
  }
}

/*
==============
HelicopterDynamics::Reset
==============
*/
void HelicopterDynamics::Reset(HelicopterDynamics *this)
{
  FlightDynamics::Reset(this);
  *(_QWORD *)this->m_vfx.Spark = 0i64;
  *(_QWORD *)&this->m_vfx.Spark[2] = 0i64;
  this->m_NumberOfRotors = 0;
}

/*
==============
HelicopterDynamics::VfxData::Reset
==============
*/
void HelicopterDynamics::VfxData::Reset(HelicopterDynamics::VfxData *this)
{
  *(_QWORD *)this->Spark = 0i64;
  *(_QWORD *)&this->Spark[2] = 0i64;
}

/*
==============
FlightDynamicsRotorSystem::ResetForces
==============
*/
void FlightDynamicsRotorSystem::ResetForces(FlightDynamicsRotorSystem *this)
{
  *(_OWORD *)this->m_LiftForceVector.v = 0ui64;
  *(_QWORD *)&this->m_LiftTorqueVector.y = 0i64;
}

/*
==============
HelicopterDynamics::SelectStickMode
==============
*/
void HelicopterDynamics::SelectStickMode(HelicopterDynamics *this)
{
  this->m_StickMode = 5;
}

/*
==============
FlightDynamicsRotorSystem::SetAirspeed
==============
*/
void FlightDynamicsRotorSystem::SetAirspeed(FlightDynamicsRotorSystem *this, vec3_t *airspeedVector)
{
  char v2; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@4d10c040
  }
  if ( v2 )
  {
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm4
      vmovss  dword ptr [rcx+18h], xmm3
      vmovss  dword ptr [rcx+1Ch], xmm5
    }
  }
}

/*
==============
HelicopterDynamics::SetFlyByWireInputVector
==============
*/
void HelicopterDynamics::SetFlyByWireInputVector(HelicopterDynamics *this, vec3_t *fbwVector)
{
  ;
}

/*
==============
FlightDynamicsRotorSystem::SetPositionAndOrientation
==============
*/
void FlightDynamicsRotorSystem::SetPositionAndOrientation(FlightDynamicsRotorSystem *this, vec3_t *position, vec4_t *rotation)
{
  this->m_Position = *position;
  this->m_RotationQuat = *rotation;
  this->m_PreviousRotationQuat = this->m_RotationQuat;
}

/*
==============
FlightDynamicsRotorSystem::SetRotorAngularPosition
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetRotorAngularPosition(FlightDynamicsRotorSystem *this, double angularPosition)
{
  __asm { vmovss  dword ptr [rcx+9Ch], xmm1 }
}

/*
==============
FlightDynamicsRotorSystem::SetRotorAngularRPM
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetRotorAngularRPM(FlightDynamicsRotorSystem *this, double rpm)
{
  __asm { vmovss  dword ptr [rcx+98h], xmm1 }
}

/*
==============
HelicopterDynamics::SetSoundHorn
==============
*/
void HelicopterDynamics::SetSoundHorn(HelicopterDynamics *this, unsigned int hornHash)
{
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    this->m_sound.Horn = hornHash;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 881, ASSERT_TYPE_ASSERT, "(IsServer())", (const char *)&queryFormat, "IsServer()") )
      __debugbreak();
    this->m_sound.Horn = hornHash;
  }
}

/*
==============
FlightDynamicsRotorSystem::SetSwashplate
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwashplate(FlightDynamicsRotorSystem *this, double cyclicForward, double cyclicLateral, double collective)
{
  int v7; 
  int v8; 
  int v9; 

  __asm { vmovss  [rsp+38h+arg_8], xmm1 }
  _RBX = this;
  __asm
  {
    vmovss  dword ptr [rcx+8Ch], xmm1
    vmovss  dword ptr [rcx+90h], xmm2
    vmovss  dword ptr [rcx+94h], xmm3
  }
  if ( (v7 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3584, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicForward ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicForward )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3585, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicLateral ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicLateral )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3586, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCollective ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCollective )") )
    __debugbreak();
}

/*
==============
FlightDynamicsRotorSystem::SetSwashplateDT
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwashplateDT(FlightDynamicsRotorSystem *this, double cyclicForward, double cyclicLateral, double collective)
{
  bool v25; 
  int dTa; 
  int dTb; 
  int dTc; 

  __asm
  {
    vsubss  xmm0, xmm1, dword ptr [rcx+8Ch]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; value
    vmovaps [rsp+78h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm6, xmm1
    vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_EXPO@@3MA; expo
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
  }
  *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm3, xmm0, cs:?HFD_CONTROL_INPUT_DAMPER@@3MA; float HFD_CONTROL_INPUT_DAMPER
    vmulss  xmm1, xmm3, [rsp+78h+dT]
    vmovss  xmm8, cs:__real@3f800000
    vsubss  xmm0, xmm8, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+8Ch]
    vsubss  xmm0, xmm7, dword ptr [rbx+90h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; value
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+8Ch], xmm2
    vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_EXPO@@3MA; expo
  }
  *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
  v25 = !_RBX->m_SmoothCollective;
  __asm
  {
    vmulss  xmm1, xmm0, cs:?HFD_CONTROL_INPUT_DAMPER@@3MA; float HFD_CONTROL_INPUT_DAMPER
    vmulss  xmm3, xmm1, [rsp+78h+dT]
    vsubss  xmm0, xmm8, xmm3
    vmulss  xmm2, xmm0, dword ptr [rbx+90h]
    vmulss  xmm1, xmm3, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+90h], xmm2
  }
  if ( !v25 )
  {
    __asm
    {
      vsubss  xmm0, xmm9, dword ptr [rbx+94h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; value
      vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_COLLECTIVE_EXPOT@@3MA; expo
    }
    *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+88h]
      vmulss  xmm6, xmm1, [rsp+78h+dT]
      vmovss  xmm1, cs:?HFD_CONTROL_INPUT_EXPO_COLLECTIVE@@3MA; expo
      vmovaps xmm0, xmm9; value
    }
    FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm8, xmm6
      vmulss  xmm2, xmm1, dword ptr [rbx+94h]
      vmulss  xmm0, xmm6, xmm0
      vaddss  xmm9, xmm2, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+94h], xmm9
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vmovss  [rsp+78h+dT], xmm0
  }
  if ( (dTa & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3611, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicForward ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicForward )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vmovss  [rsp+78h+dT], xmm0
  }
  if ( (dTb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3612, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicLateral ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicLateral )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vmovss  [rsp+78h+dT], xmm0
  }
  if ( (dTc & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3613, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCollective ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCollective )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovss  xmm0, dword ptr [rbx+8Ch]; val
    vmovaps xmm1, xmm6; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+8Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+90h]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+90h], xmm0
    vmovss  xmm0, dword ptr [rbx+94h]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovss  dword ptr [rbx+94h], xmm0
  }
}

/*
==============
FlightDynamicsRotorSystem::SetSwasplateRates
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetSwasplateRates(FlightDynamicsRotorSystem *this, double cyclic, double collective)
{
  __asm
  {
    vmovss  dword ptr [rcx+84h], xmm1
    vmovss  dword ptr [rcx+88h], xmm2
  }
}

/*
==============
HelicopterDynamics::Setup
==============
*/
bool HelicopterDynamics::Setup(HelicopterDynamics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  const dvar_t *v27; 
  const dvar_t *v30; 
  float v34; 
  float v39; 
  FlightDynamicsManager *FlightDynamicsManager; 
  float bladeWeight; 
  float bladeWeighta; 
  float bladeMaxDeflection; 
  float bladeMaxDeflectiona; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  Physics_WorldId worldIda; 
  float v56; 
  float v57; 
  vec4_t out; 

  _RDI = this;
  result = FlightDynamics::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    _RDI->m_DynamicsModel = FD_ROTARY_WING;
    _RDI->m_GyroAltiudeStrength = 0.0;
    _RDI->m_GyroAltitudeSet = 0;
    _RDI->m_GyroRudderForwardVectorSet = 0;
    *(_QWORD *)&_RDI->m_GyroRudderStrength = 0i64;
    *(_QWORD *)&_RDI->m_EmergencyLevelForCollective = 0i64;
    *(_QWORD *)&_RDI->m_TurbineTorque = 0i64;
    *(_QWORD *)&_RDI->m_GyroElevatorRate = 0i64;
    *(_QWORD *)&_RDI->m_GyroManualLimiterAileron = 0i64;
    *(_QWORD *)&_RDI->m_GyroFBWEnhancerRudderAccumulator = 0i64;
    _RDI->m_GyroFBWEnhancerAileronAccumulatorVelocity = 0.0;
    _RDI->m_ManualControlTimer = 0.0;
    *(_QWORD *)&_RDI->m_PreviousUserControlled = 0i64;
    _RDI->m_GyroGPSlocationSet = 0;
    *(_QWORD *)_RDI->m_GyroVelocityDelta.v = 0i64;
    _RDI->m_GyroVelocityDelta.v[2] = 0.0;
    _RDI->m_MainRotorSwashplateDriverOffset = 0.0;
    *(_WORD *)&_RDI->m_PreviousEnableFlyByWire = 0;
    _RDI->m_NumberOfRotors = 0;
    __asm
    {
      vmovss  xmm0, cs:?HFD_BLADE_MAX_DEFLECTION_MAIN@@3MA; float HFD_BLADE_MAX_DEFLECTION_MAIN
      vmovss  xmm1, cs:?HFD_MAIN_ROTOR_BLADE_WEIGHT@@3MA; float HFD_MAIN_ROTOR_BLADE_WEIGHT
    }
    worldIda = _RDI->m_worldId;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovss  xmm6, cs:__real@3d21428b
      vmulss  xmm3, xmm6, cs:?HFD_MAIN_ROTOR_BLADE_WIDTH@@3MA; bladeWidth
      vmulss  xmm2, xmm6, cs:?HFD_MAIN_ROTOR_BLADE_LENGTH@@3MA; bladeLength
      vmovaps [rsp+0C8h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+0C8h+var_88], xmm7
      vmovss  [rsp+0C8h+var_90], xmm7
      vmovss  dword ptr [rsp+0C8h+var_98], xmm7
      vmovss  [rsp+0C8h+bladeMaxDeflection], xmm0
      vmovss  [rsp+0C8h+bladeWeight], xmm1
    }
    FlightDynamicsRotorSystem::SetupRotor(&_RDI->m_MainRotor, 5, *(float *)&_XMM2, *(float *)&_XMM3, bladeWeight, bladeMaxDeflection, v49, v51, v53, worldIda);
    __asm
    {
      vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_COLLECTIVE@@3MA; float HFD_CONTROL_INPUT_DAMPER_COLLECTIVE
      vmovss  xmm0, cs:?HFD_CONTROL_INPUT_MULTI@@3MA; float HFD_CONTROL_INPUT_MULTI
      vmovss  dword ptr [rdi+5A4h], xmm0
      vmovss  xmm0, cs:__real@42b40000
      vmovss  dword ptr [rdi+5A8h], xmm1
      vmovss  xmm1, cs:?HFD_TAIL_ROTOR_BLADE_WEIGHT@@3MA; float HFD_TAIL_ROTOR_BLADE_WEIGHT
      vmulss  xmm3, xmm6, cs:?HFD_TAIL_ROTOR_BLADE_WIDTH@@3MA; bladeWidth
      vmulss  xmm2, xmm6, cs:?HFD_TAIL_ROTOR_BLADE_LENGTH@@3MA; bladeLength
      vmovss  [rsp+0C8h+var_88], xmm0
      vmovss  xmm0, cs:?HFD_BLADE_MAX_DEFLECTION_TAIL@@3MA; float HFD_BLADE_MAX_DEFLECTION_TAIL
      vmovss  [rsp+0C8h+var_90], xmm7
      vmovss  dword ptr [rsp+0C8h+var_98], xmm7
      vmovss  [rsp+0C8h+bladeMaxDeflection], xmm0
      vmovss  [rsp+0C8h+bladeWeight], xmm1
    }
    FlightDynamicsRotorSystem::SetupRotor(&_RDI->m_TailRotor, 2, *(float *)&_XMM2, *(float *)&_XMM3, bladeWeighta, bladeMaxDeflectiona, v50, v52, v54, _RDI->m_worldId);
    __asm
    {
      vmovss  xmm1, cs:?HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR@@3MA; float HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR
      vmovss  xmm0, cs:?HFD_CONTROL_INPUT_MULTI@@3MA; float HFD_CONTROL_INPUT_MULTI
      vmovss  dword ptr [rdi+778h], xmm1
      vmovss  xmm1, cs:__real@41100000; value
      vmovss  dword ptr [rdi+774h], xmm0
    }
    _RDI->m_NumberOfRotors = 2;
    Dvar_SetFloat_Internal(DVARFLT_fd_helicopter_swash_driver, *(float *)&_XMM1);
    v27 = DVARFLT_fd_helicopter_swash_driver;
    __asm
    {
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
    if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    LODWORD(_RDI->m_MainRotorSwashplateDriverOffset) = v27->current.integer;
    BgVehiclePhysics::SetActivatedAlways(_RDI);
    v30 = DVARINT_fd_helicopter_start_spooled;
    if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.integer )
    {
      __asm
      {
        vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
        vmovss  dword ptr [rdi+5B8h], xmm0
        vmovss  xmm1, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:?HFD_DEFAULT_ROTOR_RPM@@3MA; float HFD_DEFAULT_ROTOR_RPM
        vmovss  dword ptr [rdi+5B8h], xmm0
        vmovss  xmm1, cs:?HFD_DEFAULT_ROTOR_RPM@@3MA; float HFD_DEFAULT_ROTOR_RPM
      }
    }
    v34 = _RDI->m_Position.v[2];
    __asm
    {
      vmovups xmm2, xmmword ptr [rdi+368h]
      vmovss  dword ptr [rdi+8C4h], xmm1
      vmovsd  xmm1, qword ptr [rdi+2D8h]
      vmovss  dword ptr [rdi+540h], xmm1
    }
    v56 = v34;
    __asm
    {
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovss  dword ptr [rdi+544h], xmm0
      vmovss  xmm0, [rsp+0C8h+var_70]
      vmovss  dword ptr [rdi+548h], xmm0
      vmovss  dword ptr [rdi+54Ch], xmm2
      vextractps dword ptr [rdi+550h], xmm2, 1
      vextractps dword ptr [rdi+554h], xmm2, 2
      vextractps dword ptr [rdi+558h], xmm2, 3
    }
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[0] = _RDI->m_MainRotor.m_RotationQuat.v[0];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[1] = _RDI->m_MainRotor.m_RotationQuat.v[1];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[2] = _RDI->m_MainRotor.m_RotationQuat.v[2];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[3] = _RDI->m_MainRotor.m_RotationQuat.v[3];
    v39 = _RDI->m_Position.v[2];
    __asm
    {
      vmovsd  xmm1, qword ptr [rdi+2D8h]
      vmovups xmm2, xmmword ptr [rdi+368h]
      vmovss  dword ptr [rdi+710h], xmm1
    }
    v57 = v39;
    __asm
    {
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovss  dword ptr [rdi+714h], xmm0
      vmovss  xmm0, [rsp+0C8h+var_70]
      vmovss  dword ptr [rdi+718h], xmm0
      vmovss  dword ptr [rdi+71Ch], xmm2
      vextractps dword ptr [rdi+720h], xmm2, 1
      vextractps dword ptr [rdi+724h], xmm2, 2
      vextractps dword ptr [rdi+728h], xmm2, 3
    }
    _RDI->m_TailRotor.m_PreviousRotationQuat.v[0] = _RDI->m_TailRotor.m_RotationQuat.v[0];
    _RDI->m_TailRotor.m_PreviousRotationQuat.v[1] = _RDI->m_TailRotor.m_RotationQuat.v[1];
    _RDI->m_TailRotor.m_PreviousRotationQuat.v[2] = _RDI->m_TailRotor.m_RotationQuat.v[2];
    _RDI->m_TailRotor.m_PreviousRotationQuat.v[3] = _RDI->m_TailRotor.m_RotationQuat.v[3];
    _RDI->m_topAngularSpeedLs.v[0] = 300.0;
    _RDI->m_topAngularSpeedLs.v[1] = 300.0;
    _RDI->m_topAngularSpeedLs.v[2] = 300.0;
    Axis43ToQuat(&_RDI->m_transform, &out);
    FlightDynamicsManager = BG_GetFlightDynamicsManager();
    QuatTransform(&out, &FlightDynamicsManager->m_ForwardAxis, &_RDI->m_GyroRudderForwardVector);
    _RDI->m_GyroAltitude = _RDI->m_Position.v[2];
    return 1;
  }
  return result;
}

/*
==============
FlightDynamicsRotorSystem::SetupRotor
==============
*/

void __fastcall FlightDynamicsRotorSystem::SetupRotor(FlightDynamicsRotorSystem *this, int bladeCount, double bladeLength, double bladeWidth, float bladeWeight, float bladeMaxDeflection, float pitch, float yaw, float roll, Physics_WorldId worldId)
{
  __int64 v17; 
  bool v21; 
  bool v22; 
  vec3_t *p_m_BladeDirection; 
  __int64 v35; 
  char v48; 
  FlightDynamicsManager *FlightDynamicsManager; 
  FlightDynamicsManager *v55; 
  vec4_t quat; 
  vec3_t v67; 
  vec3_t angles; 
  char v69; 
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
  v17 = (unsigned int)bladeCount;
  _RDI = this;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  if ( bladeCount < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3276, ASSERT_TYPE_ASSERT, "(bladeCount >= 2)", (const char *)&queryFormat, "bladeCount >= 2") )
    __debugbreak();
  v21 = (unsigned int)v17 <= 6;
  if ( (int)v17 >= 6 )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3277, ASSERT_TYPE_ASSERT, "(bladeCount < 6)", (const char *)&queryFormat, "bladeCount < FD_MAX_ROTOR_BLADES");
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+0D8h+bladeWeight]
    vcomiss xmm6, cs:__real@3a83126f
  }
  if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3278, ASSERT_TYPE_ASSERT, "(bladeWeight > 0.001f)", (const char *)&queryFormat, "bladeWeight > EQUAL_EPSILON") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+bladeMaxDeflection]
    vmovss  xmm1, [rsp+0D8h+yaw]
    vmovss  dword ptr [rdi+7Ch], xmm0
    vmovss  xmm0, cs:__real@43b40000
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, ebx
    vdivss  xmm10, xmm0, xmm11
    vmovss  xmm0, [rsp+0D8h+pitch]
    vmovss  dword ptr [rsp+0D8h+angles], xmm0
    vmovss  xmm0, [rsp+0D8h+roll]
  }
  _RDI->m_worldId = worldId;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+angles+8], xmm0
    vmovss  dword ptr [rdi+70h], xmm8
    vmovss  dword ptr [rdi+74h], xmm7
    vmovss  dword ptr [rdi+78h], xmm6
    vmovss  dword ptr [rsp+0D8h+var_98], xmm9
    vmovss  dword ptr [rsp+0D8h+var_98+4], xmm9
    vmovss  dword ptr [rsp+0D8h+var_98+8], xmm9
    vmovss  dword ptr [rsp+0D8h+angles+4], xmm1
  }
  _RDI->m_BladeCount = v17;
  _RDI->m_SwashplateCollective = 1.0;
  AnglesToQuat(&angles, &_RDI->m_RotorAxisQuat);
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( (int)v17 > 0 )
  {
    p_m_BladeDirection = &_RDI->m_RotorBlades[0].m_BladeDirection;
    v35 = v17;
    do
    {
      AnglesToQuat(&v67, &quat);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+0D8h+quat+4]
        vmovss  xmm5, dword ptr [rsp+0D8h+quat]
        vmovss  xmm6, dword ptr [rsp+0D8h+quat+8]
        vmovss  xmm7, dword ptr [rsp+0D8h+quat+0Ch]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vucomiss xmm2, xmm9
      }
      if ( !v48 )
      {
        __asm
        {
          vdivss  xmm2, xmm8, xmm2
          vmulss  xmm0, xmm5, xmm2
          vmulss  xmm1, xmm4, xmm2
          vmovss  dword ptr [rsp+0D8h+quat], xmm0
          vmovss  dword ptr [rsp+0D8h+quat+4], xmm1
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm7, xmm2
          vmovss  dword ptr [rsp+0D8h+quat+8], xmm0
          vmovss  dword ptr [rsp+0D8h+quat+0Ch], xmm1
        }
      }
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      QuatTransform(&quat, &FlightDynamicsManager->m_ForwardAxis, p_m_BladeDirection + 1);
      v55 = BG_GetFlightDynamicsManager();
      QuatTransform(&quat, &v55->m_ElevatorAxis, p_m_BladeDirection);
      __asm { vaddss  xmm1, xmm10, dword ptr [rsp+0D8h+var_98+4] }
      p_m_BladeDirection = (vec3_t *)((char *)p_m_BladeDirection + 44);
      __asm { vmovss  dword ptr [rsp+0D8h+var_98+4], xmm1 }
      --v35;
    }
    while ( v35 );
  }
  __asm
  {
    vmulss  xmm0, xmm11, dword ptr [rdi+78h]
    vdivss  xmm0, xmm8, xmm0
    vmovss  dword ptr [rdi+80h], xmm0
  }
  _R11 = &v69;
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
HelicopterDynamics::SimulateRotorSpeed
==============
*/

void __fastcall HelicopterDynamics::SimulateRotorSpeed(HelicopterDynamics *this, double targetRPM, double dT)
{
  __asm
  {
    vcomiss xmm1, dword ptr [rcx+5B8h]
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm1
    vmulss  xmm5, xmm2, cs:?HFD_SIMULATE_ROTOR_RPM_SPOOL_UP@@3MA; float HFD_SIMULATE_ROTOR_RPM_SPOOL_UP
    vmovss  xmm2, cs:__real@3f800000
    vsubss  xmm3, xmm2, xmm5
    vmulss  xmm4, xmm3, dword ptr [rcx+5B8h]
    vmulss  xmm0, xmm5, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rcx+5B8h], xmm1
    vmovaps xmm6, [rsp+18h+var_18]
  }
}

/*
==============
HelicopterDynamics::SimulateRotorsNoPhysics
==============
*/

void __fastcall HelicopterDynamics::SimulateRotorsNoPhysics(HelicopterDynamics *this, double dT, double ail, double elev, float col)
{
  HelicopterDynamics_vtbl *v9; 
  int v16; 
  char v31; 
  float v52; 
  float v53; 
  char v58; 

  v9 = this->__vftable;
  _RDI = this;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  ((void (__fastcall *)(HelicopterDynamics *))v9->SimulateTurbineOperation)(this);
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+5B8h]
    vmulss  xmm4, xmm8, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
    vmovss  dword ptr [rdi+788h], xmm4
  }
  v16 = 0;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; collective
    vxorps  xmm2, xmm2, xmm2; cyclicLateral
    vxorps  xmm1, xmm1, xmm1; cyclicForward
  }
  *(_QWORD *)_RDI->m_TailRotor.m_AirspeedVector.v = 0i64;
  _RDI->m_TailRotor.m_AirspeedVector.v[2] = 0.0;
  __asm { vmovss  [rsp+78h+var_58], xmm9 }
  FlightDynamicsRotorSystem::SetSwashplateDT(&_RDI->m_TailRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v52);
  *(_QWORD *)_RDI->m_TailRotor.m_LiftForceVector.v = 0i64;
  *(_QWORD *)&_RDI->m_TailRotor.m_LiftForceVector.z = 0i64;
  __asm { vmovaps xmm1, xmm9; dT }
  *(_QWORD *)&_RDI->m_TailRotor.m_LiftTorqueVector.y = 0i64;
  FlightDynamicsRotorSystem::Update(&_RDI->m_TailRotor, *(float *)&_XMM1, 1);
  __asm
  {
    vmovss  xmm3, [rsp+78h+col]; collective
    vmovaps xmm2, xmm6; cyclicLateral
    vmovaps xmm1, xmm7; cyclicForward
  }
  *(_QWORD *)_RDI->m_MainRotor.m_AirspeedVector.v = 0i64;
  __asm { vmovss  [rsp+78h+var_58], xmm9 }
  _RDI->m_MainRotor.m_AirspeedVector.v[2] = 0.0;
  FlightDynamicsRotorSystem::SetSwashplateDT(&_RDI->m_MainRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v53);
  __asm
  {
    vmovss  xmm0, cs:?HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR@@3MA; float HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR
    vmulss  xmm1, xmm0, dword ptr [rdi+590h]; distance
    vmovss  xmm2, cs:?HFD_BLADE_GROUND_EFFECT_MULTIPLIER@@3MA; liftMultiplier
    vmovaps xmm3, xmm9; dT
  }
  FlightDynamicsRotorSystem::UpdateGroundEffect(&_RDI->m_MainRotor, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  *(_QWORD *)_RDI->m_MainRotor.m_LiftForceVector.v = 0i64;
  *(_QWORD *)&_RDI->m_MainRotor.m_LiftForceVector.z = 0i64;
  *(_QWORD *)&_RDI->m_MainRotor.m_LiftTorqueVector.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+740h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+56Ch], xmm1
    vmovaps xmm1, xmm9; dT
  }
  FlightDynamicsRotorSystem::Update(&_RDI->m_MainRotor, *(float *)&_XMM1, 1);
  __asm { vcomiss xmm8, cs:__real@43160000 }
  if ( v31 && _RDI->m_MainRotor.m_BladeCount > 0 )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    _RBX = &_RDI->m_MainRotor.m_RotorBlades[0].m_BladeDeflectionVelocity;
    do
    {
      __asm
      {
        vmovss  xmm1, cs:?HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_RAND@@3MA; max
        vmovss  xmm6, dword ptr [rbx-4]
        vxorps  xmm0, xmm0, xmm0; min
      }
      *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm3, xmm1, cs:?HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE
        vsubss  xmm4, xmm2, xmm3
        vmovss  dword ptr [rbx], xmm4
        vmulss  xmm1, xmm9, cs:?HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY
        vsubss  xmm1, xmm7, xmm1
        vmulss  xmm0, xmm1, xmm4
        vmovss  dword ptr [rbx], xmm0
        vmulss  xmm0, xmm0, cs:?HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbx-4], xmm2
      }
      ++v16;
      _RBX += 11;
    }
    while ( v16 < _RDI->m_MainRotor.m_BladeCount );
  }
  __asm
  {
    vmovaps xmm1, xmm9
    vmovaps xmm6, [rsp+78h+var_18]
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  ((void (__fastcall *)(HelicopterDynamics *))_RDI->PerformAutomaticControl)(_RDI);
}

/*
==============
HelicopterDynamics::SimulateStationaryRotorBladesMovement
==============
*/

void __fastcall HelicopterDynamics::SimulateStationaryRotorBladesMovement(HelicopterDynamics *this, double dT)
{
  HelicopterDynamics_vtbl *v6; 
  int v7; 

  v6 = this->__vftable;
  v7 = 0;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RDI = this;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm7, xmm1
  }
  this->m_EnableFlyByWire = 0;
  this->m_PreviousEnableFlyByWire = 0;
  this->m_ManualControlTimer = 1.0;
  this->m_GyroAltitudeSet = 0;
  this->m_GyroGPSlocationSet = 0;
  *(_QWORD *)&this->m_GovernorRPM = 0i64;
  ((void (*)(void))v6->SimulateTurbineOperation)();
  __asm
  {
    vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000; min
    vmovss  xmm6, dword ptr [rdi+5B8h]
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:?HFD_BONE_STATIONARY_WIND_ROTATION_HZ@@3MA; float HFD_BONE_STATIONARY_WIND_ROTATION_HZ
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm7, cs:?HFD_SIMULATE_ROTOR_RPM_SPOOL_DOWN@@3MA; float HFD_SIMULATE_ROTOR_RPM_SPOOL_DOWN
    vsubss  xmm0, xmm8, xmm1
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+5B8h], xmm1
    vmulss  xmm9, xmm1, xmm7
    vaddss  xmm0, xmm9, dword ptr [rdi+5BCh]
    vmovss  dword ptr [rdi+5BCh], xmm0
  }
  if ( _RDI->m_MainRotor.m_BladeCount > 0 )
  {
    _RBX = &_RDI->m_MainRotor.m_RotorBlades[0].m_BladeDeflectionVelocity;
    do
    {
      __asm
      {
        vmovss  xmm1, cs:?HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_RAND@@3MA; max
        vmovss  xmm6, dword ptr [rbx-4]
        vxorps  xmm0, xmm0, xmm0; min
      }
      *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm3, xmm1, cs:?HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE
        vsubss  xmm4, xmm2, xmm3
        vmovss  dword ptr [rbx], xmm4
        vmulss  xmm1, xmm7, cs:?HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY
        vsubss  xmm1, xmm8, xmm1
        vmulss  xmm0, xmm1, xmm4
        vmovss  dword ptr [rbx], xmm0
        vmulss  xmm0, xmm0, cs:?HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE@@3MA; float HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbx-4], xmm2
      }
      ++v7;
      _RBX += 11;
    }
    while ( v7 < _RDI->m_MainRotor.m_BladeCount );
  }
  __asm
  {
    vmulss  xmm1, xmm9, cs:?HFD_TAIL_ROTOR_RATIO@@3MA; float HFD_TAIL_ROTOR_RATIO
    vaddss  xmm2, xmm1, dword ptr [rdi+78Ch]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovss  dword ptr [rdi+78Ch], xmm2
  }
}

/*
==============
HelicopterDynamics::SimulateTurbineOperation
==============
*/

void __fastcall HelicopterDynamics::SimulateTurbineOperation(HelicopterDynamics *this, double dT)
{
  FlightDynamicsManager *FlightDynamicsManager; 
  char v6; 
  char v7; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  FlightDynamicsManager::GetDynamicsMode(FlightDynamicsManager, _RBX->m_DynamicsModel);
  __asm
  {
    vmovss  xmm2, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( !(v6 | v7) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8C4h]
      vmulss  xmm1, xmm0, cs:__real@47435000
      vmovss  xmm3, dword ptr [rbx+4B4h]
      vdivss  xmm4, xmm1, xmm2
      vcomiss xmm4, xmm3
    }
    if ( !(v6 | v7) )
    {
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [rax+16Ch]
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm2
        vmulss  xmm3, xmm1, xmm3
        vmulss  xmm2, xmm2, xmm4
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rbx+4B4h], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+4B4h]
    vmulss  xmm0, xmm3, dword ptr [rax+168h]
    vmulss  xmm4, xmm0, xmm6
    vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm0
  }
  if ( v6 | v7 )
  {
    __asm
    {
      vmovaps xmm6, [rsp+38h+var_18]
      vsubss  xmm0, xmm3, xmm4
      vmovss  dword ptr [rbx+4B4h], xmm0
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbx+4B4h], xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
}

/*
==============
HelicopterDynamics::SpoolUpRotor
==============
*/

void __fastcall HelicopterDynamics::SpoolUpRotor(HelicopterDynamics *this, double newRPM)
{
  __asm
  {
    vminss  xmm0, xmm1, cs:__real@3f800000
    vmulss  xmm1, xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
    vmovss  dword ptr [rcx+8C4h], xmm1
  }
}

/*
==============
HelicopterDynamics::StartPlayerControlling
==============
*/
void HelicopterDynamics::StartPlayerControlling(HelicopterDynamics *this)
{
  HelicopterDynamics_vtbl *v1; 
  const dvar_t *v4; 
  FlightDynamicsManager *FlightDynamicsManager; 
  LocalClientNum_t LocalClientForWorld; 
  FlightDynamicCameraData *CameraCurrentData; 

  v1 = this->__vftable;
  _RBX = this;
  __asm { vmovss  xmm1, cs:__real@3c83126f }
  *(_WORD *)&this->m_PreviousUserControlled = 0;
  this->m_EnableFlyByWire = 0;
  this->m_GovernorRPM = 0.0;
  ((void (*)(void))v1->PerformAutomaticControl)();
  v4 = DVARINT_fd_helicopter_start_spooled;
  if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    __asm
    {
      vmovss  xmm0, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vmovss  dword ptr [rbx+5B8h], xmm0
      vmovss  xmm1, cs:?HFD_GOVERNOR_MAX_SPEED@@3MA; float HFD_GOVERNOR_MAX_SPEED
      vmovss  dword ptr [rbx+8C4h], xmm1
    }
    _RBX->m_TurbineStarter = 0;
  }
  FlightDynamics::StartPlayerControlling(_RBX);
  if ( Physics_IsPredictiveWorld(_RBX->m_worldId) )
  {
    FlightDynamicsManager = BG_GetFlightDynamicsManager();
    if ( !FlightDynamicsManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 754, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
      __debugbreak();
    LocalClientForWorld = Physics_GetLocalClientForWorld(_RBX->m_worldId);
    CameraCurrentData = FlightDynamicsManager::GetCameraCurrentData(FlightDynamicsManager, LocalClientForWorld);
    if ( !CameraCurrentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 756, ASSERT_TYPE_ASSERT, "(cameraData)", (const char *)&queryFormat, "cameraData") )
      __debugbreak();
    memset_0(CameraCurrentData, 0, sizeof(FlightDynamicCameraData));
    CameraCurrentData->offsetEntityNum = 2047;
    *(_WORD *)&CameraCurrentData->resetParams = 257;
    CameraCurrentData->angleDelta.v[3] = 1.0;
    CameraCurrentData->contentsOfdVarQuat.v[3] = 1.0;
    CameraCurrentData->prevViewQuat.v[3] = 1.0;
    CameraCurrentData->localFBWquat.v[3] = 1.0;
  }
}

/*
==============
HelicopterDynamics::StopPlayerControlling
==============
*/
void HelicopterDynamics::StopPlayerControlling(HelicopterDynamics *this)
{
  FlightDynamics::StopPlayerControlling(this);
  __asm { vmovss  xmm1, cs:__real@3c83126f }
  ((void (__fastcall *)(HelicopterDynamics *))this->PerformAutomaticControl)(this);
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    this->m_MainRotor.m_RotorRPM = 0.0;
    this->m_TailRotor.m_RotorRPM = 0.0;
    this->m_sound.Horn = 0;
  }
}

/*
==============
HelicopterDynamics::SupportsFeature
==============
*/
bool HelicopterDynamics::SupportsFeature(HelicopterDynamics *this, BgVehiclePhysicsFeature feat)
{
  return feat == VPFEAT_HORN || (unsigned int)(feat - 22) <= 1 || FlightDynamics::SupportsFeature(this, feat);
}

/*
==============
HelicopterDynamics::TranslateUserControlInputsToFBW
==============
*/
void HelicopterDynamics::TranslateUserControlInputsToFBW(HelicopterDynamics *this, float *aileronInput, float *elevatorInput, float *collectiveInput, float *rudderInput)
{
  const dvar_t *v7; 
  int integer; 
  int v12; 
  int v13; 
  float v39; 

  _RDI = collectiveInput;
  v7 = DVARINT_fd_helicopter_fbw_mode_config;
  _RSI = aileronInput;
  _RBX = this;
  if ( !DVARINT_fd_helicopter_fbw_mode_config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_mode_config") )
    __debugbreak();
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( !integer )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+444h]
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    _R14 = rudderInput;
    __asm
    {
      vxorps  xmm0, xmm0, xmm6
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm1, dword ptr [rbx+450h]
      vxorps  xmm2, xmm1, xmm6
      vmovss  dword ptr [r14], xmm2
    }
    *elevatorInput = _RBX->m_ControlInputsNormalized[5];
    *_RDI = _RBX->m_ControlInputsNormalized[2];
LABEL_15:
    if ( Physics_IsPredictiveWorld(_RBX->m_worldId) )
    {
      v39 = *_R14;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+448h]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbx+3F8h], xmm1
      }
      _RBX->m_UserControlInputs[8] = v39;
      _RBX->m_UserControlInputs[12] = *_RSI;
    }
    goto LABEL_17;
  }
  v12 = integer - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_17;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+444h]
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      _R14 = rudderInput;
      __asm
      {
        vxorps  xmm0, xmm0, xmm6
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, dword ptr [rbx+450h]
        vxorps  xmm2, xmm1, xmm6
        vmovss  xmm1, cs:__real@bf800000; min
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm2, cs:__real@3f800000; max
      }
      *elevatorInput = _RBX->m_ControlInputsNormalized[5];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+45Ch]
        vmovss  dword ptr [rdi], xmm0
        vaddss  xmm0, xmm0, dword ptr [rbx+44Ch]; val
        vmovss  dword ptr [rdi], xmm0
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi], xmm0 }
      goto LABEL_15;
    }
    *_RSI = _RBX->m_ControlInputsNormalized[3];
    *rudderInput = _RBX->m_ControlInputsNormalized[0];
    *elevatorInput = _RBX->m_ControlInputsNormalized[1];
    *_RDI = _RBX->m_ControlInputsNormalized[5];
    if ( Physics_IsPredictiveWorld(_RBX->m_worldId) )
    {
      _RBX->m_UserControlInputs[8] = *rudderInput;
      _RBX->m_UserControlInputs[9] = 0.0;
    }
  }
  else
  {
    *_RSI = _RBX->m_ControlInputsNormalized[3];
    *rudderInput = _RBX->m_ControlInputsNormalized[0];
    *elevatorInput = _RBX->m_ControlInputsNormalized[5];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+448h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rdi], xmm1
    }
    if ( Physics_IsPredictiveWorld(_RBX->m_worldId) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vcomiss xmm0, dword ptr [rbx+470h]
      }
      _RBX->m_UserControlInputs[8] = *rudderInput;
      _RBX->m_UserControlInputs[9] = 0.0;
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+44Ch]
      vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm2
      vmulss  xmm3, xmm1, dword ptr [rdi]
      vmulss  xmm2, xmm4, xmm2
      vaddss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rdi], xmm0
    }
  }
LABEL_17:
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
FlightDynamicsRotorSystem::Update
==============
*/

void __fastcall FlightDynamicsRotorSystem::Update(FlightDynamicsRotorSystem *this, double dT, bool drawBlade)
{
  char v16; 
  vec3_t v70; 
  __int64 v71; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v71 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm12, xmm1
  }
  _RBX = this;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::Update");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+98h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( v16 )
  {
    *(_QWORD *)_RBX->m_LiftTorqueVector.v = 0i64;
    _RBX->m_LiftTorqueVector.v[2] = 0.0;
    *(_QWORD *)_RBX->m_LiftForceVector.v = 0i64;
    _RBX->m_LiftForceVector.v[2] = 0.0;
    *(_QWORD *)_RBX->m_AirflowVelocity.v = 0i64;
    _RBX->m_AirflowVelocity.v[2] = 0.0;
    *(_QWORD *)_RBX->m_AirspeedVector.v = 0i64;
    _RBX->m_AirspeedVector.v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+60h]
      vmovss  xmm7, dword ptr [rbx+64h]
      vmovss  xmm8, dword ptr [rbx+68h]
      vmovss  xmm9, dword ptr [rbx+54h]
      vmovss  xmm10, dword ptr [rbx+58h]
      vmovss  xmm11, dword ptr [rbx+5Ch]
      vmovaps xmm1, xmm12; dT
    }
    FlightDynamicsRotorSystem::UpdateRotor(_RBX, *(float *)&_XMM1, drawBlade);
    __asm
    {
      vmulss  xmm4, xmm12, cs:?HFD_ROTOR_LIFT_TORQUE_RATE@@3MA; float HFD_ROTOR_LIFT_TORQUE_RATE
      vmovss  xmm1, dword ptr [rbx+60h]
      vsubss  xmm0, xmm1, xmm6
      vmulss  xmm2, xmm0, xmm4
      vaddss  xmm3, xmm2, xmm6
      vmovss  dword ptr [rbx+60h], xmm3
      vmovss  xmm0, dword ptr [rbx+64h]
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rbx+64h], xmm3
      vmovss  xmm0, dword ptr [rbx+68h]
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rbx+68h], xmm3
      vmulss  xmm4, xmm12, cs:?HFD_ROTOR_LIFT_FORCE_RATE@@3MA; float HFD_ROTOR_LIFT_FORCE_RATE
      vmovss  xmm1, dword ptr [rbx+54h]
      vsubss  xmm0, xmm1, xmm9
      vmulss  xmm2, xmm0, xmm4
      vaddss  xmm3, xmm2, xmm9
      vmovss  dword ptr [rbx+54h], xmm3
      vmovss  xmm0, dword ptr [rbx+58h]
      vsubss  xmm1, xmm0, xmm10
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, xmm10
      vmovss  dword ptr [rbx+58h], xmm3
      vmovss  xmm0, dword ptr [rbx+5Ch]
      vsubss  xmm1, xmm0, xmm11
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, xmm11
      vmovss  dword ptr [rbx+5Ch], xmm3
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vsubss  xmm1, xmm0, dword ptr [rbx+50h]
      vmulss  xmm2, xmm1, dword ptr [rbx+80h]
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm0, xmm3, dword ptr [rbx+98h]
      vmovss  dword ptr [rbx+98h], xmm0
      vmulss  xmm0, xmm0, xmm12
      vaddss  xmm1, xmm0, dword ptr [rbx+9Ch]
      vmulss  xmm0, xmm1, cs:__real@40c00000; X
      vmovss  xmm1, cs:__real@48afc800; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3e2aaaab
      vmovss  dword ptr [rbx+9Ch], xmm1
      vmovsd  xmm0, qword ptr [rbx+54h]
      vmovsd  [rsp+0B8h+var_98], xmm0
    }
    v70.v[2] = _RBX->m_LiftForceVector.v[2];
    __asm { vmovaps xmm2, xmm12 }
    FlightDynamicsRotorSystem::UpdateAirflowMomemtum(_RBX, &v70, *(float *)&_XMM2);
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v72;
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
FlightDynamicsRotorSystem::UpdateAirflowMomemtum
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateAirflowMomemtum(FlightDynamicsRotorSystem *this, vec3_t *liftForceVector, double dT)
{
  __int64 m_BladeCount; 
  __int64 v33; 
  float *p_m_BladeGroundEffect; 
  unsigned __int64 v58; 
  __int64 v64; 
  __int64 p_m_GroundEffectTraceDistance; 
  int v125; 
  int v126; 
  int v127; 
  char v131; 
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
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps [rsp+108h+var_98], xmm14
    vmovaps [rsp+108h+var_A8], xmm15
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm7, xmm1, xmm2
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm1, xmm2
    vmovaps xmm10, xmm2
    vmovss  xmm2, dword ptr [rdx+8]
    vsubss  xmm0, xmm2, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm10
    vmovss  xmm0, cs:?HFD_AIRFLOW_MOMENTUM_RESTITUTION@@3MA; val
    vmovss  [rsp+108h+var_C0], xmm1
  }
  _RBX = this;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm9; max
    vunpcklps xmm6, xmm7, xmm3
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+14h]
    vmovss  xmm5, dword ptr [rbx+18h]
  }
  m_BladeCount = _RBX->m_BladeCount;
  v33 = 0i64;
  __asm
  {
    vmulss  xmm1, xmm7, xmm0
    vsubss  xmm11, xmm7, xmm1
    vshufps xmm2, xmm6, xmm6, 55h ; 'U'
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm2, xmm0
    vsubss  xmm12, xmm2, xmm1
    vmovss  xmm2, [rsp+108h+var_C0]
    vmulss  xmm0, xmm0, xmm2
    vsubss  xmm13, xmm2, xmm0
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm0, xmm6, xmm1
    vmovss  [rsp+108h+var_D8], xmm0
    vmulss  xmm14, xmm4, xmm1
    vmulss  xmm15, xmm5, xmm1
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( m_BladeCount >= 4 )
  {
    p_m_BladeGroundEffect = &_RBX->m_RotorBlades[1].m_BladeGroundEffect;
    v58 = ((unsigned __int64)(m_BladeCount - 4) >> 2) + 1;
    v33 = 4 * v58;
    do
    {
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rax-2Ch]
        vaddss  xmm1, xmm0, dword ptr [rax]
        vaddss  xmm2, xmm1, dword ptr [rax+2Ch]
        vaddss  xmm0, xmm8, dword ptr [rax-28h]
        vaddss  xmm1, xmm0, dword ptr [rax+4]
        vaddss  xmm7, xmm2, dword ptr [rax+58h]
        vaddss  xmm2, xmm1, dword ptr [rax+30h]
        vaddss  xmm8, xmm2, dword ptr [rax+5Ch]
      }
      p_m_BladeGroundEffect += 44;
      --v58;
    }
    while ( v58 );
  }
  if ( v33 < m_BladeCount )
  {
    v64 = m_BladeCount - v33;
    p_m_GroundEffectTraceDistance = (__int64)&_RBX->m_RotorBlades[v33].m_GroundEffectTraceDistance;
    do
    {
      __asm
      {
        vaddss  xmm7, xmm7, dword ptr [rcx-4]
        vaddss  xmm8, xmm8, dword ptr [rcx]
      }
      p_m_GroundEffectTraceDistance += 44i64;
      --v64;
    }
    while ( v64 );
  }
  if ( (int)m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3513, ASSERT_TYPE_ASSERT, "(m_BladeCount > 1)", (const char *)&queryFormat, "m_BladeCount > 1") )
    __debugbreak();
  __asm
  {
    vmovd   xmm0, dword ptr [rbx+6Ch]
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm6, xmm9, xmm0
    vmovss  xmm0, dword ptr [rbx+98h]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm5, xmm3, cs:?HFD_AIRFLOW_GROUND_EFFECT_RPM_FACTOR@@3MA; float HFD_AIRFLOW_GROUND_EFFECT_RPM_FACTOR
    vmulss  xmm4, xmm6, xmm8
    vsubss  xmm3, xmm9, xmm4
    vmulss  xmm0, xmm6, xmm7
    vmulss  xmm3, xmm3, xmm0
    vmulss  xmm0, xmm3, xmm5; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm15, dword ptr [rbx+0B0h]
    vmulss  xmm2, xmm14, dword ptr [rbx+0ACh]
    vmovss  xmm1, cs:?HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_EXPO@@3MA; expo
    vmovaps xmm7, xmm0
    vmovss  xmm0, [rsp+108h+var_D8]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm0, dword ptr [rbx+0B4h]
    vaddss  xmm0, xmm4, xmm3; value
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm0, cs:?HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_FACTOR@@3MA; float HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_FACTOR
    vmulss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm10
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, dword ptr [rbx+14h]
    vaddss  xmm6, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm6
    vmulss  xmm0, xmm3, dword ptr [rbx+18h]
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+1Ch]
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm1
    vmulss  xmm1, xmm7, cs:?HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_LIFT_FACTOR@@3MA; float HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_LIFT_FACTOR
    vmulss  xmm3, xmm1, xmm10
    vmulss  xmm0, xmm3, dword ptr [rbx+0B0h]
    vmulss  xmm2, xmm3, dword ptr [rbx+0ACh]
    vaddss  xmm1, xmm12, xmm0
    vmulss  xmm0, xmm3, dword ptr [rbx+0B4h]
    vaddss  xmm5, xmm11, xmm2
    vmovss  xmm2, cs:?HFD_AIRFLOW_MOMENTUM_CHANGE@@3MA; float HFD_AIRFLOW_MOMENTUM_CHANGE
    vaddss  xmm4, xmm13, xmm0
    vmulss  xmm0, xmm2, xmm5
    vaddss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm3
    vmulss  xmm1, xmm2, xmm1
    vaddss  xmm5, xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm5
    vmovss  [rsp+108h+var_D8], xmm3
    vmulss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( (v125 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm { vmovss  [rsp+108h+var_D8], xmm5 }
  if ( (v126 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm { vmovss  [rsp+108h+var_D8], xmm1 }
  if ( (v127 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3550, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_AirflowVelocity )[0] ) && !IS_NAN( ( m_AirflowVelocity )[1] ) && !IS_NAN( ( m_AirflowVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_AirflowVelocity )[0] ) && !IS_NAN( ( m_AirflowVelocity )[1] ) && !IS_NAN( ( m_AirflowVelocity )[2] )") )
      __debugbreak();
  }
  _R11 = &v131;
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
    vmovaps xmm14, [rsp+108h+var_98]
    vmovaps xmm15, [rsp+108h+var_A8]
  }
}

/*
==============
FlightDynamicsRotorSystem::UpdateGroundEffect
==============
*/

float __fastcall FlightDynamicsRotorSystem::UpdateGroundEffect(FlightDynamicsRotorSystem *this, double distance, double liftMultiplier, double dT)
{
  int v43; 
  Physics_WorldId m_worldId; 
  char v87; 
  bool v88; 
  vec3_t v117; 
  vec3_t v118; 
  vec3_t end; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t in; 
  vec3_t v123; 
  vec4_t quat; 
  vec4_t out; 
  trace_t v126; 
  char v127; 
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
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm4, dword ptr [rcx+8]
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm7, xmm0, xmm5
    vmovss  xmm0, dword ptr [rcx+4]
    vxorps  xmm6, xmm0, xmm5
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm11, xmm1
    vmovaps xmm10, xmm3
    vmulss  xmm3, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm5
    vmovss  [rsp+200h+var_1C0], xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmovss  xmm0, dword ptr [rcx+9Ch]
    vmulss  xmm13, xmm7, xmm1
    vmulss  xmm14, xmm6, xmm1
    vmulss  xmm15, xmm4, xmm1
    vmulss  xmm1, xmm0, cs:__real@40c00000
  }
  _RDI = this;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vmovss  dword ptr [rbp+100h+angles+4], xmm1
    vmovss  dword ptr [rbp+100h+angles], xmm12
    vmovss  dword ptr [rbp+100h+angles+8], xmm12
  }
  AnglesToQuat(&angles, &quat);
  QuatMultiply(&quat, &_RDI->m_RotorAxisQuat, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+100h+out]
    vmovdqa xmmword ptr [rbp+100h+quat], xmm0
  }
  QuatMultiply(&quat, &_RDI->m_RotationQuat, &out);
  _EAX = _RDI->m_BladeCount;
  _RDI->m_BladeCollision = 0;
  v43 = 0;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( _EAX > 0 )
  {
    __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    _RBX = &_RDI->m_RotorBlades[0].m_BladeGroundEffect;
    do
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbx-24h]
        vmovss  xmm5, dword ptr [rbx-20h]
        vmovss  xmm6, dword ptr [rbx-8]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rbp+100h+in], xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rbp+100h+in+8], xmm0
        vmovss  dword ptr [rbp+100h+in+4], xmm1
      }
      QuatTransform(&out, &in, &v123);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+70h]
        vmulss  xmm1, xmm2, dword ptr [rbp+100h+var_150]
        vaddss  xmm4, xmm1, dword ptr [rdi+20h]
        vmulss  xmm1, xmm2, dword ptr [rbp+100h+var_150+4]
        vaddss  xmm3, xmm1, dword ptr [rdi+24h]
        vmulss  xmm1, xmm2, dword ptr [rbp+100h+var_150+8]
        vaddss  xmm2, xmm1, dword ptr [rdi+28h]
        vmulss  xmm0, xmm13, xmm11
        vaddss  xmm0, xmm0, xmm4
        vmovss  dword ptr [rsp+200h+end], xmm0
        vmulss  xmm0, xmm14, xmm11
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rsp+200h+end+4], xmm1
        vmovss  xmm1, cs:?HFD_TRACE_MIN_RPM@@3MA; float HFD_TRACE_MIN_RPM
        vcomiss xmm1, dword ptr [rdi+98h]
        vmulss  xmm0, xmm15, xmm11
        vaddss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rbp+100h+start], xmm4
        vmovss  dword ptr [rbp+100h+start+4], xmm3
        vmovss  dword ptr [rbp+100h+start+8], xmm2
        vmovss  dword ptr [rsp+200h+end+8], xmm0
      }
      if ( v87 )
      {
        __asm { vmovsd  xmm0, qword ptr [rsp+200h+end] }
        m_worldId = _RDI->m_worldId;
        __asm
        {
          vmovsd  qword ptr [rsp+200h+var_1B0], xmm0
          vmovsd  xmm0, qword ptr [rbp+100h+start]
        }
        v117.v[2] = end.v[2];
        __asm { vmovsd  qword ptr [rsp+200h+var_1A0], xmm0 }
        v118.v[2] = start.v[2];
        FD_Trace(m_worldId, &v126, &v118, &v117, NULL, 2097, NULL);
        __asm { vmovss  xmm0, [rbp+100h+var_120] }
        if ( v126.startsolid )
          _RDI->m_BladeCollision = 1;
      }
      else
      {
        __asm
        {
          vmovaps xmm0, xmm8; value
          vmovss  [rbp+100h+var_120], xmm0
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, cs:?HFD_BLADE_GROUND_EFFECT_DISTANCE_EXPO@@3MA; expo
      }
      I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]
        vsubss  xmm1, xmm8, xmm0
        vsubss  xmm0, xmm1, xmm3
        vmulss  xmm1, xmm0, [rsp+200h+var_1C0]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm4, xmm3, xmm2
        vmovss  dword ptr [rbx], xmm4
      }
      v87 = 0;
      v88 = !DEBUG_DRAW_LINES;
      __asm { vaddss  xmm9, xmm9, xmm2 }
      if ( DEBUG_DRAW_LINES )
      {
        __asm
        {
          vmulss  xmm3, xmm11, [rbp+100h+var_120]
          vmulss  xmm1, xmm13, xmm3
          vaddss  xmm2, xmm1, dword ptr [rbp+100h+start]
          vmulss  xmm0, xmm14, xmm3
          vaddss  xmm1, xmm0, dword ptr [rbp+100h+start+4]
          vmovss  dword ptr [rsp+200h+end], xmm2
          vmulss  xmm2, xmm15, xmm3
          vaddss  xmm0, xmm2, dword ptr [rbp+100h+start+8]
          vmovss  dword ptr [rsp+200h+end+8], xmm0
          vmovss  dword ptr [rsp+200h+end+4], xmm1
        }
        FD_DebugLine(&start, &end, &colorBlue, 0, DEBUG_LINE_TIME);
        __asm { vmovss  xmm4, dword ptr [rbx] }
      }
      __asm
      {
        vmulss  xmm0, xmm4, cs:?HFD_BLADE_GROUND_EFFECT_DECAY@@3MA; float HFD_BLADE_GROUND_EFFECT_DECAY
        vmulss  xmm2, xmm0, xmm10
        vandps  xmm1, xmm2, xmm7
        vandps  xmm0, xmm4, xmm7
        vcomiss xmm1, xmm0
      }
      if ( v87 | v88 )
        __asm { vsubss  xmm0, xmm4, xmm2 }
      else
        __asm { vmovaps xmm0, xmm12 }
      __asm { vmovss  dword ptr [rbx], xmm0 }
      _EAX = _RDI->m_BladeCount;
      _RBX += 11;
      ++v43;
    }
    while ( v43 < _EAX );
  }
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm0, xmm9, xmm0
  }
  _R11 = &v127;
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
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsRotorSystem::UpdatePositionAndOrientation
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdatePositionAndOrientation(FlightDynamicsRotorSystem *this, vec3_t *position, vec4_t *rotation, double dT)
{
  vec4_t *v4; 
  vec4_t v8; 

  v4 = rotation;
  __asm { vmovups xmm0, xmmword ptr [r8] }
  this->m_Position = *position;
  __asm
  {
    vmovaps xmm2, xmm3
    vmovups xmmword ptr [rsp+38h+var_18], xmm0
  }
  FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(this, &v8, *(float *)&_XMM2);
  this->m_PreviousRotationQuat = this->m_RotationQuat;
  this->m_RotationQuat = *v4;
}

/*
==============
FlightDynamicsRotorSystem::UpdateRotor
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateRotor(FlightDynamicsRotorSystem *this, double dT, bool drawBlade)
{
  FlightDynamicsManager *FlightDynamicsManager; 
  int v47; 
  char v79; 
  __int64 m_BladeCount; 
  int v107; 
  int v109; 
  float *p_m_BladeDeflection; 
  int v122; 
  __int64 v123; 
  int v128; 
  __int64 v212; 
  char v316; 
  bool v425; 
  bool v426; 
  char v611; 
  int Int_Internal_DebugName; 
  __int64 v757; 
  int duration[2]; 
  double v759; 
  double v760; 
  int v761; 
  int v762; 
  int v763; 
  int v764; 
  int v765; 
  FlightDynamicsManager *v799; 
  __int64 v800; 
  vec3_t v801; 
  vec3_t v802; 
  vec3_t start; 
  vec3_t v804; 
  vec3_t dir; 
  vec3_t v806; 
  vec4_t v807; 
  vec3_t v808; 
  vec4_t color; 
  vec3_t v1; 
  vec3_t v811; 
  vec3_t sum; 
  vec3_t v813; 
  vec3_t v814; 
  vec3_t cross; 
  vec3_t b; 
  vec3_t a; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t v820; 
  vec3_t v821; 
  vec4_t in1; 
  vec4_t out; 
  vec3_t v824; 
  vec4_t quat; 
  vec3_t v826; 
  vec3_t result; 
  vec3_t v828; 
  vec4_t v829; 
  vec3_t v830; 
  vec3_t in; 
  vec4_t v832; 
  char v834; 
  void *retaddr; 

  _RAX = &retaddr;
  v800 = -2i64;
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
  }
  LOBYTE(v763) = drawBlade;
  __asm
  {
    vmovaps xmm10, xmm1
    vmovss  [rsp+3E0h+var_368], xmm1
  }
  _RSI = this;
  __asm
  {
    vmovss  xmm14, cs:__real@3a83126f
    vcomiss xmm1, xmm14
    vcomiss xmm1, cs:__real@3d23d70a
  }
  if ( (unsigned __int64)&v757 == _security_cookie )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3cd013a2
      vmulss  xmm11, xmm1, dword ptr [rcx+70h]
      vmovss  [rbp+2E0h+var_30C], xmm11
      vmulss  xmm2, xmm1, dword ptr [rcx+74h]
      vmovss  xmm1, dword ptr [rcx+98h]
      vmulss  xmm8, xmm1, cs:__real@3dd67750
      vmulss  xmm0, xmm2, xmm11
      vmovss  [rbp+2E0h+var_31C], xmm0
    }
    Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::UpdateRotor");
    FlightDynamicsManager = BG_GetFlightDynamicsManager();
    v799 = FlightDynamicsManager;
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vmovss  dword ptr [rbp+2E0h+angles], xmm12
      vmovss  dword ptr [rbp+2E0h+angles+4], xmm12
      vmovss  dword ptr [rbp+2E0h+angles+8], xmm12
      vmovss  xmm6, cs:__real@40c00000
      vmulss  xmm1, xmm6, dword ptr [rsi+9Ch]
      vmulss  xmm0, xmm10, dword ptr [rsi+98h]
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbp+2E0h+angles+4], xmm1
    }
    AnglesToQuat(&angles, &quat);
    QuatMultiply(&quat, &_RSI->m_RotorAxisQuat, &out);
    QuatMultiply(&out, &_RSI->m_RotationQuat, &v832);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsi+9Ch]
      vmovss  dword ptr [rbp+2E0h+angles+4], xmm1
    }
    AnglesToQuat(&angles, &quat);
    QuatMultiply(&quat, &_RSI->m_RotorAxisQuat, &out);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+2E0h+out]
      vmovdqa xmmword ptr [rbp+2E0h+quat], xmm0
    }
    QuatMultiply(&quat, &_RSI->m_RotationQuat, &out);
    QuatMultiply(&quat, &_RSI->m_PreviousRotationQuat, &v807);
    QuatTransform(&_RSI->m_RotationQuat, &FlightDynamicsManager->m_ForwardAxis, &v1);
    QuatTransform(&_RSI->m_RotorAxisQuat, &FlightDynamicsManager->m_UpAxis, &in);
    QuatTransform(&_RSI->m_RotationQuat, &in, &_RSI->m_RotorAxis);
    Vec3Cross(&_RSI->m_RotorAxis, &v1, &cross);
    if ( DEBUG_DRAW_LINES )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@42c80000
        vmulss  xmm0, xmm3, dword ptr [rsi+0ACh]
        vaddss  xmm1, xmm0, dword ptr [rcx]
        vmovss  dword ptr [rbp+2E0h+end], xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+0B0h]
        vaddss  xmm1, xmm0, dword ptr [rcx+4]
        vmovss  dword ptr [rbp+2E0h+end+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rsi+0B4h]
        vaddss  xmm1, xmm0, dword ptr [rcx+8]
        vmovss  dword ptr [rbp+2E0h+end+8], xmm1
      }
      FD_DebugLine(&_RSI->m_Position, &end, &colorGreen, 0, DEBUG_LINE_TIME);
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+18h]
      vmovss  xmm0, dword ptr [rsi+14h]
      vmovss  xmm7, dword ptr [rsi+1Ch]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
    }
    v47 = 0;
    __asm
    {
      vcomiss xmm3, cs:__real@4d10c040
      vmovss  xmm5, dword ptr [rsi+14h]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm4, xmm2, xmm1
      vsqrtss xmm3, xmm4, xmm4
      vmovss  xmm9, cs:__real@80000000
      vcmpless xmm0, xmm3, xmm9
      vmovss  xmm13, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm13, xmm0
      vmovss  [rsp+3E0h+var_390], xmm1
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm2, xmm0, xmm5
      vmovss  [rsp+3E0h+var_378], xmm2
      vmulss  xmm5, xmm6, xmm0
      vmovss  [rsp+3E0h+var_374], xmm5
      vmulss  xmm7, xmm7, xmm0
      vmovss  [rsp+3E0h+var_370], xmm7
      vmulss  xmm15, xmm3, cs:__real@3cd013aa
      vmovss  [rbp+2E0h+var_310], xmm15
      vmulss  xmm0, xmm4, cs:__real@3a291ff6
      vmovss  [rbp+2E0h+var_34C], xmm0
      vcomiss xmm15, xmm14
      vmulss  xmm1, xmm15, cs:?HFD_BLADE_AIRSPEED_SCALE@@3MA; float HFD_BLADE_AIRSPEED_SCALE
      vmulss  xmm0, xmm2, xmm1
      vmovss  [rbp+2E0h+var_334], xmm0
      vmulss  xmm0, xmm5, xmm1
      vmovss  [rbp+2E0h+var_330], xmm0
      vmulss  xmm0, xmm7, xmm1
      vmovss  [rbp+2E0h+var_32C], xmm0
      vmulss  xmm0, xmm1, xmm1
      vmulss  xmm1, xmm2, xmm0
      vmovss  [rbp+2E0h+var_328], xmm1
      vmulss  xmm1, xmm5, xmm0
      vmovss  [rbp+2E0h+var_324], xmm1
      vmulss  xmm0, xmm7, xmm0
      vmovss  [rbp+2E0h+var_320], xmm0
      vmulss  xmm0, xmm15, cs:__real@3dcccccd; val
      vmovaps xmm2, xmm13; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm2, xmm8, xmm11
      vmulss  xmm0, xmm2, cs:?HFD_BLADE_AIRSPEED_SCALE@@3MA; float HFD_BLADE_AIRSPEED_SCALE
      vmovss  [rsp+3E0h+var_384], xmm0
      vmovss  dword ptr [rbp+2E0h+a], xmm12
      vmovss  dword ptr [rbp+2E0h+a+4], xmm12
      vmovss  dword ptr [rbp+2E0h+a+8], xmm12
      vmovss  dword ptr [rbp+2E0h+sum], xmm12
      vmovss  dword ptr [rbp+2E0h+sum+4], xmm12
      vmovss  dword ptr [rbp+2E0h+sum+8], xmm12
      vmovss  dword ptr [rbp+2E0h+var_228], xmm12
      vmovss  dword ptr [rbp+2E0h+var_228+4], xmm12
      vmovss  dword ptr [rbp+2E0h+var_228+8], xmm12
      vcvtss2sd xmm0, xmm10, xmm10
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v316 | v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
      __debugbreak();
    __asm
    {
      vdivss  xmm6, xmm13, xmm10
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+2E0h+var_298]
      vxorps  xmm1, xmm0, xmm11
      vmovss  dword ptr [rbp+2E0h+in1], xmm1
      vmovss  xmm2, dword ptr [rbp+2E0h+var_298+4]
      vxorps  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+2E0h+in1+4], xmm0
      vmovss  xmm1, dword ptr [rbp+2E0h+var_298+8]
      vxorps  xmm2, xmm1, xmm11
      vmovss  dword ptr [rbp+2E0h+in1+8], xmm2
      vmovss  xmm0, dword ptr [rbp+2E0h+var_298+0Ch]
      vmovss  dword ptr [rbp+2E0h+in1+0Ch], xmm0
    }
    QuatMultiply(&in1, &out, &v829);
    __asm
    {
      vmulss  xmm5, xmm6, cs:__real@3f000000
      vmovss  xmm4, dword ptr [rbp+2E0h+var_130+0Ch]
      vmovss  xmm2, dword ptr [rbp+2E0h+var_130]
      vxorps  xmm1, xmm2, xmm11
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmulss  xmm3, xmm0, xmm5
      vmovss  dword ptr [rbp+2E0h+b], xmm3
      vmovss  xmm2, dword ptr [rbp+2E0h+var_130+4]
      vxorps  xmm1, xmm2, xmm11
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmulss  xmm6, xmm0, xmm5
      vmovss  dword ptr [rbp+2E0h+b+4], xmm6
      vmovss  xmm2, dword ptr [rbp+2E0h+var_130+8]
      vxorps  xmm1, xmm2, xmm11
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmulss  xmm4, xmm0, xmm5
      vmovss  dword ptr [rbp+2E0h+b+8], xmm4
      vmovss  [rsp+3E0h+var_394], xmm3
    }
    if ( (v764 & 0x7F800000) == 2139095040 )
      goto LABEL_11;
    __asm { vmovss  [rsp+3E0h+var_394], xmm6 }
    if ( (v764 & 0x7F800000) == 2139095040 )
      goto LABEL_11;
    __asm { vmovss  [rsp+3E0h+var_394], xmm4 }
    if ( (v764 & 0x7F800000) == 2139095040 )
    {
LABEL_11:
      __asm
      {
        vmovss  dword ptr [rbp+2E0h+var_258], xmm12
        vmovss  dword ptr [rbp+2E0h+var_258+4], xmm12
        vmovss  dword ptr [rbp+2E0h+var_258+8], xmm12
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+2E0h+b]
        vmovsd  qword ptr [rbp+2E0h+var_258], xmm0
      }
      v811.v[2] = b.v[2];
    }
    m_BladeCount = _RSI->m_BladeCount;
    v107 = 0;
    _R8 = 0i64;
    if ( m_BladeCount >= 4 )
    {
      v109 = 2;
      p_m_BladeDeflection = &_RSI->m_RotorBlades[1].m_BladeDeflection;
      v107 = 4 * ((unsigned __int64)(m_BladeCount - 4) >> 2) + 4;
      do
      {
        _RCX = 44i64 * ((v109 - 1) % (int)m_BladeCount);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0E4h]
          vsubss  xmm1, xmm0, dword ptr [r11-2Ch]
          vmovss  [rbp+r8*4+2E0h+var_F0], xmm1
        }
        _RCX = 44i64 * (v109 % (int)m_BladeCount);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0E4h]
          vsubss  xmm1, xmm0, dword ptr [r11]
          vmovss  [rbp+r8*4+2E0h+var_EC], xmm1
        }
        _RCX = 44i64 * ((v109 + 1) % (int)m_BladeCount);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0E4h]
          vsubss  xmm1, xmm0, dword ptr [r11+2Ch]
          vmovss  [rbp+r8*4+2E0h+var_E8], xmm1
        }
        _RCX = 44i64 * ((v109 + 2) % (int)m_BladeCount);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0E4h]
          vsubss  xmm1, xmm0, dword ptr [r11+58h]
          vmovss  [rbp+r8*4+2E0h+var_E4], xmm1
        }
        v109 += 4;
        _R8 += 4i64;
        p_m_BladeDeflection += 44;
      }
      while ( _R8 < m_BladeCount - 3 );
    }
    if ( _R8 < m_BladeCount )
    {
      v122 = v107 + 1;
      v123 = (__int64)&_RSI->m_RotorBlades[_R8].m_BladeDeflection;
      do
      {
        _RCX = 44i64 * (v122 % (int)m_BladeCount);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0E4h]
          vsubss  xmm1, xmm0, dword ptr [r11]
          vmovss  [rbp+r8*4+2E0h+var_F0], xmm1
        }
        ++v122;
        ++_R8;
        v123 += 44i64;
      }
      while ( _R8 < m_BladeCount );
    }
    __asm
    {
      vmovss  [rbp+2E0h+var_354], xmm12
      vmovss  [rbp+2E0h+var_350], xmm12
      vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( (int)m_BladeCount > 0 )
    {
      _RDI = _RSI->m_RotorBlades;
      do
      {
        v128 = v47 + 1;
        _RBX = (v47 + 1) % (int)m_BladeCount;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  dword ptr [rbp+2E0h+var_288], xmm0
          vmovss  xmm1, dword ptr [rdi+4]
          vmovss  dword ptr [rbp+2E0h+var_288+4], xmm1
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+2E0h+var_288+8], xmm0
        }
        QuatTransform(&out, &v808, &v824);
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+7Ch]
          vxorps  xmm7, xmm6, xmm11
          vmovss  xmm8, dword ptr [rdi+1Ch]
          vcomiss xmm7, xmm6
        }
        if ( !(v316 | v79) )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vcvtss2sd xmm1, xmm7, xmm7
            vmovsd  [rsp+3E0h+var_3B0], xmm0
            vmovsd  [rsp+3E0h+var_3B8], xmm1
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v759, v760) )
            __debugbreak();
        }
        __asm
        {
          vmaxss  xmm0, xmm8, xmm7
          vminss  xmm6, xmm6, xmm0
          vmovss  dword ptr [rdi+1Ch], xmm6
          vmulss  xmm1, xmm6, cs:?HFD_BLADE_CORIOLIS_EFFECT@@3MA; float HFD_BLADE_CORIOLIS_EFFECT
          vandps  xmm1, xmm1, xmm15
          vaddss  xmm0, xmm1, xmm13
          vmovss  [rsp+3E0h+var_394], xmm0
          vmovss  xmm0, [rsp+3E0h+var_384]
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm0, xmm2, dword ptr [rsi+78h]
          vmulss  xmm2, xmm0, cs:?HFD_ROTOR_CENTRIFUGAL_FORCE@@3MA; float HFD_ROTOR_CENTRIFUGAL_FORCE
          vmulss  xmm11, xmm2, dword ptr [rbp+2E0h+var_180]
          vmovss  [rsp+3E0h+var_390], xmm11
          vmulss  xmm12, xmm2, dword ptr [rbp+2E0h+var_180+4]
          vmovss  [rbp+2E0h+var_348], xmm12
          vmulss  xmm0, xmm2, dword ptr [rbp+2E0h+var_180+8]
          vmovss  [rsp+3E0h+var_37C], xmm0
          vmovss  xmm4, dword ptr [rbp+2E0h+var_288]
          vmulss  xmm2, xmm4, xmm4
          vmovss  xmm5, dword ptr [rbp+2E0h+var_288+4]
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm2, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm1, xmm3, xmm13, xmm0
          vmovss  [rsp+3E0h+var_39C], xmm1
          vdivss  xmm2, xmm13, xmm1
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rbp+2E0h+var_288], xmm0
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rbp+2E0h+var_288+4], xmm1
          vmulss  xmm0, xmm2, xmm6
          vmovss  dword ptr [rbp+2E0h+var_288+8], xmm0
        }
        QuatTransform(&out, &v808, &v801);
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+2E0h+var_2F8+8]
          vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_258+4]
          vmovss  xmm8, dword ptr [rbp+2E0h+var_2F8+4]
          vmulss  xmm0, xmm8, dword ptr [rbp+2E0h+var_258+8]
          vsubss  xmm6, xmm1, xmm0
          vmovss  xmm9, dword ptr [rbp+2E0h+var_2F8]
          vmulss  xmm1, xmm9, dword ptr [rbp+2E0h+var_258+8]
          vmulss  xmm0, xmm7, dword ptr [rbp+2E0h+var_258]
          vsubss  xmm5, xmm1, xmm0
          vmulss  xmm2, xmm8, dword ptr [rbp+2E0h+var_258]
          vmulss  xmm1, xmm9, dword ptr [rbp+2E0h+var_258+4]
          vsubss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm5, xmm5
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm13, xmm0
          vmovss  [rsp+3E0h+var_39C], xmm1
          vdivss  xmm0, xmm13, xmm1
          vmulss  xmm13, xmm0, xmm6
          vmovss  [rbp+2E0h+var_338], xmm13
          vmulss  xmm5, xmm0, xmm5
          vmovss  [rbp+2E0h+var_35C], xmm5
          vmulss  xmm4, xmm0, xmm4
          vmovss  [rsp+3E0h+var_36C], xmm4
          vmulss  xmm0, xmm3, xmm10
          vmulss  xmm2, xmm0, cs:__real@3cd013aa
          vcomiss xmm2, xmm14
        }
        if ( v316 )
        {
          __asm
          {
            vmovss  xmm13, dword ptr [rsi+0ACh]
            vmovss  [rbp+2E0h+var_338], xmm13
            vmovss  xmm5, dword ptr [rsi+0B0h]
            vmovss  [rbp+2E0h+var_35C], xmm5
            vmovss  xmm4, dword ptr [rsi+0B4h]
            vmovss  [rsp+3E0h+var_36C], xmm4
          }
        }
        __asm
        {
          vmulss  xmm0, xmm2, cs:?HFD_BLADE_AIRSPEED_SCALE@@3MA; float HFD_BLADE_AIRSPEED_SCALE
          vmulss  xmm1, xmm0, cs:?HFD_BLADE_EXTERNAL_ROTATION_FACTOR@@3MA; float HFD_BLADE_EXTERNAL_ROTATION_FACTOR
          vmulss  xmm0, xmm13, xmm1
          vmovss  [rbp+2E0h+var_358], xmm0
          vmulss  xmm15, xmm5, xmm1
          vmulss  xmm14, xmm1, xmm4
          vmulss  xmm3, xmm0, xmm2
          vmovss  [rsp+3E0h+var_364], xmm3
          vmulss  xmm1, xmm15, xmm2
          vmovss  [rbp+2E0h+var_360], xmm1
          vmulss  xmm4, xmm14, xmm2
          vmovss  [rsp+3E0h+var_3A0], xmm4
          vmulss  xmm1, xmm7, xmm12
          vmulss  xmm0, xmm8, [rsp+3E0h+var_37C]
          vsubss  xmm5, xmm1, xmm0
          vmulss  xmm2, xmm9, [rsp+3E0h+var_37C]
          vmulss  xmm1, xmm7, xmm11
          vsubss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm8, xmm11
          vmulss  xmm0, xmm9, xmm12
          vsubss  xmm2, xmm3, xmm0
          vmovss  xmm1, cs:?HFD_ROTOR_CENTRIFUGAL_TORQUE@@3MA; float HFD_ROTOR_CENTRIFUGAL_TORQUE
          vmulss  xmm0, xmm5, xmm1
          vmovss  [rbp+2E0h+var_344], xmm0
          vmulss  xmm0, xmm4, xmm1
          vmovss  [rbp+2E0h+var_340], xmm0
          vmulss  xmm0, xmm2, xmm1
          vmovss  [rbp+2E0h+var_33C], xmm0
        }
        v212 = v47;
        QuatTransform(&out, &_RSI->m_RotorBlades[v212].m_BladeRotationDirection, &v802);
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+2E0h+var_2E8+4]
          vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_2F8+8]
          vmovss  xmm6, dword ptr [rbp+2E0h+var_2E8+8]
          vmulss  xmm0, xmm6, dword ptr [rbp+2E0h+var_2F8+4]
          vsubss  xmm0, xmm1, xmm0
          vmovss  [rsp+3E0h+var_388], xmm0
          vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8]
          vmovss  xmm5, dword ptr [rbp+2E0h+var_2E8]
          vmulss  xmm0, xmm5, dword ptr [rbp+2E0h+var_2F8+8]
          vsubss  xmm0, xmm1, xmm0
          vmovss  [rsp+3E0h+var_380], xmm0
          vmulss  xmm2, xmm5, dword ptr [rbp+2E0h+var_2F8+4]
          vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_2F8]
          vsubss  xmm0, xmm2, xmm1
          vmovss  [rsp+3E0h+var_38C], xmm0
          vmulss  xmm3, xmm13, xmm5
          vmulss  xmm0, xmm7, [rbp+2E0h+var_35C]
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm6, [rsp+3E0h+var_36C]
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm8, xmm4, xmm5
          vmulss  xmm9, xmm7, xmm4
          vmulss  xmm10, xmm6, xmm4
        }
        QuatTransform(&v832, &v808, &v820);
        __asm
        {
          vmovss  xmm13, dword ptr [rbp+2E0h+var_2F8]
          vsubss  xmm4, xmm13, dword ptr [rbp+2E0h+var_1C8]
          vmovss  xmm11, dword ptr [rbp+2E0h+var_2F8+4]
          vsubss  xmm5, xmm11, dword ptr [rbp+2E0h+var_1C8+4]
          vmovss  xmm12, dword ptr [rbp+2E0h+var_2F8+8]
          vsubss  xmm6, xmm12, dword ptr [rbp+2E0h+var_1C8+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm3, xmm2, xmm0
          vmovss  [rsp+3E0h+var_39C], xmm1
          vdivss  xmm0, xmm2, xmm1
          vmulss  xmm2, xmm0, xmm4
          vmovss  dword ptr [rbp+2E0h+var_1C8], xmm2
          vmulss  xmm3, xmm0, xmm5
          vmovss  dword ptr [rbp+2E0h+var_1C8+4], xmm3
          vmulss  xmm5, xmm0, xmm6
          vmovss  dword ptr [rbp+2E0h+var_1C8+8], xmm5
          vmulss  xmm1, xmm2, dword ptr [rbp+2E0h+var_2E8]
          vmulss  xmm0, xmm3, dword ptr [rbp+2E0h+var_2E8+4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rbp+2E0h+var_2E8+8]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm3, dword ptr [rbp+2E0h+var_2E8]
          vaddss  xmm5, xmm0, xmm8
          vmulss  xmm1, xmm3, dword ptr [rbp+2E0h+var_2E8+4]
          vaddss  xmm6, xmm1, xmm9
          vmulss  xmm0, xmm3, dword ptr [rbp+2E0h+var_2E8+8]
          vaddss  xmm4, xmm0, xmm10
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm1, xmm2, xmm0
          vmovss  [rsp+3E0h+var_39C], xmm1
          vdivss  xmm0, xmm2, xmm1
          vmulss  xmm3, xmm0, xmm5
          vmovss  dword ptr [rbp+2E0h+var_2E8], xmm3
          vmulss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rbp+2E0h+var_2E8+4], xmm1
          vmulss  xmm5, xmm0, xmm4
          vmovss  dword ptr [rbp+2E0h+var_2E8+8], xmm5
          vmovss  xmm10, [rsp+3E0h+var_394]
          vmulss  xmm2, xmm10, [rsp+3E0h+var_384]
          vmulss  xmm0, xmm2, xmm3
          vaddss  xmm4, xmm0, [rbp+2E0h+var_334]
          vmulss  xmm1, xmm2, xmm1
          vaddss  xmm3, xmm1, [rbp+2E0h+var_330]
          vmulss  xmm0, xmm2, xmm5
          vaddss  xmm2, xmm0, [rbp+2E0h+var_32C]
          vaddss  xmm6, xmm4, [rbp+2E0h+var_358]
          vaddss  xmm7, xmm3, xmm15
          vaddss  xmm8, xmm2, xmm14
          vmovss  xmm9, [rsp+3E0h+var_378]
          vmulss  xmm2, xmm13, xmm9
          vmovss  xmm14, [rsp+3E0h+var_374]
          vmulss  xmm0, xmm11, xmm14
          vaddss  xmm3, xmm2, xmm0
          vmovss  xmm11, [rsp+3E0h+var_370]
          vmulss  xmm2, xmm12, xmm11
          vaddss  xmm3, xmm3, xmm2
          vmovss  xmm15, cs:__real@3f000000
          vmulss  xmm0, xmm3, xmm15
          vsubss  xmm2, xmm15, xmm0
          vxorps  xmm12, xmm12, xmm12
          vmaxss  xmm0, xmm2, xmm12
          vmovss  xmm13, cs:__real@3f800000
          vminss  xmm0, xmm0, xmm13; value
          vmovss  xmm1, cs:?HFD_BLADE_DISYMMETRY_LIFT_EXPO@@3MA; expo
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vaddss  xmm0, xmm0, cs:?HFD_BLADE_DISYMMETRY_LIFT_ANGLE_OFFSET@@3MA; X
          vmovaps xmm1, xmm13; Y
        }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  [rbp+2E0h+var_358], xmm0
          vmulss  xmm4, xmm9, dword ptr [rbp+2E0h+var_2E8]
          vmulss  xmm3, xmm14, dword ptr [rbp+2E0h+var_2E8+4]
          vaddss  xmm5, xmm4, xmm3
          vmulss  xmm2, xmm11, dword ptr [rbp+2E0h+var_2E8+8]
          vaddss  xmm3, xmm5, xmm2
          vmulss  xmm5, xmm3, xmm15
          vsubss  xmm2, xmm15, xmm5
          vmaxss  xmm2, xmm2, xmm12
          vminss  xmm0, xmm2, xmm13; value
          vmovss  xmm1, cs:?HFD_BLADE_DISYMMETRY_LIFT_EXPO@@3MA; expo
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vaddss  xmm0, xmm0, cs:?HFD_BLADE_DISYMMETRY_LIFT_ANGLE_OFFSET@@3MA; X
          vmovaps xmm1, xmm13; Y
        }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  [rsp+3E0h+var_394], xmm0
          vmulss  xmm2, xmm7, xmm7
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm8, xmm8
          vaddss  xmm9, xmm3, xmm2
          vsqrtss xmm4, xmm9, xmm9
          vmovss  xmm15, cs:__real@80000000
          vcmpless xmm1, xmm4, xmm15
          vblendvps xmm2, xmm4, xmm13, xmm1
          vmovss  [rsp+3E0h+var_39C], xmm2
          vdivss  xmm3, xmm13, xmm2
          vmulss  xmm0, xmm3, xmm6
          vmovss  dword ptr [rbp+2E0h+var_2A8], xmm0
          vmulss  xmm1, xmm3, xmm7
          vmovss  dword ptr [rbp+2E0h+var_2A8+4], xmm1
          vmulss  xmm0, xmm3, xmm8
          vmovss  dword ptr [rbp+2E0h+var_2A8+8], xmm0
          vcomiss xmm4, cs:__real@43c80000
        }
        if ( !(v316 | v79) )
          goto LABEL_27;
        __asm { vcomiss xmm4, cs:__real@3a83126f }
        if ( !v316 )
        {
          __asm
          {
            vmovss  xmm7, [rsp+3E0h+var_364]
            vmovss  xmm8, [rbp+2E0h+var_360]
            vmovss  xmm11, [rsp+3E0h+var_3A0]
          }
        }
        else
        {
LABEL_27:
          __asm
          {
            vmovss  dword ptr [rbp+2E0h+var_2E8], xmm12
            vmovss  dword ptr [rbp+2E0h+var_2E8+4], xmm12
            vmovss  dword ptr [rbp+2E0h+var_2E8+8], xmm12
            vxorps  xmm7, xmm7, xmm7
            vxorps  xmm8, xmm8, xmm8
            vxorps  xmm11, xmm11, xmm11
          }
        }
        __asm
        {
          vmovss  xmm0, cs:?HFD_BLADE_STALL_SPEED@@3MA; float HFD_BLADE_STALL_SPEED
          vmulss  xmm6, xmm0, xmm0
          vmovss  [rsp+3E0h+var_3A0], xmm9
        }
        if ( (v761 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 453, ASSERT_TYPE_SANITY, "( !IS_NAN( normalizedSq ) )", (const char *)&queryFormat, "!IS_NAN( normalizedSq )") )
          __debugbreak();
        __asm
        {
          vaddss  xmm0, xmm9, xmm6
          vdivss  xmm1, xmm6, xmm0
          vsubss  xmm6, xmm13, xmm1
          vmulss  xmm0, xmm9, cs:__real@371121b2
          vsubss  xmm0, xmm0, xmm13; val
          vmovaps xmm2, xmm13; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm0, xmm13, xmm0
          vmulss  xmm0, xmm0, xmm6
          vmovss  [rsp+3E0h+var_364], xmm0
          vmovss  xmm1, [rsp+3E0h+var_384]
          vmulss  xmm0, xmm1, xmm1
          vmulss  xmm1, xmm10, xmm0
          vmulss  xmm3, xmm1, xmm10
          vmulss  xmm0, xmm3, dword ptr [rbp+2E0h+var_2E8]
          vaddss  xmm5, xmm0, [rbp+2E0h+var_328]
          vmulss  xmm2, xmm3, dword ptr [rbp+2E0h+var_2E8+4]
          vaddss  xmm4, xmm2, [rbp+2E0h+var_324]
          vmulss  xmm1, xmm3, dword ptr [rbp+2E0h+var_2E8+8]
          vaddss  xmm2, xmm1, [rbp+2E0h+var_320]
          vaddss  xmm3, xmm5, xmm7
          vaddss  xmm0, xmm4, xmm8
          vaddss  xmm4, xmm2, xmm11
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vmovss  [rbp+2E0h+var_360], xmm0
          vmovss  xmm7, dword ptr [rbp+2E0h+var_2F8]
          vmulss  xmm2, xmm7, dword ptr [rbp+2E0h+v1]
          vmovss  xmm6, dword ptr [rbp+2E0h+var_2F8+4]
          vmulss  xmm0, xmm6, dword ptr [rbp+2E0h+v1+4]
          vaddss  xmm3, xmm2, xmm0
          vmovss  xmm4, dword ptr [rbp+2E0h+var_2F8+8]
          vmulss  xmm0, xmm4, dword ptr [rbp+2E0h+v1+8]
          vaddss  xmm5, xmm3, xmm0
          vmulss  xmm2, xmm7, dword ptr [rbp+2E0h+cross]
          vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+cross+4]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, dword ptr [rbp+2E0h+cross+8]
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm4, xmm2, dword ptr [rsi+8Ch]
          vmulss  xmm1, xmm5, dword ptr [rsi+90h]
          vaddss  xmm0, xmm4, xmm1
          vmulss  xmm3, xmm0, cs:?HFD_BLADE_CYCLIC_MAX_PITCH@@3MA; float HFD_BLADE_CYCLIC_MAX_PITCH
          vmovss  xmm2, cs:?HFD_BLADE_COLLECTIVE_MAX_PITCH@@3MA; float HFD_BLADE_COLLECTIVE_MAX_PITCH
          vmulss  xmm1, xmm2, dword ptr [rsi+94h]
          vaddss  xmm14, xmm1, xmm3
          vmovss  dword ptr [rdi+18h], xmm14
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2E8]
          vmovss  [rsp+3E0h+var_3A0], xmm0
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_109;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2E8+4]
          vmovss  [rsp+3E0h+var_3A0], xmm0
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_109;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2E8+8]
          vmovss  [rsp+3E0h+var_3A0], xmm0
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
        {
LABEL_109:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeTipSpeedVectorNormalized )[0] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[1] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeTipSpeedVectorNormalized )[0] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[1] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+2E0h+var_2E8]
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2E8+4]
          vunpcklps xmm1, xmm1, xmm0
          vmovsd  qword ptr [rbp+2E0h+var_2E8], xmm1
          vmovsd  qword ptr [rbp+2E0h+dir], xmm1
        }
        dir.v[2] = v802.v[2];
        __asm
        {
          vmovss  xmm8, [rsp+3E0h+var_388]
          vmovss  [rsp+3E0h+var_3A0], xmm8
          vmovss  xmm6, [rsp+3E0h+var_380]
          vmovss  xmm7, [rsp+3E0h+var_38C]
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_110;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm6 }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_110;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm7 }
        if ( (v761 & 0x7F800000) == 2139095040 )
        {
LABEL_110:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3985, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeUp )[0] ) && !IS_NAN( ( bladeUp )[1] ) && !IS_NAN( ( bladeUp )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeUp )[0] ) && !IS_NAN( ( bladeUp )[1] ) && !IS_NAN( ( bladeUp )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm8, xmm14
          vaddss  xmm4, xmm0, dword ptr [rbp+2E0h+dir]
          vmulss  xmm1, xmm6, xmm14
          vaddss  xmm5, xmm1, dword ptr [rbp+2E0h+dir+4]
          vmulss  xmm0, xmm7, xmm14
          vaddss  xmm6, xmm0, dword ptr [rbp+2E0h+dir+8]
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm15
          vblendvps xmm1, xmm1, xmm13, xmm0
          vmovss  [rsp+3E0h+var_39C], xmm1
          vdivss  xmm0, xmm13, xmm1
          vmulss  xmm8, xmm4, xmm0
          vmovss  dword ptr [rbp+2E0h+dir], xmm8
          vmulss  xmm7, xmm5, xmm0
          vmovss  dword ptr [rbp+2E0h+dir+4], xmm7
          vmulss  xmm6, xmm6, xmm0
          vmovss  dword ptr [rbp+2E0h+dir+8], xmm6
          vmovss  [rsp+3E0h+var_3A0], xmm8
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_111;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm7 }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_111;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm6 }
        if ( (v761 & 0x7F800000) == 2139095040 )
        {
LABEL_111:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3988, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladePitch )[0] ) && !IS_NAN( ( bladePitch )[1] ) && !IS_NAN( ( bladePitch )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladePitch )[0] ) && !IS_NAN( ( bladePitch )[1] ) && !IS_NAN( ( bladePitch )[2] )") )
            __debugbreak();
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+2E0h+dir]
            vmovss  xmm7, dword ptr [rbp+2E0h+dir+4]
            vmovss  xmm6, dword ptr [rbp+2E0h+dir+8]
          }
        }
        __asm
        {
          vmovss  xmm9, dword ptr [rbp+2E0h+var_2F8+4]
          vmulss  xmm1, xmm6, xmm9
          vmovss  xmm10, dword ptr [rbp+2E0h+var_2F8+8]
          vmulss  xmm0, xmm7, xmm10
          vsubss  xmm3, xmm1, xmm0
          vmovss  [rbp+2E0h+var_318], xmm3
          vmulss  xmm2, xmm10, xmm8
          vmovss  xmm11, dword ptr [rbp+2E0h+var_2F8]
          vmulss  xmm0, xmm6, xmm11
          vsubss  xmm0, xmm2, xmm0
          vmovss  [rbp+2E0h+var_314], xmm0
          vmulss  xmm2, xmm7, xmm11
          vmulss  xmm1, xmm9, xmm8
          vsubss  xmm1, xmm2, xmm1
          vmovss  [rsp+3E0h+var_39C], xmm1
          vmovss  [rsp+3E0h+var_3A0], xmm3
        }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_51;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm0 }
        if ( (v761 & 0x7F800000) == 2139095040 )
          goto LABEL_51;
        __asm { vmovss  [rsp+3E0h+var_3A0], xmm1 }
        v425 = (v761 & 0x7F800000u) <= 0x7F800000;
        if ( (v761 & 0x7F800000) == 2139095040 )
        {
LABEL_51:
          v426 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3991, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeNormalToPitch )[0] ) && !IS_NAN( ( bladeNormalToPitch )[1] ) && !IS_NAN( ( bladeNormalToPitch )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeNormalToPitch )[0] ) && !IS_NAN( ( bladeNormalToPitch )[1] ) && !IS_NAN( ( bladeNormalToPitch )[2] )");
          v425 = !v426;
          if ( v426 )
            __debugbreak();
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+2E0h+dir]
            vmovss  xmm7, dword ptr [rbp+2E0h+dir+4]
            vmovss  xmm6, dword ptr [rbp+2E0h+dir+8]
            vmovss  xmm11, dword ptr [rbp+2E0h+var_2F8]
            vmovss  xmm9, dword ptr [rbp+2E0h+var_2F8+4]
            vmovss  xmm10, dword ptr [rbp+2E0h+var_2F8+8]
          }
        }
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2A8+4]
          vmulss  xmm0, xmm7, dword ptr [rbp+2E0h+var_2A8+8]
          vsubss  xmm3, xmm1, xmm0
          vmovss  [rsp+3E0h+var_3A0], xmm3
          vmulss  xmm3, xmm8, dword ptr [rbp+2E0h+var_2A8+8]
          vmulss  xmm0, xmm6, dword ptr [rbp+2E0h+var_2A8]
          vsubss  xmm6, xmm3, xmm0
          vmulss  xmm2, xmm7, dword ptr [rbp+2E0h+var_2A8]
          vmulss  xmm1, xmm8, dword ptr [rbp+2E0h+var_2A8+4]
          vsubss  xmm5, xmm2, xmm1
          vmovss  xmm15, dword ptr [rsi+7Ch]
          vcomiss xmm15, cs:__real@3a83126f
        }
        if ( v425 )
        {
          __asm { vxorps  xmm4, xmm4, xmm4 }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm13, [rsp+3E0h+var_394]
            vsubss  xmm1, xmm0, [rsp+3E0h+var_394]
            vmulss  xmm3, xmm1, cs:?HFD_BLADE_AOA_CHANGE_DEFLECTION@@3MA; float HFD_BLADE_AOA_CHANGE_DEFLECTION
            vmovss  xmm2, cs:?HFD_BLADE_BLOWBACK_MULTIPLIER@@3MA; float HFD_BLADE_BLOWBACK_MULTIPLIER
            vmulss  xmm0, xmm2, [rbp+2E0h+var_34C]
            vmulss  xmm1, xmm0, cs:?HFD_BLADE_LOCAL_AIRFLOW_SCALE@@3MA; float HFD_BLADE_LOCAL_AIRFLOW_SCALE
            vmaxss  xmm1, xmm1, xmm12
            vminss  xmm0, xmm1, xmm13
            vmulss  xmm4, xmm0, xmm3
          }
        }
        __asm
        {
          vmovss  xmm3, [rsp+3E0h+var_3A0]
          vmulss  xmm1, xmm11, xmm3
          vmulss  xmm0, xmm9, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm10, xmm5
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm8, xmm2, xmm4
          vaddss  xmm0, xmm14, [rbp+2E0h+var_354]
          vmovss  [rbp+2E0h+var_354], xmm0
          vandps  xmm14, xmm14, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmaxss  xmm0, xmm14, [rbp+2E0h+var_350]
          vmovss  [rbp+2E0h+var_350], xmm0
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vsubss  xmm5, xmm13, xmm0
          vmovss  xmm1, [rbp+rbx*4+2E0h+var_F0]
          vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm0, xmm1, cs:?HFD_BLADE_TRACKING_LIFT_LOSS@@3MA; float HFD_BLADE_TRACKING_LIFT_LOSS
          vsubss  xmm0, xmm13, xmm0
          vmovss  xmm7, cs:__real@3f000000
          vmulss  xmm1, xmm0, xmm7
          vdivss  xmm2, xmm1, xmm15
          vmaxss  xmm0, xmm2, xmm12
          vminss  xmm1, xmm0, xmm13
          vmulss  xmm4, xmm1, cs:?HFD_BLADE_TRACKING_LIFT_LOSS@@3MA; float HFD_BLADE_TRACKING_LIFT_LOSS
          vmulss  xmm7, xmm7, [rbp+2E0h+var_360]
          vmulss  xmm3, xmm8, dword ptr [rbx+40h]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm3, xmm1
          vmulss  xmm2, xmm0, xmm3
          vaddss  xmm1, xmm1, dword ptr [rbx+48h]
          vaddss  xmm0, xmm2, xmm1
          vdivss  xmm2, xmm3, xmm0
          vmulss  xmm3, xmm2, dword ptr [rbx+4Ch]
          vmulss  xmm1, xmm3, dword ptr [rbx+30h]
          vmulss  xmm0, xmm1, xmm5
          vmulss  xmm2, xmm0, [rbp+2E0h+var_31C]
          vmulss  xmm3, xmm2, [rsp+3E0h+var_364]
          vmulss  xmm1, xmm3, xmm7
          vmulss  xmm6, xmm1, xmm4
          vmovss  xmm14, [rsp+3E0h+var_380]
          vmulss  xmm1, xmm14, dword ptr [rbx+10h]
          vmovss  xmm0, [rsp+3E0h+var_388]
          vmulss  xmm0, xmm0, dword ptr [rbx+0Ch]
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm3, [rsp+3E0h+var_38C]
          vmulss  xmm1, xmm3, dword ptr [rbx+14h]
          vaddss  xmm0, xmm2, xmm1
          vmulss  xmm2, xmm0, cs:?HFD_GRAVITY_CORRECTOR@@3MA; float HFD_GRAVITY_CORRECTOR
          vmulss  xmm5, xmm2, cs:?HFD_BLADE_GRAVITY_MODIFIER@@3MA; float HFD_BLADE_GRAVITY_MODIFIER
          vmovss  xmm0, [rbp+2E0h+var_344]
          vmulss  xmm2, xmm0, dword ptr [rbp+2E0h+var_2E8]
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2E8+4]
          vmulss  xmm1, xmm0, [rbp+2E0h+var_340]
          vaddss  xmm4, xmm2, xmm1
          vmovss  xmm2, dword ptr [rbp+2E0h+var_2E8+8]
          vmulss  xmm0, xmm2, [rbp+2E0h+var_33C]
          vaddss  xmm1, xmm4, xmm0
          vmulss  xmm2, xmm1, cs:?HFD_ROTOR_DEFLECTION_FORCE@@3MA; centrifugalForce
          vaddss  xmm1, xmm5, xmm6; force
          vmovss  xmm0, [rsp+3E0h+var_368]
          vmovss  [rsp+3E0h+duration], xmm0
          vmovaps xmm3, xmm15; maxDeflection
        }
        *(double *)&_XMM0 = HelicopterRotorBlade::ApplyDeflectionForce(&_RSI->m_RotorBlades[v212], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)duration);
        __asm
        {
          vmovaps xmm6, xmm0
          vmulss  xmm5, xmm0, cs:?HFD_BLADE_TURBULENT_AIRFLOW_LIFT_SCALE@@3MA; float HFD_BLADE_TURBULENT_AIRFLOW_LIFT_SCALE
          vmovss  xmm1, cs:?HFD_BLADE_BLOWBACK_MULTIPLIER@@3MA; float HFD_BLADE_BLOWBACK_MULTIPLIER
          vmulss  xmm2, xmm1, [rbp+2E0h+var_34C]
          vmulss  xmm3, xmm2, cs:__real@40800000
          vmulss  xmm4, xmm3, cs:?HFD_BLADE_LOCAL_AIRFLOW_SCALE@@3MA; float HFD_BLADE_LOCAL_AIRFLOW_SCALE
          vmaxss  xmm1, xmm4, xmm12
          vminss  xmm2, xmm1, xmm13
          vmulss  xmm3, xmm2, [rbp+2E0h+var_358]
          vmaxss  xmm1, xmm3, xmm12
          vminss  xmm4, xmm1, xmm13
          vaddss  xmm2, xmm5, xmm0
          vsubss  xmm0, xmm13, xmm4
          vmulss  xmm3, xmm2, xmm0
          vsubss  xmm1, xmm6, xmm5
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm1, xmm3, cs:?HFD_BLADE_STATIC_LIFT_FACTOR@@3MA; float HFD_BLADE_STATIC_LIFT_FACTOR
          vmulss  xmm11, xmm1, [rbp+2E0h+var_318]
          vmulss  xmm9, xmm1, [rbp+2E0h+var_314]
          vmulss  xmm10, xmm1, [rsp+3E0h+var_39C]
          vmovss  xmm0, cs:?HFD_BLADE_DRAG_AIRSPEED_RATIO@@3MA; float HFD_BLADE_DRAG_AIRSPEED_RATIO
          vmulss  xmm1, xmm0, [rbp+2E0h+var_310]
          vmaxss  xmm1, xmm1, xmm12
          vminss  xmm3, xmm1, xmm13
          vsubss  xmm0, xmm13, xmm3
          vmulss  xmm2, xmm0, cs:?HFD_BLADE_DRAG_STATIC_RATIO@@3MA; float HFD_BLADE_DRAG_STATIC_RATIO
          vmulss  xmm1, xmm3, cs:?HFD_BLADE_DRAG_DYNAMIC_RATIO@@3MA; float HFD_BLADE_DRAG_DYNAMIC_RATIO
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm8, dword ptr [rbx+38h]
          vmulss  xmm0, xmm3, xmm3
          vmulss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm3
          vaddss  xmm3, xmm2, dword ptr [rbx+3Ch]
          vmulss  xmm0, xmm3, xmm4
          vmulss  xmm1, xmm0, xmm7
          vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm4, xmm2, dword ptr [rbp+2E0h+var_2A8]
          vmulss  xmm3, xmm2, dword ptr [rbp+2E0h+var_2A8+4]
          vmulss  xmm2, xmm2, dword ptr [rbp+2E0h+var_2A8+8]
          vmovss  xmm0, cs:?HFD_BLADE_DRAG_FACTOR@@3MA; float HFD_BLADE_DRAG_FACTOR
          vmulss  xmm6, xmm0, xmm4
          vmulss  xmm7, xmm0, xmm3
          vmulss  xmm8, xmm0, xmm2
          vmovss  [rsp+3E0h+var_39C], xmm11
        }
        if ( (v762 & 0x7F800000) == 2139095040 )
          goto LABEL_112;
        __asm { vmovss  [rsp+3E0h+var_39C], xmm9 }
        if ( (v762 & 0x7F800000) == 2139095040 )
          goto LABEL_112;
        __asm { vmovss  [rsp+3E0h+var_39C], xmm10 }
        if ( (v762 & 0x7F800000) == 2139095040 )
        {
LABEL_112:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4043, ASSERT_TYPE_SANITY, "( !IS_NAN( ( liftForceStatic )[0] ) && !IS_NAN( ( liftForceStatic )[1] ) && !IS_NAN( ( liftForceStatic )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( liftForceStatic )[0] ) && !IS_NAN( ( liftForceStatic )[1] ) && !IS_NAN( ( liftForceStatic )[2] )") )
            __debugbreak();
        }
        __asm { vmovss  [rsp+3E0h+var_39C], xmm6 }
        if ( (v762 & 0x7F800000) == 2139095040 )
          goto LABEL_113;
        __asm { vmovss  [rsp+3E0h+var_39C], xmm7 }
        if ( (v762 & 0x7F800000) == 2139095040 )
          goto LABEL_113;
        __asm { vmovss  [rsp+3E0h+var_39C], xmm8 }
        if ( (v762 & 0x7F800000) == 2139095040 )
        {
LABEL_113:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4044, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dragForceScaled )[0] ) && !IS_NAN( ( dragForceScaled )[1] ) && !IS_NAN( ( dragForceScaled )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dragForceScaled )[0] ) && !IS_NAN( ( dragForceScaled )[1] ) && !IS_NAN( ( dragForceScaled )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm15, [rsp+3E0h+var_390]
          vmovss  [rsp+3E0h+var_390], xmm15
        }
        if ( (v765 & 0x7F800000) == 2139095040 )
          goto LABEL_114;
        __asm
        {
          vmovss  xmm0, [rbp+2E0h+var_348]
          vmovss  [rsp+3E0h+var_390], xmm0
        }
        if ( (v765 & 0x7F800000) == 2139095040 )
          goto LABEL_114;
        __asm
        {
          vmovss  xmm0, [rsp+3E0h+var_37C]
          vmovss  [rsp+3E0h+var_390], xmm0
        }
        if ( (v765 & 0x7F800000) == 2139095040 )
        {
LABEL_114:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4045, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeCentrifugalForce )[0] ) && !IS_NAN( ( bladeCentrifugalForce )[1] ) && !IS_NAN( ( bladeCentrifugalForce )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeCentrifugalForce )[0] ) && !IS_NAN( ( bladeCentrifugalForce )[1] ) && !IS_NAN( ( bladeCentrifugalForce )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm0, xmm12, xmm11
          vaddss  xmm1, xmm12, xmm9
          vaddss  xmm2, xmm12, xmm10
          vaddss  xmm3, xmm0, xmm6
          vaddss  xmm4, xmm1, xmm7
          vaddss  xmm5, xmm2, xmm8
          vaddss  xmm0, xmm3, xmm15
          vmovss  dword ptr [rbp+2E0h+b], xmm0
          vaddss  xmm1, xmm4, [rbp+2E0h+var_348]
          vmovss  dword ptr [rbp+2E0h+b+4], xmm1
          vaddss  xmm0, xmm5, [rsp+3E0h+var_37C]
          vmovss  dword ptr [rbp+2E0h+b+8], xmm0
          vmovss  xmm6, dword ptr [rbp+2E0h+var_2F8+8]
          vmulss  xmm1, xmm6, xmm9
          vmovss  xmm7, dword ptr [rbp+2E0h+var_2F8+4]
          vmulss  xmm0, xmm7, xmm10
          vsubss  xmm5, xmm1, xmm0
          vmulss  xmm1, xmm10, dword ptr [rbp+2E0h+var_2F8]
          vmulss  xmm0, xmm6, xmm11
          vsubss  xmm4, xmm1, xmm0
          vmulss  xmm2, xmm7, xmm11
          vmulss  xmm1, xmm9, dword ptr [rbp+2E0h+var_2F8]
          vsubss  xmm0, xmm2, xmm1
          vmovss  xmm15, [rbp+2E0h+var_30C]
          vmulss  xmm9, xmm5, xmm15
          vmulss  xmm10, xmm4, xmm15
          vmulss  xmm11, xmm0, xmm15
          vmulss  xmm3, xmm6, dword ptr [rbp+2E0h+var_2A8+4]
          vmulss  xmm2, xmm7, dword ptr [rbp+2E0h+var_2A8+8]
          vsubss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rbp+2E0h+var_238], xmm0
        }
        vec3_t::operator[](&v801, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2E0h+var_2A8+8]
          vmulss  xmm7, xmm0, dword ptr [rax]
        }
        _RAX = vec3_t::operator[](&v806, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&v801, 2);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rax]
          vsubss  xmm6, xmm7, xmm0
        }
        _RAX = vec3_t::operator[](&v813, 1);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec3_t::operator[](&v806, 0);
        __asm { vmovss  xmm8, dword ptr [rax] }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm { vmovss  xmm7, dword ptr [rax] }
        _RAX = vec3_t::operator[](&v806, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&v801, 0);
        __asm
        {
          vmulss  xmm1, xmm7, xmm8
          vmulss  xmm0, xmm6, dword ptr [rax]
          vsubss  xmm6, xmm1, xmm0
        }
        _RAX = vec3_t::operator[](&v813, 2);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmulss  xmm2, xmm15, cs:?HFD_BLADE_DRAG_TORQUE_FACTOR@@3MA; float HFD_BLADE_DRAG_TORQUE_FACTOR
          vmulss  xmm5, xmm2, dword ptr [rbp+2E0h+var_238]
          vmovss  dword ptr [rbp+2E0h+var_238], xmm5
          vmulss  xmm4, xmm2, dword ptr [rbp+2E0h+var_238+4]
          vmovss  dword ptr [rbp+2E0h+var_238+4], xmm4
          vmulss  xmm3, xmm2, dword ptr [rbp+2E0h+var_238+8]
          vmovss  dword ptr [rbp+2E0h+var_238+8], xmm3
          vaddss  xmm0, xmm12, xmm9
          vaddss  xmm1, xmm0, [rbp+2E0h+var_344]
          vmovss  dword ptr [rbp+2E0h+in1], xmm1
          vaddss  xmm2, xmm12, xmm10
          vaddss  xmm0, xmm2, [rbp+2E0h+var_340]
          vmovss  dword ptr [rbp+2E0h+in1+4], xmm0
          vaddss  xmm1, xmm12, xmm11
          vaddss  xmm2, xmm1, [rbp+2E0h+var_33C]
          vmovss  dword ptr [rbp+2E0h+in1+8], xmm2
          vmovss  dword ptr [rbp+2E0h+var_298], xmm5
          vmovss  dword ptr [rbp+2E0h+var_298+4], xmm4
          vmovss  dword ptr [rbp+2E0h+var_298+8], xmm3
        }
        if ( Physics_IsPredictiveWorld(_RSI->m_worldId) && Sys_IsMainThread() )
        {
          v611 = v763;
          if ( DEBUG_DRAW_LINES && (_BYTE)v763 )
          {
            __asm { vmovss  xmm6, dword ptr [rsi+70h] }
            vec3_t::operator[](&_RSI->m_Position, 0);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8]
              vaddss  xmm2, xmm1, dword ptr [rax]
              vmovss  dword ptr [rbp+2E0h+start], xmm2
            }
            vec3_t::operator[](&_RSI->m_Position, 1);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8+4]
              vaddss  xmm2, xmm1, dword ptr [rax]
              vmovss  dword ptr [rbp+2E0h+start+4], xmm2
            }
            vec3_t::operator[](&_RSI->m_Position, 2);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8+8]
              vaddss  xmm3, xmm1, dword ptr [rax]
              vmovss  dword ptr [rbp+2E0h+start+8], xmm3
              vmovss  xmm6, cs:__real@41f00000
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2E8]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm2
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2E8+4]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm2
              vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2E8+8]
              vaddss  xmm2, xmm1, xmm3
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorYellow, 0, DEBUG_LINE_TIME);
            __asm
            {
              vmulss  xmm0, xmm6, [rsp+3E0h+var_378]
              vaddss  xmm1, xmm0, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm1
              vmulss  xmm2, xmm6, [rsp+3E0h+var_374]
              vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm0
              vmulss  xmm1, xmm6, [rsp+3E0h+var_370]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+8]
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorGreen, 0, DEBUG_LINE_TIME);
            __asm
            {
              vmulss  xmm0, xmm6, [rbp+2E0h+var_338]
              vaddss  xmm1, xmm0, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm1
              vmulss  xmm2, xmm6, [rbp+2E0h+var_35C]
              vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm0
              vmulss  xmm1, xmm6, [rsp+3E0h+var_36C]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+8]
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorPurple, 0, DEBUG_LINE_TIME);
            __asm
            {
              vmovss  xmm7, cs:__real@42480000
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_2A8]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm2
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_2A8+4]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm2
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+var_2A8+8]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+8]
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorWhite, 0, DEBUG_LINE_TIME);
            __asm
            {
              vmovss  xmm9, [rsp+3E0h+var_388]
              vmulss  xmm0, xmm9, xmm6
              vaddss  xmm1, xmm0, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm1
              vmulss  xmm2, xmm14, xmm6
              vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm0
              vmovss  xmm8, [rsp+3E0h+var_38C]
              vmulss  xmm1, xmm8, xmm6
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+8]
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorRed, 0, DEBUG_LINE_TIME);
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+dir]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start]
              vmovss  dword ptr [rbp+2E0h+var_2C8], xmm2
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+dir+4]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+4]
              vmovss  dword ptr [rbp+2E0h+var_2C8+4], xmm2
              vmulss  xmm1, xmm7, dword ptr [rbp+2E0h+dir+8]
              vaddss  xmm2, xmm1, dword ptr [rbp+2E0h+start+8]
              vmovss  dword ptr [rbp+2E0h+var_2C8+8], xmm2
            }
            FD_DebugLine(&start, &v804, &colorBlack, 0, DEBUG_LINE_TIME);
          }
          else
          {
            __asm
            {
              vmovss  xmm9, [rsp+3E0h+var_388]
              vmovss  xmm8, [rsp+3E0h+var_38C]
              vmovss  xmm7, cs:__real@42480000
            }
          }
          if ( DEBUG_DRAW_LINES_BLADE )
          {
            if ( v611 )
            {
              Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_fd_helicopter_show_blade_index, "fd_helicopter_show_blade_index");
              if ( Int_Internal_DebugName < 0 || Int_Internal_DebugName == v47 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+1Ch]
                  vmulss  xmm4, xmm0, cs:__real@41200000
                  vmulss  xmm2, xmm9, xmm4
                  vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_2F8]
                  vmovss  dword ptr [rbp+2E0h+var_2F8], xmm0
                  vmulss  xmm3, xmm14, xmm4
                  vaddss  xmm0, xmm3, dword ptr [rbp+2E0h+var_2F8+4]
                  vmovss  dword ptr [rbp+2E0h+var_2F8+4], xmm0
                  vmulss  xmm2, xmm8, xmm4
                  vaddss  xmm0, xmm2, dword ptr [rbp+2E0h+var_2F8+8]
                  vmovss  dword ptr [rbp+2E0h+var_2F8+8], xmm0
                  vmovss  xmm6, dword ptr [rsi+70h]
                }
                vec3_t::operator[](&_RSI->m_Position, 0);
                __asm
                {
                  vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8]
                  vaddss  xmm2, xmm1, dword ptr [rax]
                  vmovss  dword ptr [rbp+2E0h+var_160], xmm2
                }
                vec3_t::operator[](&_RSI->m_Position, 1);
                __asm
                {
                  vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8+4]
                  vaddss  xmm2, xmm1, dword ptr [rax]
                  vmovss  dword ptr [rbp+2E0h+var_160+4], xmm2
                }
                vec3_t::operator[](&_RSI->m_Position, 2);
                __asm
                {
                  vmulss  xmm1, xmm6, dword ptr [rbp+2E0h+var_2F8+8]
                  vaddss  xmm2, xmm1, dword ptr [rax]
                  vmovss  dword ptr [rbp+2E0h+var_160+8], xmm2
                  vmovss  xmm0, dword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
                  vmovss  dword ptr [rbp+2E0h+color], xmm0
                  vmovss  xmm1, dword ptr cs:?colorBlack@@3Tvec4_t@@B+4; vec4_t const colorBlack
                  vmovss  dword ptr [rbp+2E0h+color+4], xmm1
                }
                _RAX = vec4_t::operator[](&colorBlack, 2);
                __asm { vmovss  xmm6, dword ptr [rax] }
                _RAX = vec4_t::operator[](&color, 2);
                __asm { vmovss  dword ptr [rax], xmm6 }
                _RAX = vec4_t::operator[](&colorBlack, 3);
                __asm { vmovss  xmm6, dword ptr [rax] }
                _RAX = vec4_t::operator[](&color, 3);
                __asm
                {
                  vmovss  dword ptr [rax], xmm6
                  vmovss  xmm1, [rsp+3E0h+var_394]; scale
                }
                Vec3Scale((const vec3_t *)&colorWhite, *(float *)&_XMM1, (vec3_t *)&color);
                *vec4_t::operator[](&color, 3) = 1.0;
                if ( !Physics_IsPredictiveWorld(_RSI->m_worldId) )
                {
                  _RAX = vec4_t::operator[](&colorGreen, 0);
                  __asm { vmovss  xmm6, dword ptr [rax] }
                  _RAX = vec4_t::operator[](&color, 0);
                  __asm { vmovss  dword ptr [rax], xmm6 }
                  _RAX = vec4_t::operator[](&colorGreen, 1);
                  __asm { vmovss  xmm6, dword ptr [rax] }
                  _RAX = vec4_t::operator[](&color, 1);
                  __asm { vmovss  dword ptr [rax], xmm6 }
                  _RAX = vec4_t::operator[](&colorGreen, 2);
                  __asm { vmovss  xmm6, dword ptr [rax] }
                  _RAX = vec4_t::operator[](&color, 2);
                  __asm { vmovss  dword ptr [rax], xmm6 }
                  _RAX = vec4_t::operator[](&colorGreen, 3);
                  __asm { vmovss  xmm6, dword ptr [rax] }
                  _RAX = vec4_t::operator[](&color, 3);
                  __asm { vmovss  dword ptr [rax], xmm6 }
                }
                FD_DebugLine(&_RSI->m_Position, &v826, &color, 0, DEBUG_LINE_TIME);
                __asm { vmovss  xmm1, dword ptr [rsi+74h]; scale }
                Vec3Mad(&_RSI->m_Position, *(float *)&_XMM1, &dir, &result);
                FD_DebugLine(&_RSI->m_Position, &result, &color, 0, DEBUG_LINE_TIME);
                __asm { vmovss  xmm1, dword ptr [rsi+70h]; scale }
                Vec3Mad(&result, *(float *)&_XMM1, &v801, &v830);
                FD_DebugLine(&result, &v830, &color, 0, DEBUG_LINE_TIME);
                FD_DebugLine(&v830, &v826, &color, 0, DEBUG_LINE_TIME);
              }
            }
          }
          if ( DEBUG_DRAW_LINES_CENTRIFUGAL && v611 )
          {
            __asm { vmovss  xmm1, dword ptr [rsi+70h]; scale }
            Vec3Mad(&_RSI->m_Position, *(float *)&_XMM1, &v824, &v821);
            FD_DebugLine(&_RSI->m_Position, &v821, &colorBlue, 0, DEBUG_LINE_TIME);
            __asm { vmovss  xmm1, dword ptr [rsi+70h]; scale }
            Vec3Mad(&_RSI->m_Position, *(float *)&_XMM1, &v801, &v821);
            __asm { vmovaps xmm1, xmm7; scale }
            Vec3Mad(&v821, *(float *)&_XMM1, &v824, &v828);
            FD_DebugLine(&v821, &v828, &colorRed, 0, DEBUG_LINE_TIME);
            __asm { vmovaps xmm1, xmm7; scale }
            Vec3Mad(&v821, *(float *)&_XMM1, &v802, &v828);
            FD_DebugLine(&v821, &v828, &colorPurple, 0, DEBUG_LINE_TIME);
          }
        }
        Vec3Add(&a, &b, &a);
        Vec3Add(&sum, (const vec3_t *)&in1, &sum);
        Vec3Add(&v814, (const vec3_t *)&v807, &v814);
        ++v47;
        ++_RDI;
        LODWORD(m_BladeCount) = _RSI->m_BladeCount;
        __asm
        {
          vmovss  xmm10, [rsp+3E0h+var_368]
          vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovss  xmm14, cs:__real@3a83126f
          vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm9, cs:__real@80000000
        }
      }
      while ( v128 < (int)m_BladeCount );
    }
    *(double *)&_XMM0 = Vec3Dot(&sum, &_RSI->m_RotorAxis);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = Vec3Dot(&sum, &v1);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = Vec3Dot(&sum, &cross);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm1, xmm6; scale
    }
    Vec3Scale(&v1, *(float *)&_XMM1, (vec3_t *)&v807);
    __asm { vmovaps xmm1, xmm7; scale }
    Vec3Mad((const vec3_t *)&v807, *(float *)&_XMM1, &cross, &sum);
    *(double *)&_XMM0 = Vec3Dot(&v814, &_RSI->m_RotorAxis);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = Vec3Dot(&v814, &v1);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = Vec3Dot(&v814, &cross);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm1, xmm6; scale
    }
    Vec3Scale(&v1, *(float *)&_XMM1, (vec3_t *)&v807);
    __asm { vmovaps xmm1, xmm7; scale }
    Vec3Mad((const vec3_t *)&v807, *(float *)&_XMM1, &cross, &v814);
    __asm
    {
      vandps  xmm8, xmm8, xmm15
      vcomiss xmm12, dword ptr [rsi+98h]
    }
    if ( !v316 )
      __asm { vxorps  xmm8, xmm8, xmm11 }
    __asm
    {
      vmulss  xmm1, xmm8, cs:?HFD_MAIN_ROTOR_OPPOSING_TORQUE_DRAG@@3MA; float HFD_MAIN_ROTOR_OPPOSING_TORQUE_DRAG
      vmulss  xmm0, xmm9, cs:?HFD_MAIN_ROTOR_OPPOSING_TORQUE_LIFT@@3MA; float HFD_MAIN_ROTOR_OPPOSING_TORQUE_LIFT
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsi+50h], xmm1
      vmovss  xmm1, cs:?HFD_BLADE_LIFT_RATIO@@3MA; scale
    }
    Vec3Scale(&a, *(float *)&_XMM1, &a);
    Vec3Add(&a, &_RSI->m_LiftForceVector, &_RSI->m_LiftForceVector);
    Vec3Cross(&sum, &_RSI->m_RotorAxis, (vec3_t *)&v807);
    __asm { vmovss  xmm1, cs:?HFD_BLADE_TORQUE_RATIO@@3MA; scale }
    Vec3Scale((const vec3_t *)&v807, *(float *)&_XMM1, (vec3_t *)&v807);
    Vec3Add((const vec3_t *)&v807, &_RSI->m_LiftTorqueVector, &_RSI->m_LiftTorqueVector);
    _RAX = vec3_t::operator[](&_RSI->m_LiftTorqueVector, 0);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
      goto LABEL_115;
    _RAX = vec3_t::operator[](&_RSI->m_LiftTorqueVector, 1);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
      goto LABEL_115;
    _RAX = vec3_t::operator[](&_RSI->m_LiftTorqueVector, 2);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
    {
LABEL_115:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4203, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_LiftTorqueVector )[0] ) && !IS_NAN( ( m_LiftTorqueVector )[1] ) && !IS_NAN( ( m_LiftTorqueVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_LiftTorqueVector )[0] ) && !IS_NAN( ( m_LiftTorqueVector )[1] ) && !IS_NAN( ( m_LiftTorqueVector )[2] )") )
        __debugbreak();
    }
    _RAX = vec3_t::operator[](&_RSI->m_LiftForceVector, 0);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
      goto LABEL_116;
    _RAX = vec3_t::operator[](&_RSI->m_LiftForceVector, 1);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
      goto LABEL_116;
    _RAX = vec3_t::operator[](&_RSI->m_LiftForceVector, 2);
    __asm { vmovss  xmm0, dword ptr [rax]; x }
    if ( IS_NAN(*(float *)&_XMM0) )
    {
LABEL_116:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4204, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_LiftForceVector )[0] ) && !IS_NAN( ( m_LiftForceVector )[1] ) && !IS_NAN( ( m_LiftForceVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_LiftForceVector )[0] ) && !IS_NAN( ( m_LiftForceVector )[1] ) && !IS_NAN( ( m_LiftForceVector )[2] )") )
        __debugbreak();
    }
    *(double *)&_XMM0 = Vec3Dot(&v811, &v1);
    __asm { vandps  xmm6, xmm0, xmm15 }
    *(double *)&_XMM0 = Vec3Dot(&v811, &cross);
    __asm
    {
      vandps  xmm0, xmm0, xmm15
      vaddss  xmm0, xmm0, xmm6
      vmulss  xmm1, xmm0, cs:?HFD_BLADE_AVERAGE_TURBULENCE_CHANGE@@3MA; float HFD_BLADE_AVERAGE_TURBULENCE_CHANGE
      vmulss  xmm2, xmm1, xmm10
      vaddss  xmm0, xmm2, dword ptr [rsi+0A0h]; value
      vmovss  dword ptr [rsi+0A0h], xmm0
      vmovaps xmm2, xmm10; dT
      vmovss  xmm1, cs:?HFD_BLADE_AVERAGE_TURBULENCE_DECAY@@3MA; dragCoefficient
    }
    *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rsi+0A0h], xmm0
      vmovss  xmm1, dword ptr [rsi+94h]
      vandps  xmm1, xmm1, xmm15
      vmulss  xmm1, xmm1, cs:?HFD_BLADE_AUDIO_AIRSPEED_CHANGE@@3MA; float HFD_BLADE_AUDIO_AIRSPEED_CHANGE
      vmulss  xmm2, xmm1, xmm10
      vaddss  xmm0, xmm2, dword ptr [rsi+0A4h]; value
      vmovss  dword ptr [rsi+0A4h], xmm0
      vmovaps xmm2, xmm10; dT
      vmovss  xmm1, cs:?HFD_BLADE_AUDIO_AIRSPEED_DECAY@@3MA; dragCoefficient
    }
    *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rsi+0A4h], xmm0 }
    if ( Physics_IsPredictiveWorld(_RSI->m_worldId) && Sys_IsMainThread() && DEBUG_DRAW_LINES )
    {
      __asm { vmovss  xmm1, cs:__real@3c23d70a; scale }
      Vec3Mad(&_RSI->m_Position, *(float *)&_XMM1, &_RSI->m_LiftForceVector, &end);
      FD_DebugLine(&_RSI->m_Position, &end, &colorPurple, 0, DEBUG_LINE_TIME);
      __asm { vmovss  xmm1, cs:__real@3c23d70a; scale }
      Vec3Mad(&_RSI->m_Position, *(float *)&_XMM1, &_RSI->m_AirflowVelocity, &end);
      FD_DebugLine(&_RSI->m_Position, &end, &colorBlue, 0, DEBUG_LINE_TIME);
    }
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v834;
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
FlightDynamicsRotorSystem::UpdateSteps
==============
*/

void __fastcall FlightDynamicsRotorSystem::UpdateSteps(FlightDynamicsRotorSystem *this, double dT, int steps, bool drawBlade)
{
  __int64 v14; 
  vec3_t v74; 
  __int64 v75; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  v75 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0C8h+var_88], xmm12
  }
  v14 = (unsigned int)steps;
  _RBX = this;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, edi
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm2
    vmulss  xmm12, xmm1, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::UpdateSteps");
  if ( (int)v14 <= 0 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+9Ch] }
  }
  else
  {
    do
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+60h]
        vmovss  xmm7, dword ptr [rbx+64h]
        vmovss  xmm8, dword ptr [rbx+68h]
        vmovss  xmm9, dword ptr [rbx+54h]
        vmovss  xmm10, dword ptr [rbx+58h]
        vmovss  xmm11, dword ptr [rbx+5Ch]
      }
      *(_QWORD *)_RBX->m_LiftForceVector.v = 0i64;
      *(_QWORD *)&_RBX->m_LiftForceVector.z = 0i64;
      *(_QWORD *)&_RBX->m_LiftTorqueVector.y = 0i64;
      __asm { vmovaps xmm1, xmm12; dT }
      FlightDynamicsRotorSystem::UpdateRotor(_RBX, *(float *)&_XMM1, drawBlade);
      __asm
      {
        vmulss  xmm4, xmm12, cs:?HFD_ROTOR_LIFT_TORQUE_RATE@@3MA; float HFD_ROTOR_LIFT_TORQUE_RATE
        vmovss  xmm1, dword ptr [rbx+60h]
        vsubss  xmm2, xmm1, xmm6
        vmulss  xmm0, xmm2, xmm4
        vaddss  xmm3, xmm0, xmm6
        vmovss  dword ptr [rbx+60h], xmm3
        vmovss  xmm1, dword ptr [rbx+64h]
        vsubss  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm4
        vaddss  xmm3, xmm2, xmm7
        vmovss  dword ptr [rbx+64h], xmm3
        vmovss  xmm0, dword ptr [rbx+68h]
        vsubss  xmm1, xmm0, xmm8
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, xmm8
        vmovss  dword ptr [rbx+68h], xmm3
        vmulss  xmm4, xmm12, cs:?HFD_ROTOR_LIFT_FORCE_RATE@@3MA; float HFD_ROTOR_LIFT_FORCE_RATE
        vmovss  xmm1, dword ptr [rbx+54h]
        vsubss  xmm0, xmm1, xmm9
        vmulss  xmm2, xmm0, xmm4
        vaddss  xmm3, xmm2, xmm9
        vmovss  dword ptr [rbx+54h], xmm3
        vmovss  xmm0, dword ptr [rbx+58h]
        vsubss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, xmm10
        vmovss  dword ptr [rbx+58h], xmm3
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vsubss  xmm1, xmm0, xmm11
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, xmm11
        vmovss  dword ptr [rbx+5Ch], xmm3
        vmovsd  xmm0, qword ptr [rbx+54h]
        vmovsd  [rsp+0C8h+var_A8], xmm0
      }
      v74.v[2] = _RBX->m_LiftForceVector.v[2];
      __asm { vmovaps xmm2, xmm12 }
      FlightDynamicsRotorSystem::UpdateAirflowMomemtum(_RBX, &v74, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4Ch]
        vsubss  xmm1, xmm0, dword ptr [rbx+50h]
        vmulss  xmm2, xmm1, dword ptr [rbx+80h]
        vmulss  xmm3, xmm2, xmm12
        vaddss  xmm0, xmm3, dword ptr [rbx+98h]
        vmovss  dword ptr [rbx+98h], xmm0
        vmulss  xmm0, xmm0, xmm12
        vaddss  xmm1, xmm0, dword ptr [rbx+9Ch]
        vmovss  dword ptr [rbx+9Ch], xmm1
      }
      drawBlade = 0;
      --v14;
    }
    while ( v14 );
  }
  __asm
  {
    vmulss  xmm0, xmm1, cs:__real@40c00000; X
    vmovss  xmm1, cs:__real@48afc800; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3e2aaaab
    vmovss  dword ptr [rbx+9Ch], xmm1
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v77;
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

