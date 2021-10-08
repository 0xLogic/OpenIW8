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
  double v14; 
  vec3_t outVelLs; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  BgVehiclePhysics::ComputeVelocityLocalSpace(this, &this->m_linearVelocityWs, &outVelLs);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outVelLs]
    vmovss  xmm1, dword ptr [rsp+58h+outVelLs+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm6, xmm3, xmm2
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(this);
  __asm
  {
    vmaxss  xmm1, xmm0, cs:__real@41200000
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm6, xmm6
    vmulss  xmm0, xmm3, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  v14 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&v14;
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/

void __fastcall BgVehiclePhysics::DampLerp(vec3_t *cur, const vec3_t *dst, double frameTime, double speed)
{
  __asm { vmovaps [rsp+78h+var_58], xmm10 }
  _R8 = dst;
  __asm
  {
    vmovaps [rsp+78h+var_68], xmm11
    vmovss  xmm11, cs:__real@3c83126f
    vcomiss xmm2, xmm11
    vmovaps [rsp+78h+var_78], xmm12
    vmovaps xmm12, xmm3
    vmovaps xmm10, xmm2
    vcomiss xmm2, cs:__real@3f800000
    vmovaps [rsp+78h+var_18], xmm6
  }
  _EDX = 0;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm7, dword ptr [rcx+4]
    vmovss  xmm8, dword ptr [rcx+8]
  }
  _EAX = 0;
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r8+4]
      vmovss  xmm5, dword ptr [r8+8]
      vmovd   xmm0, edx
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, dword ptr [r8]
      vblendvps xmm0, xmm11, xmm10, xmm2
      vsubss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm0, xmm12
      vsubss  xmm1, xmm4, xmm7
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm6, xmm6, xmm0
      vmulss  xmm0, xmm1, xmm3
      vsubss  xmm1, xmm5, xmm8
      vaddss  xmm7, xmm7, xmm0
      vmulss  xmm0, xmm1, xmm3
    }
    ++_EDX;
    __asm
    {
      vaddss  xmm8, xmm8, xmm0
      vmovss  dword ptr [rcx+8], xmm8
      vmovss  dword ptr [rcx], xmm6
      vmovss  dword ptr [rcx+4], xmm7
    }
  }
  while ( _EDX < 1 );
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm10, [rsp+78h+var_58]
    vmovaps xmm11, [rsp+78h+var_68]
    vmovaps xmm12, [rsp+78h+var_78]
  }
}

/*
==============
BgVehiclePhysicsHistory::AddTransform
==============
*/
void BgVehiclePhysicsHistory::AddTransform(BgVehiclePhysicsHistory *this, const BgVehiclePhysics *vehObj, const vec3_t *pos, const vec4_t *ori, float deltaTime)
{
  bool v18; 
  bool v19; 
  char v47; 
  bool v48; 
  bool v53; 
  double v100; 
  double v101; 
  vec3_t angles; 

  __asm { vmovaps [rsp+128h+var_38], xmm7 }
  _RSI = (BgVehiclePhysics *)vehObj;
  _RBX = this;
  _RDI = pos;
  QuatToAngles(ori, &angles);
  v18 = _RSI->m_simulationFrame == 2;
  v19 = _RSI->m_simulationFrame <= 2;
  __asm
  {
    vmovss  xmm2, cs:__real@3c8efa35
    vmovss  xmm0, dword ptr [rsp+128h+angles]
    vmovss  xmm1, dword ptr [rsp+128h+angles+4]
    vmulss  xmm3, xmm0, xmm2
    vmovss  xmm0, dword ptr [rsp+128h+angles+8]
    vmulss  xmm5, xmm0, xmm2
    vmulss  xmm4, xmm1, xmm2
    vmovss  dword ptr [rsp+128h+angles+8], xmm5
    vmovss  dword ptr [rsp+128h+angles], xmm3
    vmovss  dword ptr [rsp+128h+angles+4], xmm4
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !v19 )
    goto LABEL_6;
  __asm { vucomiss xmm7, dword ptr [rbx] }
  if ( !v18 )
    goto LABEL_6;
  __asm { vucomiss xmm7, dword ptr [rbx+4] }
  if ( !v18 )
    goto LABEL_6;
  __asm { vucomiss xmm7, dword ptr [rbx+8] }
  if ( v18 )
  {
    _RBX->m_lastPosition.v[0] = _RDI->v[0];
    _RBX->m_lastPosition.v[1] = _RDI->v[1];
    _RBX->m_lastPosition.v[2] = _RDI->v[2];
    __asm
    {
      vmovss  dword ptr [rbx+0Ch], xmm3
      vmovss  dword ptr [rbx+10h], xmm4
      vmovss  dword ptr [rbx+14h], xmm5
    }
  }
  else
  {
LABEL_6:
    __asm
    {
      vmovaps [rsp+128h+var_28], xmm6
      vmovss  xmm6, [rsp+128h+deltaTime]
      vmovaps [rsp+128h+var_48], xmm8
      vmovss  xmm8, cs:__real@3a83126f
      vcomiss xmm6, xmm8
      vmovaps [rsp+128h+var_58], xmm9
      vmovaps [rsp+128h+var_68], xmm10
      vmovaps [rsp+128h+var_78], xmm11
      vmovaps [rsp+128h+var_88], xmm12
      vmovaps [rsp+128h+var_98], xmm13
      vmovaps [rsp+128h+var_A8], xmm14
      vmovaps [rsp+128h+var_B8], xmm15
    }
    if ( v19 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 1013, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON") )
        __debugbreak();
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+128h+angles]
        vmovss  xmm4, dword ptr [rsp+128h+angles+4]
        vmovss  xmm5, dword ptr [rsp+128h+angles+8]
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm9, xmm0, xmm6
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rbx]
      vsubss  xmm0, xmm2, dword ptr [rbx+4]
      vmulss  xmm11, xmm0, xmm9
      vsubss  xmm0, xmm3, dword ptr [rbx+0Ch]
      vmulss  xmm10, xmm1, xmm9
      vmovss  xmm1, dword ptr [rdi+8]
      vsubss  xmm2, xmm1, dword ptr [rbx+8]
      vsubss  xmm1, xmm4, dword ptr [rbx+10h]
      vmulss  xmm13, xmm0, xmm9
      vsubss  xmm0, xmm5, dword ptr [rbx+14h]
      vmulss  xmm15, xmm0, xmm9
      vmulss  xmm12, xmm2, xmm9
      vmulss  xmm14, xmm1, xmm9
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(_RSI);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm0, dword ptr [rsi+1F4h]
      vcomiss xmm0, xmm8
    }
    if ( !(v47 | v48) )
      __asm { vminss  xmm6, xmm0, xmm6 }
    __asm { vcomiss xmm6, xmm7 }
    if ( v47 )
    {
      __asm
      {
        vxorpd  xmm0, xmm0, xmm0
        vmovsd  [rsp+128h+var_E8], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+128h+var_F0], xmm1
      }
      v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v100, v101);
      v47 = 0;
      v48 = !v53;
      if ( v53 )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm10, xmm10
      vmulss  xmm0, xmm11, xmm11
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, xmm12
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm6
      vcomiss xmm3, xmm0
    }
    if ( !(v47 | v48) )
    {
      __asm
      {
        vsqrtss xmm0, xmm3, xmm3
        vdivss  xmm1, xmm6, xmm0
        vmulss  xmm10, xmm10, xmm1
        vmulss  xmm11, xmm11, xmm1
        vmulss  xmm12, xmm12, xmm1
      }
    }
    __asm
    {
      vsubss  xmm0, xmm10, dword ptr [rbx+18h]
      vsubss  xmm1, xmm11, dword ptr [rbx+1Ch]
      vmovss  xmm2, cs:__real@3f000000
      vmulss  xmm8, xmm0, xmm9
      vsubss  xmm0, xmm12, dword ptr [rbx+20h]
      vmulss  xmm6, xmm0, xmm9
      vsubss  xmm0, xmm13, dword ptr [rbx+24h]
      vmulss  xmm5, xmm0, xmm9
      vsubss  xmm0, xmm15, dword ptr [rbx+2Ch]
      vmulss  xmm3, xmm0, xmm9
      vmovss  xmm0, dword ptr [rsp+128h+angles]
      vmulss  xmm7, xmm1, xmm9
      vsubss  xmm1, xmm14, dword ptr [rbx+28h]
    }
    _RBX->m_lastPosition.v[0] = _RDI->v[0];
    _RBX->m_lastPosition.v[1] = _RDI->v[1];
    _RBX->m_lastPosition.v[2] = _RDI->v[2];
    __asm
    {
      vmovss  dword ptr [rbx+0Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+128h+angles+8]
      vmovss  dword ptr [rbx+14h], xmm0
      vmulss  xmm4, xmm1, xmm9
      vmovss  xmm1, dword ptr [rsp+128h+angles+4]
      vmovaps xmm9, [rsp+128h+var_58]
      vmovss  dword ptr [rbx+10h], xmm1
      vaddss  xmm0, xmm10, dword ptr [rbx+18h]
      vmovaps xmm10, [rsp+128h+var_68]
      vmulss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx+18h], xmm0
      vaddss  xmm1, xmm11, dword ptr [rbx+1Ch]
      vmovaps xmm11, [rsp+128h+var_78]
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+1Ch], xmm0
      vaddss  xmm1, xmm12, dword ptr [rbx+20h]
      vmovaps xmm12, [rsp+128h+var_88]
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+20h], xmm0
      vaddss  xmm0, xmm13, dword ptr [rbx+24h]
      vmovaps xmm13, [rsp+128h+var_98]
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbx+24h], xmm1
      vaddss  xmm0, xmm14, dword ptr [rbx+28h]
      vmovaps xmm14, [rsp+128h+var_A8]
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbx+28h], xmm1
      vaddss  xmm0, xmm15, dword ptr [rbx+2Ch]
      vmovaps xmm15, [rsp+128h+var_B8]
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbx+2Ch], xmm1
      vmovss  dword ptr [rbx+30h], xmm8
      vmovaps xmm8, [rsp+128h+var_48]
      vmovss  dword ptr [rbx+38h], xmm6
      vmovaps xmm6, [rsp+128h+var_28]
      vmovss  dword ptr [rbx+34h], xmm7
      vmovss  dword ptr [rbx+3Ch], xmm5
      vmovss  dword ptr [rbx+40h], xmm4
      vmovss  dword ptr [rbx+44h], xmm3
    }
  }
  __asm { vmovaps xmm7, [rsp+128h+var_38] }
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
  bool v8; 
  int v9; 
  int v12; 
  int v13; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = this;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = controlIndex;
  if ( controlIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 163, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, 8) )
      __debugbreak();
    LODWORD(v36) = 8;
    LODWORD(v34) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 220, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v34, v36) )
      __debugbreak();
  }
  v8 = Com_BitCheckAssert(_RSI->playerEnabledBits, _RBX, 4);
  if ( (unsigned int)_RBX >= 8 )
  {
    LODWORD(v35) = 8;
    LODWORD(v33) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 227, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v33, v35) )
      __debugbreak();
  }
  v9 = v8 + 3 * Com_BitCheckAssert(_RSI->externalEnabledBits, _RBX, 4);
  if ( (unsigned int)_RBX >= 8 )
  {
    LODWORD(v35) = 8;
    LODWORD(v33) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 206, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v33, v35) )
      __debugbreak();
  }
  __asm { vmovss  xmm7, dword ptr [rsi+rbx*4+0Ch] }
  if ( (unsigned int)_RBX >= 8 )
  {
    LODWORD(v35) = 8;
    LODWORD(v33) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 213, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v33, v35) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, dword ptr [rsi+rbx*4+2Ch] }
  v12 = v9 - 1;
  if ( !v12 )
  {
    __asm { vmovaps xmm0, xmm7 }
    goto LABEL_34;
  }
  v13 = v12 - 2;
  if ( !v13 )
  {
    __asm { vmovaps xmm0, xmm6 }
    goto LABEL_34;
  }
  if ( v13 != 1 )
    goto LABEL_31;
  if ( (unsigned int)_RBX >= 8 )
  {
    LODWORD(v35) = 8;
    LODWORD(v33) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 234, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", v33, v35) )
      __debugbreak();
  }
  switch ( _RSI->valuePolicy[_RBX] )
  {
    case VP_MAXABS:
      __asm
      {
        vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm2, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcmpltss xmm2, xmm0, xmm2
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
      goto LABEL_34;
    case VP_MINABS:
      __asm
      {
        vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm2, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcmpltss xmm2, xmm2, xmm0
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
      goto LABEL_34;
    case VP_AVERAGE:
      __asm
      {
        vaddss  xmm0, xmm6, xmm7
        vmulss  xmm0, xmm0, cs:__real@3f000000
      }
      goto LABEL_34;
    case VP_AVERAGE_WEIGHT_PLAYER:
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, dword ptr [rsi+5Ch]
        vmulss  xmm2, xmm7, dword ptr [rsi+5Ch]
        vmulss  xmm3, xmm1, xmm6
        vaddss  xmm0, xmm3, xmm2
      }
      goto LABEL_34;
  }
  if ( _RSI->valuePolicy[_RBX] != VP_AVERAGE_WEIGHT_EXTERNAL )
  {
LABEL_31:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    goto LABEL_34;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, dword ptr [rsi+5Ch]
    vmulss  xmm2, xmm6, dword ptr [rsi+5Ch]
    vmulss  xmm3, xmm1, xmm7
    vaddss  xmm0, xmm3, xmm2
  }
LABEL_34:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsComponent::SetPause
==============
*/

void __fastcall BgVehiclePhysicsComponent::SetPause(BgVehiclePhysicsComponent *this, double pauseTimeInSecs)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
    vmovss  dword ptr [rcx+18h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
BgVehiclePhysics::DampLerp
==============
*/

void __fastcall BgVehiclePhysics::DampLerp(float *cur, double dst, double frameTime, double speed)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _R8 = cur;
  __asm
  {
    vmovss  xmm6, cs:__real@3c83126f
    vcomiss xmm2, xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm5, xmm2
    vmovaps xmm8, xmm1
    vcomiss xmm2, cs:__real@3f800000
  }
  _ECX = 0;
  _EAX = 0;
  do
  {
    __asm
    {
      vmovd   xmm0, ecx
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vsubss  xmm0, xmm8, dword ptr [r8]
      vblendvps xmm1, xmm6, xmm5, xmm2
      vmulss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [r8]
    }
    ++_ECX;
    __asm { vmovss  dword ptr [r8], xmm3 }
  }
  while ( _ECX < 1 );
  __asm
  {
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
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
  __int64 v15; 
  float v16; 

  _RSI = this;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
  m_worldId = _RSI->m_worldId;
  v4 = PhysicsBodyId;
  if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", _RSI->m_worldId) )
    __debugbreak();
  if ( (v4 & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v15) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(m_worldId)->world;
  if ( !world )
  {
    LODWORD(v15) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v15) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v4);
  __asm
  {
    vmovsd  xmm2, qword ptr [rsi+140h]
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vmulss  xmm1, xmm0, dword ptr [rax+4]
    vmulss  xmm0, xmm2, dword ptr [rax]
    vaddss  xmm3, xmm1, xmm0
  }
  v16 = _RSI->m_history.m_lastLinearVel.v[2];
  __asm
  {
    vmovss  xmm1, [rsp+68h+var_20]
    vmulss  xmm2, xmm1, dword ptr [rax+8]
    vaddss  xmm0, xmm3, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetNormalSpeed
==============
*/

double __fastcall BgVehiclePhysics::GetNormalSpeed(BgVehiclePhysics *this, double _XMM1_8)
{
  bool IsDynamic; 
  char v7; 
  bool v8; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  IsDynamic = BgVehiclePhysics::IsDynamic(this);
  v7 = 0;
  v8 = !IsDynamic;
  if ( IsDynamic )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+178h]
      vmovss  xmm1, dword ptr [rbx+174h]
      vmulss  xmm3, xmm0, dword ptr [rbx+1A8h]
      vmulss  xmm2, xmm1, dword ptr [rbx+1A4h]
      vmovss  xmm0, dword ptr [rbx+17Ch]
      vmulss  xmm1, xmm0, dword ptr [rbx+1ACh]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm6, xmm4, xmm1
    }
  }
  else
  {
    *(double *)&_XMM0 = BgVehiclePhysics::GetForwardSpeedOfKeyframed(_RBX);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v7 | v8 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RBX);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
  __asm
  {
    vmaxss  xmm0, xmm0, cs:__real@41200000
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm0, xmm6, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+outVelLs]
    vmovss  xmm1, dword ptr [rsp+48h+outVelLs+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetUpInclination
==============
*/
double BgVehiclePhysics::GetUpInclination(BgVehiclePhysics *this)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rcx+190h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rcx+18Ch]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rcx+194h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm4, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BgVehiclePhysicsControls::GetValuePlayer
==============
*/
float BgVehiclePhysicsControls::GetValuePlayer(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  int v7; 

  _RBX = controlIndex;
  _RDI = this;
  if ( controlIndex < 8 )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+rbx*4+0Ch] }
  }
  else
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 206, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, v7) )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rdi+rbx*4+0Ch] }
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysicsControls::GetValueExternal
==============
*/
float BgVehiclePhysicsControls::GetValueExternal(BgVehiclePhysicsControls *this, unsigned int controlIndex)
{
  int v7; 

  _RBX = controlIndex;
  _RDI = this;
  if ( controlIndex < 8 )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+rbx*4+2Ch] }
  }
  else
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 213, ASSERT_TYPE_ASSERT, "(unsigned)( controlIndex ) < (unsigned)( VPC_COUNT )", "controlIndex doesn't index VPC_COUNT\n\t%i not in [0, %i)", controlIndex, v7) )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rdi+rbx*4+2Ch] }
  }
  return *(float *)&_XMM0;
}

