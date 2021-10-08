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
  _RBX = this;
  this->m_values.focusShiftMultiplier = 1.0;
  *(_QWORD *)this->m_values.origin.v = 0i64;
  this->m_values.origin.v[2] = 0.0;
  MatrixIdentity33(&this->m_values.axis);
  _RBX->m_values.lens.fov = 65.0;
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rbx], xmm0
  }
  _RBX->m_origin.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovups xmmword ptr [rbx+0Ch], xmm0
  }
  _RBX->m_xcam = NULL;
  _RBX->m_startTime = -1;
  _RBX->m_animTime = -1.0;
  _RBX->m_subCamera = 30;
  _RBX->m_forcedFrame = -1;
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rbx+3Ch], xmm0
  }
  _RBX->m_traceOriginWorld.v[2] = vec3_origin.v[2];
  _RBX->m_traceIgnoreEntity = 2047;
  _RBX->m_traceOriginValid = 0;
  _RBX->m_lerpEndTime = 0;
  *(_QWORD *)&_RBX->m_lerpFrame.frameNum = 0i64;
  *(_QWORD *)&_RBX->m_lerpFrame.origin.y = 0i64;
  *(_QWORD *)_RBX->m_lerpFrame.angleQuat.v = 0i64;
  *(_QWORD *)&_RBX->m_lerpFrame.angleQuat.xyz.z = 0i64;
  *(_QWORD *)&_RBX->m_lerpFrame.fov = 0i64;
  *(_QWORD *)&_RBX->m_lerpFrame.focalDistance = 0i64;
  _RBX->m_valuesValid = 0;
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
  const XCam *m_xcam; 
  int m_lerpEndTime; 
  int m_forcedFrame; 
  int v42; 
  int frames; 
  int m_subCamera; 
  int cameraCount; 
  XCamCameraSwitchParams *cameraSwitchParams; 
  const XCam *v55; 
  XCamFrame *animationFrames; 
  const vec4_t *p_m_quat; 
  bool v112; 
  hknpShape *ShapeSphere; 
  int v142; 
  hkMemoryAllocator *v144; 
  hkMemoryAllocator *v145; 
  XCamApertureType apertureType; 
  __int64 siblings; 
  double siblingsa; 
  __int64 linked; 
  double linkeda; 
  double v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  int v198; 
  int v199; 
  int v200; 
  int v201; 
  int v202; 
  int v203; 
  __int64 v205; 
  XCamCamera *cameras; 
  HavokPhysics_IgnoreBodies v207; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v209; 
  vec4_t v210; 
  vec4_t v; 
  vec4_t out; 
  PhysicsQuery_ShapecastHit hit; 
  char v214; 
  void *retaddr; 

  _RAX = &retaddr;
  v209 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RDI = this;
  if ( !this->m_xcam )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 125, ASSERT_TYPE_ASSERT, "(IsActive())", (const char *)&queryFormat, "IsActive()") )
      __debugbreak();
    if ( !_RDI->m_xcam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 126, ASSERT_TYPE_ASSERT, "(m_xcam)", (const char *)&queryFormat, "m_xcam") )
      __debugbreak();
  }
  m_startTime = _RDI->m_startTime;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  xmm8, cs:__real@3f800000
  }
  if ( m_startTime > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm3, xmm0, cs:__real@3a83126f
    }
    m_xcam = _RDI->m_xcam;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vcomiss xmm0, xmm9
      vcomiss xmm0, xmm8
    }
    if ( m_startTime )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm0, xmm0
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+1E0h+var_1A8], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+1E0h+linked], xmm1
        vmovsd  qword ptr [rsp+1E0h+siblings], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 133, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( m_animTime ) && ( m_animTime ) <= ( 1.0f )", "m_animTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", siblingsa, linkeda, v170) )
        __debugbreak();
    }
    m_xcam = _RDI->m_xcam;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbx+1Ch]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+20h]
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm3, xmm2, dword ptr [rdi+2Ch]
    }
  }
  m_lerpEndTime = _RDI->m_lerpEndTime;
  m_forcedFrame = _RDI->m_forcedFrame;
  if ( m_lerpEndTime <= currentTime )
  {
    if ( m_forcedFrame != -1 )
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
      goto LABEL_24;
    }
    if ( m_xcam->looping )
    {
      if ( m_xcam->frames == 1 )
      {
        __asm { vxorps  xmm7, xmm7, xmm7 }
        goto LABEL_24;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vsubss  xmm1, xmm0, xmm8; Y
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, dword ptr [rbx+20h]
        vmulss  xmm0, xmm2, xmm3; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1Ch]
        vsubss  xmm2, xmm0, xmm8; max
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+20h]
        vmulss  xmm0, xmm1, xmm3; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      m_xcam = _RDI->m_xcam;
    }
    __asm { vmovaps xmm7, xmm0 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vdivss  xmm2, xmm1, xmm0
      vsubss  xmm1, xmm8, xmm2
      vminss  xmm7, xmm1, xmm8
    }
    if ( m_xcam->easeAnimationsOut )
    {
      __asm
      {
        vsubss  xmm0, xmm8, xmm7
        vmulss  xmm1, xmm0, xmm0
        vsubss  xmm7, xmm8, xmm1
      }
    }
  }
LABEL_24:
  if ( m_forcedFrame == -1 )
  {
    if ( m_lerpEndTime <= currentTime )
    {
      __asm
      {
        vmovaps xmm1, xmm7
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm3, xmm0, xmm1
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm0, xmm2, xmm3, 1
        vcvttss2si r15d, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15d
        vsubss  xmm7, xmm7, xmm0
      }
      v42 = _ER15 + 1;
      frames = m_xcam->frames;
      if ( _ER15 + 1 >= frames )
      {
        if ( m_xcam->looping )
          v42 = 0;
        else
          v42 = frames - 1;
      }
    }
    else
    {
      v42 = 0;
      _ER15 = 0;
    }
  }
  else
  {
    v42 = _RDI->m_forcedFrame;
    _ER15 = v42;
  }
  m_subCamera = _RDI->m_subCamera;
  cameraCount = m_xcam->cameraCount;
  if ( m_subCamera == 30 )
  {
    if ( cameraCount > 1 && (cameraSwitchParams = m_xcam->cameraSwitchParams) != NULL )
      m_subCamera = cameraSwitchParams[_ER15].camera1Index;
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
  v55 = _RDI->m_xcam;
  v205 = m_subCamera;
  cameras = v55->cameras;
  animationFrames = cameras[m_subCamera].animationFrames;
  if ( m_lerpEndTime <= currentTime )
    _RSI = (const vec4_t *)&animationFrames[_ER15];
  else
    _RSI = (const vec4_t *)&_RDI->m_lerpFrame;
  _R14 = (const vec4_t *)&animationFrames[v42];
  __asm { vmovss  xmm0, dword ptr [r14+4] }
  p_m_quat = &_RDI->m_quat;
  if ( m_lerpEndTime <= currentTime )
  {
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm6, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+0E0h+var_100], xmm6
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm1, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm5, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+0E0h+var_100+4], xmm5
      vmovss  xmm0, dword ptr [r14+0Ch]
      vsubss  xmm1, xmm0, dword ptr [rsi+0Ch]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm4, xmm2, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rbp+0E0h+var_100+8], xmm4
      vsubss  xmm0, xmm6, dword ptr [rdx+38h]
      vmovss  dword ptr [rbp+0E0h+v], xmm0
      vsubss  xmm1, xmm5, dword ptr [rdx+3Ch]
      vmovss  dword ptr [rbp+0E0h+v+4], xmm1
      vsubss  xmm0, xmm4, dword ptr [rdx+40h]
      vmovss  dword ptr [rbp+0E0h+v+8], xmm0
    }
    QuatMultiply(p_m_quat, &v55->rotationOffsetInv, &out);
    RotatePoint((const vec3_t *)&v, &out, (vec3_t *)&v210);
    _R15 = &_RDI->m_values.origin;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0E0h+var_100]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm2, dword ptr [rbp+0E0h+var_100+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  xmm1, dword ptr [rbp+0E0h+var_100+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [r15+8], xmm2
      vmovaps xmm2, xmm7; frac
    }
    QuatSlerp(_RSI + 1, _R14 + 1, *(float *)&_XMM2, &v210);
    QuatMultiply(&v210, &_RDI->m_quat, &v);
    QuatMultiply(&v, &_RDI->m_xcam->rotationOffsetInv, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0E0h+out]
      vmovss  dword ptr [rsp+1E0h+var_190], xmm0
    }
    if ( (v200 & 0x7F800000) != 2139095040 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+out+4]
        vmovss  dword ptr [rsp+1E0h+var_190], xmm0
      }
      if ( (v201 & 0x7F800000) != 2139095040 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0E0h+out+8]
          vmovss  dword ptr [rsp+1E0h+var_190], xmm0
        }
        if ( (v202 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0E0h+out+0Ch]
            vmovss  dword ptr [rsp+1E0h+var_190], xmm0
          }
          if ( (v203 & 0x7F800000) != 2139095040 )
            goto LABEL_95;
        }
      }
    }
    v112 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 266, ASSERT_TYPE_SANITY, "( !IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] )");
    goto LABEL_93;
  }
  __asm
  {
    vsubss  xmm1, xmm0, dword ptr [rdx+38h]
    vmovss  dword ptr [rbp+0E0h+v], xmm1
    vmovss  xmm2, dword ptr [r14+8]
    vsubss  xmm0, xmm2, dword ptr [rdx+3Ch]
    vmovss  dword ptr [rbp+0E0h+v+4], xmm0
    vmovss  xmm1, dword ptr [r14+0Ch]
    vsubss  xmm2, xmm1, dword ptr [rdx+40h]
    vmovss  dword ptr [rbp+0E0h+v+8], xmm2
  }
  QuatMultiply(p_m_quat, &v55->rotationOffsetInv, &out);
  RotatePoint((const vec3_t *)&v, &out, (vec3_t *)&v210);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+var_100]
    vaddss  xmm3, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rbp+0E0h+v], xmm3
    vmovss  xmm1, dword ptr [rbp+0E0h+var_100+4]
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+0E0h+v+4], xmm2
    vmovss  xmm0, dword ptr [rbp+0E0h+var_100+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+0E0h+v+8], xmm1
    vsubss  xmm0, xmm3, dword ptr [rdi+9Ch]
    vmovss  dword ptr [rbp+0E0h+var_100], xmm0
    vsubss  xmm4, xmm2, dword ptr [rdi+0A0h]
    vmovss  dword ptr [rbp+0E0h+var_100+4], xmm4
    vsubss  xmm3, xmm1, dword ptr [rdi+0A4h]
    vmovss  dword ptr [rbp+0E0h+var_100+8], xmm3
  }
  _R15 = &_RDI->m_values.origin;
  __asm
  {
    vmulss  xmm0, xmm0, xmm7
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [r15], xmm1
    vmulss  xmm2, xmm4, xmm7
    vaddss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [r15+4], xmm0
    vmulss  xmm1, xmm3, xmm7
    vaddss  xmm2, xmm1, dword ptr [rsi+0Ch]
    vmovss  dword ptr [r15+8], xmm2
    vmovss  xmm0, dword ptr [r14+10h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v171 & 0x7F800000) == 2139095040 )
    goto LABEL_113;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+14h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v172 & 0x7F800000) == 2139095040 )
    goto LABEL_113;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+18h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v173 & 0x7F800000) == 2139095040 )
    goto LABEL_113;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+1Ch]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v174 & 0x7F800000) == 2139095040 )
  {
LABEL_113:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( nextXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( nextXCamAnimationFrame->angleQuat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v175 & 0x7F800000) == 2139095040 )
    goto LABEL_114;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v176 & 0x7F800000) == 2139095040 )
    goto LABEL_114;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v177 & 0x7F800000) == 2139095040 )
    goto LABEL_114;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v178 & 0x7F800000) == 2139095040 )
  {
LABEL_114:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 233, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_quat )[0] ) && !IS_NAN( ( m_quat )[1] ) && !IS_NAN( ( m_quat )[2] ) && !IS_NAN( ( m_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_quat )[0] ) && !IS_NAN( ( m_quat )[1] ) && !IS_NAN( ( m_quat )[2] ) && !IS_NAN( ( m_quat )[3] )") )
      __debugbreak();
  }
  QuatMultiply(_R14 + 1, &_RDI->m_quat, &v210);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+var_100]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v179 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+var_100+4]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v180 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+var_100+8]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v181 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+var_F4]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v182 & 0x7F800000) == 2139095040 )
  {
LABEL_115:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 235, ASSERT_TYPE_SANITY, "( !IS_NAN( ( use_quat )[0] ) && !IS_NAN( ( use_quat )[1] ) && !IS_NAN( ( use_quat )[2] ) && !IS_NAN( ( use_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( use_quat )[0] ) && !IS_NAN( ( use_quat )[1] ) && !IS_NAN( ( use_quat )[2] ) && !IS_NAN( ( use_quat )[3] )") )
      __debugbreak();
  }
  _RCX = _RDI->m_xcam;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+28h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v183 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v184 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+30h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v185 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+34h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v186 & 0x7F800000) == 2139095040 )
  {
LABEL_116:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 236, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_xcam->rotationOffsetInv )[0] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[1] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[2] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_xcam->rotationOffsetInv )[0] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[1] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[2] ) && !IS_NAN( ( m_xcam->rotationOffsetInv )[3] )") )
      __debugbreak();
  }
  QuatMultiply(&v210, &_RDI->m_xcam->rotationOffsetInv, &v);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v187 & 0x7F800000) == 2139095040 )
    goto LABEL_117;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v188 & 0x7F800000) == 2139095040 )
    goto LABEL_117;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v189 & 0x7F800000) == 2139095040 )
    goto LABEL_117;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v190 & 0x7F800000) == 2139095040 )
  {
LABEL_117:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 238, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentXCamAnimationFrame->angleQuat )[0] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[1] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[2] ) && !IS_NAN( ( currentXCamAnimationFrame->angleQuat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+v]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v191 & 0x7F800000) == 2139095040 )
    goto LABEL_118;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+v+4]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v192 & 0x7F800000) == 2139095040 )
    goto LABEL_118;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+v+8]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v193 & 0x7F800000) == 2139095040 )
    goto LABEL_118;
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+var_E4]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v194 & 0x7F800000) == 2139095040 )
  {
LABEL_118:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 239, ASSERT_TYPE_SANITY, "( !IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( finalQuat )[0] ) && !IS_NAN( ( finalQuat )[1] ) && !IS_NAN( ( finalQuat )[2] ) && !IS_NAN( ( finalQuat )[3] )") )
      __debugbreak();
  }
  __asm { vmovss  dword ptr [rsp+1E0h+var_190], xmm7 }
  if ( (v195 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 240, ASSERT_TYPE_SANITY, "( !IS_NAN( weight ) )", (const char *)&queryFormat, "!IS_NAN( weight )") )
    __debugbreak();
  __asm { vmovaps xmm2, xmm7; frac }
  QuatSlerp(_RSI + 1, &v, *(float *)&_XMM2, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+out]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v196 & 0x7F800000) == 2139095040 )
    goto LABEL_87;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+out+4]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v197 & 0x7F800000) == 2139095040 )
    goto LABEL_87;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+out+8]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v198 & 0x7F800000) == 2139095040 )
    goto LABEL_87;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+out+0Ch]
    vmovss  dword ptr [rsp+1E0h+var_190], xmm0
  }
  if ( (v199 & 0x7F800000) == 2139095040 )
  {
LABEL_87:
    v112 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 242, ASSERT_TYPE_SANITY, "( !IS_NAN( ( interp_quat )[0] ) && !IS_NAN( ( interp_quat )[1] ) && !IS_NAN( ( interp_quat )[2] ) && !IS_NAN( ( interp_quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( interp_quat )[0] ) && !IS_NAN( ( interp_quat )[1] ) && !IS_NAN( ( interp_quat )[2] ) && !IS_NAN( ( interp_quat )[3] )");
LABEL_93:
    if ( v112 )
      __debugbreak();
  }
LABEL_95:
  QuatToAxis(&out, &_RDI->m_values.axis);
  if ( performTrace && _RDI->m_traceOriginValid )
  {
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v207, 1, 0);
    v207.m_isClutter = 1;
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v207, _RDI->m_traceIgnoreEntity, 1, 1, 0, 0, 1);
    __asm
    {
      vmovss  [rbp+0E0h+extendedData.startTolerance], xmm9
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rbp+0E0h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  [rbp+0E0h+extendedData.collisionBuffer], xmm9
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+0E0h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.contents = 8391313;
    extendedData.permitOutwardTrace = 0;
    extendedData.ignoreBodies = &v207;
    __asm { vmovss  xmm1, cs:__real@41200000; radius }
    ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, NULL, 0);
    if ( !ShapeSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera_xcam.cpp", 284, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    v142 = 3 * _RDI->m_localClientNum + 2;
    PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v142, ShapeSphere, &_RDI->m_traceOriginWorld, _R15, &quat_identity, &extendedData, &hit);
    Physics_ReleaseShape((Physics_WorldId)v142, ShapeSphere, 1);
    if ( hit.isValid )
    {
      __asm
      {
        vmovss  xmm6, [rbp+0E0h+hit.fraction]
        vcomiss xmm6, xmm8
      }
    }
    v144 = hkMemHeapAllocator();
    v207.m_ignoreBodies.m_size = 0;
    if ( v207.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v144, v207.m_ignoreBodies.m_data, 4, v207.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v207.m_ignoreBodies.m_data = NULL;
    v207.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v145 = hkMemHeapAllocator();
    v207.m_ignoreEntities.m_size = 0;
    if ( v207.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v145, v207.m_ignoreEntities.m_data, 8, v207.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  _RDI->m_values.apertureType = cameras[v205].apertureType;
  apertureType = cameras[v205].apertureType;
  if ( apertureType == XCAM_FOCAL_LENGTH_APERTURE )
  {
    __asm
    {
      vsubss  xmm3, xmm8, xmm7
      vmulss  xmm1, xmm3, dword ptr [rsi+24h]
      vmulss  xmm0, xmm7, dword ptr [r14+24h]
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rdi+80h], xmm1
      vmulss  xmm2, xmm3, dword ptr [rsi+28h]
      vmulss  xmm0, xmm7, dword ptr [r14+28h]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rdi+84h], xmm1
      vmulss  xmm2, xmm3, dword ptr [rsi+2Ch]
      vmulss  xmm0, xmm7, dword ptr [r14+2Ch]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rdi+88h], xmm1
    }
  }
  else if ( apertureType == XCAM_FOV_APERTURE )
  {
    __asm
    {
      vsubss  xmm0, xmm8, xmm7
      vmulss  xmm2, xmm0, dword ptr [rsi+20h]
      vmulss  xmm1, xmm7, dword ptr [r14+20h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+80h], xmm0
    }
  }
  _RDI->m_values.focusShiftMultiplier = cameras[v205].focusShiftMultiplier;
  _RDI->m_valuesValid = 1;
  _R11 = &v214;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
XCamData::Clear
==============
*/
void XCamData::Clear(XCamData *this)
{
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rcx], xmm0
  }
  this->m_origin.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovups xmmword ptr [rcx+0Ch], xmm0
  }
  this->m_xcam = NULL;
  this->m_startTime = -1;
  this->m_animTime = -1.0;
  this->m_subCamera = 30;
  this->m_forcedFrame = -1;
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rcx+3Ch], xmm0
  }
  this->m_traceOriginWorld.v[2] = vec3_origin.v[2];
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+4Ch]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm1, ymmword ptr [rcx+6Ch]
    vmovups ymmword ptr [rdx+20h], ymm1
  }
  outValues->focusShiftMultiplier = this->m_values.focusShiftMultiplier;
  return 1;
}

/*
==============
XCamData::Init
==============
*/
void XCamData::Init(XCamData *this, const XCam *xcam)
{
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rcx], xmm0
  }
  this->m_origin.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovups xmmword ptr [rcx+0Ch], xmm0
  }
  this->m_xcam = xcam;
  this->m_startTime = -1;
  this->m_animTime = -1.0;
  this->m_subCamera = 30;
  this->m_forcedFrame = -1;
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rcx+3Ch], xmm0
  }
  this->m_traceOriginWorld.v[2] = vec3_origin.v[2];
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

void __fastcall XCamData::SetAnimTime(XCamData *this, double animTime)
{
  __asm { vmovss  dword ptr [rcx+2Ch], xmm1 }
  this->m_startTime = -1;
}

/*
==============
XCamData::SetSceneTransform
==============
*/
void XCamData::SetSceneTransform(XCamData *this, const vec3_t *origin, const vec4_t *quat)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx]
    vmovsd  qword ptr [rcx], xmm0
  }
  this->m_origin.v[2] = origin->v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+0Ch], xmm0
  }
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
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx]
    vmovsd  qword ptr [rcx+3Ch], xmm0
  }
  this->m_traceOriginWorld.v[2] = worldOrigin->v[2];
  this->m_traceIgnoreEntity = ignoreEntity;
  this->m_traceOriginValid = 1;
}

