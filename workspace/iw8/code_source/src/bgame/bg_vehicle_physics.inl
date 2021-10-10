/*
==============
BgVehiclePhysicsComponent::SetPause
==============
*/

void __fastcall BgVehiclePhysicsComponent::SetPause(BgVehiclePhysicsComponent *this, float pauseTimeInSecs)
{
  ?SetPause@BgVehiclePhysicsComponent@@QEAAXM@Z(this, pauseTimeInSecs);
}

/*
==============
BgVehiclePhysicsControls::GetValuePlayer
==============
*/

double __fastcall BgVehiclePhysicsControls::GetValuePlayer(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  double result; 

  *(float *)&result = ?GetValuePlayer@BgVehiclePhysicsControls@@QEBAMI@Z(this, controlIndex);
  return result;
}

/*
==============
BgVehiclePhysicsLinkedPlayers<2>::Reset
==============
*/

void __fastcall BgVehiclePhysicsLinkedPlayers<2>::Reset(BgVehiclePhysicsLinkedPlayers<2> *this)
{
  ?Reset@?$BgVehiclePhysicsLinkedPlayers@$01@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::GetNormalSpeedPlane
==============
*/

double __fastcall BgVehiclePhysics::GetNormalSpeedPlane(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetNormalSpeedPlane@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsControls::GetValue
==============
*/

double __fastcall BgVehiclePhysicsControls::GetValue(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  double result; 

  *(float *)&result = ?GetValue@BgVehiclePhysicsControls@@QEBAMI@Z(this, controlIndex);
  return result;
}

/*
==============
BgVehiclePhysicsControls::GetValueExternal
==============
*/

double __fastcall BgVehiclePhysicsControls::GetValueExternal(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  double result; 

  *(float *)&result = ?GetValueExternal@BgVehiclePhysicsControls@@QEBAMI@Z(this, controlIndex);
  return result;
}

/*
==============
BgVehiclePhysicsHistory::AddTransform
==============
*/

void __fastcall BgVehiclePhysicsHistory::AddTransform(BgVehiclePhysicsHistory *this, const BgVehiclePhysics *vehObj, const vec3_t *pos, const vec4_t *ori, float deltaTime)
{
  ?AddTransform@BgVehiclePhysicsHistory@@QEAAXAEBVBgVehiclePhysics@@AEBTvec3_t@@AEBTvec4_t@@M@Z(this, vehObj, pos, ori, deltaTime);
}

/*
==============
BgVehiclePhysics::GetUpInclination
==============
*/

double __fastcall BgVehiclePhysics::GetUpInclination(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetUpInclination@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsDeferredActionManager::DeferAction
==============
*/

void __fastcall BgVehiclePhysicsDeferredActionManager::DeferAction(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysicsDeferredActionType actionType)
{
  ?DeferAction@BgVehiclePhysicsDeferredActionManager@@QEAAXW4BgVehiclePhysicsDeferredActionType@@@Z(this, actionType);
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/

void __fastcall BgVehiclePhysics::DampLerp(float *cur, float dst, float frameTime, float speed)
{
  ?DampLerp@BgVehiclePhysics@@SAXAEAMMMM@Z(cur, dst, frameTime, speed);
}

/*
==============
BgVehiclePhysics::GetNormalSpeed
==============
*/

double __fastcall BgVehiclePhysics::GetNormalSpeed(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetNormalSpeed@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::GetForwardSpeedOfKeyframed
==============
*/

double __fastcall BgVehiclePhysics::GetForwardSpeedOfKeyframed(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetForwardSpeedOfKeyframed@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/

void __fastcall BgVehiclePhysics::DampLerp(vec3_t *cur, const vec3_t *dst, float frameTime, float speed)
{
  ?DampLerp@BgVehiclePhysics@@SAXAEATvec3_t@@AEBT2@MM@Z(cur, dst, frameTime, speed);
}

/*
==============
BgVehiclePhysics::GetPlaneSpeed
==============
*/

double __fastcall BgVehiclePhysics::GetPlaneSpeed(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetPlaneSpeed@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::GetNormalSpeedPlane
==============
*/
float BgVehiclePhysics::GetNormalSpeedPlane(BgVehiclePhysics *this)
{
  float v3; 
  double v5; 
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  _XMM0 = LODWORD(outVelLs.v[0]);
  v3 = (float)(*(float *)&_XMM0 * *(float *)&_XMM0) + (float)(outVelLs.v[1] * outVelLs.v[1]);
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
  v5 = I_fclamp(fsqrt(v3) * (float)(1.0 / *(float *)&_XMM1), 0.0, 1.0);
  return *(float *)&v5;
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/
void BgVehiclePhysics::DampLerp(vec3_t *cur, const vec3_t *dst, float frameTime, float speed)
{
  int v8; 
  int v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  float v14; 
  float v15; 
  __int128 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v27; 
  float v28; 
  float v29; 
  float v33; 
  float v34; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  _XMM11 = LODWORD(FLOAT_0_016000001);
  if ( frameTime <= 0.016000001 || frameTime >= 1.0 )
  {
    v8 = 1;
  }
  else
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    v8 = (int)*(float *)&_XMM1;
    if ( (float)(frameTime - (float)(*(float *)&_XMM1 * 0.016000001)) > 0.0 )
      ++v8;
  }
  v9 = 0;
  if ( v8 >= 4 )
  {
    v10 = LODWORD(cur->v[0]);
    v11 = cur->v[1];
    v12 = cur->v[2];
    v13 = 2;
    do
    {
      v14 = dst->v[1];
      v15 = dst->v[2];
      _XMM0 = (unsigned int)v9;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm2
      }
      v19 = v10;
      *(float *)&v19 = *(float *)&v10 + (float)((float)(dst->v[0] - *(float *)&v10) * (float)(*(float *)&_XMM0 * speed));
      cur->v[0] = *(float *)&v19;
      v20 = (float)((float)(v14 - v11) * (float)(*(float *)&_XMM0 * speed)) + v11;
      cur->v[1] = v20;
      v21 = (float)((float)(v15 - v12) * (float)(*(float *)&_XMM0 * speed)) + v12;
      cur->v[2] = v21;
      v22 = dst->v[1];
      v23 = dst->v[2];
      _XMM0 = v13 - 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm2
      }
      *(float *)&v19 = *(float *)&v19 + (float)((float)(dst->v[0] - *(float *)&v19) * (float)(*(float *)&_XMM0 * speed));
      cur->v[0] = *(float *)&v19;
      v27 = (float)((float)(v22 - v20) * (float)(*(float *)&_XMM0 * speed)) + v20;
      cur->v[1] = v27;
      v28 = (float)((float)(v23 - v21) * (float)(*(float *)&_XMM0 * speed)) + v21;
      cur->v[2] = v28;
      v29 = dst->v[2];
      _XMM0 = v13;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm2
      }
      *(float *)&v19 = *(float *)&v19 + (float)((float)(dst->v[0] - *(float *)&v19) * (float)(*(float *)&_XMM0 * speed));
      v33 = (float)((float)(dst->v[1] - v27) * (float)(*(float *)&_XMM0 * speed)) + v27;
      cur->v[0] = *(float *)&v19;
      cur->v[1] = v33;
      v34 = (float)((float)(v29 - v28) * (float)(*(float *)&_XMM0 * speed)) + v28;
      cur->v[2] = v34;
      _XMM0 = v13 + 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm2
      }
      *(float *)&v19 = *(float *)&v19 + (float)((float)(dst->v[0] - *(float *)&v19) * (float)(*(float *)&_XMM0 * speed));
      v10 = v19;
      v11 = (float)((float)(dst->v[1] - v33) * (float)(*(float *)&_XMM0 * speed)) + v33;
      v12 = (float)((float)(dst->v[2] - v34) * (float)(*(float *)&_XMM0 * speed)) + v34;
      cur->v[0] = *(float *)&v19;
      cur->v[1] = v11;
      v9 += 4;
      v13 += 4;
      cur->v[2] = v12;
    }
    while ( v9 < v8 - 3 );
  }
  if ( v9 < v8 )
  {
    v38 = LODWORD(cur->v[0]);
    v39 = LODWORD(cur->v[1]);
    v40 = LODWORD(cur->v[2]);
    do
    {
      _XMM0 = (unsigned int)v9;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm2
      }
      v44 = v38;
      *(float *)&v44 = *(float *)&v38 + (float)((float)(dst->v[0] - *(float *)&v38) * (float)(*(float *)&_XMM0 * speed));
      v38 = v44;
      v45 = v39;
      *(float *)&v45 = *(float *)&v39 + (float)((float)(dst->v[1] - *(float *)&v39) * (float)(*(float *)&_XMM0 * speed));
      v39 = v45;
      ++v9;
      v46 = v40;
      *(float *)&v46 = *(float *)&v40 + (float)((float)(dst->v[2] - *(float *)&v40) * (float)(*(float *)&_XMM0 * speed));
      v40 = v46;
      cur->v[2] = *(float *)&v46;
      cur->v[0] = *(float *)&v38;
      cur->v[1] = *(float *)&v39;
    }
    while ( v9 < v8 );
  }
}

/*
==============
BgVehiclePhysicsHistory::AddTransform
==============
*/
void BgVehiclePhysicsHistory::AddTransform(BgVehiclePhysicsHistory *this, const BgVehiclePhysics *vehObj, const vec3_t *pos, const vec4_t *ori, float deltaTime)
{
  bool v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  double GlobalTopSpeed; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec3_t angles; 

  QuatToAngles(ori, &angles);
  v8 = vehObj->m_simulationFrame <= 2;
  v9 = angles.v[0] * 0.017453292;
  v10 = angles.v[2] * 0.017453292;
  v12 = angles.v[1] * 0.017453292;
  v11 = angles.v[1] * 0.017453292;
  angles.v[2] = angles.v[2] * 0.017453292;
  angles.v[0] = angles.v[0] * 0.017453292;
  angles.v[1] = angles.v[1] * 0.017453292;
  if ( v8 && this->m_lastPosition.v[0] == 0.0 && this->m_lastPosition.v[1] == 0.0 && this->m_lastPosition.v[2] == 0.0 )
  {
    this->m_lastPosition.v[0] = pos->v[0];
    this->m_lastPosition.v[1] = pos->v[1];
    this->m_lastPosition.v[2] = pos->v[2];
    this->m_lastAngles.v[0] = v9;
    this->m_lastAngles.v[1] = v12;
    this->m_lastAngles.v[2] = v10;
  }
  else
  {
    if ( deltaTime <= 0.001 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 1013, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON") )
        __debugbreak();
      v9 = angles.v[0];
      v11 = angles.v[1];
      v10 = angles.v[2];
    }
    v13 = 1.0 / deltaTime;
    v14 = (float)(pos->v[1] - this->m_lastPosition.v[1]) * (float)(1.0 / deltaTime);
    v15 = (float)(pos->v[0] - this->m_lastPosition.v[0]) * (float)(1.0 / deltaTime);
    v16 = (float)(v9 - this->m_lastAngles.v[0]) * (float)(1.0 / deltaTime);
    v17 = (float)(v10 - this->m_lastAngles.v[2]) * (float)(1.0 / deltaTime);
    v18 = (float)(pos->v[2] - this->m_lastPosition.v[2]) * (float)(1.0 / deltaTime);
    v19 = (float)(v11 - this->m_lastAngles.v[1]) * (float)(1.0 / deltaTime);
    GlobalTopSpeed = BgVehiclePhysics::GetGlobalTopSpeed((BgVehiclePhysics *)vehObj);
    LODWORD(_XMM6) = LODWORD(GlobalTopSpeed);
    _XMM0 = LODWORD(vehObj->m_topSpeedForward.v[0]);
    if ( *(float *)&_XMM0 > 0.001 )
      __asm { vminss  xmm6, xmm0, xmm6 }
    if ( *(float *)&_XMM6 < 0.0 )
    {
      __asm { vxorpd  xmm0, xmm0, xmm0 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", *(float *)&_XMM6, *(double *)&_XMM0) )
        __debugbreak();
    }
    v24 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v18 * v18);
    if ( v24 > (float)(*(float *)&_XMM6 * *(float *)&_XMM6) )
    {
      v25 = *(float *)&_XMM6 / fsqrt(v24);
      v15 = v15 * v25;
      v14 = v14 * v25;
      v18 = v18 * v25;
    }
    v26 = (float)(v15 - this->m_lastLinearVel.v[0]) * v13;
    v27 = (float)(v18 - this->m_lastLinearVel.v[2]) * v13;
    v28 = (float)(v16 - this->m_lastAngularVel.v[0]) * v13;
    v29 = (float)(v17 - this->m_lastAngularVel.v[2]) * v13;
    v30 = angles.v[0];
    v31 = (float)(v14 - this->m_lastLinearVel.v[1]) * v13;
    v32 = v19 - this->m_lastAngularVel.v[1];
    this->m_lastPosition.v[0] = pos->v[0];
    this->m_lastPosition.v[1] = pos->v[1];
    this->m_lastPosition.v[2] = pos->v[2];
    this->m_lastAngles.v[0] = v30;
    this->m_lastAngles.v[2] = angles.v[2];
    this->m_lastAngles.v[1] = angles.v[1];
    this->m_lastLinearVel.v[0] = (float)(v15 + this->m_lastLinearVel.v[0]) * 0.5;
    this->m_lastLinearVel.v[1] = (float)(v14 + this->m_lastLinearVel.v[1]) * 0.5;
    this->m_lastLinearVel.v[2] = (float)(v18 + this->m_lastLinearVel.v[2]) * 0.5;
    this->m_lastAngularVel.v[0] = (float)(v16 + this->m_lastAngularVel.v[0]) * 0.5;
    this->m_lastAngularVel.v[1] = (float)(v19 + this->m_lastAngularVel.v[1]) * 0.5;
    this->m_lastAngularVel.v[2] = (float)(v17 + this->m_lastAngularVel.v[2]) * 0.5;
    this->m_linearAccel.v[0] = v26;
    this->m_linearAccel.v[2] = v27;
    this->m_linearAccel.v[1] = v31;
    this->m_angularAccel.v[0] = v28;
    this->m_angularAccel.v[1] = v32 * v13;
    this->m_angularAccel.v[2] = v29;
  }
}

/*
==============
BgVehiclePhysicsDeferredActionManager::DeferAction
==============
*/
void BgVehiclePhysicsDeferredActionManager::DeferAction(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysicsDeferredActionType actionType)
{
  unsigned __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  LOBYTE(v2) = actionType;
  if ( (unsigned __int8)actionType >= DA_ACTION_MAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 1097, ASSERT_TYPE_ASSERT, "(unsigned)( actionType ) < (unsigned)( DA_ACTION_MAX )", "actionType doesn't index DA_ACTION_MAX\n\t%i not in [0, %i)", (unsigned __int8)actionType, 5) )
    __debugbreak();
  v2 = (unsigned __int8)v2;
  if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x20 )
  {
    LODWORD(v5) = 32;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  this->actionBits[v2 >> 5] |= 1 << (v2 & 0x1F);
}

/*
==============
BgVehiclePhysicsLinkedPlayers<2>::Reset
==============
*/
void BgVehiclePhysicsLinkedPlayers<2>::Reset(BgVehiclePhysicsLinkedPlayers<2> *this)
{
  *(_QWORD *)&this->playerCount = 0i64;
  this->enabled = 0;
  this->weightFactor = 0.0;
}

/*
==============
BgVehiclePhysicsControls::GetValue
==============
*/
float BgVehiclePhysicsControls::GetValue(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  __int64 v3; 
  bool v4; 
  int v5; 
  __int128 v6; 
  int v8; 
  int v9; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = controlIndex;
  if ( controlIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 163, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, 8) )
      __debugbreak();
    LODWORD(v19) = 8;
    LODWORD(v17) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 220, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
  v4 = Com_BitCheckAssert(this->playerEnabledBits, v3, 4);
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v18) = 8;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 227, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  v5 = v4 + 3 * Com_BitCheckAssert(this->externalEnabledBits, v3, 4);
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v18) = 8;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 206, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  v6 = LODWORD(this->playerValues[v3]);
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v18) = 8;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 213, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  _XMM6 = LODWORD(this->externalValues[v3]);
  v8 = v5 - 1;
  if ( !v8 )
  {
    LODWORD(_XMM0) = v6;
    return *(float *)&_XMM0;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    *(float *)&_XMM0 = this->externalValues[v3];
    return *(float *)&_XMM0;
  }
  if ( v9 != 1 )
    goto LABEL_31;
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v18) = 8;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 234, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  switch ( this->valuePolicy[v3] )
  {
    case VP_MAXABS:
      _XMM0 = _XMM6 & _xmm;
      __asm
      {
        vcmpltss xmm2, xmm0, xmm2
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
      return *(float *)&_XMM0;
    case VP_MINABS:
      _XMM2 = v6 & _xmm;
      __asm
      {
        vcmpltss xmm2, xmm2, xmm0
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
      return *(float *)&_XMM0;
    case VP_AVERAGE:
      *(float *)&_XMM0 = (float)(*(float *)&_XMM6 + *(float *)&v6) * 0.5;
      return *(float *)&_XMM0;
    case VP_AVERAGE_WEIGHT_PLAYER:
      *(float *)&_XMM0 = (float)((float)(1.0 - this->policyWeight) * *(float *)&_XMM6) + (float)(*(float *)&v6 * this->policyWeight);
      return *(float *)&_XMM0;
  }
  if ( this->valuePolicy[v3] != VP_AVERAGE_WEIGHT_EXTERNAL )
  {
LABEL_31:
    LODWORD(_XMM0) = 0;
    return *(float *)&_XMM0;
  }
  *(float *)&_XMM0 = (float)((float)(1.0 - this->policyWeight) * *(float *)&v6) + (float)(*(float *)&_XMM6 * this->policyWeight);
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsComponent::SetPause
==============
*/
void BgVehiclePhysicsComponent::SetPause(BgVehiclePhysicsComponent *this, float pauseTimeInSecs)
{
  if ( pauseTimeInSecs > 0.0 )
  {
    this->m_pauseTime = pauseTimeInSecs;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 972, ASSERT_TYPE_ASSERT, "(pauseTimeInSecs > 0.0f)", (const char *)&queryFormat, "pauseTimeInSecs > 0.0f") )
      __debugbreak();
    this->m_pauseTime = pauseTimeInSecs;
  }
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/
void BgVehiclePhysics::DampLerp(float *cur, float dst, float frameTime, float speed)
{
  int v10; 
  int v11; 
  float v12; 
  unsigned int v13; 
  float v17; 
  float v21; 
  float v25; 
  unsigned int v26; 
  float v30; 

  _XMM6 = LODWORD(FLOAT_0_016000001);
  if ( frameTime <= 0.016000001 || frameTime >= 1.0 )
  {
    v10 = 1;
  }
  else
  {
    _XMM4 = 0i64;
    __asm { vroundss xmm4, xmm4, xmm0, 1 }
    v10 = (int)*(float *)&_XMM4;
    if ( (float)(frameTime - (float)(*(float *)&_XMM4 * 0.016000001)) > 0.0 )
      ++v10;
  }
  v11 = 0;
  if ( v10 >= 4 )
  {
    v12 = *cur;
    v13 = 2;
    do
    {
      _XMM0 = (unsigned int)v11;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v17 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v12)) * speed) + v12;
      v11 += 4;
      _XMM0 = v13 - 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v21 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v17)) * speed) + v17;
      _XMM0 = v13;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v25 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v21)) * speed) + v21;
      v26 = v13 + 1;
      v13 += 4;
      _XMM0 = v26;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v30 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v25)) * speed) + v25;
      v12 = v30;
    }
    while ( v11 < v10 - 3 );
    *cur = v30;
  }
  for ( ; v11 < v10; *cur = (float)((float)(*(float *)&_XMM1 * (float)(dst - *cur)) * speed) + *cur )
  {
    _XMM0 = (unsigned int)v11;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm6, xmm5, xmm2
    }
    ++v11;
  }
}

/*
==============
BgVehiclePhysics::GetForwardSpeedOfKeyframed
==============
*/
float BgVehiclePhysics::GetForwardSpeedOfKeyframed(BgVehiclePhysics *this)
{
  unsigned int PhysicsBodyId; 
  Physics_WorldId m_worldId; 
  unsigned int v4; 
  hknpWorld *world; 
  float *v6; 
  __int64 v8; 

  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  m_worldId = this->m_worldId;
  v4 = PhysicsBodyId;
  if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", this->m_worldId) )
    __debugbreak();
  if ( (v4 & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v8) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(m_worldId)->world;
  if ( !world )
  {
    LODWORD(v8) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v8) )
      __debugbreak();
  }
  v6 = (float *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v4);
  return (float)((float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)this->m_history.m_lastLinearVel.v, (__m128)*(unsigned __int64 *)this->m_history.m_lastLinearVel.v, 85).m128_f32[0] * v6[1]) + (float)(COERCE_FLOAT(*(_QWORD *)this->m_history.m_lastLinearVel.v) * *v6)) + (float)(this->m_history.m_lastLinearVel.v[2] * v6[2]);
}

/*
==============
BgVehiclePhysics::GetNormalSpeed
==============
*/
double BgVehiclePhysics::GetNormalSpeed(BgVehiclePhysics *this)
{
  float v3; 
  double ForwardSpeedOfKeyframed; 

  if ( BgVehiclePhysics::IsDynamic(this) )
  {
    _XMM0 = LODWORD(this->m_transform.m[0].v[2]);
    v3 = (float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(*(float *)&_XMM0 * this->m_linearVelocityWs.v[2]);
  }
  else
  {
    ForwardSpeedOfKeyframed = BgVehiclePhysics::GetForwardSpeedOfKeyframed(this);
    v3 = *(float *)&ForwardSpeedOfKeyframed;
  }
  if ( v3 <= 0.0 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(this);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm { vmaxss  xmm0, xmm0, cs:__real@41200000 }
  return I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 / *(float *)&_XMM0) & _xmm), 0.0, 1.0);
}

/*
==============
BgVehiclePhysics::GetPlaneSpeed
==============
*/
float BgVehiclePhysics::GetPlaneSpeed(BgVehiclePhysics *this)
{
  vec3_t outVelLs; 

  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  return fsqrt((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1]));
}

/*
==============
BgVehiclePhysics::GetUpInclination
==============
*/
double BgVehiclePhysics::GetUpInclination(BgVehiclePhysics *this)
{
  return I_fclamp((float)((float)(0.0 * this->m_transform.m[2].v[1]) + (float)(0.0 * this->m_transform.m[2].v[0])) + (float)(1.0 * this->m_transform.m[2].v[2]), 0.0, 1.0);
}

/*
==============
BgVehiclePhysicsControls::GetValuePlayer
==============
*/
float BgVehiclePhysicsControls::GetValuePlayer(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controlIndex;
  if ( controlIndex < 8 )
    return this->playerValues[controlIndex];
  v6 = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 206, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, v6) )
    __debugbreak();
  return this->playerValues[v2];
}

/*
==============
BgVehiclePhysicsControls::GetValueExternal
==============
*/
float BgVehiclePhysicsControls::GetValueExternal(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controlIndex;
  if ( controlIndex < 8 )
    return this->externalValues[controlIndex];
  v6 = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 213, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, v6) )
    __debugbreak();
  return this->externalValues[v2];
}

