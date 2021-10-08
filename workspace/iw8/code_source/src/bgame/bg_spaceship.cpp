/*
==============
BgSpaceship::AngleBetweenVectors
==============
*/

double __fastcall BgSpaceship::AngleBetweenVectors(const vec3_t *v0, const vec3_t *v1)
{
  double result; 

  *(float *)&result = ?AngleBetweenVectors@BgSpaceship@@SAMAEBTvec3_t@@0@Z(v0, v1);
  return result;
}

/*
==============
BgSpaceship::AngleLerp
==============
*/

void __fastcall BgSpaceship::AngleLerp(const vec3_t *start, const vec3_t *end, const float fraction, vec3_t *outAngles)
{
  ?AngleLerp@BgSpaceship@@SAXAEBTvec3_t@@0MAEAT2@@Z(start, end, fraction, outAngles);
}

/*
==============
BgSpaceship::DeltaAxis
==============
*/

void __fastcall BgSpaceship::DeltaAxis(const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, tmat33_t<vec3_t> *outDeltaAxis)
{
  ?DeltaAxis@BgSpaceship@@SAXAEBT?$tmat33_t@Tvec3_t@@@@0AEAT2@@Z(start, end, outDeltaAxis);
}

/*
==============
BgSpaceship::AxisAngleToPerAngleVelocity
==============
*/

double __fastcall BgSpaceship::AxisAngleToPerAngleVelocity(const tmat33_t<vec3_t> *axis, const vec3_t *axisAngle, vec3_t *outVel)
{
  double result; 

  *(float *)&result = ?AxisAngleToPerAngleVelocity@BgSpaceship@@SAMAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEAT3@@Z(axis, axisAngle, outVel);
  return result;
}

/*
==============
BgSpaceship::DeltaAnglesToAxisAngleVelocity
==============
*/

void __fastcall BgSpaceship::DeltaAnglesToAxisAngleVelocity(const vec3_t *startAngles, const vec3_t *endAngles, const float frameTime, vec3_t *outAxisAngle)
{
  ?DeltaAnglesToAxisAngleVelocity@BgSpaceship@@SAXAEBTvec3_t@@0MAEAT2@@Z(startAngles, endAngles, frameTime, outAxisAngle);
}

/*
==============
BgSpaceship::AxisLerp
==============
*/

void __fastcall BgSpaceship::AxisLerp(const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, const float fraction, tmat33_t<vec3_t> *outAxis)
{
  ?AxisLerp@BgSpaceship@@SAXAEBT?$tmat33_t@Tvec3_t@@@@0MAEAT2@@Z(start, end, fraction, outAxis);
}

/*
==============
BgSpaceship::AxisToAxisAngle
==============
*/

double __fastcall BgSpaceship::AxisToAxisAngle(const tmat33_t<vec3_t> *axis, vec3_t *outAxisAngle)
{
  double result; 

  *(float *)&result = ?AxisToAxisAngle@BgSpaceship@@SAMAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(axis, outAxisAngle);
  return result;
}

/*
==============
BgSpaceship::AxisAngleToAngles
==============
*/

void __fastcall BgSpaceship::AxisAngleToAngles(const float angle, const vec3_t *axis, vec3_t *outAngles)
{
  ?AxisAngleToAngles@BgSpaceship@@SAXMAEBTvec3_t@@AEAT2@@Z(angle, axis, outAngles);
}

/*
==============
BgSpaceship::AngleBetweenVectors
==============
*/
float BgSpaceship::AngleBetweenVectors(const vec3_t *v0, const vec3_t *v1)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm4, xmm1; val
    vmovss  xmm1, cs:__real@bf800000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@42652ee0 }
  return *(float *)&_XMM0;
}

/*
==============
BgSpaceship::AngleLerp
==============
*/

void __fastcall BgSpaceship::AngleLerp(const vec3_t *start, const vec3_t *end, double fraction, vec3_t *outAngles)
{
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  AnglesToQuat(start, &quat);
  AnglesToQuat(end, &to);
  __asm { vmovaps xmm2, xmm6; frac }
  QuatSlerp(&quat, &to, *(float *)&_XMM2, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, outAngles);
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
}

/*
==============
BgSpaceship::AxisAngleToAngles
==============
*/

void __fastcall BgSpaceship::AxisAngleToAngles(double angle, const vec3_t *axis, vec3_t *outAngles)
{
  vec4_t quat; 
  tmat33_t<vec3_t> axisa; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  AngleRadAxisToQuat(*(float *)&_XMM0, axis, &quat);
  QuatToAxis(&quat, &axisa);
  AxisToAngles(&axisa, outAngles);
}

/*
==============
BgSpaceship::AxisAngleToPerAngleVelocity
==============
*/
float BgSpaceship::AxisAngleToPerAngleVelocity(const tmat33_t<vec3_t> *axis, const vec3_t *axisAngle, vec3_t *outVel)
{
  __asm
  {
    vmovss  xmm3, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+28h+var_18], xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovaps [rsp+28h+var_28], xmm7
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm6, xmm3, xmm2
    vmulss  xmm0, xmm6, dword ptr [rcx]
    vmulss  xmm4, xmm4, xmm2
    vmulss  xmm1, xmm4, dword ptr [rcx+4]
    vmulss  xmm5, xmm5, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rcx+8]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm7
    vmovss  dword ptr [r8+8], xmm2
    vmulss  xmm0, xmm6, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm4, dword ptr [rcx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rcx+14h]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, xmm7
    vmovss  dword ptr [r8], xmm3
    vmulss  xmm1, xmm6, dword ptr [rcx+18h]
    vmulss  xmm2, xmm4, dword ptr [rcx+1Ch]
    vmovaps xmm6, [rsp+28h+var_18]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm5, dword ptr [rcx+20h]
    vaddss  xmm1, xmm3, xmm2
    vmulss  xmm3, xmm1, xmm7
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+28h+var_28]
    vmovss  dword ptr [r8+4], xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
BgSpaceship::AxisLerp
==============
*/

void __fastcall BgSpaceship::AxisLerp(const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, double fraction, tmat33_t<vec3_t> *outAxis)
{
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  AxisToQuat(start, &out);
  AxisToQuat(end, &to);
  __asm { vmovaps xmm2, xmm6; frac }
  QuatSlerp(&out, &to, *(float *)&_XMM2, &result);
  QuatToAxis(&result, outAxis);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
BgSpaceship::AxisToAxisAngle
==============
*/
float BgSpaceship::AxisToAxisAngle(const tmat33_t<vec3_t> *axis, vec3_t *outAxisAngle)
{
  float outRadians; 

  MatrixToAngleRadAxis(axis, outAxisAngle, &outRadians);
  __asm
  {
    vmovss  xmm0, [rsp+28h+outRadians]
    vmulss  xmm0, xmm0, cs:__real@42652ee0
  }
  return *(float *)&_XMM0;
}

/*
==============
BgSpaceship::DeltaAnglesToAxisAngleVelocity
==============
*/

void __fastcall BgSpaceship::DeltaAnglesToAxisAngleVelocity(const vec3_t *startAngles, const vec3_t *endAngles, double frameTime, vec3_t *outAxisAngle)
{
  char v10; 
  char v11; 
  float outRadians; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> matrix; 

  __asm { vmovaps [rsp+0F8h+var_18], xmm6 }
  _RDI = outAxisAngle;
  __asm { vmovaps xmm6, xmm2 }
  AnglesToAxis(startAngles, &axis);
  AnglesToAxis(endAngles, &in2);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&out, &in2, &matrix);
  MatrixToAngleRadAxis(&matrix, _RDI, &outRadians);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 | v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_spaceship.cpp", 149, ASSERT_TYPE_ASSERT, "(frameTime > 0.0f)", (const char *)&queryFormat, "frameTime > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+outRadians]
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vdivss  xmm2, xmm1, xmm6
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vmovaps xmm6, [rsp+0F8h+var_18]
  }
}

/*
==============
BgSpaceship::DeltaAxis
==============
*/
void BgSpaceship::DeltaAxis(const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, tmat33_t<vec3_t> *outDeltaAxis)
{
  tmat33_t<vec3_t> out; 

  MatrixTranspose(start, &out);
  MatrixMultiply(&out, end, outDeltaAxis);
}

