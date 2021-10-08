/*
==============
Float4AABBLineSegmentIntersect
==============
*/

bool __fastcall Float4AABBLineSegmentIntersect(const float4 *aabbMin, const float4 *aabbMax, const float4 *lineSegPointA, const float4 *lineSegPointB)
{
  return ?Float4AABBLineSegmentIntersect@@YA_NAEBUfloat4@@000@Z(aabbMin, aabbMax, lineSegPointA, lineSegPointB);
}

/*
==============
DualQuatClear
==============
*/

void __fastcall DualQuatClear(tmat22_t<vec4_t> *dq)
{
  ?DualQuatClear@@YAXAEAT?$tmat22_t@Tvec4_t@@@@@Z(dq);
}

/*
==============
BoundsOverlapEpsilon2D
==============
*/

bool __fastcall BoundsOverlapEpsilon2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1, float epsilon)
{
  return ?BoundsOverlapEpsilon2D@@YA_NAEBTvec2_t@@000M@Z(mins0, maxs0, mins1, maxs1, epsilon);
}

/*
==============
MatrixTransposeTransformVector43
==============
*/

void __fastcall MatrixTransposeTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  ?MatrixTransposeTransformVector43@@YAXAEBTvec3_t@@AEBT?$tmat43_t@Tvec3_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
MatrixDeterminantT<dvec3_t,double>
==============
*/

long double __fastcall MatrixDeterminantT<dvec3_t,double>(const dvec3_t (*in)[3])
{
  return ??$MatrixDeterminantT@Tdvec3_t@@N@@YANAEAY02$$CBTdvec3_t@@@Z(in);
}

/*
==============
Vec3MinorAxis
==============
*/

int __fastcall Vec3MinorAxis(const vec3_t *dir)
{
  return ?Vec3MinorAxis@@YAHAEBTvec3_t@@@Z(dir);
}

/*
==============
RadiusFromBoundsSq
==============
*/

double __fastcall RadiusFromBoundsSq(const vec3_t *mins, const vec3_t *maxs)
{
  double result; 

  *(float *)&result = ?RadiusFromBoundsSq@@YAMAEBTvec3_t@@0@Z(mins, maxs);
  return result;
}

/*
==============
RadiusFromBounds
==============
*/

double __fastcall RadiusFromBounds(const vec3_t *mins, const vec3_t *maxs)
{
  double result; 

  *(float *)&result = ?RadiusFromBounds@@YAMAEBTvec3_t@@0@Z(mins, maxs);
  return result;
}

/*
==============
DMatrixDeterminant
==============
*/

long double __fastcall DMatrixDeterminant(const tmat33_t<dvec3_t> *in)
{
  return ?DMatrixDeterminant@@YANAEBT?$tmat33_t@Tdvec3_t@@@@@Z(in);
}

/*
==============
GetRotatedBounds
==============
*/

void __fastcall GetRotatedBounds(const vec3_t (*baseBounds)[2], const vec3_t *origin, const tmat33_t<vec3_t> *axis, vec3_t (*rotatedBounds)[2])
{
  ?GetRotatedBounds@@YAXAEAY01$$CBTvec3_t@@AEBT1@AEBT?$tmat33_t@Tvec3_t@@@@AEAY01T1@@Z(baseBounds, origin, axis, rotatedBounds);
}

/*
==============
QuatShortestArc
==============
*/

void __fastcall QuatShortestArc(const vec3_t *from, const vec3_t *to, vec4_t *result)
{
  ?QuatShortestArc@@YAXAEBTvec3_t@@0AEATvec4_t@@@Z(from, to, result);
}

/*
==============
MatrixTransformDir44
==============
*/

void __fastcall MatrixTransformDir44(const vec3_t *dir, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  ?MatrixTransformDir44@@YAXAEBTvec3_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEATvec4_t@@@Z(dir, mat, out);
}

/*
==============
PointToClosestAABBPoint
==============
*/

void __fastcall PointToClosestAABBPoint(const vec3_t *mins, const vec3_t *maxs, const vec3_t *point, vec3_t *outPointToClosestVec)
{
  ?PointToClosestAABBPoint@@YAXAEBTvec3_t@@00AEAT1@@Z(mins, maxs, point, outPointToClosestVec);
}

/*
==============
IntersectPlanes
==============
*/

bool __fastcall IntersectPlanes(const dvec4_t (*plane)[3], dvec3_t *xyz)
{
  return ?IntersectPlanes@@YA_NAEAY02$$CBTdvec4_t@@AEATdvec3_t@@@Z(plane, xyz);
}

/*
==============
MatrixCopy43
==============
*/

void __fastcall MatrixCopy43(const tmat43_t<vec3_t> *src, tmat43_t<vec3_t> *dst)
{
  ?MatrixCopy43@@YAXAEBT?$tmat43_t@Tvec3_t@@@@AEAT1@@Z(src, dst);
}

/*
==============
MatrixRotationX
==============
*/

void __fastcall MatrixRotationX(tmat33_t<vec3_t> *mat, float degrees)
{
  ?MatrixRotationX@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, degrees);
}

/*
==============
AnglesSubtract
==============
*/

void __fastcall AnglesSubtract(const vec2_t *v1, const vec2_t *v2, vec2_t *v3)
{
  ?AnglesSubtract@@YAXAEBTvec2_t@@0AEAT1@@Z(v1, v2, v3);
}

/*
==============
DualQuatAdd
==============
*/

void __fastcall DualQuatAdd(const tmat22_t<vec4_t> *a, const tmat22_t<vec4_t> *b, tmat22_t<vec4_t> *sum)
{
  ?DualQuatAdd@@YAXAEBT?$tmat22_t@Tvec4_t@@@@0AEAT1@@Z(a, b, sum);
}

/*
==============
SphereSphereIntersect
==============
*/

bool __fastcall SphereSphereIntersect(const vec3_t *center0, float radius0, const vec3_t *center1, float radius1)
{
  return ?SphereSphereIntersect@@YA_NAEBTvec3_t@@M0M@Z(center0, radius0, center1, radius1);
}

/*
==============
AxisCopy
==============
*/

void __fastcall AxisCopy(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  ?AxisCopy@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
EaseBack
==============
*/

double __fastcall EaseBack(float pct, float overshootScalar, float power, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseBack@@YAMMMM_N0@Z(pct, overshootScalar, power, easeIn, easeOut);
  return result;
}

/*
==============
AngleDelta
==============
*/

double __fastcall AngleDelta(const float angle1, const float angle2)
{
  double result; 

  *(float *)&result = ?AngleDelta@@YAMMM@Z(angle1, angle2);
  return result;
}

/*
==============
ConvexHullIntersectsSphere
==============
*/

bool __fastcall ConvexHullIntersectsSphere(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *sphereCenter, const float sphereRadius)
{
  return ?ConvexHullIntersectsSphere@@YA_NPEBTvec4_t@@IAEBTvec3_t@@M@Z(hullPlanes, numPlanes, sphereCenter, sphereRadius);
}

/*
==============
Axis43ToQuat
==============
*/

void __fastcall Axis43ToQuat(const tmat43_t<vec3_t> *mat, vec4_t *out)
{
  ?Axis43ToQuat@@YAXAEBT?$tmat43_t@Tvec3_t@@@@AEATvec4_t@@@Z(mat, out);
}

/*
==============
MatrixInverseDetT<vec3_t,float>
==============
*/

void __fastcall MatrixInverseDetT<vec3_t,float>(const vec3_t (*in)[3], const float determinant, vec3_t (*out)[3])
{
  ??$MatrixInverseDetT@Tvec3_t@@M@@YAXAEAY02$$CBTvec3_t@@MAEAY02T0@@Z(in, determinant, out);
}

/*
==============
PointInAABB
==============
*/

bool __fastcall PointInAABB(const vec3_t *_mins, const vec3_t *_maxs, const vec3_t *_point, const float eps)
{
  return ?PointInAABB@@YA_NAEBTvec3_t@@00M@Z(_mins, _maxs, _point, eps);
}

/*
==============
AddPointToBounds2D
==============
*/

void __fastcall AddPointToBounds2D(const vec2_t *v, vec2_t *mins, vec2_t *maxs)
{
  ?AddPointToBounds2D@@YAXAEBTvec2_t@@AEAT1@1@Z(v, mins, maxs);
}

/*
==============
AnglesSubtract
==============
*/

void __fastcall AnglesSubtract(const vec3_t *v1, const vec3_t *v2, vec3_t *v3)
{
  ?AnglesSubtract@@YAXAEBTvec3_t@@0AEAT1@@Z(v1, v2, v3);
}

/*
==============
ClosestApproachOfTwoSegments
==============
*/

void __fastcall ClosestApproachOfTwoSegments(const vec3_t *s1p0, const vec3_t *s1p1, const vec3_t *s2p0, const vec3_t *s2p1, vec3_t *outSeg2Point, float *outDistSq)
{
  ?ClosestApproachOfTwoSegments@@YAXAEBTvec3_t@@000AEAT1@PEAM@Z(s1p0, s1p1, s2p0, s2p1, outSeg2Point, outDistSq);
}

/*
==============
RadiusFromBounds2DSq
==============
*/

double __fastcall RadiusFromBounds2DSq(const vec2_t *mins, const vec2_t *maxs)
{
  double result; 

  *(float *)&result = ?RadiusFromBounds2DSq@@YAMAEBTvec2_t@@0@Z(mins, maxs);
  return result;
}

/*
==============
MatrixDeterminant
==============
*/

double __fastcall MatrixDeterminant(const tmat33_t<vec3_t> *in)
{
  double result; 

  *(float *)&result = ?MatrixDeterminant@@YAMAEBT?$tmat33_t@Tvec3_t@@@@@Z(in);
  return result;
}

/*
==============
DualQuatNormalize
==============
*/

void __fastcall DualQuatNormalize(tmat22_t<vec4_t> *dq)
{
  ?DualQuatNormalize@@YAXAEAT?$tmat22_t@Tvec4_t@@@@@Z(dq);
}

/*
==============
MatrixInverse44
==============
*/

void __fastcall MatrixInverse44(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst)
{
  ?MatrixInverse44@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(mat, dst);
}

/*
==============
DMatrixTranspose44
==============
*/

void __fastcall DMatrixTranspose44(const tmat44_t<dvec4_t> *in, tmat44_t<dvec4_t> *out)
{
  ?DMatrixTranspose44@@YAXAEBT?$tmat44_t@Tdvec4_t@@@@AEAT1@@Z(in, out);
}

/*
==============
PointInObb
==============
*/

bool __fastcall PointInObb(const vec3_t *v, const vec3_t *center, const vec3_t *halfSize, const tmat33_t<vec3_t> *axes)
{
  return ?PointInObb@@YA_NAEBTvec3_t@@00AEBT?$tmat33_t@Tvec3_t@@@@@Z(v, center, halfSize, axes);
}

/*
==============
QuatNlerp
==============
*/

void __fastcall QuatNlerp(const vec4_t *from, const vec4_t *to, float frac, vec4_t *result)
{
  ?QuatNlerp@@YAXAEBTvec4_t@@0MAEAT1@@Z(from, to, frac, result);
}

/*
==============
FastSinCos
==============
*/

void __fastcall FastSinCos(const float radians, float *s, float *c)
{
  ?FastSinCos@@YAXMPEAM0@Z(radians, s, c);
}

/*
==============
MatrixSet43
==============
*/

void __fastcall MatrixSet43(tmat43_t<vec3_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  ?MatrixSet43@@YAXAEAT?$tmat43_t@Tvec3_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M@Z(out, origin, axis, scale);
}

/*
==============
IntersectRayPlane
==============
*/

bool __fastcall IntersectRayPlane(const vec3_t *origin, const vec3_t *direction, const vec4_t *plane, float *t, vec3_t *outHitPoint)
{
  return ?IntersectRayPlane@@YA_NAEBTvec3_t@@0AEBTvec4_t@@AEAMAEAT1@@Z(origin, direction, plane, t, outHitPoint);
}

/*
==============
Scalar2020toLinear
==============
*/

double __fastcall Scalar2020toLinear(const float in)
{
  double result; 

  *(float *)&result = ?Scalar2020toLinear@@YAMM@Z(in);
  return result;
}

/*
==============
SnapPointToPlanes
==============
*/

void __fastcall SnapPointToPlanes(const vec4_t *planes, int planeCount, vec3_t *xyz, float snapGrid, float snapEpsilon)
{
  ?SnapPointToPlanes@@YAXQEBTvec4_t@@HAEATvec3_t@@MM@Z(planes, planeCount, xyz, snapGrid, snapEpsilon);
}

/*
==============
CartesianToPolar
==============
*/

void __fastcall CartesianToPolar(const vec2_t *cartesianCoords, float *outAngleInDegrees, float *outRadius)
{
  ?CartesianToPolar@@YAXAEIBTvec2_t@@PEAM1@Z(cartesianCoords, outAngleInDegrees, outRadius);
}

/*
==============
LinearSRGBtoLinear2020
==============
*/

void __fastcall LinearSRGBtoLinear2020(const vec3_t *in, vec3_t *out)
{
  ?LinearSRGBtoLinear2020@@YAXAEBTvec3_t@@AEAT1@@Z(in, out);
}

/*
==============
UnitQuatAndOriginToMatrix43
==============
*/

void __fastcall UnitQuatAndOriginToMatrix43(const vec4_t *quat, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  ?UnitQuatAndOriginToMatrix43@@YAXAEBTvec4_t@@AEBTvec3_t@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(quat, origin, result);
}

/*
==============
vectoangles
==============
*/

void __fastcall vectoangles(const vec3_t *vec, vec3_t *angles)
{
  ?vectoangles@@YAXAEBTvec3_t@@AEAT1@@Z(vec, angles);
}

/*
==============
MatrixDeterminant
==============
*/

double __fastcall MatrixDeterminant(const tmat44_t<vec4_t> *in)
{
  double result; 

  *(float *)&result = ?MatrixDeterminant@@YAMAEBT?$tmat44_t@Tvec4_t@@@@@Z(in);
  return result;
}

/*
==============
TriangleTextureGradient
==============
*/

bool __fastcall TriangleTextureGradient(const vec3_t (*pos)[3], const vec2_t (*texCoord)[3], vec3_t (*outTexGradient)[2])
{
  return ?TriangleTextureGradient@@YA_NAEAY02$$CBTvec3_t@@AEAY02$$CBTvec2_t@@AEAY01T1@@Z(pos, texCoord, outTexGradient);
}

/*
==============
EaseElastic
==============
*/

double __fastcall EaseElastic(float pct, float amplitude, float frequency, float fadeScalar, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseElastic@@YAMMMMM_N0@Z(pct, amplitude, frequency, fadeScalar, easeIn, easeOut);
  return result;
}

/*
==============
MatrixInverseDet
==============
*/

void __fastcall MatrixInverseDet(const tmat33_t<vec3_t> *in, const float determinant, tmat33_t<vec3_t> *out)
{
  ?MatrixInverseDet@@YAXAEBT?$tmat33_t@Tvec3_t@@@@MAEAT1@@Z(in, determinant, out);
}

/*
==============
VectorRotateAngles
==============
*/

void __fastcall VectorRotateAngles(const vec3_t *vIn, const vec3_t *vRotation, vec3_t *out)
{
  ?VectorRotateAngles@@YAXAEBTvec3_t@@0AEAT1@@Z(vIn, vRotation, out);
}

/*
==============
IntersectRayBox
==============
*/

bool __fastcall IntersectRayBox(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *boxOrigin, const vec3_t *boxHalfExt, const tmat33_t<vec3_t> *boxAxis, float *t)
{
  return ?IntersectRayBox@@YA_NAEBTvec3_t@@000AEBT?$tmat33_t@Tvec3_t@@@@AEAM@Z(rayOrigin, rayDir, boxOrigin, boxHalfExt, boxAxis, t);
}

/*
==============
Vec3MajorAxis
==============
*/

int __fastcall Vec3MajorAxis(const vec3_t *dir)
{
  return ?Vec3MajorAxis@@YAHAEBTvec3_t@@@Z(dir);
}

/*
==============
ScaleFromAxis
==============
*/

void __fastcall ScaleFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outUnscaledAxis, vec3_t *outScale)
{
  ?ScaleFromAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@AEATvec3_t@@@Z(axis, outUnscaledAxis, outScale);
}

/*
==============
MatrixSet44TransposedNonUniformScale
==============
*/

void __fastcall MatrixSet44TransposedNonUniformScale(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *scale)
{
  ?MatrixSet44TransposedNonUniformScale@@YAXAEAT?$tmat44_t@Tvec4_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@1@Z(out, origin, axis, scale);
}

/*
==============
AxisTransformVector
==============
*/

void __fastcall AxisTransformVector(const tmat33_t<vec3_t> *axes, const float x, const float y, const float z, vec3_t *out)
{
  ?AxisTransformVector@@YAXAEBT?$tmat33_t@Tvec3_t@@@@MMMAEATvec3_t@@@Z(axes, x, y, z, out);
}

/*
==============
ScalarLinearToSRGB
==============
*/

double __fastcall ScalarLinearToSRGB(const float in)
{
  double result; 

  *(float *)&result = ?ScalarLinearToSRGB@@YAMM@Z(in);
  return result;
}

/*
==============
SnapPointToIntersectingPlanes
==============
*/

void __fastcall SnapPointToIntersectingPlanes(const vec4_t (*planes)[3], vec3_t *xyz, float snapGrid, float snapEpsilon)
{
  ?SnapPointToIntersectingPlanes@@YAXAEAY02$$CBTvec4_t@@AEATvec3_t@@MM@Z(planes, xyz, snapGrid, snapEpsilon);
}

/*
==============
ObbOverlap
==============
*/

bool __fastcall ObbOverlap(const vec3_t *e0, const vec3_t *c0, const tmat33_t<vec3_t> *r0, const vec3_t *e1, const vec3_t *c1, const tmat33_t<vec3_t> *r1, bool fullTest)
{
  return ?ObbOverlap@@YA_NAEBTvec3_t@@0AEBT?$tmat33_t@Tvec3_t@@@@001_N@Z(e0, c0, r0, e1, c1, r1, fullTest);
}

/*
==============
Com_NoiseInit
==============
*/

void Com_NoiseInit(void)
{
  ?Com_NoiseInit@@YAXXZ();
}

/*
==============
MatrixRotationZRad
==============
*/

void __fastcall MatrixRotationZRad(tmat33_t<vec3_t> *mat, float radians)
{
  ?MatrixRotationZRad@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, radians);
}

/*
==============
BoundsOverlap2D
==============
*/

bool __fastcall BoundsOverlap2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1)
{
  return ?BoundsOverlap2D@@YA_NAEBTvec2_t@@000@Z(mins0, maxs0, mins1, maxs1);
}

/*
==============
MatrixVecMultiply
==============
*/

void __fastcall MatrixVecMultiply(const tmat44_t<vec4_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  ?MatrixVecMultiply@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEBTvec4_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
FastSinCosDouble
==============
*/

void __fastcall FastSinCosDouble(const long double radians, long double *psin, long double *pcos)
{
  ?FastSinCosDouble@@YAXNPEAN0@Z(radians, psin, pcos);
}

/*
==============
DMatrixVecMultiply
==============
*/

void __fastcall DMatrixVecMultiply(const tmat33_t<dvec3_t> *mulMat, const dvec3_t *mulVec, dvec3_t *solution)
{
  ?DMatrixVecMultiply@@YAXAEBT?$tmat33_t@Tdvec3_t@@@@AEBTdvec3_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
AddPointToBounds
==============
*/

void __fastcall AddPointToBounds(const vec3_t *v, vec3_t *mins, vec3_t *maxs)
{
  ?AddPointToBounds@@YAXAEBTvec3_t@@AEAT1@1@Z(v, mins, maxs);
}

/*
==============
MatrixTransformDir44
==============
*/

void __fastcall MatrixTransformDir44(const vec3_t *in1, const tmat44_t<vec4_t> *in2, vec3_t *out)
{
  ?MatrixTransformDir44@@YAXAEBTvec3_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
MatrixTransformPos44
==============
*/

void __fastcall MatrixTransformPos44(const vec3_t *pos, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  ?MatrixTransformPos44@@YAXAEBTvec3_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEATvec4_t@@@Z(pos, mat, out);
}

/*
==============
AxisTransformVec3
==============
*/

void __fastcall AxisTransformVec3(const tmat33_t<vec3_t> *axes, const vec3_t *vec, vec3_t *out)
{
  ?AxisTransformVec3@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEAT2@@Z(axes, vec, out);
}

/*
==============
AnglesToQuat
==============
*/

void __fastcall AnglesToQuat(const vec3_t *angles, vec4_t *quat)
{
  ?AnglesToQuat@@YAXAEBTvec3_t@@AEATvec4_t@@@Z(angles, quat);
}

/*
==============
PlaneFromPointsEx
==============
*/

bool __fastcall PlaneFromPointsEx(dvec4_t *plane, const dvec3_t *v0, const dvec3_t *v1, const dvec3_t *v2, long double degenerateEpsilon)
{
  return ?PlaneFromPointsEx@@YA_NAEATdvec4_t@@AEBTdvec3_t@@11N@Z(plane, v0, v1, v2, degenerateEpsilon);
}

/*
==============
BoundsOverlap
==============
*/

bool __fastcall BoundsOverlap(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1)
{
  return ?BoundsOverlap@@YA_NAEBTvec3_t@@000@Z(mins0, maxs0, mins1, maxs1);
}

/*
==============
MatrixRotationY
==============
*/

void __fastcall MatrixRotationY(tmat33_t<vec3_t> *mat, float degrees)
{
  ?MatrixRotationY@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, degrees);
}

/*
==============
DiffTrack
==============
*/

double __fastcall DiffTrack(float tgt, float cur, float rate, float deltaTime)
{
  double result; 

  *(float *)&result = ?DiffTrack@@YAMMMMM@Z(tgt, cur, rate, deltaTime);
  return result;
}

/*
==============
MatrixSet34Transposed
==============
*/

void __fastcall MatrixSet34Transposed(tmat34_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  ?MatrixSet34Transposed@@YAXAEAT?$tmat34_t@Tvec4_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M@Z(out, origin, axis, scale);
}

/*
==============
ExpandBoundsToWidth
==============
*/

void __fastcall ExpandBoundsToWidth(vec3_t *mins, vec3_t *maxs)
{
  ?ExpandBoundsToWidth@@YAXAEATvec3_t@@0@Z(mins, maxs);
}

/*
==============
IntersectRaySphereApprox
==============
*/

bool __fastcall IntersectRaySphereApprox(vec3_t *origin, vec3_t *direction, vec3_t *sphereCenter, float radius, float *t, vec3_t *outHitPoint)
{
  return ?IntersectRaySphereApprox@@YA_NTvec3_t@@00MAEAMAEAT1@@Z(origin, direction, sphereCenter, radius, t, outHitPoint);
}

/*
==============
EaseSine
==============
*/

double __fastcall EaseSine(float pct, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseSine@@YAMM_N0@Z(pct, easeIn, easeOut);
  return result;
}

/*
==============
ProjectPointOntoVector
==============
*/

void __fastcall ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  ?ProjectPointOntoVector@@YAXAEBTvec3_t@@00AEAT1@PEAM@Z(point, start, end, vProj, outDistFromStart);
}

/*
==============
MatrixTranspose
==============
*/

void __fastcall MatrixTranspose(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  ?MatrixTranspose@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
MatrixForViewer
==============
*/

void __fastcall MatrixForViewer(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  ?MatrixForViewer@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT?$tmat44_t@Tvec4_t@@@@@Z(origin, axis, mtx);
}

/*
==============
DMatrixVecMultiply
==============
*/

void __fastcall DMatrixVecMultiply(const tmat43_t<dvec3_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  ?DMatrixVecMultiply@@YAXAEBT?$tmat43_t@Tdvec3_t@@@@AEBTdvec4_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
DMatrixTranspose
==============
*/

void __fastcall DMatrixTranspose(const tmat33_t<dvec3_t> *in, tmat33_t<dvec3_t> *out)
{
  ?DMatrixTranspose@@YAXAEBT?$tmat33_t@Tdvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
IsContainedBy
==============
*/

bool __fastcall IsContainedBy(unsigned int numPlanes, const vec4_t *planes, const vec3_t *vertex)
{
  return ?IsContainedBy@@YA_NIPEBTvec4_t@@AEBTvec3_t@@@Z(numPlanes, planes, vertex);
}

/*
==============
MatrixInverseOrthogonal43
==============
*/

void __fastcall MatrixInverseOrthogonal43(const tmat43_t<vec3_t> *in, tmat43_t<vec3_t> *out)
{
  ?MatrixInverseOrthogonal43@@YAXAEBT?$tmat43_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
EasePower
==============
*/

double __fastcall EasePower(float pct, float power, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EasePower@@YAMMM_N0@Z(pct, power, easeIn, easeOut);
  return result;
}

/*
==============
AabbCylinderIntersect
==============
*/

bool __fastcall AabbCylinderIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *cylPoint, const vec3_t *cylDirection, const float cylRadius)
{
  return ?AabbCylinderIntersect@@YA_NAEBTvec3_t@@000M@Z(aabbMax, aabbMin, cylPoint, cylDirection, cylRadius);
}

/*
==============
AxisComponentsToQuat
==============
*/

void __fastcall AxisComponentsToQuat(const vec3_t *mat0, const vec3_t *mat1, const vec3_t *mat2, vec4_t *out)
{
  ?AxisComponentsToQuat@@YAXAEIBTvec3_t@@00AEATvec4_t@@@Z(mat0, mat1, mat2, out);
}

/*
==============
MatrixSet44NonUniformScale
==============
*/

void __fastcall MatrixSet44NonUniformScale(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *scale)
{
  ?MatrixSet44NonUniformScale@@YAXAEAT?$tmat44_t@Tvec4_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@1@Z(out, origin, axis, scale);
}

/*
==============
ConvexHullIntersectsAABB
==============
*/

bool __fastcall ConvexHullIntersectsAABB(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *AABBMins, const vec3_t *AABBMaxs)
{
  return ?ConvexHullIntersectsAABB@@YA_NPEBTvec4_t@@IAEBTvec3_t@@1@Z(hullPlanes, numPlanes, AABBMins, AABBMaxs);
}

/*
==============
QuatTransform
==============
*/

void __fastcall QuatTransform(const vec4_t *quat, const vec3_t *in, vec3_t *out)
{
  ?QuatTransform@@YAXAEBTvec4_t@@AEBTvec3_t@@AEAT2@@Z(quat, in, out);
}

/*
==============
DualQuatMad
==============
*/

void __fastcall DualQuatMad(const tmat22_t<vec4_t> *start, const float scale, const tmat22_t<vec4_t> *dir, tmat22_t<vec4_t> *result)
{
  ?DualQuatMad@@YAXAEBT?$tmat22_t@Tvec4_t@@@@M0AEAT1@@Z(start, scale, dir, result);
}

/*
==============
YawVectors2D
==============
*/

void __fastcall YawVectors2D(float yaw, vec2_t *forward, vec2_t *right)
{
  ?YawVectors2D@@YAXMPEATvec2_t@@0@Z(yaw, forward, right);
}

/*
==============
Vec3DistanceSqToSegment
==============
*/

double __fastcall Vec3DistanceSqToSegment(const vec3_t *pt, const vec3_t *segStart, const vec3_t *segDir, float segLen)
{
  double result; 

  *(float *)&result = ?Vec3DistanceSqToSegment@@YAMAEBTvec3_t@@00M@Z(pt, segStart, segDir, segLen);
  return result;
}

/*
==============
MatrixInverse
==============
*/

void __fastcall MatrixInverse(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  ?MatrixInverse@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
ClearBounds2D
==============
*/

void __fastcall ClearBounds2D(vec2_t *mins, vec2_t *maxs)
{
  ?ClearBounds2D@@YAXAEATvec2_t@@0@Z(mins, maxs);
}

/*
==============
IntersectTwoPlanes
==============
*/

bool __fastcall IntersectTwoPlanes(const vec4_t (*planes)[2], vec3_t *isectPoint, vec3_t *isectDir)
{
  return ?IntersectTwoPlanes@@YA_NAEAY01$$CBTvec4_t@@AEATvec3_t@@1@Z(planes, isectPoint, isectDir);
}

/*
==============
IntersectRaySphere
==============
*/

bool __fastcall IntersectRaySphere(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *center, const float radius, float *t)
{
  return ?IntersectRaySphere@@YA_NAEBTvec3_t@@00MAEAM@Z(rayOrigin, rayDir, center, radius, t);
}

/*
==============
Axis34ToQuat
==============
*/

void __fastcall Axis34ToQuat(const tmat34_t<vec4_t> *mat, vec4_t *out)
{
  ?Axis34ToQuat@@YAXAEBT?$tmat34_t@Tvec4_t@@@@AEATvec4_t@@@Z(mat, out);
}

/*
==============
AnglesNormalize360
==============
*/

void __fastcall AnglesNormalize360(const vec3_t *from, vec3_t *to)
{
  ?AnglesNormalize360@@YAXAEBTvec3_t@@AEAT1@@Z(from, to);
}

/*
==============
LinearTrack
==============
*/

double __fastcall LinearTrack(float tgt, float cur, float rate, float deltaTime)
{
  double result; 

  *(float *)&result = ?LinearTrack@@YAMMMMM@Z(tgt, cur, rate, deltaTime);
  return result;
}

/*
==============
SegmentToSegmentDistSq2D
==============
*/

double __fastcall SegmentToSegmentDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testStart, const vec2_t *testEnd)
{
  double result; 

  *(float *)&result = ?SegmentToSegmentDistSq2D@@YAMAEBTvec2_t@@000@Z(segStart, segEnd, testStart, testEnd);
  return result;
}

/*
==============
MatrixIdentity43
==============
*/

void __fastcall MatrixIdentity43(tmat43_t<vec3_t> *out)
{
  ?MatrixIdentity43@@YAXAEAT?$tmat43_t@Tvec3_t@@@@@Z(out);
}

/*
==============
MatrixIdentity44
==============
*/

void __fastcall MatrixIdentity44(tmat44_t<vec4_t> *out)
{
  ?MatrixIdentity44@@YAXAEAT?$tmat44_t@Tvec4_t@@@@@Z(out);
}

/*
==============
IntersectRayTri
==============
*/

bool __fastcall IntersectRayTri(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv, const float eps)
{
  return ?IntersectRayTri@@YA_NAEBTvec3_t@@0PEBT1@11PEAM22M@Z(orig, dir, vert1, vert2, vert3, pt, pu, pv, eps);
}

/*
==============
AngleRadAxisToQuat
==============
*/

void __fastcall AngleRadAxisToQuat(float radians, const vec3_t *axis, vec4_t *quat)
{
  ?AngleRadAxisToQuat@@YAXMAEBTvec3_t@@AEATvec4_t@@@Z(radians, axis, quat);
}

/*
==============
VecNCompareCustomEpsilon
==============
*/

bool __fastcall VecNCompareCustomEpsilon(const float *v0, const float *v1, float epsilon, int coordCount)
{
  return ?VecNCompareCustomEpsilon@@YA_NPEBM0MH@Z(v0, v1, epsilon, coordCount);
}

/*
==============
EaseLogarithmic
==============
*/

double __fastcall EaseLogarithmic(float pct, float logBase, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseLogarithmic@@YAMMM_N0@Z(pct, logBase, easeIn, easeOut);
  return result;
}

/*
==============
PlaneFromPoints
==============
*/

bool __fastcall PlaneFromPoints(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2, float degenerateEpsilon)
{
  return ?PlaneFromPoints@@YA_NAEATvec4_t@@AEBTvec3_t@@11M@Z(plane, v0, v1, v2, degenerateEpsilon);
}

/*
==============
ExpandBoundsRotated
==============
*/

void __fastcall ExpandBoundsRotated(const vec3_t *addedOrigin, const vec3_t *addedMins, const vec3_t *addedMaxs, const tmat33_t<vec3_t> *addedAxis, vec3_t *mins, vec3_t *maxs)
{
  ?ExpandBoundsRotated@@YAXAEBTvec3_t@@00AEBT?$tmat33_t@Tvec3_t@@@@AEAT1@2@Z(addedOrigin, addedMins, addedMaxs, addedAxis, mins, maxs);
}

/*
==============
ExpandBounds
==============
*/

void __fastcall ExpandBounds(const vec3_t *addedmins, const vec3_t *addedmaxs, vec3_t *mins, vec3_t *maxs)
{
  ?ExpandBounds@@YAXAEBTvec3_t@@0AEAT1@1@Z(addedmins, addedmaxs, mins, maxs);
}

/*
==============
vectosignedyaw
==============
*/

double __fastcall vectosignedyaw(const vec2_t *vec)
{
  double result; 

  *(float *)&result = ?vectosignedyaw@@YAMAEBTvec2_t@@@Z(vec);
  return result;
}

/*
==============
IntersectRaySphere
==============
*/

bool __fastcall IntersectRaySphere(const vec3_t *origin, const vec3_t *direction, const vec3_t *sphereCenter, float radius, float *t, vec3_t *outHitPoint)
{
  return ?IntersectRaySphere@@YA_NAEBTvec3_t@@00MAEAMAEAT1@@Z(origin, direction, sphereCenter, radius, t, outHitPoint);
}

/*
==============
DiffTrackAngle
==============
*/

double __fastcall DiffTrackAngle(float tgt, float cur, float rate, float deltaTime)
{
  double result; 

  *(float *)&result = ?DiffTrackAngle@@YAMMMMM@Z(tgt, cur, rate, deltaTime);
  return result;
}

/*
==============
FudgeFloat
==============
*/

double __fastcall FudgeFloat(float f, int lsbError, int lsbCount)
{
  double result; 

  *(float *)&result = ?FudgeFloat@@YAMMHH@Z(f, lsbError, lsbCount);
  return result;
}

/*
==============
MatrixTransformVector43
==============
*/

void __fastcall MatrixTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  ?MatrixTransformVector43@@YAXAEBTvec3_t@@AEBT?$tmat43_t@Tvec3_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
AngleRadBetween
==============
*/

double __fastcall AngleRadBetween(const vec3_t *a, const vec3_t *b)
{
  double result; 

  *(float *)&result = ?AngleRadBetween@@YAMAEBTvec3_t@@0@Z(a, b);
  return result;
}

/*
==============
AxisToAngles
==============
*/

void __fastcall AxisToAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  ?AxisToAngles@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(axis, angles);
}

/*
==============
PointToLineDistSq2D
==============
*/

double __fastcall PointToLineDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  double result; 

  *(float *)&result = ?PointToLineDistSq2D@@YAMAEBTvec2_t@@00@Z(point, start, end);
  return result;
}

/*
==============
MatrixMultiply34
==============
*/

void __fastcall MatrixMultiply34(const tmat34_t<vec4_t> *in1, const tmat34_t<vec4_t> *in2, tmat34_t<vec4_t> *out)
{
  ?MatrixMultiply34@@YAXAEBT?$tmat34_t@Tvec4_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
AxisClear
==============
*/

void __fastcall AxisClear(tmat33_t<vec3_t> *axis)
{
  ?AxisClear@@YAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(axis);
}

/*
==============
PointToLineDistSqUsingDir
==============
*/

double __fastcall PointToLineDistSqUsingDir(const vec3_t *pt, const vec3_t *start, const vec3_t *dir)
{
  double result; 

  *(float *)&result = ?PointToLineDistSqUsingDir@@YAMAEBTvec3_t@@00@Z(pt, start, dir);
  return result;
}

/*
==============
DiffTrack
==============
*/

void __fastcall DiffTrack(const vec3_t *tgt, const vec3_t *cur, float rate, float deltaTime, vec3_t *out)
{
  ?DiffTrack@@YAXAEBTvec3_t@@0MMAEAT1@@Z(tgt, cur, rate, deltaTime, out);
}

/*
==============
DualQuatToQuatTrans
==============
*/

void __fastcall DualQuatToQuatTrans(vec4_t *q0, vec3_t *t, const tmat22_t<vec4_t> *dq)
{
  ?DualQuatToQuatTrans@@YAXAEATvec4_t@@AEATvec3_t@@AEBT?$tmat22_t@Tvec4_t@@@@@Z(q0, t, dq);
}

/*
==============
IntersectRayAABB
==============
*/

bool __fastcall IntersectRayAABB(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *bbMin, const vec3_t *bbMax, float *t)
{
  return ?IntersectRayAABB@@YA_NAEBTvec3_t@@000AEAM@Z(rayOrigin, rayDir, bbMin, bbMax, t);
}

/*
==============
ExtendBounds
==============
*/

void __fastcall ExtendBounds(vec3_t *mins, vec3_t *maxs, const vec3_t *offset)
{
  ?ExtendBounds@@YAXAEATvec3_t@@0AEBT1@@Z(mins, maxs, offset);
}

/*
==============
ScalarSRGBtoLinear
==============
*/

double __fastcall ScalarSRGBtoLinear(const float in)
{
  double result; 

  *(float *)&result = ?ScalarSRGBtoLinear@@YAMM@Z(in);
  return result;
}

/*
==============
MatrixInverseDetT<dvec3_t,double>
==============
*/

void __fastcall MatrixInverseDetT<dvec3_t,double>(const dvec3_t (*in)[3], const long double determinant, dvec3_t (*out)[3])
{
  ??$MatrixInverseDetT@Tdvec3_t@@N@@YAXAEAY02$$CBTdvec3_t@@NAEAY02T0@@Z(in, determinant, out);
}

/*
==============
ColorSRGBtoLinear
==============
*/

void __fastcall ColorSRGBtoLinear(const vec3_t *in, vec3_t *out)
{
  ?ColorSRGBtoLinear@@YAXAEBTvec3_t@@AEAT1@@Z(in, out);
}

/*
==============
DMatrixInverse44
==============
*/

void __fastcall DMatrixInverse44(const tmat44_t<dvec4_t> *mat, tmat44_t<dvec4_t> *dst)
{
  ?DMatrixInverse44@@YAXAEBT?$tmat44_t@Tdvec4_t@@@@AEAT1@@Z(mat, dst);
}

/*
==============
RotatePointAroundVector
==============
*/

void __fastcall RotatePointAroundVector(vec3_t *dst, const vec3_t *dir, const vec3_t *point, float degrees)
{
  ?RotatePointAroundVector@@YAXAEATvec3_t@@AEBT1@1M@Z(dst, dir, point, degrees);
}

/*
==============
vectopitch
==============
*/

double __fastcall vectopitch(const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?vectopitch@@YAMAEBTvec3_t@@@Z(vec);
  return result;
}

/*
==============
vectosignedpitch
==============
*/

double __fastcall vectosignedpitch(const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?vectosignedpitch@@YAMAEBTvec3_t@@@Z(vec);
  return result;
}

/*
==============
DMatrixInverseDet
==============
*/

void __fastcall DMatrixInverseDet(const tmat33_t<dvec3_t> *in, const long double determinant, tmat33_t<dvec3_t> *out)
{
  ?DMatrixInverseDet@@YAXAEBT?$tmat33_t@Tdvec3_t@@@@NAEAT1@@Z(in, determinant, out);
}

/*
==============
SignedAngleRadBetween
==============
*/

double __fastcall SignedAngleRadBetween(const vec3_t *a, const vec3_t *b, const vec3_t *reference)
{
  double result; 

  *(float *)&result = ?SignedAngleRadBetween@@YAMAEBTvec3_t@@00@Z(a, b, reference);
  return result;
}

/*
==============
vectosignedangles
==============
*/

void __fastcall vectosignedangles(const vec3_t *vec, vec3_t *angles)
{
  ?vectosignedangles@@YAXAEBTvec3_t@@AEAT1@@Z(vec, angles);
}

/*
==============
RotateAroundDirection
==============
*/

void __fastcall RotateAroundDirection(tmat33_t<vec3_t> *axis, const float yaw)
{
  ?RotateAroundDirection@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(axis, yaw);
}

/*
==============
MatrixMultiply
==============
*/

void __fastcall MatrixMultiply(const tmat33_t<vec3_t> *in1, const tmat33_t<vec3_t> *in2, tmat33_t<vec3_t> *out)
{
  ?MatrixMultiply@@YAXAEBT?$tmat33_t@Tvec3_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
MatrixIdentity33
==============
*/

void __fastcall MatrixIdentity33(tmat33_t<vec3_t> *out)
{
  ?MatrixIdentity33@@YAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(out);
}

/*
==============
PointInBounds2D
==============
*/

bool __fastcall PointInBounds2D(const vec2_t *v, const vec2_t *mins, const vec2_t *maxs)
{
  return ?PointInBounds2D@@YA_NAEBTvec2_t@@00@Z(v, mins, maxs);
}

/*
==============
MatrixMultiply43
==============
*/

void __fastcall MatrixMultiply43(const tmat43_t<vec3_t> *in1, const tmat43_t<vec3_t> *in2, tmat43_t<vec3_t> *out)
{
  ?MatrixMultiply43@@YAXAEBT?$tmat43_t@Tvec3_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
MatrixRotationZ
==============
*/

void __fastcall MatrixRotationZ(tmat33_t<vec3_t> *mat, float degrees)
{
  ?MatrixRotationZ@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, degrees);
}

/*
==============
LinearTrackAngle
==============
*/

double __fastcall LinearTrackAngle(float tgt, float cur, float rate, float deltaTime)
{
  double result; 

  *(float *)&result = ?LinearTrackAngle@@YAMMMMM@Z(tgt, cur, rate, deltaTime);
  return result;
}

/*
==============
MatrixTransformVector44
==============
*/

void __fastcall MatrixTransformVector44(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  ?MatrixTransformVector44@@YAXAEBTvec4_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(vec, mat, out);
}

/*
==============
AngleDegAxisToQuat
==============
*/

void __fastcall AngleDegAxisToQuat(float degrees, const vec3_t *axis, vec4_t *quat)
{
  ?AngleDegAxisToQuat@@YAXMAEBTvec3_t@@AEATvec4_t@@@Z(degrees, axis, quat);
}

/*
==============
MatrixRotationYRad
==============
*/

void __fastcall MatrixRotationYRad(tmat33_t<vec3_t> *mat, float radians)
{
  ?MatrixRotationYRad@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, radians);
}

/*
==============
IntersectRayPlane
==============
*/

bool __fastcall IntersectRayPlane(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec4_t *plane, float *t)
{
  return ?IntersectRayPlane@@YA_NAEBTvec3_t@@0AEBTvec4_t@@AEAM@Z(rayOrigin, rayDir, plane, t);
}

/*
==============
SnapFloat
==============
*/

double __fastcall SnapFloat(float f, float granularity, float epsilon)
{
  double result; 

  *(float *)&result = ?SnapFloat@@YAMMMM@Z(f, granularity, epsilon);
  return result;
}

/*
==============
BoundsVolume
==============
*/

double __fastcall BoundsVolume(const vec3_t *mins, const vec3_t *maxs)
{
  double result; 

  *(float *)&result = ?BoundsVolume@@YAMAEBTvec3_t@@0@Z(mins, maxs);
  return result;
}

/*
==============
YawToAxis
==============
*/

void __fastcall YawToAxis(float yaw, tmat33_t<vec3_t> *axis)
{
  ?YawToAxis@@YAXMAEAT?$tmat33_t@Tvec3_t@@@@@Z(yaw, axis);
}

/*
==============
MatrixRotationDeg
==============
*/

void __fastcall MatrixRotationDeg(tmat33_t<vec3_t> *mat, const vec3_t *dir, float degrees)
{
  ?MatrixRotationDeg@@YAXAEAT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@M@Z(mat, dir, degrees);
}

/*
==============
MatrixSet44
==============
*/

void __fastcall MatrixSet44(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  ?MatrixSet44@@YAXAEAT?$tmat44_t@Tvec4_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M@Z(out, origin, axis, scale);
}

/*
==============
PlaneFromPoint
==============
*/

vec4_t *__fastcall PlaneFromPoint(vec4_t *result, const vec3_t *pt, const vec3_t *dir)
{
  return ?PlaneFromPoint@@YA?ATvec4_t@@AEBTvec3_t@@0@Z(result, pt, dir);
}

/*
==============
Color2020toLinear
==============
*/

void __fastcall Color2020toLinear(const vec3_t *in, vec3_t *out)
{
  ?Color2020toLinear@@YAXAEBTvec3_t@@AEAT1@@Z(in, out);
}

/*
==============
VectorRotateAnglesAroundPoint
==============
*/

void __fastcall VectorRotateAnglesAroundPoint(const vec3_t *vIn, const vec3_t *vRotation, const vec3_t *vOrigin, vec3_t *out)
{
  ?VectorRotateAnglesAroundPoint@@YAXAEBTvec3_t@@00AEAT1@@Z(vIn, vRotation, vOrigin, out);
}

/*
==============
SegmentsIntersection
==============
*/

bool __fastcall SegmentsIntersection(const vec2_t *p1, const vec2_t *p2, const vec2_t *p3, const vec2_t *p4, float *outFrac)
{
  return ?SegmentsIntersection@@YA_NAEBTvec2_t@@000AEAM@Z(p1, p2, p3, p4, outFrac);
}

/*
==============
RayObbIntersect
==============
*/

double __fastcall RayObbIntersect(const vec3_t *rayStart, const vec3_t *rayDir, const vec3_t *obbPos, const tmat33_t<vec3_t> *obbAxis, const vec3_t *obbHalfLength)
{
  double result; 

  *(float *)&result = ?RayObbIntersect@@YAMAEBTvec3_t@@00AEBT?$tmat33_t@Tvec3_t@@@@0@Z(rayStart, rayDir, obbPos, obbAxis, obbHalfLength);
  return result;
}

/*
==============
MatrixVecMultiply
==============
*/

void __fastcall MatrixVecMultiply(const tmat43_t<vec3_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  ?MatrixVecMultiply@@YAXAEBT?$tmat43_t@Tvec3_t@@@@AEBTvec4_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
PlaneFromPointsEx
==============
*/

bool __fastcall PlaneFromPointsEx(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2)
{
  return ?PlaneFromPointsEx@@YA_NAEATvec4_t@@AEBTvec3_t@@11@Z(plane, v0, v1, v2);
}

/*
==============
MatrixRotationXRad
==============
*/

void __fastcall MatrixRotationXRad(tmat33_t<vec3_t> *mat, float radians)
{
  ?MatrixRotationXRad@@YAXAEAT?$tmat33_t@Tvec3_t@@@@M@Z(mat, radians);
}

/*
==============
AnglesToAxis
==============
*/

void __fastcall AnglesToAxis(const vec3_t *angles, tmat33_t<vec3_t> *axis)
{
  ?AnglesToAxis@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(angles, axis);
}

/*
==============
QuatSlerp
==============
*/

void __fastcall QuatSlerp(const vec4_t *from, const vec4_t *to, float frac, vec4_t *result)
{
  ?QuatSlerp@@YAXAEBTvec4_t@@0MAEAT1@@Z(from, to, frac, result);
}

/*
==============
VecToMatrix
==============
*/

void __fastcall VecToMatrix(const vec3_t *vec, tmat33_t<vec3_t> *axis)
{
  ?VecToMatrix@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(vec, axis);
}

/*
==============
EaseExponential
==============
*/

double __fastcall EaseExponential(float pct, float scale, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseExponential@@YAMMM_N0@Z(pct, scale, easeIn, easeOut);
  return result;
}

/*
==============
vectoyaw
==============
*/

double __fastcall vectoyaw(const vec2_t *vec)
{
  double result; 

  *(float *)&result = ?vectoyaw@@YAMAEBTvec2_t@@@Z(vec);
  return result;
}

/*
==============
MatrixVecMultiply
==============
*/

void __fastcall MatrixVecMultiply(const tmat33_t<vec3_t> *mulMat, const vec3_t *mulVec, vec3_t *solution)
{
  ?MatrixVecMultiply@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
AngleVectors
==============
*/

void __fastcall AngleVectors(const vec3_t *angles, vec3_t *forward, vec3_t *right, vec3_t *up)
{
  ?AngleVectors@@YAXAEBTvec3_t@@PEAT1@11@Z(angles, forward, right, up);
}

/*
==============
YawVectors
==============
*/

void __fastcall YawVectors(float yaw, vec3_t *forward, vec3_t *right)
{
  ?YawVectors@@YAXMPEATvec3_t@@0@Z(yaw, forward, right);
}

/*
==============
MatrixMultiply44
==============
*/

void __fastcall MatrixMultiply44(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out)
{
  ?MatrixMultiply44@@YAXAEBT?$tmat44_t@Tvec4_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
AxisToQuat
==============
*/

void __fastcall AxisToQuat(const tmat33_t<vec3_t> *mat, vec4_t *out)
{
  ?AxisToQuat@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec4_t@@@Z(mat, out);
}

/*
==============
PointOnLineClosestToPoint
==============
*/

double __fastcall PointOnLineClosestToPoint(const vec3_t *pt, const vec3_t *start, const vec3_t *dir, vec3_t *result)
{
  double v4; 

  *(float *)&v4 = ?PointOnLineClosestToPoint@@YAMAEBTvec3_t@@00AEAT1@@Z(pt, start, dir, result);
  return v4;
}

/*
==============
IntersectPlanes
==============
*/

bool __fastcall IntersectPlanes(const vec3_t *pointA, const vec3_t *normalA, const vec3_t *pointB, const vec3_t *normalB, vec3_t *outPointLine, vec3_t *outAxisLine)
{
  return ?IntersectPlanes@@YA_NAEBTvec3_t@@000AEAT1@1@Z(pointA, normalA, pointB, normalB, outPointLine, outAxisLine);
}

/*
==============
MatrixCopy33
==============
*/

void __fastcall MatrixCopy33(const tmat33_t<vec3_t> *src, tmat33_t<vec3_t> *dst)
{
  ?MatrixCopy33@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(src, dst);
}

/*
==============
PerpendicularVector
==============
*/

void __fastcall PerpendicularVector(const vec3_t *src, vec3_t *dst)
{
  ?PerpendicularVector@@YAXAEBTvec3_t@@AEAT1@@Z(src, dst);
}

/*
==============
ProjectPointOntoVector
==============
*/

void __fastcall ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj)
{
  ?ProjectPointOntoVector@@YAXAEBTvec3_t@@00AEAT1@@Z(point, start, end, vProj);
}

/*
==============
DMatrixInverseOrthogonal43
==============
*/

void __fastcall DMatrixInverseOrthogonal43(const tmat43_t<dvec3_t> *in, tmat43_t<dvec3_t> *out)
{
  ?DMatrixInverseOrthogonal43@@YAXAEBT?$tmat43_t@Tdvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
SinCosDeg
==============
*/

void __fastcall SinCosDeg(float degrees, float *s, float *c)
{
  ?SinCosDeg@@YAXMPEAM0@Z(degrees, s, c);
}

/*
==============
MatrixRotationRad
==============
*/

void __fastcall MatrixRotationRad(tmat33_t<vec3_t> *mat, const vec3_t *dir, float radians)
{
  ?MatrixRotationRad@@YAXAEAT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@M@Z(mat, dir, radians);
}

/*
==============
EaseBounce
==============
*/

double __fastcall EaseBounce(float pct, int bounces, float decayScalar, bool easeIn, bool easeOut)
{
  double result; 

  *(float *)&result = ?EaseBounce@@YAMMHM_N0@Z(pct, bounces, decayScalar, easeIn, easeOut);
  return result;
}

/*
==============
QuatTransToDualQuat
==============
*/

void __fastcall QuatTransToDualQuat(const vec4_t *q0, const vec3_t *t, tmat22_t<vec4_t> *dq)
{
  ?QuatTransToDualQuat@@YAXAEBTvec4_t@@AEBTvec3_t@@AEAT?$tmat22_t@Tvec4_t@@@@@Z(q0, t, dq);
}

/*
==============
AabbSphereIntersect
==============
*/

bool __fastcall AabbSphereIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *sphereCenter, float sphereRadius)
{
  return ?AabbSphereIntersect@@YA_NAEBTvec3_t@@00M@Z(aabbMax, aabbMin, sphereCenter, sphereRadius);
}

/*
==============
ClosestApproachOfTwoLines
==============
*/

void __fastcall ClosestApproachOfTwoLines(const vec3_t *p1, const vec3_t *dir1, const vec3_t *p2, const vec3_t *dir2, float *s, float *t)
{
  ?ClosestApproachOfTwoLines@@YAXAEBTvec3_t@@000PEAM1@Z(p1, dir1, p2, dir2, s, t);
}

/*
==============
MatrixTranspose44
==============
*/

void __fastcall MatrixTranspose44(const tmat44_t<vec4_t> *in, tmat44_t<vec4_t> *out)
{
  ?MatrixTranspose44@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(in, out);
}

/*
==============
ObbSphereIntersect
==============
*/

bool __fastcall ObbSphereIntersect(const tmat33_t<vec3_t> *wldBoxAxis, const vec3_t *wldBoxOrigin, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, float wldSphereRadius)
{
  return ?ObbSphereIntersect@@YA_NAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@11M@Z(wldBoxAxis, wldBoxOrigin, obbBoxHalfExt, wldSphereCenter, wldSphereRadius);
}

/*
==============
RadiusFromBounds2D
==============
*/

double __fastcall RadiusFromBounds2D(const vec2_t *mins, const vec2_t *maxs)
{
  double result; 

  *(float *)&result = ?RadiusFromBounds2D@@YAMAEBTvec2_t@@0@Z(mins, maxs);
  return result;
}

/*
==============
PolarToCartesian
==============
*/

void __fastcall PolarToCartesian(const float angleInDegrees, const float radius, vec2_t *outCartesianCoords)
{
  ?PolarToCartesian@@YAXMMAEIATvec2_t@@@Z(angleInDegrees, radius, outCartesianCoords);
}

/*
==============
Com_NoiseGet4f
==============
*/

double __fastcall Com_NoiseGet4f(float x, float y, float z, float t)
{
  double result; 

  *(float *)&result = ?Com_NoiseGet4f@@YAMMMMM@Z(x, y, z, t);
  return result;
}

/*
==============
QuatAndOriginToMatrix43
==============
*/

void __fastcall QuatAndOriginToMatrix43(const vec4_t *quat, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  ?QuatAndOriginToMatrix43@@YAXAEBTvec4_t@@AEBTvec3_t@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(quat, origin, result);
}

/*
==============
SegmentToAABBDistSq2D
==============
*/

double __fastcall SegmentToAABBDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testMin, const vec2_t *testMax)
{
  double result; 

  *(float *)&result = ?SegmentToAABBDistSq2D@@YAMAEBTvec2_t@@000@Z(segStart, segEnd, testMin, testMax);
  return result;
}

/*
==============
ShrinkBoundsToHeight
==============
*/

void __fastcall ShrinkBoundsToHeight(vec3_t *mins, vec3_t *maxs)
{
  ?ShrinkBoundsToHeight@@YAXAEATvec3_t@@0@Z(mins, maxs);
}

/*
==============
ObbSphereIntersect
==============
*/

bool __fastcall ObbSphereIntersect(const tmat43_t<vec3_t> *wldToObb, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, float wldSphereRadius)
{
  return ?ObbSphereIntersect@@YA_NAEBT?$tmat43_t@Tvec3_t@@@@AEBTvec3_t@@1M@Z(wldToObb, obbBoxHalfExt, wldSphereCenter, wldSphereRadius);
}

/*
==============
PointToLineDistSq
==============
*/

double __fastcall PointToLineDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end)
{
  double result; 

  *(float *)&result = ?PointToLineDistSq@@YAMAEBTvec3_t@@00@Z(point, start, end);
  return result;
}

/*
==============
PointToLineSegmentDistSq2D
==============
*/

double __fastcall PointToLineSegmentDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  double result; 

  *(float *)&result = ?PointToLineSegmentDistSq2D@@YAMAEBTvec2_t@@00@Z(point, start, end);
  return result;
}

/*
==============
DMatrixVecMultiply
==============
*/

void __fastcall DMatrixVecMultiply(const tmat44_t<dvec4_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  ?DMatrixVecMultiply@@YAXAEBT?$tmat44_t@Tdvec4_t@@@@AEBTdvec4_t@@AEAT2@@Z(mulMat, mulVec, solution);
}

/*
==============
PointToLineSegmentDistSq
==============
*/

double __fastcall PointToLineSegmentDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end)
{
  double result; 

  *(float *)&result = ?PointToLineSegmentDistSq@@YAMAEBTvec3_t@@00@Z(point, start, end);
  return result;
}

/*
==============
Axis4ToAngles
==============
*/

void __fastcall Axis4ToAngles(const tmat44_t<vec4_t> *axis, vec3_t *angles)
{
  ?Axis4ToAngles@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEATvec3_t@@@Z(axis, angles);
}

/*
==============
MatrixDeterminantT<vec3_t,float>
==============
*/

double __fastcall MatrixDeterminantT<vec3_t,float>(const vec3_t (*in)[3])
{
  double result; 

  *(float *)&result = ??$MatrixDeterminantT@Tvec3_t@@M@@YAMAEAY02$$CBTvec3_t@@@Z(in);
  return result;
}

/*
==============
ClearBounds
==============
*/

void __fastcall ClearBounds(vec3_t *mins, vec3_t *maxs)
{
  ?ClearBounds@@YAXAEATvec3_t@@0@Z(mins, maxs);
}

/*
==============
MatrixIdentity34
==============
*/

void __fastcall MatrixIdentity34(tmat34_t<vec4_t> *out)
{
  ?MatrixIdentity34@@YAXAEAT?$tmat34_t@Tvec4_t@@@@@Z(out);
}

/*
==============
DVecNCompareCustomEpsilon
==============
*/

bool __fastcall DVecNCompareCustomEpsilon(const long double *v0, const long double *v1, long double epsilon, int coordCount)
{
  return ?DVecNCompareCustomEpsilon@@YA_NPEBN0NH@Z(v0, v1, epsilon, coordCount);
}

/*
==============
MatrixInverseOrthogonal43
==============
*/

void __fastcall MatrixInverseOrthogonal43(const tmat33_t<vec3_t> *axis, const vec3_t *origin, tmat43_t<vec3_t> *out)
{
  ?MatrixInverseOrthogonal43@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(axis, origin, out);
}

/*
==============
IntersectPlanes
==============
*/

bool __fastcall IntersectPlanes(const vec4_t (*plane)[3], vec3_t *xyz)
{
  return ?IntersectPlanes@@YA_NAEAY02$$CBTvec4_t@@AEATvec3_t@@@Z(plane, xyz);
}

/*
==============
ExpandBounds2D
==============
*/

void __fastcall ExpandBounds2D(const vec2_t *addedmins, const vec2_t *addedmaxs, vec2_t *mins, vec2_t *maxs)
{
  ?ExpandBounds2D@@YAXAEBTvec2_t@@0AEAT1@1@Z(addedmins, addedmaxs, mins, maxs);
}

/*
==============
IsClearedBounds
==============
*/

bool __fastcall IsClearedBounds(const vec3_t *mins, const vec3_t *maxs)
{
  return ?IsClearedBounds@@YA_NAEBTvec3_t@@0@Z(mins, maxs);
}

/*
==============
AnglesAndOriginToMatrix43
==============
*/

void __fastcall AnglesAndOriginToMatrix43(const vec3_t *angles, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  ?AnglesAndOriginToMatrix43@@YAXAEBTvec3_t@@0AEAT?$tmat43_t@Tvec3_t@@@@@Z(angles, origin, result);
}

/*
==============
MatrixSet44Transposed
==============
*/

void __fastcall MatrixSet44Transposed(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  ?MatrixSet44Transposed@@YAXAEAT?$tmat44_t@Tvec4_t@@@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M@Z(out, origin, axis, scale);
}

/*
==============
AxisTranspose
==============
*/

void __fastcall AxisTranspose(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  ?AxisTranspose@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
MatrixCopy44
==============
*/

void __fastcall MatrixCopy44(const tmat44_t<vec4_t> *src, tmat44_t<vec4_t> *dst)
{
  ?MatrixCopy44@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(src, dst);
}

/*
==============
QuatToAxis
==============
*/

void __fastcall QuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  ?QuatToAxis@@YAXAEBTvec4_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(quat, axis);
}

/*
==============
PerpendicularUpVector
==============
*/

void __fastcall PerpendicularUpVector(const vec3_t *src, vec3_t *dst)
{
  ?PerpendicularUpVector@@YAXAEBTvec3_t@@AEAT1@@Z(src, dst);
}

/*
==============
BoundsOverlapEpsilon
==============
*/

bool __fastcall BoundsOverlapEpsilon(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1, float epsilon)
{
  return ?BoundsOverlapEpsilon@@YA_NAEBTvec3_t@@000M@Z(mins0, maxs0, mins1, maxs1, epsilon);
}

/*
==============
DiffTrack
==============
*/

void __fastcall DiffTrack(const vec3_t *tgt, const vec3_t *cur, double rate, double deltaTime, vec3_t *out)
{
  int v11; 
  bool v13; 
  __int64 v26; 
  __int64 v27; 
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RSI = (char *)cur - (char *)tgt;
  _RBP = (char *)out - (char *)tgt;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  v11 = 0;
  _RDI = tgt;
  v13 = 1;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  do
  {
    if ( !v13 )
    {
      LODWORD(v27) = 3;
      LODWORD(v26) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rsi+rdi] }
    if ( (unsigned int)v11 >= 3 )
    {
      LODWORD(v27) = 3;
      LODWORD(v26) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm8; rate
      vmovaps xmm1, xmm6; cur
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm6, xmm0 }
    if ( (unsigned int)v11 >= 3 )
    {
      LODWORD(v27) = 3;
      LODWORD(v26) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
    _RDI = (const vec3_t *)((char *)_RDI + 4);
    v13 = (unsigned int)++v11 < 3;
  }
  while ( v11 < 3 );
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v30;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
IntersectPlanes
==============
*/
bool IntersectPlanes(const vec3_t *pointA, const vec3_t *normalA, const vec3_t *pointB, const vec3_t *normalB, vec3_t *outPointLine, vec3_t *outAxisLine)
{
  const vec3_t *v31; 
  char v53; 
  char v54; 
  bool result; 
  vec3_t cross; 
  vec3_t v102; 
  vec3_t v103; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3b03126f
  }
  _R14 = outPointLine;
  _R15 = outAxisLine;
  _RBX = normalB;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm11
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  _RSI = pointB;
  v31 = normalA;
  _RBP = pointA;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2141, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normalA ))", (const char *)&queryFormat, "Vec3IsNormalized( normalA )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm11
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2142, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normalB ))", (const char *)&queryFormat, "Vec3IsNormalized( normalB )") )
    __debugbreak();
  Vec3Cross(v31, _RBX, &cross);
  __asm
  {
    vmovss  xmm8, dword ptr [rsp+108h+cross]
    vmovss  xmm9, dword ptr [rsp+108h+cross+4]
    vmovss  xmm10, dword ptr [rsp+108h+cross+8]
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm12, xmm2, xmm1
    vandps  xmm0, xmm12, xmm6
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v53 | v54 )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmulss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rbp+0]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rbp+8]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rsi+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vaddss  xmm2, xmm4, xmm1
      vmovss  xmm1, dword ptr [rbx]
      vxorps  xmm7, xmm2, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm1, dword ptr [rsi]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vxorps  xmm6, xmm2, cs:__xmm@80000000800000008000000080000000
    }
    Vec3Cross(&cross, _RBX, &v103);
    Vec3Cross(v31, &cross, &v102);
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rsp+108h+var_C8]
      vmulss  xmm2, xmm7, dword ptr [rsp+108h+var_B8]
      vmulss  xmm4, xmm6, dword ptr [rsp+108h+var_C8+4]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+108h+var_B8+4]
      vdivss  xmm3, xmm0, xmm12
      vaddss  xmm1, xmm4, xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+108h+var_B8+8]
      vmulss  xmm4, xmm6, dword ptr [rsp+108h+var_C8+8]
      vmovss  dword ptr [r14], xmm3
      vdivss  xmm3, xmm1, xmm12
      vaddss  xmm0, xmm4, xmm2
      vmovss  dword ptr [r14+4], xmm3
      vdivss  xmm3, xmm0, xmm12
      vsqrtss xmm1, xmm12, xmm12
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmovss  dword ptr [r14+8], xmm3
      vmulss  xmm0, xmm8, xmm2
      vmovss  dword ptr [r15], xmm0
      vmulss  xmm0, xmm10, xmm2
      vmulss  xmm1, xmm9, xmm2
      vmovss  dword ptr [r15+8], xmm0
      vmovss  dword ptr [r15+4], xmm1
    }
    result = 1;
  }
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
IntersectRayPlane
==============
*/
bool IntersectRayPlane(const vec3_t *origin, const vec3_t *direction, const vec4_t *plane, float *t, vec3_t *outHitPoint)
{
  bool result; 

  __asm
  {
    vmovss  xmm3, dword ptr [r8+4]
    vmulss  xmm0, xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [r8+8]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8]
    vmulss  xmm1, xmm7, dword ptr [rdx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rdx+8]
    vaddss  xmm5, xmm2, xmm1
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm5, xmm6
    vmulss  xmm0, xmm3, dword ptr [rcx+4]
    vmulss  xmm1, xmm7, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rcx+8]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [r8+0Ch]
    vdivss  xmm3, xmm0, xmm5
    vxorps  xmm4, xmm3, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm4, xmm6
    vmovss  dword ptr [r9], xmm4
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx]
  }
  _RAX = outHitPoint;
  __asm
  {
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm0, xmm4, dword ptr [rdx+4]
    vaddss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm4, dword ptr [rdx+8]
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rax+8], xmm1
  }
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
  return result;
}

/*
==============
IntersectRaySphere
==============
*/

bool __fastcall IntersectRaySphere(const vec3_t *origin, const vec3_t *direction, const vec3_t *sphereCenter, double radius)
{
  bool result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm5, xmm1, dword ptr [r8+4]
    vmulss  xmm1, xmm5, dword ptr [rdx+4]
    vmovaps [rsp+38h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm4, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm6, dword ptr [rdx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rdx+8]
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmulss  xmm3, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+38h+var_38], xmm8
    vaddss  xmm8, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vsubss  xmm3, xmm4, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
    vcomiss xmm8, xmm2
  }
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
  return result;
}

/*
==============
ProjectPointOntoVector
==============
*/
void ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx+8]
  }
  _R10 = outDistFromStart;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx]
    vmovaps [rsp+58h+var_28], xmm7
    vsubss  xmm7, xmm0, xmm6
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps [rsp+58h+var_38], xmm8
    vsubss  xmm8, xmm0, xmm3
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps [rsp+58h+var_48], xmm9
    vsubss  xmm9, xmm0, xmm5
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vaddss  xmm10, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm10, xmm0
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm2, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm3
    vmulss  xmm3, xmm1, xmm8
    vsubss  xmm0, xmm2, xmm6
    vmovss  xmm2, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm7
    vsubss  xmm0, xmm2, xmm5
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm3, xmm4, xmm1
    vdivss  xmm5, xmm3, xmm10
    vmulss  xmm0, xmm7, xmm5
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r9], xmm1
    vmulss  xmm2, xmm8, xmm5
    vaddss  xmm0, xmm2, dword ptr [rdx+4]
    vmulss  xmm1, xmm9, xmm5
    vmovss  dword ptr [r9+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+8], xmm2
  }
  if ( outDistFromStart )
    __asm { vmovss  dword ptr [r10], xmm5 }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vmovaps xmm10, [rsp+58h+var_58]
  }
}

/*
==============
MatrixTransformDir44
==============
*/
void MatrixTransformDir44(const vec3_t *in1, const tmat44_t<vec4_t> *in2, vec3_t *out)
{
  _RDI = out;
  _RSI = in2;
  _RBX = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1086, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsi+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+24h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
}

/*
==============
FastSinCos
==============
*/

void __fastcall FastSinCos(double radians, float *s, float *c)
{
  __asm
  {
    vandps  xmm5, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm5, cs:__real@3ea2f983
    vaddss  xmm1, xmm1, cs:__real@3f000000
    vcvttss2si eax, xmm1
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm7, cs:__real@bf800000
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vmovd   xmm4, eax
    vcvtdq2ps xmm4, xmm4
    vmulss  xmm2, xmm4, cs:__real@3f000000
    vcvttss2si eax, xmm2
    vmovd   xmm1, eax
    vcvtdq2ps xmm1, xmm1
    vsubss  xmm3, xmm1, xmm2
    vmulss  xmm1, xmm4, cs:__real@40490fdb
    vsubss  xmm6, xmm5, xmm1
    vcmpless xmm0, xmm8, xmm3
    vblendvps xmm10, xmm7, xmm11, xmm0
    vaddss  xmm0, xmm5, cs:__real@3fc90fdb
    vsubss  xmm1, xmm0, xmm1
    vsubss  xmm2, xmm1, cs:__real@3fc90fdb
    vmulss  xmm5, xmm2, xmm2
    vmulss  xmm4, xmm6, xmm6
    vmulss  xmm0, xmm4, cs:__real@274a963c
    vsubss  xmm1, xmm0, cs:__real@2b573f9f
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, cs:__real@2f309231
    vmulss  xmm0, xmm3, xmm4
    vsubss  xmm1, xmm0, cs:__real@32d7322b
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, cs:__real@3638ef1d
    vmulss  xmm0, xmm3, xmm4
    vsubss  xmm1, xmm0, cs:__real@39500d01
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, cs:__real@3c088889
    vmulss  xmm0, xmm3, xmm4
    vsubss  xmm1, xmm0, cs:__real@3e2aaaab
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, xmm11
    vmulss  xmm2, xmm5, cs:__real@29573f9f
    vmulss  xmm4, xmm3, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vcmpless xmm0, xmm8, xmm9
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vblendvps xmm1, xmm7, xmm11, xmm0
    vmovaps xmm7, [rsp+68h+var_28]
    vmulss  xmm0, xmm1, xmm10
    vmulss  xmm1, xmm4, xmm0
    vsubss  xmm0, xmm2, cs:__real@2d49cba5
    vmovss  dword ptr [rdx], xmm1
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm1, cs:__real@310f76c7
    vmulss  xmm2, xmm3, xmm5
    vsubss  xmm0, xmm2, cs:__real@3493f27e
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm1, cs:__real@37d00d01
    vmulss  xmm2, xmm3, xmm5
    vsubss  xmm0, xmm2, cs:__real@3ab60b61
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm1, cs:__real@3d2aaaab
    vmulss  xmm2, xmm3, xmm5
    vsubss  xmm0, xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm1, xmm11
    vmovaps xmm11, [rsp+68h+var_68]
    vmulss  xmm2, xmm3, xmm10
    vmovaps xmm10, [rsp+68h+var_58]
    vmovss  dword ptr [r8], xmm2
  }
}

/*
==============
FastSinCosDouble
==============
*/

void __fastcall FastSinCosDouble(double radians, long double *psin, long double *pcos)
{
  __asm
  {
    vandpd  xmm5, xmm0, cs:__xmm@7fffffffffffffff7fffffffffffffff
    vmulsd  xmm1, xmm5, cs:__real@3fd45f306dc9c883
    vaddsd  xmm1, xmm1, cs:__real@3fe0000000000000
    vcvttsd2si eax, xmm1
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovsd  xmm7, cs:__real@bff0000000000000
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
    vmovsd  xmm11, cs:__real@3ff0000000000000
    vxorpd  xmm8, xmm8, xmm8
    vmovd   xmm4, eax
    vcvtdq2pd xmm4, xmm4
    vmulsd  xmm2, xmm4, cs:__real@3fe0000000000000
    vcvttsd2si eax, xmm2
    vmovd   xmm1, eax
    vcvtdq2pd xmm1, xmm1
    vsubsd  xmm3, xmm1, xmm2
    vmulsd  xmm1, xmm4, cs:__real@400921fb54442d18
    vsubsd  xmm6, xmm5, xmm1
    vcmplesd xmm0, xmm8, xmm3
    vblendvpd xmm10, xmm7, xmm11, xmm0
    vaddsd  xmm0, xmm5, cs:__real@3ff921fb54442d18
    vsubsd  xmm1, xmm0, xmm1
    vsubsd  xmm2, xmm1, cs:__real@3ff921fb54442d18
    vmulsd  xmm5, xmm2, xmm2
    vmulsd  xmm4, xmm6, xmm6
    vmulsd  xmm0, xmm4, cs:__real@3ce952c77030ad4a
    vsubsd  xmm1, xmm0, cs:__real@3d6ae7f3e733b81f
    vmulsd  xmm2, xmm1, xmm4
    vaddsd  xmm3, xmm2, cs:__real@3de6124613a86d09
    vmulsd  xmm0, xmm3, xmm4
    vsubsd  xmm1, xmm0, cs:__real@3e5ae64567f544e4
    vmulsd  xmm2, xmm1, xmm4
    vaddsd  xmm3, xmm2, cs:__real@3ec71de3a556c734
    vmulsd  xmm0, xmm3, xmm4
    vsubsd  xmm1, xmm0, cs:__real@3f2a01a01a01a01a
    vmulsd  xmm2, xmm1, xmm4
    vaddsd  xmm3, xmm2, cs:__real@3f81111111111111
    vmulsd  xmm0, xmm3, xmm4
    vsubsd  xmm1, xmm0, cs:__real@3fc5555555555555
    vmulsd  xmm2, xmm1, xmm4
    vaddsd  xmm3, xmm2, xmm11
    vmulsd  xmm2, xmm5, cs:__real@3d2ae7f3e733b81f
    vmulsd  xmm4, xmm3, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vcmplesd xmm0, xmm8, xmm9
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vblendvpd xmm1, xmm7, xmm11, xmm0
    vmovaps xmm7, [rsp+68h+var_28]
    vmulsd  xmm0, xmm1, xmm10
    vmulsd  xmm1, xmm4, xmm0
    vsubsd  xmm0, xmm2, cs:__real@3da93974a8c07c9d
    vmovsd  qword ptr [rdx], xmm1
    vmulsd  xmm1, xmm0, xmm5
    vaddsd  xmm3, xmm1, cs:__real@3e21eed8eff8d898
    vmulsd  xmm2, xmm3, xmm5
    vsubsd  xmm0, xmm2, cs:__real@3e927e4fb7789f5c
    vmulsd  xmm1, xmm0, xmm5
    vaddsd  xmm3, xmm1, cs:__real@3efa01a01a01a01a
    vmulsd  xmm2, xmm3, xmm5
    vsubsd  xmm0, xmm2, cs:__real@3f56c16c16c16c17
    vmulsd  xmm1, xmm0, xmm5
    vaddsd  xmm3, xmm1, cs:__real@3fa5555555555555
    vmulsd  xmm2, xmm3, xmm5
    vsubsd  xmm0, xmm2, cs:__real@3fe0000000000000
    vmulsd  xmm1, xmm0, xmm5
    vaddsd  xmm3, xmm1, xmm11
    vmovaps xmm11, [rsp+68h+var_68]
    vmulsd  xmm2, xmm3, xmm10
    vmovaps xmm10, [rsp+68h+var_58]
    vmovsd  qword ptr [r8], xmm2
  }
}

/*
==============
VecNCompareCustomEpsilon
==============
*/

char __fastcall VecNCompareCustomEpsilon(const float *v0, const float *v1, double epsilon, int coordCount)
{
  int v4; 
  bool v6; 
  bool v7; 

  v4 = 0;
  if ( coordCount <= 0 )
    return 1;
  __asm { vmulss  xmm3, xmm2, xmm2 }
  v6 = v0 < v1;
  _RCX = (char *)v0 - (char *)v1;
  v7 = v6 || _RCX == 0;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rdx]
      vsubss  xmm1, xmm0, dword ptr [rdx]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, xmm3
    }
    if ( !v7 )
      break;
    ++v4;
    ++v1;
    v7 = v4 <= (unsigned int)coordCount;
    if ( v4 >= coordCount )
      return 1;
  }
  return 0;
}

/*
==============
DVecNCompareCustomEpsilon
==============
*/

char __fastcall DVecNCompareCustomEpsilon(const long double *v0, const long double *v1, double epsilon, int coordCount)
{
  int v4; 
  bool v6; 
  bool v7; 

  v4 = 0;
  if ( coordCount <= 0 )
    return 1;
  __asm { vmulsd  xmm3, xmm2, xmm2 }
  v6 = v0 < v1;
  _RCX = (char *)v0 - (char *)v1;
  v7 = v6 || _RCX == 0;
  while ( 1 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+rdx]
      vsubsd  xmm1, xmm0, qword ptr [rdx]
      vmulsd  xmm2, xmm1, xmm1
      vcomisd xmm2, xmm3
    }
    if ( !v7 )
      break;
    ++v4;
    ++v1;
    v7 = v4 <= (unsigned int)coordCount;
    if ( v4 >= coordCount )
      return 1;
  }
  return 0;
}

/*
==============
Vec3DistanceSqToSegment
==============
*/

float __fastcall Vec3DistanceSqToSegment(const vec3_t *pt, const vec3_t *segStart, const vec3_t *segDir, double segLen)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm4, xmm1, dword ptr [r8+4]
    vmovaps xmm2, xmm3; max
    vmovss  xmm3, dword ptr [rcx]
    vsubss  xmm0, xmm3, dword ptr [rdx]
    vmulss  xmm1, xmm0, dword ptr [r8]
    vmovss  xmm3, dword ptr [rcx+8]
    vsubss  xmm0, xmm3, dword ptr [rdx+8]
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm0, dword ptr [r8+8]
    vaddss  xmm0, xmm5, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm1, xmm0, dword ptr [rbx+4]
    vsubss  xmm5, xmm2, dword ptr [rsi]
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm0, xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vsubss  xmm3, xmm2, dword ptr [rsi+4]
    vsubss  xmm4, xmm1, dword ptr [rsi+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm3, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec3MajorAxis
==============
*/
__int64 Vec3MajorAxis(const vec3_t *dir)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm2, xmm3
    vmulss  xmm1, xmm0, xmm0
  }
  _RCX = 0i64;
  __asm
  {
    vmovss  [rsp+28h+var_28], xmm3
    vmovss  [rsp+28h+var_24], xmm2
    vmovss  [rsp+28h+var_20], xmm1
    vcomiss xmm1, [rsp+rcx*4+28h+var_28]
  }
  return 0i64;
}

/*
==============
Vec3MinorAxis
==============
*/
__int64 Vec3MinorAxis(const vec3_t *dir)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm3, xmm2
    vmulss  xmm1, xmm0, xmm0
  }
  _RCX = 0i64;
  __asm
  {
    vmovss  [rsp+28h+var_28], xmm3
    vmovss  [rsp+28h+var_24], xmm2
    vmovss  [rsp+28h+var_20], xmm1
    vcomiss xmm1, [rsp+rcx*4+28h+var_28]
  }
  return 0i64;
}

/*
==============
AngleVectors
==============
*/
void AngleVectors(const vec3_t *angles, vec3_t *forward, vec3_t *right, vec3_t *up)
{
  float s[4]; 
  void *retaddr; 
  float v56; 
  float v57; 
  float c; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = right;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RSI = forward;
  __asm
  {
    vmovss  xmm8, cs:__real@3c8efa35
    vmulss  xmm0, xmm8, dword ptr [rcx+4]; radians
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = up;
  FastSinCos(*(const float *)&_XMM0, &v57, &v56);
  __asm { vmulss  xmm0, xmm8, dword ptr [rbp+0]; radians }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmovss  xmm6, [rsp+98h+arg_0]
    vmovss  xmm7, [rsp+98h+arg_8]
    vmovss  xmm9, [rsp+98h+c]
    vmovss  xmm10, [rsp+98h+s]
  }
  if ( _RSI )
  {
    __asm
    {
      vmulss  xmm0, xmm9, xmm6
      vmovss  dword ptr [rsi], xmm0
      vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm9, xmm7
      vmovss  dword ptr [rsi+8], xmm0
      vmovss  dword ptr [rsi+4], xmm1
    }
  }
  if ( _RDI || _RBX )
  {
    __asm { vmulss  xmm0, xmm8, dword ptr [rbp+8]; radians }
    FastSinCos(*(const float *)&_XMM0, &v57, &v56);
    __asm
    {
      vmovss  xmm5, [rsp+98h+arg_0]
      vmovss  xmm8, [rsp+98h+arg_8]
    }
    if ( _RDI )
    {
      __asm
      {
        vmulss  xmm4, xmm8, xmm10
        vmulss  xmm0, xmm4, xmm6
        vmulss  xmm1, xmm5, xmm7
        vsubss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm5, cs:__real@bf800000
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm0, xmm8, cs:__real@bf800000
        vmulss  xmm1, xmm4, xmm7
        vsubss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm0, xmm9
        vmovss  dword ptr [rdi+8], xmm1
        vmovss  dword ptr [rdi+4], xmm2
      }
    }
    if ( _RBX )
    {
      __asm
      {
        vmulss  xmm2, xmm5, xmm10
        vmulss  xmm1, xmm2, xmm6
        vmulss  xmm0, xmm8, xmm7
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm2, xmm7
        vmulss  xmm0, xmm8, xmm6
        vmovss  dword ptr [rbx], xmm1
        vsubss  xmm1, xmm2, xmm0
        vmulss  xmm2, xmm5, xmm9
        vmovss  dword ptr [rbx+8], xmm2
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, [rsp+98h+var_48]
    vmovaps xmm9, [rsp+98h+var_58]
    vmovaps xmm10, [rsp+98h+var_68]
  }
}

/*
==============
AnglesSubtract
==============
*/
void AnglesSubtract(const vec3_t *v1, const vec3_t *v2, vec3_t *v3)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovss  xmm5, cs:__real@43b40000
    vmovaps [rsp+18h+var_18], xmm8
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm2, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm5
    vmovss  dword ptr [r8], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vroundss xmm2, xmm8, xmm3, 1
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r8+4], xmm1
    vmovss  xmm2, dword ptr [rcx+8]
    vsubss  xmm0, xmm2, dword ptr [rdx+8]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vroundss xmm2, xmm8, xmm3, 1
    vmovaps xmm8, [rsp+18h+var_18]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [r8+8], xmm0
  }
}

/*
==============
AnglesSubtract
==============
*/
void AnglesSubtract(const vec2_t *v1, const vec2_t *v2, vec2_t *v3)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovaps [rsp+18h+var_18], xmm7
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm2, xmm7, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [r8], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vroundss xmm2, xmm7, xmm3, 1
    vmovaps xmm7, [rsp+18h+var_18]
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [r8+4], xmm1
  }
}

/*
==============
AnglesNormalize360
==============
*/

void __fastcall AnglesNormalize360(const vec3_t *from, vec3_t *to, double _XMM2_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm3, 1
    vsubss  xmm0, xmm3, xmm2
    vxorps  xmm5, xmm5, xmm5
    vxorps  xmm2, xmm2, xmm2
    vmovaps [rsp+18h+var_18], xmm7
    vmovss  xmm7, cs:__real@43b40000
    vmulss  xmm4, xmm0, xmm7
    vsubss  xmm1, xmm4, xmm7
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vroundss xmm2, xmm2, xmm3, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm4, xmm0, xmm7
    vsubss  xmm1, xmm4, xmm7
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
    vmovss  dword ptr [rdx+4], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm3, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm4, xmm0, xmm7
    vsubss  xmm1, xmm4, xmm7
    vmovaps xmm7, [rsp+18h+var_18]
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
    vmovss  dword ptr [rdx+8], xmm0
  }
}

/*
==============
AngleDelta
==============
*/

float __fastcall AngleDelta(double angle1, const float angle2)
{
  __asm
  {
    vsubss  xmm1, xmm0, xmm1
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, cs:__real@43b40000
  }
  return *(float *)&_XMM0;
}

/*
==============
LinearTrack
==============
*/

float __fastcall LinearTrack(double tgt, double cur, double rate, float deltaTime)
{
  __asm
  {
    vmulss  xmm5, xmm2, xmm3
    vxorps  xmm4, xmm5, cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+38h+var_18], xmm6
    vsubss  xmm6, xmm0, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcmpltss xmm3, xmm2, xmm6
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+38h+var_28], xmm7
    vandps  xmm6, xmm6, xmm2
    vcomiss xmm6, cs:__real@3a83126f
    vblendvps xmm3, xmm4, xmm5, xmm3
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm0
    vmovss  [rsp+38h+arg_0], xmm3
    vmovss  xmm1, [rsp+38h+arg_0]
    vandps  xmm0, xmm1, xmm2
    vcomiss xmm6, xmm0
    vaddss  xmm0, xmm1, xmm8
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
LinearTrackAngle
==============
*/

void __fastcall LinearTrackAngle(double tgt, double cur, float rate, double deltaTime)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vsubss  xmm4, xmm0, xmm1
    vmovaps xmm5, xmm0
    vmovss  xmm0, cs:__real@43340000
    vcomiss xmm4, xmm0
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm1
    vmovss  xmm1, cs:__real@c3b40000
  }
  while ( 1 )
  {
    __asm
    {
      vaddss  xmm5, xmm5, xmm1
      vsubss  xmm3, xmm5, xmm6
      vcomiss xmm3, xmm0
    }
  }
}

/*
==============
DiffTrack
==============
*/

float __fastcall DiffTrack(double tgt, float cur, float rate, float deltaTime)
{
  char v4; 
  char v5; 

  __asm
  {
    vsubss  xmm4, xmm0, xmm1
    vmulss  xmm2, xmm4, xmm2
    vmulss  xmm5, xmm2, xmm3
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm4, xmm4, xmm3
    vcomiss xmm4, cs:__real@3a83126f
  }
  if ( !(v4 | v5) )
  {
    __asm
    {
      vandps  xmm2, xmm5, xmm3
      vcomiss xmm4, xmm2
    }
    if ( !v4 )
      __asm { vaddss  xmm0, xmm5, xmm1 }
  }
  return *(float *)&tgt;
}

/*
==============
DiffTrackAngle
==============
*/

void __fastcall DiffTrackAngle(double tgt, float cur, double rate, double deltaTime)
{
  __asm
  {
    vsubss  xmm4, xmm0, xmm1
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps xmm5, xmm0
    vmovss  xmm0, cs:__real@43340000
    vcomiss xmm4, xmm0
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovss  xmm4, cs:__real@c3b40000
  }
  while ( 1 )
  {
    __asm
    {
      vaddss  xmm5, xmm5, xmm4
      vsubss  xmm3, xmm5, xmm1
      vcomiss xmm3, xmm0
    }
  }
}

/*
==============
SinCosDeg
==============
*/

void __fastcall SinCosDeg(double degrees, float *s, float *c)
{
  bool v8; 
  bool v9; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 380, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  v8 = c == NULL;
  if ( !c )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 381, ASSERT_TYPE_SANITY, "( c )", "%s", "c");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm1, xmm6, cs:__real@43b40000
    vxorps  xmm2, xmm2, xmm2
    vcmpltss xmm0, xmm6, xmm2
    vblendvps xmm3, xmm6, xmm1, xmm0
    vucomiss xmm3, xmm2
    vmovss  [rsp+48h+arg_0], xmm3
  }
  if ( v8 )
  {
    *c = 1.0;
    *s = 0.0;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    __asm { vucomiss xmm3, cs:__real@42b40000 }
    if ( v8 )
    {
      *c = 0.0;
      *s = 1.0;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
    else
    {
      __asm { vucomiss xmm3, cs:__real@43340000 }
      if ( v8 )
      {
        *c = -1.0;
        *s = 0.0;
        __asm { vmovaps xmm6, [rsp+48h+var_18] }
      }
      else
      {
        __asm { vucomiss xmm3, cs:__real@43870000 }
        if ( v8 )
        {
          *c = 0.0;
          *s = -1.0;
          __asm { vmovaps xmm6, [rsp+48h+var_18] }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm3, cs:__real@3c8efa35; radians
            vmovaps xmm6, [rsp+48h+var_18]
          }
          FastSinCos(*(const float *)&_XMM0, s, c);
        }
      }
    }
  }
}

/*
==============
FudgeFloat
==============
*/

float __fastcall FudgeFloat(double f, int lsbError, int lsbCount)
{
  int v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 

  v3 = 1 << lsbCount;
  __asm { vmovss  [rsp+arg_0], xmm0 }
  v4 = v6 & (v3 - 1);
  if ( v4 > lsbError )
  {
    if ( v3 - v4 <= lsbError )
    {
      v8 = v3 - v4 + v6;
      __asm { vmovss  xmm0, [rsp+arg_0] }
    }
  }
  else
  {
    v7 = v6 - v4;
    __asm { vmovss  xmm0, [rsp+arg_0] }
  }
  return *(float *)&f;
}

/*
==============
SnapFloat
==============
*/

float __fastcall SnapFloat(double f, double granularity, double epsilon)
{
  unsigned int v16; 
  int v17; 
  double v37; 
  double v38; 
  int v43; 
  int v44; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm8, xmm0
    vcomiss xmm6, xmm9
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm9, xmm0, xmm7
    vmulss  xmm1, xmm9, cs:__real@3f000000
    vcomiss xmm6, xmm1
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+88h+var_58], xmm0
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  [rsp+88h+var_60], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 447, ASSERT_TYPE_ASSERT, "( epsilon < 0.5f / granularity )", "%g, %g", v37, v38) )
    __debugbreak();
  __asm { vmovss  [rsp+88h+arg_0], xmm8 }
  v16 = v43 & 0xFFF;
  if ( v16 <= 4 )
  {
    v17 = v43 - v16;
LABEL_7:
    v44 = v17;
    __asm { vmovss  xmm8, [rsp+88h+arg_0] }
    goto LABEL_8;
  }
  if ( (int)(4096 - v16) <= 4 )
  {
    v17 = 4096 - v16 + v43;
    goto LABEL_7;
  }
LABEL_8:
  __asm
  {
    vmulss  xmm0, xmm8, xmm7
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm7, [rsp+88h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm9
    vmovaps xmm9, [rsp+88h+var_48]
    vsubss  xmm1, xmm2, xmm8
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcmpless xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vblendvps xmm0, xmm8, xmm2, xmm0
    vmovaps xmm8, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
RotatePointAroundVector
==============
*/

void __fastcall RotatePointAroundVector(vec3_t *dst, const vec3_t *dir, const vec3_t *point, double degrees)
{
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  float c; 
  float s; 
  tmat33_t<vec3_t> matrix; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmulss  xmm6, xmm3, cs:__real@3c8efa35
    vmovss  xmm3, dword ptr [rdx+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBX = dir;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+128h+var_E8], xmm1
    vcvtss2sd xmm2, xmm3, xmm3
    vmovsd  [rsp+128h+var_F0], xmm2
    vcvtss2sd xmm3, xmm4, xmm4
    vmovsd  [rsp+128h+var_F8], xmm3
    vcvtss2sd xmm0, xmm5, xmm5
    vmovsd  [rsp+128h+var_100], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v72, v73, v74, v75) )
    __debugbreak();
  __asm { vmovss  [rsp+128h+c], xmm6 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm0, [rsp+128h+s]
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm12, dword ptr [rbx+8]
    vmovss  xmm14, [rsp+128h+c]
    vmulss  xmm13, xmm4, xmm0
    vmulss  xmm5, xmm12, xmm0
    vsubss  xmm2, xmm7, xmm14
    vmulss  xmm1, xmm4, xmm2
    vmulss  xmm7, xmm1, xmm12
    vmulss  xmm11, xmm9, xmm0
    vmulss  xmm0, xmm1, xmm4
    vaddss  xmm1, xmm0, xmm14
    vmulss  xmm6, xmm9, xmm2
    vmulss  xmm10, xmm12, xmm2
    vmovss  dword ptr [rsp+128h+matrix], xmm1
    vaddss  xmm0, xmm7, xmm11
    vmovss  dword ptr [rsp+128h+matrix+8], xmm0
    vmulss  xmm3, xmm6, xmm4
    vsubss  xmm2, xmm3, xmm5
    vmulss  xmm0, xmm6, xmm9
    vmovss  dword ptr [rsp+128h+matrix+4], xmm2
    vaddss  xmm2, xmm0, xmm14
    vaddss  xmm1, xmm3, xmm5
    vsubss  xmm0, xmm7, xmm11
    vmovss  dword ptr [rsp+128h+matrix+0Ch], xmm1
    vmulss  xmm8, xmm10, xmm9
    vsubss  xmm1, xmm8, xmm13
    vmovss  dword ptr [rsp+128h+matrix+18h], xmm0
    vmulss  xmm0, xmm10, xmm12
    vmovss  dword ptr [rsp+128h+matrix+10h], xmm2
    vmovss  dword ptr [rsp+128h+matrix+14h], xmm1
    vaddss  xmm2, xmm0, xmm14
    vaddss  xmm1, xmm8, xmm13
    vmovss  dword ptr [rsp+128h+matrix+20h], xmm2
    vmovss  dword ptr [rsp+128h+matrix+1Ch], xmm1
  }
  Vec3Rotate(point, &matrix, dst);
  _R11 = &v79;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
YawVectors
==============
*/

void __fastcall YawVectors(double yaw, vec3_t *forward, vec3_t *right)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = right;
  _RDI = forward;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, [rsp+28h+c]
    vmovss  xmm1, [rsp+28h+s]
  }
  if ( _RDI )
  {
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    _RDI->v[2] = 0.0;
  }
  if ( _RBX )
  {
    __asm
    {
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx], xmm1
    }
    _RBX->v[2] = 0.0;
  }
}

/*
==============
YawVectors2D
==============
*/

void __fastcall YawVectors2D(double yaw, vec2_t *forward, vec2_t *right)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = right;
  _RDI = forward;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, [rsp+28h+c]
    vmovss  xmm1, [rsp+28h+s]
  }
  if ( _RDI )
  {
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  if ( _RBX )
  {
    __asm
    {
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx], xmm1
    }
  }
}

/*
==============
ProjectPointOntoVector
==============
*/
void ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [rcx]
    vsubss  xmm5, xmm0, xmm4
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps [rsp+58h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps [rsp+58h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
    vsubss  xmm9, xmm0, dword ptr [rdx+4]
    vsubss  xmm8, xmm1, xmm4
    vmovss  xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+58h+var_58], xmm10
    vsubss  xmm10, xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm3, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm3, xmm0
    vmulss  xmm1, xmm9, xmm6
    vmulss  xmm0, xmm8, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm7
    vaddss  xmm2, xmm2, xmm1
    vdivss  xmm3, xmm2, xmm3
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [r9], xmm1
    vmulss  xmm2, xmm6, xmm3
    vaddss  xmm0, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r9+4], xmm0
    vmulss  xmm1, xmm7, xmm3
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+8], xmm2
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vmovaps xmm10, [rsp+58h+var_58]
  }
}

/*
==============
PerpendicularVector
==============
*/
void PerpendicularVector(const vec3_t *src, vec3_t *dst)
{
  double v52; 
  double v53; 
  double v54; 
  double v55; 

  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RDI = dst;
  _RBX = src;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+98h+var_58], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+98h+var_60], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+98h+var_68], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+98h+var_70], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 541, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( src ) )", "(%g, %g, %g) len %g", v52, v53, v54, v55) )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm1
    vmovss  [rsp+98h+var_40], xmm0
    vmovss  [rsp+98h+var_44], xmm2
    vmulss  xmm3, xmm4, xmm4
    vcomiss xmm3, xmm2
    vmovss  [rsp+98h+var_48], xmm3
  }
  _RCX = 0i64;
  __asm
  {
    vcomiss xmm0, [rsp+rcx*4+98h+var_48]
    vmovss  xmm0, dword ptr [rbx+rcx*4]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm1
    vaddss  xmm1, xmm7, dword ptr [rdi+rcx*4]
    vmovss  dword ptr [rdi+rcx*4], xmm1
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rdi+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
PerpendicularUpVector
==============
*/
void PerpendicularUpVector(const vec3_t *src, vec3_t *dst)
{
  float v37; 
  float v38; 
  float v39; 
  float c; 
  float v41; 
  float s[3]; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = dst;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  _RBX = src;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm8, xmm7
    vmovaps [rsp+88h+var_48], xmm9
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmm1, xmm6; X
    vmovaps xmm0, xmm8; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm9, xmm0, cs:__real@42652ee0
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm1, xmm0, xmm0; X
    vmovss  xmm0, dword ptr [rbx+8]; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm8, xmm0, cs:__real@c2652ee0
    vmulss  xmm0, xmm9, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm { vmulss  xmm0, xmm8, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, &v39, &v37);
  if ( _RDI )
  {
    __asm { vxorps  xmm0, xmm0, xmm0; radians }
    FastSinCos(*(const float *)&_XMM0, &v41, &v38);
    __asm
    {
      vmovss  xmm6, [rsp+88h+var_64]
      vmulss  xmm4, xmm6, [rsp+88h+var_60]
      vmovss  xmm3, [rsp+88h+var_58]
      vmulss  xmm1, xmm4, [rsp+88h+c]
      vmulss  xmm0, xmm3, [rsp+88h+s]
      vmulss  xmm2, xmm4, [rsp+88h+s]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, [rsp+88h+c]
      vmovss  dword ptr [rdi], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm6, [rsp+88h+var_68]
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi+4], xmm1
    }
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
ConvexHullIntersectsSphere
==============
*/

char __fastcall ConvexHullIntersectsSphere(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *sphereCenter, double sphereRadius)
{
  unsigned int v6; 
  __int128 v23; 

  __asm { vmovss  xmm0, dword ptr [r8] }
  _R9 = hullPlanes;
  HIDWORD(v23) = 0;
  v6 = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [r8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r8+8], 20h ; ' '
    vmovaps xmm5, xmm3
    vshufps xmm5, xmm5, xmm5, 0
  }
  if ( !numPlanes )
    return 1;
  while ( 1 )
  {
    _RAX = 2i64 * v6;
    __asm
    {
      vmovups xmm2, xmmword ptr [r9+rax*8]
      vmulps  xmm0, xmm4, xmm2
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm3, xmm1, xmm1
      vshufps xmm2, xmm2, xmm2, 0FFh
      vhaddps xmm0, xmm3, xmm3
      vsubps  xmm1, xmm0, xmm2
      vcmpleps xmm2, xmm1, xmm5
      vmovmskps eax, xmm2
    }
    if ( !(_DWORD)_RAX )
      break;
    if ( ++v6 >= numPlanes )
      return 1;
  }
  return 0;
}

/*
==============
ConvexHullIntersectsAABB
==============
*/
bool ConvexHullIntersectsAABB(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *AABBMins, const vec3_t *AABBMaxs)
{
  unsigned int v8; 
  bool result; 
  __int128 v33; 
  __int128 v34; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm0, dword ptr [r8]
  }
  _R10 = hullPlanes;
  HIDWORD(v33) = 0;
  v8 = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr [r8+4], 10h
    vinsertps xmm5, xmm5, dword ptr [r8+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r9]
    vmovups xmmword ptr [rsp], xmm5
  }
  HIDWORD(v34) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [r9+4], 10h
    vinsertps xmm6, xmm6, dword ptr [r9+8], 20h ; ' '
  }
  if ( numPlanes )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
    while ( 1 )
    {
      _RAX = 2i64 * v8;
      __asm
      {
        vmovups xmm4, xmmword ptr [r10+rax*8]
        vmovups xmm0, xmm4
        vblendvps xmm1, xmm5, xmm6, xmm0
        vmulps  xmm2, xmm1, xmm4
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm3, xmm0, xmm0
        vhaddps xmm0, xmm3, xmm3
        vshufps xmm1, xmm4, xmm4, 0FFh
        vsubps  xmm1, xmm0, xmm1
        vcmpleps xmm2, xmm1, xmm7
        vmovmskps eax, xmm2
      }
      if ( !(_DWORD)_RAX )
        break;
      if ( ++v8 >= numPlanes )
        goto LABEL_5;
    }
    result = 0;
  }
  else
  {
LABEL_5:
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return result;
}

/*
==============
IntersectPlanes
==============
*/
bool IntersectPlanes(const dvec4_t (*plane)[3], dvec3_t *xyz)
{
  bool result; 

  __asm
  {
    vmovsd  xmm4, qword ptr [rcx+48h]
    vmovsd  xmm5, qword ptr [rcx+30h]
    vmulsd  xmm2, xmm5, qword ptr [rcx+8]
    vmovaps [rsp+48h+var_18], xmm6
    vmovsd  xmm6, qword ptr [rcx+50h]
    vmulsd  xmm0, xmm4, xmm5
    vmovaps [rsp+48h+var_28], xmm7
    vmovsd  xmm7, qword ptr [rcx+28h]
    vmulsd  xmm1, xmm6, xmm7
    vmovaps [rsp+48h+var_38], xmm8
    vsubsd  xmm8, xmm1, xmm0
    vmulsd  xmm1, xmm4, qword ptr [rcx+10h]
    vmulsd  xmm0, xmm6, qword ptr [rcx+8]
    vsubsd  xmm6, xmm1, xmm0
    vmulsd  xmm0, xmm7, qword ptr [rcx+10h]
    vmulsd  xmm1, xmm8, qword ptr [rcx]
    vsubsd  xmm4, xmm2, xmm0
    vmulsd  xmm0, xmm6, qword ptr [rcx+20h]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm4, qword ptr [rcx+40h]
    vaddsd  xmm3, xmm2, xmm1
    vandpd  xmm0, xmm3, cs:__xmm@7fffffffffffffff7fffffffffffffff
    vcomisd xmm0, cs:__real@3f50624de0000000
    vmulsd  xmm1, xmm6, qword ptr [rcx+38h]
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovaps [rsp+48h+var_48], xmm10
  }
  result = 1;
  __asm
  {
    vdivsd  xmm10, xmm0, xmm3
    vmulsd  xmm0, xmm8, qword ptr [rcx+18h]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm4, qword ptr [rcx+58h]
    vaddsd  xmm2, xmm2, xmm1
    vmulsd  xmm0, xmm2, xmm10
    vmovsd  qword ptr [rdx], xmm0
    vmovsd  xmm8, qword ptr [rcx]
    vmulsd  xmm1, xmm8, qword ptr [rcx+50h]
    vmovsd  xmm5, qword ptr [rcx+40h]
    vmulsd  xmm0, xmm5, qword ptr [rcx+10h]
    vmovsd  xmm7, qword ptr [rcx+20h]
    vmulsd  xmm2, xmm5, qword ptr [rcx+30h]
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, qword ptr [rcx+38h]
    vmulsd  xmm0, xmm7, qword ptr [rcx+50h]
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+18h]
    vmulsd  xmm0, xmm8, qword ptr [rcx+30h]
    vaddsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm7, qword ptr [rcx+10h]
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+58h]
    vaddsd  xmm3, xmm4, xmm2
    vmulsd  xmm0, xmm3, xmm10
    vmovsd  qword ptr [rdx+8], xmm0
    vmovsd  xmm4, qword ptr [rcx+40h]
    vmulsd  xmm1, xmm4, qword ptr [rcx+8]
    vmovsd  xmm2, qword ptr [rcx+48h]
    vmulsd  xmm0, xmm2, qword ptr [rcx]
    vmovsd  xmm8, qword ptr [rcx+20h]
    vmovsd  xmm6, qword ptr [rcx+28h]
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, qword ptr [rcx+38h]
    vmulsd  xmm0, xmm6, xmm4
    vmulsd  xmm2, xmm2, xmm8
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+18h]
    vmulsd  xmm0, xmm8, qword ptr [rcx+8]
    vaddsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm6, qword ptr [rcx]
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+58h]
    vaddsd  xmm3, xmm4, xmm2
    vmulsd  xmm0, xmm3, xmm10
    vmovaps xmm10, [rsp+48h+var_48]
    vmovsd  qword ptr [rdx+10h], xmm0
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
  }
  return result;
}

/*
==============
IntersectPlanes
==============
*/
bool IntersectPlanes(const vec4_t (*plane)[3], vec3_t *xyz)
{
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm4, dword ptr [rcx+28h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovsd  [rsp+0C8h+var_C0], xmm0
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx+14h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx+18h]
    vmovsd  [rsp+0C8h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+24h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx]
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps [rsp+0C8h+var_A8], xmm15
    vmovss  xmm13, dword ptr [rcx+10h]
    vmovss  xmm14, dword ptr [rcx+20h]
    vmovsd  [rsp+0C8h+var_B8], xmm0
    vcvtss2sd xmm9, xmm9, xmm9
    vcvtss2sd xmm10, xmm10, xmm10
    vcvtss2sd xmm11, xmm11, xmm11
    vcvtss2sd xmm4, xmm4, xmm4
    vmulsd  xmm0, xmm10, xmm11
    vmulsd  xmm1, xmm4, xmm9
    vsubsd  xmm7, xmm1, xmm0
    vcvtss2sd xmm8, xmm8, xmm8
    vcvtss2sd xmm6, xmm6, xmm6
    vmulsd  xmm1, xmm4, xmm8
    vmulsd  xmm2, xmm6, xmm11
    vsubsd  xmm15, xmm2, xmm1
    vmulsd  xmm3, xmm10, xmm8
    vmulsd  xmm0, xmm6, xmm9
    vsubsd  xmm0, xmm3, xmm0
    vcvtss2sd xmm12, xmm12, xmm12
    vmulsd  xmm1, xmm12, xmm7
    vcvtss2sd xmm13, xmm13, xmm13
    vmulsd  xmm2, xmm13, xmm15
    vaddsd  xmm3, xmm2, xmm1
    vcvtss2sd xmm14, xmm14, xmm14
    vmovsd  [rsp+0C8h+var_B0], xmm0
    vmulsd  xmm0, xmm14, xmm0
    vaddsd  xmm5, xmm3, xmm0
    vandpd  xmm1, xmm5, cs:__xmm@7fffffffffffffff7fffffffffffffff
    vcomisd xmm1, cs:__real@3f50624de0000000
    vmulsd  xmm2, xmm7, [rsp+0C8h+var_C0]
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmulsd  xmm1, xmm15, [rsp+0C8h+var_C8]
    vaddsd  xmm3, xmm2, xmm1
    vdivsd  xmm5, xmm0, xmm5
    vmovsd  xmm0, [rsp+0C8h+var_B8]
    vmulsd  xmm0, xmm0, [rsp+0C8h+var_B0]
    vaddsd  xmm2, xmm3, xmm0
    vmulsd  xmm7, xmm2, xmm5
    vmulsd  xmm1, xmm12, xmm4
    vmulsd  xmm0, xmm6, xmm14
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, [rsp+0C8h+var_C8]
    vmulsd  xmm0, xmm13, xmm4
    vmulsd  xmm2, xmm10, xmm14
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, [rsp+0C8h+var_C0]
    vaddsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm13, xmm6
    vmulsd  xmm0, xmm10, xmm12
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, [rsp+0C8h+var_B8]
    vaddsd  xmm3, xmm4, xmm2
    vmulsd  xmm6, xmm3, xmm5
    vmulsd  xmm1, xmm13, xmm11
    vmulsd  xmm0, xmm9, xmm14
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, [rsp+0C8h+var_C0]
    vmulsd  xmm0, xmm12, xmm11
    vmulsd  xmm2, xmm8, xmm14
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, [rsp+0C8h+var_C8]
    vaddsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm12, xmm9
    vmulsd  xmm0, xmm13, xmm8
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, [rsp+0C8h+var_B8]
    vcvtsd2ss xmm0, xmm7, xmm7
    vaddsd  xmm3, xmm4, xmm2
    vmulsd  xmm5, xmm3, xmm5
    vmovss  dword ptr [rdx], xmm0
    vcvtsd2ss xmm0, xmm5, xmm5
    vcvtsd2ss xmm1, xmm6, xmm6
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  dword ptr [rdx+4], xmm1
  }
  result = 1;
  __asm { vmovaps xmm13, [rsp+0C8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovaps xmm15, [rsp+0C8h+var_A8]
  }
  return result;
}

/*
==============
IntersectTwoPlanes
==============
*/
bool IntersectTwoPlanes(const vec4_t (*planes)[2], vec3_t *isectPoint, vec3_t *isectDir)
{
  char v18; 
  char v19; 
  bool result; 

  _R15 = isectPoint;
  _RBX = isectDir;
  _RSI = planes;
  Vec3Cross((const vec3_t *)planes, (const vec3_t *)&(*planes)[1], isectDir);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm4, xmm0, xmm0
    vmulss  xmm3, xmm1, xmm1
    vaddss  xmm1, xmm3, xmm2
    vaddss  xmm0, xmm1, xmm4
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3d719799812dea11
  }
  if ( v18 | v19 )
    return 0;
  __asm
  {
    vcomiss xmm2, xmm3
    vmovss  [rsp+0B8h+var_78], xmm3
  }
  _R13 = 0i64;
  __asm
  {
    vmovss  [rsp+0B8h+var_74], xmm2
    vmovss  [rsp+0B8h+var_70], xmm4
    vmovaps [rsp+0B8h+var_48], xmm6
    vcomiss xmm4, [rsp+r13*4+0B8h+var_78]
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  _R14 = 2i64;
  _RBP = 1i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+r14*4+10h]
    vmovss  xmm1, dword ptr [rsi+r14*4]
    vmulss  xmm3, xmm0, dword ptr [rsi+rbp*4]
    vmulss  xmm2, xmm1, dword ptr [rsi+rbp*4+10h]
    vsubss  xmm6, xmm3, xmm2
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm1, dword ptr [rsi+r14*4+10h]
    vmulss  xmm3, xmm1, dword ptr [rsi+0Ch]
    vdivss  xmm7, xmm0, xmm6
    vmovss  xmm0, dword ptr [rsi+r14*4]
    vmulss  xmm2, xmm0, dword ptr [rsi+1Ch]
    vsubss  xmm1, xmm3, xmm2
    vmulss  xmm6, xmm1, xmm7
    vmovss  dword ptr [r15+rbp*4], xmm6
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  xmm1, dword ptr [rsi+rbp*4+10h]
    vmulss  xmm3, xmm0, dword ptr [rsi+rbp*4]
    vmulss  xmm2, xmm1, dword ptr [rsi+0Ch]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm6, xmm0, xmm7
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovss  dword ptr [r15+r14*4], xmm6
    vmovaps xmm6, [rsp+0B8h+var_48]
  }
  result = 1;
  _R15->v[0] = 0.0;
  return result;
}

/*
==============
PlaneFromPoints
==============
*/
bool PlaneFromPoints(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2, float degenerateEpsilon)
{
  char v31; 
  char v32; 
  bool result; 
  vec3_t v1a; 
  vec3_t v0a; 
  char v113; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm6, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm7, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm8, xmm0, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm9, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r9+4]
    vsubss  xmm10, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm11, xmm0, dword ptr [rdx+8]
  }
  _RDI = v0;
  _RBX = plane;
  _RSI = v2;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+v0+8], xmm11
    vmovss  dword ptr [rsp+0F8h+v1], xmm6
    vmovss  dword ptr [rsp+0F8h+v1+4], xmm7
    vmovss  dword ptr [rsp+0F8h+v1+8], xmm8
    vmovss  dword ptr [rsp+0F8h+v0], xmm9
    vmovss  dword ptr [rsp+0F8h+v0+4], xmm10
  }
  Vec3Cross(&v0a, &v1a, (vec3_t *)plane);
  __asm
  {
    vmovss  xmm13, dword ptr [rbx+4]
    vmovss  xmm12, dword ptr [rbx]
    vmovss  xmm14, dword ptr [rbx+8]
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm14
    vaddss  xmm5, xmm2, xmm1
    vcomiss xmm5, cs:__real@40000000
  }
  if ( !v31 )
    goto LABEL_6;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm5, xmm0
  }
  if ( v32 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+degenerateEpsilon]
    vmulss  xmm15, xmm0, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm9, xmm9
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm3, xmm0, xmm15
    vcomiss xmm5, xmm3
  }
  if ( !(v31 | v32) )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm11, xmm0, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm10, xmm0, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm9, xmm0, dword ptr [rbp+8]
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm8, xmm0, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm7, xmm0, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm6, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+0F8h+v0+8], xmm6
    vmovss  dword ptr [rsp+0F8h+v1], xmm11
    vmovss  dword ptr [rsp+0F8h+v1+4], xmm10
    vmovss  dword ptr [rsp+0F8h+v1+8], xmm9
    vmovss  dword ptr [rsp+0F8h+v0], xmm8
    vmovss  dword ptr [rsp+0F8h+v0+4], xmm7
  }
  Vec3Cross(&v0a, &v1a, (vec3_t *)_RBX);
  __asm
  {
    vmovss  xmm13, dword ptr [rbx+4]
    vmovss  xmm12, dword ptr [rbx]
    vmovss  xmm14, dword ptr [rbx+8]
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm14
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm11, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm3, xmm0, xmm15
    vcomiss xmm5, xmm3
  }
  if ( v31 | v32 )
  {
LABEL_5:
    result = 0;
  }
  else
  {
LABEL_6:
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsqrtss xmm1, xmm5, xmm5
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm0, xmm13, xmm2
      vmulss  xmm4, xmm12, xmm2
      vmulss  xmm3, xmm2, xmm14
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx+8], xmm3
      vmulss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm4, dword ptr [rdi]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rdi+8]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+0Ch], xmm2
    }
    result = 1;
  }
  _R11 = &v113;
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
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
  return result;
}

/*
==============
PlaneFromPointsEx
==============
*/
bool PlaneFromPointsEx(dvec4_t *plane, const dvec3_t *v0, const dvec3_t *v1, const dvec3_t *v2, long double degenerateEpsilon)
{
  char v29; 
  char v30; 
  bool result; 
  dvec3_t v1a; 
  dvec3_t v0a; 
  char v104; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovsd  xmm0, qword ptr [r8]
    vsubsd  xmm6, xmm0, qword ptr [rdx]
    vmovsd  xmm0, qword ptr [r8+8]
    vsubsd  xmm7, xmm0, qword ptr [rdx+8]
    vmovsd  xmm0, qword ptr [r8+10h]
    vsubsd  xmm8, xmm0, qword ptr [rdx+10h]
    vmovsd  xmm0, qword ptr [r9]
    vsubsd  xmm9, xmm0, qword ptr [rdx]
    vmovsd  xmm0, qword ptr [r9+8]
    vsubsd  xmm10, xmm0, qword ptr [rdx+8]
    vmovsd  xmm0, qword ptr [r9+10h]
    vsubsd  xmm11, xmm0, qword ptr [rdx+10h]
  }
  _RDI = v0;
  _RBX = (dvec3_t *)plane;
  _RSI = v2;
  __asm
  {
    vmovsd  qword ptr [rsp+0E8h+v0+10h], xmm11
    vmovsd  qword ptr [rsp+0E8h+v1], xmm6
    vmovsd  qword ptr [rsp+0E8h+v1+8], xmm7
    vmovsd  qword ptr [rsp+0E8h+v1+10h], xmm8
    vmovsd  qword ptr [rsp+0E8h+v0], xmm9
    vmovsd  qword ptr [rsp+0E8h+v0+8], xmm10
  }
  DVec3Cross(&v0a, &v1a, (dvec3_t *)plane);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  xmm2, qword ptr [rbx+8]
    vmovsd  xmm3, qword ptr [rbx+10h]
    vmulsd  xmm1, xmm0, xmm0
    vmulsd  xmm0, xmm2, xmm2
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm3, xmm3
    vaddsd  xmm12, xmm2, xmm1
    vcomisd xmm12, cs:__real@4000000000000000
  }
  if ( !v29 )
    goto LABEL_6;
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm12, xmm0
  }
  if ( v30 )
    goto LABEL_5;
  __asm
  {
    vmovsd  xmm0, [rsp+0E8h+degenerateEpsilon]
    vmulsd  xmm13, xmm0, xmm0
    vmulsd  xmm2, xmm7, xmm7
    vmulsd  xmm1, xmm6, xmm6
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm8, xmm8
    vaddsd  xmm4, xmm3, xmm0
    vmulsd  xmm2, xmm9, xmm9
    vmulsd  xmm1, xmm10, xmm10
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm11, xmm11
    vaddsd  xmm2, xmm3, xmm0
    vmulsd  xmm1, xmm4, xmm2
    vmulsd  xmm3, xmm1, xmm13
    vcomisd xmm12, xmm3
  }
  if ( !(v29 | v30) )
    goto LABEL_6;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vsubsd  xmm11, xmm0, qword ptr [rbp+0]
    vmovsd  xmm0, qword ptr [rsi+8]
    vsubsd  xmm10, xmm0, qword ptr [rbp+8]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vsubsd  xmm9, xmm0, qword ptr [rbp+10h]
    vmovsd  xmm0, qword ptr [rdi]
    vsubsd  xmm8, xmm0, qword ptr [rbp+0]
    vmovsd  xmm0, qword ptr [rdi+8]
    vsubsd  xmm7, xmm0, qword ptr [rbp+8]
    vmovsd  xmm0, qword ptr [rdi+10h]
    vsubsd  xmm6, xmm0, qword ptr [rbp+10h]
    vmovsd  qword ptr [rsp+0E8h+v0+10h], xmm6
    vmovsd  qword ptr [rsp+0E8h+v1], xmm11
    vmovsd  qword ptr [rsp+0E8h+v1+8], xmm10
    vmovsd  qword ptr [rsp+0E8h+v1+10h], xmm9
    vmovsd  qword ptr [rsp+0E8h+v0], xmm8
    vmovsd  qword ptr [rsp+0E8h+v0+8], xmm7
  }
  DVec3Cross(&v0a, &v1a, _RBX);
  __asm
  {
    vmulsd  xmm1, xmm10, xmm10
    vmulsd  xmm0, xmm11, xmm11
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm9, xmm9
    vaddsd  xmm4, xmm2, xmm1
    vmulsd  xmm3, xmm7, xmm7
    vmulsd  xmm0, xmm8, xmm8
    vaddsd  xmm2, xmm3, xmm0
    vmulsd  xmm1, xmm6, xmm6
    vaddsd  xmm2, xmm2, xmm1
    vmulsd  xmm0, xmm4, xmm2
    vmulsd  xmm3, xmm0, xmm13
    vcomisd xmm12, xmm3
  }
  if ( v29 | v30 )
  {
LABEL_5:
    result = 0;
  }
  else
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vsqrtsd xmm1, xmm12, xmm12
      vdivsd  xmm2, xmm0, xmm1
      vmovddup xmm2, xmm2
      vmulpd  xmm1, xmm2, xmmword ptr [rbx]
      vmovups xmmword ptr [rbx], xmm1
      vmulsd  xmm4, xmm2, qword ptr [rbx+10h]
      vmovsd  qword ptr [rbx+10h], xmm4
      vmovsd  xmm0, qword ptr [rbx]
      vmulsd  xmm3, xmm0, qword ptr [rdi]
      vmovsd  xmm1, qword ptr [rbx+8]
      vmulsd  xmm2, xmm1, qword ptr [rdi+8]
      vmulsd  xmm0, xmm4, qword ptr [rdi+10h]
      vaddsd  xmm3, xmm3, xmm2
      vaddsd  xmm1, xmm3, xmm0
      vmovsd  qword ptr [rbx+18h], xmm1
    }
    result = 1;
  }
  _R11 = &v104;
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
  }
  return result;
}

/*
==============
PlaneFromPointsEx
==============
*/
bool PlaneFromPointsEx(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2)
{
  bool result; 
  long double v33; 
  dvec3_t v2a; 
  dvec3_t v1a; 
  dvec3_t v0a; 
  dvec4_t planea; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+0A8h+v0], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rsp+0A8h+v0+8], xmm1
    vmovss  xmm1, dword ptr [r8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+0A8h+v0+10h], xmm0
    vmovss  xmm0, dword ptr [r8+4]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rsp+0A8h+v1], xmm1
    vmovss  xmm1, dword ptr [r8+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+0A8h+v1+8], xmm0
    vmovss  xmm0, dword ptr [r9]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rsp+0A8h+v1+10h], xmm1
    vmovss  xmm1, dword ptr [r9+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+0A8h+v2], xmm0
    vmovss  xmm0, dword ptr [r9+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rsp+0A8h+v2+8], xmm1
    vmovsd  xmm1, cs:__real@3f50624de0000000
    vcvtss2sd xmm0, xmm0, xmm0
  }
  _RBX = plane;
  __asm
  {
    vmovsd  qword ptr [rsp+0A8h+v2+10h], xmm0
    vmovsd  [rsp+0A8h+var_88], xmm1
  }
  result = PlaneFromPointsEx(&planea, &v0a, &v1a, &v2a, v33);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+0A8h+plane]
    vmovsd  xmm1, qword ptr [rsp+0A8h+plane+8]
    vcvtpd2ps xmm0, xmm0
    vmovss  dword ptr [rbx], xmm0
    vmovsd  xmm0, qword ptr [rsp+0A8h+plane+10h]
    vcvtpd2ps xmm1, xmm1
    vmovss  dword ptr [rbx+4], xmm1
    vmovsd  xmm1, qword ptr [rsp+0A8h+plane+18h]
    vcvtpd2ps xmm0, xmm0
    vcvtpd2ps xmm1, xmm1
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+0Ch], xmm1
  }
  return result;
}

/*
==============
IsContainedBy
==============
*/
bool IsContainedBy(unsigned int numPlanes, const vec4_t *planes, const vec3_t *vertex)
{
  unsigned int v5; 
  bool result; 

  v5 = 0;
  __asm
  {
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
  }
  if ( numPlanes )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [r8+4]
      vmovss  xmm6, dword ptr [r8]
      vmovss  xmm7, dword ptr [r8+8]
      vmovss  xmm4, cs:__real@3a83126f
    }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rax+4]
        vmulss  xmm0, xmm6, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rax+8]
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm4, dword ptr [rax+0Ch]
        vcomiss xmm3, xmm2
      }
      if ( !__CFADD__(planes, 16i64 * v5) && &planes[v5] != NULL )
        break;
      if ( ++v5 >= numPlanes )
        goto LABEL_5;
    }
    __asm { vmovaps xmm6, [rsp+28h+var_18] }
    result = 0;
    __asm { vmovaps xmm7, [rsp+28h+var_28] }
  }
  else
  {
LABEL_5:
    result = 1;
    __asm
    {
      vmovaps xmm6, [rsp+28h+var_18]
      vmovaps xmm7, [rsp+28h+var_28]
    }
  }
  return result;
}

/*
==============
SnapPointToPlanes
==============
*/

void __fastcall SnapPointToPlanes(const vec4_t *planes, int planeCount, vec3_t *xyz, double snapGrid, float snapEpsilon)
{
  __int64 v19; 
  __int64 v22; 
  bool v27; 
  bool v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  bool v86; 
  bool v87; 
  unsigned __int64 v88; 
  unsigned int v103; 
  bool v105; 
  bool v117; 
  bool v118; 
  char *p_z; 
  unsigned __int64 v128; 
  bool v163; 
  __int64 v164; 
  float *v165; 
  __int64 v179; 
  __int64 v180; 
  int v181[4]; 
  char v186; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovss  xmm6, [rsp+118h+snapEpsilon]
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v19 = 0i64;
  _RBX = xyz;
  v22 = planeCount;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps xmm14, xmm3
  }
  if ( planeCount < 4i64 )
  {
    v30 = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r8+4]
      vmovss  xmm4, dword ptr [r8]
      vmovss  xmm5, dword ptr [r8+8]
    }
    _RAX = (char *)&planes[2].xyz.y;
    __asm
    {
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps [rsp+118h+var_A8], xmm13
    }
    v27 = __CFSHR__(planeCount - 4i64, 2);
    v29 = ((unsigned __int64)(planeCount - 4i64) >> 2) + 1;
    v28 = v27 || v29 == 0;
    v30 = 4 * v29;
    do
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rax-24h]
        vmulss  xmm0, xmm3, dword ptr [rax-20h]
        vmulss  xmm1, xmm8, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rax-1Ch]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm1, xmm2, dword ptr [rax-18h]
        vcomiss xmm1, xmm6
        vmovaps xmm11, xmm3
        vmovaps xmm12, xmm4
        vmovaps xmm13, xmm5
      }
      if ( v28 )
      {
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm1, xmm0
        }
        if ( !v27 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm7
            vmulss  xmm0, xmm8, xmm1
            vaddss  xmm12, xmm0, xmm4
            vmovss  dword ptr [r8], xmm12
            vmulss  xmm0, xmm1, dword ptr [rax-20h]
            vaddss  xmm11, xmm0, xmm3
            vmovss  dword ptr [r8+4], xmm11
            vmulss  xmm0, xmm1, dword ptr [rax-1Ch]
            vaddss  xmm13, xmm0, xmm5
            vmovss  dword ptr [r8+8], xmm13
          }
        }
      }
      __asm
      {
        vmulss  xmm1, xmm11, dword ptr [rax-10h]
        vmovss  xmm4, dword ptr [rax-14h]
        vmulss  xmm0, xmm4, xmm12
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm13, dword ptr [rax-0Ch]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm3, xmm2, dword ptr [rax-8]
        vcomiss xmm3, xmm6
        vmovaps xmm8, xmm11
        vmovaps xmm9, xmm12
        vmovaps xmm10, xmm13
      }
      if ( v28 )
      {
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm3, xmm0
        }
        if ( !v27 )
        {
          __asm
          {
            vxorps  xmm1, xmm3, xmm7
            vmulss  xmm0, xmm4, xmm1
            vaddss  xmm9, xmm0, xmm12
            vmovss  dword ptr [r8], xmm9
            vmulss  xmm0, xmm1, dword ptr [rax-10h]
            vaddss  xmm8, xmm0, xmm11
            vmovss  dword ptr [r8+4], xmm8
            vmulss  xmm1, xmm1, dword ptr [rax-0Ch]
            vaddss  xmm10, xmm1, xmm13
            vmovss  dword ptr [r8+8], xmm10
          }
        }
      }
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rax]
        vmovss  xmm11, dword ptr [rax-4]
        vmulss  xmm0, xmm11, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, dword ptr [rax+4]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm1, xmm2, dword ptr [rax+8]
        vcomiss xmm1, xmm6
        vmovaps xmm3, xmm8
        vmovaps xmm4, xmm9
        vmovaps xmm5, xmm10
      }
      if ( v28 )
      {
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm1, xmm0
        }
        if ( !v27 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm7
            vmulss  xmm0, xmm11, xmm1
            vaddss  xmm4, xmm0, xmm9
            vmovss  dword ptr [r8], xmm4
            vmulss  xmm0, xmm1, dword ptr [rax]
            vaddss  xmm3, xmm0, xmm8
            vmovss  dword ptr [r8+4], xmm3
            vmulss  xmm0, xmm1, dword ptr [rax+4]
            vaddss  xmm5, xmm0, xmm10
            vmovss  dword ptr [r8+8], xmm5
          }
        }
      }
      __asm
      {
        vmovss  xmm8, dword ptr [rax+0Ch]
        vmulss  xmm0, xmm3, dword ptr [rax+10h]
        vmulss  xmm1, xmm8, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rax+14h]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm1, xmm2, dword ptr [rax+18h]
        vcomiss xmm1, xmm6
      }
      if ( v28 )
      {
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm1, xmm0
        }
        if ( !v27 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm7
            vmulss  xmm0, xmm8, xmm1
            vaddss  xmm4, xmm0, dword ptr [r8]
            vmovss  dword ptr [r8], xmm4
            vmulss  xmm0, xmm1, dword ptr [rax+10h]
            vaddss  xmm3, xmm0, dword ptr [r8+4]
            vmovss  dword ptr [r8+4], xmm3
            vmulss  xmm0, xmm1, dword ptr [rax+14h]
            vaddss  xmm5, xmm0, dword ptr [r8+8]
            vmovss  dword ptr [r8+8], xmm5
          }
        }
      }
      _RAX += 64;
      v27 = v29-- == 0;
      v28 = v27 || v29 == 0;
    }
    while ( v29 );
    __asm
    {
      vmovaps xmm13, [rsp+118h+var_A8]
      vmovaps xmm12, [rsp+118h+var_98]
    }
  }
  if ( (__int64)v30 < v22 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r8+4]
      vmovss  xmm5, dword ptr [r8+8]
    }
    _RCX = &planes[v30].v[1];
    v86 = v22 < v30;
    v88 = v22 - v30;
    v87 = v22 <= v30;
    do
    {
      __asm
      {
        vmulss  xmm0, xmm4, dword ptr [rcx]
        vmovss  xmm8, dword ptr [r8]
        vmovss  xmm9, dword ptr [rcx-4]
        vmulss  xmm1, xmm8, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rcx+4]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm3, xmm0, dword ptr [rcx+8]
        vcomiss xmm3, xmm6
      }
      if ( v87 )
      {
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm3, xmm0
        }
        if ( !v86 )
        {
          __asm
          {
            vxorps  xmm3, xmm3, xmm7
            vmulss  xmm0, xmm9, xmm3
            vaddss  xmm1, xmm0, xmm8
            vmovss  dword ptr [r8], xmm1
            vmulss  xmm2, xmm3, dword ptr [rcx]
            vaddss  xmm4, xmm4, xmm2
            vmovss  dword ptr [r8+4], xmm4
            vmulss  xmm0, xmm3, dword ptr [rcx+4]
            vaddss  xmm5, xmm5, xmm0
            vmovss  dword ptr [r8+8], xmm5
          }
        }
      }
      _RCX += 4;
      v86 = v88-- == 0;
      v87 = v86 || v88 == 0;
    }
    while ( v88 );
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, cs:__real@3f000000
  }
  v103 = 0;
  _R14 = (char *)v181 - (char *)xyz;
  v105 = 1;
  _RSI = xyz;
  __asm
  {
    vdivss  xmm8, xmm0, xmm14
    vxorps  xmm9, xmm9, xmm9
  }
  do
  {
    if ( !v105 )
    {
      LODWORD(v180) = 3;
      LODWORD(v179) = v103;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v179, v180) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm8, dword ptr [rsi]
      vaddss  xmm2, xmm0, xmm11
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm2, xmm1, xmm2
      vroundss xmm0, xmm9, xmm2, 1
      vcvttss2si eax, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm7, xmm0, xmm14
    }
    v117 = v103 < 3;
    if ( v103 >= 3 )
    {
      LODWORD(v180) = 3;
      LODWORD(v179) = v103;
      v118 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v179, v180);
      v117 = 0;
      if ( v118 )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm7, dword ptr [rsi]
      vandps  xmm0, xmm0, xmm10
      vcomiss xmm0, xmm6
    }
    if ( !v117 )
    {
      if ( v103 >= 3 )
      {
        LODWORD(v180) = 3;
        LODWORD(v179) = v103;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v179, v180) )
          __debugbreak();
      }
      __asm { vmovss  xmm7, dword ptr [rsi] }
    }
    if ( v103 >= 3 )
    {
      LODWORD(v180) = 3;
      LODWORD(v179) = v103;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v179, v180) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r14+rsi], xmm7 }
    _RSI = (vec3_t *)((char *)_RSI + 4);
    v105 = ++v103 < 3;
  }
  while ( (int)v103 < 3 );
  __asm
  {
    vmovss  xmm9, [rsp+118h+var_D8]
    vucomiss xmm9, dword ptr [rbx]
    vmovss  xmm7, [rsp+118h+var_D0]
    vmovss  xmm8, [rsp+118h+var_D4]
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm11, [rsp+118h+var_88]
  }
  if ( v103 == 3 )
  {
    __asm
    {
      vucomiss xmm8, dword ptr [rbx+4]
      vucomiss xmm7, dword ptr [rbx+8]
    }
  }
  else
  {
    __asm { vxorps  xmm4, xmm4, xmm4 }
    if ( v22 >= 4 )
    {
      p_z = (char *)&planes[1].xyz.z;
      v128 = ((unsigned __int64)(v22 - 4) >> 2) + 1;
      v19 = 4 * v128;
      do
      {
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rcx-14h]
          vmulss  xmm0, xmm9, dword ptr [rcx-18h]
        }
        p_z += 64;
        __asm
        {
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rcx-50h]
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm3, xmm0, dword ptr [rcx-4Ch]
          vmulss  xmm0, xmm9, dword ptr [rcx-48h]
          vmulss  xmm1, xmm8, dword ptr [rcx-44h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rcx-40h]
          vaddss  xmm2, xmm2, xmm1
          vsubss  xmm0, xmm2, dword ptr [rcx-3Ch]
          vmulss  xmm1, xmm8, dword ptr [rcx-34h]
          vandps  xmm3, xmm3, xmm10
          vmaxss  xmm4, xmm3, xmm4
          vandps  xmm0, xmm0, xmm10
          vmaxss  xmm5, xmm3, xmm6
          vmaxss  xmm4, xmm0, xmm4
          vmaxss  xmm5, xmm0, xmm5
          vmulss  xmm0, xmm9, dword ptr [rcx-38h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rcx-30h]
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm3, xmm0, dword ptr [rcx-2Ch]
          vmulss  xmm0, xmm9, dword ptr [rcx-28h]
          vmulss  xmm1, xmm8, dword ptr [rcx-24h]
          vandps  xmm3, xmm3, xmm10
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm5, xmm3, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rcx-20h]
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm3, xmm0, dword ptr [rcx-1Ch]
          vandps  xmm3, xmm3, xmm10
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm6, xmm3, xmm5
        }
        --v128;
      }
      while ( v128 );
    }
    v163 = v19 < (unsigned __int64)v22;
    if ( v19 < v22 )
    {
      v164 = v22 - v19;
      v165 = &planes[v19].v[2];
      do
      {
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rcx-4]
          vmulss  xmm0, xmm9, dword ptr [rcx-8]
        }
        v165 += 4;
        __asm
        {
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rcx-10h]
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm3, xmm0, dword ptr [rcx-0Ch]
          vandps  xmm3, xmm3, xmm10
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm6, xmm3, xmm6
        }
        v163 = v164-- == 0;
      }
      while ( v164 );
    }
    __asm { vcomiss xmm4, xmm6 }
    if ( v163 )
    {
      __asm
      {
        vmovss  dword ptr [rbx], xmm9
        vmovss  dword ptr [rbx+4], xmm8
        vmovss  dword ptr [rbx+8], xmm7
      }
    }
  }
  _R11 = &v186;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
SnapPointToIntersectingPlanes
==============
*/

void __fastcall SnapPointToIntersectingPlanes(const vec4_t (*planes)[3], vec3_t *xyz, double snapGrid, double snapEpsilon)
{
  unsigned int v19; 
  bool v21; 
  bool v36; 
  bool v37; 
  __int64 v106; 
  __int64 v107; 
  int v109[4]; 
  char v112; 
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
    vmovaps [rsp+118h+var_B8], xmm15
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm12, cs:__real@3f000000
  }
  v19 = 0;
  _RBP = (char *)v109 - (char *)xyz;
  v21 = 1;
  _RSI = xyz;
  __asm
  {
    vmovss  [rsp+118h+var_D8], xmm3
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  _RDI = xyz;
  __asm
  {
    vdivss  xmm10, xmm0, xmm2
    vxorps  xmm11, xmm11, xmm11
  }
  do
  {
    if ( !v21 )
    {
      LODWORD(v107) = 3;
      LODWORD(v106) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v106, v107) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm10, dword ptr [rdi]
      vaddss  xmm2, xmm0, xmm12
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm2, xmm1, xmm2
      vroundss xmm0, xmm11, xmm2, 1
      vcvttss2si eax, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, xmm7
    }
    v36 = v19 < 3;
    if ( v19 >= 3 )
    {
      LODWORD(v107) = 3;
      LODWORD(v106) = v19;
      v37 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v106, v107);
      v36 = 0;
      if ( v37 )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rdi]
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm8
    }
    if ( !v36 )
    {
      if ( v19 >= 3 )
      {
        LODWORD(v107) = 3;
        LODWORD(v106) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v106, v107) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
    }
    if ( v19 >= 3 )
    {
      LODWORD(v107) = 3;
      LODWORD(v106) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v106, v107) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v21 = ++v19 < 3;
  }
  while ( (int)v19 < 3 );
  __asm
  {
    vmovss  xmm15, dword ptr [rsi]
    vmovss  xmm14, [rsp+118h+var_D0]
    vucomiss xmm14, xmm15
    vmovss  xmm12, [rsp+118h+var_C8]
    vmovss  xmm13, [rsp+118h+var_CC]
  }
  if ( v19 == 3 )
  {
    __asm
    {
      vucomiss xmm13, dword ptr [rsi+4]
      vucomiss xmm12, dword ptr [rsi+8]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm10, dword ptr [rsi+4]
      vmovss  xmm11, dword ptr [rsi+8]
      vmulss  xmm1, xmm14, dword ptr [r14]
      vmulss  xmm0, xmm13, dword ptr [r14+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, dword ptr [r14+8]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm3, xmm2, dword ptr [r14+0Ch]
      vmulss  xmm2, xmm15, dword ptr [r14]
      vmulss  xmm1, xmm10, dword ptr [r14+4]
      vxorps  xmm0, xmm0, xmm0
      vandps  xmm3, xmm3, xmm9
      vmaxss  xmm8, xmm3, xmm0
      vmulss  xmm0, xmm11, dword ptr [r14+8]
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm1, xmm2, dword ptr [r14+0Ch]
      vmulss  xmm0, xmm14, dword ptr [r14+10h]
      vandps  xmm1, xmm1, xmm9
      vmaxss  xmm7, xmm1, [rsp+118h+var_D8]
      vmulss  xmm1, xmm13, dword ptr [r14+14h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, dword ptr [r14+18h]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, dword ptr [r14+1Ch]
      vmulss  xmm1, xmm10, dword ptr [r14+14h]
      vandps  xmm0, xmm0, xmm9
      vmaxss  xmm8, xmm0, xmm8
      vmulss  xmm0, xmm15, dword ptr [r14+10h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [r14+18h]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, dword ptr [r14+1Ch]
      vmulss  xmm1, xmm13, dword ptr [r14+24h]
      vandps  xmm0, xmm0, xmm9
      vmaxss  xmm9, xmm0, xmm7
      vmulss  xmm0, xmm14, dword ptr [r14+20h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, dword ptr [r14+28h]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, dword ptr [r14+2Ch]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm1, xmm10, dword ptr [r14+24h]
      vmaxss  xmm3, xmm0, xmm8
      vmulss  xmm0, xmm15, dword ptr [r14+20h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [r14+28h]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, dword ptr [r14+2Ch]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmaxss  xmm1, xmm0, xmm9
      vcomiss xmm3, xmm1
    }
  }
  _R11 = &v112;
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
    vmovaps xmm15, [rsp+118h+var_B8]
  }
}

/*
==============
PlaneFromPoint
==============
*/
vec4_t *PlaneFromPoint(vec4_t *result, const vec3_t *pt, const vec3_t *dir)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmulss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [r8]
    vmovss  xmm3, dword ptr [r8+8]
    vmovss  dword ptr [rcx+4], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdx]
    vmovss  dword ptr [rcx], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rdx+8]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rcx+0Ch], xmm0
    vmovss  dword ptr [rcx+8], xmm3
  }
  return result;
}

/*
==============
IntersectRayAABB
==============
*/
bool IntersectRayAABB(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *bbMin, const vec3_t *bbMax, float *t)
{
  unsigned int v31; 
  bool v34; 
  bool v35; 
  bool v37; 
  bool result; 
  __int64 v53; 
  __int64 v54; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm8, xmm0, dword ptr [rdx+8]
    vdivss  xmm6, xmm0, dword ptr [rdx]
    vdivss  xmm7, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r8+4]
  }
  _RSI = t;
  __asm
  {
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+0B8h+var_78], xmm2
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [r9]
    vmovss  [rsp+0B8h+var_74], xmm2
    vmulss  xmm2, xmm1, xmm8
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r9+4]
    vmovss  [rsp+0B8h+var_70], xmm2
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [r9+8]
    vmovss  [rsp+0B8h+var_68], xmm2
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
  }
  v31 = 0;
  __asm
  {
    vmovss  [rsp+0B8h+var_64], xmm2
    vmulss  xmm2, xmm1, xmm8
    vmovss  [rsp+0B8h+var_50], xmm8
    vmovss  [rsp+0B8h+var_60], xmm2
    vmovss  [rsp+0B8h+var_58], xmm6
    vmovss  [rsp+0B8h+var_54], xmm7
  }
  _RDI = 0i64;
  v34 = 1;
  v35 = 1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    if ( !v34 )
    {
      LODWORD(v54) = 3;
      LODWORD(v53) = v31;
      v37 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54);
      v35 = !v37;
      if ( v37 )
        __debugbreak();
    }
    __asm { vcomiss xmm8, [rsp+rdi+0B8h+var_58] }
    if ( !v35 )
    {
      if ( v31 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v53) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      __asm { vmovss  xmm7, [rsp+rdi+0B8h+var_78] }
      if ( v31 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v53) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, [rsp+rdi+0B8h+var_68] }
      if ( v31 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v53) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      __asm { vmovss  [rsp+rdi+0B8h+var_78], xmm6 }
      if ( v31 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v53) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      __asm { vmovss  [rsp+rdi+0B8h+var_68], xmm7 }
    }
    ++v31;
    _RDI += 4i64;
    v34 = v31 < 3;
    v35 = v31 <= 3;
  }
  while ( (int)v31 < 3 );
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+var_70]
    vmaxss  xmm1, xmm0, [rsp+0B8h+var_74]
    vmaxss  xmm3, xmm1, [rsp+0B8h+var_78]
    vmovss  xmm2, [rsp+0B8h+var_60]
    vminss  xmm0, xmm2, [rsp+0B8h+var_64]
    vminss  xmm1, xmm0, [rsp+0B8h+var_68]
    vcomiss xmm3, xmm1
  }
  if ( v31 > 3 )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vcomiss xmm1, xmm8
      vcmpltss xmm0, xmm3, xmm8
      vblendvps xmm0, xmm3, xmm1, xmm0
      vmovss  dword ptr [rsi], xmm0
    }
    result = 1;
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
IntersectRayBox
==============
*/
bool IntersectRayBox(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *boxOrigin, const vec3_t *boxHalfExt, const tmat33_t<vec3_t> *boxAxis, float *t)
{
  char v35; 
  char v36; 
  bool result; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t out; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rsp+0B8h+v1], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rsp+0B8h+v1+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
  }
  _RSI = rayOrigin;
  _RBX = boxHalfExt;
  __asm { vmovss  dword ptr [rsp+0B8h+v1+8], xmm1 }
  Vec3Cross(rayDir, &v1, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+cross]
    vmovss  xmm1, dword ptr [rsp+0B8h+cross+4]
    vmovss  xmm8, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+8]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+0B8h+cross+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm1
    vcomiss xmm5, xmm2
  }
  if ( v35 | v36 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm5, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm3, xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm4, xmm0, dword ptr [rdi+8]
      vmulss  xmm0, xmm5, dword ptr [rdx]
      vmulss  xmm1, xmm3, dword ptr [rdx+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+8]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rdx+10h]
      vmovss  dword ptr [rsp+0B8h+v1], xmm0
      vmulss  xmm0, xmm5, dword ptr [rdx+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+14h]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rdx+1Ch]
      vmovss  dword ptr [rsp+0B8h+v1+4], xmm0
      vmulss  xmm0, xmm5, dword ptr [rdx+18h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+20h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rsp+0B8h+v1+8], xmm0
    }
    Vec3Rotate(rayDir, boxAxis, &out);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vxorps  xmm0, xmm0, xmm3
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+0B8h+cross], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vxorps  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+0B8h+cross+8], xmm1
      vmovss  dword ptr [rsp+0B8h+cross+4], xmm2
    }
    result = IntersectRayAABB(&v1, &out, &cross, _RBX, t);
  }
  else
  {
    result = 0;
  }
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
IntersectRayPlane
==============
*/
bool IntersectRayPlane(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec4_t *plane, float *t)
{
  bool result; 

  __asm
  {
    vmovss  xmm3, dword ptr [r8]
    vmovss  xmm4, dword ptr [r8+4]
    vmulss  xmm1, xmm4, dword ptr [rdx+4]
    vmulss  xmm0, xmm3, dword ptr [rdx]
    vmovss  xmm5, dword ptr [r8+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rdx+8]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vaddss  xmm6, xmm2, xmm1
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
    vmulss  xmm1, xmm4, dword ptr [rcx+4]
    vmulss  xmm0, xmm3, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [r8+0Ch]
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm2, xmm0, xmm2
    vdivss  xmm1, xmm2, xmm6
    vmovaps xmm6, [rsp+28h+var_18]
    vcomiss xmm1, xmm7
    vmovaps xmm7, [rsp+28h+var_28]
  }
  result = 1;
  __asm { vmovss  dword ptr [r9], xmm1 }
  return result;
}

/*
==============
IntersectRayTri
==============
*/
bool IntersectRayTri(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv, const float eps)
{
  char v37; 
  char v38; 
  bool result; 
  vec3_t v1; 
  vec3_t cross; 
  char v109; 
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
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
  }
  _RAX = vert3;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm10, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9+4]
    vsubss  xmm13, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm14, xmm0, dword ptr [r8+8]
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm0, xmm0, dword ptr [r8]
  }
  _R15 = pt;
  _RDI = pu;
  _RBX = pv;
  _RBP = orig;
  __asm
  {
    vmovss  dword ptr [rsp+108h+v1], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm0, xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rsp+108h+v1+4], xmm0
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm15, xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rsp+108h+v1+8], xmm15
  }
  Vec3Cross(dir, &v1, &cross);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+108h+cross+4]
    vmovss  xmm8, dword ptr [rsp+108h+cross]
    vmovss  xmm12, dword ptr [rsp+108h+cross+8]
    vmovss  xmm11, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm13
    vmulss  xmm0, xmm8, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, [rsp+108h+eps]
    vmulss  xmm1, xmm12, xmm14
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm0
  }
  if ( v37 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm1
      vcomiss xmm3, xmm0
    }
    if ( !(v37 | v38) )
    {
LABEL_14:
      result = 0;
      goto LABEL_15;
    }
    __asm
    {
      vmovss  xmm6, cs:__real@bf800000
      vxorps  xmm3, xmm3, xmm1
    }
  }
  else
  {
    __asm { vmovaps xmm6, xmm11 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm4, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm7, xmm1, dword ptr [rsi+4]
    vsubss  xmm9, xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm5, xmm7
    vmulss  xmm0, xmm8, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm9
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm5, xmm2, xmm6
    vxorps  xmm12, xmm12, xmm12
    vcomiss xmm5, xmm12
  }
  if ( v37 )
    goto LABEL_14;
  __asm { vcomiss xmm5, xmm3 }
  if ( !(v37 | v38) )
    goto LABEL_14;
  __asm
  {
    vmulss  xmm1, xmm7, xmm14
    vmulss  xmm0, xmm13, xmm9
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm2, xmm10, xmm9
    vmulss  xmm0, xmm14, xmm4
    vsubss  xmm9, xmm2, xmm0
    vmulss  xmm0, xmm7, xmm10
    vmulss  xmm1, xmm13, xmm4
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [r14+4]
    vmulss  xmm0, xmm8, dword ptr [r14]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r14+8]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm7, xmm0, xmm6
    vcomiss xmm7, xmm12
    vaddss  xmm0, xmm7, xmm5
    vcomiss xmm0, xmm3
  }
  if ( !(v37 | v38) )
    goto LABEL_14;
  __asm
  {
    vmulss  xmm1, xmm9, dword ptr [rsp+108h+v1+4]
    vmulss  xmm0, xmm8, dword ptr [rsp+108h+v1]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm15
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm6
    vdivss  xmm4, xmm11, xmm3
    vmulss  xmm3, xmm0, xmm4
    vmovss  dword ptr [r15], xmm3
  }
  if ( pu )
  {
    __asm
    {
      vmulss  xmm0, xmm4, xmm5
      vmovss  dword ptr [rdi], xmm0
    }
  }
  if ( pv )
  {
    __asm
    {
      vmulss  xmm0, xmm4, xmm7
      vmovss  dword ptr [rbx], xmm0
    }
  }
  result = 1;
LABEL_15:
  _R11 = &v109;
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
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
  return result;
}

/*
==============
IntersectRaySphere
==============
*/

bool __fastcall IntersectRaySphere(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *center, double radius, float *t)
{
  bool result; 

  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
  }
  _RAX = t;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+8]
    vmovaps [rsp+68h+var_28], xmm7
    vsubss  xmm7, xmm1, dword ptr [r8+4]
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vsubss  xmm9, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm8, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm9
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps xmm10, xmm3
    vmulss  xmm3, xmm4, xmm7
    vmovaps [rsp+68h+var_68], xmm11
    vaddss  xmm11, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm6, xmm4, cs:__real@40000000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm4, xmm0, cs:__real@40800000
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm10
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm2, xmm11
    vmulss  xmm3, xmm1, cs:__real@40800000
    vsubss  xmm0, xmm4, xmm3
    vxorps  xmm5, xmm5, xmm5
    vcomiss xmm0, xmm5
    vcomiss xmm11, xmm5
    vsqrtss xmm2, xmm0, xmm0
    vmovss  xmm0, cs:__real@3f000000
    vdivss  xmm3, xmm0, xmm11
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm1, xmm2, xmm6
    vmulss  xmm4, xmm1, xmm3
    vcomiss xmm4, xmm5
    vsubss  xmm2, xmm0, xmm2
    vmulss  xmm1, xmm2, xmm3
    vminss  xmm0, xmm1, xmm4
    vmovss  dword ptr [rax], xmm0
    vmaxss  xmm0, xmm0, xmm5
    vmovss  dword ptr [rax], xmm0
  }
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
  }
  return result;
}

/*
==============
IntersectRaySphereApprox
==============
*/

bool __fastcall IntersectRaySphereApprox(vec3_t *origin, vec3_t *direction, vec3_t *sphereCenter, double radius)
{
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx]
    vsubss  xmm6, xmm9, dword ptr [r8]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx+4]
    vsubss  xmm4, xmm10, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+8]
    vsubss  xmm5, xmm11, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rdx+4]
    vmulss  xmm0, xmm4, xmm12
    vmovaps xmm7, xmm3
    vmulss  xmm3, xmm4, xmm4
    vmovaps [rsp+98h+var_88], xmm13
    vmovss  xmm13, dword ptr [rdx]
    vmulss  xmm1, xmm6, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmovaps [rsp+98h+var_98], xmm14
    vmovss  xmm14, dword ptr [rdx+8]
    vmulss  xmm1, xmm5, xmm14
    vaddss  xmm8, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vsubss  xmm5, xmm4, xmm0
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm5, xmm3
    vcomiss xmm8, xmm3
  }
  result = 0;
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+98h+var_88]
    vmovaps xmm14, [rsp+98h+var_98]
  }
  return result;
}

/*
==============
AabbSphereIntersect
==============
*/

char __fastcall AabbSphereIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *sphereCenter, double sphereRadius)
{
  __asm
  {
    vmovss  xmm2, dword ptr [r8]
    vminss  xmm0, xmm2, dword ptr [rcx]
    vmaxss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm4, dword ptr [r8+4]
    vmovaps [rsp+38h+var_18], xmm6
    vsubss  xmm6, xmm2, xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vminss  xmm0, xmm2, xmm4
    vmaxss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+8]
    vmovaps [rsp+38h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8+8]
    vsubss  xmm5, xmm4, xmm1
    vminss  xmm0, xmm2, xmm7
    vmaxss  xmm1, xmm0, dword ptr [rdx+8]
    vmovaps [rsp+38h+var_38], xmm8
    vsubss  xmm4, xmm7, xmm1
    vmovaps xmm7, [rsp+38h+var_28]
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm8, xmm3
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm8, xmm8
    vmovaps xmm8, [rsp+38h+var_38]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vcomiss xmm0, xmm4
  }
  return 1;
}

/*
==============
AabbCylinderIntersect
==============
*/
bool AabbCylinderIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *cylPoint, const vec3_t *cylDirection, const float cylRadius)
{
  unsigned int v30; 
  bool v37; 
  bool v39; 
  bool result; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  int v73[4]; 
  int v75; 
  int v76[5]; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rdx]
    vaddss  xmm0, xmm2, dword ptr [rcx]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm8, xmm0, xmm1
    vaddss  xmm0, xmm4, dword ptr [rcx+4]
    vmulss  xmm7, xmm0, xmm1
    vaddss  xmm0, xmm3, dword ptr [rcx+8]
    vmulss  xmm6, xmm0, xmm1
    vsubss  xmm1, xmm8, xmm2
    vmovss  xmm2, [rsp+0D8h+cylRadius]
    vaddss  xmm5, xmm1, xmm2
    vsubss  xmm0, xmm7, xmm4
    vaddss  xmm4, xmm0, xmm2
    vsubss  xmm0, xmm8, xmm5
    vsubss  xmm1, xmm6, xmm3
    vaddss  xmm3, xmm1, xmm2
    vsubss  xmm1, xmm7, xmm4
    vmovss  [rsp+0D8h+var_84], xmm1
    vaddss  xmm1, xmm5, xmm8
    vmovss  [rsp+0D8h+var_88], xmm0
    vsubss  xmm0, xmm6, xmm3
  }
  v30 = 0;
  _RBP = &v75;
  __asm
  {
    vmovss  [rsp+0D8h+var_98], xmm1
    vmovss  [rsp+0D8h+var_80], xmm0
    vaddss  xmm0, xmm4, xmm7
    vmovss  xmm7, cs:__real@3f800000
    vaddss  xmm1, xmm3, xmm6
  }
  _R15 = v76;
  __asm
  {
    vmovss  [rsp+0D8h+var_90], xmm1
    vmovss  [rsp+0D8h+var_94], xmm0
  }
  _RDI = 0i64;
  v37 = 1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    if ( !v37 )
    {
      LODWORD(v68) = 3;
      LODWORD(v63) = v30;
      v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v68);
      v37 = 0;
      if ( v39 )
        __debugbreak();
    }
    _RSI = &v73[_RDI];
    __asm
    {
      vdivss  xmm6, xmm7, dword ptr [r12+rsi]
      vcomiss xmm6, xmm8
    }
    if ( v37 )
    {
      if ( v30 >= 3 )
      {
        LODWORD(v68) = 3;
        LODWORD(v63) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v68) )
          __debugbreak();
        LODWORD(v71) = 3;
        LODWORD(v66) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v71) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm1, xmm0, dword ptr [rdi+r14]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+0], xmm2
      }
      if ( v30 >= 3 )
      {
        LODWORD(v68) = 3;
        LODWORD(v63) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v68) )
          __debugbreak();
        LODWORD(v72) = 3;
        LODWORD(v67) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v67, v72) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, [rsp+rdi+0D8h+var_88] }
    }
    else
    {
      if ( v30 >= 3 )
      {
        LODWORD(v68) = 3;
        LODWORD(v63) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v68) )
          __debugbreak();
        LODWORD(v69) = 3;
        LODWORD(v64) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v64, v69) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rsp+rdi+0D8h+var_88]
        vsubss  xmm1, xmm0, dword ptr [rdi+r14]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+0], xmm2
      }
      if ( v30 >= 3 )
      {
        LODWORD(v68) = 3;
        LODWORD(v63) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v68) )
          __debugbreak();
        LODWORD(v70) = 3;
        LODWORD(v65) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v70) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rsi] }
    }
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rdi+r14]
      vmulss  xmm0, xmm1, xmm6
      vmovss  dword ptr [r15], xmm0
    }
    _R15 += 2;
    ++v30;
    _RBP += 2;
    ++_RDI;
    v37 = v30 < 3;
  }
  while ( (int)v30 < 3 );
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+var_78]
    vmovss  xmm1, [rsp+0D8h+var_6C]
    vcomiss xmm0, xmm1
  }
  if ( v30 > 3 )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, [rsp+0D8h+var_70]
      vmovss  xmm3, [rsp+0D8h+var_74]
      vcomiss xmm2, xmm3
      vmaxss  xmm0, xmm2, xmm0
      vcomiss xmm0, [rsp+0D8h+var_64]
      vminss  xmm4, xmm3, xmm1
      vmovss  xmm0, [rsp+0D8h+var_68]
      vcomiss xmm0, xmm4
    }
    result = 1;
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
ObbSphereIntersect
==============
*/
bool ObbSphereIntersect(const tmat33_t<vec3_t> *wldBoxAxis, const vec3_t *wldBoxOrigin, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, float wldSphereRadius)
{
  bool v24; 
  bool v25; 
  bool result; 
  vec3_t in1; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  vec3_t v83; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovups ymm0, ymmword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx]
    vmovups ymmword ptr [rbp+4Fh+in], ymm0
    vmovss  xmm0, dword ptr [rcx+20h]
    vmovss  dword ptr [rbp+4Fh+in+20h], xmm0
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rbp+4Fh+var_8C], xmm1
    vmovss  xmm1, dword ptr [rdx+8]
  }
  _RBX = (vec3_t *)wldSphereCenter;
  _RDI = obbBoxHalfExt;
  __asm
  {
    vmovss  [rbp+4Fh+var_88], xmm0
    vmovss  [rbp+4Fh+var_84], xmm1
  }
  MatrixTranspose(&in, &out);
  __asm
  {
    vmovss  xmm0, [rbp+4Fh+var_8C]
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, [rbp+4Fh+var_88]
    vxorps  xmm1, xmm0, xmm10
    vxorps  xmm0, xmm2, xmm10
    vmovss  dword ptr [rbp+4Fh+in1], xmm1
    vmovss  xmm1, [rbp+4Fh+var_84]
    vxorps  xmm2, xmm1, xmm10
    vmovss  dword ptr [rbp+4Fh+in1+8], xmm2
    vmovss  dword ptr [rbp+4Fh+in1+4], xmm0
  }
  MatrixTransformVector(&in1, &out, &v83);
  v24 = _RBX < &in1;
  if ( _RBX == &in1 )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out");
    v24 = 0;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmulss  xmm3, xmm6, dword ptr [rbp+4Fh+out]
    vmulss  xmm2, xmm7, dword ptr [rbp+4Fh+out+0Ch]
    vmovss  xmm0, dword ptr [rbp+4Fh+out+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbp+4Fh+out+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rbp+4Fh+out+4]
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm9, xmm2, dword ptr [rbp+4Fh+var_5C]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm7, dword ptr [rbp+4Fh+out+10h]
    vmovss  xmm0, dword ptr [rbp+4Fh+out+20h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rbp+4Fh+out+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm5, xmm2, dword ptr [rbp+4Fh+var_5C+4]
    vmulss  xmm2, xmm7, dword ptr [rbp+4Fh+out+14h]
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm3, dword ptr [rdi+4]
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm7, xmm2, dword ptr [rbp+4Fh+var_5C+8]
    vmovss  xmm4, dword ptr [rdi+8]
    vminss  xmm1, xmm9, xmm0
    vxorps  xmm0, xmm0, xmm10
    vmaxss  xmm1, xmm1, xmm0
    vxorps  xmm0, xmm3, xmm10
    vminss  xmm2, xmm5, xmm3
    vsubss  xmm6, xmm9, xmm1
    vmaxss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm4, xmm10
    vminss  xmm3, xmm7, xmm4
    vsubss  xmm5, xmm5, xmm1
    vmaxss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, [rbp+4Fh+wldSphereRadius]
    vsubss  xmm4, xmm7, xmm1
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm2, xmm0, xmm0
    vcomiss xmm2, xmm4
  }
  result = !v24;
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
ObbSphereIntersect
==============
*/

bool __fastcall ObbSphereIntersect(const tmat43_t<vec3_t> *wldToObb, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, double wldSphereRadius)
{
  bool v13; 
  bool v14; 
  bool result; 
  vec3_t v65; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = wldSphereCenter;
  _RSI = obbBoxHalfExt;
  __asm { vmovaps xmm10, xmm3 }
  v13 = wldSphereCenter < &v65;
  if ( wldSphereCenter == &v65 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out");
    v13 = 0;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmulss  xmm1, xmm4, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr [rbx]
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm8, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+18h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm7, xmm0, dword ptr [rdi+24h]
    vmulss  xmm0, xmm4, dword ptr [rdi+10h]
    vmulss  xmm1, xmm3, dword ptr [rdi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+1Ch]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm5, xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm4, dword ptr [rdi+14h]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  xmm3, dword ptr [rsi]
    vmovss  xmm4, dword ptr [rsi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+20h]
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm9, xmm0, dword ptr [rdi+2Ch]
    vxorps  xmm0, xmm3, xmm6
    vminss  xmm1, xmm7, xmm3
    vmaxss  xmm1, xmm1, xmm0
    vxorps  xmm0, xmm4, xmm6
    vminss  xmm2, xmm5, xmm4
    vsubss  xmm7, xmm7, xmm1
    vmaxss  xmm1, xmm2, xmm0
    vsubss  xmm5, xmm5, xmm1
    vxorps  xmm0, xmm8, xmm6
    vminss  xmm3, xmm9, xmm8
    vmaxss  xmm1, xmm3, xmm0
    vsubss  xmm4, xmm9, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm10, xmm10
    vcomiss xmm0, xmm4
  }
  result = !v13;
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
SphereSphereIntersect
==============
*/

char __fastcall SphereSphereIntersect(const vec3_t *center0, double radius0, const vec3_t *center1, float radius1)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm2, dword ptr [r8+4]
    vsubss  xmm4, xmm2, dword ptr [rcx+4]
    vmovaps [rsp+28h+var_18], xmm6
    vaddss  xmm6, xmm1, xmm3
    vmovaps [rsp+28h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm5, xmm0, dword ptr [rcx+8]
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+28h+var_28]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+28h+var_18]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm0, xmm3
  }
  return 1;
}

/*
==============
RayObbIntersect
==============
*/
float RayObbIntersect(const vec3_t *rayStart, const vec3_t *rayDir, const vec3_t *obbPos, const tmat33_t<vec3_t> *obbAxis, const vec3_t *obbHalfLength)
{
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
  }
  _RSI = obbHalfLength;
  _RDI = &obbAxis->m[0].v[2];
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, cs:__real@7f7fffff
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, cs:__real@ff7fffff
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-78h], xmm12
    vsubss  xmm12, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps [rsp+0E8h+var_88], xmm13
    vsubss  xmm13, xmm1, dword ptr [rcx+4]
    vmovaps [rsp+0E8h+var_98], xmm14
    vsubss  xmm14, xmm0, dword ptr [rcx+8]
    vmovaps [rsp+0E8h+var_A8], xmm15
    vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm4, dword ptr [rdi-8]
    vmovss  xmm3, dword ptr [rdi-4]
    vmovss  xmm5, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rsi]
    vmulss  xmm1, xmm12, xmm4
    vmulss  xmm0, xmm13, xmm3
    vmulss  xmm3, xmm3, dword ptr [rbp+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rbp+0]
    vmulss  xmm1, xmm14, xmm5
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm5, dword ptr [rbp+8]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm4, xmm2, xmm1
    vandps  xmm0, xmm4, xmm15
    vcomiss xmm0, cs:__real@38d1b717
    vxorps  xmm0, xmm7, xmm11
    vsubss  xmm1, xmm0, xmm6
    vcomiss xmm1, xmm8
    vsubss  xmm0, xmm6, xmm7
    vcomiss xmm0, xmm8
    vmovss  xmm0, cs:__real@bf800000
    vmovaps xmm14, [rsp+0E8h+var_98]
  }
  _R11 = &v63;
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
    vmovaps xmm15, [rsp+0E8h+var_A8]
  }
  return *(float *)&_XMM0;
}

/*
==============
PointInObb
==============
*/
bool PointInObb(const vec3_t *v, const vec3_t *center, const vec3_t *halfSize, const tmat33_t<vec3_t> *axes)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm5, xmm1, dword ptr [rdx+4]
    vmulss  xmm1, xmm5, dword ptr [r9+4]
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+18h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rdx+8]
    vmulss  xmm0, xmm3, dword ptr [r9]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [r9+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, xmm4
    vcomiss xmm0, dword ptr [r8]
    vmovaps xmm6, [rsp+18h+var_18]
  }
  return 0;
}

/*
==============
PointInAABB
==============
*/

bool __fastcall PointInAABB(const vec3_t *_mins, const vec3_t *_maxs, const vec3_t *_point, double eps)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovsd  xmm1, qword ptr [r8]
    vmovsd  xmm2, qword ptr [rdx]
    vmovsd  xmm5, qword ptr [rcx]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vxorps  xmm4, xmm4, xmm4
    vinsertps xmm4, xmm4, xmm1, 0
    vinsertps xmm4, xmm4, xmm0, 10h
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm0, 10h
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm1, xmm1, [rsp+58h+var_40], 20h
    vinsertps xmm2, xmm2, xmm5, 0
    vmovaps xmm6, xmm3
    vshufps xmm6, xmm6, xmm6, 0
    vsubps  xmm0, xmm1, xmm6
    vinsertps xmm4, xmm4, [rsp+58h+var_50], 20h
    vcmpleps xmm3, xmm0, xmm4
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vinsertps xmm2, xmm2, xmm0, 10h
    vinsertps xmm2, xmm2, [rsp+58h+var_30], 20h
    vaddps  xmm0, xmm2, xmm6
    vcmpltps xmm1, xmm4, xmm0
    vorps   xmm2, xmm3, xmm1
    vtestps xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
  }
  result = _ZF;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
PointToClosestAABBPoint
==============
*/
void PointToClosestAABBPoint(const vec3_t *mins, const vec3_t *maxs, const vec3_t *point, vec3_t *outPointToClosestVec)
{
  __asm
  {
    vmovss  xmm2, dword ptr [r8]
    vminss  xmm0, xmm2, dword ptr [rdx]
    vmaxss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm3, dword ptr [r8+4]
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [r8+8]
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vmovaps [rsp+38h+var_28], xmm7
    vmovss  xmm7, dword ptr [rdx+4]
    vsubss  xmm2, xmm1, xmm2
    vmovaps [rsp+38h+var_38], xmm8
    vmovss  xmm8, dword ptr [rdx+8]
    vminss  xmm0, xmm3, xmm7
    vmovaps xmm7, [rsp+38h+var_28]
    vmaxss  xmm1, xmm0, xmm4
    vmovss  dword ptr [r9], xmm2
    vsubss  xmm2, xmm1, dword ptr [r8+4]
    vminss  xmm0, xmm8, xmm5
    vmovaps xmm8, [rsp+38h+var_38]
    vmaxss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [r9+4], xmm2
    vsubss  xmm2, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [r9+8], xmm2
  }
}

/*
==============
PointToLineDistSqUsingDir
==============
*/
float PointToLineDistSqUsingDir(const vec3_t *pt, const vec3_t *start, const vec3_t *dir)
{
  char v51; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm2, dword ptr [r8+4]
    vmovss  xmm3, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovaps [rsp+78h+var_38], xmm8
  }
  _RSI = pt;
  __asm { vmovaps [rsp+78h+var_48], xmm9 }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1350, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( dir ) )", "%s", "Vec3IsNormalized( dir )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm5, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm8, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm8, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm9, xmm0, dword ptr [rdi+8]
    vmulss  xmm0, xmm5, dword ptr [rbx]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+8]
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vaddss  xmm5, xmm0, xmm5
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vaddss  xmm2, xmm1, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm4, xmm0, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
PointOnLineClosestToPoint
==============
*/
float PointOnLineClosestToPoint(const vec3_t *pt, const vec3_t *start, const vec3_t *dir, vec3_t *result)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm2, dword ptr [r8+4]
    vmovss  xmm3, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBP = result;
  _RSI = pt;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1362, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( dir ) )", "%s", "Vec3IsNormalized( dir )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rsi]
    vsubss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsi+8]
    vsubss  xmm0, xmm2, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vaddss  xmm3, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+0], xmm3
    vmulss  xmm1, xmm0, dword ptr [rbx+4]
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4], xmm2
    vmulss  xmm3, xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+8], xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
PointToLineDistSq
==============
*/
float PointToLineDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rdx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rdx+8]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm7, xmm0, xmm10
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx]
    vsubss  xmm8, xmm0, xmm11
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rcx+4]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovss  xmm14, dword ptr [rcx+8]
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm15, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm15, xmm0
  }
  _R11 = &retaddr;
  __asm
  {
    vsubss  xmm0, xmm10, xmm13
    vmulss  xmm3, xmm0, xmm7
    vsubss  xmm1, xmm9, xmm12
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm11, xmm14
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm2, xmm4, xmm1
    vdivss  xmm3, xmm2, xmm15
    vmovaps xmm15, [rsp+0D8h+var_A8]
    vmulss  xmm0, xmm6, xmm3
    vmovaps xmm6, xmmword ptr [r11-18h]
    vsubss  xmm1, xmm12, xmm9
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vaddss  xmm5, xmm0, xmm1
    vmulss  xmm1, xmm7, xmm3
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmulss  xmm0, xmm8, xmm3
    vmovaps xmm8, xmmword ptr [r11-38h]
    vsubss  xmm2, xmm13, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm13, [rsp+0D8h+var_88]
    vsubss  xmm4, xmm14, xmm11
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm14, [rsp+0D8h+var_98]
    vaddss  xmm2, xmm1, xmm2
    vaddss  xmm4, xmm0, xmm4
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
PointToLineDistSq2D
==============
*/
float PointToLineDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rdx]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-78h], xmm12
    vsubss  xmm6, xmm0, xmm8
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm7, xmm0, xmm9
    vmulss  xmm1, xmm7, xmm7
    vmovaps [rsp+0C8h+var_88], xmm13
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm12, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm12, xmm1
    vmovaps [rsp+0C8h+var_98], xmm14
    vsubss  xmm13, xmm10, xmm8
    vsubss  xmm14, xmm11, xmm9
  }
  _R11 = &retaddr;
  __asm
  {
    vsubss  xmm0, xmm9, xmm11
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmulss  xmm3, xmm0, xmm7
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm3, xmm2
    vdivss  xmm4, xmm0, xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmulss  xmm1, xmm6, xmm4
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmulss  xmm0, xmm7, xmm4
    vmovaps xmm7, xmmword ptr [r11-28h]
    vaddss  xmm2, xmm0, xmm14
    vmovaps xmm14, [rsp+0C8h+var_98]
    vaddss  xmm5, xmm1, xmm13
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm3, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
PointToLineSegmentDistSq
==============
*/

float __fastcall PointToLineSegmentDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end, double _XMM3_8)
{
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vsubss  xmm6, xmm1, dword ptr [rdx]
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = point;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm10
    vsubss  xmm10, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-68h], xmm11
    vsubss  xmm11, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-78h], xmm12
    vsubss  xmm12, xmm0, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm7, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm8, xmm0, dword ptr [rdx+8]
    vmulss  xmm1, xmm7, xmm11
    vmulss  xmm0, xmm6, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vaddss  xmm13, xmm2, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm13, xmm3
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm12
    vmovaps [rsp+0B8h+var_48], xmm9
    vaddss  xmm9, xmm2, xmm1
    vucomiss xmm9, xmm3
    vcomiss xmm13, xmm9
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm0, xmm3, xmm0
    vmovaps xmm9, [rsp+0B8h+var_48]
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return *(float *)&_XMM0;
}

/*
==============
PointToLineSegmentDistSq2D
==============
*/
float PointToLineSegmentDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vsubss  xmm6, xmm1, dword ptr [rdx]
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = point;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vsubss  xmm9, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vsubss  xmm10, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm7, xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm7, xmm10
    vmulss  xmm0, xmm6, xmm9
    vmovaps xmmword ptr [rax-68h], xmm11
    vaddss  xmm11, xmm1, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm11, xmm2
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vmovaps [rsp+98h+var_38], xmm8
    vaddss  xmm8, xmm1, xmm0
    vucomiss xmm8, xmm2
    vcomiss xmm11, xmm8
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm0, xmm3, xmm0
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return *(float *)&_XMM0;
}

/*
==============
ClosestApproachOfTwoLines
==============
*/
void ClosestApproachOfTwoLines(const vec3_t *p1, const vec3_t *dir1, const vec3_t *p2, const vec3_t *dir2, float *s, float *t)
{
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
  }
  _RBX = s;
  _RDI = t;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rdx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovss  xmm11, dword ptr [r9+4]
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovss  xmm12, dword ptr [r9]
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovss  xmm13, dword ptr [r9+8]
    vmulss  xmm3, xmm12, xmm6
    vmovaps [rsp+0D8h+var_88], xmm14
    vsubss  xmm14, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm0, xmm0, dword ptr [r8+8]
    vmovss  [rsp+0D8h+var_A8], xmm0
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+0D8h+var_98], xmm15
    vsubss  xmm15, xmm1, dword ptr [r8+4]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm8, xmm2, xmm1
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm0, xmm11, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm0, xmm2, xmm1
    vmovss  [rsp+0D8h+var_A4], xmm0
    vmulss  xmm0, xmm11, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm13, xmm7
    vaddss  xmm4, xmm2, xmm1
    vxorps  xmm10, xmm4, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm5, xmm15
    vmovss  xmm5, [rsp+0D8h+var_A8]
    vmulss  xmm0, xmm6, xmm14
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm5
    vmovss  xmm7, [rsp+0D8h+var_A4]
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm10
    vmulss  xmm1, xmm7, xmm8
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm2, xmm10, xmm8
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm2, cs:__real@38d1b717
    vmulss  xmm3, xmm4, xmm4
    vcomiss xmm3, xmm0
    vmulss  xmm1, xmm11, xmm15
    vmulss  xmm0, xmm12, xmm14
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm13, xmm5
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vdivss  xmm5, xmm0, xmm4
    vmulss  xmm1, xmm3, xmm8
    vmulss  xmm2, xmm6, xmm10
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm4, xmm0, xmm5
    vmulss  xmm1, xmm6, xmm7
    vmulss  xmm3, xmm3, xmm10
    vsubss  xmm0, xmm3, xmm1
    vmulss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rdi], xmm4
    vmovaps xmm15, [rsp+0D8h+var_98]
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
}

/*
==============
ClosestApproachOfTwoSegments
==============
*/
void ClosestApproachOfTwoSegments(const vec3_t *s1p0, const vec3_t *s1p1, const vec3_t *s2p0, const vec3_t *s2p1, vec3_t *outSeg2Point, float *outDistSq)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rdx]
  }
  _R10 = outDistSq;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vsubss  xmm7, xmm0, xmm6
    vmovss  xmm0, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-38h], xmm8
    vsubss  xmm8, xmm0, xmm5
    vsubss  xmm5, xmm5, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-48h], xmm9
    vsubss  xmm9, xmm0, xmm4
    vsubss  xmm4, xmm4, dword ptr [r8+8]
    vmovss  xmm0, dword ptr [r9]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vsubss  xmm12, xmm6, dword ptr [r8]
  }
  _RAX = outSeg2Point;
  __asm
  {
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps [rsp+0C8h+var_A8], xmm15
    vsubss  xmm13, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9+4]
    vsubss  xmm14, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm15, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm3, xmm14, xmm8
    vmulss  xmm0, xmm13, xmm7
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm15, xmm9
    vaddss  xmm11, xmm2, xmm1
    vmulss  xmm3, xmm14, xmm14
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm5, xmm8
    vmulss  xmm0, xmm12, xmm7
    vmulss  xmm1, xmm15, xmm15
    vaddss  xmm10, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm9
    vmulss  xmm3, xmm5, xmm14
    vmulss  xmm0, xmm12, xmm13
    vmovss  [rsp+0C8h+var_B8], xmm9
    vaddss  xmm9, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm15
    vmulss  xmm3, xmm10, xmm6
    vmulss  xmm0, xmm11, xmm11
    vmovss  [rsp+0C8h+var_C4], xmm12
    vmovss  xmm12, cs:__real@322bcc77
    vmovss  [rsp+0C8h+var_B4], xmm4
    vsubss  xmm4, xmm3, xmm0
    vcomiss xmm4, xmm12
    vmovss  [rsp+0C8h+var_C8], xmm7
    vmovss  [rsp+0C8h+var_C0], xmm8
    vmovss  [rsp+0C8h+var_BC], xmm5
    vaddss  xmm8, xmm2, xmm1
    vmovaps xmm5, xmm4
    vxorps  xmm7, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm11
    vmulss  xmm0, xmm9, xmm10
    vsubss  xmm3, xmm1, xmm0
    vcomiss xmm3, xmm7
    vmulss  xmm1, xmm9, xmm11
    vmulss  xmm2, xmm8, xmm6
    vsubss  xmm1, xmm2, xmm1
    vcomiss xmm3, xmm4
    vmovaps xmm3, xmm4
    vaddss  xmm1, xmm8, xmm11
    vmovaps xmm5, xmm10
    vcomiss xmm1, xmm7
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vcomiss xmm1, xmm5
    vsubss  xmm3, xmm11, xmm9
    vcomiss xmm3, xmm7
    vmovaps xmm1, xmm5
    vcomiss xmm3, xmm6
    vmovaps xmm3, xmm4
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm3, xmm2
    vcomiss xmm0, xmm12
    vdivss  xmm8, xmm3, xmm4
    vandps  xmm0, xmm1, xmm2
    vcomiss xmm0, xmm12
    vdivss  xmm7, xmm1, xmm5
    vmulss  xmm0, xmm8, [rsp+0C8h+var_C8]
    vaddss  xmm2, xmm0, [rsp+0C8h+var_C4]
    vmulss  xmm0, xmm8, [rsp+0C8h+var_C0]
    vaddss  xmm3, xmm0, [rsp+0C8h+var_BC]
    vmulss  xmm0, xmm8, [rsp+0C8h+var_B8]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vxorps  xmm4, xmm7, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmulss  xmm1, xmm13, xmm4
    vaddss  xmm6, xmm2, xmm1
    vaddss  xmm2, xmm0, [rsp+0C8h+var_B4]
    vmulss  xmm1, xmm14, xmm4
    vaddss  xmm5, xmm3, xmm1
    vmulss  xmm1, xmm15, xmm4
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm6, xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm13, xmm7
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r10], xmm2
    vaddss  xmm1, xmm0, dword ptr [r8]
    vmulss  xmm2, xmm14, xmm7
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovss  dword ptr [rax], xmm1
    vaddss  xmm0, xmm2, dword ptr [r8+4]
    vmulss  xmm1, xmm15, xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm15, [rsp+0C8h+var_A8]
    vmovss  dword ptr [rax+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rax+8], xmm2
  }
}

/*
==============
SegmentsIntersection
==============
*/
bool SegmentsIntersection(const vec2_t *p1, const vec2_t *p2, const vec2_t *p3, const vec2_t *p4, float *outFrac)
{
  bool result; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r9]
    vmovss  xmm0, dword ptr [r9+4]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8]
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
    vmovss  xmm10, dword ptr [r8+4]
    vmovaps [rsp+78h+var_68], xmm11
    vsubss  xmm11, xmm0, xmm10
    vsubss  xmm8, xmm2, xmm6
    vmovaps [rsp+78h+var_78], xmm12
    vsubss  xmm12, xmm1, xmm7
    vsubss  xmm9, xmm3, xmm5
    vmulss  xmm1, xmm8, xmm11
    vmulss  xmm0, xmm9, xmm12
    vsubss  xmm4, xmm1, xmm0
    vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
  }
  *outFrac = 1.0;
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vsubss  xmm6, xmm6, xmm7
    vsubss  xmm5, xmm5, xmm10
    vmulss  xmm1, xmm5, xmm12
    vmulss  xmm0, xmm6, xmm11
    vsubss  xmm1, xmm1, xmm0
    vdivss  xmm4, xmm3, xmm4
    vmulss  xmm2, xmm1, xmm4
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vcomiss xmm2, xmm3
  }
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
    vmovaps xmm11, [rsp+78h+var_68]
    vmovaps xmm12, [rsp+78h+var_78]
  }
  return result;
}

/*
==============
SegmentToSegmentDistSq2D
==============
*/
float SegmentToSegmentDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testStart, const vec2_t *testEnd)
{
  const vec2_t *v13; 
  const vec2_t *v16; 
  const vec2_t *v19; 
  char v49; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r9+4]
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  v13 = testEnd;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v16 = segEnd;
  __asm
  {
    vsubss  xmm7, xmm1, xmm6
    vmovss  xmm1, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-48h], xmm11
  }
  v19 = segStart;
  __asm
  {
    vsubss  xmm11, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm8, xmm1, xmm5
    vmovaps xmmword ptr [rax-58h], xmm12
    vsubss  xmm12, xmm0, dword ptr [r8]
    vmulss  xmm0, xmm8, xmm12
    vmulss  xmm2, xmm7, xmm11
    vsubss  xmm4, xmm2, xmm0
    vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
    vsubss  xmm5, xmm5, dword ptr [r8+4]
    vsubss  xmm6, xmm6, dword ptr [r8]
    vmovss  xmm3, cs:__real@3f800000
    vmulss  xmm0, xmm6, xmm11
    vmulss  xmm1, xmm5, xmm12
    vsubss  xmm1, xmm1, xmm0
    vdivss  xmm4, xmm3, xmm4
    vmulss  xmm2, xmm1, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vcomiss xmm2, xmm3
  }
  *(double *)&_XMM0 = PointToLineSegmentDistSq2D(segStart, testStart, testEnd);
  __asm
  {
    vmovaps xmm1, xmm0; Y
    vmovss  xmm0, cs:__real@7f7fffff; X
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = PointToLineSegmentDistSq2D(v16, testStart, v13);
  __asm
  {
    vmovaps xmm1, xmm0; Y
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = PointToLineSegmentDistSq2D(testStart, v19, v16);
  __asm
  {
    vmovaps xmm1, xmm0; Y
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = PointToLineSegmentDistSq2D(v13, v19, v16);
  __asm
  {
    vmovaps xmm1, xmm0; Y
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm0, cs:__real@7f7fffff
    vmovaps xmm6, xmm0
  }
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1686, ASSERT_TYPE_SANITY, "( minSegDistSq != 3.402823466e+38F )", "%s", "minSegDistSq != FLT_MAX") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
SegmentToAABBDistSq2D
==============
*/
float SegmentToAABBDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testMin, const vec2_t *testMax)
{
  char v5; 
  const vec2_t *v10; 
  const vec2_t *v11; 
  vec2_t testEnd; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [r8]
    vcomiss xmm0, xmm1
  }
  _RBX = testMax;
  _RDI = testMin;
  v10 = segEnd;
  v11 = segStart;
  __asm { vcomiss xmm0, dword ptr [r9] }
  if ( v5 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vcomiss xmm0, dword ptr [r8+4]
      vcomiss xmm0, dword ptr [r9+4]
    }
    if ( v5 )
      goto LABEL_5;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, xmm1
    vcomiss xmm0, dword ptr [r9]
  }
  if ( !v5 )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
    vcomiss xmm0, dword ptr [r9+4]
  }
  if ( v5 )
  {
LABEL_5:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
LABEL_6:
    __asm
    {
      vmovss  xmm0, dword ptr [r9+4]
      vmovaps [rsp+78h+var_38], xmm6
      vmovss  dword ptr [rsp+78h+testEnd+4], xmm0
      vmovss  dword ptr [rsp+78h+testEnd], xmm1
    }
    *(double *)&_XMM0 = SegmentToSegmentDistSq2D(segStart, segEnd, testMin, &testEnd);
    __asm
    {
      vmovaps xmm1, xmm0; Y
      vmovss  xmm0, cs:__real@7f7fffff; X
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+78h+testEnd], xmm1
      vmovss  dword ptr [rsp+78h+testEnd+4], xmm2
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = SegmentToSegmentDistSq2D(v11, v10, _RDI, &testEnd);
    __asm
    {
      vmovaps xmm1, xmm0; Y
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+78h+testEnd], xmm1
      vmovss  dword ptr [rsp+78h+testEnd+4], xmm2
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = SegmentToSegmentDistSq2D(v11, v10, _RBX, &testEnd);
    __asm
    {
      vmovaps xmm1, xmm0; Y
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+78h+testEnd], xmm1
      vmovss  dword ptr [rsp+78h+testEnd+4], xmm2
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = SegmentToSegmentDistSq2D(v11, v10, _RBX, &testEnd);
    __asm
    {
      vmovaps xmm1, xmm0; Y
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vucomiss xmm0, cs:__real@7f7fffff
      vmovaps xmm6, xmm0
    }
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1708, ASSERT_TYPE_SANITY, "( minSegDistSq != 3.402823466e+38F )", "%s", "minSegDistSq != FLT_MAX") )
      __debugbreak();
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+78h+var_38]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
ClearBounds
==============
*/
void ClearBounds(vec3_t *mins, vec3_t *maxs)
{
  mins->v[0] = 3.4028235e38;
  mins->v[1] = 3.4028235e38;
  mins->v[2] = 3.4028235e38;
  maxs->v[0] = -3.4028235e38;
  maxs->v[1] = -3.4028235e38;
  maxs->v[2] = -3.4028235e38;
}

/*
==============
IsClearedBounds
==============
*/
bool IsClearedBounds(const vec3_t *mins, const vec3_t *maxs)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vucomiss xmm0, dword ptr [rcx]
  }
  if ( !v2 )
    return 0;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( !v2 )
    return 0;
  __asm { vucomiss xmm0, dword ptr [rcx+8] }
  if ( !v2 )
    return 0;
  __asm
  {
    vmovss  xmm0, cs:__real@ff7fffff
    vucomiss xmm0, dword ptr [rdx]
  }
  if ( !v2 )
    return 0;
  __asm { vucomiss xmm0, dword ptr [rdx+4] }
  if ( !v2 )
    return 0;
  __asm { vucomiss xmm0, dword ptr [rdx+8] }
  return v2 != 0;
}

/*
==============
AddPointToBounds
==============
*/
void AddPointToBounds(const vec3_t *v, vec3_t *mins, vec3_t *maxs)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm0, dword ptr [rcx]
    }
  }
  __asm { vcomiss xmm0, dword ptr [r8] }
  if ( !(v3 | v4) )
    __asm { vmovss  dword ptr [r8], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  xmm0, dword ptr [rcx+4]
    }
  }
  __asm { vcomiss xmm0, dword ptr [r8+4] }
  if ( !(v3 | v4) )
    __asm { vmovss  dword ptr [r8+4], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [rdx+8]
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  dword ptr [rdx+8], xmm0
      vmovss  xmm0, dword ptr [rcx+8]
    }
  }
  __asm { vcomiss xmm0, dword ptr [r8+8] }
  if ( !(v3 | v4) )
    __asm { vmovss  dword ptr [r8+8], xmm0 }
}

/*
==============
ExpandBounds
==============
*/
void ExpandBounds(const vec3_t *addedmins, const vec3_t *addedmaxs, vec3_t *mins, vec3_t *maxs)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [r8]
  }
  if ( v4 )
    __asm { vmovss  dword ptr [r8], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r9]
  }
  if ( !(v4 | v5) )
    __asm { vmovss  dword ptr [r9], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [r8+4]
  }
  if ( v4 )
    __asm { vmovss  dword ptr [r8+4], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r9+4]
  }
  if ( !(v4 | v5) )
    __asm { vmovss  dword ptr [r9+4], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [r8+8]
  }
  if ( v4 )
    __asm { vmovss  dword ptr [r8+8], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vcomiss xmm0, dword ptr [r9+8]
  }
  if ( !(v4 | v5) )
    __asm { vmovss  dword ptr [r9+8], xmm0 }
}

/*
==============
ExpandBoundsRotated
==============
*/
void ExpandBoundsRotated(const vec3_t *addedOrigin, const vec3_t *addedMins, const vec3_t *addedMaxs, const tmat33_t<vec3_t> *addedAxis, vec3_t *mins, vec3_t *maxs)
{
  bool v9; 
  bool v10; 
  float v12; 
  __int64 v16; 
  float v18; 
  __int64 v21; 
  __int64 v24; 
  __int64 v47; 
  float v48; 
  float v50; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  v9 = 0;
  v10 = (unsigned __int64)&v47 == _security_cookie;
  __asm { vmovsd  xmm0, qword ptr [rdx] }
  v12 = addedMins->v[2];
  _RDI = &v47;
  _R11 = mins;
  _R10 = maxs;
  v16 = 2i64;
  __asm
  {
    vmovsd  [rsp+58h+var_58], xmm0
    vmovsd  xmm0, qword ptr [r8]
  }
  v48 = v12;
  v18 = addedMaxs->v[2];
  __asm { vmovsd  [rsp+58h+var_4C], xmm0 }
  v50 = v18;
  do
  {
    __asm { vmovss  xmm8, dword ptr [rdi] }
    _RDX = (char *)&v47 + 4;
    v21 = 2i64;
    do
    {
      __asm { vmovss  xmm7, dword ptr [rdx] }
      _RAX = (int *)&v48;
      v24 = 2i64;
      do
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rax]
          vmulss  xmm1, xmm7, dword ptr [r9+4]
          vmulss  xmm0, xmm8, dword ptr [r9]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [r9+8]
          vaddss  xmm0, xmm2, xmm1
          vaddss  xmm6, xmm0, dword ptr [rbx]
          vcomiss xmm6, dword ptr [r11]
          vmulss  xmm0, xmm8, dword ptr [r9+0Ch]
          vmulss  xmm1, xmm7, dword ptr [r9+10h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [r9+14h]
          vmulss  xmm0, xmm8, dword ptr [r9+18h]
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm1, xmm7, dword ptr [r9+1Ch]
          vaddss  xmm4, xmm2, dword ptr [rbx+4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [r9+20h]
          vaddss  xmm0, xmm2, xmm1
          vaddss  xmm5, xmm0, dword ptr [rbx+8]
        }
        if ( v9 )
          __asm { vmovss  dword ptr [r11], xmm6 }
        __asm { vcomiss xmm6, dword ptr [r10] }
        if ( !v10 )
          __asm { vmovss  dword ptr [r10], xmm6 }
        __asm { vcomiss xmm4, dword ptr [r11+4] }
        if ( v9 )
          __asm { vmovss  dword ptr [r11+4], xmm4 }
        __asm { vcomiss xmm4, dword ptr [r10+4] }
        if ( !v10 )
          __asm { vmovss  dword ptr [r10+4], xmm4 }
        __asm { vcomiss xmm5, dword ptr [r11+8] }
        if ( v9 )
          __asm { vmovss  dword ptr [r11+8], xmm5 }
        __asm { vcomiss xmm5, dword ptr [r10+8] }
        if ( !v10 )
          __asm { vmovss  dword ptr [r10+8], xmm5 }
        _RAX += 3;
        v9 = v24-- == 0;
        v10 = v9 || v24 == 0;
      }
      while ( v24 );
      _RDX += 12;
      v9 = v21-- == 0;
      v10 = v9 || v21 == 0;
    }
    while ( v21 );
    _RDI = (__int64 *)((char *)_RDI + 12);
    v9 = v16-- == 0;
    v10 = v9 || v16 == 0;
  }
  while ( v16 );
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
RadiusFromBounds
==============
*/
float RadiusFromBounds(const vec3_t *mins, const vec3_t *maxs)
{
  int v9; 
  bool v10; 
  __int64 v31; 
  __int64 v32; 
  int v33[4]; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _RSI = (char *)mins - (char *)maxs;
  _RBP = (char *)v33 - (char *)maxs;
  v9 = 0;
  v10 = 1;
  _RDI = maxs;
  do
  {
    if ( !v10 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsi+rdi]
      vandps  xmm7, xmm7, xmm8
    }
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vandps  xmm6, xmm6, xmm8
    }
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    _RDI = (const vec3_t *)((char *)_RDI + 4);
    v10 = (unsigned int)++v9 < 3;
  }
  while ( v9 < 3 );
  __asm
  {
    vmovss  xmm0, [rsp+98h+var_58]
    vmovss  xmm1, [rsp+98h+var_54]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, [rsp+98h+var_50]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm0, xmm2, xmm2
  }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RadiusFromBounds2D
==============
*/
float RadiusFromBounds2D(const vec2_t *mins, const vec2_t *maxs)
{
  int v9; 
  bool v10; 
  __int64 v28; 
  __int64 v29; 
  int v30[2]; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _RSI = (char *)mins - (char *)maxs;
  _RBP = (char *)v30 - (char *)maxs;
  v9 = 0;
  v10 = 1;
  _RDI = maxs;
  do
  {
    if ( !v10 )
    {
      LODWORD(v29) = 2;
      LODWORD(v28) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsi+rdi]
      vandps  xmm7, xmm7, xmm8
    }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v29) = 2;
      LODWORD(v28) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vandps  xmm6, xmm6, xmm8
    }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v29) = 2;
      LODWORD(v28) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    _RDI = (const vec2_t *)((char *)_RDI + 4);
    v10 = (unsigned int)++v9 < 2;
  }
  while ( v9 < 2 );
  __asm
  {
    vmovss  xmm0, [rsp+88h+var_44]
    vmovss  xmm1, [rsp+88h+var_48]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm0, xmm0, xmm0
  }
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RadiusFromBoundsSq
==============
*/
float RadiusFromBoundsSq(const vec3_t *mins, const vec3_t *maxs)
{
  int v9; 
  bool v10; 
  __int64 v30; 
  __int64 v31; 
  int v32[4]; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _RSI = (char *)mins - (char *)maxs;
  _RBP = (char *)v32 - (char *)maxs;
  v9 = 0;
  v10 = 1;
  _RDI = maxs;
  do
  {
    if ( !v10 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsi+rdi]
      vandps  xmm7, xmm7, xmm8
    }
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vandps  xmm6, xmm6, xmm8
    }
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    _RDI = (const vec3_t *)((char *)_RDI + 4);
    v10 = (unsigned int)++v9 < 3;
  }
  while ( v9 < 3 );
  __asm
  {
    vmovss  xmm0, [rsp+98h+var_58]
    vmovss  xmm1, [rsp+98h+var_54]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, [rsp+98h+var_50]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RadiusFromBounds2DSq
==============
*/
float RadiusFromBounds2DSq(const vec2_t *mins, const vec2_t *maxs)
{
  int v9; 
  bool v10; 
  __int64 v27; 
  __int64 v28; 
  int v29[2]; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _RSI = (char *)mins - (char *)maxs;
  _RBP = (char *)v29 - (char *)maxs;
  v9 = 0;
  v10 = 1;
  _RDI = maxs;
  do
  {
    if ( !v10 )
    {
      LODWORD(v28) = 2;
      LODWORD(v27) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsi+rdi]
      vandps  xmm7, xmm7, xmm8
    }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v28) = 2;
      LODWORD(v27) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rdi]
      vandps  xmm6, xmm6, xmm8
    }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v28) = 2;
      LODWORD(v27) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    _RDI = (const vec2_t *)((char *)_RDI + 4);
    v10 = (unsigned int)++v9 < 2;
  }
  while ( v9 < 2 );
  __asm
  {
    vmovss  xmm0, [rsp+88h+var_48]
    vmovss  xmm1, [rsp+88h+var_44]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
ExtendBounds
==============
*/
void ExtendBounds(vec3_t *mins, vec3_t *maxs, const vec3_t *offset)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v3 | v4 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rcx]
      vmovss  dword ptr [rcx], xmm0
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rdx]
      vmovss  dword ptr [rdx], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vcomiss xmm0, xmm1
  }
  if ( v3 | v4 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rcx+4], xmm0
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rdx+4]
      vmovss  dword ptr [rdx+4], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vcomiss xmm0, xmm1
  }
  if ( v3 | v4 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [rcx+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
}

/*
==============
ExpandBoundsToWidth
==============
*/
void ExpandBoundsToWidth(vec3_t *mins, vec3_t *maxs)
{
  bool v5; 
  bool v6; 
  bool v8; 
  bool v10; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  _RBX = maxs;
  _RDI = mins;
  v5 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2036, ASSERT_TYPE_SANITY, "( maxs[0] >= mins[0] )", "%s", "maxs[0] >= mins[0]");
  v6 = !v5;
  if ( v5 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm0, dword ptr [rbx+4]
  }
  if ( v5 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2037, ASSERT_TYPE_SANITY, "( maxs[1] >= mins[1] )", "%s", "maxs[1] >= mins[1]");
    v6 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm0, dword ptr [rbx+8]
  }
  if ( !v6 )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2038, ASSERT_TYPE_SANITY, "( maxs[2] >= mins[2] )", "%s", "maxs[2] >= mins[2]");
    v6 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rdi+8]
    vsubss  xmm3, xmm1, dword ptr [rdi]
    vsubss  xmm5, xmm0, xmm4
    vmovss  xmm0, dword ptr [rbx+4]
    vsubss  xmm2, xmm0, dword ptr [rdi+4]
    vmaxss  xmm1, xmm3, xmm2
    vcomiss xmm1, xmm5
  }
  if ( !v6 )
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm5
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vsubss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rdi+8], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
ShrinkBoundsToHeight
==============
*/
void ShrinkBoundsToHeight(vec3_t *mins, vec3_t *maxs)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm1, xmm0
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RBX = maxs;
  _RDI = mins;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm1, xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm1, xmm0
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm4, xmm1, dword ptr [rdi+4]
    vmovss  xmm5, cs:__real@3f000000
    vsubss  xmm2, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm3, xmm0, dword ptr [rdi+8]
    vcomiss xmm2, xmm3
    vsubss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm2, xmm0, xmm2
    vmovss  dword ptr [rbx], xmm2
    vcomiss xmm4, xmm3
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vsubss  xmm2, xmm0, xmm2
    vmovss  dword ptr [rbx+4], xmm2
    vmovaps xmm6, [rsp+68h+var_18]
  }
}

/*
==============
ClearBounds2D
==============
*/
void ClearBounds2D(vec2_t *mins, vec2_t *maxs)
{
  mins->v[0] = 131072.0;
  mins->v[1] = 131072.0;
  maxs->v[0] = -131072.0;
  maxs->v[1] = -131072.0;
}

/*
==============
PointInBounds2D
==============
*/
bool PointInBounds2D(const vec2_t *v, const vec2_t *mins, const vec2_t *maxs)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  if ( v3 )
    return 0;
  __asm { vcomiss xmm0, dword ptr [r8] }
  if ( !(v3 | v4) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
  }
  return (v3 | v4) != 0;
}

/*
==============
BoundsOverlap2D
==============
*/
char BoundsOverlap2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1)
{
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vcomiss xmm0, dword ptr [rcx]
  }
  if ( v4 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9+4]
    vcomiss xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
  }
  return 1;
}

/*
==============
BoundsOverlapEpsilon2D
==============
*/
char BoundsOverlapEpsilon2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1, float epsilon)
{
  char v5; 

  __asm
  {
    vmovss  xmm1, [rsp+epsilon]
    vaddss  xmm0, xmm1, dword ptr [r9]
    vcomiss xmm0, dword ptr [rcx]
  }
  if ( v5 )
    return 0;
  __asm
  {
    vaddss  xmm0, xmm1, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r8]
    vaddss  xmm0, xmm1, dword ptr [r9+4]
    vcomiss xmm0, dword ptr [rcx+4]
    vaddss  xmm0, xmm1, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
  }
  return 1;
}

/*
==============
AddPointToBounds2D
==============
*/
void AddPointToBounds2D(const vec2_t *v, vec2_t *mins, vec2_t *maxs)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm0, dword ptr [rcx]
    }
  }
  __asm { vcomiss xmm0, dword ptr [r8] }
  if ( !(v3 | v4) )
    __asm { vmovss  dword ptr [r8], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  xmm0, dword ptr [rcx+4]
    }
  }
  __asm { vcomiss xmm0, dword ptr [r8+4] }
  if ( !(v3 | v4) )
    __asm { vmovss  dword ptr [r8+4], xmm0 }
}

/*
==============
ExpandBounds2D
==============
*/
void ExpandBounds2D(const vec2_t *addedmins, const vec2_t *addedmaxs, vec2_t *mins, vec2_t *maxs)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [r8]
  }
  if ( v4 )
    __asm { vmovss  dword ptr [r8], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r9]
  }
  if ( !(v4 | v5) )
    __asm { vmovss  dword ptr [r9], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [r8+4]
  }
  if ( v4 )
    __asm { vmovss  dword ptr [r8+4], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r9+4]
  }
  if ( !(v4 | v5) )
    __asm { vmovss  dword ptr [r9+4], xmm0 }
}

/*
==============
BoundsOverlap
==============
*/
char BoundsOverlap(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1)
{
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vcomiss xmm0, dword ptr [rcx]
  }
  if ( v4 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9+4]
    vcomiss xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
    vcomiss xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rdx+8]
    vcomiss xmm0, dword ptr [r8+8]
  }
  return 1;
}

/*
==============
BoundsOverlapEpsilon
==============
*/
char BoundsOverlapEpsilon(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1, float epsilon)
{
  char v5; 

  __asm
  {
    vmovss  xmm1, [rsp+epsilon]
    vaddss  xmm0, xmm1, dword ptr [r9]
    vcomiss xmm0, dword ptr [rcx]
  }
  if ( v5 )
    return 0;
  __asm
  {
    vaddss  xmm0, xmm1, dword ptr [rdx]
    vcomiss xmm0, dword ptr [r8]
    vaddss  xmm0, xmm1, dword ptr [r9+4]
    vcomiss xmm0, dword ptr [rcx+4]
    vaddss  xmm0, xmm1, dword ptr [rdx+4]
    vcomiss xmm0, dword ptr [r8+4]
    vaddss  xmm0, xmm1, dword ptr [r9+8]
    vcomiss xmm0, dword ptr [rcx+8]
    vaddss  xmm0, xmm1, dword ptr [rdx+8]
    vcomiss xmm0, dword ptr [r8+8]
  }
  return 1;
}

/*
==============
BoundsVolume
==============
*/
float BoundsVolume(const vec3_t *mins, const vec3_t *maxs)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmulss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
GetRotatedBounds
==============
*/
void GetRotatedBounds(const vec3_t (*baseBounds)[2], const vec3_t *origin, const tmat33_t<vec3_t> *axis, vec3_t (*rotatedBounds)[2])
{
  unsigned int v8; 
  bool v10; 
  __int64 v39; 
  __int64 v40; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _R12 = (char *)origin - (char *)axis;
  _R14 = (char *)rotatedBounds - (char *)axis;
  _RBP = (char *)&(*rotatedBounds)[1] - (char *)axis;
  v8 = 0;
  _RDI = (int *)axis;
  v10 = 1;
  _R13 = baseBounds;
  do
  {
    if ( !v10 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r12+rdi] }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r14+rdi], xmm6 }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r12+rdi] }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RSI = (*_RDI >> 31) & 0xC;
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r13]
      vmulss  xmm6, xmm0, dword ptr [rdi]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r14+rdi]
      vmovss  dword ptr [r14+rdi], xmm0
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RAX = (char *)&(*_R13)[1] - _RSI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmulss  xmm6, xmm0, dword ptr [rdi]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi+rbp]
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RSI = (_RDI[3] >> 31) & 0xC;
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r13+4]
      vmulss  xmm6, xmm0, dword ptr [rdi+0Ch]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r14+rdi]
      vmovss  dword ptr [r14+rdi], xmm0
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RAX = (char *)&(*_R13)[1] - _RSI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+4]
      vmulss  xmm6, xmm0, dword ptr [rdi+0Ch]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi+rbp]
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RSI = (_RDI[6] >> 31) & 0xC;
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r13+8]
      vmulss  xmm6, xmm0, dword ptr [rdi+18h]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r14+rdi]
      vmovss  dword ptr [r14+rdi], xmm0
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    _RAX = (char *)&(*_R13)[1] - _RSI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+8]
      vmulss  xmm6, xmm0, dword ptr [rdi+18h]
    }
    if ( v8 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi+rbp]
      vmovss  dword ptr [rdi+rbp], xmm0
    }
    ++_RDI;
    v10 = ++v8 < 3;
  }
  while ( (int)v8 < 3 );
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
ObbOverlap
==============
*/
bool ObbOverlap(const vec3_t *e0, const vec3_t *c0, const tmat33_t<vec3_t> *r0, const vec3_t *e1, const vec3_t *c1, const tmat33_t<vec3_t> *r1, bool fullTest)
{
  __int64 v44; 
  unsigned int i; 
  unsigned int v46; 
  unsigned int v59; 
  unsigned int v62; 
  bool result; 
  int v125[4]; 
  char v131; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-0B8h], xmm14
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  _RAX = c1;
  _R14 = &r0->m[0].v[2];
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@34000000
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm5, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
    vmulss  xmm0, xmm5, dword ptr [r8]
    vmulss  xmm1, xmm3, dword ptr [r8+4]
  }
  _R12 = r1;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r14]
    vmulss  xmm0, xmm5, dword ptr [r8+0Ch]
    vaddss  xmm9, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [r8+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+14h]
    vmulss  xmm0, xmm5, dword ptr [r8+18h]
    vaddss  xmm15, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [r8+1Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+20h]
    vaddss  xmm14, xmm2, xmm1
  }
  v44 = -8i64 - (_QWORD)r0;
  __asm
  {
    vmovss  [rsp+180h+var_120], xmm14
    vmovss  [rsp+180h+var_128], xmm9
    vmovss  [rsp+180h+var_124], xmm15
  }
  for ( i = 0; i < 3; ++i )
  {
    v46 = 0;
    _RSI = (char *)_R14 + v44;
    do
    {
      _RDI = 3i64 * (int)v46;
      __asm
      {
        vmovss  xmm0, dword ptr [r14-8]
        vmulss  xmm3, xmm0, dword ptr [r12+rdi*4]
        vmovss  xmm1, dword ptr [r12+rdi*4+4]
        vmulss  xmm2, xmm1, dword ptr [r14-4]
        vmovss  xmm0, dword ptr [r12+rdi*4+8]
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  [rbp+rsi+80h+var_F0], xmm2
        vandps  xmm2, xmm2, xmm6
        vaddss  xmm0, xmm2, xmm7
        vmovss  [rsp+rsi+180h+var_118], xmm0
      }
      _RSI += 4;
      ++v46;
    }
    while ( v46 < 3 );
    v44 = -8i64 - (_QWORD)r0;
    _R14 += 3;
    v59 = 0;
  }
  _RDI = v125;
  _R14 = e1;
  __asm { vmovaps [rsp+180h+var_70], xmm10 }
  v62 = 0;
  __asm
  {
    vmovaps [rsp+180h+var_80], xmm11
    vmovaps [rsp+180h+var_90], xmm12
    vmovaps [rsp+180h+var_A0], xmm13
  }
  do
  {
    _RCX = e0;
    _RSI = (int)v62;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [r14]
      vmulss  xmm3, xmm0, dword ptr [r14+4]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  xmm7, dword ptr [rcx+rsi*4]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm8, xmm4, xmm1
      vmovss  xmm1, [rsp+rsi*4+180h+var_128]
      vandps  xmm1, xmm1, xmm6
      vaddss  xmm0, xmm8, xmm7
      vcomiss xmm1, xmm0
    }
    ++v62;
    _RDI += 3;
  }
  while ( v62 < 3 );
  _RBX = 0i64;
  do
  {
    __asm
    {
      vmovss  xmm0, [rsp+rbx+180h+var_10C]
      vmovss  xmm1, [rsp+rbx+180h+var_118]
      vmulss  xmm3, xmm0, dword ptr [rcx+4]
      vmulss  xmm2, xmm1, dword ptr [rcx]
      vmovss  xmm0, [rbp+rbx+80h+var_100]
      vmulss  xmm1, xmm0, dword ptr [rcx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm7, xmm4, xmm1
      vmulss  xmm1, xmm15, [rbp+rbx+80h+var_E4]
      vmulss  xmm0, xmm9, [rbp+rbx+80h+var_F0]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, [rbp+rbx+80h+var_D8]
      vaddss  xmm3, xmm2, xmm1
      vandps  xmm3, xmm3, xmm6
      vaddss  xmm0, xmm7, dword ptr [r14+rax*4]
      vcomiss xmm3, xmm0
    }
    ++v59;
    _RBX += 4i64;
  }
  while ( v59 < 3 );
  if ( fullTest )
  {
    __asm
    {
      vmulss  xmm1, xmm14, [rbp+80h+var_E4]
      vmulss  xmm0, xmm15, [rbp+80h+var_D8]
      vmovss  xmm7, dword ptr [rcx+4]
      vmovss  xmm5, dword ptr [rcx+8]
      vmovss  xmm12, [rbp+80h+var_100]
      vmovss  xmm11, dword ptr [r14+4]
      vmovss  xmm10, dword ptr [r14+8]
      vmovss  xmm8, [rsp+180h+var_114]
      vmovss  xmm13, [rsp+180h+var_110]
      vsubss  xmm4, xmm1, xmm0
      vmulss  xmm1, xmm5, [rsp+180h+var_10C]
      vmulss  xmm0, xmm12, xmm7
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm2, xmm8, xmm10
      vmulss  xmm0, xmm13, xmm11
      vaddss  xmm1, xmm2, xmm0
      vaddss  xmm2, xmm3, xmm1
      vandps  xmm4, xmm4, xmm6
      vcomiss xmm4, xmm2
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
  __asm
  {
    vmovaps xmm13, [rsp+180h+var_A0]
    vmovaps xmm12, [rsp+180h+var_90]
    vmovaps xmm11, [rsp+180h+var_80]
    vmovaps xmm10, [rsp+180h+var_70]
  }
  _R11 = &v131;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
ColorSRGBtoLinear
==============
*/
void ColorSRGBtoLinear(const vec3_t *in, vec3_t *out)
{
  char v8; 
  char v9; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@3d25aee6
  }
  _RBX = out;
  _RDI = in;
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3f72a76f
    vaddss  xmm0, xmm0, cs:__real@3d55891a; X
    vmovss  xmm1, cs:__real@4019999a; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm0, cs:__real@3d25aee6
  }
  if ( v8 | v9 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm0, cs:__real@3d25aee6
  }
  if ( v8 | v9 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3d9e8391
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
  }
}

/*
==============
ScalarSRGBtoLinear
==============
*/

double __fastcall ScalarSRGBtoLinear(double in)
{
  char v1; 
  char v2; 

  __asm { vcomiss xmm0, cs:__real@3d25aee6 }
  if ( v1 | v2 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  return *(double *)&_XMM0;
}

/*
==============
Color2020toLinear
==============
*/
void Color2020toLinear(const vec3_t *in, vec3_t *out)
{
  char v8; 
  char v9; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@3da5e354
  }
  _RBX = out;
  _RDI = in;
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3f68f065
    vaddss  xmm0, xmm0, cs:__real@3db87cdb; X
    vmovss  xmm1, cs:__real@400e38e4; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm0, cs:__real@3da5e354
  }
  if ( v8 | v9 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3e638e39 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f68f065
      vaddss  xmm0, xmm0, cs:__real@3db87cdb; X
      vmovss  xmm1, cs:__real@400e38e4; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm0, cs:__real@3da5e354
  }
  if ( v8 | v9 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3e638e39
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f68f065
      vaddss  xmm0, xmm0, cs:__real@3db87cdb; X
      vmovss  xmm1, cs:__real@400e38e4; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
  }
}

/*
==============
LinearSRGBtoLinear2020
==============
*/
void LinearSRGBtoLinear2020(const vec3_t *in, vec3_t *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, cs:__real@3f209d8d
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, cs:__real@3ea897c9
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, cs:__real@3d316911
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdx], xmm2
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, cs:__real@3d8d82e8
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, cs:__real@3f6b6700
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, cs:__real@3c3a2900
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdx+4], xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, cs:__real@3c86475c
    vmulss  xmm3, xmm0, cs:__real@3db4404e
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, cs:__real@3f6545bc
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdx+8], xmm2
  }
}

/*
==============
Scalar2020toLinear
==============
*/

double __fastcall Scalar2020toLinear(double in)
{
  char v1; 
  char v2; 

  __asm { vcomiss xmm0, cs:__real@3da5e354 }
  if ( v1 | v2 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3e638e39 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f68f065
      vaddss  xmm0, xmm0, cs:__real@3db87cdb; X
      vmovss  xmm1, cs:__real@400e38e4; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  return *(double *)&_XMM0;
}

/*
==============
ScalarLinearToSRGB
==============
*/

float __fastcall ScalarLinearToSRGB(double in)
{
  __asm
  {
    vcomiss xmm0, cs:__real@3b4d2e1c
    vmovss  xmm1, cs:__real@3ed55555; Y
  }
  *(float *)&in = powf_0(*(float *)&in, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f870a3d
    vsubss  xmm0, xmm1, cs:__real@3d6147ae
  }
  return *(float *)&_XMM0;
}

/*
==============
vectoyaw
==============
*/
float vectoyaw(const vec2_t *vec)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]; Y
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
    vmovss  xmm1, dword ptr [rcx]; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@42652ee0
    vmovss  xmm0, cs:__real@43b40000
    vcmpless xmm1, xmm6, xmm2
    vblendvps xmm1, xmm0, xmm6, xmm1
    vmovaps xmm6, [rsp+38h+var_18]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
vectosignedyaw
==============
*/
float vectosignedyaw(const vec2_t *vec)
{
  char v7; 
  bool v8; 
  bool v10; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+4]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
    vmovss  xmm1, dword ptr [rcx]; X
    vmovaps xmm0, xmm2; Y
    vmovaps [rsp+48h+var_18], xmm6
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@42652ee0
    vcomiss xmm6, cs:__real@c3340000
  }
  if ( v7 )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2243, ASSERT_TYPE_SANITY, "( yaw >= -180 )", "%s", "yaw >= -180");
    v7 = 0;
    v8 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, cs:__real@43340000 }
  if ( !(v7 | v8) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2244, ASSERT_TYPE_SANITY, "( yaw <= 180 )", "%s", "yaw <= 180") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
vectopitch
==============
*/
float vectopitch(const vec3_t *vec)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm1, xmm6
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, dword ptr [rcx+8]; Y
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@c2652ee0
    vmovss  xmm0, cs:__real@43b40000
    vcmpless xmm1, xmm6, xmm2
    vblendvps xmm1, xmm0, xmm6, xmm1
    vmovaps xmm6, [rsp+38h+var_18]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
vectosignedpitch
==============
*/
float vectosignedpitch(const vec3_t *vec)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, dword ptr [rcx+8]; Y
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmulss  xmm0, xmm0, cs:__real@c2652ee0 }
  return *(float *)&_XMM0;
}

/*
==============
vectoangles
==============
*/
void vectoangles(const vec3_t *vec, vec3_t *angles)
{
  __asm { vmovaps [rsp+78h+var_38], xmm8 }
  _RBX = angles;
  __asm { vmovaps [rsp+78h+var_48], xmm9 }
  _RDI = vec;
  __asm
  {
    vmovss  xmm9, dword ptr [rcx+4]
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm9, xmm8
    vmovaps [rsp+78h+var_58], xmm10
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmm1, xmm6; X
    vmovaps xmm0, xmm9; Y
    vmovaps [rsp+78h+var_28], xmm7
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  xmm7, cs:__real@43b40000
    vcmpless xmm0, xmm8, xmm1
    vblendvps xmm0, xmm7, xmm8, xmm0
    vaddss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm1, xmm0, xmm0; X
    vmovss  xmm0, dword ptr [rdi+8]; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c2652ee0
    vmovaps xmm6, [rsp+78h+var_18]
    vcmpless xmm0, xmm8, xmm1
    vblendvps xmm0, xmm7, xmm8, xmm0
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm1, xmm0
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovss  dword ptr [rbx+4], xmm10
    vmovaps xmm10, [rsp+78h+var_58]
    vmovss  dword ptr [rbx], xmm0
  }
  _RBX->v[2] = 0.0;
}

/*
==============
vectosignedangles
==============
*/
void vectosignedangles(const vec3_t *vec, vec3_t *angles)
{
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  _RBX = angles;
  __asm { vmovaps [rsp+58h+var_38], xmm8 }
  _RDI = vec;
  __asm
  {
    vmovss  xmm8, dword ptr [rcx+4]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm8, xmm7
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmm1, xmm6; X
    vmovaps xmm0, xmm8; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm7, xmm0, cs:__real@42652ee0
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm1, xmm0, xmm0; X
    vmovss  xmm0, dword ptr [rdi+8]; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@c2652ee0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rbx+4], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rbx], xmm0
  }
  _RBX->v[2] = 0.0;
}

/*
==============
AxisClear
==============
*/
void AxisClear(tmat33_t<vec3_t> *axis)
{
  *(_OWORD *)axis->m[0].v = 0x3F800000ui64;
  *(_OWORD *)&axis->row1.y = 0x3F800000ui64;
  axis->m[2].v[2] = 1.0;
}

/*
==============
AxisCopy
==============
*/
void AxisCopy(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  *out = *in;
}

/*
==============
AxisTranspose
==============
*/
void AxisTranspose(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2358, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  out->m[0].v[0] = in->m[0].v[0];
  out->m[0].v[1] = in->m[1].v[0];
  out->m[0].v[2] = in->m[2].v[0];
  out->m[1].v[0] = in->m[0].v[1];
  out->m[1].v[1] = in->m[1].v[1];
  out->m[1].v[2] = in->m[2].v[1];
  out->m[2].v[0] = in->m[0].v[2];
  out->m[2].v[1] = in->m[1].v[2];
  out->m[2].v[2] = in->m[2].v[2];
}

/*
==============
AxisTransformVector
==============
*/

void __fastcall AxisTransformVector(const tmat33_t<vec3_t> *axes, double x, double y, double z, vec3_t *out)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vmulss  xmm4, xmm2, dword ptr [rcx+0Ch]
  }
  _RAX = out;
  __asm
  {
    vaddss  xmm5, xmm4, xmm0
    vmulss  xmm4, xmm3, dword ptr [rcx+18h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm1
    vaddss  xmm0, xmm5, xmm4
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm7, dword ptr [rcx+10h]
    vmulss  xmm1, xmm8, dword ptr [rcx+1Ch]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rax+4], xmm0
    vmulss  xmm1, xmm6, dword ptr [rcx+8]
    vmulss  xmm0, xmm7, dword ptr [rcx+14h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rcx+20h]
    vmovaps xmm8, [rsp+38h+var_38]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rax+8], xmm0
  }
}

/*
==============
AxisTransformVec3
==============
*/
void AxisTransformVec3(const tmat33_t<vec3_t> *axes, const vec3_t *vec, vec3_t *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+18h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8], xmm2
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+4], xmm2
    vmovss  xmm0, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+8], xmm2
  }
}

/*
==============
AnglesToQuat
==============
*/
void AnglesToQuat(const vec3_t *angles, vec4_t *quat)
{
  __int128 v9; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  _RBX = quat;
  HIDWORD(v9) = 0;
  __asm
  {
    vmovups xmm2, xmmword ptr [rsp+20h]
    vmovss  xmm2, xmm2, xmm0
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
  }
  Float4RadianToQuat((float4 *)angles, (const float4 *)quat);
  __asm { vmovups xmmword ptr [rbx], xmm0 }
}

/*
==============
AnglesToAxis
==============
*/
void AnglesToAxis(const vec3_t *angles, tmat33_t<vec3_t> *axis)
{
  float4 v40; 
  float4 v41; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm0, dword ptr [rcx]
  }
  v41.v.m128_i32[3] = 0;
  _RBX = axis;
  __asm
  {
    vmovups xmm2, xmmword ptr [rsp+30h]
    vmovss  xmm2, xmm2, xmm0
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
    vmovups [rsp+88h+var_58], xmm2
  }
  Float4SinCos((const float4 *)angles, &v41, &v40);
  __asm
  {
    vmovups xmm8, [rsp+88h+var_68]
    vmovups xmm3, [rsp+88h+var_58]
    vshufps xmm7, xmm3, xmm3, 55h ; 'U'
    vshufps xmm4, xmm8, xmm8, 55h ; 'U'
    vshufps xmm6, xmm3, xmm3, 0AAh ; 'ª'
    vshufps xmm5, xmm8, xmm8, 0AAh ; 'ª'
    vmulss  xmm2, xmm6, xmm3
    vmulss  xmm0, xmm4, xmm8
    vmovss  dword ptr [rbx], xmm0
    vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm8, xmm7
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  dword ptr [rbx+8], xmm0
    vmulss  xmm1, xmm2, xmm4
    vmulss  xmm2, xmm2, xmm7
    vmulss  xmm0, xmm5, xmm7
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmulss  xmm0, xmm5, xmm4
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx+10h], xmm1
    vmulss  xmm3, xmm5, xmm3
    vmulss  xmm1, xmm3, xmm4
    vmulss  xmm2, xmm8, xmm6
    vmovss  dword ptr [rbx+14h], xmm2
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+18h], xmm1
    vmulss  xmm2, xmm3, xmm7
    vmulss  xmm0, xmm4, xmm6
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm5, xmm8
    vmovss  dword ptr [rbx+1Ch], xmm1
    vmovss  dword ptr [rbx+20h], xmm2
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
AnglesAndOriginToMatrix43
==============
*/
void AnglesAndOriginToMatrix43(const vec3_t *angles, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  float4 v42; 
  float4 v43; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm0, dword ptr [rcx]
  }
  _RDI = result;
  v43.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm2, xmmword ptr [rsp+30h]
    vmovss  xmm2, xmm2, xmm0
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
    vmovups [rsp+88h+var_58], xmm2
  }
  Float4SinCos((const float4 *)angles, &v43, &v42);
  __asm
  {
    vmovups xmm8, [rsp+88h+var_68]
    vmovups xmm3, [rsp+88h+var_58]
    vshufps xmm7, xmm3, xmm3, 55h ; 'U'
    vshufps xmm4, xmm8, xmm8, 55h ; 'U'
    vshufps xmm6, xmm3, xmm3, 0AAh ; 'ª'
    vshufps xmm5, xmm8, xmm8, 0AAh ; 'ª'
    vmulss  xmm2, xmm6, xmm3
    vmulss  xmm0, xmm4, xmm8
    vmovss  dword ptr [rdi], xmm0
    vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm8, xmm7
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm1, xmm2, xmm4
    vmulss  xmm2, xmm2, xmm7
    vmulss  xmm0, xmm5, xmm7
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmulss  xmm0, xmm5, xmm4
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm3, xmm5, xmm3
    vmulss  xmm1, xmm3, xmm4
    vmulss  xmm2, xmm8, xmm6
    vmovss  dword ptr [rdi+14h], xmm2
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+18h], xmm1
    vmulss  xmm2, xmm3, xmm7
    vmulss  xmm0, xmm4, xmm6
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmulss  xmm2, xmm5, xmm8
    vmovss  dword ptr [rdi+20h], xmm2
  }
  _RDI->m[3] = *origin;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
YawToAxis
==============
*/

void __fastcall YawToAxis(double yaw, tmat33_t<vec3_t> *axis)
{
  float c; 
  float s[5]; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = axis;
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmovss  xmm0, [rsp+38h+c]
    vmovss  xmm3, [rsp+38h+s]
  }
  if ( _RBX )
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm3
    }
    _RBX->m[0].v[2] = 0.0;
  }
  __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000 }
  *(_QWORD *)_RBX->row2.v = 0i64;
  _RBX->m[2].v[2] = 1.0;
  __asm
  {
    vxorps  xmm1, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm2
    vxorps  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+10h], xmm1
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
  _RBX->m[1].v[2] = -0.0;
}

/*
==============
AxisToAngles
==============
*/
void AxisToAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  char v21; 
  char v22; 
  float c; 
  float s[3]; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = angles;
  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  _RBX = axis;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm9
    vmovaps [rsp+78h+var_48], xmm10
  }
  vectoangles(axis->m, angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm0, cs:__real@bc8efa35; radians
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmovss  xmm6, dword ptr [rbx+10h]
    vmovss  xmm10, dword ptr [rbx+14h]
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmulss  xmm1, xmm7, [rsp+78h+c]
    vmulss  xmm0, xmm6, [rsp+78h+s]
    vmulss  xmm2, xmm6, [rsp+78h+c]
    vsubss  xmm9, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm7, [rsp+78h+s]
    vmulss  xmm0, xmm0, cs:__real@bc8efa35; radians
    vaddss  xmm7, xmm2, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+78h+s]
    vmulss  xmm0, xmm9, [rsp+78h+c]
    vmulss  xmm2, xmm10, [rsp+78h+c]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+78h+s]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm7, xmm6
    vsubss  xmm0, xmm2, xmm1; Y
  }
  if ( !v22 )
    goto LABEL_4;
  __asm { vucomiss xmm4, xmm6 }
  if ( v22 )
  {
    __asm
    {
      vcmpless xmm2, xmm0, cs:__real@80000000
      vmovss  xmm0, cs:__real@c2b40000
      vmovss  xmm1, cs:__real@42b40000
      vblendvps xmm3, xmm0, xmm1, xmm2
    }
  }
  else
  {
LABEL_4:
    __asm
    {
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm1, xmm2, xmm2; X
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmulss  xmm3, xmm0, cs:__real@c2652ee0 }
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v21 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@43340000
      vmovss  xmm0, cs:__real@c3340000
      vcmpltss xmm2, xmm3, xmm6
      vblendvps xmm1, xmm0, xmm1, xmm2
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm9, [rsp+78h+var_38]
    vmovaps xmm10, [rsp+78h+var_48]
  }
}

/*
==============
Axis4ToAngles
==============
*/
void Axis4ToAngles(const tmat44_t<vec4_t> *axis, vec3_t *angles)
{
  char v21; 
  char v22; 
  float c; 
  float s[3]; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = angles;
  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  _RBX = axis;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm9
    vmovaps [rsp+78h+var_48], xmm10
  }
  vectoangles((const vec3_t *)axis, angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm0, cs:__real@bc8efa35; radians
    vmovss  xmm6, dword ptr [rbx+10h]
    vmovss  xmm7, dword ptr [rbx+14h]
    vmovss  xmm10, dword ptr [rbx+18h]
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmulss  xmm0, xmm7, [rsp+78h+s]
    vmulss  xmm1, xmm6, [rsp+78h+c]
    vmulss  xmm2, xmm6, [rsp+78h+s]
    vsubss  xmm9, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm7, [rsp+78h+c]
    vmulss  xmm0, xmm0, cs:__real@bc8efa35; radians
    vaddss  xmm7, xmm2, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+78h+s]
    vmulss  xmm0, xmm9, [rsp+78h+c]
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm10, [rsp+78h+c]
    vmulss  xmm0, xmm9, [rsp+78h+s]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm7, xmm6
    vsubss  xmm0, xmm1, xmm0; Y
  }
  if ( !v22 )
    goto LABEL_4;
  __asm { vucomiss xmm4, xmm6 }
  if ( v22 )
  {
    __asm
    {
      vcmpless xmm2, xmm0, cs:__real@80000000
      vmovss  xmm0, cs:__real@c2b40000
      vmovss  xmm1, cs:__real@42b40000
      vblendvps xmm3, xmm0, xmm1, xmm2
    }
  }
  else
  {
LABEL_4:
    __asm
    {
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm1, xmm2, xmm2; X
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmulss  xmm3, xmm0, cs:__real@c2652ee0 }
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v21 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@43340000
      vmovss  xmm0, cs:__real@c3340000
      vcmpltss xmm2, xmm3, xmm6
      vblendvps xmm1, xmm0, xmm1, xmm2
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm9, [rsp+78h+var_38]
    vmovaps xmm10, [rsp+78h+var_48]
  }
}

/*
==============
AngleRadBetween
==============
*/
double AngleRadBetween(const vec3_t *a, const vec3_t *b)
{
  double result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBX = b;
  _RDI = a;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 281, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 282, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm0, xmm5, xmm1; val
    vmovss  xmm1, cs:__real@bf800000; min
  }
  result = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&result = acosf_0(*(float *)&result);
  return result;
}

/*
==============
SignedAngleRadBetween
==============
*/
float SignedAngleRadBetween(const vec3_t *a, const vec3_t *b, const vec3_t *reference)
{
  char v64; 
  char v65; 
  vec3_t cross; 
  char v85; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b03126f
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  _RBX = b;
  _RDI = a;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 291, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 292, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 281, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 282, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm4, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm0, xmm5, xmm1; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vandps  xmm0, xmm0, xmm7
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v64 | v65 )
    goto LABEL_12;
  Vec3Cross(_RDI, _RBX, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+cross+4]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsp+88h+cross]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsp+88h+cross+8]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  if ( !v64 )
LABEL_12:
    __asm { vmovaps xmm0, xmm6 }
  else
    __asm { vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000 }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RotateAroundDirection
==============
*/

void __fastcall RotateAroundDirection(tmat33_t<vec3_t> *axis, double yaw)
{
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm6, dword ptr [rcx+8]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3b03126f
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm0
    vmovaps xmm10, xmm1
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm1
    vsubss  xmm0, xmm2, xmm7
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm9
  }
  _RBX = axis;
  _RDI = &axis->m[1];
  __asm
  {
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+128h+var_E8], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+128h+var_F0], xmm2
    vcvtss2sd xmm3, xmm4, xmm4
    vmovsd  [rsp+128h+var_F8], xmm3
    vcvtss2sd xmm0, xmm5, xmm5
    vmovsd  [rsp+128h+var_100], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 541, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( src ) )", "(%g, %g, %g) len %g", v64, v65, v66, v67) )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm1
    vmovss  [rsp+128h+var_C0], xmm0
    vmovss  [rsp+128h+var_C4], xmm2
    vmulss  xmm3, xmm4, xmm4
    vcomiss xmm3, xmm2
    vmovss  [rsp+128h+var_C8], xmm3
  }
  _RCX = 0i64;
  __asm
  {
    vcomiss xmm0, [rsp+rcx*4+128h+var_C8]
    vmovss  xmm0, dword ptr [rbx+rcx*4]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm0
    vaddss  xmm0, xmm7, dword ptr [rdi+rcx*4]
    vmovss  dword ptr [rdi+rcx*4], xmm0
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rdi]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  [rsp+128h+var_D0], xmm0
    vmovss  dword ptr [rdi+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm10, xmm0
  }
  Vec3Cross(_RBX->m, _RDI, &_RBX->m[2]);
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
PolarToCartesian
==============
*/

void __fastcall PolarToCartesian(double angleInDegrees, double radius, vec2_t *outCartesianCoords)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = outCartesianCoords;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+38h+c]
    vmulss  xmm0, xmm6, [rsp+38h+s]
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
CartesianToPolar
==============
*/
void CartesianToPolar(const vec2_t *cartesianCoords, float *outAngleInDegrees, float *outRadius)
{
  _RBX = outRadius;
  _RDI = outAngleInDegrees;
  _RSI = cartesianCoords;
  if ( !outAngleInDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2612, ASSERT_TYPE_SANITY, "( outAngleInDegrees )", "%s", "outAngleInDegrees") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2613, ASSERT_TYPE_SANITY, "( outRadius )", "%s", "outRadius") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]; Y
    vmovss  xmm1, dword ptr [rsi]; X
    vmulss  xmm3, xmm1, xmm1
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm4, xmm3, xmm3
    vmovss  dword ptr [rbx], xmm4
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
ScaleFromAxis
==============
*/
void ScaleFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outUnscaledAxis, vec3_t *outScale)
{
  unsigned int v78; 
  bool v79; 
  bool v80; 
  bool v81; 
  bool v82; 
  bool v86; 
  bool v87; 
  __int64 v95; 
  __int64 v96; 
  vec3_t cross; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm6, cs:__real@80000000
    vmulss  xmm0, xmm0, xmm0
  }
  _RAX = axis;
  _RDI = outScale;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [rdx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  dword ptr [r8], xmm5
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmovss  xmm0, dword ptr [rcx+10h]
    vmovss  xmm3, dword ptr [rcx+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmovss  dword ptr [rdx+0Ch], xmm0
    vmulss  xmm0, xmm1, dword ptr [rcx+10h]
    vmovss  dword ptr [rdx+10h], xmm0
    vmulss  xmm0, xmm1, dword ptr [rcx+14h]
    vmovss  dword ptr [rdx+14h], xmm0
    vmovss  dword ptr [r8+4], xmm5
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmovss  xmm4, dword ptr [rax+18h]
    vmovss  xmm3, dword ptr [rax+20h]
    vmulss  xmm0, xmm0, xmm0
  }
  _RCX = &outUnscaledAxis->m[2];
  _RBX = outUnscaledAxis;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rax+1Ch]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+20h]
    vmovss  dword ptr [rcx+8], xmm0
    vmovss  dword ptr [r8+8], xmm5
  }
  Vec3Cross(&outUnscaledAxis->m[2], outUnscaledAxis->m, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+cross+4]
    vmulss  xmm2, xmm0, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm4, dword ptr [rsp+0A8h+cross]
    vmovss  xmm0, dword ptr [rsp+0A8h+cross+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+14h]
    vaddss  xmm1, xmm3, xmm2
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
  }
  if ( v79 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm4, xmm3
      vmovss  dword ptr [rbx+0Ch], xmm0
      vmovss  xmm1, dword ptr [rbx+10h]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbx+10h], xmm2
      vmovss  xmm0, dword ptr [rbx+14h]
      vxorps  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbx+14h], xmm1
      vmovss  xmm2, dword ptr [rdi+4]
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rdi+4], xmm0
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3a83126f
  }
  v78 = 0;
  v79 = 1;
  do
  {
    if ( !v79 )
    {
      LODWORD(v96) = 3;
      LODWORD(v95) = v78;
      v80 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96);
      v79 = 0;
      if ( v80 )
        __debugbreak();
    }
    __asm { vcomiss xmm9, dword ptr [rdi] }
    if ( v79 )
    {
      v81 = v78 <= 3;
      if ( v78 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v78;
        v82 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96);
        v81 = !v82;
        if ( v82 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, xmm8
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm7
      }
      if ( v81 )
      {
        if ( v78 >= 3 )
        {
          LODWORD(v96) = 3;
          LODWORD(v95) = v78;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
            __debugbreak();
        }
        _RDI->v[0] = 1.0;
      }
    }
    else
    {
      v86 = v78 <= 3;
      if ( v78 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v78;
        v87 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96);
        v86 = !v87;
        if ( v87 )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm1, xmm8, dword ptr [rdi]
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm7
      }
      if ( v86 )
      {
        if ( v78 >= 3 )
        {
          LODWORD(v96) = 3;
          LODWORD(v95) = v78;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
            __debugbreak();
        }
        _RDI->v[0] = -1.0;
      }
    }
    ++v78;
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v79 = v78 < 3;
  }
  while ( (int)v78 < 3 );
  _R11 = &v98;
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
VectorRotateAngles
==============
*/
void VectorRotateAngles(const vec3_t *vIn, const vec3_t *vRotation, vec3_t *out)
{
  unsigned int *v22; 
  int v23; 
  bool v27; 
  bool v28; 
  bool v31; 
  unsigned int v100; 
  unsigned int v108; 
  __int64 v134; 
  __int64 v135; 
  int v137; 
  int v139; 
  __int128 v140; 
  int v141; 
  int v142; 
  char v146; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0B8h], xmm14
    vmovaps xmmword ptr [r11-0C8h], xmm15
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm2, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovsd  xmm14, qword ptr cs:__xmm@80000000000000008000000000000000
    vmovsd  xmm15, qword ptr cs:__xmm@7fffffffffffffff7fffffffffffffff
    vmovsd  xmm10, cs:__real@3fe0000000000000
    vmovsd  xmm11, cs:__real@3ff0000000000000
    vmovsd  xmm13, cs:__real@3ff921fb54442d18
  }
  v22 = (unsigned int *)&v140 + 1;
  v23 = 0;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovss  [rbp+90h+var_E8], xmm0
    vmovss  [rbp+90h+var_F8], xmm0
    vmovdqu xmm0, cs:__xmm@00000000000000020000000200000001
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  _R13 = out;
  __asm
  {
    vmovdqu xmmword ptr [rbp-50h], xmm0
    vmovss  dword ptr [rbp+90h+var_F0], xmm2
    vmovss  dword ptr [rbp+90h+var_F0+4], xmm1
    vmovss  dword ptr [rbp+90h+var_100], xmm2
    vmovss  dword ptr [rbp+90h+var_100+4], xmm1
  }
  _R12 = vRotation;
  v141 = 0;
  v142 = 1;
  v27 = 1;
  v28 = 0;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vxorpd  xmm12, xmm12, xmm12
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  do
  {
    if ( !v27 )
    {
      LODWORD(v135) = 3;
      LODWORD(v134) = v23;
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135);
      v28 = !v31;
      if ( v31 )
        __debugbreak();
    }
    __asm { vucomiss xmm9, dword ptr [r12] }
    if ( !v28 )
    {
      if ( (unsigned int)v23 >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vmulss  xmm1, xmm0, cs:__real@40490fdb
      }
      _R14 = (int)*(v22 - 1);
      __asm
      {
        vcvtss2sd xmm2, xmm1, xmm1
        vmulsd  xmm8, xmm2, cs:__real@3f76c16c16c16c17
        vandpd  xmm5, xmm8, xmm15
        vmulsd  xmm0, xmm5, cs:__real@3fd45f306dc9c883
        vaddsd  xmm1, xmm0, xmm10
        vcvttsd2si eax, xmm1
        vmovd   xmm4, eax
        vcvtdq2pd xmm4, xmm4
        vmulsd  xmm2, xmm4, xmm10
        vcvttsd2si eax, xmm2
        vmovd   xmm0, eax
        vcvtdq2pd xmm0, xmm0
        vsubsd  xmm1, xmm0, xmm2
        vmovsd  xmm0, cs:__real@bff0000000000000
        vcmplesd xmm3, xmm12, xmm1
        vmulsd  xmm1, xmm4, cs:__real@400921fb54442d18
        vblendvpd xmm7, xmm0, xmm11, xmm3
        vsubsd  xmm6, xmm5, xmm1
        vmulsd  xmm4, xmm6, xmm6
        vaddsd  xmm0, xmm5, xmm13
        vsubsd  xmm1, xmm0, xmm1
        vmulsd  xmm0, xmm4, cs:__real@3ce952c77030ad4a
        vsubsd  xmm2, xmm1, xmm13
        vsubsd  xmm1, xmm0, cs:__real@3d6ae7f3e733b81f
        vmulsd  xmm5, xmm2, xmm2
        vmulsd  xmm2, xmm1, xmm4
        vaddsd  xmm3, xmm2, cs:__real@3de6124613a86d09
        vmulsd  xmm0, xmm3, xmm4
        vsubsd  xmm1, xmm0, cs:__real@3e5ae64567f544e4
        vmulsd  xmm2, xmm1, xmm4
        vaddsd  xmm3, xmm2, cs:__real@3ec71de3a556c734
        vmulsd  xmm0, xmm3, xmm4
        vsubsd  xmm1, xmm0, cs:__real@3f2a01a01a01a01a
        vmulsd  xmm2, xmm1, xmm4
        vaddsd  xmm3, xmm2, cs:__real@3f81111111111111
        vmulsd  xmm0, xmm3, xmm4
        vsubsd  xmm1, xmm0, cs:__real@3fc5555555555555
        vmulsd  xmm2, xmm1, xmm4
        vaddsd  xmm3, xmm2, xmm11
        vcmplesd xmm0, xmm12, xmm8
        vxorpd  xmm1, xmm6, xmm14
        vblendvpd xmm2, xmm1, xmm6, xmm0
        vmulsd  xmm1, xmm5, cs:__real@3d2ae7f3e733b81f
        vmulsd  xmm0, xmm2, xmm7
        vsubsd  xmm2, xmm1, cs:__real@3da93974a8c07c9d
        vmulsd  xmm8, xmm3, xmm0
        vmulsd  xmm0, xmm2, xmm5
        vaddsd  xmm3, xmm0, cs:__real@3e21eed8eff8d898
        vmulsd  xmm1, xmm3, xmm5
        vsubsd  xmm2, xmm1, cs:__real@3e927e4fb7789f5c
        vmulsd  xmm0, xmm2, xmm5
        vaddsd  xmm3, xmm0, cs:__real@3efa01a01a01a01a
        vmulsd  xmm1, xmm3, xmm5
        vsubsd  xmm2, xmm1, cs:__real@3f56c16c16c16c17
        vmulsd  xmm0, xmm2, xmm5
        vaddsd  xmm3, xmm0, cs:__real@3fa5555555555555
        vmulsd  xmm1, xmm3, xmm5
        vsubsd  xmm2, xmm1, xmm10
        vmulsd  xmm0, xmm2, xmm5
        vaddsd  xmm3, xmm0, xmm11
        vmulsd  xmm7, xmm3, xmm7
      }
      if ( (unsigned int)_R14 >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = *(v22 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
          __debugbreak();
      }
      _RSI = (int)*v22;
      if ( (unsigned int)_RSI >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = *v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r14*4+90h+var_F0]
        vmovss  xmm1, dword ptr [rbp+rsi*4+90h+var_F0]
      }
      _RSI = (int)*(v22 - 1);
      v100 = _RSI;
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmulsd  xmm2, xmm0, xmm7
        vcvtss2sd xmm1, xmm1, xmm1
        vmulsd  xmm0, xmm1, xmm8
        vsubsd  xmm2, xmm2, xmm0
        vcvtsd2ss xmm6, xmm2, xmm2
      }
      if ( (unsigned int)_RSI >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = *(v22 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
        {
          __debugbreak();
          v100 = *(v22 - 1);
        }
      }
      __asm { vmovss  dword ptr [rbp+rsi*4+90h+var_100], xmm6 }
      if ( v100 >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = v100;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
          __debugbreak();
      }
      _R14 = (int)*v22;
      v108 = _R14;
      if ( (unsigned int)_R14 >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = *v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
        {
          __debugbreak();
          v108 = *v22;
        }
      }
      _RAX = (int)v100;
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+r14*4+90h+var_F0]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm0, dword ptr [rbp+rax*4+90h+var_F0]
        vcvtss2sd xmm0, xmm0, xmm0
        vmulsd  xmm2, xmm0, xmm8
        vmulsd  xmm0, xmm1, xmm7
        vaddsd  xmm2, xmm2, xmm0
        vcvtsd2ss xmm6, xmm2, xmm2
      }
      if ( v108 >= 3 )
      {
        LODWORD(v135) = 3;
        LODWORD(v134) = v108;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v134, v135) )
          __debugbreak();
      }
      _RAX = (int)v108;
      __asm { vmovss  dword ptr [rbp+rax*4+90h+var_100], xmm6 }
    }
    __asm { vmovsd  xmm0, [rbp+90h+var_100] }
    ++v23;
    _R12 = (const vec3_t *)((char *)_R12 + 4);
    v139 = v137;
    v22 += 2;
    __asm { vmovsd  [rbp+90h+var_F0], xmm0 }
    v27 = (unsigned int)v23 < 3;
    v28 = v23 == 3;
  }
  while ( v23 < 3 );
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+90h+var_100]
    vmovss  xmm1, dword ptr [rbp+90h+var_100+4]
    vmovaps xmm8, [rsp+190h+var_50]
    vmovaps xmm7, [rsp+190h+var_40]
    vmovaps xmm6, [rsp+190h+var_30]
    vmovss  dword ptr [r13+0], xmm0
    vmovss  xmm0, [rbp+90h+var_F8]
    vmovss  dword ptr [r13+8], xmm0
    vmovss  dword ptr [r13+4], xmm1
  }
  _R11 = &v146;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
VectorRotateAnglesAroundPoint
==============
*/
void VectorRotateAnglesAroundPoint(const vec3_t *vIn, const vec3_t *vRotation, const vec3_t *vOrigin, vec3_t *out)
{
  vec3_t vIna; 
  vec3_t outa; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+58h+vIn], xmm1
    vsubss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+58h+vIn+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [r8+8]
  }
  _RDI = out;
  __asm { vmovss  dword ptr [rsp+58h+vIn+8], xmm1 }
  VectorRotateAngles(&vIna, vRotation, &outa);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+out]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsp+58h+out+4]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsp+58h+out+8]
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm2
  }
}

/*
==============
MatrixMultiply
==============
*/
void MatrixMultiply(const tmat33_t<vec3_t> *in1, const tmat33_t<vec3_t> *in2, tmat33_t<vec3_t> *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8], xmm2
    vmovss  xmm0, dword ptr [rdx+10h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+4], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+20h]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+8], xmm2
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+0Ch], xmm2
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+10h], xmm2
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdx+14h]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+14h], xmm2
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+18h], xmm2
    vmovss  xmm0, dword ptr [rdx+10h]
    vmulss  xmm3, xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+1Ch], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmulss  xmm3, xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm0, dword ptr [rdx+20h]
    vmulss  xmm1, xmm0, dword ptr [rcx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+20h], xmm2
  }
}

/*
==============
MatrixDeterminant
==============
*/
float MatrixDeterminant(const tmat33_t<vec3_t> *in)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+1Ch]
    vmovss  xmm2, dword ptr [rcx+20h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx+14h]
    vmovaps [rsp+38h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+10h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm1, xmm2, xmm8
    vmulss  xmm2, xmm2, dword ptr [rcx+4]
    vmulss  xmm0, xmm4, xmm7
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, dword ptr [rcx]
    vmulss  xmm0, xmm4, dword ptr [rcx+8]
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm8, dword ptr [rcx+8]
    vmovaps xmm8, [rsp+38h+var_38]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rcx+4]
    vmovaps xmm7, [rsp+38h+var_28]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vaddss  xmm0, xmm4, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
DMatrixDeterminant
==============
*/
long double DMatrixDeterminant(const tmat33_t<dvec3_t> *in)
{
  __asm
  {
    vmovsd  xmm4, qword ptr [rcx+38h]
    vmovsd  xmm2, qword ptr [rcx+40h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovsd  xmm7, qword ptr [rcx+28h]
    vmovaps [rsp+38h+var_38], xmm8
    vmovsd  xmm8, qword ptr [rcx+20h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmulsd  xmm1, xmm2, xmm8
    vmulsd  xmm2, xmm2, qword ptr [rcx+8]
    vmulsd  xmm0, xmm4, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, qword ptr [rcx]
    vmulsd  xmm0, xmm4, qword ptr [rcx+10h]
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+18h]
    vmulsd  xmm0, xmm8, qword ptr [rcx+10h]
    vmovaps xmm8, [rsp+38h+var_38]
    vsubsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm7, qword ptr [rcx+8]
    vmovaps xmm7, [rsp+38h+var_28]
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+30h]
    vaddsd  xmm0, xmm4, xmm2
  }
  return *(double *)&_XMM0;
}

/*
==============
MatrixDeterminant
==============
*/
float MatrixDeterminant(const tmat44_t<vec4_t> *in)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm5, xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm4, dword ptr [rcx+14h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmulss  xmm6, xmm1, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rcx+18h]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+38h]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmulss  xmm9, xmm7, xmm1
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm10, xmm7, xmm0
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmulss  xmm12, xmm1, xmm4
    vmulss  xmm1, xmm10, dword ptr [rcx+2Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+30h]
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rcx+28h]
    vmovaps [rsp+0A8h+var_98], xmm14
    vmulss  xmm14, xmm4, dword ptr [rcx+20h]
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rcx+10h]
    vmulss  xmm11, xmm0, xmm15
    vmulss  xmm15, xmm15, dword ptr [rcx+24h]
    vmulss  xmm0, xmm5, xmm13
    vmulss  xmm3, xmm0, dword ptr [rcx+30h]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm9, dword ptr [rcx+2Ch]
    vmulss  xmm0, xmm6, xmm13
    vmulss  xmm1, xmm0, dword ptr [rcx+34h]
    vmulss  xmm0, xmm2, dword ptr [rcx+34h]
    vsubss  xmm3, xmm4, xmm1
    vmulss  xmm1, xmm5, dword ptr [rcx+20h]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm6, dword ptr [rcx+24h]
    vmovss  xmm6, dword ptr [rcx+30h]
    vmulss  xmm3, xmm11, dword ptr [rcx+2Ch]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm12, dword ptr [rcx+2Ch]
    vsubss  xmm5, xmm4, xmm2
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm4, xmm5, xmm2
    vmulss  xmm2, xmm7, dword ptr [rcx+24h]
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm0, xmm13, dword ptr [rcx+14h]
    vsubss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm2, xmm6
    vmulss  xmm2, xmm7, dword ptr [rcx+20h]
    vmulss  xmm0, xmm2, dword ptr [rcx+34h]
    vmovss  xmm7, dword ptr [rcx+24h]
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm13, dword ptr [rcx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+34h]
    vsubss  xmm3, xmm4, xmm0
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm14, xmm8
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm15, xmm8
    vmovss  xmm8, dword ptr [rcx+20h]
    vsubss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, dword ptr [rcx+0Ch]
    vaddss  xmm5, xmm5, xmm0
    vmulss  xmm3, xmm10, xmm8
    vmovss  xmm10, dword ptr [rcx+3Ch]
    vmulss  xmm1, xmm9, xmm7
    vmovss  xmm9, dword ptr [rcx+2Ch]
    vsubss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm11, xmm13
    vsubss  xmm4, xmm2, xmm0
    vmulss  xmm1, xmm12, xmm13
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rcx+14h]
    vmulss  xmm0, xmm2, xmm10
    vaddss  xmm5, xmm5, xmm0
    vmulss  xmm0, xmm7, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm1, xmm6
    vmulss  xmm1, xmm8, dword ptr [rcx+1Ch]
    vmovaps xmm7, xmmword ptr [rax-28h]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0A8h+var_88]
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm0, xmm1, dword ptr [rcx+34h]
    vmovaps xmm6, xmmword ptr [r11-18h]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm9, dword ptr [rcx+10h]
    vmulss  xmm1, xmm2, dword ptr [rcx+34h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vaddss  xmm3, xmm4, xmm0
    vmulss  xmm0, xmm14, xmm10
    vmovaps xmm14, [rsp+0A8h+var_98]
    vsubss  xmm3, xmm3, xmm1
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm15, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm15, [rsp+0A8h+var_A8]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vaddss  xmm0, xmm5, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
MatrixInverseDet
==============
*/

void __fastcall MatrixInverseDet(const tmat33_t<vec3_t> *in, double determinant, tmat33_t<vec3_t> *out)
{
  bool v8; 
  bool v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = out;
  _RBX = in;
  __asm { vmovaps xmm6, xmm1 }
  v8 = in == out;
  if ( in == out )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm0, dword ptr [rbx+10h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm3
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+14h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rbx+10h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi+8], xmm3
    vmovss  xmm1, dword ptr [rbx+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+18h]
    vmovss  xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm0, dword ptr [rbx+0Ch]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rbx+18h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi+10h], xmm3
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+14h]
    vmulss  xmm4, xmm1, dword ptr [rbx]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm3, xmm1, xmm6
    vxorps  xmm0, xmm3, xmm5
    vmovss  dword ptr [rdi+14h], xmm0
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm3, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+18h]
    vmulss  xmm2, xmm0, dword ptr [rbx+10h]
    vsubss  xmm1, xmm3, xmm2
    vmulss  xmm3, xmm1, xmm6
    vmovss  dword ptr [rdi+18h], xmm3
    vmovss  xmm1, dword ptr [rbx+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm4, xmm0, dword ptr [rbx+1Ch]
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi+20h], xmm3
  }
}

/*
==============
DMatrixInverseDet
==============
*/

void __fastcall DMatrixInverseDet(const tmat33_t<dvec3_t> *in, double determinant, tmat33_t<dvec3_t> *out)
{
  bool v8; 
  bool v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = out;
  _RBX = in;
  __asm { vmovaps xmm6, xmm1 }
  v8 = in == out;
  if ( in == out )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm6, xmm0
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm1, qword ptr [rbx+28h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm5, qword ptr cs:__xmm@80000000000000008000000000000000
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vdivsd  xmm6, xmm0, xmm6
    vmovsd  xmm0, qword ptr [rbx+40h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+20h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi], xmm3
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm0, qword ptr [rbx+40h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+8], xmm1
    vmovsd  xmm0, qword ptr [rbx+28h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+20h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi+10h], xmm3
    vmovsd  xmm1, qword ptr [rbx+28h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+30h]
    vmovsd  xmm0, qword ptr [rbx+40h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+18h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+18h], xmm1
    vmovsd  xmm0, qword ptr [rbx+40h]
    vmulsd  xmm3, xmm0, qword ptr [rbx]
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+30h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi+20h], xmm3
    vmovsd  xmm0, qword ptr [rbx+10h]
    vmulsd  xmm2, xmm0, qword ptr [rbx+18h]
    vmovsd  xmm1, qword ptr [rbx+28h]
    vmulsd  xmm4, xmm1, qword ptr [rbx]
    vsubsd  xmm1, xmm4, xmm2
    vmulsd  xmm3, xmm1, xmm6
    vxorpd  xmm0, xmm3, xmm5
    vmovsd  qword ptr [rdi+28h], xmm0
    vmovsd  xmm1, qword ptr [rbx+18h]
    vmulsd  xmm3, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm0, qword ptr [rbx+20h]
    vsubsd  xmm1, xmm3, xmm2
    vmulsd  xmm3, xmm1, xmm6
    vmovsd  qword ptr [rdi+30h], xmm3
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rbx]
    vmulsd  xmm4, xmm0, qword ptr [rbx+38h]
    vsubsd  xmm0, xmm4, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+38h], xmm1
    vmovsd  xmm0, qword ptr [rbx]
    vmulsd  xmm3, xmm0, qword ptr [rbx+20h]
    vmovsd  xmm1, qword ptr [rbx+18h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+8]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovsd  qword ptr [rdi+40h], xmm3
  }
}

/*
==============
MatrixInverse
==============
*/
void MatrixInverse(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+1Ch]
    vmovss  xmm2, dword ptr [rcx+20h]
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx+14h]
    vmulss  xmm0, xmm4, xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+10h]
    vmulss  xmm1, xmm2, xmm8
    vmulss  xmm2, xmm2, dword ptr [rcx+4]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, dword ptr [rcx]
    vmulss  xmm0, xmm4, dword ptr [rcx+8]
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm8, dword ptr [rcx+8]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rcx+4]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vaddss  xmm1, xmm4, xmm2; determinant
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  MatrixInverseDet(in, *(const float *)&_XMM1, out);
}

/*
==============
MatrixInverse44
==============
*/

void __fastcall MatrixInverse44(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst, double _XMM2_8, double _XMM3_8)
{
  vector4 v13; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups [rsp+0A8h+var_88], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rax-68h], ymm0
    vmovups ymm0, [rsp+0A8h+var_88]
    vmovups ymm1, ymmword ptr [rax-68h]
  }
  _RBX = dst;
  __asm
  {
    vmovups ymmword ptr [rax-48h], ymm0
    vmovups ymmword ptr [rax-28h], ymm1
  }
  Float4x4Inverse(&v13, (const vector4 *)dst);
  __asm
  {
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmmword ptr [rbx+10h], xmm1
    vmovups xmmword ptr [rbx+20h], xmm2
    vmovups xmmword ptr [rbx+30h], xmm3
  }
}

/*
==============
DMatrixInverse44
==============
*/
void DMatrixInverse44(const tmat44_t<dvec4_t> *mat, tmat44_t<dvec4_t> *dst)
{
  if ( !TMatrixInverse44Safe_tmat44_t_dvec4_t___(mat, dst) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2970, ASSERT_TYPE_SANITY, "( inverted )", "%s", "inverted") )
    __debugbreak();
}

/*
==============
MatrixVecMultiply
==============
*/
void MatrixVecMultiply(const tmat33_t<vec3_t> *mulMat, const vec3_t *mulVec, vec3_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2977, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
}

/*
==============
MatrixVecMultiply
==============
*/
void MatrixVecMultiply(const tmat44_t<vec4_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2987, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, dword ptr [rsi+14h]
    vmulss  xmm3, xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsi+18h]
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsi+28h]
    vmulss  xmm0, xmm1, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm2, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm2, dword ptr [rsi+34h]
    vmulss  xmm3, xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+30h]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsi+38h]
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
}

/*
==============
MatrixVecMultiply
==============
*/
void MatrixVecMultiply(const tmat43_t<vec3_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2998, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rdi+0Ch], xmm3
  }
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat33_t<dvec3_t> *mulMat, const dvec3_t *mulVec, dvec3_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2977, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+8]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi], xmm2
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi+18h]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+28h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi+8], xmm2
    vmovsd  xmm0, qword ptr [rsi+38h]
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi+10h], xmm2
  }
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat44_t<dvec4_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2987, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+8]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vmovsd  xmm2, qword ptr [rsi+18h]
    vmulsd  xmm0, xmm2, qword ptr [rbx+18h]
    vaddsd  xmm3, xmm4, xmm1
    vaddsd  xmm1, xmm3, xmm0
    vmovsd  qword ptr [rdi], xmm1
    vmovsd  xmm2, qword ptr [rsi+28h]
    vmulsd  xmm3, xmm2, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm1, xmm0, qword ptr [rbx]
    vmovsd  xmm2, qword ptr [rsi+30h]
    vmulsd  xmm0, xmm2, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm1
    vmovsd  xmm1, qword ptr [rsi+38h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+18h]
    vaddsd  xmm3, xmm4, xmm0
    vaddsd  xmm0, xmm3, xmm2
    vmovsd  qword ptr [rdi+8], xmm0
    vmovsd  xmm1, qword ptr [rsi+48h]
    vmulsd  xmm3, xmm1, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm2, xmm0, qword ptr [rbx]
    vmovsd  xmm1, qword ptr [rsi+50h]
    vmulsd  xmm0, xmm1, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vmovsd  xmm2, qword ptr [rsi+58h]
    vmulsd  xmm1, xmm2, qword ptr [rbx+18h]
    vaddsd  xmm3, xmm4, xmm0
    vaddsd  xmm0, xmm3, xmm1
    vmovsd  qword ptr [rdi+10h], xmm0
    vmovsd  xmm2, qword ptr [rsi+68h]
    vmulsd  xmm3, xmm2, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rsi+60h]
    vmulsd  xmm1, xmm0, qword ptr [rbx]
    vmovsd  xmm2, qword ptr [rsi+70h]
    vmulsd  xmm0, xmm2, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm1
    vmovsd  xmm1, qword ptr [rsi+78h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+18h]
    vaddsd  xmm3, xmm4, xmm0
    vaddsd  xmm0, xmm3, xmm2
    vmovsd  qword ptr [rdi+18h], xmm0
  }
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat43_t<dvec3_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  _RDI = solution;
  _RSI = mulMat;
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2998, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+8]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi], xmm2
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi+18h]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+28h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi+8], xmm2
    vmovsd  xmm0, qword ptr [rsi+38h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rdi+10h], xmm2
    vmovsd  xmm0, qword ptr [rsi+50h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+8]
    vmovsd  xmm1, qword ptr [rsi+48h]
    vmulsd  xmm2, xmm1, qword ptr [rbx]
    vmovsd  xmm0, qword ptr [rsi+58h]
    vmulsd  xmm1, xmm0, qword ptr [rbx+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vaddsd  xmm3, xmm2, qword ptr [rbx+18h]
    vmovsd  qword ptr [rdi+18h], xmm3
  }
}

/*
==============
MatrixIdentity33
==============
*/
void MatrixIdentity33(tmat33_t<vec3_t> *out)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B; tmat33_t<vec3_t> const identityMatrix33
    vmovups ymmword ptr [rcx], ymm0
  }
  out->m[2].v[2] = identityMatrix33.m[2].v[2];
}

/*
==============
MatrixIdentity34
==============
*/
void MatrixIdentity34(tmat34_t<vec4_t> *out)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
    vmovups xmmword ptr [rcx+20h], xmm1
  }
}

/*
==============
MatrixIdentity43
==============
*/
void MatrixIdentity43(tmat43_t<vec3_t> *out)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B; tmat33_t<vec3_t> const identityMatrix33
    vmovups ymmword ptr [rcx], ymm0
  }
  out->m[2].v[2] = identityMatrix33.m[2].v[2];
  *(_QWORD *)out->row3.v = 0i64;
  out->m[3].v[2] = 0.0;
}

/*
==============
MatrixIdentity44
==============
*/
void MatrixIdentity44(tmat44_t<vec4_t> *out)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
    vmovups ymmword ptr [rcx+20h], ymm1
  }
}

/*
==============
MatrixSet43
==============
*/

void __fastcall MatrixSet43(tmat43_t<vec3_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double scale)
{
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8]
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+8]
    vmovss  dword ptr [rcx+8], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+0Ch], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+10h]
    vmovss  dword ptr [rcx+10h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+14h]
    vmovss  dword ptr [rcx+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  dword ptr [rcx+18h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [rcx+1Ch], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [rcx+20h], xmm0
  }
  out->m[3] = *origin;
}

/*
==============
MatrixSet44
==============
*/

void __fastcall MatrixSet44(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double scale)
{
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8]
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+8]
    vmovss  dword ptr [rcx+8], xmm0
  }
  out->m[0].v[3] = 0.0;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+10h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+10h]
    vmovss  dword ptr [rcx+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+14h]
    vmovss  dword ptr [rcx+18h], xmm0
  }
  out->m[1].v[3] = 0.0;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  dword ptr [rcx+20h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [rcx+24h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [rcx+28h], xmm0
  }
  out->m[2].v[3] = 0.0;
  out->m[3].xyz = *origin;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixSet44NonUniformScale
==============
*/
void MatrixSet44NonUniformScale(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *scale)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmulss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm2, dword ptr [r8+4]
    vmulss  xmm0, xmm2, dword ptr [r9]
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  xmm1, dword ptr [r8+8]
    vmulss  xmm2, xmm1, dword ptr [r9]
    vmovss  dword ptr [rcx+8], xmm2
  }
  out->m[0].v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+0Ch]
    vmulss  xmm1, xmm0, dword ptr [r9+4]
    vmovss  dword ptr [rcx+10h], xmm1
    vmovss  xmm2, dword ptr [r8+10h]
    vmulss  xmm0, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  xmm1, dword ptr [r8+14h]
    vmulss  xmm2, xmm1, dword ptr [r9+4]
    vmovss  dword ptr [rcx+18h], xmm2
  }
  out->m[1].v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+18h]
    vmulss  xmm1, xmm0, dword ptr [r9+8]
    vmovss  dword ptr [rcx+20h], xmm1
    vmovss  xmm2, dword ptr [r8+1Ch]
    vmulss  xmm0, xmm2, dword ptr [r9+8]
    vmovss  dword ptr [rcx+24h], xmm0
    vmovss  xmm1, dword ptr [r8+20h]
    vmulss  xmm2, xmm1, dword ptr [r9+8]
    vmovss  dword ptr [rcx+28h], xmm2
  }
  out->m[2].v[3] = 0.0;
  out->m[3].xyz = *origin;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixSet44Transposed
==============
*/

void __fastcall MatrixSet44Transposed(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double scale)
{
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8]
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  dword ptr [rcx+8], xmm0
  }
  out->m[0].v[3] = origin->v[0];
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+4]
    vmovss  dword ptr [rcx+10h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+10h]
    vmovss  dword ptr [rcx+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [rcx+18h], xmm0
  }
  out->m[1].v[3] = origin->v[1];
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+8]
    vmovss  dword ptr [rcx+20h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+14h]
    vmovss  dword ptr [rcx+24h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [rcx+28h], xmm0
  }
  out->m[2].v[3] = origin->v[2];
  *(_QWORD *)out->row3.v = 0i64;
  out->m[3].v[2] = 0.0;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixSet44TransposedNonUniformScale
==============
*/
void MatrixSet44TransposedNonUniformScale(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *scale)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmulss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm0, dword ptr [r8+0Ch]
    vmulss  xmm1, xmm0, dword ptr [r9+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm0, dword ptr [r8+18h]
    vmulss  xmm1, xmm0, dword ptr [r9+8]
    vmovss  dword ptr [rcx+8], xmm1
  }
  out->m[0].v[3] = origin->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmulss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rcx+10h], xmm1
    vmovss  xmm2, dword ptr [r8+10h]
    vmulss  xmm0, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  xmm1, dword ptr [r8+1Ch]
    vmulss  xmm2, xmm1, dword ptr [r9+8]
    vmovss  dword ptr [rcx+18h], xmm2
  }
  out->m[1].v[3] = origin->v[1];
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmulss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rcx+20h], xmm1
    vmovss  xmm2, dword ptr [r8+14h]
    vmulss  xmm0, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [rcx+24h], xmm0
    vmovss  xmm1, dword ptr [r8+20h]
    vmulss  xmm2, xmm1, dword ptr [r9+8]
    vmovss  dword ptr [rcx+28h], xmm2
  }
  out->m[2].v[3] = origin->v[2];
  *(_QWORD *)out->row3.v = 0i64;
  out->m[3].v[2] = 0.0;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixSet34Transposed
==============
*/

void __fastcall MatrixSet34Transposed(tmat34_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double scale)
{
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8]
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  dword ptr [rcx+8], xmm0
  }
  out->m[0].v[3] = origin->v[0];
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+4]
    vmovss  dword ptr [rcx+10h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+10h]
    vmovss  dword ptr [rcx+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [rcx+18h], xmm0
  }
  out->m[1].v[3] = origin->v[1];
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+8]
    vmovss  dword ptr [rcx+20h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+14h]
    vmovss  dword ptr [rcx+24h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [rcx+28h], xmm0
  }
  out->m[2].v[3] = origin->v[2];
}

/*
==============
MatrixCopy33
==============
*/
void MatrixCopy33(const tmat33_t<vec3_t> *src, tmat33_t<vec3_t> *dst)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
  }
  dst->m[2].v[2] = src->m[2].v[2];
}

/*
==============
MatrixCopy43
==============
*/
void MatrixCopy43(const tmat43_t<vec3_t> *src, tmat43_t<vec3_t> *dst)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
    vmovups xmm1, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rdx+20h], xmm1
  }
}

/*
==============
MatrixCopy44
==============
*/
void MatrixCopy44(const tmat44_t<vec4_t> *src, tmat44_t<vec4_t> *dst)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rdx+20h], ymm1
  }
}

/*
==============
MatrixTransformVector43
==============
*/
void MatrixTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  _RSI = out;
  _RDI = in2;
  _RBX = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+24h]
    vmovss  dword ptr [rsi], xmm3
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+10h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+28h]
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsi+8], xmm3
  }
}

/*
==============
MatrixTransposeTransformVector43
==============
*/
void MatrixTransposeTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  _RSI = out;
  _RDI = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3337, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm5, xmm0, dword ptr [rbx+24h]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm3, xmm1, dword ptr [rbx+28h]
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+8]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+14h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx+18h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi+8], xmm0
  }
}

/*
==============
MatrixMultiply43
==============
*/
void MatrixMultiply43(const tmat43_t<vec3_t> *in1, const tmat43_t<vec3_t> *in2, tmat43_t<vec3_t> *out)
{
  _RBX = out;
  _RDI = in2;
  _RSI = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3190, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3191, ASSERT_TYPE_SANITY, "( &in2 != &out )", "%s", "&in2 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx], xmm2
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+0Ch], xmm2
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+18h], xmm2
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+10h], xmm2
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+1Ch], xmm2
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi+14h]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm3, xmm0, dword ptr [rdi+14h]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+14h], xmm2
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vmulss  xmm3, xmm0, dword ptr [rdi+14h]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+20h], xmm2
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm3, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+24h]
    vmovss  dword ptr [rbx+24h], xmm3
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm4, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+28h], xmm3
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vmulss  xmm4, xmm0, dword ptr [rdi+14h]
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbx+2Ch], xmm3
  }
}

/*
==============
MatrixMultiply34
==============
*/
void MatrixMultiply34(const tmat34_t<vec4_t> *in1, const tmat34_t<vec4_t> *in2, tmat34_t<vec4_t> *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+24h]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+4], xmm2
    vmovss  xmm0, dword ptr [rdx+18h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+28h]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+8], xmm2
  }
  out->m[0].v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+10h]
    vmulss  xmm3, xmm0, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rcx+18h]
    vmulss  xmm1, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+10h], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vmulss  xmm3, xmm0, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rdx+24h]
    vmulss  xmm1, xmm0, dword ptr [rcx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+14h], xmm2
    vmovss  xmm0, dword ptr [rdx+18h]
    vmulss  xmm3, xmm0, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rdx+28h]
    vmulss  xmm1, xmm0, dword ptr [rcx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+18h], xmm2
  }
  out->m[1].v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+10h]
    vmulss  xmm3, xmm0, dword ptr [rcx+24h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmovss  xmm0, dword ptr [rcx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+20h], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vmulss  xmm3, xmm0, dword ptr [rcx+24h]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmovss  xmm0, dword ptr [rdx+24h]
    vmulss  xmm1, xmm0, dword ptr [rcx+28h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+24h], xmm2
    vmovss  xmm0, dword ptr [rdx+18h]
    vmulss  xmm3, xmm0, dword ptr [rcx+24h]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmovss  xmm0, dword ptr [rdx+28h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, dword ptr [rcx+28h]
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+28h], xmm2
  }
  out->m[2].v[3] = 0.0;
}

/*
==============
MatrixMultiply44
==============
*/

void __fastcall MatrixMultiply44(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out, double _XMM3_8)
{
  vector4 M1; 
  vector4 v22; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups [rsp+0E8h+var_C8], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups [rsp+0E8h+var_A8], ymm0
    vmovups ymm0, [rsp+0E8h+var_C8]
    vmovups ymm1, [rsp+0E8h+var_A8]
    vmovups ymmword ptr [rax-48h], ymm0
    vmovups ymm0, ymmword ptr [rdx]
    vmovups [rsp+0E8h+var_C8], ymm0
    vmovups ymm0, ymmword ptr [rdx+20h]
    vmovups [rsp+0E8h+var_A8], ymm0
    vmovups ymm0, [rsp+0E8h+var_C8]
    vmovups ymmword ptr [rax-28h], ymm1
    vmovups ymm1, [rsp+0E8h+var_A8]
    vmovups ymmword ptr [rsp+0E8h+M1.baseclass_0.x.v], ymm0
  }
  _RBX = out;
  __asm { vmovups ymmword ptr [rax-68h], ymm1 }
  Float4x4Mul(&v22, &M1, (const vector4 *)out);
  __asm
  {
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmmword ptr [rbx+10h], xmm1
    vmovups xmmword ptr [rbx+20h], xmm2
    vmovups xmmword ptr [rbx+30h], xmm3
  }
}

/*
==============
MatrixTransformPos44
==============
*/
void MatrixTransformPos44(const vec3_t *pos, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovups xmm0, xmmword ptr [rcx]
    vinsertps xmm5, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
    vshufps xmm0, xmm5, xmm5, 0
    vmulps  xmm1, xmm0, xmmword ptr [rdx]
    vshufps xmm2, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm2, xmmword ptr [rdx+10h]
    vshufps xmm4, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm0, xmm4, xmmword ptr [rdx+20h]
    vaddps  xmm2, xmm0, xmm1
    vshufps xmm5, xmm5, xmm5, 0FFh
    vmulps  xmm1, xmm5, xmmword ptr [rdx+30h]
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm2
    vmovups xmmword ptr [r8], xmm2
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
  }
}

/*
==============
MatrixTransformDir44
==============
*/
void MatrixTransformDir44(const vec3_t *dir, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  __int128 v23; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm0, dword ptr [rcx]
  }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr [rcx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+8], 20h ; ' '
    vshufps xmm0, xmm5, xmm5, 0
    vmulps  xmm1, xmm0, xmmword ptr [rdx]
    vshufps xmm2, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm2, xmmword ptr [rdx+10h]
    vshufps xmm4, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm0, xmm4, xmmword ptr [rdx+20h]
    vaddps  xmm2, xmm0, xmm1
    vshufps xmm5, xmm5, xmm5, 0FFh
    vmulps  xmm1, xmm5, xmmword ptr [rdx+30h]
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm2
    vmovups xmmword ptr [r8], xmm2
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
MatrixTransformVector44
==============
*/
void MatrixTransformVector44(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovups xmm5, xmmword ptr [rcx]
    vshufps xmm0, xmm5, xmm5, 0
    vmulps  xmm1, xmm0, xmmword ptr [rdx]
    vshufps xmm2, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm2, xmmword ptr [rdx+10h]
    vshufps xmm4, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm0, xmm4, xmmword ptr [rdx+20h]
    vaddps  xmm2, xmm0, xmm1
    vshufps xmm5, xmm5, xmm5, 0FFh
    vmulps  xmm1, xmm5, xmmword ptr [rdx+30h]
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm2
    vmovups xmmword ptr [r8], xmm2
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
  }
}

/*
==============
MatrixTranspose
==============
*/
void MatrixTranspose(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3347, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  out->m[0].v[0] = in->m[0].v[0];
  out->m[0].v[1] = in->m[1].v[0];
  out->m[0].v[2] = in->m[2].v[0];
  out->m[1].v[0] = in->m[0].v[1];
  out->m[1].v[1] = in->m[1].v[1];
  out->m[1].v[2] = in->m[2].v[1];
  out->m[2].v[0] = in->m[0].v[2];
  out->m[2].v[1] = in->m[1].v[2];
  out->m[2].v[2] = in->m[2].v[2];
}

/*
==============
DMatrixTranspose
==============
*/
void DMatrixTranspose(const tmat33_t<dvec3_t> *in, tmat33_t<dvec3_t> *out)
{
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3347, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  out->m[0].x = in->m[0].x;
  out->m[0].y = in->m[1].x;
  out->m[0].z = in->m[2].x;
  out->m[1].x = in->m[0].y;
  out->m[1].y = in->m[1].y;
  out->m[1].z = in->m[2].y;
  out->m[2].x = in->m[0].z;
  out->m[2].y = in->m[1].z;
  out->m[2].z = in->m[2].z;
}

/*
==============
MatrixTranspose44
==============
*/
void MatrixTranspose44(const tmat44_t<vec4_t> *in, tmat44_t<vec4_t> *out)
{
  __asm
  {
    vmovups xmm5, xmmword ptr [rcx]
    vshufps xmm4, xmm5, xmmword ptr [rcx+10h], 44h ; 'D'
    vmovups xmm2, xmmword ptr [rcx+20h]
    vshufps xmm1, xmm2, xmmword ptr [rcx+30h], 44h ; 'D'
    vshufps xmm5, xmm5, xmmword ptr [rcx+10h], 0EEh ; 'î'
    vshufps xmm2, xmm2, xmmword ptr [rcx+30h], 0EEh ; 'î'
    vshufps xmm3, xmm4, xmm1, 88h ; 'ˆ'
    vshufps xmm0, xmm4, xmm1, 0DDh ; 'Ý'
    vmovups xmmword ptr [rdx], xmm3
    vmovups xmmword ptr [rdx+10h], xmm0
    vshufps xmm4, xmm5, xmm2, 88h ; 'ˆ'
    vshufps xmm1, xmm5, xmm2, 0DDh ; 'Ý'
    vmovups xmmword ptr [rdx+20h], xmm4
    vmovups xmmword ptr [rdx+30h], xmm1
  }
}

/*
==============
DMatrixTranspose44
==============
*/

void __fastcall DMatrixTranspose44(const tmat44_t<dvec4_t> *in, tmat44_t<dvec4_t> *out)
{
  TMatrixTranspose44_tmat44_t_dvec4_t___(in, out);
}

/*
==============
MatrixInverseOrthogonal43
==============
*/
void MatrixInverseOrthogonal43(const tmat43_t<vec3_t> *in, tmat43_t<vec3_t> *out)
{
  vec3_t in1; 

  _RBX = in;
  MatrixTranspose((const tmat33_t<vec3_t> *)in, (tmat33_t<vec3_t> *)out);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+48h+in1], xmm0
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+48h+in1+8], xmm1
    vmovss  dword ptr [rsp+48h+in1+4], xmm2
  }
  MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)out, &out->m[3]);
}

/*
==============
DMatrixInverseOrthogonal43
==============
*/
void DMatrixInverseOrthogonal43(const tmat43_t<dvec3_t> *in, tmat43_t<dvec3_t> *out)
{
  char v33; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RDI = in;
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3347, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  __asm { vmovsd  xmm2, qword ptr cs:__xmm@80000000000000008000000000000000 }
  out->m[0].x = _RDI->m[0].x;
  out->m[0].y = _RDI->m[1].x;
  out->m[0].z = _RDI->m[2].x;
  out->m[1].x = _RDI->m[0].y;
  out->m[1].y = _RDI->m[1].y;
  out->m[1].z = _RDI->m[2].y;
  out->m[2].x = _RDI->m[0].z;
  out->m[2].y = _RDI->m[1].z;
  out->m[2].z = _RDI->m[2].z;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+48h]
    vmovsd  xmm1, qword ptr [rdi+58h]
    vxorpd  xmm6, xmm0, xmm2
    vmovsd  xmm0, qword ptr [rdi+50h]
  }
  _RDI = &out->m[3];
  __asm
  {
    vxorpd  xmm7, xmm0, xmm2
    vxorpd  xmm8, xmm1, xmm2
  }
  if ( &v33 == (char *)&out->row3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulsd  xmm1, xmm6, qword ptr [rbx]
    vmulsd  xmm0, xmm7, qword ptr [rbx+18h]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm8, qword ptr [rbx+30h]
    vaddsd  xmm0, xmm2, xmm1
    vmovsd  qword ptr [rdi], xmm0
    vmulsd  xmm1, xmm7, qword ptr [rbx+20h]
    vmulsd  xmm0, xmm6, qword ptr [rbx+8]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm8, qword ptr [rbx+38h]
    vaddsd  xmm0, xmm2, xmm1
    vmovsd  qword ptr [rdi+8], xmm0
    vmulsd  xmm1, xmm6, qword ptr [rbx+10h]
    vmulsd  xmm0, xmm7, qword ptr [rbx+28h]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm8, qword ptr [rbx+40h]
    vaddsd  xmm0, xmm2, xmm1
    vmovsd  qword ptr [rdi+10h], xmm0
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
MatrixInverseOrthogonal43
==============
*/
void MatrixInverseOrthogonal43(const tmat33_t<vec3_t> *axis, const vec3_t *origin, tmat43_t<vec3_t> *out)
{
  vec3_t in1; 

  _RBX = origin;
  MatrixTranspose(axis, (tmat33_t<vec3_t> *)out);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+48h+in1], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+48h+in1+8], xmm1
    vmovss  dword ptr [rsp+48h+in1+4], xmm2
  }
  MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)out, &out->m[3]);
}

/*
==============
MatrixRotationX
==============
*/

void __fastcall MatrixRotationX(tmat33_t<vec3_t> *mat, double degrees)
{
  float s; 
  float c; 

  __asm { vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians }
  _RBX = mat;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
  }
  *(_QWORD *)_RBX->m[0].v = 1065353216i64;
  *(_QWORD *)&_RBX->row0.z = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm2
    vmovss  dword ptr [rbx+14h], xmm0
  }
  _RBX->m[2].v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+1Ch], xmm1
    vmovss  dword ptr [rbx+20h], xmm2
  }
}

/*
==============
MatrixRotationY
==============
*/

void __fastcall MatrixRotationY(tmat33_t<vec3_t> *mat, double degrees)
{
  float s; 
  float c; 

  __asm { vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians }
  _RBX = mat;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+c]
    vmovss  xmm0, [rsp+28h+s]
    vmovss  dword ptr [rbx], xmm1
  }
  _RBX->m[0].v[1] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  _RBX->m[1].v[0] = 0.0;
  *(_QWORD *)&_RBX->row1.y = 1065353216i64;
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  _RBX->m[2].v[1] = 0.0;
  __asm { vmovss  dword ptr [rbx+20h], xmm1 }
}

/*
==============
MatrixRotationZ
==============
*/

void __fastcall MatrixRotationZ(tmat33_t<vec3_t> *mat, double degrees)
{
  float s; 
  float c; 

  __asm { vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians }
  _RBX = mat;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
  _RBX->m[0].v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  dword ptr [rbx+10h], xmm2
  }
  *(_QWORD *)&_RBX->row1.z = 0i64;
  _RBX->m[2].v[1] = 0.0;
  _RBX->m[2].v[2] = 1.0;
}

/*
==============
MatrixRotationDeg
==============
*/

void __fastcall MatrixRotationDeg(tmat33_t<vec3_t> *mat, const vec3_t *dir, double degrees)
{
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  float c; 
  float s[31]; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = dir;
  __asm
  {
    vmulss  xmm6, xmm2, cs:__real@3c8efa35
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = mat;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0D8h+var_98], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0D8h+var_A0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0D8h+var_A8], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0D8h+var_B0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v66, v67, v68, v69) )
    __debugbreak();
  __asm { vmovss  [rsp+0D8h+c], xmm6 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; radians }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm12, [rsp+0D8h+c]
    vmovss  xmm0, [rsp+0D8h+s]
    vmulss  xmm11, xmm6, xmm0
  }
  _R11 = &v72;
  __asm
  {
    vsubss  xmm4, xmm7, xmm12
    vmulss  xmm7, xmm2, xmm0
    vmulss  xmm10, xmm3, xmm0
    vmulss  xmm9, xmm2, xmm4
    vmulss  xmm8, xmm3, xmm4
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm4, xmm1, xmm2
    vmulss  xmm0, xmm1, xmm6
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm5, xmm8, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vsubss  xmm2, xmm5, xmm7
    vmovss  dword ptr [rdi+4], xmm2
    vaddss  xmm0, xmm10, xmm4
    vmovss  dword ptr [rdi+8], xmm0
    vaddss  xmm1, xmm7, xmm5
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmulss  xmm0, xmm8, dword ptr [rbx+4]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm0, xmm12
    vmovss  dword ptr [rdi+10h], xmm2
    vmulss  xmm3, xmm9, xmm3
    vsubss  xmm1, xmm3, xmm11
    vmovss  dword ptr [rdi+14h], xmm1
    vsubss  xmm0, xmm4, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm1, xmm11, xmm3
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmulss  xmm0, xmm9, dword ptr [rbx+8]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm2, xmm0, xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovss  dword ptr [rdi+20h], xmm2
  }
}

/*
==============
MatrixRotationXRad
==============
*/

void __fastcall MatrixRotationXRad(tmat33_t<vec3_t> *mat, double radians)
{
  float c; 
  float s; 

  _RBX = mat;
  __asm { vmovaps xmm0, xmm1; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
  }
  *(_QWORD *)_RBX->m[0].v = 1065353216i64;
  *(_QWORD *)&_RBX->row0.z = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm2
    vmovss  dword ptr [rbx+14h], xmm0
  }
  _RBX->m[2].v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+1Ch], xmm1
    vmovss  dword ptr [rbx+20h], xmm2
  }
}

/*
==============
MatrixRotationYRad
==============
*/

void __fastcall MatrixRotationYRad(tmat33_t<vec3_t> *mat, double radians)
{
  float c; 
  float s; 

  _RBX = mat;
  __asm { vmovaps xmm0, xmm1; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+c]
    vmovss  xmm0, [rsp+28h+s]
    vmovss  dword ptr [rbx], xmm1
  }
  _RBX->m[0].v[1] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  _RBX->m[1].v[0] = 0.0;
  *(_QWORD *)&_RBX->row1.y = 1065353216i64;
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  _RBX->m[2].v[1] = 0.0;
  __asm { vmovss  dword ptr [rbx+20h], xmm1 }
}

/*
==============
MatrixRotationZRad
==============
*/

void __fastcall MatrixRotationZRad(tmat33_t<vec3_t> *mat, double radians)
{
  float c; 
  float s; 

  _RBX = mat;
  __asm { vmovaps xmm0, xmm1; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
  _RBX->m[0].v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  dword ptr [rbx+10h], xmm2
  }
  *(_QWORD *)&_RBX->row1.z = 0i64;
  _RBX->m[2].v[1] = 0.0;
  _RBX->m[2].v[2] = 1.0;
}

/*
==============
MatrixRotationRad
==============
*/

void __fastcall MatrixRotationRad(tmat33_t<vec3_t> *mat, const vec3_t *dir, double radians)
{
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  float c; 
  float s[31]; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = dir;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = mat;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm1, xmm0
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm7, xmm2
    vaddss  xmm2, xmm3, xmm1
    vsubss  xmm0, xmm2, xmm8
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0D8h+var_98], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+0D8h+var_A0], xmm2
    vcvtss2sd xmm3, xmm4, xmm4
    vmovsd  [rsp+0D8h+var_A8], xmm3
    vcvtss2sd xmm0, xmm5, xmm5
    vmovsd  [rsp+0D8h+var_B0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v66, v67, v68, v69) )
    __debugbreak();
  __asm { vmovss  [rsp+0D8h+c], xmm7 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm7; radians }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm12, [rsp+0D8h+c]
    vmovss  xmm0, [rsp+0D8h+s]
    vmulss  xmm7, xmm2, xmm0
    vmulss  xmm11, xmm6, xmm0
  }
  _R11 = &v72;
  __asm
  {
    vmulss  xmm10, xmm3, xmm0
    vsubss  xmm4, xmm8, xmm12
    vmulss  xmm9, xmm2, xmm4
    vmulss  xmm8, xmm3, xmm4
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm4, xmm1, xmm2
    vmulss  xmm0, xmm1, xmm6
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm5, xmm8, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vsubss  xmm2, xmm5, xmm7
    vmovss  dword ptr [rdi+4], xmm2
    vaddss  xmm0, xmm10, xmm4
    vmovss  dword ptr [rdi+8], xmm0
    vaddss  xmm1, xmm7, xmm5
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmulss  xmm0, xmm8, dword ptr [rbx+4]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm0, xmm12
    vmovss  dword ptr [rdi+10h], xmm2
    vmulss  xmm3, xmm9, xmm3
    vsubss  xmm1, xmm3, xmm11
    vmovss  dword ptr [rdi+14h], xmm1
    vsubss  xmm0, xmm4, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm1, xmm11, xmm3
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmulss  xmm0, xmm9, dword ptr [rbx+8]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm2, xmm0, xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovss  dword ptr [rdi+20h], xmm2
  }
}

/*
==============
VecToMatrix
==============
*/
void VecToMatrix(const vec3_t *vec, tmat33_t<vec3_t> *axis)
{
  char v2; 
  char v3; 
  float v6; 

  __asm { vmovsd  xmm0, qword ptr [rcx] }
  v6 = vec->v[2];
  __asm { vmovsd  qword ptr [rdx], xmm0 }
  axis->m[0].v[2] = v6;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+8]
    vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm0
    vmovss  xmm3, dword ptr [rcx+4]
  }
  if ( v2 | v3 )
  {
    __asm
    {
      vxorps  xmm4, xmm5, cs:__xmm@80000000800000008000000080000000
      vmovaps xmm0, xmm3
      vxorps  xmm1, xmm1, xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rdx+0Ch], xmm1
    vmovss  dword ptr [rdx+10h], xmm4
    vmovss  dword ptr [rdx+14h], xmm0
    vmovss  xmm0, dword ptr [rdx+10h]
    vmovss  xmm5, dword ptr [rdx+0Ch]
    vmovss  xmm3, dword ptr [rdx+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdx+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+10h]
    vmovss  dword ptr [rdx+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+14h]
    vmovss  dword ptr [rdx+14h], xmm0
  }
  Vec3Cross(&axis->m[1], axis->m, &axis->m[2]);
}

/*
==============
MatrixForViewer
==============
*/
void MatrixForViewer(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  tmat33_t<vec3_t> out; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm2, dword ptr [rdx+20h]
    vmulss  xmm1, xmm2, dword ptr [rdx+10h]
    vmulss  xmm2, xmm2, dword ptr [rdx+4]
    vmovss  xmm7, dword ptr [rdx+14h]
    vmulss  xmm0, xmm7, dword ptr [rdx+1Ch]
    vmovss  xmm6, dword ptr [rdx+8]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, dword ptr [rdx]
    vmulss  xmm0, xmm6, dword ptr [rdx+1Ch]
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rdx+10h]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rdx+4]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, dword ptr [rdx+18h]
  }
  _RDI = mtx;
  _RBX = origin;
  __asm { vaddss  xmm1, xmm4, xmm2; determinant }
  MatrixInverseDet(axis, *(const float *)&_XMM1, &out);
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsp+78h+out+4]
    vmovss  xmm2, dword ptr [rsp+78h+out+1Ch]
    vxorps  xmm1, xmm0, xmm5
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm0, dword ptr [rsp+78h+out+10h]
    vxorps  xmm1, xmm0, xmm5
    vmovss  dword ptr [rdi+10h], xmm1
    vxorps  xmm4, xmm2, xmm5
    vmovss  dword ptr [rdi+20h], xmm4
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm0, xmm4, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rsp+78h+out+20h]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+78h+out+8]
    vxorps  xmm2, xmm1, xmm5
    vmovss  xmm1, dword ptr [rsp+78h+out+14h]
    vmovss  dword ptr [rdi+30h], xmm2
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  dword ptr [rdi+14h], xmm1
    vmovss  dword ptr [rdi+24h], xmm4
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm0, xmm4, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rsp+78h+out+18h]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+78h+out]
    vxorps  xmm2, xmm1, xmm5
    vmovss  xmm1, dword ptr [rsp+78h+out+0Ch]
    vmovss  dword ptr [rdi+34h], xmm2
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+18h], xmm1
    vmovss  dword ptr [rdi+28h], xmm4
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmulss  xmm0, xmm4, dword ptr [rbx+8]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+38h], xmm2
  }
  _RDI->m[0].v[3] = 0.0;
  _RDI->m[1].v[3] = 0.0;
  _RDI->m[2].v[3] = 0.0;
  _RDI->m[3].v[3] = 1.0;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
QuatToAxis
==============
*/
void QuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  __asm
  {
    vmovups xmm5, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovaps [rsp+28h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx]
    vmulps  xmm0, xmm6, xmm6
    vhaddps xmm1, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vaddps  xmm0, xmm0, xmm0
    vhaddps xmm1, xmm1, xmm1
    vdivps  xmm3, xmm0, xmm1
    vshufps xmm1, xmm3, xmm3, 0FFh
    vmulps  xmm4, xmm1, xmm6
    vshufps xmm2, xmm3, xmm3, 1Ah
    vshufps xmm0, xmm3, xmm3, 1
    vaddps  xmm1, xmm2, xmm0
    vshufps xmm2, xmm4, xmm4, 1
    vshufps xmm0, xmm6, xmm6, 0E6h ; 'æ'
    vmovaps [rsp+28h+var_28], xmm7
    vsubps  xmm7, xmm5, xmm1
    vmulps  xmm5, xmm2, xmm0
    vshufps xmm0, xmm6, xmm6, 0FBh ; 'û'
    vmovaps xmm6, [rsp+28h+var_18]
    vshufps xmm1, xmm4, xmm4, 94h ; '”'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm3, xmm3, 20h ; ' '
    vxorps  xmm2, xmm1, xmmword ptr cs:scMsk1
    vshufps xmm0, xmm5, xmm5, 20h ; ' '
    vaddps  xmm2, xmm2, xmm0
    vinsertps xmm4, xmm2, xmm7, 40h ; '@'
    vshufps xmm0, xmm3, xmm3, 0EEh ; 'î'
    vxorps  xmm2, xmm0, xmmword ptr cs:scMsk0
    vshufps xmm1, xmm5, xmm5, 64h ; 'd'
    vaddps  xmm2, xmm2, xmm1
    vinsertps xmm0, xmm2, xmm7, 0
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmmword ptr [rdx+10h], xmm4
    vextractps dword ptr [rdx+20h], xmm7, 2
    vmovaps xmm7, [rsp+28h+var_28]
  }
}

/*
==============
QuatAndOriginToMatrix43
==============
*/
void QuatAndOriginToMatrix43(const vec4_t *quat, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  QuatToAxis(quat, (tmat33_t<vec3_t> *)result);
  result->m[3] = *origin;
}

/*
==============
UnitQuatAndOriginToMatrix43
==============
*/
void UnitQuatAndOriginToMatrix43(const vec4_t *quat, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  char v78; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RDI = result;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = quat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmulss  xmm0, xmm7, xmm7
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm13
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0D8h+var_90], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  [rsp+0D8h+var_98], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+0D8h+var_A0], xmm3
    vmovsd  [rsp+0D8h+var_A8], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  [rsp+0D8h+var_B0], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v72, v73, v74, v75, v76) )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx+0Ch]
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm5, dword ptr [rbx]
    vmulss  xmm12, xmm1, dword ptr [rbx]
  }
  _R11 = &v78;
  __asm
  {
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm3, xmm0
    vmulss  xmm10, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm5, xmm4, xmm0
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm0, xmm13, xmm1
    vmovss  dword ptr [rdi], xmm0
    vsubss  xmm0, xmm9, xmm7
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm0
    vsubss  xmm1, xmm6, xmm2
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm5, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  dword ptr [rdi+14h], xmm1
    vaddss  xmm0, xmm7, xmm9
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vsubss  xmm0, xmm13, xmm0
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rdi+20h], xmm0
  }
  _RDI->m[3].v[0] = origin->v[0];
  _RDI->m[3].v[1] = origin->v[1];
  _RDI->m[3].v[2] = origin->v[2];
}

/*
==============
AngleDegAxisToQuat
==============
*/

void __fastcall AngleDegAxisToQuat(double degrees, const vec3_t *axis, vec4_t *quat)
{
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c0efa35; radians }
  _RDI = quat;
  FastSinCos(*(const float *)&_XMM0, &s, &quat->v[3]);
  __asm
  {
    vmovss  xmm2, [rsp+28h+s]
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
AngleRadAxisToQuat
==============
*/

void __fastcall AngleRadAxisToQuat(double radians, const vec3_t *axis, vec4_t *quat)
{
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3f000000; radians }
  _RDI = quat;
  FastSinCos(*(const float *)&_XMM0, &s, &quat->v[3]);
  __asm
  {
    vmovss  xmm2, [rsp+28h+s]
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
AxisComponentsToQuat
==============
*/
void AxisComponentsToQuat(const vec3_t *mat0, const vec3_t *mat1, const vec3_t *mat2, vec4_t *out)
{
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm11, xmm0, dword ptr [rdx]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm5, dword ptr [rdx+4]
    vmovss  xmm8, dword ptr [rcx]
    vmovss  xmm4, dword ptr [rdx+8]
    vmovss  xmm12, dword ptr [r8+4]
    vmovss  xmm10, dword ptr [r8]
    vsubss  xmm13, xmm10, dword ptr [rcx+8]
    vmovss  xmm9, dword ptr [r8+8]
  }
  _RDI = out;
  __asm
  {
    vaddss  xmm0, xmm8, xmm5
    vaddss  xmm1, xmm0, xmm9
    vaddss  xmm3, xmm1, xmm7
    vmulss  xmm1, xmm11, xmm11
    vsubss  xmm14, xmm4, xmm12
    vmulss  xmm0, xmm14, xmm14
    vmulss  xmm15, xmm13, xmm13
    vaddss  xmm0, xmm0, xmm15
    vaddss  xmm2, xmm0, xmm1
    vmovss  [rsp+130h+var_100], xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm6, xmm2, xmm1
    vcomiss xmm6, xmm7
    vmovss  dword ptr [rsp+130h+var_F4+4], xmm14
    vmovss  dword ptr [rsp+130h+var_EC], xmm13
    vmovss  dword ptr [rsp+130h+var_EC+4], xmm11
    vmovss  dword ptr [rsp+130h+var_E4], xmm3
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3728, ASSERT_TYPE_SANITY, "( testSizeSq != 0.0f )", "%s", "testSizeSq != 0.0f") )
    __debugbreak();
  __asm
  {
    vsqrtss xmm0, xmm6, xmm6
    vdivss  xmm2, xmm7, xmm0
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm0, xmm2, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
  }
  _R11 = &vars0;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
AxisToQuat
==============
*/
void AxisToQuat(const tmat33_t<vec3_t> *mat, vec4_t *out)
{
  AxisComponentsToQuat(mat->m, &mat->m[1], &mat->m[2], out);
}

/*
==============
Axis34ToQuat
==============
*/
void Axis34ToQuat(const tmat34_t<vec4_t> *mat, vec4_t *out)
{
  AxisComponentsToQuat((const vec3_t *)mat, &mat->m[1].xyz, &mat->m[2].xyz, out);
}

/*
==============
Axis43ToQuat
==============
*/
void Axis43ToQuat(const tmat43_t<vec3_t> *mat, vec4_t *out)
{
  AxisComponentsToQuat(mat->m, &mat->m[1], &mat->m[2], out);
}

/*
==============
QuatNlerp
==============
*/

double __fastcall QuatNlerp(const vec4_t *from, const vec4_t *to, double frac, vec4_t *result)
{
  int v47; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RSI = result;
  __asm { vmovss  [rsp+68h+arg_10], xmm2 }
  _RBX = to;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  _RDI = from;
  __asm { vmovaps xmm8, xmm2 }
  if ( (v47 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3757, ASSERT_TYPE_SANITY, "( !IS_NAN( frac ) )", "%s", "!IS_NAN( frac )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi]
    vmulss  xmm1, xmm6, dword ptr [rbx]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm7, xmm0, xmm8
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rbx+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vxorps  xmm3, xmm8, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm2, xmm4, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcmpless xmm0, xmm1, xmm2
    vblendvps xmm4, xmm3, xmm8, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx]
    vmulss  xmm0, xmm7, xmm6
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm2, xmm4, dword ptr [rbx+4]
    vmulss  xmm0, xmm7, dword ptr [rdi+4]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm2, xmm7, dword ptr [rdi+8]
    vmulss  xmm0, xmm4, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsi+8], xmm1
    vmulss  xmm2, xmm7, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm4, dword ptr [rbx+0Ch]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsi+0Ch], xmm1
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return Vec4Normalize(_RSI);
}

/*
==============
QuatSlerp
==============
*/

double __fastcall QuatSlerp(const vec4_t *from, const vec4_t *to, double frac, vec4_t *result)
{
  bool v14; 
  bool v15; 
  char v60; 
  void *retaddr; 
  int v62; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = result;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = to;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RDI = from;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  [rsp+88h+arg_10], xmm2
    vmovaps xmm6, xmm2
  }
  v14 = (v62 & 0x7F800000u) <= 0x7F800000;
  if ( (v62 & 0x7F800000) == 2139095040 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3779, ASSERT_TYPE_SANITY, "( !IS_NAN( frac ) )", "%s", "!IS_NAN( frac )");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm2, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  xmm9, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rbx]
    vmulss  xmm1, xmm10, xmm9
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rdi+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, cs:__real@bf800000
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcmpless xmm2, xmm1, xmm3
    vblendvps xmm8, xmm0, xmm4, xmm2
    vmulss  xmm0, xmm8, xmm3; X
    vcomiss xmm0, cs:__real@3f733333
  }
  if ( v14 )
  {
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm6, xmm0, xmm6
      vsubss  xmm0, xmm0, xmm6; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vsubss  xmm7, xmm4, xmm6 }
  }
  __asm
  {
    vmulss  xmm4, xmm6, xmm8
    vmulss  xmm2, xmm10, xmm4
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm1, xmm4, dword ptr [rbx+4]
    vmulss  xmm3, xmm7, dword ptr [rdi+4]
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+8]
    vmulss  xmm0, xmm7, dword ptr [rdi+8]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsi+8], xmm1
    vmulss  xmm2, xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsi+0Ch], xmm1
    vmovaps xmm6, [rsp+88h+var_18]
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return Vec4Normalize(_RSI);
}

/*
==============
QuatTransform
==============
*/
void QuatTransform(const vec4_t *quat, const vec3_t *in, vec3_t *out)
{
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = out;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
  }
  _RSI = quat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0C8h+var_88], xmm14
    vmovaps [rsp+0C8h+var_98], xmm15
  }
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3805, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmulss  xmm13, xmm1, xmm2
    vmulss  xmm10, xmm1, xmm3
    vmulss  xmm9, xmm3, xmm2
    vmulss  xmm7, xmm1, xmm4
    vmulss  xmm12, xmm4, xmm2
    vmulss  xmm11, xmm4, xmm3
  }
  _R11 = &v74;
  __asm
  {
    vmulss  xmm0, xmm2, xmm2
    vxorps  xmm15, xmm0, xmm5
    vmulss  xmm0, xmm3, xmm3
    vxorps  xmm14, xmm0, xmm5
    vmulss  xmm0, xmm4, xmm4
    vxorps  xmm6, xmm0, xmm5
    vaddss  xmm0, xmm6, xmm14
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm9, xmm7
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm10, xmm12
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:__real@40000000
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm0, xmm6, xmm15
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm1, xmm7, xmm9
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm11, xmm13
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, cs:__real@40000000
    vaddss  xmm0, xmm3, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm0
    vsubss  xmm1, xmm12, xmm10
    vmulss  xmm3, xmm1, dword ptr [rbx]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vaddss  xmm0, xmm11, xmm13
    vmulss  xmm2, xmm0, dword ptr [rbx+4]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vaddss  xmm1, xmm14, xmm15
    vmulss  xmm0, xmm1, dword ptr [rbx+8]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0C8h+var_98]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, cs:__real@40000000
    vaddss  xmm1, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
QuatShortestArc
==============
*/
void QuatShortestArc(const vec3_t *from, const vec3_t *to, vec4_t *result)
{
  __int64 v20; 
  vec3_t cross; 

  __asm
  {
    vmovaps [rsp+0A0h+var_20], xmm6
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vcomiss xmm6, cs:__real@3f7fbe77
  }
  _RDI = result;
  if ( (unsigned __int64)&v20 != _security_cookie )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
      vmovups xmmword ptr [r8], xmm0
    }
  }
  else
  {
    __asm { vcomiss xmm6, cs:__real@bf7fbe77 }
    Vec3Cross(from, to, &cross);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+57h+cross]
      vinsertps xmm3, xmm3, dword ptr [rbp+57h+cross+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rbp+57h+cross+8], 57h+var_40+9
      vaddss  xmm2, xmm6, cs:__real@3f800000
      vinsertps xmm3, xmm3, xmm2, 30h ; '0'
      vmovups xmmword ptr [rdi], xmm3
    }
    Vec4Normalize(_RDI);
  }
  __asm { vmovaps xmm6, [rsp+0A0h+var_20] }
}

/*
==============
QuatTransToDualQuat
==============
*/
void QuatTransToDualQuat(const vec4_t *q0, const vec3_t *t, tmat22_t<vec4_t> *dq)
{
  __asm { vmovss  xmm5, cs:__real@3f000000 }
  dq->m[0] = *q0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vmulss  xmm4, xmm1, cs:__real@bf000000
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm3, xmm2, dword ptr [rdx]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm2, xmm5
    vsubss  xmm1, xmm4, xmm0
    vmovss  dword ptr [r8+1Ch], xmm1
    vmovss  xmm2, dword ptr [rcx+8]
    vmulss  xmm3, xmm2, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm1
    vsubss  xmm1, xmm4, xmm0
    vmulss  xmm3, xmm1, xmm5
    vmovss  dword ptr [r8+10h], xmm3
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+8]
    vmulss  xmm0, xmm2, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm3, xmm1, xmm5
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm4, xmm1
    vmovss  dword ptr [r8+14h], xmm3
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmulss  xmm4, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vsubss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm2, xmm5
    vmovss  dword ptr [r8+18h], xmm3
  }
}

/*
==============
DualQuatToQuatTrans
==============
*/
void DualQuatToQuatTrans(vec4_t *q0, vec3_t *t, const tmat22_t<vec4_t> *dq)
{
  char v71; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
  }
  _RBX = &dq->m[1];
  __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000 }
  q0->v[0] = dq->m[0].v[0];
  _RDI = t;
  *(_QWORD *)&q0->xyz.y = *(_QWORD *)&dq->row0.xyz.y;
  __asm
  {
    vmovss  xmm12, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+0Ch], xmm12
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+8]
    vxorps  xmm13, xmm0, xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vxorps  xmm14, xmm0, xmm2
    vxorps  xmm15, xmm1, xmm2
  }
  if ( &dq->row1 == (vec4_t *)&v71 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmovss  xmm8, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx+8]
    vmulss  xmm1, xmm7, xmm13
    vmulss  xmm0, xmm8, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm15
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm14
    vsubss  xmm11, xmm3, xmm0
    vmulss  xmm2, xmm7, xmm14
    vmulss  xmm1, xmm8, xmm15
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm12
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm10, xmm13
    vaddss  xmm6, xmm4, xmm1
    vmulss  xmm0, xmm7, xmm15
    vmulss  xmm2, xmm8, xmm14
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm9, xmm13
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm10, xmm12
    vaddss  xmm5, xmm4, xmm0
    vmulss  xmm1, xmm8, xmm13
    vmulss  xmm2, xmm7, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm10, xmm15
    vinsertps xmm11, xmm11, xmm6, 10h
    vmulss  xmm0, xmm9, xmm14
    vsubss  xmm4, xmm3, xmm0
    vsubss  xmm2, xmm4, xmm1
    vinsertps xmm11, xmm11, xmm5, 20h ; ' '
    vinsertps xmm11, xmm11, xmm2, 30h ; '0'
    vmulps  xmm1, xmm11, cs:__xmm@40000000400000004000000040000000
    vmovss  dword ptr [rdi], xmm1
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
  }
  _R11 = &v75;
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
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
}

/*
==============
DualQuatClear
==============
*/
void DualQuatClear(tmat22_t<vec4_t> *dq)
{
  dq->m[0] = 0ui64;
  dq->row1 = 0ui64;
}

/*
==============
DualQuatAdd
==============
*/
void DualQuatAdd(const tmat22_t<vec4_t> *a, const tmat22_t<vec4_t> *b, tmat22_t<vec4_t> *sum)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vaddss  xmm0, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r8+4], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r8+8], xmm2
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmovss  dword ptr [r8+0Ch], xmm1
    vmovss  xmm0, dword ptr [rcx+10h]
    vaddss  xmm1, xmm0, dword ptr [rdx+10h]
    vmovss  dword ptr [r8+10h], xmm1
    vmovss  xmm2, dword ptr [rcx+14h]
    vaddss  xmm0, xmm2, dword ptr [rdx+14h]
    vmovss  dword ptr [r8+14h], xmm0
    vmovss  xmm1, dword ptr [rcx+18h]
    vaddss  xmm2, xmm1, dword ptr [rdx+18h]
    vmovss  dword ptr [r8+18h], xmm2
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vaddss  xmm1, xmm0, dword ptr [rdx+1Ch]
    vmovss  dword ptr [r8+1Ch], xmm1
  }
}

/*
==============
DualQuatMad
==============
*/

void __fastcall DualQuatMad(const tmat22_t<vec4_t> *start, double scale, const tmat22_t<vec4_t> *dir, tmat22_t<vec4_t> *result)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [r8]
    vaddss  xmm2, xmm0, dword ptr [rcx]
    vmovss  dword ptr [r9], xmm2
    vmulss  xmm0, xmm1, dword ptr [r8+4]
    vaddss  xmm2, xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [r9+4], xmm2
    vmulss  xmm0, xmm1, dword ptr [r8+8]
    vaddss  xmm2, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [r9+8], xmm2
    vmulss  xmm0, xmm1, dword ptr [r8+0Ch]
    vmovaps xmm3, xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmovss  dword ptr [r9+0Ch], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+10h]
    vaddss  xmm1, xmm0, dword ptr [rcx+10h]
    vmovss  dword ptr [r9+10h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+14h]
    vaddss  xmm1, xmm0, dword ptr [rcx+14h]
    vmovss  dword ptr [r9+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vaddss  xmm1, xmm0, dword ptr [rcx+18h]
    vmovss  dword ptr [r9+18h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+1Ch]
    vaddss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmovss  dword ptr [r9+1Ch], xmm1
  }
}

/*
==============
DualQuatNormalize
==============
*/
void DualQuatNormalize(tmat22_t<vec4_t> *dq)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vdivss  xmm3, xmm1, xmm4
    vshufps xmm3, xmm3, xmm3, 0
    vmulss  xmm0, xmm5, xmm3
    vmovss  dword ptr [rcx], xmm0
    vmulps  xmm1, xmm3, xmmword ptr [rcx+4]
    vmovups xmmword ptr [rcx+4], xmm1
    vmulss  xmm1, xmm3, dword ptr [rcx+14h]
    vmovss  dword ptr [rcx+14h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rcx+18h]
    vmovss  dword ptr [rcx+18h], xmm0
    vmulss  xmm0, xmm3, dword ptr [rcx+1Ch]
    vmovss  dword ptr [rcx+1Ch], xmm0
  }
}

/*
==============
TriangleTextureGradient
==============
*/
bool TriangleTextureGradient(const vec3_t (*pos)[3], const vec2_t (*texCoord)[3], vec3_t (*outTexGradient)[2])
{
  char v27; 
  char v44; 
  bool result; 
  tmat33_t<vec3_t> v1; 
  tmat33_t<vec3_t> out; 
  vec3_t cross; 
  vec3_t mulVec; 
  __int64 v82; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v82;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vsubss  xmm12, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+10h]
    vsubss  xmm7, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vsubss  xmm8, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm13, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vsubss  xmm9, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+20h]
    vsubss  xmm10, xmm0, dword ptr [rcx+8]
  }
  _RBX = texCoord;
  __asm
  {
    vmovss  dword ptr [rsp+110h+v0+8], xmm10
    vmovss  dword ptr [rsp+110h+v1], xmm12
    vmovss  dword ptr [rsp+110h+v1+4], xmm7
    vmovss  dword ptr [rsp+110h+v1+8], xmm8
    vmovss  dword ptr [rsp+110h+v0], xmm13
    vmovss  dword ptr [rsp+110h+v0+4], xmm9
  }
  Vec3Cross(&v1.m[1], v1.m, &cross);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+110h+cross]
    vmovss  xmm4, dword ptr [rsp+110h+cross+4]
    vmovss  xmm5, dword ptr [rsp+110h+cross+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm6, xmm0, xmm0
    vcomiss xmm6, cs:__real@3a83126f
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm11, xmm3, xmm2
    vmulss  xmm4, xmm4, xmm2
    vmulss  xmm2, xmm5, xmm2
  }
  if ( v44 )
    goto LABEL_4;
  __asm
  {
    vmulss  xmm1, xmm2, xmm9
    vmulss  xmm0, xmm4, xmm10
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, xmm12
    vmovss  dword ptr [rsp+110h+var_D0], xmm2
    vmulss  xmm0, xmm4, xmm8
    vmulss  xmm2, xmm2, xmm7
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, xmm13
    vmovss  [rsp+110h+var_D4], xmm4
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm10, xmm7
    vmulss  xmm0, xmm9, xmm8
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm11
    vaddss  xmm1, xmm4, xmm2; determinant
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm1, xmm6
    vmovss  [rsp+110h+var_D8], xmm11
  }
  if ( v27 )
  {
LABEL_4:
    result = 0;
  }
  else
  {
    MatrixInverseDet(&v1, *(const float *)&_XMM1, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+10h]
      vsubss  xmm0, xmm2, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [rsp+110h+cross+4], xmm0
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rsp+110h+cross], xmm1
      vsubss  xmm1, xmm0, dword ptr [rbx+4]
      vsubss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+10h+mulVec+4], xmm0
      vmovss  dword ptr [rsp+110h+cross+8], xmm6
      vmovss  dword ptr [rsp+110h+mulVec], xmm1
      vmovss  dword ptr [rbp+10h+mulVec+8], xmm6
    }
    MatrixVecMultiply(&out, &cross, (vec3_t *)outTexGradient);
    MatrixVecMultiply(&out, &mulVec, &(*outTexGradient)[1]);
    result = 1;
  }
  _R11 = &vars0;
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
  }
  return result;
}

/*
==============
Com_NoiseGet4f
==============
*/

float __fastcall Com_NoiseGet4f(double x, double y, double z, double t)
{
  char v49; 
  unsigned __int8 v53; 
  unsigned __int8 v57; 
  unsigned __int8 v58; 
  unsigned __int8 v63; 
  unsigned __int8 v78; 
  unsigned __int8 v79; 
  unsigned __int8 v88; 
  int v100; 
  unsigned __int8 v101; 
  unsigned __int8 v102; 
  unsigned __int8 v107; 
  unsigned __int8 v124; 
  unsigned __int8 v125; 
  char v162; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = 0x140000000ui64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm5, xmm0
    vxorps  xmm4, xmm4, xmm4
    vmovss  xmm5, xmm4, xmm5
    vmovaps xmm9, xmm3
    vmovaps xmm3, xmm1
    vmovaps xmm7, xmm2
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm4, xmm8, xmm5, 1
    vcvttss2si edi, xmm4
    vmovaps xmm6, xmm1
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovss  xmm13, cs:__real@3f800000
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, edi
    vsubss  xmm5, xmm0, xmm4
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm2, xmm8, xmm1, 1
    vcvttss2si ebx, xmm2
    vcvtsi2ss xmm0, xmm0, ebx
    vsubss  xmm4, xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovaps xmm2, xmm7
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm8, xmm0, 1
    vxorps  xmm0, xmm0, xmm0
    vcvttss2si r11d, xmm3
    vcvtsi2ss xmm0, xmm0, r11d
    vsubss  xmm15, xmm7, xmm0
    vmovaps xmm2, xmm9
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm8, xmm0, 1
    vcvttss2si eax, xmm3
  }
  v49 = (char)_RAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm14, xmm9, xmm0
    vmovss  [rsp+0A8h+arg_0], xmm5
    vmovss  [rsp+0A8h+arg_8], xmm4
  }
  v53 = _ER11 + s_noise_perm[(unsigned __int8)_RAX];
  __asm
  {
    vsubss  xmm10, xmm13, xmm15
    vsubss  xmm12, xmm13, xmm4
    vsubss  xmm11, xmm13, xmm5
  }
  v57 = _EBX + s_noise_perm[v53];
  v58 = _EDI + s_noise_perm[v57];
  _RCX = s_noise_perm[v58];
  __asm { vmovss  xmm1, rva s_noise_table[rsi+rcx*4] }
  _RAX = s_noise_perm[(unsigned __int8)(v58 + 1)];
  __asm { vmovss  xmm0, rva s_noise_table[rsi+rax*4] }
  v63 = _EDI + s_noise_perm[(unsigned __int8)(v57 + 1)];
  _RCX = s_noise_perm[v63];
  __asm
  {
    vmovss  xmm2, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm0, xmm0, [rsp+0A8h+arg_0]
    vmulss  xmm1, xmm11, xmm1
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, xmm12
  }
  _RAX = s_noise_perm[(unsigned __int8)(v63 + 1)];
  __asm
  {
    vmulss  xmm2, xmm11, xmm2
    vmovss  xmm4, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm4, [rsp+0A8h+arg_0]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, [rsp+0A8h+arg_8]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm4, xmm3, xmm10
  }
  v78 = _EBX + s_noise_perm[(unsigned __int8)(v53 + 1)];
  v79 = _EDI + s_noise_perm[v78];
  _RCX = s_noise_perm[v79];
  __asm
  {
    vmovss  xmm8, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm1, xmm11, xmm8
  }
  _RAX = s_noise_perm[(unsigned __int8)(v79 + 1)];
  __asm
  {
    vmovss  xmm7, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm7, [rsp+0A8h+arg_0]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, xmm12
  }
  v88 = _EDI + s_noise_perm[(unsigned __int8)(v78 + 1)];
  _RCX = s_noise_perm[v88];
  __asm
  {
    vmovss  xmm6, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm2, xmm11, xmm6
  }
  _RAX = s_noise_perm[(unsigned __int8)(v88 + 1)];
  __asm
  {
    vmovss  xmm5, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm5, [rsp+0A8h+arg_0]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, [rsp+0A8h+arg_8]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm3, xmm15
    vaddss  xmm9, xmm4, xmm0
  }
  v100 = _ER11 + s_noise_perm[(unsigned __int8)(v49 + 1)];
  v101 = _EBX + s_noise_perm[(unsigned __int8)(_ER11 + LOBYTE(s_noise_perm[(unsigned __int8)(v49 + 1)]))];
  v102 = _EDI + s_noise_perm[v101];
  _RCX = s_noise_perm[v102];
  __asm { vmovss  xmm1, rva s_noise_table[rsi+rcx*4] }
  _RAX = s_noise_perm[(unsigned __int8)(v102 + 1)];
  __asm { vmovss  xmm0, rva s_noise_table[rsi+rax*4] }
  v107 = _EDI + s_noise_perm[(unsigned __int8)(v101 + 1)];
  _RCX = s_noise_perm[v107];
  __asm
  {
    vmovss  xmm2, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm0, xmm0, [rsp+0A8h+arg_0]
  }
  _R11 = &v162;
  __asm
  {
    vmulss  xmm1, xmm11, xmm1
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, xmm12
  }
  _RAX = s_noise_perm[(unsigned __int8)(v107 + 1)];
  __asm
  {
    vmulss  xmm2, xmm11, xmm2
    vmovss  xmm4, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm4, [rsp+0A8h+arg_0]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, [rsp+0A8h+arg_8]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm4, xmm3, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  v124 = _EBX + LOBYTE(s_noise_perm[(unsigned __int8)(v100 + 1)]);
  v125 = _EDI + s_noise_perm[v124];
  _RCX = s_noise_perm[v125];
  __asm
  {
    vmovss  xmm8, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm1, xmm11, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  _RAX = s_noise_perm[(unsigned __int8)(v125 + 1)];
  __asm
  {
    vmovss  xmm7, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm7, [rsp+0A8h+arg_0]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  LODWORD(_RAX) = s_noise_perm[(unsigned __int8)(v124 + 1)];
  _RCX = s_noise_perm[(unsigned __int8)(_EDI + _RAX)];
  __asm
  {
    vmovss  xmm6, rva s_noise_table[rsi+rcx*4]
    vmulss  xmm2, xmm11, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  _RAX = s_noise_perm[(unsigned __int8)(_EDI + _RAX + 1)];
  __asm
  {
    vmovss  xmm5, rva s_noise_table[rsi+rax*4]
    vmulss  xmm0, xmm5, [rsp+0A8h+arg_0]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, [rsp+0A8h+arg_8]
    vsubss  xmm1, xmm13, xmm14
    vmovaps xmm13, xmmword ptr [r11-80h]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm3, xmm15
    vmovaps xmm15, [rsp+0A8h+var_A8]
    vaddss  xmm4, xmm4, xmm0
    vmulss  xmm0, xmm4, xmm14
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmulss  xmm2, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Com_NoiseInit
==============
*/

void __fastcall Com_NoiseInit(double _XMM0_8)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = 0x140000000ui64;
  __asm
  {
    vmovss  xmm6, cs:__real@38000100
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = 0i64;
  __asm
  {
    vmovss  xmm7, cs:__real@40000000
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
  }
  do
  {
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rbx+rdi+164C39F0h], xmm3
    }
    s_noise_perm[_RBX++] = (unsigned __int8)((unsigned int)(rand() << 8) >> 15);
  }
  while ( _RBX < 256 );
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
Float4AABBLineSegmentIntersect
==============
*/
bool Float4AABBLineSegmentIntersect(const float4 *aabbMin, const float4 *aabbMax, const float4 *lineSegPointA, const float4 *lineSegPointB)
{
  bool result; 
  __int64 v40[2]; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovups xmm0, xmmword ptr [r9]
    vsubps  xmm3, xmm0, xmmword ptr [r8]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm7, xmm0
    vdivps  xmm0, xmm3, xmm7
    vdivps  xmm2, xmm1, xmm0
    vmovups xmm0, xmmword ptr [rcx]
    vsubps  xmm1, xmm0, xmmword ptr [r8]
    vmovups xmm0, xmmword ptr [rdx]
    vmulps  xmm6, xmm2, xmm1
    vsubps  xmm1, xmm0, xmmword ptr [r8]
    vminps  xmm4, xmm6, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v; float4 const g_infinity
    vmulps  xmm5, xmm2, xmm1
    vminps  xmm3, xmm5, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v; float4 const g_infinity
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v; float4 const g_negativeInfinity
    vmaxps  xmm1, xmm6, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v; float4 const g_negativeInfinity
    vminps  xmm5, xmm1, xmm0
    vmaxps  xmm4, xmm4, xmm3
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vmaxss  xmm0, xmm0, xmm5
    vshufps xmm3, xmm5, xmm5, 0AAh ; 'ª'
    vmaxss  xmm5, xmm0, xmm3
    vshufps xmm1, xmm4, xmm4, 55h ; 'U'
    vshufps xmm2, xmm4, xmm4, 0AAh ; 'ª'
    vminss  xmm1, xmm1, xmm4
    vminss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vcomiss xmm5, xmm3
  }
  if ( (unsigned __int64)v40 != _security_cookie )
    goto LABEL_4;
  __asm { vcomiss xmm5, xmm7 }
  if ( (unsigned __int64)v40 != _security_cookie )
LABEL_4:
    result = 0;
  else
    result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
  }
  return result;
}

/*
==============
EasePower
==============
*/

double __fastcall EasePower(double pct, double power, bool easeIn, bool easeOut)
{
  char v19; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm2, xmm2, xmm2
    vmovaps xmm7, xmm0
    vmovss  xmm0, cs:__real@40000000; X
    vcmpless xmm3, xmm1, xmm2
    vblendvps xmm1, xmm1, xmm0, xmm3
    vmovss  [rsp+68h+arg_8], xmm1
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      __asm
      {
        vmovss  xmm6, [rsp+68h+arg_8]
        vmovaps [rsp+68h+var_38], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vsubss  xmm1, xmm6, xmm8; Y
        vmovaps [rsp+68h+var_48], xmm9
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vcomiss xmm7, cs:__real@3f000000
        vmovaps xmm9, xmm0
        vmovaps xmm1, xmm6; Y
      }
      if ( v19 )
      {
        __asm { vmovaps xmm0, xmm7; X }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm { vmulss  xmm0, xmm0, xmm9 }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm8
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, xmm9
          vsubss  xmm0, xmm8, xmm1
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+68h+var_38]
        vmovaps xmm9, [rsp+68h+var_48]
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm7, [rsp+68h+var_28]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, [rsp+68h+arg_8]; Y
        vmovaps xmm0, xmm7; X
        vmovaps xmm6, [rsp+68h+var_18]
        vmovaps xmm7, [rsp+68h+var_28]
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm1, [rsp+68h+arg_8]; Y
      vsubss  xmm0, xmm7, xmm6
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vsubss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
EaseExponential
==============
*/

double __fastcall EaseExponential(double pct, double scale, bool easeIn, bool easeOut)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm0, xmm6
    vmovaps xmm2, xmm0
    vmaxss  xmm3, xmm1, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return pct;
}

/*
==============
EaseLogarithmic
==============
*/

float __fastcall EaseLogarithmic(double pct, double logBase, bool easeIn, bool easeOut)
{
  char v16; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm2, cs:__real@40000000
    vmovaps xmm7, xmm0
    vmaxss  xmm0, xmm1, xmm2; X
  }
  if ( easeIn && easeOut )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm8, xmm0, xmm6
      vmulss  xmm7, xmm7, xmm2
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm
    {
      vcomiss xmm7, xmm6
      vmovaps xmm9, xmm0
    }
    if ( v16 )
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm7
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm0, xmm2, xmm6; X
      }
      *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
      __asm
      {
        vdivss  xmm1, xmm0, xmm9
        vsubss  xmm1, xmm6, xmm1
        vmulss  xmm0, xmm1, cs:__real@3f000000
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm0, xmm1, xmm6; X
      }
      *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vdivss  xmm1, xmm0, xmm9
        vaddss  xmm0, xmm1, cs:__real@3f000000
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm8, xmm0, xmm6
    }
    *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
    __asm { vmovaps xmm9, xmm0 }
    if ( easeIn )
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm7
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm0, xmm2, xmm6; X
      }
      *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
      __asm
      {
        vdivss  xmm1, xmm0, xmm9
        vsubss  xmm0, xmm6, xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm8, xmm7
        vaddss  xmm0, xmm0, xmm6; X
      }
      *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
      __asm { vdivss  xmm0, xmm0, xmm9 }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
EaseSine
==============
*/

double __fastcall EaseSine(double pct, bool easeIn, bool easeOut)
{
  if ( easeIn && easeOut )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@40490fdb; X }
    cosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm0
      vmulss  xmm0, xmm0, cs:__real@3f000000
    }
  }
  else
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3fc90fdb; X }
    if ( easeIn )
    {
      cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm0, xmm1, xmm0
      }
    }
    else
    {
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
EaseBack
==============
*/

float __fastcall EaseBack(double pct, double overshootScalar, double power, bool easeIn, bool easeOut)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm3, cs:__real@3eb33333
    vxorps  xmm5, xmm5, xmm5
    vcmpeqss xmm4, xmm1, xmm5
    vblendvps xmm1, xmm1, xmm3, xmm4
    vmovss  [rsp+48h+arg_8], xmm1
    vmovss  xmm1, cs:__real@40400000
    vcmpless xmm3, xmm2, xmm5
    vmovaps xmm7, xmm0
    vblendvps xmm0, xmm2, xmm1, xmm3
    vmovss  [rsp+48h+arg_10], xmm0
    vmovss  xmm1, [rsp+48h+arg_10]; Y
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@40000000
        vmovss  xmm6, cs:__real@3f800000
        vmulss  xmm7, xmm7, xmm0
        vcomiss xmm7, xmm6
        vsubss  xmm7, xmm0, xmm7
        vmovaps xmm0, xmm7; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm0, xmm6, xmm0
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm6, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm7, cs:__real@c0490fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm7, [rsp+48h+arg_8]
        vmulss  xmm0, xmm0, xmm1
        vsubss  xmm0, xmm6, xmm0
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm7; X }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm7, cs:__real@40490fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm7, [rsp+48h+arg_8]
        vmulss  xmm2, xmm0, xmm1
        vsubss  xmm0, xmm6, xmm2
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm7, xmm6, xmm7
      vmovaps xmm0, xmm7; X
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm6, xmm6, xmm0
      vmulss  xmm0, xmm7, cs:__real@40490fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm7, [rsp+48h+arg_8]
      vmovaps xmm7, [rsp+48h+var_28]
      vmulss  xmm0, xmm0, xmm1
      vaddss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
EaseElastic
==============
*/

float __fastcall EaseElastic(double pct, double amplitude, double frequency, double fadeScalar, bool easeIn, bool easeOut)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, cs:__real@40800000
    vmovaps [rsp+78h+var_28], xmm7
    vxorps  xmm5, xmm5, xmm5
    vmovaps xmm7, xmm0
    vmovaps [rsp+78h+var_38], xmm8
    vcmpless xmm4, xmm1, xmm5
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm10, xmm4
    vmovss  [rsp+78h+arg_8], xmm1
    vcmpeqss xmm1, xmm2, xmm5
    vblendvps xmm0, xmm2, xmm6, xmm1
    vmovss  [rsp+78h+arg_10], xmm0
    vcmpless xmm0, xmm3, xmm5
    vblendvps xmm0, xmm3, xmm6, xmm0
    vmovss  [rsp+78h+arg_18], xmm0
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@40000000
        vmulss  xmm9, xmm1, [rsp+78h+arg_10]
        vmulss  xmm8, xmm7, xmm1
        vcomiss xmm8, xmm10
        vsubss  xmm7, xmm1, xmm8
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm0
        vmovss  xmm0, [rsp+78h+arg_8]; X
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm2
        vsubss  xmm1, xmm10, xmm3; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm6, xmm0, cs:__real@3f000000
        vmovss  xmm1, [rsp+78h+arg_18]; Y
        vmovaps xmm0, xmm7; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm1, xmm9, cs:__real@40200000
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm6, xmm6, xmm0
        vmulss  xmm0, xmm2, cs:__real@40490fdb; X
      }
      sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vsubss  xmm0, xmm10, xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm0
        vmovss  xmm0, [rsp+78h+arg_8]; X
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm2
        vsubss  xmm1, xmm10, xmm3; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, [rsp+78h+arg_18]; Y
        vmovaps xmm6, xmm0
        vmovaps xmm0, xmm7; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, [rsp+78h+arg_10]
        vmulss  xmm2, xmm1, cs:__real@40c90fdb
        vmulss  xmm6, xmm6, xmm0
        vaddss  xmm0, xmm2, cs:__real@4096cbe4
        vmulss  xmm0, xmm0, xmm7; X
      }
      sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, [rsp+78h+arg_10]
      vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vsubss  xmm9, xmm10, xmm7
      vmulss  xmm0, xmm9, xmm9
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm6, xmm1, xmm9
      vmulss  xmm1, xmm8, cs:__real@41200000; Y
      vmovaps xmm0, xmm9; X
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vsubss  xmm7, xmm10, xmm0
      vmovss  xmm0, [rsp+78h+arg_8]; X
      vsubss  xmm1, xmm10, xmm1; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, [rsp+78h+arg_18]; Y
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm9; X
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm8, cs:__real@40c90fdb
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm0, xmm1, xmm9; X
    }
    sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm6, xmm0
      vsubss  xmm0, xmm7, xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
EaseBounce
==============
*/

float __fastcall EaseBounce(double pct, int bounces, double decayScalar, bool easeIn, bool easeOut)
{
  int v15; 
  int v76[100]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  v15 = bounces;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmm8, xmm0
  }
  if ( bounces >= 1 )
  {
    if ( bounces > 100 )
      v15 = 100;
  }
  else
  {
    v15 = 4;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3e800000
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcmpless xmm1, xmm2, xmm6
    vblendvps xmm10, xmm2, xmm0, xmm1
    vmovaps xmm11, xmm10
    vshufps xmm11, xmm11, xmm11, 0
    vmovaps xmm13, xmm8
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      __asm
      {
        vmulss  xmm0, xmm8, cs:__real@40000000
        vsubss  xmm2, xmm0, xmm9
        vsubss  xmm1, xmm9, xmm0
        vcmpltss xmm0, xmm0, xmm9
        vblendvps xmm8, xmm2, xmm1, xmm0
      }
    }
    else
    {
      __asm { vsubss  xmm8, xmm9, xmm8 }
    }
  }
  _ER12 = 0;
  _EBX = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v15 > 0 && (unsigned int)v15 >= 4 )
  {
    __asm
    {
      vmovaps [rsp+268h+var_98], xmm12
      vmovdqu xmm12, cs:__xmm@00000003000000020000000100000000
    }
    _RDI = v76;
    do
    {
      __asm
      {
        vmovd   xmm0, ebx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm0, xmm0, xmm12
        vcvtdq2ps xmm1, xmm0
        vmovups xmm0, xmm11
      }
      *(double *)&_XMM0 = j___vdecl_powf4();
      _EBX += 4;
      __asm { vmovups xmmword ptr [rdi], xmm0 }
      _RDI += 4;
      __asm { vaddps  xmm7, xmm0, xmm7 }
    }
    while ( _EBX < (int)(v15 - (v15 & 0x80000003)) );
    __asm
    {
      vmovaps xmm12, [rsp+268h+var_98]
      vmovhlps xmm0, xmm7, xmm7
      vaddps  xmm7, xmm0, xmm7
      vshufps xmm0, xmm7, xmm7, 0F5h ; 'õ'
      vaddss  xmm7, xmm7, xmm0
    }
  }
  __asm { vmovaps xmm11, [rsp+268h+var_88] }
  _RDI = _EBX;
  if ( _EBX < (__int64)v15 )
  {
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx; Y
        vmovaps xmm0, xmm10; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovss  [rsp+rdi*4+268h+var_248], xmm0 }
      ++_RDI;
      ++_EBX;
      __asm { vaddss  xmm7, xmm7, xmm0 }
    }
    while ( _RDI < v15 );
  }
  __asm { vmovaps xmm10, [rsp+268h+var_78] }
  _EDX = 0;
  __asm
  {
    vaddss  xmm0, xmm7, cs:__real@bf000000
    vmovaps xmm7, [rsp+268h+var_48]
    vmovss  xmm5, cs:__real@3f000000
    vmovaps xmm1, xmm6
  }
  if ( v15 > 0i64 )
  {
    __asm
    {
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm6, xmm2, [rsp+rax*4+268h+var_248]
      vmulss  xmm6, xmm6, xmm5
      vaddss  xmm0, xmm1, xmm6
      vcomiss xmm8, xmm0
    }
    _EDX = 0;
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm1
    vmovaps xmm8, [rsp+268h+var_58]
    vmulss  xmm0, xmm0, xmm5
    vdivss  xmm4, xmm0, xmm6
    vmovaps xmm6, [rsp+268h+var_38]
    vmovd   xmm1, r12d
    vmovd   xmm0, edx
    vpcmpgtd xmm2, xmm0, xmm1
    vsubss  xmm3, xmm4, xmm5
    vblendvps xmm1, xmm4, xmm3, xmm2
    vmulss  xmm0, xmm1, cs:__real@40000000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm0, xmm0
    vsubss  xmm1, xmm9, xmm0
    vmulss  xmm0, xmm1, [rsp+rax*4+268h+var_248]
  }
  if ( easeOut )
  {
    if ( easeIn )
    {
      __asm
      {
        vcomiss xmm13, xmm5
        vsubss  xmm0, xmm9, xmm0
        vaddss  xmm1, xmm0, xmm9
        vmulss  xmm0, xmm1, xmm5
      }
    }
    else
    {
      __asm { vsubss  xmm0, xmm9, xmm0 }
    }
  }
  __asm
  {
    vmovaps xmm9, [rsp+268h+var_68]
    vmovaps xmm13, [rsp+268h+var_A8]
  }
  return *(float *)&_XMM0;
}

/*
==============
MatrixDeterminantT<dvec3_t,double>
==============
*/
long double MatrixDeterminantT<dvec3_t,double>(const dvec3_t (*in)[3])
{
  __asm
  {
    vmovsd  xmm4, qword ptr [rcx+38h]
    vmovsd  xmm2, qword ptr [rcx+40h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovsd  xmm7, qword ptr [rcx+28h]
    vmovaps [rsp+38h+var_38], xmm8
    vmovsd  xmm8, qword ptr [rcx+20h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmulsd  xmm1, xmm2, xmm8
    vmulsd  xmm2, xmm2, qword ptr [rcx+8]
    vmulsd  xmm0, xmm4, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm3, xmm1, qword ptr [rcx]
    vmulsd  xmm0, xmm4, qword ptr [rcx+10h]
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+18h]
    vmulsd  xmm0, xmm8, qword ptr [rcx+10h]
    vmovaps xmm8, [rsp+38h+var_38]
    vsubsd  xmm4, xmm3, xmm2
    vmulsd  xmm3, xmm7, qword ptr [rcx+8]
    vmovaps xmm7, [rsp+38h+var_28]
    vsubsd  xmm1, xmm3, xmm0
    vmulsd  xmm2, xmm1, qword ptr [rcx+30h]
    vaddsd  xmm0, xmm4, xmm2
  }
  return *(double *)&_XMM0;
}

/*
==============
MatrixDeterminantT<vec3_t,float>
==============
*/
float MatrixDeterminantT<vec3_t,float>(const vec3_t (*in)[3])
{
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+1Ch]
    vmovss  xmm2, dword ptr [rcx+20h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx+14h]
    vmovaps [rsp+38h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+10h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm1, xmm2, xmm8
    vmulss  xmm2, xmm2, dword ptr [rcx+4]
    vmulss  xmm0, xmm4, xmm7
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm1, dword ptr [rcx]
    vmulss  xmm0, xmm4, dword ptr [rcx+8]
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm8, dword ptr [rcx+8]
    vmovaps xmm8, [rsp+38h+var_38]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rcx+4]
    vmovaps xmm7, [rsp+38h+var_28]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vaddss  xmm0, xmm4, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
MatrixInverseDetT<dvec3_t,double>
==============
*/

void __fastcall MatrixInverseDetT<dvec3_t,double>(const dvec3_t (*in)[3], double determinant, dvec3_t (*out)[3])
{
  bool v8; 
  bool v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = out;
  _RBX = in;
  __asm { vmovaps xmm6, xmm1 }
  v8 = in == out;
  if ( in == out )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm6, xmm0
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm1, qword ptr [rbx+28h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm5, qword ptr cs:__xmm@80000000000000008000000000000000
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vdivsd  xmm6, xmm0, xmm6
    vmovsd  xmm0, qword ptr [rbx+20h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+40h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi], xmm3
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm0, qword ptr [rbx+8]
    vmulsd  xmm3, xmm0, qword ptr [rbx+40h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+8], xmm1
    vmovsd  xmm0, qword ptr [rbx+8]
    vmulsd  xmm3, xmm0, qword ptr [rbx+28h]
    vmovsd  xmm1, qword ptr [rbx+20h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+10h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi+10h], xmm3
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+28h]
    vmovsd  xmm0, qword ptr [rbx+18h]
    vmulsd  xmm3, xmm0, qword ptr [rbx+40h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+18h], xmm1
    vmovsd  xmm0, qword ptr [rbx]
    vmulsd  xmm3, xmm0, qword ptr [rbx+40h]
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+10h]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovsd  qword ptr [rdi+20h], xmm3
    vmovsd  xmm0, qword ptr [rbx+18h]
    vmulsd  xmm2, xmm0, qword ptr [rbx+10h]
    vmovsd  xmm1, qword ptr [rbx]
    vmulsd  xmm4, xmm1, qword ptr [rbx+28h]
    vsubsd  xmm1, xmm4, xmm2
    vmulsd  xmm3, xmm1, xmm6
    vxorpd  xmm0, xmm3, xmm5
    vmovsd  qword ptr [rdi+28h], xmm0
    vmovsd  xmm1, qword ptr [rbx+18h]
    vmulsd  xmm3, xmm1, qword ptr [rbx+38h]
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm0, qword ptr [rbx+20h]
    vsubsd  xmm1, xmm3, xmm2
    vmulsd  xmm3, xmm1, xmm6
    vmovsd  qword ptr [rdi+30h], xmm3
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+8]
    vmovsd  xmm0, qword ptr [rbx]
    vmulsd  xmm4, xmm0, qword ptr [rbx+38h]
    vsubsd  xmm0, xmm4, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vxorpd  xmm1, xmm3, xmm5
    vmovsd  qword ptr [rdi+38h], xmm1
    vmovsd  xmm0, qword ptr [rbx+20h]
    vmulsd  xmm3, xmm0, qword ptr [rbx]
    vmovsd  xmm1, qword ptr [rbx+18h]
    vmulsd  xmm2, xmm1, qword ptr [rbx+8]
    vsubsd  xmm0, xmm3, xmm2
    vmulsd  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovsd  qword ptr [rdi+40h], xmm3
  }
}

/*
==============
MatrixInverseDetT<vec3_t,float>
==============
*/

void __fastcall MatrixInverseDetT<vec3_t,float>(const vec3_t (*in)[3], double determinant, vec3_t (*out)[3])
{
  bool v8; 
  bool v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = out;
  _RBX = in;
  __asm { vmovaps xmm6, xmm1 }
  v8 = in == out;
  if ( in == out )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+20h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm3
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+20h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+14h]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmulss  xmm2, xmm1, dword ptr [rbx+8]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi+8], xmm3
    vmovss  xmm1, dword ptr [rbx+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx+20h]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rbx+20h]
    vmovss  xmm1, dword ptr [rbx+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+8]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovss  dword ptr [rdi+10h], xmm3
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm4, xmm1, dword ptr [rbx+14h]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm3, xmm1, xmm6
    vxorps  xmm0, xmm3, xmm5
    vmovss  dword ptr [rdi+14h], xmm0
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm3, xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+18h]
    vmulss  xmm2, xmm0, dword ptr [rbx+10h]
    vsubss  xmm1, xmm3, xmm2
    vmulss  xmm3, xmm1, xmm6
    vmovss  dword ptr [rdi+18h], xmm3
    vmovss  xmm1, dword ptr [rbx+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm4, xmm0, dword ptr [rbx+1Ch]
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm3, xmm0, xmm6
    vxorps  xmm1, xmm3, xmm5
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi+20h], xmm3
  }
}

