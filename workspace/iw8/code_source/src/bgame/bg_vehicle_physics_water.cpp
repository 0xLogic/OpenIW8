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

void __fastcall BgVehiclePhysicsZodiac::ApplyEngine(BgVehiclePhysicsZodiac *this, double deltaTime)
{
  BOOL v7; 
  bool v8; 
  char v31; 
  char v33; 
  vec3_t impulseWs; 
  vec3_t outPointWs; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RDI = this;
  __asm { vmovaps xmm8, xmm1 }
  v7 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 4, 4);
  v8 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 4, 4);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+0D8h]
    vmovss  xmm3, dword ptr [rdi+0F8h]
    vmovss  xmm5, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v7 + 3 * v8 == 1 )
  {
    __asm { vmovaps xmm3, xmm4 }
    goto LABEL_16;
  }
  if ( v7 + 3 * v8 != 3 )
  {
    if ( v7 + 3 * v8 != 4 )
      goto LABEL_14;
    switch ( _RDI->m_controls.valuePolicy[4] )
    {
      case VP_MAXABS:
        __asm
        {
          vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcmpltss xmm2, xmm0, xmm2
          vblendvps xmm3, xmm3, xmm4, xmm2
        }
        goto LABEL_16;
      case VP_MINABS:
        __asm
        {
          vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcmpltss xmm2, xmm2, xmm0
          vblendvps xmm3, xmm3, xmm4, xmm2
        }
        goto LABEL_16;
      case VP_AVERAGE:
        __asm
        {
          vaddss  xmm0, xmm3, xmm4
          vmulss  xmm3, xmm0, cs:__real@3f000000
        }
        goto LABEL_16;
      case VP_AVERAGE_WEIGHT_PLAYER:
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+118h]
          vsubss  xmm0, xmm5, xmm1
          vmulss  xmm2, xmm0, xmm3
          vmulss  xmm1, xmm1, xmm4
          vaddss  xmm3, xmm2, xmm1
        }
        goto LABEL_16;
    }
    if ( _RDI->m_controls.valuePolicy[4] != VP_AVERAGE_WEIGHT_EXTERNAL )
    {
LABEL_14:
      __asm { vxorps  xmm3, xmm3, xmm3 }
      goto LABEL_16;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+118h]
      vsubss  xmm0, xmm5, xmm1
      vmulss  xmm2, xmm0, xmm4
      vmulss  xmm1, xmm1, xmm3
      vaddss  xmm3, xmm2, xmm1
    }
  }
LABEL_16:
  __asm
  {
    vmovss  xmm1, cs:__real@bf000000; min
    vmovaps xmm2, xmm5; max
    vmovaps xmm0, xmm3; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm0, xmm7
    vmovaps xmm6, xmm0
  }
  if ( !(v31 | v33) )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+178h]
    vmovss  xmm2, dword ptr [rdi+1A4h]
    vmulss  xmm3, xmm2, dword ptr [rdi+174h]
    vmulss  xmm4, xmm1, dword ptr [rdi+1A8h]
    vmovss  xmm1, dword ptr [rdi+17Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+1ACh]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vcomiss xmm3, cs:__real@ba83126f
  }
  if ( !v31 )
  {
LABEL_18:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+788h]
      vmulss  xmm1, xmm0, cs:__real@44c1c01a
      vmulss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm6
      vmulss  xmm1, xmm3, dword ptr [rdi+178h]
      vmulss  xmm0, xmm3, dword ptr [rdi+174h]
      vmovss  dword ptr [rsp+88h+impulseWs+4], xmm1
      vmovss  xmm1, cs:__real@3dcccccd
      vcomiss xmm1, dword ptr [rdi+2B0h]
      vmovss  dword ptr [rsp+88h+impulseWs], xmm0
      vmulss  xmm0, xmm3, dword ptr [rdi+17Ch]
      vmovss  dword ptr [rsp+88h+impulseWs+8], xmm0
    }
    if ( v31 )
    {
      BgVehiclePhysics::ComputePointWorldSpace(_RDI, &_RDI->m_engine.m_offsetPointLs, &outPointWs);
      BgVehiclePhysics::AccumulateImpulse(_RDI, &impulseWs, &outPointWs);
    }
    else
    {
      BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RDI, &impulseWs);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
BgVehiclePhysicsZodiac::ApplyExtraGravity
==============
*/

void __fastcall BgVehiclePhysicsZodiac::ApplyExtraGravity(BgVehiclePhysicsZodiac *this, double deltaTime)
{
  vec3_t impulseWs; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( this->m_playerControlled )
  {
    _RBX = DCONST_DVARFLT_bg_vehZoscarExtraGrav;
    if ( !DCONST_DVARFLT_bg_vehZoscarExtraGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarExtraGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+78h+impulseWs], xmm0
      vmovss  dword ptr [rsp+78h+impulseWs+4], xmm0
      vmulss  xmm0, xmm1, cs:__real@447a0000
      vmulss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsp+78h+impulseWs+8], xmm1
    }
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(this, &impulseWs);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BgVehiclePhysicsZodiac::ApplySteering
==============
*/

void __fastcall BgVehiclePhysicsZodiac::ApplySteering(BgVehiclePhysicsZodiac *this, double deltaTime)
{
  BOOL v11; 
  bool v12; 
  vec3_t outVelLs; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = this;
  __asm { vmovaps xmm10, xmm1 }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
  v11 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 2, 4);
  v12 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 2, 4);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0D0h]
    vmovss  xmm7, dword ptr [rdi+0F0h]
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3f800000
  }
  if ( v11 + 3 * v12 == 1 )
  {
    __asm { vmovaps xmm7, xmm3 }
    goto LABEL_16;
  }
  if ( v11 + 3 * v12 != 3 )
  {
    if ( v11 + 3 * v12 != 4 )
      goto LABEL_14;
    switch ( _RDI->m_controls.valuePolicy[2] )
    {
      case VP_MAXABS:
        __asm
        {
          vandps  xmm0, xmm7, xmm8
          vandps  xmm1, xmm3, xmm8
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm7, xmm3, xmm1
        }
        goto LABEL_16;
      case VP_MINABS:
        __asm
        {
          vandps  xmm0, xmm7, xmm8
          vandps  xmm1, xmm3, xmm8
          vcmpltss xmm1, xmm1, xmm0
          vblendvps xmm7, xmm7, xmm3, xmm1
        }
        goto LABEL_16;
      case VP_AVERAGE:
        __asm
        {
          vaddss  xmm0, xmm7, xmm3
          vmulss  xmm7, xmm0, cs:__real@3f000000
        }
        goto LABEL_16;
      case VP_AVERAGE_WEIGHT_PLAYER:
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+118h]
          vsubss  xmm0, xmm9, xmm1
          vmulss  xmm2, xmm0, xmm7
          vmulss  xmm1, xmm1, xmm3
          vaddss  xmm7, xmm2, xmm1
        }
        goto LABEL_16;
    }
    if ( _RDI->m_controls.valuePolicy[2] != VP_AVERAGE_WEIGHT_EXTERNAL )
    {
LABEL_14:
      __asm { vxorps  xmm7, xmm7, xmm7 }
      goto LABEL_16;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+118h]
      vsubss  xmm0, xmm9, xmm1
      vmulss  xmm2, xmm0, xmm3
      vmulss  xmm1, xmm1, xmm7
      vaddss  xmm7, xmm2, xmm1
    }
  }
LABEL_16:
  _RBX = DCONST_DVARFLT_bg_vehZoscarSteering;
  if ( !DCONST_DVARFLT_bg_vehZoscarSteering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarSteering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RDI);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3fa00000; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RBX = DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed;
  __asm
  {
    vmulss  xmm1, xmm7, xmm6
    vmulss  xmm2, xmm1, xmm10
    vmulss  xmm9, xmm0, xmm2
  }
  if ( !DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarYawMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed;
  __asm { vandps  xmm7, xmm7, xmm8 }
  if ( !DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarRollMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0C8h+outVelLs+8]
    vmovss  xmm5, dword ptr [rsp+0C8h+outVelLs]
    vmovss  xmm6, dword ptr [rbx+28h]
    vaddss  xmm2, xmm9, xmm3
    vandps  xmm0, xmm2, xmm8
    vcmpless xmm1, xmm0, xmm7
    vblendvps xmm0, xmm3, xmm2, xmm1
    vsubss  xmm4, xmm5, xmm9
    vmovss  dword ptr [rsp+0C8h+outVelLs+8], xmm0
    vandps  xmm2, xmm4, xmm8
    vandps  xmm6, xmm6, xmm8
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm5, xmm4, xmm0
    vmovss  dword ptr [rsp+0C8h+outVelLs], xmm0
  }
  BgVehiclePhysics::ComputeVelocityWorldSpace(_RDI, &outVelLs, &_RDI->m_angularVelocityWs);
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySphereSingle(BgVehiclePhysicsWaterBuoyancy *this, double deltaTime, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph)
{
  bool v7; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm8 }
  _RDI = bsph;
  __asm { vmovaps xmm8, xmm1 }
  v7 = !this->m_waterPlaneFound;
  if ( this->m_waterPlaneFound )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+774h]
      vmulss  xmm3, xmm0, dword ptr [r8+10h]
      vmovss  xmm1, dword ptr [r8+0Ch]
      vmulss  xmm2, xmm1, dword ptr [rcx+770h]
      vmovss  xmm0, dword ptr [rcx+778h]
      vmulss  xmm1, xmm0, dword ptr [r8+14h]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm3, dword ptr [r8+18h]
      vaddss  xmm2, xmm4, xmm1
      vsubss  xmm5, xmm2, dword ptr [rcx+77Ch]
      vcomiss xmm5, xmm3
    }
    bsph->m_distUnderwater = 0.0;
    bsph->m_fullySubmerged = 0;
    if ( v7 )
    {
      __asm
      {
        vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm5, xmm0
        vandps  xmm4, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps [rsp+0B8h+var_38], xmm6
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm4, cs:__real@3a83126f
        vcomiss xmm5, xmm6
        vmulss  xmm0, xmm3, cs:__real@40400000
        vsubss  xmm1, xmm3, xmm4
        vsubss  xmm2, xmm0, xmm1
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm2, xmm2, xmm1
        vmulss  xmm4, xmm2, cs:__real@3f860a92
        vmovss  dword ptr [r8+1Ch], xmm4
        vcomiss xmm4, xmm6
        vmovss  xmm2, dword ptr [rdi+1Ch]
        vcomiss xmm2, xmm6
        vmovaps xmm6, [rsp+0B8h+var_38]
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
  __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres(BgVehiclePhysicsWaterBuoyancy *this, double deltaTime)
{
  int v15; 
  bool v24; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps [rsp+128h+var_B8], xmm14 }
  _RDI = this;
  __asm { vmovaps xmm14, xmm1 }
  if ( this->m_waterPlaneFound )
  {
    v15 = 0;
    if ( this->m_buoyancySphereCount > 0 )
    {
      _RBX = &this->m_buoyancySpheres[0].m_distUnderwater;
      __asm
      {
        vmovaps xmmword ptr [r11-58h], xmm8
        vmovaps xmmword ptr [r11-68h], xmm9
        vmovss  xmm9, cs:__real@40860a92
        vmovaps xmmword ptr [r11-78h], xmm10
        vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovaps xmmword ptr [r11-88h], xmm11
        vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps xmmword ptr [r11-98h], xmm12
        vmovss  xmm12, cs:__real@40400000
        vmovaps xmmword ptr [r11-0A8h], xmm13
        vmovss  xmm13, cs:__real@3f860a92
        vmovaps [rsp+128h+var_C8], xmm15
        vmovss  xmm15, cs:__real@3aba7596
        vmovaps xmmword ptr [r11-38h], xmm6
        vmovaps xmmword ptr [r11-48h], xmm7
        vxorps  xmm8, xmm8, xmm8
      }
      do
      {
        BgVehiclePhysics::ComputePointWorldSpace(_RDI, (const vec3_t *)(_RBX - 8), (vec3_t *)(_RBX - 5));
        v24 = !_RDI->m_waterPlaneFound;
        if ( _RDI->m_waterPlaneFound )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-10h]
            vmulss  xmm3, xmm0, dword ptr [rdi+774h]
            vmovss  xmm1, dword ptr [rdi+770h]
            vmulss  xmm2, xmm1, dword ptr [rbx-14h]
            vmovss  xmm0, dword ptr [rdi+778h]
            vmulss  xmm1, xmm0, dword ptr [rbx-0Ch]
            vaddss  xmm4, xmm3, xmm2
            vmovss  xmm3, dword ptr [rbx-8]
            vaddss  xmm2, xmm4, xmm1
            vsubss  xmm5, xmm2, dword ptr [rdi+77Ch]
            vcomiss xmm5, xmm3
          }
          *_RBX = 0.0;
          *((_BYTE *)_RBX + 8) = 0;
          if ( v24 )
          {
            __asm
            {
              vxorps  xmm0, xmm3, xmm10
              vcomiss xmm5, xmm0
              vandps  xmm2, xmm5, xmm11
              vcomiss xmm5, xmm8
              vsubss  xmm1, xmm3, xmm2
              vmulss  xmm0, xmm3, xmm12
              vsubss  xmm2, xmm0, xmm1
              vmulss  xmm1, xmm1, xmm1
              vmulss  xmm2, xmm2, xmm1
              vmulss  xmm4, xmm2, xmm13
              vmovss  dword ptr [rbx-4], xmm4
              vcomiss xmm4, xmm8
              vmovss  xmm4, dword ptr [rbx-4]
              vcomiss xmm4, xmm8
            }
          }
          else
          {
            *(_RBX - 1) = 0.0;
          }
        }
        else
        {
          *(_QWORD *)(_RBX - 1) = 0i64;
        }
        ++v15;
        _RBX += 11;
      }
      while ( v15 < _RDI->m_buoyancySphereCount );
      __asm
      {
        vmovaps xmm15, [rsp+128h+var_C8]
        vmovaps xmm13, [rsp+128h+var_A8]
        vmovaps xmm12, [rsp+128h+var_98]
        vmovaps xmm11, [rsp+128h+var_88]
        vmovaps xmm10, [rsp+128h+var_78]
        vmovaps xmm9, [rsp+128h+var_68]
        vmovaps xmm8, [rsp+128h+var_58]
        vmovaps xmm7, [rsp+128h+var_48]
        vmovaps xmm6, [rsp+128h+var_38]
      }
    }
  }
  __asm { vmovaps xmm14, [rsp+128h+var_B8] }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeVolumeSphereCap(BgVehiclePhysicsWaterBuoyancy *this, BgVehiclePhysicsWaterBuoyancy::BuoyancySphere *bsph, const vec4_t *plane)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+774h]
    vmulss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [rcx+770h]
    vmulss  xmm2, xmm1, dword ptr [rdx+0Ch]
    vmovss  xmm0, dword ptr [rcx+778h]
    vmulss  xmm1, xmm0, dword ptr [rdx+14h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm3, dword ptr [rdx+18h]
    vaddss  xmm2, xmm4, xmm1
    vsubss  xmm5, xmm2, dword ptr [rcx+77Ch]
    vcomiss xmm5, xmm3
  }
  bsph->m_distUnderwater = 0.0;
  bsph->m_fullySubmerged = 0;
  __asm
  {
    vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm5, xmm0
    vandps  xmm4, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm3, cs:__real@40400000
    vsubss  xmm1, xmm3, xmm4
    vsubss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm2, xmm2, xmm1
    vmulss  xmm4, xmm2, cs:__real@3f860a92
    vmovaps [rsp+48h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm5, xmm6
    vmovss  dword ptr [rdx+1Ch], xmm4
    vcomiss xmm4, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane
==============
*/
void BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane(BgVehiclePhysicsWaterBuoyancy *this, float deltaTime)
{
  unsigned int v10; 
  char v15; 
  int v20; 
  char m_waterPlaneFound; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  float v54; 
  unsigned int outSurfFlags; 
  float outFrac; 
  vec3_t outPointWs; 
  vec3_t end; 
  vec3_t outHitNormal; 
  vec3_t outHitPos; 
  char v61; 
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
  }
  _RAX = GLOBAL_UP_0;
  v10 = 0;
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm10, cs:__real@c0200000
  }
  this->m_waterPlaneFound = 0;
  _RBX = this;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  *(float *)&_RAX = _RAX->v[2];
  v15 = 0;
  __asm
  {
    vmovsd  qword ptr [rbp+57h+outPointWs], xmm0
    vmovss  xmm7, dword ptr [rbp+57h+outPointWs+4]
    vmovss  xmm8, dword ptr [rbp+57h+outPointWs]
  }
  LODWORD(outPointWs.v[2]) = (_DWORD)_RAX;
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+57h+outPointWs+8]
    vxorps  xmm11, xmm11, xmm11
  }
  do
  {
    if ( v10 >= 2 )
      break;
    v20 = 0;
    m_waterPlaneFound = v15;
    _RSI = &_RBX->m_buoyancySpheres[0].m_radius;
    do
    {
      if ( v20 >= _RBX->m_buoyancySphereCount )
        break;
      BgVehiclePhysics::ComputePointWorldSpace(_RBX, &_RBX->m_buoyancySpheres[v20].m_pointLs, &outPointWs);
      __asm { vmovss  xmm3, dword ptr [rsi] }
      m_entityNumber = _RBX->m_entityNumber;
      m_worldId = _RBX->m_worldId;
      __asm
      {
        vmulss  xmm1, xmm8, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbp+57h+outPointWs]
        vmulss  xmm1, xmm7, xmm3
        vaddss  xmm5, xmm1, dword ptr [rbp+57h+outPointWs+4]
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm4, xmm1, dword ptr [rbp+57h+outPointWs+8]
        vmulss  xmm3, xmm3, xmm10
        vmulss  xmm0, xmm8, xmm3
        vaddss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rbp+57h+outPointWs], xmm2
        vmulss  xmm2, xmm7, xmm3
        vaddss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbp+57h+end], xmm1
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbp+57h+end+8], xmm2
        vmovss  dword ptr [rbp+57h+outPointWs+4], xmm5
        vmovss  dword ptr [rbp+57h+outPointWs+8], xmm4
        vmovss  dword ptr [rbp+57h+end+4], xmm0
        vmovss  dword ptr [rsp+110h+var_F0], xmm11
      }
      if ( PhysicsVehicle_BuoyancyCast(m_worldId, m_entityNumber, &outPointWs, &end, v54, &outFrac, &outHitPos, &outHitNormal, &outSurfFlags) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+57h+var_98]
          vmovss  xmm2, dword ptr [rbp+57h+var_98+4]
          vmovss  xmm5, dword ptr [rbp+57h+var_98+8]
          vmulss  xmm3, xmm1, dword ptr [rbp+57h+var_88]
          vmovss  dword ptr [rbx+774h], xmm2
          vmulss  xmm2, xmm2, dword ptr [rbp+57h+var_88+4]
          vmovss  dword ptr [rbx+770h], xmm1
          vmulss  xmm1, xmm5, dword ptr [rbp+57h+var_88+8]
          vmovss  dword ptr [rbx+778h], xmm5
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rbx+77Ch], xmm2
        }
        _RBX->m_waterPlaneFound = 1;
        m_waterPlaneFound = 1;
      }
      else
      {
        m_waterPlaneFound = _RBX->m_waterPlaneFound;
      }
      ++v20;
      _RSI += 11;
    }
    while ( !m_waterPlaneFound );
    ++v10;
    v15 = m_waterPlaneFound;
    if ( !m_waterPlaneFound && v10 < 2 )
    {
      __asm
      {
        vxorps  xmm8, xmm8, xmm9
        vxorps  xmm7, xmm7, xmm9
        vxorps  xmm6, xmm6, xmm9
      }
    }
  }
  while ( !m_waterPlaneFound );
  _R11 = &v61;
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

void __fastcall BgVehiclePhysicsZodiac::DampVelocities(BgVehiclePhysicsZodiac *this, double deltaTime)
{
  char v24; 
  char v25; 
  char v28; 
  char v29; 
  vec3_t outVelLs; 
  char v46; 
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
    vmovaps xmm11, xmm1
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  _RDI = DCONST_DVARFLT_bg_vehZoscarLateralDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarLateralDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarLateralDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+28h]; speed
    vmovaps xmm2, xmm11; frameTime
    vxorps  xmm1, xmm1, xmm1; dst
    vxorps  xmm9, xmm9, xmm9
  }
  BgVehiclePhysics::DampLerp(&outVelLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_linearVelocityWs);
  _RDI = DCONST_DVARFLT_bg_vehZoscarYawDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarYawDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarYawDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  BgVehiclePhysics::GetNormalSpeedPlane(this);
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  _RDI = DCONST_DVARFLT_bg_vehZoscarPitchDamp;
  __asm
  {
    vsubss  xmm0, xmm1, xmm0
    vmulss  xmm10, xmm0, xmm6
  }
  if ( !DCONST_DVARFLT_bg_vehZoscarPitchDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarPitchDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm8, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_bg_vehZoscarRollDamp;
  if ( !DCONST_DVARFLT_bg_vehZoscarRollDamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarRollDamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vcomiss xmm10, xmm6
    vmovss  xmm7, dword ptr [rdi+28h]
  }
  if ( !(v24 | v25) )
    goto LABEL_16;
  __asm { vcomiss xmm8, xmm6 }
  if ( !(v24 | v25) )
    goto LABEL_16;
  __asm { vcomiss xmm7, xmm6 }
  if ( !(v24 | v25) )
  {
LABEL_16:
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_angularVelocityWs, &outVelLs);
    __asm { vcomiss xmm10, xmm6 }
    if ( !(v28 | v29) )
    {
      __asm
      {
        vmovaps xmm3, xmm10; speed
        vmovaps xmm2, xmm11; frameTime
        vxorps  xmm1, xmm1, xmm1; dst
      }
      BgVehiclePhysics::DampLerp(&outVelLs.v[2], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm { vcomiss xmm8, xmm6 }
    if ( !(v28 | v29) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+outVelLs+4]
        vcomiss xmm0, xmm9
      }
      if ( v28 )
      {
        __asm
        {
          vmovaps xmm3, xmm8; speed
          vmovaps xmm2, xmm11; frameTime
          vxorps  xmm1, xmm1, xmm1; dst
        }
        BgVehiclePhysics::DampLerp(&outVelLs.v[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      }
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !(v28 | v29) )
    {
      __asm
      {
        vmovaps xmm3, xmm7; speed
        vmovaps xmm2, xmm11; frameTime
        vxorps  xmm1, xmm1, xmm1; dst
      }
      BgVehiclePhysics::DampLerp(outVelLs.v, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(this, &outVelLs, &this->m_angularVelocityWs);
  }
  _R11 = &v46;
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
BgVehiclePhysicsWaterBuoyancy::DebugDraw
==============
*/
void BgVehiclePhysicsWaterBuoyancy::DebugDraw(BgVehiclePhysicsWaterBuoyancy *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v10; 
  float fmt; 
  float v17; 
  vec3_t outPointWs; 

  __asm
  {
    vmovss  xmm0, [rsp+88h+charHeight]
    vmovss  xmm1, [rsp+88h+tabWidth]
    vmovss  dword ptr [rsp+88h+var_60], xmm0
    vmovss  dword ptr [rsp+88h+fmt], xmm1
  }
  BgVehiclePhysics::DebugDraw(this, scrPlace, x, y, fmt, v17);
  if ( (BgVehiclePhysics::GetPhysicsBodyId(this) & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 599, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( GetPhysicsBodyId() ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( GetPhysicsBodyId() )") )
    __debugbreak();
  if ( !this->m_pmoveObject && BgVehiclePhysics::IsDynamic(this) )
  {
    v10 = 0;
    if ( this->m_buoyancySphereCount > 0 )
    {
      _RDI = this->m_buoyancySpheres;
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      do
      {
        BgVehiclePhysics::ComputePointWorldSpace(this, &_RDI->m_pointLs, &outPointWs);
        __asm { vmovaps xmm1, xmm6; radius }
        CG_DebugSphere(&outPointWs, *(float *)&_XMM1, &colorRed, 0, 0);
        __asm { vmovss  xmm1, dword ptr [rdi+18h]; radius }
        CG_DebugSphere(&outPointWs, *(float *)&_XMM1, &colorCyan, 0, 0);
        ++v10;
        ++_RDI;
      }
      while ( v10 < this->m_buoyancySphereCount );
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
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
  char v16; 

  __asm
  {
    vmovss  xmm2, cs:__real@42fc0000; max
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vandps  xmm7, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtsi2ss xmm0, xmm0, eax; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm7, xmm0
    vmovaps xmm3, xmm0
  }
  if ( v16 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm2, xmm7, xmm3
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm6, xmm8
      vblendvps xmm2, xmm1, xmm2, xmm0
      vmovss  xmm0, cs:__real@42fe0000
      vsubss  xmm1, xmm0, xmm3
      vdivss  xmm0, xmm2, xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::GetSoundValues
==============
*/
void BgVehiclePhysicsWaterBuoyancy::GetSoundValues(BgVehiclePhysicsWaterBuoyancy *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, int *outGear, float *outMph)
{
  _RDI = outThrottle;
  _RBX = this;
  if ( this->m_clientGeoLoaded && Physics_IsPredictiveWorld(this->m_worldId) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm0, dword ptr [rbx+70Ch]; val
      vmovaps [rsp+38h+var_18], xmm6
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm6, xmm6, xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rbx+710h]; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = outBrake;
    __asm { vmovss  dword ptr [rax], xmm0 }
    _RAX = outMph;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+714h]
      vmaxss  xmm0, xmm1, xmm6
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *outGear = I_clamp(abs32(_RBX->m_revSound.m_gear), 1, 6);
    __asm { vmovss  xmm0, dword ptr [rbx+704h]; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = outRpmNormal;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    *_RDI = 0.0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *outBrake = 0.0;
    *outGear = 1;
    *outMph = 0.0;
    _RAX = outRpmNormal;
    __asm { vmovss  dword ptr [rax], xmm0 }
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

bool __fastcall BgVehiclePhysicsWaterBuoyancy::Step(BgVehiclePhysicsWaterBuoyancy *this, double deltaTime)
{
  bool v5; 
  bool v7; 
  bool result; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  BgVehiclePhysics::Step(this, *(float *)&deltaTime);
  Physics_IsPredictiveWorld(_RBX->m_worldId);
  v5 = _RBX->IsInAir(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+76Ch] }
  v7 = !v5;
  result = 1;
  if ( v7 )
  {
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vxorps  xmm0, xmm0, xmm0
      vminss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx+76Ch], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vmaxss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx+76Ch], xmm1
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return result;
}

/*
==============
BgVehiclePhysicsZodiac::Step
==============
*/

bool __fastcall BgVehiclePhysicsZodiac::Step(BgVehiclePhysicsZodiac *this, double deltaTime)
{
  bool v6; 
  bool result; 
  vec3_t impulseWs; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  _RBX = this;
  BgVehiclePhysics::Step(this, *(float *)&deltaTime);
  Physics_IsPredictiveWorld(_RBX->m_worldId);
  v6 = _RBX->IsInAir(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+76Ch]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v6 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmaxss  xmm1, xmm0, xmm7
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm6
      vminss  xmm1, xmm0, xmm7
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+76Ch], xmm1
    vmovaps xmm1, xmm6; deltaTime
  }
  BgVehiclePhysicsWaterBuoyancy::ComputeWaterPlane(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsWaterBuoyancy::ComputeBuoyancySpheres(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsZodiac::ApplyEngine(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsZodiac::ApplySteering(_RBX, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysicsZodiac::DampVelocities(_RBX, *(float *)&_XMM1);
  if ( _RBX->m_playerControlled )
  {
    _RDI = DCONST_DVARFLT_bg_vehZoscarExtraGrav;
    if ( !DCONST_DVARFLT_bg_vehZoscarExtraGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarExtraGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm0, xmm0, cs:__real@447a0000
      vmulss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsp+88h+impulseWs+8], xmm1
      vmovss  dword ptr [rsp+88h+impulseWs], xmm7
      vmovss  dword ptr [rsp+88h+impulseWs+4], xmm7
    }
    BgVehiclePhysics::AccumulateOnlyLinearImpulse(_RBX, &impulseWs);
  }
  BgVehiclePhysicsZodiac::UpdateSetup(_RBX);
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return result;
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
  BOOL v15; 
  bool v16; 
  BOOL v39; 
  bool v40; 
  char v70; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RDI = this;
  __asm
  {
    vmovaps [rsp+78h+var_48], xmm8
    vmovaps [rsp+78h+var_58], xmm9
  }
  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  *(float *)&_XMM0 = Helpers::GetInputCharValueWithThreshold(-cmd->remoteControlMove[1], 8);
  __asm { vmovaps xmm6, xmm0 }
  *(float *)&_XMM0 = Helpers::GetInputCharValueWithThreshold(cmd->remoteControlMove[0], 0);
  __asm
  {
    vmovss  dword ptr [rdi+0D0h], xmm6
    vxorps  xmm7, xmm7, xmm7
    vmaxss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vmaxss  xmm0, xmm0, xmm7
    vmovss  dword ptr [rdi+0C8h], xmm1
    vmovss  dword ptr [rdi+0CCh], xmm0
  }
  v15 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 1, 4);
  v16 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 1, 4);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0CCh]
    vmovss  xmm6, dword ptr [rdi+0ECh]
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3f800000
  }
  switch ( v15 + 3 * v16 )
  {
    case 1:
      __asm { vmovaps xmm6, xmm3 }
      break;
    case 3:
      break;
    case 4:
      switch ( _RDI->m_controls.valuePolicy[1] )
      {
        case VP_MAXABS:
          __asm
          {
            vandps  xmm0, xmm6, xmm8
            vandps  xmm1, xmm3, xmm8
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_MINABS:
          __asm
          {
            vandps  xmm0, xmm6, xmm8
            vandps  xmm1, xmm3, xmm8
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm6, xmm6, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE:
          __asm
          {
            vaddss  xmm0, xmm6, xmm3
            vmulss  xmm6, xmm0, cs:__real@3f000000
          }
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_PLAYER:
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm9, xmm1
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm1, xmm1, xmm3
            vaddss  xmm6, xmm2, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_EXTERNAL:
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm9, xmm1
            vmulss  xmm2, xmm0, xmm3
            vmulss  xmm1, xmm1, xmm6
            vaddss  xmm6, xmm2, xmm1
          }
          goto LABEL_16;
      }
    default:
      __asm { vxorps  xmm6, xmm6, xmm6 }
      break;
  }
LABEL_16:
  v39 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 0, 4);
  v40 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 0, 4);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0C8h]
    vmovss  xmm4, dword ptr [rdi+0E8h]
  }
  switch ( v39 + 3 * v40 )
  {
    case 1:
      __asm { vmovaps xmm7, xmm3 }
      break;
    case 3:
      __asm { vmovaps xmm7, xmm4 }
      break;
    case 4:
      if ( _RDI->m_controls.valuePolicy[0] )
      {
        switch ( _RDI->m_controls.valuePolicy[0] )
        {
          case VP_MINABS:
            __asm
            {
              vandps  xmm1, xmm3, xmm8
              vandps  xmm0, xmm4, xmm8
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm7, xmm4, xmm3, xmm1
            }
            break;
          case VP_AVERAGE:
            __asm
            {
              vaddss  xmm0, xmm4, xmm3
              vmulss  xmm7, xmm0, cs:__real@3f000000
            }
            break;
          case VP_AVERAGE_WEIGHT_PLAYER:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, xmm4
              vmulss  xmm1, xmm1, xmm3
              vaddss  xmm7, xmm2, xmm1
            }
            break;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm1, xmm4
              vaddss  xmm7, xmm2, xmm1
            }
            break;
        }
      }
      else
      {
        __asm
        {
          vandps  xmm1, xmm3, xmm8
          vandps  xmm0, xmm4, xmm8
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm4, xmm3, xmm1
        }
      }
      break;
  }
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vmovss  dword ptr [rdi+0D8h], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  if ( (cmd->buttons & 0x8000000000000i64) != 0 )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3c010204
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm0, xmm0, ecx
      vcvtsi2ss xmm1, xmm1, eax
      vsubss  xmm1, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+0DCh], xmm1
    vmovaps xmm6, [rsp+78h+var_28]
  }
  _R11 = &v70;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
BgVehiclePhysicsZodiac::UpdateSetup
==============
*/
void BgVehiclePhysicsZodiac::UpdateSetup(BgVehiclePhysicsZodiac *this)
{
  const dvar_t *v13; 
  const dvar_t *v15; 
  const dvar_t *v20; 
  int integer; 
  int v22; 
  int v49; 
  int v50; 
  int v62; 
  int v63; 
  int v77; 
  int v78; 
  const dvar_t *v92; 
  int v96; 
  void *retaddr; 

  _RAX = &retaddr;
  v13 = DCONST_DVARFLT_bg_vehZoscarEngineForce;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarEngineForce") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  LODWORD(this->m_engine.m_accelForce) = v13->current.integer;
  v15 = DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint;
  if ( !DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarEngineOffsetPoint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  LODWORD(this->m_engine.m_offsetPointLs.v[0]) = v15->current.integer;
  this->m_engine.m_offsetPointLs.v[1] = v15->current.vector.v[1];
  this->m_engine.m_offsetPointLs.v[2] = v15->current.vector.v[2];
  _RBX = DCONST_DVARVEC3_bg_vehZoscarHalfsize;
  if ( !DCONST_DVARVEC3_bg_vehZoscarHalfsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarHalfsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vmovss  xmm10, dword ptr [rbx+2Ch]
    vmovss  xmm9, dword ptr [rbx+30h]
  }
  v20 = DCONST_DVARINT_bg_vehZoscarBuoyancySpheres;
  if ( !DCONST_DVARINT_bg_vehZoscarBuoyancySpheres && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarBuoyancySpheres") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  integer = v20->current.integer;
  if ( integer > 24 )
    integer = 24;
  v22 = 0;
  if ( integer < 0 )
    integer = 0;
  this->m_buoyancySphereCount = integer;
  if ( integer > 0 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_58], xmm8
      vmovaps [rsp+118h+var_98], xmm12
    }
    if ( (integer & 1) != 0 )
      this->m_buoyancySphereCount = integer + 1;
    __asm { vmulss  xmm1, xmm7, cs:__real@40000000 }
    _RBX = DCONST_DVARVEC3_bg_vehZoscarNoiseParms;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0
      vmovss  [rsp+118h+var_D4], xmm0
    }
    if ( !DCONST_DVARVEC3_bg_vehZoscarNoiseParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarNoiseParms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm12, dword ptr [rbx+2Ch]
      vmovss  xmm8, dword ptr [rbx+30h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vcvttss2si r13d, xmm1
    }
    if ( this->m_buoyancySphereCount / 2 > 0 )
    {
      __asm { vmovaps [rsp+118h+var_38], xmm6 }
      _RDI = &this->m_buoyancySpheres[0].m_dampK;
      __asm
      {
        vmovaps [rsp+118h+var_88], xmm11
        vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps [rsp+118h+var_A8], xmm13
        vmovaps [rsp+118h+var_B8], xmm14
        vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovaps [rsp+118h+var_C8], xmm15
        vmovss  xmm15, cs:__real@3f800000
        vxorps  xmm13, xmm10, xmm14
        vandps  xmm12, xmm12, xmm11
        vandps  xmm8, xmm8, xmm11
      }
      v96 = _ER13 + 24;
      do
      {
        __asm
        {
          vmovss  dword ptr [rdi-24h], xmm7
          vmovss  dword ptr [rdi-20h], xmm10
          vmovss  dword ptr [rdi-1Ch], xmm9
          vmovss  dword ptr [rdi+8], xmm7
          vmovss  dword ptr [rdi+0Ch], xmm13
          vmovss  dword ptr [rdi+10h], xmm9
        }
        _RBX = DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius;
        if ( !DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarBuoyancySphereRadius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  dword ptr [rdi+20h], xmm0
          vmovss  dword ptr [rdi-0Ch], xmm0
        }
        _RDI[11] = 1.0;
        *_RDI = 1.0;
        __asm
        {
          vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
          vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
          vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
          vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmaxss  xmm0, xmm3, xmm2
          vcvttss2si ebx, xmm0
        }
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v49 = _ER13 % _EBX;
        v50 = _ER13 / _EBX % _EBX;
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v49 < 0 || v49 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v50 < 0 || v50 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        *(double *)&_XMM0 = HavokPhysics_GetPerlinNoise2dValue(7, _EBX, v49, v50);
        __asm
        {
          vxorps  xmm1, xmm12, xmm14; min
          vmulss  xmm0, xmm0, xmm12; val
          vmovaps xmm2, xmm12; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        _RAX = 32i64;
        if ( (_ER13 & 1) == 0 )
          _RAX = -12i64;
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rax+rdi]
          vmovss  dword ptr [rax+rdi], xmm0
          vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
          vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
          vsubss  xmm3, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
          vsubss  xmm2, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmaxss  xmm1, xmm3, xmm2
          vcvttss2si ebx, xmm1
        }
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v62 = _ER13 % _EBX;
        v63 = _ER13 / _EBX % _EBX;
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v62 < 0 || v62 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v63 < 0 || v63 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        *(double *)&_XMM0 = HavokPhysics_GetPerlinNoise2dValue(7, _EBX, v62, v63);
        __asm
        {
          vxorps  xmm6, xmm8, xmm14
          vmovaps xmm1, xmm6; min
          vmulss  xmm0, xmm0, xmm8; val
          vmovaps xmm2, xmm8; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vandps  xmm0, xmm0, xmm11
          vsubss  xmm0, xmm15, xmm0
          vmulss  xmm1, xmm0, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
          vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
          vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
          vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmaxss  xmm0, xmm3, xmm2
          vcvttss2si ebx, xmm0
        }
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_water.cpp", 88, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v77 = v96 % _EBX;
        v78 = v96 / _EBX % _EBX;
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
          __debugbreak();
        if ( (v77 < 0 || v77 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
          __debugbreak();
        if ( (v78 < 0 || v78 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
          __debugbreak();
        *(double *)&_XMM0 = HavokPhysics_GetPerlinNoise2dValue(7, _EBX, v77, v78);
        __asm
        {
          vmulss  xmm0, xmm0, xmm8; val
          vmovaps xmm2, xmm8; max
          vmovaps xmm1, xmm6; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm7, xmm7, [rsp+118h+var_D4]
          vandps  xmm0, xmm0, xmm11
          vsubss  xmm0, xmm15, xmm0
          vmulss  xmm1, xmm0, dword ptr [rdi+2Ch]
          vmovss  dword ptr [rdi+2Ch], xmm1
        }
        ++v96;
        ++_ER13;
        ++v22;
        _RDI += 22;
      }
      while ( v22 < this->m_buoyancySphereCount / 2 );
      __asm
      {
        vmovaps xmm15, [rsp+118h+var_C8]
        vmovaps xmm14, [rsp+118h+var_B8]
        vmovaps xmm13, [rsp+118h+var_A8]
        vmovaps xmm11, [rsp+118h+var_88]
        vmovaps xmm6, [rsp+118h+var_38]
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm12, [rsp+118h+var_98]
    }
  }
  v92 = DCONST_DVARVEC3_bg_vehZoscarCoMLs;
  __asm
  {
    vmovaps xmm10, [rsp+118h+var_78]
    vmovaps xmm9, [rsp+118h+var_68]
    vmovaps xmm7, [rsp+118h+var_48]
  }
  if ( !DCONST_DVARVEC3_bg_vehZoscarCoMLs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehZoscarCoMLs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v92);
  LODWORD(this->m_centerOfMassOffsetOriginalLs.v[0]) = v92->current.integer;
  this->m_centerOfMassOffsetOriginalLs.v[1] = v92->current.vector.v[1];
  this->m_centerOfMassOffsetOriginalLs.v[2] = v92->current.vector.v[2];
  BgVehiclePhysics::OffsetCenterOfMass(this, &this->m_centerOfMassOffsetOriginalLs, 0);
}

/*
==============
BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir
==============
*/

void __fastcall BgVehiclePhysicsWaterBuoyancy::UpdateTimeInAir(BgVehiclePhysicsWaterBuoyancy *this, double deltaTime)
{
  bool v5; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = this->IsInAir(this);
  __asm { vmovss  xmm0, dword ptr [rbx+76Ch] }
  if ( v5 )
  {
    __asm
    {
      vaddss  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vmaxss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx+76Ch], xmm1
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vxorps  xmm0, xmm0, xmm0
      vminss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx+76Ch], xmm1
    }
  }
}

