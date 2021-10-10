/*
==============
XCamData::Init
==============
*/

void __fastcall XCamData::Init(XCamData *this, const XCam *xcam)
{
  ?Init@XCamData@@QEAAXPEBUXCam@@@Z(this, xcam);
}

/*
==============
XCamData::CalcValues
==============
*/

void __fastcall XCamData::CalcValues(XCamData *this, int currentTime, bool performTrace)
{
  ?CalcValues@XCamData@@QEAAXH_N@Z(this, currentTime, performTrace);
}

/*
==============
XCamData::SetActiveSubCamera
==============
*/

void __fastcall XCamData::SetActiveSubCamera(XCamData *this, int subCamera)
{
  ?SetActiveSubCamera@XCamData@@QEAAXH@Z(this, subCamera);
}

/*
==============
XCamData::GetValues
==============
*/

bool __fastcall XCamData::GetValues(XCamData *this, XCamValues *outValues)
{
  return ?GetValues@XCamData@@QEBA_NAEAUXCamValues@@@Z(this, outValues);
}

/*
==============
XCamData::ClearWorldTraceOrigin
==============
*/

void __fastcall XCamData::ClearWorldTraceOrigin(XCamData *this)
{
  ?ClearWorldTraceOrigin@XCamData@@QEAAXXZ(this);
}

/*
==============
XCamData::SetTraceInfo
==============
*/

void __fastcall XCamData::SetTraceInfo(XCamData *this, const vec3_t *worldOrigin, const __int16 ignoreEntity)
{
  ?SetTraceInfo@XCamData@@QEAAXAEBTvec3_t@@F@Z(this, worldOrigin, ignoreEntity);
}

/*
==============
XCamData::SetStartTime
==============
*/

void __fastcall XCamData::SetStartTime(XCamData *this, int startTime)
{
  ?SetStartTime@XCamData@@QEAAXH@Z(this, startTime);
}

/*
==============
XCamData::AreValuesValid
==============
*/

bool __fastcall XCamData::AreValuesValid(XCamData *this)
{
  return ?AreValuesValid@XCamData@@QEBA_NXZ(this);
}

/*
==============
XCamValues::XCamValues
==============
*/

void __fastcall XCamValues::XCamValues(XCamValues *this)
{
  ??0XCamValues@@QEAA@XZ(this);
}

/*
==============
XCamData::Clear
==============
*/

void __fastcall XCamData::Clear(XCamData *this)
{
  ?Clear@XCamData@@QEAAXXZ(this);
}

/*
==============
XCamData::GetActiveXCam
==============
*/

const XCam *__fastcall XCamData::GetActiveXCam(XCamData *this)
{
  return ?GetActiveXCam@XCamData@@QEBAPEBUXCam@@XZ(this);
}

/*
==============
XCamData::GetActiveSubCamera
==============
*/

int __fastcall XCamData::GetActiveSubCamera(XCamData *this)
{
  return ?GetActiveSubCamera@XCamData@@QEBAHXZ(this);
}

/*
==============
XCamData::SetSceneTransform
==============
*/

void __fastcall XCamData::SetSceneTransform(XCamData *this, const vec3_t *origin, const vec4_t *quat)
{
  ?SetSceneTransform@XCamData@@QEAAXAEBTvec3_t@@AEBTvec4_t@@@Z(this, origin, quat);
}

/*
==============
XCamData::IsActive
==============
*/

bool __fastcall XCamData::IsActive(XCamData *this)
{
  return ?IsActive@XCamData@@QEBA_NXZ(this);
}

/*
==============
XCamData::XCamData
==============
*/

void __fastcall XCamData::XCamData(XCamData *this, LocalClientNum_t localClientNum)
{
  ??0XCamData@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
XCamData::SetAnimTime
==============
*/

void __fastcall XCamData::SetAnimTime(XCamData *this, float animTime)
{
  ?SetAnimTime@XCamData@@QEAAXM@Z(this, animTime);
}

/*
==============
XCamData::XCamData
==============
*/
void XCamData::XCamData(XCamData *this, LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->m_values.apertureType = XCAM_FOV_APERTURE;
  this->m_values.focusShiftMultiplier = 1.0;
  *(_QWORD *)this->m_values.origin.v = 0i64;
  this->m_values.origin.v[2] = 0.0;
  MatrixIdentity33(&this->m_values.axis);
  this->m_values.lens.fov = 65.0;
  this->m_origin = vec3_origin;
  this->m_quat = quat_identity;
  this->m_xcam = NULL;
  this->m_startTime = -1;
  this->m_animTime = -1.0;
  this->m_subCamera = 30;
  this->m_forcedFrame = -1;
  this->m_traceOriginWorld = vec3_origin;
  this->m_traceIgnoreEntity = 2047;
  this->m_traceOriginValid = 0;
  this->m_lerpEndTime = 0;
  *(_QWORD *)&this->m_lerpFrame.frameNum = 0i64;
  *(_QWORD *)&this->m_lerpFrame.origin.y = 0i64;
  *(_QWORD *)this->m_lerpFrame.angleQuat.v = 0i64;
  *(_QWORD *)&this->m_lerpFrame.angleQuat.xyz.z = 0i64;
  *(_QWORD *)&this->m_lerpFrame.fov = 0i64;
  *(_QWORD *)&this->m_lerpFrame.focalDistance = 0i64;
  this->m_valuesValid = 0;
}

/*
==============
XCamValues::XCamValues
==============
*/
void XCamValues::XCamValues(XCamValues *this)
{
  this->focusShiftMultiplier = 1.0;
  this->apertureType = XCAM_FOV_APERTURE;
  *(_QWORD *)this->origin.v = 0i64;
  this->origin.v[2] = 0.0;
  MatrixIdentity33(&this->axis);
  this->lens.fov = 65.0;
}

/*
==============
XCamData::AreValuesValid
==============
*/
_BOOL8 XCamData::AreValuesValid(XCamData *this)
{
  return this->m_valuesValid;
}

/*
==============
XCamData::CalcValues
==============
*/
void XCamData::CalcValues(XCamData *this, int currentTime, bool performTrace)
{
  int m_startTime; 
  float m_animTime; 
  const XCam *m_xcam; 
  float v10; 
  int m_lerpEndTime; 
  int m_forcedFrame; 
  __int128 v14; 
  int frames; 
  double v17; 
  int v18; 
  int v19; 
  int v22; 
  int m_subCamera; 
  int cameraCount; 
  XCamCameraSwitchParams *cameraSwitchParams; 
  const XCam *v26; 
  XCamFrame *animationFrames; 
  XCamFrame *p_m_lerpFrame; 
  XCamFrame *v29; 
  float v30; 
  vec4_t *p_m_quat; 
  float v32; 
  float v33; 
  XCamValues *p_m_values; 
  const XCam *v35; 
  bool v36; 
  hknpShape *ShapeSphere; 
  __int32 v40; 
  float fraction; 
  hkMemoryAllocator *v42; 
  hkMemoryAllocator *v43; 
  XCamApertureType apertureType; 
  __int64 siblings; 
  __int64 linked; 
  __int64 v48; 
  XCamCamera *cameras; 
  HavokPhysics_IgnoreBodies v50; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v52; 
  vec4_t v53; 
  vec4_t v; 
  vec4_t out; 
  PhysicsQuery_ShapecastHit hit; 

  v52 = -2i64;
  if ( !this->m_xcam )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 125, ASSERT_TYPE_ASSERT, "(IsActive())", (const char *)&queryFormat, "IsActive()") )
      __debugbreak();
    if ( !this->m_xcam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 126, ASSERT_TYPE_ASSERT, "(m_xcam)", (const char *)&queryFormat, "m_xcam") )
      __debugbreak();
  }
  m_startTime = this->m_startTime;
  if ( m_startTime > 0 )
  {
    v10 = (float)(currentTime - m_startTime) * 0.001;
    m_xcam = this->m_xcam;
  }
  else
  {
    m_animTime = this->m_animTime;
    if ( m_animTime < 0.0 || m_animTime > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 133, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( m_animTime ) && ( m_animTime ) <= ( 1.0f )", "m_animTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", m_animTime, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    m_xcam = this->m_xcam;
    v10 = (float)((float)m_xcam->frames / (float)m_xcam->frameRate) * this->m_animTime;
    m_startTime = this->m_startTime;
  }
  m_lerpEndTime = this->m_lerpEndTime;
  m_forcedFrame = this->m_forcedFrame;
  if ( m_lerpEndTime <= currentTime )
  {
    if ( m_forcedFrame != -1 )
    {
      LODWORD(_XMM7) = 0;
      goto LABEL_25;
    }
    if ( m_xcam->looping )
    {
      frames = m_xcam->frames;
      if ( frames == 1 )
      {
        LODWORD(_XMM7) = 0;
        goto LABEL_25;
      }
      *(float *)&v17 = fmodf_0((float)m_xcam->frameRate * v10, (float)frames - 1.0);
    }
    else
    {
      v17 = I_fclamp((float)m_xcam->frameRate * v10, 0.0, (float)m_xcam->frames - 1.0);
      m_xcam = this->m_xcam;
    }
    LODWORD(_XMM7) = LODWORD(v17);
  }
  else
  {
    v14 = LODWORD(FLOAT_1_0);
    *(float *)&v14 = 1.0 - (float)((float)(this->m_lerpEndTime - currentTime) / (float)(this->m_lerpEndTime - m_startTime));
    _XMM1 = v14;
    __asm { vminss  xmm7, xmm1, xmm8 }
    if ( m_xcam->easeAnimationsOut )
      *(float *)&_XMM7 = 1.0 - (float)((float)(1.0 - *(float *)&_XMM7) * (float)(1.0 - *(float *)&_XMM7));
  }
LABEL_25:
  if ( m_forcedFrame == -1 )
  {
    if ( m_lerpEndTime <= currentTime )
    {
      _XMM2 = 0i64;
      __asm { vroundss xmm0, xmm2, xmm3, 1 }
      v19 = (int)*(float *)&_XMM0;
      *(float *)&_XMM7 = *(float *)&_XMM7 - (float)(int)*(float *)&_XMM0;
      v18 = (int)*(float *)&_XMM0 + 1;
      v22 = m_xcam->frames;
      if ( v18 >= v22 )
      {
        if ( m_xcam->looping )
          v18 = 0;
        else
          v18 = v22 - 1;
      }
    }
    else
    {
      v18 = 0;
      v19 = 0;
    }
  }
  else
  {
    v18 = this->m_forcedFrame;
    v19 = v18;
  }
  m_subCamera = this->m_subCamera;
  cameraCount = m_xcam->cameraCount;
  if ( m_subCamera == 30 )
  {
    if ( cameraCount > 1 && (cameraSwitchParams = m_xcam->cameraSwitchParams) != NULL )
      m_subCamera = cameraSwitchParams[v19].camera1Index;
    else
      m_subCamera = 0;
  }
  if ( m_subCamera >= (unsigned int)cameraCount )
  {
    LODWORD(linked) = m_xcam->cameraCount;
    LODWORD(siblings) = m_subCamera;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( camIndex ) < (unsigned)( m_xcam->cameraCount )", "camIndex doesn't index m_xcam->cameraCount\n\t%i not in [0, %i)", siblings, linked) )
      __debugbreak();
  }
  v26 = this->m_xcam;
  v48 = m_subCamera;
  cameras = v26->cameras;
  animationFrames = cameras[m_subCamera].animationFrames;
  if ( m_lerpEndTime <= currentTime )
    p_m_lerpFrame = &animationFrames[v19];
  else
    p_m_lerpFrame = &this->m_lerpFrame;
  v29 = &animationFrames[v18];
  v30 = v29->origin.v[0];
  p_m_quat = &this->m_quat;
  if ( m_lerpEndTime <= currentTime )
  {
    v53.v[0] = (float)((float)(v30 - p_m_lerpFrame->origin.v[0]) * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[0];
    v53.v[1] = (float)((float)(v29->origin.v[1] - p_m_lerpFrame->origin.v[1]) * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[1];
    v53.v[2] = (float)((float)(v29->origin.v[2] - p_m_lerpFrame->origin.v[2]) * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[2];
    v.v[0] = v53.v[0] - v26->offset.v[0];
    v.v[1] = v53.v[1] - v26->offset.v[1];
    v.v[2] = v53.v[2] - v26->offset.v[2];
    QuatMultiply(p_m_quat, &v26->rotationOffsetInv, &out);
    RotatePoint((const vec3_t *)&v, &out, (vec3_t *)&v53);
    p_m_values = &this->m_values;
    this->m_values.origin.v[0] = v53.v[0] + this->m_origin.v[0];
    this->m_values.origin.v[1] = v53.v[1] + this->m_origin.v[1];
    this->m_values.origin.v[2] = v53.v[2] + this->m_origin.v[2];
    QuatSlerp(&p_m_lerpFrame->angleQuat, &v29->angleQuat, *(float *)&_XMM7, &v53);
    QuatMultiply(&v53, &this->m_quat, &v);
    QuatMultiply(&v, &this->m_xcam->rotationOffsetInv, &out);
    if ( (LODWORD(out.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(out.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(out.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(out.v[3]) & 0x7F800000) != 2139095040 )
      goto LABEL_96;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 266, ASSERT_TYPE_SANITY, "( !IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] )");
    goto LABEL_94;
  }
  v.v[0] = v30 - v26->offset.v[0];
  v.v[1] = v29->origin.v[1] - v26->offset.v[1];
  v.v[2] = v29->origin.v[2] - v26->offset.v[2];
  QuatMultiply(p_m_quat, &v26->rotationOffsetInv, &out);
  RotatePoint((const vec3_t *)&v, &out, (vec3_t *)&v53);
  v.v[0] = v53.v[0] + this->m_origin.v[0];
  v.v[1] = v53.v[1] + this->m_origin.v[1];
  v.v[2] = v53.v[2] + this->m_origin.v[2];
  v53.v[0] = v.v[0] - this->m_lerpFrame.origin.v[0];
  v53.v[1] = v.v[1] - this->m_lerpFrame.origin.v[1];
  v32 = v53.v[1];
  v53.v[2] = v.v[2] - this->m_lerpFrame.origin.v[2];
  v33 = v53.v[2];
  p_m_values = &this->m_values;
  this->m_values.origin.v[0] = (float)(v53.v[0] * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[0];
  this->m_values.origin.v[1] = (float)(v32 * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[1];
  this->m_values.origin.v[2] = (float)(v33 * *(float *)&_XMM7) + p_m_lerpFrame->origin.v[2];
  if ( ((LODWORD(v29->angleQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v29->angleQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v29->angleQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v29->angleQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( nextXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[3] )") )
    __debugbreak();
  if ( ((LODWORD(this->m_quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 233, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_quat )[0] ) && !IS_NAN( ( m_quat )[1] ) && !IS_NAN( ( m_quat )[2] ) && !IS_NAN( ( m_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_quat )[0] ) && !IS_NAN( ( m_quat )[1] ) && !IS_NAN( ( m_quat )[2] ) && !IS_NAN( ( m_quat )[3] )") )
    __debugbreak();
  QuatMultiply(&v29->angleQuat, &this->m_quat, &v53);
  if ( ((LODWORD(v53.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v53.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v53.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v53.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 235, ASSERT_TYPE_SANITY, "( !IS_NAN( ( use_quat )[0] ) && !IS_NAN( ( use_quat )[1] ) && !IS_NAN( ( use_quat )[2] ) && !IS_NAN( ( use_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( use_quat )[0] ) && !IS_NAN( ( use_quat )[1] ) && !IS_NAN( ( use_quat )[2] ) && !IS_NAN( ( use_quat )[3] )") )
    __debugbreak();
  v35 = this->m_xcam;
  if ( ((LODWORD(v35->rotationOffsetInv.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v35->rotationOffsetInv.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v35->rotationOffsetInv.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v35->rotationOffsetInv.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 236, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_xcam->rotationOffsetInv )[0] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[1] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[2] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_xcam->rotationOffsetInv )[0] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[1] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[2] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[3] )") )
    __debugbreak();
  QuatMultiply(&v53, &this->m_xcam->rotationOffsetInv, &v);
  if ( ((LODWORD(p_m_lerpFrame->angleQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(p_m_lerpFrame->angleQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(p_m_lerpFrame->angleQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(p_m_lerpFrame->angleQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 238, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[3] )") )
    __debugbreak();
  if ( ((LODWORD(v.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 239, ASSERT_TYPE_SANITY, "( !IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] )") )
    __debugbreak();
  if ( (_XMM7 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 240, ASSERT_TYPE_SANITY, "( !IS_NAN( weight ) )", (const char *)&queryFormat, "!IS_NAN( weight )") )
    __debugbreak();
  QuatSlerp(&p_m_lerpFrame->angleQuat, &v, *(float *)&_XMM7, &out);
  if ( (LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040 )
  {
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 242, ASSERT_TYPE_SANITY, "( !IS_NAN( ( interp_quat )[0] ) && !IS_NAN( ( interp_quat )[1] ) && !IS_NAN( ( interp_quat )[2] ) && !IS_NAN( ( interp_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( interp_quat )[0] ) && !IS_NAN( ( interp_quat )[1] ) && !IS_NAN( ( interp_quat )[2] ) && !IS_NAN( ( interp_quat )[3] )");
LABEL_94:
    if ( v36 )
      __debugbreak();
  }
LABEL_96:
  QuatToAxis(&out, &this->m_values.axis);
  if ( performTrace && this->m_traceOriginValid )
  {
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v50, 1, 0);
    v50.m_isClutter = 1;
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v50, this->m_traceIgnoreEntity, 1, 1, 0, 0, 1);
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.contents = 8391313;
    extendedData.permitOutwardTrace = 0;
    extendedData.ignoreBodies = &v50;
    ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, 10.0, NULL, 0);
    if ( !ShapeSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 284, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    v40 = 3 * this->m_localClientNum + 2;
    PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v40, ShapeSphere, &this->m_traceOriginWorld, &p_m_values->origin, &quat_identity, &extendedData, &hit);
    Physics_ReleaseShape((Physics_WorldId)v40, ShapeSphere, 1);
    if ( hit.isValid )
    {
      fraction = hit.fraction;
      if ( hit.fraction < 1.0 )
      {
        p_m_values->origin.v[0] = (float)((float)(p_m_values->origin.v[0] - this->m_traceOriginWorld.v[0]) * hit.fraction) + this->m_traceOriginWorld.v[0];
        p_m_values->origin.v[1] = (float)((float)(p_m_values->origin.v[1] - this->m_traceOriginWorld.v[1]) * fraction) + this->m_traceOriginWorld.v[1];
        p_m_values->origin.v[2] = (float)((float)(p_m_values->origin.v[2] - this->m_traceOriginWorld.v[2]) * fraction) + this->m_traceOriginWorld.v[2];
      }
    }
    v42 = hkMemHeapAllocator();
    v50.m_ignoreBodies.m_size = 0;
    if ( v50.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v42, v50.m_ignoreBodies.m_data, 4, v50.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v50.m_ignoreBodies.m_data = NULL;
    v50.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v43 = hkMemHeapAllocator();
    v50.m_ignoreEntities.m_size = 0;
    if ( v50.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v43, v50.m_ignoreEntities.m_data, 8, v50.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  this->m_values.apertureType = cameras[v48].apertureType;
  apertureType = cameras[v48].apertureType;
  if ( apertureType == XCAM_FOCAL_LENGTH_APERTURE )
  {
    this->m_values.lens.fov = (float)((float)(1.0 - *(float *)&_XMM7) * p_m_lerpFrame->focalLength) + (float)(*(float *)&_XMM7 * v29->focalLength);
    this->m_values.lens.fl.focalDistance = (float)((float)(1.0 - *(float *)&_XMM7) * p_m_lerpFrame->focalDistance) + (float)(*(float *)&_XMM7 * v29->focalDistance);
    this->m_values.lens.fl.fStop = (float)((float)(1.0 - *(float *)&_XMM7) * p_m_lerpFrame->fStop) + (float)(*(float *)&_XMM7 * v29->fStop);
  }
  else if ( apertureType == XCAM_FOV_APERTURE )
  {
    this->m_values.lens.fov = (float)((float)(1.0 - *(float *)&_XMM7) * p_m_lerpFrame->fov) + (float)(*(float *)&_XMM7 * v29->fov);
  }
  this->m_values.focusShiftMultiplier = cameras[v48].focusShiftMultiplier;
  this->m_valuesValid = 1;
}

/*
==============
XCamData::Clear
==============
*/
void XCamData::Clear(XCamData *this)
{
  this->m_origin = vec3_origin;
  this->m_quat = quat_identity;
  this->m_xcam = NULL;
  this->m_startTime = -1;
  this->m_animTime = -1.0;
  this->m_subCamera = 30;
  this->m_forcedFrame = -1;
  this->m_traceOriginWorld = vec3_origin;
  this->m_traceIgnoreEntity = 2047;
  this->m_traceOriginValid = 0;
  this->m_lerpEndTime = 0;
  *(_OWORD *)&this->m_lerpFrame.frameNum = 0ui64;
  this->m_lerpFrame.angleQuat = 0ui64;
  *(_QWORD *)&this->m_lerpFrame.fov = 0i64;
  *(_QWORD *)&this->m_lerpFrame.focalDistance = 0i64;
}

/*
==============
XCamData::ClearWorldTraceOrigin
==============
*/
void XCamData::ClearWorldTraceOrigin(XCamData *this)
{
  this->m_traceOriginValid = 0;
}

/*
==============
XCamData::GetActiveSubCamera
==============
*/
__int64 XCamData::GetActiveSubCamera(XCamData *this)
{
  return (unsigned int)this->m_subCamera;
}

/*
==============
XCamData::GetActiveXCam
==============
*/
const XCam *XCamData::GetActiveXCam(XCamData *this)
{
  return this->m_xcam;
}

/*
==============
XCamData::GetValues
==============
*/
char XCamData::GetValues(XCamData *this, XCamValues *outValues)
{
  if ( !this->m_valuesValid )
    return 0;
  *outValues = this->m_values;
  return 1;
}

/*
==============
XCamData::Init
==============
*/
void XCamData::Init(XCamData *this, const XCam *xcam)
{
  this->m_origin = vec3_origin;
  this->m_quat = quat_identity;
  this->m_xcam = xcam;
  this->m_startTime = -1;
  this->m_animTime = -1.0;
  this->m_subCamera = 30;
  this->m_forcedFrame = -1;
  this->m_traceOriginWorld = vec3_origin;
  this->m_traceIgnoreEntity = 2047;
  this->m_traceOriginValid = 0;
  this->m_lerpEndTime = 0;
  *(_OWORD *)&this->m_lerpFrame.frameNum = 0ui64;
  this->m_lerpFrame.angleQuat = 0ui64;
  *(_QWORD *)&this->m_lerpFrame.fov = 0i64;
  *(_QWORD *)&this->m_lerpFrame.focalDistance = 0i64;
}

/*
==============
XCamData::IsActive
==============
*/
bool XCamData::IsActive(XCamData *this)
{
  return this->m_xcam != NULL;
}

/*
==============
XCamData::SetActiveSubCamera
==============
*/
void XCamData::SetActiveSubCamera(XCamData *this, int subCamera)
{
  this->m_subCamera = subCamera;
}

/*
==============
XCamData::SetAnimTime
==============
*/
void XCamData::SetAnimTime(XCamData *this, float animTime)
{
  this->m_animTime = animTime;
  this->m_startTime = -1;
}

/*
==============
XCamData::SetSceneTransform
==============
*/
void XCamData::SetSceneTransform(XCamData *this, const vec3_t *origin, const vec4_t *quat)
{
  this->m_origin = *origin;
  this->m_quat = *quat;
}

/*
==============
XCamData::SetStartTime
==============
*/
void XCamData::SetStartTime(XCamData *this, int startTime)
{
  this->m_startTime = startTime;
  this->m_animTime = -1.0;
}

/*
==============
XCamData::SetTraceInfo
==============
*/
void XCamData::SetTraceInfo(XCamData *this, const vec3_t *worldOrigin, const __int16 ignoreEntity)
{
  this->m_traceOriginWorld = *worldOrigin;
  this->m_traceIgnoreEntity = ignoreEntity;
  this->m_traceOriginValid = 1;
}

