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
  BOOL v2; 
  bool v3; 
  __int128 v4; 

  v2 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 4, 4);
  v3 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 4, 4);
  v4 = LODWORD(this->m_controls.playerValues[4]);
  _XMM5 = LODWORD(this->m_controls.externalValues[4]);
  if ( v2 + 3 * v3 == 1 )
  {
    *(float *)&_XMM5 = this->m_controls.playerValues[4];
    return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
  }
  if ( v2 + 3 * v3 != 3 )
  {
    if ( v2 + 3 * v3 != 4 )
      goto LABEL_14;
    switch ( this->m_controls.valuePolicy[4] )
    {
      case VP_MAXABS:
        _XMM0 = _XMM5 & _xmm;
        __asm
        {
          vcmpltss xmm2, xmm0, xmm2
          vblendvps xmm5, xmm5, xmm4, xmm2
        }
        return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
      case VP_MINABS:
        _XMM2 = v4 & _xmm;
        __asm
        {
          vcmpltss xmm2, xmm2, xmm0
          vblendvps xmm5, xmm5, xmm4, xmm2
        }
        return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
      case VP_AVERAGE:
        *(float *)&_XMM5 = (float)(*(float *)&_XMM5 + *(float *)&v4) * 0.5;
        return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
      case VP_AVERAGE_WEIGHT_PLAYER:
        *(float *)&_XMM5 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM5) + (float)(this->m_controls.policyWeight * *(float *)&v4);
        return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
    }
    if ( this->m_controls.valuePolicy[4] != VP_AVERAGE_WEIGHT_EXTERNAL )
    {
LABEL_14:
      LODWORD(_XMM5) = 0;
      return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
    }
    *(float *)&_XMM5 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v4) + (float)(this->m_controls.policyWeight * *(float *)&_XMM5);
  }
  return (float)((float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) * *(float *)&_XMM5) < 0.0;
}

/*
==============
BgVehiclePhysicsGround::SetFrictionBase
==============
*/
void BgVehiclePhysicsGround::SetFrictionBase(BgVehiclePhysicsGround *this, float fb)
{
  if ( fb < 0.0 || fb >= 100.0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 300, ASSERT_TYPE_ASSERT, "(fb >= 0.0f && fb < 100.0f)", (const char *)&queryFormat, "fb >= 0.0f && fb < 100.0f") )
      __debugbreak();
    this->m_friction.tread.v[0] = fb;
  }
  else
  {
    this->m_friction.tread.v[0] = fb;
  }
}

/*
==============
BgVehiclePhysicsGround::Steering::ChangingDirRatio
==============
*/
float BgVehiclePhysicsGround::Steering::ChangingDirRatio(BgVehiclePhysicsGround::Steering *this)
{
  float m_yawInterpolated; 
  float m_yaw; 
  double v3; 

  m_yawInterpolated = this->m_yawInterpolated;
  if ( COERCE_FLOAT(LODWORD(m_yawInterpolated) & _xmm) <= 0.001 )
    return FLOAT_1_0;
  m_yaw = this->m_yaw;
  if ( COERCE_FLOAT(LODWORD(m_yaw) & _xmm) <= 0.001 || (float)(m_yaw * m_yawInterpolated) >= 0.0 )
    return FLOAT_1_0;
  v3 = I_fclamp(COERCE_FLOAT(LODWORD(m_yawInterpolated) & _xmm) / this->m_yawMaxAngle, 0.0, 1.0);
  return 1.0 - *(float *)&v3;
}

/*
==============
BgVehiclePhysicsGround::ComputeApproxMaxRPM
==============
*/
float BgVehiclePhysicsGround::ComputeApproxMaxRPM(BgVehiclePhysicsGround *this)
{
  double TopSpeedReverse; 

  if ( (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) <= 0.0 )
    TopSpeedReverse = BgVehiclePhysics::GetTopSpeedReverse(this);
  else
    TopSpeedReverse = BgVehiclePhysics::GetTopSpeedForward(this);
  return (float)(*(float *)&TopSpeedReverse / this->m_wheelCommon.m_radius) * 9.5492964;
}

/*
==============
BgVehiclePhysicsGround::GetDriftingRatio
==============
*/
float BgVehiclePhysicsGround::GetDriftingRatio(BgVehiclePhysicsGround *this)
{
  double v1; 

  if ( this->m_vehicleType != VEH_CAR )
    return 0.0;
  v1 = I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
  return 1.0 - *(float *)&v1;
}

/*
==============
BgVehiclePhysicsGround::GetDriftingRatioExp
==============
*/
float BgVehiclePhysicsGround::GetDriftingRatioExp(BgVehiclePhysicsGround *this)
{
  float v1; 
  double v2; 

  v1 = 0.0;
  if ( this->m_vehicleType == VEH_CAR )
  {
    v2 = I_fclamp(this->m_friction.car.tgtFriction / this->m_friction.tread.v[0], 0.0, 1.0);
    v1 = 1.0 - *(float *)&v2;
  }
  return (float)((float)((float)(v1 * v1) * (float)(v1 * v1)) * (float)(v1 * v1)) * (float)(v1 * v1);
}

/*
==============
BgVehiclePhysicsGround::RumbleData::GetIntensity
==============
*/
double BgVehiclePhysicsGround::RumbleData::GetIntensity(BgVehiclePhysicsGround::RumbleData *this)
{
  float m_t; 
  float m_duration; 
  float m_intensity; 

  m_t = this->m_t;
  if ( m_t <= 0.0 )
    return 0.0;
  m_duration = this->m_duration;
  if ( m_duration <= 0.0 )
    return 0.0;
  m_intensity = this->m_intensity;
  if ( m_intensity <= 0.0 )
    return 0.0;
  else
    return I_fclamp((float)((float)(m_t / m_duration) * (float)(m_t / m_duration)) * m_intensity, 0.0, 1.0);
}

/*
==============
BgVehiclePhysicsTank::GetNormalYawSpeed
==============
*/
double BgVehiclePhysicsTank::GetNormalYawSpeed(BgVehiclePhysicsTank *this)
{
  return I_fclamp(COERCE_FLOAT(LODWORD(this->m_angularVelocityWs.v[2]) & _xmm) * 0.63661975, 0.0, 1.0);
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
  double Value; 
  double v4; 
  bool v5; 
  bool v6; 
  bool result; 
  vec3_t outVelLs; 

  p_m_controls = &this->m_controls;
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v5 = 1;
  if ( COERCE_FLOAT(LODWORD(Value) & _xmm) <= 0.001 )
  {
    v4 = BgVehiclePhysicsControls::GetValue(p_m_controls, 2u);
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) <= 0.001 )
      v5 = 0;
  }
  v6 = Physics_IsRigidBodyValid(this->m_worldId, this->m_lastColliderBodyId) && this->m_timeSinceLastCollision < 5.0;
  result = 1;
  if ( !v5 && !v6 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
    if ( (float)((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1])) <= 625.0 )
      return 0;
  }
  return result;
}

/*
==============
BgVehiclePhysicsGround::IsFacingUpward
==============
*/
bool BgVehiclePhysicsGround::IsFacingUpward(BgVehiclePhysicsGround *this)
{
  return (float)((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2])) > 0.0 && (float)((float)((float)(0.0 * this->m_transform.m[0].v[1]) + (float)(0.0 * this->m_transform.m[0].v[0])) + (float)(1.0 * this->m_transform.m[0].v[2])) > 0.0;
}

/*
==============
BgVehiclePhysicsGround::IsNotMoving
==============
*/
bool BgVehiclePhysicsGround::IsNotMoving(BgVehiclePhysicsGround *this, float steeringThreshold, float speedThreshold)
{
  BgVehiclePhysicsControls *p_m_controls; 
  double Value; 
  bool v6; 
  int v7; 
  double v8; 

  p_m_controls = &this->m_controls;
  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 4u);
  v6 = (float)(speedThreshold * speedThreshold) > this->m_speedSqEMA;
  v7 = LODWORD(Value);
  v8 = BgVehiclePhysicsControls::GetValue(p_m_controls, 2u);
  return COERCE_FLOAT(v7 & _xmm) <= 0.0 && v6 && COERCE_FLOAT(LODWORD(v8) & _xmm) < steeringThreshold;
}

/*
==============
BgVehiclePhysicsGround::IsReversing
==============
*/
bool BgVehiclePhysicsGround::IsReversing(BgVehiclePhysicsGround *this)
{
  double Value; 

  Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 1u);
  return COERCE_FLOAT(LODWORD(Value) & _xmm) > 0.001 && (float)((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) < 0.0;
}

/*
==============
BgVehiclePhysicsGround::IsTooInclinedToDamp
==============
*/
bool BgVehiclePhysicsGround::IsTooInclinedToDamp(BgVehiclePhysicsGround *this, float angleDeg)
{
  float v3; 

  if ( (float)((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2])) <= 0.0 )
    return 1;
  LODWORD(v3) = COERCE_UNSIGNED_INT((float)((float)(0.0 * this->m_transform.m[0].v[1]) + (float)(0.0 * this->m_transform.m[0].v[0])) + (float)(1.0 * this->m_transform.m[0].v[2])) & _xmm;
  return v3 >= cosf_0(angleDeg * 0.017453292);
}

/*
==============
BgVehiclePhysicsGround::SetCurrentFriction
==============
*/

void __fastcall BgVehiclePhysicsGround::SetCurrentFriction(BgVehiclePhysicsGround *this, double fricValue)
{
  _XMM6 = *(_OWORD *)&fricValue;
  if ( *(float *)&fricValue < 5.0 )
  {
    __asm { vmaxss  xmm1, xmm6, xmm0 }
    this->m_friction.car.tgtFriction = *(float *)&_XMM1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 479, ASSERT_TYPE_ASSERT, "(fricValue < 5.0f)", (const char *)&queryFormat, "fricValue < 5.0f") )
      __debugbreak();
    __asm { vmaxss  xmm1, xmm6, xmm0 }
    this->m_friction.car.tgtFriction = *(float *)&_XMM1;
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

