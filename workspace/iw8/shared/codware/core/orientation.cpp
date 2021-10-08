/*
==============
ScaledOrientationPlaneToWorldPlane
==============
*/

void __fastcall ScaledOrientationPlaneToWorldPlane(const orientation_t *orient, float scale, const vec4_t *plane, vec4_t *out)
{
  ?ScaledOrientationPlaneToWorldPlane@@YAXPEBUorientation_t@@MAEBTvec4_t@@AEAT2@@Z(orient, scale, plane, out);
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/

void __fastcall OrientationPlaneFromWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  ?OrientationPlaneFromWorldPlane@@YAXPEBUorientation_t@@AEBTvec4_t@@AEAT2@@Z(orient, plane, out);
}

/*
==============
OrientationIsOrthogonal
==============
*/

bool __fastcall OrientationIsOrthogonal(const orientation_t *orient)
{
  return ?OrientationIsOrthogonal@@YA_NAEBUorientation_t@@@Z(orient);
}

/*
==============
OrientationDirToWorldDir
==============
*/

void __fastcall OrientationDirToWorldDir(const orientation_t *orient, const dvec3_t *dir, dvec3_t *out)
{
  ?OrientationDirToWorldDir@@YAXPEBUorientation_t@@AEBTdvec3_t@@AEAT2@@Z(orient, dir, out);
}

/*
==============
OrientationInvert
==============
*/

void __fastcall OrientationInvert(const orientation_t *orient, orientation_t *out)
{
  ?OrientationInvert@@YAXPEBUorientation_t@@PEAU1@@Z(orient, out);
}

/*
==============
OrientationEqualEpsilon
==============
*/

bool __fastcall OrientationEqualEpsilon(const orientation_t *orient1, const orientation_t *orient2)
{
  return ?OrientationEqualEpsilon@@YA_NAEBUorientation_t@@0@Z(orient1, orient2);
}

/*
==============
ScaledOrientationPosFromWorldPos
==============
*/

void __fastcall ScaledOrientationPosFromWorldPos(const orientation_t *orient, float scale, const vec3_t *pos, vec3_t *out)
{
  ?ScaledOrientationPosFromWorldPos@@YAXPEBUorientation_t@@MAEBTvec3_t@@AEAT2@@Z(orient, scale, pos, out);
}

/*
==============
OrientationPosToWorldPos
==============
*/

void __fastcall OrientationPosToWorldPos(const orientation_t *orient, const dvec3_t *pos, dvec3_t *out)
{
  ?OrientationPosToWorldPos@@YAXPEBUorientation_t@@AEBTdvec3_t@@AEAT2@@Z(orient, pos, out);
}

/*
==============
OrientationPosToWorldPos
==============
*/

vec3_t *__fastcall OrientationPosToWorldPos(vec3_t *result, const orientation_t *orient, const vec3_t *pos)
{
  return ?OrientationPosToWorldPos@@YA?ATvec3_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, pos);
}

/*
==============
OrientationDirToWorldDir
==============
*/

void __fastcall OrientationDirToWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  ?OrientationDirToWorldDir@@YAXPEBUorientation_t@@AEBTvec3_t@@AEAT2@@Z(orient, dir, out);
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/

void __fastcall OrientationPlaneToWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  ?OrientationPlaneToWorldPlane@@YAXPEBUorientation_t@@AEBTvec4_t@@AEAT2@@Z(orient, plane, out);
}

/*
==============
OrientationPosFromWorldPos
==============
*/

vec3_t *__fastcall OrientationPosFromWorldPos(vec3_t *result, const orientation_t *orient, const vec3_t *pos)
{
  return ?OrientationPosFromWorldPos@@YA?ATvec3_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, pos);
}

/*
==============
OrientationDirFromWorldDir
==============
*/

vec3_t *__fastcall OrientationDirFromWorldDir(vec3_t *result, const orientation_t *orient, const vec3_t *dir)
{
  return ?OrientationDirFromWorldDir@@YA?ATvec3_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, dir);
}

/*
==============
OrientationPosFromWorldPos
==============
*/

void __fastcall OrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  ?OrientationPosFromWorldPos@@YAXPEBUorientation_t@@AEBTvec3_t@@AEAT2@@Z(orient, pos, out);
}

/*
==============
OrientationPosToWorldPos
==============
*/

void __fastcall OrientationPosToWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  ?OrientationPosToWorldPos@@YAXPEBUorientation_t@@AEBTvec3_t@@AEAT2@@Z(orient, pos, out);
}

/*
==============
OrientationHPosToWorldHPos
==============
*/

void __fastcall OrientationHPosToWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  ?OrientationHPosToWorldHPos@@YAXPEBUorientation_t@@AEBTvec4_t@@AEAT2@@Z(orient, pos, out);
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/

void __fastcall ScaledOrientationPosToWorldPos(const orientation_t *orient, long double scale, const dvec3_t *pos, dvec3_t *out)
{
  ?ScaledOrientationPosToWorldPos@@YAXPEBUorientation_t@@NAEBTdvec3_t@@AEAT2@@Z(orient, scale, pos, out);
}

/*
==============
OrientationConcatenate
==============
*/

void __fastcall OrientationConcatenate(const orientation_t *orFirst, const orientation_t *orSecond, orientation_t *out)
{
  ?OrientationConcatenate@@YAXPEBUorientation_t@@0PEAU1@@Z(orFirst, orSecond, out);
}

/*
==============
OrientationDirFromWorldDir
==============
*/

void __fastcall OrientationDirFromWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  ?OrientationDirFromWorldDir@@YAXPEBUorientation_t@@AEBTvec3_t@@AEAT2@@Z(orient, dir, out);
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/

void __fastcall ScaledOrientationPosToWorldPos(const orientation_t *orient, float scale, const vec3_t *pos, vec3_t *out)
{
  ?ScaledOrientationPosToWorldPos@@YAXPEBUorientation_t@@MAEBTvec3_t@@AEAT2@@Z(orient, scale, pos, out);
}

/*
==============
OrientationHPosToWorldHPos
==============
*/

vec4_t *__fastcall OrientationHPosToWorldHPos(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  return ?OrientationHPosToWorldHPos@@YA?ATvec4_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, pos);
}

/*
==============
OrientationHPosFromWorldHPos
==============
*/

void __fastcall OrientationHPosFromWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  ?OrientationHPosFromWorldHPos@@YAXPEBUorientation_t@@AEBTvec4_t@@AEAT2@@Z(orient, pos, out);
}

/*
==============
OrientationDirToWorldDir
==============
*/

vec3_t *__fastcall OrientationDirToWorldDir(vec3_t *result, const orientation_t *orient, const vec3_t *dir)
{
  return ?OrientationDirToWorldDir@@YA?ATvec3_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, dir);
}

/*
==============
OrientationConcatenate
==============
*/

orientation_t *__fastcall OrientationConcatenate(orientation_t *result, const orientation_t *orFirst, const orientation_t *orSecond)
{
  return ?OrientationConcatenate@@YA?AUorientation_t@@AEBU1@0@Z(result, orFirst, orSecond);
}

/*
==============
ScaledOrientationPlaneFromWorldPlane
==============
*/

void __fastcall ScaledOrientationPlaneFromWorldPlane(const orientation_t *orient, float scale, const vec4_t *plane, vec4_t *out)
{
  ?ScaledOrientationPlaneFromWorldPlane@@YAXPEBUorientation_t@@MAEBTvec4_t@@AEAT2@@Z(orient, scale, plane, out);
}

/*
==============
ScaledXYZOrientationPosToWorldPos
==============
*/

void __fastcall ScaledXYZOrientationPosToWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  ?ScaledXYZOrientationPosToWorldPos@@YAXPEBUorientation_t@@AEBTvec3_t@@1AEAT2@@Z(orient, scaleXYZ, pos, out);
}

/*
==============
ScaledXYZOrientationPosFromWorldPos
==============
*/

void __fastcall ScaledXYZOrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  ?ScaledXYZOrientationPosFromWorldPos@@YAXPEBUorientation_t@@AEBTvec3_t@@1AEAT2@@Z(orient, scaleXYZ, pos, out);
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/

void __fastcall OrientationPlaneToWorldPlane(const orientation_t *orient, const dvec4_t *plane, dvec4_t *out)
{
  ?OrientationPlaneToWorldPlane@@YAXPEBUorientation_t@@AEBTdvec4_t@@AEAT2@@Z(orient, plane, out);
}

/*
==============
OrientationHPosFromWorldHPos
==============
*/

vec4_t *__fastcall OrientationHPosFromWorldHPos(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  return ?OrientationHPosFromWorldHPos@@YA?ATvec4_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, pos);
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/

vec4_t *__fastcall OrientationPlaneToWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *plane)
{
  return ?OrientationPlaneToWorldPlane@@YA?ATvec4_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, plane);
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/

vec4_t *__fastcall OrientationPlaneFromWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  return ?OrientationPlaneFromWorldPlane@@YA?ATvec4_t@@PEBUorientation_t@@AEBT1@@Z(result, orient, pos);
}

/*
==============
OrientationDelta
==============
*/

void __fastcall OrientationDelta(const orientation_t *orSrc, const orientation_t *orDst, orientation_t *orDelta)
{
  ?OrientationDelta@@YAXPEBUorientation_t@@0PEAU1@@Z(orSrc, orDst, orDelta);
}

/*
==============
OrientationIsOrthogonal
==============
*/
bool OrientationIsOrthogonal(const orientation_t *orient)
{
  char v5; 

  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  return v5;
}

/*
==============
OrientationPosToWorldPos
==============
*/
void OrientationPosToWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  char v9; 

  _RSI = out;
  _RBX = orient;
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 24, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RBX->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 25, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vaddss  xmm3, xmm1, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+18h]
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rbx+24h]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vaddss  xmm3, xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  xmm2, dword ptr [rbx+28h]
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm2, dword ptr [rbx+14h]
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+20h]
    vaddss  xmm3, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
OrientationPosToWorldPos
==============
*/
void OrientationPosToWorldPos(const orientation_t *orient, const dvec3_t *pos, dvec3_t *out)
{
  char v9; 

  _RSI = out;
  _RBX = orient;
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 33, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RBX->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 34, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm2, xmm0, qword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+18h]
    vcvtss2sd xmm1, xmm1, xmm1
    vaddsd  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbx+24h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm2, xmm0, qword ptr [rdi+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, qword ptr [rdi+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm0
    vmovsd  qword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rbx+4]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm3, xmm1, qword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vaddsd  xmm4, xmm3, xmm0
    vmovss  xmm0, dword ptr [rbx+28h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rdi+10h]
    vaddsd  xmm3, xmm4, xmm2
    vaddsd  xmm2, xmm3, xmm1
    vmovsd  qword ptr [rsi+8], xmm2
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  xmm1, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+20h]
    vcvtss2sd xmm1, xmm1, xmm1
    vaddsd  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm2, xmm0, qword ptr [rdi+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, qword ptr [rdi+10h]
    vaddsd  xmm3, xmm4, xmm2
    vaddsd  xmm2, xmm3, xmm0
    vmovsd  qword ptr [rsi+10h], xmm2
  }
}

/*
==============
OrientationDirToWorldDir
==============
*/
void OrientationDirToWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  char v9; 

  _RSI = out;
  _RDI = orient;
  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 42, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 43, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+24h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+20h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
OrientationDirToWorldDir
==============
*/
void OrientationDirToWorldDir(const orientation_t *orient, const dvec3_t *dir, dvec3_t *out)
{
  char v9; 

  _RSI = out;
  _RDI = orient;
  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 51, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 52, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal(*orient) )", "%s", "OrientationIsOrthogonal(*orient)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+24h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  xmm1, dword ptr [rdi+10h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+28h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rsi+8], xmm2
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  xmm1, dword ptr [rdi+14h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rsi+10h], xmm2
  }
}

/*
==============
OrientationHPosToWorldHPos
==============
*/
void OrientationHPosToWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  char v10; 

  _RSI = out;
  _RDI = orient;
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 60, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 61, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+4]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+24h]
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rdi+10h]
    vmulss  xmm3, xmm2, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm2, dword ptr [rdi+1Ch]
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm1, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [rdi+14h]
    vmulss  xmm3, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rdi+20h]
    vmulss  xmm0, xmm1, dword ptr [rbx+4]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vmulss  xmm1, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rsi+8], xmm0
  }
  _RSI->v[3] = pos->v[3];
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
void OrientationPlaneToWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  _RBX = out;
  _RSI = orient;
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 70, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirToWorldDir(_RSI, (const vec3_t *)plane, (vec3_t *)_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rbx+0Ch], xmm3
  }
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
void OrientationPlaneToWorldPlane(const orientation_t *orient, const dvec4_t *plane, dvec4_t *out)
{
  char v21; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RSI = out;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
  }
  _RBX = orient;
  __asm
  {
    vmovaps [rsp+98h+var_58], xmm9
    vmovaps [rsp+98h+var_68], xmm10
  }
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 78, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx+8]
    vcvtss2sd xmm8, xmm8, xmm8
    vcvtss2sd xmm9, xmm9, xmm9
    vcvtss2sd xmm10, xmm10, xmm10
  }
  if ( plane == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 51, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RBX->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 52, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal(*orient) )", "%s", "OrientationIsOrthogonal(*orient)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rbx+24h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rdi]
    vmulsd  xmm1, xmm0, qword ptr [rdi+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm7, xmm4, xmm1
    vmovsd  qword ptr [rsi], xmm7
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vmulsd  xmm1, xmm0, qword ptr [rdi+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm6, xmm4, xmm1
    vmovsd  qword ptr [rsi+8], xmm6
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  xmm1, dword ptr [rbx+20h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vaddsd  xmm4, xmm3, xmm2
    vmulsd  xmm2, xmm9, xmm6
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm9, [rsp+98h+var_58]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rdi+10h]
    vmulsd  xmm0, xmm8, xmm7
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, [rsp+98h+var_48]
    vaddsd  xmm5, xmm4, xmm1
    vmulsd  xmm1, xmm10, xmm5
    vmovaps xmm10, [rsp+98h+var_68]
    vaddsd  xmm3, xmm2, xmm0
    vmovsd  qword ptr [rsi+10h], xmm5
    vaddsd  xmm2, xmm3, xmm1
    vaddsd  xmm0, xmm2, qword ptr [rdi+18h]
    vmovsd  qword ptr [rsi+18h], xmm0
  }
}

/*
==============
OrientationPosFromWorldPos
==============
*/
void OrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  char v10; 

  _RSI = out;
  _RDI = pos;
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 90, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 91, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm5, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm3, xmm1, dword ptr [rbx+4]
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+28h]
    vmulss  xmm0, xmm5, dword ptr [rbx+24h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+2Ch]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+8], xmm0
  }
}

/*
==============
OrientationDirFromWorldDir
==============
*/
void OrientationDirFromWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  char v9; 

  _RSI = out;
  _RDI = orient;
  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 104, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 105, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  xmm0, dword ptr [rdi+24h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
OrientationHPosFromWorldHPos
==============
*/
void OrientationHPosFromWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  char v9; 

  _RBP = out;
  _RSI = pos;
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 116, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm1, xmm2, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm5, xmm0, xmm1
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm3, xmm0, xmm1
    vmulss  xmm1, xmm2, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbp+4], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+28h]
    vmulss  xmm0, xmm5, dword ptr [rbx+24h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+2Ch]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbp+8], xmm0
  }
  _RBP->v[3] = _RSI->v[3];
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/
void OrientationPlaneFromWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  _RDI = out;
  _RBX = plane;
  _RSI = orient;
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 189, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirFromWorldDir(_RSI, (const vec3_t *)_RBX, (vec3_t *)_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
}

/*
==============
OrientationConcatenate
==============
*/
void OrientationConcatenate(const orientation_t *orFirst, const orientation_t *orSecond, orientation_t *out)
{
  if ( out == orFirst && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 130, ASSERT_TYPE_SANITY, "( out != orFirst )", "%s", "out != orFirst") )
    __debugbreak();
  if ( out == orSecond && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 131, ASSERT_TYPE_SANITY, "( out != orSecond )", "%s", "out != orSecond") )
    __debugbreak();
  OrientationDirToWorldDir(orSecond, orFirst->axis.m, out->axis.m);
  OrientationDirToWorldDir(orSecond, &orFirst->axis.m[1], &out->axis.m[1]);
  OrientationDirToWorldDir(orSecond, &orFirst->axis.m[2], &out->axis.m[2]);
  OrientationPosToWorldPos(orSecond, &orFirst->origin, &out->origin);
}

/*
==============
OrientationConcatenate
==============
*/
orientation_t *OrientationConcatenate(orientation_t *result, const orientation_t *orFirst, const orientation_t *orSecond)
{
  OrientationConcatenate(orFirst, orSecond, result);
  return result;
}

/*
==============
OrientationDelta
==============
*/
void OrientationDelta(const orientation_t *orSrc, const orientation_t *orDst, orientation_t *orDelta)
{
  char v20; 
  orientation_t orFirst; 
  char v64; 
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
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps [rsp+118h+var_A8], xmm14
  }
  _RBX = orSrc;
  *(double *)&_XMM0 = MatrixDeterminant(&orSrc->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 158, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm11, dword ptr [rbx+0Ch]
    vmovss  xmm13, dword ptr [rbx+18h]
    vmovss  xmm9, dword ptr [rbx+1Ch]
    vmovss  xmm8, dword ptr [rbx+20h]
    vmovss  xmm14, dword ptr [rbx+24h]
    vmovss  xmm12, dword ptr [rbx+28h]
    vmovss  xmm10, dword ptr [rbx+2Ch]
    vxorps  xmm7, xmm0, xmm2
    vmovss  xmm0, dword ptr [rbx+4]
    vxorps  xmm5, xmm0, xmm2
    vxorps  xmm6, xmm1, xmm2
    vmulss  xmm2, xmm5, xmm3
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm0, xmm7, xmm11
    vmovss  dword ptr [rsp+118h+orFirst.axis+0Ch], xmm3
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rsp+118h+orFirst.origin], xmm2
    vmulss  xmm0, xmm7, xmm13
    vmulss  xmm1, xmm6, xmm8
    vmovss  dword ptr [rsp+118h+orFirst.axis+18h], xmm4
    vmulss  xmm4, xmm5, xmm9
    vaddss  xmm2, xmm4, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsp+118h+orFirst.origin+4], xmm2
    vmulss  xmm3, xmm5, xmm12
    vmulss  xmm0, xmm7, xmm14
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm10
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsp+118h+orFirst.origin+8], xmm2
    vmovss  dword ptr [rsp+118h+orFirst.axis], xmm11
    vmovss  dword ptr [rsp+118h+orFirst.axis+4], xmm13
    vmovss  dword ptr [rsp+118h+orFirst.axis+8], xmm14
    vmovss  dword ptr [rsp+118h+orFirst.axis+10h], xmm9
    vmovss  dword ptr [rsp+118h+orFirst.axis+14h], xmm12
    vmovss  dword ptr [rsp+118h+orFirst.axis+1Ch], xmm8
    vmovss  dword ptr [rsp+118h+orFirst.axis+20h], xmm10
  }
  OrientationConcatenate(&orFirst, orDst, orDelta);
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+118h+var_A8]
  }
}

/*
==============
OrientationInvert
==============
*/
void OrientationInvert(const orientation_t *orient, orientation_t *out)
{
  char v9; 

  _RBX = orient;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = out;
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 158, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _RDI->axis.m[0].v[0] = _RBX->axis.m[0].v[0];
  _RDI->axis.m[0].v[1] = _RBX->axis.m[1].v[0];
  _RDI->axis.m[0].v[2] = _RBX->axis.m[2].v[0];
  _RDI->axis.m[1].v[0] = _RBX->axis.m[0].v[1];
  _RDI->axis.m[1].v[1] = _RBX->axis.m[1].v[1];
  _RDI->axis.m[1].v[2] = _RBX->axis.m[2].v[1];
  _RDI->axis.m[2].v[0] = _RBX->axis.m[0].v[2];
  _RDI->axis.m[2].v[1] = _RBX->axis.m[1].v[2];
  _RDI->axis.m[2].v[2] = _RBX->axis.m[2].v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+8]
    vxorps  xmm6, xmm0, xmm2
    vmovss  xmm0, dword ptr [rbx+4]
    vxorps  xmm4, xmm0, xmm2
    vmulss  xmm0, xmm6, dword ptr [rdi+0Ch]
    vxorps  xmm5, xmm1, xmm2
    vmulss  xmm2, xmm4, dword ptr [rdi+18h]
    vmulss  xmm1, xmm5, dword ptr [rdi+24h]
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm3, xmm6, dword ptr [rdi+10h]
    vmulss  xmm0, xmm4, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm5, dword ptr [rdi+28h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm2, xmm6, dword ptr [rdi+14h]
    vmulss  xmm1, xmm4, dword ptr [rdi+20h]
    vmulss  xmm0, xmm5, dword ptr [rdi+2Ch]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
OrientationEqualEpsilon
==============
*/
bool OrientationEqualEpsilon(const orientation_t *orient1, const orientation_t *orient2)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3a83126f
    vmovaps xmm2, xmm6; epsilon
  }
  if ( !VecNCompareCustomEpsilon(orient1->origin.v, orient2->origin.v, *(float *)&_XMM2, 3) )
    goto LABEL_6;
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( !VecNCompareCustomEpsilon((const float *)&orient1->axis, (const float *)&orient2->axis, *(float *)&_XMM2, 3) )
    goto LABEL_6;
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( !VecNCompareCustomEpsilon(orient1->axis.m[1].v, orient2->axis.m[1].v, *(float *)&_XMM2, 3) )
    goto LABEL_6;
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( VecNCompareCustomEpsilon(orient1->axis.m[2].v, orient2->axis.m[2].v, *(float *)&_XMM2, 3) )
  {
    result = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
LABEL_6:
    result = 0;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return result;
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/

void __fastcall ScaledOrientationPosToWorldPos(const orientation_t *orient, double scale, const vec3_t *pos, vec3_t *out)
{
  bool v10; 
  bool v11; 
  char v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = out;
  _RDI = pos;
  _RBX = orient;
  __asm { vmovaps xmm6, xmm1 }
  v10 = pos == out;
  if ( pos == out )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 197, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 198, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RBX->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 199, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm0, xmm3, dword ptr [rbx]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vmulss  xmm3, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rbx+28h]
    vmulss  xmm0, xmm1, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm1, xmm3, dword ptr [rbx+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+14h]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+20h]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm0, xmm3, dword ptr [rbx+8]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rsi+8], xmm0
  }
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/

void __fastcall ScaledOrientationPosToWorldPos(const orientation_t *orient, double scale, const dvec3_t *pos, dvec3_t *out)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = out;
  _RDI = orient;
  __asm { vmovaps xmm6, xmm1 }
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 208, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rdi+18h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, qword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+24h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, qword ptr [rbx+8]
    vaddsd  xmm4, xmm3, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rdi]
    vaddsd  xmm2, xmm4, xmm1
    vmulsd  xmm3, xmm2, xmm6
    vcvtss2sd xmm0, xmm0, xmm0
    vaddsd  xmm1, xmm3, xmm0
    vmovsd  qword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rdi+10h]
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vcvtss2sd xmm2, xmm2, xmm2
    vmulsd  xmm3, xmm2, qword ptr [rbx]
    vmovss  xmm2, dword ptr [rdi+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, qword ptr [rbx+8]
    vaddsd  xmm4, xmm3, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmulsd  xmm0, xmm2, qword ptr [rbx+10h]
    vmovss  xmm2, dword ptr [rdi+4]
    vaddsd  xmm1, xmm4, xmm0
    vmulsd  xmm3, xmm1, xmm6
    vcvtss2sd xmm2, xmm2, xmm2
    vaddsd  xmm0, xmm3, xmm2
    vmovsd  qword ptr [rsi+8], xmm0
    vmovss  xmm1, dword ptr [rdi+14h]
    vmovss  xmm0, dword ptr [rdi+20h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm3, xmm1, qword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm2, xmm0, qword ptr [rbx+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, qword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rdi+8]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm0
    vmulsd  xmm3, xmm2, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vcvtss2sd xmm1, xmm1, xmm1
    vaddsd  xmm0, xmm3, xmm1
    vmovsd  qword ptr [rsi+10h], xmm0
  }
}

/*
==============
ScaledOrientationPlaneToWorldPlane
==============
*/

void __fastcall ScaledOrientationPlaneToWorldPlane(const orientation_t *orient, double scale, const vec4_t *plane, vec4_t *out)
{
  bool v10; 
  bool v11; 
  char v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = out;
  _RDI = orient;
  __asm { vmovaps xmm6, xmm1 }
  v10 = plane == out;
  if ( plane == out )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 216, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 217, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 218, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  OrientationDirToWorldDir(_RDI, (const vec3_t *)plane, (vec3_t *)_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm6, dword ptr [rsi+0Ch]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx+0Ch], xmm1
  }
}

/*
==============
ScaledOrientationPosFromWorldPos
==============
*/

void __fastcall ScaledOrientationPosFromWorldPos(const orientation_t *orient, double scale, const vec3_t *pos, vec3_t *out)
{
  bool v12; 
  bool v13; 
  char v19; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RSI = out;
  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  _RDI = pos;
  __asm
  {
    vmovaps [rsp+78h+var_48], xmm8
    vmovaps xmm7, xmm1
  }
  v12 = pos == out;
  if ( pos == out )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 226, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm7, xmm0
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 227, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3f800000
    vsubss  xmm0, xmm0, xmm8
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 228, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm6, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm3, xmm1, dword ptr [rbx+4]
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm5, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm4, xmm8, xmm7
    vmovaps xmm7, [rsp+78h+var_38]
    vmovaps xmm8, [rsp+78h+var_48]
    vmulss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm0, xmm6, dword ptr [rbx+18h]
    vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rsi+4], xmm2
    vmulss  xmm0, xmm6, dword ptr [rbx+24h]
    vmulss  xmm1, xmm3, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+78h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+2Ch]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
ScaledOrientationPlaneFromWorldPlane
==============
*/

void __fastcall ScaledOrientationPlaneFromWorldPlane(const orientation_t *orient, double scale, const vec4_t *plane, vec4_t *out)
{
  bool v10; 
  bool v11; 
  char v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = out;
  _RBX = plane;
  _RDI = orient;
  __asm { vmovaps xmm6, xmm1 }
  v10 = plane == out;
  if ( plane == out )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 244, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 245, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 246, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  OrientationDirFromWorldDir(_RDI, (const vec3_t *)_RBX, (vec3_t *)_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm0, xmm2, xmm3
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rsi+0Ch], xmm1
  }
}

/*
==============
ScaledXYZOrientationPosToWorldPos
==============
*/
void ScaledXYZOrientationPosToWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  bool v8; 
  bool v9; 
  char v14; 

  _RBP = out;
  _RBX = scaleXYZ;
  _RDI = orient;
  v8 = pos == out;
  if ( pos == out )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 254, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx]
  }
  if ( v8 )
    goto LABEL_15;
  __asm
  {
    vucomiss xmm0, dword ptr [rbx+4]
    vucomiss xmm0, dword ptr [rbx+8]
  }
  if ( v8 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 255, ASSERT_TYPE_SANITY, "( scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0 )", "%s", "scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0") )
      __debugbreak();
  }
  *(double *)&_XMM0 = MatrixDeterminant(&_RDI->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 256, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rdi+24h]
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm2, xmm3, dword ptr [rdi]
    vmovss  dword ptr [rbp+0], xmm2
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rdi+10h]
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rdi+28h]
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm2, xmm3, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4], xmm2
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rdi+14h]
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm2, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+8], xmm2
  }
}

/*
==============
ScaledXYZOrientationPosFromWorldPos
==============
*/
void ScaledXYZOrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  char v14; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx]
    vmovaps [rsp+68h+var_28], xmm6
  }
  _R14 = out;
  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  _RBP = pos;
  _RBX = scaleXYZ;
  __asm
  {
    vucomiss xmm0, dword ptr [rdx+4]
    vucomiss xmm0, dword ptr [rdx+8]
  }
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 266, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm7, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm5, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm6, xmm0, dword ptr [rdi+8]
    vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
    vmulss  xmm1, xmm5, dword ptr [rdi+10h]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+14h]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm0, dword ptr [rbx]
    vmovss  dword ptr [r14], xmm2
    vmulss  xmm1, xmm7, dword ptr [rdi+18h]
    vmulss  xmm0, xmm5, dword ptr [rdi+1Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+20h]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm0, xmm3
    vmovss  dword ptr [r14+4], xmm2
    vmulss  xmm1, xmm7, dword ptr [rdi+24h]
    vmulss  xmm0, xmm5, dword ptr [rdi+28h]
    vmovaps xmm7, [rsp+68h+var_38]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+2Ch]
    vmovaps xmm6, [rsp+68h+var_28]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm0, xmm4
    vmovss  dword ptr [r14+8], xmm2
  }
}

/*
==============
OrientationPosToWorldPos
==============
*/
vec3_t *OrientationPosToWorldPos(vec3_t *result, const orientation_t *orient, const vec3_t *pos)
{
  OrientationPosToWorldPos(orient, pos, result);
  return result;
}

/*
==============
OrientationDirToWorldDir
==============
*/
vec3_t *OrientationDirToWorldDir(vec3_t *result, const orientation_t *orient, const vec3_t *dir)
{
  OrientationDirToWorldDir(orient, dir, result);
  return result;
}

/*
==============
OrientationHPosToWorldHPos
==============
*/
vec4_t *OrientationHPosToWorldHPos(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  char v12; 
  vec4_t *v19; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = pos;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  _RDI = result;
  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 60, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 61, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rsi+0Ch]
    vmovss  xmm6, dword ptr [rsi+8]
    vmovss  xmm4, dword ptr [rsi]
    vmulss  xmm0, xmm7, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rsi+4]
    vmulss  xmm1, xmm4, dword ptr [rbx+0Ch]
  }
  v19 = _RDI;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+24h]
    vmulss  xmm1, xmm5, dword ptr [rbx+18h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm4, dword ptr [rbx+10h]
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbx+4]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm1, xmm5, dword ptr [rbx+1Ch]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbx+8]
    vmulss  xmm2, xmm4, dword ptr [rbx+14h]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm1, xmm5, dword ptr [rbx+20h]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+2Ch]
    vmovaps xmm6, [rsp+58h+var_18]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rdi+8], xmm1
  }
  return v19;
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
vec4_t *OrientationPlaneToWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *plane)
{
  vec4_t *v12; 

  _RBX = result;
  if ( plane == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 70, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirToWorldDir(orient, (const vec3_t *)plane, (vec3_t *)_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
  }
  v12 = _RBX;
  __asm
  {
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rbx+0Ch], xmm3
  }
  return v12;
}

/*
==============
OrientationPosFromWorldPos
==============
*/
vec3_t *OrientationPosFromWorldPos(vec3_t *result, const orientation_t *orient, const vec3_t *pos)
{
  char v10; 
  vec3_t *v19; 

  _RSI = pos;
  _RDI = result;
  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 90, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 91, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm5, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
  }
  v19 = _RDI;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm5, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+28h]
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm5, dword ptr [rbx+24h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+2Ch]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+8], xmm0
  }
  return v19;
}

/*
==============
OrientationDirFromWorldDir
==============
*/
vec3_t *OrientationDirFromWorldDir(vec3_t *result, const orientation_t *orient, const vec3_t *dir)
{
  OrientationDirFromWorldDir(orient, dir, result);
  return result;
}

/*
==============
OrientationHPosFromWorldHPos
==============
*/
vec4_t *OrientationHPosFromWorldHPos(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  char v11; 
  vec4_t *v22; 

  _RSI = result;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBP = pos;
  *(double *)&_XMM0 = MatrixDeterminant(&orient->axis);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 116, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbp+0Ch]
    vmulss  xmm1, xmm7, dword ptr [rbx]
    vmulss  xmm2, xmm7, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm6, xmm0, xmm1
    vmulss  xmm1, xmm7, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm4, xmm0, xmm2
    vmovss  xmm0, dword ptr [rbp+8]
    vmulss  xmm2, xmm4, dword ptr [rbx+10h]
  }
  v22 = _RSI;
  __asm
  {
    vsubss  xmm5, xmm0, xmm1
    vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, dword ptr [rbx+14h]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmulss  xmm1, xmm4, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [rbx+28h]
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+24h]
    vmovaps xmm6, [rsp+58h+var_18]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsi+0Ch], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+8], xmm0
  }
  return v22;
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/
vec4_t *OrientationPlaneFromWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  vec4_t *v12; 

  _RBX = pos;
  _RSI = orient;
  _RDI = result;
  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 189, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirFromWorldDir(_RSI, (const vec3_t *)_RBX, (vec3_t *)_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
  }
  v12 = _RDI;
  __asm
  {
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
  return v12;
}

