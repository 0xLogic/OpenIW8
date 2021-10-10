/*
==============
BgVehiclePhysicsRevSound::Reset
==============
*/

void __fastcall BgVehiclePhysicsRevSound::Reset(BgVehiclePhysicsRevSound *this)
{
  ?Reset@BgVehiclePhysicsRevSound@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsRevSound::ComputeGearRPMDelta
==============
*/

double __fastcall BgVehiclePhysicsRevSound::ComputeGearRPMDelta(BgVehiclePhysicsRevSound *this, const BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  double result; 

  *(float *)&result = ?ComputeGearRPMDelta@BgVehiclePhysicsRevSound@@QEAAMAEBUComputeInfo@1@@Z(this, info);
  return result;
}

/*
==============
BgVehiclePhysicsRevSound::Update
==============
*/

void __fastcall BgVehiclePhysicsRevSound::Update(BgVehiclePhysicsRevSound *this, float deltaTime, BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  ?Update@BgVehiclePhysicsRevSound@@QEAAXMAEAUComputeInfo@1@@Z(this, deltaTime, info);
}

/*
==============
BgVehiclePhysicsRevSound::SetMph
==============
*/

void __fastcall BgVehiclePhysicsRevSound::SetMph(BgVehiclePhysicsRevSound *this, float mph)
{
  ?SetMph@BgVehiclePhysicsRevSound@@QEAAXM@Z(this, mph);
}

/*
==============
BgVehiclePhysicsRevSound::ComputeSoundVariance
==============
*/

double __fastcall BgVehiclePhysicsRevSound::ComputeSoundVariance(BgVehiclePhysicsRevSound *this, const BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  double result; 

  *(float *)&result = ?ComputeSoundVariance@BgVehiclePhysicsRevSound@@QEAAMAEBUComputeInfo@1@@Z(this, info);
  return result;
}

/*
==============
BgVehiclePhysicsRevSound::ComputeGearRPMDelta
==============
*/
float BgVehiclePhysicsRevSound::ComputeGearRPMDelta(BgVehiclePhysicsRevSound *this, const BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  float normalSpeed; 
  bool v5; 
  float result; 

  normalSpeed = info->normalSpeed;
  v5 = info->setup->inclinedThreshold < info->inclination;
  if ( info->m_applyInterpolation )
    normalSpeed = (float)((float)(1.0 - normalSpeedLerpValue) * normalSpeed) + (float)(normalSpeedLerpValue * this->m_prevNormalSpeed);
  this->m_prevNormalSpeed = normalSpeed;
  if ( (LODWORD(normalSpeed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( m_prevNormalSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_prevNormalSpeed )") )
    __debugbreak();
  if ( info->forwardSpeed >= -0.001 )
  {
    if ( !v5 )
    {
      if ( !info->isInAir && info->gasInput >= 0.001 )
        this->m_gear = (int)(float)((float)((float)info->setup->gearCount * normalSpeed) + 1.0);
      this->m_gear = I_clamp(this->m_gear, 1, info->setup->gearCount);
    }
    return normalSpeed - (float)((float)(this->m_gear - 1) / (float)info->setup->gearCount);
  }
  else
  {
    result = 0.0;
    if ( !info->isInAir && !v5 )
      this->m_gear = -1;
  }
  return result;
}

/*
==============
BgVehiclePhysicsRevSound::ComputeSoundVariance
==============
*/
float BgVehiclePhysicsRevSound::ComputeSoundVariance(BgVehiclePhysicsRevSound *this, const BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  __int128 v3; 
  int v5; 
  int v8; 
  int v9; 
  double PerlinNoise2dValue; 
  const VehiclePhysicsRevModifier *setup; 
  float v12; 
  float v13; 
  double v14; 
  float result; 

  v3 = LODWORD(cm.broadphaseMax.v[1]);
  *(float *)&v3 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
  _XMM3 = v3;
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  v5 = (int)*(float *)&_XMM0;
  if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 160, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
    __debugbreak();
  v8 = (int)(float)(this->m_time * 1000.0) % v5;
  v9 = (int)(float)(this->m_time * 1000.0) / v5 % v5;
  if ( v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
    __debugbreak();
  if ( (v8 < 0 || v8 >= v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
    __debugbreak();
  if ( (v9 < 0 || v9 >= v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
    __debugbreak();
  PerlinNoise2dValue = HavokPhysics_GetPerlinNoise2dValue(13, v5, v8, v9);
  setup = info->setup;
  LODWORD(v12) = LODWORD(info->gasInput) & _xmm;
  v13 = *(float *)&PerlinNoise2dValue;
  v14 = j___libm_sse2_sincosf_();
  LODWORD(result) = COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v14, (__m128)*(unsigned __int64 *)&v14, 1).m128_f32[0] + 0.89999998) * (float)((float)(*(float *)&v14 - 0.89999998) * (float)(v12 * setup->sinewaveAmpl))) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v13 - 1.0) * setup->noiseAmpl) * v12) & _xmm)) ^ _xmm;
  return result;
}

/*
==============
BgVehiclePhysicsRevSound::Reset
==============
*/
void BgVehiclePhysicsRevSound::Reset(BgVehiclePhysicsRevSound *this)
{
  *(_QWORD *)&this->m_time = 0i64;
  *(_QWORD *)&this->m_rpm = 0i64;
  *(_QWORD *)&this->m_throttle = 0i64;
  *(_QWORD *)&this->m_mph = 0i64;
}

/*
==============
BgVehiclePhysicsRevSound::SetMph
==============
*/
void BgVehiclePhysicsRevSound::SetMph(BgVehiclePhysicsRevSound *this, float mph)
{
  float v6; 

  _XMM0 = LODWORD(audioMPHDecLerpValue);
  _XMM6 = LODWORD(this->m_mph);
  __asm
  {
    vcmpltss xmm3, xmm6, xmm1
    vblendvps xmm5, xmm0, xmm2, xmm3
  }
  v6 = (float)(1.0 - *(float *)&_XMM5) * mph;
  this->m_mph = v6 + (float)(*(float *)&_XMM6 * *(float *)&_XMM5);
  if ( (COERCE_UNSIGNED_INT(v6 + (float)(*(float *)&_XMM6 * *(float *)&_XMM5)) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 106, ASSERT_TYPE_SANITY, "( !IS_NAN( m_mph ) )", (const char *)&queryFormat, "!IS_NAN( m_mph )") )
    __debugbreak();
}

/*
==============
BgVehiclePhysicsRevSound::Update
==============
*/
void BgVehiclePhysicsRevSound::Update(BgVehiclePhysicsRevSound *this, float deltaTime, BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  float normalSpeed; 
  float rpmMax; 
  float v12; 
  bool v13; 
  float v14; 
  double v15; 
  float v16; 
  float m_rpmSpeed; 
  float v18; 
  float v19; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  unsigned int flags; 
  __int64 duration; 
  float m_throttle; 
  char _Buffer[1024]; 
  char text[1024]; 

  if ( info->setup->gearCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 48, ASSERT_TYPE_ASSERT, "( info.setup->gearCount > 0 )", "Needs at least 1 gear") )
    __debugbreak();
  this->m_time = deltaTime + this->m_time;
  v5 = (float)(info->avgSpinSpeed * 9.5492964) / info->maxSpinSpeedRPM;
  v6 = I_fclamp(v5, 0.0, 1.0);
  v7 = (float)(1.0 - *(float *)&v6) * (float)(1.0 - *(float *)&v6);
  v8 = I_fclamp(1.0 - (float)((float)((float)(info->normalSpeed * info->normalSpeed) * info->normalSpeed) * 512.0), 0.0, 1.0);
  v9 = (float)(v7 * v7) * v7;
  normalSpeed = info->normalSpeed;
  rpmMax = info->setup->rpmMax;
  v12 = (float)((float)(1.0 - v9) * *(float *)&v8) + (float)((float)(1.0 - *(float *)&v8) * v5);
  v13 = info->setup->inclinedThreshold < info->inclination;
  if ( info->m_applyInterpolation )
    normalSpeed = (float)((float)(1.0 - normalSpeedLerpValue) * normalSpeed) + (float)(normalSpeedLerpValue * this->m_prevNormalSpeed);
  this->m_prevNormalSpeed = normalSpeed;
  if ( (LODWORD(normalSpeed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( m_prevNormalSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_prevNormalSpeed )") )
    __debugbreak();
  v14 = 0.0;
  if ( info->forwardSpeed >= -0.001 )
  {
    if ( !v13 )
    {
      if ( !info->isInAir && info->gasInput >= 0.001 )
        this->m_gear = (int)(float)((float)((float)info->setup->gearCount * normalSpeed) + 1.0);
      this->m_gear = I_clamp(this->m_gear, 1, info->setup->gearCount);
    }
    v14 = normalSpeed - (float)((float)(this->m_gear - 1) / (float)info->setup->gearCount);
  }
  else if ( !info->isInAir && !v13 )
  {
    this->m_gear = -1;
  }
  v15 = I_fclamp(v12, 0.0, rpmMax);
  v16 = *(float *)&v15 + v14;
  if ( (COERCE_UNSIGNED_INT(*(float *)&v15 + v14) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 63, ASSERT_TYPE_SANITY, "( !IS_NAN( rpmBase ) )", (const char *)&queryFormat, "!IS_NAN( rpmBase )") )
    __debugbreak();
  m_rpmSpeed = this->m_rpmSpeed;
  if ( (float)(*(float *)&v15 + v14) >= m_rpmSpeed || info->m_applyInterpolation )
    v18 = info->setup->rpmSpeedEmaSamples / deltaTime;
  else
    v18 = 0.0;
  if ( v18 > 1.0 )
    v16 = (float)(m_rpmSpeed - (float)((float)(1.0 / v18) * m_rpmSpeed)) + (float)((float)(1.0 / v18) * v16);
  this->m_rpmSpeed = v16;
  if ( (LODWORD(v16) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 71, ASSERT_TYPE_SANITY, "( !IS_NAN( m_rpmSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_rpmSpeed )") )
    __debugbreak();
  v19 = COERCE_FLOAT(LODWORD(info->gasInput) & _xmm) * (float)(info->avgSkidRatio * info->setup->skidSndContrib);
  _XMM0 = info->isInAir;
  __asm { vpcmpeqd xmm4, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_89999998);
  __asm { vblendvps xmm6, xmm1, xmm3, xmm4 }
  *(double *)&_XMM0 = I_fclamp(this->m_rpmSpeed, 0.0, info->setup->rpmMax);
  this->m_rpm = *(float *)&_XMM0 + (float)(*(float *)&_XMM6 * v19);
  *(double *)&_XMM0 = I_fclamp(info->inclination, 0.0, 1.0);
  v24 = *(float *)&_XMM0;
  v25 = info->setup->rpmScale * this->m_rpm;
  I_fclamp(v25, 0.0, info->setup->rpmMax);
  this->m_rpm = v25 + (float)(cbrtf(v24) * info->setup->inclContrib);
  *(double *)&_XMM0 = BgVehiclePhysicsRevSound::ComputeSoundVariance(this, info);
  m_throttle = this->m_throttle;
  this->m_rpm = *(float *)&_XMM0 + this->m_rpm;
  if ( (LODWORD(m_throttle) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 87, ASSERT_TYPE_SANITY, "( !IS_NAN( GetThrottle() ) )", (const char *)&queryFormat, "!IS_NAN( GetThrottle() )") )
    __debugbreak();
  if ( (LODWORD(this->m_brake) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 88, ASSERT_TYPE_SANITY, "( !IS_NAN( GetBrake() ) )", (const char *)&queryFormat, "!IS_NAN( GetBrake() )") )
    __debugbreak();
  if ( (LODWORD(this->m_mph) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 89, ASSERT_TYPE_SANITY, "( !IS_NAN( GetMph() ) )", (const char *)&queryFormat, "!IS_NAN( GetMph() )") )
    __debugbreak();
  if ( (LODWORD(this->m_rpm) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 90, ASSERT_TYPE_SANITY, "( !IS_NAN( GetRPMNormal() ) )", (const char *)&queryFormat, "!IS_NAN( GetRPMNormal() )") )
    __debugbreak();
  v26 = DVARBOOL_voice_debug;
  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v26->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v26->name) )
      __debugbreak();
  }
  if ( v26->current.enabled )
  {
    LODWORD(duration) = this->m_gear;
    j_sprintf(_Buffer, "RPM:%.2f\tRPMSpeed:%.2f\nMPH:%.2f\tThrottle:%.2f\nGear:%d\n", this->m_rpm, this->m_rpmSpeed, this->m_mph, this->m_throttle, duration);
    CL_AddDebugString2D(100.0, 300.0, &colorRed, 1.5, _Buffer, 0, 0);
    j_sprintf(text, "avgSpinSpeed:%.2f\tForwardSpeed:%.2f\nGasInput:%.2f\n", info->avgSpinSpeed, info->forwardSpeed, info->gasInput);
    CL_AddDebugString2D(400.0, 300.0, &colorYellow, 1.5, text, 0, 0);
  }
}

