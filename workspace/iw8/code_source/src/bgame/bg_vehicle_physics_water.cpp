/*
==============
BgVehiclePhysicsZodiac::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysicsZodiac::CreatePhysics(BgVehiclePhysicsZodiac *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysicsZodiac@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysicsZodiac::ApplyEngine
==============
*/

void __fastcall BgVehiclePhysicsZodiac::ApplyEngine(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  ?ApplyEngine@BgVehiclePhysicsZodiac@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::VfxData::Reset
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::VfxData::Reset(BgVehiclePhysicsWaterBuoyancy::VfxData *this)
{
  ?Reset@VfxData@BgVehiclePhysicsWaterBuoyancy@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::DebugDraw
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::DebugDraw(BgVehiclePhysicsWaterBuoyancy *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehiclePhysicsWaterBuoyancy@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StopPlayerControlling
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::StopPlayerControlling(BgVehiclePhysicsWaterBuoyancy *this)
{
  ?StopPlayerControlling@BgVehiclePhysicsWaterBuoyancy@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsZodiac::Engine::Setup
==============
*/

void __fastcall BgVehiclePhysicsZodiac::Engine::Setup(BgVehiclePhysicsZodiac::Engine *this, const VehicleDef *vehDef)
{
  ?Setup@Engine@BgVehiclePhysicsZodiac@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Setup
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::Setup(BgVehiclePhysicsWaterBuoyancy *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsWaterBuoyancy@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ?UpdateTimeInAir@BgVehiclePhysicsWaterBuoyancy@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ?ComputeBuoyancySpheres@BgVehiclePhysicsWaterBuoyancy@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StartPlayerControlling
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::StartPlayerControlling(BgVehiclePhysicsWaterBuoyancy *this)
{
  ?StartPlayerControlling@BgVehiclePhysicsWaterBuoyancy@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::PostStep
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::PostStep(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ?PostStep@BgVehiclePhysicsWaterBuoyancy@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsZodiac::UpdateSetup
==============
*/

void __fastcall BgVehiclePhysicsZodiac::UpdateSetup(BgVehiclePhysicsZodiac *this)
{
  ?UpdateSetup@BgVehiclePhysicsZodiac@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Reset
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::Reset(BgVehiclePhysicsWaterBuoyancy *this)
{
  ?Reset@BgVehiclePhysicsWaterBuoyancy@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::Setup
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::SoundData::Setup(BgVehiclePhysicsWaterBuoyancy::SoundData *this, const VehicleDef *vehDef)
{
  ?Setup@SoundData@BgVehiclePhysicsWaterBuoyancy@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CollisionImpulseCallback
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::CollisionImpulseCallback(BgVehiclePhysicsWaterBuoyancy *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@BgVehiclePhysicsWaterBuoyancy@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::IsInAir
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::IsInAir(BgVehiclePhysicsWaterBuoyancy *this)
{
  return ?IsInAir@BgVehiclePhysicsWaterBuoyancy@@UEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ?ComputeWaterPlane@BgVehiclePhysicsWaterBuoyancy@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Step
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::Step(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsWaterBuoyancy@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsZodiac::Reset
==============
*/

void __fastcall BgVehiclePhysicsZodiac::Reset(BgVehiclePhysicsZodiac *this)
{
  ?Reset@BgVehiclePhysicsZodiac@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::StepClientKeyframe(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsWaterBuoyancy@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::SupportsFeature(BgVehiclePhysicsWaterBuoyancy *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsWaterBuoyancy@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::GetSoundValues
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::GetSoundValues(BgVehiclePhysicsWaterBuoyancy *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  ?GetSoundValues@BgVehiclePhysicsWaterBuoyancy@@UEBAXHHAEAM00AEAH0@Z(this, clientNum, time, outThrottle, outBrake, outRpmNormal, outGear, outMph);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ModifyMassFactorsOnContact
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::ModifyMassFactorsOnContact(BgVehiclePhysicsWaterBuoyancy *this, const BgVehicleCollisionCallbackInfo *collInfo, int indexCollInfo, vec4_t *outMassFactors)
{
  return ?ModifyMassFactorsOnContact@BgVehiclePhysicsWaterBuoyancy@@UEBA_NAEBUBgVehicleCollisionCallbackInfo@@HAEATvec4_t@@@Z(this, collInfo, indexCollInfo, outMassFactors);
}

/*
==============
BgVehiclePhysicsZodiac::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsZodiac::ApplyExtraGravity(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  ?ApplyExtraGravity@BgVehiclePhysicsZodiac@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsZodiac::Steering::Setup
==============
*/

void __fastcall BgVehiclePhysicsZodiac::Steering::Setup(BgVehiclePhysicsZodiac::Steering *this, const VehicleDef *vehDef)
{
  ?Setup@Steering@BgVehiclePhysicsZodiac@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySphereSingle
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySphereSingle(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph)
{
  ?ComputeBuoyancySphereSingle@BgVehiclePhysicsWaterBuoyancy@@IEAAXMAEAUBuoyancySphere@1@@Z(this, deltaTime, bsph);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::Reset
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::SoundData::Reset(BgVehiclePhysicsWaterBuoyancy::SoundData *this)
{
  ?Reset@SoundData@BgVehiclePhysicsWaterBuoyancy@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::UpdatePlayerInputControls(BgVehiclePhysicsWaterBuoyancy *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysicsWaterBuoyancy@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap(BgVehiclePhysicsWaterBuoyancy *this, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph, const vec4_t *plane)
{
  ?ComputeVolumeSphereCap@BgVehiclePhysicsWaterBuoyancy@@IEAAXAEAUBuoyancySphere@1@AEBTvec4_t@@@Z(this, bsph, plane);
}

/*
==============
BgVehiclePhysicsZodiac::Engine::Reset
==============
*/

void __fastcall BgVehiclePhysicsZodiac::Engine::Reset(BgVehiclePhysicsZodiac::Engine *this)
{
  ?Reset@Engine@BgVehiclePhysicsZodiac@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ReactToServerEvent
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ReactToServerEvent(BgVehiclePhysicsWaterBuoyancy *this, unsigned int eventType, unsigned int eventParam)
{
  ?ReactToServerEvent@BgVehiclePhysicsWaterBuoyancy@@UEAAXII@Z(this, eventType, eventParam);
}

/*
==============
BgVehiclePhysicsZodiac::Setup
==============
*/

bool __fastcall BgVehiclePhysicsZodiac::Setup(BgVehiclePhysicsZodiac *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsZodiac@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsZodiac::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsZodiac::ApplySteering(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  ?ApplySteering@BgVehiclePhysicsZodiac@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsZodiac::DampVelocities
==============
*/

void __fastcall BgVehiclePhysicsZodiac::DampVelocities(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  ?DampVelocities@BgVehiclePhysicsZodiac@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::FetchSound
==============
*/

unsigned int __fastcall BgVehiclePhysicsWaterBuoyancy::SoundData::FetchSound(BgVehiclePhysicsWaterBuoyancy::SoundData *this, const char *name)
{
  return ?FetchSound@SoundData@BgVehiclePhysicsWaterBuoyancy@@QEBAIPEBD@Z(this, name);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CalcDamage
==============
*/

int __fastcall BgVehiclePhysicsWaterBuoyancy::CalcDamage(BgVehiclePhysicsWaterBuoyancy *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  return ?CalcDamage@BgVehiclePhysicsWaterBuoyancy@@UEBAHAEBUBgVehiclePhysicsDamageSetup@@AEATvec3_t@@@Z(this, dmgInfo, outDamageDir);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysicsWaterBuoyancy::CreatePhysics(BgVehiclePhysicsWaterBuoyancy *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysicsWaterBuoyancy@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysicsZodiac::Step
==============
*/

bool __fastcall BgVehiclePhysicsZodiac::Step(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsZodiac@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::AfterPhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::AfterPhysicsWorldStep(BgVehiclePhysicsWaterBuoyancy *this, float lastPhysicsStepTime)
{
  ?AfterPhysicsWorldStep@BgVehiclePhysicsWaterBuoyancy@@UEAAXM@Z(this, lastPhysicsStepTime);
}

/*
==============
BgVehiclePhysicsZodiac::Steering::Reset
==============
*/

void __fastcall BgVehiclePhysicsZodiac::Steering::Reset(BgVehiclePhysicsZodiac::Steering *this)
{
  ?Reset@Steering@BgVehiclePhysicsZodiac@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::AfterPhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::AfterPhysicsWorldStep(BgVehiclePhysicsWaterBuoyancy *this, float lastPhysicsStepTime)
{
  BgVehiclePhysics::AfterPhysicsWorldStep(this, lastPhysicsStepTime);
}

/*
==============
BgVehiclePhysicsZodiac::ApplyEngine
==============
*/
void BgVehiclePhysicsZodiac::ApplyEngine(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  BOOL v3; 
  bool v4; 
  __int128 v5; 
  double v11; 
  float v12; 
  float v13; 
  bool v14; 
  vec3_t impulseWs; 
  vec3_t outPointWs; 

  v3 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 4, 4);
  v4 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 4, 4);
  v5 = LODWORD(this->m_controls.playerValues[4]);
  _XMM3 = LODWORD(this->m_controls.externalValues[4]);
  if ( v3 + 3 * v4 == 1 )
  {
    *(float *)&_XMM3 = this->m_controls.playerValues[4];
    goto LABEL_16;
  }
  if ( v3 + 3 * v4 != 3 )
  {
    if ( v3 + 3 * v4 != 4 )
      goto LABEL_14;
    switch ( this->m_controls.valuePolicy[4] )
    {
      case VP_MAXABS:
        _XMM0 = _XMM3 & _xmm;
        __asm
        {
          vcmpltss xmm2, xmm0, xmm2
          vblendvps xmm3, xmm3, xmm4, xmm2
        }
        goto LABEL_16;
      case VP_MINABS:
        _XMM2 = v5 & _xmm;
        __asm
        {
          vcmpltss xmm2, xmm2, xmm0
          vblendvps xmm3, xmm3, xmm4, xmm2
        }
        goto LABEL_16;
      case VP_AVERAGE:
        *(float *)&_XMM3 = (float)(*(float *)&_XMM3 + *(float *)&v5) * 0.5;
        goto LABEL_16;
      case VP_AVERAGE_WEIGHT_PLAYER:
        *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM3) + (float)(this->m_controls.policyWeight * *(float *)&v5);
        goto LABEL_16;
    }
    if ( this->m_controls.valuePolicy[4] != VP_AVERAGE_WEIGHT_EXTERNAL )
    {
LABEL_14:
      LODWORD(_XMM3) = 0;
      goto LABEL_16;
    }
    *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v5) + (float)(this->m_controls.policyWeight * *(float *)&_XMM3);
  }
LABEL_16:
  v11 = I_fclamp(*(float *)&_XMM3, -0.5, 1.0);
  if ( *(float *)&v11 > 0.0 || (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_linearVelocityWs.v[0] * this->m_transform.m[0].v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) >= -0.001 )
  {
    v12 = (float)((float)(this->m_engine.m_accelForce * 1550.0032) * deltaTime) * *(float *)&v11;
    v13 = v12 * this->m_transform.m[0].v[0];
    impulseWs.v[1] = v12 * this->m_transform.m[0].v[1];
    v14 = this->m_timeSinceLastCollision > 0.1;
    impulseWs.v[0] = v13;
    impulseWs.v[2] = v12 * this->m_transform.m[0].v[2];
    if ( v14 )
    {
      BgVehiclePhysics::ComputePointWorldSpace(this, &this->m_engine.m_offsetPointLs, &outPointWs);
      BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &outPointWs);
    }
    else
    {
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
    }
  }
}

/*
==============
BgVehiclePhysicsZodiac::ApplyExtraGravity
==============
*/
void BgVehiclePhysicsZodiac::ApplyExtraGravity(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  const dvar_t *v4; 
  float value; 
  vec3_t impulseWs; 

  if ( this->m_playerControlled )
  {
    v4 = DCONST_DVARFLT_bg_vehZoscarExtraGrav;
    if ( !DCONST_DVARFLT_bg_vehZoscarExtraGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarExtraGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    impulseWs.v[0] = 0.0;
    impulseWs.v[1] = 0.0;
    impulseWs.v[2] = (float)(value * 1000.0) * deltaTime;
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
}

/*
==============
BgVehiclePhysicsZodiac::ApplySteering
==============
*/
void BgVehiclePhysicsZodiac::ApplySteering(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  BOOL v5; 
  bool v6; 
  __int128 v7; 
  const dvar_t *v12; 
  float value; 
  const dvar_t *v14; 
  float v15; 
  __int128 v16; 
  const dvar_t *v17; 
  __int128 v23; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  v5 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 2, 4);
  v6 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 2, 4);
  v7 = LODWORD(this->m_controls.playerValues[2]);
  _XMM7 = LODWORD(this->m_controls.externalValues[2]);
  if ( v5 + 3 * v6 == 1 )
  {
    *(float *)&_XMM7 = this->m_controls.playerValues[2];
    goto LABEL_16;
  }
  if ( v5 + 3 * v6 != 3 )
  {
    if ( v5 + 3 * v6 != 4 )
      goto LABEL_14;
    switch ( this->m_controls.valuePolicy[2] )
    {
      case VP_MAXABS:
        _XMM0 = _XMM7 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm7, xmm3, xmm1
        }
        goto LABEL_16;
      case VP_MINABS:
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        _XMM1 = v7 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm1, xmm0
          vblendvps xmm7, xmm7, xmm3, xmm1
        }
        goto LABEL_16;
      case VP_AVERAGE:
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(float *)&_XMM7 = (float)(*(float *)&_XMM7 + *(float *)&v7) * 0.5;
        goto LABEL_16;
      case VP_AVERAGE_WEIGHT_PLAYER:
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(float *)&_XMM7 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM7) + (float)(this->m_controls.policyWeight * *(float *)&v7);
        goto LABEL_16;
    }
    if ( this->m_controls.valuePolicy[2] != VP_AVERAGE_WEIGHT_EXTERNAL )
    {
LABEL_14:
      LODWORD(_XMM7) = 0;
      goto LABEL_16;
    }
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    *(float *)&_XMM7 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v7) + (float)(this->m_controls.policyWeight * *(float *)&_XMM7);
  }
LABEL_16:
  v12 = DCONST_DVARFLT_bg_vehZoscarSteering;
  if ( !DCONST_DVARFLT_bg_vehZoscarSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarSteering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  value = v12->current.value;
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(this);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 * 1.25, 0.0, 1.0);
  v14 = DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed;
  v16 = _XMM0;
  *(float *)&v16 = *(float *)&_XMM0 * (float)((float)(*(float *)&_XMM7 * value) * deltaTime);
  v15 = *(float *)&v16;
  if ( !DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarYawMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v17 = DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed;
  if ( !DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarRollMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  _XMM3 = LODWORD(outVelLs.v[2]);
  _XMM5 = LODWORD(outVelLs.v[0]);
  *(float *)&v16 = *(float *)&v16 + outVelLs.v[2];
  _XMM0 = v16 & (unsigned int)_xmm;
  __asm
  {
    vcmpless xmm1, xmm0, xmm7
    vblendvps xmm0, xmm3, xmm2, xmm1
  }
  v23 = LODWORD(outVelLs.v[0]);
  *(float *)&v23 = outVelLs.v[0] - v15;
  outVelLs.v[2] = *(float *)&_XMM0;
  _XMM2 = v23 & (unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm5, xmm4, xmm0
  }
  outVelLs.v[0] = *(float *)&_XMM0;
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CalcDamage
==============
*/
__int64 BgVehiclePhysicsWaterBuoyancy::CalcDamage(BgVehiclePhysicsWaterBuoyancy *this, const BgVehiclePhysicsDamageSetup *dmgInfo, vec3_t *outDamageDir)
{
  __int64 result; 

  *(_QWORD *)outDamageDir->v = 0i64;
  outDamageDir->v[2] = 0.0;
  if ( dmgInfo->m_targetType == DAMAGE_SCRIPTABLE )
    return 500i64;
  result = 0i64;
  if ( dmgInfo->m_targetType == DAMAGE_PLAYER )
    return 500i64;
  return result;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CollisionImpulseCallback
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::CollisionImpulseCallback(BgVehiclePhysicsWaterBuoyancy *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  BgVehiclePhysics::CollisionImpulseCallback(this, cbData);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySphereSingle
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySphereSingle(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph)
{
  float m_radius; 
  float v6; 
  float v7; 
  float m_volumeCap; 
  float v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  float value; 
  float v13; 
  float v14; 
  double v15; 
  const dvar_t *v16; 
  float v17; 
  vec3_t impulseWs; 

  if ( this->m_waterPlaneFound )
  {
    m_radius = bsph->m_radius;
    v6 = (float)((float)((float)(this->m_waterPlane.v[1] * bsph->m_pointWs.v[1]) + (float)(bsph->m_pointWs.v[0] * this->m_waterPlane.v[0])) + (float)(this->m_waterPlane.v[2] * bsph->m_pointWs.v[2])) - this->m_waterPlane.v[3];
    bsph->m_distUnderwater = 0.0;
    bsph->m_fullySubmerged = 0;
    if ( v6 <= m_radius )
    {
      LODWORD(v7) = LODWORD(v6) & _xmm;
      if ( v6 >= COERCE_FLOAT(LODWORD(m_radius) ^ _xmm) )
      {
        if ( v7 < 0.001 )
          bsph->m_volumeCap = (float)((float)(m_radius * m_radius) * m_radius) * 2.0943952;
        v9 = (float)((float)((float)(m_radius * 3.0) - (float)(m_radius - v7)) * (float)((float)(m_radius - v7) * (float)(m_radius - v7))) * 1.0471976;
        bsph->m_volumeCap = v9;
        if ( v6 < 0.0 )
        {
          v9 = (float)((float)((float)(m_radius * m_radius) * m_radius) * 4.1887903) - v9;
          bsph->m_volumeCap = v9;
        }
        if ( v9 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 462, ASSERT_TYPE_ASSERT, "(bsph.m_volumeCap >= 0.0f)", (const char *)&queryFormat, "bsph.m_volumeCap >= 0.0f") )
          __debugbreak();
        m_volumeCap = bsph->m_volumeCap;
      }
      else
      {
        m_volumeCap = (float)((float)(m_radius * m_radius) * m_radius) * 4.1887903;
        bsph->m_volumeCap = m_volumeCap;
        bsph->m_distUnderwater = v7 - m_radius;
        bsph->m_fullySubmerged = 1;
      }
      if ( m_volumeCap > 0.0 )
      {
        v10 = DCONST_DVARFLT_bg_vehZoscarFluidGrav;
        if ( !DCONST_DVARFLT_bg_vehZoscarFluidGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidGrav") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        v11 = DCONST_DVARFLT_bg_vehZoscarFluidDensity;
        value = v10->current.value;
        v13 = bsph->m_volumeCap;
        if ( !DCONST_DVARFLT_bg_vehZoscarFluidDensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidDensity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        v14 = (float)((float)(value * v11->current.value) * 0.0014225717) * v13;
        v15 = PhysicsVehicle_ComputeProjectedPointVelocity(&this->m_centerOfMassWs, &this->m_angularVelocityWs, &this->m_linearVelocityWs, &bsph->m_pointWs, GLOBAL_UP_0);
        v16 = DCONST_DVARFLT_bg_vehZoscarFluidDamp;
        if ( !DCONST_DVARFLT_bg_vehZoscarFluidDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidDamp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        v17 = (float)(v14 - (float)((float)(*(float *)&v15 * v16->current.value) * bsph->m_dampK)) * deltaTime;
        impulseWs.v[0] = v17 * GLOBAL_UP_0->v[0];
        impulseWs.v[1] = v17 * GLOBAL_UP_0->v[1];
        impulseWs.v[2] = v17 * GLOBAL_UP_0->v[2];
        BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, &bsph->m_pointWs);
      }
    }
    else
    {
      bsph->m_volumeCap = 0.0;
    }
  }
  else
  {
    *(_QWORD *)&bsph->m_volumeCap = 0i64;
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  int v3; 
  float *p_m_distUnderwater; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  double v15; 
  const dvar_t *v16; 
  float v17; 
  vec3_t impulseWs; 

  if ( this->m_waterPlaneFound )
  {
    v3 = 0;
    if ( this->m_buoyancySphereCount > 0 )
    {
      p_m_distUnderwater = &this->m_buoyancySpheres[0].m_distUnderwater;
      do
      {
        BgVehiclePhysics::ComputePointWorldSpace(this, (const vec3_t *)(p_m_distUnderwater - 8), (vec3_t *)(p_m_distUnderwater - 5));
        if ( this->m_waterPlaneFound )
        {
          v5 = *(p_m_distUnderwater - 2);
          v6 = (float)((float)((float)(*(p_m_distUnderwater - 4) * this->m_waterPlane.v[1]) + (float)(this->m_waterPlane.v[0] * *(p_m_distUnderwater - 5))) + (float)(this->m_waterPlane.v[2] * *(p_m_distUnderwater - 3))) - this->m_waterPlane.v[3];
          *p_m_distUnderwater = 0.0;
          *((_BYTE *)p_m_distUnderwater + 8) = 0;
          if ( v6 <= v5 )
          {
            LODWORD(v7) = LODWORD(v6) & _xmm;
            if ( v6 >= COERCE_FLOAT(LODWORD(v5) ^ _xmm) )
            {
              v9 = (float)((float)((float)(v5 * 3.0) - (float)(v5 - v7)) * (float)((float)(v5 - v7) * (float)(v5 - v7))) * 1.0471976;
              *(p_m_distUnderwater - 1) = v9;
              if ( v6 < 0.0 )
              {
                v9 = (float)((float)((float)(v5 * v5) * v5) * 4.1887903) - v9;
                *(p_m_distUnderwater - 1) = v9;
              }
              if ( v9 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 462, ASSERT_TYPE_ASSERT, "(bsph.m_volumeCap >= 0.0f)", (const char *)&queryFormat, "bsph.m_volumeCap >= 0.0f") )
                __debugbreak();
              v8 = *(p_m_distUnderwater - 1);
            }
            else
            {
              v8 = (float)((float)(v5 * v5) * v5) * 4.1887903;
              *(p_m_distUnderwater - 1) = v8;
              *p_m_distUnderwater = v7 - v5;
              *((_BYTE *)p_m_distUnderwater + 8) = 1;
            }
            if ( v8 > 0.0 )
            {
              v10 = DCONST_DVARFLT_bg_vehZoscarFluidGrav;
              if ( !DCONST_DVARFLT_bg_vehZoscarFluidGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidGrav") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v10);
              value = v10->current.value;
              v12 = DCONST_DVARFLT_bg_vehZoscarFluidDensity;
              v13 = *(p_m_distUnderwater - 1);
              if ( !DCONST_DVARFLT_bg_vehZoscarFluidDensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidDensity") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v12);
              v14 = (float)((float)(value * v12->current.value) * 0.0014225717) * v13;
              v15 = PhysicsVehicle_ComputeProjectedPointVelocity(&this->m_centerOfMassWs, &this->m_angularVelocityWs, &this->m_linearVelocityWs, (const vec3_t *)(p_m_distUnderwater - 5), GLOBAL_UP_0);
              v16 = DCONST_DVARFLT_bg_vehZoscarFluidDamp;
              if ( !DCONST_DVARFLT_bg_vehZoscarFluidDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarFluidDamp") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v16);
              v17 = (float)(v14 - (float)((float)(*(float *)&v15 * v16->current.value) * p_m_distUnderwater[1])) * deltaTime;
              impulseWs.v[0] = v17 * GLOBAL_UP_0->v[0];
              impulseWs.v[1] = v17 * GLOBAL_UP_0->v[1];
              impulseWs.v[2] = v17 * GLOBAL_UP_0->v[2];
              BgVehiclePhysics::AccumulateImpulse(this, &impulseWs, (const vec3_t *)(p_m_distUnderwater - 5));
            }
          }
          else
          {
            *(p_m_distUnderwater - 1) = 0.0;
          }
        }
        else
        {
          *(_QWORD *)(p_m_distUnderwater - 1) = 0i64;
        }
        ++v3;
        p_m_distUnderwater += 11;
      }
      while ( v3 < this->m_buoyancySphereCount );
    }
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap(BgVehiclePhysicsWaterBuoyancy *this, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph, const vec4_t *plane)
{
  float m_radius; 
  float v4; 
  float v5; 
  float v6; 

  m_radius = bsph->m_radius;
  v4 = (float)((float)((float)(this->m_waterPlane.v[1] * bsph->m_pointWs.v[1]) + (float)(this->m_waterPlane.v[0] * bsph->m_pointWs.v[0])) + (float)(this->m_waterPlane.v[2] * bsph->m_pointWs.v[2])) - this->m_waterPlane.v[3];
  bsph->m_distUnderwater = 0.0;
  bsph->m_fullySubmerged = 0;
  if ( v4 <= m_radius )
  {
    LODWORD(v5) = LODWORD(v4) & _xmm;
    if ( v4 >= COERCE_FLOAT(LODWORD(m_radius) ^ _xmm) )
    {
      v6 = (float)((float)((float)(m_radius * 3.0) - (float)(m_radius - v5)) * (float)((float)(m_radius - v5) * (float)(m_radius - v5))) * 1.0471976;
      bsph->m_volumeCap = v6;
      if ( v4 < 0.0 )
      {
        v6 = (float)((float)((float)(m_radius * m_radius) * m_radius) * 4.1887903) - v6;
        bsph->m_volumeCap = v6;
      }
      if ( v6 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 462, ASSERT_TYPE_ASSERT, "(bsph.m_volumeCap >= 0.0f)", (const char *)&queryFormat, "bsph.m_volumeCap >= 0.0f") )
        __debugbreak();
    }
    else
    {
      bsph->m_volumeCap = (float)((float)(m_radius * m_radius) * m_radius) * 4.1887903;
      bsph->m_distUnderwater = v5 - m_radius;
      bsph->m_fullySubmerged = 1;
    }
  }
  else
  {
    bsph->m_volumeCap = 0.0;
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  const vec3_t *v2; 
  unsigned int v3; 
  double v5; 
  bool v6; 
  float v7; 
  float v8; 
  float v9; 
  int v10; 
  bool m_waterPlaneFound; 
  float *p_m_radius; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int outSurfFlags; 
  float outFrac; 
  vec3_t outPointWs; 
  vec3_t end; 
  vec3_t outHitNormal; 
  vec3_t outHitPos; 

  v2 = GLOBAL_UP_0;
  v3 = 0;
  this->m_waterPlaneFound = 0;
  v5 = *(double *)v2->v;
  *(float *)&v2 = v2->v[2];
  v6 = 0;
  *(double *)outPointWs.v = v5;
  v7 = outPointWs.v[1];
  v8 = outPointWs.v[0];
  LODWORD(outPointWs.v[2]) = (_DWORD)v2;
  v9 = *(float *)&v2;
  do
  {
    if ( v3 >= 2 )
      break;
    v10 = 0;
    m_waterPlaneFound = v6;
    p_m_radius = &this->m_buoyancySpheres[0].m_radius;
    do
    {
      if ( v10 >= this->m_buoyancySphereCount )
        break;
      BgVehiclePhysics::ComputePointWorldSpace(this, &this->m_buoyancySpheres[v10].m_pointLs, &outPointWs);
      m_entityNumber = this->m_entityNumber;
      m_worldId = this->m_worldId;
      v15 = (float)(v7 * *p_m_radius) + outPointWs.v[1];
      v16 = (float)(v9 * *p_m_radius) + outPointWs.v[2];
      v17 = *p_m_radius * -2.5;
      v18 = (float)(v8 * v17) + (float)((float)(v8 * *p_m_radius) + outPointWs.v[0]);
      outPointWs.v[0] = (float)(v8 * *p_m_radius) + outPointWs.v[0];
      end.v[0] = v18;
      end.v[2] = (float)(v9 * v17) + v16;
      outPointWs.v[1] = v15;
      outPointWs.v[2] = v16;
      end.v[1] = (float)(v7 * v17) + v15;
      if ( PhysicsVehicle_BuoyancyCast(m_worldId, m_entityNumber, &outPointWs, &end, 0.0, &outFrac, &outHitPos, &outHitNormal, &outSurfFlags) )
      {
        v19 = outHitNormal.v[0];
        v20 = outHitNormal.v[1];
        v21 = outHitNormal.v[2];
        v22 = outHitNormal.v[0] * outHitPos.v[0];
        this->m_waterPlane.v[1] = outHitNormal.v[1];
        v23 = v20 * outHitPos.v[1];
        this->m_waterPlane.v[0] = v19;
        v24 = v21 * outHitPos.v[2];
        this->m_waterPlane.v[2] = v21;
        this->m_waterPlane.v[3] = (float)(v22 + v23) + v24;
        this->m_waterPlaneFound = 1;
        m_waterPlaneFound = 1;
      }
      else
      {
        m_waterPlaneFound = this->m_waterPlaneFound;
      }
      ++v10;
      p_m_radius += 11;
    }
    while ( !m_waterPlaneFound );
    ++v3;
    v6 = m_waterPlaneFound;
    if ( !m_waterPlaneFound && v3 < 2 )
    {
      LODWORD(v8) ^= _xmm;
      LODWORD(v7) ^= _xmm;
      LODWORD(v9) ^= _xmm;
    }
  }
  while ( !m_waterPlaneFound );
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::CreatePhysics
==============
*/
char BgVehiclePhysicsWaterBuoyancy::CreatePhysics(BgVehiclePhysicsWaterBuoyancy *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  return 1;
}

/*
==============
BgVehiclePhysicsZodiac::CreatePhysics
==============
*/
char BgVehiclePhysicsZodiac::CreatePhysics(BgVehiclePhysicsZodiac *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  return 1;
}

/*
==============
BgVehiclePhysicsZodiac::DampVelocities
==============
*/
void BgVehiclePhysicsZodiac::DampVelocities(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  float value; 
  double NormalSpeedPlane; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  v3 = DCONST_DVARFLT_bg_vehZoscarLateralDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarLateralDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarLateralDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  BgVehiclePhysics::DampLerp(&outVelLs.v[1], 0.0, deltaTime, v3->current.value);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  v4 = DCONST_DVARFLT_bg_vehZoscarYawDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarYawDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarYawDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(this);
  v7 = DCONST_DVARFLT_bg_vehZoscarPitchDamp;
  v8 = (float)(1.0 - *(float *)&NormalSpeedPlane) * value;
  if ( !DCONST_DVARFLT_bg_vehZoscarPitchDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarPitchDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v9 = v7->current.value;
  v10 = DCONST_DVARFLT_bg_vehZoscarRollDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarRollDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarRollDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  if ( v8 > 0.001 || v9 > 0.001 || v11 > 0.001 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    if ( v8 > 0.001 )
      BgVehiclePhysics::DampLerp(&outVelLs.v[2], 0.0, deltaTime, v8);
    if ( v9 > 0.001 && outVelLs.v[1] < 0.0 )
      BgVehiclePhysics::DampLerp(&outVelLs.v[1], 0.0, deltaTime, v9);
    if ( v11 > 0.001 )
      BgVehiclePhysics::DampLerp(outVelLs.v, 0.0, deltaTime, v11);
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::DebugDraw
==============
*/
void BgVehiclePhysicsWaterBuoyancy::DebugDraw(BgVehiclePhysicsWaterBuoyancy *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v7; 
  BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *m_buoyancySpheres; 
  vec3_t outPointWs; 

  BgVehiclePhysics::DebugDraw(this, scrPlace, x, y, tabWidth, charHeight);
  if ( (BgVehiclePhysics::GetPhysicsBodyId(this) & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 599, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( GetPhysicsBodyId() ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( GetPhysicsBodyId() )") )
    __debugbreak();
  if ( !this->m_pmoveObject && BgVehiclePhysics::IsDynamic(this) )
  {
    v7 = 0;
    if ( this->m_buoyancySphereCount > 0 )
    {
      m_buoyancySpheres = this->m_buoyancySpheres;
      do
      {
        BgVehiclePhysics::ComputePointWorldSpace(this, &m_buoyancySpheres->m_pointLs, &outPointWs);
        CG_DebugSphere(&outPointWs, 1.0, &colorRed, 0, 0);
        CG_DebugSphere(&outPointWs, m_buoyancySpheres->m_radius, &colorCyan, 0, 0);
        ++v7;
        ++m_buoyancySpheres;
      }
      while ( v7 < this->m_buoyancySphereCount );
    }
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::FetchSound
==============
*/
__int64 BgVehiclePhysicsWaterBuoyancy::SoundData::FetchSound(BgVehiclePhysicsWaterBuoyancy::SoundData *this, const char *name)
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
Helpers::GetInputCharValueWithThreshold
==============
*/
float Helpers::GetInputCharValueWithThreshold(char value, char threshold)
{
  __int128 v2; 
  float v3; 
  double v5; 
  float v6; 
  __int128 v8; 

  v2 = 0i64;
  *(float *)&v2 = (float)value;
  LODWORD(v3) = v2 & _xmm;
  _XMM6 = 0i64;
  v5 = I_fclamp((float)threshold, 0.0, 126.0);
  v6 = *(float *)&v5;
  if ( COERCE_FLOAT(v2 & _xmm) < *(float *)&v5 )
    return 0.0;
  v8 = v2 & _xmm;
  *(float *)&v8 = v3 - *(float *)&v5;
  _XMM1 = v8 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm2, xmm1, xmm2, xmm0
  }
  return *(float *)&_XMM2 / (float)(127.0 - v6);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::GetSoundValues
==============
*/
void BgVehiclePhysicsWaterBuoyancy::GetSoundValues(BgVehiclePhysicsWaterBuoyancy *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  double v10; 
  double v11; 

  if ( this->m_clientGeoLoaded && Physics_IsPredictiveWorld(this->m_worldId) )
  {
    v10 = I_fclamp(this->m_revSound.m_throttle, 0.0, 1.0);
    *outThrottle = *(float *)&v10;
    v11 = I_fclamp(this->m_revSound.m_brake, 0.0, 1.0);
    *outBrake = *(float *)&v11;
    _XMM1 = LODWORD(this->m_revSound.m_mph);
    __asm { vmaxss  xmm0, xmm1, xmm6 }
    *outMph = *(float *)&_XMM0;
    *outGear = I_clamp(abs32(this->m_revSound.m_gear), 1, 6);
    *(double *)&_XMM0 = I_fclamp(this->m_revSound.m_rpm, 0.0, 1.0);
    *outRpmNormal = *(float *)&_XMM0;
  }
  else
  {
    *outThrottle = 0.0;
    *outBrake = 0.0;
    *outGear = 1;
    *outMph = 0.0;
    *outRpmNormal = 0;
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::IsInAir
==============
*/
bool BgVehiclePhysicsWaterBuoyancy::IsInAir(BgVehiclePhysicsWaterBuoyancy *this)
{
  return 0;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ModifyMassFactorsOnContact
==============
*/
bool BgVehiclePhysicsWaterBuoyancy::ModifyMassFactorsOnContact(BgVehiclePhysicsWaterBuoyancy *this, const BgVehicleCollisionCallbackInfo *collInfo, int indexCollInfo, vec4_t *outMassFactors)
{
  bool result; 

  outMassFactors->v[0] = 0.30000001;
  result = 1;
  outMassFactors->v[1] = 0.1;
  outMassFactors->v[2] = 0.80000001;
  outMassFactors->v[3] = 0.80000001;
  return result;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::PostStep
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::PostStep(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  BgVehiclePhysics::PostStep(this, deltaTime);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ReactToServerEvent
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ReactToServerEvent(BgVehiclePhysicsWaterBuoyancy *this, unsigned int eventType, unsigned int eventParam)
{
  unsigned __int8 v3; 
  unsigned int v5; 
  unsigned int PhysicsBodyId; 
  int v7; 
  int v8; 
  int v9; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  v3 = eventParam;
  v5 = eventType - 166;
  if ( v5 )
  {
    if ( v5 == 3 && !this->m_playerControlled )
      BgVehiclePhysics::IsKeyframed(this);
  }
  else if ( !this->m_playerControlled && BgVehiclePhysics::IsKeyframed(this) && !this->m_pmoveObject )
  {
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    Physics_GetRigidBodyAABB(this->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
    v7 = v3 >> 6;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 294, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "It must be 0..3") )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Reset
==============
*/
void BgVehiclePhysicsWaterBuoyancy::Reset(BgVehiclePhysicsWaterBuoyancy *this)
{
  BgVehiclePhysics::Reset(this);
  memset_0(&this->m_sound, 0, 0x50ui64);
  BgVehiclePhysicsRevSound::Reset(&this->m_revSound);
  this->m_timeInAir = 0.0;
  memset_0(this->m_buoyancySpheres, 0, sizeof(this->m_buoyancySpheres));
  this->m_buoyancySphereCount = 0;
  *(_QWORD *)this->m_waterPlane.v = 0i64;
  *(_QWORD *)&this->m_waterPlane.xyz.z = 0i64;
  this->m_waterPlaneFound = 0;
}

/*
==============
BgVehiclePhysicsZodiac::Reset
==============
*/
void BgVehiclePhysicsZodiac::Reset(BgVehiclePhysicsZodiac *this)
{
  BgVehiclePhysics::Reset(this);
  memset_0(&this->m_sound, 0, 0x50ui64);
  BgVehiclePhysicsRevSound::Reset(&this->m_revSound);
  this->m_timeInAir = 0.0;
  memset_0(this->m_buoyancySpheres, 0, sizeof(this->m_buoyancySpheres));
  this->m_buoyancySphereCount = 0;
  *(_QWORD *)this->m_waterPlane.v = 0i64;
  *(_QWORD *)&this->m_waterPlane.xyz.z = 0i64;
  this->m_waterPlaneFound = 0;
  this->m_steering.m_steerSpeed = 10.0;
  *(_QWORD *)&this->m_engine.m_accelForce = 1132593152i64;
  *(_QWORD *)&this->m_engine.m_offsetPointLs.y = 0i64;
}

/*
==============
BgVehiclePhysicsZodiac::Engine::Reset
==============
*/
void BgVehiclePhysicsZodiac::Engine::Reset(BgVehiclePhysicsZodiac::Engine *this)
{
  *this = (BgVehiclePhysicsZodiac::Engine)0x43820000ui64;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::Reset
==============
*/
void BgVehiclePhysicsWaterBuoyancy::SoundData::Reset(BgVehiclePhysicsWaterBuoyancy::SoundData *this)
{
  *(_QWORD *)&this->ImpactHard = 0i64;
  *(_QWORD *)&this->DrivingFast = 0i64;
}

/*
==============
BgVehiclePhysicsZodiac::Steering::Reset
==============
*/
void BgVehiclePhysicsZodiac::Steering::Reset(BgVehiclePhysicsZodiac::Steering *this)
{
  this->m_steerSpeed = 10.0;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::VfxData::Reset
==============
*/
void BgVehiclePhysicsWaterBuoyancy::VfxData::Reset(BgVehiclePhysicsWaterBuoyancy::VfxData *this)
{
  *(_QWORD *)this->Driving = 0i64;
  *(_QWORD *)&this->Driving[2] = 0i64;
  *(_QWORD *)&this->Driving[4] = 0i64;
  *(_QWORD *)&this->Driving[6] = 0i64;
  *(_QWORD *)&this->Driving[8] = 0i64;
  *(_QWORD *)&this->Driving[10] = 0i64;
  *(_QWORD *)this->Impact = 0i64;
  *(_QWORD *)&this->Impact[2] = 0i64;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Setup
==============
*/
bool BgVehiclePhysicsWaterBuoyancy::Setup(BgVehiclePhysicsWaterBuoyancy *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 

  result = BgVehiclePhysics::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    this->m_topAngularSpeedLs.v[0] = 2.0943952;
    this->m_topAngularSpeedLs.v[1] = 2.0943952;
    this->m_topAngularSpeedLs.v[2] = 2.4434609;
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
      BgVehiclePhysicsWaterBuoyancy::SoundData::Setup(&this->m_sound, vehDef);
    return 1;
  }
  return result;
}

/*
==============
BgVehiclePhysicsZodiac::Setup
==============
*/
char BgVehiclePhysicsZodiac::Setup(BgVehiclePhysicsZodiac *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  if ( BgVehiclePhysics::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef) )
  {
    this->m_topAngularSpeedLs.v[0] = 2.0943952;
    this->m_topAngularSpeedLs.v[1] = 2.0943952;
    this->m_topAngularSpeedLs.v[2] = 2.4434609;
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
      BgVehiclePhysicsWaterBuoyancy::SoundData::Setup(&this->m_sound, vehDef);
  }
  *(_QWORD *)&this->m_engine.m_accelForce = 1132593152i64;
  *(_QWORD *)&this->m_engine.m_offsetPointLs.y = 0i64;
  this->m_steering.m_steerSpeed = vehDef->vehiclePhysicsDef.physics_steeringSpeed;
  BgVehiclePhysicsZodiac::UpdateSetup(this);
  return 1;
}

/*
==============
BgVehiclePhysicsZodiac::Engine::Setup
==============
*/
void BgVehiclePhysicsZodiac::Engine::Setup(BgVehiclePhysicsZodiac::Engine *this, const VehicleDef *vehDef)
{
  *this = (BgVehiclePhysicsZodiac::Engine)0x43820000ui64;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SoundData::Setup
==============
*/
void BgVehiclePhysicsWaterBuoyancy::SoundData::Setup(BgVehiclePhysicsWaterBuoyancy::SoundData *this, const VehicleDef *vehDef)
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
  char v19; 

  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 181, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
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
  v13 = vehDef->vehiclePhysicsDef.sndDrivingFast.alias.name;
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
  this->DrivingFast = v15;
  v17 = vehDef->vehiclePhysicsDef.sndDrivingSlow.alias.name;
  if ( v17 && (v18 = *v17) != 0 )
  {
    do
    {
      ++v17;
      v19 = v18 | 0x20;
      if ( (unsigned int)(v18 - 65) >= 0x1A )
        v19 = v18;
      v5 = 65599 * v5 + v19;
      v18 = *v17;
    }
    while ( *v17 );
    if ( !v5 )
      v5 = 1;
    this->DrivingSlow = v5;
  }
  else
  {
    this->DrivingSlow = 0;
  }
}

/*
==============
BgVehiclePhysicsZodiac::Steering::Setup
==============
*/
void BgVehiclePhysicsZodiac::Steering::Setup(BgVehiclePhysicsZodiac::Steering *this, const VehicleDef *vehDef)
{
  this->m_steerSpeed = vehDef->vehiclePhysicsDef.physics_steeringSpeed;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StartPlayerControlling
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::StartPlayerControlling(BgVehiclePhysicsWaterBuoyancy *this)
{
  BgVehiclePhysics::StartPlayerControlling(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::Step
==============
*/
bool BgVehiclePhysicsWaterBuoyancy::Step(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  bool v3; 
  float m_timeInAir; 
  bool v5; 
  bool result; 
  __int128 v8; 
  __int128 m_timeInAir_low; 

  BgVehiclePhysics::Step(this, deltaTime);
  Physics_IsPredictiveWorld(this->m_worldId);
  v3 = this->IsInAir(this);
  m_timeInAir = this->m_timeInAir;
  v5 = !v3;
  result = 1;
  if ( v5 )
  {
    m_timeInAir_low = LODWORD(this->m_timeInAir);
    *(float *)&m_timeInAir_low = m_timeInAir - deltaTime;
    _XMM1 = m_timeInAir_low;
    __asm { vminss  xmm1, xmm1, xmm0 }
  }
  else
  {
    v8 = LODWORD(this->m_timeInAir);
    *(float *)&v8 = m_timeInAir + deltaTime;
    _XMM1 = v8;
    __asm { vmaxss  xmm1, xmm1, xmm0 }
  }
  this->m_timeInAir = *(float *)&_XMM1;
  return result;
}

/*
==============
BgVehiclePhysicsZodiac::Step
==============
*/
char BgVehiclePhysicsZodiac::Step(BgVehiclePhysicsZodiac *this, float deltaTime)
{
  bool v4; 
  float m_timeInAir; 
  __int128 m_timeInAir_low; 
  __int128 v10; 
  const dvar_t *v11; 
  vec3_t impulseWs; 

  BgVehiclePhysics::Step(this, deltaTime);
  Physics_IsPredictiveWorld(this->m_worldId);
  v4 = this->IsInAir(this);
  m_timeInAir = this->m_timeInAir;
  if ( v4 )
  {
    m_timeInAir_low = LODWORD(this->m_timeInAir);
    *(float *)&m_timeInAir_low = m_timeInAir + deltaTime;
    _XMM0 = m_timeInAir_low;
    __asm { vmaxss  xmm1, xmm0, xmm7 }
  }
  else
  {
    v10 = LODWORD(this->m_timeInAir);
    *(float *)&v10 = m_timeInAir - deltaTime;
    _XMM0 = v10;
    __asm { vminss  xmm1, xmm0, xmm7 }
  }
  this->m_timeInAir = *(float *)&_XMM1;
  BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane(this, deltaTime);
  BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres(this, deltaTime);
  BgVehiclePhysicsZodiac::ApplyEngine(this, deltaTime);
  BgVehiclePhysicsZodiac::ApplySteering(this, deltaTime);
  BgVehiclePhysicsZodiac::DampVelocities(this, deltaTime);
  if ( this->m_playerControlled )
  {
    v11 = DCONST_DVARFLT_bg_vehZoscarExtraGrav;
    if ( !DCONST_DVARFLT_bg_vehZoscarExtraGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarExtraGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    impulseWs.v[2] = (float)(v11->current.value * 1000.0) * deltaTime;
    impulseWs.v[0] = 0.0;
    impulseWs.v[1] = 0.0;
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
  BgVehiclePhysicsZodiac::UpdateSetup(this);
  return 1;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StepClientKeyframe
==============
*/
void BgVehiclePhysicsWaterBuoyancy::StepClientKeyframe(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::StopPlayerControlling
==============
*/
void BgVehiclePhysicsWaterBuoyancy::StopPlayerControlling(BgVehiclePhysicsWaterBuoyancy *this)
{
  Physics_IsPredictiveWorld(this->m_worldId);
  BgVehiclePhysics::StopPlayerControlling(this);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::SupportsFeature
==============
*/
bool BgVehiclePhysicsWaterBuoyancy::SupportsFeature(BgVehiclePhysicsWaterBuoyancy *this, BgVehiclePhysicsFeature feat)
{
  return feat == VPFEAT_WATER_BUOYANCY || feat == VPFEAT_SCRIPTABLE_FILTERING;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsWaterBuoyancy::UpdatePlayerInputControls(BgVehiclePhysicsWaterBuoyancy *this, const usercmd_s *cmd, const playerState_s *ps)
{
  float InputCharValueWithThreshold; 
  BOOL v11; 
  bool v12; 
  __int128 v13; 
  BOOL v19; 
  bool v20; 
  __int128 v21; 
  float v27; 

  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  InputCharValueWithThreshold = Helpers::GetInputCharValueWithThreshold(-cmd->remoteControlMove[1], 8);
  *(float *)&_XMM0 = Helpers::GetInputCharValueWithThreshold(cmd->remoteControlMove[0], 0);
  this->m_controls.playerValues[2] = InputCharValueWithThreshold;
  LODWORD(_XMM7) = 0;
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  _XMM0 = _XMM0 ^ _xmm;
  __asm { vmaxss  xmm0, xmm0, xmm7 }
  this->m_controls.playerValues[0] = *(float *)&_XMM1;
  this->m_controls.playerValues[1] = *(float *)&_XMM0;
  v11 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 1, 4);
  v12 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 1, 4);
  v13 = LODWORD(this->m_controls.playerValues[1]);
  _XMM6 = LODWORD(this->m_controls.externalValues[1]);
  switch ( v11 + 3 * v12 )
  {
    case 1:
      *(float *)&_XMM6 = this->m_controls.playerValues[1];
      break;
    case 3:
      break;
    case 4:
      switch ( this->m_controls.valuePolicy[1] )
      {
        case VP_MAXABS:
          _XMM0 = _XMM6 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_MINABS:
          _XMM1 = v13 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE:
          *(float *)&_XMM6 = (float)(*(float *)&_XMM6 + *(float *)&v13) * 0.5;
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_PLAYER:
          *(float *)&_XMM6 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM6) + (float)(this->m_controls.policyWeight * *(float *)&v13);
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_EXTERNAL:
          *(float *)&_XMM6 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v13) + (float)(this->m_controls.policyWeight * *(float *)&_XMM6);
          goto LABEL_16;
      }
    default:
      LODWORD(_XMM6) = 0;
      break;
  }
LABEL_16:
  v19 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 0, 4);
  v20 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 0, 4);
  v21 = LODWORD(this->m_controls.playerValues[0]);
  _XMM4 = LODWORD(this->m_controls.externalValues[0]);
  switch ( v19 + 3 * v20 )
  {
    case 1:
      *(float *)&_XMM7 = this->m_controls.playerValues[0];
      break;
    case 3:
      *(float *)&_XMM7 = this->m_controls.externalValues[0];
      break;
    case 4:
      if ( this->m_controls.valuePolicy[0] )
      {
        switch ( this->m_controls.valuePolicy[0] )
        {
          case VP_MINABS:
            _XMM1 = v21 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm7, xmm4, xmm3, xmm1
            }
            break;
          case VP_AVERAGE:
            *(float *)&_XMM7 = (float)(*(float *)&_XMM4 + *(float *)&v21) * 0.5;
            break;
          case VP_AVERAGE_WEIGHT_PLAYER:
            *(float *)&_XMM7 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM4) + (float)(this->m_controls.policyWeight * *(float *)&v21);
            break;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            *(float *)&_XMM7 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v21) + (float)(this->m_controls.policyWeight * *(float *)&_XMM4);
            break;
        }
      }
      else
      {
        _XMM0 = _XMM4 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm4, xmm3, xmm1
        }
      }
      break;
  }
  this->m_controls.playerValues[4] = *(float *)&_XMM7 - *(float *)&_XMM6;
  if ( (cmd->buttons & 0x8000000000000i64) != 0 )
    v27 = (float)cmd->remoteControlMove[2] * 0.0078740157;
  else
    v27 = (float)((cmd->buttons >> 45) & 1) - (float)((cmd->buttons >> 29) & 1);
  this->m_controls.playerValues[5] = v27;
}

/*
==============
BgVehiclePhysicsZodiac::UpdateSetup
==============
*/
void BgVehiclePhysicsZodiac::UpdateSetup(BgVehiclePhysicsZodiac *this)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  __int128 unsignedInt; 
  float v6; 
  float v7; 
  const dvar_t *v8; 
  int integer; 
  int v10; 
  const dvar_t *v11; 
  float m_simulationFrame; 
  int v13; 
  float *p_m_dampK; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float value; 
  __int128 v20; 
  int v22; 
  int v23; 
  int v24; 
  double PerlinNoise2dValue; 
  double v26; 
  __int64 v27; 
  __int128 v29; 
  int v31; 
  int v32; 
  int v33; 
  double v34; 
  double v35; 
  __int128 v37; 
  int v39; 
  int v40; 
  int v41; 
  double v42; 
  double v43; 
  __int128 v44; 
  const dvar_t *v45; 
  int v46; 
  float v47; 

  v1 = DCONST_DVARFLT_bg_vehZoscarEngineForce;
  if ( !DCONST_DVARFLT_bg_vehZoscarEngineForce && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarEngineForce") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  LODWORD(this->m_engine.m_accelForce) = v1->current.integer;
  v3 = DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint;
  if ( !DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarEngineOffsetPoint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  LODWORD(this->m_engine.m_offsetPointLs.v[0]) = v3->current.integer;
  this->m_engine.m_offsetPointLs.v[1] = v3->current.vector.v[1];
  this->m_engine.m_offsetPointLs.v[2] = v3->current.vector.v[2];
  v4 = DCONST_DVARVEC3_bg_vehZoscarHalfsize;
  if ( !DCONST_DVARVEC3_bg_vehZoscarHalfsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarHalfsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  unsignedInt = v4->current.unsignedInt;
  v6 = v4->current.vector.v[1];
  v7 = v4->current.vector.v[2];
  v8 = DCONST_DVARINT_bg_vehZoscarBuoyancySpheres;
  if ( !DCONST_DVARINT_bg_vehZoscarBuoyancySpheres && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarBuoyancySpheres") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( integer > 24 )
    integer = 24;
  v10 = 0;
  if ( integer < 0 )
    integer = 0;
  this->m_buoyancySphereCount = integer;
  if ( integer > 0 )
  {
    if ( (integer & 1) != 0 )
      this->m_buoyancySphereCount = ++integer;
    v11 = DCONST_DVARVEC3_bg_vehZoscarNoiseParms;
    v47 = (float)(*(float *)&unsignedInt * 2.0) / (float)(integer / 2 - 1);
    if ( !DCONST_DVARVEC3_bg_vehZoscarNoiseParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarNoiseParms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    m_simulationFrame = (float)this->m_simulationFrame;
    v13 = (int)(float)(m_simulationFrame * v11->current.value);
    if ( this->m_buoyancySphereCount / 2 > 0 )
    {
      p_m_dampK = &this->m_buoyancySpheres[0].m_dampK;
      LODWORD(v15) = LODWORD(v11->current.vector.v[1]) & _xmm;
      LODWORD(v16) = LODWORD(v11->current.vector.v[2]) & _xmm;
      v46 = v13 + 24;
      do
      {
        *(p_m_dampK - 9) = *(float *)&unsignedInt;
        *(p_m_dampK - 8) = v6;
        *(p_m_dampK - 7) = v7;
        p_m_dampK[2] = *(float *)&unsignedInt;
        p_m_dampK[3] = COERCE_FLOAT(LODWORD(v6) ^ _xmm);
        p_m_dampK[4] = v7;
        v17 = DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius;
        if ( !DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarBuoyancySphereRadius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        value = v17->current.value;
        p_m_dampK[8] = value;
        *(p_m_dampK - 3) = value;
        p_m_dampK[11] = 1.0;
        *p_m_dampK = 1.0;
        v20 = LODWORD(cm.broadphaseMax.v[1]);
        *(float *)&v20 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
        _XMM3 = v20;
        __asm { vmaxss  xmm0, xmm3, xmm2 }
        v22 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v23 = v13 % v22;
        v24 = v13 / v22 % v22;
        if ( v22 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v23 < 0 || v23 >= v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v24 < 0 || v24 >= v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        PerlinNoise2dValue = HavokPhysics_GetPerlinNoise2dValue(7, v22, v23, v24);
        v26 = I_fclamp(*(float *)&PerlinNoise2dValue * v15, COERCE_FLOAT(LODWORD(v15) ^ _xmm), v15);
        v27 = 8i64;
        if ( (v13 & 1) == 0 )
          v27 = 0x3FFFFFFFFFFFFFFDi64;
        p_m_dampK[v27] = *(float *)&v26 + p_m_dampK[v27];
        v29 = LODWORD(cm.broadphaseMax.v[1]);
        *(float *)&v29 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
        _XMM3 = v29;
        __asm { vmaxss  xmm1, xmm3, xmm2 }
        v31 = (int)*(float *)&_XMM1;
        if ( (int)*(float *)&_XMM1 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v32 = v13 % v31;
        v33 = v13 / v31 % v31;
        if ( v31 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v32 < 0 || v32 >= v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v33 < 0 || v33 >= v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        v34 = HavokPhysics_GetPerlinNoise2dValue(7, v31, v32, v33);
        v35 = I_fclamp(*(float *)&v34 * v16, COERCE_FLOAT(LODWORD(v16) ^ _xmm), v16);
        *p_m_dampK = (float)(1.0 - COERCE_FLOAT(LODWORD(v35) & _xmm)) * *p_m_dampK;
        v37 = LODWORD(cm.broadphaseMax.v[1]);
        *(float *)&v37 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
        _XMM3 = v37;
        __asm { vmaxss  xmm0, xmm3, xmm2 }
        v39 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v40 = v46 % v39;
        v41 = v46 / v39 % v39;
        if ( v39 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v40 < 0 || v40 >= v39) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v41 < 0 || v41 >= v39) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        v42 = HavokPhysics_GetPerlinNoise2dValue(7, v39, v40, v41);
        v43 = I_fclamp(*(float *)&v42 * v16, COERCE_FLOAT(LODWORD(v16) ^ _xmm), v16);
        v44 = unsignedInt;
        *(float *)&v44 = *(float *)&unsignedInt - v47;
        unsignedInt = v44;
        p_m_dampK[11] = (float)(1.0 - COERCE_FLOAT(LODWORD(v43) & _xmm)) * p_m_dampK[11];
        ++v46;
        ++v13;
        ++v10;
        p_m_dampK += 22;
      }
      while ( v10 < this->m_buoyancySphereCount / 2 );
    }
  }
  v45 = DCONST_DVARVEC3_bg_vehZoscarCoMLs;
  if ( !DCONST_DVARVEC3_bg_vehZoscarCoMLs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarCoMLs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  LODWORD(this->m_centerOfMassOffsetOriginalLs.v[0]) = v45->current.integer;
  this->m_centerOfMassOffsetOriginalLs.v[1] = v45->current.vector.v[1];
  this->m_centerOfMassOffsetOriginalLs.v[2] = v45->current.vector.v[2];
  BgVehiclePhysics::OffsetCenterOfMass(this, &this->m_centerOfMassOffsetOriginalLs, 0);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir
==============
*/
void BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  bool v3; 
  float m_timeInAir; 
  __int128 m_timeInAir_low; 
  __int128 v9; 

  v3 = this->IsInAir(this);
  m_timeInAir = this->m_timeInAir;
  if ( v3 )
  {
    m_timeInAir_low = LODWORD(this->m_timeInAir);
    *(float *)&m_timeInAir_low = m_timeInAir + deltaTime;
    _XMM1 = m_timeInAir_low;
    __asm { vmaxss  xmm1, xmm1, xmm0 }
  }
  else
  {
    v9 = LODWORD(this->m_timeInAir);
    *(float *)&v9 = m_timeInAir - deltaTime;
    _XMM1 = v9;
    __asm { vminss  xmm1, xmm1, xmm0 }
  }
  this->m_timeInAir = *(float *)&_XMM1;
}

