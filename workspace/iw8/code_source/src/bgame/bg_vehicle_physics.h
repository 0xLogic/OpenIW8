/*
==============
BgVehiclePhysics::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysics::StepClientKeyframe(BgVehiclePhysics *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysics@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysics::GetCameraRangeAddition
==============
*/

double __fastcall BgVehiclePhysics::GetCameraRangeAddition(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetCameraRangeAddition@BgVehiclePhysics@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::ReactToScriptableEvent
==============
*/

void __fastcall BgVehiclePhysics::ReactToScriptableEvent(BgVehiclePhysics *this, const ScriptableEventParams *eventParams, const ScriptableEventDef *eventDef)
{
  ?ReactToScriptableEvent@BgVehiclePhysics@@UEAAXPEBUScriptableEventParams@@PEBUScriptableEventDef@@@Z(this, eventParams, eventDef);
}

/*
==============
BgVehiclePhysics::GetSoundHorn
==============
*/

unsigned int __fastcall BgVehiclePhysics::GetSoundHorn(BgVehiclePhysics *this)
{
  return ?GetSoundHorn@BgVehiclePhysics@@UEBAIXZ(this);
}

/*
==============
BgVehiclePhysics::ComputeChassisVibrationNoise
==============
*/

void __fastcall BgVehiclePhysics::ComputeChassisVibrationNoise(BgVehiclePhysics *this, int time, vec3_t *outNoiseDisp)
{
  ?ComputeChassisVibrationNoise@BgVehiclePhysics@@UEBAXHAEATvec3_t@@@Z(this, time, outNoiseDisp);
}

/*
==============
BgVehiclePhysics::IsInAir
==============
*/

bool __fastcall BgVehiclePhysics::IsInAir(BgVehiclePhysics *this)
{
  return ?IsInAir@BgVehiclePhysics@@UEBA_NXZ(this);
}

/*
==============
BgVehiclePhysics::FireWeapon
==============
*/

void __fastcall BgVehiclePhysics::FireWeapon(BgVehiclePhysics *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ?FireWeapon@BgVehiclePhysics@@UEAAXAEBTvec3_t@@0PEBUWeaponDef@@@Z(this, dirWs, atWs, weapDef);
}

/*
==============
BgVehiclePhysics::ModifyMassFactorsOnContact
==============
*/

bool __fastcall BgVehiclePhysics::ModifyMassFactorsOnContact(BgVehiclePhysics *this, const BgVehicleCollisionCallbackInfo *collInfo, int indexCollInfo, vec4_t *outMassFactors)
{
  return ?ModifyMassFactorsOnContact@BgVehiclePhysics@@UEBA_NAEBUBgVehicleCollisionCallbackInfo@@HAEATvec4_t@@@Z(this, collInfo, indexCollInfo, outMassFactors);
}

/*
==============
BgVehiclePhysics::GetCameraFovDelta
==============
*/

double __fastcall BgVehiclePhysics::GetCameraFovDelta(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetCameraFovDelta@BgVehiclePhysics@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::MyChanges
==============
*/

bool __fastcall BgVehiclePhysics::MyChanges(BgVehiclePhysics *this, const VehicleDef *vehDef)
{
  return ?MyChanges@BgVehiclePhysics@@UEAA_NPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysics::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysics::SupportsFeature(BgVehiclePhysics *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysics@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysics::ReactToServerEvent
==============
*/

void __fastcall BgVehiclePhysics::ReactToServerEvent(BgVehiclePhysics *this, unsigned int eventType, unsigned int eventParam)
{
  ?ReactToServerEvent@BgVehiclePhysics@@UEAAXII@Z(this, eventType, eventParam);
}

/*
==============
BgVehiclePhysicsComponent::PostStep
==============
*/

void __fastcall BgVehiclePhysicsComponent::PostStep(BgVehiclePhysicsComponent *this, float deltaTime)
{
  ?PostStep@BgVehiclePhysicsComponent@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysics::UpdateAnimationParams
==============
*/

bool __fastcall BgVehiclePhysics::UpdateAnimationParams(BgVehiclePhysics *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  return ?UpdateAnimationParams@BgVehiclePhysics@@UEBA_NHPEAUVehicleWorldmodelAAnim@@@Z(this, vehicleSeat, outAnimParams);
}

/*
==============
BgVehiclePhysics::GetSoundValues
==============
*/

void __fastcall BgVehiclePhysics::GetSoundValues(BgVehiclePhysics *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  ?GetSoundValues@BgVehiclePhysics@@UEBAXHHAEAM00AEAH0@Z(this, clientNum, time, outThrottle, outBrake, outRpmNormal, outGear, outMph);
}

/*
==============
BgVehiclePhysicsComponent::MyChanges
==============
*/

bool __fastcall BgVehiclePhysicsComponent::MyChanges(BgVehiclePhysicsComponent *this, const VehicleDef *vehDef)
{
  return ?MyChanges@BgVehiclePhysicsComponent@@UEAA_NPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysics::GetCameraPitchAddition
==============
*/

double __fastcall BgVehiclePhysics::GetCameraPitchAddition(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetCameraPitchAddition@BgVehiclePhysics@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::CalcDamage
==============
*/

int __fastcall BgVehiclePhysics::CalcDamage(BgVehiclePhysics *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  return ?CalcDamage@BgVehiclePhysics@@UEBAHAEBUBgVehiclePhysicsDamageSetup@@AEATvec3_t@@@Z(this, dmgInfo, outDamageDir);
}

/*
==============
BgVehiclePhysics::GetSteeringAngle
==============
*/

double __fastcall BgVehiclePhysics::GetSteeringAngle(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetSteeringAngle@BgVehiclePhysics@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsSerialize::FixUpLoad
==============
*/

void __fastcall BgVehiclePhysicsSerialize::FixUpLoad(BgVehiclePhysicsSerialize *this, SaveGame *save, BGVehicles *vehicleSystem)
{
  ?FixUpLoad@BgVehiclePhysicsSerialize@@UEAAXPEAUSaveGame@@PEAVBGVehicles@@@Z(this, save, vehicleSystem);
}

/*
==============
BgVehiclePhysics::GetCameraReturnFactor
==============
*/

double __fastcall BgVehiclePhysics::GetCameraReturnFactor(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetCameraReturnFactor@BgVehiclePhysics@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::GetRagdollInitialImpact
==============
*/

void __fastcall BgVehiclePhysics::GetRagdollInitialImpact(BgVehiclePhysics *this, const vec3_t *entPos, bool killcam, int *outHitLoc, vec3_t *outImpactVec)
{
  ?GetRagdollInitialImpact@BgVehiclePhysics@@UEBAXAEBTvec3_t@@_NAEAHAEAT2@@Z(this, entPos, killcam, outHitLoc, outImpactVec);
}

/*
==============
BgVehiclePhysics::SetSoundHorn
==============
*/

void __fastcall BgVehiclePhysics::SetSoundHorn(BgVehiclePhysics *this, unsigned int hornHash)
{
  ?SetSoundHorn@BgVehiclePhysics@@UEAAXI@Z(this, hornHash);
}

/*
==============
BgVehiclePhysics::SupportsFeature
==============
*/
bool BgVehiclePhysics::SupportsFeature(BgVehiclePhysics *this, BgVehiclePhysicsFeature feat)
{
  return 0;
}

/*
==============
BgVehiclePhysics::CalcDamage
==============
*/
__int64 BgVehiclePhysics::CalcDamage(BgVehiclePhysics *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  __int64 result; 

  result = 0i64;
  *(_QWORD *)outDamageDir->v = 0i64;
  outDamageDir->v[2] = 0.0;
  return result;
}

/*
==============
BgVehiclePhysics::ComputeChassisVibrationNoise
==============
*/
void BgVehiclePhysics::ComputeChassisVibrationNoise(BgVehiclePhysics *this, int time, vec3_t *outNoiseDisp)
{
  ;
}

/*
==============
BgVehiclePhysics::FireWeapon
==============
*/
void BgVehiclePhysics::FireWeapon(BgVehiclePhysics *this, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ;
}

/*
==============
BgVehiclePhysicsSerialize::FixUpLoad
==============
*/
void BgVehiclePhysicsSerialize::FixUpLoad(BgVehiclePhysicsSerialize *this, SaveGame *save, BGVehicles *vehicleSystem)
{
  ;
}

/*
==============
BgVehiclePhysics::GetCameraFovDelta
==============
*/
float BgVehiclePhysics::GetCameraFovDelta(BgVehiclePhysics *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetCameraPitchAddition
==============
*/
float BgVehiclePhysics::GetCameraPitchAddition(BgVehiclePhysics *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetCameraRangeAddition
==============
*/
float BgVehiclePhysics::GetCameraRangeAddition(BgVehiclePhysics *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetCameraReturnFactor
==============
*/
float BgVehiclePhysics::GetCameraReturnFactor(BgVehiclePhysics *this)
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetRagdollInitialImpact
==============
*/
void BgVehiclePhysics::GetRagdollInitialImpact(BgVehiclePhysics *this, const vec3_t *entPos, bool killcam, int *outHitLoc)
{
  ;
}

/*
==============
BgVehiclePhysics::GetSoundHorn
==============
*/
__int64 BgVehiclePhysics::GetSoundHorn(BgVehiclePhysics *this)
{
  return 0i64;
}

/*
==============
BgVehiclePhysics::GetSoundValues
==============
*/
void BgVehiclePhysics::GetSoundValues(BgVehiclePhysics *this, const int clientNum, int time, float *outThrottle)
{
  ;
}

/*
==============
BgVehiclePhysics::GetSteeringAngle
==============
*/
float BgVehiclePhysics::GetSteeringAngle(BgVehiclePhysics *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::IsInAir
==============
*/
bool BgVehiclePhysics::IsInAir(BgVehiclePhysics *this)
{
  return 0;
}

/*
==============
BgVehiclePhysics::ModifyMassFactorsOnContact
==============
*/
bool BgVehiclePhysics::ModifyMassFactorsOnContact(BgVehiclePhysics *this, const BgVehicleCollisionCallbackInfo *collInfo, int indexCollInfo, vec4_t *outMassFactors)
{
  return 0;
}

/*
==============
BgVehiclePhysics::MyChanges
==============
*/
char BgVehiclePhysics::MyChanges(BgVehiclePhysics *this, const VehicleDef *vehDef)
{
  return 1;
}

/*
==============
BgVehiclePhysicsComponent::MyChanges
==============
*/
char BgVehiclePhysicsComponent::MyChanges(BgVehiclePhysicsComponent *this, const VehicleDef *vehDef)
{
  return 1;
}

/*
==============
BgVehiclePhysicsComponent::PostStep
==============
*/
void BgVehiclePhysicsComponent::PostStep(BgVehiclePhysicsComponent *this, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysics::ReactToScriptableEvent
==============
*/
void BgVehiclePhysics::ReactToScriptableEvent(BgVehiclePhysics *this, const ScriptableEventParams *eventParams, const ScriptableEventDef *eventDef)
{
  ;
}

/*
==============
BgVehiclePhysics::ReactToServerEvent
==============
*/
void BgVehiclePhysics::ReactToServerEvent(BgVehiclePhysics *this, unsigned int eventType, unsigned int eventParam)
{
  ;
}

/*
==============
BgVehiclePhysics::SetSoundHorn
==============
*/
void BgVehiclePhysics::SetSoundHorn(BgVehiclePhysics *this, unsigned int hornHash)
{
  ;
}

/*
==============
BgVehiclePhysics::StepClientKeyframe
==============
*/
void BgVehiclePhysics::StepClientKeyframe(BgVehiclePhysics *this, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysics::UpdateAnimationParams
==============
*/
bool BgVehiclePhysics::UpdateAnimationParams(BgVehiclePhysics *this, int vehicleSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  return 0;
}

