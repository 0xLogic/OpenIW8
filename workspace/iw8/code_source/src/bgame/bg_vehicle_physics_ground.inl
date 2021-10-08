/*
==============
BgVehiclePhysicsGround::Steering::ChangingDirRatio
==============
*/

double __fastcall BgVehiclePhysicsGround::Steering::ChangingDirRatio(BgVehiclePhysicsGround::Steering *this)
{
  double result; 

  *(float *)&result = ?ChangingDirRatio@Steering@BgVehiclePhysicsGround@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsBraking
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsBraking(BgVehiclePhysicsGround *this)
{
  return ?IsBraking@BgVehiclePhysicsGround@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsTank::GetNormalYawSpeed
==============
*/

double __fastcall BgVehiclePhysicsTank::GetNormalYawSpeed(BgVehiclePhysicsTank *this)
{
  double result; 

  *(float *)&result = ?GetNormalYawSpeed@BgVehiclePhysicsTank@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::SetCurrentFriction
==============
*/

void __fastcall BgVehiclePhysicsGround::SetCurrentFriction(BgVehiclePhysicsGround *this, float fricValue)
{
  ?SetCurrentFriction@BgVehiclePhysicsGround@@QEAAXM@Z(this, fricValue);
}

/*
==============
BgVehiclePhysicsGround::GetWheelHitBodyId
==============
*/

unsigned int __fastcall BgVehiclePhysicsGround::GetWheelHitBodyId(BgVehiclePhysicsGround *this, unsigned int wheelNdx)
{
  return ?GetWheelHitBodyId@BgVehiclePhysicsGround@@QEBAII@Z(this, wheelNdx);
}

/*
==============
BgVehiclePhysicsGround::GetDriftingRatioExp
==============
*/

double __fastcall BgVehiclePhysicsGround::GetDriftingRatioExp(BgVehiclePhysicsGround *this)
{
  double result; 

  *(float *)&result = ?GetDriftingRatioExp@BgVehiclePhysicsGround@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxMaxRPM
==============
*/

double __fastcall BgVehiclePhysicsGround::ComputeApproxMaxRPM(BgVehiclePhysicsGround *this)
{
  double result; 

  *(float *)&result = ?ComputeApproxMaxRPM@BgVehiclePhysicsGround@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsTooInclinedToDamp
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsTooInclinedToDamp(BgVehiclePhysicsGround *this, float angleDeg)
{
  return ?IsTooInclinedToDamp@BgVehiclePhysicsGround@@QEBA_NM@Z(this, angleDeg);
}

/*
==============
BgVehiclePhysicsGround::HasMoveOrInput
==============
*/

bool __fastcall BgVehiclePhysicsGround::HasMoveOrInput(BgVehiclePhysicsGround *this)
{
  return ?HasMoveOrInput@BgVehiclePhysicsGround@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::GetIntensity
==============
*/

double __fastcall BgVehiclePhysicsGround::RumbleData::GetIntensity(BgVehiclePhysicsGround::RumbleData *this)
{
  double result; 

  *(float *)&result = ?GetIntensity@RumbleData@BgVehiclePhysicsGround@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::SetFrictionBase
==============
*/

void __fastcall BgVehiclePhysicsGround::SetFrictionBase(BgVehiclePhysicsGround *this, float fb)
{
  ?SetFrictionBase@BgVehiclePhysicsGround@@QEAAXM@Z(this, fb);
}

/*
==============
BgVehiclePhysicsGround::IsReversing
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsReversing(BgVehiclePhysicsGround *this)
{
  return ?IsReversing@BgVehiclePhysicsGround@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsGround::IsFacingUpward
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsFacingUpward(BgVehiclePhysicsGround *this)
{
  return ?IsFacingUpward@BgVehiclePhysicsGround@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsGround::GetWheel
==============
*/

const BgVehiclePhysicsGround::Wheel *__fastcall BgVehiclePhysicsGround::GetWheel(BgVehiclePhysicsGround *this, unsigned int wheelNdx)
{
  return ?GetWheel@BgVehiclePhysicsGround@@QEBAAEBUWheel@1@I@Z(this, wheelNdx);
}

/*
==============
BgVehiclePhysicsGround::IsNotMoving
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsNotMoving(BgVehiclePhysicsGround *this, float steeringThreshold, float speedThreshold)
{
  return ?IsNotMoving@BgVehiclePhysicsGround@@IEAA_NMM@Z(this, steeringThreshold, speedThreshold);
}

/*
==============
BgVehiclePhysicsGround::GetDriftingRatio
==============
*/

double __fastcall BgVehiclePhysicsGround::GetDriftingRatio(BgVehiclePhysicsGround *this)
{
  double result; 

  *(float *)&result = ?GetDriftingRatio@BgVehiclePhysicsGround@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsBraking
==============
*/
bool BgVehiclePhysicsGround::IsBraking(BgVehiclePhysicsGround *this)
{
  BOOL v3; 
  bool v4; 
  int v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = this;
  v3 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 4, 4);
  v4 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 4, 4);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+0D8h]
    vmovss  xmm5, dword ptr [rdi+0F8h]
    vxorps  xmm6, xmm6, xmm6
  }
  v8 = v3 + 3 * v4;
  v9 = v8 == 0;
  v10 = v8 - 1;
  if ( !v10 )
  {
    __asm { vmovaps xmm5, xmm4 }
    goto LABEL_16;
  }
  v9 = v10 < 2;
  v11 = v10 - 2;
  if ( v11 )
  {
    v9 = v11 == 0;
    if ( v11 != 1 )
      goto LABEL_14;
    v12 = (unsigned __int8)_RDI->m_controls.valuePolicy[4];
    v9 = 0;
    if ( _RDI->m_controls.valuePolicy[4] == VP_MAXABS )
    {
      __asm
      {
        vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcmpltss xmm2, xmm0, xmm2
        vblendvps xmm5, xmm5, xmm4, xmm2
      }
      goto LABEL_16;
    }
    v9 = v12 == 0;
    v13 = v12 - 1;
    if ( !v13 )
    {
      __asm
      {
        vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcmpltss xmm2, xmm2, xmm0
        vblendvps xmm5, xmm5, xmm4, xmm2
      }
      goto LABEL_16;
    }
    v9 = v13 == 0;
    v14 = v13 - 1;
    if ( !v14 )
    {
      __asm
      {
        vaddss  xmm0, xmm5, xmm4
        vmulss  xmm5, xmm0, cs:__real@3f000000
      }
      goto LABEL_16;
    }
    v9 = v14 == 0;
    v15 = v14 - 1;
    if ( !v15 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+118h]
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm2
        vmulss  xmm3, xmm1, xmm5
        vmulss  xmm2, xmm2, xmm4
        vaddss  xmm5, xmm3, xmm2
      }
      goto LABEL_16;
    }
    v9 = v15 == 0;
    if ( v15 != 1 )
    {
LABEL_14:
      __asm { vxorps  xmm5, xmm5, xmm5 }
      goto LABEL_16;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+118h]
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm2
      vmulss  xmm3, xmm1, xmm4
      vmulss  xmm2, xmm2, xmm5
      vaddss  xmm5, xmm3, xmm2
    }
  }
LABEL_16:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+178h]
    vmulss  xmm3, xmm0, dword ptr [rdi+1A8h]
    vmovss  xmm1, dword ptr [rdi+174h]
    vmulss  xmm2, xmm1, dword ptr [rdi+1A4h]
    vmovss  xmm0, dword ptr [rdi+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, xmm5
    vcomiss xmm3, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return v9;
}

/*
==============
BgVehiclePhysicsGround::SetFrictionBase
==============
*/

void __fastcall BgVehiclePhysicsGround::SetFrictionBase(BgVehiclePhysicsGround *this, double fb)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovaps xmm6, xmm1
    vcomiss xmm1, cs:__real@42c80000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 300, ASSERT_TYPE_ASSERT, "(fb >= 0.0f && fb < 100.0f)", (const char *)&queryFormat, "fb >= 0.0f && fb < 100.0f") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx+0A98h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
BgVehiclePhysicsGround::Steering::ChangingDirRatio
==============
*/
float BgVehiclePhysicsGround::Steering::ChangingDirRatio(BgVehiclePhysicsGround::Steering *this)
{
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+2Ch]
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3a83126f
    vandps  xmm2, xmm5, xmm1
    vcomiss xmm2, xmm3
    vmovss  xmm4, dword ptr [rcx+34h]
    vandps  xmm0, xmm4, xmm1
    vcomiss xmm0, xmm3
    vmulss  xmm0, xmm4, xmm5
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm0, xmm1
    vmovss  xmm0, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxMaxRPM
==============
*/
float BgVehiclePhysicsGround::ComputeApproxMaxRPM(BgVehiclePhysicsGround *this)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+178h]
    vmulss  xmm3, xmm0, dword ptr [rcx+1A8h]
    vmovss  xmm1, dword ptr [rcx+174h]
    vmulss  xmm2, xmm1, dword ptr [rcx+1A4h]
    vmovss  xmm0, dword ptr [rcx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm
  {
    vdivss  xmm0, xmm0, dword ptr [rbx+0A18h]
    vmulss  xmm0, xmm0, cs:__real@4118c9eb
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsGround::GetDriftingRatio
==============
*/

float __fastcall BgVehiclePhysicsGround::GetDriftingRatio(BgVehiclePhysicsGround *this, double _XMM1_8)
{
  if ( this->m_vehicleType == VEH_CAR )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [rcx+0A98h]; val
      vmovaps [rsp+38h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
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
BgVehiclePhysicsGround::GetDriftingRatioExp
==============
*/

float __fastcall BgVehiclePhysicsGround::GetDriftingRatioExp(BgVehiclePhysicsGround *this, double _XMM1_8)
{
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  if ( this->m_vehicleType == VEH_CAR )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0AB8h]
      vdivss  xmm0, xmm0, dword ptr [rcx+0A98h]; val
      vmovaps [rsp+38h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  __asm
  {
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsGround::RumbleData::GetIntensity
==============
*/

double __fastcall BgVehiclePhysicsGround::RumbleData::GetIntensity(BgVehiclePhysicsGround::RumbleData *this, double _XMM1_8)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm2, xmm1
  }
  if ( v2 | v3 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, xmm1
  }
  if ( v2 | v3 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+4]
    vcomiss xmm3, xmm1
  }
  if ( v2 | v3 )
  {
LABEL_5:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm2, xmm0
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm3; val
      vmovss  xmm2, cs:__real@3f800000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  return *(double *)&_XMM0;
}

/*
==============
BgVehiclePhysicsTank::GetNormalYawSpeed
==============
*/

double __fastcall BgVehiclePhysicsTank::GetNormalYawSpeed(BgVehiclePhysicsTank *this, double _XMM1_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1B8h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm0, cs:__real@3f22f983; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BgVehiclePhysicsGround::GetWheel
==============
*/
BgVehiclePhysicsGround::Wheel *BgVehiclePhysicsGround::GetWheel(BgVehiclePhysicsGround *this, unsigned int wheelNdx)
{
  __int64 v3; 

  v3 = wheelNdx;
  if ( wheelNdx >= this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 252, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
    __debugbreak();
  return &this->m_wheels[v3];
}

/*
==============
BgVehiclePhysicsGround::HasMoveOrInput
==============
*/
bool BgVehiclePhysicsGround::HasMoveOrInput(BgVehiclePhysicsGround *this)
{
  BgVehiclePhysicsControls *p_m_controls; 
  char v5; 
  char v6; 
  char v8; 
  char v10; 
  vec3_t outVelLs; 

  p_m_controls = &this->m_controls;
  _RBX = this;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v5 | v6) )
    goto LABEL_4;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(p_m_controls, 2u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v5 | v6 )
    v8 = 0;
  else
LABEL_4:
    v8 = 1;
  if ( Physics_IsRigidBodyValid(_RBX->m_worldId, _RBX->m_lastColliderBodyId) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40a00000
      vcomiss xmm0, dword ptr [rbx+2B0h]
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( v8 )
    return 1;
  if ( v10 )
    return 1;
  BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &_RBX->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+outVelLs]
    vmovss  xmm1, dword ptr [rsp+48h+outVelLs+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@441c4000
  }
  return !(v5 | v6);
}

/*
==============
BgVehiclePhysicsGround::IsFacingUpward
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsFacingUpward(BgVehiclePhysicsGround *this, __int64 a2, __int64 a3, double _XMM3_8)
{
  bool result; 

  __asm
  {
    vmovss  xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm4, dword ptr [rcx+190h]
    vmovss  xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm0, xmm5, dword ptr [rcx+18Ch]
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm6, dword ptr [rcx+194h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vmulss  xmm1, xmm4, dword ptr [rcx+178h]
    vmulss  xmm0, xmm5, dword ptr [rcx+174h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rcx+17Ch]
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, xmm3
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+18h+var_18] }
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsNotMoving
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsNotMoving(BgVehiclePhysicsGround *this, double steeringThreshold, double speedThreshold)
{
  BgVehiclePhysicsControls *p_m_controls; 
  char v12; 
  char v13; 
  bool v14; 
  bool result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  p_m_controls = &this->m_controls;
  _RBX = this;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  __asm
  {
    vmulss  xmm2, xmm6, xmm6
    vcomiss xmm2, dword ptr [rbx+0C70h]
  }
  v14 = !(v12 | v13);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(p_m_controls, 2u);
  __asm
  {
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm7, xmm7, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm7, xmm1
  }
  if ( v12 | v13 && v14 )
  {
    __asm
    {
      vandps  xmm0, xmm0, xmm2
      vcomiss xmm0, xmm8
    }
  }
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsReversing
==============
*/
bool BgVehiclePhysicsGround::IsReversing(BgVehiclePhysicsGround *this)
{
  char v3; 
  char v5; 

  _RBX = this;
  *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 1u);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v3 | v5 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178h]
    vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
    vmovss  xmm1, dword ptr [rbx+174h]
    vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
    vmovss  xmm0, dword ptr [rbx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  return v3 != 0;
}

/*
==============
BgVehiclePhysicsGround::IsTooInclinedToDamp
==============
*/

bool __fastcall BgVehiclePhysicsGround::IsTooInclinedToDamp(BgVehiclePhysicsGround *this, double angleDeg)
{
  char v23; 

  __asm
  {
    vmovss  xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm4, dword ptr [rcx+190h]
    vmovss  xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm0, xmm5, dword ptr [rcx+18Ch]
    vaddss  xmm3, xmm2, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm6, dword ptr [rcx+194h]
    vaddss  xmm3, xmm3, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmulss  xmm1, xmm4, dword ptr [rcx+178h]
    vmulss  xmm0, xmm5, dword ptr [rcx+174h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rcx+17Ch]
    vmulss  xmm0, xmm7, cs:__real@3c8efa35; X
    vaddss  xmm6, xmm2, xmm1
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm7, [rsp+48h+var_28]
    vcomiss xmm6, xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return !v23;
}

/*
==============
BgVehiclePhysicsGround::SetCurrentFriction
==============
*/

void __fastcall BgVehiclePhysicsGround::SetCurrentFriction(BgVehiclePhysicsGround *this, double fricValue)
{
  __asm
  {
    vcomiss xmm1, cs:__real@40a00000
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 479, ASSERT_TYPE_ASSERT, "(fricValue < 5.0f)", (const char *)&queryFormat, "fricValue < 5.0f") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmaxss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rbx+0AB8h], xmm1
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
BgVehiclePhysicsGround::GetWheelHitBodyId
==============
*/
__int64 BgVehiclePhysicsGround::GetWheelHitBodyId(BgVehiclePhysicsGround *this, unsigned int wheelNdx)
{
  __int64 v3; 

  v3 = wheelNdx;
  if ( wheelNdx >= this->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 259, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
    __debugbreak();
  return this->m_wheels[v3].m_contactBodyId;
}

