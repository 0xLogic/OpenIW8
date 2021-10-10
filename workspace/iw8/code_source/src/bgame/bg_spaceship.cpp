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
  double v2; 

  v2 = I_fclamp((float)((float)(v0->v[1] * v1->v[1]) + (float)(v0->v[0] * v1->v[0])) + (float)(v0->v[2] * v1->v[2]), -1.0, 1.0);
  return acosf_0(*(float *)&v2) * 57.295776;
}

/*
==============
BgSpaceship::AngleLerp
==============
*/
void BgSpaceship::AngleLerp(const vec3_t *start, const vec3_t *end, const float fraction, vec3_t *outAngles)
{
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  AnglesToQuat(start, &quat);
  AnglesToQuat(end, &to);
  QuatSlerp(&quat, &to, fraction, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, outAngles);
}

/*
==============
BgSpaceship::AxisAngleToAngles
==============
*/
void BgSpaceship::AxisAngleToAngles(const float angle, const vec3_t *axis, vec3_t *outAngles)
{
  vec4_t quat; 
  tmat33_t<vec3_t> axisa; 

  AngleRadAxisToQuat(angle * 0.017453292, axis, &quat);
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
  __int128 v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v10; 
  float v11; 
  float v12; 
  float result; 

  v3 = LODWORD(axisAngle->v[0]);
  v4 = axisAngle->v[1];
  v5 = axisAngle->v[2];
  v6 = v3;
  *(float *)&v6 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(v4 * v4)) + (float)(v5 * v5));
  _XMM7 = v6;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
  }
  v10 = *(float *)&v3 * (float)(1.0 / *(float *)&_XMM0);
  v11 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v12 = v5 * (float)(1.0 / *(float *)&_XMM0);
  outVel->v[2] = (float)((float)((float)(v11 * axis->m[0].v[1]) + (float)(v10 * axis->m[0].v[0])) + (float)(v12 * axis->m[0].v[2])) * *(float *)&v6;
  outVel->v[0] = (float)((float)((float)(v11 * axis->m[1].v[1]) + (float)(v10 * axis->m[1].v[0])) + (float)(v12 * axis->m[1].v[2])) * *(float *)&v6;
  result = *(float *)&v6;
  outVel->v[1] = (float)((float)((float)(v11 * axis->m[2].v[1]) + (float)(v10 * axis->m[2].v[0])) + (float)(v12 * axis->m[2].v[2])) * *(float *)&v6;
  return result;
}

/*
==============
BgSpaceship::AxisLerp
==============
*/
void BgSpaceship::AxisLerp(const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, const float fraction, tmat33_t<vec3_t> *outAxis)
{
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 

  AxisToQuat(start, &out);
  AxisToQuat(end, &to);
  QuatSlerp(&out, &to, fraction, &result);
  QuatToAxis(&result, outAxis);
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
  return outRadians * 57.295776;
}

/*
==============
BgSpaceship::DeltaAnglesToAxisAngleVelocity
==============
*/
void BgSpaceship::DeltaAnglesToAxisAngleVelocity(const vec3_t *startAngles, const vec3_t *endAngles, const float frameTime, vec3_t *outAxisAngle)
{
  float v6; 
  float v7; 
  float outRadians; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> matrix; 

  AnglesToAxis(startAngles, &axis);
  AnglesToAxis(endAngles, &in2);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&out, &in2, &matrix);
  MatrixToAngleRadAxis(&matrix, outAxisAngle, &outRadians);
  if ( frameTime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_spaceship.cpp", 149, ASSERT_TYPE_ASSERT, "(frameTime > 0.0f)", (const char *)&queryFormat, "frameTime > 0.0f") )
    __debugbreak();
  v6 = (float)(outRadians * 57.295776) / frameTime;
  v7 = v6 * outAxisAngle->v[1];
  outAxisAngle->v[0] = v6 * outAxisAngle->v[0];
  outAxisAngle->v[2] = v6 * outAxisAngle->v[2];
  outAxisAngle->v[1] = v7;
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

