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

float __fastcall HelicopterRotorBlade::ApplyDeflectionForce(HelicopterRotorBlade *this, double force, float centrifugalForce, double maxDeflection, float dT)
{
  bool v7; 
  float v9; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  float v18; 
  double v19; 
  double v20; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 

  __asm { vcmpltss xmm4, xmm3, cs:__real@3a83126f }
  v7 = *(float *)&maxDeflection < 0.001;
  __asm { vblendvps xmm6, xmm3, xmm0, xmm4 }
  v9 = *(float *)&_XMM6 * 2.0;
  _XMM13 = *(_OWORD *)&force;
  LODWORD(v11) = COERCE_UNSIGNED_INT(*(float *)&_XMM6 * 2.0) ^ _xmm;
  v12 = I_fclamp(this->m_BladeDeflection, COERCE_FLOAT(LODWORD(v9) ^ _xmm), v9);
  v13 = (float)(dT * this->m_BladeDeflectionVelocity) + *(float *)&v12;
  this->m_BladeDeflection = *(float *)&v12;
  v14 = I_fclamp((float)(*(float *)&_XMM6 + *(float *)&v12) / (float)(*(float *)&_XMM6 * 2.0), HFD_BLADE_MIN_FORCE_FACTOR, 1.0);
  if ( *(float *)&_XMM13 >= 0.0 )
    v15 = *(float *)&v14;
  else
    LODWORD(v15) = COERCE_UNSIGNED_INT(1.0 - *(float *)&v14) ^ _xmm;
  v16 = FD_ComputeExpo(v15, HFD_BLADE_MAX_DEFLECTION_EXPO);
  v17 = *(float *)&_XMM13 * HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER;
  v18 = (float)(*(float *)&v16 * HFD_BLADE_MAX_DEFLECTION_FORCE) * HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER;
  v19 = FD_ComputeExpo(COERCE_FLOAT(LODWORD(v13) ^ _xmm), HFD_BLADE_DEFLECTION_CENTRIFUGAL_EXPO);
  this->m_BladeDeflectionVelocity = (float)((float)(COERCE_FLOAT(LODWORD(v15) & _xmm) * (float)((float)((float)((float)(*(float *)&v19 * centrifugalForce) * HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER) + (float)(v18 + v17)) - (float)((float)((float)((float)(*(float *)&v19 * centrifugalForce) * HFD_BLADE_STIFFNESS_INV_MASS_MULTIPLIER) + (float)(v18 + v17)) * HFD_BLADE_DEFLECTION_DAMPING))) * dT) + this->m_BladeDeflectionVelocity;
  v20 = I_fclamp(dT * HFD_BLADE_STIFFNESS_FACTOR_VEL, 0.0, 1.0);
  v21 = (float)(1.0 - *(float *)&v20) * this->m_BladeDeflectionVelocity;
  v22 = (float)(v21 * dT) + this->m_BladeDeflection;
  this->m_BladeDeflection = v22;
  this->m_BladeDeflectionVelocity = v21;
  this->m_BladeDeflection = v22 - (float)((float)(v21 * HFD_BLADE_DEFLECTION_POS_DAMPING) * dT);
  v23 = I_fclamp(dT * HFD_BLADE_STIFFNESS_FACTOR_POS, 0.0, 1.0);
  v24 = (float)(1.0 - *(float *)&v23) * this->m_BladeDeflection;
  this->m_BladeDeflection = v24;
  v25 = I_fclamp(v24, v11, v9);
  this->m_BladeDeflection = *(float *)&v25;
  _XMM0 = v7;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm6, xmm2
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
void FlightDynamicsRotorSystem::ApplyShaftTorque(FlightDynamicsRotorSystem *this, float torque)
{
  this->m_InputTorque = torque;
}

/*
==============
HelicopterDynamics::BlendToPmoveObject
==============
*/
void HelicopterDynamics::BlendToPmoveObject(HelicopterDynamics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  FlightDynamics::BlendToPmoveObject(this, deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
  this->m_FBWControlInputs[0] = (float)(deltaTime * pmoveObj[1].m_linearVelocityWs.v[0]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[0]);
  this->m_FBWControlInputs[1] = (float)(deltaTime * pmoveObj[1].m_linearVelocityWs.v[1]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[1]);
  this->m_FBWControlInputs[2] = (float)(deltaTime * pmoveObj[1].m_linearVelocityWs.v[2]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[2]);
  this->m_FBWControlInputs[3] = (float)(deltaTime * pmoveObj[1].m_angularVelocityWs.v[0]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[3]);
  this->m_FBWControlInputs[4] = (float)(deltaTime * pmoveObj[1].m_angularVelocityWs.v[1]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[4]);
  this->m_FBWControlInputs[5] = (float)(deltaTime * pmoveObj[1].m_angularVelocityWs.v[2]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[5]);
  this->m_FBWControlInputs[6] = (float)(deltaTime * pmoveObj[1].m_surfaceVelocity.v[0]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[6]);
  this->m_FBWControlInputs[7] = (float)(deltaTime * pmoveObj[1].m_surfaceVelocity.v[1]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[7]);
  this->m_FBWControlInputs[8] = (float)(deltaTime * pmoveObj[1].m_surfaceVelocity.v[2]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[8]);
  this->m_FBWControlInputs[9] = (float)(deltaTime * pmoveObj[1].m_massFactorOnContact.v[0]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[9]);
  this->m_FBWControlInputs[10] = (float)(deltaTime * pmoveObj[1].m_massFactorOnContact.v[1]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[10]);
  this->m_FBWControlInputs[11] = (float)(deltaTime * pmoveObj[1].m_massFactorOnContact.v[2]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[11]);
  this->m_FBWControlInputs[12] = (float)(deltaTime * pmoveObj[1].m_massFactorOnContact.v[3]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[12]);
  this->m_FBWControlInputs[13] = (float)(deltaTime * pmoveObj[1].m_manualIntegratedPos.v[0]) + (float)((float)(1.0 - deltaTime) * this->m_FBWControlInputs[13]);
}

/*
==============
FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation
==============
*/
void FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(FlightDynamicsRotorSystem *this, vec4_t *newOrientationQuat, float dT)
{
  int v6; 
  float *v7; 
  float *v8; 
  float *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  __int64 v21; 
  vec3_t in; 
  vec4_t out; 
  vec3_t angles; 
  vec3_t v25; 
  vec3_t v26; 
  vec4_t v27; 
  vec4_t quat; 
  vec4_t v29; 

  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  angles.v[1] = this->m_RotorPosition * 6.0;
  AnglesToQuat(&angles, &quat);
  QuatMultiply(&quat, &this->m_RotorAxisQuat, &out);
  QuatMultiply(&out, &this->m_RotationQuat, &v29);
  QuatMultiply(&out, newOrientationQuat, &v27);
  v6 = 0;
  if ( this->m_BladeCount > 0 )
  {
    v7 = &this->m_RotorBlades[0].m_BladeRotationDirection.v[2];
    do
    {
      v8 = v7 - 5;
      if ( v7 - 5 == (float *)&in && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      v9 = v7 - 2;
      if ( v7 - 2 == (float *)&in && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      v10 = *(v7 - 4);
      v11 = *(v7 - 3);
      v12 = *(v7 - 1);
      v13 = v12 * *v8;
      v14 = *v7 * *v8;
      in.v[0] = (float)(*v7 * v10) - (float)(v11 * v12);
      v15 = (float)(v11 * *v9) - v14;
      v16 = v10 * *v9;
      in.v[1] = v15;
      in.v[2] = v13 - v16;
      QuatTransform(&v29, &this->m_RotorBlades[v6].m_BladeDirection, &v26);
      QuatTransform(&v27, &this->m_RotorBlades[v6].m_BladeDirection, &v25);
      QuatTransform(&v27, &in, (vec3_t *)&out);
      v17 = LODWORD(v25.v[1]);
      *(float *)&v17 = (float)((float)((float)(v25.v[1] - v26.v[1]) * out.v[1]) + (float)((float)(v25.v[0] - v26.v[0]) * out.v[0])) + (float)((float)(v25.v[2] - v26.v[2]) * out.v[2]);
      _XMM2 = v17;
      __asm
      {
        vmaxss  xmm0, xmm2, xmm8
        vminss  xmm1, xmm0, xmm9
      }
      *(float *)&v21 = (float)((float)((float)(*(float *)&_XMM1 / this->m_BladeLength) * HFD_ROTOR_DEFLECTION_VELOCITY_FACTOR) * dT) + v7[3];
      v7[3] = *(float *)&v21;
      if ( (v21 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3708, ASSERT_TYPE_SANITY, "( !IS_NAN( m_RotorBlades[rotorBladeIndex].m_BladeDeflectionVelocity ) )", (const char *)&queryFormat, "!IS_NAN( m_RotorBlades[rotorBladeIndex].m_BladeDeflectionVelocity )", v21) )
        __debugbreak();
      ++v6;
      v7 += 11;
    }
    while ( v6 < this->m_BladeCount );
  }
}

/*
==============
CalculateDragAtDirection
==============
*/
void CalculateDragAtDirection(vec3_t *inputVector, vec3_t *directionOfDrag, float dragCoeff, float dT, vec3_t *outVector)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  v5 = directionOfDrag->v[1];
  v6 = directionOfDrag->v[2];
  v7 = (float)((float)(directionOfDrag->v[0] * inputVector->v[0]) + (float)(v5 * inputVector->v[1])) + (float)(v6 * inputVector->v[2]);
  v8 = (float)(v7 * dragCoeff) * dT;
  LODWORD(v9) = LODWORD(v7) & _xmm;
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) <= COERCE_FLOAT(LODWORD(v7) & _xmm) )
    v10 = v7 - v8;
  else
    v10 = 0.0;
  LODWORD(v11) = LODWORD(v10) & _xmm;
  v12 = v9 - v11;
  if ( v7 > 0.0 )
    v12 = v11 - v9;
  v13 = (float)(v5 * v12) + inputVector->v[1];
  v14 = (float)(v6 * v12) + inputVector->v[2];
  outVector->v[0] = (float)(directionOfDrag->v[0] * v12) + inputVector->v[0];
  outVector->v[1] = v13;
  outVector->v[2] = v14;
}

/*
==============
HelicopterDynamics::CalculateFlyByWireOffset
==============
*/
void HelicopterDynamics::CalculateFlyByWireOffset(HelicopterDynamics *this, float scale, vec3_t *result)
{
  const dvar_t *v5; 

  if ( !this->m_EnableFlyByWire )
    goto LABEL_7;
  v5 = DVARINT_fd_helicopter_fbw_status;
  if ( !DVARINT_fd_helicopter_fbw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_status") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    result->v[0] = this->m_UserControlInputs[8];
    result->v[1] = this->m_UserControlInputs[9];
    result->v[2] = this->m_UserControlInputs[12];
  }
  else
  {
LABEL_7:
    *(_QWORD *)result->v = 0i64;
    result->v[2] = 0;
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
  float v4; 
  float v5; 
  float v6; 
  FlightDynamicsManager *FlightDynamicsManager; 
  float v8; 
  float v9; 
  float v10; 
  FlightDynamicsManager *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  FlightDynamicsManager *v16; 
  float v17; 
  float v18; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v27; 
  float v28; 

  v4 = cbData->position.v[1] - this->m_centerOfMassWs.v[1];
  v5 = cbData->position.v[0] - this->m_centerOfMassWs.v[0];
  v6 = cbData->position.v[2] - this->m_centerOfMassWs.v[2];
  v28 = (float)((float)(v4 * this->m_upVector.v[1]) + (float)(v5 * this->m_upVector.v[0])) + (float)(v6 * this->m_upVector.v[2]);
  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  v8 = FlightDynamicsManager->m_UpAxis.v[0];
  v9 = FlightDynamicsManager->m_UpAxis.v[1];
  v10 = FlightDynamicsManager->m_UpAxis.v[2];
  v11 = BG_GetFlightDynamicsManager();
  v12 = v11->m_ElevatorAxis.v[0];
  v13 = v11->m_ElevatorAxis.v[1];
  v14 = v11->m_ElevatorAxis.v[2];
  v15 = (float)((float)(v4 * this->m_sideVector.v[1]) + (float)(v5 * this->m_sideVector.v[0])) + (float)(v6 * this->m_sideVector.v[2]);
  v16 = BG_GetFlightDynamicsManager();
  v17 = (float)((float)(v4 * this->m_forwardVector.v[1]) + (float)(v5 * this->m_forwardVector.v[0])) + (float)(v6 * this->m_forwardVector.v[2]);
  v18 = (float)((float)(v15 * v12) + (float)(v28 * v8)) + (float)(v17 * v16->m_ForwardAxis.v[0]);
  _XMM5 = LODWORD(HFD_COLLISION_BOUNCE_STRENGTH);
  v20 = (float)((float)(v28 * v9) + (float)(v15 * v13)) + (float)(v17 * v16->m_ForwardAxis.v[1]);
  v21 = (float)((float)(v28 * v10) + (float)(v15 * v14)) + (float)(v17 * v16->m_ForwardAxis.v[2]);
  this->m_collisionZone = HFD_COLLISION_ID_FUSELAGE;
  if ( v21 < HFD_COLLISION_LANDING_GEAR_HEIGHT )
  {
    v22 = cbData->normal.v[1] * this->m_upVector.v[1];
    v23 = cbData->normal.v[0] * this->m_upVector.v[0];
    v24 = cbData->normal.v[2] * this->m_upVector.v[2];
    this->m_collisionZone = HFD_COLLISION_ID_LANDING_GEAR;
    _XMM0 = LODWORD(HFD_COLLISION_LANDING_GEAR_ALLOWED_SPEED);
    if ( (float)((float)(v22 + v23) + v24) > HFD_COLLISION_LANDING_GEAR_ALLOWED_ANGLE && HFD_COLLISION_LANDING_GEAR_ALLOWED_SPEED > cbData->impulse )
    {
      HelicopterDynamics::NotifyClientImpact(this, cbData);
      return;
    }
    __asm
    {
      vcmpltss xmm1, xmm0, dword ptr [rdi+2Ch]
      vblendvps xmm5, xmm5, xmm0, xmm1
    }
  }
  *(_WORD *)&this->m_applyCollisionExtraImpulse = 1;
  this->m_LandingTimer = 0.0;
  if ( COERCE_FLOAT(LODWORD(v18) & _xmm) >= (float)((float)(HFD_MAIN_ROTOR_BLADE_LENGTH_SCALE_COLLISION * HFD_MAIN_ROTOR_BLADE_LENGTH) * 0.039370101) )
  {
    if ( (float)(v20 * HFD_COLLISION_TAIL_ROTOR_PLACEMENT) <= 0.001 )
    {
      v27 = HFD_COLLISION_ID_TAIL_FIN;
    }
    else
    {
      v27 = HFD_COLLISION_ID_TAIL_ROTOR;
      this->m_applyCollisionExtraAngularImpulse = 1;
    }
  }
  else
  {
    if ( v21 <= HFD_COLLISION_MAIN_ROTOR_HEIGHT )
      goto LABEL_13;
    v27 = HFD_COLLISION_ID_MAIN_ROTOR;
    this->m_applyCollisionExtraAngularImpulse = -1;
  }
  this->m_collisionZone = v27;
LABEL_13:
  if ( !this->m_playerControlled || !this->m_inputControlsEnabled )
  {
    LODWORD(_XMM5) = 0;
    *(_WORD *)&this->m_applyCollisionExtraImpulse = 0;
  }
  this->m_collisionExtraImpulse.v[0] = *(float *)&_XMM5 * cbData->normal.v[0];
  this->m_collisionExtraImpulse.v[1] = *(float *)&_XMM5 * cbData->normal.v[1];
  this->m_collisionExtraImpulse.v[2] = *(float *)&_XMM5 * cbData->normal.v[2];
  HelicopterDynamics::NotifyClientImpact(this, cbData);
  FlightDynamics::CollisionImpulseCallback(this, cbData);
}

/*
==============
HelicopterDynamics::ComputeLiftForces
==============
*/
void HelicopterDynamics::ComputeLiftForces(HelicopterDynamics *this, float dT)
{
  float v2; 
  float v4; 
  const dvar_t *v5; 
  vec3_t *p_m_Velocity; 
  __int128 v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  vec4_t *p_m_RotationInertiaQuat; 
  float v15; 
  float v16; 
  int v17; 
  const dvar_t *v18; 
  float v19; 
  FlightDynamicsManager *FlightDynamicsManager; 
  vec3_t *p_m_upVector; 
  double v22; 
  float v23; 
  FlightDynamicsManager *v24; 
  double v25; 
  float v26; 
  FlightDynamicsManager *v27; 
  double v28; 
  float m_ManualControlTimer; 
  float v31; 
  double updated; 
  double v33; 
  double v34; 
  float v35; 
  int v36; 
  double v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  FlightDynamicsManager *v44; 
  float v45; 
  float v46; 
  float v47; 
  double Float_Internal_DebugName; 
  float v49; 
  float v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  float v55; 
  double v56; 
  double v57; 
  float v58; 
  double v59; 
  float v60; 
  double v61; 
  float v62; 
  double v63; 
  double v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  double v78; 
  float v79; 
  float v80; 
  double v81; 
  float v82; 
  float v83; 
  float v84; 
  __int128 v85; 
  float v89; 
  __int128 v90; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  FlightDynamicsManager *v99; 
  __int128 v100; 
  float v101; 
  float v102; 
  FlightDynamicsManager *v106; 
  __int128 v107; 
  float v108; 
  float v109; 
  float v113; 
  __int128 v114; 
  float *p_m_GyroRudderStrength; 
  double v119; 
  double v120; 
  float v121; 
  float m_LandingTimer; 
  double v123; 
  float v124; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  FlightDynamicsManager *v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  double v137; 
  double v138; 
  float *v139; 
  float v140; 
  double v141; 
  double v142; 
  double v143; 
  float *v144; 
  float m_GyroAltitude; 
  float v146; 
  float v147; 
  double v148; 
  float v149; 
  double v150; 
  float v151; 
  float v152; 
  double v153; 
  float v154; 
  double v155; 
  float v156; 
  double v157; 
  double v158; 
  double v159; 
  float v160; 
  float v161; 
  double v162; 
  double v163; 
  float v164; 
  FlightDynamicsManager *v165; 
  double v166; 
  double v167; 
  float v168; 
  double v169; 
  double v170; 
  double v171; 
  float v172; 
  double v173; 
  double v174; 
  float v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  double v181; 
  double v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  double v188; 
  float v189; 
  float v190; 
  float v191; 
  double v192; 
  double v193; 
  float v194; 
  FlightDynamicsManager *v195; 
  float v196; 
  double v197; 
  float v198; 
  float v199; 
  double v200; 
  double v201; 
  double v202; 
  float v203; 
  float v204; 
  double v205; 
  float v206; 
  double v207; 
  double v208; 
  float v209; 
  double v210; 
  float v211; 
  float v212; 
  float v213; 
  double v214; 
  float v215; 
  float v216; 
  float v217; 
  double v218; 
  double v219; 
  float v220; 
  float v221; 
  float v222; 
  double v223; 
  float v224; 
  FlightDynamicsManager *v225; 
  float v226; 
  double v227; 
  float v228; 
  float v229; 
  double v230; 
  double v231; 
  float v232; 
  float v233; 
  double v234; 
  double v235; 
  float v236; 
  float v237; 
  float *v238; 
  float v239; 
  float *v240; 
  float v241; 
  float *v242; 
  float v243; 
  float v244; 
  float v245; 
  double v246; 
  double v247; 
  float v248; 
  double v249; 
  float v250; 
  double v251; 
  float v252; 
  float v253; 
  double v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  double v259; 
  float v260; 
  float v261; 
  double v262; 
  float v263; 
  float v264; 
  double v265; 
  double v266; 
  float v267; 
  double v268; 
  float *v269; 
  float *v270; 
  float v271; 
  float v272; 
  float *v273; 
  float *v274; 
  float v275; 
  float v276; 
  float *v277; 
  float v278; 
  FlightDynamicsManager *v279; 
  float v280; 
  float v281; 
  float v282; 
  float *v283; 
  float v284; 
  float v285; 
  float *v286; 
  float v287; 
  float v288; 
  float *v289; 
  float v290; 
  float v291; 
  float v292; 
  float v293; 
  float v294; 
  double v295; 
  double v296; 
  float v297; 
  float v298; 
  double v299; 
  double v300; 
  float v301; 
  float v302; 
  float v303; 
  float v304; 
  float v305; 
  float v306; 
  float *v307; 
  float v308; 
  float *v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  double v314; 
  double v315; 
  float v316; 
  double v317; 
  float v318; 
  float v319; 
  float v320; 
  float v321; 
  double v322; 
  double v323; 
  double v324; 
  float v325; 
  float v326; 
  float *v327; 
  float v328; 
  float *v329; 
  float v330; 
  double v331; 
  float v332; 
  double v333; 
  double v334; 
  double v335; 
  float v336; 
  double v337; 
  float v338; 
  double v339; 
  float v340; 
  float v341; 
  float v342; 
  float *v343; 
  float v344; 
  double v345; 
  float v346; 
  float *v347; 
  double v348; 
  double v349; 
  float v350; 
  double v351; 
  float v352; 
  float v353; 
  float v354; 
  float v355; 
  float v356; 
  float v357; 
  float v358; 
  double v359; 
  float v360; 
  float v361; 
  float v362; 
  float v363; 
  double v364; 
  float v365; 
  float v366; 
  float *v367; 
  float v368; 
  float *v369; 
  float v370; 
  float *v371; 
  float v372; 
  FlightDynamicsManager *v373; 
  FlightDynamicsManager *v374; 
  double v375; 
  double v376; 
  float v377; 
  float v378; 
  float *v379; 
  double v380; 
  float v381; 
  double v382; 
  float v383; 
  float v384; 
  double v385; 
  float *v389; 
  float v390; 
  float *v391; 
  float v392; 
  float *v393; 
  double v394; 
  float v395; 
  float v396; 
  float v397; 
  float *m_FBWControlInputs; 
  vec3_t *p_m_centerOfMassWs; 
  float *v400; 
  float v401; 
  float *v402; 
  float v403; 
  float *v404; 
  float *v406; 
  int v410; 
  float m_OpposingTorque; 
  float v412; 
  float v413; 
  float v414; 
  float v415; 
  float v416; 
  float v417; 
  float v418; 
  float v419; 
  float v420; 
  float v421; 
  float v422; 
  float v423; 
  float v424; 
  float v425; 
  float v426; 
  FlightDynamicsRotorSystem *p_m_MainRotor; 
  float v428; 
  double v429; 
  float v430; 
  double v431; 
  float v432; 
  double v433; 
  double v434; 
  float v435; 
  double v436; 
  double v437; 
  double v438; 
  float *v439; 
  double v440; 
  double v441; 
  float v442; 
  float v443; 
  float v444; 
  float v445; 
  float v446; 
  float v447; 
  double v448; 
  float v449; 
  double v450; 
  double v451; 
  double v452; 
  double v453; 
  double v454; 
  double v455; 
  float v456; 
  double v457; 
  float v458; 
  float v459; 
  float v460; 
  double v461; 
  double v462; 
  float v463; 
  float v464; 
  float v465; 
  float v466; 
  double v467; 
  float v468; 
  vec3_t *p_cross; 
  float v470; 
  float v471; 
  float v472; 
  double v473; 
  float v474; 
  vec3_t *p_m_sideVector; 
  float v476; 
  float v477; 
  float v478; 
  double v479; 
  double LiftAtAOA; 
  int v481; 
  double v482; 
  float v483; 
  float v484; 
  double v485; 
  float v486; 
  double v487; 
  double v488; 
  float v489; 
  float v490; 
  float v491; 
  double v492; 
  float v493; 
  float v494; 
  double v495; 
  float v496; 
  double v497; 
  float v498; 
  double v499; 
  float v500; 
  float v501; 
  double v502; 
  float v503; 
  double DragAtAOA; 
  float v505; 
  double v506; 
  float v507; 
  double v508; 
  float v509; 
  double v510; 
  float v511; 
  double v512; 
  float v513; 
  double v514; 
  float v515; 
  double v516; 
  float v517; 
  double v518; 
  float v519; 
  char m_applyCollisionExtraAngularImpulse; 
  double v521; 
  float v522; 
  double v523; 
  float v524; 
  float v525; 
  float v526; 
  float v527; 
  float *v528; 
  float *v529; 
  float *v530; 
  float *v531; 
  float v532; 
  float v533; 
  float v534; 
  float v535; 
  double v536; 
  float v537; 
  double v538; 
  double v539; 
  float v540; 
  FlightDynamicsRotorSystem *p_m_RotorAxis; 
  vec4_t *v542; 
  float v543; 
  float *v544; 
  float *v545; 
  float *v546; 
  float v547; 
  float v548; 
  float v549; 
  float v550; 
  float v551; 
  float v552; 
  float v553; 
  float v554; 
  float aileronInput; 
  float elevatorInput; 
  int v557; 
  float v558; 
  float value; 
  float v560; 
  float collectiveInput; 
  float v562; 
  float v563; 
  float v564; 
  float v565; 
  float v566; 
  float v567; 
  float v568; 
  float v569; 
  float rudderInput; 
  float v571; 
  float v572; 
  float v573; 
  float v574; 
  float v575; 
  float *v576; 
  float v577; 
  float v578; 
  float v579; 
  FlightDynamicsManager *v580; 
  float v581; 
  float v582; 
  float v583; 
  float v584; 
  float v585; 
  float v586; 
  float v587; 
  float v588; 
  float v589; 
  float v590; 
  float fraction; 
  float v592; 
  float v593; 
  float v594; 
  float v595; 
  float v596; 
  float v597; 
  float v598; 
  float v599; 
  float v600; 
  float v601; 
  float v602; 
  vec4_t m_RotationQuaternion; 
  __int64 v604; 
  vec4_t v605; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t start; 
  vec3_t v609; 
  vec3_t out; 
  vec3_t v0; 
  vec3_t v612; 
  vec3_t a; 
  double v614; 
  float v615; 
  vec3_t end; 
  vec3_t v; 
  vec3_t b; 
  double v619; 
  float v620; 
  vec3_t dir; 
  vec3_t v622; 
  vec3_t v623; 
  vec3_t v624; 
  vec3_t v625; 
  vec4_t result; 
  vec4_t v627; 
  trace_t v628; 

  v604 = -2i64;
  v2 = dT;
  v567 = dT;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::ComputeLiftForces");
  v4 = FLOAT_1_0;
  if ( !this->m_playerControlled && this->m_MainRotor.m_RotorRPM < 1.0 )
  {
    this->m_MainRotor.m_RotorRPM = 0.0;
    this->m_TailRotor.m_RotorRPM = 0.0;
    goto LABEL_256;
  }
  v5 = DVARFLT_fd_helicopter_swash_driver;
  if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  this->m_MainRotorSwashplateDriverOffset = v5->current.value;
  FlightDynamics::EnterSecondDerivativeMode(this);
  *(float *)&v580 = this->m_MainRotor.m_RotorRPM;
  p_m_Velocity = &this->m_Velocity;
  v7 = LODWORD(this->m_Velocity.v[0]);
  v8 = this->m_Velocity.v[1];
  v9 = this->m_Velocity.v[2];
  v10 = v7;
  v602 = (float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v8 * v8)) + (float)(v9 * v9);
  *(float *)&v10 = fsqrt(v602);
  _XMM9 = v10;
  v560 = *(float *)&v10;
  __asm
  {
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm1, xmm9, xmm15, xmm0
  }
  v581 = *(float *)&_XMM1;
  v0.v[0] = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v7;
  v0.v[1] = (float)(1.0 / *(float *)&_XMM1) * v8;
  v0.v[2] = (float)(1.0 / *(float *)&_XMM1) * v9;
  this->m_TailRotor.m_RotorRPM = *(float *)&v580 * HFD_TAIL_ROTOR_RATIO;
  v599 = HFD_TAIL_ROTOR_POSITION * this->m_forwardVector.v[0];
  v600 = HFD_TAIL_ROTOR_POSITION * this->m_forwardVector.v[1];
  v581 = HFD_TAIL_ROTOR_POSITION * this->m_forwardVector.v[2];
  p_m_RotationInertiaQuat = &this->m_RotationInertiaQuat;
  QuatTransform(&this->m_RotationInertiaQuat, &this->m_forwardVector, &out);
  out.v[0] = out.v[0] - this->m_forwardVector.v[0];
  v15 = out.v[0];
  out.v[1] = out.v[1] - this->m_forwardVector.v[1];
  *(float *)&_XMM1 = out.v[2] - this->m_forwardVector.v[2];
  v16 = 1.0 / v2;
  out.v[0] = out.v[0] * (float)(1.0 / v2);
  out.v[1] = out.v[1] * (float)(1.0 / v2);
  out.v[2] = *(float *)&_XMM1 * (float)(1.0 / v2);
  v17 = _xmm;
  LODWORD(v7) = COERCE_UNSIGNED_INT((float)((float)(out.v[1] * this->m_forwardVector.v[1]) + (float)((float)(v15 * (float)(1.0 / v2)) * this->m_forwardVector.v[0])) + (float)(out.v[2] * this->m_forwardVector.v[2])) ^ _xmm;
  out.v[0] = (float)(*(float *)&v7 * this->m_forwardVector.v[0]) + out.v[0];
  out.v[1] = (float)(*(float *)&v7 * this->m_forwardVector.v[1]) + out.v[1];
  out.v[2] = (float)(*(float *)&v7 * this->m_forwardVector.v[2]) + out.v[2];
  QuatTransform(&this->m_RotationInertiaQuat, &this->m_sideVector, &v612);
  v612.v[0] = v612.v[0] - this->m_sideVector.v[0];
  v612.v[1] = v612.v[1] - this->m_sideVector.v[1];
  *(float *)&_XMM1 = v612.v[2] - this->m_sideVector.v[2];
  v612.v[0] = (float)(1.0 / v2) * v612.v[0];
  v612.v[1] = (float)(1.0 / v2) * v612.v[1];
  v612.v[2] = (float)(1.0 / v2) * *(float *)&_XMM1;
  *(float *)&v10 = (float)((float)(v612.v[1] * this->m_sideVector.v[1]) + (float)(v612.v[0] * this->m_sideVector.v[0])) + (float)(v612.v[2] * this->m_sideVector.v[2]);
  v612.v[0] = (float)(COERCE_FLOAT(v10 ^ _xmm) * this->m_sideVector.v[0]) + v612.v[0];
  v612.v[1] = (float)(COERCE_FLOAT(v10 ^ _xmm) * this->m_sideVector.v[1]) + v612.v[1];
  v612.v[2] = (float)(COERCE_FLOAT(v10 ^ _xmm) * this->m_sideVector.v[2]) + v612.v[2];
  a.v[0] = (float)((float)(HFD_TAIL_ROTOR_LOCAL_VELOCITY_DIRECTION * HFD_TAIL_ROTOR_POSITION) * out.v[0]) + this->m_Velocity.v[0];
  a.v[1] = (float)((float)(HFD_TAIL_ROTOR_LOCAL_VELOCITY_DIRECTION * HFD_TAIL_ROTOR_POSITION) * out.v[1]) + this->m_Velocity.v[1];
  a.v[2] = (float)((float)(HFD_TAIL_ROTOR_LOCAL_VELOCITY_DIRECTION * HFD_TAIL_ROTOR_POSITION) * out.v[2]) + this->m_Velocity.v[2];
  v18 = DVARINT_fd_helicopter_fbw_status;
  if ( !DVARINT_fd_helicopter_fbw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_status") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  value = v18->current.value;
  v19 = HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO;
  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  p_m_upVector = &this->m_upVector;
  v22 = FD_ComputeExpo((float)((float)(FlightDynamicsManager->m_UpAxis.v[1] * this->m_upVector.v[1]) + (float)(FlightDynamicsManager->m_UpAxis.v[0] * this->m_upVector.v[0])) + (float)(FlightDynamicsManager->m_UpAxis.v[2] * this->m_upVector.v[2]), v19);
  v565 = *(float *)&v22;
  v23 = HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO;
  v24 = BG_GetFlightDynamicsManager();
  v25 = FD_ComputeExpo((float)((float)(this->m_sideVector.v[1] * v24->m_UpAxis.v[1]) + (float)(this->m_sideVector.v[0] * v24->m_UpAxis.v[0])) + (float)(this->m_sideVector.v[2] * v24->m_UpAxis.v[2]), v23);
  v578 = *(float *)&v25;
  v26 = HFD_FBW_GYRO_CYCLIC_AIL_BANKED_EXPO;
  v27 = BG_GetFlightDynamicsManager();
  v28 = FD_ComputeExpo((float)((float)(this->m_forwardVector.v[1] * v27->m_UpAxis.v[1]) + (float)(this->m_forwardVector.v[0] * v27->m_UpAxis.v[0])) + (float)(this->m_forwardVector.v[2] * v27->m_UpAxis.v[2]), v26);
  v592 = *(float *)&v28;
  v566 = FLOAT_1_0;
  if ( value == 0.0 )
    m_ManualControlTimer = FLOAT_1_0;
  else
    m_ManualControlTimer = this->m_ManualControlTimer;
  v574 = m_ManualControlTimer;
  this->m_TailRotor.m_SmoothCollective = HFD_TAIL_ROTOR_SMOOTH_COLLECTIVE;
  this->m_MainRotor.m_SmoothCollective = HFD_MAIN_ROTOR_SMOOTH_COLLECTIVE;
  LOBYTE(v557) = 0;
  if ( this->m_playerControlled )
    this->m_GovernorRPM = HFD_GOVERNOR_MAX_SPEED;
  if ( !this->m_inputControlsEnabled )
  {
    this->m_GovernorRPM = HFD_GOVERNOR_MAX_SPEED;
    this->m_EnableFlyByWire = 0;
    this->m_ManualControlTimer = 1.0;
    m_ManualControlTimer = FLOAT_1_0;
    v574 = FLOAT_1_0;
  }
  _XMM11 = 0i64;
  v564 = 0.0;
  collectiveInput = 0.0;
  v31 = HFD_FBW_GROUND_PRESSURE_GAIN_EXPO;
  updated = FlightDynamicsRotorSystem::UpdateGroundEffect(&this->m_MainRotor, HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR * this->m_MainRotor.m_BladeLength, HFD_BLADE_GROUND_EFFECT_MULTIPLIER, v2);
  v33 = I_fclamp(*(float *)&updated, 0.0, 1.0);
  v34 = FD_ComputeExpo(*(float *)&v33, v31);
  v35 = *(float *)&v34;
  if ( (float)(v16 * 0.1) > 1.0 )
    v35 = (float)(this->m_GroundEffectPressure - (float)((float)(1.0 / (float)(v16 * 0.1)) * this->m_GroundEffectPressure)) + (float)((float)(1.0 / (float)(v16 * 0.1)) * *(float *)&v34);
  this->m_GroundEffectPressure = v35;
  v36 = _xmm;
  if ( value != 0.0 && (this->m_EnableFlyByWire && this->m_inputControlsEnabled || LODWORD(value) == 2 || m_ManualControlTimer < 1.0) )
  {
    v37 = I_fclamp((float)(v16 - 30.0) * 0.033333335, 0.0, 1.0);
    v584 = *(float *)&v37;
    LOBYTE(v557) = 1;
    this->m_MainRotor.m_SmoothCollective = 0;
    this->m_TailRotor.m_SmoothCollective = 0;
    aileronInput = 0.0;
    rudderInput = 0.0;
    elevatorInput = 0.0;
    HelicopterDynamics::TranslateUserControlInputsToFBW(this, &aileronInput, &elevatorInput, &collectiveInput, &rudderInput);
    v38 = collectiveInput;
    v564 = collectiveInput;
    v547 = aileronInput;
    v39 = LODWORD(elevatorInput);
    if ( COERCE_FLOAT(LODWORD(collectiveInput) & _xmm) <= 0.001 )
    {
      v42 = COERCE_FLOAT(LODWORD(elevatorInput) & _xmm) * v2;
      v40 = (float)(1.0 - v42) * (float)((float)((float)(1.0 - (float)(COERCE_FLOAT(LODWORD(aileronInput) & _xmm) * v2)) * (float)((float)((float)(1.0 - (float)(v2 * HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_DOWN)) * this->m_CollectiveSmoothingValue) + (float)((float)(v2 * HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_DOWN) * collectiveInput))) + (float)((float)(COERCE_FLOAT(LODWORD(aileronInput) & _xmm) * v2) * collectiveInput));
      v41 = v42 * collectiveInput;
    }
    else
    {
      v40 = (float)(1.0 - (float)(v2 * HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_UP)) * this->m_CollectiveSmoothingValue;
      v41 = (float)(v2 * HFD_FBW_SMOOTH_COLLECTIVE_RATE_RAMP_UP) * collectiveInput;
    }
    this->m_CollectiveSmoothingValue = v40 + v41;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_start_no_input_before_spoolup, "fd_helicopter_start_no_input_before_spoolup") && this->m_MainRotor.m_RotorRPM < (float)(HFD_GOVERNOR_MAX_SPEED - HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD) )
    {
      v547 = 0.0;
      v43 = 0.0;
      v39 = 0i64;
      v38 = 0.0;
      v564 = 0.0;
    }
    else
    {
      v43 = rudderInput;
    }
    collectiveInput = v43;
    v590 = fsqrt((float)(this->m_Velocity.v[1] * this->m_Velocity.v[1]) + (float)(this->m_Velocity.v[0] * this->m_Velocity.v[0]));
    v569 = (float)((float)(v0.v[1] * this->m_forwardVector.v[1]) + (float)(v0.v[0] * this->m_forwardVector.v[0])) + (float)(v0.v[2] * this->m_forwardVector.v[2]);
    v551 = (float)((float)(v0.v[1] * this->m_sideVector.v[1]) + (float)(v0.v[0] * this->m_sideVector.v[0])) + (float)(v0.v[2] * this->m_sideVector.v[2]);
    v44 = BG_GetFlightDynamicsManager();
    LODWORD(v45) = LODWORD(v44->m_UpAxis.v[0]) ^ _xmm;
    LODWORD(v46) = LODWORD(v44->m_UpAxis.v[1]) ^ _xmm;
    LODWORD(v47) = LODWORD(v44->m_UpAxis.v[2]) ^ _xmm;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_speedLimiter_range, "fd_helicopter_altitude_speedLimiter_range");
    v605.v[0] = (float)(v45 * *(float *)&Float_Internal_DebugName) + this->m_centerOfMassWs.v[0];
    v605.v[1] = (float)(v46 * *(float *)&Float_Internal_DebugName) + this->m_centerOfMassWs.v[1];
    v605.v[2] = (float)(*(float *)&Float_Internal_DebugName * v47) + this->m_centerOfMassWs.v[2];
    v628.fraction = FLOAT_1_0;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_altitude_speedLimiter, "fd_helicopter_altitude_speedLimiter") && this->m_playerControlled )
    {
      cross = v605.xyz;
      *(_QWORD *)v605.v = *(_QWORD *)this->m_centerOfMassWs.v;
      v605.v[2] = this->m_centerOfMassWs.v[2];
      FD_Trace(this->m_worldId, &v628, (const vec3_t *)&v605, &cross, NULL, 2097, NULL);
    }
    fraction = v628.fraction;
    v49 = HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_FORWARD;
    if ( v569 < -0.001 )
    {
      if ( *(float *)&v39 >= -0.001 )
        v49 = HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_FORWARD * 0.5;
      else
        v49 = HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_BACKWARD;
    }
    v50 = v560;
    v51 = I_fclamp((float)(v560 * COERCE_FLOAT(LODWORD(v569) & _xmm)) * (float)(1.0 / v49), 0.0, 1.0);
    v550 = 1.0 - *(float *)&v51;
    v52 = I_fclamp((float)(1.0 / v49) * v50, 0.0, 1.0);
    v558 = 1.0 - *(float *)&v52;
    v53 = I_fclamp((float)(v50 * COERCE_FLOAT(LODWORD(v551) & _xmm)) / HFD_FBW_GYRO_AILERON_SPEED_LIMIT, 0.0, 1.0);
    v572 = 1.0 - *(float *)&v53;
    v54 = I_fclamp(v50 / HFD_FBW_GYRO_AILERON_SPEED_LIMIT, 0.0, 1.0);
    v55 = 1.0 - *(float *)&v54;
    v566 = 1.0 - *(float *)&v54;
    v56 = FD_ComputeExpo(1.0 - *(float *)&v54, HFD_FBW_GYRO_AILERON_SPEED_LIMIT_EXPO);
    v573 = *(float *)&v56;
    v57 = FD_ComputeExpo(v558, HFD_FBW_GYRO_ELEVATOR_SPEED_LIMIT_EXPO);
    cross.v[0] = *(float *)&v57;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") && this->m_playerControlled )
    {
      if ( v569 >= -0.001 )
        v58 = this->m_GyroFBWEnhancerBackwardsAccumulator - v2;
      else
        v58 = v2 + this->m_GyroFBWEnhancerBackwardsAccumulator;
      this->m_GyroFBWEnhancerBackwardsAccumulator = v58;
      v59 = I_fclamp(v58, 0.0, 1.0);
      this->m_GyroFBWEnhancerBackwardsAccumulator = *(float *)&v59;
      if ( *(float *)&v59 > 0.001 )
      {
        FD_ComputeExpo(v55, HFD_USE_ENHANCED_FBW_RESPONSE_REVERSE_LIMITER_VEC_EXPO);
        v60 = v550;
        v61 = FD_ComputeExpo(v550, HFD_USE_ENHANCED_FBW_RESPONSE_REVERSE_LIMITER_VEC_EXPO);
        LODWORD(v62) = LODWORD(this->m_GyroFBWEnhancerRudderAccumulator) & _xmm;
        v63 = I_fclamp(1.0 - fsqrt((float)(v55 * v55) + (float)(*(float *)&v61 * *(float *)&v61)), 0.0, 1.0);
        v64 = I_fclamp(*(float *)&v63 + v62, 0.0, 1.0);
        v66 = LODWORD(FLOAT_1_0);
        *(float *)&v66 = 1.0 - (float)(*(float *)&v64 * this->m_GyroFBWEnhancerBackwardsAccumulator);
        v65 = v66;
        v67 = v39;
        *(float *)&v67 = *(float *)&v39 * *(float *)&v65;
        v39 = v67;
        v69 = v65;
        *(float *)&v69 = *(float *)&v65 * v547;
        v68 = v69;
        goto LABEL_47;
      }
    }
    else
    {
      this->m_GyroFBWEnhancerBackwardsAccumulator = 0.0;
    }
    v60 = v550;
    v68 = LODWORD(v547);
LABEL_47:
    this->m_UserControlInputs[3] = *(float *)&v68;
    v70 = LODWORD(collectiveInput);
    this->m_UserControlInputs[0] = collectiveInput;
    this->m_UserControlInputs[5] = v38;
    this->m_UserControlInputs[1] = *(float *)&v39;
    *(double *)&v70 = FlightDynamics::ComputeDeadzone(*(float *)&v70, HFD_CONTROL_INPUT_RUDDER_DEADZONE);
    _XMM8 = v70;
    rudderInput = *(float *)&v70;
    *((_QWORD *)&v70 + 1) = *((_QWORD *)&v39 + 1);
    *(double *)&v70 = FlightDynamics::ComputeDeadzone(*(float *)&v39, HFD_CONTROL_INPUT_ELEVATOR_DEADZONE);
    *(double *)&v70 = FD_ComputeExpo(*(float *)&v70, (float)((float)(1.0 - (float)(1.0 - v566)) * HFD_CONTROL_INPUT_ELEVATOR_EXPO) + (float)((float)(1.0 - v566) * HFD_CONTROL_INPUT_ELEVATOR_EXPO_SPEED));
    _XMM10 = v70;
    *((_QWORD *)&v70 + 1) = *((_QWORD *)&v68 + 1);
    *(double *)&v70 = FlightDynamics::ComputeDeadzone(*(float *)&v68, HFD_CONTROL_INPUT_AILERON_DEADZONE);
    *(double *)&v70 = FD_ComputeExpo(*(float *)&v70, (float)((float)(1.0 - (float)(1.0 - v573)) * HFD_CONTROL_INPUT_AILERON_EXPO) + (float)((float)(1.0 - v573) * HFD_CONTROL_INPUT_AILERON_EXPO_SPEED));
    _XMM6 = v70;
    if ( v569 <= 0.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm10, xmm1
        vblendvps xmm0, xmm10, xmm1, xmm0
      }
      LODWORD(_XMM10) = _XMM0;
      elevatorInput = *(float *)&_XMM0;
    }
    else if ( *(float *)&_XMM10 > v60 )
    {
      *(float *)&_XMM10 = v60;
    }
    if ( v551 >= 0.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm6, xmm1
        vblendvps xmm0, xmm6, xmm1, xmm0
      }
      LODWORD(_XMM6) = _XMM0;
      aileronInput = *(float *)&_XMM0;
    }
    else if ( *(float *)&_XMM6 > v572 )
    {
      *(float *)&_XMM6 = v572;
    }
    v78 = I_fclamp(v38 * this->m_EmergencyLevelForCollective, 0.0, 1.0);
    v79 = (float)((float)(1.0 - *(float *)&v78) * *(float *)&_XMM10) + (float)((float)(*(float *)&_XMM10 * 0.75) * *(float *)&v78);
    v563 = v79;
    v80 = (float)((float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 * this->m_EmergencyLevelForCollective) & _xmm)) * *(float *)&_XMM6) + (float)((float)(*(float *)&_XMM6 * 0.5) * COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 * this->m_EmergencyLevelForCollective) & _xmm));
    v81 = I_fclamp(COERCE_FLOAT(LODWORD(v38) ^ _xmm), 0.0, 1.0);
    v82 = (float)((float)(1.0 - *(float *)&v81) * v80) + (float)((float)(v80 * 0.75) * *(float *)&v81);
    v548 = v82;
    v83 = v82;
    if ( (float)(v82 * v578) > 0.0 )
    {
      v83 = (float)(1.0 - COERCE_FLOAT(LODWORD(v578) & _xmm)) * v82;
      v548 = v83;
    }
    *(float *)&v614 = this->m_sideVector.v[0];
    v84 = this->m_sideVector.v[1];
    v85 = LODWORD(v614);
    *(float *)&v85 = fsqrt((float)(*(float *)&v85 * *(float *)&v85) + (float)(v84 * v84));
    _XMM2 = v85;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm15, xmm0
    }
    v575 = *(float *)&_XMM1;
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    *(float *)&v614 = *(float *)&v614 * *(float *)&_XMM1;
    *((float *)&v614 + 1) = *(float *)&_XMM1 * v84;
    v615 = 0.0;
    *(float *)&v619 = this->m_forwardVector.v[0];
    v89 = this->m_forwardVector.v[1];
    v90 = LODWORD(v619);
    *(float *)&v90 = fsqrt((float)(*(float *)&v90 * *(float *)&v90) + (float)(v89 * v89));
    _XMM2 = v90;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm15, xmm0
    }
    v575 = *(float *)&_XMM1;
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    *(float *)&v619 = *(float *)&v619 * *(float *)&_XMM1;
    *((float *)&v619 + 1) = *(float *)&_XMM1 * v89;
    v620 = 0.0;
    aileronInput = fsqrt((float)(v79 * v79) + (float)(v83 * v83));
    v94 = p_m_Velocity->v[0] - this->m_GyroVelocityDelta.v[0];
    v95 = this->m_Velocity.v[1] - this->m_GyroVelocityDelta.v[1];
    v96 = this->m_Velocity.v[2] - this->m_GyroVelocityDelta.v[2];
    this->m_GyroVelocityDelta.v[0] = p_m_Velocity->v[0];
    this->m_GyroVelocityDelta.v[1] = this->m_Velocity.v[1];
    this->m_GyroVelocityDelta.v[2] = this->m_Velocity.v[2];
    *(float *)&_XMM0 = (float)(1.0 / v2) * HFD_GYRO_ACCELERATION_PID_FACTOR;
    v575 = (float)(*(float *)&_XMM0 * v94) + p_m_Velocity->v[0];
    v97 = v575;
    v594 = (float)(*(float *)&_XMM0 * v95) + this->m_Velocity.v[1];
    v98 = (float)(*(float *)&_XMM0 * v96) + this->m_Velocity.v[2];
    value = v98;
    v601 = (float)((float)(v575 * *(float *)&v614) + (float)(v594 * *((float *)&v614 + 1))) + (float)(v98 * v615);
    v586 = (float)((float)(v594 * this->m_forwardVector.v[1]) + (float)(v575 * this->m_forwardVector.v[0])) + (float)(v98 * this->m_forwardVector.v[2]);
    v99 = BG_GetFlightDynamicsManager();
    v568 = (float)((float)(v594 * v99->m_UpAxis.v[1]) + (float)(v97 * v99->m_UpAxis.v[0])) + (float)(v98 * v99->m_UpAxis.v[2]);
    v596 = (float)(HFD_GYRO_VELOCITY_PID_FACTOR * p_m_Velocity->v[0]) + this->m_centerOfMassWs.v[0];
    v579 = (float)(HFD_GYRO_VELOCITY_PID_FACTOR * this->m_Velocity.v[1]) + this->m_centerOfMassWs.v[1];
    v583 = (float)(HFD_GYRO_VELOCITY_PID_FACTOR * this->m_Velocity.v[2]) + this->m_centerOfMassWs.v[2];
    QuatTransform(&this->m_RotationInertiaQuat, &this->m_forwardVector, &v622);
    v552 = (float)((float)(this->m_angularVelocityWs.v[1] * this->m_upVector.v[1]) + (float)(p_m_upVector->v[0] * this->m_angularVelocityWs.v[0])) + (float)(this->m_angularVelocityWs.v[2] * this->m_upVector.v[2]);
    QuatTransform(&this->m_RotationInertiaQuat, &this->m_upVector, &v622);
    v100 = LODWORD(v622.v[1]);
    *(float *)&_XMM0 = (float)(v622.v[1] - this->m_upVector.v[1]) * (float)((float)(1.0 / v2) * HFD_GYRO_ANGULAR_CYCLIC_VELOCITY_FACTOR);
    v101 = (float)(v622.v[2] - this->m_upVector.v[2]) * (float)((float)(1.0 / v2) * HFD_GYRO_ANGULAR_CYCLIC_VELOCITY_FACTOR);
    v1.v[0] = (float)((float)(v622.v[0] - p_m_upVector->v[0]) * (float)((float)(1.0 / v2) * HFD_GYRO_ANGULAR_CYCLIC_VELOCITY_FACTOR)) + p_m_upVector->v[0];
    v1.v[1] = *(float *)&_XMM0 + this->m_upVector.v[1];
    v102 = v101 + this->m_upVector.v[2];
    *(float *)&v100 = fsqrt((float)((float)(v1.v[1] * v1.v[1]) + (float)(v1.v[0] * v1.v[0])) + (float)(v102 * v102));
    _XMM3 = v100;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm15, xmm0
    }
    *(float *)&v576 = *(float *)&_XMM1;
    v1.v[0] = v1.v[0] * (float)(1.0 / *(float *)&_XMM1);
    v1.v[1] = v1.v[1] * (float)(1.0 / *(float *)&_XMM1);
    v1.v[2] = v102 * (float)(1.0 / *(float *)&_XMM1);
    v106 = BG_GetFlightDynamicsManager();
    Vec3Cross(&v106->m_UpAxis, &v1, (vec3_t *)&v605);
    v598 = (float)((float)(v605.v[1] * this->m_forwardVector.v[1]) + (float)(v605.v[0] * this->m_forwardVector.v[0])) + (float)(v605.v[2] * this->m_forwardVector.v[2]);
    v587 = (float)((float)(v605.v[1] * this->m_sideVector.v[1]) + (float)(v605.v[0] * this->m_sideVector.v[0])) + (float)(v605.v[2] * this->m_sideVector.v[2]);
    v107 = LODWORD(v552);
    v108 = (float)(v552 * this->m_forwardVector.v[0]) + this->m_sideVector.v[0];
    v109 = (float)(v552 * this->m_forwardVector.v[1]) + this->m_sideVector.v[1];
    *(float *)&v107 = fsqrt((float)(v108 * v108) + (float)(v109 * v109));
    _XMM3 = v107;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm15, xmm0
    }
    *(float *)&v576 = *(float *)&_XMM1;
    v588 = v108 * (float)(1.0 / *(float *)&_XMM1);
    v589 = v109 * (float)(1.0 / *(float *)&_XMM1);
    *(_QWORD *)v609.v = *(_QWORD *)this->m_forwardVector.v;
    v609.v[0] = v609.v[0] + (float)((float)(v552 * HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER) * this->m_sideVector.v[0]);
    v114 = LODWORD(v609.v[1]);
    v113 = v609.v[1] + (float)((float)(v552 * HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER) * this->m_sideVector.v[1]);
    *(float *)&v114 = fsqrt((float)(v113 * v113) + (float)(v609.v[0] * v609.v[0]));
    _XMM3 = v114;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm15, xmm0
    }
    *(float *)&v576 = *(float *)&_XMM1;
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    v609.v[0] = v609.v[0] * *(float *)&_XMM1;
    v609.v[1] = v113 * *(float *)&_XMM1;
    v609.v[2] = 0.0;
    if ( this->m_playerControlled && Physics_IsPredictiveWorld(this->m_worldId) && Sys_IsMainThread() && DEBUG_DRAW_FBW_LINES )
    {
      end.v[0] = (float)(500.0 * this->m_GyroRudderForwardVector.v[0]) + this->m_centerOfMassWs.v[0];
      end.v[1] = (float)(500.0 * this->m_GyroRudderForwardVector.v[1]) + this->m_centerOfMassWs.v[1];
      end.v[2] = (float)(500.0 * this->m_GyroRudderForwardVector.v[2]) + this->m_centerOfMassWs.v[2];
      FD_DebugLine(&this->m_centerOfMassWs, &end, &colorRed, 0, DEBUG_LINE_TIME);
      end.v[0] = (float)(500.0 * v609.v[0]) + this->m_centerOfMassWs.v[0];
      end.v[1] = (float)(500.0 * v609.v[1]) + this->m_centerOfMassWs.v[1];
      end.v[2] = (float)(500.0 * v609.v[2]) + this->m_centerOfMassWs.v[2];
      FD_DebugLine(&this->m_centerOfMassWs, &end, &colorBlue, 0, DEBUG_LINE_TIME);
    }
    if ( !this->m_GyroRudderForwardVectorSet )
    {
      this->m_GyroRudderForwardVectorSet = 1;
      this->m_GyroRudderForwardVector = v609;
    }
    LODWORD(collectiveInput) = _XMM8 & _xmm;
    p_m_GyroRudderStrength = &this->m_GyroRudderStrength;
    if ( COERCE_FLOAT(_XMM8 & _xmm) <= 0.001 || (v576 = &this->m_GyroRudderStrength, COERCE_FLOAT(COERCE_UNSIGNED_INT(*p_m_GyroRudderStrength - *(float *)&_XMM8) & _xmm) >= 1.0) )
    {
      v576 = &this->m_GyroRudderStrength;
      *p_m_GyroRudderStrength = (float)(1.0 - (float)(v2 * HFD_FBW_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY)) * *p_m_GyroRudderStrength;
    }
    else
    {
      v119 = I_fclamp((float)((float)(1.0 - (float)(v2 * HFD_FBW_GYRO_RUDDER_HEADHOLD_TO_RATE_SMOOTHING)) * *p_m_GyroRudderStrength) + (float)((float)(v2 * HFD_FBW_GYRO_RUDDER_HEADHOLD_TO_RATE_SMOOTHING) * *(float *)&_XMM8), -0.5, 0.5);
      this->m_GyroRudderStrength = *(float *)&v119;
    }
    Vec3Cross(&this->m_GyroRudderForwardVector, &v609, (vec3_t *)&v605);
    v120 = FD_ComputeExpo((float)((float)((float)(v605.v[1] * this->m_upVector.v[1]) + (float)(v605.v[0] * p_m_upVector->v[0])) + (float)(v605.v[2] * this->m_upVector.v[2])) * HFD_GYRO_TAIL_LOCK_STRENGTH, HFD_GYRO_TAIL_LOCK_STRENGTH_EXPO);
    v562 = *(float *)&v120;
    v582 = 1.0 - (float)(1.0 - v550);
    LODWORD(v121) = COERCE_UNSIGNED_INT((float)((float)(v582 * HFD_FBW_GYRO_RUDDER_RATE_MANUAL) + (float)((float)(1.0 - v550) * HFD_FBW_GYRO_RUDDER_RATE_MANUAL_SPEED)) * *v576) & _xmm;
    m_LandingTimer = this->m_LandingTimer;
    v123 = I_fclamp((float)((float)(1.0 - COERCE_FLOAT(*(_DWORD *)v576 & _xmm)) * (float)((float)((float)(1.0 - v121) * *(float *)&v120) + (float)(v121 * *v576))) - (float)((float)((float)((float)((float)(*(float *)&_XMM8 * HFD_GYRO_TAIL_MAX_TURN_RATE) - (float)(HFD_TAIL_GYRO_ANGULAR_VELOCITY_MULTIPLIER * v552)) * HFD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH) * v2) * COERCE_FLOAT(*(_DWORD *)v576 & _xmm)), -1.0, 1.0);
    v124 = (float)((float)(v584 * HFD_FBW_RESPOSNE_RATE_RUDDER) + (float)((float)(1.0 - v584) * HFD_FBW_RESPOSNE_RATE_RUDDER_LOW_HZ)) * v2;
    this->m_FBWControlInputs[0] = (float)((float)(1.0 - v124) * this->m_FBWControlInputs[0]) + (float)((float)((float)(1.0 - m_LandingTimer) * *(float *)&v123) * v124);
    if ( v562 >= 0.0 )
      __asm { vcmpltss xmm0, xmm8, xmm11 }
    else
      __asm { vcmpltss xmm0, xmm11, xmm8 }
    __asm { vblendvps xmm0, xmm11, xmm1, xmm0 }
    v128 = HFD_FBW_GYRO_RUDDER_VECTOR_DELTA_MAX;
    *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(1.0 - COERCE_FLOAT(_XMM0 & _xmm), HFD_FBW_GYRO_RUDDER_VECTOR_DELTA_MAX);
    v129 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(I_fclamp(*(float *)&_XMM0, 0.0, v128)));
    *(double *)&_XMM0 = FD_ComputeExpo(v550, HFD_FBW_GYRO_RUDDER_SPEEDLIMITER_EXPO);
    v593 = 1.0 - *(float *)&_XMM0;
    v595 = 1.0 - (float)(1.0 - *(float *)&_XMM0);
    v130 = (float)(1.0 - this->m_LandingTimer) * (float)((float)((float)((float)((float)(v129 * (float)(1.0 - *(float *)&_XMM0)) + v595) * *(float *)&_XMM8) * (float)((float)(v582 * HFD_FBW_GYRO_RUDDER_RATE) + (float)((float)(1.0 - v550) * HFD_FBW_GYRO_RUDDER_RATE_AT_SPEED))) + (float)((float)(HFD_FBW_GYRO_AIL_TO_RUDDER_RATE * v548) * (float)(v560 * HFD_FBW_GYRO_AIL_TO_RUDDER_SPEED)));
    v131 = (float)(COERCE_FLOAT(LODWORD(v130) & _xmm) * HFD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR) * v2;
    *(double *)&_XMM0 = I_fclamp(v131, 0.0, 1.0);
    this->m_GyroRudderForwardVector.v[0] = (float)((float)(v609.v[0] - this->m_GyroRudderForwardVector.v[0]) * *(float *)&_XMM0) + this->m_GyroRudderForwardVector.v[0];
    this->m_GyroRudderForwardVector.v[1] = (float)((float)(v609.v[1] - this->m_GyroRudderForwardVector.v[1]) * *(float *)&_XMM0) + this->m_GyroRudderForwardVector.v[1];
    this->m_GyroRudderForwardVector.v[2] = (float)((float)(v609.v[2] - this->m_GyroRudderForwardVector.v[2]) * v131) + this->m_GyroRudderForwardVector.v[2];
    Vec3Normalize(&this->m_GyroRudderForwardVector);
    v132 = BG_GetFlightDynamicsManager();
    Vec3Cross(&v132->m_UpAxis, &this->m_GyroRudderForwardVector, (vec3_t *)&v605);
    Vec3Normalize((vec3_t *)&v605);
    v133 = (float)((float)((float)(1.0 - this->m_LandingTimer) * v130) + (float)(this->m_LandingTimer * *(float *)&_XMM8)) * v2;
    this->m_GyroRudderForwardVector.v[0] = (float)(v133 * v605.v[0]) + this->m_GyroRudderForwardVector.v[0];
    this->m_GyroRudderForwardVector.v[1] = (float)(v133 * v605.v[1]) + this->m_GyroRudderForwardVector.v[1];
    this->m_GyroRudderForwardVector.v[2] = 0.0;
    Vec3Normalize(&this->m_GyroRudderForwardVector);
    this->m_FlyByWireNormalizedVector.v[0] = this->m_GyroRudderForwardVector.v[0];
    this->m_FlyByWireNormalizedVector.v[1] = this->m_GyroRudderForwardVector.v[1];
    this->m_FlyByWireNormalizedVector.v[2] = this->m_GyroRudderForwardVector.v[2];
    LODWORD(_XMM0) = *(_DWORD *)v576 & _xmm;
    LODWORD(v571) = LODWORD(v548) & _xmm;
    v134 = v563;
    LODWORD(elevatorInput) = LODWORD(v563) & _xmm;
    *(double *)&_XMM0 = I_fclamp((float)(COERCE_FLOAT(LODWORD(v548) & _xmm) + *(float *)&_XMM0) + COERCE_FLOAT(LODWORD(v563) & _xmm), 0.0, 1.0);
    v135 = (float)((float)(1.0 - (float)(*(float *)&_XMM0 * (float)(1.0 - v550))) * HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE) + (float)((float)(*(float *)&_XMM0 * (float)(1.0 - v550)) * HFD_GYRO_ALTITUDE_LOCK_MAX_COLLECTIVE_SPEED);
    v585 = v135;
    *(double *)&_XMM0 = I_fclamp((float)(COERCE_FLOAT(*(_DWORD *)v576 & _xmm) + v571) + elevatorInput, 0.0, 1.0);
    v562 = (float)((float)(1.0 - (float)(*(float *)&_XMM0 * (float)(1.0 - v550))) * HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE) + (float)((float)(*(float *)&_XMM0 * (float)(1.0 - v550)) * HFD_GYRO_ALTITUDE_LOCK_MIN_COLLECTIVE_SPEED);
    if ( this->m_GyroAltitudeSet )
    {
      v136 = (float)(v2 * HFD_GYRO_ALTITUDE_LOCK_STRENGTH_RATE) + this->m_GyroAltiudeStrength;
      this->m_GyroAltiudeStrength = v136;
      v137 = I_fclamp(v136, COERCE_FLOAT(LODWORD(HFD_GYRO_ALTITUDE_LOCK_STRENGTH) & _xmm ^ _xmm), COERCE_FLOAT(LODWORD(HFD_GYRO_ALTITUDE_LOCK_STRENGTH) & _xmm));
      this->m_GyroAltiudeStrength = *(float *)&v137;
      v553 = *(float *)&v137 / HFD_GYRO_ALTITUDE_LOCK_STRENGTH;
      v138 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(HFD_HFD_GYRO_ALTITUDE_COLLECTIVE_FACTOR_SCALE * v568) & _xmm), HFD_GYRO_ALTITUDE_COLLECTIVE_FACTOR_MIN, 127.0);
      v139 = vec3_t::operator[](&this->m_centerOfMassWs, 2);
      v140 = (float)((float)(*(float *)&v138 * value) + (float)((float)(this->m_GyroAltitude - (float)((float)((float)(1.0 - *(float *)&v138) * *v139) + (float)(*(float *)&v138 * v583))) * HFD_GYRO_ALTITUDE_DIFFERENCE_FACTOR)) * this->m_GyroAltiudeStrength;
      v141 = I_fclamp(v140, v562, v135);
      v568 = *(float *)&v141;
      v142 = FD_ComputeExpo(v565, HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_EXPO);
      v143 = I_fclamp(*(float *)&v142, 0.0, 1.0);
      v562 = 1.0 - *(float *)&v143;
      v144 = vec3_t::operator[](&this->m_Velocity, 2);
      if ( (float)(*v144 + *vec3_t::operator[](&this->m_centerOfMassWs, 2)) < (float)(this->m_GyroAltitude - HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_THRESHOLD) || v140 > v135 && aileronInput > 0.0099999998 )
        this->m_EmergencyLevelForCollective = (float)((float)((float)(1.0 - (float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP)) * (float)((float)(this->m_EmergencyLevelForCollective * this->m_GyroAltiudeStrength) / HFD_GYRO_ALTITUDE_LOCK_STRENGTH)) + (float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP)) * v562;
      else
        this->m_EmergencyLevelForCollective = (float)(1.0 - (float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN)) * this->m_EmergencyLevelForCollective;
      m_GyroAltitude = this->m_GyroAltitude;
      this->m_GyroAltitude = (float)((float)(1.0 - v553) * *vec3_t::operator[](&this->m_centerOfMassWs, 2)) + (float)(m_GyroAltitude * v553);
      v146 = (float)((float)(HFD_FBW_RESPOSNE_RATE_COLLECTIVE * v584) + (float)((float)(1.0 - v584) * HFD_FBW_RESPOSNE_RATE_COLLECTIVE_LOW_HZ)) * v2;
      this->m_FBWControlInputs[5] = (float)((float)(1.0 - v146) * this->m_FBWControlInputs[5]) + (float)(v146 * v568);
      LODWORD(v554) = LODWORD(v38) & _xmm;
      if ( COERCE_FLOAT(LODWORD(v38) & _xmm) > HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD )
        this->m_GyroAltitudeSet = 0;
    }
    else
    {
      LODWORD(v554) = LODWORD(v38) & _xmm;
      if ( COERCE_FLOAT(LODWORD(v38) & _xmm) <= HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD )
      {
        this->m_EmergencyLevelForCollective = 0.0;
        this->m_GyroAltitude = v583;
        this->m_GyroAltiudeStrength = 0.0;
        this->m_GyroAltitudeSet = 1;
      }
      else
      {
        LODWORD(v147) = COERCE_UNSIGNED_INT((float)(HFD_FBW_GROUND_PRESSURE_SPEED_FACTOR * *vec3_t::operator[](&this->m_linearVelocityWs, 2)) * (float)(this->m_GroundEffectPressure / HFD_FBW_GROUND_PRESSURE_GAIN_THRESHOLD)) ^ _xmm;
        v148 = I_fclamp(v147, 0.0, 1.0);
        v149 = *(float *)&v148;
        v150 = FlightDynamics::ComputeDeadzone(v38, HFD_GYRO_ALTITUDE_COLLECTIVE_THRESHOLD * 0.55000001);
        v151 = v149 - 1.0;
        v152 = *(float *)&v150 * HFD_GYRO_ALTITUDE_MAX_CLIMB_RATE;
        I_fclamp(*(float *)&v150 * HFD_GYRO_ALTITUDE_MAX_CLIMB_RATE, v151 * HFD_GYRO_ALTITUDE_MAX_DESCENT_RATE, HFD_GYRO_ALTITUDE_MAX_CLIMB_RATE);
        v153 = I_fclamp(v38 * v151, 0.0, 1.0);
        v154 = (float)((float)(v152 - v568) * (float)((float)(1.0 - *(float *)&v153) * HFD_GYRO_ALTITUDE_MAX_CHANGE_RATE_STRENGTH)) * v2;
        this->m_FBWControlInputs[5] = v154;
        if ( this->m_LandingTimer >= 0.94999999 )
        {
          v155 = I_fclamp(v154, HFD_FBW_LOWEST_COLLECTIVE_LANDED, 1.0);
          this->m_FBWControlInputs[5] = *(float *)&v155;
        }
        v156 = v585;
        if ( v154 <= v585 )
        {
          if ( v38 < 0.1 )
            this->m_EmergencyLevelForCollective = (float)(1.0 - (float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_DOWN)) * this->m_EmergencyLevelForCollective;
        }
        else
        {
          v157 = FD_ComputeExpo(v565, HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_EXPO);
          v158 = I_fclamp(*(float *)&v157, 0.0, 1.0);
          this->m_EmergencyLevelForCollective = (float)((float)((float)(1.0 - (float)((float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP_CHANGE) * (float)(1.0 - *(float *)&v158))) * this->m_EmergencyLevelForCollective) + (float)((float)(v2 * HFD_FBW_COLLECTIVE_EMERGENCY_LEVEL_RAMP_UP_CHANGE) * (float)(1.0 - *(float *)&v158))) * (float)(1.0 - (float)(*(float *)&v158 * v2));
        }
        v159 = I_fclamp(this->m_FBWControlInputs[5], v562, v156);
        this->m_FBWControlInputs[5] = *(float *)&v159;
        v134 = v563;
      }
    }
    v160 = 1.0 - (float)(v560 * HFD_FBW_GYRO_CYCLIC_SPEED_RATE);
    v161 = (float)((float)(v560 * HFD_FBW_GYRO_CYCLIC_SPEED_RATE) * HFD_FBW_GYRO_CYCLIC_SPEED_ELEV_FACTOR) + v160;
    this->m_GyroAileronRate = (float)((float)((float)((float)(HFD_FBW_GYRO_CYCLIC_AIL_RATE * v548) * (float)(1.0 - this->m_GroundEffectPressure)) * (float)((float)((float)(v560 * HFD_FBW_GYRO_CYCLIC_SPEED_RATE) * HFD_FBW_GYRO_CYCLIC_SPEED_FACTOR) + v160)) * v2) + this->m_GyroAileronRate;
    this->m_GyroElevatorRate = (float)((float)((float)((float)(v134 * HFD_FBW_GYRO_CYCLIC_ELEV_RATE) * (float)(1.0 - this->m_GroundEffectPressure)) * v161) * v2) + this->m_GyroElevatorRate;
    v162 = FlightDynamics::CalculateDrag(this->m_GyroAileronRate, HFD_FBW_GYRO_CYCLIC_AIL_DRAG, v2);
    this->m_GyroAileronRate = *(float *)&v162;
    v163 = FlightDynamics::CalculateDrag(this->m_GyroElevatorRate, HFD_FBW_GYRO_CYCLIC_ELEV_DRAG, v2);
    this->m_GyroElevatorRate = *(float *)&v163;
    v164 = HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO;
    v165 = BG_GetFlightDynamicsManager();
    v166 = FD_ComputeExpo((float)((float)(v1.v[1] * v165->m_UpAxis.v[1]) + (float)(v1.v[0] * v165->m_UpAxis.v[0])) + (float)(v1.v[2] * v165->m_UpAxis.v[2]), v164);
    *(float *)&v576 = *(float *)&v166;
    v167 = I_fclamp(this->m_GyroAileronRate, COERCE_FLOAT(LODWORD(HFD_FBW_GYRO_CYCLIC_AIL_CLAMP) ^ _xmm), HFD_FBW_GYRO_CYCLIC_AIL_CLAMP);
    v585 = *(float *)&v167;
    v577 = (float)((float)((float)(this->m_Velocity.v[1] * this->m_forwardVector.v[1]) + (float)(p_m_Velocity->v[0] * this->m_forwardVector.v[0])) + (float)(this->m_Velocity.v[2] * this->m_forwardVector.v[2])) * v134;
    if ( v577 >= -0.001 )
      v168 = HFD_FBW_GYRO_CYCLIC_ELEV_CLAMP;
    else
      v168 = HFD_FBW_GYRO_CYCLIC_ELEV_CLAMP_REVERSE;
    v169 = I_fclamp(this->m_GyroElevatorRate, COERCE_FLOAT(LODWORD(v168) ^ _xmm), v168);
    v562 = *(float *)&v169;
    v170 = FD_ComputeExpo(v550, HFD_GYRO_CYCLIC_VELOCITY_FACTOR_LIMITER_EXPO_ELEV);
    v597 = *(float *)&v170;
    v171 = FD_ComputeExpo(v566, HFD_GYRO_CYCLIC_VELOCITY_FACTOR_LIMITER_EXPO_AILE);
    v172 = (float)(*(float *)&v171 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT) + (float)((float)(1.0 - *(float *)&v171) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_LIMIT_SPEED);
    v173 = FD_ComputeExpo((float)((float)(collectiveInput * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_RUDDER_FACTOR) + (float)((float)((float)((float)(1.0 - COERCE_FLOAT(LODWORD(this->m_CollectiveSmoothingValue) & _xmm)) * (float)((float)(*(float *)&v171 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL) + (float)((float)(1.0 - *(float *)&v171) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_SPEED))) + (float)(COERCE_FLOAT(LODWORD(this->m_CollectiveSmoothingValue) & _xmm) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_COLLECTIVE)) * (float)(1.0 - collectiveInput))) * v601, (float)(*(float *)&v171 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO) + (float)((float)(1.0 - *(float *)&v171) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_AIL_EXPO_SPEED));
    v174 = I_fclamp(*(float *)&v173, COERCE_FLOAT(LODWORD(v172) ^ _xmm), v172);
    if ( v585 >= 0.0 )
    {
      v175 = (float)(v585 * HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_RIGHT) * v582;
      v176 = (float)(1.0 - v550) * HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_RIGHT;
    }
    else
    {
      v175 = (float)(COERCE_FLOAT(LODWORD(v585) & _xmm) * HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_DECREASE_LEFT) * v582;
      v176 = (float)(1.0 - v550) * HFD_GYRO_CYCLIC_SPEED_FACTOR_AIL_DECREASE_LEFT;
    }
    v177 = 1.0 - v565;
    v568 = (float)(*(float *)&v174 + v585) - (float)((float)((float)((float)(v565 * HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL) + (float)((float)(1.0 - v565) * HFD_GYRO_CYCLIC_LEVELED_FACTOR_AIL_EMERGENCY)) - (float)(v175 + v176)) * v598);
    v178 = 1.0 - (float)(1.0 - v597);
    v179 = (float)(v178 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV) + (float)((float)(1.0 - v597) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_SPEED);
    v180 = (float)(v178 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT) + (float)((float)(1.0 - v597) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_LIMIT_SPEED);
    v181 = FD_ComputeExpo((float)((float)(collectiveInput * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_RUDDER_FACTOR) + (float)((float)((float)((float)(1.0 - COERCE_FLOAT(LODWORD(this->m_CollectiveSmoothingValue) & _xmm)) * v179) + (float)(COERCE_FLOAT(LODWORD(this->m_CollectiveSmoothingValue) & _xmm) * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_COLLECTIVE)) * (float)(1.0 - collectiveInput))) * v586, HFD_GYRO_CYCLIC_VELOCITY_FACTOR_ELEV_EXPO);
    v182 = I_fclamp(*(float *)&v181, COERCE_FLOAT(LODWORD(v180) ^ _xmm), v180);
    v586 = 1.0 - v558;
    v587 = (float)((float)(*(float *)&v182 + v562) * (float)(1.0 - v571)) - (float)((float)((float)((float)(HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV * v565) + (float)(v177 * HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_EMERGENCY)) - (float)((float)((float)(1.0 - (float)(1.0 - elevatorInput)) * (float)((float)((float)(v558 * HFD_GYRO_CYCLIC_INITIAL_FACTOR_ELEV_DECREASE) * COERCE_FLOAT(LODWORD(v562) & _xmm)) + (float)((float)(1.0 - COERCE_FLOAT(LODWORD(v562) & _xmm)) * HFD_GYRO_CYCLIC_LEVELED_FACTOR_ELEV_DECREASE))) + (float)((float)(1.0 - elevatorInput) * HFD_GYRO_CYCLIC_SPEED_FACTOR_ELEV_DECREASE))) * v587);
    v183 = 0.0;
    v558 = 0.0;
    if ( this->m_GyroGPSlocationSet )
    {
      if ( aileronInput >= HFD_GYRO_GPS_CYCLIC_THRESHOLD )
      {
        this->m_GyroGPSlocationSet = 0;
      }
      else
      {
        v184 = v596 - this->m_GyroGPSlocation.v[0];
        v185 = v579 - this->m_GyroGPSlocation.v[1];
        v579 = v583 - this->m_GyroGPSlocation.v[2];
        v186 = (float)(v184 * v588) + (float)(v185 * v589);
        v187 = HFD_GYRO_GPS_DISTANCE_THRESHOLD;
        if ( (float)(COERCE_FLOAT(LODWORD(v186) & _xmm) - HFD_GYRO_GPS_DISTANCE_THRESHOLD) > 0.0 )
        {
          v188 = I_fclamp(v186 * HFD_GYRO_GPS_AILERON_STRENGTH, COERCE_FLOAT(LODWORD(HFD_GYRO_GPS_AILERON_STRENGTH_MAX) ^ _xmm), HFD_GYRO_GPS_AILERON_STRENGTH_MAX);
          v558 = *(float *)&v188;
          v187 = HFD_GYRO_GPS_DISTANCE_THRESHOLD;
        }
        v190 = (float)((float)(v185 * v609.v[1]) + (float)(v184 * v609.v[0])) + (float)(v579 * v609.v[2]);
        v189 = v190;
        if ( (float)(COERCE_FLOAT(LODWORD(v190) & _xmm) - v187) > 0.0 )
        {
          v191 = v190 * HFD_GYRO_GPS_ELEVATOR_STRENGTH;
          I_fclamp(v189 * HFD_GYRO_GPS_ELEVATOR_STRENGTH, COERCE_FLOAT(LODWORD(HFD_GYRO_GPS_ELEVATOR_STRENGTH_MAX) ^ _xmm), HFD_GYRO_GPS_ELEVATOR_STRENGTH_MAX);
          v183 = v191;
        }
      }
    }
    else if ( fsqrt((float)((float)(this->m_Velocity.v[0] * this->m_Velocity.v[0]) + (float)(this->m_Velocity.v[1] * this->m_Velocity.v[1])) + (float)(this->m_Velocity.v[2] * this->m_Velocity.v[2])) < HFD_GYRO_GPS_VELOCITY_THRESHOLD && aileronInput < HFD_GYRO_GPS_CYCLIC_THRESHOLD )
    {
      this->m_GyroGPSlocation.v[0] = this->m_centerOfMassWs.v[0];
      this->m_GyroGPSlocation.v[1] = this->m_centerOfMassWs.v[1];
      this->m_GyroGPSlocation.v[2] = this->m_centerOfMassWs.v[2];
      this->m_GyroGPSlocationSet = 1;
    }
    v192 = I_fclamp((float)(v183 + v587) * HFD_GYRO_CYCLIC_POWER_ELEV, COERCE_FLOAT(LODWORD(HFD_GYRO_CYCLIC_RESPONSE_CLAMP) ^ _xmm), HFD_GYRO_CYCLIC_RESPONSE_CLAMP);
    v588 = *(float *)&v192;
    v193 = I_fclamp((float)(v568 + v558) * HFD_GYRO_CYCLIC_POWER_AIL, COERCE_FLOAT(LODWORD(HFD_GYRO_CYCLIC_RESPONSE_CLAMP) ^ _xmm), HFD_GYRO_CYCLIC_RESPONSE_CLAMP);
    v579 = *(float *)&v193;
    v194 = HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_EXPO;
    v195 = BG_GetFlightDynamicsManager();
    v196 = (float)((float)(v1.v[1] * v195->m_UpAxis.v[1]) + (float)(v1.v[0] * v195->m_UpAxis.v[0])) + (float)(v1.v[2] * v195->m_UpAxis.v[2]);
    v197 = FD_ComputeExpo(v196, v194);
    v198 = *(float *)&v197 * v550;
    if ( *(float *)&v197 <= HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_ELEV_THRESHOLD )
      v199 = this->m_GyroManualLimiterElevator - v2;
    else
      v199 = v2 + this->m_GyroManualLimiterElevator;
    v200 = I_fclamp(v199, 0.0, 1.0);
    this->m_GyroManualLimiterElevator = *(float *)&v200;
    v589 = (float)((float)((float)((float)(1.0 - v554) * HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER) + HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET) * this->m_GyroManualLimiterElevator) + (float)((float)(1.0 - this->m_GyroManualLimiterElevator) * v198);
    v201 = I_fclamp(v590 / HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_STOP_SPEED, 0.0, 1.0);
    v558 = *(float *)&v201;
    v202 = I_fclamp(v577, -1.0, 0.0);
    LODWORD(v577) = LODWORD(v202) ^ _xmm;
    v203 = 0.0;
    v204 = v563;
    if ( v569 < -0.001 )
    {
      if ( v563 >= -0.001 )
      {
        if ( v563 > 0.001 )
          LODWORD(v203) = LODWORD(v558) ^ _xmm;
      }
      else
      {
        v203 = (float)(1.0 - v573) * 3.0;
      }
    }
    v205 = I_fclamp(v38, 0.0, 1.0);
    v206 = (float)((float)(1.0 - *(float *)&v205) * HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER) + (float)(*(float *)&v205 * HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LIMITER_COLLECTIVE);
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_altitude_speedLimiter, "fd_helicopter_altitude_speedLimiter") && this->m_playerControlled )
      HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE = FLOAT_N1_0;
    else
      HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE = HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL;
    LODWORD(v590) = LODWORD(v204) ^ _xmm;
    v207 = I_fclamp(COERCE_FLOAT(LODWORD(v204) ^ _xmm), 0.0, 1.0);
    v208 = I_fclamp(*(float *)&v207 + fraction, 0.0, 1.0);
    v209 = (float)((float)(1.0 - *(float *)&v208) * HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_LOW_ALTITUDE) + (float)(*(float *)&v208 * HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL);
    v210 = I_fclamp((float)(v558 - v577) + v203, 0.0, 1.0);
    v211 = (float)((float)((float)(1.0 - *(float *)&v210) * HFD_FBW_GYRO_CYCLIC_ELEV_RATE_MANUAL_STOP) + (float)(*(float *)&v210 * v209)) * _mm_cvtepi32_ps((__m128i)(v196 > v206)).m128_f32[0];
    v212 = 1.0 - COERCE_FLOAT(LODWORD(v592) & _xmm);
    v213 = (float)((float)(v0.v[1] * this->m_sideVector.v[1]) + (float)(v0.v[0] * this->m_sideVector.v[0])) + (float)(v0.v[2] * this->m_sideVector.v[2]);
    v214 = FD_ComputeExpo((float)(1.0 - v573) * v571, HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_FACTOR_EXPO);
    v215 = (float)((float)(1.0 - *(float *)&v214) * HFD_FBW_GYRO_RUDDER_TO_ELEV) + (float)(*(float *)&v214 * HFD_FBW_GYRO_RUDDER_TO_ELEV_SPEED);
    v216 = v212 * HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT;
    LODWORD(v217) = COERCE_UNSIGNED_INT(v212 * HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT) ^ _xmm;
    v218 = FD_ComputeExpo(rudderInput, HFD_FBW_GYRO_RUDDER_TO_AIL_EXPO);
    v219 = I_fclamp((float)((float)(*(float *)&v218 * v213) * (float)(1.0 - v573)) * v215, v217, v216);
    v220 = v563;
    v221 = (float)(COERCE_FLOAT(LODWORD(v213) & _xmm) - COERCE_FLOAT(COERCE_UNSIGNED_INT(v213 * v563) & _xmm)) * *(float *)&v219;
    v592 = v221;
    v222 = elevatorInput;
    v223 = I_fclamp((float)((float)(COERCE_FLOAT(LODWORD(v221) & _xmm) + elevatorInput) * v589) * v211, -1.0, 1.0);
    fraction = v2 * (float)((float)((float)(1.0 - v584) * HFD_FBW_RESPOSNE_RATE_CYCLIC_LOW_HZ) + (float)(v584 * HFD_FBW_RESPOSNE_RATE_CYCLIC));
    v577 = 1.0 - fraction;
    this->m_FBWControlInputs[1] = (float)((float)((float)((float)(v221 + v220) * *(float *)&v223) + (float)((float)(1.0 - *(float *)&v223) * v588)) * fraction) + (float)((float)(1.0 - fraction) * this->m_FBWControlInputs[1]);
    v224 = HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_EXPO;
    v225 = BG_GetFlightDynamicsManager();
    v226 = (float)((float)(v1.v[1] * v225->m_UpAxis.v[1]) + (float)(v1.v[0] * v225->m_UpAxis.v[0])) + (float)(v1.v[2] * v225->m_UpAxis.v[2]);
    v227 = FD_ComputeExpo(v226, v224);
    v565 = *(float *)&v227;
    v228 = *(float *)&v227 * v572;
    if ( v226 <= (float)((float)(v595 * HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD) + (float)(v593 * HFD_FBW_GYRO_CYCLIC_RATE_MANUAL_AIL_THRESHOLD_SPEED)) )
      v229 = this->m_GyroManualLimiterAileron - v2;
    else
      v229 = v2 + this->m_GyroManualLimiterAileron;
    v230 = I_fclamp(v229, 0.0, 1.0);
    this->m_GyroManualLimiterAileron = *(float *)&v230;
    v558 = 1.0 - v226;
    v231 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v220 * HFD_GYRO_CYCLIC_VELOCITY_FACTOR_COLLECTIVE_MIX) * (float)(1.0 - v226)) & _xmm), 0.0, 1.0);
    this->m_FBWControlInputs[5] = *(float *)&v231 + this->m_FBWControlInputs[5];
    v232 = (float)((float)((float)((float)(1.0 - v554) * HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER) + HFD_FBW_GYRO_COL_MANUAL_RATE_LIMITER_OFFSET) * this->m_GyroManualLimiterAileron) + (float)((float)(1.0 - this->m_GyroManualLimiterAileron) * v228);
    v233 = HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_FACTOR_EXPO;
    v234 = I_fclamp(v222, HFD_FBW_GYRO_RUDDER_TO_AIL_MIN_ELEV, 1.0);
    v235 = FD_ComputeExpo(*(float *)&v234 * v586, v233);
    v236 = (float)((float)(1.0 - *(float *)&v235) * HFD_FBW_GYRO_RUDDER_TO_AIL) + (float)(*(float *)&v235 * HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED);
    v237 = 1.0 - COERCE_FLOAT(LODWORD(v578) & _xmm);
    v238 = (float *)vec3_t::operator[](&this->m_forwardVector, 1);
    v239 = v0.v[1] * *v238;
    v240 = (float *)vec3_t::operator[](&this->m_forwardVector, 0);
    v241 = v0.v[0] * *v240;
    v242 = (float *)vec3_t::operator[](&this->m_forwardVector, 2);
    LODWORD(v243) = COERCE_UNSIGNED_INT((float)(v0.v[2] * *v242) + (float)(v241 + v239)) & _xmm;
    v244 = v237 * HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_RIGHT;
    LODWORD(v245) = COERCE_UNSIGNED_INT(v237 * HFD_FBW_GYRO_RUDDER_TO_AIL_SPEED_CLAMP_LEFT) ^ _xmm;
    v246 = FD_ComputeExpo(rudderInput, HFD_FBW_GYRO_RUDDER_TO_AIL_EXPO);
    v247 = I_fclamp((float)(*(float *)&v246 * (float)(1.0 - v550)) * v236, v245, v244);
    v248 = (float)(1.0 - v571) * *(float *)&v247;
    v249 = I_fclamp(COERCE_FLOAT(LODWORD(v569) ^ _xmm), 0.0, 1.0);
    v250 = *(float *)&v249;
    v251 = I_fclamp(v590, 0.0, 1.0);
    v252 = (float)(1.0 - (float)(v250 + *(float *)&v251)) * v248;
    v253 = (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v252 * v243) & _xmm) + v571) * v232) * (float)((float)((float)(1.0 - v566) * HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL) + (float)(HFD_FBW_GYRO_CYCLIC_AIL_RATE_MANUAL_STOP * v566));
    v254 = I_fclamp((float)((float)((float)((float)((float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(rudderInput * v592) & _xmm)) * v548) + (float)(COERCE_FLOAT(LODWORD(rudderInput) ^ _xmm) * COERCE_FLOAT(COERCE_UNSIGNED_INT(rudderInput * v592) & _xmm))) + v252) * (float)(v253 * *(float *)&v576)) + (float)((float)(1.0 - (float)(v253 * *(float *)&v576)) * v579), -1.0, 1.0);
    v255 = *(float *)&v254 * fraction;
    v256 = this->m_FBWControlInputs[3] * v577;
    v257 = v255 + v256;
    this->m_FBWControlInputs[3] = v255 + v256;
    LODWORD(_XMM11) = 0;
    if ( (float)(v255 + v256) >= 0.0 )
    {
      if ( (float)(v255 + v256) <= 0.0 )
        goto LABEL_124;
      v258 = v257 * HFD_FBW_RIGHT_RESPONSE_MODIFIER;
    }
    else
    {
      v258 = v257 * HFD_FBW_LEFT_RESPONSE_MODIFIER;
    }
    v259 = I_fclamp(v258, -1.0, 1.0);
    this->m_FBWControlInputs[3] = *(float *)&v259;
LABEL_124:
    v260 = this->m_FBWControlInputs[1];
    if ( v260 <= 0.0 )
    {
      if ( this->m_FBWControlInputs[3] <= 0.0 )
        goto LABEL_129;
      v261 = v260 * HFD_FBW_BACKWARD_RESPONSE_MODIFIER;
    }
    else
    {
      v261 = v260 * HFD_FBW_FORWARD_RESPONSE_MODIFIER;
    }
    v262 = I_fclamp(v261, -1.0, 1.0);
    this->m_FBWControlInputs[1] = *(float *)&v262;
LABEL_129:
    v263 = this->m_FBWControlInputs[0];
    if ( v263 <= 0.0 )
    {
      if ( v263 >= 0.0 )
      {
LABEL_134:
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") || !this->m_playerControlled )
          goto LABEL_148;
        v266 = FlightDynamics::ComputeDeadzone(v563, HFD_USE_ENHANCED_FBW_RESPONSE_DEADZONE);
        v267 = *(float *)&v266;
        v268 = FlightDynamics::ComputeDeadzone(v548, HFD_USE_ENHANCED_FBW_RESPONSE_DEADZONE);
        v578 = *(float *)&v268;
        v269 = (float *)vec3_t::operator[](&this->m_Velocity, 1);
        v270 = (float *)vec3_t::operator[](&this->m_sideVector, 1);
        v271 = *v269;
        v272 = *v270;
        v273 = (float *)vec3_t::operator[](&this->m_Velocity, 0);
        v274 = (float *)vec3_t::operator[](&this->m_sideVector, 0);
        v275 = *v273;
        v276 = *v274;
        v277 = (float *)vec3_t::operator[](&this->m_Velocity, 2);
        v278 = (float)((float)(v272 * v271) + (float)(v276 * v275)) + (float)(*v277 * *vec3_t::operator[](&this->m_sideVector, 2));
        v279 = BG_GetFlightDynamicsManager();
        Vec3Cross(&v279->m_UpAxis, &this->m_GyroRudderForwardVector, (vec3_t *)&v605);
        v605.v[2] = 0.0;
        Vec3Normalize((vec3_t *)&v605);
        v280 = (float)(v278 * HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_MULTIPLIER) * (float)(v578 * v572);
        I_fclamp(v280, 0.0, 1.0);
        v281 = v280;
        v282 = *vec3_t::operator[](&this->m_Velocity, 0);
        v283 = (float *)vec3_t::operator[](&this->m_Velocity, 0);
        v284 = (float)((float)(v575 - v282) * v280) + *v283;
        v285 = *vec3_t::operator[](&this->m_Velocity, 1);
        v286 = (float *)vec3_t::operator[](&this->m_Velocity, 1);
        v287 = (float)((float)(v594 - v285) * v280) + *v286;
        v288 = *vec3_t::operator[](&this->m_Velocity, 2);
        v289 = (float *)vec3_t::operator[](&this->m_Velocity, 2);
        v290 = v284 * v605.v[0];
        v291 = v605.v[1];
        v292 = v290 + (float)(v287 * v605.v[1]);
        v293 = v605.v[2];
        v575 = v292 + (float)((float)((float)((float)(value - v288) * v281) + *v289) * v605.v[2]);
        v294 = HFD_FBW_GYRO_AILERON_SPEED_LIMIT_EXPO;
        v295 = I_fclamp(COERCE_FLOAT(LODWORD(v575) & _xmm) / HFD_FBW_GYRO_AILERON_RELATIVE_SPEED_LIMIT, 0.0, 1.0);
        v296 = FD_ComputeExpo(1.0 - *(float *)&v295, v294);
        v549 = *(float *)&v296;
        v297 = v605.v[0];
        v298 = (float)((float)(v291 * v1.v[1]) + (float)(v605.v[0] * v1.v[0])) + (float)(v293 * v1.v[2]);
        v299 = I_fclamp((float)(1.0 - aileronInput) + this->m_EmergencyLevelForCollective, 0.0, 1.0);
        *(float *)&v576 = *(float *)&v299 * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG;
        v593 = (float)(v267 * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_ELE) * (float)(1.0 - this->m_EmergencyLevelForCollective);
        v300 = FD_ComputeExpo(v558, HFD_USE_ENHANCED_FBW_RESPONSE_LEVELED_FACTOR_EXPO);
        value = *(float *)&v300;
        v301 = v578;
        v302 = v575;
        v304 = v575 * v578;
        v303 = v575 * v578;
        if ( (float)(v298 * v578) >= 0.0 )
        {
          if ( (float)(v298 * v578) > HFD_FBW_ENHANCER_TRANSITION_THRESHOLD || v304 > HFD_FBW_ENHANCER_TRANSITION_THRESHOLD )
          {
            v323 = FlightDynamics::CalculateDrag(this->m_GyroFBWEnhancerAileronAccumulator, HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_EXTRA_RATE_DECAY, v2);
            this->m_GyroFBWEnhancerAileronAccumulator = *(float *)&v323;
            v324 = FlightDynamics::CalculateDrag(this->m_GyroFBWEnhancerAileronAccumulatorVelocity, HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_EXTRA_RATE_DECAY, v2);
            this->m_GyroFBWEnhancerAileronAccumulatorVelocity = *(float *)&v324;
            LODWORD(v325) = COERCE_UNSIGNED_INT((float)(v302 * v2) * HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR) ^ _xmm;
            v326 = (float)(v325 * v297) + *vec3_t::operator[](&this->m_Velocity, 0);
            *vec3_t::operator[](&this->m_Velocity, 0) = v326;
            v327 = (float *)vec3_t::operator[](&this->m_Velocity, 1);
            v328 = (float)(v325 * v605.v[1]) + *v327;
            *vec3_t::operator[](&this->m_Velocity, 1) = v328;
            v329 = (float *)vec3_t::operator[](&this->m_Velocity, 2);
            v330 = (float)(v325 * v605.v[2]) + *v329;
            *vec3_t::operator[](&this->m_Velocity, 2) = v330;
          }
          v312 = v549;
        }
        else
        {
          if ( v304 <= HFD_FBW_ENHANCER_TRANSITION_THRESHOLD )
          {
            v312 = v549;
            v311 = (float)((float)((float)((float)((float)((float)((float)(v578 * COERCE_FLOAT(LODWORD(v298) & _xmm)) - this->m_GyroFBWEnhancerAileronAccumulator) * v2) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE) * v549) * *(float *)&v300) * (float)(1.0 - COERCE_FLOAT(LODWORD(this->m_GyroFBWEnhancerRudderAccumulator) & _xmm))) + this->m_GyroFBWEnhancerAileronAccumulatorVelocity;
          }
          else
          {
            LODWORD(v305) = COERCE_UNSIGNED_INT((float)(v575 * v2) * HFD_USE_ENHANCED_FBW_RESPONSE_RATE_CHANGE_FACTOR) ^ _xmm;
            v306 = (float)(v297 * v305) + *vec3_t::operator[](&this->m_Velocity, 0);
            *vec3_t::operator[](&this->m_Velocity, 0) = v306;
            v307 = (float *)vec3_t::operator[](&this->m_Velocity, 1);
            v308 = (float)(v305 * v605.v[1]) + *v307;
            *vec3_t::operator[](&this->m_Velocity, 1) = v308;
            v309 = (float *)vec3_t::operator[](&this->m_Velocity, 2);
            v310 = (float)(v305 * v605.v[2]) + *v309;
            *vec3_t::operator[](&this->m_Velocity, 2) = v310;
            v311 = (float)((float)((float)((float)((float)((float)(v301 * COERCE_FLOAT(LODWORD(v298) & _xmm)) - this->m_GyroFBWEnhancerAileronAccumulator) * v2) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_RATE) * value) * (float)(1.0 - COERCE_FLOAT(LODWORD(this->m_GyroFBWEnhancerRudderAccumulator) & _xmm))) + this->m_GyroFBWEnhancerAileronAccumulatorVelocity;
            v312 = v549;
          }
          this->m_GyroFBWEnhancerAileronAccumulatorVelocity = v311;
          if ( v303 < 0.0 )
          {
            v313 = HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_EXPO;
            v314 = FlightDynamics::ComputeDeadzone(v312, HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_THRESHOLD);
            v315 = FD_ComputeExpo(*(float *)&v314, v313);
            v316 = (float)(1.0 - v572) + *(float *)&v315;
            v317 = I_fclamp(v316, 0.0, 1.0);
            v318 = v316;
            v319 = *(float *)&v317 + this->m_EmergencyLevelForCollective;
            I_fclamp(v319, 0.0, 1.0);
            v320 = this->m_FBWControlInputs[3];
            v321 = FLOAT_N1_0;
            v322 = I_fclamp(v568 * HFD_USE_ENHANCED_FBW_RESPONSE_BLOWBACK_EFFECT_MULTIPLIER, -1.0, 1.0);
            this->m_FBWControlInputs[3] = (float)((float)(1.0 - v319) * *(float *)&v322) + (float)(v319 * v320);
            this->m_GyroFBWEnhancerAileronAccumulator = (float)((float)(v318 - 1.0) + v318) * this->m_GyroFBWEnhancerAileronAccumulator;
LABEL_147:
            v331 = FlightDynamics::CalculateDrag(this->m_GyroFBWEnhancerAileronAccumulator, HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_DECAY, v2);
            this->m_GyroFBWEnhancerAileronAccumulator = *(float *)&v331;
            v332 = (float)((float)((float)(HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_MULTIPLIER * this->m_GyroFBWEnhancerAileronAccumulatorVelocity) * value) * v2) + *(float *)&v331;
            this->m_GyroFBWEnhancerAileronAccumulator = v332;
            v333 = I_fclamp(v332, v321, 1.0);
            this->m_GyroFBWEnhancerAileronAccumulator = *(float *)&v333;
            v334 = FlightDynamics::CalculateDrag(this->m_GyroFBWEnhancerAileronAccumulatorVelocity, HFD_USE_ENHANCED_FBW_RESPONSE_AIL_ACCUMULATOR_RATE_DECAY, v2);
            this->m_GyroFBWEnhancerAileronAccumulatorVelocity = *(float *)&v334;
            v335 = FD_ComputeExpo(1.0 - v550, HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL_SPEED_EXPO);
            v336 = (float)((float)((float)((float)((float)(1.0 - (float)(*(float *)&v335 * v312)) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL) + (float)((float)(*(float *)&v335 * v312) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_AIL_SPEED)) * (float)(1.0 - this->m_EmergencyLevelForCollective)) * (float)(1.0 - COERCE_FLOAT(LODWORD(this->m_GyroFBWEnhancerRudderAccumulator) & _xmm))) * this->m_GyroFBWEnhancerAileronAccumulator;
            v337 = I_fclamp(v564, 0.0, 1.0);
            v338 = (float)(*(float *)&v337 * (float)((float)(1.0 - v550) * v558)) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL;
            v339 = I_fclamp(v564, v321, 0.0);
            v340 = (float)(COERCE_FLOAT(LODWORD(v339) & _xmm) * (float)((float)(1.0 - (float)(1.0 - v550)) * v565)) * HFD_USE_ENHANCED_FBW_RESPONSE_BOOST_COL_DOWN;
            v341 = *(float *)&v576;
            v342 = *(float *)&v576 * HFD_AIRFRAME_INVERSE_MASS;
            v343 = vec3_t::operator[](&this->m_Velocity, 0);
            v344 = v567;
            v345 = FlightDynamics::CalculateDrag(*v343, v342, v567);
            *vec3_t::operator[](&this->m_Velocity, 0) = *(float *)&v345;
            v346 = v341 * HFD_AIRFRAME_INVERSE_MASS;
            v347 = vec3_t::operator[](&this->m_Velocity, 1);
            v348 = FlightDynamics::CalculateDrag(*v347, v346, v344);
            *vec3_t::operator[](&this->m_Velocity, 1) = *(float *)&v348;
            v349 = I_fclamp((float)(1.0 - cross.v[0]) * 2.0, 0.0, 1.0);
            v350 = *(float *)&v349 * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED;
            v351 = I_fclamp((float)(1.0 - v573) * 2.0, 0.0, 1.0);
            v352 = *(float *)&v351 * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED_AILERON;
            *(double *)v605.v = v619;
            v605.v[2] = v620;
            *(_QWORD *)cross.v = *(_QWORD *)p_m_Velocity->v;
            cross.v[2] = this->m_Velocity.v[2];
            CalculateDragAtDirection(&cross, (vec3_t *)&v605, v350 * HFD_AIRFRAME_INVERSE_MASS, v344, &this->m_Velocity);
            *(double *)v605.v = v614;
            v605.v[2] = v615;
            *(_QWORD *)cross.v = *(_QWORD *)p_m_Velocity->v;
            cross.v[2] = this->m_Velocity.v[2];
            CalculateDragAtDirection(&cross, (vec3_t *)&v605, v352 * HFD_AIRFRAME_INVERSE_MASS, v344, &this->m_Velocity);
            v605.v[0] = *vec3_t::operator[](&this->m_forwardVector, 0);
            v605.v[1] = *vec3_t::operator[](&this->m_forwardVector, 1);
            vec3_t::operator[](&this->m_forwardVector, 2);
            v605.v[2] = 0.0;
            Vec3Normalize((vec3_t *)&v605);
            v353 = v605.v[1];
            v354 = v605.v[0];
            v355 = v605.v[2];
            v356 = (float)((float)(v605.v[1] * v1.v[1]) + (float)(v605.v[0] * v1.v[0])) + (float)(v605.v[2] * v1.v[2]);
            v357 = (float)((float)(v593 * HFD_AIRFRAME_INVERSE_MASS) * v550) * (float)(1.0 - this->m_GyroFBWEnhancerRudderAccumulator);
            v358 = v356 * v563;
            I_fclamp(v356 * v563, 0.0, 1.0);
            v359 = I_fclamp(elevatorInput * v356, COERCE_FLOAT(LODWORD(elevatorInput) ^ _xmm), elevatorInput);
            v360 = (float)(COERCE_FLOAT(LODWORD(v359) & _xmm) * (float)(v358 * v357)) * v567;
            v361 = (float)(v360 * v354) + *vec3_t::operator[](&this->m_Velocity, 0);
            *vec3_t::operator[](&this->m_Velocity, 0) = v361;
            v362 = (float)(v360 * v353) + *vec3_t::operator[](&this->m_Velocity, 1);
            *vec3_t::operator[](&this->m_Velocity, 1) = v362;
            v363 = (float)(v360 * v355) + *vec3_t::operator[](&this->m_Velocity, 2);
            *vec3_t::operator[](&this->m_Velocity, 2) = v363;
            v.v[0] = *vec3_t::operator[](&this->m_sideVector, 0);
            v.v[1] = *vec3_t::operator[](&this->m_sideVector, 1);
            v.v[2] = *vec3_t::operator[](&this->m_sideVector, 2);
            *vec3_t::operator[](&v, 2) = 0.0;
            Vec3Normalize(&v);
            LODWORD(_XMM11) = 0;
            v364 = I_fclamp((float)((float)((float)((float)(1.0 - collectiveInput) * HFD_USE_ENHANCED_FBW_RESPONSE_RUD_ACCUMULATOR_DECAY) + (float)(collectiveInput * 5.0)) * v567) + this->m_GyroFBWEnhancerRudderAccumulator, 0.0, 1.0);
            this->m_GyroFBWEnhancerRudderAccumulator = *(float *)&v364;
            v365 = (float)((float)(1.0 - this->m_GroundEffectPressure) * v336) * HFD_AIRFRAME_INVERSE_MASS;
            v2 = v567;
            v366 = (float)(v365 * (float)(1.0 - *(float *)&v364)) * v567;
            v367 = (float *)vec3_t::operator[](&this->m_Velocity, 0);
            v368 = (float)(v366 * v.v[0]) + *v367;
            *vec3_t::operator[](&this->m_Velocity, 0) = v368;
            v369 = (float *)vec3_t::operator[](&this->m_Velocity, 1);
            v370 = (float)(v366 * v.v[1]) + *v369;
            *vec3_t::operator[](&this->m_Velocity, 1) = v370;
            v371 = (float *)vec3_t::operator[](&this->m_Velocity, 2);
            v372 = (float)(v366 * v.v[2]) + *v371;
            *vec3_t::operator[](&this->m_Velocity, 2) = v372;
            v373 = BG_GetFlightDynamicsManager();
            Vec3Mad(&this->m_Velocity, (float)((float)((float)((float)(1.0 - this->m_GroundEffectPressure) * v338) * HFD_AIRFRAME_INVERSE_MASS) * (float)(1.0 - this->m_GyroFBWEnhancerRudderAccumulator)) * v2, &v373->m_UpAxis, &this->m_Velocity);
            v374 = BG_GetFlightDynamicsManager();
            Vec3Mad(&this->m_Velocity, (float)(v340 * HFD_AIRFRAME_INVERSE_MASS) * v2, &v374->m_UpAxis, &this->m_Velocity);
            v36 = _xmm;
            v375 = FlightDynamics::ComputeDeadzoneRange(COERCE_FLOAT(COERCE_UNSIGNED_INT(v563 - (float)(v550 * v569)) & _xmm), 1.1, 2.0);
            v376 = I_fclamp(*(float *)&v375, 0.0, 1.0);
            v377 = *(float *)&v376 * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_REVERSE;
            v378 = (float)(*(float *)&v376 * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_REVERSE) * HFD_AIRFRAME_INVERSE_MASS;
            v379 = vec3_t::operator[](&this->m_Velocity, 0);
            v380 = FlightDynamics::CalculateDrag(*v379, v378, v2);
            *vec3_t::operator[](&this->m_Velocity, 0) = *(float *)&v380;
            v381 = v377 * HFD_AIRFRAME_INVERSE_MASS;
            *(float *)&v380 = *vec3_t::operator[](&this->m_Velocity, 1);
            v382 = FlightDynamics::CalculateDrag(*(float *)&v380, v381, v2);
            *vec3_t::operator[](&this->m_Velocity, 1) = *(float *)&v382;
            v17 = _xmm;
LABEL_148:
            cross.v[0] = this->m_FBWControlInputs[1];
            if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2427, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_ELEVATOR] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_ELEVATOR] )") )
              __debugbreak();
            cross.v[0] = this->m_FBWControlInputs[3];
            if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2428, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_AILERON] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_AILERON] )") )
              __debugbreak();
            cross.v[0] = this->m_FBWControlInputs[5];
            if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2429, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_VERTICAL] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_VERTICAL] )") )
              __debugbreak();
            cross.v[0] = this->m_FBWControlInputs[0];
            if ( (LODWORD(cross.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2430, ASSERT_TYPE_SANITY, "( !IS_NAN( m_FBWControlInputs[FD_STICK_RUDDER] ) )", (const char *)&queryFormat, "!IS_NAN( m_FBWControlInputs[FD_STICK_RUDDER] )") )
              __debugbreak();
            _XMM9 = LODWORD(v560);
            goto LABEL_161;
          }
        }
        v321 = FLOAT_N1_0;
        goto LABEL_147;
      }
      v264 = v263 * HFD_FBW_RIGHT_RESPONSE_MODIFIER;
    }
    else
    {
      v264 = v263 * HFD_FBW_LEFT_RESPONSE_MODIFIER;
    }
    v265 = I_fclamp(v264, -1.0, 1.0);
    this->m_FBWControlInputs[0] = *(float *)&v265;
    goto LABEL_134;
  }
LABEL_161:
  v383 = this->m_ControlInputsNormalized[5];
  v384 = this->m_ControlInputsNormalized[0];
  elevatorInput = this->m_ControlInputsNormalized[3];
  aileronInput = this->m_ControlInputsNormalized[1];
  if ( (_BYTE)v557 )
  {
    m_FBWControlInputs = this->m_FBWControlInputs;
    *(_QWORD *)cross.v = this->m_FBWControlInputs;
  }
  else
  {
    v385 = FD_ComputeExpo((float)(v384 * v384) + (float)(v383 * v383), 0.5);
    v384 = v384 * *(float *)&v385;
    v383 = v383 * *(float *)&v385;
    if ( !this->m_playerControlled && this->m_LandingTimer < 0.001 )
    {
      v384 = HFD_ABANDONED_RUDDER_VALUE;
      v383 = HFD_ABANDONED_COLLECTIVE_VALUE;
      _XMM2 = LODWORD(HFD_ABANDONED_ELEVATOR_VALUE_SPEED);
      __asm
      {
        vcmpltss xmm1, xmm9, cs:?HFD_ABANDONED_SPEED_THRESHOLD@@3MA; float HFD_ABANDONED_SPEED_THRESHOLD
        vblendvps xmm1, xmm2, xmm0, xmm1
      }
      aileronInput = *(float *)&_XMM1;
      cross.v[0] = *(float *)&_XMM1;
    }
    this->m_FBWControlInputs[1] = 0.0;
    this->m_FBWControlInputs[3] = 0.0;
    *(_QWORD *)cross.v = this->m_FBWControlInputs;
    this->m_FBWControlInputs[0] = 0.0;
    this->m_GyroRudderForwardVectorSet = 0;
    v389 = (float *)vec3_t::operator[](&this->m_sideVector, 1);
    v390 = out.v[1] * *v389;
    v391 = (float *)vec3_t::operator[](&this->m_sideVector, 0);
    v392 = out.v[0] * *v391;
    v393 = (float *)vec3_t::operator[](&this->m_sideVector, 2);
    v394 = FD_ComputeExpo((float)((float)((float)(v390 + v392) + (float)(out.v[2] * *v393)) * HFD_GYRO_ANGULAR_YAW_VELOCITY_FACTOR) * (float)(1.0 / v2), 2.0);
    this->m_UserControlInputs[8] = *(float *)&v394 * HFD_MANUAL_FREELOOK_MULTIPLIER;
    this->m_UserControlInputs[9] = 0.0;
    v395 = *vec3_t::operator[](&this->m_forwardVector, 0);
    *vec3_t::operator[](&this->m_FlyByWireNormalizedVector, 0) = v395;
    v396 = *vec3_t::operator[](&this->m_forwardVector, 1);
    *vec3_t::operator[](&this->m_FlyByWireNormalizedVector, 1) = v396;
    v397 = *vec3_t::operator[](&this->m_forwardVector, 2);
    *vec3_t::operator[](&this->m_FlyByWireNormalizedVector, 2) = v397;
    m_FBWControlInputs = this->m_FBWControlInputs;
  }
  if ( !HFD_ALLOW_FULL_COLLECTIVE )
  {
    *(_QWORD *)cross.v = m_FBWControlInputs;
    if ( v383 <= *(float *)&_XMM11 )
      v383 = (float)((float)(1.0 - COERCE_FLOAT(LODWORD(v383) ^ v17)) * HFD_CENTER_COLLECTIVE_VALUE) + (float)(COERCE_FLOAT(LODWORD(v383) ^ v17) * HFD_LOWER_COLLECTIVE_VALUE);
    else
      v383 = v383 + (float)((float)(1.0 - v383) * HFD_CENTER_COLLECTIVE_VALUE);
  }
  p_m_centerOfMassWs = &this->m_centerOfMassWs;
  v400 = (float *)vec3_t::operator[](&this->m_centerOfMassWs, 0);
  v401 = v599 + *v400;
  v402 = (float *)vec3_t::operator[](&this->m_centerOfMassWs, 1);
  v403 = v600 + *v402;
  v404 = (float *)vec3_t::operator[](&this->m_centerOfMassWs, 2);
  v581 = v581 + *v404;
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    _XMM6 = this->m_RotationQuaternion;
    *vec3_t::operator[](&this->m_TailRotor.m_Position, 0) = v401;
    *vec3_t::operator[](&this->m_TailRotor.m_Position, 1) = v403;
    v406 = vec3_t::operator[](&this->m_TailRotor.m_Position, 2);
    *v406 = v581;
    *vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 0) = _XMM6.v[0];
    _RAX = vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 1);
    __asm { vextractps dword ptr [rax], xmm6, 1 }
    _RAX = vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 2);
    __asm { vextractps dword ptr [rax], xmm6, 2 }
    _RAX = vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 3);
    __asm { vextractps dword ptr [rax], xmm6, 3 }
    _XMM6.v[0] = *vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 0);
    *vec4_t::operator[](&this->m_TailRotor.m_PreviousRotationQuat, 0) = _XMM6.v[0];
    _XMM6.v[0] = *vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 1);
    *vec4_t::operator[](&this->m_TailRotor.m_PreviousRotationQuat, 1) = _XMM6.v[0];
    _XMM6.v[0] = *vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 2);
    *vec4_t::operator[](&this->m_TailRotor.m_PreviousRotationQuat, 2) = _XMM6.v[0];
    _XMM6.v[0] = *vec4_t::operator[](&this->m_TailRotor.m_RotationQuat, 3);
    *vec4_t::operator[](&this->m_TailRotor.m_PreviousRotationQuat, 3) = _XMM6.v[0];
    v605.xyz = a;
    FlightDynamicsRotorSystem::SetAirspeed(&this->m_TailRotor, (vec3_t *)&v605);
    FlightDynamicsRotorSystem::SetSwashplateDT(&this->m_TailRotor, 0.0, 0.0, (float)((float)(v384 * v574) + **(float **)cross.v) * HFD_CONTROL_INPUT_MULTI_TAIL_ROTOR, v2);
    *vec3_t::operator[](&this->m_TailRotor.m_LiftForceVector, 0) = 0.0;
    *vec3_t::operator[](&this->m_TailRotor.m_LiftForceVector, 1) = 0.0;
    *vec3_t::operator[](&this->m_TailRotor.m_LiftForceVector, 2) = 0.0;
    *vec3_t::operator[](&this->m_TailRotor.m_LiftTorqueVector, 0) = 0.0;
    *vec3_t::operator[](&this->m_TailRotor.m_LiftTorqueVector, 1) = 0.0;
    *vec3_t::operator[](&this->m_TailRotor.m_LiftTorqueVector, 2) = 0.0;
    v410 = 6;
    if ( !this->m_playerControlled )
      v410 = 1;
    FlightDynamicsRotorSystem::UpdateSteps(&this->m_TailRotor, v2, v410, 1);
    m_OpposingTorque = this->m_TailRotor.m_OpposingTorque;
    p_m_upVector = &this->m_upVector;
    p_m_centerOfMassWs = &this->m_centerOfMassWs;
  }
  else
  {
    FlightDynamicsRotorSystem::SetSwashplateDT(&this->m_TailRotor, 0.0, 0.0, (float)((float)(v384 * v574) + this->m_FBWControlInputs[0]) * HFD_CONTROL_INPUT_MULTI_TAIL_ROTOR, v2);
    m_OpposingTorque = 0.0;
  }
  value = m_OpposingTorque;
  v412 = HFD_MAIN_ROTOR_VERTICAL_OFFSET;
  v413 = *vec3_t::operator[](p_m_upVector, 0);
  v414 = (float)(v412 * v413) + *vec3_t::operator[](p_m_centerOfMassWs, 0);
  v415 = *vec3_t::operator[](p_m_upVector, 1);
  v416 = (float)(v412 * v415) + *vec3_t::operator[](p_m_centerOfMassWs, 1);
  v417 = *vec3_t::operator[](p_m_upVector, 2);
  v418 = (float)(v412 * v417) + *vec3_t::operator[](p_m_centerOfMassWs, 2);
  m_RotationQuaternion = this->m_RotationQuaternion;
  *vec3_t::operator[](&this->m_MainRotor.m_Position, 0) = v414;
  *vec3_t::operator[](&this->m_MainRotor.m_Position, 1) = v416;
  *vec3_t::operator[](&this->m_MainRotor.m_Position, 2) = v418;
  v605 = m_RotationQuaternion;
  FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(&this->m_MainRotor, &v605, v2);
  v419 = *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 0);
  *vec4_t::operator[](&this->m_MainRotor.m_PreviousRotationQuat, 0) = v419;
  v420 = *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 1);
  *vec4_t::operator[](&this->m_MainRotor.m_PreviousRotationQuat, 1) = v420;
  v421 = *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 2);
  *vec4_t::operator[](&this->m_MainRotor.m_PreviousRotationQuat, 2) = v421;
  v422 = *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 3);
  *vec4_t::operator[](&this->m_MainRotor.m_PreviousRotationQuat, 3) = v422;
  v423 = *vec4_t::operator[](&m_RotationQuaternion, 0);
  *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 0) = v423;
  v424 = *vec4_t::operator[](&m_RotationQuaternion, 1);
  *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 1) = v424;
  v425 = *vec4_t::operator[](&m_RotationQuaternion, 2);
  *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 2) = v425;
  v426 = *vec4_t::operator[](&m_RotationQuaternion, 3);
  *vec4_t::operator[](&this->m_MainRotor.m_RotationQuat, 3) = v426;
  *(_QWORD *)v605.v = *(_QWORD *)p_m_Velocity->v;
  v605.v[2] = this->m_Velocity.v[2];
  p_m_MainRotor = &this->m_MainRotor;
  FlightDynamicsRotorSystem::SetAirspeed(&this->m_MainRotor, (vec3_t *)&v605);
  v428 = v574;
  v429 = I_flerp(this->m_FBWControlInputs[5], v383, v574);
  v567 = *(float *)&v429;
  if ( HFD_COLLISION_TIME_DETECTION <= this->m_timeSinceLastCollision || v383 >= -0.1 && v564 >= -0.1 )
  {
    v430 = v560;
  }
  else
  {
    this->m_timeSinceLastCollision = HFD_COLLISION_TIME_DETECTION;
    v430 = v560;
    if ( this->m_LandingTimer < 1.0 && v560 < 300.0 && this->m_collisionZone == HFD_COLLISION_ID_LANDING_GEAR )
    {
      v431 = FD_ComputeExpo(v565, HFD_FBW_LANDING_TIMER_LEVELED_EXPO);
      this->m_LandingTimer = (float)((float)((float)(*(float *)&v431 * v566) * HFD_FBW_LANDING_TIMER_RATE) * v2) + this->m_LandingTimer;
    }
  }
  v432 = this->m_LandingTimer;
  if ( v432 <= *(float *)&_XMM11 || v432 >= 1.0 || v383 <= -0.001 || v564 <= -0.001 )
  {
    v435 = FLOAT_0_001;
    if ( v383 > 0.001 || v564 > 0.001 )
    {
      v432 = v432 - (float)(v2 * HFD_COLLISION_TIME_DECAY);
      this->m_LandingTimer = v432;
    }
  }
  else
  {
    this->m_LandingTimer = v432 - (float)(v2 * HFD_COLLISION_TIME_DECAY);
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
    {
      v433 = I_flerp(this->m_TailRotorAirflowLiftMultiplier, 1.0, v2 * HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER_RESTORE);
      this->m_TailRotorAirflowLiftMultiplier = *(float *)&v433;
      v434 = I_flerp(this->m_MainRotorAirflowLiftMultiplier, 1.0, v2 * HFD_FBW_ENHANCER_LANDED_MAIN_ROTOR_REDUCER_RESTORE);
      this->m_MainRotorAirflowLiftMultiplier = *(float *)&v434;
    }
    v432 = this->m_LandingTimer;
    v435 = FLOAT_0_001;
  }
  v436 = I_fclamp(v432, 0.0, 1.0);
  this->m_LandingTimer = *(float *)&v436;
  if ( *(float *)&v436 <= v435 )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
    {
      v453 = I_flerp(this->m_TailRotorAirflowLiftMultiplier, 1.0, v2 * HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER_RESTORE);
      this->m_TailRotorAirflowLiftMultiplier = *(float *)&v453;
      v454 = I_flerp(this->m_MainRotorAirflowLiftMultiplier, 1.0, v2 * HFD_FBW_ENHANCER_LANDED_MAIN_ROTOR_REDUCER_RESTORE);
      this->m_MainRotorAirflowLiftMultiplier = *(float *)&v454;
    }
    goto LABEL_204;
  }
  if ( v428 >= 1.0 )
  {
LABEL_204:
    *(float *)&v452 = elevatorInput;
    goto LABEL_205;
  }
  if ( *(float *)&v436 > 0.25 && v566 > 0.85000002 )
  {
    v437 = I_flerp(v567, HFD_FBW_LOWEST_COLLECTIVE_LANDED, v432);
    v567 = *(float *)&v437;
    v438 = I_flerp(this->m_FBWControlInputs[1], 0.0, v432);
    this->m_FBWControlInputs[1] = *(float *)&v438;
    v439 = *(float **)cross.v;
    v440 = I_flerp(**(float **)cross.v, 0.0, this->m_LandingTimer);
    *v439 = *(float *)&v440;
    v441 = I_flerp(aileronInput, 0.0, this->m_LandingTimer);
    aileronInput = *(float *)&v441;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_fbw_enhancer, "fd_helicopter_fbw_enhancer") )
    {
      QuatSlerp(&this->m_RotationInertiaQuat, &quat_identity, (float)(v2 * HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG) * this->m_LandingTimer, &result);
      v442 = *vec4_t::operator[](&result, 0);
      *vec4_t::operator[](&this->m_RotationInertiaQuat, 0) = v442;
      v443 = *vec4_t::operator[](&result, 1);
      *vec4_t::operator[](&this->m_RotationInertiaQuat, 1) = v443;
      v444 = *vec4_t::operator[](&result, 2);
      *vec4_t::operator[](&this->m_RotationInertiaQuat, 2) = v444;
      v445 = *vec4_t::operator[](&result, 3);
      *vec4_t::operator[](&this->m_RotationInertiaQuat, 3) = v445;
      v446 = *vec3_t::operator[](&this->m_Velocity, 2);
      v605.v[0] = *(float *)&_XMM11;
      v605.v[1] = *(float *)&_XMM11;
      v605.v[2] = *(float *)&_XMM11;
      Vec3Lerp(&this->m_Velocity, (const vec3_t *)&v605, (float)(v2 * HFD_FBW_ENHANCER_LANDED_ADDITIONAL_DRAG) * this->m_LandingTimer, &this->m_Velocity);
      *vec3_t::operator[](&this->m_Velocity, 2) = v446;
      v447 = (float)(HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER * this->m_LandingTimer) * v2;
      I_fclamp(v447, 0.0, 1.0);
      v448 = I_flerp(this->m_TailRotorAirflowLiftMultiplier, 0.0, v447);
      this->m_TailRotorAirflowLiftMultiplier = *(float *)&v448;
      v449 = (float)(HFD_FBW_ENHANCER_LANDED_TAIL_ROTOR_REDUCER * this->m_LandingTimer) * v2;
      I_fclamp(v449, 0.0, 1.0);
      v450 = I_flerp(this->m_MainRotorAirflowLiftMultiplier, 0.0, v449);
      this->m_MainRotorAirflowLiftMultiplier = *(float *)&v450;
    }
    p_m_MainRotor = &this->m_MainRotor;
  }
  v451 = I_flerp(this->m_FBWControlInputs[3], 0.0, this->m_LandingTimer);
  this->m_FBWControlInputs[3] = *(float *)&v451;
  v452 = I_flerp(elevatorInput, 0.0, this->m_LandingTimer);
LABEL_205:
  v455 = I_flerp(this->m_FBWControlInputs[3], *(float *)&v452, v428);
  v456 = *(float *)&v455;
  v457 = I_flerp(this->m_FBWControlInputs[1], COERCE_FLOAT(LODWORD(aileronInput) ^ v17), v428);
  FlightDynamicsRotorSystem::SetSwashplateDT(p_m_MainRotor, *(float *)&v457, v456, v567, v2);
  FlightDynamicsRotorSystem::ResetForces(p_m_MainRotor);
  if ( this->m_playerControlled )
    FlightDynamicsRotorSystem::UpdateSteps(p_m_MainRotor, v2, 6, 1);
  else
    FlightDynamicsRotorSystem::Update(p_m_MainRotor, v2, 1);
  v458 = v2 * HFD_TURBINE_DRAG;
  v459 = *(float *)&v580;
  v460 = (float)(this->m_GovernorRPM - *(float *)&v580) * HFD_GOVERNOR_TORQUE_RESPONSE;
  I_fclamp(v460, 0.0, 1.0);
  v461 = I_flerp(HFD_TURBINE_START_TORQUE, HFD_TURBINE_MAX_TORQUE, v459 / HFD_GOVERNOR_MAX_SPEED);
  v462 = I_flerp(this->m_TurbineTorque, v460 * *(float *)&v461, v458);
  this->m_TurbineTorque = *(float *)&v462;
  this->m_MainRotor.m_InputTorque = *(float *)&v462 - value;
  v580 = BG_GetFlightDynamicsManager();
  FlightDynamics::RecalculateDirectionVectors(this);
  Vec3Scale(&this->m_upVector, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v462 * HFD_TURBINE_TORQUE_DAMPENER) * HFD_AIRFRAME_INVERSE_MOI) * this->m_TailRotorAirflowLiftMultiplier) * v2) ^ v17), &start);
  v463 = 0.0;
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    v464 = *vec3_t::operator[](&this->m_TailRotor.m_AirflowVelocity, 0);
    *vec3_t::operator[](&v625, 0) = v464;
    v465 = *vec3_t::operator[](&this->m_TailRotor.m_AirflowVelocity, 1);
    *vec3_t::operator[](&v625, 1) = v465;
    v466 = *vec3_t::operator[](&this->m_TailRotor.m_AirflowVelocity, 2);
    *vec3_t::operator[](&v625, 2) = v466;
    Vec3Normalize(&v625);
    Vec3Mad(&this->m_TailRotor.m_AirflowVelocity, (float)(v430 * HFD_TAIL_ROTOR_AIRFLOW_FACTOR) * v2, &this->m_sideVector, (vec3_t *)&v605);
    Vec3Cross(&this->m_forwardVector, (const vec3_t *)&v605, &cross);
    v467 = Vec3Dot(&this->m_TailRotor.m_AirflowVelocity, &this->m_sideVector);
    v463 = *(float *)&v467;
    v468 = (float)((float)((float)(HFD_TAIL_ROTOR_AUTHORITY * HFD_TAIL_ROTOR_POSITION) * HFD_AIRFRAME_INVERSE_MOI) * this->m_TailRotorAirflowLiftMultiplier) * v2;
    p_cross = &cross;
  }
  else
  {
    v468 = (float)((float)((float)((float)((float)((float)(HFD_TAIL_ROTOR_RATIO * this->m_TailRotor.m_SwashplateCollective) * HFD_TAIL_BASIC_ROTOR_STRENGTH) * HFD_TAIL_ROTOR_AUTHORITY) * HFD_TAIL_ROTOR_POSITION) * HFD_AIRFRAME_INVERSE_MOI) * this->m_TailRotorAirflowLiftMultiplier) * v2;
    p_cross = &this->m_upVector;
  }
  Vec3Mad(&start, v468, p_cross, &start);
  Vec3Mad(&start, (float)((float)((float)(v463 * HFD_TAIL_ROTOR_AUTHORITY) * HFD_TAIL_ROTOR_INDUCED_TILT) * HFD_AIRFRAME_INVERSE_MOI) * v2, &this->m_forwardVector, &start);
  if ( HFD_USE_ADVANCED_MAIN_ROTOR )
  {
    v470 = *vec3_t::operator[](&this->m_MainRotor.m_LiftTorqueVector, 0);
    *vec3_t::operator[](&v623, 0) = v470;
    v471 = *vec3_t::operator[](&this->m_MainRotor.m_LiftTorqueVector, 1);
    *vec3_t::operator[](&v623, 1) = v471;
    v472 = *vec3_t::operator[](&this->m_MainRotor.m_LiftTorqueVector, 2);
    *vec3_t::operator[](&v623, 2) = v472;
    v473 = Vec3Normalize(&v623);
    v474 = (float)((float)((float)(*(float *)&v473 * HFD_MAIN_ROTOR_CYCLIC_AUTHORITY) * HFD_AIRFRAME_INVERSE_MOI) * this->m_MainRotorAirflowLiftMultiplier) * v2;
    p_m_sideVector = &v623;
  }
  else
  {
    Vec3Mad(&start, (float)((float)(HFD_MAIN_BASIC_ROTOR_STRENGTH * this->m_MainRotor.m_SwashplateCyclicLateral) * HFD_AIRFRAME_INVERSE_MOI) * v2, &this->m_forwardVector, &start);
    v474 = (float)((float)(HFD_MAIN_BASIC_ROTOR_STRENGTH * this->m_MainRotor.m_SwashplateCyclicForward) * HFD_AIRFRAME_INVERSE_MOI) * v2;
    p_m_sideVector = &this->m_sideVector;
  }
  Vec3Mad(&start, v474, p_m_sideVector, &start);
  v476 = *vec3_t::operator[](&this->m_MainRotor.m_AirflowVelocity, 0);
  *vec3_t::operator[](&b, 0) = v476;
  v477 = *vec3_t::operator[](&this->m_MainRotor.m_AirflowVelocity, 1);
  *vec3_t::operator[](&b, 1) = v477;
  v478 = *vec3_t::operator[](&this->m_MainRotor.m_AirflowVelocity, 2);
  *vec3_t::operator[](&b, 2) = v478;
  Vec3Add(&this->m_MainRotor.m_LiftForceVector, &b, &b);
  Vec3Cross(&v0, &this->m_upVector, &dir);
  v479 = Vec3Dot(&v0, &this->m_upVector);
  LiftAtAOA = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v580->m_AirfoilData, *(float *)&v479);
  v481 = LODWORD(LiftAtAOA) & v36;
  v605 = *p_m_RotationInertiaQuat;
  FlightDynamics::ApplyRotationDragAroundAxis(&v605, &dir, (float)(COERCE_FLOAT(LODWORD(LiftAtAOA) & v36) * HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_DRAG) * v602, v2, &this->m_RotationInertiaQuat);
  Vec3Normalize(&dir);
  Vec3Cross(&this->m_upVector, &dir, (vec3_t *)&v605);
  Vec3Cross(&this->m_Velocity, (const vec3_t *)&v605, &dir);
  Vec3Mad(&start, (float)((float)((float)(*(float *)&v481 * v602) * HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_VELOCITY) * HFD_AIRFRAME_INVERSE_MOI) * v2, &dir, &start);
  v482 = Vec3Length(&b);
  v483 = *(float *)&v482;
  if ( *(float *)&v482 > v435 )
  {
    Vec3Cross(&this->m_upVector, &b, (vec3_t *)&v605);
    v484 = HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_EXPO;
    v485 = Vec3Dot(&this->m_upVector, &b);
    v486 = *(float *)&v485 / v483;
    FD_ComputeExpo(*(float *)&v485 / v483, v484);
    Vec3Scale((const vec3_t *)&v605, v486, (vec3_t *)&v605);
    Vec3Mad(&start, (float)((float)(v430 * HFD_AIRFRAME_ROTOR_CENTERING_TORQUE) * HFD_AIRFRAME_INVERSE_MOI) * v2, (const vec3_t *)&v605, &start);
    Vec3Mad(&start, (float)(HFD_AIRFRAME_ROTOR_CENTERING_TORQUE_AIRFLOW * HFD_AIRFRAME_INVERSE_MOI) * v2, (const vec3_t *)&v605, &start);
  }
  v487 = Vec3Normalize(&start);
  if ( *(float *)&v487 > *(float *)&_XMM11 )
  {
    v488 = I_fclamp(*(float *)&v487, 0.0, HFD_MAX_ALLOWED_TORQUE);
    FlightDynamics::SetRotationNonLocal(this, &start, *(float *)&v488);
  }
  v489 = *vec3_t::operator[](&a, 0);
  *vec3_t::operator[](&v624, 0) = v489;
  v490 = *vec3_t::operator[](&a, 1);
  *vec3_t::operator[](&v624, 1) = v490;
  v491 = *vec3_t::operator[](&a, 2);
  *vec3_t::operator[](&v624, 2) = v491;
  v492 = Vec3Normalize(&v624);
  v493 = *(float *)&v492 * 25.399986;
  if ( this->m_playerControlled )
  {
    v494 = (float)(25.399986 * HFD_TAIL_ROTOR_POSITION) * v435;
    Vec3Cross(&v624, &this->m_forwardVector, (vec3_t *)&v605);
    v495 = Vec3Dot((const vec3_t *)&v605, &this->m_upVector);
    v496 = *(float *)&v495;
    v497 = Vec3Dot((const vec3_t *)&v605, &this->m_sideVector);
    v498 = *(float *)&v497;
    v499 = Vec3Dot(&a, &this->m_forwardVector);
    v500 = (float)((float)(*(float *)&v499 * 25.399986) * (float)(*(float *)&v499 * 25.399986)) * 0.00000050000006;
    v501 = (float)(v493 * v493) * 0.00000050000006;
    v502 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v580->m_AirfoilData, v496);
    v503 = (float)(*(float *)&v502 * v500) * HFD_AIRFLOW_CENTERING_FORCE_RUDDER_LIFT;
    Vec3Mad(&this->m_Velocity, (float)(v503 * HFD_AIRFRAME_INVERSE_MASS) * v2, &this->m_sideVector, &this->m_Velocity);
    FlightDynamics::SetRotationNonLocal(this, &this->m_upVector, (float)((float)(v503 * v494) * HFD_AIRFRAME_INVERSE_MOI) * v2);
    DragAtAOA = FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(&v580->m_AirfoilData, v496);
    v505 = (float)(*(float *)&DragAtAOA * v501) * HFD_AIRFLOW_CENTERING_FORCE_RUDDER_DRAG;
    Vec3Mad(&this->m_Velocity, (float)(v505 * HFD_AIRFRAME_INVERSE_MASS) * v2, &v0, &this->m_Velocity);
    FlightDynamics::SetRotationNonLocal(this, &this->m_upVector, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v505 * v496) * v494) * HFD_AIRFRAME_INVERSE_MOI) * v2) ^ v17));
    v506 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v580->m_AirfoilData, v498);
    v507 = (float)(*(float *)&v506 * v500) * HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_LIFT;
    Vec3Mad(&this->m_Velocity, (float)(v507 * HFD_AIRFRAME_INVERSE_MASS) * v2, &this->m_upVector, &this->m_Velocity);
    FlightDynamics::SetRotationNonLocal(this, &this->m_sideVector, (float)((float)(v507 * v494) * HFD_AIRFRAME_INVERSE_MOI) * v2);
    v508 = FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(&v580->m_AirfoilData, v498);
    v509 = (float)(*(float *)&v508 * v501) * HFD_AIRFLOW_CENTERING_FORCE_ELEVATOR_DRAG;
    Vec3Mad(&this->m_Velocity, (float)(v509 * HFD_AIRFRAME_INVERSE_MASS) * v2, &v0, &this->m_Velocity);
    FlightDynamics::SetRotationNonLocal(this, &this->m_sideVector, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v509 * v498) * v494) * HFD_AIRFRAME_INVERSE_MOI) * v2) ^ v17));
    if ( this->m_playerControlled )
    {
      Vec3Cross(&v0, &this->m_forwardVector, (vec3_t *)&v605);
      v510 = Vec3Dot((const vec3_t *)&v605, &this->m_upVector);
      v511 = *(float *)&v510;
      v512 = Vec3Dot((const vec3_t *)&v605, &this->m_sideVector);
      v513 = *(float *)&v512;
      v514 = Vec3Dot(&this->m_Velocity, &this->m_forwardVector);
      v515 = (float)(*(float *)&v514 * *(float *)&v514) * 0.5;
      v516 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v580->m_AirfoilData, v511);
      v517 = (float)(*(float *)&v516 * v515) * HFD_FUSELAGE_LATERL_LIFT;
      Vec3Mad(&this->m_Velocity, (float)(v517 * HFD_AIRFRAME_INVERSE_MASS) * v2, &this->m_sideVector, &this->m_Velocity);
      v518 = FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(&v580->m_AirfoilData, v513);
      v519 = (float)(*(float *)&v518 * v515) * HFD_FUSELAGE_HORIZONTAL_LIFT;
      Vec3Mad(&this->m_Velocity, (float)(v519 * HFD_AIRFRAME_INVERSE_MASS) * v2, &this->m_upVector, &this->m_Velocity);
      FlightDynamics::SetRotationNonLocal(this, &this->m_sideVector, (float)((float)(v519 * HFD_FUSELAGE_CENTERING_MOMENT_HORIZONTAL) * HFD_AIRFRAME_INVERSE_MOI) * v2);
      FlightDynamics::SetRotationNonLocal(this, &this->m_upVector, (float)((float)(v517 * HFD_FUSELAGE_CENTERING_MOMENT_LATERAL) * HFD_AIRFRAME_INVERSE_MOI) * v2);
    }
  }
  if ( !this->m_applyCollisionExtraImpulse )
    goto LABEL_227;
  this->m_GyroGPSlocationSet = 0;
  this->m_applyCollisionExtraImpulse = 0;
  Vec3Mad(&this->m_Velocity, v2, &this->m_collisionExtraImpulse, &this->m_Velocity);
  m_applyCollisionExtraAngularImpulse = this->m_applyCollisionExtraAngularImpulse;
  if ( m_applyCollisionExtraAngularImpulse == 1 )
  {
    v521 = Vec3Length(&this->m_collisionExtraImpulse);
    v522 = (float)((float)(*(float *)&v521 * HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH) * HFD_AIRFRAME_INVERSE_MOI) * v2;
LABEL_226:
    FlightDynamics::SetRotationNonLocal(this, &this->m_upVector, v522);
    goto LABEL_227;
  }
  if ( m_applyCollisionExtraAngularImpulse == -1 )
  {
    v523 = Vec3Length(&this->m_collisionExtraImpulse);
    LODWORD(v522) = COERCE_UNSIGNED_INT((float)((float)(*(float *)&v523 * HFD_COLLISION_BOUNCE_ANGULAR_STRENGTH) * HFD_AIRFRAME_INVERSE_MOI) * v2) ^ v17;
    goto LABEL_226;
  }
LABEL_227:
  QuatMultiply(&this->m_RotationInertiaQuat, &this->m_RotationVelocity, &v627);
  v524 = *vec4_t::operator[](&v627, 0);
  *vec4_t::operator[](&this->m_RotationInertiaQuat, 0) = v524;
  v525 = *vec4_t::operator[](&v627, 1);
  *vec4_t::operator[](&this->m_RotationInertiaQuat, 1) = v525;
  v526 = *vec4_t::operator[](&v627, 2);
  *vec4_t::operator[](&this->m_RotationInertiaQuat, 2) = v526;
  v527 = *vec4_t::operator[](&v627, 3);
  *vec4_t::operator[](&this->m_RotationInertiaQuat, 3) = v527;
  v605 = *p_m_RotationInertiaQuat;
  FlightDynamics::ApplyRotationDragAroundAxis(&v605, &this->m_sideVector, HFD_AIRFRAME_ROTATION_CYCLIC_PITCH_DRAG, v2, &this->m_RotationInertiaQuat);
  v605 = *p_m_RotationInertiaQuat;
  FlightDynamics::ApplyRotationDragAroundAxis(&v605, &this->m_forwardVector, HFD_AIRFRAME_ROTATION_CYCLIC_AILERON_DRAG, v2, &this->m_RotationInertiaQuat);
  v605 = *p_m_RotationInertiaQuat;
  FlightDynamics::ApplyRotationDragAroundAxis(&v605, &this->m_upVector, HFD_AIRFRAME_ROTATION_TAIL_ROTOR_DRAG, v2, &this->m_RotationInertiaQuat);
  v528 = vec4_t::operator[](&this->m_RotationInertiaQuat, 0);
  if ( IS_NAN(*v528) || (v529 = vec4_t::operator[](&this->m_RotationInertiaQuat, 1), IS_NAN(*v529)) || (v530 = vec4_t::operator[](&this->m_RotationInertiaQuat, 2), IS_NAN(*v530)) || (v531 = vec4_t::operator[](&this->m_RotationInertiaQuat, 3), IS_NAN(*v531)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2848, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationInertiaQuat )[0] ) && !IS_NAN( ( m_RotationInertiaQuat )[1] ) && !IS_NAN( ( m_RotationInertiaQuat )[2] ) && !IS_NAN( ( m_RotationInertiaQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationInertiaQuat )[0] ) && !IS_NAN( ( m_RotationInertiaQuat )[1] ) && !IS_NAN( ( m_RotationInertiaQuat )[2] ) && !IS_NAN( ( m_RotationInertiaQuat )[3] )") )
      __debugbreak();
  }
  FlightDynamics::ExitSecondDerivativeMode(this);
  v532 = *vec4_t::operator[](&this->m_RotationQuaternion, 0);
  if ( IS_NAN(v532) || (v533 = *vec4_t::operator[](&this->m_RotationQuaternion, 1), IS_NAN(v533)) || (v534 = *vec4_t::operator[](&this->m_RotationQuaternion, 2), IS_NAN(v534)) || (v535 = *vec4_t::operator[](&this->m_RotationQuaternion, 3), IS_NAN(v535)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2852, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] )") )
      __debugbreak();
  }
  if ( HFD_USE_ADVANCED_MAIN_ROTOR )
  {
    v536 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_limiter, "fd_helicopter_altitude_limiter");
    if ( *(float *)&v536 < *vec3_t::operator[](&this->m_centerOfMassWs, 2) )
    {
      v537 = *vec3_t::operator[](&this->m_centerOfMassWs, 2) - *(float *)&v536;
      v538 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_altitude_limiter_range, "fd_helicopter_altitude_limiter_range");
      v539 = I_fclamp(v537 / *(float *)&v538, 0.0, 1.0);
      v4 = 1.0 - *(float *)&v539;
    }
    v540 = (float)((float)(v4 * HFD_MAIN_ROTOR_LIFT_MULTIPLIER) * HFD_AIRFRAME_INVERSE_MASS) * this->m_MainRotorAirflowLiftMultiplier;
    p_m_RotorAxis = &this->m_MainRotor;
  }
  else
  {
    p_m_RotorAxis = (FlightDynamicsRotorSystem *)&this->m_MainRotor.m_RotorAxis;
    v540 = (float)((float)(HFD_MAIN_BASIC_ROTOR_LIFT_STRENGTH * this->m_MainRotor.m_SwashplateCollective) * HFD_MAIN_ROTOR_LIFT_MULTIPLIER) * HFD_AIRFRAME_INVERSE_MASS;
  }
  Vec3Mad(&this->m_Velocity, v540 * v2, &p_m_RotorAxis->m_AirflowVelocity, &this->m_Velocity);
  v542 = (vec4_t *)&this->m_sideVector;
  if ( HFD_USE_ADVANCED_TAIL_ROTOR )
  {
    Vec3Mad(&this->m_TailRotor.m_AirflowVelocity, (float)(v560 * HFD_TAIL_ROTOR_AIRFLOW_FACTOR) * v2, (const vec3_t *)v542, (vec3_t *)&v605);
    v543 = HFD_TAIL_ROTOR_LIFT_MULTIPLIER * this->m_TailRotorAirflowLiftMultiplier;
    v542 = &v605;
  }
  else
  {
    v543 = (float)((float)((float)((float)(this->m_TailRotor.m_SwashplateCollective * this->m_TailRotorAirflowLiftMultiplier) * HFD_TAIL_ROTOR_RATIO) * HFD_TAIL_BASIC_ROTOR_LIFT_STRENGTH) * HFD_TAIL_BASIC_ROTOR_STRENGTH) * HFD_TAIL_ROTOR_LIFT_MULTIPLIER;
  }
  Vec3Mad(&this->m_Velocity, (float)(v543 * HFD_AIRFRAME_INVERSE_MASS) * v2, (const vec3_t *)v542, &this->m_Velocity);
  v544 = vec3_t::operator[](&this->m_Velocity, 0);
  if ( IS_NAN(*v544) || (v545 = vec3_t::operator[](&this->m_Velocity, 1), IS_NAN(*v545)) || (v546 = vec3_t::operator[](&this->m_Velocity, 2), IS_NAN(*v546)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 2885, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] )") )
      __debugbreak();
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fd_helicopter_force_stationary, "fd_helicopter_force_stationary") )
  {
    *vec3_t::operator[](&this->m_Velocity, 0) = 0.0;
    *vec3_t::operator[](&this->m_Velocity, 1) = 0.0;
    *vec3_t::operator[](&this->m_Velocity, 2) = 0.0;
    *vec3_t::operator[](&this->m_Velocity, 2) = 1.0;
    *vec4_t::operator[](&this->m_RotationInertiaQuat, 0) = 0.0;
    *vec4_t::operator[](&this->m_RotationInertiaQuat, 1) = 0.0;
    *vec4_t::operator[](&this->m_RotationInertiaQuat, 2) = 0.0;
    *vec4_t::operator[](&this->m_RotationInertiaQuat, 3) = 0.0;
    *vec4_t::operator[](&this->m_RotationInertiaQuat, 3) = 1.0;
  }
  if ( *vec3_t::operator[](&this->m_Position, 2) < -5000.0 )
    *vec3_t::operator[](&this->m_Velocity, 2) = 1000.0;
LABEL_256:
  Sys_ProfEndNamedEvent();
}

/*
==============
HelicopterDynamics::DebugDraw
==============
*/
void HelicopterDynamics::DebugDraw(HelicopterDynamics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  char _Buffer[128]; 

  if ( Sys_IsMainThread() && scrPlace && x && y && this->m_playerControlled )
  {
    *x = tabWidth + *x;
    *y = charHeight + *y;
    j_sprintf(_Buffer, "%f MPH - %f RPM - torque %f ", (float)(fsqrt((float)((float)(this->m_linearVelocityWs.v[0] * this->m_linearVelocityWs.v[0]) + (float)(this->m_linearVelocityWs.v[1] * this->m_linearVelocityWs.v[1])) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2])) * 0.056818184), this->m_MainRotor.m_RotorRPM, this->m_MainRotor.m_OpposingTorque);
    Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorWhiteFaded, 0, 1, 8.0, 0);
    *y = charHeight + *y;
  }
}

/*
==============
HelicopterDynamics::GetAngularPositionForRotorIndex
==============
*/
float HelicopterDynamics::GetAngularPositionForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  if ( !rotorIndex )
    return this->m_MainRotor.m_RotorPosition;
  if ( rotorIndex == 1 )
    return this->m_TailRotor.m_RotorPosition;
  return 0.0;
}

/*
==============
HelicopterDynamics::GetAngularPositionStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(HelicopterDynamics *this, int rotorIndex)
{
  float v2; 
  float m_MainRotorSwashplateDriverOffset; 
  float v4; 
  float v5; 
  float m_RotorPosition; 
  float v7; 
  float m_RotorRPM; 
  float v9; 
  float v10; 
  double v11; 
  double v12; 
  float v13; 

  v2 = HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR;
  m_MainRotorSwashplateDriverOffset = this->m_MainRotorSwashplateDriverOffset;
  v4 = HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
  LODWORD(v5) = LODWORD(HFD_GOVERNOR_MAX_SPEED) & _xmm;
  if ( rotorIndex == 1 )
  {
    v5 = HFD_GOVERNOR_MAX_SPEED * HFD_TAIL_ROTOR_RATIO;
    v2 = HFD_ROTOR_STROBE_MULTIPLIER_GOVERNOR_TAIL;
    v4 = HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
    m_MainRotorSwashplateDriverOffset = 0.0;
  }
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorPosition = this->m_TailRotor.m_RotorPosition;
    else
      m_RotorPosition = 0.0;
  }
  else
  {
    m_RotorPosition = this->m_MainRotor.m_RotorPosition;
  }
  v7 = (float)(m_RotorPosition + m_MainRotorSwashplateDriverOffset) * 6.0;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  if ( (float)(COERCE_FLOAT(LODWORD(m_RotorRPM) & _xmm) / HFD_ROTOR_STROBE_MULTIPLIER_HZ) <= v4 )
    return v7 * 0.16666667;
  v9 = HFD_ROTOR_STROBE_TIMING_EXPO;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      v10 = this->m_TailRotor.m_RotorRPM;
    else
      v10 = 0.0;
  }
  else
  {
    v10 = this->m_MainRotor.m_RotorRPM;
  }
  v11 = I_fclamp(v10 / v5, 0.0, 1.0);
  v12 = FD_ComputeExpo(*(float *)&v11, v9);
  *(float *)&v12 = fmodf_0((float)((float)((float)(1.0 - *(float *)&v12) * HFD_ROTOR_STROBE_MULTIPLIER_1HZ) + (float)(*(float *)&v12 * v2)) * v7, 360.0);
  v13 = *(float *)&v12 * 0.16666667;
  if ( *(float *)&v12 < 0.0 )
    return v13 + 60.0;
  return v13;
}

/*
==============
FlightDynamicsRotorSystem::GetAverageBladePitch
==============
*/
float FlightDynamicsRotorSystem::GetAverageBladePitch(FlightDynamicsRotorSystem *this)
{
  return this->m_AverageBladeTurbulence;
}

/*
==============
FlightDynamicsRotorSystem::GetAveragePitchChange
==============
*/
float FlightDynamicsRotorSystem::GetAveragePitchChange(FlightDynamicsRotorSystem *this)
{
  return this->m_AveragePitchChange;
}

/*
==============
HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int v6; 
  int m_BladeCount; 
  float m_RotorRPM; 
  float v9; 
  bool v10; 
  bool v11; 
  double AngularPositionStrobeForRotorIndex; 
  float v13; 
  float v14; 
  __int128 m_RotorPosition_low; 
  __int128 v17; 

  v6 = 2;
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
  if ( m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1317, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_9:
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      goto LABEL_16;
    v6 = this->m_TailRotor.m_BladeCount;
  }
  else
  {
    v6 = this->m_MainRotor.m_BladeCount;
  }
  if ( v6 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1271, ASSERT_TYPE_ASSERT, "(numberOfBlades > 1)", (const char *)&queryFormat, "numberOfBlades > 1") )
    __debugbreak();
LABEL_16:
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  v9 = COERCE_FLOAT(LODWORD(m_RotorRPM) & _xmm) / HFD_ROTOR_STROBE_MULTIPLIER_HZ;
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      return (float)bladeIndex * (float)(360.0 / (float)m_BladeCount);
    v10 = v9 < HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
    v11 = v9 == HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
  }
  else
  {
    v10 = v9 < HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
    v11 = v9 == HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
  }
  if ( !v10 && !v11 )
  {
    AngularPositionStrobeForRotorIndex = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(this, rotorIndex);
    v13 = *(float *)&AngularPositionStrobeForRotorIndex * 6.0;
    fmodf_0(*(float *)&AngularPositionStrobeForRotorIndex * 6.0, 360.0);
    v14 = v13;
    if ( rotorIndex )
      m_RotorPosition_low = LODWORD(this->m_TailRotor.m_RotorPosition);
    else
      m_RotorPosition_low = LODWORD(this->m_MainRotor.m_RotorPosition);
    v17 = m_RotorPosition_low;
    *(float *)&v17 = fmodf_0(*(float *)&m_RotorPosition_low * 6.0, 360.0) - v14;
    _XMM1 = v17;
    if ( *(float *)&v17 < -0.0099999998 )
    {
      *(float *)&_XMM2 = *(float *)&v17 + 360.0;
    }
    else
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm2, xmm1, xmm6, xmm0
      }
    }
    bladeIndex -= (int)(float)((float)((float)v6 * *(float *)&_XMM2) * 0.0027777778);
    if ( bladeIndex < v6 )
    {
      if ( bladeIndex < 0 )
        bladeIndex += v6;
    }
    else
    {
      bladeIndex -= v6;
    }
  }
  return (float)bladeIndex * (float)(360.0 / (float)m_BladeCount);
}

/*
==============
HelicopterDynamics::GetBladeDeflectionForRotorIndex
==============
*/
float HelicopterDynamics::GetBladeDeflectionForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int m_BladeCount; 
  double AngularPositionStrobeForRotorIndex; 
  float v8; 
  float v9; 
  __int128 m_RotorPosition_low; 
  __int128 v12; 
  float v15; 
  int v16; 
  int v17; 
  float m_RotorRPM; 
  int v19; 
  float result; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  __int64 v26; 

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
  AngularPositionStrobeForRotorIndex = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(this, rotorIndex);
  v8 = *(float *)&AngularPositionStrobeForRotorIndex * 6.0;
  fmodf_0(*(float *)&AngularPositionStrobeForRotorIndex * 6.0, 360.0);
  v9 = v8;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorPosition_low = LODWORD(this->m_TailRotor.m_RotorPosition);
    else
      m_RotorPosition_low = 0i64;
  }
  else
  {
    m_RotorPosition_low = LODWORD(this->m_MainRotor.m_RotorPosition);
  }
  v12 = m_RotorPosition_low;
  *(float *)&v12 = fmodf_0(*(float *)&m_RotorPosition_low * 6.0, 360.0) - v9;
  _XMM1 = v12;
  if ( *(float *)&v12 < -0.0099999998 )
  {
    *(float *)&_XMM2 = *(float *)&v12 + 360.0;
  }
  else
  {
    __asm
    {
      vcmpltss xmm0, xmm1, xmm6
      vblendvps xmm2, xmm1, xmm6, xmm0
    }
  }
  v15 = (float)((float)m_BladeCount * *(float *)&_XMM2) * 0.0027777778;
  v16 = (int)v15;
  v17 = bladeIndex - (int)v15;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  v19 = v17 + 1;
  if ( m_RotorRPM >= -0.001 )
    v19 = v17 - 1;
  if ( v17 < m_BladeCount )
  {
    if ( v17 < 0 )
      v17 += m_BladeCount;
  }
  else
  {
    v17 -= m_BladeCount;
  }
  if ( v19 < m_BladeCount )
  {
    if ( v19 < 0 )
      v19 += m_BladeCount;
  }
  else
  {
    v19 -= m_BladeCount;
  }
  if ( (unsigned int)v17 >= 6 )
  {
    LODWORD(v25) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1482, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v19 >= 6 )
  {
    LODWORD(v26) = 6;
    LODWORD(v25) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedNextBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedNextBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  if ( (unsigned int)bladeIndex >= 6 )
  {
    LODWORD(v26) = 6;
    LODWORD(v25) = bladeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1484, ASSERT_TYPE_ASSERT, "(unsigned)( bladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "bladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  result = 0.0;
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      return result;
    v21 = 1.0 - (float)(v15 - (float)v16);
    v22 = (float)(1.0 - v21) * this->m_TailRotor.m_RotorBlades[v19].m_BladeDeflection;
    v23 = v21 * this->m_TailRotor.m_RotorBlades[v17].m_BladeDeflection;
  }
  else
  {
    v24 = 1.0 - (float)(v15 - (float)v16);
    v22 = (float)(1.0 - v24) * this->m_MainRotor.m_RotorBlades[v19].m_BladeDeflection;
    v23 = v24 * this->m_MainRotor.m_RotorBlades[v17].m_BladeDeflection;
  }
  return v22 + v23;
}

/*
==============
HelicopterDynamics::GetBladeIndexStrobeForRotorIndex
==============
*/
__int64 HelicopterDynamics::GetBladeIndexStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  int m_BladeCount; 
  float m_RotorRPM; 
  float v8; 
  bool v9; 
  bool v10; 
  double AngularPositionStrobeForRotorIndex; 
  float v12; 
  float v13; 
  __int128 m_RotorPosition_low; 
  __int128 v16; 

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
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  v8 = COERCE_FLOAT(LODWORD(m_RotorRPM) & _xmm) / HFD_ROTOR_STROBE_MULTIPLIER_HZ;
  if ( rotorIndex )
  {
    if ( rotorIndex != 1 )
      return (unsigned int)bladeIndex;
    v9 = v8 < HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
    v10 = v8 == HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
  }
  else
  {
    v9 = v8 < HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
    v10 = v8 == HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
  }
  if ( !v9 && !v10 )
  {
    AngularPositionStrobeForRotorIndex = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(this, rotorIndex);
    v12 = *(float *)&AngularPositionStrobeForRotorIndex * 6.0;
    fmodf_0(*(float *)&AngularPositionStrobeForRotorIndex * 6.0, 360.0);
    v13 = v12;
    if ( rotorIndex )
      m_RotorPosition_low = LODWORD(this->m_TailRotor.m_RotorPosition);
    else
      m_RotorPosition_low = LODWORD(this->m_MainRotor.m_RotorPosition);
    v16 = m_RotorPosition_low;
    *(float *)&v16 = fmodf_0(*(float *)&m_RotorPosition_low * 6.0, 360.0) - v13;
    _XMM1 = v16;
    if ( *(float *)&v16 < -0.0099999998 )
    {
      *(float *)&_XMM2 = *(float *)&v16 + 360.0;
    }
    else
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm2, xmm1, xmm6, xmm0
      }
    }
    bladeIndex -= (int)(float)((float)((float)m_BladeCount * *(float *)&_XMM2) * 0.0027777778);
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
  return (unsigned int)bladeIndex;
}

/*
==============
HelicopterDynamics::GetBladePitchForRotorIndex
==============
*/
float HelicopterDynamics::GetBladePitchForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  if ( !rotorIndex )
    return this->m_MainRotor.m_RotorBlades[bladeIndex].m_BladePitch;
  if ( rotorIndex == 1 )
    return this->m_TailRotor.m_RotorBlades[bladeIndex].m_BladePitch;
  return 0.0;
}

/*
==============
HelicopterDynamics::GetBladePitchStrobeForRotorIndex
==============
*/
float HelicopterDynamics::GetBladePitchStrobeForRotorIndex(HelicopterDynamics *this, int bladeIndex, int rotorIndex)
{
  __int64 v5; 
  int m_BladeCount; 
  double AngularPositionStrobeForRotorIndex; 
  float v8; 
  float v9; 
  __int128 m_RotorPosition_low; 
  __int128 v12; 
  int v15; 
  float m_RotorRPM; 
  int v17; 
  int v18; 
  float v19; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  __int64 v25; 
  __int64 v26; 

  v5 = bladeIndex;
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
  AngularPositionStrobeForRotorIndex = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(this, rotorIndex);
  v8 = *(float *)&AngularPositionStrobeForRotorIndex * 6.0;
  fmodf_0(*(float *)&AngularPositionStrobeForRotorIndex * 6.0, 360.0);
  v9 = v8;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorPosition_low = LODWORD(this->m_TailRotor.m_RotorPosition);
    else
      m_RotorPosition_low = 0i64;
  }
  else
  {
    m_RotorPosition_low = LODWORD(this->m_MainRotor.m_RotorPosition);
  }
  v12 = m_RotorPosition_low;
  *(float *)&v12 = fmodf_0(*(float *)&m_RotorPosition_low * 6.0, 360.0) - v9;
  _XMM1 = v12;
  if ( *(float *)&v12 < -0.0099999998 )
  {
    *(float *)&_XMM2 = *(float *)&v12 + 360.0;
  }
  else
  {
    __asm
    {
      vcmpltss xmm0, xmm1, xmm8
      vblendvps xmm2, xmm1, xmm8, xmm0
    }
  }
  v15 = (int)(float)((float)((float)m_BladeCount * *(float *)&_XMM2) * 0.0027777778);
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  v17 = v5 - v15;
  v18 = v5 - v15 + 1;
  if ( m_RotorRPM >= -0.001 )
    v18 = v5 - v15 - 1;
  if ( v17 < m_BladeCount )
  {
    if ( v17 < 0 )
      v17 += m_BladeCount;
  }
  else
  {
    v17 -= m_BladeCount;
  }
  if ( v18 < m_BladeCount )
  {
    if ( v18 < 0 )
      v18 += m_BladeCount;
  }
  else
  {
    v18 -= m_BladeCount;
  }
  if ( (unsigned int)v17 >= 6 )
  {
    LODWORD(v25) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1374, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= 6 )
  {
    LODWORD(v26) = 6;
    LODWORD(v25) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1375, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedNextBladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "adjustedNextBladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 6 )
  {
    LODWORD(v26) = 6;
    LODWORD(v25) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( bladeIndex ) < (unsigned)( ( sizeof( *array_counter( m_MainRotor.m_RotorBlades ) ) + 0 ) )", "bladeIndex doesn't index m_MainRotor.m_RotorBlades\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v19 = COERCE_FLOAT(LODWORD(m_RotorRPM) & _xmm) / HFD_ROTOR_STROBE_MULTIPLIER_HZ;
  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
    {
      if ( v19 <= HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL )
      {
        return this->m_TailRotor.m_RotorBlades[v5].m_BladePitch;
      }
      else
      {
        v21 = atanf_0(this->m_TailRotor.m_RotorBlades[v17].m_BladeDeflection - this->m_TailRotor.m_RotorBlades[v18].m_BladeDeflection) * HFD_ROTOR_STROBE_DISK_BLEND_PITCH;
        v22 = I_fclamp(v19 - 1.0, 0.0, HFD_ROTOR_STROBE_PITCH_MULTIPLIER);
        return (float)((float)(1.0 - *(float *)&v22) * this->m_TailRotor.m_RotorBlades[v5].m_BladePitch) + (float)(*(float *)&v22 * v21);
      }
    }
    else
    {
      return 0.0;
    }
  }
  else if ( v19 <= HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE )
  {
    return this->m_MainRotor.m_RotorBlades[v5].m_BladePitch;
  }
  else
  {
    v23 = atanf_0(this->m_MainRotor.m_RotorBlades[v17].m_BladeDeflection - this->m_MainRotor.m_RotorBlades[v18].m_BladeDeflection) * HFD_ROTOR_STROBE_DISK_BLEND_PITCH;
    v24 = I_fclamp(v19 - 1.0, 0.0, HFD_ROTOR_STROBE_PITCH_MULTIPLIER);
    return (float)((float)(1.0 - *(float *)&v24) * this->m_MainRotor.m_RotorBlades[v5].m_BladePitch) + (float)(*(float *)&v24 * v23);
  }
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
  FlightDynamicCameraData *CameraCurrentData; 

  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  if ( !FlightDynamicsManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 868, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
    __debugbreak();
  LocalClientForWorld = Physics_GetLocalClientForWorld(this->m_worldId);
  CameraCurrentData = FlightDynamicsManager::GetCameraCurrentData(FlightDynamicsManager, LocalClientForWorld);
  if ( CameraCurrentData )
    return CameraCurrentData->fovDeltaCurrent;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 871, ASSERT_TYPE_ASSERT, "(fdLocalCameraData)", (const char *)&queryFormat, "fdLocalCameraData") )
    __debugbreak();
  return MEMORY[0x110];
}

/*
==============
HelicopterDynamics::GetMaxGovernorSpeed
==============
*/
float HelicopterDynamics::GetMaxGovernorSpeed(HelicopterDynamics *this)
{
  return HFD_GOVERNOR_MAX_SPEED;
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
  if ( !rotorIndex )
    return this->m_MainRotor.m_RotorRPM;
  if ( rotorIndex == 1 )
    return this->m_TailRotor.m_RotorRPM;
  return 0.0;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularPosition
==============
*/
float FlightDynamicsRotorSystem::GetRotorAngularPosition(FlightDynamicsRotorSystem *this)
{
  return this->m_RotorPosition;
}

/*
==============
FlightDynamicsRotorSystem::GetRotorAngularRPM
==============
*/
float FlightDynamicsRotorSystem::GetRotorAngularRPM(FlightDynamicsRotorSystem *this)
{
  return this->m_RotorRPM;
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
  double v13; 
  double v14; 
  double v15; 
  double v16; 

  v13 = I_fclamp(this->m_MainRotor.m_RotorRPM / HFD_GOVERNOR_MAX_SPEED, 0.0, 1.0);
  *outRpmNormal = *(float *)&v13;
  v14 = I_fclamp(this->m_TurbineTorque / HFD_TURBINE_MAX_TORQUE, 0.0, 1.0);
  *outThrottle = *(float *)&v14;
  v15 = I_fclamp(this->m_MainRotor.m_AverageBladeTurbulence + this->m_MainRotor.m_AveragePitchChange, -1.0, 1.0);
  *outGear = *(float *)&v15;
  *outBrake = this->m_TurbineRPM * 0.000019999999;
  v16 = I_fclamp(this->m_TailRotor.m_AverageBladeTurbulence + this->m_TailRotor.m_AveragePitchChange, -1.0, 1.0);
  *outMph = *(float *)&v16;
  *outTurbineStart = this->m_TurbineAudioIgniter;
  *outTurbineStop = this->m_TurbineAudioShutdown;
  *outPosition = this->m_TailRotor.m_Position;
}

/*
==============
HelicopterDynamics::GetStrobeEffectToggle
==============
*/
bool HelicopterDynamics::GetStrobeEffectToggle(HelicopterDynamics *this, int rotorIndex)
{
  float m_RotorRPM; 
  float v3; 

  if ( rotorIndex )
  {
    if ( rotorIndex == 1 )
      m_RotorRPM = this->m_TailRotor.m_RotorRPM;
    else
      m_RotorRPM = 0.0;
  }
  else
  {
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  }
  v3 = COERCE_FLOAT(LODWORD(m_RotorRPM) & _xmm) / HFD_ROTOR_STROBE_MULTIPLIER_HZ;
  if ( !rotorIndex )
    return v3 > HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE;
  if ( rotorIndex == 1 )
    return v3 > HFD_ROTOR_STROBE_MIN_HERTZ_TOGGLE_TAIL;
  return 0;
}

/*
==============
HelicopterDynamics::InitializeHelicopterRotors
==============
*/
void HelicopterDynamics::InitializeHelicopterRotors(HelicopterDynamics *this)
{
  float v2; 
  float v3; 
  const dvar_t *v4; 

  FlightDynamicsRotorSystem::SetupRotor(&this->m_MainRotor, 5, 0.039370101 * HFD_MAIN_ROTOR_BLADE_LENGTH, 0.039370101 * HFD_MAIN_ROTOR_BLADE_WIDTH, HFD_MAIN_ROTOR_BLADE_WEIGHT, HFD_BLADE_MAX_DEFLECTION_MAIN, 0.0, 0.0, 0.0, this->m_worldId);
  v2 = HFD_CONTROL_INPUT_DAMPER_COLLECTIVE;
  this->m_MainRotor.m_SwasplateCyclicRate = HFD_CONTROL_INPUT_MULTI;
  this->m_MainRotor.m_SwasplateCollectiveRate = v2;
  FlightDynamicsRotorSystem::SetupRotor(&this->m_TailRotor, 2, 0.039370101 * HFD_TAIL_ROTOR_BLADE_LENGTH, 0.039370101 * HFD_TAIL_ROTOR_BLADE_WIDTH, HFD_TAIL_ROTOR_BLADE_WEIGHT, HFD_BLADE_MAX_DEFLECTION_TAIL, 0.0, 0.0, 90.0, this->m_worldId);
  v3 = HFD_CONTROL_INPUT_MULTI;
  this->m_TailRotor.m_SwasplateCollectiveRate = HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR;
  this->m_TailRotor.m_SwasplateCyclicRate = v3;
  this->m_NumberOfRotors = 2;
  Dvar_SetFloat_Internal(DVARFLT_fd_helicopter_swash_driver, 9.0);
  v4 = DVARFLT_fd_helicopter_swash_driver;
  if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  LODWORD(this->m_MainRotorSwashplateDriverOffset) = v4->current.integer;
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
  return HFD_FUSELAGE_LANDED_THRESHOLD > this->m_LandingTimer;
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
  char v6; 
  char v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v15; 
  char v22; 
  char v23; 
  const dvar_t *v24; 
  FlightDynamicsManager *FlightDynamicsManager; 
  bool m_Use1stPerson; 
  char v27; 
  char pitchmove; 

  BgVehiclePhysics::UpdateHornInputControls(this, cmd, 4u, 0x2000u);
  v6 = -(char)(cmd->rightmove + cmd->remoteControlMove[1]);
  v7 = cmd->forwardmove + cmd->remoteControlMove[0];
  v27 = cmd->remoteControlMove[2];
  v8 = (float)cmd->remoteControlAngles[0];
  v9 = (float)cmd->remoteControlAngles[1];
  if ( (cmd->buttons & 0x8000000000000i64) == 0 )
  {
    v10 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
    if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v11 = LODWORD(FLOAT_10_0);
      *(double *)&v11 = FD_ComputeExpo(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 * 0.0078740157) & _xmm));
      v12 = v11;
      *(float *)&v12 = *(float *)&v11 - 1.0;
      v13 = LODWORD(FLOAT_10_0);
      *(double *)&v13 = FD_ComputeExpo(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 * 0.0078740157) & _xmm));
      _XMM1 = v12 ^ _xmm;
      v15 = v13;
      *(float *)&v15 = *(float *)&v13 - 1.0;
      _XMM8 = 0i64;
      __asm
      {
        vcmpless xmm0, xmm8, xmm15
        vblendvps xmm0, xmm1, xmm9, xmm0; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -1.0, 1.0);
      v8 = *(float *)&_XMM0 * 127.0;
      __asm { vcmpless xmm0, xmm8, [rsp+0E8h+arg_8] }
      _XMM3 = v15 ^ _xmm;
      __asm { vblendvps xmm0, xmm3, xmm10, xmm0; val }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -1.0, 1.0);
      v9 = *(float *)&_XMM0 * 127.0;
    }
  }
  v22 = -cmd->yawmove;
  pitchmove = cmd->pitchmove;
  v23 = -((cmd->buttons & 0x200) != 0);
  if ( (cmd->buttons & 0x1000) != 0 )
  {
    v24 = DVARBOOL_fd_helicopter_debug_cockpit;
    if ( !DVARBOOL_fd_helicopter_debug_cockpit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_debug_cockpit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v27) & _xmm) < 0.001 )
    {
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      if ( FlightDynamicsManager->m_Use1stPerson == BG_GetFlightDynamicsManager()->m_Prefer1stPerson )
      {
        m_Use1stPerson = BG_GetFlightDynamicsManager()->m_Use1stPerson;
        BG_GetFlightDynamicsManager()->m_Prefer1stPerson = !m_Use1stPerson;
      }
    }
  }
  rawControlInputs[2] = (float)v27;
  rawControlInputs[5] = (float)v7;
  rawControlInputs[6] = (float)v23 * 127.0;
  *rawControlInputs = (float)v6;
  rawControlInputs[3] = (float)v22 - v9;
  rawControlInputs[1] = (float)pitchmove + v8;
  rawControlInputs[11] = (float)((LODWORD(cmd->buttons) >> 9) & 1);
  this->m_controls.externalValues[2] = 0.0078740157 * this->m_ControlInputsRaw[0];
  this->m_controls.playerValues[2] = 0.0078740157 * this->m_ControlInputsRaw[0];
  this->m_controls.externalValues[0] = 0.0078740157 * this->m_ControlInputsRaw[5];
  this->m_controls.playerValues[0] = 0.0078740157 * this->m_ControlInputsRaw[5];
  this->m_controls.externalValues[1] = 0.0078740157 * this->m_ControlInputsRaw[3];
  this->m_controls.playerValues[1] = 0.0078740157 * this->m_ControlInputsRaw[3];
  this->m_controls.externalValues[3] = 0.0078740157 * this->m_ControlInputsRaw[6];
  this->m_controls.playerValues[3] = 0.0078740157 * this->m_ControlInputsRaw[6];
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
void HelicopterDynamics::PerformAutomaticControl(HelicopterDynamics *this, float dT)
{
  const dvar_t *v4; 
  FlightDynamicsManager *FlightDynamicsManager; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  float m_RotorRPM; 
  const dvar_t *v16; 
  float v17; 
  bool m_EnableFlyByWire; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  FlightDynamicsManager *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  bool v25; 
  float v26; 
  float m_ManualControlTimer; 
  float v28; 
  vec4_t v29[8]; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::PerformAutomaticControl");
  *(_WORD *)&this->m_TurbineAudioIgniter = 0;
  if ( this->m_playerControlled )
  {
    if ( !this->m_PreviousUserControlled )
      goto LABEL_12;
    v4 = DVARINT_fd_helicopter_turbine_mode;
    if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer == 2 && !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
    {
LABEL_12:
      *(_WORD *)&this->m_TurbineStarter = 257;
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      QuatTransform(&this->m_RotationQuaternion, &FlightDynamicsManager->m_ForwardAxis, &this->m_GyroRudderForwardVector);
      this->m_GyroAltitude = this->m_centerOfMassWs.v[2];
    }
    this->m_EnableFlyByWire = 1;
  }
  else if ( this->m_PreviousUserControlled )
  {
    if ( this->m_GovernorRPM > 1.0 )
      this->m_TurbineAudioShutdown = 1;
    this->m_TurbineStarter = 0;
    this->m_EnableFlyByWire = 0;
    this->m_GovernorRPM = 0.0;
  }
  if ( !this->m_TurbineStarter && (float)(HFD_GOVERNOR_MAX_SPEED * 0.5) > this->m_GovernorRPM && !this->m_playerControlled )
  {
    v6 = this->m_Velocity.v[0];
    v7 = (float)((float)(HFD_AIRFRAME_INVERSE_MASS * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED) * v6) * dT;
    if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= COERCE_FLOAT(LODWORD(v6) & _xmm) )
      v8 = v6 - v7;
    else
      v8 = 0.0;
    this->m_Velocity.v[0] = v8;
    v9 = this->m_Velocity.v[1];
    v10 = (float)((float)(HFD_AIRFRAME_INVERSE_MASS * HFD_USE_ENHANCED_FBW_RESPONSE_DRAG_SPEED) * v9) * dT;
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) <= COERCE_FLOAT(LODWORD(v9) & _xmm) )
      v11 = v9 - v10;
    else
      v11 = 0.0;
    this->m_Velocity.v[1] = v11;
  }
  v12 = DVARINT_fd_helicopter_allow_autostarter;
  if ( !DVARINT_fd_helicopter_allow_autostarter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_allow_autostarter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.integer )
    goto LABEL_32;
  v13 = DVARINT_fd_helicopter_turbine_mode;
  if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer == 1 )
  {
LABEL_32:
    if ( !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
    {
      Com_PrintWarning(16, "[HelicopterDynamics::PerformAutomaticControl] - Turbine was forced to stop via using the dVars. DON'T DO THIS EXCEPT FOR DEBUGGING PURPOSES!");
      this->m_TurbineStarter = 0;
      this->m_GovernorRPM = 0.0;
    }
  }
  if ( this->m_TurbineStarter )
    goto LABEL_40;
  v14 = DVARINT_fd_helicopter_turbine_mode;
  if ( !DVARINT_fd_helicopter_turbine_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_turbine_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer == 2 && !HFD_IGNORE_DVAR_TURBINE_MANAGEMENT )
  {
LABEL_40:
    m_RotorRPM = this->m_MainRotor.m_RotorRPM;
    v16 = DVARFLT_fd_helicopter_start_spoolup_speed;
    if ( !DVARFLT_fd_helicopter_start_spoolup_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spoolup_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    this->m_MainRotor.m_RotorRPM = (float)((float)(1.0 - (float)(dT * v16->current.value)) * m_RotorRPM) + (float)((float)(dT * v16->current.value) * HFD_GOVERNOR_MAX_SPEED);
    if ( m_RotorRPM > (float)(HFD_GOVERNOR_MAX_SPEED - 10.0) )
      this->m_TurbineStarter = 0;
    if ( m_RotorRPM <= (float)(HFD_GOVERNOR_MAX_SPEED - 200.0) )
    {
      v29[0] = this->m_RotationInertiaQuat;
      FlightDynamics::ApplyRotationDragAroundAxis(v29, &this->m_sideVector, 10.0, dT, &this->m_RotationInertiaQuat);
      v29[0] = this->m_RotationInertiaQuat;
      FlightDynamics::ApplyRotationDragAroundAxis(v29, &this->m_forwardVector, 10.0, dT, &this->m_RotationInertiaQuat);
      v29[0] = this->m_RotationInertiaQuat;
      FlightDynamics::ApplyRotationDragAroundAxis(v29, &this->m_upVector, 10.0, dT, &this->m_RotationInertiaQuat);
    }
    else
    {
      v17 = this->m_centerOfMassWs.v[2];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_GyroAltitude - v17) & _xmm) > 0.001 )
      {
        this->m_GyroAltitude = v17;
        this->m_GyroAltitudeSet = 1;
      }
      m_EnableFlyByWire = this->m_EnableFlyByWire;
      if ( m_EnableFlyByWire )
      {
        this->m_ManualControlTimer = 0.0;
        this->m_PreviousEnableFlyByWire = m_EnableFlyByWire;
      }
      this->m_GovernorRPM = HFD_GOVERNOR_MAX_SPEED;
    }
    if ( m_RotorRPM > (float)(HFD_GOVERNOR_MAX_SPEED - HFD_FBW_GOVERNOR_OPERATING_RPM_THRESHOLD) )
    {
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_turbine_mode, 0);
      v19 = DVARBOOL_fd_helicopter_start_autotakeoff;
      if ( !DVARBOOL_fd_helicopter_start_autotakeoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_autotakeoff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        v20 = DVARFLT_fd_helicopter_start_autotakeoff_height;
        if ( !DVARFLT_fd_helicopter_start_autotakeoff_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_autotakeoff_height") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        this->m_GyroAltitude = v20->current.value + this->m_GyroAltitude;
        this->m_GyroAltitudeSet = 1;
      }
    }
  }
  v21 = DVARINT_fd_helicopter_start_spooled;
  if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer && !this->m_PreviousUserControlled )
  {
    v22 = BG_GetFlightDynamicsManager();
    QuatTransform(&this->m_RotationQuaternion, &v22->m_ForwardAxis, &this->m_GyroRudderForwardVector);
    this->m_GyroAltitude = this->m_centerOfMassWs.v[2];
    this->m_GyroAltitudeSet = 0;
    this->m_GyroGPSlocation.v[0] = this->m_centerOfMassWs.v[0];
    this->m_GyroGPSlocation.v[1] = this->m_centerOfMassWs.v[1];
    this->m_GyroGPSlocation.v[2] = this->m_centerOfMassWs.v[2];
    this->m_GyroGPSlocationSet = 0;
  }
  v23 = DVARFLT_fd_helicopter_force_rotor_rpm;
  if ( !DVARFLT_fd_helicopter_force_rotor_rpm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_force_rotor_rpm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.value > 0.0099999998 )
  {
    Com_PrintWarning(16, "[HelicopterDynamics::PerformAutomaticControl] - Turbine was forced to fixed RPM using dVars. DON'T DO THIS EXCEPT FOR DEBUGGING PURPOSES!");
    v24 = DVARFLT_fd_helicopter_force_rotor_rpm;
    if ( !DVARFLT_fd_helicopter_force_rotor_rpm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_force_rotor_rpm") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    this->m_MainRotor.m_RotorRPM = v24->current.value;
  }
  this->m_PreviousUserControlled = this->m_playerControlled;
  v25 = this->m_EnableFlyByWire;
  if ( v25 != this->m_PreviousEnableFlyByWire )
  {
    if ( v25 )
    {
      v26 = dT * HFD_FBW_TRANSITION_TIME_ENABLE;
      m_ManualControlTimer = this->m_ManualControlTimer;
      this->m_ManualControlTimer = m_ManualControlTimer - (float)(dT * HFD_FBW_TRANSITION_TIME_ENABLE);
      if ( (float)(m_ManualControlTimer - v26) >= 0.0 )
        goto LABEL_84;
      this->m_ManualControlTimer = 0.0;
      goto LABEL_83;
    }
    this->m_FBWControlInputs[5] = -1.0;
    if ( this->m_Velocity.v[2] > 0.0 )
      this->m_Velocity.v[2] = 0.0;
    v28 = (float)(dT * HFD_FBW_TRANSITION_TIME_DISABLE) + this->m_ManualControlTimer;
    this->m_ManualControlTimer = v28;
    if ( v28 > 1.0 )
    {
      this->m_ManualControlTimer = 1.0;
      v25 = this->m_EnableFlyByWire;
LABEL_83:
      this->m_PreviousEnableFlyByWire = v25;
    }
  }
LABEL_84:
  if ( !this->m_inputControlsEnabled )
  {
    if ( this->m_GovernorRPM > 1.0 )
      this->m_TurbineAudioShutdown = 1;
    this->m_ManualControlTimer = 1.0;
    this->m_TurbineStarter = 0;
    this->m_EnableFlyByWire = 0;
    this->m_GovernorRPM = 0.0;
  }
  Sys_ProfEndNamedEvent();
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
void HelicopterDynamics::PerformThrusterControl(HelicopterDynamics *this, float dT)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v22; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  vec3_t v30; 
  __int64 v31; 
  vec3_t v32; 
  vec3_t v33; 
  vec3_t v34; 

  v31 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "HelicopterDynamics::PerformThrusterControl");
  v4 = (float)(dT * HFD_GRAVITY_CORRECTOR) + this->m_Velocity.v[2];
  this->m_Velocity.v[2] = v4;
  v5 = this->m_Velocity.v[1];
  v6 = v4;
  if ( (float)((float)((float)(this->m_Velocity.v[0] * this->m_Velocity.v[0]) + (float)(v5 * v5)) + (float)(v6 * v6)) > 12390400.0 )
  {
    *(_QWORD *)this->m_Velocity.v = 0i64;
    this->m_Velocity.v[2] = 0.0;
    v6 = 0.0;
    v5 = this->m_Velocity.v[1];
  }
  v7 = this->m_forwardVector.v[0];
  v8 = this->m_Velocity.v[0];
  v9 = this->m_forwardVector.v[2];
  v10 = (float)((float)(v8 * v7) + (float)(v5 * this->m_forwardVector.v[1])) + (float)(v9 * v6);
  v12 = LODWORD(v7);
  *(float *)&v12 = v7 * v10;
  _XMM10 = v12;
  v32.v[2] = v9 * v10;
  v13 = this->m_upVector.v[0];
  v14 = this->m_upVector.v[2];
  v15 = (float)((float)(this->m_upVector.v[1] * v5) + (float)(v13 * v8)) + (float)(v14 * v6);
  v17 = LODWORD(v13);
  *(float *)&v17 = v13 * v15;
  _XMM11 = v17;
  v33.v[2] = v14 * v15;
  v18 = this->m_sideVector.v[0];
  v19 = this->m_sideVector.v[2];
  v20 = (float)((float)(this->m_sideVector.v[1] * v5) + (float)(v18 * v8)) + (float)(v19 * v6);
  v22 = LODWORD(v18);
  *(float *)&v22 = v18 * v20;
  _XMM7 = v22;
  v34.v[2] = v19 * v20;
  __asm { vunpcklps xmm1, xmm10, xmm8 }
  *(double *)v32.v = *(double *)&_XMM1;
  *(double *)v30.v = *(double *)&_XMM1;
  v30.v[2] = v32.v[2];
  FlightDynamics::CalculateAeroDrag(&v30, HFD_AIRFRAME_INVERSE_MASS * HFD_AIRFRAME_DRAG_FORWARD, dT, &v32);
  __asm { vunpcklps xmm0, xmm11, xmm9 }
  *(double *)v33.v = *(double *)&_XMM0;
  *(double *)v30.v = *(double *)&_XMM0;
  v30.v[2] = v33.v[2];
  FlightDynamics::CalculateAeroDrag(&v30, HFD_AIRFRAME_DRAG_VERTICAL * HFD_AIRFRAME_INVERSE_MASS, dT, &v33);
  __asm { vunpcklps xmm0, xmm7, xmm6 }
  *(double *)v34.v = *(double *)&_XMM0;
  *(double *)v30.v = *(double *)&_XMM0;
  v30.v[2] = v34.v[2];
  FlightDynamics::CalculateAeroDrag(&v30, HFD_AIRFRAME_DRAG_SIDEWAYS * HFD_AIRFRAME_INVERSE_MASS, dT, &v34);
  v26 = (float)(v32.v[0] + v33.v[0]) + v34.v[0];
  v27 = (float)(v32.v[1] + v33.v[1]) + v34.v[1];
  v28 = (float)(v32.v[2] + v33.v[2]) + v34.v[2];
  this->m_Velocity.v[0] = v26;
  this->m_Velocity.v[1] = v27;
  this->m_Velocity.v[2] = v28;
  v29 = v26;
  if ( (LODWORD(v26) & 0x7F800000) == 2139095040 || (v29 = v27, (LODWORD(v27) & 0x7F800000) == 2139095040) || (v29 = v28, (LODWORD(v28) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3195, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_Velocity )[0] ) && !IS_NAN( ( m_Velocity )[1] ) && !IS_NAN( ( m_Velocity )[2] )", v29) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
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
  float v2; 
  float v3; 
  float v4; 

  v2 = airspeedVector->v[1];
  v3 = airspeedVector->v[0];
  v4 = airspeedVector->v[2];
  if ( (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) < 151782400.0 )
  {
    this->m_AirspeedVector.v[0] = v3;
    this->m_AirspeedVector.v[1] = v2;
    this->m_AirspeedVector.v[2] = v4;
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
void FlightDynamicsRotorSystem::SetRotorAngularPosition(FlightDynamicsRotorSystem *this, float angularPosition)
{
  this->m_RotorPosition = angularPosition;
}

/*
==============
FlightDynamicsRotorSystem::SetRotorAngularRPM
==============
*/
void FlightDynamicsRotorSystem::SetRotorAngularRPM(FlightDynamicsRotorSystem *this, float rpm)
{
  this->m_RotorRPM = rpm;
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
void FlightDynamicsRotorSystem::SetSwashplate(FlightDynamicsRotorSystem *this, float cyclicForward, float cyclicLateral, float collective)
{
  this->m_SwashplateCyclicForward = cyclicForward;
  this->m_SwashplateCyclicLateral = cyclicLateral;
  this->m_SwashplateCollective = collective;
  if ( (LODWORD(cyclicForward) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3584, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicForward ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicForward )") )
    __debugbreak();
  if ( (LODWORD(this->m_SwashplateCyclicLateral) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3585, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicLateral ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicLateral )") )
    __debugbreak();
  if ( (LODWORD(this->m_SwashplateCollective) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3586, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCollective ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCollective )") )
    __debugbreak();
}

/*
==============
FlightDynamicsRotorSystem::SetSwashplateDT
==============
*/
void FlightDynamicsRotorSystem::SetSwashplateDT(FlightDynamicsRotorSystem *this, float cyclicForward, float cyclicLateral, float collective, float dT)
{
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  bool v10; 
  double v11; 
  float v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 

  v6 = collective;
  v7 = I_pow(COERCE_FLOAT(COERCE_UNSIGNED_INT(cyclicForward - this->m_SwashplateCyclicForward) & _xmm), HFD_CONTROL_INPUT_DAMPER_EXPO);
  v8 = cyclicLateral - this->m_SwashplateCyclicLateral;
  this->m_SwashplateCyclicForward = (float)((float)(1.0 - (float)((float)(*(float *)&v7 * HFD_CONTROL_INPUT_DAMPER) * dT)) * this->m_SwashplateCyclicForward) + (float)((float)((float)(*(float *)&v7 * HFD_CONTROL_INPUT_DAMPER) * dT) * cyclicForward);
  v9 = I_pow(COERCE_FLOAT(LODWORD(v8) & _xmm), HFD_CONTROL_INPUT_DAMPER_EXPO);
  v10 = !this->m_SmoothCollective;
  this->m_SwashplateCyclicLateral = (float)((float)(1.0 - (float)((float)(*(float *)&v9 * HFD_CONTROL_INPUT_DAMPER) * dT)) * this->m_SwashplateCyclicLateral) + (float)((float)((float)(*(float *)&v9 * HFD_CONTROL_INPUT_DAMPER) * dT) * cyclicLateral);
  if ( !v10 )
  {
    v11 = I_pow(COERCE_FLOAT(COERCE_UNSIGNED_INT(collective - this->m_SwashplateCollective) & _xmm), HFD_CONTROL_INPUT_DAMPER_COLLECTIVE_EXPOT);
    v12 = (float)(*(float *)&v11 * this->m_SwasplateCollectiveRate) * dT;
    v13 = FD_ComputeExpo(collective, HFD_CONTROL_INPUT_EXPO_COLLECTIVE);
    v6 = (float)((float)(1.0 - v12) * this->m_SwashplateCollective) + (float)(v12 * *(float *)&v13);
  }
  this->m_SwashplateCollective = v6;
  if ( (LODWORD(this->m_SwashplateCyclicForward) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3611, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicForward ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicForward )") )
    __debugbreak();
  if ( (LODWORD(this->m_SwashplateCyclicLateral) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3612, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCyclicLateral ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCyclicLateral )") )
    __debugbreak();
  if ( (LODWORD(this->m_SwashplateCollective) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3613, ASSERT_TYPE_SANITY, "( !IS_NAN( m_SwashplateCollective ) )", (const char *)&queryFormat, "!IS_NAN( m_SwashplateCollective )") )
    __debugbreak();
  v14 = I_fclamp(this->m_SwashplateCyclicForward, -1.0, 1.0);
  this->m_SwashplateCyclicForward = *(float *)&v14;
  v15 = I_fclamp(this->m_SwashplateCyclicLateral, -1.0, 1.0);
  this->m_SwashplateCyclicLateral = *(float *)&v15;
  v16 = I_fclamp(this->m_SwashplateCollective, -1.0, 1.0);
  this->m_SwashplateCollective = *(float *)&v16;
}

/*
==============
FlightDynamicsRotorSystem::SetSwasplateRates
==============
*/
void FlightDynamicsRotorSystem::SetSwasplateRates(FlightDynamicsRotorSystem *this, float cyclic, float collective)
{
  this->m_SwasplateCyclicRate = cyclic;
  this->m_SwasplateCollectiveRate = collective;
}

/*
==============
HelicopterDynamics::Setup
==============
*/
bool HelicopterDynamics::Setup(HelicopterDynamics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  __int128 v7; 
  __int128 v8; 
  bool result; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  __m128 v18; 
  float v19; 
  __m128 v20; 
  FlightDynamicsManager *FlightDynamicsManager; 
  Physics_WorldId worldIda; 
  vec4_t out; 
  __int128 v25; 
  __int128 v26; 

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
    worldIda = _RDI->m_worldId;
    v26 = v7;
    v25 = v8;
    FlightDynamicsRotorSystem::SetupRotor(&_RDI->m_MainRotor, 5, 0.039370101 * HFD_MAIN_ROTOR_BLADE_LENGTH, 0.039370101 * HFD_MAIN_ROTOR_BLADE_WIDTH, HFD_MAIN_ROTOR_BLADE_WEIGHT, HFD_BLADE_MAX_DEFLECTION_MAIN, 0.0, 0.0, 0.0, worldIda);
    v11 = HFD_CONTROL_INPUT_DAMPER_COLLECTIVE;
    _RDI->m_MainRotor.m_SwasplateCyclicRate = HFD_CONTROL_INPUT_MULTI;
    _RDI->m_MainRotor.m_SwasplateCollectiveRate = v11;
    FlightDynamicsRotorSystem::SetupRotor(&_RDI->m_TailRotor, 2, 0.039370101 * HFD_TAIL_ROTOR_BLADE_LENGTH, 0.039370101 * HFD_TAIL_ROTOR_BLADE_WIDTH, HFD_TAIL_ROTOR_BLADE_WEIGHT, HFD_BLADE_MAX_DEFLECTION_TAIL, 0.0, 0.0, 90.0, _RDI->m_worldId);
    v12 = HFD_CONTROL_INPUT_MULTI;
    _RDI->m_TailRotor.m_SwasplateCollectiveRate = HFD_CONTROL_INPUT_DAMPER_TAIL_ROTOR;
    _RDI->m_TailRotor.m_SwasplateCyclicRate = v12;
    _RDI->m_NumberOfRotors = 2;
    Dvar_SetFloat_Internal(DVARFLT_fd_helicopter_swash_driver, 9.0);
    v13 = DVARFLT_fd_helicopter_swash_driver;
    if ( !DVARFLT_fd_helicopter_swash_driver && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_swash_driver") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(_RDI->m_MainRotorSwashplateDriverOffset) = v13->current.integer;
    BgVehiclePhysics::SetActivatedAlways(_RDI);
    v14 = DVARINT_fd_helicopter_start_spooled;
    if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer )
    {
      _RDI->m_MainRotor.m_RotorRPM = HFD_GOVERNOR_MAX_SPEED;
      v15 = HFD_GOVERNOR_MAX_SPEED;
    }
    else
    {
      _RDI->m_MainRotor.m_RotorRPM = HFD_DEFAULT_ROTOR_RPM;
      v15 = HFD_DEFAULT_ROTOR_RPM;
    }
    v16 = _RDI->m_Position.v[2];
    _XMM2 = _RDI->m_RotationQuaternion;
    _RDI->m_GovernorRPM = v15;
    v18 = (__m128)*(unsigned __int64 *)_RDI->m_Position.v;
    _RDI->m_MainRotor.m_Position.v[0] = v18.m128_f32[0];
    _RDI->m_MainRotor.m_Position.v[1] = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
    _RDI->m_MainRotor.m_Position.v[2] = v16;
    _RDI->m_MainRotor.m_RotationQuat.v[0] = _XMM2.v[0];
    __asm
    {
      vextractps dword ptr [rdi+550h], xmm2, 1
      vextractps dword ptr [rdi+554h], xmm2, 2
      vextractps dword ptr [rdi+558h], xmm2, 3
    }
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[0] = _RDI->m_MainRotor.m_RotationQuat.v[0];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[1] = _RDI->m_MainRotor.m_RotationQuat.v[1];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[2] = _RDI->m_MainRotor.m_RotationQuat.v[2];
    _RDI->m_MainRotor.m_PreviousRotationQuat.v[3] = _RDI->m_MainRotor.m_RotationQuat.v[3];
    v19 = _RDI->m_Position.v[2];
    v20 = (__m128)*(unsigned __int64 *)_RDI->m_Position.v;
    _XMM2 = _RDI->m_RotationQuaternion;
    _RDI->m_TailRotor.m_Position.v[0] = v20.m128_f32[0];
    _RDI->m_TailRotor.m_Position.v[1] = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
    _RDI->m_TailRotor.m_Position.v[2] = v19;
    _RDI->m_TailRotor.m_RotationQuat.v[0] = _XMM2.v[0];
    __asm
    {
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
void FlightDynamicsRotorSystem::SetupRotor(FlightDynamicsRotorSystem *this, int bladeCount, float bladeLength, float bladeWidth, float bladeWeight, float bladeMaxDeflection, float pitch, float yaw, float roll, Physics_WorldId worldId)
{
  __int64 v10; 
  HelicopterRotorBlade *m_RotorBlades; 
  __int64 v13; 
  float v14; 
  float v15; 
  FlightDynamicsManager *FlightDynamicsManager; 
  FlightDynamicsManager *v17; 
  vec4_t quat; 
  vec3_t v19; 
  vec3_t angles; 

  v10 = (unsigned int)bladeCount;
  if ( bladeCount < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3276, ASSERT_TYPE_ASSERT, "(bladeCount >= 2)", (const char *)&queryFormat, "bladeCount >= 2") )
    __debugbreak();
  if ( (int)v10 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3277, ASSERT_TYPE_ASSERT, "(bladeCount < 6)", (const char *)&queryFormat, "bladeCount < FD_MAX_ROTOR_BLADES") )
    __debugbreak();
  if ( bladeWeight <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3278, ASSERT_TYPE_ASSERT, "(bladeWeight > 0.001f)", (const char *)&queryFormat, "bladeWeight > EQUAL_EPSILON") )
    __debugbreak();
  this->m_BladeMaxDeflection = bladeMaxDeflection;
  angles.v[0] = pitch;
  this->m_worldId = worldId;
  angles.v[2] = roll;
  this->m_BladeLength = bladeLength;
  this->m_BladeWidth = bladeWidth;
  this->m_BladeWeight = bladeWeight;
  v19.v[0] = 0.0;
  v19.v[1] = 0.0;
  v19.v[2] = 0.0;
  angles.v[1] = yaw;
  this->m_BladeCount = v10;
  this->m_SwashplateCollective = 1.0;
  AnglesToQuat(&angles, &this->m_RotorAxisQuat);
  if ( (int)v10 > 0 )
  {
    m_RotorBlades = this->m_RotorBlades;
    v13 = v10;
    do
    {
      AnglesToQuat(&v19, &quat);
      v14 = fsqrt((float)((float)((float)(quat.v[1] * quat.v[1]) + (float)(quat.v[0] * quat.v[0])) + (float)(quat.v[2] * quat.v[2])) + (float)(quat.v[3] * quat.v[3]));
      if ( v14 != 0.0 )
      {
        v15 = 1.0 / v14;
        quat.v[0] = quat.v[0] * v15;
        quat.v[1] = quat.v[1] * v15;
        quat.v[2] = quat.v[2] * v15;
        quat.v[3] = quat.v[3] * v15;
      }
      FlightDynamicsManager = BG_GetFlightDynamicsManager();
      QuatTransform(&quat, &FlightDynamicsManager->m_ForwardAxis, &m_RotorBlades->m_BladeRotationDirection);
      v17 = BG_GetFlightDynamicsManager();
      QuatTransform(&quat, &v17->m_ElevatorAxis, &m_RotorBlades->m_BladeDirection);
      ++m_RotorBlades;
      v19.v[1] = (float)(360.0 / (float)(int)v10) + v19.v[1];
      --v13;
    }
    while ( v13 );
  }
  this->m_InvRotorWeight = 1.0 / (float)((float)(int)v10 * this->m_BladeWeight);
}

/*
==============
HelicopterDynamics::SimulateRotorSpeed
==============
*/
void HelicopterDynamics::SimulateRotorSpeed(HelicopterDynamics *this, float targetRPM, float dT)
{
  if ( targetRPM <= this->m_MainRotor.m_RotorRPM )
    this->m_MainRotor.m_RotorRPM = (float)((float)(1.0 - (float)(dT * HFD_SIMULATE_ROTOR_RPM_SPOOL_DOWN)) * this->m_MainRotor.m_RotorRPM) + (float)((float)(dT * HFD_SIMULATE_ROTOR_RPM_SPOOL_DOWN) * targetRPM);
  else
    this->m_MainRotor.m_RotorRPM = (float)((float)(1.0 - (float)(dT * HFD_SIMULATE_ROTOR_RPM_SPOOL_UP)) * this->m_MainRotor.m_RotorRPM) + (float)((float)(dT * HFD_SIMULATE_ROTOR_RPM_SPOOL_UP) * targetRPM);
}

/*
==============
HelicopterDynamics::SimulateRotorsNoPhysics
==============
*/
void HelicopterDynamics::SimulateRotorsNoPhysics(HelicopterDynamics *this, float dT, float ail, float elev, float col)
{
  float m_RotorRPM; 
  int v7; 
  float *p_m_BladeDeflectionVelocity; 
  float v9; 
  double v10; 
  float v11; 
  float v12; 

  ((void (__fastcall *)(HelicopterDynamics *))this->SimulateTurbineOperation)(this);
  m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  this->m_TailRotor.m_RotorRPM = m_RotorRPM * HFD_TAIL_ROTOR_RATIO;
  v7 = 0;
  *(_QWORD *)this->m_TailRotor.m_AirspeedVector.v = 0i64;
  this->m_TailRotor.m_AirspeedVector.v[2] = 0.0;
  FlightDynamicsRotorSystem::SetSwashplateDT(&this->m_TailRotor, 0.0, 0.0, 0.0, dT);
  *(_QWORD *)this->m_TailRotor.m_LiftForceVector.v = 0i64;
  *(_QWORD *)&this->m_TailRotor.m_LiftForceVector.z = 0i64;
  *(_QWORD *)&this->m_TailRotor.m_LiftTorqueVector.y = 0i64;
  FlightDynamicsRotorSystem::Update(&this->m_TailRotor, dT, 1);
  *(_QWORD *)this->m_MainRotor.m_AirspeedVector.v = 0i64;
  this->m_MainRotor.m_AirspeedVector.v[2] = 0.0;
  FlightDynamicsRotorSystem::SetSwashplateDT(&this->m_MainRotor, ail, elev, col, dT);
  FlightDynamicsRotorSystem::UpdateGroundEffect(&this->m_MainRotor, HFD_BLADE_GROUND_EFFECT_DISTANCE_FACTOR * this->m_MainRotor.m_BladeLength, HFD_BLADE_GROUND_EFFECT_MULTIPLIER, dT);
  *(_QWORD *)this->m_MainRotor.m_LiftForceVector.v = 0i64;
  *(_QWORD *)&this->m_MainRotor.m_LiftForceVector.z = 0i64;
  *(_QWORD *)&this->m_MainRotor.m_LiftTorqueVector.y = 0i64;
  this->m_MainRotor.m_InputTorque = COERCE_FLOAT(LODWORD(this->m_TailRotor.m_OpposingTorque) ^ _xmm);
  FlightDynamicsRotorSystem::Update(&this->m_MainRotor, dT, 1);
  if ( m_RotorRPM < 150.0 && this->m_MainRotor.m_BladeCount > 0 )
  {
    p_m_BladeDeflectionVelocity = &this->m_MainRotor.m_RotorBlades[0].m_BladeDeflectionVelocity;
    do
    {
      v9 = *(p_m_BladeDeflectionVelocity - 1);
      v10 = I_flrand(0.0, HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_RAND);
      v11 = *p_m_BladeDeflectionVelocity - (float)((float)(*(float *)&v10 + v9) * HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE);
      *p_m_BladeDeflectionVelocity = v11;
      v12 = (float)(1.0 - (float)(dT * HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY)) * v11;
      *p_m_BladeDeflectionVelocity = v12;
      *(p_m_BladeDeflectionVelocity - 1) = (float)((float)(v12 * HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE) * dT) + v9;
      ++v7;
      p_m_BladeDeflectionVelocity += 11;
    }
    while ( v7 < this->m_MainRotor.m_BladeCount );
  }
  ((void (__fastcall *)(HelicopterDynamics *))this->PerformAutomaticControl)(this);
}

/*
==============
HelicopterDynamics::SimulateStationaryRotorBladesMovement
==============
*/
void HelicopterDynamics::SimulateStationaryRotorBladesMovement(HelicopterDynamics *this, float dT)
{
  HelicopterDynamics_vtbl *v2; 
  int v3; 
  float m_RotorRPM; 
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float *p_m_BladeDeflectionVelocity; 
  float v11; 
  double v12; 
  float v13; 
  float v14; 

  v2 = this->__vftable;
  v3 = 0;
  this->m_EnableFlyByWire = 0;
  this->m_PreviousEnableFlyByWire = 0;
  this->m_ManualControlTimer = 1.0;
  this->m_GyroAltitudeSet = 0;
  this->m_GyroGPSlocationSet = 0;
  *(_QWORD *)&this->m_GovernorRPM = 0i64;
  ((void (*)(void))v2->SimulateTurbineOperation)();
  m_RotorRPM = this->m_MainRotor.m_RotorRPM;
  v6 = I_flrand(COERCE_FLOAT(LODWORD(dT) ^ _xmm), dT);
  v7 = (float)(*(float *)&v6 * HFD_BONE_STATIONARY_WIND_ROTATION_HZ) * dT;
  v8 = 1.0 - (float)(dT * HFD_SIMULATE_ROTOR_RPM_SPOOL_DOWN);
  this->m_MainRotor.m_RotorRPM = v8 * (float)(v7 + m_RotorRPM);
  v9 = (float)(v8 * (float)(v7 + m_RotorRPM)) * dT;
  this->m_MainRotor.m_RotorPosition = v9 + this->m_MainRotor.m_RotorPosition;
  if ( this->m_MainRotor.m_BladeCount > 0 )
  {
    p_m_BladeDeflectionVelocity = &this->m_MainRotor.m_RotorBlades[0].m_BladeDeflectionVelocity;
    do
    {
      v11 = *(p_m_BladeDeflectionVelocity - 1);
      v12 = I_flrand(0.0, HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_RAND);
      v13 = *p_m_BladeDeflectionVelocity - (float)((float)(*(float *)&v12 + v11) * HFD_BONE_STATIONARY_DEFLECTION_RAND_AMPLITUDE);
      *p_m_BladeDeflectionVelocity = v13;
      v14 = (float)(1.0 - (float)(dT * HFD_BONE_STATIONARY_DEFLECTION_MIN_VELOCITY)) * v13;
      *p_m_BladeDeflectionVelocity = v14;
      *(p_m_BladeDeflectionVelocity - 1) = (float)((float)(v14 * HFD_BONE_STATIONARY_DEFLECTION_VELOCITY_SCALE) * dT) + v11;
      ++v3;
      p_m_BladeDeflectionVelocity += 11;
    }
    while ( v3 < this->m_MainRotor.m_BladeCount );
  }
  this->m_TailRotor.m_RotorPosition = (float)(v9 * HFD_TAIL_ROTOR_RATIO) + this->m_TailRotor.m_RotorPosition;
}

/*
==============
HelicopterDynamics::SimulateTurbineOperation
==============
*/
void HelicopterDynamics::SimulateTurbineOperation(HelicopterDynamics *this, float dT)
{
  FlightDynamicsManager *FlightDynamicsManager; 
  float *DynamicsMode; 
  float m_TurbineRPM; 
  float v6; 
  float v7; 
  float v8; 

  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  DynamicsMode = FlightDynamicsManager::GetDynamicsMode(FlightDynamicsManager, this->m_DynamicsModel);
  if ( HFD_GOVERNOR_MAX_SPEED > 0.001 )
  {
    m_TurbineRPM = this->m_TurbineRPM;
    v6 = (float)(this->m_GovernorRPM * 50000.0) / HFD_GOVERNOR_MAX_SPEED;
    if ( v6 > m_TurbineRPM )
      this->m_TurbineRPM = (float)((float)(1.0 - (float)(dT * DynamicsMode[91])) * m_TurbineRPM) + (float)((float)(dT * DynamicsMode[91]) * v6);
  }
  v7 = this->m_TurbineRPM;
  v8 = (float)(v7 * DynamicsMode[90]) * dT;
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) <= COERCE_FLOAT(LODWORD(v7) & _xmm) )
    this->m_TurbineRPM = v7 - v8;
  else
    this->m_TurbineRPM = 0;
}

/*
==============
HelicopterDynamics::SpoolUpRotor
==============
*/

void __fastcall HelicopterDynamics::SpoolUpRotor(HelicopterDynamics *this, double newRPM)
{
  __asm { vminss  xmm0, xmm1, cs:__real@3f800000 }
  this->m_GovernorRPM = *(float *)&_XMM0 * HFD_GOVERNOR_MAX_SPEED;
}

/*
==============
HelicopterDynamics::StartPlayerControlling
==============
*/
void HelicopterDynamics::StartPlayerControlling(HelicopterDynamics *this)
{
  HelicopterDynamics_vtbl *v1; 
  const dvar_t *v3; 
  FlightDynamicsManager *FlightDynamicsManager; 
  LocalClientNum_t LocalClientForWorld; 
  FlightDynamicCameraData *CameraCurrentData; 

  v1 = this->__vftable;
  *(_WORD *)&this->m_PreviousUserControlled = 0;
  this->m_EnableFlyByWire = 0;
  this->m_GovernorRPM = 0.0;
  ((void (*)(void))v1->PerformAutomaticControl)();
  v3 = DVARINT_fd_helicopter_start_spooled;
  if ( !DVARINT_fd_helicopter_start_spooled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_start_spooled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    this->m_MainRotor.m_RotorRPM = HFD_GOVERNOR_MAX_SPEED;
    this->m_GovernorRPM = HFD_GOVERNOR_MAX_SPEED;
    this->m_TurbineStarter = 0;
  }
  FlightDynamics::StartPlayerControlling(this);
  if ( Physics_IsPredictiveWorld(this->m_worldId) )
  {
    FlightDynamicsManager = BG_GetFlightDynamicsManager();
    if ( !FlightDynamicsManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 754, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
      __debugbreak();
    LocalClientForWorld = Physics_GetLocalClientForWorld(this->m_worldId);
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
  const dvar_t *v6; 
  int integer; 
  int v11; 
  int v12; 
  int v13; 
  float *v14; 
  float v15; 
  float v16; 
  double v17; 
  float v18; 

  v6 = DVARINT_fd_helicopter_fbw_mode_config;
  if ( !DVARINT_fd_helicopter_fbw_mode_config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_mode_config") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( !integer )
  {
    v13 = _xmm;
    v14 = rudderInput;
    *aileronInput = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[0]) ^ _xmm);
    *rudderInput = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[3]) ^ _xmm);
    *elevatorInput = this->m_ControlInputsNormalized[5];
    *collectiveInput = this->m_ControlInputsNormalized[2];
LABEL_17:
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
    {
      v18 = *v14;
      this->m_UserControlInputs[9] = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[1]) ^ v13);
      this->m_UserControlInputs[8] = v18;
      this->m_UserControlInputs[12] = *aileronInput;
    }
    return;
  }
  v11 = integer - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return;
      v13 = _xmm;
      v14 = rudderInput;
      *aileronInput = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[0]) ^ _xmm);
      *rudderInput = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[3]) ^ _xmm);
      *elevatorInput = this->m_ControlInputsNormalized[5];
      v15 = this->m_ControlInputsNormalized[6];
      *collectiveInput = v15;
      v16 = v15 + this->m_ControlInputsNormalized[2];
      *collectiveInput = v16;
      v17 = I_fclamp(v16, -1.0, 1.0);
      *collectiveInput = *(float *)&v17;
      goto LABEL_17;
    }
    *aileronInput = this->m_ControlInputsNormalized[3];
    *rudderInput = this->m_ControlInputsNormalized[0];
    *elevatorInput = this->m_ControlInputsNormalized[1];
    *collectiveInput = this->m_ControlInputsNormalized[5];
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
    {
      this->m_UserControlInputs[8] = *rudderInput;
      this->m_UserControlInputs[9] = 0.0;
    }
  }
  else
  {
    *aileronInput = this->m_ControlInputsNormalized[3];
    *rudderInput = this->m_ControlInputsNormalized[0];
    *elevatorInput = this->m_ControlInputsNormalized[5];
    *collectiveInput = COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[1]) ^ _xmm);
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
    {
      if ( this->m_ControlInputsNormalized[11] <= 0.001 )
      {
        this->m_UserControlInputs[8] = *rudderInput;
        this->m_UserControlInputs[9] = 0.0;
      }
      else
      {
        this->m_UserControlInputs[8] = *rudderInput - (float)(HFD_FBW_FREELOOK_MULTIPLIER * *aileronInput);
        this->m_UserControlInputs[9] = *collectiveInput;
        *aileronInput = 0.0;
        *collectiveInput = 0.0;
      }
    }
    *collectiveInput = (float)((float)(1.0 - COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[2]) & _xmm)) * *collectiveInput) + (float)(this->m_ControlInputsNormalized[2] * COERCE_FLOAT(LODWORD(this->m_ControlInputsNormalized[2]) & _xmm));
  }
}

/*
==============
FlightDynamicsRotorSystem::Update
==============
*/
void FlightDynamicsRotorSystem::Update(FlightDynamicsRotorSystem *this, float dT, bool drawBlade)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t m_LiftForceVector; 
  __int64 v15; 

  v15 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::Update");
  if ( COERCE_FLOAT(LODWORD(this->m_RotorRPM) & _xmm) >= 1.0 )
  {
    v5 = this->m_LiftTorqueVector.v[0];
    v6 = this->m_LiftTorqueVector.v[1];
    v7 = this->m_LiftTorqueVector.v[2];
    v8 = this->m_LiftForceVector.v[0];
    v9 = this->m_LiftForceVector.v[1];
    v10 = this->m_LiftForceVector.v[2];
    FlightDynamicsRotorSystem::UpdateRotor(this, dT, drawBlade);
    v11 = dT * HFD_ROTOR_LIFT_TORQUE_RATE;
    this->m_LiftTorqueVector.v[0] = (float)((float)(this->m_LiftTorqueVector.v[0] - v5) * (float)(dT * HFD_ROTOR_LIFT_TORQUE_RATE)) + v5;
    this->m_LiftTorqueVector.v[1] = (float)((float)(this->m_LiftTorqueVector.v[1] - v6) * v11) + v6;
    this->m_LiftTorqueVector.v[2] = (float)((float)(this->m_LiftTorqueVector.v[2] - v7) * v11) + v7;
    v12 = dT * HFD_ROTOR_LIFT_FORCE_RATE;
    this->m_LiftForceVector.v[0] = (float)((float)(this->m_LiftForceVector.v[0] - v8) * (float)(dT * HFD_ROTOR_LIFT_FORCE_RATE)) + v8;
    this->m_LiftForceVector.v[1] = (float)((float)(this->m_LiftForceVector.v[1] - v9) * v12) + v9;
    this->m_LiftForceVector.v[2] = (float)((float)(this->m_LiftForceVector.v[2] - v10) * v12) + v10;
    v13 = (float)((float)((float)(this->m_InputTorque - this->m_OpposingTorque) * this->m_InvRotorWeight) * dT) + this->m_RotorRPM;
    this->m_RotorRPM = v13;
    this->m_RotorPosition = fmodf_0((float)((float)(v13 * dT) + this->m_RotorPosition) * 6.0, 360000.0) * 0.16666667;
    m_LiftForceVector = this->m_LiftForceVector;
    FlightDynamicsRotorSystem::UpdateAirflowMomemtum(this, &m_LiftForceVector, dT);
  }
  else
  {
    *(_QWORD *)this->m_LiftTorqueVector.v = 0i64;
    this->m_LiftTorqueVector.v[2] = 0.0;
    *(_QWORD *)this->m_LiftForceVector.v = 0i64;
    this->m_LiftForceVector.v[2] = 0.0;
    *(_QWORD *)this->m_AirflowVelocity.v = 0i64;
    this->m_AirflowVelocity.v[2] = 0.0;
    *(_QWORD *)this->m_AirspeedVector.v = 0i64;
    this->m_AirspeedVector.v[2] = 0.0;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
FlightDynamicsRotorSystem::UpdateAirflowMomemtum
==============
*/
void FlightDynamicsRotorSystem::UpdateAirflowMomemtum(FlightDynamicsRotorSystem *this, vec3_t *liftForceVector, float dT)
{
  __int128 v3; 
  double v8; 
  float v9; 
  __int128 v10; 
  __int64 m_BladeCount; 
  __int64 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float *p_m_BladeGroundEffect; 
  unsigned __int64 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int64 v33; 
  float *p_m_GroundEffectTraceDistance; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  double v38; 
  float v39; 
  double v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 

  v3 = LODWORD(liftForceVector->v[0]);
  *(float *)&v3 = (float)(liftForceVector->v[0] - this->m_AirflowVelocity.v[0]) * dT;
  _XMM7 = v3;
  v52 = (float)(liftForceVector->v[2] - this->m_AirflowVelocity.v[2]) * dT;
  __asm { vunpcklps xmm6, xmm7, xmm3 }
  v8 = I_fclamp(HFD_AIRFLOW_MOMENTUM_RESTITUTION, 0.0, 1.0);
  v9 = this->m_AirspeedVector.v[0];
  v10 = LODWORD(this->m_AirspeedVector.v[1]);
  m_BladeCount = this->m_BladeCount;
  v12 = 0i64;
  v13 = *(float *)&_XMM7 - (float)(*(float *)&_XMM7 * *(float *)&v8);
  v14 = _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0];
  _XMM6.m128_i32[0] = LODWORD(this->m_AirspeedVector.v[2]);
  v15 = v14 - (float)(v14 * *(float *)&v8);
  v16 = v52 - (float)(*(float *)&v8 * v52);
  v17 = v10;
  *(float *)&v17 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9)) + (float)(_XMM6.m128_f32[0] * _XMM6.m128_f32[0]));
  _XMM3 = v17;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v50 = _XMM6.m128_f32[0] * (float)(1.0 / *(float *)&_XMM0);
  v21 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v22 = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  v23 = 0i64;
  v24 = 0i64;
  if ( m_BladeCount >= 4 )
  {
    p_m_BladeGroundEffect = &this->m_RotorBlades[1].m_BladeGroundEffect;
    v26 = ((unsigned __int64)(m_BladeCount - 4) >> 2) + 1;
    v12 = 4 * v26;
    do
    {
      v27 = v23;
      *(float *)&v27 = (float)((float)(*(float *)&v23 + *(p_m_BladeGroundEffect - 11)) + *p_m_BladeGroundEffect) + p_m_BladeGroundEffect[11];
      v28 = v27;
      v29 = v24;
      *(float *)&v29 = (float)(*(float *)&v24 + *(p_m_BladeGroundEffect - 10)) + p_m_BladeGroundEffect[1];
      v30 = v29;
      v31 = v28;
      *(float *)&v31 = *(float *)&v28 + p_m_BladeGroundEffect[22];
      v23 = v31;
      v32 = v30;
      *(float *)&v32 = (float)(*(float *)&v30 + p_m_BladeGroundEffect[12]) + p_m_BladeGroundEffect[23];
      v24 = v32;
      p_m_BladeGroundEffect += 44;
      --v26;
    }
    while ( v26 );
  }
  if ( v12 < m_BladeCount )
  {
    v33 = m_BladeCount - v12;
    p_m_GroundEffectTraceDistance = &this->m_RotorBlades[v12].m_GroundEffectTraceDistance;
    do
    {
      v35 = v23;
      *(float *)&v35 = *(float *)&v23 + *(p_m_GroundEffectTraceDistance - 1);
      v23 = v35;
      v36 = v24;
      *(float *)&v36 = *(float *)&v24 + *p_m_GroundEffectTraceDistance;
      v24 = v36;
      p_m_GroundEffectTraceDistance += 11;
      --v33;
    }
    while ( v33 );
  }
  if ( (int)m_BladeCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3513, ASSERT_TYPE_ASSERT, "(m_BladeCount > 1)", (const char *)&queryFormat, "m_BladeCount > 1") )
    __debugbreak();
  v37 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)this->m_BladeCount).m128_f32[0];
  v38 = I_fclamp((float)((float)(1.0 - (float)(v37 * *(float *)&v24)) * (float)(v37 * *(float *)&v23)) * (float)((float)(this->m_RotorRPM * this->m_RotorRPM) * HFD_AIRFLOW_GROUND_EFFECT_RPM_FACTOR), 0.0, 1.0);
  v39 = *(float *)&v38;
  v40 = FD_ComputeExpo((float)((float)(v22 * this->m_RotorAxis.v[1]) + (float)(v21 * this->m_RotorAxis.v[0])) + (float)(v50 * this->m_RotorAxis.v[2]), HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_EXPO);
  LODWORD(v41) = COERCE_UNSIGNED_INT((float)((float)(COERCE_FLOAT(LODWORD(v40) & _xmm) * HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_FACTOR) * v39) * dT) ^ _xmm;
  v42 = (float)(v41 * this->m_AirspeedVector.v[0]) + this->m_AirflowVelocity.v[0];
  this->m_AirflowVelocity.v[0] = v42;
  this->m_AirflowVelocity.v[1] = (float)(v41 * this->m_AirspeedVector.v[1]) + this->m_AirflowVelocity.v[1];
  this->m_AirflowVelocity.v[2] = (float)(v41 * this->m_AirspeedVector.v[2]) + this->m_AirflowVelocity.v[2];
  v43 = (float)(v39 * HFD_AIRFLOW_MOMENTUM_GROUND_EFFECT_LIFT_FACTOR) * dT;
  v44 = v15 + (float)(v43 * this->m_RotorAxis.v[1]);
  v45 = HFD_AIRFLOW_MOMENTUM_CHANGE;
  v46 = v16 + (float)(v43 * this->m_RotorAxis.v[2]);
  v47 = (float)(HFD_AIRFLOW_MOMENTUM_CHANGE * (float)(v13 + (float)(v43 * this->m_RotorAxis.v[0]))) + v42;
  this->m_AirflowVelocity.v[0] = v47;
  v48 = (float)(v45 * v44) + this->m_AirflowVelocity.v[1];
  this->m_AirflowVelocity.v[1] = v48;
  v51 = v47;
  v49 = (float)(v45 * v46) + this->m_AirflowVelocity.v[2];
  this->m_AirflowVelocity.v[2] = v49;
  if ( (LODWORD(v47) & 0x7F800000) == 2139095040 || (v51 = v48, (LODWORD(v48) & 0x7F800000) == 2139095040) || (v51 = v49, (LODWORD(v49) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3550, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_AirflowVelocity )[0] ) && !IS_NAN( ( m_AirflowVelocity )[1] ) && !IS_NAN( ( m_AirflowVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_AirflowVelocity )[0] ) && !IS_NAN( ( m_AirflowVelocity )[1] ) && !IS_NAN( ( m_AirflowVelocity )[2] )", v51) )
      __debugbreak();
  }
}

/*
==============
FlightDynamicsRotorSystem::UpdateGroundEffect
==============
*/
float FlightDynamicsRotorSystem::UpdateGroundEffect(FlightDynamicsRotorSystem *this, float distance, float liftMultiplier, float dT)
{
  float v4; 
  unsigned __int128 v5; 
  unsigned __int128 v7; 
  float v8; 
  float v12; 
  float v13; 
  float v14; 
  int m_BladeCount; 
  int v17; 
  __int128 v18; 
  float *p_m_BladeGroundEffect; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float m_BladeLength; 
  float v28; 
  float v29; 
  bool v30; 
  Physics_WorldId m_worldId; 
  float fraction; 
  double v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  float v37; 
  float v38; 
  vec3_t v41; 
  vec3_t v42; 
  vec3_t end; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t in; 
  vec3_t v47; 
  vec4_t quat; 
  vec4_t out; 
  trace_t v50; 

  LODWORD(v4) = LODWORD(this->m_AirflowVelocity.v[0]) ^ _xmm;
  v5 = LODWORD(this->m_AirflowVelocity.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  v7 = v5;
  LODWORD(v8) = LODWORD(this->m_AirflowVelocity.v[2]) ^ _xmm;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4)) + (float)(v8 * v8));
  _XMM3 = v7;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v12 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v13 = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM0);
  v14 = v8 * (float)(1.0 / *(float *)&_XMM0);
  angles.v[1] = this->m_RotorPosition * 6.0;
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AnglesToQuat(&angles, &quat);
  QuatMultiply(&quat, &this->m_RotorAxisQuat, &out);
  quat = out;
  QuatMultiply(&quat, &this->m_RotationQuat, &out);
  m_BladeCount = this->m_BladeCount;
  this->m_BladeCollision = 0;
  v17 = 0;
  v18 = 0i64;
  if ( m_BladeCount > 0 )
  {
    p_m_BladeGroundEffect = &this->m_RotorBlades[0].m_BladeGroundEffect;
    do
    {
      v20 = *(p_m_BladeGroundEffect - 9);
      v21 = *((unsigned int *)p_m_BladeGroundEffect - 8);
      v22 = *(p_m_BladeGroundEffect - 2);
      v23 = v21;
      *(float *)&v23 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(v20 * v20)) + (float)(v22 * v22));
      _XMM3 = v23;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      in.v[0] = (float)(1.0 / *(float *)&_XMM0) * v20;
      in.v[2] = (float)(1.0 / *(float *)&_XMM0) * v22;
      in.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v21;
      QuatTransform(&out, &in, &v47);
      m_BladeLength = this->m_BladeLength;
      v28 = (float)(m_BladeLength * v47.v[0]) + this->m_Position.v[0];
      *(float *)&_XMM3 = (float)(m_BladeLength * v47.v[1]) + this->m_Position.v[1];
      v29 = (float)(m_BladeLength * v47.v[2]) + this->m_Position.v[2];
      end.v[0] = (float)(v12 * distance) + v28;
      end.v[1] = (float)(v13 * distance) + *(float *)&_XMM3;
      v30 = HFD_TRACE_MIN_RPM < this->m_RotorRPM;
      start.v[0] = v28;
      start.v[1] = *(float *)&_XMM3;
      start.v[2] = v29;
      end.v[2] = (float)(v14 * distance) + v29;
      if ( v30 )
      {
        m_worldId = this->m_worldId;
        v41 = end;
        v42 = start;
        FD_Trace(m_worldId, &v50, &v42, &v41, NULL, 2097, NULL);
        fraction = v50.fraction;
        if ( v50.startsolid )
          this->m_BladeCollision = 1;
      }
      else
      {
        fraction = FLOAT_1_0;
        v50.fraction = FLOAT_1_0;
      }
      p_m_BladeGroundEffect[1] = fraction;
      v33 = I_pow(fraction, HFD_BLADE_GROUND_EFFECT_DISTANCE_EXPO);
      v34 = (float)((float)((float)(1.0 - *(float *)&v33) - *p_m_BladeGroundEffect) * liftMultiplier) * dT;
      v35 = *p_m_BladeGroundEffect + v34;
      *p_m_BladeGroundEffect = v35;
      v36 = v18;
      *(float *)&v36 = *(float *)&v18 + v34;
      v18 = v36;
      if ( DEBUG_DRAW_LINES )
      {
        end.v[0] = (float)(v12 * (float)(distance * v50.fraction)) + start.v[0];
        end.v[2] = (float)(v14 * (float)(distance * v50.fraction)) + start.v[2];
        end.v[1] = (float)(v13 * (float)(distance * v50.fraction)) + start.v[1];
        FD_DebugLine(&start, &end, &colorBlue, 0, DEBUG_LINE_TIME);
        v35 = *p_m_BladeGroundEffect;
      }
      v37 = (float)(v35 * HFD_BLADE_GROUND_EFFECT_DECAY) * dT;
      if ( COERCE_FLOAT(LODWORD(v37) & _xmm) <= COERCE_FLOAT(LODWORD(v35) & _xmm) )
        v38 = v35 - v37;
      else
        v38 = 0.0;
      *p_m_BladeGroundEffect = v38;
      m_BladeCount = this->m_BladeCount;
      p_m_BladeGroundEffect += 11;
      ++v17;
    }
    while ( v17 < m_BladeCount );
  }
  return *(float *)&v18 / _mm_cvtepi32_ps((__m128i)(unsigned int)m_BladeCount).m128_f32[0];
}

/*
==============
FlightDynamicsRotorSystem::UpdatePositionAndOrientation
==============
*/
void FlightDynamicsRotorSystem::UpdatePositionAndOrientation(FlightDynamicsRotorSystem *this, vec3_t *position, vec4_t *rotation, float dT)
{
  vec4_t v5; 
  vec4_t v7; 

  v5 = *rotation;
  this->m_Position = *position;
  v7 = v5;
  FlightDynamicsRotorSystem::CalculateDeflectionFromOrientation(this, &v7, dT);
  this->m_PreviousRotationQuat = this->m_RotationQuat;
  this->m_RotationQuat = *rotation;
}

/*
==============
FlightDynamicsRotorSystem::UpdateRotor
==============
*/
void FlightDynamicsRotorSystem::UpdateRotor(FlightDynamicsRotorSystem *this, float dT, bool drawBlade)
{
  float v3; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v9; 
  float v10; 
  int v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  int v24; 
  float v25; 
  float v32; 
  __int64 m_BladeCount; 
  int v37; 
  __int64 v38; 
  int v39; 
  float *p_m_BladeDeflection; 
  int v41; 
  float *v42; 
  int v43; 
  HelicopterRotorBlade *m_RotorBlades; 
  int v45; 
  __int64 v46; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  __int128 v58; 
  float v59; 
  float v60; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  __int64 v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  __int128 v77; 
  __int128 v81; 
  float v82; 
  float v83; 
  float v84; 
  float v88; 
  __int128 v89; 
  float v90; 
  __int128 v91; 
  float v92; 
  __int128 v94; 
  __int128 v98; 
  float v101; 
  __int128 v103; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  double v110; 
  float v111; 
  __int128 v112; 
  __int128 v113; 
  float v116; 
  __int128 v117; 
  float v118; 
  float v119; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float m_BladeMaxDeflection; 
  __int128 v133; 
  float v137; 
  float v138; 
  __int128 v141; 
  __int128 v145; 
  __int128 v150; 
  float v153; 
  float v154; 
  float v155; 
  __int128 v157; 
  float v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  float v165; 
  float *v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float v173; 
  float m_BladeLength; 
  float *v175; 
  float *v176; 
  float *v177; 
  float v178; 
  float v179; 
  float v180; 
  int Int_Internal_DebugName; 
  float v182; 
  float v183; 
  float *v184; 
  float *v185; 
  float *v186; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  float v192; 
  double v193; 
  float v194; 
  double v195; 
  float v196; 
  double v197; 
  double v198; 
  int v199; 
  double v200; 
  float v201; 
  double v202; 
  int v203; 
  float *v204; 
  float *v205; 
  float *v206; 
  float *v207; 
  float *v208; 
  float *v209; 
  double v210; 
  int v211; 
  double v212; 
  float v213; 
  double v214; 
  float v215; 
  double v216; 
  float v217; 
  float v218; 
  float v219; 
  float v221; 
  float v222; 
  float v223; 
  float v224; 
  float v225; 
  float v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  float v232; 
  float v234; 
  float v235; 
  float v236; 
  float v237; 
  float v238; 
  float v239; 
  float v240; 
  float v241; 
  float v242; 
  float v243; 
  float v244; 
  float v245; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  FlightDynamicsManager *FlightDynamicsManager; 
  vec3_t v260; 
  vec3_t v261; 
  vec3_t start; 
  vec3_t v263; 
  vec3_t dir; 
  vec3_t v265; 
  vec4_t v266; 
  vec3_t m_BladeDirection; 
  vec4_t color; 
  vec3_t v1; 
  vec3_t v270; 
  vec3_t sum; 
  vec3_t v272; 
  vec3_t v273; 
  vec3_t cross; 
  vec3_t b; 
  vec3_t a; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t v279; 
  vec3_t v280; 
  vec4_t in1; 
  vec4_t out; 
  vec3_t v283; 
  vec4_t quat; 
  vec3_t v285; 
  vec3_t result; 
  vec3_t v287; 
  vec4_t v288; 
  vec3_t v289; 
  vec3_t in; 
  vec4_t v291; 
  int v292[8]; 

  v3 = dT;
  v5 = FLOAT_0_001;
  if ( dT >= 0.001 && dT <= 0.039999999 )
  {
    v6 = 0.025399987 * this->m_BladeLength;
    v258 = v6;
    v7 = this->m_RotorRPM * 0.10471976;
    v254 = (float)(0.025399987 * this->m_BladeWidth) * v6;
    Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::UpdateRotor");
    FlightDynamicsManager = BG_GetFlightDynamicsManager();
    _XMM12 = 0i64;
    angles.v[0] = 0.0;
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
    angles.v[1] = (float)(6.0 * this->m_RotorPosition) - (float)(dT * this->m_RotorRPM);
    AnglesToQuat(&angles, &quat);
    QuatMultiply(&quat, &this->m_RotorAxisQuat, &out);
    QuatMultiply(&out, &this->m_RotationQuat, &v291);
    angles.v[1] = 6.0 * this->m_RotorPosition;
    AnglesToQuat(&angles, &quat);
    QuatMultiply(&quat, &this->m_RotorAxisQuat, &out);
    quat = out;
    QuatMultiply(&quat, &this->m_RotationQuat, &out);
    QuatMultiply(&quat, &this->m_PreviousRotationQuat, &v266);
    QuatTransform(&this->m_RotationQuat, &FlightDynamicsManager->m_ForwardAxis, &v1);
    QuatTransform(&this->m_RotorAxisQuat, &FlightDynamicsManager->m_UpAxis, &in);
    QuatTransform(&this->m_RotationQuat, &in, &this->m_RotorAxis);
    Vec3Cross(&this->m_RotorAxis, &v1, &cross);
    if ( DEBUG_DRAW_LINES )
    {
      end.v[0] = (float)(100.0 * this->m_RotorAxis.v[0]) + this->m_Position.v[0];
      end.v[1] = (float)(100.0 * this->m_RotorAxis.v[1]) + this->m_Position.v[1];
      end.v[2] = (float)(100.0 * this->m_RotorAxis.v[2]) + this->m_Position.v[2];
      FD_DebugLine(&this->m_Position, &end, &colorGreen, 0, DEBUG_LINE_TIME);
    }
    v9 = LODWORD(this->m_AirspeedVector.v[1]);
    v10 = this->m_AirspeedVector.v[2];
    v11 = 0;
    if ( (float)((float)((float)(this->m_AirspeedVector.v[0] * this->m_AirspeedVector.v[0]) + (float)(*(float *)&v9 * *(float *)&v9)) + (float)(v10 * v10)) > 151782400.0 )
    {
      *(_QWORD *)this->m_AirspeedVector.v = 0i64;
      this->m_AirspeedVector.v[2] = 0.0;
      v9 = LODWORD(this->m_AirspeedVector.v[1]);
      v10 = 0.0;
    }
    v12 = this->m_AirspeedVector.v[0];
    v13 = v9;
    v14 = (float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v12 * v12)) + (float)(v10 * v10);
    *(float *)&v13 = fsqrt(v14);
    _XMM3 = v13;
    __asm { vcmpless xmm0, xmm3, xmm9 }
    v17 = FLOAT_1_0;
    __asm { vblendvps xmm1, xmm3, xmm13, xmm0 }
    v19 = (float)(1.0 / *(float *)&_XMM1) * v12;
    v229 = v19;
    v20 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM1);
    v230 = v20;
    v21 = v10 * (float)(1.0 / *(float *)&_XMM1);
    v231 = v21;
    v22 = *(float *)&v13 * 0.025400002;
    v257 = *(float *)&_XMM3 * 0.025400002;
    v242 = v14 * 0.00064516009;
    if ( (float)(*(float *)&_XMM3 * 0.025400002) < 0.001 )
    {
      v19 = this->m_RotorAxis.v[0];
      v229 = v19;
      v20 = this->m_RotorAxis.v[1];
      v230 = v20;
      v21 = this->m_RotorAxis.v[2];
      v231 = v21;
    }
    v248 = v19 * (float)(v22 * HFD_BLADE_AIRSPEED_SCALE);
    v249 = v20 * (float)(v22 * HFD_BLADE_AIRSPEED_SCALE);
    v250 = v21 * (float)(v22 * HFD_BLADE_AIRSPEED_SCALE);
    v23 = (float)(v22 * HFD_BLADE_AIRSPEED_SCALE) * (float)(v22 * HFD_BLADE_AIRSPEED_SCALE);
    v251 = v19 * v23;
    v252 = v20 * v23;
    v253 = v21 * v23;
    I_fclamp(v22 * 0.1, 0.0, 1.0);
    v226 = (float)(v7 * v6) * HFD_BLADE_AIRSPEED_SCALE;
    a.v[0] = 0.0;
    a.v[1] = 0.0;
    a.v[2] = 0.0;
    sum.v[0] = 0.0;
    sum.v[1] = 0.0;
    sum.v[2] = 0.0;
    v273.v[0] = 0.0;
    v273.v[1] = 0.0;
    v273.v[2] = 0.0;
    if ( v3 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
      __debugbreak();
    v24 = _xmm;
    LODWORD(in1.v[0]) = LODWORD(v266.v[0]) ^ _xmm;
    LODWORD(in1.v[1]) = LODWORD(v266.v[1]) ^ _xmm;
    LODWORD(in1.v[2]) = LODWORD(v266.v[2]) ^ _xmm;
    in1.v[3] = v266.v[3];
    QuatMultiply(&in1, &out, &v288);
    v25 = (float)(1.0 / v3) * 0.5;
    _XMM1 = LODWORD(v288.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    b.v[0] = *(float *)&_XMM0 * v25;
    _XMM1 = LODWORD(v288.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    v32 = *(float *)&_XMM0 * v25;
    b.v[1] = *(float *)&_XMM0 * v25;
    _XMM1 = LODWORD(v288.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm12, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    b.v[2] = *(float *)&_XMM0 * v25;
    if ( (LODWORD(b.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v32) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(*(float *)&_XMM0 * v25) & 0x7F800000) == 2139095040 )
    {
      v270.v[0] = 0.0;
      v270.v[1] = 0.0;
      v270.v[2] = 0.0;
    }
    else
    {
      v270 = b;
    }
    m_BladeCount = this->m_BladeCount;
    v37 = 0;
    v38 = 0i64;
    if ( m_BladeCount >= 4 )
    {
      v39 = 2;
      p_m_BladeDeflection = &this->m_RotorBlades[1].m_BladeDeflection;
      v37 = 4 * ((unsigned __int64)(m_BladeCount - 4) >> 2) + 4;
      do
      {
        *(float *)&v292[v38] = this->m_RotorBlades[(v39 - 1) % (int)m_BladeCount].m_BladeDeflection - *(p_m_BladeDeflection - 11);
        *(float *)&v292[v38 + 1] = this->m_RotorBlades[v39 % (int)m_BladeCount].m_BladeDeflection - *p_m_BladeDeflection;
        *(float *)&v292[v38 + 2] = this->m_RotorBlades[(v39 + 1) % (int)m_BladeCount].m_BladeDeflection - p_m_BladeDeflection[11];
        *(float *)&v292[v38 + 3] = this->m_RotorBlades[(v39 + 2) % (int)m_BladeCount].m_BladeDeflection - p_m_BladeDeflection[22];
        v39 += 4;
        v38 += 4i64;
        p_m_BladeDeflection += 44;
      }
      while ( v38 < m_BladeCount - 3 );
    }
    if ( v38 < m_BladeCount )
    {
      v41 = v37 + 1;
      v42 = &this->m_RotorBlades[v38].m_BladeDeflection;
      do
      {
        *(float *)&v292[v38] = this->m_RotorBlades[v41 % (int)m_BladeCount].m_BladeDeflection - *v42;
        ++v41;
        ++v38;
        v42 += 11;
      }
      while ( v38 < m_BladeCount );
    }
    v241 = 0.0;
    v43 = _xmm;
    if ( (int)m_BladeCount > 0 )
    {
      m_RotorBlades = this->m_RotorBlades;
      do
      {
        v45 = v11 + 1;
        v46 = (v11 + 1) % (int)m_BladeCount;
        m_BladeDirection = m_RotorBlades->m_BladeDirection;
        QuatTransform(&out, &m_BladeDirection, &v283);
        _XMM6 = LODWORD(this->m_BladeMaxDeflection);
        _XMM8 = LODWORD(m_RotorBlades->m_BladeDeflection);
        if ( COERCE_FLOAT(_XMM6 ^ v24) > *(float *)&_XMM6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", COERCE_FLOAT(_XMM6 ^ v24), *(float *)&_XMM6) )
          __debugbreak();
        __asm
        {
          vmaxss  xmm0, xmm8, xmm7
          vminss  xmm6, xmm6, xmm0
        }
        m_RotorBlades->m_BladeDeflection = *(float *)&_XMM6;
        v221 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM6 * HFD_BLADE_CORIOLIS_EFFECT) & v43) + v17;
        v51 = (float)((float)(v226 * v226) * this->m_BladeWeight) * HFD_ROTOR_CENTRIFUGAL_FORCE;
        v52 = v51 * v283.v[0];
        v223 = v51 * v283.v[0];
        v53 = v51 * v283.v[1];
        v243 = v51 * v283.v[1];
        v228 = v51 * v283.v[2];
        v54 = LODWORD(m_BladeDirection.v[0]);
        *(float *)&v54 = fsqrt((float)((float)(*(float *)&v54 * *(float *)&v54) + (float)(m_BladeDirection.v[1] * m_BladeDirection.v[1])) + (float)(*(float *)&_XMM6 * *(float *)&_XMM6));
        _XMM3 = v54;
        __asm
        {
          vcmpless xmm0, xmm3, xmm9
          vblendvps xmm1, xmm3, xmm13, xmm0
        }
        m_BladeDirection.v[0] = m_BladeDirection.v[0] * (float)(v17 / *(float *)&_XMM1);
        m_BladeDirection.v[1] = m_BladeDirection.v[1] * (float)(v17 / *(float *)&_XMM1);
        m_BladeDirection.v[2] = (float)(v17 / *(float *)&_XMM1) * *(float *)&_XMM6;
        QuatTransform(&out, &m_BladeDirection, &v260);
        *(float *)&_XMM6 = (float)(v260.v[2] * v270.v[1]) - (float)(v260.v[1] * v270.v[2]);
        v58 = LODWORD(v260.v[0]);
        v59 = (float)(v260.v[0] * v270.v[2]) - (float)(v260.v[2] * v270.v[0]);
        v60 = (float)(v260.v[1] * v270.v[0]) - (float)(v260.v[0] * v270.v[1]);
        *(float *)&v58 = fsqrt((float)((float)(v59 * v59) + (float)(*(float *)&_XMM6 * *(float *)&_XMM6)) + (float)(v60 * v60));
        _XMM3 = v58;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm13, xmm0
        }
        *(float *)&_XMM0 = v17 / *(float *)&_XMM1;
        v64 = (float)(v17 / *(float *)&_XMM1) * *(float *)&_XMM6;
        v247 = v64;
        v65 = *(float *)&_XMM0 * v59;
        v238 = v65;
        v66 = *(float *)&_XMM0 * v60;
        v232 = v66;
        v67 = (float)(*(float *)&v58 * v3) * 0.025400002;
        if ( v67 < v5 )
        {
          v64 = this->m_RotorAxis.v[0];
          v247 = v64;
          v65 = this->m_RotorAxis.v[1];
          v238 = v65;
          v66 = this->m_RotorAxis.v[2];
          v232 = v66;
        }
        v68 = (float)(v67 * HFD_BLADE_AIRSPEED_SCALE) * HFD_BLADE_EXTERNAL_ROTATION_FACTOR;
        v239 = v64 * v68;
        v69 = v65 * v68;
        v70 = v68 * v66;
        v234 = (float)(v64 * v68) * v67;
        v236 = (float)(v65 * v68) * v67;
        v217 = (float)(v68 * v66) * v67;
        v244 = (float)((float)(v260.v[2] * v53) - (float)(v260.v[1] * v228)) * HFD_ROTOR_CENTRIFUGAL_TORQUE;
        v245 = (float)((float)(v260.v[0] * v228) - (float)(v260.v[2] * v52)) * HFD_ROTOR_CENTRIFUGAL_TORQUE;
        v246 = (float)((float)(v260.v[1] * v52) - (float)(v260.v[0] * v53)) * HFD_ROTOR_CENTRIFUGAL_TORQUE;
        v71 = v11;
        QuatTransform(&out, &this->m_RotorBlades[v71].m_BladeRotationDirection, &v261);
        v225 = (float)(v261.v[1] * v260.v[2]) - (float)(v261.v[2] * v260.v[1]);
        v227 = (float)(v261.v[2] * v260.v[0]) - (float)(v261.v[0] * v260.v[2]);
        v224 = (float)(v261.v[0] * v260.v[1]) - (float)(v261.v[1] * v260.v[0]);
        v72 = (float)(v64 * v261.v[0]) + (float)(v261.v[1] * v238);
        v73 = (float)(v72 + (float)(v261.v[2] * v232)) * v261.v[0];
        v74 = v261.v[1] * (float)(v72 + (float)(v261.v[2] * v232));
        v75 = v261.v[2] * (float)(v72 + (float)(v261.v[2] * v232));
        QuatTransform(&v291, &m_BladeDirection, &v279);
        v77 = LODWORD(v260.v[1]);
        v76 = v260.v[1] - v279.v[1];
        *(float *)&v77 = fsqrt((float)((float)(v76 * v76) + (float)((float)(v260.v[0] - v279.v[0]) * (float)(v260.v[0] - v279.v[0]))) + (float)((float)(v260.v[2] - v279.v[2]) * (float)(v260.v[2] - v279.v[2])));
        _XMM3 = v77;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm2, xmm0
        }
        v81 = LODWORD(FLOAT_1_0);
        v279.v[0] = (float)(1.0 / *(float *)&_XMM1) * (float)(v260.v[0] - v279.v[0]);
        v279.v[1] = (float)(1.0 / *(float *)&_XMM1) * (float)(v260.v[1] - v279.v[1]);
        v279.v[2] = (float)(1.0 / *(float *)&_XMM1) * (float)(v260.v[2] - v279.v[2]);
        *(float *)&_XMM3 = (float)((float)(v279.v[0] * v261.v[0]) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * v76) * v261.v[1])) + (float)(v279.v[2] * v261.v[2]);
        v82 = (float)(*(float *)&_XMM3 * v261.v[0]) + v73;
        v83 = (float)(*(float *)&_XMM3 * v261.v[1]) + v74;
        v84 = (float)(*(float *)&_XMM3 * v261.v[2]) + v75;
        *(float *)&v81 = fsqrt((float)((float)(v83 * v83) + (float)(v82 * v82)) + (float)(v84 * v84));
        _XMM1 = v81;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm1, xmm1, xmm2, xmm0
        }
        v261.v[0] = (float)(1.0 / *(float *)&_XMM1) * v82;
        v261.v[1] = (float)(1.0 / *(float *)&_XMM1) * v83;
        v261.v[2] = (float)(1.0 / *(float *)&_XMM1) * v84;
        v88 = v221;
        v89 = LODWORD(v221);
        v90 = (float)((float)((float)(v221 * v226) * v261.v[0]) + v248) + v239;
        *(float *)&v89 = (float)((float)((float)(v221 * v226) * v261.v[1]) + v249) + v69;
        v91 = v89;
        v92 = (float)((float)((float)(v221 * v226) * v261.v[2]) + v250) + v70;
        v94 = LODWORD(FLOAT_0_5);
        *(float *)&v94 = 0.5 - (float)((float)((float)((float)(v260.v[0] * v229) + (float)(v260.v[1] * v230)) + (float)(v260.v[2] * v231)) * 0.5);
        _XMM2 = v94;
        LODWORD(_XMM12) = 0;
        __asm { vmaxss  xmm0, xmm2, xmm12 }
        v17 = FLOAT_1_0;
        __asm { vminss  xmm0, xmm0, xmm13; value }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, HFD_BLADE_DISYMMETRY_LIFT_EXPO);
        v240 = fmodf_0(*(float *)&_XMM0 + HFD_BLADE_DISYMMETRY_LIFT_ANGLE_OFFSET, 1.0);
        v98 = LODWORD(FLOAT_0_5);
        *(float *)&v98 = 0.5 - (float)((float)((float)((float)(v229 * v261.v[0]) + (float)(v230 * v261.v[1])) + (float)(v231 * v261.v[2])) * 0.5);
        _XMM2 = v98;
        __asm
        {
          vmaxss  xmm2, xmm2, xmm12
          vminss  xmm0, xmm2, xmm13; value
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, HFD_BLADE_DISYMMETRY_LIFT_EXPO);
        v222 = fmodf_0(*(float *)&_XMM0 + HFD_BLADE_DISYMMETRY_LIFT_ANGLE_OFFSET, 1.0);
        v103 = v91;
        v101 = (float)((float)(*(float *)&v91 * *(float *)&v91) + (float)(v90 * v90)) + (float)(v92 * v92);
        *(float *)&v103 = fsqrt(v101);
        _XMM4 = v103;
        __asm
        {
          vcmpless xmm1, xmm4, xmm15
          vblendvps xmm2, xmm4, xmm13, xmm1
        }
        v265.v[0] = (float)(1.0 / *(float *)&_XMM2) * v90;
        v265.v[1] = (float)(1.0 / *(float *)&_XMM2) * *(float *)&v91;
        v265.v[2] = (float)(1.0 / *(float *)&_XMM2) * v92;
        if ( *(float *)&v103 <= 400.0 && *(float *)&v103 >= 0.001 )
        {
          v106 = v234;
          v107 = v236;
          v108 = v217;
        }
        else
        {
          v261.v[0] = 0.0;
          v261.v[1] = 0.0;
          v261.v[2] = 0.0;
          v106 = 0.0;
          v107 = 0.0;
          v108 = 0.0;
        }
        v109 = HFD_BLADE_STALL_SPEED * HFD_BLADE_STALL_SPEED;
        if ( (LODWORD(v101) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 453, ASSERT_TYPE_SANITY, "( !IS_NAN( normalizedSq ) )", (const char *)&queryFormat, "!IS_NAN( normalizedSq )") )
          __debugbreak();
        v110 = I_fclamp((float)(v101 * 0.0000086505188) - 1.0, 0.0, 1.0);
        v235 = (float)(1.0 - *(float *)&v110) * (float)(1.0 - (float)(v109 / (float)(v101 + v109)));
        v111 = (float)(v88 * (float)(v226 * v226)) * v88;
        v237 = fsqrt((float)((float)((float)((float)((float)(v111 * v261.v[1]) + v252) + v107) * (float)((float)((float)(v111 * v261.v[1]) + v252) + v107)) + (float)((float)((float)((float)(v111 * v261.v[0]) + v251) + v106) * (float)((float)((float)(v111 * v261.v[0]) + v251) + v106))) + (float)((float)((float)((float)(v111 * v261.v[2]) + v253) + v108) * (float)((float)((float)(v111 * v261.v[2]) + v253) + v108)));
        v113 = LODWORD(HFD_BLADE_COLLECTIVE_MAX_PITCH);
        *(float *)&v113 = (float)(HFD_BLADE_COLLECTIVE_MAX_PITCH * this->m_SwashplateCollective) + (float)((float)((float)((float)((float)((float)(v260.v[0] * cross.v[0]) + (float)(v260.v[1] * cross.v[1])) + (float)(v260.v[2] * cross.v[2])) * this->m_SwashplateCyclicForward) + (float)((float)((float)((float)(v260.v[0] * v1.v[0]) + (float)(v260.v[1] * v1.v[1])) + (float)(v260.v[2] * v1.v[2])) * this->m_SwashplateCyclicLateral)) * HFD_BLADE_CYCLIC_MAX_PITCH);
        v112 = v113;
        m_RotorBlades->m_BladePitch = *(float *)&v113;
        if ( ((LODWORD(v261.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v261.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v261.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeTipSpeedVectorNormalized )[0] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[1] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeTipSpeedVectorNormalized )[0] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[1] ) && !IS_NAN( ( bladeTipSpeedVectorNormalized )[2] )") )
          __debugbreak();
        _XMM1 = LODWORD(v261.v[0]);
        __asm { vunpcklps xmm1, xmm1, xmm0 }
        *(double *)v261.v = *(double *)&_XMM1;
        *(double *)dir.v = *(double *)&_XMM1;
        dir.v[2] = v261.v[2];
        if ( ((LODWORD(v225) & 0x7F800000) == 2139095040 || (LODWORD(v227) & 0x7F800000) == 2139095040 || (LODWORD(v224) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3985, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeUp )[0] ) && !IS_NAN( ( bladeUp )[1] ) && !IS_NAN( ( bladeUp )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeUp )[0] ) && !IS_NAN( ( bladeUp )[1] ) && !IS_NAN( ( bladeUp )[2] )") )
          __debugbreak();
        v116 = (float)(v225 * *(float *)&v113) + dir.v[0];
        v117 = LODWORD(v227);
        v118 = (float)(v227 * *(float *)&v112) + dir.v[1];
        v119 = (float)(v224 * *(float *)&v112) + dir.v[2];
        *(float *)&v117 = fsqrt((float)((float)(v118 * v118) + (float)(v116 * v116)) + (float)(v119 * v119));
        _XMM1 = v117;
        __asm
        {
          vcmpless xmm0, xmm1, xmm15
          vblendvps xmm1, xmm1, xmm13, xmm0
        }
        v123 = v116 * (float)(1.0 / *(float *)&_XMM1);
        dir.v[0] = v123;
        v124 = v118 * (float)(1.0 / *(float *)&_XMM1);
        dir.v[1] = v124;
        v126 = v119 * (float)(1.0 / *(float *)&_XMM1);
        v125 = v126;
        dir.v[2] = v126;
        if ( (LODWORD(v123) & 0x7F800000) == 2139095040 || (LODWORD(v124) & 0x7F800000) == 2139095040 || (LODWORD(v126) & 0x7F800000) == 2139095040 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3988, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladePitch )[0] ) && !IS_NAN( ( bladePitch )[1] ) && !IS_NAN( ( bladePitch )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladePitch )[0] ) && !IS_NAN( ( bladePitch )[1] ) && !IS_NAN( ( bladePitch )[2] )") )
            __debugbreak();
          v123 = dir.v[0];
          v124 = dir.v[1];
          v125 = dir.v[2];
        }
        v127 = v260.v[1];
        v128 = v260.v[2];
        v255 = (float)(v125 * v260.v[1]) - (float)(v124 * v260.v[2]);
        v129 = v260.v[0];
        v256 = (float)(v260.v[2] * v123) - (float)(v125 * v260.v[0]);
        v219 = (float)(v124 * v260.v[0]) - (float)(v260.v[1] * v123);
        if ( (LODWORD(v255) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)(v260.v[2] * v123) - (float)(v125 * v260.v[0])) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)(v124 * v260.v[0]) - (float)(v260.v[1] * v123)) & 0x7F800000) == 2139095040 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 3991, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeNormalToPitch )[0] ) && !IS_NAN( ( bladeNormalToPitch )[1] ) && !IS_NAN( ( bladeNormalToPitch )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeNormalToPitch )[0] ) && !IS_NAN( ( bladeNormalToPitch )[1] ) && !IS_NAN( ( bladeNormalToPitch )[2] )") )
            __debugbreak();
          v123 = dir.v[0];
          v124 = dir.v[1];
          v125 = dir.v[2];
          v129 = v260.v[0];
          v127 = v260.v[1];
          v128 = v260.v[2];
        }
        v218 = (float)(v125 * v265.v[1]) - (float)(v124 * v265.v[2]);
        v130 = (float)(v123 * v265.v[2]) - (float)(v125 * v265.v[0]);
        v131 = (float)(v124 * v265.v[0]) - (float)(v123 * v265.v[1]);
        m_BladeMaxDeflection = this->m_BladeMaxDeflection;
        if ( m_BladeMaxDeflection <= 0.001 )
        {
          v137 = 0.0;
        }
        else
        {
          v133 = LODWORD(HFD_BLADE_BLOWBACK_MULTIPLIER);
          *(float *)&v133 = (float)(HFD_BLADE_BLOWBACK_MULTIPLIER * v242) * HFD_BLADE_LOCAL_AIRFLOW_SCALE;
          _XMM1 = v133;
          __asm
          {
            vmaxss  xmm1, xmm1, xmm12
            vminss  xmm0, xmm1, xmm13
          }
          v137 = *(float *)&_XMM0 * (float)((float)((float)(1.0 - v222) - v222) * HFD_BLADE_AOA_CHANGE_DEFLECTION);
        }
        v138 = (float)((float)((float)(v129 * v218) + (float)(v127 * v130)) + (float)(v128 * v131)) + v137;
        v241 = *(float *)&v112 + v241;
        _XMM14 = v112 & _xmm;
        __asm { vmaxss  xmm0, xmm14, [rbp+2E0h+var_350] }
        v141 = LODWORD(FLOAT_1_0);
        *(float *)&v141 = (float)((float)(1.0 - (float)(COERCE_FLOAT(v292[v46] & _xmm) * HFD_BLADE_TRACKING_LIFT_LOSS)) * 0.5) / m_BladeMaxDeflection;
        _XMM2 = v141;
        __asm
        {
          vmaxss  xmm0, xmm2, xmm12
          vminss  xmm1, xmm0, xmm13
        }
        *(float *)&v141 = v138 * FlightDynamicsManager->m_AirfoilData.m_AoAadjustment;
        *(double *)&_XMM0 = HelicopterRotorBlade::ApplyDeflectionForce(&this->m_RotorBlades[v71], (float)((float)((float)((float)((float)(v227 * FlightDynamicsManager->m_UpAxis.v[1]) + (float)(v225 * FlightDynamicsManager->m_UpAxis.v[0])) + (float)(v224 * FlightDynamicsManager->m_UpAxis.v[2])) * HFD_GRAVITY_CORRECTOR) * HFD_BLADE_GRAVITY_MODIFIER) + (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)&v141 / (float)((float)((float)(*(float *)&v141 * (float)(*(float *)&v141 * *(float *)&v141)) * *(float *)&v141) + (float)((float)(*(float *)&v141 * *(float *)&v141) + FlightDynamicsManager->m_AirfoilData.m_LiftBaseCurve))) * FlightDynamicsManager->m_AirfoilData.m_LiftSlopeCurve) * FlightDynamicsManager->m_AirfoilData.m_MaxCL) * (float)(1.0 - fsqrt((float)((float)(v218 * v218) + (float)(v130 * v130)) + (float)(v131 * v131)))) * v254) * v235) * (float)(0.5 * v237)) * (float)(*(float *)&_XMM1 * HFD_BLADE_TRACKING_LIFT_LOSS)), (float)((float)((float)(v244 * v261.v[0]) + (float)(v261.v[1] * v245)) + (float)(v261.v[2] * v246)) * HFD_ROTOR_DEFLECTION_FORCE, m_BladeMaxDeflection, dT);
        v145 = LODWORD(HFD_BLADE_BLOWBACK_MULTIPLIER);
        *(float *)&v145 = (float)((float)(HFD_BLADE_BLOWBACK_MULTIPLIER * v242) * 4.0) * HFD_BLADE_LOCAL_AIRFLOW_SCALE;
        _XMM4 = v145;
        __asm
        {
          vmaxss  xmm1, xmm4, xmm12
          vminss  xmm2, xmm1, xmm13
        }
        v150 = _XMM2;
        *(float *)&v150 = *(float *)&_XMM2 * v240;
        _XMM3 = v150;
        __asm
        {
          vmaxss  xmm1, xmm3, xmm12
          vminss  xmm4, xmm1, xmm13
        }
        *(float *)&_XMM1 = (float)((float)((float)((float)(*(float *)&_XMM0 * HFD_BLADE_TURBULENT_AIRFLOW_LIFT_SCALE) + *(float *)&_XMM0) * (float)(1.0 - *(float *)&_XMM4)) + (float)((float)(*(float *)&_XMM0 - (float)(*(float *)&_XMM0 * HFD_BLADE_TURBULENT_AIRFLOW_LIFT_SCALE)) * *(float *)&_XMM4)) * HFD_BLADE_STATIC_LIFT_FACTOR;
        v153 = *(float *)&_XMM1 * v255;
        v154 = *(float *)&_XMM1 * v256;
        v155 = *(float *)&_XMM1 * v219;
        v157 = LODWORD(HFD_BLADE_DRAG_AIRSPEED_RATIO);
        *(float *)&v157 = HFD_BLADE_DRAG_AIRSPEED_RATIO * v257;
        _XMM1 = v157;
        __asm
        {
          vmaxss  xmm1, xmm1, xmm12
          vminss  xmm3, xmm1, xmm13
        }
        LODWORD(_XMM2) = COERCE_UNSIGNED_INT((float)((float)((float)((float)((float)((float)(v138 * FlightDynamicsManager->m_AirfoilData.m_CDslope) * (float)(v138 * FlightDynamicsManager->m_AirfoilData.m_CDslope)) * (float)(v138 * FlightDynamicsManager->m_AirfoilData.m_CDslope)) * (float)(v138 * FlightDynamicsManager->m_AirfoilData.m_CDslope)) + FlightDynamicsManager->m_AirfoilData.m_CDbase) * (float)((float)((float)(1.0 - *(float *)&_XMM3) * HFD_BLADE_DRAG_STATIC_RATIO) + (float)(*(float *)&_XMM3 * HFD_BLADE_DRAG_DYNAMIC_RATIO))) * (float)(0.5 * v237)) ^ _xmm;
        v160 = HFD_BLADE_DRAG_FACTOR * (float)(*(float *)&_XMM2 * v265.v[0]);
        v161 = HFD_BLADE_DRAG_FACTOR * (float)(*(float *)&_XMM2 * v265.v[1]);
        v162 = HFD_BLADE_DRAG_FACTOR * (float)(*(float *)&_XMM2 * v265.v[2]);
        if ( ((LODWORD(v153) & 0x7F800000) == 2139095040 || (LODWORD(v154) & 0x7F800000) == 2139095040 || (LODWORD(v155) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4043, ASSERT_TYPE_SANITY, "( !IS_NAN( ( liftForceStatic )[0] ) && !IS_NAN( ( liftForceStatic )[1] ) && !IS_NAN( ( liftForceStatic )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( liftForceStatic )[0] ) && !IS_NAN( ( liftForceStatic )[1] ) && !IS_NAN( ( liftForceStatic )[2] )") )
          __debugbreak();
        if ( ((LODWORD(v160) & 0x7F800000) == 2139095040 || (LODWORD(v161) & 0x7F800000) == 2139095040 || (LODWORD(v162) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4044, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dragForceScaled )[0] ) && !IS_NAN( ( dragForceScaled )[1] ) && !IS_NAN( ( dragForceScaled )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dragForceScaled )[0] ) && !IS_NAN( ( dragForceScaled )[1] ) && !IS_NAN( ( dragForceScaled )[2] )") )
          __debugbreak();
        if ( ((LODWORD(v223) & 0x7F800000) == 2139095040 || (LODWORD(v243) & 0x7F800000) == 2139095040 || (LODWORD(v228) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4045, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bladeCentrifugalForce )[0] ) && !IS_NAN( ( bladeCentrifugalForce )[1] ) && !IS_NAN( ( bladeCentrifugalForce )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bladeCentrifugalForce )[0] ) && !IS_NAN( ( bladeCentrifugalForce )[1] ) && !IS_NAN( ( bladeCentrifugalForce )[2] )") )
          __debugbreak();
        b.v[0] = (float)((float)(v153 + 0.0) + v160) + v223;
        b.v[1] = (float)((float)(v154 + 0.0) + v161) + v243;
        b.v[2] = (float)((float)(v155 + 0.0) + v162) + v228;
        v163 = (float)(v260.v[1] * v153) - (float)(v154 * v260.v[0]);
        v164 = (float)((float)(v260.v[2] * v154) - (float)(v260.v[1] * v155)) * v258;
        v165 = (float)((float)(v155 * v260.v[0]) - (float)(v260.v[2] * v153)) * v258;
        v272.v[0] = (float)(v260.v[2] * v265.v[1]) - (float)(v260.v[1] * v265.v[2]);
        v166 = (float *)vec3_t::operator[](&v260, 0);
        v167 = v265.v[2] * *v166;
        v168 = *vec3_t::operator[](&v265, 0);
        v169 = v167 - (float)(v168 * *vec3_t::operator[](&v260, 2));
        *vec3_t::operator[](&v272, 1) = v169;
        v170 = *vec3_t::operator[](&v265, 0);
        v171 = *vec3_t::operator[](&v260, 1);
        v172 = *vec3_t::operator[](&v265, 1);
        v173 = (float)(v171 * v170) - (float)(v172 * *vec3_t::operator[](&v260, 0));
        *vec3_t::operator[](&v272, 2) = v173;
        v272.v[0] = (float)(v258 * HFD_BLADE_DRAG_TORQUE_FACTOR) * v272.v[0];
        v272.v[1] = (float)(v258 * HFD_BLADE_DRAG_TORQUE_FACTOR) * v272.v[1];
        v272.v[2] = (float)(v258 * HFD_BLADE_DRAG_TORQUE_FACTOR) * v272.v[2];
        in1.v[0] = (float)(v164 + 0.0) + v244;
        in1.v[1] = (float)(v165 + 0.0) + v245;
        in1.v[2] = (float)((float)(v163 * v258) + 0.0) + v246;
        v266.xyz = v272;
        if ( Physics_IsPredictiveWorld(this->m_worldId) && Sys_IsMainThread() )
        {
          if ( DEBUG_DRAW_LINES && drawBlade )
          {
            m_BladeLength = this->m_BladeLength;
            v175 = (float *)vec3_t::operator[](&this->m_Position, 0);
            start.v[0] = (float)(m_BladeLength * v260.v[0]) + *v175;
            v176 = (float *)vec3_t::operator[](&this->m_Position, 1);
            start.v[1] = (float)(m_BladeLength * v260.v[1]) + *v176;
            v177 = (float *)vec3_t::operator[](&this->m_Position, 2);
            start.v[2] = (float)(m_BladeLength * v260.v[2]) + *v177;
            v263.v[0] = (float)(30.0 * v261.v[0]) + start.v[0];
            v263.v[1] = (float)(30.0 * v261.v[1]) + start.v[1];
            v263.v[2] = (float)(30.0 * v261.v[2]) + start.v[2];
            FD_DebugLine(&start, &v263, &colorYellow, 0, DEBUG_LINE_TIME);
            v263.v[0] = (float)(30.0 * v229) + start.v[0];
            v263.v[1] = (float)(30.0 * v230) + start.v[1];
            v263.v[2] = (float)(30.0 * v231) + start.v[2];
            FD_DebugLine(&start, &v263, &colorGreen, 0, DEBUG_LINE_TIME);
            v263.v[0] = (float)(30.0 * v247) + start.v[0];
            v263.v[1] = (float)(30.0 * v238) + start.v[1];
            v263.v[2] = (float)(30.0 * v232) + start.v[2];
            FD_DebugLine(&start, &v263, &colorPurple, 0, DEBUG_LINE_TIME);
            v178 = FLOAT_50_0;
            v263.v[0] = (float)(50.0 * v265.v[0]) + start.v[0];
            v263.v[1] = (float)(50.0 * v265.v[1]) + start.v[1];
            v263.v[2] = (float)(50.0 * v265.v[2]) + start.v[2];
            FD_DebugLine(&start, &v263, &colorWhite, 0, DEBUG_LINE_TIME);
            v179 = v225;
            v263.v[0] = (float)(v225 * 30.0) + start.v[0];
            v263.v[1] = (float)(v227 * 30.0) + start.v[1];
            v180 = v224;
            v263.v[2] = (float)(v224 * 30.0) + start.v[2];
            FD_DebugLine(&start, &v263, &colorRed, 0, DEBUG_LINE_TIME);
            v263.v[0] = (float)(50.0 * dir.v[0]) + start.v[0];
            v263.v[1] = (float)(50.0 * dir.v[1]) + start.v[1];
            v263.v[2] = (float)(50.0 * dir.v[2]) + start.v[2];
            FD_DebugLine(&start, &v263, &colorBlack, 0, DEBUG_LINE_TIME);
          }
          else
          {
            v179 = v225;
            v180 = v224;
            v178 = FLOAT_50_0;
          }
          if ( DEBUG_DRAW_LINES_BLADE && drawBlade )
          {
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_fd_helicopter_show_blade_index, "fd_helicopter_show_blade_index");
            if ( Int_Internal_DebugName < 0 || Int_Internal_DebugName == v11 )
            {
              v182 = m_RotorBlades->m_BladeDeflection * 10.0;
              v260.v[0] = (float)(v179 * v182) + v260.v[0];
              v260.v[1] = (float)(v227 * v182) + v260.v[1];
              v260.v[2] = (float)(v180 * v182) + v260.v[2];
              v183 = this->m_BladeLength;
              v184 = (float *)vec3_t::operator[](&this->m_Position, 0);
              v285.v[0] = (float)(v183 * v260.v[0]) + *v184;
              v185 = (float *)vec3_t::operator[](&this->m_Position, 1);
              v285.v[1] = (float)(v183 * v260.v[1]) + *v185;
              v186 = (float *)vec3_t::operator[](&this->m_Position, 2);
              v285.v[2] = (float)(v183 * v260.v[2]) + *v186;
              color.v[0] = colorBlack.v[0];
              color.v[1] = colorBlack.v[1];
              v187 = *vec4_t::operator[](&colorBlack, 2);
              *vec4_t::operator[](&color, 2) = v187;
              v188 = *vec4_t::operator[](&colorBlack, 3);
              *vec4_t::operator[](&color, 3) = v188;
              Vec3Scale((const vec3_t *)&colorWhite, v222, (vec3_t *)&color);
              *vec4_t::operator[](&color, 3) = 1.0;
              if ( !Physics_IsPredictiveWorld(this->m_worldId) )
              {
                v189 = *vec4_t::operator[](&colorGreen, 0);
                *vec4_t::operator[](&color, 0) = v189;
                v190 = *vec4_t::operator[](&colorGreen, 1);
                *vec4_t::operator[](&color, 1) = v190;
                v191 = *vec4_t::operator[](&colorGreen, 2);
                *vec4_t::operator[](&color, 2) = v191;
                v192 = *vec4_t::operator[](&colorGreen, 3);
                *vec4_t::operator[](&color, 3) = v192;
              }
              FD_DebugLine(&this->m_Position, &v285, &color, 0, DEBUG_LINE_TIME);
              Vec3Mad(&this->m_Position, this->m_BladeWidth, &dir, &result);
              FD_DebugLine(&this->m_Position, &result, &color, 0, DEBUG_LINE_TIME);
              Vec3Mad(&result, this->m_BladeLength, &v260, &v289);
              FD_DebugLine(&result, &v289, &color, 0, DEBUG_LINE_TIME);
              FD_DebugLine(&v289, &v285, &color, 0, DEBUG_LINE_TIME);
            }
          }
          if ( DEBUG_DRAW_LINES_CENTRIFUGAL && drawBlade )
          {
            Vec3Mad(&this->m_Position, this->m_BladeLength, &v283, &v280);
            FD_DebugLine(&this->m_Position, &v280, &colorBlue, 0, DEBUG_LINE_TIME);
            Vec3Mad(&this->m_Position, this->m_BladeLength, &v260, &v280);
            Vec3Mad(&v280, v178, &v283, &v287);
            FD_DebugLine(&v280, &v287, &colorRed, 0, DEBUG_LINE_TIME);
            Vec3Mad(&v280, v178, &v261, &v287);
            FD_DebugLine(&v280, &v287, &colorPurple, 0, DEBUG_LINE_TIME);
          }
        }
        Vec3Add(&a, &b, &a);
        Vec3Add(&sum, (const vec3_t *)&in1, &sum);
        Vec3Add(&v273, (const vec3_t *)&v266, &v273);
        ++v11;
        ++m_RotorBlades;
        LODWORD(m_BladeCount) = this->m_BladeCount;
        v3 = dT;
        v24 = _xmm;
        v5 = FLOAT_0_001;
        v43 = _xmm;
      }
      while ( v45 < (int)m_BladeCount );
    }
    v193 = Vec3Dot(&sum, &this->m_RotorAxis);
    v194 = *(float *)&v193;
    v195 = Vec3Dot(&sum, &v1);
    v196 = *(float *)&v195;
    v197 = Vec3Dot(&sum, &cross);
    Vec3Scale(&v1, v196, (vec3_t *)&v266);
    Vec3Mad((const vec3_t *)&v266, *(float *)&v197, &cross, &sum);
    v198 = Vec3Dot(&v273, &this->m_RotorAxis);
    v199 = LODWORD(v198);
    v200 = Vec3Dot(&v273, &v1);
    v201 = *(float *)&v200;
    v202 = Vec3Dot(&v273, &cross);
    Vec3Scale(&v1, v201, (vec3_t *)&v266);
    Vec3Mad((const vec3_t *)&v266, *(float *)&v202, &cross, &v273);
    v203 = v199 & v43;
    if ( *(float *)&_XMM12 >= this->m_RotorRPM )
      v203 ^= v24;
    this->m_OpposingTorque = (float)(*(float *)&v203 * HFD_MAIN_ROTOR_OPPOSING_TORQUE_DRAG) + (float)(v194 * HFD_MAIN_ROTOR_OPPOSING_TORQUE_LIFT);
    Vec3Scale(&a, HFD_BLADE_LIFT_RATIO, &a);
    Vec3Add(&a, &this->m_LiftForceVector, &this->m_LiftForceVector);
    Vec3Cross(&sum, &this->m_RotorAxis, (vec3_t *)&v266);
    Vec3Scale((const vec3_t *)&v266, HFD_BLADE_TORQUE_RATIO, (vec3_t *)&v266);
    Vec3Add((const vec3_t *)&v266, &this->m_LiftTorqueVector, &this->m_LiftTorqueVector);
    v204 = vec3_t::operator[](&this->m_LiftTorqueVector, 0);
    if ( IS_NAN(*v204) || (v205 = vec3_t::operator[](&this->m_LiftTorqueVector, 1), IS_NAN(*v205)) || (v206 = vec3_t::operator[](&this->m_LiftTorqueVector, 2), IS_NAN(*v206)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4203, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_LiftTorqueVector )[0] ) && !IS_NAN( ( m_LiftTorqueVector )[1] ) && !IS_NAN( ( m_LiftTorqueVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_LiftTorqueVector )[0] ) && !IS_NAN( ( m_LiftTorqueVector )[1] ) && !IS_NAN( ( m_LiftTorqueVector )[2] )") )
        __debugbreak();
    }
    v207 = vec3_t::operator[](&this->m_LiftForceVector, 0);
    if ( IS_NAN(*v207) || (v208 = vec3_t::operator[](&this->m_LiftForceVector, 1), IS_NAN(*v208)) || (v209 = vec3_t::operator[](&this->m_LiftForceVector, 2), IS_NAN(*v209)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_helicopter_dynamics.cpp", 4204, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_LiftForceVector )[0] ) && !IS_NAN( ( m_LiftForceVector )[1] ) && !IS_NAN( ( m_LiftForceVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_LiftForceVector )[0] ) && !IS_NAN( ( m_LiftForceVector )[1] ) && !IS_NAN( ( m_LiftForceVector )[2] )") )
        __debugbreak();
    }
    v210 = Vec3Dot(&v270, &v1);
    v211 = LODWORD(v210) & v43;
    v212 = Vec3Dot(&v270, &cross);
    v213 = (float)((float)((float)(COERCE_FLOAT(LODWORD(v212) & v43) + *(float *)&v211) * HFD_BLADE_AVERAGE_TURBULENCE_CHANGE) * v3) + this->m_AverageBladeTurbulence;
    this->m_AverageBladeTurbulence = v213;
    v214 = FlightDynamics::CalculateDrag(v213, HFD_BLADE_AVERAGE_TURBULENCE_DECAY, v3);
    this->m_AverageBladeTurbulence = *(float *)&v214;
    v215 = (float)((float)(COERCE_FLOAT(LODWORD(this->m_SwashplateCollective) & v43) * HFD_BLADE_AUDIO_AIRSPEED_CHANGE) * v3) + this->m_AveragePitchChange;
    this->m_AveragePitchChange = v215;
    v216 = FlightDynamics::CalculateDrag(v215, HFD_BLADE_AUDIO_AIRSPEED_DECAY, v3);
    this->m_AveragePitchChange = *(float *)&v216;
    if ( Physics_IsPredictiveWorld(this->m_worldId) && Sys_IsMainThread() && DEBUG_DRAW_LINES )
    {
      Vec3Mad(&this->m_Position, 0.0099999998, &this->m_LiftForceVector, &end);
      FD_DebugLine(&this->m_Position, &end, &colorPurple, 0, DEBUG_LINE_TIME);
      Vec3Mad(&this->m_Position, 0.0099999998, &this->m_AirflowVelocity, &end);
      FD_DebugLine(&this->m_Position, &end, &colorBlue, 0, DEBUG_LINE_TIME);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
FlightDynamicsRotorSystem::UpdateSteps
==============
*/
void FlightDynamicsRotorSystem::UpdateSteps(FlightDynamicsRotorSystem *this, float dT, int steps, bool drawBlade)
{
  __int64 v5; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float m_RotorPosition; 
  vec3_t m_LiftForceVector; 
  __int64 v20; 

  v20 = -2i64;
  v5 = (unsigned int)steps;
  v7 = dT * (float)(1.0 / (float)steps);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamicsRotorSystem::UpdateSteps");
  if ( (int)v5 <= 0 )
  {
    m_RotorPosition = this->m_RotorPosition;
  }
  else
  {
    do
    {
      v8 = this->m_LiftTorqueVector.v[0];
      v9 = this->m_LiftTorqueVector.v[1];
      v10 = this->m_LiftTorqueVector.v[2];
      v11 = this->m_LiftForceVector.v[0];
      v12 = this->m_LiftForceVector.v[1];
      v13 = this->m_LiftForceVector.v[2];
      *(_QWORD *)this->m_LiftForceVector.v = 0i64;
      *(_QWORD *)&this->m_LiftForceVector.z = 0i64;
      *(_QWORD *)&this->m_LiftTorqueVector.y = 0i64;
      FlightDynamicsRotorSystem::UpdateRotor(this, v7, drawBlade);
      v14 = v7 * HFD_ROTOR_LIFT_TORQUE_RATE;
      this->m_LiftTorqueVector.v[0] = (float)((float)(this->m_LiftTorqueVector.v[0] - v8) * (float)(v7 * HFD_ROTOR_LIFT_TORQUE_RATE)) + v8;
      this->m_LiftTorqueVector.v[1] = (float)((float)(this->m_LiftTorqueVector.v[1] - v9) * v14) + v9;
      this->m_LiftTorqueVector.v[2] = (float)((float)(this->m_LiftTorqueVector.v[2] - v10) * v14) + v10;
      v16 = v7 * HFD_ROTOR_LIFT_FORCE_RATE;
      v15 = v7 * HFD_ROTOR_LIFT_FORCE_RATE;
      this->m_LiftForceVector.v[0] = (float)((float)(this->m_LiftForceVector.v[0] - v11) * (float)(v7 * HFD_ROTOR_LIFT_FORCE_RATE)) + v11;
      this->m_LiftForceVector.v[1] = (float)((float)(this->m_LiftForceVector.v[1] - v12) * v16) + v12;
      this->m_LiftForceVector.v[2] = (float)((float)(this->m_LiftForceVector.v[2] - v13) * v15) + v13;
      m_LiftForceVector = this->m_LiftForceVector;
      FlightDynamicsRotorSystem::UpdateAirflowMomemtum(this, &m_LiftForceVector, v7);
      v17 = (float)((float)((float)(this->m_InputTorque - this->m_OpposingTorque) * this->m_InvRotorWeight) * v7) + this->m_RotorRPM;
      this->m_RotorRPM = v17;
      m_RotorPosition = (float)(v17 * v7) + this->m_RotorPosition;
      this->m_RotorPosition = m_RotorPosition;
      drawBlade = 0;
      --v5;
    }
    while ( v5 );
  }
  this->m_RotorPosition = fmodf_0(m_RotorPosition * 6.0, 360000.0) * 0.16666667;
  Sys_ProfEndNamedEvent();
}

