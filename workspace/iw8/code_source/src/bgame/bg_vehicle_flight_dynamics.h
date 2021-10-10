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
  float v3; 
  float v4; 
  __int128 v5; 
  float v6; 
  vec3_t axis; 

  v3 = *(float *)&dT * angVel->v[0];
  v5 = *(_OWORD *)&dT;
  v4 = *(float *)&dT * angVel->v[1];
  v6 = *(float *)&dT * angVel->v[2];
  *(float *)&v5 = fsqrt((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v6 * v6));
  _XMM0 = v5;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  axis.v[0] = v3 * (float)(1.0 / *(float *)&_XMM1);
  axis.v[2] = v6 * (float)(1.0 / *(float *)&_XMM1);
  axis.v[1] = v4 * (float)(1.0 / *(float *)&_XMM1);
  AngleRadAxisToQuat(*(float *)&v5, &axis, deltaQuat);
}

/*
==============
FlightDynamics::CalculateDrag
==============
*/
float FlightDynamics::CalculateDrag(float value, float dragCoefficient, float dT)
{
  float v3; 

  v3 = (float)(value * dragCoefficient) * dT;
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) <= COERCE_FLOAT(LODWORD(value) & _xmm) )
    return value - v3;
  else
    return 0.0;
}

/*
==============
FlightDynamics::CalculateAeroDrag
==============
*/
void FlightDynamics::CalculateAeroDrag(vec3_t *inVec, float CdA, float dT, vec3_t *outVec)
{
  float v4; 
  __int128 v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  float v23; 

  v4 = inVec->v[2];
  v7 = LODWORD(inVec->v[0]);
  v9 = inVec->v[1];
  v10 = (float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v9 * v9)) + (float)(v4 * v4);
  if ( v10 > 0.000001 )
  {
    LODWORD(v11) = LODWORD(CdA) & _xmm;
    v23 = inVec->v[0];
    if ( (v7 & 0x7F800000) == 2139095040 || (v23 = inVec->v[1], (LODWORD(v9) & 0x7F800000) == 2139095040) || (v23 = inVec->v[2], (LODWORD(v4) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1004, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inVec )[0] ) && !IS_NAN( ( inVec )[1] ) && !IS_NAN( ( inVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inVec )[0] ) && !IS_NAN( ( inVec )[1] ) && !IS_NAN( ( inVec )[2] )", v23) )
        __debugbreak();
    }
    v12 = (float)((float)(v10 * v11) * -0.5) * dT;
    *(float *)&v22 = v12;
    if ( (LODWORD(v12) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1006, ASSERT_TYPE_SANITY, "( !IS_NAN( dragValue ) )", (const char *)&queryFormat, "!IS_NAN( dragValue )", v22) )
      __debugbreak();
    v13 = inVec->v[1];
    v14 = inVec->v[2];
    v15 = v7;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v13 * v13)) + (float)(v14 * v14));
    _XMM6 = v15;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    v19 = (float)((float)(*(float *)&v7 * (float)(1.0 / *(float *)&_XMM0)) * v12) + outVec->v[0];
    v20 = (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * v12) + outVec->v[1];
    v21 = (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * v12) + outVec->v[2];
    outVec->v[0] = v19;
    outVec->v[1] = v20;
    outVec->v[2] = v21;
    if ( *(float *)&v15 < fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21)) )
    {
      *(_QWORD *)outVec->v = 0i64;
      outVec->v[2] = 0.0;
      v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
    }
    *(float *)&v22 = v19;
    if ( (LODWORD(v19) & 0x7F800000) == 2139095040 || (*(float *)&v22 = v20, (LODWORD(v20) & 0x7F800000) == 2139095040) || (*(float *)&v22 = v21, (LODWORD(v21) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 1014, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *outVec )[0] ) && !IS_NAN( ( *outVec )[1] ) && !IS_NAN( ( *outVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *outVec )[0] ) && !IS_NAN( ( *outVec )[1] ) && !IS_NAN( ( *outVec )[2] )", v22) )
        __debugbreak();
    }
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
float FlightDynamicsNACALiftDragAOACurve::GetDragAtAOA(FlightDynamicsNACALiftDragAOACurve *this, float angleOfAttack)
{
  return (float)((float)((float)((float)(angleOfAttack * this->m_CDslope) * (float)(angleOfAttack * this->m_CDslope)) * (float)(angleOfAttack * this->m_CDslope)) * (float)(angleOfAttack * this->m_CDslope)) + this->m_CDbase;
}

/*
==============
FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA
==============
*/
float FlightDynamicsNACALiftDragAOACurve::GetLiftAtAOA(FlightDynamicsNACALiftDragAOACurve *this, float angleOfAttack)
{
  float v2; 

  v2 = angleOfAttack * this->m_AoAadjustment;
  return (float)((float)(v2 / (float)((float)((float)((float)(v2 * v2) * v2) * v2) + (float)((float)(v2 * v2) + this->m_LiftBaseCurve))) * this->m_LiftSlopeCurve) * this->m_MaxCL;
}

