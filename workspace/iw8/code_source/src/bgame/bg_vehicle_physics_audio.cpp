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
  BgVehiclePhysicsRevSound *v6; 
  bool v13; 
  bool v14; 
  int v30; 

  _RAX = info->setup;
  _RBX = info;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v6 = this;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+18h]
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm0, dword ptr [rax+1Ch]
    vcomiss xmm0, dword ptr [rdx+10h]
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( info->m_applyInterpolation )
  {
    __asm
    {
      vmovss  xmm1, cs:normalSpeedLerpValue
      vsubss  xmm0, xmm7, xmm1
      vmulss  xmm1, xmm1, dword ptr [rcx+1Ch]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  [rsp+58h+arg_0], xmm6
    vmovss  dword ptr [rcx+1Ch], xmm6
  }
  v13 = (v30 & 0x7F800000u) <= 0x7F800000;
  if ( (v30 & 0x7F800000) == 2139095040 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( m_prevNormalSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_prevNormalSpeed )");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, cs:__real@ba83126f
    vcomiss xmm1, dword ptr [rbx+1Ch]
  }
  if ( v13 )
  {
    if ( !_RBX->isInAir )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vcomiss xmm0, dword ptr [rbx+14h]
      }
      if ( !_RBX->isInAir )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+20h]
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm2, xmm1, xmm7
          vcvttss2si eax, xmm2
        }
        v6->m_gear = _EAX;
      }
    }
    v6->m_gear = I_clamp(v6->m_gear, 1, _RBX->setup->gearCount);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+20h]
      vdivss  xmm1, xmm1, xmm0
      vsubss  xmm0, xmm6, xmm1
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( !_RBX->isInAir )
      v6->m_gear = -1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsRevSound::ComputeSoundVariance
==============
*/
float BgVehiclePhysicsRevSound::ComputeSoundVariance(BgVehiclePhysicsRevSound *this, const BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  int v15; 
  int v16; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
    vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
    vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
    vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
    vmaxss  xmm0, xmm3, xmm2
    vcvttss2si ebx, xmm0
    vmovaps [rsp+68h+var_28], xmm6
  }
  _R14 = info;
  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  _RBP = this;
  if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 160, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  v15 = _EAX % _EBX;
  v16 = _EAX / _EBX % _EBX;
  if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
    __debugbreak();
  if ( (v15 < 0 || v15 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
    __debugbreak();
  if ( (v16 < 0 || v16 >= _EBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
    __debugbreak();
  *(double *)&_XMM0 = HavokPhysics_GetPerlinNoise2dValue(13, _EBX, v15, v16);
  _RBX = _R14->setup;
  __asm
  {
    vmovss  xmm8, dword ptr [r14+14h]
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm6, xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm0, xmm1, dword ptr [rbp+0]
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm
  {
    vsubss  xmm3, xmm0, cs:__real@3f666666
    vshufps xmm1, xmm0, xmm0, 1
    vaddss  xmm4, xmm1, cs:__real@3f666666
    vmulss  xmm0, xmm8, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm3, xmm0
    vsubss  xmm0, xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm0, dword ptr [rbx+4]
    vmovaps xmm6, [rsp+68h+var_28]
    vmulss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm8, [rsp+68h+var_38]
    vaddss  xmm1, xmm2, xmm1
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
  }
  return *(float *)&_XMM0;
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
  int v16; 

  __asm
  {
    vmovss  xmm2, cs:audioMPHIncLerpValue
    vmovss  xmm0, cs:audioMPHDecLerpValue
    vmovss  xmm4, cs:__real@3f800000
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+18h]
    vcmpltss xmm3, xmm6, xmm1
    vblendvps xmm5, xmm0, xmm2, xmm3
    vsubss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm6, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rsp+48h+arg_8], xmm5
    vmovss  [rsp+48h+arg_8], xmm3
    vmovss  dword ptr [rcx+18h], xmm3
  }
  if ( (v16 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 106, ASSERT_TYPE_SANITY, "( !IS_NAN( m_mph ) )", (const char *)&queryFormat, "!IS_NAN( m_mph )") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
BgVehiclePhysicsRevSound::Update
==============
*/

void __fastcall BgVehiclePhysicsRevSound::Update(BgVehiclePhysicsRevSound *this, double deltaTime, BgVehiclePhysicsRevSound::ComputeInfo *info)
{
  bool v41; 
  bool v44; 
  bool v45; 
  bool v61; 
  bool v62; 
  bool v63; 
  const dvar_t *v109; 
  unsigned int flags; 
  char *fmt; 
  char *fmta; 
  double fromServer; 
  __int64 duration; 
  int v146; 
  int v147; 
  int v148; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  char _Buffer[1024]; 
  char text[1024]; 
  char v156; 
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
  _RDI = info;
  __asm { vmovaps xmm9, xmm1 }
  _RBX = this;
  if ( info->setup->gearCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 48, ASSERT_TYPE_ASSERT, "( info.setup->gearCount > 0 )", "Needs at least 1 gear") )
    __debugbreak();
  __asm
  {
    vaddss  xmm0, xmm9, dword ptr [rbx]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rdi+20h]
    vmulss  xmm0, xmm1, cs:__real@4118c9eb
    vdivss  xmm7, xmm0, dword ptr [rdi+8]
    vmovaps xmm0, xmm7; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+18h]
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm6, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm2
    vmulss  xmm3, xmm0, cs:__real@44000000
    vsubss  xmm0, xmm8, xmm3; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = _RDI->setup;
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm1, xmm6
    vmovss  xmm6, dword ptr [rdi+18h]
    vmovss  xmm10, dword ptr [rax+10h]
    vsubss  xmm2, xmm8, xmm2
    vmulss  xmm3, xmm2, xmm0
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm1, xmm0, xmm7
    vmovss  xmm0, dword ptr [rax+1Ch]
    vcomiss xmm0, dword ptr [rdi+10h]
    vaddss  xmm11, xmm3, xmm1
  }
  v41 = v61;
  if ( _RDI->m_applyInterpolation )
  {
    __asm
    {
      vmovss  xmm1, cs:normalSpeedLerpValue
      vsubss  xmm0, xmm8, xmm1
      vmulss  xmm1, xmm1, dword ptr [rbx+1Ch]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  [rsp+8D8h+var_898], xmm6
    vmovss  dword ptr [rbx+1Ch], xmm6
  }
  v44 = (v146 & 0x7F800000u) <= 0x7F800000;
  if ( (v146 & 0x7F800000) == 2139095040 )
  {
    v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( m_prevNormalSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_prevNormalSpeed )");
    v44 = !v45;
    if ( v45 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@ba83126f
    vcomiss xmm0, dword ptr [rdi+1Ch]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v44 )
  {
    if ( !v41 )
    {
      if ( !_RDI->isInAir )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3a83126f
          vcomiss xmm0, dword ptr [rdi+14h]
        }
        if ( !_RDI->isInAir )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rax+20h]
            vmulss  xmm1, xmm0, xmm6
            vaddss  xmm2, xmm1, xmm8
            vcvttss2si eax, xmm2
          }
          _RBX->m_gear = _EAX;
        }
      }
      _RBX->m_gear = I_clamp(_RBX->m_gear, 1, _RDI->setup->gearCount);
    }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rax+20h]
      vdivss  xmm2, xmm2, xmm1
      vsubss  xmm7, xmm6, xmm2
    }
  }
  else if ( !_RDI->isInAir && !v41 )
  {
    _RBX->m_gear = -1;
  }
  __asm
  {
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm11; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm6, xmm0, xmm7
    vmovss  [rsp+8D8h+var_898], xmm6
  }
  v61 = (v147 & 0x7F800000u) < 0x7F800000;
  v62 = (v147 & 0x7F800000u) <= 0x7F800000;
  if ( (v147 & 0x7F800000) == 2139095040 )
  {
    v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 63, ASSERT_TYPE_SANITY, "( !IS_NAN( rpmBase ) )", (const char *)&queryFormat, "!IS_NAN( rpmBase )");
    v61 = 0;
    v62 = !v63;
    if ( v63 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4]
    vcomiss xmm6, xmm2
  }
  if ( !v61 || (v62 = !_RDI->m_applyInterpolation, _RDI->m_applyInterpolation) )
  {
    _RAX = _RDI->setup;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+18h]
      vdivss  xmm0, xmm0, xmm9
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vcomiss xmm0, xmm8 }
  if ( !v62 )
  {
    __asm
    {
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm1, xmm2
      vsubss  xmm2, xmm2, xmm0
      vmulss  xmm1, xmm1, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  [rsp+8D8h+var_898], xmm6
    vmovss  dword ptr [rbx+4], xmm6
  }
  if ( (v148 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 71, ASSERT_TYPE_SANITY, "( !IS_NAN( m_rpmSpeed ) )", (const char *)&queryFormat, "!IS_NAN( m_rpmSpeed )") )
    __debugbreak();
  _RCX = _RDI->setup;
  _ER14 = 0;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+14h]
    vmovss  xmm0, dword ptr [rdi+24h]
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm0, dword ptr [rcx]
  }
  _EAX = _RDI->isInAir;
  __asm
  {
    vmovss  xmm3, cs:__real@3f333333
    vmulss  xmm7, xmm2, xmm1
    vmovss  xmm2, dword ptr [rcx+10h]; max
    vmovd   xmm1, r14d
    vmovd   xmm0, eax
    vpcmpeqd xmm4, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f666666
    vmovss  xmm0, dword ptr [rbx+4]; val
    vblendvps xmm6, xmm1, xmm3, xmm4
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm6, xmm7
    vaddss  xmm0, xmm0, xmm3
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm0, dword ptr [rdi+10h]; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  [rsp+8D8h+var_898], xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = _RDI->setup;
  __asm
  {
    vmovaps xmm7, xmm0
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  xmm3, dword ptr [rax+14h]
    vmulss  xmm0, xmm3, dword ptr [rbx+8]; val
    vmovss  xmm2, dword ptr [rax+10h]; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm7; X
  }
  *(float *)&_XMM0 = cbrtf(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rax+24h]
    vaddss  xmm0, xmm6, xmm1
    vmovss  dword ptr [rbx+8], xmm0
  }
  *(double *)&_XMM0 = BgVehiclePhysicsRevSound::ComputeSoundVariance(_RBX, _RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+10h]
    vaddss  xmm0, xmm0, dword ptr [rbx+8]
    vmovss  [rsp+8D8h+var_898], xmm1
    vmovss  dword ptr [rbx+8], xmm0
  }
  if ( (v150 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 87, ASSERT_TYPE_SANITY, "( !IS_NAN( GetThrottle() ) )", (const char *)&queryFormat, "!IS_NAN( GetThrottle() )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+8D8h+var_898], xmm0
  }
  if ( (v151 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 88, ASSERT_TYPE_SANITY, "( !IS_NAN( GetBrake() ) )", (const char *)&queryFormat, "!IS_NAN( GetBrake() )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+8D8h+var_898], xmm0
  }
  if ( (v152 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 89, ASSERT_TYPE_SANITY, "( !IS_NAN( GetMph() ) )", (const char *)&queryFormat, "!IS_NAN( GetMph() )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+8D8h+var_898], xmm0
  }
  if ( (v153 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_audio.cpp", 90, ASSERT_TYPE_SANITY, "( !IS_NAN( GetRPMNormal() ) )", (const char *)&queryFormat, "!IS_NAN( GetRPMNormal() )") )
    __debugbreak();
  v109 = DVARBOOL_voice_debug;
  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v109->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v109->name) )
      __debugbreak();
  }
  if ( v109->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  xmm3, dword ptr [rbx+4]
      vmovss  xmm2, dword ptr [rbx+8]
      vmovss  xmm1, dword ptr [rbx+18h]
    }
    LODWORD(duration) = _RBX->m_gear;
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  qword ptr [rsp+8D8h+fromServer], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+8D8h+fmt], xmm1
    }
    j_sprintf(_Buffer, "RPM:%.2f\tRPMSpeed:%.2f\nMPH:%.2f\tThrottle:%.2f\nGear:%d\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, fromServer, duration);
    __asm
    {
      vmovss  xmm3, cs:__real@3fc00000; scale
      vmovss  xmm1, cs:__real@43960000; y
      vmovss  xmm0, cs:__real@42c80000; x
    }
    CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorRed, *(float *)&_XMM3, _Buffer, 0, 0);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+1Ch]
      vmovss  xmm2, dword ptr [rdi+20h]
      vmovss  xmm0, dword ptr [rdi+14h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+8D8h+fmt], xmm0
    }
    j_sprintf(text, "avgSpinSpeed:%.2f\tForwardSpeed:%.2f\nGasInput:%.2f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
    __asm
    {
      vmovss  xmm3, cs:__real@3fc00000; scale
      vmovss  xmm1, cs:__real@43960000; y
      vmovss  xmm0, cs:__real@43c80000; x
    }
    CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, text, 0, 0);
  }
  _R11 = &v156;
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

