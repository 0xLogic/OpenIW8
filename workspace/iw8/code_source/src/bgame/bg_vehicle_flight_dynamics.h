/*
==============
FlightDynamics::CalculateDrag
==============
*/

double __fastcall FlightDynamics::CalculateDrag(float value, float dragCoefficient, float dT)
{
  double result; 

  *(float *)&result = ?CalculateDrag@FlightDynamics@@SAMMMM@Z(value, dragCoefficient, dT);
  return result;
}

/*
==============
FlightDynamicsManager::GetCameraCurrentData
==============
*/

FlightDynamicCameraData *__fastcall FlightDynamicsManager::GetCameraCurrentData(FlightDynamicsManager *this, LocalClientNum_t clientNum)
{
  return ?GetCameraCurrentData@FlightDynamicsManager@@QEAAPEAUFlightDynamicCameraData@@W4LocalClientNum_t@@@Z(this, clientNum);
}

/*
==============
FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA
==============
*/

double __fastcall FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(FlightDynamicsNACALiftDragAOACurve *this, float angleOfAttack)
{
  double result; 

  *(float *)&result = ?GetDragAtAOA@FlightDynamicsNACALiftDragAOACurve@@QEAAMM@Z(this, angleOfAttack);
  return result;
}

/*
==============
FlightDynamics::CalculateDeltaQuatFromAngularVelocity
==============
*/

void __fastcall FlightDynamics::CalculateDeltaQuatFromAngularVelocity(const vec3_t *angVel, const float dT, vec4_t *deltaQuat)
{
  ?CalculateDeltaQuatFromAngularVelocity@FlightDynamics@@SAXTvec3_t@@MTvec4_t@@@Z(angVel, dT, deltaQuat);
}

/*
==============
FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA
==============
*/

double __fastcall FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(FlightDynamicsNACALiftDragAOACurve *this, float angleOfAttack)
{
  double result; 

  *(float *)&result = ?GetLiftAtAOA@FlightDynamicsNACALiftDragAOACurve@@QEAAMM@Z(this, angleOfAttack);
  return result;
}

/*
==============
FlightDynamicCameraData::FlightDynamicCameraData
==============
*/

void __fastcall FlightDynamicCameraData::FlightDynamicCameraData(FlightDynamicCameraData *this)
{
  ??0FlightDynamicCameraData@@QEAA@XZ(this);
}

/*
==============
FlightDynamics::CalculateAeroDrag
==============
*/

void __fastcall FlightDynamics::CalculateAeroDrag(vec3_t *inVec, float CdA, float dT, vec3_t *outVec)
{
  ?CalculateAeroDrag@FlightDynamics@@SAXTvec3_t@@MMPEAT2@@Z(inVec, CdA, dT, outVec);
}

/*
==============
FlightDynamicCameraData::FlightDynamicCameraData
==============
*/
void FlightDynamicCameraData::FlightDynamicCameraData(FlightDynamicCameraData *this)
{
  memset_0(this, 0, sizeof(FlightDynamicCameraData));
  *(_WORD *)&this->resetParams = 257;
  this->offsetEntityNum = 2047;
  this->angleDelta.v[3] = 1.0;
  this->contentsOfdVarQuat.v[3] = 1.0;
  this->prevViewQuat.v[3] = 1.0;
  this->localFBWquat.v[3] = 1.0;
}

/*
==============
FlightDynamics::CalculateDeltaQuatFromAngularVelocity
==============
*/

void __fastcall FlightDynamics::CalculateDeltaQuatFromAngularVelocity(const vec3_t *angVel, double dT, vec4_t *deltaQuat)
{
  vec3_t axis; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmulss  xmm4, xmm1, dword ptr [rcx]
    vmulss  xmm5, xmm1, dword ptr [rcx+4]
    vmulss  xmm6, xmm1, dword ptr [rcx+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2; radians
    vmovss  xmm2, cs:__real@3f800000
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
    vdivss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rsp+58h+axis], xmm1
    vmulss  xmm1, xmm6, xmm3
    vmulss  xmm2, xmm5, xmm3
    vmovss  dword ptr [rsp+58h+axis+8], xmm1
    vmovss  dword ptr [rsp+58h+axis+4], xmm2
  }
  AngleRadAxisToQuat(*(float *)&_XMM0, &axis, deltaQuat);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
FlightDynamics::CalculateDrag
==============
*/

float __fastcall FlightDynamics::CalculateDrag(double value, float dragCoefficient, float dT)
{
  char v3; 
  char v4; 

  __asm
  {
    vmulss  xmm1, xmm0, xmm1
    vmulss  xmm4, xmm1, xmm2
    vandps  xmm3, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm3, xmm1
  }
  if ( v3 | v4 )
    __asm { vsubss  xmm0, xmm0, xmm4 }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamics::CalculateAeroDrag
==============
*/

void __fastcall FlightDynamics::CalculateAeroDrag(vec3_t *inVec, double CdA, double dT, vec3_t *outVec)
{
  bool v26; 
  bool v27; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = outVec;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = inVec;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm1
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm3, xmm7, xmm7
    vaddss  xmm4, xmm3, xmm0
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm2
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm8, xmm4, xmm2
    vcvtss2sd xmm0, xmm8, xmm8
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  [rsp+88h+var_58], xmm7
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm { vmovss  [rsp+88h+var_58], xmm1 }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm { vmovss  [rsp+88h+var_58], xmm5 }
  if ( (v61 & 0x7F800000) == 2139095040 )
  {
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1004, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inVec )[0] ) && !IS_NAN( ( inVec )[1] ) && !IS_NAN( ( inVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inVec )[0] ) && !IS_NAN( ( inVec )[1] ) && !IS_NAN( ( inVec )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm8, xmm6
    vmulss  xmm1, xmm0, cs:__real@bf000000
    vmulss  xmm8, xmm1, xmm9
    vmovss  [rsp+88h+var_58], xmm8
  }
  v26 = (v62 & 0x7F800000u) < 0x7F800000;
  if ( (v62 & 0x7F800000) == 2139095040 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1006, ASSERT_TYPE_SANITY, "( !IS_NAN( dragValue ) )", (const char *)&queryFormat, "!IS_NAN( dragValue )");
    v26 = 0;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm6, xmm2, xmm2
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm3, xmm1, dword ptr [rbx]
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm7, xmm1, dword ptr [rbx+4]
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm4, xmm1, dword ptr [rbx+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm6, xmm0
    vmovss  dword ptr [rbx], xmm3
    vmovss  dword ptr [rbx+4], xmm7
    vmovss  dword ptr [rbx+8], xmm4
  }
  if ( v26 )
  {
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm4, xmm4, xmm4
    }
  }
  __asm { vmovss  [rsp+88h+var_58], xmm3 }
  if ( (v63 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+88h+var_58], xmm7 }
  if ( (v64 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+88h+var_58], xmm4 }
  if ( (v65 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1014, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *outVec )[0] ) && !IS_NAN( ( *outVec )[1] ) && !IS_NAN( ( *outVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *outVec )[0] ) && !IS_NAN( ( *outVec )[1] ) && !IS_NAN( ( *outVec )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
}

/*
==============
FlightDynamicsManager::GetCameraCurrentData
==============
*/
FlightDynamicCameraData *FlightDynamicsManager::GetCameraCurrentData(FlightDynamicsManager *this, LocalClientNum_t clientNum)
{
  __int64 v3; 
  float v6; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( clientNum ) ) < (unsigned)( (cl_maxLocalClients) )", "static_cast<int>( clientNum ) doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientNum, v6) )
      __debugbreak();
  }
  return &this->m_fdCameraData[v3];
}

/*
==============
FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA
==============
*/

float __fastcall FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(FlightDynamicsNACALiftDragAOACurve *this, double angleOfAttack)
{
  __asm
  {
    vmulss  xmm2, xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, xmm2
    vaddss  xmm0, xmm2, dword ptr [rcx+0Ch]
  }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA
==============
*/

float __fastcall FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(FlightDynamicsNACALiftDragAOACurve *this, double angleOfAttack)
{
  __asm
  {
    vmulss  xmm4, xmm1, dword ptr [rcx+10h]
    vmulss  xmm3, xmm4, xmm4
    vaddss  xmm1, xmm3, dword ptr [rcx+18h]
    vmulss  xmm0, xmm3, xmm4
    vmulss  xmm2, xmm0, xmm4
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm3, dword ptr [rcx]
  }
  return *(float *)&_XMM0;
}

