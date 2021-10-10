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
void DiffTrack(const vec3_t *tgt, const vec3_t *cur, float rate, float deltaTime, vec3_t *out)
{
  signed __int64 v5; 
  signed __int64 v6; 
  int v7; 
  const vec3_t *v8; 
  bool v9; 
  float v10; 
  double v11; 
  __int64 v12; 
  __int64 v13; 

  v5 = (char *)cur - (char *)tgt;
  v6 = (char *)out - (char *)tgt;
  v7 = 0;
  v8 = tgt;
  v9 = 1;
  do
  {
    if ( !v9 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = *(float *)((char *)v8->v + v5);
    if ( (unsigned int)v7 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v11 = DiffTrack(v8->v[0], v10, rate, deltaTime);
    if ( (unsigned int)v7 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    *(float *)((char *)v8->v + v6) = *(float *)&v11;
    v8 = (const vec3_t *)((char *)v8 + 4);
    v9 = (unsigned int)++v7 < 3;
  }
  while ( v7 < 3 );
}

/*
==============
IntersectPlanes
==============
*/
char IntersectPlanes(const vec3_t *pointA, const vec3_t *normalA, const vec3_t *pointB, const vec3_t *normalB, vec3_t *outPointLine, vec3_t *outAxisLine)
{
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v23; 
  vec3_t cross; 
  vec3_t v27; 
  vec3_t v28; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normalA->v[0] * normalA->v[0]) + (float)(normalA->v[1] * normalA->v[1])) + (float)(normalA->v[2] * normalA->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2141, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normalA ))", (const char *)&queryFormat, "Vec3IsNormalized( normalA )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normalB->v[0] * normalB->v[0]) + (float)(normalB->v[1] * normalB->v[1])) + (float)(normalB->v[2] * normalB->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2142, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normalB ))", (const char *)&queryFormat, "Vec3IsNormalized( normalB )") )
    __debugbreak();
  Vec3Cross(normalA, normalB, &cross);
  v10 = LODWORD(cross.v[0]);
  v11 = cross.v[1];
  v12 = cross.v[2];
  v13 = v10;
  *(float *)&v13 = (float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v12 * v12);
  v14 = v13;
  if ( COERCE_FLOAT(v13 & _xmm) <= 0.000001 )
    return 0;
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(pointA->v[1] * normalA->v[1]) + (float)(pointA->v[0] * normalA->v[0])) + (float)(pointA->v[2] * normalA->v[2])) ^ _xmm;
  LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)(pointB->v[1] * normalB->v[1]) + (float)(normalB->v[0] * pointB->v[0])) + (float)(pointB->v[2] * normalB->v[2])) ^ _xmm;
  Vec3Cross(&cross, normalB, &v28);
  Vec3Cross(normalA, &cross, &v27);
  v18 = (float)(v17 * v27.v[1]) + (float)(v16 * v28.v[1]);
  v19 = v16 * v28.v[2];
  v20 = v17 * v27.v[2];
  outPointLine->v[0] = (float)((float)(v17 * v27.v[0]) + (float)(v16 * v28.v[0])) / *(float *)&v14;
  outPointLine->v[1] = v18 / *(float *)&v14;
  v21 = (float)(v20 + v19) / *(float *)&v14;
  v23 = v14;
  *(float *)&v23 = fsqrt(*(float *)&v14);
  _XMM1 = v23;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  outPointLine->v[2] = v21;
  outAxisLine->v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  outAxisLine->v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
  outAxisLine->v[1] = v11 * (float)(1.0 / *(float *)&_XMM0);
  return 1;
}

/*
==============
IntersectRayPlane
==============
*/
char IntersectRayPlane(const vec3_t *origin, const vec3_t *direction, const vec4_t *plane, float *t, vec3_t *outHitPoint)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  v5 = plane->v[1];
  v6 = plane->v[2];
  v7 = (float)((float)(plane->v[0] * direction->v[0]) + (float)(v5 * direction->v[1])) + (float)(v6 * direction->v[2]);
  if ( v7 == 0.0 )
    return 0;
  LODWORD(v8) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(plane->v[0] * origin->v[0]) + (float)(v5 * origin->v[1])) + (float)(v6 * origin->v[2])) + plane->v[3]) / v7) ^ _xmm;
  *t = v8;
  if ( v8 < 0.0 )
    return 0;
  outHitPoint->v[0] = (float)(v8 * direction->v[0]) + origin->v[0];
  outHitPoint->v[1] = (float)(v8 * direction->v[1]) + origin->v[1];
  outHitPoint->v[2] = (float)(v8 * direction->v[2]) + origin->v[2];
  return 1;
}

/*
==============
IntersectRaySphere
==============
*/
char IntersectRaySphere(const vec3_t *origin, const vec3_t *direction, const vec3_t *sphereCenter, float radius, float *t, vec3_t *outHitPoint)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v15; 
  float v16; 

  v6 = origin->v[1] - sphereCenter->v[1];
  v7 = origin->v[0] - sphereCenter->v[0];
  v8 = origin->v[2] - sphereCenter->v[2];
  v10 = (float)((float)(v6 * direction->v[1]) + (float)(v7 * direction->v[0])) + (float)(v8 * direction->v[2]);
  v9 = v10;
  v11 = (float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) - (float)(radius * radius);
  v12 = 0.0;
  if ( v11 > 0.0 && v10 > 0.0 )
    return 0;
  v13 = (float)(v10 * v10) - v11;
  if ( v13 < 0.0 )
    return 0;
  v15 = fsqrt(v13);
  v16 = COERCE_FLOAT(LODWORD(v9) ^ _xmm) - v15;
  *t = v16;
  if ( v16 >= 0.0 )
    v12 = COERCE_FLOAT(LODWORD(v9) ^ _xmm) - v15;
  else
    *t = 0.0;
  outHitPoint->v[0] = (float)(v12 * direction->v[0]) + origin->v[0];
  outHitPoint->v[1] = (float)(v12 * direction->v[1]) + origin->v[1];
  outHitPoint->v[2] = (float)(v12 * direction->v[2]) + origin->v[2];
  return 1;
}

/*
==============
ProjectPointOntoVector
==============
*/
void ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v5 = start->v[1];
  v6 = start->v[2];
  v7 = start->v[0];
  v8 = end->v[0] - start->v[0];
  v9 = end->v[1] - v5;
  v10 = end->v[2] - v6;
  v11 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  if ( v11 == 0.0 )
  {
    vProj->v[0] = v7;
    *(_QWORD *)&vProj->y = *(_QWORD *)&start->y;
    if ( outDistFromStart )
      *outDistFromStart = 0.0;
  }
  else
  {
    v12 = (float)((float)((float)((float)(point->v[1] - v5) * v9) + (float)((float)(point->v[0] - v7) * v8)) + (float)((float)(point->v[2] - v6) * (float)(end->v[2] - v6))) / v11;
    vProj->v[0] = (float)(v8 * v12) + v7;
    vProj->v[1] = (float)(v9 * v12) + start->v[1];
    vProj->v[2] = (float)(v10 * v12) + start->v[2];
    if ( outDistFromStart )
      *outDistFromStart = v12;
  }
}

/*
==============
MatrixTransformDir44
==============
*/
void MatrixTransformDir44(const vec3_t *in1, const tmat44_t<vec4_t> *in2, vec3_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1086, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)(in2->m[1].v[0] * in1->v[1]) + (float)(in1->v[0] * in2->m[0].v[0])) + (float)(in2->m[2].v[0] * in1->v[2]);
  out->v[1] = (float)((float)(in2->m[0].v[1] * in1->v[0]) + (float)(in2->m[1].v[1] * in1->v[1])) + (float)(in2->m[2].v[1] * in1->v[2]);
  out->v[2] = (float)((float)(in2->m[0].v[2] * in1->v[0]) + (float)(in2->m[1].v[2] * in1->v[1])) + (float)(in2->m[2].v[2] * in1->v[2]);
}

/*
==============
FastSinCos
==============
*/
void FastSinCos(const float radians, float *s, float *c)
{
  float v3; 
  float v6; 
  float v7; 
  float v10; 

  LODWORD(v3) = LODWORD(radians) & _xmm;
  _XMM7 = LODWORD(FLOAT_N1_0);
  _XMM8 = 0i64;
  v6 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)(float)((float)(COERCE_FLOAT(LODWORD(radians) & _xmm) * 0.31830987) + 0.5)).m128_f32[0];
  _mm_cvtepi32_ps((__m128i)(unsigned int)(int)(float)(v6 * 0.5));
  v7 = COERCE_FLOAT(LODWORD(radians) & _xmm) - (float)(v6 * 3.1415927);
  __asm
  {
    vcmpless xmm0, xmm8, xmm3
    vblendvps xmm10, xmm7, xmm11, xmm0
  }
  v10 = (float)((float)((float)(v3 + 1.5707964) - (float)(v6 * 3.1415927)) - 1.5707964) * (float)((float)((float)(v3 + 1.5707964) - (float)(v6 * 3.1415927)) - 1.5707964);
  __asm
  {
    vcmpless xmm0, xmm8, xmm9
    vblendvps xmm1, xmm7, xmm11, xmm0
  }
  *s = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v7 * v7) * 2.8114574e-15) - 7.6471636e-13) * (float)(v7 * v7)) + 1.6059044e-10) * (float)(v7 * v7)) - 0.000000025052108) * (float)(v7 * v7)) + 0.0000027557319) * (float)(v7 * v7)) - 0.0001984127) * (float)(v7 * v7)) + 0.0083333338) * (float)(v7 * v7)) - 0.16666667) * (float)(v7 * v7)) + 1.0) * v7) * (float)(*(float *)&_XMM1 * *(float *)&_XMM10);
  *c = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v10 * 4.7794773e-14) - 1.1470745e-11) * v10) + 0.0000000020876756) * v10) - 0.0000002755732) * v10) + 0.000024801588) * v10) - 0.0013888889) * v10) + 0.041666668) * v10) - 0.5) * v10) + 1.0) * *(float *)&_XMM10;
}

/*
==============
FastSinCosDouble
==============
*/

void __fastcall FastSinCosDouble(double radians, long double *psin, long double *pcos)
{
  __int128 v5; 
  double v16; 

  __asm { vandpd  xmm5, xmm0, cs:__xmm@7fffffffffffffff7fffffffffffffff }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM5 + 1);
  *(double *)&v5 = *(double *)&_XMM5 * 0.3183098861837907 + 0.5;
  _XMM1 = v5;
  __asm { vcvttsd2si eax, xmm1 }
  _XMM7 = *(unsigned __int64 *)&DOUBLE_N1_0;
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  _XMM4 = _EAX;
  __asm { vcvtdq2pd xmm4, xmm4 }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM4 + 1);
  *(double *)&v5 = *(double *)&_XMM4 * 0.5;
  _XMM2 = v5;
  __asm { vcvttsd2si eax, xmm2 }
  _XMM1 = _EAX;
  __asm { vcvtdq2pd xmm1, xmm1 }
  v16 = *(double *)&_XMM5 - *(double *)&_XMM4 * 3.141592653589793;
  __asm
  {
    vcmplesd xmm0, xmm8, xmm3
    vblendvpd xmm10, xmm7, xmm11, xmm0
  }
  *(double *)&_XMM5 = (*(double *)&_XMM5 + 1.570796326794897 - *(double *)&_XMM4 * 3.141592653589793 - 1.570796326794897) * (*(double *)&_XMM5 + 1.570796326794897 - *(double *)&_XMM4 * 3.141592653589793 - 1.570796326794897);
  __asm
  {
    vcmplesd xmm0, xmm8, xmm9
    vblendvpd xmm1, xmm7, xmm11, xmm0
  }
  *psin = ((((((((v16 * v16 * 2.811457254345521e-15 - 7.647163731819816e-13) * (v16 * v16) + 1.605904383682161e-10) * (v16 * v16) - 0.00000002505210838544172) * (v16 * v16) + 0.000002755731922398589) * (v16 * v16) - 0.0001984126984126984) * (v16 * v16) + 0.008333333333333333) * (v16 * v16) - 0.1666666666666667) * (v16 * v16) + 1.0) * v16 * (*(double *)&_XMM1 * *(double *)&_XMM10);
  *pcos = ((((((((*(double *)&_XMM5 * 4.779477332387385e-14 - 1.147074559772972e-11) * *(double *)&_XMM5 + 0.00000000208767569878681) * *(double *)&_XMM5 - 0.0000002755731922398589) * *(double *)&_XMM5 + 0.0000248015873015873) * *(double *)&_XMM5 - 0.001388888888888889) * *(double *)&_XMM5 + 0.04166666666666666) * *(double *)&_XMM5 - 0.5) * *(double *)&_XMM5 + 1.0) * *(double *)&_XMM10;
}

/*
==============
VecNCompareCustomEpsilon
==============
*/
char VecNCompareCustomEpsilon(const float *v0, const float *v1, float epsilon, int coordCount)
{
  int v4; 
  signed __int64 v5; 

  v4 = 0;
  if ( coordCount <= 0 )
    return 1;
  v5 = (char *)v0 - (char *)v1;
  while ( (float)((float)(*(const float *)((char *)v1 + v5) - *v1) * (float)(*(const float *)((char *)v1 + v5) - *v1)) <= (float)(epsilon * epsilon) )
  {
    ++v4;
    ++v1;
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
char DVecNCompareCustomEpsilon(const long double *v0, const long double *v1, long double epsilon, int coordCount)
{
  int v4; 
  signed __int64 v5; 

  v4 = 0;
  if ( coordCount <= 0 )
    return 1;
  v5 = (char *)v0 - (char *)v1;
  while ( (*(double *)((char *)v1 + v5) - *(double *)v1) * (*(double *)((char *)v1 + v5) - *(double *)v1) <= epsilon * epsilon )
  {
    ++v4;
    ++v1;
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
float Vec3DistanceSqToSegment(const vec3_t *pt, const vec3_t *segStart, const vec3_t *segDir, float segLen)
{
  double v7; 
  float v8; 
  float v9; 
  float v10; 

  v7 = I_fclamp((float)((float)((float)(pt->v[1] - segStart->v[1]) * segDir->v[1]) + (float)((float)(pt->v[0] - segStart->v[0]) * segDir->v[0])) + (float)((float)(pt->v[2] - segStart->v[2]) * segDir->v[2]), 0.0, segLen);
  v8 = (float)((float)(*(float *)&v7 * segDir->v[0]) + segStart->v[0]) - pt->v[0];
  v9 = (float)((float)(*(float *)&v7 * segDir->v[1]) + segStart->v[1]) - pt->v[1];
  v10 = (float)((float)(*(float *)&v7 * segDir->v[2]) + segStart->v[2]) - pt->v[2];
  return (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
}

/*
==============
Vec3MajorAxis
==============
*/
__int64 Vec3MajorAxis(const vec3_t *dir)
{
  float v1; 
  float v2; 
  int v3; 
  __int64 v4; 
  int v6[4]; 

  v1 = dir->v[0] * dir->v[0];
  v2 = dir->v[2];
  *(float *)&v3 = dir->v[1] * dir->v[1];
  v4 = *(float *)&v3 > v1;
  *(float *)v6 = v1;
  v6[1] = v3;
  *(float *)&v6[2] = v2 * v2;
  if ( (float)(v2 * v2) > *(float *)&v6[v4] )
    LODWORD(v4) = 2;
  return (unsigned int)v4;
}

/*
==============
Vec3MinorAxis
==============
*/
__int64 Vec3MinorAxis(const vec3_t *dir)
{
  float v1; 
  float v2; 
  int v3; 
  __int64 v4; 
  int v6[4]; 

  v1 = dir->v[0] * dir->v[0];
  v2 = dir->v[2];
  *(float *)&v3 = dir->v[1] * dir->v[1];
  v4 = v1 > *(float *)&v3;
  *(float *)v6 = v1;
  v6[1] = v3;
  *(float *)&v6[2] = v2 * v2;
  if ( (float)(v2 * v2) < *(float *)&v6[v4] )
    LODWORD(v4) = 2;
  return (unsigned int)v4;
}

/*
==============
AngleVectors
==============
*/
void AngleVectors(const vec3_t *angles, vec3_t *forward, vec3_t *right, vec3_t *up)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float s[4]; 
  float v16; 
  float v17; 
  float c; 

  FastSinCos(0.017453292 * angles->v[1], &v17, &v16);
  FastSinCos(0.017453292 * angles->v[0], s, &c);
  v8 = v16;
  v9 = v17;
  v10 = c;
  v11 = s[0];
  if ( forward )
  {
    forward->v[0] = c * v16;
    forward->v[2] = COERCE_FLOAT(LODWORD(v11) ^ _xmm);
    forward->v[1] = v10 * v9;
  }
  if ( right || up )
  {
    FastSinCos(0.017453292 * angles->v[2], &v17, &v16);
    v12 = v16;
    v13 = v17;
    if ( right )
    {
      v14 = v17 * v11;
      right->v[0] = (float)(v16 * v9) - (float)((float)(v17 * v11) * v8);
      right->v[2] = (float)(v13 * -1.0) * v10;
      right->v[1] = (float)((float)(v12 * -1.0) * v8) - (float)(v14 * v9);
    }
    if ( up )
    {
      up->v[0] = (float)((float)(v12 * v11) * v8) + (float)(v13 * v9);
      up->v[2] = v12 * v10;
      up->v[1] = (float)((float)(v12 * v11) * v9) - (float)(v13 * v8);
    }
  }
}

/*
==============
AnglesSubtract
==============
*/
void AnglesSubtract(const vec3_t *v1, const vec3_t *v2, vec3_t *v3)
{
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v3->v[0] = (float)((float)((float)(v1->v[0] - v2->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm8, xmm3, 1 }
  v3->v[1] = (float)((float)((float)(v1->v[1] - v2->v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm8, xmm3, 1 }
  v3->v[2] = (float)((float)((float)(v1->v[2] - v2->v[2]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
}

/*
==============
AnglesSubtract
==============
*/
void AnglesSubtract(const vec2_t *v1, const vec2_t *v2, vec2_t *v3)
{
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  v3->v[0] = (float)((float)((float)(v1->v[0] - v2->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm7, xmm3, 1 }
  v3->v[1] = (float)((float)((float)(v1->v[1] - v2->v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
}

/*
==============
AnglesNormalize360
==============
*/
void AnglesNormalize360(const vec3_t *from, vec3_t *to)
{
  __int128 v2; 
  __int128 v10; 
  __int128 v15; 

  v2 = LODWORD(from->v[0]);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm3, 1 }
  *(float *)&v2 = (float)(from->v[0] * 0.0027777778) - *(float *)&_XMM2;
  _XMM5 = 0i64;
  _XMM2 = 0i64;
  *(float *)&v2 = *(float *)&v2 * 360.0;
  _XMM4 = v2;
  __asm
  {
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  to->v[0] = *(float *)&_XMM0;
  v10 = LODWORD(from->v[1]);
  __asm { vroundss xmm2, xmm2, xmm3, 1 }
  *(float *)&v10 = (float)((float)(from->v[1] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  _XMM4 = v10;
  __asm
  {
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  to->v[1] = *(float *)&_XMM0;
  v15 = LODWORD(from->v[2]);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm3, 1 }
  *(float *)&v15 = (float)((float)(from->v[2] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  _XMM4 = v15;
  __asm
  {
    vcmpless xmm0, xmm5, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  to->v[2] = *(float *)&_XMM0;
}

/*
==============
AngleDelta
==============
*/
float AngleDelta(const float angle1, const float angle2)
{
  float v2; 

  v2 = (float)(angle1 - angle2) * 0.0027777778;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  return (float)(v2 - *(float *)&_XMM4) * 360.0;
}

/*
==============
LinearTrack
==============
*/

float __fastcall LinearTrack(float tgt, float cur, double rate, float deltaTime)
{
  __int128 v4; 
  float v8; 

  v4 = *(_OWORD *)&rate;
  *(float *)&v4 = *(float *)&rate * deltaTime;
  _XMM4 = v4 ^ _xmm;
  _XMM2 = 0i64;
  __asm { vcmpltss xmm3, xmm2, xmm6 }
  LODWORD(v8) = COERCE_UNSIGNED_INT(tgt - cur) & _xmm;
  __asm { vblendvps xmm3, xmm4, xmm5, xmm3 }
  if ( v8 > 0.001 && v8 >= COERCE_FLOAT(_XMM3 & _xmm) )
    return *(float *)&_XMM3 + cur;
  return tgt;
}

/*
==============
LinearTrackAngle
==============
*/

float __fastcall LinearTrackAngle(double tgt, float cur, double rate, float deltaTime)
{
  __int128 v4; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  float v13; 

  v4 = *(_OWORD *)&tgt;
  if ( (float)(*(float *)&tgt - cur) > 180.0 )
  {
    do
    {
      v6 = v4;
      *(float *)&v6 = *(float *)&v4 + -360.0;
      v4 = v6;
    }
    while ( (float)(*(float *)&v6 - cur) > 180.0 );
  }
  if ( (float)(*(float *)&v4 - cur) < -180.0 )
  {
    do
    {
      v7 = v4;
      *(float *)&v7 = *(float *)&v4 + 360.0;
      v4 = v7;
    }
    while ( (float)(*(float *)&v7 - cur) < -180.0 );
  }
  v8 = *(_OWORD *)&rate;
  *(float *)&v8 = *(float *)&rate * deltaTime;
  _XMM2 = v8 ^ _xmm;
  _XMM0 = 0i64;
  __asm
  {
    vcmpltss xmm1, xmm0, xmm4
    vblendvps xmm1, xmm2, xmm3, xmm1
  }
  LODWORD(v13) = COERCE_UNSIGNED_INT(*(float *)&v4 - cur) & _xmm;
  if ( v13 > 0.001 && v13 >= COERCE_FLOAT(_XMM1 & _xmm) )
    *(float *)&v4 = *(float *)&_XMM1 + cur;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  return (float)((float)(*(float *)&v4 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
}

/*
==============
DiffTrack
==============
*/
float DiffTrack(float tgt, float cur, float rate, float deltaTime)
{
  float v4; 
  float v5; 

  v4 = (float)((float)(tgt - cur) * rate) * deltaTime;
  LODWORD(v5) = COERCE_UNSIGNED_INT(tgt - cur) & _xmm;
  if ( v5 > 0.001 && v5 >= COERCE_FLOAT(LODWORD(v4) & _xmm) )
    return v4 + cur;
  return tgt;
}

/*
==============
DiffTrackAngle
==============
*/

float __fastcall DiffTrackAngle(double tgt, float cur, float rate, float deltaTime)
{
  __int128 v4; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  float v9; 

  v4 = *(_OWORD *)&tgt;
  if ( (float)(*(float *)&tgt - cur) > 180.0 )
  {
    do
    {
      v6 = v4;
      *(float *)&v6 = *(float *)&v4 + -360.0;
      v4 = v6;
    }
    while ( (float)(*(float *)&v6 - cur) > 180.0 );
  }
  if ( (float)(*(float *)&v4 - cur) < -180.0 )
  {
    do
    {
      v7 = v4;
      *(float *)&v7 = *(float *)&v4 + 360.0;
      v4 = v7;
    }
    while ( (float)(*(float *)&v7 - cur) < -180.0 );
  }
  LODWORD(v8) = COERCE_UNSIGNED_INT(*(float *)&v4 - cur) & _xmm;
  v9 = (float)((float)(*(float *)&v4 - cur) * rate) * deltaTime;
  if ( v8 > 0.001 && v8 >= COERCE_FLOAT(LODWORD(v9) & _xmm) )
    *(float *)&v4 = v9 + cur;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  return (float)((float)(*(float *)&v4 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
}

/*
==============
SinCosDeg
==============
*/

void __fastcall SinCosDeg(double degrees, float *s, float *c)
{
  _XMM6 = *(_OWORD *)&degrees;
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 380, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 381, ASSERT_TYPE_SANITY, "( c )", "%s", "c") )
    __debugbreak();
  __asm
  {
    vcmpltss xmm0, xmm6, xmm2
    vblendvps xmm3, xmm6, xmm1, xmm0
  }
  if ( *(float *)&_XMM3 == 0.0 )
  {
    *c = 1.0;
    *s = 0.0;
  }
  else if ( *(float *)&_XMM3 == 90.0 )
  {
    *c = 0.0;
    *s = 1.0;
  }
  else if ( *(float *)&_XMM3 == 180.0 )
  {
    *c = -1.0;
    *s = 0.0;
  }
  else if ( *(float *)&_XMM3 == 270.0 )
  {
    *c = 0.0;
    *s = -1.0;
  }
  else
  {
    FastSinCos(*(float *)&_XMM3 * 0.017453292, s, c);
  }
}

/*
==============
FudgeFloat
==============
*/
float FudgeFloat(float f, int lsbError, int lsbCount)
{
  int v3; 
  int v4; 

  v3 = 1 << lsbCount;
  v4 = LODWORD(f) & (v3 - 1);
  if ( v4 > lsbError )
  {
    if ( v3 - v4 <= lsbError )
      LODWORD(f) += v3 - v4;
  }
  else
  {
    LODWORD(f) -= v4;
  }
  return f;
}

/*
==============
SnapFloat
==============
*/

float __fastcall SnapFloat(double f, float granularity, float epsilon)
{
  unsigned int v4; 
  unsigned int v5; 
  __m128 v8; 

  _XMM8 = *(_OWORD *)&f;
  if ( granularity <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 445, ASSERT_TYPE_ASSERT, "( ( granularity > 0 ) )", "( granularity ) = %g", granularity) )
    __debugbreak();
  if ( epsilon <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 446, ASSERT_TYPE_ASSERT, "( ( epsilon > 0 ) )", "( epsilon ) = %g", epsilon) )
    __debugbreak();
  if ( epsilon >= (float)((float)(1.0 / granularity) * 0.5) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 447, ASSERT_TYPE_ASSERT, "( epsilon < 0.5f / granularity )", "%g, %g", epsilon, granularity) )
    __debugbreak();
  v4 = LOWORD(f) & 0xFFF;
  if ( v4 <= 4 )
  {
    v5 = LODWORD(f) - v4;
LABEL_14:
    _XMM8 = v5;
    goto LABEL_15;
  }
  if ( (int)(4096 - v4) <= 4 )
  {
    v5 = 4096 - v4 + LODWORD(f);
    goto LABEL_14;
  }
LABEL_15:
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  v8 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM4);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] * (float)(1.0 / granularity)) - *(float *)&_XMM8;
  _XMM1 = *(_OWORD *)&v8 & _xmm;
  __asm
  {
    vcmpless xmm0, xmm1, xmm6
    vblendvps xmm0, xmm8, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
RotatePointAroundVector
==============
*/
void RotatePointAroundVector(vec3_t *dst, const vec3_t *dir, const vec3_t *point, float degrees)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float c; 
  float s; 
  tmat33_t<vec3_t> matrix; 

  v4 = dir->v[1];
  v5 = dir->v[0];
  v6 = degrees * 0.017453292;
  v7 = dir->v[2];
  v8 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v5, v4, v7, fsqrt(v8)) )
    __debugbreak();
  c = v6;
  if ( (LODWORD(v6) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  FastSinCos(v6, &s, &c);
  v12 = dir->v[0];
  v13 = dir->v[1];
  v14 = dir->v[2];
  v15 = dir->v[0] * s;
  v16 = dir->v[0] * (float)(1.0 - c);
  v17 = v14 * (float)(1.0 - c);
  matrix.m[0].v[0] = (float)(v16 * dir->v[0]) + c;
  matrix.m[0].v[2] = (float)(v16 * v14) + (float)(v13 * s);
  matrix.m[0].v[1] = (float)((float)(v13 * (float)(1.0 - c)) * v12) - (float)(v14 * s);
  matrix.m[1].v[0] = (float)((float)(v13 * (float)(1.0 - c)) * v12) + (float)(v14 * s);
  matrix.m[2].v[0] = (float)(v16 * v14) - (float)(v13 * s);
  matrix.m[1].v[1] = (float)((float)(v13 * (float)(1.0 - c)) * v13) + c;
  matrix.m[1].v[2] = (float)(v17 * v13) - v15;
  matrix.m[2].v[2] = (float)(v17 * v14) + c;
  matrix.m[2].v[1] = (float)(v17 * v13) + v15;
  Vec3Rotate(point, &matrix, dst);
}

/*
==============
YawVectors
==============
*/
void YawVectors(float yaw, vec3_t *forward, vec3_t *right)
{
  float v5; 
  float v6; 
  float c; 
  float s; 

  FastSinCos(yaw * 0.017453292, &s, &c);
  v5 = c;
  v6 = s;
  if ( forward )
  {
    forward->v[0] = c;
    forward->v[1] = v6;
    forward->v[2] = 0.0;
  }
  if ( right )
  {
    right->v[1] = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
    right->v[0] = v6;
    right->v[2] = 0.0;
  }
}

/*
==============
YawVectors2D
==============
*/
void YawVectors2D(float yaw, vec2_t *forward, vec2_t *right)
{
  float v5; 
  float v6; 
  float c; 
  float s; 

  FastSinCos(yaw * 0.017453292, &s, &c);
  v5 = c;
  v6 = s;
  if ( forward )
  {
    forward->v[0] = c;
    forward->v[1] = v6;
  }
  if ( right )
  {
    right->v[1] = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
    right->v[0] = v6;
  }
}

/*
==============
ProjectPointOntoVector
==============
*/
void ProjectPointOntoVector(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  v4 = start->v[0];
  v5 = end->v[0] - start->v[0];
  v6 = end->v[1] - start->v[1];
  v7 = end->v[2] - start->v[2];
  v8 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v8 == 0.0 )
  {
    vProj->v[0] = v4;
    vProj->v[1] = start->v[1];
    vProj->v[2] = start->v[2];
  }
  else
  {
    v9 = (float)((float)((float)((float)(point->v[1] - start->v[1]) * v6) + (float)((float)(point->v[0] - start->v[0]) * v5)) + (float)((float)(point->v[2] - start->v[2]) * v7)) / v8;
    vProj->v[0] = (float)(v9 * v5) + v4;
    vProj->v[1] = (float)(v6 * v9) + start->v[1];
    vProj->v[2] = (float)(v7 * v9) + start->v[2];
  }
}

/*
==============
PerpendicularVector
==============
*/
void PerpendicularVector(const vec3_t *src, vec3_t *dst)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v8; 
  float v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  int v19[2]; 
  float v20; 

  v2 = src->v[1];
  v3 = src->v[0];
  v4 = src->v[2];
  v5 = (float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 541, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( src ) )", "(%g, %g, %g) len %g", v3, v2, v4, fsqrt(v5)) )
    __debugbreak();
  v8 = src->v[0];
  v9 = src->v[1] * src->v[1];
  v20 = src->v[2] * src->v[2];
  *(float *)&v19[1] = v9;
  *(float *)v19 = v8 * v8;
  v10 = (float)(v8 * v8) > v9;
  if ( v20 < *(float *)&v19[v10] )
    v10 = 2i64;
  LODWORD(v11) = LODWORD(src->v[v10]) ^ _xmm;
  dst->v[0] = v8 * v11;
  dst->v[1] = v11 * src->v[1];
  dst->v[2] = v11 * src->v[2];
  dst->v[v10] = dst->v[v10] + 1.0;
  v12 = dst->v[1];
  v13 = LODWORD(dst->v[0]);
  v14 = dst->v[2];
  v15 = v13;
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  _XMM3 = v15;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  dst->v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  dst->v[2] = v14 * (float)(1.0 / *(float *)&_XMM0);
  dst->v[1] = v12 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
PerpendicularUpVector
==============
*/
void PerpendicularUpVector(const vec3_t *src, vec3_t *dst)
{
  float v4; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float c; 
  float v18; 
  float s[3]; 

  v4 = src->v[1];
  if ( v4 == 0.0 && src->v[0] == 0.0 )
  {
    _XMM0 = LODWORD(src->v[2]);
    __asm { vcmpless xmm3, xmm0, cs:__real@80000000 }
    _XMM1 = LODWORD(FLOAT_N90_0);
    __asm { vblendvps xmm8, xmm1, xmm2, xmm3 }
    v14 = *(float *)&_XMM8;
    v9 = 0.0;
  }
  else
  {
    v10 = src->v[0];
    v9 = atan2f_0(v4, src->v[0]) * 57.295776;
    *(float *)&_XMM8 = atan2f_0(src->v[2], fsqrt((float)(v10 * v10) + (float)(v4 * v4))) * -57.295776;
  }
  FastSinCos(v9 * 0.017453292, s, &c);
  FastSinCos(*(float *)&_XMM8 * 0.017453292, &v16, &v14);
  if ( dst )
  {
    FastSinCos(0.0, &v18, &v15);
    v11 = v15;
    v12 = (float)(v15 * v16) * s[0];
    v13 = v18 * c;
    dst->v[0] = (float)((float)(v15 * v16) * c) + (float)(v18 * s[0]);
    dst->v[2] = v11 * v14;
    dst->v[1] = v12 - v13;
  }
}

/*
==============
ConvexHullIntersectsSphere
==============
*/

char __fastcall ConvexHullIntersectsSphere(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *sphereCenter, double sphereRadius)
{
  int v5; 
  __int128 v7; 
  __m128 v10; 
  __int128 v19; 

  HIDWORD(v19) = 0;
  v5 = 0;
  v7 = v19;
  *(float *)&v7 = sphereCenter->v[0];
  _XMM4 = v7;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [r8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r8+8], 20h ; ' '
  }
  _mm_shuffle_ps(*(__m128 *)&sphereRadius, *(__m128 *)&sphereRadius, 0);
  if ( !numPlanes )
    return 1;
  while ( 1 )
  {
    v10 = (__m128)hullPlanes[v5];
    _XMM0 = _mm128_mul_ps(_XMM4, v10);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm3, xmm1, xmm1
      vhaddps xmm0, xmm3, xmm3
    }
    _XMM1 = _mm128_sub_ps(_XMM0, _mm_shuffle_ps(v10, v10, 255));
    __asm
    {
      vcmpleps xmm2, xmm1, xmm5
      vmovmskps eax, xmm2
    }
    if ( !_EAX )
      break;
    if ( ++v5 >= numPlanes )
      return 1;
  }
  return 0;
}

/*
==============
ConvexHullIntersectsAABB
==============
*/
char ConvexHullIntersectsAABB(const vec4_t *hullPlanes, unsigned int numPlanes, const vec3_t *AABBMins, const vec3_t *AABBMaxs)
{
  int v5; 
  __int128 v7; 
  __int128 v11; 
  __m128 v14; 
  __int128 v24; 
  __int128 v25; 

  HIDWORD(v24) = 0;
  v5 = 0;
  v7 = v24;
  *(float *)&v7 = AABBMins->v[0];
  _XMM5 = v7;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [r8+4], 10h
    vinsertps xmm5, xmm5, dword ptr [r8+8], 20h ; ' '
  }
  v25 = _XMM5;
  HIDWORD(v25) = 0;
  v11 = v25;
  *(float *)&v11 = AABBMaxs->v[0];
  _XMM6 = v11;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [r9+4], 10h
    vinsertps xmm6, xmm6, dword ptr [r9+8], 20h ; ' '
  }
  if ( !numPlanes )
    return 1;
  while ( 1 )
  {
    v14 = (__m128)hullPlanes[v5];
    __asm { vblendvps xmm1, xmm5, xmm6, xmm0 }
    _XMM2 = _mm128_mul_ps(_XMM1, v14);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm3, xmm0, xmm0
      vhaddps xmm0, xmm3, xmm3
    }
    _XMM1 = _mm128_sub_ps(_XMM0, _mm_shuffle_ps(v14, v14, 255));
    __asm
    {
      vcmpleps xmm2, xmm1, xmm7
      vmovmskps eax, xmm2
    }
    if ( !_EAX )
      break;
    if ( ++v5 >= numPlanes )
      return 1;
  }
  return 0;
}

/*
==============
IntersectPlanes
==============
*/
bool IntersectPlanes(const dvec4_t (*plane)[3], dvec3_t *xyz)
{
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  __int128 v6; 
  double v7; 
  double v8; 
  __int128 v10; 
  bool result; 

  v2 = (*plane)[2].v[1];
  v3 = (*plane)[1].v[2];
  v4 = (*plane)[2].v[2];
  v5 = (*plane)[1].v[1];
  v6 = COERCE_UNSIGNED_INT64(v4 * v5 - v2 * v3);
  v7 = v2 * (*plane)[0].v[2] - v4 * (*plane)[0].v[1];
  *((_QWORD *)&v10 + 1) = *((_QWORD *)&v6 + 1);
  v8 = v3 * (*plane)[0].v[1] - v5 * (*plane)[0].v[2];
  *(double *)&v10 = *(double *)&v6 * (*plane)[0].v[0] + v7 * (*plane)[1].v[0] + v8 * (*plane)[2].v[0];
  _XMM3 = v10;
  __asm { vandpd  xmm0, xmm3, cs:__xmm@7fffffffffffffff7fffffffffffffff }
  if ( *(double *)&_XMM0 < 0.001000000047497451 )
    return 0;
  result = 1;
  xyz->x = (v7 * (*plane)[1].v[3] + *(double *)&v6 * (*plane)[0].v[3] + v8 * (*plane)[2].v[3]) * (1.0 / *(double *)&v10);
  xyz->y = (((*plane)[0].v[0] * (*plane)[2].v[2] - (*plane)[2].v[0] * (*plane)[0].v[2]) * (*plane)[1].v[3] + ((*plane)[2].v[0] * (*plane)[1].v[2] - (*plane)[1].v[0] * (*plane)[2].v[2]) * (*plane)[0].v[3] + ((*plane)[1].v[0] * (*plane)[0].v[2] - (*plane)[0].v[0] * (*plane)[1].v[2]) * (*plane)[2].v[3]) * (1.0 / *(double *)&v10);
  xyz->z = (((*plane)[2].v[0] * (*plane)[0].v[1] - (*plane)[2].v[1] * (*plane)[0].v[0]) * (*plane)[1].v[3] + ((*plane)[2].v[1] * (*plane)[1].v[0] - (*plane)[1].v[1] * (*plane)[2].v[0]) * (*plane)[0].v[3] + ((*plane)[1].v[1] * (*plane)[0].v[0] - (*plane)[1].v[0] * (*plane)[0].v[1]) * (*plane)[2].v[3]) * (1.0 / *(double *)&v10);
  return result;
}

/*
==============
IntersectPlanes
==============
*/
char IntersectPlanes(const vec4_t (*plane)[3], vec3_t *xyz)
{
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  __int128 v14; 
  __int128 v16; 
  double v17; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 

  v26 = (*plane)[0].v[3];
  v25 = (*plane)[1].v[3];
  v27 = (*plane)[2].v[3];
  v2 = (*plane)[1].v[1];
  v3 = (*plane)[1].v[2];
  v4 = (*plane)[2].v[1];
  v5 = (*plane)[2].v[2];
  v6 = v5 * v2 - v3 * v4;
  v7 = (*plane)[0].v[1];
  v8 = (*plane)[0].v[2];
  v9 = v8 * v4 - v5 * v7;
  v10 = (*plane)[0].v[0];
  v11 = (*plane)[1].v[0];
  v12 = (*plane)[2].v[0];
  v28 = v3 * v7 - v8 * v2;
  *((_QWORD *)&v14 + 1) = 0i64;
  *(double *)&v14 = v11 * v9 + v10 * v6 + v12 * v28;
  _XMM5 = v14;
  __asm { vandpd  xmm1, xmm5, cs:__xmm@7fffffffffffffff7fffffffffffffff }
  if ( *(double *)&_XMM1 < 0.001000000047497451 )
    return 0;
  *((_QWORD *)&v16 + 1) = 0i64;
  v17 = 1.0 / *(double *)&_XMM5;
  *(double *)&v16 = (v6 * v26 + v9 * v25 + v27 * v28) * v17;
  _XMM7 = v16;
  *((_QWORD *)&v16 + 1) = 0i64;
  *(double *)&v16 = ((v10 * v5 - v8 * v12) * v25 + (v3 * v12 - v11 * v5) * v26 + (v11 * v8 - v3 * v10) * v27) * v17;
  _XMM6 = v16;
  *((_QWORD *)&v16 + 1) = 0i64;
  __asm { vcvtsd2ss xmm0, xmm7, xmm7 }
  *(double *)&v16 = ((v11 * v4 - v2 * v12) * v26 + (v7 * v12 - v10 * v4) * v25 + (v10 * v2 - v11 * v7) * v27) * v17;
  _XMM5 = v16;
  xyz->v[0] = *(float *)&_XMM0;
  __asm
  {
    vcvtsd2ss xmm0, xmm5, xmm5
    vcvtsd2ss xmm1, xmm6, xmm6
  }
  xyz->v[2] = *(float *)&_XMM0;
  xyz->v[1] = *(float *)&_XMM1;
  return 1;
}

/*
==============
IntersectTwoPlanes
==============
*/
char IntersectTwoPlanes(const vec4_t (*planes)[2], vec3_t *isectPoint, vec3_t *isectDir)
{
  __int128 v3; 
  float v7; 
  float v8; 
  float v9; 
  __int64 v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  int v26[4]; 
  __int128 v27; 

  Vec3Cross((const vec3_t *)planes, (const vec3_t *)&(*planes)[1], isectDir);
  v7 = isectDir->v[1] * isectDir->v[1];
  v8 = isectDir->v[2] * isectDir->v[2];
  v9 = isectDir->v[0] * isectDir->v[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v9 + v7) + v8) & _xmm) <= 1.0e-12 )
    return 0;
  *(float *)v26 = isectDir->v[0] * isectDir->v[0];
  v11 = v7 > v9;
  *(float *)&v26[1] = v7;
  *(float *)&v26[2] = v8;
  v12 = v8 <= *(float *)&v26[v11];
  v27 = v3;
  if ( !v12 )
    v11 = 2i64;
  v13 = ((int)v11 + 1) % 3u;
  v14 = ((int)v11 + 2) % 3u;
  if ( v14 >= 4 )
  {
    v23 = 4;
    v19 = ((int)v11 + 2) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v23) )
      __debugbreak();
  }
  if ( v13 >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v18) = ((int)v11 + 1) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
  }
  if ( v14 >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v18) = ((int)v11 + 2) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
  }
  if ( v13 >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v18) = ((int)v11 + 1) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
  }
  v15 = (float)((*planes)[1].v[v14] * (*planes)[0].v[v13]) - (float)((*planes)[0].v[v14] * (*planes)[1].v[v13]);
  if ( v14 >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v18) = ((int)v11 + 2) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
    LODWORD(v24) = 4;
    LODWORD(v20) = ((int)v11 + 2) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v24) )
      __debugbreak();
  }
  v16 = (float)((float)((*planes)[1].v[v14] * (*planes)[0].v[3]) - (float)((*planes)[0].v[v14] * (*planes)[1].v[3])) * (float)(1.0 / v15);
  if ( v13 >= 3 )
  {
    LODWORD(v22) = 3;
    LODWORD(v18) = ((int)v11 + 1) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
  }
  isectPoint->v[v13] = v16;
  if ( v13 >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v18) = ((int)v11 + 1) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
    LODWORD(v25) = 4;
    LODWORD(v21) = ((int)v11 + 1) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v25) )
      __debugbreak();
  }
  v17 = (float)((float)((*planes)[1].v[3] * (*planes)[0].v[v13]) - (float)((*planes)[1].v[v13] * (*planes)[0].v[3])) * (float)(1.0 / v15);
  if ( v14 >= 3 )
  {
    LODWORD(v22) = 3;
    LODWORD(v18) = ((int)v11 + 2) % 3u;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v22) )
      __debugbreak();
  }
  isectPoint->v[v14] = v17;
  isectPoint->v[v11] = 0.0;
  return 1;
}

/*
==============
PlaneFromPoints
==============
*/
char PlaneFromPoints(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2, float degenerateEpsilon)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v27; 
  vec3_t v1a; 
  vec3_t v0a; 

  v5 = v1->v[0] - v0->v[0];
  v6 = v1->v[1] - v0->v[1];
  v7 = v1->v[2] - v0->v[2];
  v8 = v2->v[0] - v0->v[0];
  v9 = v2->v[1] - v0->v[1];
  v10 = v2->v[2] - v0->v[2];
  v0a.v[2] = v10;
  v1a.v[0] = v5;
  v1a.v[1] = v6;
  v1a.v[2] = v7;
  v0a.v[0] = v8;
  v0a.v[1] = v9;
  Vec3Cross(&v0a, &v1a, (vec3_t *)plane);
  v15 = plane->v[1];
  v16 = plane->v[0];
  v17 = plane->v[2];
  v19 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
  v18 = v19;
  if ( v19 < 2.0 )
  {
    if ( v19 == 0.0 )
      return 0;
    if ( v19 <= (float)((float)((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) * (float)((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10))) * (float)(degenerateEpsilon * degenerateEpsilon)) )
    {
      v20 = v2->v[0] - v1->v[0];
      v21 = v2->v[1] - v1->v[1];
      v22 = v2->v[2] - v1->v[2];
      v23 = v0->v[0] - v1->v[0];
      v24 = v0->v[1] - v1->v[1];
      v0a.v[2] = v0->v[2] - v1->v[2];
      v25 = v0a.v[2];
      v1a.v[0] = v20;
      v1a.v[1] = v21;
      v1a.v[2] = v22;
      v0a.v[0] = v23;
      v0a.v[1] = v24;
      Vec3Cross(&v0a, &v1a, (vec3_t *)plane);
      v15 = plane->v[1];
      v16 = plane->v[0];
      v17 = plane->v[2];
      v18 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
      if ( v18 <= (float)((float)((float)((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22)) * (float)((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25))) * (float)(degenerateEpsilon * degenerateEpsilon)) )
        return 0;
    }
  }
  v27 = 1.0 / fsqrt(v18);
  plane->v[0] = v16 * v27;
  plane->v[1] = v15 * v27;
  plane->v[2] = v27 * v17;
  plane->v[3] = (float)((float)((float)(v15 * v27) * v0->v[1]) + (float)((float)(v16 * v27) * v0->v[0])) + (float)((float)(v27 * v17) * v0->v[2]);
  return 1;
}

/*
==============
PlaneFromPointsEx
==============
*/
char PlaneFromPointsEx(dvec4_t *plane, const dvec3_t *v0, const dvec3_t *v1, const dvec3_t *v2, long double degenerateEpsilon)
{
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v17; 
  long double v19; 
  long double v20; 
  long double v21; 
  long double v22; 
  long double v23; 
  long double z; 
  long double v30; 
  dvec3_t v1a; 
  dvec3_t v0a; 

  v5 = v1->x - v0->x;
  v6 = v1->y - v0->y;
  v7 = v1->z - v0->z;
  v8 = v2->x - v0->x;
  v9 = v2->y - v0->y;
  v10 = v2->z - v0->z;
  v0a.z = v10;
  v1a.x = v5;
  v1a.y = v6;
  v1a.z = v7;
  v0a.x = v8;
  v0a.y = v9;
  DVec3Cross(&v0a, &v1a, (dvec3_t *)plane);
  _XMM0 = COERCE_UNSIGNED_INT64(plane->v[1] * plane->v[1]);
  v17 = plane->v[0] * plane->v[0] + *(double *)&_XMM0 + plane->v[2] * plane->v[2];
  _XMM12 = *(unsigned __int64 *)&v17;
  if ( v17 < 2.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( v17 == *(double *)&_XMM0 )
      return 0;
    if ( v17 <= (v6 * v6 + v5 * v5 + v7 * v7) * (v8 * v8 + v9 * v9 + v10 * v10) * (degenerateEpsilon * degenerateEpsilon) )
    {
      v19 = v2->x - v1->x;
      v20 = v2->y - v1->y;
      v21 = v2->z - v1->z;
      v22 = v0->x - v1->x;
      v23 = v0->y - v1->y;
      v0a.z = v0->z - v1->z;
      z = v0a.z;
      v1a.x = v19;
      v1a.y = v20;
      v1a.z = v21;
      v0a.x = v22;
      v0a.y = v23;
      DVec3Cross(&v0a, &v1a, (dvec3_t *)plane);
      if ( v17 <= (v20 * v20 + v19 * v19 + v21 * v21) * (v23 * v23 + v22 * v22 + z * z) * (degenerateEpsilon * degenerateEpsilon) )
        return 0;
    }
  }
  __asm { vsqrtsd xmm1, xmm12, xmm12 }
  _XMM2 = COERCE_UNSIGNED_INT64(1.0 / *(double *)&_XMM1);
  __asm
  {
    vmovddup xmm2, xmm2
    vmulpd  xmm1, xmm2, xmmword ptr [rbx]
  }
  *(_OWORD *)plane->v = _XMM1;
  v30 = *(double *)&_XMM2 * plane->v[2];
  plane->v[2] = v30;
  plane->v[3] = plane->v[0] * v0->x + plane->v[1] * v0->y + v30 * v0->z;
  return 1;
}

/*
==============
PlaneFromPointsEx
==============
*/
bool PlaneFromPointsEx(vec4_t *plane, const vec3_t *v0, const vec3_t *v1, const vec3_t *v2)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  bool result; 
  dvec3_t v2a; 
  dvec3_t v1a; 
  dvec3_t v0a; 
  dvec4_t planea; 

  v4 = v0->v[1];
  v0a.x = v0->v[0];
  v5 = v0->v[2];
  v0a.y = v4;
  v6 = v1->v[0];
  v0a.z = v5;
  v7 = v1->v[1];
  v1a.x = v6;
  v8 = v1->v[2];
  v1a.y = v7;
  v9 = v2->v[0];
  v1a.z = v8;
  v10 = v2->v[1];
  v2a.x = v9;
  v11 = v2->v[2];
  v2a.y = v10;
  v2a.z = v11;
  result = PlaneFromPointsEx(&planea, &v0a, &v1a, &v2a, 0.001000000047497451);
  _XMM0 = *(unsigned __int64 *)&planea.v[0];
  _XMM1 = *(unsigned __int64 *)&planea.v[1];
  __asm { vcvtpd2ps xmm0, xmm0 }
  plane->v[0] = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&planea.v[2];
  __asm { vcvtpd2ps xmm1, xmm1 }
  plane->v[1] = *(float *)&_XMM1;
  _XMM1 = *(unsigned __int64 *)&planea.v[3];
  __asm
  {
    vcvtpd2ps xmm0, xmm0
    vcvtpd2ps xmm1, xmm1
  }
  plane->v[2] = *(float *)&_XMM0;
  plane->v[3] = *(float *)&_XMM1;
  return result;
}

/*
==============
IsContainedBy
==============
*/
char IsContainedBy(unsigned int numPlanes, const vec4_t *planes, const vec3_t *vertex)
{
  int v3; 

  v3 = 0;
  if ( !numPlanes )
    return 1;
  while ( (float)((float)((float)(vertex->v[1] * planes[v3].v[1]) + (float)(vertex->v[0] * planes[v3].v[0])) + (float)(vertex->v[2] * planes[v3].v[2])) <= (float)(planes[v3].v[3] + 0.001) )
  {
    if ( ++v3 >= numPlanes )
      return 1;
  }
  return 0;
}

/*
==============
SnapPointToPlanes
==============
*/
void SnapPointToPlanes(const vec4_t *planes, int planeCount, vec3_t *xyz, float snapGrid, float snapEpsilon)
{
  __int128 v5; 
  __int128 v6; 
  __int64 v8; 
  __int64 v11; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  float *v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  float *v51; 
  __int64 v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  __int128 v58; 
  unsigned int v59; 
  signed __int64 v60; 
  bool v61; 
  vec3_t *v62; 
  float v65; 
  float v66; 
  float v67; 
  float *v69; 
  unsigned __int64 v70; 
  __int128 v71; 
  float v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v83; 
  __int128 v84; 
  __int64 v89; 
  float *v90; 
  __int128 v91; 
  float v92; 
  __int64 v94; 
  __int64 v95; 
  float v96; 
  float v97; 
  float v98; 
  __int128 v99; 
  __int128 v100; 

  *(float *)&_XMM6 = snapEpsilon;
  v8 = 0i64;
  v11 = planeCount;
  if ( planeCount < 4i64 )
  {
    v18 = 0i64;
  }
  else
  {
    v13 = LODWORD(xyz->v[1]);
    v14 = LODWORD(xyz->v[0]);
    v15 = LODWORD(xyz->v[2]);
    v16 = &planes[2].v[1];
    v100 = v5;
    v99 = v6;
    v17 = ((unsigned __int64)(planeCount - 4i64) >> 2) + 1;
    v18 = 4 * v17;
    do
    {
      v19 = *((unsigned int *)v16 - 9);
      v20 = v19;
      *(float *)&v20 = (float)((float)((float)(*(float *)&v19 * *(float *)&v14) + (float)(*(float *)&v13 * *(v16 - 8))) + (float)(*(float *)&v15 * *(v16 - 7))) - *(v16 - 6);
      v21 = v13;
      v22 = v14;
      v23 = v15;
      if ( *(float *)&v20 <= snapEpsilon && *(float *)&v20 >= COERCE_FLOAT(LODWORD(snapEpsilon) ^ _xmm) )
      {
        v24 = v20 ^ (unsigned int)_xmm;
        v25 = *((unsigned int *)v16 - 9);
        *(float *)&v25 = (float)(*(float *)&v19 * *(float *)&v24) + *(float *)&v14;
        v22 = v25;
        xyz->v[0] = *(float *)&v25;
        v26 = v24;
        *(float *)&v26 = (float)(*(float *)&v24 * *(v16 - 8)) + *(float *)&v13;
        v21 = v26;
        xyz->v[1] = *(float *)&v26;
        v27 = v24;
        *(float *)&v27 = (float)(*(float *)&v24 * *(v16 - 7)) + *(float *)&v15;
        v23 = v27;
        xyz->v[2] = *(float *)&v27;
      }
      v30 = v21;
      v28 = *(v16 - 5);
      *(float *)&v30 = (float)((float)((float)(*(float *)&v21 * *(v16 - 4)) + (float)(v28 * *(float *)&v22)) + (float)(*(float *)&v23 * *(v16 - 3))) - *(v16 - 2);
      v29 = v30;
      v31 = v21;
      v32 = v22;
      v33 = v23;
      if ( *(float *)&v30 <= snapEpsilon && *(float *)&v30 >= COERCE_FLOAT(LODWORD(snapEpsilon) ^ _xmm) )
      {
        v34 = *((unsigned int *)v16 - 5);
        *(float *)&v34 = (float)(v28 * COERCE_FLOAT(v29 ^ _xmm)) + *(float *)&v22;
        v32 = v34;
        xyz->v[0] = *(float *)&v34;
        v35 = v29 ^ (unsigned int)_xmm;
        *(float *)&v35 = (float)(COERCE_FLOAT(v29 ^ _xmm) * *(v16 - 4)) + *(float *)&v21;
        v31 = v35;
        xyz->v[1] = *(float *)&v35;
        v36 = v29 ^ (unsigned int)_xmm;
        *(float *)&v36 = (float)(COERCE_FLOAT(v29 ^ _xmm) * *(v16 - 3)) + *(float *)&v23;
        v33 = v36;
        xyz->v[2] = *(float *)&v36;
      }
      v38 = v31;
      v37 = *(v16 - 1);
      *(float *)&v38 = (float)((float)((float)(*(float *)&v31 * *v16) + (float)(v37 * *(float *)&v32)) + (float)(*(float *)&v33 * v16[1])) - v16[2];
      v13 = v31;
      v14 = v32;
      v15 = v33;
      if ( *(float *)&v38 <= snapEpsilon && *(float *)&v38 >= COERCE_FLOAT(LODWORD(snapEpsilon) ^ _xmm) )
      {
        v39 = v38 ^ (unsigned int)_xmm;
        v40 = *((unsigned int *)v16 - 1);
        *(float *)&v40 = (float)(v37 * *(float *)&v39) + *(float *)&v32;
        v14 = v40;
        xyz->v[0] = *(float *)&v40;
        v41 = v39;
        *(float *)&v41 = (float)(*(float *)&v39 * *v16) + *(float *)&v31;
        v13 = v41;
        xyz->v[1] = *(float *)&v41;
        v42 = v39;
        *(float *)&v42 = (float)(*(float *)&v39 * v16[1]) + *(float *)&v33;
        v15 = v42;
        xyz->v[2] = *(float *)&v42;
      }
      v43 = *((unsigned int *)v16 + 3);
      v44 = v43;
      *(float *)&v44 = (float)((float)((float)(*(float *)&v43 * *(float *)&v14) + (float)(*(float *)&v13 * v16[4])) + (float)(*(float *)&v15 * v16[5])) - v16[6];
      if ( *(float *)&v44 <= snapEpsilon && *(float *)&v44 >= COERCE_FLOAT(LODWORD(snapEpsilon) ^ _xmm) )
      {
        v45 = v44 ^ (unsigned int)_xmm;
        v46 = *((unsigned int *)v16 + 3);
        *(float *)&v46 = (float)(*(float *)&v43 * *(float *)&v45) + xyz->v[0];
        v14 = v46;
        xyz->v[0] = *(float *)&v46;
        v47 = v45;
        *(float *)&v47 = (float)(*(float *)&v45 * v16[4]) + xyz->v[1];
        v13 = v47;
        xyz->v[1] = *(float *)&v47;
        v48 = v45;
        *(float *)&v48 = (float)(*(float *)&v45 * v16[5]) + xyz->v[2];
        v15 = v48;
        xyz->v[2] = *(float *)&v48;
      }
      v16 += 16;
      --v17;
    }
    while ( v17 );
  }
  if ( v18 < v11 )
  {
    v49 = LODWORD(xyz->v[1]);
    v50 = LODWORD(xyz->v[2]);
    v51 = &planes[v18].v[1];
    v52 = v11 - v18;
    do
    {
      v53 = *(v51 - 1);
      v54 = (float)((float)((float)(xyz->v[0] * v53) + (float)(*(float *)&v49 * *v51)) + (float)(*(float *)&v50 * v51[1])) - v51[2];
      if ( v54 <= snapEpsilon && v54 >= COERCE_FLOAT(LODWORD(snapEpsilon) ^ _xmm) )
      {
        LODWORD(v55) = LODWORD(v54) ^ _xmm;
        xyz->v[0] = (float)(v53 * COERCE_FLOAT(LODWORD(v54) ^ _xmm)) + xyz->v[0];
        v56 = COERCE_FLOAT(LODWORD(v54) ^ _xmm) * *v51;
        v57 = v49;
        *(float *)&v57 = *(float *)&v49 + v56;
        v49 = v57;
        xyz->v[1] = *(float *)&v57;
        v58 = v50;
        *(float *)&v58 = *(float *)&v50 + (float)(v55 * v51[1]);
        v50 = v58;
        xyz->v[2] = *(float *)&v58;
      }
      v51 += 4;
      --v52;
    }
    while ( v52 );
  }
  v59 = 0;
  v60 = (char *)&v96 - (char *)xyz;
  v61 = 1;
  v62 = xyz;
  _XMM9 = 0i64;
  do
  {
    if ( !v61 )
    {
      LODWORD(v95) = 3;
      LODWORD(v94) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v94, v95) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm9, xmm2, 1 }
    v65 = (float)(int)*(float *)&_XMM0 * snapGrid;
    if ( v59 >= 3 )
    {
      LODWORD(v95) = 3;
      LODWORD(v94) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v94, v95) )
        __debugbreak();
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(int)*(float *)&_XMM0 * snapGrid) - v62->v[0]) & _xmm) >= snapEpsilon )
    {
      if ( v59 >= 3 )
      {
        LODWORD(v95) = 3;
        LODWORD(v94) = v59;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v94, v95) )
          __debugbreak();
      }
      v65 = v62->v[0];
    }
    if ( v59 >= 3 )
    {
      LODWORD(v95) = 3;
      LODWORD(v94) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v94, v95) )
        __debugbreak();
    }
    *(float *)((char *)v62->v + v60) = v65;
    v62 = (vec3_t *)((char *)v62 + 4);
    v61 = ++v59 < 3;
  }
  while ( (int)v59 < 3 );
  v66 = v98;
  v67 = v97;
  if ( v96 != xyz->v[0] || v97 != xyz->v[1] || v98 != xyz->v[2] )
  {
    LODWORD(_XMM4) = 0;
    if ( v11 >= 4 )
    {
      v69 = &planes[1].v[2];
      v70 = ((unsigned __int64)(v11 - 4) >> 2) + 1;
      v8 = 4 * v70;
      do
      {
        v71 = LODWORD(v97);
        *(float *)&v71 = v97 * *(v69 - 5);
        v72 = v96 * *(v69 - 6);
        v69 += 16;
        *(float *)&v71 = (float)((float)(*(float *)&v71 + v72) + (float)(v98 * *(v69 - 20))) - *(v69 - 19);
        v73 = v71;
        v74 = LODWORD(v97);
        *(float *)&v74 = (float)((float)((float)(v97 * *(v69 - 17)) + (float)(v96 * *(v69 - 18))) + (float)(v98 * *(v69 - 16))) - *(v69 - 15);
        v75 = v74;
        v76 = LODWORD(v97);
        _XMM3 = v73 & (unsigned int)_xmm;
        __asm { vmaxss  xmm4, xmm3, xmm4 }
        _XMM0 = v75 & (unsigned int)_xmm;
        __asm
        {
          vmaxss  xmm5, xmm3, xmm6
          vmaxss  xmm4, xmm0, xmm4
          vmaxss  xmm5, xmm0, xmm5
        }
        *(float *)&v76 = (float)((float)((float)(v97 * *(v69 - 13)) + (float)(v96 * *(v69 - 14))) + (float)(v98 * *(v69 - 12))) - *(v69 - 11);
        v83 = v76;
        v84 = LODWORD(v97);
        _XMM3 = v83 & (unsigned int)_xmm;
        __asm
        {
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm5, xmm3, xmm5
        }
        *(float *)&v84 = (float)((float)((float)(v97 * *(v69 - 9)) + (float)(v96 * *(v69 - 10))) + (float)(v98 * *(v69 - 8))) - *(v69 - 7);
        _XMM3 = v84 & (unsigned int)_xmm;
        __asm
        {
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm6, xmm3, xmm5
        }
        --v70;
      }
      while ( v70 );
    }
    if ( v8 < v11 )
    {
      v89 = v11 - v8;
      v90 = &planes[v8].v[2];
      do
      {
        v91 = LODWORD(v97);
        *(float *)&v91 = v97 * *(v90 - 1);
        v92 = v96 * *(v90 - 2);
        v90 += 4;
        *(float *)&v91 = (float)((float)(*(float *)&v91 + v92) + (float)(v98 * *(v90 - 4))) - *(v90 - 3);
        _XMM3 = v91 & (unsigned int)_xmm;
        __asm
        {
          vmaxss  xmm4, xmm3, xmm4
          vmaxss  xmm6, xmm3, xmm6
        }
        --v89;
      }
      while ( v89 );
    }
    if ( *(float *)&_XMM4 < *(float *)&_XMM6 )
    {
      xyz->v[0] = v96;
      xyz->v[1] = v67;
      xyz->v[2] = v66;
    }
  }
}

/*
==============
SnapPointToIntersectingPlanes
==============
*/
void SnapPointToIntersectingPlanes(const vec4_t (*planes)[3], vec3_t *xyz, float snapGrid, float snapEpsilon)
{
  unsigned int v4; 
  signed __int64 v5; 
  bool v6; 
  vec3_t *v9; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v30; 
  __int128 v31; 
  __int128 v35; 
  __int64 v39; 
  __int64 v40; 
  float v41; 
  float v42; 
  float v43; 

  v4 = 0;
  v5 = (char *)&v41 - (char *)xyz;
  v6 = 1;
  v9 = xyz;
  _XMM11 = 0i64;
  do
  {
    if ( !v6 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm11, xmm2, 1 }
    v12 = (float)(int)*(float *)&_XMM0 * snapGrid;
    if ( v4 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(int)*(float *)&_XMM0 * snapGrid) - v9->v[0]) & _xmm) >= snapEpsilon )
    {
      if ( v4 >= 3 )
      {
        LODWORD(v40) = 3;
        LODWORD(v39) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      v12 = v9->v[0];
    }
    if ( v4 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    *(float *)((char *)v9->v + v5) = v12;
    v9 = (vec3_t *)((char *)v9 + 4);
    v6 = ++v4 < 3;
  }
  while ( (int)v4 < 3 );
  v13 = xyz->v[0];
  v14 = v43;
  v15 = v42;
  if ( v41 != xyz->v[0] || v42 != xyz->v[1] || v43 != xyz->v[2] )
  {
    v16 = xyz->v[1];
    v17 = xyz->v[2];
    v18 = LODWORD(v41);
    *(float *)&v18 = (float)((float)((float)(v41 * (*planes)[0].v[0]) + (float)(v42 * (*planes)[0].v[1])) + (float)(v43 * (*planes)[0].v[2])) - (*planes)[0].v[3];
    v19 = v18;
    v20 = LODWORD(xyz->v[0]);
    _XMM3 = v19 & (unsigned int)_xmm;
    __asm { vmaxss  xmm8, xmm3, xmm0 }
    *(float *)&v20 = (float)((float)((float)(v13 * (*planes)[0].v[0]) + (float)(v16 * (*planes)[0].v[1])) + (float)(v17 * (*planes)[0].v[2])) - (*planes)[0].v[3];
    _XMM1 = v20 & (unsigned int)_xmm;
    __asm { vmaxss  xmm7, xmm1, [rsp+118h+var_D8] }
    v25 = LODWORD(v42);
    *(float *)&v25 = (float)((float)((float)(v42 * (*planes)[1].v[1]) + (float)(v41 * (*planes)[1].v[0])) + (float)(v43 * (*planes)[1].v[2])) - (*planes)[1].v[3];
    v26 = v25;
    v27 = LODWORD(v16);
    _XMM0 = v26 & (unsigned int)_xmm;
    __asm { vmaxss  xmm8, xmm0, xmm8 }
    *(float *)&v27 = (float)((float)((float)(v16 * (*planes)[1].v[1]) + (float)(v13 * (*planes)[1].v[0])) + (float)(v17 * (*planes)[1].v[2])) - (*planes)[1].v[3];
    v30 = v27;
    v31 = LODWORD(v42);
    _XMM0 = v30 & (unsigned int)_xmm;
    __asm { vmaxss  xmm9, xmm0, xmm7 }
    *(float *)&v31 = (float)((float)((float)(v42 * (*planes)[2].v[1]) + (float)(v41 * (*planes)[2].v[0])) + (float)(v43 * (*planes)[2].v[2])) - (*planes)[2].v[3];
    _XMM0 = v31 & _xmm;
    v35 = LODWORD(v16);
    __asm { vmaxss  xmm3, xmm0, xmm8 }
    *(float *)&v35 = (float)((float)((float)(v16 * (*planes)[2].v[1]) + (float)(v13 * (*planes)[2].v[0])) + (float)(v17 * (*planes)[2].v[2])) - (*planes)[2].v[3];
    _XMM0 = v35 & _xmm;
    __asm { vmaxss  xmm1, xmm0, xmm9 }
    if ( *(float *)&_XMM3 < *(float *)&_XMM1 )
    {
      xyz->v[0] = v41;
      xyz->v[1] = v15;
      xyz->v[2] = v14;
    }
  }
}

/*
==============
PlaneFromPoint
==============
*/
vec4_t *PlaneFromPoint(vec4_t *result, const vec3_t *pt, const vec3_t *dir)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  v3 = dir->v[1];
  v4 = v3 * pt->v[1];
  v5 = dir->v[0];
  v6 = dir->v[2];
  result->v[1] = v3;
  v7 = v5 * pt->v[0];
  result->v[0] = v5;
  result->v[3] = (float)(v4 + v7) + (float)(v6 * pt->v[2]);
  result->v[2] = v6;
  return result;
}

/*
==============
IntersectRayAABB
==============
*/
char IntersectRayAABB(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *bbMin, const vec3_t *bbMax, float *t)
{
  int v5; 
  float v6; 
  int v7; 
  float v8; 
  float v9; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  __int64 v21; 
  bool v22; 
  int v23; 
  int v24; 
  __int64 v34; 
  __int64 v35; 
  int v36[2]; 
  float v37; 
  int v38[2]; 
  float v39; 
  int v40[4]; 

  *(float *)&v5 = 1.0 / rayDir->v[2];
  v6 = 1.0 / rayDir->v[0];
  *(float *)&v7 = 1.0 / rayDir->v[1];
  v8 = bbMin->v[1] - rayOrigin->v[1];
  v9 = bbMin->v[2];
  *(float *)v36 = (float)(bbMin->v[0] - rayOrigin->v[0]) * v6;
  *(float *)&v10 = v8 * *(float *)&v7;
  v11 = v9 - rayOrigin->v[2];
  v12 = bbMax->v[0];
  v36[1] = v10;
  v13 = v11 * *(float *)&v5;
  v14 = v12 - rayOrigin->v[0];
  v15 = bbMax->v[1];
  v37 = v13;
  v16 = v14 * v6;
  v17 = v15 - rayOrigin->v[1];
  v18 = bbMax->v[2];
  *(float *)v38 = v16;
  v19 = v18 - rayOrigin->v[2];
  v20 = 0;
  *(float *)&v38[1] = v17 * *(float *)&v7;
  v40[2] = v5;
  v39 = v19 * *(float *)&v5;
  *(float *)v40 = v6;
  v40[1] = v7;
  v21 = 0i64;
  v22 = 1;
  do
  {
    if ( !v22 )
    {
      LODWORD(v35) = 3;
      LODWORD(v34) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( *(float *)&v40[v21] < 0.0 )
    {
      if ( v20 >= 3 )
      {
        LODWORD(v35) = 3;
        LODWORD(v34) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v23 = v36[v21];
      if ( v20 >= 3 )
      {
        LODWORD(v35) = 3;
        LODWORD(v34) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v24 = v38[v21];
      if ( v20 >= 3 )
      {
        LODWORD(v35) = 3;
        LODWORD(v34) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v36[v21] = v24;
      if ( v20 >= 3 )
      {
        LODWORD(v35) = 3;
        LODWORD(v34) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v38[v21] = v23;
    }
    ++v20;
    ++v21;
    v22 = v20 < 3;
  }
  while ( (int)v20 < 3 );
  _XMM0 = LODWORD(v37);
  __asm
  {
    vmaxss  xmm1, xmm0, [rsp+0B8h+var_74]
    vmaxss  xmm3, xmm1, [rsp+0B8h+var_78]
  }
  _XMM2 = LODWORD(v39);
  __asm
  {
    vminss  xmm0, xmm2, [rsp+0B8h+var_64]
    vminss  xmm1, xmm0, [rsp+0B8h+var_68]
  }
  if ( *(float *)&_XMM3 > *(float *)&_XMM1 || *(float *)&_XMM1 < 0.0 )
    return 0;
  __asm
  {
    vcmpltss xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  *t = *(float *)&_XMM0;
  return 1;
}

/*
==============
IntersectRayBox
==============
*/
bool IntersectRayBox(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *boxOrigin, const vec3_t *boxHalfExt, const tmat33_t<vec3_t> *boxAxis, float *t)
{
  float v6; 
  float v8; 
  float v9; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t out; 

  v6 = boxOrigin->v[1];
  v1.v[0] = boxOrigin->v[0] - rayOrigin->v[0];
  v8 = v6 - rayOrigin->v[1];
  v9 = boxOrigin->v[2];
  v1.v[1] = v8;
  v1.v[2] = v9 - rayOrigin->v[2];
  Vec3Cross(rayDir, &v1, &cross);
  if ( (float)((float)((float)(cross.v[0] * cross.v[0]) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2])) > (float)((float)((float)(boxHalfExt->v[0] * boxHalfExt->v[0]) + (float)(boxHalfExt->v[1] * boxHalfExt->v[1])) + (float)(boxHalfExt->v[2] * boxHalfExt->v[2])) )
    return 0;
  v14 = rayOrigin->v[0] - boxOrigin->v[0];
  v15 = rayOrigin->v[1] - boxOrigin->v[1];
  v16 = rayOrigin->v[2] - boxOrigin->v[2];
  v17 = v15 * boxAxis->m[1].v[1];
  v1.v[0] = (float)((float)(v15 * boxAxis->m[0].v[1]) + (float)(v14 * boxAxis->m[0].v[0])) + (float)(v16 * boxAxis->m[0].v[2]);
  v18 = v15 * boxAxis->m[2].v[1];
  v1.v[1] = (float)(v17 + (float)(v14 * boxAxis->m[1].v[0])) + (float)(v16 * boxAxis->m[1].v[2]);
  v1.v[2] = (float)(v18 + (float)(v14 * boxAxis->m[2].v[0])) + (float)(v16 * boxAxis->m[2].v[2]);
  Vec3Rotate(rayDir, boxAxis, &out);
  LODWORD(v19) = LODWORD(boxHalfExt->v[1]) ^ _xmm;
  LODWORD(cross.v[0]) = LODWORD(boxHalfExt->v[0]) ^ _xmm;
  LODWORD(cross.v[2]) = LODWORD(boxHalfExt->v[2]) ^ _xmm;
  cross.v[1] = v19;
  return IntersectRayAABB(&v1, &out, &cross, boxHalfExt, t);
}

/*
==============
IntersectRayPlane
==============
*/
bool IntersectRayPlane(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec4_t *plane, float *t)
{
  float v4; 
  float v5; 
  float v6; 
  bool result; 
  float v8; 

  v4 = plane->v[1];
  v5 = plane->v[2];
  v6 = (float)((float)(v4 * rayDir->v[1]) + (float)(plane->v[0] * rayDir->v[0])) + (float)(v5 * rayDir->v[2]);
  if ( v6 == 0.0 )
    return 0;
  v8 = (float)(plane->v[3] - (float)((float)((float)(v4 * rayOrigin->v[1]) + (float)(plane->v[0] * rayOrigin->v[0])) + (float)(v5 * rayOrigin->v[2]))) / v6;
  result = v8 > 0.0;
  *t = v8;
  return result;
}

/*
==============
IntersectRayTri
==============
*/
char IntersectRayTri(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv, const float eps)
{
  float v10; 
  float v11; 
  float v12; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  vec3_t v1; 
  vec3_t cross; 

  v10 = vert2->v[0] - vert1->v[0];
  v11 = vert2->v[1] - vert1->v[1];
  v12 = vert2->v[2] - vert1->v[2];
  v1.v[0] = vert3->v[0] - vert1->v[0];
  v1.v[1] = vert3->v[1] - vert1->v[1];
  v15 = vert3->v[2] - vert1->v[2];
  v1.v[2] = v15;
  Vec3Cross(dir, &v1, &cross);
  v17 = (float)((float)(cross.v[1] * v11) + (float)(cross.v[0] * v10)) + (float)(cross.v[2] * v12);
  v16 = v17;
  if ( v17 >= eps )
  {
    v18 = FLOAT_1_0;
  }
  else
  {
    if ( v17 > COERCE_FLOAT(LODWORD(eps) ^ _xmm) )
      return 0;
    v18 = FLOAT_N1_0;
    LODWORD(v16) = LODWORD(v17) ^ _xmm;
  }
  v19 = orig->v[0] - vert1->v[0];
  v20 = orig->v[1] - vert1->v[1];
  v21 = orig->v[2] - vert1->v[2];
  v23 = (float)((float)((float)(cross.v[1] * v20) + (float)(cross.v[0] * v19)) + (float)(cross.v[2] * v21)) * v18;
  v22 = v23;
  if ( v23 < 0.0 )
    return 0;
  if ( v23 > v16 )
    return 0;
  v24 = (float)(v20 * v12) - (float)(v11 * v21);
  v25 = (float)(v10 * v21) - (float)(v12 * v19);
  v26 = (float)(v11 * v19) - (float)(v20 * v10);
  v27 = (float)((float)((float)(v25 * dir->v[1]) + (float)(v24 * dir->v[0])) + (float)(v26 * dir->v[2])) * v18;
  if ( v27 < 0.0 || (float)(v27 + v23) > v16 )
    return 0;
  v28 = 1.0 / v16;
  *pt = (float)((float)((float)((float)(v25 * v1.v[1]) + (float)(v24 * v1.v[0])) + (float)(v26 * v15)) * v18) * (float)(1.0 / v16);
  if ( pu )
    *pu = v28 * v22;
  if ( pv )
    *pv = v28 * v27;
  return 1;
}

/*
==============
IntersectRaySphere
==============
*/
char IntersectRaySphere(const vec3_t *rayOrigin, const vec3_t *rayDir, const vec3_t *center, const float radius, float *t)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  __int128 v17; 

  v5 = rayDir->v[1];
  v6 = rayDir->v[2];
  v7 = rayOrigin->v[1] - center->v[1];
  v8 = rayOrigin->v[0] - center->v[0];
  v9 = rayOrigin->v[2] - center->v[2];
  v10 = LODWORD(v5);
  v11 = (float)((float)(rayDir->v[0] * rayDir->v[0]) + (float)(v5 * v5)) + (float)(v6 * v6);
  v12 = (float)((float)(v5 * v7) + (float)(rayDir->v[0] * v8)) + (float)(v6 * v9);
  *(float *)&v10 = v12 * 2.0;
  v13 = v10;
  v14 = (float)((float)(v12 * v12) * 4.0) - (float)((float)((float)((float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)) - (float)(radius * radius)) * v11) * 4.0);
  if ( v14 < 0.0 )
    return 0;
  if ( v11 <= 0.0 )
    return 0;
  v15 = fsqrt(v14);
  v17 = v13 ^ _xmm;
  *(float *)&v17 = (float)(COERCE_FLOAT(v13 ^ _xmm) - v15) * (float)(0.5 / v11);
  _XMM1 = v17;
  __asm { vminss  xmm0, xmm1, xmm4 }
  *t = *(float *)&_XMM0;
  if ( (float)((float)(v15 - *(float *)&v13) * (float)(0.5 / v11)) < 0.0 && *(float *)&v17 < 0.0 )
    return 0;
  __asm { vmaxss  xmm0, xmm0, xmm5 }
  *t = *(float *)&_XMM0;
  return 1;
}

/*
==============
IntersectRaySphereApprox
==============
*/
char IntersectRaySphereApprox(vec3_t *origin, vec3_t *direction, vec3_t *sphereCenter, float radius, float *t, vec3_t *outHitPoint)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v21; 
  float v22; 

  v6 = origin->v[0];
  v7 = origin->v[0] - sphereCenter->v[0];
  v8 = origin->v[1];
  v9 = v8 - sphereCenter->v[1];
  v10 = origin->v[2];
  v11 = v10 - sphereCenter->v[2];
  v12 = direction->v[1];
  v13 = direction->v[0];
  v14 = direction->v[2];
  v16 = (float)((float)(v7 * direction->v[0]) + (float)(v9 * v12)) + (float)(v11 * v14);
  v15 = v16;
  v17 = (float)((float)((float)(v9 * v9) + (float)(v7 * v7)) + (float)(v11 * v11)) - (float)(radius * radius);
  v18 = 0.0;
  if ( v17 > 0.0 && v16 > 0.0 )
    return 0;
  v19 = (float)(v16 * v16) - v17;
  if ( v19 < 0.0 )
    return 0;
  v21 = fsqrt(v19);
  v22 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) - v21;
  *t = v22;
  if ( v22 >= 0.0 )
    v18 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) - v21;
  else
    *t = 0.0;
  outHitPoint->v[0] = (float)(v13 * v18) + v6;
  outHitPoint->v[2] = (float)(v14 * v18) + v10;
  outHitPoint->v[1] = (float)(v12 * v18) + v8;
  return 1;
}

/*
==============
AabbSphereIntersect
==============
*/
bool AabbSphereIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *sphereCenter, float sphereRadius)
{
  float v7; 
  float v12; 

  _XMM2 = LODWORD(sphereCenter->v[0]);
  __asm
  {
    vminss  xmm0, xmm2, dword ptr [rcx]
    vmaxss  xmm1, xmm0, dword ptr [rdx]
  }
  v7 = *(float *)&_XMM2 - *(float *)&_XMM1;
  _XMM2 = LODWORD(aabbMax->v[1]);
  __asm
  {
    vminss  xmm0, xmm2, xmm4
    vmaxss  xmm1, xmm0, dword ptr [rdx+4]
  }
  _XMM2 = LODWORD(aabbMax->v[2]);
  v12 = sphereCenter->v[1] - *(float *)&_XMM1;
  __asm
  {
    vminss  xmm0, xmm2, xmm7
    vmaxss  xmm1, xmm0, dword ptr [rdx+8]
  }
  return (float)(sphereRadius * sphereRadius) >= (float)((float)((float)(v12 * v12) + (float)(v7 * v7)) + (float)((float)(sphereCenter->v[2] - *(float *)&_XMM1) * (float)(sphereCenter->v[2] - *(float *)&_XMM1)));
}

/*
==============
AabbCylinderIntersect
==============
*/
bool AabbCylinderIntersect(const vec3_t *aabbMax, const vec3_t *aabbMin, const vec3_t *cylPoint, const vec3_t *cylDirection, const float cylRadius)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  float *v14; 
  signed __int64 v15; 
  float *v16; 
  __int64 v18; 
  bool v19; 
  float *v20; 
  float v21; 
  float v22; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  int v38[4]; 
  int v39[4]; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 

  v5 = aabbMin->v[1];
  v6 = aabbMin->v[2];
  v7 = (float)(aabbMin->v[0] + aabbMax->v[0]) * 0.5;
  v8 = (float)(v5 + aabbMax->v[1]) * 0.5;
  v9 = (float)(v6 + aabbMax->v[2]) * 0.5;
  v10 = (float)(v7 - aabbMin->v[0]) + cylRadius;
  v11 = (float)(v8 - v5) + cylRadius;
  v12 = (float)(v9 - v6) + cylRadius;
  *(float *)&v39[1] = v8 - v11;
  *(float *)v39 = v7 - v10;
  v13 = 0;
  v14 = &v40;
  *(float *)v38 = v10 + v7;
  *(float *)&v39[2] = v9 - v12;
  v15 = (char *)cylDirection - (char *)v38;
  v16 = &v41;
  *(float *)&v38[2] = v12 + v9;
  *(float *)&v38[1] = v11 + v8;
  v18 = 0i64;
  v19 = 1;
  do
  {
    if ( !v19 )
    {
      LODWORD(v33) = 3;
      LODWORD(v28) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
        __debugbreak();
    }
    v20 = (float *)&v38[v18];
    v21 = 1.0 / *(float *)((char *)&v38[v18] + v15);
    if ( v21 < 0.0 )
    {
      if ( v13 >= 3 )
      {
        LODWORD(v33) = 3;
        LODWORD(v28) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
          __debugbreak();
        LODWORD(v36) = 3;
        LODWORD(v31) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v36) )
          __debugbreak();
      }
      *v14 = (float)(*v20 - cylPoint->v[v18]) * v21;
      if ( v13 >= 3 )
      {
        LODWORD(v33) = 3;
        LODWORD(v28) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
          __debugbreak();
        LODWORD(v37) = 3;
        LODWORD(v32) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v37) )
          __debugbreak();
      }
      v22 = *(float *)&v39[v18];
    }
    else
    {
      if ( v13 >= 3 )
      {
        LODWORD(v33) = 3;
        LODWORD(v28) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
          __debugbreak();
        LODWORD(v34) = 3;
        LODWORD(v29) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v34) )
          __debugbreak();
      }
      *v14 = (float)(*(float *)&v39[v18] - cylPoint->v[v18]) * v21;
      if ( v13 >= 3 )
      {
        LODWORD(v33) = 3;
        LODWORD(v28) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
          __debugbreak();
        LODWORD(v35) = 3;
        LODWORD(v30) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v35) )
          __debugbreak();
      }
      v22 = *v20;
    }
    *v16 = (float)(v22 - cylPoint->v[v18]) * v21;
    v16 += 2;
    ++v13;
    v14 += 2;
    ++v18;
    v19 = v13 < 3;
  }
  while ( (int)v13 < 3 );
  if ( v40 > v43 )
    return 0;
  _XMM2 = LODWORD(v42);
  _XMM3 = LODWORD(v41);
  if ( v42 > v41 )
    return 0;
  __asm
  {
    vmaxss  xmm0, xmm2, xmm0
    vminss  xmm4, xmm3, xmm1
  }
  return *(float *)&_XMM0 <= v45 && v44 <= *(float *)&_XMM4;
}

/*
==============
ObbSphereIntersect
==============
*/
bool ObbSphereIntersect(const tmat33_t<vec3_t> *wldBoxAxis, const vec3_t *wldBoxOrigin, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, float wldSphereRadius)
{
  float v5; 
  float v6; 
  float v7; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v23; 
  vec3_t in1; 
  tmat33_t<vec3_t> in; 
  float v34; 
  float v35; 
  float v36; 
  tmat33_t<vec3_t> out; 
  vec3_t v38; 

  v5 = wldBoxOrigin->v[0];
  in = *wldBoxAxis;
  v6 = wldBoxOrigin->v[1];
  v34 = v5;
  v7 = wldBoxOrigin->v[2];
  v35 = v6;
  v36 = v7;
  MatrixTranspose(&in, &out);
  LODWORD(in1.v[0]) = LODWORD(v34) ^ _xmm;
  LODWORD(in1.v[2]) = LODWORD(v36) ^ _xmm;
  LODWORD(in1.v[1]) = LODWORD(v35) ^ _xmm;
  MatrixTransformVector(&in1, &out, &v38);
  if ( wldSphereCenter == &in1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  v9 = wldSphereCenter->v[1];
  v10 = LODWORD(wldSphereCenter->v[0]);
  v11 = v10;
  *(float *)&v11 = (float)(*(float *)&v10 * out.m[0].v[0]) + (float)(v9 * out.m[1].v[0]);
  v12 = v11;
  v14 = v10;
  *(float *)&v14 = *(float *)&v10 * out.m[0].v[1];
  v13 = v14;
  v15 = v12;
  *(float *)&v15 = (float)(*(float *)&v12 + (float)(out.m[2].v[0] * wldSphereCenter->v[2])) + v38.v[0];
  _XMM9 = v15;
  v18 = v13;
  *(float *)&v18 = *(float *)&v13 + (float)(v9 * out.m[1].v[1]);
  v17 = v18;
  v20 = v10;
  *(float *)&v20 = *(float *)&v10 * out.m[0].v[2];
  v19 = v20;
  v21 = v17;
  *(float *)&v21 = (float)(*(float *)&v17 + (float)(out.m[2].v[1] * wldSphereCenter->v[2])) + v38.v[1];
  _XMM5 = v21;
  v23 = v19;
  *(float *)&v23 = (float)((float)(*(float *)&v19 + (float)(v9 * out.m[1].v[2])) + (float)(out.m[2].v[2] * wldSphereCenter->v[2])) + v38.v[2];
  _XMM7 = v23;
  __asm
  {
    vminss  xmm1, xmm9, xmm0
    vmaxss  xmm1, xmm1, xmm0
    vminss  xmm2, xmm5, xmm3
  }
  *(float *)&v10 = *(float *)&_XMM9 - *(float *)&_XMM1;
  __asm
  {
    vmaxss  xmm1, xmm2, xmm0
    vminss  xmm3, xmm7, xmm4
  }
  *(float *)&_XMM5 = *(float *)&_XMM5 - *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm3, xmm0 }
  return (float)(wldSphereRadius * wldSphereRadius) >= (float)((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(*(float *)&_XMM5 * *(float *)&_XMM5)) + (float)((float)(*(float *)&_XMM7 - *(float *)&_XMM1) * (float)(*(float *)&_XMM7 - *(float *)&_XMM1)));
}

/*
==============
ObbSphereIntersect
==============
*/
bool ObbSphereIntersect(const tmat43_t<vec3_t> *wldToObb, const vec3_t *obbBoxHalfExt, const vec3_t *wldSphereCenter, float wldSphereRadius)
{
  __int128 v7; 
  __int128 v8; 
  float v9; 
  __int128 v11; 
  __int128 v13; 
  char v22; 

  if ( wldSphereCenter == (const vec3_t *)&v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  v7 = LODWORD(wldSphereCenter->v[1]);
  v8 = v7;
  v9 = wldSphereCenter->v[2];
  *(float *)&v8 = (float)((float)((float)(*(float *)&v7 * wldToObb->m[1].v[0]) + (float)(wldSphereCenter->v[0] * wldToObb->m[0].v[0])) + (float)(v9 * wldToObb->m[2].v[0])) + wldToObb->m[3].v[0];
  _XMM7 = v8;
  v11 = LODWORD(wldSphereCenter->v[0]);
  *(float *)&v11 = (float)((float)((float)(wldSphereCenter->v[0] * wldToObb->m[0].v[1]) + (float)(*(float *)&v7 * wldToObb->m[1].v[1])) + (float)(v9 * wldToObb->m[2].v[1])) + wldToObb->m[3].v[1];
  _XMM5 = v11;
  v13 = LODWORD(wldSphereCenter->v[0]);
  *(float *)&v13 = (float)((float)((float)(wldSphereCenter->v[0] * wldToObb->m[0].v[2]) + (float)(*(float *)&v7 * wldToObb->m[1].v[2])) + (float)(v9 * wldToObb->m[2].v[2])) + wldToObb->m[3].v[2];
  _XMM9 = v13;
  __asm
  {
    vminss  xmm1, xmm7, xmm3
    vmaxss  xmm1, xmm1, xmm0
    vminss  xmm2, xmm5, xmm4
  }
  *(float *)&_XMM7 = *(float *)&_XMM7 - *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm2, xmm0 }
  *(float *)&_XMM5 = *(float *)&_XMM5 - *(float *)&_XMM1;
  __asm
  {
    vminss  xmm3, xmm9, xmm8
    vmaxss  xmm1, xmm3, xmm0
  }
  return (float)(wldSphereRadius * wldSphereRadius) >= (float)((float)((float)(*(float *)&_XMM5 * *(float *)&_XMM5) + (float)(*(float *)&_XMM7 * *(float *)&_XMM7)) + (float)((float)(*(float *)&v13 - *(float *)&_XMM1) * (float)(*(float *)&v13 - *(float *)&_XMM1)));
}

/*
==============
SphereSphereIntersect
==============
*/
bool SphereSphereIntersect(const vec3_t *center0, float radius0, const vec3_t *center1, float radius1)
{
  float v4; 
  float v5; 

  v4 = center1->v[1] - center0->v[1];
  v5 = center1->v[2] - center0->v[2];
  return (float)((float)(radius0 + radius1) * (float)(radius0 + radius1)) >= (float)((float)((float)(v4 * v4) + (float)((float)(center1->v[0] - center0->v[0]) * (float)(center1->v[0] - center0->v[0]))) + (float)(v5 * v5));
}

/*
==============
RayObbIntersect
==============
*/
float RayObbIntersect(const vec3_t *rayStart, const vec3_t *rayDir, const vec3_t *obbPos, const tmat33_t<vec3_t> *obbAxis, const vec3_t *obbHalfLength)
{
  float *v6; 
  int v7; 
  bool v9; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  bool v25; 
  __int64 v29; 
  __int64 v30; 

  v6 = &obbAxis->m[0].v[2];
  v7 = 0;
  v9 = 1;
  _XMM9 = LODWORD(FLOAT_3_4028235e38);
  v12 = LODWORD(obbPos->v[0]);
  *(float *)&v12 = obbPos->v[0] - rayStart->v[0];
  v11 = v12;
  v13 = obbPos->v[1] - rayStart->v[1];
  v14 = obbPos->v[2] - rayStart->v[2];
  _XMM8 = 0i64;
  while ( 1 )
  {
    if ( !v9 )
    {
      LODWORD(v30) = 3;
      LODWORD(v29) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v16 = *(v6 - 2);
    v17 = *(v6 - 1);
    v18 = obbHalfLength->v[0];
    v19 = v11;
    *(float *)&v19 = (float)((float)(*(float *)&v11 * v16) + (float)(v13 * v17)) + (float)(v14 * *v6);
    v20 = (float)((float)(v17 * rayDir->v[1]) + (float)(v16 * rayDir->v[0])) + (float)(*v6 * rayDir->v[2]);
    if ( COERCE_FLOAT(LODWORD(v20) & _xmm) <= 0.000099999997 )
    {
      if ( (float)(COERCE_FLOAT(v19 ^ _xmm) - v18) > 0.0 )
        break;
      v25 = (float)(v18 - *(float *)&v19) < 0.0;
    }
    else
    {
      *(float *)&v19 = (float)(*(float *)&v19 - v18) * (float)(1.0 / v20);
      _XMM3 = v19;
      __asm
      {
        vminss  xmm0, xmm3, xmm4
        vmaxss  xmm1, xmm3, xmm4
        vmaxss  xmm10, xmm0, xmm10
        vminss  xmm9, xmm1, xmm9
      }
      if ( *(float *)&_XMM10 > *(float *)&_XMM9 )
        break;
      v25 = *(float *)&_XMM9 < 0.0;
    }
    if ( v25 )
      break;
    ++v7;
    v6 += 3;
    obbHalfLength = (const vec3_t *)((char *)obbHalfLength + 4);
    v9 = (unsigned int)v7 < 3;
    if ( v7 >= 3 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm10
        vblendvps xmm0, xmm9, xmm10, xmm0
      }
      return *(float *)&_XMM0;
    }
  }
  *(float *)&_XMM0 = FLOAT_N1_0;
  return *(float *)&_XMM0;
}

/*
==============
PointInObb
==============
*/
bool PointInObb(const vec3_t *v, const vec3_t *center, const vec3_t *halfSize, const tmat33_t<vec3_t> *axes)
{
  float v4; 
  float v5; 
  float v6; 

  v4 = v->v[0] - center->v[0];
  v5 = v->v[1] - center->v[1];
  v6 = v->v[2] - center->v[2];
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * axes->m[0].v[1]) + (float)(v4 * axes->m[0].v[0])) + (float)(v6 * axes->m[0].v[2])) & _xmm) <= halfSize->v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * axes->m[1].v[1]) + (float)(v4 * axes->m[1].v[0])) + (float)(v6 * axes->m[1].v[2])) & _xmm) <= halfSize->v[1] && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * axes->m[2].v[1]) + (float)(v4 * axes->m[2].v[0])) + (float)(v6 * axes->m[2].v[2])) & _xmm) <= halfSize->v[2];
}

/*
==============
PointInAABB
==============
*/

char __fastcall PointInAABB(const vec3_t *_mins, const vec3_t *_maxs, const vec3_t *_point, double eps)
{
  __m128 v13; 

  _mm_shuffle_ps((__m128)*(unsigned __int64 *)_point->v, (__m128)*(unsigned __int64 *)_point->v, 85);
  _XMM4 = 0i64;
  __asm
  {
    vinsertps xmm4, xmm4, xmm1, 0
    vinsertps xmm4, xmm4, xmm0, 10h
  }
  _mm_shuffle_ps((__m128)*(unsigned __int64 *)_maxs->v, (__m128)*(unsigned __int64 *)_maxs->v, 85);
  _XMM1 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm0, 10h
  }
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+58h+var_40], 20h
    vinsertps xmm2, xmm2, xmm5, 0
  }
  v13 = _mm_shuffle_ps(*(__m128 *)&eps, *(__m128 *)&eps, 0);
  _XMM0 = _mm128_sub_ps(_XMM1, v13);
  __asm
  {
    vinsertps xmm4, xmm4, [rsp+58h+var_50], 20h
    vcmpleps xmm3, xmm0, xmm4
  }
  _mm_shuffle_ps((__m128)*(unsigned __int64 *)_mins->v, (__m128)*(unsigned __int64 *)_mins->v, 85);
  __asm
  {
    vinsertps xmm2, xmm2, xmm0, 10h
    vinsertps xmm2, xmm2, [rsp+58h+var_30], 20h
  }
  _mm128_add_ps(_XMM2, v13);
  __asm { vcmpltps xmm1, xmm4, xmm0 }
  _XMM2 = _XMM3 | _XMM1;
  __asm { vtestps xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ }
  return _ZF;
}

/*
==============
PointToClosestAABBPoint
==============
*/
void PointToClosestAABBPoint(const vec3_t *mins, const vec3_t *maxs, const vec3_t *point, vec3_t *outPointToClosestVec)
{
  _XMM2 = LODWORD(point->v[0]);
  __asm
  {
    vminss  xmm0, xmm2, dword ptr [rdx]
    vmaxss  xmm1, xmm0, dword ptr [rcx]
  }
  _XMM3 = LODWORD(point->v[1]);
  *(float *)&_XMM2 = *(float *)&_XMM1 - *(float *)&_XMM2;
  _XMM8 = LODWORD(maxs->v[2]);
  __asm
  {
    vminss  xmm0, xmm3, xmm7
    vmaxss  xmm1, xmm0, xmm4
  }
  outPointToClosestVec->v[0] = *(float *)&_XMM2;
  *(float *)&_XMM2 = *(float *)&_XMM1 - point->v[1];
  __asm
  {
    vminss  xmm0, xmm8, xmm5
    vmaxss  xmm1, xmm0, xmm6
  }
  outPointToClosestVec->v[1] = *(float *)&_XMM2;
  outPointToClosestVec->v[2] = *(float *)&_XMM1 - point->v[2];
}

/*
==============
PointToLineDistSqUsingDir
==============
*/
float PointToLineDistSqUsingDir(const vec3_t *pt, const vec3_t *start, const vec3_t *dir)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(dir->v[0] * dir->v[0]) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1350, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( dir ) )", "%s", "Vec3IsNormalized( dir )") )
    __debugbreak();
  v6 = pt->v[0] - start->v[0];
  v7 = pt->v[1] - start->v[1];
  v8 = pt->v[2] - start->v[2];
  LODWORD(v9) = COERCE_UNSIGNED_INT((float)((float)(v7 * dir->v[1]) + (float)(v6 * dir->v[0])) + (float)(v8 * dir->v[2])) ^ _xmm;
  return (float)((float)((float)((float)(v9 * dir->v[1]) + v7) * (float)((float)(v9 * dir->v[1]) + v7)) + (float)((float)((float)(v9 * dir->v[0]) + v6) * (float)((float)(v9 * dir->v[0]) + v6))) + (float)((float)((float)(v9 * dir->v[2]) + v8) * (float)((float)(v9 * dir->v[2]) + v8));
}

/*
==============
PointOnLineClosestToPoint
==============
*/
float PointOnLineClosestToPoint(const vec3_t *pt, const vec3_t *start, const vec3_t *dir, vec3_t *result)
{
  float v8; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(dir->v[0] * dir->v[0]) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1362, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( dir ) )", "%s", "Vec3IsNormalized( dir )") )
    __debugbreak();
  v8 = (float)((float)((float)(pt->v[1] - start->v[1]) * dir->v[1]) + (float)((float)(pt->v[0] - start->v[0]) * dir->v[0])) + (float)((float)(pt->v[2] - start->v[2]) * dir->v[2]);
  result->v[0] = (float)(v8 * dir->v[0]) + start->v[0];
  result->v[1] = (float)(v8 * dir->v[1]) + start->v[1];
  result->v[2] = (float)(v8 * dir->v[2]) + start->v[2];
  return v8;
}

/*
==============
PointToLineDistSq
==============
*/
float PointToLineDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  v3 = start->v[0];
  v4 = start->v[1];
  v5 = start->v[2];
  v6 = end->v[0] - start->v[0];
  v7 = end->v[1] - v4;
  v8 = point->v[0];
  v9 = end->v[2] - v5;
  v10 = point->v[1];
  v11 = point->v[2];
  v12 = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9);
  if ( v12 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1386, ASSERT_TYPE_SANITY, "( segDot != 0.0f )", "%s", "segDot != 0.0f") )
    __debugbreak();
  v13 = (float)((float)((float)((float)(v4 - v10) * v7) + (float)((float)(v3 - v8) * v6)) + (float)((float)(v5 - v11) * v9)) / v12;
  return (float)((float)((float)((float)(v7 * v13) + (float)(v10 - v4)) * (float)((float)(v7 * v13) + (float)(v10 - v4))) + (float)((float)((float)(v6 * v13) + (float)(v8 - v3)) * (float)((float)(v6 * v13) + (float)(v8 - v3)))) + (float)((float)((float)(v9 * v13) + (float)(v11 - v5)) * (float)((float)(v9 * v13) + (float)(v11 - v5)));
}

/*
==============
PointToLineDistSq2D
==============
*/
float PointToLineDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 

  v3 = start->v[0];
  v4 = start->v[1];
  v5 = point->v[0];
  v6 = point->v[1];
  v7 = end->v[0] - start->v[0];
  v8 = end->v[1] - v4;
  v9 = (float)(v8 * v8) + (float)(v7 * v7);
  v10 = point->v[0] - start->v[0];
  if ( v9 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1407, ASSERT_TYPE_SANITY, "( segDot != 0.0f )", "%s", "segDot != 0.0f") )
    __debugbreak();
  v11 = (float)((float)((float)(v4 - v6) * v8) + (float)((float)(v3 - v5) * v7)) / v9;
  return (float)((float)((float)(v8 * v11) + (float)(v6 - v4)) * (float)((float)(v8 * v11) + (float)(v6 - v4))) + (float)((float)((float)(v7 * v11) + v10) * (float)((float)(v7 * v11) + v10));
}

/*
==============
PointToLineSegmentDistSq
==============
*/
float PointToLineSegmentDistSq(const vec3_t *point, const vec3_t *start, const vec3_t *end)
{
  float v4; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  v4 = point->v[0] - start->v[0];
  v6 = end->v[0] - start->v[0];
  v7 = end->v[1] - start->v[1];
  v8 = end->v[2] - start->v[2];
  v10 = point->v[1] - start->v[1];
  v9 = v10;
  v11 = point->v[2] - start->v[2];
  v12 = (float)((float)(v10 * v7) + (float)(v4 * v6)) + (float)(v11 * v8);
  if ( v12 < 0.0 )
    return (float)((float)(v10 * v10) + (float)(v4 * v4)) + (float)(v11 * v11);
  v14 = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8);
  if ( v14 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1432, ASSERT_TYPE_SANITY, "( segDot != 0.0f )", "%s", "segDot != 0.0f") )
    __debugbreak();
  if ( v12 <= v14 )
  {
    LODWORD(v17) = COERCE_UNSIGNED_INT(v12 / v14) ^ _xmm;
    return (float)((float)((float)((float)(v7 * v17) + v9) * (float)((float)(v7 * v17) + v9)) + (float)((float)((float)(v6 * v17) + v4) * (float)((float)(v6 * v17) + v4))) + (float)((float)((float)(v8 * v17) + v11) * (float)((float)(v8 * v17) + v11));
  }
  else
  {
    v15 = point->v[1] - end->v[1];
    v16 = point->v[2] - end->v[2];
    return (float)((float)(v15 * v15) + (float)((float)(point->v[0] - end->v[0]) * (float)(point->v[0] - end->v[0]))) + (float)(v16 * v16);
  }
}

/*
==============
PointToLineSegmentDistSq2D
==============
*/
float PointToLineSegmentDistSq2D(const vec2_t *point, const vec2_t *start, const vec2_t *end)
{
  float v4; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 

  v4 = point->v[0] - start->v[0];
  v6 = end->v[0] - start->v[0];
  v7 = end->v[1] - start->v[1];
  v9 = point->v[1] - start->v[1];
  v8 = v9;
  v10 = (float)(v9 * v7) + (float)(v4 * v6);
  if ( v10 < 0.0 )
    return (float)(v9 * v9) + (float)(v4 * v4);
  v12 = (float)(v7 * v7) + (float)(v6 * v6);
  if ( v12 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1460, ASSERT_TYPE_SANITY, "( segDot != 0.0f )", "%s", "segDot != 0.0f") )
    __debugbreak();
  if ( v10 <= v12 )
    return (float)((float)((float)(v7 * COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 / v12) ^ _xmm)) + v8) * (float)((float)(v7 * COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 / v12) ^ _xmm)) + v8)) + (float)((float)((float)(v6 * COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 / v12) ^ _xmm)) + v4) * (float)((float)(v6 * COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 / v12) ^ _xmm)) + v4));
  v13 = point->v[1] - end->v[1];
  return (float)(v13 * v13) + (float)((float)(point->v[0] - end->v[0]) * (float)(point->v[0] - end->v[0]));
}

/*
==============
ClosestApproachOfTwoLines
==============
*/
void ClosestApproachOfTwoLines(const vec3_t *p1, const vec3_t *dir1, const vec3_t *p2, const vec3_t *dir2, float *s, float *t)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 

  v6 = dir1->v[1];
  v7 = dir1->v[2];
  v8 = dir2->v[1];
  v9 = dir2->v[0];
  v10 = dir2->v[2];
  v11 = p1->v[0] - p2->v[0];
  v12 = p1->v[1] - p2->v[1];
  v13 = (float)((float)(dir1->v[0] * dir1->v[0]) + (float)(v6 * v6)) + (float)(v7 * v7);
  LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(dir2->v[0] * dir1->v[0]) + (float)(v8 * v6)) + (float)(v10 * v7)) ^ _xmm;
  v15 = v6 * v12;
  v16 = p1->v[2] - p2->v[2];
  v17 = v7 * v16;
  v18 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  v20 = (float)(v15 + (float)(dir1->v[0] * v11)) + v17;
  v19 = v20;
  v21 = (float)(v18 * v13) - (float)(v14 * v14);
  if ( (float)(v21 * v21) <= (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 * v13) & _xmm) * 0.000099999997) )
  {
    if ( v13 <= 0.0000099999997 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1502, ASSERT_TYPE_SANITY, "( dir1LenSq > 0.00001f )", "%s", "dir1LenSq > 0.00001f") )
      __debugbreak();
    *s = COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 / v13) ^ _xmm);
    *t = 0;
  }
  else
  {
    v22 = (float)((float)(v8 * v12) + (float)(v9 * v11)) + (float)(v10 * v16);
    *s = (float)((float)(COERCE_FLOAT(LODWORD(v22) ^ _xmm) * v14) - (float)(v19 * v18)) * (float)(1.0 / v21);
    *t = (float)((float)(v19 * v14) - (float)(COERCE_FLOAT(LODWORD(v22) ^ _xmm) * v13)) * (float)(1.0 / v21);
  }
}

/*
==============
ClosestApproachOfTwoSegments
==============
*/
void ClosestApproachOfTwoSegments(const vec3_t *s1p0, const vec3_t *s1p1, const vec3_t *s2p0, const vec3_t *s2p1, vec3_t *outSeg2Point, float *outDistSq)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 

  v6 = s1p0->v[1];
  v7 = s1p0->v[2];
  v8 = s1p1->v[0] - s1p0->v[0];
  v9 = s1p1->v[1] - v6;
  v10 = v6 - s2p0->v[1];
  v11 = s1p1->v[2] - v7;
  v12 = v7 - s2p0->v[2];
  v13 = s1p0->v[0] - s2p0->v[0];
  v14 = s2p1->v[0] - s2p0->v[0];
  v15 = s2p1->v[1] - s2p0->v[1];
  v16 = s2p1->v[2] - s2p0->v[2];
  v17 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v11 * v11);
  v18 = (float)((float)(v15 * v9) + (float)(v14 * v8)) + (float)(v16 * v11);
  v19 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
  v36 = v11;
  v20 = (float)((float)(v10 * v9) + (float)(v13 * v8)) + (float)(v12 * v11);
  v21 = (float)(v10 * v15) + (float)(v13 * v14);
  v22 = v12 * v16;
  v37 = v12;
  v23 = (float)(v19 * v17) - (float)(v18 * v18);
  v34 = v9;
  v35 = v10;
  v24 = v21 + v22;
  v25 = v23;
  v26 = 0.0;
  if ( v23 >= 0.0000000099999999 )
  {
    v29 = (float)((float)(v21 + v22) * v18) - (float)(v20 * v19);
    v27 = v29;
    v28 = (float)(v24 * v17) - (float)(v20 * v18);
    if ( v29 >= 0.0 )
    {
      if ( v29 <= v23 )
        goto LABEL_8;
      v27 = (float)(v19 * v17) - (float)(v18 * v18);
      v28 = v24 + v18;
    }
    else
    {
      v27 = 0.0;
      v28 = v24;
    }
  }
  else
  {
    v23 = FLOAT_1_0;
    v27 = 0.0;
    v28 = v21 + v22;
  }
  v25 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
LABEL_8:
  if ( v28 >= 0.0 )
  {
    if ( v28 <= v25 )
      goto LABEL_16;
    v27 = v18 - v20;
    v28 = v25;
    if ( (float)(v18 - v20) >= 0.0 )
    {
LABEL_10:
      if ( v27 <= v17 )
        v23 = v17;
      else
        v27 = v23;
      goto LABEL_16;
    }
  }
  else
  {
    v28 = 0.0;
    LODWORD(v27) = LODWORD(v20) ^ _xmm;
    if ( v20 <= -0.0 )
      goto LABEL_10;
  }
  v27 = 0.0;
LABEL_16:
  if ( COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.0000000099999999 )
    v30 = v27 / v23;
  else
    v30 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v28) & _xmm) >= 0.0000000099999999 )
    v26 = v28 / v25;
  v31 = (float)((float)(v30 * (float)(s1p1->v[0] - s1p0->v[0])) + (float)(s1p0->v[0] - s2p0->v[0])) + (float)(v14 * COERCE_FLOAT(LODWORD(v26) ^ _xmm));
  v32 = (float)((float)(v30 * v34) + v35) + (float)(v15 * COERCE_FLOAT(LODWORD(v26) ^ _xmm));
  v33 = (float)((float)(v30 * v36) + v37) + (float)(v16 * COERCE_FLOAT(LODWORD(v26) ^ _xmm));
  *outDistSq = (float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v33 * v33);
  outSeg2Point->v[0] = (float)(v14 * v26) + s2p0->v[0];
  outSeg2Point->v[1] = (float)(v15 * v26) + s2p0->v[1];
  outSeg2Point->v[2] = (float)(v16 * v26) + s2p0->v[2];
}

/*
==============
SegmentsIntersection
==============
*/
char SegmentsIntersection(const vec2_t *p1, const vec2_t *p2, const vec2_t *p3, const vec2_t *p4, float *outFrac)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  v5 = p1->v[1];
  v6 = p1->v[0];
  v7 = p3->v[0];
  v8 = p3->v[1];
  v9 = p4->v[1] - v8;
  v10 = p2->v[0] - p1->v[0];
  v11 = p4->v[0] - p3->v[0];
  v12 = p2->v[1] - v5;
  v13 = (float)(v10 * v9) - (float)(v12 * v11);
  *outFrac = 1.0;
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.001 )
    return 0;
  v14 = v6 - v7;
  v15 = v5 - v8;
  v16 = 1.0 / v13;
  v18 = (float)((float)(v15 * v11) - (float)(v14 * v9)) * v16;
  v17 = v18;
  if ( v18 < 0.0 )
    return 0;
  if ( v18 > 1.0 )
    return 0;
  v19 = (float)((float)(v15 * v10) - (float)(v14 * v12)) * v16;
  if ( v19 < 0.0 || v19 > 1.0 )
    return 0;
  *outFrac = v17;
  return 1;
}

/*
==============
SegmentToSegmentDistSq2D
==============
*/
float SegmentToSegmentDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testStart, const vec2_t *testEnd)
{
  float v4; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float result; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  double v23; 
  double v24; 

  v4 = segStart->v[1];
  v8 = segEnd->v[0] - segStart->v[0];
  v10 = testEnd->v[1] - testStart->v[1];
  v11 = segEnd->v[1] - v4;
  v12 = testEnd->v[0] - testStart->v[0];
  v13 = (float)(v8 * v10) - (float)(v11 * v12);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.001 || (v14 = v4 - testStart->v[1], v15 = segStart->v[0] - testStart->v[0], v16 = 1.0 / v13, v17 = (float)((float)(v14 * v12) - (float)(v15 * v10)) * v16, result = 0.0, v17 < 0.0) || v17 > 1.0 || (v19 = (float)((float)(v14 * v8) - (float)(v15 * v11)) * v16, v19 < 0.0) || v19 > 1.0 )
  {
    v20 = PointToLineSegmentDistSq2D(segStart, testStart, testEnd);
    v21 = fminf(3.4028235e38, *(float *)&v20);
    v22 = PointToLineSegmentDistSq2D(segEnd, testStart, testEnd);
    fminf(v21, *(float *)&v22);
    v23 = PointToLineSegmentDistSq2D(testStart, segStart, segEnd);
    fminf(v21, *(float *)&v23);
    v24 = PointToLineSegmentDistSq2D(testEnd, segStart, segEnd);
    if ( fminf(v21, *(float *)&v24) == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1686, ASSERT_TYPE_SANITY, "( minSegDistSq != 3.402823466e+38F )", "%s", "minSegDistSq != FLT_MAX") )
      __debugbreak();
    return v21;
  }
  return result;
}

/*
==============
SegmentToAABBDistSq2D
==============
*/
float SegmentToAABBDistSq2D(const vec2_t *segStart, const vec2_t *segEnd, const vec2_t *testMin, const vec2_t *testMax)
{
  float v4; 
  float v9; 
  float v10; 
  double v12; 
  float v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  vec2_t testEnd; 

  v4 = testMin->v[0];
  if ( segStart->v[0] >= testMin->v[0] && segStart->v[0] <= testMax->v[0] )
  {
    v9 = segStart->v[1];
    if ( v9 >= testMin->v[1] && v9 <= testMax->v[1] )
      return 0.0;
  }
  if ( segEnd->v[0] >= v4 && segEnd->v[0] <= testMax->v[0] )
  {
    v10 = segEnd->v[1];
    if ( v10 >= testMin->v[1] && v10 <= testMax->v[1] )
      return 0.0;
  }
  testEnd.v[1] = testMax->v[1];
  testEnd.v[0] = v4;
  v12 = SegmentToSegmentDistSq2D(segStart, segEnd, testMin, &testEnd);
  *(float *)&v12 = fminf(3.4028235e38, *(float *)&v12);
  v13 = testMin->v[1];
  testEnd.v[0] = testMax->v[0];
  testEnd.v[1] = v13;
  v14 = *(float *)&v12;
  v15 = SegmentToSegmentDistSq2D(segStart, segEnd, testMin, &testEnd);
  fminf(v14, *(float *)&v15);
  v16 = testMax->v[1];
  testEnd.v[0] = testMin->v[0];
  testEnd.v[1] = v16;
  v17 = SegmentToSegmentDistSq2D(segStart, segEnd, testMax, &testEnd);
  fminf(v14, *(float *)&v17);
  v18 = testMin->v[1];
  testEnd.v[0] = testMax->v[0];
  testEnd.v[1] = v18;
  v19 = SegmentToSegmentDistSq2D(segStart, segEnd, testMax, &testEnd);
  if ( fminf(v14, *(float *)&v19) == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 1708, ASSERT_TYPE_SANITY, "( minSegDistSq != 3.402823466e+38F )", "%s", "minSegDistSq != FLT_MAX") )
    __debugbreak();
  return v14;
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
  return 3.4028235e38 == mins->v[0] && 3.4028235e38 == mins->v[1] && 3.4028235e38 == mins->v[2] && -3.4028235e38 == maxs->v[0] && -3.4028235e38 == maxs->v[1] && -3.4028235e38 == maxs->v[2];
}

/*
==============
AddPointToBounds
==============
*/
void AddPointToBounds(const vec3_t *v, vec3_t *mins, vec3_t *maxs)
{
  float v3; 
  float v4; 
  float v5; 

  v3 = v->v[0];
  if ( v->v[0] < mins->v[0] )
  {
    mins->v[0] = v3;
    v3 = v->v[0];
  }
  if ( v3 > maxs->v[0] )
    maxs->v[0] = v3;
  v4 = v->v[1];
  if ( v4 < mins->v[1] )
  {
    mins->v[1] = v4;
    v4 = v->v[1];
  }
  if ( v4 > maxs->v[1] )
    maxs->v[1] = v4;
  v5 = v->v[2];
  if ( v5 < mins->v[2] )
  {
    mins->v[2] = v5;
    v5 = v->v[2];
  }
  if ( v5 > maxs->v[2] )
    maxs->v[2] = v5;
}

/*
==============
ExpandBounds
==============
*/
void ExpandBounds(const vec3_t *addedmins, const vec3_t *addedmaxs, vec3_t *mins, vec3_t *maxs)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  if ( addedmins->v[0] < mins->v[0] )
    mins->v[0] = addedmins->v[0];
  if ( addedmaxs->v[0] > maxs->v[0] )
    maxs->v[0] = addedmaxs->v[0];
  v4 = addedmins->v[1];
  if ( v4 < mins->v[1] )
    mins->v[1] = v4;
  v5 = addedmaxs->v[1];
  if ( v5 > maxs->v[1] )
    maxs->v[1] = v5;
  v6 = addedmins->v[2];
  if ( v6 < mins->v[2] )
    mins->v[2] = v6;
  v7 = addedmaxs->v[2];
  if ( v7 > maxs->v[2] )
    maxs->v[2] = v7;
}

/*
==============
ExpandBoundsRotated
==============
*/
void ExpandBoundsRotated(const vec3_t *addedOrigin, const vec3_t *addedMins, const vec3_t *addedMaxs, const tmat33_t<vec3_t> *addedAxis, vec3_t *mins, vec3_t *maxs)
{
  float v6; 
  float *v7; 
  __int64 v9; 
  double v10; 
  float v11; 
  float v12; 
  float *v13; 
  __int64 v14; 
  float v15; 
  float *v16; 
  __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  double v23; 
  float v24; 

  v6 = addedMins->v[2];
  v7 = (float *)&v21;
  v9 = 2i64;
  v21 = *(_QWORD *)addedMins->v;
  v10 = *(double *)addedMaxs->v;
  v22 = v6;
  v11 = addedMaxs->v[2];
  v23 = v10;
  v24 = v11;
  do
  {
    v12 = *v7;
    v13 = (float *)&v21 + 1;
    v14 = 2i64;
    do
    {
      v15 = *v13;
      v16 = &v22;
      v17 = 2i64;
      do
      {
        v18 = (float)((float)((float)(v15 * addedAxis->m[0].v[1]) + (float)(v12 * addedAxis->m[0].v[0])) + (float)(*v16 * addedAxis->m[0].v[2])) + addedOrigin->v[0];
        v19 = (float)((float)((float)(v15 * addedAxis->m[1].v[1]) + (float)(v12 * addedAxis->m[1].v[0])) + (float)(*v16 * addedAxis->m[1].v[2])) + addedOrigin->v[1];
        v20 = (float)((float)((float)(v15 * addedAxis->m[2].v[1]) + (float)(v12 * addedAxis->m[2].v[0])) + (float)(*v16 * addedAxis->m[2].v[2])) + addedOrigin->v[2];
        if ( v18 < mins->v[0] )
          mins->v[0] = v18;
        if ( v18 > maxs->v[0] )
          maxs->v[0] = v18;
        if ( v19 < mins->v[1] )
          mins->v[1] = v19;
        if ( v19 > maxs->v[1] )
          maxs->v[1] = v19;
        if ( v20 < mins->v[2] )
          mins->v[2] = v20;
        if ( v20 > maxs->v[2] )
          maxs->v[2] = v20;
        v16 += 3;
        --v17;
      }
      while ( v17 );
      v13 += 3;
      --v14;
    }
    while ( v14 );
    v7 += 3;
    --v9;
  }
  while ( v9 );
}

/*
==============
RadiusFromBounds
==============
*/
float RadiusFromBounds(const vec3_t *mins, const vec3_t *maxs)
{
  signed __int64 v2; 
  int v3; 
  bool v4; 
  const vec3_t *v5; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 

  v2 = (char *)&v11 - (char *)maxs;
  v3 = 0;
  v4 = 1;
  v5 = maxs;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    _XMM6 = LODWORD(v5->v[0]) & (unsigned __int128)(unsigned int)_xmm;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    __asm { vmaxss  xmm0, xmm6, xmm7 }
    *(float *)((char *)v5->v + v2) = *(float *)&_XMM0;
    v5 = (const vec3_t *)((char *)v5 + 4);
    v4 = (unsigned int)++v3 < 3;
  }
  while ( v3 < 3 );
  return fsqrt((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13));
}

/*
==============
RadiusFromBounds2D
==============
*/
float RadiusFromBounds2D(const vec2_t *mins, const vec2_t *maxs)
{
  signed __int64 v2; 
  int v3; 
  bool v4; 
  const vec2_t *v5; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 

  v2 = (char *)&v11 - (char *)maxs;
  v3 = 0;
  v4 = 1;
  v5 = maxs;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    _XMM6 = LODWORD(v5->v[0]) & (unsigned __int128)(unsigned int)_xmm;
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    __asm { vmaxss  xmm0, xmm6, xmm7 }
    *(float *)((char *)v5->v + v2) = *(float *)&_XMM0;
    v5 = (const vec2_t *)((char *)v5 + 4);
    v4 = (unsigned int)++v3 < 2;
  }
  while ( v3 < 2 );
  return fsqrt((float)(v12 * v12) + (float)(v11 * v11));
}

/*
==============
RadiusFromBoundsSq
==============
*/
float RadiusFromBoundsSq(const vec3_t *mins, const vec3_t *maxs)
{
  signed __int64 v2; 
  int v3; 
  bool v4; 
  const vec3_t *v5; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 

  v2 = (char *)&v11 - (char *)maxs;
  v3 = 0;
  v4 = 1;
  v5 = maxs;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    _XMM6 = LODWORD(v5->v[0]) & (unsigned __int128)(unsigned int)_xmm;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    __asm { vmaxss  xmm0, xmm6, xmm7 }
    *(float *)((char *)v5->v + v2) = *(float *)&_XMM0;
    v5 = (const vec3_t *)((char *)v5 + 4);
    v4 = (unsigned int)++v3 < 3;
  }
  while ( v3 < 3 );
  return (float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13);
}

/*
==============
RadiusFromBounds2DSq
==============
*/
float RadiusFromBounds2DSq(const vec2_t *mins, const vec2_t *maxs)
{
  signed __int64 v2; 
  int v3; 
  bool v4; 
  const vec2_t *v5; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 

  v2 = (char *)&v11 - (char *)maxs;
  v3 = 0;
  v4 = 1;
  v5 = maxs;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    _XMM6 = LODWORD(v5->v[0]) & (unsigned __int128)(unsigned int)_xmm;
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    __asm { vmaxss  xmm0, xmm6, xmm7 }
    *(float *)((char *)v5->v + v2) = *(float *)&_XMM0;
    v5 = (const vec2_t *)((char *)v5 + 4);
    v4 = (unsigned int)++v3 < 2;
  }
  while ( v3 < 2 );
  return (float)(v11 * v11) + (float)(v12 * v12);
}

/*
==============
ExtendBounds
==============
*/
void ExtendBounds(vec3_t *mins, vec3_t *maxs, const vec3_t *offset)
{
  float v3; 
  float v4; 
  float v5; 

  v3 = offset->v[0];
  if ( offset->v[0] <= 0.0 )
    mins->v[0] = v3 + mins->v[0];
  else
    maxs->v[0] = v3 + maxs->v[0];
  v4 = offset->v[1];
  if ( v4 <= 0.0 )
    mins->v[1] = v4 + mins->v[1];
  else
    maxs->v[1] = v4 + maxs->v[1];
  v5 = offset->v[2];
  if ( v5 <= 0.0 )
    mins->v[2] = v5 + mins->v[2];
  else
    maxs->v[2] = v5 + maxs->v[2];
}

/*
==============
ExpandBoundsToWidth
==============
*/
void ExpandBoundsToWidth(vec3_t *mins, vec3_t *maxs)
{
  float v4; 
  __int128 v6; 
  float v7; 
  float v9; 

  if ( mins->v[0] > maxs->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2036, ASSERT_TYPE_SANITY, "( maxs[0] >= mins[0] )", "%s", "maxs[0] >= mins[0]") )
    __debugbreak();
  if ( mins->v[1] > maxs->v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2037, ASSERT_TYPE_SANITY, "( maxs[1] >= mins[1] )", "%s", "maxs[1] >= mins[1]") )
    __debugbreak();
  if ( mins->v[2] > maxs->v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2038, ASSERT_TYPE_SANITY, "( maxs[2] >= mins[2] )", "%s", "maxs[2] >= mins[2]") )
    __debugbreak();
  v4 = mins->v[2];
  v6 = LODWORD(maxs->v[0]);
  *(float *)&v6 = maxs->v[0] - mins->v[0];
  _XMM3 = v6;
  v7 = maxs->v[2] - v4;
  __asm { vmaxss  xmm1, xmm3, xmm2 }
  if ( *(float *)&_XMM1 > v7 )
  {
    v9 = (float)(*(float *)&_XMM1 - v7) * 0.5;
    mins->v[2] = v4 - v9;
    maxs->v[2] = v9 + maxs->v[2];
  }
}

/*
==============
ShrinkBoundsToHeight
==============
*/
void ShrinkBoundsToHeight(vec3_t *mins, vec3_t *maxs)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( maxs->v[0] < mins->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2057, ASSERT_TYPE_ASSERT, "( maxs[0] ) >= ( mins[0] )", "%s >= %s\n\t%g, %g", "maxs[0]", "mins[0]", maxs->v[0], mins->v[0]) )
    __debugbreak();
  v4 = maxs->v[1];
  v5 = mins->v[1];
  if ( v4 < v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2058, ASSERT_TYPE_ASSERT, "( maxs[1] ) >= ( mins[1] )", "%s >= %s\n\t%g, %g", "maxs[1]", "mins[1]", v4, v5) )
    __debugbreak();
  v6 = maxs->v[2];
  v7 = mins->v[2];
  if ( v6 < v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2059, ASSERT_TYPE_ASSERT, "( maxs[2] ) >= ( mins[2] )", "%s >= %s\n\t%g, %g", "maxs[2]", "mins[2]", v6, v7) )
    __debugbreak();
  v8 = maxs->v[1] - mins->v[1];
  v9 = maxs->v[0] - mins->v[0];
  v10 = maxs->v[2] - mins->v[2];
  if ( v9 > v10 )
  {
    v11 = (float)(v9 - v10) * 0.5;
    mins->v[0] = mins->v[0] + v11;
    maxs->v[0] = maxs->v[0] - v11;
  }
  if ( v8 > v10 )
  {
    v12 = (float)(v8 - v10) * 0.5;
    mins->v[1] = v12 + mins->v[1];
    maxs->v[1] = maxs->v[1] - v12;
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
  float v3; 
  bool result; 

  result = 0;
  if ( v->v[0] >= mins->v[0] && v->v[0] <= maxs->v[0] )
  {
    v3 = v->v[1];
    if ( v3 >= mins->v[1] && v3 <= maxs->v[1] )
      return 1;
  }
  return result;
}

/*
==============
BoundsOverlap2D
==============
*/
bool BoundsOverlap2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1)
{
  return maxs1->v[0] >= mins0->v[0] && maxs0->v[0] >= mins1->v[0] && maxs1->v[1] >= mins0->v[1] && maxs0->v[1] >= mins1->v[1];
}

/*
==============
BoundsOverlapEpsilon2D
==============
*/
bool BoundsOverlapEpsilon2D(const vec2_t *mins0, const vec2_t *maxs0, const vec2_t *mins1, const vec2_t *maxs1, float epsilon)
{
  return (float)(epsilon + maxs1->v[0]) >= mins0->v[0] && (float)(epsilon + maxs0->v[0]) >= mins1->v[0] && (float)(epsilon + maxs1->v[1]) >= mins0->v[1] && (float)(epsilon + maxs0->v[1]) >= mins1->v[1];
}

/*
==============
AddPointToBounds2D
==============
*/
void AddPointToBounds2D(const vec2_t *v, vec2_t *mins, vec2_t *maxs)
{
  float v3; 
  float v4; 

  v3 = v->v[0];
  if ( v->v[0] < mins->v[0] )
  {
    mins->v[0] = v3;
    v3 = v->v[0];
  }
  if ( v3 > maxs->v[0] )
    maxs->v[0] = v3;
  v4 = v->v[1];
  if ( v4 < mins->v[1] )
  {
    mins->v[1] = v4;
    v4 = v->v[1];
  }
  if ( v4 > maxs->v[1] )
    maxs->v[1] = v4;
}

/*
==============
ExpandBounds2D
==============
*/
void ExpandBounds2D(const vec2_t *addedmins, const vec2_t *addedmaxs, vec2_t *mins, vec2_t *maxs)
{
  float v4; 
  float v5; 

  if ( addedmins->v[0] < mins->v[0] )
    mins->v[0] = addedmins->v[0];
  if ( addedmaxs->v[0] > maxs->v[0] )
    maxs->v[0] = addedmaxs->v[0];
  v4 = addedmins->v[1];
  if ( v4 < mins->v[1] )
    mins->v[1] = v4;
  v5 = addedmaxs->v[1];
  if ( v5 > maxs->v[1] )
    maxs->v[1] = v5;
}

/*
==============
BoundsOverlap
==============
*/
bool BoundsOverlap(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1)
{
  return maxs1->v[0] >= mins0->v[0] && maxs0->v[0] >= mins1->v[0] && maxs1->v[1] >= mins0->v[1] && maxs0->v[1] >= mins1->v[1] && maxs1->v[2] >= mins0->v[2] && maxs0->v[2] >= mins1->v[2];
}

/*
==============
BoundsOverlapEpsilon
==============
*/
bool BoundsOverlapEpsilon(const vec3_t *mins0, const vec3_t *maxs0, const vec3_t *mins1, const vec3_t *maxs1, float epsilon)
{
  return (float)(epsilon + maxs1->v[0]) >= mins0->v[0] && (float)(epsilon + maxs0->v[0]) >= mins1->v[0] && (float)(epsilon + maxs1->v[1]) >= mins0->v[1] && (float)(epsilon + maxs0->v[1]) >= mins1->v[1] && (float)(epsilon + maxs1->v[2]) >= mins0->v[2] && (float)(epsilon + maxs0->v[2]) >= mins1->v[2];
}

/*
==============
BoundsVolume
==============
*/
float BoundsVolume(const vec3_t *mins, const vec3_t *maxs)
{
  return (float)((float)(maxs->v[1] - mins->v[1]) * (float)(maxs->v[0] - mins->v[0])) * (float)(maxs->v[2] - mins->v[2]);
}

/*
==============
GetRotatedBounds
==============
*/
void GetRotatedBounds(const vec3_t (*baseBounds)[2], const vec3_t *origin, const tmat33_t<vec3_t> *axis, vec3_t (*rotatedBounds)[2])
{
  signed __int64 v4; 
  signed __int64 v5; 
  signed __int64 v6; 
  unsigned int v7; 
  int *v8; 
  bool v9; 
  float v11; 
  float v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  __int64 v23; 

  v4 = (char *)origin - (char *)axis;
  v5 = (char *)rotatedBounds - (char *)axis;
  v6 = (char *)&(*rotatedBounds)[1] - (char *)axis;
  v7 = 0;
  v8 = (int *)axis;
  v9 = 1;
  do
  {
    if ( !v9 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v11 = *(float *)((char *)v8 + v4);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v5) = v11;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v12 = *(float *)((char *)v8 + v4);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v6) = v12;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v13 = (*v8 >> 31) & 0xC;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v14 = *(float *)((char *)(*baseBounds)[0].v + v13) * *(float *)v8;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v5) = v14 + *(float *)((char *)v8 + v5);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v15 = *(float *)((char *)(*baseBounds)[1].v - v13) * *(float *)v8;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v6) = v15 + *(float *)((char *)v8 + v6);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v16 = (v8[3] >> 31) & 0xC;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v17 = *(float *)((char *)&(*baseBounds)[0].v[1] + v16) * *((float *)v8 + 3);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v5) = v17 + *(float *)((char *)v8 + v5);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v18 = *(float *)((char *)&(*baseBounds)[1].v[1] - v16) * *((float *)v8 + 3);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v6) = v18 + *(float *)((char *)v8 + v6);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v19 = (v8[6] >> 31) & 0xC;
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v20 = *(float *)((char *)&(*baseBounds)[0].v[2] + v19) * *((float *)v8 + 6);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v5) = v20 + *(float *)((char *)v8 + v5);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v21 = *(float *)((char *)&(*baseBounds)[1].v[2] - v19) * *((float *)v8 + 6);
    if ( v7 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    *(float *)((char *)v8 + v6) = v21 + *(float *)((char *)v8 + v6);
    ++v8;
    v9 = ++v7 < 3;
  }
  while ( (int)v7 < 3 );
}

/*
==============
ObbOverlap
==============
*/
char ObbOverlap(const vec3_t *e0, const vec3_t *c0, const tmat33_t<vec3_t> *r0, const vec3_t *e1, const vec3_t *c1, const tmat33_t<vec3_t> *r1, bool fullTest)
{
  float *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  unsigned int i; 
  unsigned int v16; 
  char *v17; 
  float v18; 
  int v19; 
  float *v20; 
  unsigned int v21; 
  __int64 j; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 

  v7 = &r0->m[0].v[2];
  v8 = c1->v[0] - c0->v[0];
  v9 = c1->v[1] - c0->v[1];
  v10 = c1->v[2] - c0->v[2];
  v11 = (float)((float)(v9 * r0->m[0].v[1]) + (float)(v8 * r0->m[0].v[0])) + (float)(v10 * r0->m[0].v[2]);
  v12 = (float)((float)(v9 * r0->m[1].v[1]) + (float)(v8 * r0->m[1].v[0])) + (float)(v10 * r0->m[1].v[2]);
  v13 = (float)((float)(v9 * r0->m[2].v[1]) + (float)(v8 * r0->m[2].v[0])) + (float)(v10 * r0->m[2].v[2]);
  v14 = -8i64 - (_QWORD)r0;
  v32 = v13;
  v30 = v11;
  v31 = v12;
  for ( i = 0; i < 3; ++i )
  {
    v16 = 0;
    v17 = (char *)v7 + v14;
    do
    {
      v18 = (float)((float)(*(v7 - 2) * r1->m[v16].v[0]) + (float)(r1->m[v16].v[1] * *(v7 - 1))) + (float)(r1->m[v16].v[2] * *v7);
      *(float *)((char *)&v42 + (_QWORD)v17) = v18;
      *(float *)((char *)&v33 + (_QWORD)v17) = COERCE_FLOAT(LODWORD(v18) & _xmm) + 0.00000011920929;
      v17 += 4;
      ++v16;
    }
    while ( v16 < 3 );
    v14 = -8i64 - (_QWORD)r0;
    v7 += 3;
    v19 = 0;
  }
  v20 = &v33;
  v21 = 0;
  while ( COERCE_FLOAT(*(_DWORD *)(&v30 + (int)v21) & _xmm) <= (float)((float)((float)((float)(v20[1] * e1->v[1]) + (float)(e1->v[0] * *v20)) + (float)(v20[2] * e1->v[2])) + e0->v[v21]) )
  {
    ++v21;
    v20 += 3;
    if ( v21 >= 3 )
    {
      for ( j = 0i64; COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v12 * *(float *)((char *)&v45 + j)) + (float)(v11 * *(float *)((char *)&v42 + j))) + (float)(v13 * *(float *)((char *)&v48 + j))) & _xmm) <= (float)((float)((float)((float)(*(float *)((char *)&v36 + j) * e0->v[1]) + (float)(*(float *)((char *)&v33 + j) * e0->v[0])) + (float)(*(float *)((char *)&v39 + j) * e0->v[2])) + e1->v[v19]); j += 4i64 )
      {
        if ( (unsigned int)++v19 >= 3 )
        {
          if ( !fullTest )
            return 1;
          v23 = e0->v[1];
          v24 = e0->v[2];
          v25 = e1->v[1];
          v26 = e1->v[2];
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * v45) - (float)(v12 * v48)) & _xmm) <= (float)((float)((float)(v24 * v36) + (float)(v39 * v23)) + (float)((float)(v34 * v26) + (float)(v35 * v25))) )
          {
            v27 = e1->v[0];
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * v46) - (float)(v12 * v49)) & _xmm) <= (float)((float)((float)(v24 * v37) + (float)(v23 * v40)) + (float)((float)(v26 * v33) + (float)(v35 * e1->v[0]))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v47 * v32) - (float)(v12 * v50)) & _xmm) <= (float)((float)((float)(v24 * v38) + (float)(v23 * v41)) + (float)((float)(v25 * v33) + (float)(v34 * v27))) )
            {
              v28 = e0->v[0];
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v48 * v30) - (float)(v42 * v32)) & _xmm) <= (float)((float)((float)(v26 * v37) + (float)(v25 * v38)) + (float)((float)(v24 * v33) + (float)(v39 * e0->v[0]))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v49 * v30) - (float)(v43 * v32)) & _xmm) <= (float)((float)((float)(v28 * v40) + (float)(v24 * v34)) + (float)((float)(v27 * v38) + (float)(v26 * v36))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v50 * v30) - (float)(v44 * v32)) & _xmm) <= (float)((float)((float)(v28 * v41) + (float)(v35 * v24)) + (float)((float)(v27 * v37) + (float)(v25 * v36))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v42 * v31) - (float)(v45 * v30)) & _xmm) <= (float)((float)((float)(v26 * v40) + (float)(v25 * v41)) + (float)((float)(v23 * v33) + (float)(v28 * v36))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v43 * v31) - (float)(v46 * v30)) & _xmm) <= (float)((float)((float)(v28 * v37) + (float)(v23 * v34)) + (float)((float)(v27 * v41) + (float)(v39 * v26))) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v44 * v31) - (float)(v47 * v30)) & _xmm) <= (float)((float)((float)(v28 * v38) + (float)(v35 * v23)) + (float)((float)(v27 * v40) + (float)(v39 * v25))) )
                return 1;
            }
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

/*
==============
ColorSRGBtoLinear
==============
*/
void ColorSRGBtoLinear(const vec3_t *in, vec3_t *out)
{
  float v2; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  v2 = in->v[0];
  if ( in->v[0] <= 0.040449999 )
    v5 = v2 * 0.077399381;
  else
    v5 = powf_0((float)(v2 * 0.94786733) + 0.052132703, 2.4000001);
  out->v[0] = v5;
  v6 = in->v[1];
  if ( v6 <= 0.040449999 )
    v7 = v6 * 0.077399381;
  else
    v7 = powf_0((float)(v6 * 0.94786733) + 0.052132703, 2.4000001);
  out->v[1] = v7;
  v8 = in->v[2];
  if ( v8 <= 0.040449999 )
    out->v[2] = v8 * 0.077399381;
  else
    out->v[2] = powf_0((float)(v8 * 0.94786733) + 0.052132703, 2.4000001);
}

/*
==============
ScalarSRGBtoLinear
==============
*/
double ScalarSRGBtoLinear(double in)
{
  double v1; 

  HIDWORD(v1) = HIDWORD(in);
  if ( *(float *)&in <= 0.040449999 )
  {
    *(float *)&v1 = *(float *)&in * 0.077399381;
    return v1;
  }
  else
  {
    *(float *)&in = powf_0((float)(*(float *)&in * 0.94786733) + 0.052132703, 2.4000001);
  }
  return in;
}

/*
==============
Color2020toLinear
==============
*/
void Color2020toLinear(const vec3_t *in, vec3_t *out)
{
  float v2; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  v2 = in->v[0];
  if ( in->v[0] <= 0.081 )
    v5 = v2 * 0.22222222;
  else
    v5 = powf_0((float)(v2 * 0.90991813) + 0.090081893, 2.2222223);
  out->v[0] = v5;
  v6 = in->v[1];
  if ( v6 <= 0.081 )
    v7 = v6 * 0.22222222;
  else
    v7 = powf_0((float)(v6 * 0.90991813) + 0.090081893, 2.2222223);
  out->v[1] = v7;
  v8 = in->v[2];
  if ( v8 <= 0.081 )
    out->v[2] = v8 * 0.22222222;
  else
    out->v[2] = powf_0((float)(v8 * 0.90991813) + 0.090081893, 2.2222223);
}

/*
==============
LinearSRGBtoLinear2020
==============
*/
void LinearSRGBtoLinear2020(const vec3_t *in, vec3_t *out)
{
  out->v[0] = (float)((float)(in->v[0] * 0.62740403) + (float)(in->v[1] * 0.32928303)) + (float)(in->v[2] * 0.04331309);
  out->v[1] = (float)((float)(in->v[0] * 0.06909734) + (float)(in->v[1] * 0.91954041)) + (float)(in->v[2] * 0.011362314);
  out->v[2] = (float)((float)(in->v[1] * 0.088013276) + (float)(in->v[0] * 0.016391449)) + (float)(in->v[2] * 0.89559531);
}

/*
==============
Scalar2020toLinear
==============
*/
double Scalar2020toLinear(double in)
{
  double v1; 

  HIDWORD(v1) = HIDWORD(in);
  if ( *(float *)&in <= 0.081 )
  {
    *(float *)&v1 = *(float *)&in * 0.22222222;
    return v1;
  }
  else
  {
    *(float *)&in = powf_0((float)(*(float *)&in * 0.90991813) + 0.090081893, 2.2222223);
  }
  return in;
}

/*
==============
ScalarLinearToSRGB
==============
*/
float ScalarLinearToSRGB(const float in)
{
  if ( in >= 0.0031308001 )
    return (float)(powf_0(in, 0.41666666) * 1.0549999) - 0.055;
  else
    return in * 12.92;
}

/*
==============
vectoyaw
==============
*/
float vectoyaw(const vec2_t *vec)
{
  float v1; 
  float v4; 

  v1 = vec->v[1];
  _XMM6 = 0i64;
  if ( v1 == 0.0 && vec->v[0] == 0.0 )
    return 0.0;
  v4 = atan2f_0(v1, vec->v[0]) * 57.295776;
  _XMM0 = LODWORD(FLOAT_360_0);
  __asm
  {
    vcmpless xmm1, xmm6, xmm2
    vblendvps xmm1, xmm0, xmm6, xmm1
  }
  return v4 + *(float *)&_XMM1;
}

/*
==============
vectosignedyaw
==============
*/
float vectosignedyaw(const vec2_t *vec)
{
  float result; 
  float v2; 

  result = 0.0;
  if ( vec->v[1] != 0.0 || vec->v[0] != 0.0 )
  {
    v2 = atan2f_0(vec->v[1], vec->v[0]);
    if ( (float)(v2 * 57.295776) < -180.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2243, ASSERT_TYPE_SANITY, "( yaw >= -180 )", "%s", "yaw >= -180") )
      __debugbreak();
    if ( (float)(v2 * 57.295776) > 180.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2244, ASSERT_TYPE_SANITY, "( yaw <= 180 )", "%s", "yaw <= 180") )
      __debugbreak();
    return v2 * 57.295776;
  }
  return result;
}

/*
==============
vectopitch
==============
*/
float vectopitch(const vec3_t *vec)
{
  float v1; 
  float v7; 

  v1 = vec->v[1];
  _XMM6 = 0i64;
  if ( v1 == 0.0 && vec->v[0] == 0.0 )
  {
    _XMM0 = LODWORD(vec->v[2]);
    __asm { vcmpless xmm3, xmm0, cs:__real@80000000 }
    _XMM1 = LODWORD(FLOAT_270_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  }
  else
  {
    v7 = atan2f_0(vec->v[2], fsqrt((float)(vec->v[0] * vec->v[0]) + (float)(v1 * v1))) * -57.295776;
    _XMM0 = LODWORD(FLOAT_360_0);
    __asm
    {
      vcmpless xmm1, xmm6, xmm2
      vblendvps xmm1, xmm0, xmm6, xmm1
    }
    *(float *)&_XMM0 = v7 + *(float *)&_XMM1;
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
  float v1; 

  v1 = vec->v[1];
  if ( v1 != 0.0 || vec->v[0] != 0.0 )
    return atan2f_0(vec->v[2], fsqrt((float)(vec->v[0] * vec->v[0]) + (float)(v1 * v1))) * -57.295776;
  _XMM0 = LODWORD(vec->v[2]);
  __asm { vcmpless xmm3, xmm0, cs:__real@80000000 }
  _XMM1 = LODWORD(FLOAT_N90_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
vectoangles
==============
*/
void vectoangles(const vec3_t *vec, vec3_t *angles)
{
  float v4; 
  float v10; 
  float v11; 
  float v12; 
  float v16; 

  v4 = vec->v[1];
  _XMM8 = 0i64;
  if ( v4 == 0.0 && vec->v[0] == 0.0 )
  {
    _XMM0 = LODWORD(vec->v[2]);
    __asm { vcmpless xmm3, xmm0, cs:__real@80000000 }
    _XMM1 = LODWORD(FLOAT_270_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    v10 = 0.0;
  }
  else
  {
    v11 = vec->v[0];
    v12 = atan2f_0(v4, vec->v[0]) * 57.295776;
    _XMM7 = LODWORD(FLOAT_360_0);
    __asm
    {
      vcmpless xmm0, xmm8, xmm1
      vblendvps xmm0, xmm7, xmm8, xmm0
    }
    v10 = v12 + *(float *)&_XMM0;
    v16 = atan2f_0(vec->v[2], fsqrt((float)(v11 * v11) + (float)(v4 * v4))) * -57.295776;
    __asm
    {
      vcmpless xmm0, xmm8, xmm1
      vblendvps xmm0, xmm7, xmm8, xmm0
    }
    *(float *)&_XMM0 = v16 + *(float *)&_XMM0;
  }
  angles->v[1] = v10;
  angles->v[0] = *(float *)&_XMM0;
  angles->v[2] = 0.0;
}

/*
==============
vectosignedangles
==============
*/
void vectosignedangles(const vec3_t *vec, vec3_t *angles)
{
  float v4; 
  float v5; 
  float v10; 

  v4 = vec->v[1];
  v5 = 0.0;
  if ( v4 == 0.0 && vec->v[0] == 0.0 )
  {
    _XMM0 = LODWORD(vec->v[2]);
    __asm { vcmpless xmm3, xmm0, cs:__real@80000000 }
    _XMM1 = LODWORD(FLOAT_N90_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  }
  else
  {
    v10 = vec->v[0];
    v5 = atan2f_0(v4, vec->v[0]) * 57.295776;
    *(float *)&_XMM0 = atan2f_0(vec->v[2], fsqrt((float)(v10 * v10) + (float)(v4 * v4))) * -57.295776;
  }
  angles->v[1] = v5;
  angles->v[0] = *(float *)&_XMM0;
  angles->v[2] = 0.0;
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
void AxisTransformVector(const tmat33_t<vec3_t> *axes, const float x, const float y, const float z, vec3_t *out)
{
  out->v[0] = (float)((float)(y * axes->m[1].v[0]) + (float)(x * axes->m[0].v[0])) + (float)(z * axes->m[2].v[0]);
  out->v[1] = (float)((float)(x * axes->m[0].v[1]) + (float)(y * axes->m[1].v[1])) + (float)(z * axes->m[2].v[1]);
  out->v[2] = (float)((float)(x * axes->m[0].v[2]) + (float)(y * axes->m[1].v[2])) + (float)(z * axes->m[2].v[2]);
}

/*
==============
AxisTransformVec3
==============
*/
void AxisTransformVec3(const tmat33_t<vec3_t> *axes, const vec3_t *vec, vec3_t *out)
{
  out->v[0] = (float)((float)(axes->m[1].v[0] * vec->v[1]) + (float)(axes->m[0].v[0] * vec->v[0])) + (float)(axes->m[2].v[0] * vec->v[2]);
  out->v[1] = (float)((float)(axes->m[1].v[1] * vec->v[1]) + (float)(axes->m[0].v[1] * vec->v[0])) + (float)(axes->m[2].v[1] * vec->v[2]);
  out->v[2] = (float)((float)(axes->m[1].v[2] * vec->v[1]) + (float)(axes->m[0].v[2] * vec->v[0])) + (float)(axes->m[2].v[2] * vec->v[2]);
}

/*
==============
AnglesToQuat
==============
*/
void AnglesToQuat(const vec3_t *angles, vec4_t *quat)
{
  __int128 v4; 
  vec4_t v7; 
  __int128 v8; 

  HIDWORD(v8) = 0;
  v4 = v8;
  *(float *)&v4 = angles->v[0];
  _XMM2 = v4;
  __asm
  {
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
  }
  v7 = (vec4_t)_mm128_mul_ps(_XMM2, g_degreeToRadian.v);
  Float4RadianToQuat((float4 *)angles, (const float4 *)quat);
  *quat = v7;
}

/*
==============
AnglesToAxis
==============
*/
void AnglesToAxis(const vec3_t *angles, tmat33_t<vec3_t> *axis)
{
  float v2; 
  __m128 v; 
  __m128 v8; 
  __m128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float4 v14; 
  float4 v15; 

  v2 = angles->v[0];
  v15.v.m128_i32[3] = 0;
  v = v15.v;
  v.m128_f32[0] = v2;
  _XMM2 = v;
  __asm
  {
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
  }
  _mm128_mul_ps(_XMM2, g_degreeToRadian.v);
  v15.v = _XMM2;
  Float4SinCos((const float4 *)angles, &v15, &v14);
  v8 = v14.v;
  v9 = v15.v;
  v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v13 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  _XMM2.m128_f32[0] = v12 * v15.v.m128_f32[0];
  axis->m[0].v[0] = v11 * v14.v.m128_f32[0];
  axis->m[0].v[1] = v8.m128_f32[0] * v10;
  axis->m[0].v[2] = COERCE_FLOAT(v9.m128_i32[0] ^ _xmm);
  axis->m[1].v[0] = (float)(_XMM2.m128_f32[0] * v11) - (float)(v13 * v10);
  axis->m[1].v[1] = (float)(_XMM2.m128_f32[0] * v10) + (float)(v13 * v11);
  axis->m[1].v[2] = v8.m128_f32[0] * v12;
  axis->m[2].v[0] = (float)((float)(v13 * v9.m128_f32[0]) * v11) + (float)(v12 * v10);
  axis->m[2].v[1] = (float)((float)(v13 * v9.m128_f32[0]) * v10) - (float)(v11 * v12);
  axis->m[2].v[2] = v13 * v8.m128_f32[0];
}

/*
==============
AnglesAndOriginToMatrix43
==============
*/
void AnglesAndOriginToMatrix43(const vec3_t *angles, const vec3_t *origin, tmat43_t<vec3_t> *result)
{
  float v3; 
  __m128 v; 
  __m128 v10; 
  __m128 v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float4 v16; 
  float4 v17; 

  v3 = angles->v[0];
  v17.v.m128_i32[3] = 0;
  v = v17.v;
  v.m128_f32[0] = v3;
  _XMM2 = v;
  __asm
  {
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
  }
  _mm128_mul_ps(_XMM2, g_degreeToRadian.v);
  v17.v = _XMM2;
  Float4SinCos((const float4 *)angles, &v17, &v16);
  v10 = v16.v;
  v11 = v17.v;
  v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v13 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v14 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
  v15 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  _XMM2.m128_f32[0] = v14 * v17.v.m128_f32[0];
  result->m[0].v[0] = v13 * v16.v.m128_f32[0];
  result->m[0].v[1] = v10.m128_f32[0] * v12;
  result->m[0].v[2] = COERCE_FLOAT(v11.m128_i32[0] ^ _xmm);
  result->m[1].v[0] = (float)(_XMM2.m128_f32[0] * v13) - (float)(v15 * v12);
  result->m[1].v[1] = (float)(_XMM2.m128_f32[0] * v12) + (float)(v15 * v13);
  result->m[1].v[2] = v10.m128_f32[0] * v14;
  result->m[2].v[0] = (float)((float)(v15 * v11.m128_f32[0]) * v13) + (float)(v14 * v12);
  result->m[2].v[1] = (float)((float)(v15 * v11.m128_f32[0]) * v12) - (float)(v13 * v14);
  result->m[2].v[2] = v15 * v10.m128_f32[0];
  result->m[3] = *origin;
}

/*
==============
YawToAxis
==============
*/
void YawToAxis(float yaw, tmat33_t<vec3_t> *axis)
{
  float v3; 
  float v4; 
  float c; 
  float s[5]; 

  FastSinCos(yaw * 0.017453292, s, &c);
  v3 = c;
  v4 = s[0];
  if ( axis )
  {
    axis->m[0].v[0] = c;
    axis->m[0].v[1] = v4;
    axis->m[0].v[2] = 0.0;
  }
  *(_QWORD *)axis->row2.v = 0i64;
  axis->m[2].v[2] = 1.0;
  axis->m[1].v[1] = v3;
  axis->m[1].v[0] = COERCE_FLOAT(LODWORD(v4) ^ _xmm);
  axis->m[1].v[2] = -0.0;
}

/*
==============
AxisToAngles
==============
*/
void AxisToAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v11; 
  __int128 v15; 
  float c; 
  float s[3]; 

  vectoangles(axis->m, angles);
  v4 = axis->m[1].v[0];
  v5 = axis->m[1].v[1];
  v6 = LODWORD(axis->m[1].v[2]);
  FastSinCos(angles->v[1] * -0.017453292, s, &c);
  v7 = (float)(v4 * c) - (float)(v5 * s[0]);
  v8 = (float)(v5 * c) + (float)(v4 * s[0]);
  FastSinCos(angles->v[0] * -0.017453292, s, &c);
  v11 = v6;
  v9 = (float)(*(float *)&v6 * s[0]) + (float)(v7 * c);
  *(float *)&v11 = (float)(*(float *)&v6 * c) - (float)(v7 * s[0]);
  _XMM0 = v11;
  if ( v8 == 0.0 && v9 == 0.0 )
  {
    __asm { vcmpless xmm2, xmm0, cs:__real@80000000 }
    _XMM0 = LODWORD(FLOAT_N90_0);
    __asm { vblendvps xmm3, xmm0, xmm1, xmm2 }
  }
  else
  {
    *(float *)&_XMM0 = atan2f_0(*(float *)&v11, fsqrt((float)(v8 * v8) + (float)(v9 * v9)));
    v15 = _XMM0;
    *(float *)&v15 = *(float *)&_XMM0 * -57.295776;
    _XMM3 = v15;
  }
  if ( v8 >= 0.0 )
  {
    angles->v[2] = COERCE_FLOAT(_XMM3 ^ _xmm);
  }
  else
  {
    _XMM0 = LODWORD(FLOAT_N180_0);
    __asm
    {
      vcmpltss xmm2, xmm3, xmm6
      vblendvps xmm1, xmm0, xmm1, xmm2
    }
    angles->v[2] = *(float *)&_XMM1 + *(float *)&_XMM3;
  }
}

/*
==============
Axis4ToAngles
==============
*/
void Axis4ToAngles(const tmat44_t<vec4_t> *axis, vec3_t *angles)
{
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v11; 
  __int128 v15; 
  float c; 
  float s[3]; 

  vectoangles((const vec3_t *)axis, angles);
  v4 = axis->m[1].v[0];
  v5 = axis->m[1].v[1];
  v6 = LODWORD(axis->m[1].v[2]);
  FastSinCos(angles->v[1] * -0.017453292, s, &c);
  v7 = (float)(v4 * c) - (float)(v5 * s[0]);
  v8 = (float)(v4 * s[0]) + (float)(v5 * c);
  FastSinCos(angles->v[0] * -0.017453292, s, &c);
  v9 = (float)(*(float *)&v6 * s[0]) + (float)(v7 * c);
  v11 = v6;
  *(float *)&v11 = (float)(*(float *)&v6 * c) - (float)(v7 * s[0]);
  _XMM0 = v11;
  if ( v8 == 0.0 && v9 == 0.0 )
  {
    __asm { vcmpless xmm2, xmm0, cs:__real@80000000 }
    _XMM0 = LODWORD(FLOAT_N90_0);
    __asm { vblendvps xmm3, xmm0, xmm1, xmm2 }
  }
  else
  {
    *(float *)&_XMM0 = atan2f_0(*(float *)&v11, fsqrt((float)(v8 * v8) + (float)(v9 * v9)));
    v15 = _XMM0;
    *(float *)&v15 = *(float *)&_XMM0 * -57.295776;
    _XMM3 = v15;
  }
  if ( v8 >= 0.0 )
  {
    angles->v[2] = COERCE_FLOAT(_XMM3 ^ _xmm);
  }
  else
  {
    _XMM0 = LODWORD(FLOAT_N180_0);
    __asm
    {
      vcmpltss xmm2, xmm3, xmm6
      vblendvps xmm1, xmm0, xmm1, xmm2
    }
    angles->v[2] = *(float *)&_XMM1 + *(float *)&_XMM3;
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

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 281, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 282, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  result = I_fclamp((float)((float)(a->v[0] * b->v[0]) + (float)(b->v[1] * a->v[1])) + (float)(b->v[2] * a->v[2]), -1.0, 1.0);
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
  double v6; 
  float result; 
  vec3_t cross; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 291, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 292, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 281, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( a ) )", "%s", "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 282, ASSERT_TYPE_SANITY, "( Vec3IsNormalized( b ) )", "%s", "Vec3IsNormalized( b )") )
    __debugbreak();
  v6 = I_fclamp((float)((float)(b->v[0] * a->v[0]) + (float)(b->v[1] * a->v[1])) + (float)(b->v[2] * a->v[2]), -1.0, 1.0);
  result = acosf_0(*(float *)&v6);
  if ( COERCE_FLOAT(LODWORD(result) & _xmm) > 0.000001 )
  {
    Vec3Cross(a, b, &cross);
    if ( (float)((float)((float)(cross.v[1] * reference->v[1]) + (float)(cross.v[0] * reference->v[0])) + (float)(cross.v[2] * reference->v[2])) < 0.0 )
      LODWORD(result) ^= _xmm;
  }
  return result;
}

/*
==============
RotateAroundDirection
==============
*/
void RotateAroundDirection(tmat33_t<vec3_t> *axis, const float yaw)
{
  __int128 v2; 
  __int128 v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  vec3_t *v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float c; 
  float s; 
  float v46; 
  float v47; 
  int v48[2]; 
  float v49; 
  __int128 v50; 
  __int128 v51; 

  v4 = axis->m[0].v[1];
  v5 = axis->m[0].v[0];
  v6 = axis->m[0].v[2];
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v9 = &axis->m[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 541, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( src ) )", "(%g, %g, %g) len %g", v5, v4, v6, fsqrt(v7)) )
    __debugbreak();
  v10 = axis->m[0].v[0];
  v11 = axis->m[0].v[1] * axis->m[0].v[1];
  v49 = axis->m[0].v[2] * axis->m[0].v[2];
  *(float *)&v48[1] = v11;
  *(float *)v48 = v10 * v10;
  v12 = (float)(v10 * v10) > v11;
  if ( v49 < *(float *)&v48[v12] )
    v12 = 2i64;
  LODWORD(v13) = LODWORD(axis->m[0].v[v12]) ^ _xmm;
  v9->v[0] = v10 * v13;
  v9->v[1] = v13 * axis->m[0].v[1];
  v9->v[2] = v13 * axis->m[0].v[2];
  v9->v[v12] = v9->v[v12] + 1.0;
  v14 = LODWORD(v9->v[0]);
  v15 = v14;
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v9->v[1] * v9->v[1])) + (float)(v9->v[2] * v9->v[2]));
  _XMM4 = v15;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  v9->v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
  v19 = (float)(1.0 / *(float *)&_XMM0) * v9->v[1];
  v9->v[1] = v19;
  v46 = (float)(1.0 / *(float *)&_XMM0) * v9->v[2];
  v9->v[2] = v46;
  if ( yaw != 0.0 )
  {
    v20 = axis->m[0].v[1];
    v21 = axis->m[0].v[0];
    v22 = axis->m[0].v[2];
    v23 = yaw * 0.017453292;
    v51 = v2;
    v50 = v3;
    v24 = v9->v[0];
    v25 = v19;
    v26 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v21, v20, v22, fsqrt(v26)) )
      __debugbreak();
    c = yaw * 0.017453292;
    if ( (LODWORD(v23) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
      __debugbreak();
    FastSinCos(v23, &s, &c);
    v27 = c;
    v28 = axis->m[0].v[1];
    v29 = axis->m[0].v[2];
    v30 = v28 * s;
    v31 = axis->m[0].v[0] * s;
    v32 = v29 * s;
    v33 = v29 * (float)(1.0 - c);
    v34 = axis->m[0].v[0] * (float)(1.0 - c);
    v35 = v28 * (float)(1.0 - c);
    v36 = v35 * axis->m[0].v[0];
    v37 = (float)(v34 * axis->m[0].v[0]) + c;
    s = v36 - (float)(v29 * s);
    c = (float)(v34 * v29) + v30;
    v47 = v36 + v32;
    v38 = v33 * v28;
    v39 = (float)(v35 * v28) + v27;
    v40 = (float)(v33 * v29) + v27;
    v41 = (float)(v34 * v29) - v30;
    if ( v48 == (int *)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    v42 = v46;
    v43 = v24 * v47;
    v9->v[0] = (float)((float)(v25 * s) + (float)(v37 * v24)) + (float)(v46 * c);
    v9->v[1] = (float)((float)(v25 * v39) + v43) + (float)(v42 * (float)(v38 - v31));
    v9->v[2] = (float)((float)(v25 * (float)(v38 + v31)) + (float)(v41 * v24)) + (float)(v42 * v40);
  }
  Vec3Cross(axis->m, v9, &axis->m[2]);
}

/*
==============
PolarToCartesian
==============
*/
void PolarToCartesian(const float angleInDegrees, const float radius, vec2_t *outCartesianCoords)
{
  float v4; 
  float c; 
  float s; 

  FastSinCos(angleInDegrees * 0.017453292, &s, &c);
  v4 = radius * s;
  outCartesianCoords->v[0] = radius * c;
  outCartesianCoords->v[1] = v4;
}

/*
==============
CartesianToPolar
==============
*/
void CartesianToPolar(const vec2_t *cartesianCoords, float *outAngleInDegrees, float *outRadius)
{
  float v6; 
  float v7; 

  if ( !outAngleInDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2612, ASSERT_TYPE_SANITY, "( outAngleInDegrees )", "%s", "outAngleInDegrees") )
    __debugbreak();
  if ( !outRadius && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2613, ASSERT_TYPE_SANITY, "( outRadius )", "%s", "outRadius") )
    __debugbreak();
  v6 = cartesianCoords->v[1];
  v7 = cartesianCoords->v[0];
  *outRadius = fsqrt((float)(cartesianCoords->v[0] * cartesianCoords->v[0]) + (float)(v6 * v6));
  *outAngleInDegrees = atan2f_0(v6, v7) * 57.295776;
}

/*
==============
ScaleFromAxis
==============
*/
void ScaleFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outUnscaledAxis, vec3_t *outScale)
{
  __int128 v3; 
  vec3_t *v4; 
  __int128 v5; 
  __int128 v9; 
  __int128 v10; 
  __int128 v14; 
  __int128 v16; 
  float v20; 
  unsigned int v21; 
  bool v22; 
  __int64 v23; 
  __int64 v24; 
  vec3_t cross; 

  v3 = LODWORD(axis->m[0].v[0]);
  v4 = outScale;
  v5 = v3;
  *(float *)&v5 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(axis->m[0].v[1] * axis->m[0].v[1])) + (float)(axis->m[0].v[2] * axis->m[0].v[2]));
  _XMM5 = v5;
  __asm
  {
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
  }
  outUnscaledAxis->m[0].v[0] = *(float *)&v3 * (float)(1.0 / *(float *)&_XMM0);
  outUnscaledAxis->m[0].v[1] = (float)(1.0 / *(float *)&_XMM0) * axis->m[0].v[1];
  outUnscaledAxis->m[0].v[2] = (float)(1.0 / *(float *)&_XMM0) * axis->m[0].v[2];
  outScale->v[0] = *(float *)&v5;
  v9 = LODWORD(axis->m[1].v[0]);
  v10 = v9;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(axis->m[1].v[1] * axis->m[1].v[1])) + (float)(axis->m[1].v[2] * axis->m[1].v[2]));
  _XMM5 = v10;
  __asm
  {
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
  }
  outUnscaledAxis->m[1].v[0] = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  outUnscaledAxis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[1];
  outUnscaledAxis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[2];
  outScale->v[1] = *(float *)&v10;
  v14 = LODWORD(axis->m[2].v[0]);
  v16 = v14;
  *(float *)&v16 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(axis->m[2].v[1] * axis->m[2].v[1])) + (float)(axis->m[2].v[2] * axis->m[2].v[2]));
  _XMM5 = v16;
  __asm
  {
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm5, xmm8, xmm0
  }
  outUnscaledAxis->m[2].v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
  outUnscaledAxis->m[2].v[1] = (float)(1.0 / *(float *)&_XMM0) * axis->m[2].v[1];
  outUnscaledAxis->m[2].v[2] = (float)(1.0 / *(float *)&_XMM0) * axis->m[2].v[2];
  outScale->v[2] = *(float *)&v16;
  Vec3Cross(&outUnscaledAxis->m[2], outUnscaledAxis->m, &cross);
  v20 = outUnscaledAxis->m[1].v[0];
  if ( (float)((float)((float)(cross.v[1] * outUnscaledAxis->m[1].v[1]) + (float)(v20 * cross.v[0])) + (float)(cross.v[2] * outUnscaledAxis->m[1].v[2])) < 0.0 )
  {
    outUnscaledAxis->m[1].v[0] = COERCE_FLOAT(LODWORD(v20) ^ _xmm);
    outUnscaledAxis->m[1].v[1] = COERCE_FLOAT(LODWORD(outUnscaledAxis->m[1].v[1]) ^ _xmm);
    outUnscaledAxis->m[1].v[2] = COERCE_FLOAT(LODWORD(outUnscaledAxis->m[1].v[2]) ^ _xmm);
    v4->v[1] = COERCE_FLOAT(LODWORD(v4->v[1]) ^ _xmm);
  }
  v21 = 0;
  v22 = 1;
  do
  {
    if ( !v22 )
    {
      LODWORD(v24) = 3;
      LODWORD(v23) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( v4->v[0] <= 0.0 )
    {
      if ( v21 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v23) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4->v[0] + 1.0) & _xmm) <= 0.001 )
      {
        if ( v21 >= 3 )
        {
          LODWORD(v24) = 3;
          LODWORD(v23) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v4->v[0] = -1.0;
      }
    }
    else
    {
      if ( v21 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v23) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4->v[0] - 1.0) & _xmm) <= 0.001 )
      {
        if ( v21 >= 3 )
        {
          LODWORD(v24) = 3;
          LODWORD(v23) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v4->v[0] = 1.0;
      }
    }
    ++v21;
    v4 = (vec3_t *)((char *)v4 + 4);
    v22 = v21 < 3;
  }
  while ( (int)v21 < 3 );
}

/*
==============
VectorRotateAngles
==============
*/
void VectorRotateAngles(const vec3_t *vIn, const vec3_t *vRotation, vec3_t *out)
{
  float v4; 
  float v5; 
  unsigned int *v6; 
  int v7; 
  bool v10; 
  __int128 v12; 
  __int64 v13; 
  double v31; 
  double v32; 
  __int64 v33; 
  float v34; 
  __int64 v35; 
  unsigned int v36; 
  __int128 v37; 
  __int64 v40; 
  unsigned int v41; 
  float v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  float v48; 
  __int64 v49; 
  float v50; 
  __int128 v51; 
  int v52; 
  int v53; 
  __int128 v54; 

  v54 = _XMM12;
  v4 = vIn->v[0];
  v5 = vIn->v[1];
  v6 = (unsigned int *)&v51 + 1;
  v7 = 0;
  v50 = vIn->v[2];
  v48 = v50;
  v51 = _xmm;
  *(float *)&v49 = v4;
  *((float *)&v49 + 1) = v5;
  *(float *)&v47 = v4;
  *((float *)&v47 + 1) = v5;
  v52 = 0;
  v53 = 1;
  v10 = 1;
  __asm { vxorpd  xmm12, xmm12, xmm12 }
  do
  {
    if ( !v10 )
    {
      LODWORD(v46) = 3;
      LODWORD(v45) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    if ( vRotation->v[0] != 0.0 )
    {
      if ( (unsigned int)v7 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      v12 = LODWORD(vRotation->v[0]);
      v13 = (int)*(v6 - 1);
      *(double *)&v12 = (float)(vRotation->v[0] * 3.1415927) * 0.005555555555555556;
      _XMM8 = v12;
      __asm { vandpd  xmm5, xmm8, xmm15 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM5 + 1);
      *(double *)&v12 = *(double *)&_XMM5 * 0.3183098861837907 + 0.5;
      _XMM1 = v12;
      __asm { vcvttsd2si eax, xmm1 }
      _XMM4 = _EAX;
      __asm { vcvtdq2pd xmm4, xmm4 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM4 + 1);
      *(double *)&v12 = *(double *)&_XMM4 * 0.5;
      _XMM2 = v12;
      __asm { vcvttsd2si eax, xmm2 }
      _XMM0 = _EAX;
      __asm { vcvtdq2pd xmm0, xmm0 }
      _XMM0 = *(unsigned __int64 *)&DOUBLE_N1_0;
      __asm { vcmplesd xmm3, xmm12, xmm1 }
      *(double *)&_XMM1 = *(double *)&_XMM4 * 3.141592653589793;
      __asm { vblendvpd xmm7, xmm0, xmm11, xmm3 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM5 + 1);
      *(double *)&v12 = *(double *)&_XMM5 - *(double *)&_XMM4 * 3.141592653589793;
      _XMM6 = v12;
      *(double *)&_XMM4 = *(double *)&_XMM6 * *(double *)&_XMM6;
      *(double *)&_XMM5 = (*(double *)&_XMM5 + 1.570796326794897 - *(double *)&_XMM1 - 1.570796326794897) * (*(double *)&_XMM5 + 1.570796326794897 - *(double *)&_XMM1 - 1.570796326794897);
      __asm
      {
        vcmplesd xmm0, xmm12, xmm8
        vxorpd  xmm1, xmm6, xmm14
        vblendvpd xmm2, xmm1, xmm6, xmm0
      }
      v31 = ((((((((*(double *)&_XMM6 * *(double *)&_XMM6 * 2.811457254345521e-15 - 7.647163731819816e-13) * *(double *)&_XMM4 + 1.605904383682161e-10) * *(double *)&_XMM4 - 0.00000002505210838544172) * *(double *)&_XMM4 + 0.000002755731922398589) * *(double *)&_XMM4 - 0.0001984126984126984) * *(double *)&_XMM4 + 0.008333333333333333) * *(double *)&_XMM4 - 0.1666666666666667) * *(double *)&_XMM4 + 1.0) * (*(double *)&_XMM2 * *(double *)&_XMM7);
      v32 = ((((((((*(double *)&_XMM5 * 4.779477332387385e-14 - 1.147074559772972e-11) * *(double *)&_XMM5 + 0.00000000208767569878681) * *(double *)&_XMM5 - 0.0000002755731922398589) * *(double *)&_XMM5 + 0.0000248015873015873) * *(double *)&_XMM5 - 0.001388888888888889) * *(double *)&_XMM5 + 0.04166666666666666) * *(double *)&_XMM5 - 0.5) * *(double *)&_XMM5 + 1.0) * *(double *)&_XMM7;
      if ( (unsigned int)v13 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = *(v6 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      v33 = (int)*v6;
      if ( (unsigned int)v33 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = *v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      v34 = *((float *)&v49 + v33);
      v35 = (int)*(v6 - 1);
      v36 = v35;
      *((_QWORD *)&v37 + 1) = 0i64;
      *(double *)&v37 = *((float *)&v49 + v13) * v32 - v34 * v31;
      _XMM2 = v37;
      __asm { vcvtsd2ss xmm6, xmm2, xmm2 }
      if ( (unsigned int)v35 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = *(v6 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
        {
          __debugbreak();
          v36 = *(v6 - 1);
        }
      }
      *((float *)&v47 + v35) = *(float *)&_XMM6;
      if ( v36 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      v40 = (int)*v6;
      v41 = v40;
      if ( (unsigned int)v40 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = *v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
        {
          __debugbreak();
          v41 = *v6;
        }
      }
      _XMM2 = COERCE_UNSIGNED_INT64(*((float *)&v49 + (int)v36) * v31 + *((float *)&v49 + v40) * v32);
      __asm { vcvtsd2ss xmm6, xmm2, xmm2 }
      if ( v41 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v45) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      *((float *)&v47 + (int)v41) = *(float *)&_XMM6;
    }
    ++v7;
    vRotation = (const vec3_t *)((char *)vRotation + 4);
    v50 = v48;
    v6 += 2;
    v49 = v47;
    v10 = (unsigned int)v7 < 3;
  }
  while ( v7 < 3 );
  v44 = *((float *)&v47 + 1);
  out->v[0] = *(float *)&v47;
  out->v[2] = v48;
  out->v[1] = v44;
}

/*
==============
VectorRotateAnglesAroundPoint
==============
*/
void VectorRotateAnglesAroundPoint(const vec3_t *vIn, const vec3_t *vRotation, const vec3_t *vOrigin, vec3_t *out)
{
  float v4; 
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  vec3_t vIna; 
  vec3_t outa; 

  v4 = vIn->v[1];
  vIna.v[0] = vIn->v[0] - vOrigin->v[0];
  v5 = v4 - vOrigin->v[1];
  v6 = vIn->v[2];
  vIna.v[1] = v5;
  vIna.v[2] = v6 - vOrigin->v[2];
  VectorRotateAngles(&vIna, vRotation, &outa);
  v9 = outa.v[1];
  out->v[0] = outa.v[0] + vOrigin->v[0];
  v10 = outa.v[2];
  out->v[1] = v9 + vOrigin->v[1];
  out->v[2] = v10 + vOrigin->v[2];
}

/*
==============
MatrixMultiply
==============
*/
void MatrixMultiply(const tmat33_t<vec3_t> *in1, const tmat33_t<vec3_t> *in2, tmat33_t<vec3_t> *out)
{
  out->m[0].v[0] = (float)((float)(in1->m[0].v[0] * in2->m[0].v[0]) + (float)(in2->m[1].v[0] * in1->m[0].v[1])) + (float)(in1->m[0].v[2] * in2->m[2].v[0]);
  out->m[0].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[0].v[1]) + (float)(in2->m[0].v[1] * in1->m[0].v[0])) + (float)(in2->m[2].v[1] * in1->m[0].v[2]);
  out->m[0].v[2] = (float)((float)(in2->m[1].v[2] * in1->m[0].v[1]) + (float)(in2->m[0].v[2] * in1->m[0].v[0])) + (float)(in2->m[2].v[2] * in1->m[0].v[2]);
  out->m[1].v[0] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[0]) + (float)(in1->m[1].v[0] * in2->m[0].v[0])) + (float)(in1->m[1].v[2] * in2->m[2].v[0]);
  out->m[1].v[1] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[1]) + (float)(in1->m[1].v[0] * in2->m[0].v[1])) + (float)(in1->m[1].v[2] * in2->m[2].v[1]);
  out->m[1].v[2] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[2]) + (float)(in1->m[1].v[0] * in2->m[0].v[2])) + (float)(in1->m[1].v[2] * in2->m[2].v[2]);
  out->m[2].v[0] = (float)((float)(in2->m[1].v[0] * in1->m[2].v[1]) + (float)(in2->m[0].v[0] * in1->m[2].v[0])) + (float)(in1->m[2].v[2] * in2->m[2].v[0]);
  out->m[2].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[2].v[1]) + (float)(in2->m[0].v[1] * in1->m[2].v[0])) + (float)(in2->m[2].v[1] * in1->m[2].v[2]);
  out->m[2].v[2] = (float)((float)(in2->m[1].v[2] * in1->m[2].v[1]) + (float)(in2->m[0].v[2] * in1->m[2].v[0])) + (float)(in2->m[2].v[2] * in1->m[2].v[2]);
}

/*
==============
MatrixDeterminant
==============
*/
float MatrixDeterminant(const tmat33_t<vec3_t> *in)
{
  return (float)((float)((float)((float)(in->m[2].v[2] * in->m[1].v[1]) - (float)(in->m[2].v[1] * in->m[1].v[2])) * in->m[0].v[0]) - (float)((float)((float)(in->m[2].v[2] * in->m[0].v[1]) - (float)(in->m[2].v[1] * in->m[0].v[2])) * in->m[1].v[0])) + (float)((float)((float)(in->m[1].v[2] * in->m[0].v[1]) - (float)(in->m[1].v[1] * in->m[0].v[2])) * in->m[2].v[0]);
}

/*
==============
DMatrixDeterminant
==============
*/
long double DMatrixDeterminant(const tmat33_t<dvec3_t> *in)
{
  return (in->m[2].z * in->m[1].y - in->m[2].y * in->m[1].z) * in->m[0].x - (in->m[2].z * in->m[0].y - in->m[2].y * in->m[0].z) * in->m[1].x + (in->m[1].z * in->m[0].y - in->m[1].y * in->m[0].z) * in->m[2].x;
}

/*
==============
MatrixDeterminant
==============
*/
float MatrixDeterminant(const tmat44_t<vec4_t> *in)
{
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 

  v2 = in->m[0].v[1];
  v1 = v2 * in->m[1].v[3];
  v3 = in->m[1].v[1];
  v4 = in->m[0].v[0] * in->m[1].v[3];
  v5 = in->m[1].v[2];
  v6 = in->m[3].v[2];
  v7 = v5 * v2;
  v8 = in->m[0].v[0] * v3;
  v9 = in->m[2].v[2];
  v10 = v3 * in->m[2].v[0];
  v11 = in->m[1].v[0];
  v12 = v2 * v11;
  v13 = v11 * in->m[2].v[1];
  v14 = (float)((float)((float)((float)(v1 * v9) * in->m[3].v[0]) - (float)((float)((float)(v5 * v2) * in->m[2].v[3]) * in->m[3].v[0])) - (float)((float)(v4 * v9) * in->m[3].v[1])) + (float)((float)((float)(v5 * in->m[0].v[0]) * in->m[2].v[3]) * in->m[3].v[1]);
  v15 = v4 * in->m[2].v[1];
  v16 = in->m[3].v[0];
  v17 = (float)((float)(v14 - (float)((float)(v1 * in->m[2].v[0]) * v6)) + (float)((float)((float)(v12 * in->m[2].v[3]) + v15) * v6)) - (float)((float)(v8 * in->m[2].v[3]) * v6);
  v18 = (float)((float)((float)((float)((float)(v5 * in->m[2].v[1]) * v16) - (float)((float)(v9 * v3) * v16)) - (float)((float)(v5 * in->m[2].v[0]) * in->m[3].v[1])) + (float)((float)(v9 * in->m[1].v[0]) * in->m[3].v[1])) + (float)(v10 * v6);
  v19 = v13 * v6;
  v20 = in->m[2].v[0];
  v21 = v7 * v20;
  v22 = in->m[3].v[3];
  return (float)((float)(v17 + (float)((float)(v18 - v19) * in->m[0].v[3])) + (float)((float)((float)((float)(v21 - (float)((float)(v5 * in->m[0].v[0]) * in->m[2].v[1])) - (float)(v12 * v9)) + (float)(v8 * v9)) * v22)) + (float)((float)((float)((float)((float)((float)((float)((float)(in->m[2].v[3] * in->m[1].v[1]) * v16) - (float)((float)(in->m[2].v[1] * in->m[1].v[3]) * v16)) + (float)((float)(v20 * in->m[1].v[3]) * in->m[3].v[1])) - (float)((float)(in->m[2].v[3] * in->m[1].v[0]) * in->m[3].v[1])) - (float)(v10 * v22)) + (float)(v13 * v22)) * in->m[0].v[2]);
}

/*
==============
MatrixInverseDet
==============
*/
void MatrixInverseDet(const tmat33_t<vec3_t> *in, const float determinant, tmat33_t<vec3_t> *out)
{
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out") )
    __debugbreak();
  if ( determinant == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  out->m[0].v[0] = (float)((float)(in->m[2].v[2] * in->m[1].v[1]) - (float)(in->m[1].v[2] * in->m[2].v[1])) * (float)(1.0 / determinant);
  out->m[0].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(in->m[2].v[2] * in->m[0].v[1]) - (float)(in->m[0].v[2] * in->m[2].v[1])) * (float)(1.0 / determinant)) ^ _xmm);
  out->m[0].v[2] = (float)((float)(in->m[1].v[2] * in->m[0].v[1]) - (float)(in->m[0].v[2] * in->m[1].v[1])) * (float)(1.0 / determinant);
  out->m[1].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(in->m[2].v[2] * in->m[1].v[0]) - (float)(in->m[1].v[2] * in->m[2].v[0])) * (float)(1.0 / determinant)) ^ _xmm);
  out->m[1].v[1] = (float)((float)(in->m[2].v[2] * in->m[0].v[0]) - (float)(in->m[0].v[2] * in->m[2].v[0])) * (float)(1.0 / determinant);
  out->m[1].v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(in->m[1].v[2] * in->m[0].v[0]) - (float)(in->m[0].v[2] * in->m[1].v[0])) * (float)(1.0 / determinant)) ^ _xmm);
  out->m[2].v[0] = (float)((float)(in->m[1].v[0] * in->m[2].v[1]) - (float)(in->m[2].v[0] * in->m[1].v[1])) * (float)(1.0 / determinant);
  out->m[2].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(in->m[0].v[0] * in->m[2].v[1]) - (float)(in->m[2].v[0] * in->m[0].v[1])) * (float)(1.0 / determinant)) ^ _xmm);
  out->m[2].v[2] = (float)((float)(in->m[0].v[0] * in->m[1].v[1]) - (float)(in->m[1].v[0] * in->m[0].v[1])) * (float)(1.0 / determinant);
}

/*
==============
DMatrixInverseDet
==============
*/
void DMatrixInverseDet(const tmat33_t<dvec3_t> *in, const long double determinant, tmat33_t<dvec3_t> *out)
{
  long double v7; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out") )
    __debugbreak();
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( determinant == *(double *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  v7 = 1.0 / determinant;
  out->m[0].x = (in->m[2].z * in->m[1].y - in->m[1].z * in->m[2].y) * (1.0 / determinant);
  _XMM3 = COERCE_UNSIGNED_INT64((in->m[2].z * in->m[0].y - in->m[0].z * in->m[2].y) * (1.0 / determinant));
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  out->m[0].y = *(double *)&_XMM1;
  out->m[0].z = (in->m[1].z * in->m[0].y - in->m[0].z * in->m[1].y) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64((in->m[2].z * in->m[1].x - in->m[1].z * in->m[2].x) * v7);
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  out->m[1].x = *(double *)&_XMM1;
  out->m[1].y = (in->m[2].z * in->m[0].x - in->m[0].z * in->m[2].x) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64((in->m[1].z * in->m[0].x - in->m[0].z * in->m[1].x) * v7);
  __asm { vxorpd  xmm0, xmm3, xmm5 }
  out->m[1].z = *(double *)&_XMM0;
  out->m[2].x = (in->m[1].x * in->m[2].y - in->m[2].x * in->m[1].y) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64((in->m[0].x * in->m[2].y - in->m[2].x * in->m[0].y) * v7);
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  out->m[2].y = *(double *)&_XMM1;
  out->m[2].z = (in->m[0].x * in->m[1].y - in->m[1].x * in->m[0].y) * v7;
}

/*
==============
MatrixInverse
==============
*/
void MatrixInverse(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  MatrixInverseDet(in, (float)((float)((float)((float)(in->m[2].v[2] * in->m[1].v[1]) - (float)(in->m[2].v[1] * in->m[1].v[2])) * in->m[0].v[0]) - (float)((float)((float)(in->m[2].v[2] * in->m[0].v[1]) - (float)(in->m[2].v[1] * in->m[0].v[2])) * in->m[1].v[0])) + (float)((float)((float)(in->m[1].v[2] * in->m[0].v[1]) - (float)(in->m[1].v[1] * in->m[0].v[2])) * in->m[2].v[0]), out);
}

/*
==============
MatrixInverse44
==============
*/

void __fastcall MatrixInverse44(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst, double a3, double a4)
{
  vec4_t v4; 
  vec4_t v5; 
  __m256i v6; 
  vector4 v8; 

  v6 = *(__m256i *)mat->row2.v;
  *(__m256i *)v8.x.v.m128_f32 = *(__m256i *)mat->m[0].v;
  *(__m256i *)v8.z.v.m128_f32 = v6;
  Float4x4Inverse(&v8, (const vector4 *)dst);
  dst->m[0] = v4;
  dst->m[1] = v5;
  dst->row2 = *(vec4_t *)&a3;
  dst->row3 = *(vec4_t *)&a4;
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
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2977, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->v[0] = (float)((float)(mulMat->m[0].v[1] * mulVec->v[1]) + (float)(mulMat->m[0].v[0] * mulVec->v[0])) + (float)(mulMat->m[0].v[2] * mulVec->v[2]);
  solution->v[1] = (float)((float)(mulMat->m[1].v[1] * mulVec->v[1]) + (float)(mulMat->m[1].v[0] * mulVec->v[0])) + (float)(mulMat->m[1].v[2] * mulVec->v[2]);
  solution->v[2] = (float)((float)(mulMat->m[2].v[1] * mulVec->v[1]) + (float)(mulMat->m[2].v[0] * mulVec->v[0])) + (float)(mulMat->m[2].v[2] * mulVec->v[2]);
}

/*
==============
MatrixVecMultiply
==============
*/
void MatrixVecMultiply(const tmat44_t<vec4_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2987, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->v[0] = (float)((float)((float)(mulMat->m[0].v[1] * mulVec->v[1]) + (float)(mulMat->m[0].v[0] * mulVec->v[0])) + (float)(mulMat->m[0].v[2] * mulVec->v[2])) + (float)(mulMat->m[0].v[3] * mulVec->v[3]);
  solution->v[1] = (float)((float)((float)(mulMat->m[1].v[1] * mulVec->v[1]) + (float)(mulMat->m[1].v[0] * mulVec->v[0])) + (float)(mulMat->m[1].v[2] * mulVec->v[2])) + (float)(mulMat->m[1].v[3] * mulVec->v[3]);
  solution->v[2] = (float)((float)((float)(mulMat->m[2].v[1] * mulVec->v[1]) + (float)(mulMat->m[2].v[0] * mulVec->v[0])) + (float)(mulMat->m[2].v[2] * mulVec->v[2])) + (float)(mulMat->m[2].v[3] * mulVec->v[3]);
  solution->v[3] = (float)((float)((float)(mulMat->m[3].v[1] * mulVec->v[1]) + (float)(mulMat->m[3].v[0] * mulVec->v[0])) + (float)(mulMat->m[3].v[2] * mulVec->v[2])) + (float)(mulMat->m[3].v[3] * mulVec->v[3]);
}

/*
==============
MatrixVecMultiply
==============
*/
void MatrixVecMultiply(const tmat43_t<vec3_t> *mulMat, const vec4_t *mulVec, vec4_t *solution)
{
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2998, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->v[0] = (float)((float)(mulMat->m[0].v[1] * mulVec->v[1]) + (float)(mulMat->m[0].v[0] * mulVec->v[0])) + (float)(mulMat->m[0].v[2] * mulVec->v[2]);
  solution->v[1] = (float)((float)(mulMat->m[1].v[1] * mulVec->v[1]) + (float)(mulMat->m[1].v[0] * mulVec->v[0])) + (float)(mulMat->m[1].v[2] * mulVec->v[2]);
  solution->v[2] = (float)((float)(mulMat->m[2].v[1] * mulVec->v[1]) + (float)(mulMat->m[2].v[0] * mulVec->v[0])) + (float)(mulMat->m[2].v[2] * mulVec->v[2]);
  solution->v[3] = (float)((float)((float)(mulMat->m[3].v[1] * mulVec->v[1]) + (float)(mulMat->m[3].v[0] * mulVec->v[0])) + (float)(mulMat->m[3].v[2] * mulVec->v[2])) + mulVec->v[3];
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat33_t<dvec3_t> *mulMat, const dvec3_t *mulVec, dvec3_t *solution)
{
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2977, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->x = mulMat->m[0].y * mulVec->y + mulMat->m[0].x * mulVec->x + mulMat->m[0].z * mulVec->z;
  solution->y = mulMat->m[1].y * mulVec->y + mulMat->m[1].x * mulVec->x + mulMat->m[1].z * mulVec->z;
  solution->z = mulMat->m[2].y * mulVec->y + mulMat->m[2].x * mulVec->x + mulMat->m[2].z * mulVec->z;
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat44_t<dvec4_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2987, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->v[0] = mulMat->m[0].v[1] * mulVec->v[1] + mulMat->m[0].v[0] * mulVec->v[0] + mulMat->m[0].v[2] * mulVec->v[2] + mulMat->m[0].v[3] * mulVec->v[3];
  solution->v[1] = mulMat->m[1].v[1] * mulVec->v[1] + mulMat->m[1].v[0] * mulVec->v[0] + mulMat->m[1].v[2] * mulVec->v[2] + mulMat->m[1].v[3] * mulVec->v[3];
  solution->v[2] = mulMat->m[2].v[1] * mulVec->v[1] + mulMat->m[2].v[0] * mulVec->v[0] + mulMat->m[2].v[2] * mulVec->v[2] + mulMat->m[2].v[3] * mulVec->v[3];
  solution->v[3] = mulMat->m[3].v[1] * mulVec->v[1] + mulMat->m[3].v[0] * mulVec->v[0] + mulMat->m[3].v[2] * mulVec->v[2] + mulMat->m[3].v[3] * mulVec->v[3];
}

/*
==============
DMatrixVecMultiply
==============
*/
void DMatrixVecMultiply(const tmat43_t<dvec3_t> *mulMat, const dvec4_t *mulVec, dvec4_t *solution)
{
  if ( mulVec == solution && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2998, ASSERT_TYPE_SANITY, "( &mulVec != &solution )", "%s", "&mulVec != &solution") )
    __debugbreak();
  solution->v[0] = mulMat->m[0].y * mulVec->v[1] + mulMat->m[0].x * mulVec->v[0] + mulMat->m[0].z * mulVec->v[2];
  solution->v[1] = mulMat->m[1].y * mulVec->v[1] + mulMat->m[1].x * mulVec->v[0] + mulMat->m[1].z * mulVec->v[2];
  solution->v[2] = mulMat->m[2].y * mulVec->v[1] + mulMat->m[2].x * mulVec->v[0] + mulMat->m[2].z * mulVec->v[2];
  solution->v[3] = mulMat->m[3].y * mulVec->v[1] + mulMat->m[3].x * mulVec->v[0] + mulMat->m[3].z * mulVec->v[2] + mulVec->v[3];
}

/*
==============
MatrixIdentity33
==============
*/
void MatrixIdentity33(tmat33_t<vec3_t> *out)
{
  *out = identityMatrix33;
}

/*
==============
MatrixIdentity34
==============
*/
void MatrixIdentity34(tmat34_t<vec4_t> *out)
{
  *(__m256i *)out->m[0].v = *(__m256i *)identityMatrix44.m[0].v;
  out->row2 = identityMatrix44.row2;
}

/*
==============
MatrixIdentity43
==============
*/
void MatrixIdentity43(tmat43_t<vec3_t> *out)
{
  *(__m256i *)out->m[0].v = *(__m256i *)identityMatrix33.m[0].v;
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
  *out = identityMatrix44;
}

/*
==============
MatrixSet43
==============
*/
void MatrixSet43(tmat43_t<vec3_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  out->m[0].v[0] = scale * axis->m[0].v[0];
  out->m[0].v[1] = scale * axis->m[0].v[1];
  out->m[0].v[2] = scale * axis->m[0].v[2];
  out->m[1].v[0] = scale * axis->m[1].v[0];
  out->m[1].v[1] = scale * axis->m[1].v[1];
  out->m[1].v[2] = scale * axis->m[1].v[2];
  out->m[2].v[0] = scale * axis->m[2].v[0];
  out->m[2].v[1] = scale * axis->m[2].v[1];
  out->m[2].v[2] = scale * axis->m[2].v[2];
  out->m[3] = *origin;
}

/*
==============
MatrixSet44
==============
*/
void MatrixSet44(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  out->m[0].v[0] = scale * axis->m[0].v[0];
  out->m[0].v[1] = scale * axis->m[0].v[1];
  out->m[0].v[2] = scale * axis->m[0].v[2];
  out->m[0].v[3] = 0.0;
  out->m[1].v[0] = scale * axis->m[1].v[0];
  out->m[1].v[1] = scale * axis->m[1].v[1];
  out->m[1].v[2] = scale * axis->m[1].v[2];
  out->m[1].v[3] = 0.0;
  out->m[2].v[0] = scale * axis->m[2].v[0];
  out->m[2].v[1] = scale * axis->m[2].v[1];
  out->m[2].v[2] = scale * axis->m[2].v[2];
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
  out->m[0].v[0] = axis->m[0].v[0] * scale->v[0];
  out->m[0].v[1] = axis->m[0].v[1] * scale->v[0];
  out->m[0].v[2] = axis->m[0].v[2] * scale->v[0];
  out->m[0].v[3] = 0.0;
  out->m[1].v[0] = axis->m[1].v[0] * scale->v[1];
  out->m[1].v[1] = axis->m[1].v[1] * scale->v[1];
  out->m[1].v[2] = axis->m[1].v[2] * scale->v[1];
  out->m[1].v[3] = 0.0;
  out->m[2].v[0] = axis->m[2].v[0] * scale->v[2];
  out->m[2].v[1] = axis->m[2].v[1] * scale->v[2];
  out->m[2].v[2] = axis->m[2].v[2] * scale->v[2];
  out->m[2].v[3] = 0.0;
  out->m[3].xyz = *origin;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixSet44Transposed
==============
*/
void MatrixSet44Transposed(tmat44_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  out->m[0].v[0] = scale * axis->m[0].v[0];
  out->m[0].v[1] = scale * axis->m[1].v[0];
  out->m[0].v[2] = scale * axis->m[2].v[0];
  out->m[0].v[3] = origin->v[0];
  out->m[1].v[0] = scale * axis->m[0].v[1];
  out->m[1].v[1] = scale * axis->m[1].v[1];
  out->m[1].v[2] = scale * axis->m[2].v[1];
  out->m[1].v[3] = origin->v[1];
  out->m[2].v[0] = scale * axis->m[0].v[2];
  out->m[2].v[1] = scale * axis->m[1].v[2];
  out->m[2].v[2] = scale * axis->m[2].v[2];
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
  out->m[0].v[0] = axis->m[0].v[0] * scale->v[0];
  out->m[0].v[1] = axis->m[1].v[0] * scale->v[1];
  out->m[0].v[2] = axis->m[2].v[0] * scale->v[2];
  out->m[0].v[3] = origin->v[0];
  out->m[1].v[0] = axis->m[0].v[1] * scale->v[0];
  out->m[1].v[1] = axis->m[1].v[1] * scale->v[1];
  out->m[1].v[2] = axis->m[2].v[1] * scale->v[2];
  out->m[1].v[3] = origin->v[1];
  out->m[2].v[0] = axis->m[0].v[2] * scale->v[0];
  out->m[2].v[1] = axis->m[1].v[2] * scale->v[1];
  out->m[2].v[2] = axis->m[2].v[2] * scale->v[2];
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
void MatrixSet34Transposed(tmat34_t<vec4_t> *out, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  out->m[0].v[0] = scale * axis->m[0].v[0];
  out->m[0].v[1] = scale * axis->m[1].v[0];
  out->m[0].v[2] = scale * axis->m[2].v[0];
  out->m[0].v[3] = origin->v[0];
  out->m[1].v[0] = scale * axis->m[0].v[1];
  out->m[1].v[1] = scale * axis->m[1].v[1];
  out->m[1].v[2] = scale * axis->m[2].v[1];
  out->m[1].v[3] = origin->v[1];
  out->m[2].v[0] = scale * axis->m[0].v[2];
  out->m[2].v[1] = scale * axis->m[1].v[2];
  out->m[2].v[2] = scale * axis->m[2].v[2];
  out->m[2].v[3] = origin->v[2];
}

/*
==============
MatrixCopy33
==============
*/
void MatrixCopy33(const tmat33_t<vec3_t> *src, tmat33_t<vec3_t> *dst)
{
  *dst = *src;
}

/*
==============
MatrixCopy43
==============
*/
void MatrixCopy43(const tmat43_t<vec3_t> *src, tmat43_t<vec3_t> *dst)
{
  *dst = *src;
}

/*
==============
MatrixCopy44
==============
*/
void MatrixCopy44(const tmat44_t<vec4_t> *src, tmat44_t<vec4_t> *dst)
{
  *dst = *src;
}

/*
==============
MatrixTransformVector43
==============
*/
void MatrixTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3327, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)((float)(in2->m[1].v[0] * in1->v[1]) + (float)(in1->v[0] * in2->m[0].v[0])) + (float)(in2->m[2].v[0] * in1->v[2])) + in2->m[3].v[0];
  out->v[1] = (float)((float)((float)(in2->m[0].v[1] * in1->v[0]) + (float)(in2->m[1].v[1] * in1->v[1])) + (float)(in2->m[2].v[1] * in1->v[2])) + in2->m[3].v[1];
  out->v[2] = (float)((float)((float)(in2->m[0].v[2] * in1->v[0]) + (float)(in2->m[1].v[2] * in1->v[1])) + (float)(in2->m[2].v[2] * in1->v[2])) + in2->m[3].v[2];
}

/*
==============
MatrixTransposeTransformVector43
==============
*/
void MatrixTransposeTransformVector43(const vec3_t *in1, const tmat43_t<vec3_t> *in2, vec3_t *out)
{
  float v6; 
  float v7; 
  float v8; 

  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3337, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  v6 = in1->v[0] - in2->m[3].v[0];
  v7 = in1->v[1] - in2->m[3].v[1];
  v8 = in1->v[2] - in2->m[3].v[2];
  out->v[0] = (float)((float)(v7 * in2->m[0].v[1]) + (float)(v6 * in2->m[0].v[0])) + (float)(v8 * in2->m[0].v[2]);
  out->v[1] = (float)((float)(v7 * in2->m[1].v[1]) + (float)(v6 * in2->m[1].v[0])) + (float)(v8 * in2->m[1].v[2]);
  out->v[2] = (float)((float)(v7 * in2->m[2].v[1]) + (float)(v6 * in2->m[2].v[0])) + (float)(v8 * in2->m[2].v[2]);
}

/*
==============
MatrixMultiply43
==============
*/
void MatrixMultiply43(const tmat43_t<vec3_t> *in1, const tmat43_t<vec3_t> *in2, tmat43_t<vec3_t> *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3190, ASSERT_TYPE_SANITY, "( &in1 != &out )", "%s", "&in1 != &out") )
    __debugbreak();
  if ( in2 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3191, ASSERT_TYPE_SANITY, "( &in2 != &out )", "%s", "&in2 != &out") )
    __debugbreak();
  out->m[0].v[0] = (float)((float)(in1->m[0].v[0] * in2->m[0].v[0]) + (float)(in2->m[1].v[0] * in1->m[0].v[1])) + (float)(in1->m[0].v[2] * in2->m[2].v[0]);
  out->m[1].v[0] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[0]) + (float)(in1->m[1].v[0] * in2->m[0].v[0])) + (float)(in1->m[1].v[2] * in2->m[2].v[0]);
  out->m[2].v[0] = (float)((float)(in1->m[2].v[1] * in2->m[1].v[0]) + (float)(in1->m[2].v[0] * in2->m[0].v[0])) + (float)(in1->m[2].v[2] * in2->m[2].v[0]);
  out->m[0].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[0].v[1]) + (float)(in2->m[0].v[1] * in1->m[0].v[0])) + (float)(in2->m[2].v[1] * in1->m[0].v[2]);
  out->m[1].v[1] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[1]) + (float)(in1->m[1].v[0] * in2->m[0].v[1])) + (float)(in1->m[1].v[2] * in2->m[2].v[1]);
  out->m[2].v[1] = (float)((float)(in1->m[2].v[1] * in2->m[1].v[1]) + (float)(in1->m[2].v[0] * in2->m[0].v[1])) + (float)(in1->m[2].v[2] * in2->m[2].v[1]);
  out->m[0].v[2] = (float)((float)(in1->m[0].v[0] * in2->m[0].v[2]) + (float)(in2->m[1].v[2] * in1->m[0].v[1])) + (float)(in1->m[0].v[2] * in2->m[2].v[2]);
  out->m[1].v[2] = (float)((float)(in1->m[1].v[1] * in2->m[1].v[2]) + (float)(in1->m[1].v[0] * in2->m[0].v[2])) + (float)(in1->m[1].v[2] * in2->m[2].v[2]);
  out->m[2].v[2] = (float)((float)(in1->m[2].v[1] * in2->m[1].v[2]) + (float)(in1->m[2].v[0] * in2->m[0].v[2])) + (float)(in1->m[2].v[2] * in2->m[2].v[2]);
  out->m[3].v[0] = (float)((float)((float)(in1->m[3].v[1] * in2->m[1].v[0]) + (float)(in1->m[3].v[0] * in2->m[0].v[0])) + (float)(in1->m[3].v[2] * in2->m[2].v[0])) + in2->m[3].v[0];
  out->m[3].v[1] = (float)((float)((float)(in1->m[3].v[1] * in2->m[1].v[1]) + (float)(in1->m[3].v[0] * in2->m[0].v[1])) + (float)(in1->m[3].v[2] * in2->m[2].v[1])) + in2->m[3].v[1];
  out->m[3].v[2] = (float)((float)((float)(in1->m[3].v[1] * in2->m[1].v[2]) + (float)(in1->m[3].v[0] * in2->m[0].v[2])) + (float)(in1->m[3].v[2] * in2->m[2].v[2])) + in2->m[3].v[2];
}

/*
==============
MatrixMultiply34
==============
*/
void MatrixMultiply34(const tmat34_t<vec4_t> *in1, const tmat34_t<vec4_t> *in2, tmat34_t<vec4_t> *out)
{
  out->m[0].v[0] = (float)((float)(in1->m[0].v[0] * in2->m[0].v[0]) + (float)(in2->m[1].v[0] * in1->m[0].v[1])) + (float)(in1->m[0].v[2] * in2->m[2].v[0]);
  out->m[0].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[0].v[1]) + (float)(in2->m[0].v[1] * in1->m[0].v[0])) + (float)(in2->m[2].v[1] * in1->m[0].v[2]);
  out->m[0].v[2] = (float)((float)(in2->m[1].v[2] * in1->m[0].v[1]) + (float)(in2->m[0].v[2] * in1->m[0].v[0])) + (float)(in2->m[2].v[2] * in1->m[0].v[2]);
  out->m[0].v[3] = 0.0;
  out->m[1].v[0] = (float)((float)(in2->m[1].v[0] * in1->m[1].v[1]) + (float)(in2->m[0].v[0] * in1->m[1].v[0])) + (float)(in1->m[1].v[2] * in2->m[2].v[0]);
  out->m[1].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[1].v[1]) + (float)(in2->m[0].v[1] * in1->m[1].v[0])) + (float)(in2->m[2].v[1] * in1->m[1].v[2]);
  out->m[1].v[2] = (float)((float)(in2->m[1].v[2] * in1->m[1].v[1]) + (float)(in2->m[0].v[2] * in1->m[1].v[0])) + (float)(in2->m[2].v[2] * in1->m[1].v[2]);
  out->m[1].v[3] = 0.0;
  out->m[2].v[0] = (float)((float)(in2->m[1].v[0] * in1->m[2].v[1]) + (float)(in2->m[0].v[0] * in1->m[2].v[0])) + (float)(in1->m[2].v[2] * in2->m[2].v[0]);
  out->m[2].v[1] = (float)((float)(in2->m[1].v[1] * in1->m[2].v[1]) + (float)(in2->m[0].v[1] * in1->m[2].v[0])) + (float)(in2->m[2].v[1] * in1->m[2].v[2]);
  out->m[2].v[2] = (float)((float)(in2->m[1].v[2] * in1->m[2].v[1]) + (float)(in2->m[0].v[2] * in1->m[2].v[0])) + (float)(in2->m[2].v[2] * in1->m[2].v[2]);
  out->m[2].v[3] = 0.0;
}

/*
==============
MatrixMultiply44
==============
*/

void __fastcall MatrixMultiply44(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out, double a4)
{
  vec4_t v4; 
  vec4_t v5; 
  vec4_t v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v10; 
  vector4 M1; 
  vector4 v12; 

  v7 = *(__m256i *)in1->row2.v;
  *(__m256i *)v12.x.v.m128_f32 = *(__m256i *)in1->m[0].v;
  v10 = *(__m256i *)in2->row2.v;
  v8 = *(__m256i *)in2->m[0].v;
  *(__m256i *)v12.z.v.m128_f32 = v7;
  *(__m256i *)M1.x.v.m128_f32 = v8;
  *(__m256i *)M1.z.v.m128_f32 = v10;
  Float4x4Mul(&v12, &M1, (const vector4 *)out);
  out->m[0] = v4;
  out->m[1] = v5;
  out->m[2] = v6;
  out->row3 = *(vec4_t *)&a4;
}

/*
==============
MatrixTransformPos44
==============
*/
void MatrixTransformPos44(const vec3_t *pos, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  _XMM0 = *(_OWORD *)pos->v;
  __asm { vinsertps xmm5, xmm0, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
  *(__m128 *)out = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 255), (__m128)mat->m[3]), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 85), (__m128)mat->m[1])), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 170), (__m128)mat->m[2]), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 0), (__m128)mat->m[0])));
}

/*
==============
MatrixTransformDir44
==============
*/
void MatrixTransformDir44(const vec3_t *dir, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  __int128 v4; 
  __int128 v7; 

  HIDWORD(v7) = 0;
  v4 = v7;
  *(float *)&v4 = dir->v[0];
  _XMM5 = v4;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rcx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+8], 20h ; ' '
  }
  *(__m128 *)out = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 255), (__m128)mat->m[3]), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 85), (__m128)mat->m[1])), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 170), (__m128)mat->m[2]), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 0), (__m128)mat->m[0])));
}

/*
==============
MatrixTransformVector44
==============
*/
void MatrixTransformVector44(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  *(__m128 *)out = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 255), (__m128)mat->m[3]), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 85), (__m128)mat->m[1])), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 170), (__m128)mat->m[2]), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 0), (__m128)mat->m[0])));
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
  __m128 v2; 
  vec4_t v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 

  v2 = _mm_shuffle_ps((__m128)in->m[0], (__m128)in->m[1], 68);
  v3 = in->m[2];
  v4 = _mm_shuffle_ps((__m128)v3, (__m128)in->m[3], 68);
  v5 = _mm_shuffle_ps((__m128)in->m[0], (__m128)in->m[1], 238);
  v6 = _mm_shuffle_ps((__m128)v3, (__m128)in->m[3], 238);
  out->m[0] = (vec4_t)_mm_shuffle_ps(v2, v4, 136);
  out->m[1] = (vec4_t)_mm_shuffle_ps(v2, v4, 221);
  out->m[2] = (vec4_t)_mm_shuffle_ps(v5, v6, 136);
  out->m[3] = (vec4_t)_mm_shuffle_ps(v5, v6, 221);
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
  float v4; 
  vec3_t in1; 

  MatrixTranspose((const tmat33_t<vec3_t> *)in, (tmat33_t<vec3_t> *)out);
  LODWORD(v4) = LODWORD(in->m[3].v[1]) ^ _xmm;
  LODWORD(in1.v[0]) = LODWORD(in->m[3].v[0]) ^ _xmm;
  LODWORD(in1.v[2]) = LODWORD(in->m[3].v[2]) ^ _xmm;
  in1.v[1] = v4;
  MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)out, &out->m[3]);
}

/*
==============
DMatrixInverseOrthogonal43
==============
*/
void DMatrixInverseOrthogonal43(const tmat43_t<dvec3_t> *in, tmat43_t<dvec3_t> *out)
{
  char v10; 

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
  _XMM0 = *(unsigned __int64 *)&in->m[3].x;
  _XMM1 = *(unsigned __int64 *)&in->m[3].z;
  __asm { vxorpd  xmm6, xmm0, xmm2 }
  _XMM0 = *(unsigned __int64 *)&in->m[3].y;
  __asm
  {
    vxorpd  xmm7, xmm0, xmm2
    vxorpd  xmm8, xmm1, xmm2
  }
  if ( &v10 == (char *)&out->row3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  out->m[3].x = *(double *)&_XMM6 * out->m[0].x + *(double *)&_XMM7 * out->m[1].x + *(double *)&_XMM8 * out->m[2].x;
  out->m[3].y = *(double *)&_XMM7 * out->m[1].y + *(double *)&_XMM6 * out->m[0].y + *(double *)&_XMM8 * out->m[2].y;
  out->m[3].z = *(double *)&_XMM6 * out->m[0].z + *(double *)&_XMM7 * out->m[1].z + *(double *)&_XMM8 * out->m[2].z;
}

/*
==============
MatrixInverseOrthogonal43
==============
*/
void MatrixInverseOrthogonal43(const tmat33_t<vec3_t> *axis, const vec3_t *origin, tmat43_t<vec3_t> *out)
{
  float v5; 
  vec3_t in1; 

  MatrixTranspose(axis, (tmat33_t<vec3_t> *)out);
  LODWORD(v5) = LODWORD(origin->v[1]) ^ _xmm;
  LODWORD(in1.v[0]) = LODWORD(origin->v[0]) ^ _xmm;
  LODWORD(in1.v[2]) = LODWORD(origin->v[2]) ^ _xmm;
  in1.v[1] = v5;
  MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)out, &out->m[3]);
}

/*
==============
MatrixRotationX
==============
*/
void MatrixRotationX(tmat33_t<vec3_t> *mat, float degrees)
{
  float v3; 
  float v4; 
  float v5; 
  float s; 
  float c; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  *(_QWORD *)mat->m[0].v = 1065353216i64;
  *(_QWORD *)&mat->row0.z = 0i64;
  mat->m[1].v[1] = v4;
  mat->m[1].v[2] = v5;
  mat->m[2].v[0] = 0.0;
  mat->m[2].v[1] = v3;
  mat->m[2].v[2] = v4;
}

/*
==============
MatrixRotationY
==============
*/
void MatrixRotationY(tmat33_t<vec3_t> *mat, float degrees)
{
  float v3; 
  float v4; 
  float s; 
  float c; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = c;
  v4 = s;
  mat->m[0].v[0] = c;
  mat->m[0].v[1] = 0.0;
  mat->m[0].v[2] = v4;
  mat->m[1].v[0] = 0.0;
  *(_QWORD *)&mat->row1.y = 1065353216i64;
  mat->m[2].v[0] = COERCE_FLOAT(LODWORD(v4) ^ _xmm);
  mat->m[2].v[1] = 0.0;
  mat->m[2].v[2] = v3;
}

/*
==============
MatrixRotationZ
==============
*/
void MatrixRotationZ(tmat33_t<vec3_t> *mat, float degrees)
{
  float v3; 
  float v4; 
  float v5; 
  float s; 
  float c; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  mat->m[0].v[0] = c;
  mat->m[0].v[1] = v5;
  mat->m[0].v[2] = 0.0;
  mat->m[1].v[0] = v3;
  mat->m[1].v[1] = v4;
  *(_QWORD *)&mat->row1.z = 0i64;
  mat->m[2].v[1] = 0.0;
  mat->m[2].v[2] = 1.0;
}

/*
==============
MatrixRotationDeg
==============
*/
void MatrixRotationDeg(tmat33_t<vec3_t> *mat, const vec3_t *dir, float degrees)
{
  float v3; 
  float v4; 
  float v5; 
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float c; 
  float s[31]; 

  v3 = dir->v[1];
  v4 = dir->v[0];
  v5 = dir->v[2];
  v7 = degrees * 0.017453292;
  v9 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v4, v3, v5, fsqrt(v9)) )
    __debugbreak();
  c = degrees * 0.017453292;
  if ( (LODWORD(v7) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  FastSinCos(v7, s, &c);
  v10 = dir->v[0];
  v11 = dir->v[2];
  v12 = dir->v[1];
  v13 = c;
  v14 = dir->v[0] * s[0];
  v15 = v11 * s[0];
  v16 = v12 * s[0];
  v17 = v11 * (float)(1.0 - c);
  v18 = v12 * (float)(1.0 - c);
  v19 = dir->v[0] * (float)(1.0 - c);
  mat->m[0].v[0] = (float)(v19 * dir->v[0]) + c;
  mat->m[0].v[1] = (float)(v18 * v10) - v15;
  mat->m[0].v[2] = v16 + (float)(v19 * v11);
  mat->m[1].v[0] = v15 + (float)(v18 * v10);
  mat->m[1].v[1] = (float)(v18 * dir->v[1]) + v13;
  v20 = v17 * v12;
  mat->m[1].v[2] = v20 - v14;
  mat->m[2].v[0] = (float)(v19 * v11) - v16;
  mat->m[2].v[1] = v14 + v20;
  mat->m[2].v[2] = (float)(v17 * dir->v[2]) + v13;
}

/*
==============
MatrixRotationXRad
==============
*/
void MatrixRotationXRad(tmat33_t<vec3_t> *mat, float radians)
{
  float v3; 
  float v4; 
  float v5; 
  float c; 
  float s; 

  FastSinCos(radians, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  *(_QWORD *)mat->m[0].v = 1065353216i64;
  *(_QWORD *)&mat->row0.z = 0i64;
  mat->m[1].v[1] = v4;
  mat->m[1].v[2] = v5;
  mat->m[2].v[0] = 0.0;
  mat->m[2].v[1] = v3;
  mat->m[2].v[2] = v4;
}

/*
==============
MatrixRotationYRad
==============
*/
void MatrixRotationYRad(tmat33_t<vec3_t> *mat, float radians)
{
  float v3; 
  float v4; 
  float c; 
  float s; 

  FastSinCos(radians, &s, &c);
  v3 = c;
  v4 = s;
  mat->m[0].v[0] = c;
  mat->m[0].v[1] = 0.0;
  mat->m[0].v[2] = v4;
  mat->m[1].v[0] = 0.0;
  *(_QWORD *)&mat->row1.y = 1065353216i64;
  mat->m[2].v[0] = COERCE_FLOAT(LODWORD(v4) ^ _xmm);
  mat->m[2].v[1] = 0.0;
  mat->m[2].v[2] = v3;
}

/*
==============
MatrixRotationZRad
==============
*/
void MatrixRotationZRad(tmat33_t<vec3_t> *mat, float radians)
{
  float v3; 
  float v4; 
  float v5; 
  float c; 
  float s; 

  FastSinCos(radians, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  mat->m[0].v[0] = c;
  mat->m[0].v[1] = v5;
  mat->m[0].v[2] = 0.0;
  mat->m[1].v[0] = v3;
  mat->m[1].v[1] = v4;
  *(_QWORD *)&mat->row1.z = 0i64;
  mat->m[2].v[1] = 0.0;
  mat->m[2].v[2] = 1.0;
}

/*
==============
MatrixRotationRad
==============
*/
void MatrixRotationRad(tmat33_t<vec3_t> *mat, const vec3_t *dir, float radians)
{
  float v3; 
  float v4; 
  float v6; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float c; 
  float s[31]; 

  v3 = dir->v[1];
  v4 = dir->v[0];
  v6 = dir->v[2];
  v8 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3462, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v4, v3, v6, fsqrt(v8)) )
    __debugbreak();
  c = radians;
  if ( (LODWORD(radians) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3463, ASSERT_TYPE_SANITY, "( !IS_NAN( radians ) )", "%s", "!IS_NAN( radians )") )
    __debugbreak();
  FastSinCos(radians, s, &c);
  v9 = dir->v[0];
  v10 = dir->v[2];
  v11 = dir->v[1];
  v12 = c;
  v13 = v10 * s[0];
  v14 = dir->v[0] * s[0];
  v15 = v11 * s[0];
  v16 = v10 * (float)(1.0 - c);
  v17 = v11 * (float)(1.0 - c);
  v18 = dir->v[0] * (float)(1.0 - c);
  mat->m[0].v[0] = (float)(v18 * dir->v[0]) + c;
  mat->m[0].v[1] = (float)(v17 * v9) - v13;
  mat->m[0].v[2] = v15 + (float)(v18 * v10);
  mat->m[1].v[0] = v13 + (float)(v17 * v9);
  mat->m[1].v[1] = (float)(v17 * dir->v[1]) + v12;
  v19 = v16 * v11;
  mat->m[1].v[2] = v19 - v14;
  mat->m[2].v[0] = (float)(v18 * v10) - v15;
  mat->m[2].v[1] = v14 + v19;
  mat->m[2].v[2] = (float)(v16 * dir->v[2]) + v12;
}

/*
==============
VecToMatrix
==============
*/
void VecToMatrix(const vec3_t *vec, tmat33_t<vec3_t> *axis)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 

  v2 = vec->v[2];
  *(double *)axis->m[0].v = *(double *)vec->v;
  axis->m[0].v[2] = v2;
  v3 = vec->v[0];
  v4 = vec->v[2];
  if ( COERCE_FLOAT(LODWORD(vec->v[0]) & _xmm) <= COERCE_FLOAT(LODWORD(v4) & _xmm) )
  {
    LODWORD(v3) = LODWORD(v4) ^ _xmm;
    v6 = vec->v[1];
    v5 = 0.0;
  }
  else
  {
    LODWORD(v5) = LODWORD(vec->v[1]) ^ _xmm;
    v6 = 0.0;
  }
  axis->m[1].v[0] = v5;
  axis->m[1].v[1] = v3;
  axis->m[1].v[2] = v6;
  v7 = LODWORD(axis->m[1].v[0]);
  v8 = v7;
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(axis->m[1].v[1] * axis->m[1].v[1])) + (float)(axis->m[1].v[2] * axis->m[1].v[2]));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  axis->m[1].v[0] = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  axis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[1];
  axis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[2];
  Vec3Cross(&axis->m[1], axis->m, &axis->m[2]);
}

/*
==============
MatrixForViewer
==============
*/
void MatrixForViewer(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  tmat33_t<vec3_t> out; 

  MatrixInverseDet(axis, (float)((float)((float)((float)(axis->m[2].v[2] * axis->m[1].v[1]) - (float)(axis->m[1].v[2] * axis->m[2].v[1])) * axis->m[0].v[0]) - (float)((float)((float)(axis->m[2].v[2] * axis->m[0].v[1]) - (float)(axis->m[0].v[2] * axis->m[2].v[1])) * axis->m[1].v[0])) + (float)((float)((float)(axis->m[1].v[2] * axis->m[0].v[1]) - (float)(axis->m[0].v[2] * axis->m[1].v[1])) * axis->m[2].v[0]), &out);
  v5 = out.m[2].v[1];
  mtx->m[0].v[0] = COERCE_FLOAT(LODWORD(out.m[0].v[1]) ^ _xmm);
  mtx->m[1].v[0] = COERCE_FLOAT(LODWORD(out.m[1].v[1]) ^ _xmm);
  mtx->m[2].v[0] = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
  v6 = out.m[2].v[2];
  v7 = out.m[0].v[2];
  v8 = out.m[1].v[2];
  mtx->m[3].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mtx->m[1].v[0] * origin->v[1]) + (float)(mtx->m[0].v[0] * origin->v[0])) + (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * origin->v[2])) ^ _xmm);
  mtx->m[0].v[1] = v7;
  mtx->m[1].v[1] = v8;
  mtx->m[2].v[1] = v6;
  v9 = v6 * origin->v[2];
  v10 = out.m[2].v[0];
  v11 = (float)((float)(mtx->m[1].v[1] * origin->v[1]) + (float)(origin->v[0] * mtx->m[0].v[1])) + v9;
  v12 = out.m[0].v[0];
  LODWORD(v13) = LODWORD(v11) ^ _xmm;
  v14 = out.m[1].v[0];
  mtx->m[3].v[1] = v13;
  mtx->m[0].v[2] = v12;
  mtx->m[1].v[2] = v14;
  mtx->m[2].v[2] = v10;
  mtx->m[3].v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mtx->m[0].v[2] * origin->v[0]) + (float)(mtx->m[1].v[2] * origin->v[1])) + (float)(v10 * origin->v[2])) ^ _xmm);
  mtx->m[0].v[3] = 0.0;
  mtx->m[1].v[3] = 0.0;
  mtx->m[2].v[3] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
QuatToAxis
==============
*/
void QuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  vec4_t v2; 
  __m128 v7; 
  __m128 v8; 
  __m128 v10; 
  __m128 v11; 

  v2 = *quat;
  _XMM0 = _mm128_mul_ps((__m128)v2, (__m128)v2);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vhaddps xmm1, xmm1, xmm1
  }
  v7 = _mm128_div_ps(_mm128_add_ps(_XMM0, _XMM0), _XMM1);
  v8 = _mm128_mul_ps(_mm_shuffle_ps(v7, v7, 255), *(__m128 *)quat);
  _XMM7 = _mm128_sub_ps((__m128)_xmm, _mm128_add_ps(_mm_shuffle_ps(v7, v7, 26), _mm_shuffle_ps(v7, v7, 1)));
  v10 = _mm128_mul_ps(_mm_shuffle_ps(v8, v8, 1), _mm_shuffle_ps((__m128)v2, (__m128)v2, 230));
  v11 = _mm128_mul_ps(_mm_shuffle_ps(v8, v8, 148), _mm_shuffle_ps((__m128)v2, (__m128)v2, 251));
  _XMM2 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_shuffle_ps(v11, v11, 32) ^ *(_OWORD *)scMsk1), _mm_shuffle_ps(v10, v10, 32));
  __asm { vinsertps xmm4, xmm2, xmm7, 40h ; '@' }
  _XMM2 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_shuffle_ps(v11, v11, 238) ^ *(_OWORD *)scMsk0), _mm_shuffle_ps(v10, v10, 100));
  __asm { vinsertps xmm0, xmm2, xmm7, 0 }
  *(_OWORD *)axis->m[0].v = _XMM0;
  *(_OWORD *)&axis->row1.y = _XMM4;
  __asm { vextractps dword ptr [rdx+20h], xmm7, 2 }
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
  float v3; 
  float v4; 
  float v6; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  v3 = quat->v[1];
  v4 = quat->v[0];
  v6 = quat->v[2];
  v8 = quat->v[3];
  v10 = (float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v6 * v6)) + (float)(v8 * v8);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v4, v3, v6, v8, fsqrt(v10)) )
    __debugbreak();
  v11 = quat->v[1];
  v12 = quat->v[2];
  v13 = quat->v[3];
  v14 = 2.0 * quat->v[0];
  v15 = v14 * quat->v[0];
  v16 = v11 * v14;
  v17 = v11 * (float)(v11 * 2.0);
  v18 = v12 * (float)(v11 * 2.0);
  v19 = v13 * (float)(v11 * 2.0);
  v20 = v13 * (float)(v12 * 2.0);
  v21 = v12 * (float)(v12 * 2.0);
  result->m[0].v[0] = 1.0 - (float)(v21 + v17);
  result->m[0].v[1] = v20 + v16;
  result->m[0].v[2] = (float)(v12 * v14) - v19;
  result->m[1].v[0] = v16 - v20;
  result->m[1].v[1] = 1.0 - (float)(v21 + v15);
  result->m[1].v[2] = v18 + (float)(v13 * v14);
  result->m[2].v[0] = v19 + (float)(v12 * v14);
  result->m[2].v[1] = v18 - (float)(v13 * v14);
  result->m[2].v[2] = 1.0 - (float)(v17 + v15);
  result->m[3].v[0] = origin->v[0];
  result->m[3].v[1] = origin->v[1];
  result->m[3].v[2] = origin->v[2];
}

/*
==============
AngleDegAxisToQuat
==============
*/
void AngleDegAxisToQuat(float degrees, const vec3_t *axis, vec4_t *quat)
{
  float v5; 
  float s; 

  FastSinCos(degrees * 0.0087266462, &s, &quat->v[3]);
  v5 = s;
  quat->v[0] = s * axis->v[0];
  quat->v[1] = v5 * axis->v[1];
  quat->v[2] = v5 * axis->v[2];
}

/*
==============
AngleRadAxisToQuat
==============
*/
void AngleRadAxisToQuat(float radians, const vec3_t *axis, vec4_t *quat)
{
  float v5; 
  float s; 

  FastSinCos(radians * 0.5, &s, &quat->v[3]);
  v5 = s;
  quat->v[0] = s * axis->v[0];
  quat->v[1] = v5 * axis->v[1];
  quat->v[2] = v5 * axis->v[2];
}

/*
==============
AxisComponentsToQuat
==============
*/
void AxisComponentsToQuat(const vec3_t *mat0, const vec3_t *mat1, const vec3_t *mat2, vec4_t *out)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v13; 
  float v14; 
  __m128 *v15; 
  float v16; 
  float v17; 
  float v18; 
  __m128 v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  float v30; 

  v4 = mat0->v[1] - mat1->v[0];
  v5 = mat1->v[1];
  v6 = mat0->v[0];
  v7 = mat1->v[2];
  v8 = mat2->v[1];
  v9 = mat2->v[0];
  v10 = mat2->v[0] - mat0->v[2];
  v11 = mat2->v[2];
  v13 = v7 - v8;
  v14 = (float)((float)((float)(v13 * v13) + (float)(v10 * v10)) + (float)(v4 * v4)) + (float)((float)((float)((float)(v6 + v5) + v11) + 1.0) * (float)((float)((float)(v6 + v5) + v11) + 1.0));
  v24 = 0.0;
  *((float *)&v20 + 1) = v7 - v8;
  v21 = v10;
  v22 = v4;
  v23 = (float)((float)(v6 + v5) + v11) + 1.0;
  v25 = 0i64;
  v26 = 0i64;
  v27 = 0i64;
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0.0;
  if ( v14 < 1.0 )
  {
    v16 = v9 + mat0->v[2];
    v17 = v8 + v7;
    *(float *)&v26 = v4;
    v14 = (float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)((float)((float)((float)(v11 - v5) - v6) + 1.0) * (float)((float)((float)(v11 - v5) - v6) + 1.0))) + (float)(v4 * v4);
    v24 = v16;
    *(float *)&v25 = v17;
    *((float *)&v25 + 1) = (float)((float)(v11 - v5) - v6) + 1.0;
    if ( v14 < 1.0 )
    {
      v18 = mat1->v[0] + mat0->v[1];
      *((float *)&v27 + 1) = v16;
      *((float *)&v26 + 1) = (float)((float)(v6 - v5) - v11) + 1.0;
      v14 = (float)((float)((float)(*((float *)&v26 + 1) * *((float *)&v26 + 1)) + (float)(v18 * v18)) + (float)(v16 * v16)) + (float)(v13 * v13);
      *(float *)&v27 = v18;
      *(float *)&v28 = v13;
      if ( v14 < 1.0 )
      {
        *(float *)&v29 = (float)((float)(v5 - v6) - v11) + 1.0;
        v14 = (float)((float)((float)(*(float *)&v29 * *(float *)&v29) + (float)(v18 * v18)) + (float)(v17 * v17)) + (float)(v10 * v10);
        *((float *)&v28 + 1) = v18;
        *((float *)&v29 + 1) = v17;
        v30 = v10;
        if ( v14 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3723, ASSERT_TYPE_ASSERT, "( ( testSizeSq >= 1.0f ) )", "( testSizeSq ) = %g", v14) )
          __debugbreak();
        v15 = (__m128 *)((char *)&v28 + 4);
      }
      else
      {
        v15 = (__m128 *)((char *)&v26 + 4);
      }
    }
    else
    {
      v15 = (__m128 *)&v24;
    }
  }
  else
  {
    v15 = (__m128 *)((char *)&v20 + 4);
  }
  if ( v14 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3728, ASSERT_TYPE_SANITY, "( testSizeSq != 0.0f )", "%s", "testSizeSq != 0.0f") )
    __debugbreak();
  v19 = (__m128)LODWORD(FLOAT_1_0);
  v19.m128_f32[0] = 1.0 / fsqrt(v14);
  *(__m128 *)out = _mm128_mul_ps(_mm_shuffle_ps(v19, v19, 0), *v15);
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
  if ( (LODWORD(frac) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3757, ASSERT_TYPE_SANITY, "( !IS_NAN( frac ) )", "%s", "!IS_NAN( frac )") )
    __debugbreak();
  _XMM3 = *(_OWORD *)&frac ^ _xmm;
  _XMM1 = 0i64;
  __asm
  {
    vcmpless xmm0, xmm1, xmm2
    vblendvps xmm4, xmm3, xmm8, xmm0
  }
  result->v[0] = (float)(*(float *)&_XMM4 * to->v[0]) + (float)((float)(1.0 - *(float *)&frac) * from->v[0]);
  result->v[1] = (float)(*(float *)&_XMM4 * to->v[1]) + (float)((float)(1.0 - *(float *)&frac) * from->v[1]);
  result->v[2] = (float)((float)(1.0 - *(float *)&frac) * from->v[2]) + (float)(*(float *)&_XMM4 * to->v[2]);
  result->v[3] = (float)((float)(1.0 - *(float *)&frac) * from->v[3]) + (float)(*(float *)&_XMM4 * to->v[3]);
  return Vec4Normalize(result);
}

/*
==============
QuatSlerp
==============
*/
double QuatSlerp(const vec4_t *from, const vec4_t *to, float frac, vec4_t *result)
{
  float v7; 
  float v8; 
  float v9; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  v7 = frac;
  if ( (LODWORD(frac) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3779, ASSERT_TYPE_SANITY, "( !IS_NAN( frac ) )", "%s", "!IS_NAN( frac )") )
    __debugbreak();
  v8 = from->v[0];
  v9 = to->v[0];
  _XMM0 = LODWORD(FLOAT_N1_0);
  _XMM1 = 0i64;
  __asm
  {
    vcmpless xmm2, xmm1, xmm3
    vblendvps xmm8, xmm0, xmm4, xmm2
  }
  v14 = *(float *)&_XMM8 * (float)((float)((float)((float)(from->v[1] * to->v[1]) + (float)(to->v[0] * from->v[0])) + (float)(to->v[2] * from->v[2])) + (float)(to->v[3] * from->v[3]));
  if ( v14 <= 0.94999999 )
  {
    v16 = acosf_0(v14);
    v17 = v16 * v7;
    v15 = sinf_0(v16 - v17);
    v7 = sinf_0(v17);
  }
  else
  {
    v15 = 1.0 - v7;
  }
  result->v[0] = (float)(v9 * (float)(v7 * *(float *)&_XMM8)) + (float)(v8 * v15);
  result->v[1] = (float)(v15 * from->v[1]) + (float)((float)(v7 * *(float *)&_XMM8) * to->v[1]);
  result->v[2] = (float)((float)(v7 * *(float *)&_XMM8) * to->v[2]) + (float)(v15 * from->v[2]);
  result->v[3] = (float)((float)(v7 * *(float *)&_XMM8) * to->v[3]) + (float)(v15 * from->v[3]);
  return Vec4Normalize(result);
}

/*
==============
QuatTransform
==============
*/
void QuatTransform(const vec4_t *quat, const vec3_t *in, vec3_t *out)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 3805, ASSERT_TYPE_SANITY, "( &in != &out )", "%s", "&in != &out") )
    __debugbreak();
  v6 = quat->v[1];
  v7 = quat->v[2];
  v8 = quat->v[3];
  v9 = v8 * quat->v[0];
  v10 = v6 * quat->v[0];
  v11 = v7 * quat->v[0];
  LODWORD(v12) = COERCE_UNSIGNED_INT(quat->v[0] * quat->v[0]) ^ _xmm;
  LODWORD(v13) = COERCE_UNSIGNED_INT(v6 * v6) ^ _xmm;
  LODWORD(v14) = COERCE_UNSIGNED_INT(v7 * v7) ^ _xmm;
  out->v[0] = (float)((float)((float)((float)((float)(v14 + v13) * in->v[0]) + (float)((float)(v10 - (float)(v8 * v7)) * in->v[1])) + (float)((float)((float)(v8 * v6) + v11) * in->v[2])) * 2.0) + in->v[0];
  out->v[1] = (float)((float)((float)((float)((float)(v14 + v12) * in->v[1]) + (float)((float)((float)(v8 * v7) + v10) * in->v[0])) + (float)((float)((float)(v7 * v6) - v9) * in->v[2])) * 2.0) + in->v[1];
  out->v[2] = (float)((float)((float)((float)((float)(v11 - (float)(v8 * v6)) * in->v[0]) + (float)((float)((float)(v7 * v6) + v9) * in->v[1])) + (float)((float)(v13 + v12) * in->v[2])) * 2.0) + in->v[2];
}

/*
==============
QuatShortestArc
==============
*/
void QuatShortestArc(const vec3_t *from, const vec3_t *to, vec4_t *result)
{
  float v3; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v18; 
  vec3_t cross; 
  vec3_t v27; 
  vec3_t v0; 

  v3 = (float)((float)(to->v[1] * from->v[1]) + (float)(to->v[0] * from->v[0])) + (float)(to->v[2] * from->v[2]);
  if ( v3 <= 0.99900001 )
  {
    if ( v3 >= -0.99900001 )
    {
      Vec3Cross(from, to, &cross);
      _XMM3 = LODWORD(cross.v[0]);
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbp+57h+cross+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rbp+57h+cross+8], 57h+var_40+9
        vinsertps xmm3, xmm3, xmm2, 30h ; '0'
      }
      *result = _XMM3;
      Vec4Normalize(result);
    }
    else
    {
      _XMM7 = 0i64;
      cross.v[2] = 0.0;
      v0.v[2] = 0.0;
      _XMM8 = LODWORD(FLOAT_1_0);
      __asm { vunpcklps xmm0, xmm8, xmm7 }
      *(double *)v0.v = *(double *)&_XMM0;
      __asm { vunpcklps xmm0, xmm7, xmm8 }
      *(double *)v27.v = *(double *)&_XMM0;
      v27.v[2] = 0.0;
      Vec3Cross(&v0, from, &cross);
      v10 = LODWORD(cross.v[0]);
      v11 = cross.v[1];
      v12 = cross.v[2];
      if ( (float)((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v12 * v12)) < 0.001 )
      {
        Vec3Cross(&v27, from, &cross);
        v11 = cross.v[1];
        v10 = LODWORD(cross.v[0]);
        v12 = cross.v[2];
      }
      v13 = v10;
      *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v12 * v12));
      _XMM3 = v13;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v18 = v10;
      *(float *)&v18 = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
      _XMM3 = v18;
      __asm
      {
        vinsertps xmm3, xmm3, xmm2, 10h
        vinsertps xmm3, xmm3, xmm0, 20h ; ' '
        vinsertps xmm3, xmm3, xmm7, 30h ; '0'
      }
      *result = _XMM3;
    }
  }
  else
  {
    *result = (vec4_t)_xmm;
  }
}

/*
==============
QuatTransToDualQuat
==============
*/
void QuatTransToDualQuat(const vec4_t *q0, const vec3_t *t, tmat22_t<vec4_t> *dq)
{
  dq->m[0] = *q0;
  dq->m[1].v[3] = (float)((float)(q0->v[2] * t->v[2]) * -0.5) - (float)((float)((float)(q0->v[0] * t->v[0]) + (float)(q0->v[1] * t->v[1])) * 0.5);
  dq->m[1].v[0] = (float)((float)((float)(q0->v[2] * t->v[1]) + (float)(q0->v[3] * t->v[0])) - (float)(q0->v[1] * t->v[2])) * 0.5;
  dq->m[1].v[1] = (float)((float)((float)(q0->v[3] * t->v[1]) * 0.5) - (float)((float)(q0->v[2] * t->v[0]) * 0.5)) + (float)((float)(q0->v[0] * t->v[2]) * 0.5);
  dq->m[1].v[2] = (float)((float)((float)(q0->v[1] * t->v[0]) - (float)(q0->v[0] * t->v[1])) + (float)(q0->v[3] * t->v[2])) * 0.5;
}

/*
==============
DualQuatToQuatTrans
==============
*/
void DualQuatToQuatTrans(vec4_t *q0, vec3_t *t, const tmat22_t<vec4_t> *dq)
{
  vec4_t *v3; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  char v15; 

  v3 = &dq->m[1];
  q0->v[0] = dq->m[0].v[0];
  _RDI = t;
  *(_QWORD *)&q0->xyz.y = *(_QWORD *)&dq->row0.xyz.y;
  v5 = dq->m[0].v[3];
  q0->v[3] = v5;
  LODWORD(v6) = LODWORD(q0->v[0]) ^ _xmm;
  LODWORD(v7) = LODWORD(q0->v[1]) ^ _xmm;
  LODWORD(v8) = LODWORD(q0->v[2]) ^ _xmm;
  if ( &dq->row1 == (vec4_t *)&v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  v9 = LODWORD(v3->v[3]);
  *(float *)&v9 = (float)((float)((float)(*(float *)&v9 * v6) + (float)(v3->v[0] * v5)) + (float)(v3->v[1] * v8)) - (float)(v3->v[2] * v7);
  _XMM11 = v9;
  __asm
  {
    vinsertps xmm11, xmm11, xmm6, 10h
    vinsertps xmm11, xmm11, xmm5, 20h ; ' '
    vinsertps xmm11, xmm11, xmm2, 30h ; '0'
  }
  _XMM1 = _mm128_mul_ps(_XMM11, (__m128)_xmm);
  _RDI->v[0] = _XMM1.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
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
  sum->m[0].v[0] = a->m[0].v[0] + b->m[0].v[0];
  sum->m[0].v[1] = a->m[0].v[1] + b->m[0].v[1];
  sum->m[0].v[2] = a->m[0].v[2] + b->m[0].v[2];
  sum->m[0].v[3] = a->m[0].v[3] + b->m[0].v[3];
  sum->m[1].v[0] = a->m[1].v[0] + b->m[1].v[0];
  sum->m[1].v[1] = a->m[1].v[1] + b->m[1].v[1];
  sum->m[1].v[2] = a->m[1].v[2] + b->m[1].v[2];
  sum->m[1].v[3] = a->m[1].v[3] + b->m[1].v[3];
}

/*
==============
DualQuatMad
==============
*/
void DualQuatMad(const tmat22_t<vec4_t> *start, const float scale, const tmat22_t<vec4_t> *dir, tmat22_t<vec4_t> *result)
{
  result->m[0].v[0] = (float)(scale * dir->m[0].v[0]) + start->m[0].v[0];
  result->m[0].v[1] = (float)(scale * dir->m[0].v[1]) + start->m[0].v[1];
  result->m[0].v[2] = (float)(scale * dir->m[0].v[2]) + start->m[0].v[2];
  result->m[0].v[3] = (float)(scale * dir->m[0].v[3]) + start->m[0].v[3];
  result->m[1].v[0] = (float)(scale * dir->m[1].v[0]) + start->m[1].v[0];
  result->m[1].v[1] = (float)(scale * dir->m[1].v[1]) + start->m[1].v[1];
  result->m[1].v[2] = (float)(scale * dir->m[1].v[2]) + start->m[1].v[2];
  result->m[1].v[3] = (float)(scale * dir->m[1].v[3]) + start->m[1].v[3];
}

/*
==============
DualQuatNormalize
==============
*/
void DualQuatNormalize(tmat22_t<vec4_t> *dq)
{
  __m128 v1; 
  __m128 v2; 

  v1 = (__m128)LODWORD(FLOAT_1_0);
  v1.m128_f32[0] = 1.0 / fsqrt((float)((float)((float)(dq->m[0].v[0] * dq->m[0].v[0]) + (float)(dq->m[0].v[1] * dq->m[0].v[1])) + (float)(dq->m[0].v[2] * dq->m[0].v[2])) + (float)(dq->m[0].v[3] * dq->m[0].v[3]));
  v2 = _mm_shuffle_ps(v1, v1, 0);
  dq->m[0].v[0] = dq->m[0].v[0] * v2.m128_f32[0];
  *(__m128 *)((char *)dq->m + 4) = _mm128_mul_ps(v2, *(__m128 *)((char *)dq->m + 4));
  dq->m[1].v[1] = v2.m128_f32[0] * dq->m[1].v[1];
  dq->m[1].v[2] = v2.m128_f32[0] * dq->m[1].v[2];
  dq->m[1].v[3] = v2.m128_f32[0] * dq->m[1].v[3];
}

/*
==============
TriangleTextureGradient
==============
*/
char TriangleTextureGradient(const vec3_t (*pos)[3], const vec2_t (*texCoord)[3], vec3_t (*outTexGradient)[2])
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v11; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  tmat33_t<vec3_t> v1; 
  tmat33_t<vec3_t> out; 
  vec3_t cross; 
  vec3_t mulVec; 

  v3 = (*pos)[1].v[0] - (*pos)[0].v[0];
  v4 = (*pos)[1].v[1] - (*pos)[0].v[1];
  v5 = (*pos)[1].v[2] - (*pos)[0].v[2];
  v6 = (*pos)[2].v[0] - (*pos)[0].v[0];
  v7 = (*pos)[2].v[1] - (*pos)[0].v[1];
  v8 = (*pos)[2].v[2] - (*pos)[0].v[2];
  v1.m[1].v[2] = v8;
  v1.m[0].v[0] = v3;
  v1.m[0].v[1] = v4;
  v1.m[0].v[2] = v5;
  v1.m[1].v[0] = v6;
  v1.m[1].v[1] = v7;
  Vec3Cross(&v1.m[1], v1.m, &cross);
  v11 = LODWORD(cross.v[0]);
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM6 = v11;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  if ( *(float *)&v11 < 0.001 )
    return 0;
  v1.m[2].v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v1.m[2].v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v15 = (float)((float)((float)((float)(v1.m[2].v[2] * v7) - (float)(v1.m[2].v[1] * v8)) * v3) - (float)((float)((float)(v1.m[2].v[2] * v4) - (float)(v1.m[2].v[1] * v5)) * v6)) + (float)((float)((float)(v8 * v4) - (float)(v7 * v5)) * (float)(cross.v[0] * (float)(1.0 / *(float *)&_XMM0)));
  v1.m[2].v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  if ( v15 == 0.0 )
    return 0;
  MatrixInverseDet(&v1, v15, &out);
  v16 = (*texCoord)[1].v[0] - (*texCoord)[0].v[0];
  v17 = (*texCoord)[2].v[1];
  cross.v[1] = (*texCoord)[2].v[0] - (*texCoord)[0].v[0];
  v18 = (*texCoord)[1].v[1];
  cross.v[0] = v16;
  v19 = v18 - (*texCoord)[0].v[1];
  mulVec.v[1] = v17 - (*texCoord)[0].v[1];
  cross.v[2] = 0.0;
  mulVec.v[0] = v19;
  mulVec.v[2] = 0.0;
  MatrixVecMultiply(&out, &cross, (vec3_t *)outTexGradient);
  MatrixVecMultiply(&out, &mulVec, &(*outTexGradient)[1]);
  return 1;
}

/*
==============
Com_NoiseGet4f
==============
*/
float Com_NoiseGet4f(float x, float y, float z, float t)
{
  int v8; 
  int v11; 
  float v12; 
  int v14; 
  float v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  float v19; 
  float v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  float v25; 
  unsigned __int8 v26; 
  unsigned __int8 v27; 
  float v28; 
  float v29; 
  unsigned __int8 v30; 
  unsigned __int8 v31; 
  int v32; 
  float v34; 
  float v35; 

  _XMM8 = 0i64;
  __asm { vroundss xmm4, xmm8, xmm5, 1 }
  v8 = (int)*(float *)&_XMM4;
  __asm
  {
    vroundss xmm2, xmm8, xmm1, 1
    vroundss xmm3, xmm8, xmm0, 1
  }
  v11 = (int)*(float *)&_XMM3;
  v12 = z - (float)(int)*(float *)&_XMM3;
  __asm { vroundss xmm3, xmm8, xmm0, 1 }
  v14 = (int)*(float *)&_XMM3;
  v15 = t - (float)(int)*(float *)&_XMM3;
  v34 = x - (float)(int)*(float *)&_XMM4;
  v35 = y - (float)(int)*(float *)&_XMM2;
  v16 = v11 + s_noise_perm[(unsigned __int8)(int)*(float *)&_XMM3];
  v17 = (int)*(float *)&_XMM2 + s_noise_perm[v16];
  v18 = (int)*(float *)&_XMM4 + s_noise_perm[v17];
  v19 = s_noise_table[s_noise_perm[v18]];
  v20 = s_noise_table[s_noise_perm[(unsigned __int8)(v18 + 1)]];
  v21 = (int)*(float *)&_XMM4 + s_noise_perm[(unsigned __int8)(v17 + 1)];
  *(float *)&_XMM4 = (float)((float)((float)((float)((float)(1.0 - v34) * v19) + (float)(v20 * v34)) * (float)(1.0 - v35)) + (float)((float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[v21]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v21 + 1)]] * v34)) * v35)) * (float)(1.0 - v12);
  v22 = (int)*(float *)&_XMM2 + s_noise_perm[(unsigned __int8)(v16 + 1)];
  v23 = v8 + s_noise_perm[v22];
  *(float *)&_XMM3 = (float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[v23]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v23 + 1)]] * v34)) * (float)(1.0 - v35);
  v24 = v8 + s_noise_perm[(unsigned __int8)(v22 + 1)];
  v25 = *(float *)&_XMM4 + (float)((float)(*(float *)&_XMM3 + (float)((float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[v24]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v24 + 1)]] * v34)) * v35)) * v12);
  v26 = (int)*(float *)&_XMM2 + s_noise_perm[(unsigned __int8)(v11 + LOBYTE(s_noise_perm[(unsigned __int8)(v14 + 1)]))];
  v27 = v8 + s_noise_perm[v26];
  v28 = s_noise_table[s_noise_perm[v27]];
  v29 = s_noise_table[s_noise_perm[(unsigned __int8)(v27 + 1)]];
  v30 = v8 + s_noise_perm[(unsigned __int8)(v26 + 1)];
  *(float *)&_XMM4 = (float)((float)((float)((float)((float)(1.0 - v34) * v28) + (float)(v29 * v34)) * (float)(1.0 - v35)) + (float)((float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[v30]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v30 + 1)]] * v34)) * v35)) * (float)(1.0 - v12);
  v31 = v8 + s_noise_perm[(unsigned __int8)((int)*(float *)&_XMM2 + LOBYTE(s_noise_perm[(unsigned __int8)(v11 + LOBYTE(s_noise_perm[(unsigned __int8)(v14 + 1)]) + 1)]))];
  v32 = s_noise_perm[(unsigned __int8)((int)*(float *)&_XMM2 + LOBYTE(s_noise_perm[(unsigned __int8)(v11 + LOBYTE(s_noise_perm[(unsigned __int8)(v14 + 1)]) + 1)]) + 1)];
  return (float)((float)(1.0 - v15) * v25) + (float)((float)(*(float *)&_XMM4 + (float)((float)((float)((float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[v31]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v31 + 1)]] * v34)) * (float)(1.0 - v35)) + (float)((float)((float)((float)(1.0 - v34) * s_noise_table[s_noise_perm[(unsigned __int8)(v8 + v32)]]) + (float)(s_noise_table[s_noise_perm[(unsigned __int8)(v8 + v32 + 1)]] * v34)) * v35)) * v12)) * v15);
}

/*
==============
Com_NoiseInit
==============
*/
void Com_NoiseInit(void)
{
  __int64 i; 

  for ( i = 0i64; i < 256; ++i )
  {
    s_noise_table[i] = (float)((float)((float)rand() * 0.000030518509) * 2.0) - 1.0;
    s_noise_perm[i] = (unsigned __int8)((unsigned int)(rand() << 8) >> 15);
  }
}

/*
==============
Float4AABBLineSegmentIntersect
==============
*/
bool Float4AABBLineSegmentIntersect(const float4 *aabbMin, const float4 *aabbMax, const float4 *lineSegPointA, const float4 *lineSegPointB)
{
  __m128 v4; 
  __m128 v9; 
  __m128 v10; 

  v4 = _mm128_sub_ps(lineSegPointB->v, lineSegPointA->v);
  _XMM1 = _mm128_mul_ps(v4, v4);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  v9 = _mm_sqrt_ps(_XMM0);
  v10 = _mm128_div_ps(g_one.v, _mm128_div_ps(v4, v9));
  _XMM6 = _mm128_mul_ps(v10, _mm128_sub_ps(aabbMin->v, lineSegPointA->v));
  __asm { vminps  xmm4, xmm6, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v; float4 const g_infinity }
  _XMM5 = _mm128_mul_ps(v10, _mm128_sub_ps(aabbMax->v, lineSegPointA->v));
  __asm
  {
    vminps  xmm3, xmm5, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v; float4 const g_infinity
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v; float4 const g_negativeInfinity
    vmaxps  xmm1, xmm6, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v; float4 const g_negativeInfinity
    vminps  xmm5, xmm1, xmm0
    vmaxps  xmm4, xmm4, xmm3
  }
  _XMM0 = _mm_shuffle_ps(_XMM5, _XMM5, 85);
  __asm { vmaxss  xmm0, xmm0, xmm5 }
  _mm_shuffle_ps(_XMM5, _XMM5, 170);
  __asm { vmaxss  xmm5, xmm0, xmm3 }
  _XMM1 = _mm_shuffle_ps(_XMM4, _XMM4, 85);
  _mm_shuffle_ps(_XMM4, _XMM4, 170);
  __asm
  {
    vminss  xmm1, xmm1, xmm4
    vminss  xmm3, xmm1, xmm2
  }
  return *(float *)&_XMM3 >= 0.0 && *(float *)&_XMM5 <= *(float *)&_XMM3 && *(float *)&_XMM5 <= v9.m128_f32[0];
}

/*
==============
EasePower
==============
*/

double __fastcall EasePower(double pct, double power, bool easeIn, bool easeOut)
{
  double v4; 
  float v7; 
  double v8; 
  double v9; 
  double v10; 

  v4 = pct;
  __asm
  {
    vcmpless xmm3, xmm1, xmm2
    vblendvps xmm1, xmm1, xmm0, xmm3
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      v7 = powf_0(2.0, *(float *)&_XMM1 - 1.0);
      if ( *(float *)&v4 >= 0.5 )
      {
        *(_QWORD *)&v9 = LODWORD(FLOAT_1_0);
        *(float *)&v9 = 1.0 - (float)(powf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v4 - 1.0) & _xmm), *(float *)&_XMM1) * v7);
        return v9;
      }
      else
      {
        HIDWORD(v8) = HIDWORD(v4);
        *(float *)&v8 = powf_0(*(float *)&v4, *(float *)&_XMM1) * v7;
        return v8;
      }
    }
    else
    {
      *(float *)&pct = powf_0(*(float *)&pct, *(float *)&_XMM1);
    }
  }
  else
  {
    *(_QWORD *)&v10 = LODWORD(FLOAT_1_0);
    *(float *)&v10 = 1.0 - powf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&pct - 1.0) & _xmm), *(float *)&_XMM1);
    return v10;
  }
  return pct;
}

/*
==============
EaseExponential
==============
*/

double __fastcall EaseExponential(double pct, double scale, bool easeIn, bool easeOut)
{
  double v5; 
  double v6; 
  float v7; 
  double v8; 

  __asm { vmaxss  xmm3, xmm1, xmm6 }
  if ( *(float *)&pct < 1.0 )
  {
    if ( easeIn )
    {
      if ( easeOut )
      {
        if ( *(float *)&pct >= 0.5 )
        {
          *(_QWORD *)&v6 = LODWORD(FLOAT_2_0);
          *(float *)&v6 = (float)(2.0 - powf_0(2.0, (float)((float)(*(float *)&pct * -20.0) - -10.0) * *(float *)&_XMM3)) * 0.5;
          return v6;
        }
        else
        {
          HIDWORD(v5) = 0;
          *(float *)&v5 = powf_0(2.0, (float)((float)(*(float *)&pct * 20.0) - 10.0) * *(float *)&_XMM3) * 0.5;
          return v5;
        }
      }
      else
      {
        v7 = (float)((float)(*(float *)&pct - 1.0) * *(float *)&_XMM3) * 10.0;
        *(_QWORD *)&pct = LODWORD(FLOAT_2_0);
        *(float *)&pct = powf_0(2.0, v7);
      }
    }
    else
    {
      *(_QWORD *)&v8 = LODWORD(FLOAT_1_0);
      *(float *)&v8 = 1.0 - powf_0(2.0, (float)(*(float *)&_XMM3 * -10.0) * *(float *)&pct);
      return v8;
    }
  }
  return pct;
}

/*
==============
EaseLogarithmic
==============
*/

float __fastcall EaseLogarithmic(float pct, double logBase, bool easeIn, bool easeOut)
{
  float v7; 
  float v8; 
  float v9; 
  float v11; 
  float v12; 
  float v13; 

  __asm { vmaxss  xmm0, xmm1, xmm2; X }
  if ( easeIn && easeOut )
  {
    v7 = *(float *)&_XMM0 - 1.0;
    v8 = pct * 2.0;
    v9 = logf_0(*(float *)&_XMM0);
    if ( v8 >= 1.0 )
      return (float)((float)(logf_0((float)((float)(v8 - 1.0) * v7) + 1.0) * 0.5) / v9) + 0.5;
    else
      return (float)(1.0 - (float)(logf_0((float)((float)(1.0 - v8) * v7) + 1.0) / v9)) * 0.5;
  }
  else
  {
    v12 = *(float *)&_XMM0 - 1.0;
    v11 = *(float *)&_XMM0 - 1.0;
    v13 = logf_0(*(float *)&_XMM0);
    if ( easeIn )
      return 1.0 - (float)(logf_0((float)((float)(1.0 - pct) * v11) + 1.0) / v13);
    else
      return logf_0((float)(v12 * pct) + 1.0) / v13;
  }
}

/*
==============
EaseSine
==============
*/
double EaseSine(double pct, bool easeIn, bool easeOut)
{
  double v3; 
  double result; 
  double v5; 
  double v6; 

  if ( easeIn && easeOut )
  {
    *(_QWORD *)&v3 = LODWORD(FLOAT_1_0);
    *(float *)&v3 = (float)(1.0 - cosf_0(*(float *)&pct * 3.1415927)) * 0.5;
    return v3;
  }
  else
  {
    HIDWORD(v5) = HIDWORD(pct);
    *(float *)&v5 = *(float *)&pct * 1.5707964;
    result = v5;
    if ( easeIn )
    {
      *(_QWORD *)&v6 = LODWORD(FLOAT_1_0);
      *(float *)&v6 = 1.0 - cosf_0(*(float *)&result);
      return v6;
    }
    else
    {
      *(float *)&result = sinf_0(*(float *)&v5);
    }
  }
  return result;
}

/*
==============
EaseBack
==============
*/

float __fastcall EaseBack(float pct, double overshootScalar, double power, bool easeIn, bool easeOut)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v15; 
  float v16; 
  float v17; 

  __asm
  {
    vcmpeqss xmm4, xmm1, xmm5
    vblendvps xmm1, xmm1, xmm3, xmm4
    vcmpless xmm3, xmm2, xmm5
    vblendvps xmm0, xmm2, xmm1, xmm3
  }
  if ( easeIn )
  {
    if ( easeOut )
    {
      v11 = pct * 2.0;
      v10 = v11;
      if ( v11 >= 1.0 )
      {
        v10 = 2.0 - v11;
        v12 = (float)((float)(1.0 - powf_0(2.0 - v11, *(float *)&_XMM0)) + 1.0) * 0.5;
        v13 = (float)(2.0 - v11) * -3.1415927;
      }
      else
      {
        v12 = powf_0(v11, *(float *)&_XMM0) * 0.5;
        v13 = v11 * 3.1415927;
      }
      return v12 - (float)(sinf_0(v13) * (float)(v10 * *(float *)&_XMM1));
    }
    else
    {
      v15 = powf_0(pct, *(float *)&_XMM0);
      return v15 - (float)(sinf_0(pct * 3.1415927) * (float)(pct * *(float *)&_XMM1));
    }
  }
  else
  {
    v16 = 1.0 - pct;
    v17 = powf_0(v16, *(float *)&_XMM0);
    return (float)(1.0 - v17) + (float)(sinf_0(v16 * 3.1415927) * (float)(v16 * *(float *)&_XMM1));
  }
}

/*
==============
EaseElastic
==============
*/

float __fastcall EaseElastic(float pct, double amplitude, double frequency, double fadeScalar, bool easeIn, bool easeOut)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float result; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  __asm
  {
    vcmpless xmm4, xmm1, xmm5
    vblendvps xmm1, xmm1, xmm10, xmm4
  }
  v27 = *(float *)&_XMM1;
  __asm
  {
    vcmpeqss xmm1, xmm2, xmm5
    vblendvps xmm0, xmm2, xmm6, xmm1
  }
  v28 = *(float *)&_XMM0;
  __asm
  {
    vcmpless xmm0, xmm3, xmm5
    vblendvps xmm0, xmm3, xmm6, xmm0
  }
  v29 = *(float *)&_XMM0;
  if ( easeIn )
  {
    if ( easeOut )
    {
      v13 = 2.0 * v28;
      v14 = pct * 2.0;
      if ( (float)(pct * 2.0) >= 1.0 )
      {
        v18 = 2.0 - v14;
        v19 = powf_0(v27, 1.0 - (float)((float)((float)((float)(v18 * v18) * (float)(v18 * v18)) * v18) * (float)((float)((float)(v18 * v18) * (float)(v18 * v18)) * v18)));
        v20 = (float)(v19 * 0.5) * powf_0(2.0 - v14, v29);
        return 1.0 - (float)(v20 * sinf_0((float)((float)(v13 + 2.5) * (float)(2.0 - v14)) * 3.1415927));
      }
      else
      {
        v15 = powf_0(v27, 1.0 - (float)((float)((float)((float)(pct * pct) * 4.0) * (float)((float)((float)(pct * pct) * (float)(pct * pct)) * 16.0)) * (float)((float)((float)(pct * pct) * (float)(pct * pct)) * 16.0)));
        v16 = (float)(v15 * -0.5) * powf_0(v14, v29);
        return v16 * sinf_0((float)(pct * 6.2831855) * (float)(v13 + 1.5));
      }
    }
    else
    {
      v21 = powf_0(v27, 1.0 - (float)((float)((float)((float)(pct * pct) * (float)(pct * pct)) * pct) * (float)((float)((float)(pct * pct) * (float)(pct * pct)) * pct)));
      v22 = v21 * powf_0(pct, v29);
      LODWORD(result) = COERCE_UNSIGNED_INT(v22 * sinf_0((float)((float)(v28 * 6.2831855) + 4.712389) * pct)) ^ _xmm;
    }
  }
  else
  {
    v23 = 1.0 - pct;
    v24 = 1.0 - powf_0(1.0 - pct, COERCE_FLOAT(LODWORD(v28) & _xmm) * 10.0);
    v25 = powf_0(v27, 1.0 - (float)((float)((float)((float)(v23 * v23) * (float)(v23 * v23)) * v23) * (float)((float)((float)(v23 * v23) * (float)(v23 * v23)) * v23)));
    v26 = v25 * powf_0(v23, v29);
    return v24 - (float)(v26 * sinf_0((float)(COERCE_FLOAT(LODWORD(v28) & _xmm) * 6.2831855) * v23));
  }
  return result;
}

/*
==============
EaseBounce
==============
*/

float __fastcall EaseBounce(double pct, int bounces, double decayScalar, bool easeIn, bool easeOut)
{
  int v6; 
  float v8; 
  __m128 v11; 
  float v12; 
  __int128 v14; 
  __int128 v17; 
  int v18; 
  int *v20; 
  __m128 v25; 
  __int64 v26; 
  float v27; 
  __m128 v28; 
  unsigned int v29; 
  unsigned int v30; 
  __int128 v31; 
  __int64 v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v38; 
  float result; 
  float v43[100]; 

  v6 = bounces;
  _XMM8 = *(_OWORD *)&pct;
  if ( bounces >= 1 )
  {
    if ( bounces > 100 )
      v6 = 100;
  }
  else
  {
    v6 = 4;
  }
  v8 = 0.0;
  __asm
  {
    vcmpless xmm1, xmm2, xmm6
    vblendvps xmm10, xmm2, xmm0, xmm1
  }
  v11 = _mm_shuffle_ps(_XMM10, _XMM10, 0);
  v12 = *(float *)&pct;
  if ( easeIn )
  {
    if ( easeOut )
    {
      v14 = *(_OWORD *)&pct;
      *(float *)&v14 = *(float *)&pct * 2.0;
      _XMM0 = v14;
      *(float *)&v14 = (float)(*(float *)&_XMM8 * 2.0) - 1.0;
      _XMM2 = v14;
      __asm
      {
        vcmpltss xmm0, xmm0, xmm9
        vblendvps xmm8, xmm2, xmm1, xmm0
      }
    }
    else
    {
      v17 = LODWORD(FLOAT_1_0);
      *(float *)&v17 = 1.0 - *(float *)&pct;
      _XMM8 = v17;
    }
  }
  v18 = 0;
  _XMM7 = 0i64;
  if ( v6 > 0 && (unsigned int)v6 >= 4 )
  {
    v20 = (int *)v43;
    do
    {
      _XMM0 = (unsigned int)v18;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm0, xmm0, xmm12
      }
      _mm_cvtepi32_ps((__m128i)_XMM0);
      _XMM0.m128_u64[1] = v11.m128_u64[1];
      *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
      v18 += 4;
      *(__m128 *)v20 = _XMM0;
      v20 += 4;
      _XMM7 = _mm128_add_ps(_XMM0, _XMM7);
    }
    while ( v18 < v6 - (v6 & 3) );
    __asm { vmovhlps xmm0, xmm7, xmm7 }
    v25 = _mm128_add_ps(_XMM0, _XMM7);
    v25.m128_f32[0] = v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 245).m128_f32[0];
    _XMM7 = v25;
  }
  v26 = v18;
  if ( v18 < (__int64)v6 )
  {
    do
    {
      v27 = powf_0(_XMM10.m128_f32[0], (float)v18);
      v43[v26++] = v27;
      ++v18;
      v28 = _XMM7;
      v28.m128_f32[0] = _XMM7.m128_f32[0] + v27;
      _XMM7 = v28;
    }
    while ( v26 < v6 );
  }
  v29 = 0;
  v30 = 0;
  v31 = 0i64;
  if ( v6 > 0i64 )
  {
    v32 = 0i64;
    while ( 1 )
    {
      v33 = (float)(1.0 / (float)(_XMM7.m128_f32[0] + -0.5)) * v43[v32];
      v8 = v33;
      if ( !v32 )
        v8 = v33 * 0.5;
      v34 = v31;
      if ( *(float *)&_XMM8 <= (float)(*(float *)&v31 + v8) )
        break;
      ++v30;
      ++v32;
      *(float *)&v34 = *(float *)&v31 + v8;
      v31 = v34;
      if ( v32 >= v6 )
        goto LABEL_24;
    }
    v29 = v30;
  }
LABEL_24:
  v36 = _XMM8;
  *(float *)&v36 = *(float *)&_XMM8 - *(float *)&v31;
  v35 = v36;
  if ( !v29 )
  {
    *(float *)&v36 = *(float *)&v36 * 0.5;
    v35 = v36;
  }
  v38 = v35;
  *(float *)&v38 = *(float *)&v35 / v8;
  _XMM4 = v38;
  _XMM0 = v29;
  __asm
  {
    vpcmpgtd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm4, xmm3, xmm2
  }
  result = (float)(1.0 - (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM1 * 2.0) & _xmm) * COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM1 * 2.0) & _xmm))) * v43[v29];
  if ( easeOut )
  {
    if ( easeIn )
    {
      if ( v12 <= 0.5 )
        return (float)((float)(1.0 - (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM1 * 2.0) & _xmm) * COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM1 * 2.0) & _xmm))) * v43[v29]) * 0.5;
      else
        return (float)((float)(1.0 - result) + 1.0) * 0.5;
    }
    else
    {
      return 1.0 - result;
    }
  }
  return result;
}

/*
==============
MatrixDeterminantT<dvec3_t,double>
==============
*/
long double MatrixDeterminantT<dvec3_t,double>(const dvec3_t (*in)[3])
{
  return ((*in)[2].z * (*in)[1].y - (*in)[2].y * (*in)[1].z) * (*in)[0].x - ((*in)[2].z * (*in)[0].y - (*in)[2].y * (*in)[0].z) * (*in)[1].x + ((*in)[1].z * (*in)[0].y - (*in)[1].y * (*in)[0].z) * (*in)[2].x;
}

/*
==============
MatrixDeterminantT<vec3_t,float>
==============
*/
float MatrixDeterminantT<vec3_t,float>(const vec3_t (*in)[3])
{
  return (float)((float)((float)((float)((*in)[2].v[2] * (*in)[1].v[1]) - (float)((*in)[2].v[1] * (*in)[1].v[2])) * (*in)[0].v[0]) - (float)((float)((float)((*in)[2].v[2] * (*in)[0].v[1]) - (float)((*in)[2].v[1] * (*in)[0].v[2])) * (*in)[1].v[0])) + (float)((float)((float)((*in)[1].v[2] * (*in)[0].v[1]) - (float)((*in)[1].v[1] * (*in)[0].v[2])) * (*in)[2].v[0]);
}

/*
==============
MatrixInverseDetT<dvec3_t,double>
==============
*/
void MatrixInverseDetT<dvec3_t,double>(const dvec3_t (*in)[3], const long double determinant, dvec3_t (*out)[3])
{
  long double v7; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out") )
    __debugbreak();
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( determinant == *(double *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  v7 = 1.0 / determinant;
  (*out)[0].x = ((*in)[1].y * (*in)[2].z - (*in)[1].z * (*in)[2].y) * (1.0 / determinant);
  _XMM3 = COERCE_UNSIGNED_INT64(((*in)[0].y * (*in)[2].z - (*in)[0].z * (*in)[2].y) * (1.0 / determinant));
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  (*out)[0].y = *(double *)&_XMM1;
  (*out)[0].z = ((*in)[0].y * (*in)[1].z - (*in)[1].y * (*in)[0].z) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64(((*in)[1].x * (*in)[2].z - (*in)[2].x * (*in)[1].z) * v7);
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  (*out)[1].x = *(double *)&_XMM1;
  (*out)[1].y = ((*in)[0].x * (*in)[2].z - (*in)[2].x * (*in)[0].z) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64(((*in)[0].x * (*in)[1].z - (*in)[1].x * (*in)[0].z) * v7);
  __asm { vxorpd  xmm0, xmm3, xmm5 }
  (*out)[1].z = *(double *)&_XMM0;
  (*out)[2].x = ((*in)[1].x * (*in)[2].y - (*in)[2].x * (*in)[1].y) * v7;
  _XMM3 = COERCE_UNSIGNED_INT64(((*in)[0].x * (*in)[2].y - (*in)[2].x * (*in)[0].y) * v7);
  __asm { vxorpd  xmm1, xmm3, xmm5 }
  (*out)[2].y = *(double *)&_XMM1;
  (*out)[2].z = ((*in)[1].y * (*in)[0].x - (*in)[1].x * (*in)[0].y) * v7;
}

/*
==============
MatrixInverseDetT<vec3_t,float>
==============
*/
void MatrixInverseDetT<vec3_t,float>(const vec3_t (*in)[3], const float determinant, vec3_t (*out)[3])
{
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2770, ASSERT_TYPE_SANITY, "( in != out )", "%s", "in != out") )
    __debugbreak();
  if ( determinant == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.cpp", 2771, ASSERT_TYPE_SANITY, "( determinant != 0.0f )", "%s", "determinant != 0.0f") )
    __debugbreak();
  (*out)[0].v[0] = (float)((float)((*in)[1].v[1] * (*in)[2].v[2]) - (float)((*in)[1].v[2] * (*in)[2].v[1])) * (float)(1.0 / determinant);
  (*out)[0].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((*in)[0].v[1] * (*in)[2].v[2]) - (float)((*in)[0].v[2] * (*in)[2].v[1])) * (float)(1.0 / determinant)) ^ _xmm);
  (*out)[0].v[2] = (float)((float)((*in)[0].v[1] * (*in)[1].v[2]) - (float)((*in)[1].v[1] * (*in)[0].v[2])) * (float)(1.0 / determinant);
  (*out)[1].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((*in)[1].v[0] * (*in)[2].v[2]) - (float)((*in)[2].v[0] * (*in)[1].v[2])) * (float)(1.0 / determinant)) ^ _xmm);
  (*out)[1].v[1] = (float)((float)((*in)[0].v[0] * (*in)[2].v[2]) - (float)((*in)[2].v[0] * (*in)[0].v[2])) * (float)(1.0 / determinant);
  (*out)[1].v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((*in)[0].v[0] * (*in)[1].v[2]) - (float)((*in)[1].v[0] * (*in)[0].v[2])) * (float)(1.0 / determinant)) ^ _xmm);
  (*out)[2].v[0] = (float)((float)((*in)[1].v[0] * (*in)[2].v[1]) - (float)((*in)[2].v[0] * (*in)[1].v[1])) * (float)(1.0 / determinant);
  (*out)[2].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((*in)[0].v[0] * (*in)[2].v[1]) - (float)((*in)[2].v[0] * (*in)[0].v[1])) * (float)(1.0 / determinant)) ^ _xmm);
  (*out)[2].v[2] = (float)((float)((*in)[1].v[1] * (*in)[0].v[0]) - (float)((*in)[1].v[0] * (*in)[0].v[1])) * (float)(1.0 / determinant);
}

