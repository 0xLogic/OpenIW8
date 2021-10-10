/*
==============
DistanceFromConeToPoint
==============
*/

double __fastcall DistanceFromConeToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const vec3_t *point)
{
  double result; 

  *(float *)&result = ?DistanceFromConeToPoint@@YAMAEBTvec3_t@@0M0@Z(coneOrg, coneDir, cosHalfFov, point);
  return result;
}

/*
==============
IntersectRayBounds
==============
*/

bool __fastcall IntersectRayBounds(const vec3_t *origin, const vec3_t *direction, const Bounds *bounds, float *tmin, vec3_t *outHitPoint)
{
  return ?IntersectRayBounds@@YA_NAEBTvec3_t@@0PEBUBounds@@AEAMAEAT1@@Z(origin, direction, bounds, tmin, outHitPoint);
}

/*
==============
QuatSlerpLimited
==============
*/

void __fastcall QuatSlerpLimited(const vec4_t *from, const vec4_t *to, float limit, vec4_t *result)
{
  ?QuatSlerpLimited@@YAXAEBTvec4_t@@0MAEAT1@@Z(from, to, limit, result);
}

/*
==============
I_irand
==============
*/

int __fastcall I_irand(int min, int max)
{
  return ?I_irand@@YAHHH@Z(min, max);
}

/*
==============
ModuloWrapD
==============
*/

long double __fastcall ModuloWrapD(long double val, long double divisor)
{
  return ?ModuloWrapD@@YANNN@Z(val, divisor);
}

/*
==============
MatrixTranspose44Aligned
==============
*/

void __fastcall MatrixTranspose44Aligned(const tmat44_t<vec4_t> *in, tmat44_t<vec4_t> *out)
{
  ?MatrixTranspose44Aligned@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(in, out);
}

/*
==============
IntersectLineSegmentSphere
==============
*/

bool __fastcall IntersectLineSegmentSphere(const vec3_t *p1, const vec3_t *p2, const vec3_t *sphereCenter, float radius, float *outT1, float *outT2)
{
  return ?IntersectLineSegmentSphere@@YA_NAEBTvec3_t@@00MAEAM1@Z(p1, p2, sphereCenter, radius, outT1, outT2);
}

/*
==============
MatrixScale44
==============
*/

void __fastcall MatrixScale44(const vec3_t *scale, tmat44_t<vec4_t> *out)
{
  ?MatrixScale44@@YAXAEBTvec3_t@@AEAT?$tmat44_t@Tvec4_t@@@@@Z(scale, out);
}

/*
==============
QuatTrans_Inverse
==============
*/

void __fastcall QuatTrans_Inverse(const vec4_t *quat, const vec3_t *trans, vec4_t *outInvQuat, vec3_t *outInvTrans)
{
  ?QuatTrans_Inverse@@YAXAEBTvec4_t@@AEBTvec3_t@@AEAT1@AEAT2@@Z(quat, trans, outInvQuat, outInvTrans);
}

/*
==============
ProjectedWindingSegmentFractionToEdge
==============
*/

int __fastcall ProjectedWindingSegmentFractionToEdge(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, const vec3_t *centroid, float *fracToEdge)
{
  return ?ProjectedWindingSegmentFractionToEdge@@YAHQEBTvec3_t@@HHHAEBT1@1PEAM@Z(verts, vertCount, x, y, point, centroid, fracToEdge);
}

/*
==============
DotFromProjectedLineSegment
==============
*/

double __fastcall DotFromProjectedLineSegment(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testPos)
{
  double result; 

  *(float *)&result = ?DotFromProjectedLineSegment@@YAMAEBTvec3_t@@000@Z(viewPos, startSegmentPos, endSegmentPos, testPos);
  return result;
}

/*
==============
PointToLineDirDistSq
==============
*/

double __fastcall PointToLineDirDistSq(const vec3_t *point, const vec3_t *linePoint, const vec3_t *lineDir)
{
  double result; 

  *(float *)&result = ?PointToLineDirDistSq@@YAMAEBTvec3_t@@00@Z(point, linePoint, lineDir);
  return result;
}

/*
==============
AngleBetween
==============
*/

double __fastcall AngleBetween(const vec3_t *a, const vec3_t *b)
{
  double result; 

  *(float *)&result = ?AngleBetween@@YAMAEBTvec3_t@@0@Z(a, b);
  return result;
}

/*
==============
TrajectoryCalculateExitAngle
==============
*/

double __fastcall TrajectoryCalculateExitAngle(const float velocity, const float gravity, const float horizontalDistance, const float verticalDistance)
{
  double result; 

  *(float *)&result = ?TrajectoryCalculateExitAngle@@YAMMMMM@Z(velocity, gravity, horizontalDistance, verticalDistance);
  return result;
}

/*
==============
CullSphereFromCone
==============
*/

bool __fastcall CullSphereFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const vec3_t *sphereCenter, float radius)
{
  return ?CullSphereFromCone@@YA_NAEBTvec3_t@@0M0M@Z(coneOrg, coneDir, cosHalfFov, sphereCenter, radius);
}

/*
==============
MatrixForViewerOrthogonalNoOrigin
==============
*/

void __fastcall MatrixForViewerOrthogonalNoOrigin(const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  ?MatrixForViewerOrthogonalNoOrigin@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT?$tmat44_t@Tvec4_t@@@@@Z(axis, mtx);
}

/*
==============
SH4VisToScaledCone::EvalMinimizer
==============
*/

long double __fastcall SH4VisToScaledCone::EvalMinimizer(SH4VisToScaledCone *this, float zh0, float zh1, float zh2, float zh3, int dataPoint)
{
  return ?EvalMinimizer@SH4VisToScaledCone@@AEAANMMMMH@Z(this, zh0, zh1, zh2, zh3, dataPoint);
}

/*
==============
DistanceFromConicSectionOfSphereToPoint
==============
*/

double __fastcall DistanceFromConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const vec3_t *point)
{
  double result; 

  *(float *)&result = ?DistanceFromConicSectionOfSphereToPoint@@YAMAEBTvec3_t@@0MM0@Z(coneOrg, coneDir, cosHalfFov, radius, point);
  return result;
}

/*
==============
OrthographicMatrixFull
==============
*/

void __fastcall OrthographicMatrixFull(float width, float height, float zNear, float zFar, tmat44_t<vec4_t> *mtx)
{
  ?OrthographicMatrixFull@@YAXMMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(width, height, zNear, zFar, mtx);
}

/*
==============
NonNegativeHalfFromFloat
==============
*/

unsigned __int16 __fastcall NonNegativeHalfFromFloat(float f)
{
  return ?NonNegativeHalfFromFloat@@YAGM@Z(f);
}

/*
==============
TrajectoryCalculateMinimumVelocity
==============
*/

double __fastcall TrajectoryCalculateMinimumVelocity(const vec3_t *startPos, const vec3_t *endPos, const float gravity)
{
  double result; 

  *(float *)&result = ?TrajectoryCalculateMinimumVelocity@@YAMAEBTvec3_t@@0M@Z(startPos, endPos, gravity);
  return result;
}

/*
==============
MatrixSub
==============
*/

void __fastcall MatrixSub(const tmat33_t<vec3_t> *a, const tmat33_t<vec3_t> *b, tmat33_t<vec3_t> *out)
{
  ?MatrixSub@@YAXAEBT?$tmat33_t@Tvec3_t@@@@0AEAT1@@Z(a, b, out);
}

/*
==============
SignedAngleBetween
==============
*/

double __fastcall SignedAngleBetween(const vec3_t *a, const vec3_t *b, const vec3_t *reference)
{
  double result; 

  *(float *)&result = ?SignedAngleBetween@@YAMAEBTvec3_t@@00@Z(a, b, reference);
  return result;
}

/*
==============
DotFromProjectedLineSegmentVec
==============
*/

double __fastcall DotFromProjectedLineSegmentVec(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testVec)
{
  double result; 

  *(float *)&result = ?DotFromProjectedLineSegmentVec@@YAMAEBTvec3_t@@000@Z(viewPos, startSegmentPos, endSegmentPos, testVec);
  return result;
}

/*
==============
Half3FromFloat
==============
*/

void __fastcall Half3FromFloat(const vec3_t *from, unsigned __int16 *to)
{
  ?Half3FromFloat@@YAXAEBTvec3_t@@QEAG@Z(from, to);
}

/*
==============
AngleClamp
==============
*/

double __fastcall AngleClamp(const float angle1, const float angle2, const float range)
{
  double result; 

  *(float *)&result = ?AngleClamp@@YAMMMM@Z(angle1, angle2, range);
  return result;
}

/*
==============
GetRandSeed
==============
*/

unsigned int *__fastcall GetRandSeed()
{
  return ?GetRandSeed@@YAPEAIXZ();
}

/*
==============
CalcRotationQuatFromVectors
==============
*/

void __fastcall CalcRotationQuatFromVectors(const vec3_t *vec1, const vec3_t *vec2, vec4_t *quat)
{
  ?CalcRotationQuatFromVectors@@YAXAEBTvec3_t@@0AEATvec4_t@@@Z(vec1, vec2, quat);
}

/*
==============
UniformPointsOnHemisphere
==============
*/

void __fastcall UniformPointsOnHemisphere(unsigned int pointCount, void *points, unsigned int stride)
{
  ?UniformPointsOnHemisphere@@YAXIPEAXI@Z(pointCount, points, stride);
}

/*
==============
GetPerpendicularViewVector
==============
*/

void __fastcall GetPerpendicularViewVector(const vec3_t *point, const vec3_t *p1, const vec3_t *p2, vec3_t *up)
{
  ?GetPerpendicularViewVector@@YAXAEBTvec3_t@@00AEAT1@@Z(point, p1, p2, up);
}

/*
==============
SH4VisToScaledCone::SH4VisToScaledCone
==============
*/

void __fastcall SH4VisToScaledCone::SH4VisToScaledCone(SH4VisToScaledCone *this)
{
  ??0SH4VisToScaledCone@@QEAA@XZ(this);
}

/*
==============
EigenDecomposition
==============
*/

void __fastcall EigenDecomposition(const tmat33_t<vec3_t> *A, tmat33_t<vec3_t> *V, vec3_t *d)
{
  ?EigenDecomposition@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@AEATvec3_t@@@Z(A, V, d);
}

/*
==============
DampedSpring::Update3dSpringInternal
==============
*/

void __fastcall DampedSpring::Update3dSpringInternal(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  ?Update3dSpringInternal@DampedSpring@@AEAAXAEATvec3_t@@AEBT2@0@Z(this, currentAngles, targetAngles, velocity);
}

/*
==============
ClosestPointsTwoSegs
==============
*/

void __fastcall ClosestPointsTwoSegs(const vec3_t *s00, const vec3_t *s01, const vec3_t *s10, const vec3_t *s11, float *t0, float *t1)
{
  ?ClosestPointsTwoSegs@@YAXAEBTvec3_t@@000PEAM1@Z(s00, s01, s10, s11, t0, t1);
}

/*
==============
MatrixClear44
==============
*/

void __fastcall MatrixClear44(tmat44_t<vec4_t> *dst)
{
  ?MatrixClear44@@YAXAEAT?$tmat44_t@Tvec4_t@@@@@Z(dst);
}

/*
==============
RotateAxisAroundVectors
==============
*/

void __fastcall RotateAxisAroundVectors(const tmat33_t<vec3_t> *inAxis, const tmat33_t<vec3_t> *aroundAxes, const vec3_t *angles, tmat33_t<vec3_t> *outAxis)
{
  ?RotateAxisAroundVectors@@YAXAEBT?$tmat33_t@Tvec3_t@@@@0AEBTvec3_t@@AEAT1@@Z(inAxis, aroundAxes, angles, outAxis);
}

/*
==============
CullBoxFromConicSectionOfSphere
==============
*/

bool __fastcall CullBoxFromConicSectionOfSphere(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const Bounds *bounds)
{
  return ?CullBoxFromConicSectionOfSphere@@YA_NAEBTvec3_t@@0MMPEBUBounds@@@Z(coneOrg, coneDir, cosHalfFov, radius, bounds);
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(float t, float arcAngle, const vec3_t *center, float radius, const vec3_t *dir, vec3_t *outVert)
{
  ?CalculatePointOnArc@@YAXMMAEBTvec3_t@@M0AEAT1@@Z(t, arcAngle, center, radius, dir, outVert);
}

/*
==============
SH4VisToScaledCone::Convert
==============
*/

void __fastcall SH4VisToScaledCone::Convert(SH4VisToScaledCone *this, const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos, float *scale)
{
  ?Convert@SH4VisToScaledCone@@QEAAXPEBMAEBTvec3_t@@AEAM2222@Z(this, visibilityData, normal, x, y, z, angleCos, scale);
}

/*
==============
GenerateAxisFromForwardVector
==============
*/

void __fastcall GenerateAxisFromForwardVector(const vec3_t *forward, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  ?GenerateAxisFromForwardVector@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(forward, refAxis, outAxis);
}

/*
==============
RotationToYaw
==============
*/

double __fastcall RotationToYaw(const vec2_t *rot)
{
  double result; 

  *(float *)&result = ?RotationToYaw@@YAMAEBTvec2_t@@@Z(rot);
  return result;
}

/*
==============
PitchForYawOnNormal
==============
*/

double __fastcall PitchForYawOnNormal(const float fYaw, const vec3_t *normal)
{
  double result; 

  *(float *)&result = ?PitchForYawOnNormal@@YAMMAEBTvec3_t@@@Z(fYaw, normal);
  return result;
}

/*
==============
ProjectedWindingContainsCoplanarPointEpsilon
==============
*/

int __fastcall ProjectedWindingContainsCoplanarPointEpsilon(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, float epsilon)
{
  return ?ProjectedWindingContainsCoplanarPointEpsilon@@YAHQEBTvec3_t@@HHHAEBT1@M@Z(verts, vertCount, x, y, point, epsilon);
}

/*
==============
UnitQuatToAngles
==============
*/

void __fastcall UnitQuatToAngles(const vec4_t *quat, vec3_t *angles)
{
  ?UnitQuatToAngles@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(quat, angles);
}

/*
==============
RotatePointAroundPoint
==============
*/

void __fastcall RotatePointAroundPoint(vec3_t *dst, const vec3_t *point, const vec3_t *pivotPoint, const tmat33_t<vec3_t> *rotation)
{
  ?RotatePointAroundPoint@@YAXAEATvec3_t@@AEBT1@1AEBT?$tmat33_t@Tvec3_t@@@@@Z(dst, point, pivotPoint, rotation);
}

/*
==============
QuatLerp
==============
*/

void __fastcall QuatLerp(const vec4_t *qa, const vec4_t *qb, float frac, vec4_t *out)
{
  ?QuatLerp@@YAXAEBTvec4_t@@0MAEAT1@@Z(qa, qb, frac, out);
}

/*
==============
DampedSpring::DampedSpring
==============
*/

void __fastcall DampedSpring::DampedSpring(DampedSpring *this, const float springConst, float accelWeight, float deltaTime)
{
  ??0DampedSpring@@QEAA@MMM@Z(this, springConst, accelWeight, deltaTime);
}

/*
==============
DampedSpring::Update1DLinearSpring
==============
*/

void __fastcall DampedSpring::Update1DLinearSpring(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  ?Update1DLinearSpring@DampedSpring@@QEAAXPEAMM0@Z(this, currentPos, targetPos, velocity);
}

/*
==============
ProjectedWindingContainsCoplanarPoint
==============
*/

int __fastcall ProjectedWindingContainsCoplanarPoint(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point)
{
  return ?ProjectedWindingContainsCoplanarPoint@@YAHQEBTvec3_t@@HHHAEBT1@@Z(verts, vertCount, x, y, point);
}

/*
==============
BarycentricTriangle::GetBarycentricCoordinates
==============
*/

void __fastcall BarycentricTriangle::GetBarycentricCoordinates(BarycentricTriangle *this, const vec2_t *cartesianPoint, vec3_t *outBarycentricCoords)
{
  ?GetBarycentricCoordinates@BarycentricTriangle@@QEAAXAEBTvec2_t@@AEATvec3_t@@@Z(this, cartesianPoint, outBarycentricCoords);
}

/*
==============
MatrixTransformVector44Aligned
==============
*/

void __fastcall MatrixTransformVector44Aligned(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  ?MatrixTransformVector44Aligned@@YAXAEBTvec4_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(vec, mat, out);
}

/*
==============
SH4VisToConeAngle
==============
*/

void __fastcall SH4VisToConeAngle(const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos)
{
  ?SH4VisToConeAngle@@YAXPEBMAEBTvec3_t@@AEAM222@Z(visibilityData, normal, x, y, z, angleCos);
}

/*
==============
AxisRandomAroundForward
==============
*/

void __fastcall AxisRandomAroundForward(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  ?AxisRandomAroundForward@@YAXAEBTvec3_t@@AEAT1@1@Z(forward, left, up);
}

/*
==============
Vec3RotateSelf
==============
*/

void __fastcall Vec3RotateSelf(vec3_t *v, const tmat33_t<vec3_t> *matrix)
{
  ?Vec3RotateSelf@@YAXAEATvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(v, matrix);
}

/*
==============
Vec3ProjectionCoords
==============
*/

int __fastcall Vec3ProjectionCoords(const vec3_t *dir, int *xCoord, int *yCoord)
{
  return ?Vec3ProjectionCoords@@YAHAEBTvec3_t@@PEAH1@Z(dir, xCoord, yCoord);
}

/*
==============
MatrixToAngleRadAxis
==============
*/

void __fastcall MatrixToAngleRadAxis(const tmat33_t<vec3_t> *matrix, vec3_t *outAxis, float *outRadians)
{
  ?MatrixToAngleRadAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@PEAM@Z(matrix, outAxis, outRadians);
}

/*
==============
Q_log2
==============
*/

int __fastcall Q_log2(int val)
{
  return ?Q_log2@@YAHH@Z(val);
}

/*
==============
UniformPointsInCircle
==============
*/

void __fastcall UniformPointsInCircle(unsigned int pointCount, void *points, unsigned int stride)
{
  ?UniformPointsInCircle@@YAXIPEAXI@Z(pointCount, points, stride);
}

/*
==============
DiffTrackAngles
==============
*/

void __fastcall DiffTrackAngles(const vec3_t *tgt, const vec3_t *cur, float rate, float deltaTime, vec3_t *outAngles)
{
  ?DiffTrackAngles@@YAXAEBTvec3_t@@0MMAEAT1@@Z(tgt, cur, rate, deltaTime, outAngles);
}

/*
==============
MatrixForViewport
==============
*/

void __fastcall MatrixForViewport(float width, float height, float minZ, float maxZ, tmat44_t<vec4_t> *mtx)
{
  ?MatrixForViewport@@YAXMMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(width, height, minZ, maxZ, mtx);
}

/*
==============
DampedSpring::AxisToAxisAngle
==============
*/

double __fastcall DampedSpring::AxisToAxisAngle(DampedSpring *this, const tmat33_t<vec3_t> *axis, vec3_t *outAxisAngle)
{
  double result; 

  *(float *)&result = ?AxisToAxisAngle@DampedSpring@@AEAAMAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, axis, outAxisAngle);
  return result;
}

/*
==============
FloatFromHalf3
==============
*/

void __fastcall FloatFromHalf3(const unsigned __int16 *from, vec3_t *to)
{
  ?FloatFromHalf3@@YAXQEBGAEATvec3_t@@@Z(from, to);
}

/*
==============
GetWorldUnitsPerPixel
==============
*/

double __fastcall GetWorldUnitsPerPixel(float distance, float tanHalfFov, float vpDim)
{
  double result; 

  *(float *)&result = ?GetWorldUnitsPerPixel@@YAMMMM@Z(distance, tanHalfFov, vpDim);
  return result;
}

/*
==============
LookAtAxisAndDistance
==============
*/

double __fastcall LookAtAxisAndDistance(const vec3_t *origin, const vec3_t *lookAt, tmat33_t<vec3_t> *axis)
{
  double result; 

  *(float *)&result = ?LookAtAxisAndDistance@@YAMAEBTvec3_t@@0AEAT?$tmat33_t@Tvec3_t@@@@@Z(origin, lookAt, axis);
  return result;
}

/*
==============
MatrixTransformVectorQuatTrans
==============
*/

void __fastcall MatrixTransformVectorQuatTrans(const vec3_t *in, const DObjAnimMat *mat, vec3_t *out)
{
  ?MatrixTransformVectorQuatTrans@@YAXAEBTvec3_t@@PEBUDObjAnimMat@@AEAT1@@Z(in, mat, out);
}

/*
==============
IntersectLinePlane
==============
*/

bool __fastcall IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec4_t *plane, float *t)
{
  return ?IntersectLinePlane@@YA_NAEBTvec3_t@@0AEBTvec4_t@@AEAM@Z(linePoint, lineAxis, plane, t);
}

/*
==============
MatrixCopy44To43
==============
*/

void __fastcall MatrixCopy44To43(const tmat44_t<vec4_t> *src, tmat43_t<vec3_t> *dst)
{
  ?MatrixCopy44To43@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(src, dst);
}

/*
==============
SegmentPointClosestToPoint
==============
*/

void __fastcall SegmentPointClosestToPoint(const vec3_t *orig, const vec3_t *segMidPoint, const vec3_t *segHalfDir, vec3_t *pointOut)
{
  ?SegmentPointClosestToPoint@@YAXAEBTvec3_t@@00AEAT1@@Z(orig, segMidPoint, segHalfDir, pointOut);
}

/*
==============
CullBoxFromCone
==============
*/

bool __fastcall CullBoxFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const Bounds *bounds)
{
  return ?CullBoxFromCone@@YA_NAEBTvec3_t@@0MPEBUBounds@@@Z(coneOrg, coneDir, cosHalfFov, bounds);
}

/*
==============
DampedSpring::Update1DAngleSpring
==============
*/

void __fastcall DampedSpring::Update1DAngleSpring(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  ?Update1DAngleSpring@DampedSpring@@QEAAXPEAMM0@Z(this, currentPos, targetPos, velocity);
}

/*
==============
QuatTrans_MultiplyEquals
==============
*/

void __fastcall QuatTrans_MultiplyEquals(vec4_t *inoutQuat1, vec3_t *inoutTrans1, const vec4_t *quat2, const vec3_t *trans2)
{
  ?QuatTrans_MultiplyEquals@@YAXAEATvec4_t@@AEATvec3_t@@AEBT1@AEBT2@@Z(inoutQuat1, inoutTrans1, quat2, trans2);
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(float t, float arcAngle, const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  ?CalculatePointOnArc@@YAXMMAEBTvec3_t@@M00AEAT1@@Z(t, arcAngle, center, radius, right, up, outVert);
}

/*
==============
DampedSpring::DeltaAxis
==============
*/

void __fastcall DampedSpring::DeltaAxis(DampedSpring *this, const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, tmat33_t<vec3_t> *outDeltaAxis)
{
  ?DeltaAxis@DampedSpring@@AEAAXAEBT?$tmat33_t@Tvec3_t@@@@0AEAT2@@Z(this, start, end, outDeltaAxis);
}

/*
==============
MatrixAffine44
==============
*/

void __fastcall MatrixAffine44(const tmat33_t<vec3_t> *basis, const vec3_t *translation, tmat44_t<vec4_t> *out)
{
  ?MatrixAffine44@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEAT?$tmat44_t@Tvec4_t@@@@@Z(basis, translation, out);
}

/*
==============
ApplyLinearMap
==============
*/

double __fastcall ApplyLinearMap(float value, float min, float max)
{
  double result; 

  *(float *)&result = ?ApplyLinearMap@@YAMMMM@Z(value, min, max);
  return result;
}

/*
==============
DampedSpring::Normalize
==============
*/

double __fastcall DampedSpring::Normalize(DampedSpring *this, vec3_t *vec)
{
  double result; 

  *(float *)&result = ?Normalize@DampedSpring@@AEAAMAEATvec3_t@@@Z(this, vec);
  return result;
}

/*
==============
DampedSpring::Update1DAngleSpringInternal
==============
*/

void __fastcall DampedSpring::Update1DAngleSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  ?Update1DAngleSpringInternal@DampedSpring@@AEAAXPEAMM0@Z(this, currentPos, targetPos, velocity);
}

/*
==============
GraphGetValueFromFraction
==============
*/

double __fastcall GraphGetValueFromFraction(const int knotCount, const vec2_t *knots, const float fraction)
{
  double result; 

  *(float *)&result = ?GraphGetValueFromFraction@@YAMHPEBTvec2_t@@M@Z(knotCount, knots, fraction);
  return result;
}

/*
==============
MatrixMultiply44Aligned
==============
*/

void __fastcall MatrixMultiply44Aligned(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out)
{
  ?MatrixMultiply44Aligned@@YAXAEBT?$tmat44_t@Tvec4_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
SH4VisToScaledCone::EvalMinimizerCoeffs
==============
*/

void __fastcall SH4VisToScaledCone::EvalMinimizerCoeffs(SH4VisToScaledCone *this, float angle, long double *outCoeffs)
{
  ?EvalMinimizerCoeffs@SH4VisToScaledCone@@AEAAXMPEAN@Z(this, angle, outCoeffs);
}

/*
==============
PointInsideCone
==============
*/

bool __fastcall PointInsideCone(const vec3_t *coneTip, const vec3_t *coneDir, float cosHalfFov, float coneHeight, const vec3_t *point)
{
  return ?PointInsideCone@@YA_NAEBTvec3_t@@0MM0@Z(coneTip, coneDir, cosHalfFov, coneHeight, point);
}

/*
==============
I_flrand
==============
*/

double __fastcall I_flrand(float min, float max)
{
  double result; 

  *(float *)&result = ?I_flrand@@YAMMM@Z(min, max);
  return result;
}

/*
==============
GaussianWeight1D
==============
*/

double __fastcall GaussianWeight1D(const float x, const float sigma)
{
  double result; 

  *(float *)&result = ?GaussianWeight1D@@YAMMM@Z(x, sigma);
  return result;
}

/*
==============
SlerpAngles
==============
*/

void __fastcall SlerpAngles(const vec3_t *start, const vec3_t *end, const float fraction, vec3_t *outAngles)
{
  ?SlerpAngles@@YAXAEBTvec3_t@@0MAEAT1@@Z(start, end, fraction, outAngles);
}

/*
==============
Q_rint
==============
*/

double __fastcall Q_rint(const float in)
{
  double result; 

  *(float *)&result = ?Q_rint@@YAMM@Z(in);
  return result;
}

/*
==============
DampedSpring::UpdateDeltaTime
==============
*/

bool __fastcall DampedSpring::UpdateDeltaTime(DampedSpring *this)
{
  return ?UpdateDeltaTime@DampedSpring@@AEAA_NXZ(this);
}

/*
==============
DampedSpring::AxisAngleToAngles
==============
*/

void __fastcall DampedSpring::AxisAngleToAngles(DampedSpring *this, const float angle, const vec3_t *axis, vec3_t *outAngles)
{
  ?AxisAngleToAngles@DampedSpring@@AEAAXMAEBTvec3_t@@AEAT2@@Z(this, angle, axis, outAngles);
}

/*
==============
IntersectTwoPlanesIfNotParallel
==============
*/

int __fastcall IntersectTwoPlanesIfNotParallel(const vec4_t (*plane)[2], vec3_t *outPoint, vec3_t *outDir)
{
  return ?IntersectTwoPlanesIfNotParallel@@YAHAEAY01$$CBTvec4_t@@AEATvec3_t@@1@Z(plane, outPoint, outDir);
}

/*
==============
GaussianRandom
==============
*/

void __fastcall GaussianRandom(float *f0, float *f1)
{
  ?GaussianRandom@@YAXPEAM0@Z(f0, f1);
}

/*
==============
AngleEigenTrace
==============
*/

double __fastcall AngleEigenTrace(float angle)
{
  double result; 

  *(float *)&result = ?AngleEigenTrace@@YAMM@Z(angle);
  return result;
}

/*
==============
MatrixInverse44Aligned
==============
*/

void __fastcall MatrixInverse44Aligned(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst)
{
  ?MatrixInverse44Aligned@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(mat, dst);
}

/*
==============
MatrixForViewerOrthogonal
==============
*/

void __fastcall MatrixForViewerOrthogonal(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  ?MatrixForViewerOrthogonal@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT?$tmat44_t@Tvec4_t@@@@@Z(origin, axis, mtx);
}

/*
==============
QuatRatioEigenTrace
==============
*/

double __fastcall QuatRatioEigenTrace(const vec4_t *quat1, const vec4_t *quat2)
{
  double result; 

  *(float *)&result = ?QuatRatioEigenTrace@@YAMAEBTvec4_t@@0@Z(quat1, quat2);
  return result;
}

/*
==============
DampedSpring::Update1DLinearSpringInternal
==============
*/

void __fastcall DampedSpring::Update1DLinearSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  ?Update1DLinearSpringInternal@DampedSpring@@AEAAXPEAMM0@Z(this, currentPos, targetPos, velocity);
}

/*
==============
ProjectPointOnPlane
==============
*/

void __fastcall ProjectPointOnPlane(const vec3_t *relativePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  ?ProjectPointOnPlane@@YAXAEBTvec3_t@@0AEAT1@@Z(relativePoint, planeNormal, outProjectedPoint);
}

/*
==============
MatrixClear33
==============
*/

void __fastcall MatrixClear33(tmat33_t<vec3_t> *dst)
{
  ?MatrixClear33@@YAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(dst);
}

/*
==============
FloatFromHalf4
==============
*/

void __fastcall FloatFromHalf4(const unsigned __int16 *from, vec4_t *to)
{
  ?FloatFromHalf4@@YAXQEBGAEATvec4_t@@@Z(from, to);
}

/*
==============
IsPosInsideArc
==============
*/

int __fastcall IsPosInsideArc(const vec3_t *pos, float posRadius, const vec3_t *arcOrigin, float arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight)
{
  return ?IsPosInsideArc@@YAHAEBTvec3_t@@M0MMMM@Z(pos, posRadius, arcOrigin, arcRadius, arcAngle0, arcAngle1, arcHalfHeight);
}

/*
==============
TrajectoryComputeDeltaHeightAtTime
==============
*/

double __fastcall TrajectoryComputeDeltaHeightAtTime(const float verticalVelocity, const float gravity, const float time)
{
  double result; 

  *(float *)&result = ?TrajectoryComputeDeltaHeightAtTime@@YAMMMM@Z(verticalVelocity, gravity, time);
  return result;
}

/*
==============
NearestPitchAndYawOnPlane
==============
*/

void __fastcall NearestPitchAndYawOnPlane(const vec3_t *angles, const vec3_t *normal, vec3_t *result)
{
  ?NearestPitchAndYawOnPlane@@YAXAEBTvec3_t@@0AEAT1@@Z(angles, normal, result);
}

/*
==============
CullBoxFromSphere
==============
*/

bool __fastcall CullBoxFromSphere(const vec3_t *sphereOrg, float radius, const Bounds *bounds)
{
  return ?CullBoxFromSphere@@YA_NAEBTvec3_t@@MPEBUBounds@@@Z(sphereOrg, radius, bounds);
}

/*
==============
HalfFromFloat
==============
*/

unsigned __int16 __fastcall HalfFromFloat(float f)
{
  return ?HalfFromFloat@@YAGM@Z(f);
}

/*
==============
Half4FromFloat
==============
*/

void __fastcall Half4FromFloat(const vec4_t *from, unsigned __int16 *to)
{
  ?Half4FromFloat@@YAXAEBTvec4_t@@QEAG@Z(from, to);
}

/*
==============
AngleFromTanHalfFovY
==============
*/

double __fastcall AngleFromTanHalfFovY(float tanHalfFovY)
{
  double result; 

  *(float *)&result = ?AngleFromTanHalfFovY@@YAMM@Z(tanHalfFovY);
  return result;
}

/*
==============
UniformPointsOnSphere
==============
*/

void __fastcall UniformPointsOnSphere(unsigned int pointCount, void *points, unsigned int stride)
{
  ?UniformPointsOnSphere@@YAXIPEAXI@Z(pointCount, points, stride);
}

/*
==============
TanHalfAngles
==============
*/

void __fastcall TanHalfAngles(float fovdeg_x, float viewAspect, float *tanHalfFovX, float *tanHalfFovY)
{
  ?TanHalfAngles@@YAXMMPEAM0@Z(fovdeg_x, viewAspect, tanHalfFovX, tanHalfFovY);
}

/*
==============
ProjectPointOntoVectorClamped
==============
*/

void __fastcall ProjectPointOntoVectorClamped(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  ?ProjectPointOntoVectorClamped@@YAXAEBTvec3_t@@00AEAT1@PEAM@Z(point, start, end, vProj, outDistFromStart);
}

/*
==============
PointOnSphereFromUniformDeviates
==============
*/

void __fastcall PointOnSphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, vec3_t *unitVec)
{
  ?PointOnSphereFromUniformDeviates@@YAXMMAEATvec3_t@@@Z(azimuthDeviate, yawDeviate, unitVec);
}

/*
==============
OrthographicMatrix
==============
*/

void __fastcall OrthographicMatrix(float width, float height, float depth, tmat44_t<vec4_t> *mtx)
{
  ?OrthographicMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(width, height, depth, mtx);
}

/*
==============
MatrixMultiplyUniformScale
==============
*/

void __fastcall MatrixMultiplyUniformScale(const tmat33_t<vec3_t> *a, float b, tmat33_t<vec3_t> *out)
{
  ?MatrixMultiplyUniformScale@@YAXAEBT?$tmat33_t@Tvec3_t@@@@MAEAT1@@Z(a, b, out);
}

/*
==============
PointInCircleFromUniformDeviates
==============
*/

void __fastcall PointInCircleFromUniformDeviates(float radiusDeviate, float yawDeviate, vec2_t *point)
{
  ?PointInCircleFromUniformDeviates@@YAXMMAEATvec2_t@@@Z(radiusDeviate, yawDeviate, point);
}

/*
==============
VectorAngleMultiply
==============
*/

void __fastcall VectorAngleMultiply(vec2_t *vec, float angle)
{
  ?VectorAngleMultiply@@YAXAEATvec2_t@@M@Z(vec, angle);
}

/*
==============
OrthonormalBasis
==============
*/

void __fastcall OrthonormalBasis(const vec3_t *n, tmat33_t<vec3_t> *dst)
{
  ?OrthonormalBasis@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(n, dst);
}

/*
==============
MatrixScale
==============
*/

void __fastcall MatrixScale(const vec3_t *scale, tmat33_t<vec3_t> *out)
{
  ?MatrixScale@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(scale, out);
}

/*
==============
SH4VisToScaledCone::~SH4VisToScaledCone
==============
*/

void __fastcall SH4VisToScaledCone::~SH4VisToScaledCone(SH4VisToScaledCone *this)
{
  ??1SH4VisToScaledCone@@QEAA@XZ(this);
}

/*
==============
BarycentricTriangle::GetCartesianCoordinates
==============
*/

void __fastcall BarycentricTriangle::GetCartesianCoordinates(BarycentricTriangle *this, const vec3_t *barycentricPoint, vec2_t *outCartesianCoords)
{
  ?GetCartesianCoordinates@BarycentricTriangle@@QEAAXAEBTvec3_t@@AEATvec2_t@@@Z(this, barycentricPoint, outCartesianCoords);
}

/*
==============
AddAnglesAsQuatMultiply
==============
*/

void __fastcall AddAnglesAsQuatMultiply(const vec3_t *a0, const vec3_t *a1, vec3_t *outAngles)
{
  ?AddAnglesAsQuatMultiply@@YAXAEBTvec3_t@@0AEAT1@@Z(a0, a1, outAngles);
}

/*
==============
MatrixInverse44Safe
==============
*/

int __fastcall MatrixInverse44Safe(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *out)
{
  return ?MatrixInverse44Safe@@YAHAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(mat, out);
}

/*
==============
FloatFromHalf
==============
*/

double __fastcall FloatFromHalf(unsigned __int16 h)
{
  double result; 

  *(float *)&result = ?FloatFromHalf@@YAMG@Z(h);
  return result;
}

/*
==============
IntersectLinePlane
==============
*/

bool __fastcall IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outHitPoint)
{
  return ?IntersectLinePlane@@YA_NAEBTvec3_t@@000AEAT1@@Z(linePoint, lineAxis, planePoint, planeNormal, outHitPoint);
}

/*
==============
QuatToAngleRadAxis
==============
*/

void __fastcall QuatToAngleRadAxis(const vec4_t *quat, float *outRadians, vec3_t *outAxis)
{
  ?QuatToAngleRadAxis@@YAXAEBTvec4_t@@PEAMAEATvec3_t@@@Z(quat, outRadians, outAxis);
}

/*
==============
ProjectileIntercept
==============
*/

bool __fastcall ProjectileIntercept(const vec3_t *startPos, const vec3_t *startVel, const float projSpeed, const vec3_t *targetPos, const vec3_t *targetVel, vec3_t *intercept)
{
  return ?ProjectileIntercept@@YA_NAEBTvec3_t@@0M00AEAT1@@Z(startPos, startVel, projSpeed, targetPos, targetVel, intercept);
}

/*
==============
DampedSpring::Update3dSpring
==============
*/

void __fastcall DampedSpring::Update3dSpring(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  ?Update3dSpring@DampedSpring@@QEAAXAEATvec3_t@@AEBT2@0@Z(this, currentAngles, targetAngles, velocity);
}

/*
==============
ByteToDir
==============
*/

void __fastcall ByteToDir(const int b, vec3_t *dir)
{
  ?ByteToDir@@YAXHAEATvec3_t@@@Z(b, dir);
}

/*
==============
QuatEigenTrace
==============
*/

double __fastcall QuatEigenTrace(const vec4_t *quat)
{
  double result; 

  *(float *)&result = ?QuatEigenTrace@@YAMAEBTvec4_t@@@Z(quat);
  return result;
}

/*
==============
ProjectPointOnPlane
==============
*/

void __fastcall ProjectPointOnPlane(const vec3_t *point, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  ?ProjectPointOnPlane@@YAXAEBTvec3_t@@00AEAT1@@Z(point, planePoint, planeNormal, outProjectedPoint);
}

/*
==============
Vec2MinorAxis
==============
*/

int __fastcall Vec2MinorAxis(const vec2_t *dir)
{
  return ?Vec2MinorAxis@@YAHAEBTvec2_t@@@Z(dir);
}

/*
==============
GraphGetValueFromFractionUnnormalized
==============
*/

double __fastcall GraphGetValueFromFractionUnnormalized(const int knotCount, const vec2_t *knots, const float fraction)
{
  double result; 

  *(float *)&result = ?GraphGetValueFromFractionUnnormalized@@YAMHPEBTvec2_t@@M@Z(knotCount, knots, fraction);
  return result;
}

/*
==============
MatrixClear43
==============
*/

void __fastcall MatrixClear43(tmat43_t<vec3_t> *dst)
{
  ?MatrixClear43@@YAXAEAT?$tmat43_t@Tvec3_t@@@@@Z(dst);
}

/*
==============
FinitePerspectiveMatrix
==============
*/

void __fastcall FinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, float zFar, tmat44_t<vec4_t> *mtx)
{
  ?FinitePerspectiveMatrix@@YAXMMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(tanHalfFovX, tanHalfFovY, zNear, zFar, mtx);
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(float t, float startAngle, float deltaAngle, const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  ?CalculatePointOnArc@@YAXMMMAEBTvec3_t@@M00AEAT1@@Z(t, startAngle, deltaAngle, center, radius, right, up, outVert);
}

/*
==============
Intersect2DPlanes
==============
*/

int __fastcall Intersect2DPlanes(const vec2_t *dir1, float dist1, const vec2_t *dir2, float dist2, vec2_t *result)
{
  return ?Intersect2DPlanes@@YAHAEBTvec2_t@@M0MAEAT1@@Z(dir1, dist1, dir2, dist2, result);
}

/*
==============
ClosestPointOnConicSectionOfSphereToPoint
==============
*/

void __fastcall ClosestPointOnConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const vec3_t *point, vec3_t *closestPoint)
{
  ?ClosestPointOnConicSectionOfSphereToPoint@@YAXAEBTvec3_t@@0MM0AEAT1@@Z(coneOrg, coneDir, cosHalfFov, radius, point, closestPoint);
}

/*
==============
PointOnHemisphereFromUniformDeviates
==============
*/

void __fastcall PointOnHemisphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, vec3_t *unitVec)
{
  ?PointOnHemisphereFromUniformDeviates@@YAXMMAEATvec3_t@@@Z(azimuthDeviate, yawDeviate, unitVec);
}

/*
==============
TrajectoryEstimateDesiredInAirTime
==============
*/

double __fastcall TrajectoryEstimateDesiredInAirTime(const vec3_t *startPos, const vec3_t *endPos, const float velocity, const float gravity)
{
  double result; 

  *(float *)&result = ?TrajectoryEstimateDesiredInAirTime@@YAMAEBTvec3_t@@0MM@Z(startPos, endPos, velocity, gravity);
  return result;
}

/*
==============
QuatTrans_TransformPoint
==============
*/

void __fastcall QuatTrans_TransformPoint(const vec4_t *quat, const vec3_t *trans, const vec3_t *point, vec3_t *outTransformedPoint)
{
  ?QuatTrans_TransformPoint@@YAXAEBTvec4_t@@AEBTvec3_t@@1AEAT2@@Z(quat, trans, point, outTransformedPoint);
}

/*
==============
GetCartesianCoordinates
==============
*/

void __fastcall GetCartesianCoordinates(float zenithAngle, float azimuthAngle, float radius, vec3_t *vector)
{
  ?GetCartesianCoordinates@@YAXMMMAEATvec3_t@@@Z(zenithAngle, azimuthAngle, radius, vector);
}

/*
==============
BarycentricTriangle::Init
==============
*/

void __fastcall BarycentricTriangle::Init(BarycentricTriangle *this, const vec2_t *cartesianVertices)
{
  ?Init@BarycentricTriangle@@QEAAXQEBTvec2_t@@@Z(this, cartesianVertices);
}

/*
==============
GenerateAxisFromUpVector
==============
*/

void __fastcall GenerateAxisFromUpVector(const vec3_t *up, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  ?GenerateAxisFromUpVector@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(up, refAxis, outAxis);
}

/*
==============
SH4VisToScaledCone::Init
==============
*/

void __fastcall SH4VisToScaledCone::Init(SH4VisToScaledCone *this, int numDataPoints)
{
  ?Init@SH4VisToScaledCone@@QEAAXH@Z(this, numDataPoints);
}

/*
==============
ProjectPointOntoVectorDir
==============
*/

void __fastcall ProjectPointOntoVectorDir(const vec3_t *point, const vec3_t *start, const vec3_t *dir, vec3_t *result_projectedPoint, float *result_projectedDistanceFromStart)
{
  ?ProjectPointOntoVectorDir@@YAXAEBTvec3_t@@00AEAT1@PEAM@Z(point, start, dir, result_projectedPoint, result_projectedDistanceFromStart);
}

/*
==============
VectorRotateQuatAroundPoint
==============
*/

void __fastcall VectorRotateQuatAroundPoint(const vec3_t *vIn, const vec4_t *vQuat, const vec3_t *vOrigin, vec3_t *out)
{
  ?VectorRotateQuatAroundPoint@@YAXAEBTvec3_t@@AEBTvec4_t@@0AEAT1@@Z(vIn, vQuat, vOrigin, out);
}

/*
==============
MatrixAdd
==============
*/

void __fastcall MatrixAdd(const tmat33_t<vec3_t> *a, const tmat33_t<vec3_t> *b, tmat33_t<vec3_t> *out)
{
  ?MatrixAdd@@YAXAEBT?$tmat33_t@Tvec3_t@@@@0AEAT1@@Z(a, b, out);
}

/*
==============
AxisToSignedAngles
==============
*/

void __fastcall AxisToSignedAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  ?AxisToSignedAngles@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(axis, angles);
}

/*
==============
DirToByte
==============
*/

unsigned __int8 __fastcall DirToByte(const vec3_t *dir)
{
  return ?DirToByte@@YAEAEBTvec3_t@@@Z(dir);
}

/*
==============
SH4VisToScaledCone::EvalScale
==============
*/

long double __fastcall SH4VisToScaledCone::EvalScale(SH4VisToScaledCone *this, float zh0, float zh1, float zh2, float zh3, int dataPoint)
{
  return ?EvalScale@SH4VisToScaledCone@@AEAANMMMMH@Z(this, zh0, zh1, zh2, zh3, dataPoint);
}

/*
==============
I_random
==============
*/

double __fastcall I_random()
{
  double result; 

  *(float *)&result = ?I_random@@YAMXZ();
  return result;
}

/*
==============
TrajectoryCalculateInitialVelocity
==============
*/

void __fastcall TrajectoryCalculateInitialVelocity(const vec3_t *startPos, const vec3_t *endPos, const vec3_t *gravityVector, const float totalTime, vec3_t *returnVector)
{
  ?TrajectoryCalculateInitialVelocity@@YAXAEBTvec3_t@@00MAEAT1@@Z(startPos, endPos, gravityVector, totalTime, returnVector);
}

/*
==============
UnitQuatToForward
==============
*/

void __fastcall UnitQuatToForward(const vec4_t *quat, vec3_t *forward)
{
  ?UnitQuatToForward@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(quat, forward);
}

/*
==============
I_crandom
==============
*/

double __fastcall I_crandom()
{
  double result; 

  *(float *)&result = ?I_crandom@@YAMXZ();
  return result;
}

/*
==============
InfinitePerspectiveMatrix
==============
*/

void __fastcall InfinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, tmat44_t<vec4_t> *mtx)
{
  ?InfinitePerspectiveMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(tanHalfFovX, tanHalfFovY, zNear, mtx);
}

/*
==============
MatrixMultiplyEquals
==============
*/

void __fastcall MatrixMultiplyEquals(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  ?MatrixMultiplyEquals@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in, out);
}

/*
==============
BoxMullerTransform
==============
*/

void __fastcall BoxMullerTransform(float uniformRandomA, float uniformRandomB, float mean, float standardDeviation, float *outNormalRandomA, float *outNormalRandomB)
{
  ?BoxMullerTransform@@YAXMMMMPEAM0@Z(uniformRandomA, uniformRandomB, mean, standardDeviation, outNormalRandomA, outNormalRandomB);
}

/*
==============
GetCartesianCoordinates
==============
*/
void GetCartesianCoordinates(float zenithAngle, float azimuthAngle, float radius, vec3_t *vector)
{
  float v5; 
  float v6; 
  float v7; 
  float c[3]; 
  float s; 
  float v10; 

  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 832, ASSERT_TYPE_ASSERT, "(radius > 0.0f)", (const char *)&queryFormat, "radius > 0.0f") )
    __debugbreak();
  FastSinCos(zenithAngle, &s, c);
  FastSinCos(azimuthAngle, &v7, &v10);
  v5 = (float)(radius * s) * v10;
  v6 = (float)(radius * s) * v7;
  vector->v[2] = radius * c[0];
  vector->v[0] = v5;
  vector->v[1] = v6;
}

/*
==============
DampedSpring::DampedSpring
==============
*/
void DampedSpring::DampedSpring(DampedSpring *this, const float springConst, float accelWeight, float deltaTime)
{
  this->m_maxDeltaTime = 0.016000001;
  *(_QWORD *)&this->m_deltaTime = 0i64;
  this->m_springConst = springConst;
  this->m_startDeltaTime = deltaTime;
  this->m_accelWeight = accelWeight;
  this->m_springConstSqr = springConst * springConst;
}

/*
==============
SH4VisToScaledCone::SH4VisToScaledCone
==============
*/
void SH4VisToScaledCone::SH4VisToScaledCone(SH4VisToScaledCone *this)
{
  this->m_minimizerCoeffs = NULL;
  this->m_numDataPoints = 0;
}

/*
==============
SH4VisToScaledCone::~SH4VisToScaledCone
==============
*/
void SH4VisToScaledCone::~SH4VisToScaledCone(SH4VisToScaledCone *this)
{
  operator delete[](this->m_minimizerCoeffs);
  this->m_minimizerCoeffs = NULL;
}

/*
==============
AddAnglesAsQuatMultiply
==============
*/
void AddAnglesAsQuatMultiply(const vec3_t *a0, const vec3_t *a1, vec3_t *outAngles)
{
  float v7; 
  float v9; 
  float v10; 
  vec4_t in2; 
  vec4_t quat; 
  vec4_t out; 

  AnglesToQuat(a0, &quat);
  AnglesToQuat(a1, &in2);
  QuatMultiply(&quat, &in2, &out);
  UnitQuatToAngles(&out, outAngles);
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v7 = outAngles->v[1] * 0.0027777778;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  outAngles->v[0] = (float)((float)(outAngles->v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v9 = (float)(v7 - *(float *)&_XMM3) * 360.0;
  v10 = outAngles->v[2] * 0.0027777778;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  outAngles->v[1] = v9;
  outAngles->v[2] = (float)(v10 - *(float *)&_XMM3) * 360.0;
}

/*
==============
AngleBetween
==============
*/
float AngleBetween(const vec3_t *a, const vec3_t *b)
{
  double v4; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1841, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
    __debugbreak();
  v4 = I_fclamp((float)((float)(a->v[0] * b->v[0]) + (float)(b->v[1] * a->v[1])) + (float)(b->v[2] * a->v[2]), -1.0, 1.0);
  return acosf_0(*(float *)&v4) * 57.295776;
}

/*
==============
AngleClamp
==============
*/
float AngleClamp(float angle1, const float angle2, const float range)
{
  float v5; 

  _XMM3 = 0i64;
  __asm { vroundss xmm5, xmm3, xmm4, 1 }
  v5 = (float)((float)((float)(angle1 - angle2) * 0.0027777778) - *(float *)&_XMM5) * 360.0;
  if ( v5 > range )
    return angle2 + range;
  if ( v5 < COERCE_FLOAT(LODWORD(range) ^ _xmm) )
    return angle2 - range;
  return angle1;
}

/*
==============
AngleEigenTrace
==============
*/

float __fastcall AngleEigenTrace(double angle)
{
  __int128 v1; 
  float v2; 

  *((double *)&v1 + 1) = *(&angle + 1);
  v2 = sinf_0(*(float *)&angle * 0.017453292);
  *(double *)&v1 = v2 * v2;
  _XMM2 = v1;
  __asm { vcvtsd2ss xmm0, xmm2, xmm2 }
  return *(float *)&_XMM0;
}

/*
==============
AngleFromTanHalfFovY
==============
*/
float AngleFromTanHalfFovY(float tanHalfFovY)
{
  return atanf_0(tanHalfFovY * 1.3333334) * 114.59155;
}

/*
==============
ApplyLinearMap
==============
*/

double __fastcall ApplyLinearMap(double value, float min, float max)
{
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(max - min) & _xmm) >= 0.001 )
    return I_fclamp((float)(*(float *)&value - min) / (float)(max - min), 0.0, 1.0);
  __asm { vcmpltss xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm0, xmm1, xmm2 }
  return value;
}

/*
==============
ApplySHRotation4
==============
*/
void ApplySHRotation4(const float *pMat, const float *pSHIn, float *pSHOut)
{
  *pSHOut = *pSHIn;
  pSHOut[1] = (float)((float)(pMat[1] * pSHIn[2]) + (float)(*pMat * pSHIn[1])) + (float)(pMat[2] * pSHIn[3]);
  pSHOut[2] = (float)((float)(pMat[4] * pSHIn[2]) + (float)(pMat[3] * pSHIn[1])) + (float)(pMat[5] * pSHIn[3]);
  pSHOut[3] = (float)((float)(pMat[7] * pSHIn[2]) + (float)(pMat[6] * pSHIn[1])) + (float)(pMat[8] * pSHIn[3]);
  pSHOut[4] = (float)((float)((float)((float)(pMat[9] * pSHIn[4]) + (float)(pMat[10] * pSHIn[5])) + (float)(pMat[11] * pSHIn[6])) + (float)(pMat[12] * pSHIn[7])) + (float)(pMat[13] * pSHIn[8]);
  pSHOut[5] = (float)((float)((float)((float)(pMat[14] * pSHIn[4]) + (float)(pMat[15] * pSHIn[5])) + (float)(pMat[16] * pSHIn[6])) + (float)(pMat[17] * pSHIn[7])) + (float)(pMat[18] * pSHIn[8]);
  pSHOut[6] = (float)((float)((float)((float)(pMat[19] * pSHIn[4]) + (float)(pMat[20] * pSHIn[5])) + (float)(pMat[21] * pSHIn[6])) + (float)(pMat[22] * pSHIn[7])) + (float)(pMat[23] * pSHIn[8]);
  pSHOut[7] = (float)((float)((float)((float)(pMat[24] * pSHIn[4]) + (float)(pMat[25] * pSHIn[5])) + (float)(pMat[26] * pSHIn[6])) + (float)(pMat[27] * pSHIn[7])) + (float)(pMat[28] * pSHIn[8]);
  pSHOut[8] = (float)((float)((float)((float)(pMat[29] * pSHIn[4]) + (float)(pMat[30] * pSHIn[5])) + (float)(pMat[31] * pSHIn[6])) + (float)(pMat[32] * pSHIn[7])) + (float)(pMat[33] * pSHIn[8]);
  pSHOut[9] = (float)((float)((float)((float)((float)((float)(pMat[35] * pSHIn[10]) + (float)(pMat[34] * pSHIn[9])) + (float)(pMat[36] * pSHIn[11])) + (float)(pMat[37] * pSHIn[12])) + (float)(pMat[38] * pSHIn[13])) + (float)(pMat[39] * pSHIn[14])) + (float)(pMat[40] * pSHIn[15]);
  pSHOut[10] = (float)((float)((float)((float)((float)((float)(pMat[42] * pSHIn[10]) + (float)(pMat[41] * pSHIn[9])) + (float)(pMat[43] * pSHIn[11])) + (float)(pMat[44] * pSHIn[12])) + (float)(pMat[45] * pSHIn[13])) + (float)(pMat[46] * pSHIn[14])) + (float)(pMat[47] * pSHIn[15]);
  pSHOut[11] = (float)((float)((float)((float)((float)((float)(pMat[49] * pSHIn[10]) + (float)(pMat[48] * pSHIn[9])) + (float)(pMat[50] * pSHIn[11])) + (float)(pMat[51] * pSHIn[12])) + (float)(pMat[52] * pSHIn[13])) + (float)(pMat[53] * pSHIn[14])) + (float)(pMat[54] * pSHIn[15]);
  pSHOut[12] = (float)((float)((float)((float)((float)((float)(pMat[56] * pSHIn[10]) + (float)(pMat[55] * pSHIn[9])) + (float)(pMat[57] * pSHIn[11])) + (float)(pMat[58] * pSHIn[12])) + (float)(pMat[59] * pSHIn[13])) + (float)(pMat[60] * pSHIn[14])) + (float)(pMat[61] * pSHIn[15]);
  pSHOut[13] = (float)((float)((float)((float)((float)((float)(pMat[63] * pSHIn[10]) + (float)(pMat[62] * pSHIn[9])) + (float)(pMat[64] * pSHIn[11])) + (float)(pMat[65] * pSHIn[12])) + (float)(pMat[66] * pSHIn[13])) + (float)(pMat[67] * pSHIn[14])) + (float)(pMat[68] * pSHIn[15]);
  pSHOut[14] = (float)((float)((float)((float)((float)((float)(pMat[70] * pSHIn[10]) + (float)(pMat[69] * pSHIn[9])) + (float)(pMat[71] * pSHIn[11])) + (float)(pMat[72] * pSHIn[12])) + (float)(pMat[73] * pSHIn[13])) + (float)(pMat[74] * pSHIn[14])) + (float)(pMat[75] * pSHIn[15]);
  pSHOut[15] = (float)((float)((float)((float)((float)((float)(pMat[77] * pSHIn[10]) + (float)(pMat[76] * pSHIn[9])) + (float)(pMat[78] * pSHIn[11])) + (float)(pMat[79] * pSHIn[12])) + (float)(pMat[80] * pSHIn[13])) + (float)(pMat[81] * pSHIn[14])) + (float)(pMat[82] * pSHIn[15]);
}

/*
==============
DampedSpring::AxisAngleToAngles
==============
*/
void DampedSpring::AxisAngleToAngles(DampedSpring *this, const float angle, const vec3_t *axis, vec3_t *outAngles)
{
  vec4_t quat; 
  tmat33_t<vec3_t> axisa; 

  AngleRadAxisToQuat(angle * 0.017453292, axis, &quat);
  QuatToAxis(&quat, &axisa);
  AxisToAngles(&axisa, outAngles);
}

/*
==============
AxisRandomAroundForward
==============
*/
void AxisRandomAroundForward(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  int v10; 
  __int128 v11; 
  __int128 v12; 
  vec3_t point; 

  v3 = forward->v[2];
  v4 = forward->v[1];
  LODWORD(v5) = COERCE_UNSIGNED_INT((float)((float)(v4 - v3) * forward->v[0]) + (float)(COERCE_FLOAT(LODWORD(v4) ^ _xmm) * v3)) ^ _xmm;
  v6 = (float)(v4 * v5) + forward->v[0];
  point.v[0] = (float)(forward->v[0] * v5) - v3;
  point.v[2] = (float)(v3 * v5) + COERCE_FLOAT(LODWORD(v4) ^ _xmm);
  point.v[1] = v6;
  v10 = rand();
  RotatePointAroundVector(left, forward, &point, (float)v10 * 0.010986328);
  v11 = LODWORD(left->v[0]);
  v12 = v11;
  *(float *)&v12 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(left->v[1] * left->v[1])) + (float)(left->v[2] * left->v[2]));
  _XMM4 = v12;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  left->v[0] = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
  left->v[1] = (float)(1.0 / *(float *)&_XMM0) * left->v[1];
  left->v[2] = (float)(1.0 / *(float *)&_XMM0) * left->v[2];
  Vec3Cross(forward, left, up);
}

/*
==============
DampedSpring::AxisToAxisAngle
==============
*/
float DampedSpring::AxisToAxisAngle(DampedSpring *this, const tmat33_t<vec3_t> *axis, vec3_t *outAxisAngle)
{
  float outRadians; 

  MatrixToAngleRadAxis(axis, outAxisAngle, &outRadians);
  return outRadians * 57.295776;
}

/*
==============
AxisToSignedAngles
==============
*/
void AxisToSignedAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  float v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  float v8; 
  float v13; 
  float s; 
  float c; 
  vec3_t vec; 

  vectosignedangles(axis->m, angles);
  v4 = axis->m[1].v[1];
  vec.v[0] = axis->m[1].v[0];
  v5 = axis->m[1].v[2];
  vec.v[1] = v4;
  v6 = angles->v[1];
  vec.v[2] = v5;
  FastSinCos(v6 * -0.017453292, &s, &c);
  v7 = LODWORD(vec.v[0]);
  *(float *)&v7 = (float)(vec.v[0] * c) - (float)(vec.v[1] * s);
  v8 = angles->v[0];
  vec.v[1] = (float)(vec.v[0] * s) + (float)(vec.v[1] * c);
  FastSinCos(v8 * -0.017453292, &s, &c);
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v7 + 1);
  vec.v[0] = (float)(vec.v[2] * s) + (float)(*(float *)&v7 * c);
  vec.v[2] = (float)(vec.v[2] * c) - (float)(*(float *)&v7 * s);
  *(double *)&_XMM0 = vectosignedpitch(&vec);
  if ( vec.v[1] >= 0.0 )
  {
    LODWORD(v13) = _XMM0 ^ _xmm;
  }
  else
  {
    _XMM1 = LODWORD(FLOAT_N180_0);
    __asm
    {
      vcmpltss xmm3, xmm0, xmm2
      vblendvps xmm2, xmm1, xmm2, xmm3
    }
    v13 = *(float *)&_XMM2 + *(float *)&_XMM0;
  }
  angles->v[2] = v13;
}

/*
==============
BoxMullerTransform
==============
*/
void BoxMullerTransform(float uniformRandomA, float uniformRandomB, float mean, float standardDeviation, float *outNormalRandomA, float *outNormalRandomB)
{
  float v6; 

  if ( (uniformRandomA <= 0.0 || uniformRandomA >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 504, ASSERT_TYPE_ASSERT, "(0.0f < uniformRandomA && uniformRandomA < 1.0f)", "%s\n\tBoxMullerTransform(): uniformRandomA must be greater than 0.0 and less than 1.0.  Provided: %f", "0.0f < uniformRandomA && uniformRandomA < 1.0f", uniformRandomA) )
    __debugbreak();
  if ( (uniformRandomB <= 0.0 || uniformRandomB >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 505, ASSERT_TYPE_ASSERT, "(0.0f < uniformRandomB && uniformRandomB < 1.0f)", "%s\n\tBoxMullerTransform(): uniformRandomB must be greater than 0.0 and less than 1.0.  Provided: %f", "0.0f < uniformRandomB && uniformRandomB < 1.0f", uniformRandomB) )
    __debugbreak();
  if ( standardDeviation < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 506, ASSERT_TYPE_ASSERT, "(standardDeviation >= 0.0f)", "%s\n\tBoxMullerTransform(): standardDeviation must be non-negative.  Provided %f.", "standardDeviation >= 0.0f", standardDeviation) )
    __debugbreak();
  if ( !outNormalRandomA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 507, ASSERT_TYPE_ASSERT, "(outNormalRandomA)", (const char *)&queryFormat, "outNormalRandomA") )
    __debugbreak();
  v6 = fsqrt(logf_0(uniformRandomA) * -2.0);
  *outNormalRandomA = (float)((float)(cosf_0(uniformRandomB * 6.2831855) * v6) * standardDeviation) + mean;
  if ( outNormalRandomB )
    *outNormalRandomB = (float)((float)(sinf_0(uniformRandomB * 6.2831855) * v6) * standardDeviation) + mean;
}

/*
==============
BuildSHRotMat4
==============
*/
void BuildSHRotMat4(const float *rotMat, float *pOut)
{
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
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  float v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 

  v2 = rotMat[4];
  v3 = rotMat[7];
  v4 = rotMat[8];
  v5 = rotMat[5];
  v6 = rotMat[2];
  v7 = rotMat[1];
  v8 = rotMat[3];
  v9 = *rotMat;
  pOut[1] = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
  pOut[3] = COERCE_FLOAT(LODWORD(v3) ^ _xmm);
  pOut[7] = COERCE_FLOAT(LODWORD(v6) ^ _xmm);
  v10 = rotMat[6];
  pOut[5] = COERCE_FLOAT(LODWORD(v10) ^ _xmm);
  v196 = v6 * v6;
  v197 = v9 * v9;
  v198 = v8 * v8;
  v195 = v7 * v7;
  v177 = (float)(v8 * v7) + (float)(v2 * v9);
  pOut[9] = v177;
  v182 = v2 * v6;
  v181 = v5 * v7;
  pOut[10] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 * v6) ^ _xmm) - (float)(v5 * v7);
  v173 = v8;
  v175 = v2;
  *pOut = v2;
  pOut[11] = (float)(v6 * 1.7320508) * v5;
  v180 = v7;
  pOut[6] = v7;
  v11 = v8 * v6;
  LODWORD(v12) = COERCE_UNSIGNED_INT(v8 * v6) ^ _xmm;
  v186 = v6;
  v13 = v5 * v9;
  pOut[12] = v12 - (float)(v5 * v9);
  v14 = rotMat[4];
  v170 = v9;
  pOut[8] = v9;
  v15 = v8 * v9;
  pOut[2] = v8;
  v16 = v14 * rotMat[1];
  pOut[13] = v15 - v16;
  v17 = v5 * v5;
  v179 = v3;
  pOut[4] = v4;
  v172 = v5 * v5;
  v18 = v4 * v4;
  v19 = v10 * v10;
  v20 = v3 * v3;
  v21 = v4 * rotMat[4];
  pOut[14] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 * v14) ^ _xmm) - (float)(v3 * v173);
  v22 = v10 * rotMat[5];
  v183 = (float)(v3 * v5) + v21;
  pOut[15] = v183;
  v23 = v4 * rotMat[3];
  pOut[16] = (float)(-1.7320508 * rotMat[5]) * v4;
  pOut[17] = v22 + v23;
  pOut[18] = (float)(v3 * v175) - (float)(v10 * v173);
  v24 = v10 * 2.0;
  pOut[19] = (float)((float)((float)(v180 * v170) + (float)(v175 * v173)) - (float)((float)(v10 * 2.0) * rotMat[7])) * -0.57735026;
  v25 = rotMat[2] * rotMat[1];
  v187 = (float)(v25 + (float)(v5 * v175)) - (float)((float)(2.0 * rotMat[7]) * rotMat[8]);
  pOut[20] = v187 * 0.57735026;
  v26 = v18 - (float)((float)((float)(v5 * v5) + v196) * 0.5);
  v27 = rotMat[5] * rotMat[3];
  v28 = rotMat[2] * *rotMat;
  v29 = v24 * rotMat[8];
  pOut[21] = v26;
  v188 = v25 + (float)(v5 * v175);
  v189 = v28 + v27;
  v30 = rotMat[4] * rotMat[4];
  pOut[22] = (float)((float)(v28 + v27) - v29) * 0.57735026;
  v31 = (float)((float)((float)((float)(v19 * 2.0) - (float)(v198 + v197)) + v195) + v30) - (float)(v20 * 2.0);
  v32 = rotMat[6];
  v33 = v32 * rotMat[1];
  v190 = v31;
  v34 = rotMat[2];
  pOut[23] = v31 * 0.28867513;
  v35 = v179 * v34;
  v36 = rotMat[8];
  v37 = (float)(v36 * rotMat[1]) + (float)(v179 * v34);
  pOut[24] = COERCE_FLOAT(LODWORD(v33) ^ _xmm) - (float)(v179 * v170);
  v191 = v37;
  pOut[25] = v37;
  v38 = v36 * *rotMat;
  pOut[26] = (float)(v34 * -1.7320508) * v36;
  v39 = v32 * v34;
  pOut[27] = v38 + (float)(v32 * v34);
  v40 = (float)(v180 * v179) - (float)(v32 * v170);
  v41 = rotMat[4];
  v42 = v41 * rotMat[3];
  pOut[28] = v40;
  v43 = (float)(v180 * *rotMat) - v42;
  pOut[30] = (float)(v41 * rotMat[5]) - v25;
  v44 = v196 - v17;
  v45 = rotMat[4];
  pOut[29] = v43;
  pOut[31] = v44 * 0.86602539;
  v46 = rotMat[4];
  pOut[32] = v27 - v28;
  v194 = (float)((float)(v197 - v198) - v195) + (float)(v46 * v46);
  pOut[33] = v194 * 0.5;
  v47 = rotMat[5];
  pOut[34] = (float)((float)((float)((float)((float)((float)(v170 * 1.5) * rotMat[3]) * rotMat[1]) + (float)((float)(0.75 * v197) * v45)) - (float)((float)(0.75 * v198) * v45)) - (float)((float)(0.75 * v195) * v45)) + (float)((float)((float)(v45 * v45) * v45) * 0.25);
  v48 = 1.9364917 * rotMat[1];
  pOut[35] = (float)((float)((float)((float)(rotMat[1] * *rotMat) * v47) + (float)(v177 * rotMat[2])) - (float)((float)(rotMat[3] * v45) * v47)) * -1.2247449;
  pOut[36] = (float)((float)(v48 * rotMat[2]) * v47) + (float)((float)(v44 * v45) * 0.96824586);
  v49 = (float)((float)(1.9364917 * *rotMat) * rotMat[2]) * v47;
  pOut[37] = (float)((float)(v172 - (float)(v196 * 3.0)) * v47) * 0.79056942;
  v50 = v49 + (float)((float)(v44 * rotMat[3]) * 0.96824586);
  v51 = 2.0 * rotMat[1];
  v52 = (float)(2.0 * *rotMat) * rotMat[3];
  v174 = 2.0 * *rotMat;
  pOut[38] = v50;
  v176 = v51 * v45;
  v53 = (float)(v45 * v45) * 3.0;
  v193 = (float)(v198 + v195) - (float)(v45 * v45);
  pOut[39] = (float)((float)((float)((float)((float)(v51 * v45) - v52) * rotMat[2]) - (float)(v197 * rotMat[5])) + (float)(v193 * rotMat[5])) * 0.61237246;
  v54 = (float)((float)(v197 * 3.0) * rotMat[3]) - (float)((float)((float)(v170 * 6.0) * rotMat[1]) * v45);
  v55 = rotMat[6];
  v56 = v55 * *rotMat;
  v57 = (float)((float)((float)(v195 * 3.0) + v198) - v53) * rotMat[3];
  v58 = rotMat[7];
  v59 = (float)(v55 * rotMat[3]) * rotMat[1];
  v60 = (float)(v54 - v57) * 0.25;
  v61 = v56 * rotMat[4];
  pOut[40] = v60;
  v62 = (float)((float)((float)(v61 + v59) + (float)(v15 * v58)) - (float)(v16 * v58)) * -1.2247449;
  v63 = v55 * rotMat[4];
  v64 = rotMat[8];
  v65 = v58 * *rotMat;
  v66 = v58 * rotMat[3];
  pOut[41] = v62;
  v67 = (float)(v66 + v63) * rotMat[2];
  v178 = v65 + v33;
  v68 = (float)(v64 * v181) * -1.5811388;
  pOut[42] = (float)(v67 + (float)((float)(v65 + v33) * rotMat[5])) + (float)(v64 * v177);
  v69 = v35 * rotMat[5];
  v70 = v64;
  v71 = rotMat[5];
  pOut[43] = v68 - (float)((float)(v69 + (float)(v70 * v182)) * 1.5811388);
  pOut[44] = (float)((float)(rotMat[2] * 3.8729835) * rotMat[5]) * v70;
  v72 = (float)(v39 * v71) + (float)(v11 * v70);
  v73 = v58;
  v74 = (float)(v13 * v70) * -1.5811388;
  v75 = rotMat[6];
  v76 = (float)((float)(v75 * rotMat[3]) * rotMat[2]) - (float)((float)(v58 * rotMat[4]) * rotMat[2]);
  v77 = (float)(v58 * rotMat[1]) * v71;
  pOut[45] = v74 - (float)(v72 * 1.5811388);
  v78 = v33 * rotMat[4];
  v79 = rotMat[3];
  pOut[46] = (float)((float)((float)(v76 + (float)(v56 * v71)) - v77) + (float)(v15 * v70)) - (float)(v16 * v70);
  v80 = (float)((float)(v78 * 1.2247449) - (float)((float)(v15 * v75) * 1.2247449)) + (float)((float)(v58 * v177) * 1.2247449);
  v81 = (float)(v198 * 3.0) + v197;
  pOut[47] = v80;
  v82 = (float)(v79 * 8.0) * v75;
  v83 = (float)(v73 * v73) * 4.0;
  v84 = (float)(v75 * v75) * 4.0;
  v85 = v84 + v195;
  v86 = (float)((float)((float)((float)(v81 * rotMat[4]) + (float)((float)(v79 * v174) * rotMat[1])) - (float)(v82 * v73)) - (float)((float)((float)((float)(v84 + v195) + (float)(rotMat[4] * rotMat[4])) - v83) * rotMat[4])) * -0.19364917;
  v87 = v73 * 4.0;
  v88 = rotMat[8];
  pOut[48] = v86;
  v185 = v84;
  v171 = v83;
  v192 = v87 * v88;
  v89 = v51 * rotMat[2];
  pOut[49] = (float)((float)((float)((float)(v181 + v182) * *rotMat) - (float)((float)(v75 * v183) * 4.0)) + (float)((float)((float)((float)((float)(3.0 * rotMat[4]) * rotMat[5]) + v25) - (float)(v87 * v88)) * v79)) * 0.31622776;
  v90 = 8.0 * rotMat[6];
  v184 = v89;
  v91 = (float)(v88 * v88) * 4.0;
  v92 = rotMat[5];
  v93 = (float)((float)(v172 * 3.0) + v196) - v91;
  pOut[50] = (float)((float)((float)((float)((float)(v179 * 8.0) * v92) * v88) - (float)(v89 * v92)) - (float)(v93 * rotMat[4])) * 0.25;
  v94 = (float)(v172 + v196) - v91;
  pOut[51] = (float)(v94 * v92) * 0.61237246;
  pOut[52] = (float)((float)((float)((float)(v90 * v92) * rotMat[8]) - (float)((float)(v174 * v186) * v92)) - (float)(v93 * v79)) * 0.25;
  v95 = (float)((float)((float)((float)((float)(v174 * v79) * rotMat[2]) - (float)(rotMat[2] * v176)) + (float)(v81 * v92)) - (float)(v84 * v92)) - (float)(v92 * v195);
  v96 = (float)(rotMat[4] * rotMat[4]) * 3.0;
  v97 = (float)(v174 * v180) * rotMat[4];
  pOut[53] = (float)((float)((float)((float)(v95 - (float)(v96 * rotMat[5])) + (float)(rotMat[5] * v171)) - (float)(v82 * rotMat[8])) * 0.15811388) + (float)((float)((float)(1.2649111 * rotMat[4]) * rotMat[7]) * rotMat[8]);
  v98 = rotMat[6];
  v99 = (float)(v198 + v197) * 0.47434163;
  v100 = rotMat[7];
  v101 = rotMat[1];
  v102 = rotMat[4];
  v103 = 0.94868326 * *rotMat;
  pOut[54] = (float)((float)((float)((float)((float)(v198 + v197) * v79) - v97) + (float)((float)(v90 * v102) * v100)) - (float)((float)((float)(v85 + v96) - v171) * v79)) * -0.19364917;
  v104 = (float)((float)(v102 * v102) + v195) * 0.47434163;
  pOut[55] = (float)((float)((float)((float)((float)((float)(0.94868326 * v79) * v98) * v102) + (float)((float)(v103 * v98) * v180)) + (float)(v99 * v100)) - (float)((float)((float)((float)(v98 * v98) * 0.94868326) + v104) * v100)) + (float)((float)((float)(v100 * v100) * v100) * 0.31622776);
  v105 = (float)(v100 * v79) * rotMat[5];
  pOut[56] = (float)((float)(v98 * v187) * -0.77459669) - (float)((float)((float)((float)((float)(v100 * *rotMat) * rotMat[2]) + v105) + (float)((float)((float)(v101 * *rotMat) + (float)(rotMat[3] * rotMat[4])) * rotMat[8])) * 0.77459669);
  v106 = rotMat[8] * rotMat[8];
  v107 = (float)(v172 + v196) - (float)(v106 * 2.0);
  v108 = rotMat[8];
  pOut[57] = (float)((float)(v107 * rotMat[7]) * 0.61237246) + (float)((float)(v188 * 1.2247449) * v108);
  v109 = v107 * rotMat[6];
  pOut[58] = (float)(v106 * v108) - (float)((float)((float)(v172 + v196) * 1.5) * v108);
  pOut[59] = (float)((float)(v189 * 1.2247449) * v108) + (float)(v109 * 0.61237246);
  v110 = v101;
  v111 = *rotMat;
  v112 = rotMat[6];
  v113 = rotMat[3];
  pOut[60] = (float)((float)((float)((float)((float)((float)(v110 * 0.77459669) * rotMat[7]) - (float)((float)(*rotMat * 0.77459669) * v112)) * rotMat[2]) - (float)((float)((float)(0.77459669 * v113) * v112) * rotMat[5])) + (float)((float)((float)(0.77459669 * rotMat[4]) * rotMat[7]) * rotMat[5])) + (float)((float)(v190 * rotMat[8]) * 0.38729835);
  v114 = (float)(v99 - (float)((float)(v112 * v112) * 0.31622776)) - v104;
  v115 = rotMat[7];
  v116 = (float)(v114 * v112) - (float)((float)((float)((float)(v110 * v111) + (float)(v113 * rotMat[4])) * 0.94868326) * v115);
  v117 = rotMat[6];
  v118 = v117 * 1.5491934;
  v119 = rotMat[5];
  pOut[61] = v116 + (float)((float)(v117 * 0.94868326) * (float)(v115 * v115));
  v120 = (float)(v117 * 1.5491934) * v115;
  v121 = rotMat[4];
  v122 = (float)((float)((float)(v120 - (float)((float)(0.38729835 * rotMat[3]) * v121)) * v111) - (float)((float)(v197 * 0.58094752) * v110)) + (float)((float)((float)((float)((float)((float)(v185 - v198) + v195) + (float)(v121 * v121)) - v171) * v110) * 0.19364917);
  v123 = v191 * rotMat[6];
  v124 = (float)(v181 + v182) * rotMat[3];
  pOut[62] = v122;
  v125 = (float)((float)(v196 * 3.0) + v172) - v91;
  v126 = rotMat[2];
  pOut[63] = (float)((float)(v124 - (float)(v123 * 4.0)) + (float)((float)((float)((float)((float)(v110 * 3.0) * v126) + (float)(v119 * v121)) - v192) * v111)) * 0.31622776;
  v127 = 2.0 * rotMat[3];
  v128 = (float)(v94 * rotMat[2]) * 0.61237246;
  v129 = v127 * rotMat[2];
  pOut[64] = (float)((float)((float)((float)((float)(rotMat[7] * 8.0) * rotMat[2]) * rotMat[8]) - (float)((float)((float)(2.0 * v121) * rotMat[2]) * v119)) - (float)(v125 * v110)) * 0.25;
  v130 = (float)(v90 * rotMat[2]) * rotMat[8];
  pOut[65] = v128;
  v131 = (float)((float)(v130 - (float)(v129 * v119)) - (float)(v125 * v111)) * 0.25;
  v132 = (float)(v174 * rotMat[3]) * v119;
  pOut[66] = v131;
  v133 = v121 * v121;
  pOut[67] = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v197 * 3.0) + v198) * v126) - (float)(v185 * v126)) - (float)((float)(v195 * 3.0) * v126)) - (float)((float)(v121 * v121) * v126)) + (float)(v171 * rotMat[2])) + v132) - (float)(v176 * rotMat[5])) - (float)((float)((float)(v111 * 8.0) * rotMat[6]) * rotMat[8])) * 0.15811388) + (float)((float)((float)(1.2649111 * rotMat[1]) * rotMat[7]) * rotMat[8]);
  v134 = (float)((float)((float)((float)(v198 - v185) - (float)(v195 * 3.0)) - (float)(v121 * v121)) + v171) * *rotMat;
  v135 = rotMat[1];
  v136 = (float)(v127 * v135) * v121;
  v137 = rotMat[6];
  v138 = rotMat[7];
  pOut[68] = (float)(v134 * -0.19364917) - (float)((float)((float)((float)(v197 * *rotMat) - v136) * 0.19364917) + (float)((float)(v118 * v135) * v138));
  v139 = v127 * v137;
  v140 = rotMat[4];
  v141 = v178 * rotMat[2];
  pOut[69] = (float)((float)((float)((float)(v139 * v140) - (float)((float)(v174 * v137) * v135)) - (float)(v197 * v138)) + (float)(v138 * v193)) * 0.61237246;
  v142 = v135 * *rotMat;
  v143 = rotMat[8];
  v144 = (float)(v172 - v196) * rotMat[7];
  pOut[70] = (float)((float)((float)(v141 - (float)((float)(v137 * v140) * rotMat[5])) - v105) + (float)(v142 * v143)) - (float)((float)(v140 * rotMat[3]) * v143);
  v145 = (float)((float)(v144 - (float)(v143 * v184)) * 0.79056942) + (float)((float)((float)(1.5811388 * rotMat[4]) * rotMat[5]) * v143);
  v146 = rotMat[5];
  v147 = (float)(v174 * rotMat[2]) * v143;
  pOut[72] = (float)((float)(v196 - v172) * 1.9364917) * v143;
  pOut[71] = v145;
  v148 = (float)(v137 * *rotMat) * rotMat[2];
  v149 = (float)((float)((float)((float)(v172 - v196) * v137) - v147) * 0.79056942) + (float)((float)((float)(1.5811388 * rotMat[3]) * v146) * v143);
  v150 = (float)(rotMat[7] * rotMat[1]) * rotMat[2];
  pOut[73] = v149;
  v151 = rotMat[7];
  v152 = (float)((float)((float)(v148 - v150) - (float)((float)(v137 * rotMat[3]) * v146)) + (float)((float)(v151 * rotMat[4]) * v146)) + (float)(v143 * (float)(v194 * 0.5));
  v153 = (float)(v174 * rotMat[1]) * v151;
  v154 = rotMat[2];
  v155 = (float)((float)(-1.2247449 * rotMat[3]) * rotMat[4]) * v151;
  pOut[74] = v152;
  v156 = (float)(v197 * 3.0) * rotMat[1];
  v157 = v155 - (float)((float)((float)(v137 * v194) - v153) * 0.61237246);
  v158 = (float)((float)(*rotMat * 6.0) * rotMat[3]) * rotMat[4];
  v159 = rotMat[3];
  v160 = v133 * 3.0;
  v161 = rotMat[5];
  pOut[75] = v157;
  v162 = v156 - v158;
  v163 = rotMat[1];
  v164 = (float)((float)(v159 * rotMat[4]) * v154) * 1.2247449;
  v165 = (float)(v163 * *rotMat) * v154;
  pOut[76] = (float)(v162 - (float)((float)((float)((float)(v198 * 3.0) + v195) - v160) * v163)) * 0.25;
  v166 = (float)((float)(-1.9364917 * rotMat[4]) * v154) * v161;
  pOut[77] = (float)(v164 - (float)(v165 * 1.2247449)) + (float)((float)(v161 * v177) * 1.2247449);
  pOut[78] = v166 - (float)((float)((float)(v172 - v196) * rotMat[1]) * 0.96824586);
  pOut[79] = (float)((float)(v196 - (float)(v172 * 3.0)) * v154) * -0.79056942;
  v167 = (float)(-1.2247449 * rotMat[1]) * rotMat[4];
  pOut[80] = (float)((float)((float)(v159 * -1.9364917) * v154) * v161) - (float)((float)((float)(v172 - v196) * *rotMat) * 0.96824586);
  v168 = (float)((float)(v159 * 6.0) * rotMat[1]) * rotMat[4];
  v169 = v197 * *rotMat;
  pOut[81] = (float)(v167 * v161) - (float)((float)((float)(v154 * v194) - v132) * 0.61237246);
  pOut[82] = (float)((float)(v168 + v169) - (float)((float)(v193 * *rotMat) * 3.0)) * 0.25;
}

/*
==============
ByteToDir
==============
*/
void ByteToDir(const int b, vec3_t *dir)
{
  __int64 v2; 

  v2 = b;
  if ( (unsigned int)b <= 0xA1 )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 567, ASSERT_TYPE_ASSERT, "( 0 ) <= ( b ) && ( b ) <= ( (162 - 1) )", "b not in [0, (NUMVERTEXNORMALS - 1)]\n\t%i not in [%i, %i]", b, 0i64, 161) )
    __debugbreak();
  if ( (unsigned int)v2 > 0xA1 )
  {
    *dir = vec3_origin;
  }
  else
  {
LABEL_5:
    dir->v[0] = bytedirs[v2].v[0];
    dir->v[1] = bytedirs[v2].v[1];
    dir->v[2] = bytedirs[v2].v[2];
  }
}

/*
==============
CalcRotationQuatFromVectors
==============
*/
void CalcRotationQuatFromVectors(const vec3_t *vec1, const vec3_t *vec2, vec4_t *quat)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  vec3_t cross; 
  vec3_t v23; 
  vec3_t v1; 

  if ( (float)((float)((float)(vec1->v[0] * vec1->v[0]) + (float)(vec1->v[1] * vec1->v[1])) + (float)(vec1->v[2] * vec1->v[2])) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1361, ASSERT_TYPE_ASSERT, "(Vec3Length( vec1 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec1 ) > 0.0f") )
    __debugbreak();
  if ( (float)((float)((float)(vec2->v[0] * vec2->v[0]) + (float)(vec2->v[1] * vec2->v[1])) + (float)(vec2->v[2] * vec2->v[2])) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1362, ASSERT_TYPE_ASSERT, "(Vec3Length( vec2 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec2 ) > 0.0f") )
    __debugbreak();
  v6 = vec2->v[1];
  v7 = vec1->v[0];
  v8 = vec2->v[0];
  v9 = vec1->v[2];
  v10 = vec2->v[2];
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  v23.v[0] = 0.0;
  v23.v[2] = 0.0;
  v11 = vec1->v[1];
  v12 = (float)((float)(v8 * v7) + (float)(v6 * v11)) + (float)(v10 * v9);
  v1.v[0] = FLOAT_1_0;
  v23.v[1] = FLOAT_1_0;
  if ( v12 < 0.999999 )
  {
    if ( v12 >= -0.999999 )
    {
      Vec3Cross(vec1, vec2, &v23);
      v20 = v23.v[1];
      quat->v[0] = v23.v[0];
      v21 = v23.v[2];
      quat->v[1] = v20;
      quat->v[2] = v21;
      quat->v[3] = fsqrt((float)((float)((float)(v7 * v7) + (float)(v11 * v11)) + (float)(v9 * v9)) * (float)((float)((float)(v6 * v6) + (float)(v8 * v8)) + (float)(v10 * v10))) + v12;
    }
    else
    {
      Vec3Cross(vec1, &v1, &cross);
      v13 = LODWORD(cross.v[0]);
      v14 = cross.v[1];
      v15 = cross.v[2];
      if ( (float)((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v14 * v14)) + (float)(v15 * v15)) < 0.000001 )
      {
        Vec3Cross(vec1, &v23, &cross);
        v14 = cross.v[1];
        v13 = LODWORD(cross.v[0]);
        v15 = cross.v[2];
      }
      v16 = v13;
      *(float *)&v16 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v14 * v14)) + (float)(v15 * v15));
      _XMM3 = v16;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      cross.v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
      cross.v[2] = v15 * (float)(1.0 / *(float *)&_XMM0);
      cross.v[1] = v14 * (float)(1.0 / *(float *)&_XMM0);
      AngleRadAxisToQuat(3.1415927, &cross, quat);
    }
    Vec4Normalize(quat);
  }
  else
  {
    *(_QWORD *)quat->v = 0i64;
    quat->v[2] = 0.0;
    quat->v[3] = 1.0;
  }
}

/*
==============
CalculatePointOnArc
==============
*/
void CalculatePointOnArc(float t, float arcAngle, const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  const vec3_t *v7; 
  const vec3_t *v9; 
  vec3_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float s; 
  float c; 

  v7 = right;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(right->v[0] * right->v[0]) + (float)(right->v[1] * right->v[1])) + (float)(right->v[2] * right->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )") )
    __debugbreak();
  v9 = up;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(up->v[0] * up->v[0]) + (float)(up->v[1] * up->v[1])) + (float)(up->v[2] * up->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  FastSinCos(t * arcAngle, &s, &c);
  v10 = outVert;
  v11 = radius * s;
  v12 = (float)((float)(radius * s) * v9->v[0]) + center->v[0];
  v13 = radius * c;
  outVert->v[0] = v12;
  v14 = (float)(v11 * v9->v[1]) + center->v[1];
  v10->v[1] = v14;
  v15 = (float)(v11 * v9->v[2]) + center->v[2];
  v10->v[2] = v15;
  v10->v[0] = (float)(v13 * v7->v[0]) + v12;
  v10->v[1] = (float)(v13 * v7->v[1]) + v14;
  v10->v[2] = (float)(v13 * v7->v[2]) + v15;
}

/*
==============
CalculatePointOnArc
==============
*/
void CalculatePointOnArc(float t, float arcAngle, const vec3_t *center, float radius, const vec3_t *dir, vec3_t *outVert)
{
  float v7; 
  __int128 v8; 
  float v9; 
  __int128 v10; 
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
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 

  v7 = dir->v[1];
  v8 = LODWORD(dir->v[0]);
  v9 = dir->v[2];
  v10 = v8;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  _XMM2 = v10;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm11, xmm0
  }
  src.v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v15 = (float)(dst.v[2] * src.v[1]) - (float)(dst.v[1] * src.v[2]);
  v16 = (float)(dst.v[0] * src.v[2]) - (float)(dst.v[2] * src.v[0]);
  v18 = (float)(dst.v[1] * src.v[0]) - (float)(dst.v[0] * src.v[1]);
  v17 = v18;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(dst.v[0] * dst.v[0]) + (float)(dst.v[1] * dst.v[1])) + (float)(dst.v[2] * dst.v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v18 * v18)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  FastSinCos(t * arcAngle, &s, &c);
  v19 = radius * s;
  v20 = radius * c;
  v21 = (float)((float)(radius * s) * v15) + center->v[0];
  v22 = (float)(radius * c) * dst.v[0];
  outVert->v[0] = v21;
  v23 = (float)(v19 * v16) + center->v[1];
  v24 = v22 + v21;
  v25 = (float)(v20 * dst.v[1]) + v23;
  outVert->v[1] = v23;
  v26 = center->v[2];
  outVert->v[0] = v24;
  outVert->v[1] = v25;
  outVert->v[2] = (float)((float)(v19 * v17) + v26) + (float)(v20 * dst.v[2]);
}

/*
==============
CalculatePointOnArc
==============
*/
void CalculatePointOnArc(float t, float startAngle, float deltaAngle, const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  const vec3_t *v8; 
  const vec3_t *v10; 
  vec3_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float s; 
  float c; 

  v8 = right;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(right->v[0] * right->v[0]) + (float)(right->v[1] * right->v[1])) + (float)(right->v[2] * right->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )") )
    __debugbreak();
  v10 = up;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(up->v[0] * up->v[0]) + (float)(up->v[1] * up->v[1])) + (float)(up->v[2] * up->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  FastSinCos((float)(t * deltaAngle) + startAngle, &s, &c);
  v11 = outVert;
  v12 = radius * s;
  v13 = (float)((float)(radius * s) * v10->v[0]) + center->v[0];
  v14 = radius * c;
  outVert->v[0] = v13;
  v15 = (float)(v12 * v10->v[1]) + center->v[1];
  v11->v[1] = v15;
  v16 = (float)(v12 * v10->v[2]) + center->v[2];
  v11->v[2] = v16;
  v11->v[0] = (float)(v14 * v8->v[0]) + v13;
  v11->v[1] = (float)(v14 * v8->v[1]) + v15;
  v11->v[2] = (float)(v14 * v8->v[2]) + v16;
}

/*
==============
ClosestPointOnConicSectionOfSphereToPoint
==============
*/
void ClosestPointOnConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const vec3_t *point, vec3_t *closestPoint)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2743, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v9 = coneOrg->v[0];
  v10 = point->v[1] - coneOrg->v[1];
  v11 = point->v[2] - coneOrg->v[2];
  v12 = point->v[0] - coneOrg->v[0];
  v13 = (float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v11 * v11);
  v14 = (float)((float)(v10 * coneDir->v[1]) + (float)(v12 * coneDir->v[0])) + (float)(v11 * coneDir->v[2]);
  v15 = fsqrt(1.0 - (float)(cosHalfFov * cosHalfFov));
  v16 = fsqrt(v13 - (float)(v14 * v14));
  if ( v14 > 0.0 || (float)((float)(v15 * v14) + (float)(v16 * cosHalfFov)) > 0.0 )
  {
    if ( (float)((float)(v15 * v16) - (float)(v14 * cosHalfFov)) <= 0.0 )
    {
      closestPoint->v[0] = v9;
      *(_QWORD *)&closestPoint->y = *(_QWORD *)&coneOrg->y;
    }
  }
  else if ( v13 >= (float)(radius * radius) )
  {
    v17 = radius / fsqrt(v13);
    closestPoint->v[0] = (float)(v17 * v12) + v9;
    closestPoint->v[1] = (float)(v10 * v17) + coneOrg->v[1];
    closestPoint->v[2] = (float)(v11 * v17) + coneOrg->v[2];
  }
  else
  {
    *closestPoint = *point;
  }
}

/*
==============
ClosestPointsTwoSegs
==============
*/
void ClosestPointsTwoSegs(const vec3_t *s00, const vec3_t *s01, const vec3_t *s10, const vec3_t *s11, float *t0, float *t1)
{
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

  if ( !t0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3346, ASSERT_TYPE_ASSERT, "(t0)", (const char *)&queryFormat, "t0") )
    __debugbreak();
  if ( !t1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3347, ASSERT_TYPE_ASSERT, "(t1)", (const char *)&queryFormat, "t1") )
    __debugbreak();
  v10 = s00->v[1];
  v11 = v10 - s10->v[1];
  v12 = s00->v[2];
  v13 = s01->v[1] - v10;
  v14 = s11->v[0] - s10->v[0];
  v15 = s11->v[2] - s10->v[2];
  v16 = s01->v[0] - s00->v[0];
  v17 = s00->v[0] - s10->v[0];
  v18 = s01->v[2] - v12;
  v19 = v12 - s10->v[2];
  v20 = s11->v[1] - s10->v[1];
  v21 = (float)((float)(v13 * v13) + (float)(v16 * v16)) + (float)(v18 * v18);
  v22 = (float)((float)(v20 * v13) + (float)(v14 * v16)) + (float)(v15 * v18);
  v23 = (float)((float)(v20 * v20) + (float)(v14 * v14)) + (float)(v15 * v15);
  v24 = (float)((float)(v11 * v13) + (float)(v17 * v16)) + (float)(v19 * v18);
  v25 = (float)(v11 * v20) + (float)(v17 * v14);
  v26 = (float)(v23 * v21) - (float)(v22 * v22);
  v27 = v25 + (float)(v19 * v15);
  v28 = v26;
  if ( v26 >= 0.000001 )
  {
    v29 = (float)(v27 * v22) - (float)(v24 * v23);
    v30 = (float)(v27 * v21) - (float)(v24 * v22);
    if ( v29 >= 0.0 )
    {
      if ( v29 <= v26 )
        goto LABEL_14;
      v29 = (float)(v23 * v21) - (float)(v22 * v22);
      v30 = v27 + v22;
    }
    else
    {
      v29 = 0.0;
      v30 = v27;
    }
  }
  else
  {
    v28 = FLOAT_1_0;
    v29 = 0.0;
    v30 = v27;
  }
  v26 = (float)((float)(v20 * v20) + (float)(v14 * v14)) + (float)(v15 * v15);
LABEL_14:
  if ( v30 >= 0.0 )
  {
    if ( v30 <= v26 )
      goto LABEL_22;
    v29 = v22 - v24;
    v30 = v26;
    if ( (float)(v22 - v24) >= 0.0 )
    {
LABEL_16:
      if ( v29 <= v21 )
        v28 = v21;
      else
        v29 = v28;
      goto LABEL_22;
    }
  }
  else
  {
    LODWORD(v29) = LODWORD(v24) ^ _xmm;
    v30 = 0.0;
    if ( v24 <= -0.0 )
      goto LABEL_16;
  }
  v29 = 0.0;
LABEL_22:
  if ( COERCE_FLOAT(LODWORD(v29) & _xmm) >= 0.000099999997 )
    v31 = v29 / v28;
  else
    v31 = 0.0;
  *t0 = v31;
  if ( COERCE_FLOAT(LODWORD(v30) & _xmm) >= 0.000099999997 )
    *t1 = v30 / v26;
  else
    *t1 = 0;
}

/*
==============
SH4VisToScaledCone::Convert
==============
*/
void SH4VisToScaledCone::Convert(SH4VisToScaledCone *this, const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos, float *scale)
{
  float v8; 
  float v11; 
  unsigned __int128 v12; 
  unsigned __int128 v13; 
  bool v15; 
  float v18; 
  float v19; 
  unsigned __int128 v20; 
  unsigned __int128 v21; 
  unsigned __int128 v22; 
  float v23; 
  float v24; 
  unsigned __int128 v25; 
  float v29; 
  float v30; 
  float v31; 
  const float *v32; 
  long double *m_minimizerCoeffs; 
  int v35; 
  double v36; 
  __int128 v37; 
  double v38; 
  double v39; 
  double v40; 
  int v43; 
  __int128 v44; 
  int v47; 
  int v48; 
  float i; 
  int v50; 
  __int64 v51; 
  double v52; 
  __int128 v53; 
  int v56; 
  __int64 v57; 
  double v58; 
  __int128 v59; 
  __int64 v62; 
  float v63; 
  double v64; 
  __int128 v65; 
  float v68; 
  float rotMat[2]; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  int v75; 
  float v76; 
  float v77; 
  float pOut[84]; 

  v8 = visibilityData[2];
  LODWORD(v11) = *((_DWORD *)visibilityData + 3) ^ _xmm;
  v12 = *((unsigned int *)visibilityData + 1) ^ (unsigned __int128)(unsigned int)_xmm;
  v13 = v12;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11)) + (float)(v8 * v8));
  _XMM3 = v13;
  v15 = *(float *)&v13 < 0.000099999997;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  v18 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v68 = v18;
  v19 = v11 * (float)(1.0 / *(float *)&_XMM0);
  v21 = v12;
  *(float *)&v21 = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM0);
  v20 = v21;
  if ( v15 )
  {
    v18 = normal->v[2];
    v19 = normal->v[0];
    v20 = LODWORD(normal->v[1]);
    v68 = v18;
  }
  if ( COERCE_FLOAT(LODWORD(v19) & _xmm) <= COERCE_FLOAT(LODWORD(v18) & _xmm) )
  {
    v22 = 0i64;
    LODWORD(v23) = LODWORD(v18) ^ _xmm;
    v24 = *(float *)&v20;
  }
  else
  {
    v22 = v20 ^ (unsigned int)_xmm;
    v23 = v19;
    v24 = 0.0;
  }
  v25 = v22;
  *(float *)&v25 = fsqrt((float)((float)(*(float *)&v22 * *(float *)&v22) + (float)(v23 * v23)) + (float)(v24 * v24));
  _XMM3 = v25;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  v29 = v24 * (float)(1.0 / *(float *)&_XMM0);
  v30 = *(float *)&v22 * (float)(1.0 / *(float *)&_XMM0);
  v31 = v23 * (float)(1.0 / *(float *)&_XMM0);
  v70 = (float)(v30 * *(float *)&v20) - (float)(v19 * v31);
  rotMat[0] = (float)(v31 * v18) - (float)(v29 * *(float *)&v20);
  rotMat[1] = (float)(v19 * v29) - (float)(v30 * v18);
  v71 = v30;
  v72 = v31;
  v73 = v29;
  v74 = v19;
  v75 = v20;
  v76 = v18;
  BuildSHRotMat4(rotMat, pOut);
  ApplySHRotation4(pOut, v32, rotMat);
  m_minimizerCoeffs = this->m_minimizerCoeffs;
  v35 = 0;
  v36 = v70;
  v37 = COERCE_UNSIGNED_INT64(rotMat[0]);
  *((_QWORD *)&v44 + 1) = 0i64;
  v38 = v74;
  v39 = *((double *)this->m_minimizerCoeffs + 4);
  v40 = v77;
  __asm { vxorpd  xmm4, xmm4, xmm4 }
  v43 = 0;
  *(double *)&v44 = v70 * *((double *)this->m_minimizerCoeffs + 1) + rotMat[0] * *this->m_minimizerCoeffs + v74 * *((double *)this->m_minimizerCoeffs + 2) + v77 * *((double *)this->m_minimizerCoeffs + 3);
  if ( v39 == *(double *)&_XMM4 && *(double *)&v44 == *(double *)&_XMM4 )
  {
    __asm { vxorpd  xmm5, xmm5, xmm5 }
  }
  else
  {
    *(double *)&v44 = *(double *)&v44 / v39;
    _XMM0 = v44;
    __asm { vxorpd  xmm5, xmm0, xmm6 }
  }
  v47 = 1;
  v48 = this->m_numDataPoints - 1;
  for ( i = (float)v48; ; i = (float)v48 )
  {
    v50 = (int)(float)((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v47).m128_f32[0] * i) * 0.06666667) + 0.5);
    v51 = 10 * v50;
    *((_QWORD *)&v53 + 1) = 0i64;
    v52 = m_minimizerCoeffs[v51 + 4];
    *(double *)&v53 = v36 * m_minimizerCoeffs[v51 + 1] + *(double *)&v37 * m_minimizerCoeffs[v51] + v38 * m_minimizerCoeffs[v51 + 2] + v40 * m_minimizerCoeffs[v51 + 3];
    if ( v52 == *(double *)&_XMM4 && *(double *)&v53 == *(double *)&_XMM4 )
    {
      *(_QWORD *)&_XMM0 = _XMM4;
    }
    else
    {
      *(double *)&v53 = *(double *)&v53 / v52;
      _XMM0 = v53;
      __asm { vxorpd  xmm0, xmm0, xmm6 }
    }
    if ( *(double *)&_XMM5 < *(double *)&_XMM4 && *(double *)&_XMM0 > *(double *)&_XMM4 )
      break;
    ++v47;
    v43 = v50;
    *(_QWORD *)&_XMM5 = _XMM0;
    if ( v47 >= 16 )
      goto LABEL_31;
  }
  if ( v43 == v50 )
  {
LABEL_31:
    v43 = this->m_numDataPoints - 1;
    goto LABEL_32;
  }
  do
  {
    if ( v43 >= v50 )
      break;
    v56 = (v50 + v43) / 2;
    v57 = 10 * v56;
    *((_QWORD *)&v59 + 1) = 0i64;
    v58 = m_minimizerCoeffs[v57 + 4];
    *(double *)&v59 = v36 * m_minimizerCoeffs[v57 + 1] + *(double *)&v37 * m_minimizerCoeffs[v57] + v38 * m_minimizerCoeffs[v57 + 2] + v40 * m_minimizerCoeffs[v57 + 3];
    if ( v58 == *(double *)&_XMM4 && *(double *)&v59 == *(double *)&_XMM4 )
    {
      *(_QWORD *)&_XMM0 = _XMM4;
    }
    else
    {
      *(double *)&v59 = *(double *)&v59 / v58;
      _XMM0 = v59;
      __asm { vxorpd  xmm0, xmm0, xmm6 }
    }
    ++v35;
    if ( *(double *)&_XMM0 <= *(double *)&_XMM4 )
      v43 = (v50 + v43) / 2;
    if ( *(double *)&_XMM0 <= *(double *)&_XMM4 )
      v56 = v50;
    v50 = v56;
  }
  while ( v35 < 8 );
LABEL_32:
  *x = v19;
  *y = *(float *)&v20;
  v62 = 10 * v43;
  v63 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v43).m128_f32[0] / (float)v48) * 1.5707964;
  *z = v68;
  *((_QWORD *)&v65 + 1) = *((_QWORD *)&v37 + 1);
  v64 = this->m_minimizerCoeffs[v62 + 9];
  *(double *)&v65 = *(double *)&v37 * this->m_minimizerCoeffs[v62 + 5] + v36 * this->m_minimizerCoeffs[v62 + 6] + v38 * this->m_minimizerCoeffs[v62 + 7] + v40 * this->m_minimizerCoeffs[v62 + 8];
  if ( v64 != *(double *)&_XMM4 || *(double *)&v65 != *(double *)&_XMM4 )
  {
    *(double *)&v65 = *(double *)&v65 / v64;
    _XMM3 = v65;
    __asm { vxorpd  xmm4, xmm3, xmm6 }
  }
  __asm { vcvtsd2ss xmm0, xmm4, xmm4; val }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
  *scale = *(float *)&_XMM0;
  *(float *)&_XMM0 = cosf_0(v63);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
  *angleCos = *(float *)&_XMM0;
}

/*
==============
CullBoxFromCone
==============
*/
bool CullBoxFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const Bounds *bounds)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v19; 
  float v23; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  bool result; 

  _XMM8 = 0i64;
  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2366, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v9 = coneDir->v[0];
  v10 = coneDir->v[1];
  v11 = coneDir->v[2];
  v12 = bounds->midPoint.v[0] - coneOrg->v[0];
  v13 = bounds->midPoint.v[1] - coneOrg->v[1];
  v14 = bounds->midPoint.v[2] - coneOrg->v[2];
  v15 = (float)((float)(v13 * v10) + (float)(v12 * coneDir->v[0])) + (float)(v14 * v11);
  _XMM1 = LODWORD(bounds->halfSize.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm12
    vblendvps xmm0, xmm1, xmm3, xmm0
  }
  v19 = *(float *)&_XMM0 * v10;
  _XMM1 = LODWORD(bounds->halfSize.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm13
    vblendvps xmm0, xmm1, xmm10, xmm0
  }
  v23 = v19 + (float)(*(float *)&_XMM0 * coneDir->v[0]);
  _XMM2 = LODWORD(bounds->halfSize.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm14
    vblendvps xmm0, xmm2, xmm11, xmm0
  }
  result = 1;
  if ( v15 < (float)(v23 + (float)(*(float *)&_XMM0 * v11)) )
  {
    v27 = (float)(v9 * COERCE_FLOAT(LODWORD(v15) ^ _xmm)) + v12;
    v28 = (float)(v10 * COERCE_FLOAT(LODWORD(v15) ^ _xmm)) + v13;
    v29 = (float)(v11 * COERCE_FLOAT(LODWORD(v15) ^ _xmm)) + v14;
    v30 = (float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29);
    v31 = 1.0 - (float)(cosHalfFov * cosHalfFov);
    if ( (float)((float)(cosHalfFov * cosHalfFov) * v30) <= (float)((float)(v15 * v15) * v31) )
      return 0;
    v32 = cosHalfFov / fsqrt(v31 * v30);
    if ( (float)((float)((float)((float)((float)((float)((float)((float)(v32 * v28) + v10) * (float)(bounds->midPoint.v[1] - coneOrg->v[1])) + (float)((float)((float)(v32 * v27) + v9) * v12)) + (float)((float)((float)(v32 * v29) + v11) * (float)(bounds->midPoint.v[2] - coneOrg->v[2]))) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v32 * v27) + v9) * bounds->halfSize.v[0]) & _xmm)) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v32 * v28) + v10) * bounds->halfSize.v[1]) & _xmm)) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v32 * v29) + v11) * bounds->halfSize.v[2]) & _xmm)) < 0.0 )
      return 0;
  }
  return result;
}

/*
==============
CullBoxFromConicSectionOfSphere
==============
*/
char CullBoxFromConicSectionOfSphere(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const Bounds *bounds)
{
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v17; 
  __int128 v20; 
  __int128 v23; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v32; 
  float v36; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v45; 

  _XMM8 = 0i64;
  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2464, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v11 = LODWORD(bounds->midPoint.v[1]);
  *(float *)&v11 = bounds->midPoint.v[1] - coneOrg->v[1];
  v10 = v11;
  v13 = LODWORD(bounds->midPoint.v[0]);
  *(float *)&v13 = bounds->midPoint.v[0] - coneOrg->v[0];
  v12 = v13;
  v15 = LODWORD(bounds->midPoint.v[2]);
  *(float *)&v15 = bounds->midPoint.v[2] - coneOrg->v[2];
  v14 = v15;
  v17 = v12 & (unsigned int)_xmm;
  *(float *)&v17 = COERCE_FLOAT(v12 & _xmm) - bounds->halfSize.v[0];
  _XMM0 = v17;
  __asm { vmaxss  xmm4, xmm0, xmm8 }
  v20 = v10 & (unsigned int)_xmm;
  *(float *)&v20 = COERCE_FLOAT(v10 & _xmm) - bounds->halfSize.v[1];
  _XMM0 = v20;
  __asm { vmaxss  xmm2, xmm0, xmm8 }
  v23 = v14 & (unsigned int)_xmm;
  *(float *)&v23 = COERCE_FLOAT(v14 & _xmm) - bounds->halfSize.v[2];
  _XMM0 = v23;
  __asm { vmaxss  xmm3, xmm0, xmm8 }
  if ( (float)((float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3)) > (float)(radius * radius) )
    return 1;
  v25 = coneDir->v[0];
  v26 = coneDir->v[1];
  v27 = coneDir->v[2];
  v28 = (float)((float)(*(float *)&v10 * v26) + (float)(*(float *)&v12 * coneDir->v[0])) + (float)(*(float *)&v14 * v27);
  _XMM1 = LODWORD(bounds->halfSize.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm14
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  v32 = *(float *)&_XMM0 * v26;
  _XMM1 = LODWORD(bounds->halfSize.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm15
    vblendvps xmm0, xmm1, xmm3, xmm0
  }
  v36 = v32 + (float)(*(float *)&_XMM0 * coneDir->v[0]);
  _XMM2 = LODWORD(bounds->halfSize.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm
  {
    vcmpless xmm0, xmm8, xmm10
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  if ( v28 >= (float)(v36 + (float)(*(float *)&_XMM0 * v27)) )
    return 1;
  v40 = (float)(v25 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + *(float *)&v12;
  v41 = (float)(v26 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + *(float *)&v10;
  v42 = (float)(v27 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + *(float *)&v14;
  v45 = 1.0 - (float)(cosHalfFov * cosHalfFov);
  if ( (float)((float)(cosHalfFov * cosHalfFov) * (float)((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42))) > (float)((float)(v28 * v28) * v45) && (v43 = cosHalfFov / fsqrt(v45 * (float)((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42))), (float)((float)((float)((float)((float)((float)(*(float *)&v10 * (float)((float)(v43 * v41) + v26)) + (float)(*(float *)&v12 * (float)((float)(v43 * v40) + v25))) + (float)(*(float *)&v14 * (float)((float)(v43 * v42) + coneDir->v[2]))) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v43 * v40) + v25) * bounds->halfSize.v[0]) & _xmm)) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v43 * v41) + v26) * bounds->halfSize.v[1]) & _xmm)) - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v43 * v42) + coneDir->v[2]) * bounds->halfSize.v[2]) & _xmm)) >= 0.0) )
    return 1;
  else
    return 0;
}

/*
==============
CullBoxFromSphere
==============
*/
bool CullBoxFromSphere(const vec3_t *sphereOrg, float radius, const Bounds *bounds)
{
  __int128 v3; 
  __int128 v5; 
  __int128 v7; 
  __int128 v8; 
  __int128 v10; 
  __int128 v11; 
  __int128 v13; 
  __int128 v16; 

  v3 = LODWORD(sphereOrg->v[0]);
  *(float *)&v3 = sphereOrg->v[0] - bounds->midPoint.v[0];
  v5 = v3 & (unsigned int)_xmm;
  *(float *)&v5 = *(float *)&v5 - bounds->halfSize.v[0];
  _XMM0 = v5;
  __asm { vmaxss  xmm7, xmm0, xmm6 }
  v8 = LODWORD(sphereOrg->v[1]);
  *(float *)&v8 = sphereOrg->v[1] - bounds->midPoint.v[1];
  v7 = v8;
  v11 = LODWORD(sphereOrg->v[2]);
  *(float *)&v11 = sphereOrg->v[2] - bounds->midPoint.v[2];
  v10 = v11;
  v13 = v7 & (unsigned int)_xmm;
  *(float *)&v13 = COERCE_FLOAT(v7 & _xmm) - bounds->halfSize.v[1];
  _XMM3 = v13;
  __asm { vmaxss  xmm4, xmm3, xmm6 }
  v16 = v10 & (unsigned int)_xmm;
  *(float *)&v16 = COERCE_FLOAT(v10 & _xmm) - bounds->halfSize.v[2];
  _XMM2 = v16;
  __asm { vmaxss  xmm3, xmm2, xmm6 }
  return (float)((float)((float)(*(float *)&_XMM4 * *(float *)&_XMM4) + (float)(*(float *)&_XMM7 * *(float *)&_XMM7)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3)) > (float)(radius * radius);
}

/*
==============
CullSphereFromCone
==============
*/
bool CullSphereFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const vec3_t *sphereCenter, float radius)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  bool result; 

  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2528, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v8 = sphereCenter->v[0] - coneOrg->v[0];
  v9 = sphereCenter->v[1] - coneOrg->v[1];
  v10 = sphereCenter->v[2] - coneOrg->v[2];
  v11 = coneDir->v[1];
  v12 = coneDir->v[2];
  v13 = (float)((float)(v11 * v9) + (float)(coneDir->v[0] * v8)) + (float)(v12 * v10);
  result = 1;
  if ( v13 < radius )
  {
    v14 = (float)(coneDir->v[0] * COERCE_FLOAT(LODWORD(v13) ^ _xmm)) + v8;
    v15 = (float)(fsqrt(1.0 - (float)(cosHalfFov * cosHalfFov)) * v13) - radius;
    if ( (float)((float)((float)((float)((float)((float)(v11 * COERCE_FLOAT(LODWORD(v13) ^ _xmm)) + v9) * (float)((float)(v11 * COERCE_FLOAT(LODWORD(v13) ^ _xmm)) + v9)) + (float)(v14 * v14)) + (float)((float)((float)(v12 * COERCE_FLOAT(LODWORD(v13) ^ _xmm)) + v10) * (float)((float)(v12 * COERCE_FLOAT(LODWORD(v13) ^ _xmm)) + v10))) * (float)(cosHalfFov * cosHalfFov)) < (float)(v15 * v15) )
      return 0;
  }
  return result;
}

/*
==============
DampedSpring::DeltaAxis
==============
*/
void DampedSpring::DeltaAxis(DampedSpring *this, const tmat33_t<vec3_t> *start, const tmat33_t<vec3_t> *end, tmat33_t<vec3_t> *outDeltaAxis)
{
  tmat33_t<vec3_t> out; 

  MatrixTranspose(start, &out);
  MatrixMultiply(&out, end, outDeltaAxis);
}

/*
==============
DiffTrackAngles
==============
*/
void DiffTrackAngles(const vec3_t *tgt, const vec3_t *cur, float rate, float deltaTime, vec3_t *outAngles)
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
  v6 = (char *)outAngles - (char *)tgt;
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
    v11 = DiffTrackAngle(v8->v[0], v10, rate, deltaTime);
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
DirToByte
==============
*/
__int64 DirToByte(const vec3_t *dir)
{
  __int128 v1; 
  float v2; 
  unsigned __int8 v3; 
  float v4; 
  unsigned __int8 v5; 
  __int128 v7; 
  unsigned __int8 v9; 

  v1 = LODWORD(dir->v[1]);
  v2 = dir->v[0];
  v3 = 0;
  v4 = dir->v[2];
  v5 = 0;
  LODWORD(_XMM3) = 0;
  do
  {
    v7 = v1;
    *(float *)&v7 = (float)((float)(*(float *)&v1 * bytedirs[v5].v[1]) + (float)(v2 * bytedirs[v5].v[0])) + (float)(v4 * bytedirs[v5].v[2]);
    _XMM0 = v7;
    v9 = v5;
    if ( *(float *)&v7 <= *(float *)&_XMM3 )
      v9 = v3;
    ++v5;
    v3 = v9;
    __asm { vmaxss  xmm3, xmm0, xmm3 }
  }
  while ( v5 < 0xA2u );
  return v9;
}

/*
==============
DistanceFromConeToPoint
==============
*/
float DistanceFromConeToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, const vec3_t *point)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 

  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2561, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v7 = point->v[0] - coneOrg->v[0];
  v8 = point->v[1] - coneOrg->v[1];
  v9 = point->v[2] - coneOrg->v[2];
  v10 = (float)((float)(v8 * coneDir->v[1]) + (float)(v7 * coneDir->v[0])) + (float)(v9 * coneDir->v[2]);
  v11 = LODWORD(FLOAT_1_0);
  *(float *)&v11 = fsqrt(1.0 - (float)(cosHalfFov * cosHalfFov));
  v12 = fsqrt((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[1]) + v8) * (float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[1]) + v8)) + (float)((float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[0]) + v7) * (float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[0]) + v7))) + (float)((float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[2]) + v9) * (float)((float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * coneDir->v[2]) + v9)));
  if ( (float)(*(float *)&v11 * v12) >= (float)(v10 * cosHalfFov) )
  {
    *(float *)&v11 = (float)(*(float *)&v11 * v10) + (float)(v12 * cosHalfFov);
    _XMM2 = v11;
    __asm { vmaxss  xmm0, xmm2, xmm9 }
  }
  else
  {
    LODWORD(_XMM0) = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  }
  return *(float *)&_XMM0;
}

/*
==============
DistanceFromConicSectionOfSphereToPoint
==============
*/
float DistanceFromConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, float cosHalfFov, float radius, const vec3_t *point)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  __int128 v21; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 

  if ( cosHalfFov < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2597, ASSERT_TYPE_ASSERT, "(cosHalfFov >= 0.0f)", (const char *)&queryFormat, "cosHalfFov >= 0.0f") )
    __debugbreak();
  v9 = coneDir->v[1];
  v10 = point->v[0] - coneOrg->v[0];
  v11 = point->v[1] - coneOrg->v[1];
  v12 = point->v[2] - coneOrg->v[2];
  v13 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12);
  v14 = FLOAT_1_0;
  v15 = (float)((float)(v9 * v11) + (float)(coneDir->v[0] * v10)) + (float)(v12 * coneDir->v[2]);
  v16 = LODWORD(FLOAT_1_0);
  *(float *)&v16 = fsqrt(1.0 - (float)(cosHalfFov * cosHalfFov));
  v17 = v16;
  v19 = fsqrt(v13 - (float)(v15 * v15));
  v18 = v19;
  if ( v15 <= 0.0 )
  {
    if ( (float)((float)(*(float *)&v17 * v15) + (float)(v19 * cosHalfFov)) <= 0.0 )
    {
      if ( v13 >= (float)(radius * radius) )
        return fsqrt(v13) - radius;
      else
        return 0.0;
    }
    v14 = FLOAT_1_0;
  }
  v21 = v17;
  *(float *)&v21 = (float)(*(float *)&v17 * v18) - (float)(v15 * cosHalfFov);
  _XMM2 = v21;
  if ( (float)((float)(*(float *)&v17 * v18) - (float)(v15 * cosHalfFov)) <= 0.0 )
    return fsqrt(v13);
  __asm { vminss  xmm2, xmm2, xmm7 }
  v24 = (float)(*(float *)&_XMM2 * *(float *)&v17) / v18;
  v25 = (float)(v24 * v15) + (float)(*(float *)&_XMM2 * cosHalfFov);
  v26 = (float)(coneDir->v[0] * v25) + (float)((float)(v14 - v24) * v10);
  v27 = (float)(v9 * v25) + (float)((float)(v14 - v24) * v11);
  v28 = (float)(v25 * coneDir->v[2]) + (float)((float)(v14 - v24) * v12);
  return fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
}

/*
==============
DotFromProjectedLineSegment
==============
*/
float DotFromProjectedLineSegment(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testPos)
{
  __int128 v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v28; 
  float v31; 
  __int128 v32; 
  double v36; 
  vec3_t v0; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t v41; 
  vec3_t v42; 
  _QWORD v43[3]; 

  v5 = viewPos->v[1];
  v6 = viewPos->v[2];
  v7 = startSegmentPos->v[1] - v5;
  v8 = startSegmentPos->v[2] - v6;
  v9 = endSegmentPos->v[1] - v5;
  v10 = endSegmentPos->v[0] - viewPos->v[0];
  v11 = endSegmentPos->v[2] - v6;
  v13 = LODWORD(testPos->v[1]);
  *(float *)&v13 = testPos->v[1] - v5;
  v12 = *(float *)&v13;
  v14 = testPos->v[0] - viewPos->v[0];
  v15 = testPos->v[2] - v6;
  v0.v[0] = startSegmentPos->v[0] - viewPos->v[0];
  v0.v[1] = v7;
  v0.v[2] = v8;
  v1.v[0] = v10;
  v1.v[1] = v9;
  v1.v[2] = v11;
  if ( (float)((float)((float)(v7 * v7) + (float)(v0.v[0] * v0.v[0])) + (float)(v8 * v8)) <= 0.000001 || (float)((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11)) <= 0.000001 || (*(float *)&v13 = (float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v14 * v14)) + (float)(v15 * v15), v16 = v13, *(float *)&v13 <= 0.000001) )
  {
    LODWORD(v36) = 0;
    return *(float *)&v36;
  }
  if ( VecNCompareCustomEpsilon(v0.v, v1.v, 0.001, 3) )
  {
    v17 = LODWORD(v0.v[0]);
    v18 = v0.v[1];
    v19 = v0.v[2];
  }
  else
  {
    *(_OWORD *)&v43[1] = v4;
    Vec3Cross(&v1, &v0, &cross);
    v20 = LODWORD(cross.v[0]);
    *(float *)&v20 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
    _XMM3 = v20;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    v24 = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v25 = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
    v26 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
    LODWORD(_XMM3) = COERCE_UNSIGNED_INT((float)((float)(v12 * v25) + (float)(v14 * v24)) + (float)(v15 * v26)) ^ _xmm;
    v41.v[0] = (float)(*(float *)&_XMM3 * v24) + v14;
    v41.v[2] = (float)(*(float *)&_XMM3 * v26) + v15;
    cross.v[0] = v24;
    cross.v[1] = v25;
    cross.v[2] = v26;
    v41.v[1] = (float)(*(float *)&_XMM3 * v25) + v12;
    if ( VecNCompareCustomEpsilon(v41.v, v0.v, 0.001, 3) )
      goto LABEL_7;
    if ( VecNCompareCustomEpsilon(v41.v, v1.v, 0.001, 3) || (Vec3Cross(&v41, &v0, &cross), Vec3Cross(&v41, &v1, &v42), (float)((float)((float)(v25 * v42.v[1]) + (float)(v24 * v42.v[0])) + (float)(v26 * v42.v[2])) > 0.0) )
    {
      v19 = v1.v[2];
      v18 = v1.v[1];
      v17 = LODWORD(v1.v[0]);
      goto LABEL_13;
    }
    if ( (float)((float)((float)(v25 * cross.v[1]) + (float)(v24 * cross.v[0])) + (float)(v26 * cross.v[2])) <= 0.0 )
    {
LABEL_7:
      v17 = LODWORD(v0.v[0]);
      v18 = v0.v[1];
      v19 = v0.v[2];
    }
    else
    {
      v17 = LODWORD(v41.v[0]);
      v18 = v41.v[1];
      v19 = v41.v[2];
    }
  }
LABEL_13:
  v28 = v16;
  *(float *)&v28 = fsqrt(*(float *)&v16);
  _XMM1 = v28;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm10, xmm0
  }
  v31 = 1.0 / *(float *)&_XMM0;
  v32 = v17;
  *(float *)&v32 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(v18 * v18)) + (float)(v19 * v19));
  _XMM3 = v32;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  v36 = I_fclamp((float)((float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v12 * v31)) + (float)((float)(*(float *)&v17 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v14 * v31))) + (float)((float)(v15 * v31) * (float)(v19 * (float)(1.0 / *(float *)&_XMM0))), 0.0, 1.0);
  if ( (LODWORD(v36) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2716, ASSERT_TYPE_SANITY, "( !IS_NAN( dot ) )", (const char *)&queryFormat, "!IS_NAN( dot )", LODWORD(v36)) )
    __debugbreak();
  return *(float *)&v36;
}

/*
==============
DotFromProjectedLineSegmentVec
==============
*/
float DotFromProjectedLineSegmentVec(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testVec)
{
  float v4; 
  double v5; 
  vec3_t testPos; 

  v4 = viewPos->v[1] + testVec->v[1];
  testPos.v[0] = viewPos->v[0] + testVec->v[0];
  testPos.v[2] = viewPos->v[2] + testVec->v[2];
  testPos.v[1] = v4;
  v5 = DotFromProjectedLineSegment(viewPos, startSegmentPos, endSegmentPos, &testPos);
  return *(float *)&v5;
}

/*
==============
EigenDecomposition
==============
*/
void EigenDecomposition(const tmat33_t<vec3_t> *A, tmat33_t<vec3_t> *V, vec3_t *d)
{
  vec3_t e; 

  *V = *A;
  TriDiagReduce(V, d, &e);
  TriDiagQL(V, d, &e);
}

/*
==============
SH4VisToScaledCone::EvalMinimizer
==============
*/

long double __fastcall SH4VisToScaledCone::EvalMinimizer(SH4VisToScaledCone *this, float zh0, double zh1, float zh2, float zh3, int dataPoint)
{
  __int64 v6; 
  double v7; 
  __int128 v9; 

  *((double *)&v9 + 1) = *(&zh1 + 1);
  v6 = 10 * dataPoint;
  *(double *)&v9 = *(float *)&zh1 * this->m_minimizerCoeffs[v6 + 1] + zh0 * this->m_minimizerCoeffs[v6] + zh2 * this->m_minimizerCoeffs[v6 + 2];
  v7 = this->m_minimizerCoeffs[v6 + 4];
  _XMM0 = COERCE_UNSIGNED_INT64(zh3 * this->m_minimizerCoeffs[v6 + 3]);
  *(double *)&v9 = *(double *)&v9 + *(double *)&_XMM0;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( v7 != *(double *)&_XMM0 || *(double *)&v9 != *(double *)&_XMM0 )
  {
    *(double *)&v9 = *(double *)&v9 / v7;
    _XMM0 = v9;
    __asm { vxorpd  xmm0, xmm0, cs:__xmm@80000000000000008000000000000000 }
  }
  return *(double *)&_XMM0;
}

/*
==============
SH4VisToScaledCone::EvalMinimizerCoeffs
==============
*/
void SH4VisToScaledCone::EvalMinimizerCoeffs(SH4VisToScaledCone *this, float angle, long double *outCoeffs)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 

  __asm { vxorpd  xmm0, xmm0, xmm0 }
  *(double *)&_XMM0 = j___libm_sse2_sincos_(this);
  __asm { vmovupd xmm7, xmm0 }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v8, v7, v9, v10);
  v11 = *(float *)&_XMM0;
  v12 = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_f32[0];
  v20 = cos_0(angle * 2.0);
  cos_0(angle * 3.0);
  v13 = angle * 3.0;
  cos_0(angle * 4.0);
  v14 = angle * 4.0;
  cos_0(angle * 5.0);
  v15 = angle * 5.0;
  *(double *)&_XMM0 = cos_0(angle * 6.0);
  __asm { vshufpd xmm3, xmm7, xmm7, 1 }
  v17 = v11 * v11;
  v18 = *(double *)&_XMM3 * (*(double *)&_XMM7 * *(double *)&_XMM7 * *(double *)&_XMM7 * (*(double *)&_XMM7 * *(double *)&_XMM7 * *(double *)&_XMM7) * *(double *)&_XMM7) * 1.772453850905516;
  *outCoeffs = (v12 * 85840.0 + 50960.0 + v20 * 57920.0 + v13 * 32840.0 + v14 * 14000.0 + v15 * 4200.0) * v18;
  outCoeffs[1] = (v12 * 105447.2531647932 + 50756.01686499838 + v20 * 78600.46564747565 + v13 * 46903.93586896519 + v14 * 21962.40423997336 + v15 * 7274.613391789284 + *(double *)&_XMM0 * 1212.435565298214) * v18;
  v19 = v12 * v12;
  outCoeffs[2] = (cos_0(angle * 7.0) * 391.3118960624632 + v12 * 12819.37771500629 + 4033.866631409621 + v20 * 35933.61239842162 + v13 * 29728.52376085971 + v14 * 17217.72342674838 + v15 * 7434.926025186801 + angle * 6.0 * 2347.871376374779) * v18;
  outCoeffs[3] = (-86399.65481412527 - v12 * 148585.3936293874 - v20 * 101067.7000826674 - v13 * 37887.15877444494 - v14 * 12487.94618822487 - v15 * 3174.901573277509 - angle * 6.0 * 529.1502622129182) * v18;
  outCoeffs[4] = 568.0 - v12 * 1024.0 + v19 * 480.0 + v19 * v19 * 1296.0 - v19 * v19 * v19 * 2720.0 + v19 * v19 * (v19 * v19) * 1400.0 + v17 * v17 * 384.0;
  outCoeffs[5] = v12 * 8192.0 - 8192.0;
  outCoeffs[6] = v20 * 3547.24005390106 - 3547.24005390106;
  outCoeffs[7] = v13 * 2289.733608959785 - v12 * 2289.733608959785;
  outCoeffs[8] = v14 * 1693.280839081338 - (v20 * 1354.62467126507 + 338.6561678162676);
  outCoeffs[9] = cos_0(angle * 8.0) * 310.1794239084653 + 27531.52566611538 - v12 * 29039.88389323598 + v20 * 950.0352640853566 + v14 * 177.2453850905516 + angle * 6.0 * 70.89815403622065;
}

/*
==============
SH4VisToScaledCone::EvalScale
==============
*/

long double __fastcall SH4VisToScaledCone::EvalScale(SH4VisToScaledCone *this, double zh0, float zh1, float zh2, float zh3, int dataPoint)
{
  __int64 v6; 
  double v7; 
  __int128 v9; 

  *((double *)&v9 + 1) = *(&zh0 + 1);
  v6 = 10 * dataPoint;
  *(double *)&v9 = *(float *)&zh0 * this->m_minimizerCoeffs[v6 + 5] + zh1 * this->m_minimizerCoeffs[v6 + 6] + zh2 * this->m_minimizerCoeffs[v6 + 7];
  v7 = this->m_minimizerCoeffs[v6 + 9];
  _XMM0 = COERCE_UNSIGNED_INT64(zh3 * this->m_minimizerCoeffs[v6 + 8]);
  *(double *)&v9 = *(double *)&v9 + *(double *)&_XMM0;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( v7 != *(double *)&_XMM0 || *(double *)&v9 != *(double *)&_XMM0 )
  {
    *(double *)&v9 = *(double *)&v9 / v7;
    _XMM0 = v9;
    __asm { vxorpd  xmm0, xmm0, cs:__xmm@80000000000000008000000000000000 }
  }
  return *(double *)&_XMM0;
}

/*
==============
FinitePerspectiveMatrix
==============
*/

void __fastcall FinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, double zFar, tmat44_t<vec4_t> *mtx)
{
  float v5; 
  float v8; 

  v5 = *(float *)&zFar;
  if ( zNear <= 0.0 )
  {
    __asm { vxorpd  xmm3, xmm3, xmm3 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1587, ASSERT_TYPE_ASSERT, "( zNear ) > ( 0.0f )", "%s > %s\n\t%g, %g", "zNear", "0.0f", zNear, *(double *)&_XMM3) )
      __debugbreak();
  }
  if ( v5 <= zNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1588, ASSERT_TYPE_ASSERT, "( zFar ) > ( zNear )", "%s > %s\n\t%g, %g", "zFar", "zNear", v5, zNear) )
    __debugbreak();
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  *(_QWORD *)mtx->row3.v = 0i64;
  mtx->m[3].v[3] = 0.0;
  mtx->m[0].v[0] = 1.0 / tanHalfFovX;
  mtx->m[1].v[1] = 1.0 / tanHalfFovY;
  v8 = 1.0 / (float)(v5 - zNear);
  mtx->m[2].v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 * zNear) ^ _xmm);
  mtx->m[2].v[3] = 1.0;
  mtx->m[3].v[2] = (float)(zNear * v5) * v8;
}

/*
==============
FloatFromHalf3
==============
*/
void FloatFromHalf3(const unsigned __int16 *from, vec3_t *to)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  v3 = (*from >> 10) & 0x1F;
  LODWORD(to->v[0]) = (*from & 0x3FF & ~((unsigned int)(v3 - 1) >> 16) | (8 * (*from & 0x8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[*from & 0x3FF]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  LODWORD(v3) = from[1];
  v4 = ((unsigned int)v3 >> 10) & 0x1F;
  to->v[1] = COERCE_FLOAT((from[1] & 0x3FF & ~((unsigned int)(v4 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v4] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[1] & 0x3FF]) & (((unsigned int)(v4 - 1) >> 16 << 10) | ((unsigned int)(v4 - 1) >> 16) & 0x3FE)) << 13);
  LODWORD(v3) = from[2];
  v5 = ((unsigned int)v3 >> 10) & 0x1F;
  to->v[2] = COERCE_FLOAT((from[2] & 0x3FF & ~((unsigned int)(v5 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v5] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[2] & 0x3FF]) & (((unsigned int)(v5 - 1) >> 16 << 10) | ((unsigned int)(v5 - 1) >> 16) & 0x3FE)) << 13);
}

/*
==============
FloatFromHalf4
==============
*/
void FloatFromHalf4(const unsigned __int16 *from, vec4_t *to)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v3 = (*from >> 10) & 0x1F;
  LODWORD(to->v[0]) = (*from & 0x3FF & ~((unsigned int)(v3 - 1) >> 16) | (8 * (*from & 0x8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[*from & 0x3FF]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  LODWORD(v3) = from[1];
  v4 = ((unsigned int)v3 >> 10) & 0x1F;
  to->v[1] = COERCE_FLOAT((from[1] & 0x3FF & ~((unsigned int)(v4 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v4] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[1] & 0x3FF]) & (((unsigned int)(v4 - 1) >> 16 << 10) | ((unsigned int)(v4 - 1) >> 16) & 0x3FE)) << 13);
  LODWORD(v3) = from[2];
  v5 = ((unsigned int)v3 >> 10) & 0x1F;
  to->v[2] = COERCE_FLOAT((from[2] & 0x3FF & ~((unsigned int)(v5 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v5] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[2] & 0x3FF]) & (((unsigned int)(v5 - 1) >> 16 << 10) | ((unsigned int)(v5 - 1) >> 16) & 0x3FE)) << 13);
  LODWORD(v3) = from[3];
  v6 = ((unsigned int)v3 >> 10) & 0x1F;
  to->v[3] = COERCE_FLOAT((from[3] & 0x3FF & ~((unsigned int)(v6 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v6] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[3] & 0x3FF]) & (((unsigned int)(v6 - 1) >> 16 << 10) | ((unsigned int)(v6 - 1) >> 16) & 0x3FE)) << 13);
}

/*
==============
FloatFromHalf
==============
*/
float FloatFromHalf(unsigned __int16 h)
{
  int v1; 
  __int64 v2; 
  __int64 v3; 
  float result; 

  v1 = h;
  v2 = h & 0x3FF;
  v3 = (h >> 10) & 0x1F;
  LODWORD(result) = ((unsigned int)v2 & ~((unsigned int)(v3 - 1) >> 16) | (8 * (v1 & 0xFFFF8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[v2]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  return result;
}

/*
==============
GaussianRandom
==============
*/
void GaussianRandom(float *f0, float *f1)
{
  float v4; 
  float v5; 
  float v6; 

  if ( !f0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 205, ASSERT_TYPE_ASSERT, "(f0)", (const char *)&queryFormat, "f0") )
    __debugbreak();
  if ( !f1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 206, ASSERT_TYPE_ASSERT, "(f1)", (const char *)&queryFormat, "f1") )
    __debugbreak();
  do
  {
    v4 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)rand()).m128_f32[0] * 0.000030517578) * 2.0) - 1.0;
    v5 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)rand()).m128_f32[0] * 0.000030517578) * 2.0) - 1.0;
  }
  while ( (float)((float)(v5 * v5) + (float)(v4 * v4)) > 1.0 );
  v6 = fsqrt((float)(logf_0((float)(v5 * v5) + (float)(v4 * v4)) * -2.0) / (float)((float)(v5 * v5) + (float)(v4 * v4)));
  *f0 = v6 * v4;
  *f1 = v6 * v5;
}

/*
==============
GaussianWeight1D
==============
*/
float GaussianWeight1D(const float x, const float sigma)
{
  return expf_0((float)(x * x) * (float)(-1.0 / (float)((float)(sigma * sigma) * 2.0))) / fsqrt((float)((float)(sigma * sigma) * 2.0) * 3.1415927);
}

/*
==============
GenerateAxisFromForwardVector
==============
*/
void GenerateAxisFromForwardVector(const vec3_t *forward, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  float v3; 
  float v4; 
  float v5; 
  vec3_t *v7; 
  __int128 v8; 
  __int128 v9; 
  vec3_t *v13; 
  __int128 v14; 
  __int128 v15; 

  v3 = forward->v[0];
  outAxis->m[0].v[0] = forward->v[0];
  v4 = forward->v[1];
  outAxis->m[0].v[1] = v4;
  v5 = forward->v[2];
  outAxis->m[0].v[2] = v5;
  v7 = &outAxis->m[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v4 * refAxis->m[2].v[1]) + (float)(v3 * refAxis->m[2].v[0])) + (float)(v5 * refAxis->m[2].v[2])) & _xmm) >= 0.99900001 )
  {
    v13 = &outAxis->m[2];
    Vec3Cross(outAxis->m, &refAxis->m[1], &outAxis->m[2]);
    v14 = LODWORD(v13->v[0]);
    v15 = v14;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13->v[1] * v13->v[1])) + (float)(v13->v[2] * v13->v[2]));
    _XMM4 = v15;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v13->v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    v13->v[1] = (float)(1.0 / *(float *)&_XMM0) * v13->v[1];
    v13->v[2] = (float)(1.0 / *(float *)&_XMM0) * v13->v[2];
    Vec3Cross(v13, outAxis->m, v7);
  }
  else
  {
    Vec3Cross(&refAxis->m[2], outAxis->m, &outAxis->m[1]);
    v8 = LODWORD(v7->v[0]);
    v9 = v8;
    *(float *)&v9 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7->v[1] * v7->v[1])) + (float)(v7->v[2] * v7->v[2]));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v7->v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
    v7->v[1] = (float)(1.0 / *(float *)&_XMM0) * v7->v[1];
    v7->v[2] = (float)(1.0 / *(float *)&_XMM0) * v7->v[2];
    Vec3Cross(outAxis->m, v7, &outAxis->m[2]);
  }
}

/*
==============
GenerateAxisFromUpVector
==============
*/
void GenerateAxisFromUpVector(const vec3_t *up, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  float v3; 
  vec3_t *v4; 
  tmat33_t<vec3_t> *v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  __int128 v9; 
  const vec3_t *v13; 
  __int128 v14; 
  __int128 v15; 

  v3 = up->v[0];
  v4 = &outAxis->m[2];
  v5 = outAxis;
  outAxis->m[2].v[0] = up->v[0];
  v6 = up->v[1];
  outAxis->m[2].v[1] = v6;
  v7 = up->v[2];
  outAxis->m[2].v[2] = v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v6 * refAxis->m[0].v[1]) + (float)(v3 * refAxis->m[0].v[0])) + (float)(v7 * refAxis->m[0].v[2])) & _xmm) >= 0.99900001 )
  {
    Vec3Cross(&refAxis->m[1], &outAxis->m[2], outAxis->m);
    v14 = LODWORD(v5->m[0].v[0]);
    v15 = v14;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v5->m[0].v[1] * v5->m[0].v[1])) + (float)(v5->m[0].v[2] * v5->m[0].v[2]));
    _XMM4 = v15;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v5->m[0].v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    v5->m[0].v[1] = (float)(1.0 / *(float *)&_XMM0) * v5->m[0].v[1];
    v13 = v4;
    v4 = (vec3_t *)v5;
    v5->m[0].v[2] = (float)(1.0 / *(float *)&_XMM0) * v5->m[0].v[2];
    v5 = (tmat33_t<vec3_t> *)((char *)v5 + 12);
  }
  else
  {
    Vec3Cross(v4, refAxis->m, &outAxis->m[1]);
    v8 = LODWORD(v5->m[1].v[0]);
    v9 = v8;
    *(float *)&v9 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v5->m[1].v[1] * v5->m[1].v[1])) + (float)(v5->m[1].v[2] * v5->m[1].v[2]));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v5->m[1].v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
    v5->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * v5->m[1].v[1];
    v5->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * v5->m[1].v[2];
    v13 = &v5->m[1];
  }
  Vec3Cross(v13, v4, v5->m);
}

/*
==============
BarycentricTriangle::GetBarycentricCoordinates
==============
*/
void BarycentricTriangle::GetBarycentricCoordinates(BarycentricTriangle *this, const vec2_t *cartesianPoint, vec3_t *outBarycentricCoords)
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

  if ( !this->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4323, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  v6 = this->m_cartesianVerts[2].v[1];
  v7 = this->m_cartesianVerts[2].v[0];
  v8 = v7 - this->m_cartesianVerts[1].v[0];
  v9 = this->m_cartesianVerts[0].v[1];
  v10 = this->m_cartesianVerts[0].v[0] - v7;
  v11 = cartesianPoint->v[0] - v7;
  v12 = this->m_cartesianVerts[1].v[1] - v6;
  v13 = cartesianPoint->v[1] - v6;
  v14 = (float)((float)(v9 - v6) * v8) + (float)(v10 * v12);
  v15 = (float)((float)(v13 * v8) + (float)(v11 * v12)) * (float)(1.0 / v14);
  v16 = (float)((float)((float)(v6 - v9) * v11) + (float)(v13 * v10)) * (float)(1.0 / v14);
  outBarycentricCoords->v[2] = (float)(1.0 - v15) - v16;
  outBarycentricCoords->v[0] = v15;
  outBarycentricCoords->v[1] = v16;
}

/*
==============
BarycentricTriangle::GetCartesianCoordinates
==============
*/
void BarycentricTriangle::GetCartesianCoordinates(BarycentricTriangle *this, const vec3_t *barycentricPoint, vec2_t *outCartesianCoords)
{
  float v6; 
  float v7; 
  float v8; 

  if ( !this->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4349, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  v6 = barycentricPoint->v[2];
  v7 = barycentricPoint->v[1];
  v8 = (float)((float)(barycentricPoint->v[0] * this->m_cartesianVerts[0].v[1]) + (float)(v7 * this->m_cartesianVerts[1].v[1])) + (float)(v6 * this->m_cartesianVerts[2].v[1]);
  outCartesianCoords->v[0] = (float)((float)(barycentricPoint->v[0] * this->m_cartesianVerts[0].v[0]) + (float)(v7 * this->m_cartesianVerts[1].v[0])) + (float)(v6 * this->m_cartesianVerts[2].v[0]);
  outCartesianCoords->v[1] = v8;
}

/*
==============
GetPerpendicularViewVector
==============
*/
void GetPerpendicularViewVector(const vec3_t *point, const vec3_t *p1, const vec3_t *p2, vec3_t *up)
{
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  float v8; 
  float v9; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  __int128 v23; 
  __int128 v24; 
  vec3_t v1; 
  vec3_t v0; 

  v4 = point->v[0] - p1->v[0];
  v5 = LODWORD(point->v[1]);
  v7 = v5;
  v6 = *(float *)&v5 - p1->v[1];
  v8 = point->v[2];
  v9 = v8 - p1->v[2];
  *(float *)&v7 = fsqrt((float)((float)(v6 * v6) + (float)(v4 * v4)) + (float)(v9 * v9));
  _XMM3 = v7;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v13 = 1.0 / *(float *)&_XMM0;
  *(float *)&_XMM0 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v14 = point->v[0] - p2->v[0];
  v0.v[0] = *(float *)&_XMM0;
  *(float *)&_XMM0 = v9 * v13;
  v15 = v8 - p2->v[2];
  v16 = v6 * v13;
  v18 = v5;
  v17 = *(float *)&v5 - p2->v[1];
  v0.v[2] = *(float *)&_XMM0;
  v0.v[1] = v16;
  *(float *)&v18 = fsqrt((float)((float)(v17 * v17) + (float)(v14 * v14)) + (float)(v15 * v15));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v1.v[0] = v14 * (float)(1.0 / *(float *)&_XMM0);
  v1.v[2] = v15 * (float)(1.0 / *(float *)&_XMM0);
  v1.v[1] = v17 * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&v0, &v1, up);
  v23 = LODWORD(up->v[0]);
  v24 = v23;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(up->v[1] * up->v[1])) + (float)(up->v[2] * up->v[2]));
  _XMM4 = v24;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm11, xmm0
  }
  up->v[0] = *(float *)&v23 * (float)(1.0 / *(float *)&_XMM0);
  up->v[1] = (float)(1.0 / *(float *)&_XMM0) * up->v[1];
  up->v[2] = (float)(1.0 / *(float *)&_XMM0) * up->v[2];
}

/*
==============
GetRandSeed
==============
*/
unsigned int *GetRandSeed()
{
  return &holdrand;
}

/*
==============
GetWorldUnitsPerPixel
==============
*/
float GetWorldUnitsPerPixel(float distance, float tanHalfFov, float vpDim)
{
  return (float)((float)(tanHalfFov * 2.0) * distance) / vpDim;
}

/*
==============
GraphGetValueFromFraction
==============
*/
float GraphGetValueFromFraction(const int knotCount, const vec2_t *knots, const float fraction)
{
  __int64 v4; 
  float v5; 
  float v6; 
  int v7; 
  const vec2_t *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v15; 

  v4 = knotCount;
  v5 = FLOAT_N1_0;
  if ( !knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 423, ASSERT_TYPE_ASSERT, "(knots)", (const char *)&queryFormat, "knots") )
    __debugbreak();
  if ( (int)v4 < 2 )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 424, ASSERT_TYPE_ASSERT, "( ( knotCount >= 2 ) )", "( knotCount ) = %i", v15) )
      __debugbreak();
  }
  if ( (fraction < 0.0 || fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 425, ASSERT_TYPE_ASSERT, "( ( fraction >= 0.0f && fraction <= 1.0f ) )", "( fraction ) = %g", fraction) )
    __debugbreak();
  v6 = knots[v4 - 1].v[0];
  if ( v6 != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 426, ASSERT_TYPE_ASSERT, "( ( knots[knotCount - 1][0] == 1.0f ) )", "( knots[knotCount - 1][0] ) = %g", v6) )
    __debugbreak();
  v7 = 1;
  if ( (int)v4 <= 1 )
    goto LABEL_37;
  v8 = knots + 1;
  while ( 1 )
  {
    if ( (float)(v8->v[0] - v8[-1].v[0]) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 431, ASSERT_TYPE_ASSERT, "(knots[knotIndex][0] - knots[knotIndex - 1][0] > 0.f)", "%s\n\tGraph query with 0 length between 2 knots", "knots[knotIndex][0] - knots[knotIndex - 1][0] > 0.f") )
      __debugbreak();
    v9 = v8[-1].v[0];
    if ( (float)(v8->v[0] - v9) != 0.0 && fraction <= v8->v[0] )
      break;
    ++v7;
    ++v8;
    if ( v7 >= (int)v4 )
      goto LABEL_37;
  }
  v10 = (float)(fraction - v9) / (float)(v8->v[0] - v9);
  if ( (v10 < 0.0 || v10 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 441, ASSERT_TYPE_ASSERT, "( ( adjustedFrac >= 0.0f && adjustedFrac <= 1.0f ) )", "( adjustedFrac ) = %g", v10) )
    __debugbreak();
  v11 = knots[v7 - 1].v[1];
  if ( (v11 < 0.0 || v11 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 442, ASSERT_TYPE_ASSERT, "( ( knots[knotIndex - 1][1] >= 0.0f && knots[knotIndex - 1][1] <= 1.0f ) )", "( knots[knotIndex - 1][1] ) = %g", v11) )
    __debugbreak();
  v12 = knots[v7].v[1];
  if ( (v12 < 0.0 || v12 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 443, ASSERT_TYPE_ASSERT, "( ( knots[knotIndex][1] >= 0.0f && knots[knotIndex][1] <= 1.0f ) )", "( knots[knotIndex][1] ) = %g", v12) )
    __debugbreak();
  v13 = (float)((float)(knots[v7].v[1] - knots[v7 - 1].v[1]) * v10) + knots[v7 - 1].v[1];
  v5 = v13;
  if ( v13 < 0.0 || v13 > 1.0 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 450, ASSERT_TYPE_ASSERT, "( ( result >= 0.0f && result <= 1.0f ) )", "( result ) = %g", v5) )
      __debugbreak();
  }
  return v5;
}

/*
==============
GraphGetValueFromFractionUnnormalized
==============
*/
float GraphGetValueFromFractionUnnormalized(const int knotCount, const vec2_t *knots, const float fraction)
{
  __int64 v4; 
  float v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  float v9; 
  float v10; 
  __int64 v12; 

  v4 = knotCount;
  v5 = FLOAT_3_4028235e38;
  if ( !knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 461, ASSERT_TYPE_ASSERT, "(knots)", (const char *)&queryFormat, "knots") )
    __debugbreak();
  if ( (int)v4 < 2 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 462, ASSERT_TYPE_ASSERT, "( ( knotCount >= 2 ) )", "( knotCount ) = %i", v12) )
      __debugbreak();
  }
  v6 = 1;
  v7 = v4;
  if ( v4 <= 1 )
    goto LABEL_20;
  v8 = 1i64;
  while ( 1 )
  {
    v9 = knots[v8].v[0];
    v10 = knots[v8 - 1].v[0];
    if ( v9 <= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 474, ASSERT_TYPE_ASSERT, "(currentX > prevX)", "%s\n\tGraph does not have the X value in ascending order.", "currentX > prevX") )
      __debugbreak();
    if ( (float)(v9 - v10) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 475, ASSERT_TYPE_ASSERT, "(currentX - prevX > 0.f)", "%s\n\tGraph with 0 length between two X values.", "currentX - prevX > 0.f") )
      __debugbreak();
    if ( (float)(v9 - v10) != 0.0 && fraction <= v9 )
      break;
    ++v6;
    if ( ++v8 >= v7 )
      goto LABEL_20;
  }
  v5 = (float)((float)(knots[v6].v[1] - knots[v6 - 1].v[1]) * (float)((float)(fraction - v10) / (float)(v9 - v10))) + knots[v6 - 1].v[1];
  if ( v5 == 3.4028235e38 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 494, ASSERT_TYPE_ASSERT, "( result ) != ( 3.402823466e+38F )", "%s != %s\n\t%g, %g", "result", "FLT_MAX", v5, DOUBLE_3_402823466385289e38) )
      __debugbreak();
  }
  return v5;
}

/*
==============
Half3FromFloat
==============
*/
void Half3FromFloat(const vec3_t *from, unsigned __int16 *to)
{
  *to = HalfFromFloat(from->v[0]);
  to[1] = HalfFromFloat(from->v[1]);
  to[2] = HalfFromFloat(from->v[2]);
}

/*
==============
Half4FromFloat
==============
*/
void Half4FromFloat(const vec4_t *from, unsigned __int16 *to)
{
  *to = HalfFromFloat(from->v[0]);
  to[1] = HalfFromFloat(from->v[1]);
  to[2] = HalfFromFloat(from->v[2]);
  to[3] = HalfFromFloat(from->v[3]);
}

/*
==============
HalfFromFloat
==============
*/
unsigned __int16 HalfFromFloat(float f)
{
  int v1; 
  unsigned __int16 result; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 

  if ( (LODWORD(f) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3018, ASSERT_TYPE_ASSERT, "(IS_FINITE(f))", (const char *)&queryFormat, "IS_FINITE(f)") )
    __debugbreak();
  if ( (LODWORD(f) & 0x7FFFFFFF) == 0 )
    return HIWORD(LODWORD(f));
  LOWORD(v1) = HIWORD(f) & 0x8000;
  v3 = LODWORD(f) & 0x7FFFFF;
  v4 = LODWORD(f) & 0x7F800000;
  if ( (LODWORD(f) & 0x7F800000) == 0 )
    return v1;
  if ( v4 == 2139095040 )
  {
    if ( v3 )
      return -512;
    return v1 | 0x7C00;
  }
  v5 = (v4 >> 23) - 112;
  if ( v5 >= 31 )
    return v1 | 0x7C00;
  if ( v5 > 0 )
  {
    result = (v1 | ((_WORD)v5 << 10) | (v3 >> 13)) + 1;
    if ( (LOWORD(f) & 0x1000) == 0 )
      return v1 | ((_WORD)v5 << 10) | (v3 >> 13);
  }
  else if ( 14 - v5 <= 24 )
  {
    v6 = v3 | 0x800000;
    v7 = v6 >> (14 - v5);
    if ( ((v6 >> (13 - v5)) & 1) != 0 )
      LOWORD(v7) = v7 + 1;
    return v7 | v1;
  }
  else
  {
    return HIWORD(f) & 0x8000;
  }
  return result;
}

/*
==============
I_crandom
==============
*/
float I_crandom()
{
  return (float)((float)((float)rand() * 0.000030517578) * 2.0) - 1.0;
}

/*
==============
I_flrand
==============
*/
float I_flrand(float min, float max)
{
  float v2; 

  holdrand = 214013 * holdrand + 2531011;
  v2 = (float)(holdrand >> 17);
  return (float)((float)(v2 * (float)(max - min)) * 0.000030517578) + min;
}

/*
==============
I_irand
==============
*/
__int64 I_irand(int min, int max)
{
  holdrand = 214013 * holdrand + 2531011;
  return min + (unsigned int)((__int64)((max - min) * ((unsigned __int64)holdrand >> 17)) >> 15);
}

/*
==============
I_random
==============
*/
float I_random()
{
  return (float)rand() * 0.000030517578;
}

/*
==============
InfinitePerspectiveMatrix
==============
*/
void InfinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, tmat44_t<vec4_t> *mtx)
{
  if ( zNear <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1604, ASSERT_TYPE_ASSERT, "(zNear > 0)", (const char *)&queryFormat, "zNear > 0") )
    __debugbreak();
  if ( tanHalfFovX <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1605, ASSERT_TYPE_ASSERT, "(tanHalfFovX > 0)", (const char *)&queryFormat, "tanHalfFovX > 0") )
    __debugbreak();
  if ( tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1606, ASSERT_TYPE_ASSERT, "(tanHalfFovY > 0)", (const char *)&queryFormat, "tanHalfFovY > 0") )
    __debugbreak();
  *(_QWORD *)&mtx->row0.xyz.y = 0i64;
  *(_QWORD *)(&mtx->row0.xyz + 1) = 0i64;
  *(_QWORD *)&mtx->row1.xyz.z = 0i64;
  *(_QWORD *)mtx->row2.v = 0i64;
  mtx->m[2].v[2] = 0.0;
  *(_QWORD *)mtx->row3.v = 0i64;
  mtx->m[3].v[3] = 0.0;
  mtx->m[0].v[0] = 1.0 / tanHalfFovX;
  mtx->m[1].v[1] = 1.0 / tanHalfFovY;
  mtx->m[2].v[3] = 1.0;
  mtx->m[3].v[2] = zNear;
}

/*
==============
BarycentricTriangle::Init
==============
*/
void BarycentricTriangle::Init(BarycentricTriangle *this, const vec2_t *cartesianVertices)
{
  this->m_cartesianVerts[0] = *cartesianVertices;
  this->m_cartesianVerts[1] = cartesianVertices[1];
  this->m_cartesianVerts[2] = cartesianVertices[2];
  this->m_inited = 1;
}

/*
==============
SH4VisToScaledCone::Init
==============
*/
void SH4VisToScaledCone::Init(SH4VisToScaledCone *this, int numDataPoints)
{
  unsigned __int64 v3; 
  unsigned __int64 v5; 
  int v6; 
  __int64 v7; 

  this->m_numDataPoints = numDataPoints;
  v3 = 10 * numDataPoints;
  v5 = 8 * v3;
  if ( !is_mul_ok(v3, 8ui64) )
    v5 = -1i64;
  v6 = 0;
  this->m_minimizerCoeffs = (long double *)operator new[](v5);
  if ( numDataPoints > 0 )
  {
    v7 = 0i64;
    do
    {
      SH4VisToScaledCone::EvalMinimizerCoeffs(this, (float)((float)v6++ * 1.5707964) * (float)(1.0 / (float)(numDataPoints - 1)), &this->m_minimizerCoeffs[v7]);
      v7 += 10i64;
    }
    while ( v6 < numDataPoints );
  }
}

/*
==============
Intersect2DPlanes
==============
*/
__int64 Intersect2DPlanes(const vec2_t *dir1, float dist1, const vec2_t *dir2, float dist2, vec2_t *result)
{
  float v5; 
  float v6; 
  float v7; 
  float v9; 

  v5 = dir2->v[1];
  v6 = dir1->v[1];
  v7 = (float)(v5 * dir1->v[0]) - (float)(v6 * dir2->v[0]);
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 0.001 )
    return 0i64;
  v9 = 1.0 / v7;
  result->v[0] = (float)((float)(v5 * dist1) - (float)(v6 * dist2)) * v9;
  result->v[1] = (float)((float)(dist2 * dir1->v[0]) - (float)(dist1 * dir2->v[0])) * v9;
  return 1i64;
}

/*
==============
IntersectLinePlane
==============
*/
char IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outHitPoint)
{
  float v5; 
  float v6; 
  float v7; 
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

  v5 = lineAxis->v[1];
  v6 = lineAxis->v[0];
  v7 = lineAxis->v[2];
  v12 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2817, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( lineAxis ) )", "(%g, %g, %g) len %g", v6, v5, v7, fsqrt(v12)) )
    __debugbreak();
  v13 = planeNormal->v[1];
  v14 = planeNormal->v[0];
  v15 = planeNormal->v[2];
  v16 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2818, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v14, v13, v15, fsqrt(v16)) )
    __debugbreak();
  v17 = planeNormal->v[0];
  v18 = planeNormal->v[1];
  v19 = planeNormal->v[2];
  v20 = (float)((float)(v18 * planePoint->v[1]) + (float)(planeNormal->v[0] * planePoint->v[0])) + (float)(v19 * planePoint->v[2]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(lineAxis->v[0] * lineAxis->v[0]) + (float)(lineAxis->v[1] * lineAxis->v[1])) + (float)(lineAxis->v[2] * lineAxis->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2839, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( lineAxis ))", (const char *)&queryFormat, "Vec3IsNormalized( lineAxis )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane ))", (const char *)&queryFormat, "Vec3IsNormalized( plane )") )
    __debugbreak();
  v21 = (float)((float)(v18 * lineAxis->v[1]) + (float)(lineAxis->v[0] * v17)) + (float)(v19 * lineAxis->v[2]);
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) < 0.000001 )
    return 0;
  v22 = (float)(v20 - (float)((float)((float)(v18 * linePoint->v[1]) + (float)(v17 * linePoint->v[0])) + (float)(v19 * linePoint->v[2]))) / v21;
  outHitPoint->v[0] = (float)(lineAxis->v[0] * v22) + linePoint->v[0];
  outHitPoint->v[1] = (float)(v22 * lineAxis->v[1]) + linePoint->v[1];
  outHitPoint->v[2] = (float)(v22 * lineAxis->v[2]) + linePoint->v[2];
  return 1;
}

/*
==============
IntersectLinePlane
==============
*/
char IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec4_t *plane, float *t)
{
  float v8; 
  float v9; 
  float v10; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(lineAxis->v[0] * lineAxis->v[0]) + (float)(lineAxis->v[1] * lineAxis->v[1])) + (float)(lineAxis->v[2] * lineAxis->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2839, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( lineAxis ))", (const char *)&queryFormat, "Vec3IsNormalized( lineAxis )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(plane->v[0] * plane->v[0]) + (float)(plane->v[1] * plane->v[1])) + (float)(plane->v[2] * plane->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane ))", (const char *)&queryFormat, "Vec3IsNormalized( plane )") )
    __debugbreak();
  v8 = plane->v[1];
  v9 = plane->v[2];
  v10 = (float)((float)(v8 * lineAxis->v[1]) + (float)(plane->v[0] * lineAxis->v[0])) + (float)(v9 * lineAxis->v[2]);
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.000001 )
    return 0;
  *t = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v8 * linePoint->v[1]) + (float)(plane->v[0] * linePoint->v[0])) + (float)(v9 * linePoint->v[2])) + plane->v[3]) / v10) ^ _xmm);
  return 1;
}

/*
==============
IntersectLineSegmentSphere
==============
*/
char IntersectLineSegmentSphere(const vec3_t *p1, const vec3_t *p2, const vec3_t *sphereCenter, float radius, float *outT1, float *outT2)
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
  char result; 
  float v18; 

  v6 = p2->v[1];
  v7 = sphereCenter->v[1];
  v8 = sphereCenter->v[2];
  v9 = p1->v[1];
  v10 = p1->v[2];
  v11 = p2->v[0] - p1->v[0];
  v12 = p2->v[2] - v10;
  v13 = (float)((float)((float)(v9 - v7) * (float)(v6 - v9)) + (float)((float)(p1->v[0] - sphereCenter->v[0]) * v11)) + (float)((float)(v10 - v8) * v12);
  v18 = v13 * 2.0;
  v14 = (float)((float)((float)(v6 - v9) * (float)(v6 - v9)) + (float)(v11 * v11)) + (float)(v12 * v12);
  v15 = (float)((float)(v13 * v13) * 4.0) - (float)((float)((float)((float)((float)((float)((float)((float)(sphereCenter->v[0] * sphereCenter->v[0]) + (float)(v7 * v7)) + (float)(v8 * v8)) + (float)((float)((float)(v9 * v9) + (float)(p1->v[0] * p1->v[0])) + (float)(v10 * v10))) - (float)((float)((float)((float)(v7 * v9) + (float)(sphereCenter->v[0] * p1->v[0])) + (float)(v8 * v10)) * 2.0)) - (float)(radius * radius)) * v14) * 4.0);
  if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.000001 || v15 < 0.0 )
  {
    *outT1 = 0.0;
    result = 0;
    *outT2 = 0.0;
  }
  else
  {
    v16 = fsqrt(v15);
    *outT1 = (float)(v16 - v18) * (float)(0.5 / v14);
    *outT2 = (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) - v16) * (float)(0.5 / v14);
    return 1;
  }
  return result;
}

/*
==============
IntersectRayBounds
==============
*/
char IntersectRayBounds(const vec3_t *origin, const vec3_t *direction, const Bounds *bounds, float *tmin, vec3_t *outHitPoint)
{
  unsigned int v5; 
  float v6; 
  float v7; 
  float v8; 
  signed __int64 v9; 
  int v11; 
  int v12; 
  __int64 v15; 
  bool v16; 
  float *v17; 
  float v19; 
  __int128 v20; 
  float v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  int v37[4]; 
  int v38[4]; 

  v5 = 0;
  *tmin = 0.0;
  v6 = bounds->midPoint.v[1];
  v7 = bounds->midPoint.v[2];
  v8 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  *(float *)v38 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  *(float *)&v38[1] = v6 + bounds->halfSize.v[1];
  v9 = (char *)direction - (char *)v37;
  *(float *)&v38[2] = v7 + bounds->halfSize.v[2];
  *(float *)&v11 = v6 - bounds->halfSize.v[1];
  *(float *)v37 = v8;
  *(float *)&v12 = v7 - bounds->halfSize.v[2];
  v37[1] = v11;
  v37[2] = v12;
  v15 = 0i64;
  v16 = 1;
  do
  {
    if ( !v16 )
    {
      LODWORD(v32) = 3;
      LODWORD(v27) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
        __debugbreak();
    }
    v17 = (float *)&v37[v15];
    if ( COERCE_FLOAT(*(int *)((char *)&v37[v15] + v9) & _xmm) >= 0.000001 )
    {
      if ( v5 >= 3 )
      {
        LODWORD(v32) = 3;
        LODWORD(v27) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
          __debugbreak();
      }
      v19 = 1.0 / *(float *)((char *)v17 + v9);
      if ( v5 >= 3 )
      {
        LODWORD(v32) = 3;
        LODWORD(v27) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
          __debugbreak();
        LODWORD(v35) = 3;
        LODWORD(v30) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v35) )
          __debugbreak();
      }
      v20 = *(unsigned int *)v17;
      *(float *)&v20 = (float)(*v17 - origin->v[v15]) * v19;
      _XMM6 = v20;
      if ( v5 >= 3 )
      {
        LODWORD(v32) = 3;
        LODWORD(v27) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
          __debugbreak();
        LODWORD(v36) = 3;
        LODWORD(v31) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v36) )
          __debugbreak();
      }
      __asm
      {
        vminss  xmm2, xmm6, xmm3
        vmaxss  xmm4, xmm2, dword ptr [r15]
        vmaxss  xmm0, xmm6, xmm3
        vminss  xmm8, xmm0, xmm8
      }
      *tmin = *(float *)&_XMM4;
      if ( *(float *)&_XMM4 > *(float *)&_XMM8 )
        return 0;
    }
    else
    {
      if ( v5 >= 3 )
      {
        LODWORD(v32) = 3;
        LODWORD(v27) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
          __debugbreak();
        LODWORD(v33) = 3;
        LODWORD(v28) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v33) )
          __debugbreak();
      }
      if ( *v17 > origin->v[v15] )
        return 0;
      if ( v5 >= 3 )
      {
        LODWORD(v32) = 3;
        LODWORD(v27) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v32) )
          __debugbreak();
        LODWORD(v34) = 3;
        LODWORD(v29) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v34) )
          __debugbreak();
      }
      if ( *(float *)&v38[v15] < origin->v[v15] )
        return 0;
    }
    ++v5;
    ++v15;
    v16 = v5 < 3;
  }
  while ( (int)v5 < 3 );
  v26 = *tmin;
  outHitPoint->v[0] = (float)(*tmin * direction->v[0]) + origin->v[0];
  outHitPoint->v[1] = (float)(v26 * direction->v[1]) + origin->v[1];
  outHitPoint->v[2] = (float)(v26 * direction->v[2]) + origin->v[2];
  return 1;
}

/*
==============
IntersectTwoPlanesIfNotParallel
==============
*/
__int64 IntersectTwoPlanesIfNotParallel(const vec4_t (*plane)[2], vec3_t *outPoint, vec3_t *outDir)
{
  float v6; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  vec3_t v18; 
  vec3_t cross; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((*plane)[0].v[0] * (*plane)[0].v[0]) + (float)((*plane)[0].v[1] * (*plane)[0].v[1])) + (float)((*plane)[0].v[2] * (*plane)[0].v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1873, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane[0] ))", (const char *)&queryFormat, "Vec3IsNormalized( plane[0] )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((*plane)[1].v[0] * (*plane)[1].v[0]) + (float)((*plane)[1].v[1] * (*plane)[1].v[1])) + (float)((*plane)[1].v[2] * (*plane)[1].v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1874, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane[1] ))", (const char *)&queryFormat, "Vec3IsNormalized( plane[1] )") )
    __debugbreak();
  Vec3Cross((const vec3_t *)plane, (const vec3_t *)&(*plane)[1], outDir);
  v6 = (float)((float)(outDir->v[0] * outDir->v[0]) + (float)(outDir->v[1] * outDir->v[1])) + (float)(outDir->v[2] * outDir->v[2]);
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) <= 0.000001 )
    return 0i64;
  Vec3Cross(outDir, (const vec3_t *)&(*plane)[1], &cross);
  v8 = (*plane)[0].v[3];
  Vec3Cross((const vec3_t *)plane, outDir, &v18);
  v9 = (*plane)[1].v[3];
  v10 = (float)(v9 * v18.v[1]) + (float)(v8 * cross.v[1]);
  v11 = v9 * v18.v[2];
  v12 = v8 * cross.v[2];
  outPoint->v[0] = (float)((float)(v9 * v18.v[0]) + (float)(v8 * cross.v[0])) / v6;
  outPoint->v[1] = v10 / v6;
  outPoint->v[2] = (float)(v11 + v12) / v6;
  v13 = LODWORD(outDir->v[0]);
  v14 = v13;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(outDir->v[1] * outDir->v[1])) + (float)(outDir->v[2] * outDir->v[2]));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  outDir->v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  outDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * outDir->v[1];
  outDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * outDir->v[2];
  return 1i64;
}

/*
==============
IsPosInsideArc
==============
*/
__int64 IsPosInsideArc(const vec3_t *pos, float posRadius, const vec3_t *arcOrigin, float arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight)
{
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  double v16; 
  double v17; 
  vec2_t vec; 
  float v20; 

  v7 = pos->v[0] - arcOrigin->v[0];
  v9 = LODWORD(pos->v[1]);
  v8 = pos->v[1] - arcOrigin->v[1];
  v10 = pos->v[2];
  v11 = arcOrigin->v[2];
  v20 = v10 - v11;
  *(float *)&v9 = fsqrt((float)(v8 * v8) + (float)(v7 * v7));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  vec.v[0] = v7 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v8 * (float)(1.0 / *(float *)&_XMM0);
  if ( (float)((float)(*(float *)&v9 - posRadius) * (float)(*(float *)&v9 - posRadius)) > (float)(arcRadius * arcRadius) || v10 < (float)(v11 - arcHalfHeight) || v10 > (float)(v11 + arcHalfHeight) )
    return 0i64;
  v16 = vectoyaw(&vec);
  v17 = AngleNormalize360(*(const float *)&v16);
  if ( arcAngle0 >= arcAngle1 )
  {
    if ( *(float *)&v17 < arcAngle1 )
      return 1i64;
    return *(float *)&v17 > arcAngle0;
  }
  if ( *(float *)&v17 < arcAngle1 )
    return *(float *)&v17 > arcAngle0;
  return 0i64;
}

/*
==============
LookAtAxisAndDistance
==============
*/
float LookAtAxisAndDistance(const vec3_t *origin, const vec3_t *lookAt, tmat33_t<vec3_t> *axis)
{
  float v4; 
  __int128 v5; 
  __int128 v6; 
  float v7; 
  vec3_t *v8; 
  float v12; 
  __int128 v13; 
  bool v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v22; 
  float v23; 
  float v24; 

  v4 = lookAt->v[0] - origin->v[0];
  axis->m[0].v[0] = v4;
  v6 = LODWORD(lookAt->v[1]);
  *(float *)&v6 = lookAt->v[1] - origin->v[1];
  v5 = v6;
  axis->m[0].v[1] = *(float *)&v6;
  v7 = lookAt->v[2] - origin->v[2];
  v8 = &axis->m[1];
  *(float *)&v6 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v4 * v4)) + (float)(v7 * v7));
  _XMM7 = v6;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm8, xmm0
  }
  v12 = 1.0 / *(float *)&_XMM0;
  v13 = v5;
  *(float *)&v13 = *(float *)&v5 * v12;
  v14 = (float)(*(float *)&v5 * (float)(1.0 / *(float *)&_XMM0)) == -0.0;
  *(float *)&_XMM0 = v7 * (float)(1.0 / *(float *)&_XMM0);
  v15 = v13 ^ _xmm;
  axis->m[0].v[2] = *(float *)&_XMM0;
  axis->m[0].v[1] = *(float *)&v5 * v12;
  v16 = v4 * v12;
  axis->m[0].v[0] = v4 * v12;
  axis->m[1].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v5 * v12) ^ _xmm);
  axis->m[1].v[1] = v4 * v12;
  axis->m[1].v[2] = 0.0;
  v17 = 0.0;
  if ( v14 && axis->m[1].v[1] == 0.0 )
  {
    v8->v[0] = 1.0;
    v16 = axis->m[1].v[1];
    v17 = axis->m[1].v[2];
    v15 = LODWORD(FLOAT_1_0);
  }
  v18 = v15;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v16 * v16)) + (float)(v17 * v17));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v8->v[0] = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM0);
  axis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[1];
  axis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * axis->m[1].v[2];
  Vec3Cross(axis->m, v8, &axis->m[2]);
  v22 = axis->m[2].v[0];
  v23 = axis->m[2].v[2];
  v24 = (float)((float)(v22 * v22) + (float)(axis->m[2].v[1] * axis->m[2].v[1])) + (float)(v23 * v23);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1741, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v22, axis->m[2].v[1], v23, fsqrt(v24)) )
    __debugbreak();
  return *(float *)&_XMM7;
}

/*
==============
MatrixAdd
==============
*/
void MatrixAdd(const tmat33_t<vec3_t> *a, const tmat33_t<vec3_t> *b, tmat33_t<vec3_t> *out)
{
  float v3; 

  v3 = a->m[2].v[2] + b->m[2].v[2];
  *(__m256 *)out->m[0].v = _mm256_add_ps(*(__m256 *)a->m[0].v, *(__m256 *)b->m[0].v);
  out->m[2].v[2] = v3;
}

/*
==============
MatrixAffine44
==============
*/
void MatrixAffine44(const tmat33_t<vec3_t> *basis, const vec3_t *translation, tmat44_t<vec4_t> *out)
{
  *(_QWORD *)out->m[0].v = *(_QWORD *)basis->m[0].v;
  *(_QWORD *)&out->row0.xyz.z = LODWORD(basis->m[0].v[2]);
  *(_QWORD *)out->row1.v = *(_QWORD *)basis->row1.v;
  *(_QWORD *)&out->row1.xyz.z = LODWORD(basis->m[1].v[2]);
  *(_QWORD *)out->row2.v = *(_QWORD *)basis->row2.v;
  *(_QWORD *)&out->row2.xyz.z = LODWORD(basis->m[2].v[2]);
  out->m[3].xyz = *translation;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixClear33
==============
*/
void MatrixClear33(tmat33_t<vec3_t> *dst)
{
  *(_OWORD *)dst->m[0].v = 0ui64;
  *(_OWORD *)&dst->row1.y = 0ui64;
  dst->m[2].v[2] = 0.0;
}

/*
==============
MatrixClear43
==============
*/
void MatrixClear43(tmat43_t<vec3_t> *dst)
{
  *(_OWORD *)dst->m[0].v = 0ui64;
  *(_OWORD *)&dst->row1.y = 0ui64;
  *(_OWORD *)&dst->row2.z = 0ui64;
}

/*
==============
MatrixClear44
==============
*/
void MatrixClear44(tmat44_t<vec4_t> *dst)
{
  dst->m[0] = 0ui64;
  dst->row1 = 0ui64;
  dst->row2 = 0ui64;
  dst->row3 = 0ui64;
}

/*
==============
MatrixCopy44To43
==============
*/
void MatrixCopy44To43(const tmat44_t<vec4_t> *src, tmat43_t<vec3_t> *dst)
{
  *(_QWORD *)dst->m[0].v = *(_QWORD *)src->m[0].v;
  dst->m[0].v[2] = src->m[0].v[2];
  dst->m[1] = *(vec3_t *)src->row1.v;
  dst->m[2] = *(vec3_t *)src->row2.v;
  dst->m[3] = *(vec3_t *)src->row3.v;
}

/*
==============
MatrixForViewerOrthogonal
==============
*/
void MatrixForViewerOrthogonal(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  float v3; 
  float v5; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  v3 = axis->m[1].v[0];
  v5 = axis->m[0].v[1];
  v7 = axis->m[0].v[2];
  v8 = (float)((float)(v5 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v3)) + (float)(v7 * axis->m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1654, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v5, v7, v3, axis->m[1].v[1], axis->m[1].v[2], v8) )
    __debugbreak();
  v10 = axis->m[0].v[1];
  v11 = axis->m[2].v[0];
  v12 = axis->m[0].v[2];
  v13 = (float)((float)(v10 * axis->m[2].v[1]) + (float)(axis->m[0].v[0] * v11)) + (float)(v12 * axis->m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1655, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v10, v12, v11, axis->m[2].v[1], axis->m[2].v[2], v13) )
    __debugbreak();
  mtx->m[0].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[0]) ^ _xmm);
  mtx->m[1].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[1]) ^ _xmm);
  LODWORD(v14) = LODWORD(axis->m[1].v[2]) ^ _xmm;
  mtx->m[2].v[0] = v14;
  mtx->m[3].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(origin->v[0] * mtx->m[0].v[0]) + (float)(origin->v[1] * mtx->m[1].v[0])) + (float)(v14 * origin->v[2])) ^ _xmm);
  mtx->m[0].v[1] = axis->m[2].v[0];
  mtx->m[1].v[1] = axis->m[2].v[1];
  v15 = axis->m[2].v[2];
  mtx->m[2].v[1] = v15;
  mtx->m[3].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mtx->m[1].v[1] * origin->v[1]) + (float)(mtx->m[0].v[1] * origin->v[0])) + (float)(v15 * origin->v[2])) ^ _xmm);
  mtx->m[0].v[2] = axis->m[0].v[0];
  mtx->m[1].v[2] = axis->m[0].v[1];
  v16 = axis->m[0].v[2];
  mtx->m[2].v[2] = v16;
  mtx->m[3].v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(origin->v[0] * mtx->m[0].v[2]) + (float)(origin->v[1] * mtx->m[1].v[2])) + (float)(v16 * origin->v[2])) ^ _xmm);
  mtx->m[0].v[3] = 0.0;
  mtx->m[1].v[3] = 0.0;
  mtx->m[2].v[3] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
MatrixForViewerOrthogonalNoOrigin
==============
*/
void MatrixForViewerOrthogonalNoOrigin(const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  float v2; 
  float v4; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 

  v2 = axis->m[1].v[0];
  v4 = axis->m[0].v[1];
  v6 = axis->m[0].v[2];
  v7 = (float)((float)(v4 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v2)) + (float)(v6 * axis->m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1681, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v4, v6, v2, axis->m[1].v[1], axis->m[1].v[2], v7) )
    __debugbreak();
  v8 = axis->m[0].v[1];
  v9 = axis->m[2].v[0];
  v10 = axis->m[0].v[2];
  v11 = (float)((float)(v8 * axis->m[2].v[1]) + (float)(axis->m[0].v[0] * v9)) + (float)(v10 * axis->m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1682, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v8, v10, v9, axis->m[2].v[1], axis->m[2].v[2], v11) )
    __debugbreak();
  mtx->m[0].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[0]) ^ _xmm);
  mtx->m[1].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[1]) ^ _xmm);
  mtx->m[2].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[2]) ^ _xmm);
  mtx->m[3].v[0] = 0.0;
  mtx->m[0].v[1] = axis->m[2].v[0];
  mtx->m[1].v[1] = axis->m[2].v[1];
  mtx->m[2].v[1] = axis->m[2].v[2];
  mtx->m[3].v[1] = 0.0;
  mtx->m[0].v[2] = axis->m[0].v[0];
  mtx->m[1].v[2] = axis->m[0].v[1];
  mtx->m[2].v[2] = axis->m[0].v[2];
  mtx->m[3].v[2] = 0.0;
  mtx->m[0].v[3] = 0.0;
  mtx->m[1].v[3] = 0.0;
  mtx->m[2].v[3] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
MatrixForViewport
==============
*/
void MatrixForViewport(float width, float height, float minZ, float maxZ, tmat44_t<vec4_t> *mtx)
{
  mtx->m[0].v[0] = width * 0.5;
  *(_QWORD *)(&mtx->row0.xyz + 1) = 0i64;
  *(_QWORD *)mtx->row2.v = 0i64;
  mtx->m[3].v[0] = width * 0.5;
  *(_QWORD *)&mtx->row0.xyz.y = 0i64;
  mtx->m[1].v[1] = height * -0.5;
  mtx->m[3].v[1] = height * 0.5;
  *(_QWORD *)&mtx->row1.xyz.z = 0i64;
  mtx->m[2].v[2] = maxZ - minZ;
  mtx->m[3].v[2] = minZ;
  mtx->m[2].v[3] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
MatrixInverse44Aligned
==============
*/

void __fastcall MatrixInverse44Aligned(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst, double a3, double a4)
{
  vec4_t v4; 
  vec4_t v5; 
  __m256i v8; 
  vector4 result; 

  if ( ((unsigned __int8)mat & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1044, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&mat & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&mat & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)dst & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1045, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&dst & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&dst & 15 )") )
    __debugbreak();
  v8 = *(__m256i *)mat->row2.v;
  *(__m256i *)result.x.v.m128_f32 = *(__m256i *)mat->m[0].v;
  *(__m256i *)result.z.v.m128_f32 = v8;
  Float4x4Inverse(&result, (const vector4 *)dst);
  dst->m[0] = v4;
  dst->m[1] = v5;
  dst->row2 = *(vec4_t *)&a3;
  dst->row3 = *(vec4_t *)&a4;
}

/*
==============
MatrixInverse44Safe
==============
*/
__int64 MatrixInverse44Safe(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *out)
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
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  __m128 v89; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  tmat44_t<vec4_t> outa; 

  if ( mat == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 959, ASSERT_TYPE_ASSERT, "(&mat != &out)", (const char *)&queryFormat, "&mat != &out") )
    __debugbreak();
  MatrixTranspose44(mat, &outa);
  v4 = outa.m[1].v[3];
  v5 = outa.m[3].v[3] * outa.m[2].v[2];
  v6 = outa.m[3].v[0] * outa.m[2].v[2];
  v7 = outa.m[1].v[2];
  v8 = outa.m[2].v[3] * outa.m[3].v[2];
  v9 = outa.m[2].v[3] * outa.m[3].v[1];
  v10 = outa.m[2].v[0] * outa.m[3].v[2];
  v11 = outa.m[3].v[0] * outa.m[2].v[3];
  v12 = outa.m[2].v[0] * outa.m[3].v[3];
  v13 = outa.m[2].v[0] * outa.m[3].v[1];
  v14 = outa.m[3].v[0] * outa.m[2].v[1];
  v15 = (float)(outa.m[3].v[0] * outa.m[2].v[3]) * outa.m[1].v[2];
  v93 = (float)((float)((float)(outa.m[1].v[2] * (float)(outa.m[2].v[3] * outa.m[3].v[1])) + (float)((float)(outa.m[3].v[3] * outa.m[2].v[2]) * outa.m[1].v[1])) + (float)(outa.m[1].v[3] * (float)(outa.m[2].v[1] * outa.m[3].v[2]))) - (float)((float)((float)(outa.m[1].v[2] * (float)(outa.m[2].v[1] * outa.m[3].v[3])) + (float)((float)(outa.m[2].v[3] * outa.m[3].v[2]) * outa.m[1].v[1])) + (float)(outa.m[1].v[3] * (float)(outa.m[3].v[1] * outa.m[2].v[2])));
  out->m[0].v[0] = v93;
  v16 = v7 * v12;
  v17 = outa.m[1].v[0];
  v18 = (float)(v16 + (float)(outa.m[1].v[0] * v8)) + (float)(v4 * v6);
  v19 = v15 + (float)(outa.m[1].v[0] * v5);
  v20 = v12 * outa.m[1].v[1];
  v21 = v11 * outa.m[1].v[1];
  v22 = v18 - (float)(v19 + (float)(v4 * v10));
  v23 = outa.m[2].v[1];
  v92 = v22;
  out->m[0].v[1] = v22;
  v24 = (float)(v21 + (float)(v17 * (float)(v23 * outa.m[3].v[3]))) + (float)(v4 * v13);
  v25 = v20 + (float)(v17 * v9);
  v26 = v6 * outa.m[1].v[1];
  v27 = v10 * outa.m[1].v[1];
  v28 = v24 - (float)(v25 + (float)(v4 * v14));
  v29 = outa.m[3].v[1];
  v94 = v28;
  out->m[0].v[2] = v28;
  v95 = (float)((float)(v27 + (float)(v17 * (float)(v29 * outa.m[2].v[2]))) + (float)(v14 * outa.m[1].v[2])) - (float)((float)(v26 + (float)(v17 * (float)(outa.m[2].v[1] * outa.m[3].v[2]))) + (float)(v13 * outa.m[1].v[2]));
  v30 = outa.m[2].v[1];
  out->m[0].v[3] = v95;
  v31 = v11 * outa.m[0].v[2];
  v32 = v12 * outa.m[0].v[2];
  out->m[1].v[0] = (float)((float)((float)((float)(v30 * outa.m[3].v[3]) * outa.m[0].v[2]) + (float)(v8 * outa.m[0].v[1])) + (float)((float)(outa.m[3].v[1] * outa.m[2].v[2]) * outa.m[0].v[3])) - (float)((float)((float)(v9 * outa.m[0].v[2]) + (float)(v5 * outa.m[0].v[1])) + (float)((float)(outa.m[2].v[1] * outa.m[3].v[2]) * outa.m[0].v[3]));
  v33 = v5 * outa.m[0].v[0];
  v34 = outa.m[0].v[1];
  v35 = v31 + v33;
  v36 = v8 * outa.m[0].v[0];
  v37 = outa.m[0].v[0];
  out->m[1].v[1] = (float)(v35 + (float)(v10 * outa.m[0].v[3])) - (float)((float)(v32 + v36) + (float)(v6 * outa.m[0].v[3]));
  v38 = v37 * (float)(outa.m[2].v[1] * outa.m[3].v[2]);
  out->m[1].v[2] = (float)((float)((float)(v34 * v12) + (float)(v37 * v9)) + (float)(v14 * outa.m[0].v[3])) - (float)((float)((float)(v34 * v11) + (float)(v37 * (float)(outa.m[2].v[1] * outa.m[3].v[3]))) + (float)(v13 * outa.m[0].v[3]));
  v39 = outa.m[0].v[2] * v14;
  v40 = v17 * outa.m[0].v[2];
  v41 = (float)((float)(v34 * v10) + (float)(v37 * (float)(outa.m[3].v[1] * outa.m[2].v[2]))) + v39;
  v42 = outa.m[1].v[2] * outa.m[0].v[1];
  v43 = (float)((float)((float)(v34 * v6) + v38) + (float)(outa.m[0].v[2] * v13)) - v41;
  v44 = outa.m[0].v[2] * v4;
  v45 = outa.m[0].v[3] * outa.m[1].v[2];
  v46 = v34 * v4;
  v47 = outa.m[0].v[3] * outa.m[1].v[1];
  v48 = v37 * v4;
  v49 = v37 * outa.m[1].v[2];
  v50 = (float)(outa.m[0].v[3] * outa.m[1].v[1]) * outa.m[3].v[2];
  v51 = v37 * outa.m[1].v[1];
  v52 = outa.m[0].v[3] * v17;
  v53 = v17 * outa.m[0].v[1];
  out->m[1].v[3] = v43;
  v54 = (float)(v50 + (float)(v44 * outa.m[3].v[1])) + (float)(v42 * outa.m[3].v[3]);
  v55 = (float)(v48 * outa.m[3].v[2]) + (float)(v45 * outa.m[3].v[0]);
  v56 = v44 * outa.m[3].v[0];
  v57 = v52 * outa.m[3].v[2];
  out->m[2].v[0] = v54 - (float)((float)((float)(v45 * outa.m[3].v[1]) + (float)(v46 * outa.m[3].v[2])) + (float)((float)(outa.m[0].v[2] * outa.m[1].v[1]) * outa.m[3].v[3]));
  v58 = (float)(v55 + (float)(v40 * outa.m[3].v[3])) - (float)((float)(v57 + v56) + (float)(v49 * outa.m[3].v[3]));
  v59 = (float)(v52 * outa.m[3].v[1]) + (float)(v46 * outa.m[3].v[0]);
  v60 = v48 * outa.m[3].v[1];
  v61 = v47 * outa.m[3].v[0];
  out->m[2].v[1] = v58;
  v62 = v59 + (float)(v51 * outa.m[3].v[3]);
  v63 = v60 + v61;
  v64 = v49 * outa.m[3].v[1];
  v65 = outa.m[0].v[2];
  out->m[2].v[2] = v62 - (float)(v63 + (float)(v53 * outa.m[3].v[3]));
  out->m[2].v[3] = (float)((float)(v64 + (float)((float)(v65 * outa.m[1].v[1]) * outa.m[3].v[0])) + (float)(v53 * outa.m[3].v[2])) - (float)((float)((float)(v40 * outa.m[3].v[1]) + (float)(v42 * outa.m[3].v[0])) + (float)(v51 * outa.m[3].v[2]));
  v66 = (float)((float)(v42 * outa.m[2].v[3]) + (float)(v44 * outa.m[2].v[1])) + (float)(v47 * outa.m[2].v[2]);
  v67 = v44 * outa.m[2].v[0];
  v68 = outa.m[2].v[3];
  v69 = (float)((float)((float)((float)(outa.m[0].v[2] * outa.m[1].v[1]) * outa.m[2].v[3]) + (float)(v46 * outa.m[2].v[2])) + (float)(v45 * outa.m[2].v[1])) - v66;
  v70 = (float)(v49 * outa.m[2].v[3]) + v67;
  v71 = v48 * outa.m[2].v[2];
  out->m[3].v[0] = v69;
  v72 = v45 * outa.m[2].v[0];
  v73 = outa.m[2].v[0];
  v74 = (float)(v70 + (float)(v52 * outa.m[2].v[2])) - (float)((float)((float)(v68 * v40) + v71) + v72);
  v75 = (float)(v68 * v53) + (float)(v48 * outa.m[2].v[1]);
  out->m[3].v[1] = v74;
  v76 = v75 + (float)(v73 * v47);
  v77 = v68 * v51;
  v78 = outa.m[2].v[1];
  v79 = v77 + (float)(v73 * v46);
  v80 = v51 * outa.m[2].v[2];
  out->m[3].v[2] = v76 - (float)(v79 + (float)(outa.m[2].v[1] * v52));
  v81 = (float)(v80 + (float)(v73 * v42)) + (float)(v78 * v40);
  v82 = v78 * v49;
  v83 = outa.m[0].v[2];
  v84 = v81 - (float)((float)((float)(v53 * outa.m[2].v[2]) + v82) + (float)(v73 * (float)(outa.m[0].v[2] * outa.m[1].v[1])));
  v85 = (float)(outa.m[0].v[1] * v92) + (float)(outa.m[0].v[0] * v93);
  v86 = outa.m[0].v[3] * v95;
  out->m[3].v[3] = v84;
  v87 = (float)(v85 + (float)(v83 * v94)) + v86;
  if ( v87 == 0.0 )
    return 0i64;
  v89 = (__m128)LODWORD(FLOAT_1_0);
  v89.m128_f32[0] = 1.0 / v87;
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v89, v89, 0);
  __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
  *(__m256 *)out->m[0].v = _mm256_mul_ps(_YMM2, *(__m256 *)out->m[0].v);
  *(__m256 *)out->row2.v = _mm256_mul_ps(_YMM2, *(__m256 *)out->row2.v);
  return 1i64;
}

/*
==============
MatrixMultiply44Aligned
==============
*/

void __fastcall MatrixMultiply44Aligned(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out, double a4)
{
  vec4_t v4; 
  vec4_t v5; 
  vec4_t v6; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  vector4 M1; 
  vector4 result; 

  if ( ((unsigned __int8)in1 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 916, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in1 & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in1 & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 917, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in2 & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in2 & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)out & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 918, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&out & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&out & 15 )") )
    __debugbreak();
  v10 = *(__m256i *)in1->row2.v;
  *(__m256i *)result.x.v.m128_f32 = *(__m256i *)in1->m[0].v;
  v12 = *(__m256i *)in2->row2.v;
  v11 = *(__m256i *)in2->m[0].v;
  *(__m256i *)result.z.v.m128_f32 = v10;
  *(__m256i *)M1.x.v.m128_f32 = v11;
  *(__m256i *)M1.z.v.m128_f32 = v12;
  Float4x4Mul(&result, &M1, (const vector4 *)out);
  out->m[0] = v4;
  out->m[1] = v5;
  out->m[2] = v6;
  out->row3 = *(vec4_t *)&a4;
}

/*
==============
MatrixMultiplyEquals
==============
*/
void MatrixMultiplyEquals(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
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
  __int64 v15; 

  v2 = in->m[0].v[0];
  v13 = out->m[1].v[0];
  v15 = *(_QWORD *)&out->row1.y;
  v3 = in->m[0].v[2];
  v4 = in->m[1].v[0];
  v5 = in->m[0].v[1];
  v6 = in->m[1].v[1];
  v14 = out->m[2].v[0];
  v7 = in->m[1].v[2];
  v8 = out->m[0].v[0];
  v9 = out->m[0].v[1];
  v10 = out->m[2].v[1];
  v11 = out->m[0].v[2];
  v12 = out->m[2].v[2];
  out->m[2].v[0] = (float)((float)(out->m[0].v[0] * in->m[2].v[0]) + (float)(v13 * in->m[2].v[1])) + (float)(v14 * in->m[2].v[2]);
  out->m[2].v[1] = (float)((float)(out->m[1].v[1] * in->m[2].v[1]) + (float)(out->m[0].v[1] * in->m[2].v[0])) + (float)(in->m[2].v[2] * out->m[2].v[1]);
  out->m[2].v[2] = (float)((float)(in->m[2].v[1] * out->m[1].v[2]) + (float)(in->m[2].v[0] * out->m[0].v[2])) + (float)(in->m[2].v[2] * out->m[2].v[2]);
  out->m[0].v[0] = (float)((float)(v2 * v8) + (float)(v5 * v13)) + (float)(v3 * v14);
  out->m[0].v[1] = (float)((float)(v2 * v9) + (float)(v5 * *(float *)&v15)) + (float)(v3 * v10);
  out->m[0].v[2] = (float)((float)(v2 * v11) + (float)(v5 * *((float *)&v15 + 1))) + (float)(v3 * v12);
  out->m[1].v[0] = (float)((float)(v4 * v8) + (float)(v6 * v13)) + (float)(v7 * v14);
  out->m[1].v[1] = (float)((float)(v4 * v9) + (float)(v6 * *(float *)&v15)) + (float)(v7 * v10);
  out->m[1].v[2] = (float)((float)(v4 * v11) + (float)(v6 * *((float *)&v15 + 1))) + (float)(v7 * v12);
}

/*
==============
MatrixMultiplyUniformScale
==============
*/

void __fastcall MatrixMultiplyUniformScale(const tmat33_t<vec3_t> *a, double b, tmat33_t<vec3_t> *out)
{
  __m128 v3; 
  float v6; 

  v3 = _mm_shuffle_ps(*(__m128 *)&b, *(__m128 *)&b, 0);
  _YMM0 = (__m256i)(unsigned __int128)v3;
  __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
  v6 = v3.m128_f32[0] * a->m[2].v[2];
  *(__m256 *)out->m[0].v = _mm256_mul_ps(_YMM0, *(__m256 *)a->m[0].v);
  out->m[2].v[2] = v6;
}

/*
==============
MatrixScale44
==============
*/
void MatrixScale44(const vec3_t *scale, tmat44_t<vec4_t> *out)
{
  out->m[0].v[0] = scale->v[0];
  *(vec4_t *)((char *)&out->row0 + 4) = 0ui64;
  out->m[1].v[1] = scale->v[1];
  *(vec4_t *)((char *)&out->row1 + 8) = 0ui64;
  out->m[2].v[2] = scale->v[2];
  *(vec4_t *)((char *)&out->row2 + 12) = 0ui64;
  out->m[3].v[3] = 1.0;
}

/*
==============
MatrixScale
==============
*/
void MatrixScale(const vec3_t *scale, tmat33_t<vec3_t> *out)
{
  out->m[0].v[0] = scale->v[0];
  *(_QWORD *)&out->row0.y = 0i64;
  out->m[1].v[0] = 0.0;
  out->m[1].v[1] = scale->v[1];
  *(_QWORD *)&out->row1.z = 0i64;
  out->m[2].v[1] = 0.0;
  out->m[2].v[2] = scale->v[2];
}

/*
==============
MatrixSub
==============
*/
void MatrixSub(const tmat33_t<vec3_t> *a, const tmat33_t<vec3_t> *b, tmat33_t<vec3_t> *out)
{
  float v3; 

  v3 = a->m[2].v[2] - b->m[2].v[2];
  *(__m256 *)out->m[0].v = _mm256_sub_ps(*(__m256 *)a->m[0].v, *(__m256 *)b->m[0].v);
  out->m[2].v[2] = v3;
}

/*
==============
MatrixToAngleRadAxis
==============
*/
void MatrixToAngleRadAxis(const tmat33_t<vec3_t> *matrix, vec3_t *outAxis, float *outRadians)
{
  float v3; 
  float v4; 
  float v5; 
  float v8; 
  float v9; 
  double v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  float v21; 
  float v22; 

  v3 = matrix->m[1].v[2] - matrix->m[2].v[1];
  outAxis->v[0] = v3;
  v4 = matrix->m[2].v[0] - matrix->m[0].v[2];
  outAxis->v[1] = v4;
  v5 = matrix->m[0].v[1] - matrix->m[1].v[0];
  outAxis->v[2] = v5;
  v8 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
  v9 = (float)((float)((float)(matrix->m[1].v[1] + matrix->m[0].v[0]) + matrix->m[2].v[2]) - 1.0) * 0.5;
  if ( v8 > 0.000099999997 )
  {
    v10 = I_fclamp(v9, -1.0, 1.0);
    *outRadians = acosf_0(*(float *)&v10);
    v11 = 1.0 / fsqrt(v8);
    v12 = v11 * outAxis->v[1];
    outAxis->v[0] = v11 * outAxis->v[0];
    outAxis->v[2] = v11 * outAxis->v[2];
    outAxis->v[1] = v12;
    return;
  }
  if ( v9 > 0.0 )
  {
    *(_QWORD *)outAxis->v = 0i64;
    outAxis->v[2] = 0.0;
    *outRadians = 0.0;
    return;
  }
  *outRadians = 3.1415927;
  v13 = matrix->m[0].v[0];
  v14 = matrix->m[1].v[1];
  v15 = matrix->m[2].v[2];
  if ( matrix->m[0].v[0] <= v14 )
  {
    if ( v14 > v15 )
    {
      v19 = LODWORD(matrix->m[1].v[1]);
      *(float *)&v19 = (float)((float)((float)(v14 - v13) - v15) + 1.0) * 0.5;
      v17 = v19;
      outAxis->v[1] = *(float *)&v19;
      v16 = matrix->m[0].v[1];
      outAxis->v[0] = v16;
      v18 = matrix->m[1].v[2];
      goto LABEL_11;
    }
LABEL_10:
    v18 = (float)((float)((float)(v15 - v13) - v14) + 1.0) * 0.5;
    outAxis->v[2] = v18;
    v16 = matrix->m[0].v[2];
    outAxis->v[0] = v16;
    v17 = LODWORD(matrix->m[1].v[2]);
    goto LABEL_11;
  }
  if ( v13 <= v15 )
    goto LABEL_10;
  v16 = (float)((float)((float)(v13 - v14) - v15) + 1.0) * 0.5;
  outAxis->v[0] = v16;
  v17 = LODWORD(matrix->m[0].v[1]);
  outAxis->v[1] = *(float *)&v17;
  v18 = matrix->m[0].v[2];
LABEL_11:
  v20 = v17;
  v21 = *(float *)&v17;
  v22 = v18;
  *(float *)&v20 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(v16 * v16)) + (float)(v18 * v18));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm6, xmm0
  }
  outAxis->v[0] = v16 * (float)(1.0 / *(float *)&_XMM0);
  outAxis->v[1] = v21 * (float)(1.0 / *(float *)&_XMM0);
  outAxis->v[2] = v22 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
MatrixTransformVector44Aligned
==============
*/
void MatrixTransformVector44Aligned(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  if ( ((unsigned __int8)vec & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1061, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)vec.v & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)vec.v & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)mat & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1062, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&mat & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&mat & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)out & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1063, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)out.v & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)out.v & 15 )") )
    __debugbreak();
  *(__m128 *)out = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 255), (__m128)mat->m[3]), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 85), (__m128)mat->m[1])), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 170), (__m128)mat->m[2]), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)vec, *(__m128 *)vec, 0), (__m128)mat->m[0])));
}

/*
==============
MatrixTransformVectorQuatTrans
==============
*/

void __fastcall MatrixTransformVectorQuatTrans(const vec3_t *in, const DObjAnimMat *mat, vec3_t *out)
{
  LocalMatrixTransformVectorQuatTrans(in, mat, out);
}

/*
==============
MatrixTranspose44Aligned
==============
*/
void MatrixTranspose44Aligned(const tmat44_t<vec4_t> *in, tmat44_t<vec4_t> *out)
{
  __m128 v4; 
  vec4_t v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 

  if ( ((unsigned __int8)in & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 937, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)out & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 938, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&out & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&out & 15 )") )
    __debugbreak();
  v4 = _mm_shuffle_ps((__m128)in->m[0], (__m128)in->m[1], 68);
  v5 = in->m[2];
  v6 = _mm_shuffle_ps((__m128)v5, (__m128)in->m[3], 68);
  v7 = _mm_shuffle_ps((__m128)in->m[0], (__m128)in->m[1], 238);
  v8 = _mm_shuffle_ps((__m128)v5, (__m128)in->m[3], 238);
  out->m[0] = (vec4_t)_mm_shuffle_ps(v4, v6, 136);
  out->m[1] = (vec4_t)_mm_shuffle_ps(v4, v6, 221);
  out->m[2] = (vec4_t)_mm_shuffle_ps(v7, v8, 136);
  out->m[3] = (vec4_t)_mm_shuffle_ps(v7, v8, 221);
}

/*
==============
ModuloWrapD
==============
*/

double __fastcall ModuloWrapD(long double val, long double divisor, double _XMM2_8)
{
  double v4; 

  __asm { vxorpd  xmm2, xmm2, xmm2 }
  if ( divisor <= *(double *)&_XMM2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4275, ASSERT_TYPE_ASSERT, "(divisor > 0.0)", (const char *)&queryFormat, "divisor > 0.0") )
    __debugbreak();
  v4 = fmod_0(val, divisor);
  return fmod_0(v4 + divisor, divisor);
}

/*
==============
NearestPitchAndYawOnPlane
==============
*/
void NearestPitchAndYawOnPlane(const vec3_t *angles, const vec3_t *normal, vec3_t *result)
{
  vec3_t forward; 
  vec3_t outProjectedPoint; 

  if ( normal->v[0] == 0.0 && normal->v[1] == 0.0 && normal->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2271, ASSERT_TYPE_ASSERT, "(normal[0] || normal[1] || normal[2])", (const char *)&queryFormat, "normal[0] || normal[1] || normal[2]") )
    __debugbreak();
  AngleVectors(angles, &forward, NULL, NULL);
  ProjectPointOnPlane(&forward, normal, &outProjectedPoint);
  vectoangles(&outProjectedPoint, result);
}

/*
==============
NonNegativeHalfFromFloat
==============
*/
unsigned __int16 NonNegativeHalfFromFloat(float f)
{
  double v1; 

  v1 = I_fclamp(f, 0.0, 65504.0);
  return HalfFromFloat(*(float *)&v1);
}

/*
==============
DampedSpring::Normalize
==============
*/
float DampedSpring::Normalize(DampedSpring *this, vec3_t *vec)
{
  float v2; 
  __int128 v4; 

  v2 = vec->v[0];
  if ( vec->v[0] == 0.0 && 0.0 == vec->v[1] && 0.0 == vec->v[2] )
  {
    LODWORD(_XMM0) = 0;
  }
  else
  {
    v4 = LODWORD(vec->v[1]);
    *(float *)&v4 = fsqrt((float)((float)(vec->v[1] * vec->v[1]) + (float)(v2 * v2)) + (float)(vec->v[2] * vec->v[2]));
    _XMM0 = v4;
    __asm
    {
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm2, xmm1
    }
    vec->v[0] = v2 * (float)(1.0 / *(float *)&_XMM1);
    vec->v[1] = (float)(1.0 / *(float *)&_XMM1) * vec->v[1];
    vec->v[2] = (float)(1.0 / *(float *)&_XMM1) * vec->v[2];
  }
  return *(float *)&_XMM0;
}

/*
==============
OrthographicMatrix
==============
*/
void OrthographicMatrix(float width, float height, float depth, tmat44_t<vec4_t> *mtx)
{
  if ( width == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1622, ASSERT_TYPE_ASSERT, "(width != 0)", (const char *)&queryFormat, "width != 0") )
    __debugbreak();
  if ( height == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1623, ASSERT_TYPE_ASSERT, "(height != 0)", (const char *)&queryFormat, "height != 0") )
    __debugbreak();
  if ( depth == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1624, ASSERT_TYPE_ASSERT, "(depth != 0)", (const char *)&queryFormat, "depth != 0") )
    __debugbreak();
  *(_QWORD *)&mtx->row0.xyz.y = 0i64;
  *(_QWORD *)(&mtx->row0.xyz + 1) = 0i64;
  *(_QWORD *)&mtx->row1.xyz.z = 0i64;
  *(_QWORD *)mtx->row2.v = 0i64;
  *(_QWORD *)(&mtx->row2.xyz + 1) = 0i64;
  mtx->m[3].v[1] = 0.0;
  mtx->m[0].v[0] = 2.0 / width;
  mtx->m[1].v[1] = 2.0 / height;
  mtx->m[2].v[2] = -0.5 / depth;
  mtx->m[3].v[2] = 0.5;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
OrthographicMatrixFull
==============
*/
void OrthographicMatrixFull(float width, float height, float zNear, float zFar, tmat44_t<vec4_t> *mtx)
{
  float v5; 

  if ( width == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1638, ASSERT_TYPE_ASSERT, "(width != 0)", (const char *)&queryFormat, "width != 0") )
    __debugbreak();
  if ( height == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1639, ASSERT_TYPE_ASSERT, "(height != 0)", (const char *)&queryFormat, "height != 0") )
    __debugbreak();
  if ( (float)(zNear - zFar) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1640, ASSERT_TYPE_ASSERT, "(( zNear - zFar ) != 0)", (const char *)&queryFormat, "( zNear - zFar ) != 0") )
    __debugbreak();
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  *(_QWORD *)(&mtx->row2.xyz + 1) = 0i64;
  mtx->m[3].v[1] = 0.0;
  mtx->m[0].v[0] = 2.0 / width;
  mtx->m[1].v[1] = 2.0 / height;
  v5 = 1.0 / (float)(zFar - zNear);
  mtx->m[2].v[2] = COERCE_FLOAT(LODWORD(v5) ^ _xmm);
  mtx->m[3].v[2] = (float)(v5 * zNear) + 1.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
OrthonormalBasis
==============
*/
void OrthonormalBasis(const vec3_t *n, tmat33_t<vec3_t> *dst)
{
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  __int128 v13; 
  float v16; 
  float v18; 

  v4 = copysignf(1.0, n->v[2]);
  v5 = LODWORD(n->v[0]);
  v6 = -1.0 / (float)(v4 + n->v[2]);
  v8 = v5;
  *(float *)&v8 = *(float *)&v5 * n->v[1];
  v7 = v8;
  v10 = v5;
  *(float *)&v10 = *(float *)&v5 * v4;
  v9 = v10;
  v12 = v7;
  *(float *)&v12 = *(float *)&v7 * v6;
  _XMM8 = v12;
  v13 = v9;
  *(float *)&v13 = (float)((float)(*(float *)&v9 * *(float *)&v5) * v6) + 1.0;
  _XMM5 = v13;
  __asm { vunpcklps xmm1, xmm5, xmm3 }
  *(double *)dst->m[0].v = *(double *)&_XMM1;
  LODWORD(dst->m[0].v[2]) = v9 ^ _xmm;
  LODWORD(v16) = LODWORD(n->v[1]) ^ _xmm;
  __asm { vunpcklps xmm0, xmm8, xmm3 }
  *(double *)dst->row1.v = *(double *)&_XMM0;
  dst->m[1].v[2] = v16;
  v18 = n->v[2];
  *(double *)dst->row2.v = *(double *)n->v;
  dst->m[2].v[2] = v18;
}

/*
==============
PitchForYawOnNormal
==============
*/
float PitchForYawOnNormal(const float fYaw, const vec3_t *normal)
{
  float v3; 
  vec3_t forward; 

  if ( normal->v[0] == 0.0 && normal->v[1] == 0.0 && normal->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2240, ASSERT_TYPE_ASSERT, "(normal[0] || normal[1] || normal[2])", (const char *)&queryFormat, "normal[0] || normal[1] || normal[2]") )
    __debugbreak();
  YawVectors(fYaw, &forward, NULL);
  v3 = normal->v[2];
  if ( v3 == 0.0 )
    return FLOAT_270_0;
  else
    return atanf_0((float)((float)(forward.v[1] * normal->v[1]) + (float)(forward.v[0] * normal->v[0])) / v3) * 57.295776;
}

/*
==============
PointInCircleFromUniformDeviates
==============
*/
void PointInCircleFromUniformDeviates(float radiusDeviate, float yawDeviate, vec2_t *point)
{
  float v4; 
  float v5; 
  float c; 
  float s; 

  v4 = fsqrt(radiusDeviate);
  FastSinCos(yawDeviate * 6.2831855, &s, &c);
  v5 = v4 * s;
  point->v[0] = v4 * c;
  point->v[1] = v5;
}

/*
==============
PointInsideCone
==============
*/
bool PointInsideCone(const vec3_t *coneTip, const vec3_t *coneDir, float cosHalfFov, float coneHeight, const vec3_t *point)
{
  float v5; 
  float v7; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  v5 = coneDir->v[1];
  v7 = coneDir->v[0];
  v10 = coneDir->v[2];
  v11 = (float)((float)(v7 * v7) + (float)(v5 * v5)) + (float)(v10 * v10);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2431, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( coneDir ) )", "(%g, %g, %g) len %g", v7, v5, v10, fsqrt(v11)) )
    __debugbreak();
  v12 = point->v[0] - coneTip->v[0];
  v13 = point->v[1] - coneTip->v[1];
  v14 = point->v[2] - coneTip->v[2];
  v15 = (float)((float)(v13 * coneDir->v[1]) + (float)(v12 * coneDir->v[0])) + (float)(v14 * coneDir->v[2]);
  return v15 <= coneHeight && v15 >= 0.0 && (float)(v15 * v15) > (float)((float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) * (float)(cosHalfFov * cosHalfFov));
}

/*
==============
PointOnHemisphereFromUniformDeviates
==============
*/
void PointOnHemisphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, vec3_t *unitVec)
{
  float v4; 
  float v5; 
  float v6; 
  float c; 
  float s; 

  v4 = fsqrt(1.0 - (float)(azimuthDeviate * azimuthDeviate));
  FastSinCos(yawDeviate * 6.2831855, &s, &c);
  v5 = v4 * c;
  v6 = v4 * s;
  unitVec->v[2] = azimuthDeviate;
  unitVec->v[0] = v5;
  unitVec->v[1] = v6;
}

/*
==============
PointOnSphereFromUniformDeviates
==============
*/
void PointOnSphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, vec3_t *unitVec)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float c; 
  float s; 

  v4 = (float)(azimuthDeviate * 2.0) - 1.0;
  v5 = fsqrt(1.0 - (float)(v4 * v4));
  FastSinCos(yawDeviate * 6.2831855, &s, &c);
  v6 = v5 * c;
  v7 = v5 * s;
  unitVec->v[2] = v4;
  unitVec->v[0] = v6;
  unitVec->v[1] = v7;
}

/*
==============
PointToLineDirDistSq
==============
*/
float PointToLineDirDistSq(const vec3_t *point, const vec3_t *linePoint, const vec3_t *lineDir)
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
  float v13; 
  float v14; 

  v4 = lineDir->v[1];
  v5 = lineDir->v[0];
  v6 = lineDir->v[2];
  v7 = point->v[0];
  v8 = linePoint->v[0];
  v9 = point->v[1];
  v10 = linePoint->v[1];
  v11 = point->v[2];
  v12 = linePoint->v[2];
  v13 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  if ( v13 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 876, ASSERT_TYPE_ASSERT, "(lineDirDot)", (const char *)&queryFormat, "lineDirDot") )
    __debugbreak();
  v14 = (float)((float)((float)((float)(v10 - v9) * v4) + (float)((float)(v8 - v7) * v5)) + (float)((float)(v12 - v11) * v6)) / v13;
  return (float)((float)((float)((float)(v14 * lineDir->v[1]) + (float)(v9 - v10)) * (float)((float)(v14 * lineDir->v[1]) + (float)(v9 - v10))) + (float)((float)((float)(v14 * lineDir->v[0]) + (float)(v7 - v8)) * (float)((float)(v14 * lineDir->v[0]) + (float)(v7 - v8)))) + (float)((float)((float)(v14 * lineDir->v[2]) + (float)(v11 - v12)) * (float)((float)(v14 * lineDir->v[2]) + (float)(v11 - v12)));
}

/*
==============
ProjectPointOnPlane
==============
*/
void ProjectPointOnPlane(const vec3_t *point, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t relativePoint; 

  v4 = planeNormal->v[1];
  v5 = planeNormal->v[0];
  v6 = planeNormal->v[2];
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2059, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v5, v4, v6, fsqrt(v7)) )
    __debugbreak();
  v12 = point->v[1];
  relativePoint.v[0] = point->v[0] - planePoint->v[0];
  v13 = v12 - planePoint->v[1];
  v14 = point->v[2];
  relativePoint.v[1] = v13;
  relativePoint.v[2] = v14 - planePoint->v[2];
  ProjectPointOnPlane(&relativePoint, planeNormal, outProjectedPoint);
  v15 = outProjectedPoint->v[1];
  outProjectedPoint->v[0] = outProjectedPoint->v[0] + planePoint->v[0];
  v16 = v15 + planePoint->v[1];
  v17 = outProjectedPoint->v[2];
  outProjectedPoint->v[1] = v16;
  outProjectedPoint->v[2] = v17 + planePoint->v[2];
}

/*
==============
ProjectPointOnPlane
==============
*/
void ProjectPointOnPlane(const vec3_t *relativePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v10; 

  v3 = planeNormal->v[1];
  v4 = planeNormal->v[0];
  v5 = planeNormal->v[2];
  v6 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2050, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v4, v3, v5, fsqrt(v6)) )
    __debugbreak();
  LODWORD(v10) = COERCE_UNSIGNED_INT((float)((float)(relativePoint->v[1] * planeNormal->v[1]) + (float)(planeNormal->v[0] * relativePoint->v[0])) + (float)(relativePoint->v[2] * planeNormal->v[2])) ^ _xmm;
  outProjectedPoint->v[0] = (float)(planeNormal->v[0] * v10) + relativePoint->v[0];
  outProjectedPoint->v[1] = (float)(v10 * planeNormal->v[1]) + relativePoint->v[1];
  outProjectedPoint->v[2] = (float)(v10 * planeNormal->v[2]) + relativePoint->v[2];
}

/*
==============
ProjectPointOntoVectorClamped
==============
*/
void ProjectPointOntoVectorClamped(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v12; 

  v5 = start->v[0];
  v6 = start->v[1];
  v7 = end->v[0] - start->v[0];
  v8 = end->v[1] - v6;
  v9 = end->v[2] - start->v[2];
  v10 = (float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9);
  LODWORD(_XMM6) = 0;
  if ( v10 == 0.0 )
  {
    vProj->v[0] = v5;
    *(_QWORD *)&vProj->y = *(_QWORD *)&start->y;
    if ( outDistFromStart )
      *outDistFromStart = 0.0;
  }
  else
  {
    v12 = LODWORD(point->v[1]);
    *(float *)&v12 = (float)((float)((float)(point->v[1] - v6) * v8) + (float)((float)(point->v[0] - v5) * v7)) + (float)((float)(point->v[2] - start->v[2]) * v9);
    _XMM3 = v12;
    if ( *(float *)&v12 >= 0.0 )
      __asm { vminss  xmm6, xmm3, xmm7 }
    vProj->v[0] = (float)(v7 * (float)(*(float *)&_XMM6 / v10)) + v5;
    vProj->v[1] = (float)(v8 * (float)(*(float *)&_XMM6 / v10)) + start->v[1];
    vProj->v[2] = (float)(v9 * (float)(*(float *)&_XMM6 / v10)) + start->v[2];
    if ( outDistFromStart )
      *outDistFromStart = *(float *)&_XMM6 / v10;
  }
}

/*
==============
ProjectPointOntoVectorDir
==============
*/
void ProjectPointOntoVectorDir(const vec3_t *point, const vec3_t *start, const vec3_t *dir, vec3_t *result_projectedPoint, float *result_projectedDistanceFromStart)
{
  float v5; 
  float v6; 
  float v7; 
  float v9; 
  float v13; 

  v5 = dir->v[1];
  v6 = dir->v[0];
  v7 = dir->v[2];
  v9 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 854, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v6, v5, v7, fsqrt(v9)) )
    __debugbreak();
  v13 = (float)((float)((float)(point->v[1] - start->v[1]) * dir->v[1]) + (float)((float)(point->v[0] - start->v[0]) * dir->v[0])) + (float)((float)(point->v[2] - start->v[2]) * dir->v[2]);
  result_projectedPoint->v[0] = (float)(v13 * dir->v[0]) + start->v[0];
  result_projectedPoint->v[1] = (float)(v13 * dir->v[1]) + start->v[1];
  result_projectedPoint->v[2] = (float)(v13 * dir->v[2]) + start->v[2];
  *result_projectedDistanceFromStart = v13;
}

/*
==============
ProjectedWindingContainsCoplanarPoint
==============
*/
__int64 ProjectedWindingContainsCoplanarPoint(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point)
{
  int v5; 
  unsigned __int64 v9; 
  __int64 v10; 
  float *v11; 
  __int64 v12; 
  char *v13; 
  float v14; 
  float v15; 
  const vec3_t *v16; 
  float v17; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  char *v29; 
  const vec3_t *v30; 

  v5 = 0;
  v30 = verts;
  if ( vertCount <= 0 )
    return 1i64;
  v9 = 4i64 * x;
  v10 = 4i64 * y;
  v29 = (char *)verts + v9;
  v11 = &verts->v[v9 / 4];
  v12 = 12i64 * (vertCount - 1);
  while ( 1 )
  {
    v13 = (char *)verts + v12;
    if ( (unsigned int)y >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = y;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v25) = 3;
      LODWORD(v20) = y;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v25) )
        __debugbreak();
    }
    v14 = *(float *)((char *)v11 + v10 - v9) - *(float *)&v13[v10];
    if ( (unsigned int)x >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = x;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v26) = 3;
      LODWORD(v21) = x;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v26) )
        __debugbreak();
    }
    v15 = *(float *)&v13[v9] - *v11;
    if ( (unsigned int)x >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = x;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v27) = 3;
      LODWORD(v22) = x;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v27) )
        __debugbreak();
    }
    v16 = point;
    v17 = point->v[v9 / 4] - *(float *)&v13[v9];
    if ( (unsigned int)y >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = y;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v28) = 3;
      LODWORD(v23) = y;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v28) )
        __debugbreak();
      v16 = point;
    }
    if ( (float)((float)((float)(v16->v[(unsigned __int64)v10 / 4] - *(float *)&v13[v10]) * v15) + (float)(v14 * v17)) < 0.0 )
      break;
    verts = v30;
    ++v5;
    v12 = (char *)v11 - v29;
    v11 += 3;
    if ( v5 >= vertCount )
      return 1i64;
  }
  return 0i64;
}

/*
==============
ProjectedWindingContainsCoplanarPointEpsilon
==============
*/
__int64 ProjectedWindingContainsCoplanarPointEpsilon(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, float epsilon)
{
  int v6; 
  __int64 v8; 
  __int64 v9; 
  float *v10; 
  __int64 v11; 
  char *v12; 
  float v13; 
  float v14; 
  const vec3_t *v15; 
  float v16; 
  float v17; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  float *v30; 
  const vec3_t *v31; 

  v6 = 0;
  v8 = y;
  v9 = x;
  v31 = verts;
  if ( vertCount <= 0 )
    return 1i64;
  v30 = &verts->v[x];
  v10 = v30;
  v11 = 12i64 * (vertCount - 1);
  v29 = 4i64 * y - 4i64 * x;
  while ( 1 )
  {
    v12 = (char *)verts + v11;
    if ( (unsigned int)v8 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v25) = 3;
      LODWORD(v20) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v25) )
        __debugbreak();
    }
    v13 = *(float *)((char *)v10 + v29) - *(float *)&v12[4 * v8];
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v26) = 3;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v26) )
        __debugbreak();
    }
    v14 = *(float *)&v12[4 * v9] - *v10;
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v27) = 3;
      LODWORD(v22) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v27) )
        __debugbreak();
    }
    v15 = point;
    v16 = point->v[v9] - *(float *)&v12[4 * v9];
    if ( (unsigned int)v8 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v24) )
        __debugbreak();
      LODWORD(v28) = 3;
      LODWORD(v23) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v28) )
        __debugbreak();
      v15 = point;
    }
    v17 = (float)((float)(v15->v[v8] - *(float *)&v12[4 * v8]) * v14) + (float)(v13 * v16);
    if ( v17 < 0.0 && (float)(v17 * v17) > (float)((float)((float)(v13 * v13) + (float)(v14 * v14)) * epsilon) )
      break;
    ++v6;
    v11 = (char *)v10 - (char *)v30;
    v10 += 3;
    if ( v6 >= vertCount )
      return 1i64;
    verts = v31;
  }
  return 0i64;
}

/*
==============
ProjectedWindingSegmentFractionToEdge
==============
*/
__int64 ProjectedWindingSegmentFractionToEdge(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, const vec3_t *centroid, float *fracToEdge)
{
  float *v7; 
  unsigned int v8; 
  __int64 v9; 
  const vec3_t *v10; 
  __int64 v11; 
  unsigned __int64 v13; 
  __int64 v14; 
  float *v15; 
  __int64 v16; 
  char *v17; 
  float v18; 
  float v19; 
  float v20; 
  const vec3_t *v21; 
  float v22; 
  float v23; 
  const vec3_t *v24; 
  float v25; 
  __int128 v26; 
  float *v28; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  char *v44; 

  v7 = fracToEdge;
  v8 = 0;
  v9 = y;
  v10 = verts;
  v11 = x;
  *(float *)&_XMM10 = FLOAT_3_4028235e38;
  if ( vertCount > 0 )
  {
    v13 = x;
    v14 = 12i64 * (vertCount - 1);
    v44 = (char *)verts + v13 * 4;
    v15 = &verts->v[v13];
    v16 = (unsigned int)vertCount;
    do
    {
      v17 = (char *)v10 + v14;
      if ( (unsigned int)v9 >= 3 )
      {
        LODWORD(v37) = 3;
        LODWORD(v30) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
          __debugbreak();
        LODWORD(v38) = 3;
        LODWORD(v31) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v38) )
          __debugbreak();
      }
      v19 = *(float *)((char *)v15 + 4 * v9 - v13 * 4) - *(float *)&v17[4 * v9];
      v18 = v19;
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v37) = 3;
        LODWORD(v30) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
          __debugbreak();
        LODWORD(v39) = 3;
        LODWORD(v32) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v39) )
          __debugbreak();
      }
      v20 = *(float *)&v17[4 * v11] - *v15;
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v37) = 3;
        LODWORD(v30) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
          __debugbreak();
        LODWORD(v40) = 3;
        LODWORD(v33) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v33, v40) )
          __debugbreak();
      }
      v21 = point;
      v22 = point->v[v13] - *(float *)&v17[4 * v11];
      if ( (unsigned int)v9 >= 3 )
      {
        LODWORD(v37) = 3;
        LODWORD(v30) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
          __debugbreak();
        LODWORD(v41) = 3;
        LODWORD(v34) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v41) )
          __debugbreak();
        v21 = point;
      }
      v23 = (float)((float)(v21->v[v9] - *(float *)&v17[4 * v9]) * v20) + (float)(v19 * v22);
      if ( v23 < 0.0 )
      {
        if ( (unsigned int)v11 >= 3 )
        {
          LODWORD(v37) = 3;
          LODWORD(v30) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
            __debugbreak();
          LODWORD(v42) = 3;
          LODWORD(v35) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v42) )
            __debugbreak();
        }
        v24 = centroid;
        v25 = centroid->v[v13] - *(float *)&v17[4 * v11];
        if ( (unsigned int)v9 >= 3 )
        {
          LODWORD(v37) = 3;
          LODWORD(v30) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v37) )
            __debugbreak();
          LODWORD(v43) = 3;
          LODWORD(v36) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v36, v43) )
            __debugbreak();
          v24 = centroid;
        }
        v26 = LODWORD(v24->v[v9]);
        *(float *)&v26 = (float)((float)(v24->v[v9] - *(float *)&v17[4 * v9]) * v20) + (float)(v18 * v25);
        if ( *(float *)&v26 >= 0.0 )
        {
          *(float *)&v26 = *(float *)&v26 / (float)(*(float *)&v26 - v23);
          _XMM1 = v26;
          __asm { vminss  xmm10, xmm1, xmm10 }
          v8 = 1;
        }
      }
      v10 = verts;
      v28 = v15;
      v15 += 3;
      v14 = (char *)v28 - v44;
      --v16;
    }
    while ( v16 );
    v7 = fracToEdge;
  }
  *v7 = *(float *)&_XMM10;
  return v8;
}

/*
==============
ProjectileIntercept
==============
*/
char ProjectileIntercept(const vec3_t *startPos, const vec3_t *startVel, const float projSpeed, const vec3_t *targetPos, const vec3_t *targetVel, vec3_t *intercept)
{
  __int128 v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  __int128 v20; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 

  v7 = LODWORD(targetPos->v[0]);
  v9 = v7;
  *(float *)&v9 = *(float *)&v7 - startPos->v[0];
  v8 = *(float *)&v9;
  v10 = targetVel->v[0] - startVel->v[0];
  v11 = targetVel->v[2] - startVel->v[2];
  v12 = targetVel->v[1] - startVel->v[1];
  v13 = targetPos->v[1] - startPos->v[1];
  v14 = targetPos->v[2] - startPos->v[2];
  v15 = (float)((float)(v12 * v12) + (float)(v10 * v10)) + (float)(v11 * v11);
  v16 = v15 - (float)(projSpeed * projSpeed);
  if ( fsqrt(v15) >= 0.001 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - (float)(projSpeed * projSpeed)) & _xmm) >= 0.001 && (float)((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v13 * v13)) + (float)(v14 * v14)) >= 0.0000010000001 )
  {
    v17 = (float)((float)(*(float *)&v9 * v10) + (float)(v13 * v12)) + (float)(v14 * v11);
    *(float *)&v9 = v17 * 2.0;
    v18 = v9;
    v19 = (float)((float)(v17 * v17) * 4.0) - (float)((float)(v16 * 4.0) * (float)((float)((float)(v8 * v8) + (float)(v13 * v13)) + (float)(v14 * v14)));
    if ( v19 >= 0.0 )
    {
      if ( v19 == 0.0 )
      {
        v20 = LODWORD(FLOAT_N0_5);
        *(float *)&v20 = (float)(-0.5 / v16) * *(float *)&v18;
        _XMM2 = v20;
        __asm { vmaxss  xmm6, xmm2, xmm4 }
        goto LABEL_13;
      }
      v23 = fsqrt(v19);
      v24 = 0.5 / v16;
      v25 = (float)(v23 - *(float *)&v18) * (float)(0.5 / v16);
      v26 = v18 ^ _xmm;
      *(float *)&v26 = (float)(COERCE_FLOAT(v18 ^ _xmm) - v23) * v24;
      _XMM6 = v26;
      if ( v25 >= 0.0 )
      {
        if ( *(float *)&v26 <= 0.0 )
          *(float *)&_XMM6 = v25;
        else
          __asm { vminss  xmm6, xmm6, xmm5 }
        goto LABEL_13;
      }
      if ( *(float *)&v26 >= 0.0 )
      {
LABEL_13:
        if ( *(float *)&_XMM6 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3515, ASSERT_TYPE_ASSERT, "(time >= 0.f)", (const char *)&queryFormat, "time >= 0.f") )
          __debugbreak();
        intercept->v[0] = (float)(v10 * *(float *)&_XMM6) + targetPos->v[0];
        intercept->v[1] = (float)(v12 * *(float *)&_XMM6) + targetPos->v[1];
        intercept->v[2] = (float)(v11 * *(float *)&_XMM6) + targetPos->v[2];
        return 1;
      }
    }
    return 0;
  }
  intercept->v[0] = *(float *)&v7;
  *(_QWORD *)&intercept->y = *(_QWORD *)&targetPos->y;
  return 1;
}

/*
==============
Q_log2
==============
*/
__int64 Q_log2(int val)
{
  __int64 result; 
  int i; 

  result = 0i64;
  for ( i = val >> 1; i; i >>= 1 )
    result = (unsigned int)(result + 1);
  return result;
}

/*
==============
Q_rint
==============
*/
float Q_rint(const float in)
{
  _XMM2 = 0i64;
  __asm { vroundss xmm0, xmm2, xmm1, 1 }
  return *(float *)&_XMM0;
}

/*
==============
QuatEigenTrace
==============
*/
float QuatEigenTrace(const vec4_t *quat)
{
  float v1; 
  float v2; 
  float result; 

  v1 = (float)((float)(quat->v[1] * quat->v[1]) + (float)(quat->v[0] * quat->v[0])) + (float)(quat->v[2] * quat->v[2]);
  v2 = (float)(quat->v[3] * quat->v[3]) + v1;
  result = 0.0;
  if ( v2 != 0.0 )
    return v1 / v2;
  return result;
}

/*
==============
QuatLerp
==============
*/
void QuatLerp(const vec4_t *qa, const vec4_t *qb, float frac, vec4_t *out)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  v4 = qb->v[0];
  if ( (float)((float)((float)((float)(qb->v[0] * qa->v[0]) + (float)(qb->v[1] * qa->v[1])) + (float)(qb->v[2] * qa->v[2])) + (float)(qb->v[3] * qa->v[3])) < 0.0 )
  {
    out->v[0] = COERCE_FLOAT(LODWORD(v4) ^ _xmm);
    out->v[1] = COERCE_FLOAT(LODWORD(qb->v[1]) ^ _xmm);
    out->v[2] = COERCE_FLOAT(LODWORD(qb->v[2]) ^ _xmm);
    out->v[3] = COERCE_FLOAT(LODWORD(qb->v[3]) ^ _xmm);
    v6 = out->v[1];
    out->v[0] = (float)((float)(out->v[0] - qa->v[0]) * frac) + qa->v[0];
    v7 = v6 - qa->v[1];
    v8 = out->v[2];
    out->v[1] = (float)(v7 * frac) + qa->v[1];
    v9 = v8 - qa->v[2];
    v5 = out->v[3];
    out->v[2] = (float)(v9 * frac) + qa->v[2];
  }
  else
  {
    out->v[0] = (float)((float)(v4 - qa->v[0]) * frac) + qa->v[0];
    out->v[1] = (float)((float)(qb->v[1] - qa->v[1]) * frac) + qa->v[1];
    out->v[2] = (float)((float)(qb->v[2] - qa->v[2]) * frac) + qa->v[2];
    v5 = qb->v[3];
  }
  out->v[3] = (float)((float)(v5 - qa->v[3]) * frac) + qa->v[3];
}

/*
==============
QuatRatioEigenTrace
==============
*/
float QuatRatioEigenTrace(const vec4_t *quat1, const vec4_t *quat2)
{
  float result; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  vec4_t in2; 
  vec4_t out; 

  if ( quat2->v[0] == quat1->v[0] && quat2->v[1] == quat1->v[1] && quat2->v[2] == quat1->v[2] && quat2->v[3] == quat1->v[3] )
    return 0.0;
  LODWORD(v3) = LODWORD(quat2->v[1]) ^ _xmm;
  LODWORD(in2.v[0]) = LODWORD(quat2->v[0]) ^ _xmm;
  v4 = quat2->v[2];
  in2.v[1] = v3;
  in2.v[3] = quat2->v[3];
  LODWORD(in2.v[2]) = LODWORD(v4) ^ _xmm;
  QuatMultiply(quat1, &in2, &out);
  v5 = (float)((float)(out.v[1] * out.v[1]) + (float)(out.v[0] * out.v[0])) + (float)(out.v[2] * out.v[2]);
  v6 = (float)(out.v[3] * out.v[3]) + v5;
  result = 0.0;
  if ( v6 != 0.0 )
    return v5 / v6;
  return result;
}

/*
==============
QuatSlerpLimited
==============
*/
void QuatSlerpLimited(const vec4_t *from, const vec4_t *to, float limit, vec4_t *result)
{
  float v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  _XMM8 = 0i64;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( limit <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1181, ASSERT_TYPE_ASSERT, "( limit ) > ( 0.f )", "%s > %s\n\t%g, %g", "limit", "0.f", limit, *(double *)&_XMM11) )
    __debugbreak();
  v10 = to->v[0];
  _XMM0 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm1, xmm8, xmm3
    vblendvps xmm14, xmm0, xmm13, xmm1
  }
  v14 = *(float *)&_XMM14 * (float)((float)((float)((float)(to->v[0] * from->v[0]) + (float)(from->v[1] * to->v[1])) + (float)(to->v[2] * from->v[2])) + (float)(to->v[3] * from->v[3]));
  if ( v14 < 1.0 )
  {
    v15 = acosf_0(v14);
    v16 = v15 * 2.0;
    v17 = v15;
    if ( (float)(v15 * 2.0) >= limit )
    {
      if ( (float)(v15 * 2.0) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1204, ASSERT_TYPE_ASSERT, "( theta ) != ( 0.f )", "%s != %s\n\t%g, %g", "theta", "0.f", v16, *(double *)&_XMM11) )
        __debugbreak();
      v18 = limit / v16;
      if ( v14 <= 0.94999999 )
      {
        v20 = (float)(limit / v16) * v17;
        v19 = sinf_0(v17 - v20);
        v18 = sinf_0(v20);
      }
      else
      {
        v19 = 1.0 - v18;
      }
      result->v[0] = (float)(v19 * from->v[0]) + (float)((float)(v18 * *(float *)&_XMM14) * to->v[0]);
      result->v[1] = (float)(v19 * from->v[1]) + (float)((float)(v18 * *(float *)&_XMM14) * to->v[1]);
      result->v[2] = (float)((float)(v18 * *(float *)&_XMM14) * to->v[2]) + (float)(v19 * from->v[2]);
      result->v[3] = (float)((float)(v18 * *(float *)&_XMM14) * to->v[3]) + (float)(v19 * from->v[3]);
      Vec4Normalize(result);
    }
    else
    {
      result->v[0] = v10;
      result->v[1] = to->v[1];
      result->v[2] = to->v[2];
      result->v[3] = to->v[3];
    }
  }
  else
  {
    result->v[0] = v10;
    result->v[1] = to->v[1];
    result->v[2] = to->v[2];
    result->v[3] = to->v[3];
  }
}

/*
==============
QuatToAngleRadAxis
==============
*/
void QuatToAngleRadAxis(const vec4_t *quat, float *outRadians, vec3_t *outAxis)
{
  float v6; 
  float v7; 
  float v8; 

  if ( quat->v[3] > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1478, ASSERT_TYPE_ASSERT, "(quat[3] <= 1.f)", (const char *)&queryFormat, "quat[3] <= 1.f") )
    __debugbreak();
  *outRadians = acosf_0(quat->v[3]) * 2.0;
  v6 = quat->v[0];
  v7 = fsqrt(1.0 - (float)(quat->v[3] * quat->v[3]));
  if ( v7 >= 0.001 )
  {
    outAxis->v[0] = v6 * (float)(1.0 / v7);
    outAxis->v[1] = (float)(1.0 / v7) * quat->v[1];
    v8 = (float)(1.0 / v7) * quat->v[2];
  }
  else
  {
    outAxis->v[0] = v6;
    outAxis->v[1] = quat->v[1];
    v8 = quat->v[2];
  }
  outAxis->v[2] = v8;
}

/*
==============
QuatTrans_Inverse
==============
*/
void QuatTrans_Inverse(const vec4_t *quat, const vec3_t *trans, vec4_t *outInvQuat, vec3_t *outInvTrans)
{
  float v5; 
  float v6; 
  float v7; 

  outInvQuat->v[0] = COERCE_FLOAT(LODWORD(quat->v[0]) ^ _xmm);
  outInvQuat->v[1] = COERCE_FLOAT(LODWORD(quat->v[1]) ^ _xmm);
  outInvQuat->v[2] = COERCE_FLOAT(LODWORD(quat->v[2]) ^ _xmm);
  outInvQuat->v[3] = quat->v[3];
  QuatTransform(outInvQuat, trans, outInvTrans);
  v5 = outInvTrans->v[1];
  outInvTrans->v[0] = COERCE_FLOAT(LODWORD(outInvTrans->v[0]) ^ _xmm);
  LODWORD(v6) = LODWORD(v5) ^ _xmm;
  v7 = outInvTrans->v[2];
  outInvTrans->v[1] = v6;
  outInvTrans->v[2] = COERCE_FLOAT(LODWORD(v7) ^ _xmm);
}

/*
==============
QuatTrans_MultiplyEquals
==============
*/
void QuatTrans_MultiplyEquals(vec4_t *inoutQuat1, vec3_t *inoutTrans1, const vec4_t *quat2, const vec3_t *trans2)
{
  float v8; 
  float v9; 
  vec4_t v10; 
  vec3_t v11; 
  vec4_t out; 

  QuatMultiply(inoutQuat1, quat2, &out);
  QuatTransform(quat2, inoutTrans1, &v11);
  v8 = v11.v[1];
  inoutTrans1->v[0] = v11.v[0] + trans2->v[0];
  v9 = v11.v[2];
  inoutTrans1->v[1] = v8 + trans2->v[1];
  v10 = out;
  inoutTrans1->v[2] = v9 + trans2->v[2];
  *inoutQuat1 = v10;
}

/*
==============
QuatTrans_TransformPoint
==============
*/
void QuatTrans_TransformPoint(const vec4_t *quat, const vec3_t *trans, const vec3_t *point, vec3_t *outTransformedPoint)
{
  float v6; 
  float v7; 
  vec3_t out; 

  QuatTransform(quat, point, &out);
  v6 = out.v[1];
  outTransformedPoint->v[0] = out.v[0] + trans->v[0];
  v7 = out.v[2];
  outTransformedPoint->v[1] = v6 + trans->v[1];
  outTransformedPoint->v[2] = v7 + trans->v[2];
}

/*
==============
RotateAxisAroundVectors
==============
*/
void RotateAxisAroundVectors(const tmat33_t<vec3_t> *inAxis, const tmat33_t<vec3_t> *aroundAxes, const vec3_t *angles, tmat33_t<vec3_t> *outAxis)
{
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> out; 

  AxisCopy(inAxis, outAxis);
  if ( COERCE_FLOAT(LODWORD(angles->v[0]) & _xmm) > 0.0 )
  {
    AxisCopy(outAxis, &out);
    MatrixRotationRad(&mat, &aroundAxes->m[1], angles->v[0] * 0.017453292);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
  if ( COERCE_FLOAT(LODWORD(angles->v[1]) & _xmm) > 0.0 )
  {
    AxisCopy(outAxis, &out);
    MatrixRotationRad(&mat, &aroundAxes->m[2], angles->v[1] * 0.017453292);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
  if ( COERCE_FLOAT(LODWORD(angles->v[2]) & _xmm) > 0.0 )
  {
    AxisCopy(outAxis, &out);
    MatrixRotationRad(&mat, aroundAxes->m, angles->v[2] * 0.017453292);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
}

/*
==============
RotatePointAroundPoint
==============
*/
void RotatePointAroundPoint(vec3_t *dst, const vec3_t *point, const vec3_t *pivotPoint, const tmat33_t<vec3_t> *rotation)
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

  v4 = rotation->m[0].v[1];
  v5 = rotation->m[1].v[1];
  v6 = rotation->m[2].v[1];
  v7 = rotation->m[0].v[2];
  v8 = rotation->m[1].v[2];
  v9 = rotation->m[2].v[2];
  v10 = point->v[1] - pivotPoint->v[1];
  v11 = point->v[0] - pivotPoint->v[0];
  v12 = point->v[2] - pivotPoint->v[2];
  dst->v[0] = (float)((float)((float)(v10 * rotation->m[1].v[0]) + (float)(v11 * rotation->m[0].v[0])) + (float)(v12 * rotation->m[2].v[0])) + pivotPoint->v[0];
  dst->v[1] = (float)((float)((float)(v11 * v4) + (float)(v10 * v5)) + (float)(v12 * v6)) + pivotPoint->v[1];
  dst->v[2] = (float)((float)((float)(v11 * v7) + (float)(v10 * v8)) + (float)(v12 * v9)) + pivotPoint->v[2];
}

/*
==============
RotationToYaw
==============
*/
float RotationToYaw(const vec2_t *rot)
{
  float v2; 
  float v3; 

  v2 = rot->v[0] * rot->v[0];
  v3 = (float)(rot->v[1] * rot->v[1]) + v2;
  if ( v3 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1351, ASSERT_TYPE_ASSERT, "(r)", (const char *)&queryFormat, "r") )
    __debugbreak();
  return atan2f_0((float)(rot->v[1] * rot->v[0]) * (float)(2.0 / v3), 1.0 - (float)((float)(2.0 / v3) * v2)) * 57.295776;
}

/*
==============
SH4VisToConeAngle
==============
*/
void SH4VisToConeAngle(const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos)
{
  float v6; 
  float v7; 
  unsigned __int128 v8; 
  unsigned __int128 v9; 
  float v13; 
  float v14; 
  float v15; 

  v6 = visibilityData[2];
  LODWORD(v7) = *((_DWORD *)visibilityData + 3) ^ _xmm;
  v8 = *((unsigned int *)visibilityData + 1) ^ (unsigned __int128)_xmm;
  v9 = v8;
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v6 * v6));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v13 = 1.0 / *(float *)&_XMM0;
  v14 = *visibilityData * 0.88622695;
  v15 = *(float *)&v8 * v13;
  if ( *(float *)&v9 <= 0.0 || v14 <= 0.0 )
  {
    *x = normal->v[0];
    *y = normal->v[1];
    *z = normal->v[2];
    *angleCos = 1.0;
  }
  else
  {
    *x = v7 * v13;
    *y = v15;
    *z = v6 * v13;
    *angleCos = cosf_0(v14);
  }
}

/*
==============
SegmentPointClosestToPoint
==============
*/
void SegmentPointClosestToPoint(const vec3_t *orig, const vec3_t *segMidPoint, const vec3_t *segHalfDir, vec3_t *pointOut)
{
  double v7; 

  v7 = I_fclamp((float)((float)((float)((float)(orig->v[1] - segMidPoint->v[1]) * segHalfDir->v[1]) + (float)((float)(orig->v[0] - segMidPoint->v[0]) * segHalfDir->v[0])) + (float)((float)(orig->v[2] - segMidPoint->v[2]) * segHalfDir->v[2])) / (float)((float)((float)(segHalfDir->v[0] * segHalfDir->v[0]) + (float)(segHalfDir->v[1] * segHalfDir->v[1])) + (float)(segHalfDir->v[2] * segHalfDir->v[2])), -1.0, 1.0);
  pointOut->v[0] = (float)(*(float *)&v7 * segHalfDir->v[0]) + segMidPoint->v[0];
  pointOut->v[1] = (float)(*(float *)&v7 * segHalfDir->v[1]) + segMidPoint->v[1];
  pointOut->v[2] = (float)(*(float *)&v7 * segHalfDir->v[2]) + segMidPoint->v[2];
}

/*
==============
SignedAngleBetween
==============
*/
float SignedAngleBetween(const vec3_t *a, const vec3_t *b, const vec3_t *reference)
{
  double v6; 
  float v7; 
  float result; 
  vec3_t cross; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1851, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1852, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(a->v[0] * a->v[0]) + (float)(a->v[1] * a->v[1])) + (float)(a->v[2] * a->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(b->v[0] * b->v[0]) + (float)(b->v[1] * b->v[1])) + (float)(b->v[2] * b->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1841, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
    __debugbreak();
  v6 = I_fclamp((float)((float)(b->v[0] * a->v[0]) + (float)(b->v[1] * a->v[1])) + (float)(b->v[2] * a->v[2]), -1.0, 1.0);
  v7 = acosf_0(*(float *)&v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 * 57.295776) & _xmm) <= 0.000001 )
    return v7 * 57.295776;
  Vec3Cross(a, b, &cross);
  if ( (float)((float)((float)(cross.v[1] * reference->v[1]) + (float)(cross.v[0] * reference->v[0])) + (float)(cross.v[2] * reference->v[2])) >= 0.0 )
    return v7 * 57.295776;
  LODWORD(result) = COERCE_UNSIGNED_INT(v7 * 57.295776) ^ _xmm;
  return result;
}

/*
==============
SlerpAngles
==============
*/
void SlerpAngles(const vec3_t *start, const vec3_t *end, const float fraction, vec3_t *outAngles)
{
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 

  AnglesToQuat(start, &quat);
  AnglesToQuat(end, &to);
  QuatSlerp(&quat, &to, fraction, &result);
  UnitQuatToAngles(&result, outAngles);
}

/*
==============
TanHalfAngles
==============
*/
void TanHalfAngles(float fovdeg_x, float viewAspect, float *tanHalfFovX, float *tanHalfFovY)
{
  float v6; 

  v6 = tanf_0(fovdeg_x * 0.0087266462);
  *tanHalfFovX = (float)(v6 * 0.75) * viewAspect;
  *tanHalfFovY = v6 * 0.75;
}

/*
==============
TrajectoryCalculateExitAngle
==============
*/
float TrajectoryCalculateExitAngle(const float velocity, const float gravity, const float horizontalDistance, const float verticalDistance)
{
  float v4; 

  v4 = (float)((float)((float)(velocity * velocity) * velocity) * velocity) - (float)((float)((float)((float)((float)(verticalDistance * 2.0) * velocity) * velocity) + (float)((float)(gravity * horizontalDistance) * horizontalDistance)) * gravity);
  if ( v4 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3282, ASSERT_TYPE_ASSERT, "(tempValue >= 0)", "%s\n\tThe given velocity is unable to reach the target.  Increase the velocity.", "tempValue >= 0") )
    __debugbreak();
  return atanf_0((float)((float)(velocity * velocity) - fsqrt(v4)) / (float)(gravity * horizontalDistance)) * 57.295776;
}

/*
==============
TrajectoryCalculateInitialVelocity
==============
*/
void TrajectoryCalculateInitialVelocity(const vec3_t *startPos, const vec3_t *endPos, const vec3_t *gravityVector, const float totalTime, vec3_t *returnVector)
{
  float v8; 

  if ( totalTime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3220, ASSERT_TYPE_ASSERT, "(totalTime > 0.0)", (const char *)&queryFormat, "totalTime > 0.0") )
    __debugbreak();
  v8 = (float)(totalTime * 0.5) * totalTime;
  returnVector->v[0] = (float)((float)(endPos->v[0] - startPos->v[0]) - (float)(v8 * gravityVector->v[0])) * (float)(1.0 / totalTime);
  returnVector->v[1] = (float)((float)(endPos->v[1] - startPos->v[1]) - (float)(v8 * gravityVector->v[1])) * (float)(1.0 / totalTime);
  returnVector->v[2] = (float)((float)(endPos->v[2] - startPos->v[2]) - (float)(v8 * gravityVector->v[2])) * (float)(1.0 / totalTime);
}

/*
==============
TrajectoryCalculateMinimumVelocity
==============
*/
float TrajectoryCalculateMinimumVelocity(const vec3_t *startPos, const vec3_t *endPos, const float gravity)
{
  __int128 v3; 
  float v4; 
  float v6; 

  v3 = LODWORD(endPos->v[1]);
  *(float *)&v3 = endPos->v[1] - startPos->v[1];
  v4 = endPos->v[2] - startPos->v[2];
  *(double *)&v3 = (float)((float)((float)((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)((float)(endPos->v[0] - startPos->v[0]) * (float)(endPos->v[0] - startPos->v[0]))) * (float)(gravity * gravity)) * 4.0) + (float)((float)((float)((float)(gravity * gravity) * 4.0) * v4) * v4));
  _XMM1 = v3;
  v6 = gravity * v4;
  __asm { vsqrtsd xmm2, xmm1, xmm1 }
  *((_QWORD *)&v3 + 1) = *((_QWORD *)&_XMM2 + 1);
  *(double *)&v3 = *(double *)&_XMM2 * 0.5 + v6;
  _XMM2 = v3;
  __asm
  {
    vsqrtsd xmm3, xmm2, xmm2
    vcvtsd2ss xmm0, xmm3, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
TrajectoryComputeDeltaHeightAtTime
==============
*/
float TrajectoryComputeDeltaHeightAtTime(const float verticalVelocity, const float gravity, const float time)
{
  return (float)(verticalVelocity - (float)((float)(gravity * 0.5) * time)) * time;
}

/*
==============
TrajectoryEstimateDesiredInAirTime
==============
*/
float TrajectoryEstimateDesiredInAirTime(const vec3_t *startPos, const vec3_t *endPos, const float velocity, const float gravity)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  v4 = endPos->v[1] - startPos->v[1];
  v5 = fsqrt((float)(v4 * v4) + (float)((float)(endPos->v[0] - startPos->v[0]) * (float)(endPos->v[0] - startPos->v[0])));
  v6 = (float)((float)((float)(velocity * velocity) * velocity) * velocity) - (float)((float)((float)((float)((float)((float)(endPos->v[2] - startPos->v[2]) * 2.0) * velocity) * velocity) + (float)((float)(v5 * gravity) * v5)) * gravity);
  if ( v6 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3282, ASSERT_TYPE_ASSERT, "(tempValue >= 0)", "%s\n\tThe given velocity is unable to reach the target.  Increase the velocity.", "tempValue >= 0") )
    __debugbreak();
  v7 = atanf_0((float)((float)(velocity * velocity) - fsqrt(v6)) / (float)(v5 * gravity)) * 0.99999994;
  return v5 / (float)(cosf_0(v7) * velocity);
}

/*
==============
TriDiagQL
==============
*/
void TriDiagQL(tmat33_t<vec3_t> *V, vec3_t *d, vec3_t *e)
{
  float *v3; 
  int v4; 
  vec3_t *v5; 
  bool v6; 
  float v7; 
  vec3_t *v8; 
  unsigned int v9; 
  unsigned __int128 v10; 
  __int64 v11; 
  bool v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  __int64 v17; 
  unsigned __int128 v19; 
  bool v21; 
  unsigned int v22; 
  __int64 v23; 
  float v24; 
  __int128 v25; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  float *v36; 
  bool v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  int v42; 
  unsigned int v43; 
  float v44; 
  float v45; 
  unsigned int v46; 
  float *v47; 
  char *v48; 
  signed __int64 v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  float v53; 
  float *v54; 
  float v55; 
  float v56; 
  float *v57; 
  char *v58; 
  unsigned int v59; 
  bool v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  unsigned int v66; 
  __int64 v67; 
  float *v68; 
  unsigned int v69; 
  __int64 v70; 
  float v71; 
  int v72; 
  unsigned int v73; 
  __int64 v74; 
  vec3_t *v75; 
  bool v76; 
  float v77; 
  unsigned __int64 v78; 
  unsigned int v79; 
  float *v80; 
  signed __int64 v81; 
  bool v82; 
  float v83; 
  float v84; 
  __int64 v85; 
  __int64 v86; 
  float v87; 
  unsigned int v88; 
  __int64 v89; 
  vec3_t *v90; 
  float v91; 
  unsigned int v92; 
  float v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  signed __int64 v97; 
  char *v98; 
  int v102; 

  v3 = &e->v[1];
  v4 = 1;
  v5 = d;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    v7 = *v3;
    if ( (unsigned int)(v4 - 1) >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v4 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    *(v3++ - 1) = v7;
    v6 = (unsigned int)++v4 < 3;
  }
  while ( v4 < 3 );
  v8 = e;
  v9 = 0;
  v10 = (unsigned int)_xmm;
  v11 = 0i64;
  v88 = 0;
  e->v[2] = 0.0;
  v12 = 1;
  v13 = 0.0;
  v14 = 0.0;
  v94 = 0i64;
  do
  {
    if ( !v12 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    LODWORD(v15) = LODWORD(v5->v[v11]) & v10;
    if ( v9 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    v16 = v9;
    v17 = v11;
    v19 = LODWORD(v8->v[v11]) & v10;
    *(float *)&v19 = COERCE_FLOAT(LODWORD(v8->v[v11]) & v10) + v15;
    _XMM0 = v19;
    __asm { vmaxss  xmm8, xmm0, xmm8 }
    v93 = *(float *)&_XMM8;
    v21 = v9 < 3;
    do
    {
      if ( !v21 )
      {
        LODWORD(v86) = 3;
        LODWORD(v85) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
          __debugbreak();
      }
      if ( COERCE_FLOAT(LODWORD(v8->v[v17]) & v10) <= (float)(*(float *)&_XMM8 * 0.00000095367432) )
        break;
      ++v16;
      ++v17;
      v21 = (unsigned int)v16 < 3;
    }
    while ( v16 < 3 );
    v96 = v17;
    v102 = v16;
    if ( v16 > (int)v9 )
    {
      v22 = v9 + 1;
      v23 = v17 - 1;
      v92 = v9 + 1;
      v89 = v17 - 1;
      do
      {
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v24 = v5->v[v11];
        if ( v22 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v25 = LODWORD(v5->v[v11 + 1]);
        *(float *)&v25 = (float)(v5->v[v11 + 1] - v24) * (float)(0.5 / v8->v[v11]);
        _XMM6 = v25;
        *(float *)&v25 = fsqrt((float)(*(float *)&v25 * *(float *)&v25) + 1.0);
        _XMM3 = v25;
        __asm
        {
          vcmpltss xmm0, xmm6, xmm13
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v30 = *(float *)&_XMM6 + *(float *)&_XMM0;
        v31 = v8->v[v11] / v30;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v5->v[v11] = v31;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v32 = v30 * v8->v[v11];
        if ( v22 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v5->v[v11 + 1] = v32;
        if ( v22 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v33 = v5->v[v11 + 1];
        v91 = v33;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v34 = v24 - v5->v[v11];
        v35 = v9 + 2;
        if ( (int)(v9 + 2) < 3 )
        {
          v36 = &v5->v[v11 + 2];
          v37 = v9 + 2 < 3;
          do
          {
            if ( !v37 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v35;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            *v36 = *v36 - v34;
            ++v36;
            v37 = (unsigned int)++v35 < 3;
          }
          while ( v35 < 3 );
          v11 = v94;
          v23 = v17 - 1;
        }
        v87 = v14 + v34;
        if ( (unsigned int)v16 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v38 = v5->v[v17];
        v39 = FLOAT_1_0;
        v40 = FLOAT_1_0;
        v41 = FLOAT_1_0;
        if ( v22 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v8 = e;
        v42 = v16 - 1;
        v43 = v16 - 1;
        v44 = 0.0;
        v45 = e->v[v11 + 1];
        if ( v23 >= v11 )
        {
          v46 = v42 + 1;
          v47 = &e->v[v23];
          v48 = (char *)((char *)e - (char *)v5);
          v49 = (char *)v5 - (char *)e;
          v98 = (char *)((char *)e - (char *)v5);
          v50 = 4i64 - (_QWORD)e;
          v97 = v49;
          v95 = v89 - v11 + 1;
          do
          {
            v41 = v40;
            v40 = v39;
            v13 = v44;
            if ( v43 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v51 = v39 * *v47;
            v52 = v39 * v38;
            if ( v43 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v53 = fsqrt((float)(*v47 * *v47) + (float)(v38 * v38));
            if ( v46 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v46;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v54 = (float *)((char *)v47 + v49 + 4);
            *(float *)&v48[(_QWORD)v54] = v44 * v53;
            if ( v43 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v44 = (float)(1.0 / v53) * *v47;
            v55 = (float)(1.0 / v53) * v38;
            v39 = v55;
            if ( v43 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v38 = (float)(v55 * *(float *)((char *)v47 + v49)) - (float)(v44 * v51);
            if ( v43 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v56 = (float)((float)((float)(v44 * *(float *)((char *)v47 + v49)) + (float)(v55 * v51)) * v44) + v52;
            if ( v46 >= 3 )
            {
              LODWORD(v86) = 3;
              LODWORD(v85) = v46;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                __debugbreak();
            }
            v57 = (float *)((char *)v47 + (char *)V - (char *)e);
            *v54 = v56;
            v58 = (char *)e + v50;
            v59 = 0;
            v60 = 1;
            do
            {
              if ( !v60 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v59;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              if ( v46 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v46;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              v61 = *(float *)&v58[(_QWORD)v57];
              if ( v59 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v59;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              if ( v43 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v43;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              v62 = (float)(v39 * v61) + (float)(v44 * *v57);
              if ( v59 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v59;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              if ( v46 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v46;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              *(float *)&v58[(_QWORD)v57] = v62;
              if ( v59 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v59;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              if ( v43 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v43;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              v63 = (float)(v39 * *v57) - (float)(v44 * v61);
              if ( v59 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v59;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              if ( v43 >= 3 )
              {
                LODWORD(v86) = 3;
                LODWORD(v85) = v43;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
                  __debugbreak();
              }
              *v57 = v63;
              v57 += 3;
              v60 = ++v59 < 3;
            }
            while ( (int)v59 < 3 );
            v49 = v97;
            --v43;
            v48 = v98;
            --v46;
            v50 = 4i64 - (_QWORD)e;
            --v47;
            --v95;
          }
          while ( v95 );
          v33 = v91;
          v9 = v88;
          v11 = v94;
          v8 = e;
          v5 = d;
          v22 = v92;
          v17 = v96;
          v23 = v89;
        }
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        LODWORD(v64) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v13 * v44) * v41) * v45) * v8->v[v11]) / v33) ^ _xmm;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v8->v[v11] = v44 * v64;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v5->v[v11] = v39 * v64;
        if ( v9 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v10 = (unsigned int)_xmm;
        v14 = v87;
        v16 = v102;
        v13 = 0.0;
      }
      while ( COERCE_FLOAT(LODWORD(v8->v[v11]) & _xmm) > (float)(v93 * 0.00000095367432) );
    }
    if ( v9 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    v65 = v14 + v5->v[v11];
    if ( v9 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    v5->v[v11] = v65;
    if ( v9 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    ++v9;
    v8->v[v11++] = 0.0;
    v88 = v9;
    v94 = v11;
    v12 = v9 < 3;
  }
  while ( (int)v9 < 3 );
  v66 = 0;
  v90 = v5;
  v67 = 0i64;
  v68 = (float *)v5;
  do
  {
    v69 = v66;
    v70 = v67;
    if ( v66 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v85) = v66;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
        __debugbreak();
    }
    v71 = *v68;
    v72 = v66 + 1;
    ++v67;
    v73 = v66 + 1;
    v74 = v67;
    if ( (int)(v66 + 1) < 3 )
    {
      v75 = d;
      v76 = v73 < 3;
      do
      {
        if ( !v76 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
          v75 = d;
        }
        if ( v71 > v75->v[v74] )
        {
          v69 = v73;
          v70 = v74;
          if ( v73 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v73;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
            v75 = d;
          }
          v71 = v75->v[v74];
        }
        ++v73;
        ++v74;
        v76 = v73 < 3;
      }
      while ( (int)v73 < 3 );
      if ( v69 != v66 )
      {
        if ( v66 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v77 = *v68;
        if ( v69 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v69;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v78 = 4 * v70;
        d->v[v78 / 4] = v77;
        if ( v66 >= 3 )
        {
          LODWORD(v86) = 3;
          LODWORD(v85) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
            __debugbreak();
        }
        v79 = 0;
        v80 = (float *)((char *)V + v78);
        v81 = (char *)&v68[v78 / 0xFFFFFFFFFFFFFFFCui64] - (char *)d;
        *v68 = v71;
        v82 = 1;
        do
        {
          if ( !v82 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          if ( v66 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v66;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          v83 = *(float *)((char *)v80 + v81);
          if ( v79 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          if ( v69 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v69;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          v84 = *v80;
          if ( v79 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          if ( v66 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v66;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          *(float *)((char *)v80 + v81) = v84;
          if ( v79 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          if ( v69 >= 3 )
          {
            LODWORD(v86) = 3;
            LODWORD(v85) = v69;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v85, v86) )
              __debugbreak();
          }
          *v80 = v83;
          v80 += 3;
          v82 = ++v79 < 3;
        }
        while ( (int)v79 < 3 );
        v68 = (float *)v90;
        v72 = v66 + 1;
      }
    }
    ++v68;
    v66 = v72;
    v90 = (vec3_t *)v68;
  }
  while ( v72 < 2 );
}

/*
==============
TriDiagReduce
==============
*/
void TriDiagReduce(tmat33_t<vec3_t> *V, vec3_t *d, vec3_t *e)
{
  int v3; 
  vec3_t *v4; 
  vec3_t *v5; 
  vec3_t *v6; 
  signed __int64 v7; 
  bool v8; 
  float v9; 
  int v10; 
  __int64 v11; 
  unsigned int v13; 
  __int64 v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  unsigned int v19; 
  __int64 v20; 
  float v21; 
  __int128 v22; 
  unsigned int v23; 
  __int64 v24; 
  float v26; 
  unsigned int v29; 
  __int64 i; 
  unsigned int v31; 
  __int64 v32; 
  tmat33_t<vec3_t> *v33; 
  char *v34; 
  signed __int64 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  int v39; 
  unsigned int v40; 
  float *v41; 
  float *v42; 
  __int128 v43; 
  float v44; 
  float *v45; 
  unsigned int v46; 
  signed __int64 v47; 
  __int64 v48; 
  __int128 v49; 
  float v50; 
  __int128 v51; 
  vec3_t *v52; 
  unsigned int v53; 
  float v54; 
  __int64 v55; 
  float v56; 
  unsigned int v57; 
  __int64 v58; 
  vec3_t *v59; 
  signed __int64 v60; 
  vec3_t *v61; 
  signed __int64 v62; 
  float v63; 
  unsigned int v64; 
  float v65; 
  float *v66; 
  float *v67; 
  float v68; 
  float v69; 
  __int64 v70; 
  int v71; 
  float v72; 
  unsigned int v73; 
  __int64 v74; 
  float *v75; 
  char *v76; 
  char *v77; 
  _DWORD *v78; 
  float v79; 
  tmat33_t<vec3_t> *v80; 
  unsigned int v81; 
  __int64 v82; 
  signed __int64 v83; 
  tmat33_t<vec3_t> *v84; 
  float *v85; 
  float v86; 
  unsigned int v87; 
  float v88; 
  unsigned int v89; 
  __int64 v90; 
  float *v91; 
  float v92; 
  unsigned int v93; 
  signed __int64 v94; 
  __int64 v95; 
  tmat33_t<vec3_t> *p_y; 
  float *v97; 
  unsigned int v98; 
  __int128 v99; 
  __int64 v100; 
  float v101; 
  __int128 v102; 
  float *v103; 
  unsigned int v104; 
  __int64 v105; 
  float v106; 
  bool v107; 
  unsigned int v108; 
  float *v109; 
  __int64 v110; 
  unsigned int v111; 
  float *v112; 
  float v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  int v132; 
  tmat33_t<vec3_t> *v133; 
  __int64 v134; 
  __int64 v135; 
  tmat33_t<vec3_t> *v136; 
  __int64 v137; 
  float *v138; 
  unsigned int v139; 
  vec3_t *v140; 
  __int64 v141; 
  signed __int64 v142; 
  __int64 v143; 
  tmat33_t<vec3_t> *v144; 
  __int64 v145; 
  char *v146; 
  signed __int64 v147; 
  vec3_t *v148; 
  int v152; 
  unsigned int v153; 

  v3 = 0;
  v4 = d;
  v5 = d;
  v6 = e;
  v148 = &V->m[2];
  v7 = (char *)&V->row2 - (char *)d;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v9 = *(float *)((char *)v4->v + v7);
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v4->v[0] = v9;
    v4 = (vec3_t *)((char *)v4 + 4);
    v8 = (unsigned int)++v3 < 3;
  }
  while ( v3 < 3 );
  v10 = 2;
  v132 = 2;
  v11 = 2i64;
  v137 = 2i64;
  _XMM13 = 0i64;
  while ( 1 )
  {
    v13 = 0;
    v14 = 0i64;
    v15 = 0i64;
    v16 = 0i64;
    if ( v11 > 0 )
    {
      do
      {
        if ( v13 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        v17 = v5->v[v14++];
        ++v13;
        v18 = v15;
        *(float *)&v18 = *(float *)&v15 + COERCE_FLOAT(LODWORD(v17) & _xmm);
        v15 = v18;
      }
      while ( v14 < v11 );
      if ( *(float *)&v18 != 0.0 )
      {
        v19 = 0;
        v20 = 0i64;
        do
        {
          if ( v19 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          v5->v[v20] = (float)(1.0 / *(float *)&v15) * v5->v[v20];
          if ( v19 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
            LODWORD(v124) = 3;
            LODWORD(v115) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v115, v124) )
              __debugbreak();
          }
          v21 = v5->v[v20++];
          ++v19;
          v22 = v16;
          *(float *)&v22 = *(float *)&v16 + (float)(v21 * v21);
          v16 = v22;
        }
        while ( v20 < v11 );
        v23 = v10 - 1;
        v152 = v10 - 1;
        v24 = v11 - 1;
        v134 = v11 - 1;
        if ( (unsigned int)(v10 - 1) >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        *(float *)&v22 = fsqrt(*(float *)&v22);
        _XMM2 = v22;
        v26 = d->v[v24];
        __asm
        {
          vcmpltss xmm0, xmm13, xmm8
          vblendvps xmm6, xmm2, xmm1, xmm0
        }
        if ( (unsigned int)v10 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        v6->v[v11] = *(float *)&_XMM6 * *(float *)&v15;
        *(float *)&v16 = *(float *)&v16 - (float)(*(float *)&_XMM6 * v26);
        if ( v23 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        d->v[v24] = v26 - *(float *)&_XMM6;
        v29 = 0;
        for ( i = 0i64; i < v11; ++i )
        {
          if ( v29 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v29;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          v6->v[i] = 0.0;
          ++v29;
        }
        v31 = 0;
        if ( v10 > 0 )
        {
          v32 = 12i64;
          v33 = V;
          v144 = V;
          v140 = v6;
          v34 = (char *)V + 4 * v11 - 12;
          v35 = (char *)d - (char *)e;
          v146 = v34;
          do
          {
            if ( v31 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v36 = *(unsigned int *)((char *)v6->v + v35);
            if ( v31 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            if ( (unsigned int)v132 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v132;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            *(float *)&v34[v32] = *(float *)&v36;
            if ( v31 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
              LODWORD(v125) = 3;
              LODWORD(v116) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v116, v125) )
                __debugbreak();
              LODWORD(v126) = 3;
              LODWORD(v117) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v117, v126) )
                __debugbreak();
            }
            v37 = v36;
            *(float *)&v37 = (float)(*(float *)&v36 * v33->m[0].v[0]) + v6->v[0];
            v38 = v37;
            v39 = v31 + 1;
            v40 = v31 + 1;
            if ( (int)(v31 + 1) <= v152 )
            {
              v41 = &v6->v[1];
              v42 = (float *)((char *)V + v32 + (char *)v6 - (char *)e);
              do
              {
                if ( v40 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v40;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                if ( v31 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v31;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                if ( v40 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v40;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                v43 = v38;
                *(float *)&v43 = *(float *)&v38 + (float)(*(float *)((char *)v41 + v35) * *v42);
                v38 = v43;
                if ( v40 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v40;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                if ( v31 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v31;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                v44 = *(float *)&v36 * *v42;
                if ( v40 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v40;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                *v41 = v44 + *v41;
                ++v41;
                ++v40;
                v42 += 3;
              }
              while ( (int)v40 <= v152 );
              v39 = v31 + 1;
              v6 = v140;
              v33 = v144;
            }
            if ( v31 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v34 = v146;
            v33 = (tmat33_t<vec3_t> *)((char *)v33 + 16);
            v6->v[0] = *(float *)&v38;
            v6 = (vec3_t *)((char *)v6 + 4);
            v144 = v33;
            v32 += 12i64;
            v140 = v6;
            v31 = v39;
          }
          while ( v39 < v132 );
          v23 = v152;
          v11 = v137;
          v6 = e;
        }
        v45 = (float *)v6;
        v46 = 0;
        v47 = (char *)d - (char *)e;
        v48 = v11;
        v49 = 0i64;
        do
        {
          if ( v46 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          *v45 = (float)(1.0 / *(float *)&v16) * *v45;
          if ( v46 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
            LODWORD(v127) = 3;
            LODWORD(v118) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v127) )
              __debugbreak();
          }
          v50 = *(float *)((char *)v45 + v47) * *v45;
          ++v45;
          ++v46;
          v51 = v49;
          *(float *)&v51 = *(float *)&v49 + v50;
          v49 = v51;
          --v48;
        }
        while ( v48 );
        v52 = e;
        v10 = v132;
        v53 = 0;
        v54 = (float)(0.5 / *(float *)&v16) * *(float *)&v51;
        v55 = v11;
        do
        {
          if ( v53 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v53;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          v56 = v54 * *(float *)((char *)v52->v + v47);
          if ( v53 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v53;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          v52->v[0] = v52->v[0] - v56;
          v52 = (vec3_t *)((char *)v52 + 4);
          ++v53;
          --v55;
        }
        while ( v55 );
        v57 = 0;
        if ( v132 <= 0 )
        {
          v70 = v134;
        }
        else
        {
          v58 = 0i64;
          v141 = 0i64;
          v59 = &V->m[v11];
          v60 = (char *)&V->m[v134] - (char *)e;
          v61 = e;
          v62 = (char *)v59 - (char *)e;
          v147 = v62;
          do
          {
            if ( v57 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v63 = *(float *)((char *)v61->v + v47);
            if ( v57 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v64 = v57;
            v65 = v61->v[0];
            if ( (int)v57 <= (int)v23 )
            {
              v66 = (float *)v61;
              v67 = (float *)((char *)V + v58 + (char *)v61 - (char *)e);
              do
              {
                if ( v64 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v64;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                  LODWORD(v128) = 3;
                  LODWORD(v119) = v64;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v119, v128) )
                    __debugbreak();
                }
                v68 = (float)(v65 * *(float *)((char *)v66 + v47)) + (float)(v63 * *v66);
                if ( v64 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v64;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                if ( v57 >= 3 )
                {
                  LODWORD(v123) = 3;
                  LODWORD(v114) = v57;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                    __debugbreak();
                }
                *v67 = *v67 - v68;
                v67 += 3;
                ++v64;
                ++v66;
              }
              while ( (int)v64 <= v152 );
              v58 = v141;
              v62 = v147;
              v60 = (char *)&V->m[v134] - (char *)e;
              v23 = v152;
            }
            if ( v23 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            if ( v57 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v69 = *(float *)((char *)v61->v + v60);
            if ( v57 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            *(float *)((char *)v61->v + v47) = v69;
            if ( (unsigned int)v132 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v132;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            if ( v57 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v58 += 12i64;
            *(float *)((char *)v61->v + v62) = 0.0;
            v61 = (vec3_t *)((char *)v61 + 4);
            v141 = v58;
            ++v57;
          }
          while ( (int)v57 < v132 );
          v10 = v132;
          v11 = v137;
          v70 = v134;
        }
        v71 = v152;
LABEL_177:
        v5 = d;
        goto LABEL_178;
      }
    }
    v71 = v10 - 1;
    v70 = v11 - 1;
    v135 = v11 - 1;
    if ( (unsigned int)(v10 - 1) >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v10 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v72 = v5->v[v70];
    if ( (unsigned int)v10 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v73 = 0;
    e->v[v11] = v72;
    if ( v10 > 0 )
    {
      v74 = 3 * v70;
      v75 = (float *)v5;
      v76 = (char *)((char *)V + 4 * v74 - (char *)v5);
      v77 = (char *)((char *)&V->m[v11] - (char *)v5);
      v78 = (_DWORD *)((char *)V + 4 * v137);
      do
      {
        if ( (unsigned int)v71 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        if ( v73 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        v79 = *(float *)&v76[(_QWORD)v75];
        if ( v73 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        *v75 = v79;
        if ( (unsigned int)v10 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        if ( v73 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        *(float *)((char *)v75 + (_QWORD)v77) = 0.0;
        if ( v73 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        if ( (unsigned int)v10 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        *v78 = 0;
        ++v73;
        v78 += 3;
        ++v75;
      }
      while ( (int)v73 < v10 );
      v11 = v137;
      v70 = v135;
      goto LABEL_177;
    }
LABEL_178:
    if ( (unsigned int)v10 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v137 = v70;
    v10 = v71;
    v132 = v71;
    v5->v[v11] = *(float *)&v16;
    v11 = v70;
    if ( v71 <= 0 )
      break;
    v6 = e;
  }
  v80 = V;
  v81 = 0;
  v82 = 0i64;
  v83 = (char *)d - (char *)V;
  v84 = V;
  v85 = &V->m[0].v[1];
  v153 = 0;
  v143 = 0i64;
  v133 = V;
  v138 = &V->m[0].v[1];
  do
  {
    if ( v81 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
      LODWORD(v129) = 3;
      LODWORD(v120) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v120, v129) )
        __debugbreak();
    }
    v86 = v84->m[0].v[0];
    if ( v81 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v85[5] = v86;
    if ( v81 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
      LODWORD(v130) = 3;
      LODWORD(v121) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v121, v130) )
        __debugbreak();
    }
    v87 = v81 + 1;
    v84->m[0].v[0] = 1.0;
    v139 = v81 + 1;
    if ( v81 + 1 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v81 + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v88 = *(float *)((char *)v85 + v83);
    if ( v88 != 0.0 )
    {
      v89 = 0;
      v90 = 0i64;
      if ( v82 >= 0 )
      {
        v91 = v85;
        do
        {
          if ( v89 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v89;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          if ( v87 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v81 + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          v92 = (float)(1.0 / v88) * *v91;
          if ( v89 >= 3 )
          {
            LODWORD(v123) = 3;
            LODWORD(v114) = v89;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
              __debugbreak();
          }
          ++v89;
          v91 += 3;
          d->v[v90++] = v92;
        }
        while ( v90 <= v82 );
        v85 = v138;
        v84 = v133;
        v80 = V;
      }
      v93 = 0;
      if ( v82 >= 0 )
      {
        v94 = (char *)v85 - (char *)v80;
        v136 = v80;
        v95 = v82 + 1;
        v142 = v94;
        v145 = v82 + 1;
        p_y = v80;
        do
        {
          v97 = (float *)p_y;
          v98 = 0;
          v99 = 0i64;
          v100 = v95;
          do
          {
            if ( v98 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v98;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
              LODWORD(v131) = 3;
              LODWORD(v122) = v98;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v122, v131) )
                __debugbreak();
            }
            if ( v93 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v93;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            if ( v87 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v87;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v101 = *(float *)((char *)v97 + v94) * *v97;
            v97 += 3;
            ++v98;
            v102 = v99;
            *(float *)&v102 = *(float *)&v99 + v101;
            v99 = v102;
            --v100;
          }
          while ( v100 );
          v103 = (float *)v136;
          v82 = v143;
          v104 = 0;
          v105 = 0i64;
          do
          {
            if ( v104 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v104;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            v106 = *(float *)&v102 * d->v[v105];
            if ( v104 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v104;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            if ( v93 >= 3 )
            {
              LODWORD(v123) = 3;
              LODWORD(v114) = v93;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
                __debugbreak();
            }
            *v103 = *v103 - v106;
            v103 += 3;
            ++v104;
            ++v105;
          }
          while ( v105 <= v143 );
          v95 = v143 + 1;
          v94 = v142 - 4;
          v87 = v139;
          p_y = (tmat33_t<vec3_t> *)&v136->m[0].y;
          ++v93;
          v142 -= 4i64;
          v107 = v145-- == 1;
          v136 = (tmat33_t<vec3_t> *)((char *)v136 + 4);
        }
        while ( !v107 );
        v85 = v138;
        v84 = v133;
      }
      v81 = v153;
    }
    v108 = 0;
    if ( v82 >= 0 )
    {
      v109 = v85;
      v110 = v82 + 1;
      do
      {
        if ( v108 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v108;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        if ( v81 + 1 >= 3 )
        {
          LODWORD(v123) = 3;
          LODWORD(v114) = v81 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
            __debugbreak();
        }
        *v109 = 0.0;
        ++v108;
        v109 += 3;
        --v110;
      }
      while ( v110 );
      v85 = v138;
      v84 = v133;
    }
    ++v81;
    v83 = (char *)d - (char *)V;
    ++v82;
    v80 = V;
    ++v85;
    v84 = (tmat33_t<vec3_t> *)((char *)v84 + 16);
    v153 = v81;
    v143 = v82;
    v138 = v85;
    v133 = v84;
  }
  while ( (int)v81 < 2 );
  v111 = 0;
  v112 = (float *)v148;
  do
  {
    if ( v111 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v111;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    v113 = *v112;
    if ( v111 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v111;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    *(float *)((char *)v112 + (char *)d - (char *)v148) = v113;
    if ( v111 >= 3 )
    {
      LODWORD(v123) = 3;
      LODWORD(v114) = v111;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v123) )
        __debugbreak();
    }
    *v112 = 0.0;
    ++v111;
    ++v112;
  }
  while ( (int)v111 < 3 );
  V->m[2].v[2] = 1.0;
  e->v[0] = 0.0;
}

/*
==============
UniformPointsInCircle
==============
*/
void UniformPointsInCircle(unsigned int pointCount, void *points, unsigned int stride)
{
  float *v3; 
  __int64 v4; 
  __int64 v5; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  __int64 v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 

  v3 = (float *)points;
  v4 = stride;
  v5 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 294, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v4 < 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 295, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec2_t ))", (const char *)&queryFormat, "stride >= sizeof( vec2_t )") )
    __debugbreak();
  v6 = LODWORD(FLOAT_0_32556814);
  v7 = LODWORD(FLOAT_0_94551855);
  v8 = (float)v5;
  v9 = LODWORD(FLOAT_1_0);
  *(float *)&v9 = (float)(1.0 / v8) * 0.5;
  v10 = v9;
  if ( (_DWORD)v5 )
  {
    v11 = v5;
    do
    {
      v12 = fsqrt(*(float *)&v10);
      v3[1] = v12 * *(float *)&v6;
      *v3 = v12 * *(float *)&v7;
      v13 = v6;
      v14 = *(float *)&v6;
      *(float *)&v13 = (float)(*(float *)&v6 * -0.73736888) - (float)(*(float *)&v7 * 0.67549032);
      v6 = v13;
      v3 = (float *)((char *)v3 + v4);
      v15 = v7;
      *(float *)&v15 = (float)(*(float *)&v7 * -0.73736888) - (float)(v14 * -0.67549032);
      v7 = v15;
      v16 = v10;
      *(float *)&v16 = *(float *)&v10 + (float)(1.0 / v8);
      v10 = v16;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
UniformPointsOnHemisphere
==============
*/
void UniformPointsOnHemisphere(unsigned int pointCount, void *points, unsigned int stride)
{
  float *v3; 
  __int64 v4; 
  __int64 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int64 v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 

  v3 = (float *)points;
  v4 = stride;
  v5 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 332, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v4 < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 333, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec3_t ))", (const char *)&queryFormat, "stride >= sizeof( vec3_t )") )
    __debugbreak();
  v6 = (float)v5;
  v7 = LODWORD(FLOAT_1_0);
  *(float *)&v7 = (float)(1.0 / v6) * 0.5;
  v8 = v7;
  v9 = 0i64;
  v10 = LODWORD(FLOAT_1_0);
  if ( (_DWORD)v5 )
  {
    v11 = v5;
    do
    {
      v12 = fsqrt(1.0 - (float)(*(float *)&v8 * *(float *)&v8));
      *v3 = v12 * *(float *)&v10;
      v3[1] = v12 * *(float *)&v9;
      v13 = v9;
      v3[2] = *(float *)&v8;
      v14 = *(float *)&v9;
      *(float *)&v13 = (float)(*(float *)&v9 * -0.73736888) - (float)(*(float *)&v10 * 0.67549032);
      v9 = v13;
      v3 = (float *)((char *)v3 + v4);
      v15 = v10;
      *(float *)&v15 = (float)(*(float *)&v10 * -0.73736888) - (float)(v14 * -0.67549032);
      v10 = v15;
      v16 = v8;
      *(float *)&v16 = *(float *)&v8 + (float)(1.0 / v6);
      v8 = v16;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
UniformPointsOnSphere
==============
*/
void UniformPointsOnSphere(unsigned int pointCount, void *points, unsigned int stride)
{
  float *v3; 
  __int64 v4; 
  __int64 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 

  v3 = (float *)points;
  v4 = stride;
  v5 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 372, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v4 < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 373, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec3_t ))", (const char *)&queryFormat, "stride >= sizeof( vec3_t )") )
    __debugbreak();
  v6 = (float)v5;
  v7 = LODWORD(FLOAT_1_0);
  *(float *)&v7 = (float)(1.0 / v6) * 0.5;
  v8 = v7;
  v9 = 0i64;
  v10 = LODWORD(FLOAT_1_0);
  if ( (_DWORD)v5 )
  {
    v11 = v5;
    do
    {
      v12 = (float)(*(float *)&v8 * 2.0) - 1.0;
      v13 = fsqrt(1.0 - (float)(v12 * v12));
      *v3 = v13 * *(float *)&v10;
      v3[1] = v13 * *(float *)&v9;
      v14 = v9;
      v3[2] = v12;
      v15 = *(float *)&v9;
      *(float *)&v14 = (float)(*(float *)&v9 * -0.73736888) - (float)(*(float *)&v10 * 0.67549032);
      v9 = v14;
      v3 = (float *)((char *)v3 + v4);
      v16 = v10;
      *(float *)&v16 = (float)(*(float *)&v10 * -0.73736888) - (float)(v15 * -0.67549032);
      v10 = v16;
      v17 = v8;
      *(float *)&v17 = *(float *)&v8 + (float)(1.0 / v6);
      v8 = v17;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
UnitQuatToAngles
==============
*/
void UnitQuatToAngles(const vec4_t *quat, vec3_t *angles)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
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
  tmat33_t<vec3_t> axis; 

  v2 = quat->v[1];
  v3 = quat->v[0];
  v4 = quat->v[2];
  v5 = quat->v[3];
  v6 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v3, v2, v4, v5, fsqrt(v6)) )
    __debugbreak();
  v9 = 2.0 * quat->v[0];
  v10 = v9 * quat->v[0];
  v11 = quat->v[1];
  v12 = quat->v[2];
  v13 = quat->v[3];
  v14 = v11 * (float)(v11 * 2.0);
  v15 = v12 * (float)(v11 * 2.0);
  v16 = v13 * (float)(v11 * 2.0);
  v17 = v11 * v9;
  v18 = v13 * (float)(v12 * 2.0);
  v19 = v12 * (float)(v12 * 2.0);
  axis.m[0].v[0] = 1.0 - (float)(v19 + v14);
  axis.m[0].v[2] = (float)(v12 * v9) - v16;
  axis.m[0].v[1] = v18 + v17;
  axis.m[1].v[0] = v17 - v18;
  axis.m[1].v[1] = 1.0 - (float)(v19 + v10);
  axis.m[2].v[0] = v16 + (float)(v12 * v9);
  axis.m[1].v[2] = v15 + (float)(v13 * v9);
  axis.m[2].v[2] = 1.0 - (float)(v14 + v10);
  axis.m[2].v[1] = v15 - (float)(v13 * v9);
  AxisToAngles(&axis, angles);
}

/*
==============
UnitQuatToForward
==============
*/
void UnitQuatToForward(const vec4_t *quat, vec3_t *forward)
{
  float v2; 
  float v3; 
  float v5; 
  float v7; 
  float v8; 

  v2 = quat->v[1];
  v3 = quat->v[0];
  v5 = quat->v[2];
  v7 = quat->v[3];
  v8 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1152, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v3, v2, v5, v7, fsqrt(v8)) )
    __debugbreak();
  forward->v[0] = 1.0 - (float)((float)((float)(quat->v[1] * quat->v[1]) + (float)(quat->v[2] * quat->v[2])) * 2.0);
  forward->v[1] = (float)((float)(quat->v[0] * quat->v[1]) + (float)(quat->v[3] * quat->v[2])) * 2.0;
  forward->v[2] = (float)((float)(quat->v[0] * quat->v[2]) - (float)(quat->v[3] * quat->v[1])) * 2.0;
}

/*
==============
DampedSpring::Update1DAngleSpring
==============
*/
void DampedSpring::Update1DAngleSpring(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  float m_appliedDeltaTime; 
  float i; 
  float m_maxDeltaTime; 
  float v11; 
  float v14; 
  double v15; 

  m_appliedDeltaTime = this->m_appliedDeltaTime;
  for ( i = this->m_startDeltaTime; m_appliedDeltaTime < i; i = this->m_startDeltaTime )
  {
    m_maxDeltaTime = this->m_maxDeltaTime;
    v11 = i - m_appliedDeltaTime;
    this->m_deltaTime = i - m_appliedDeltaTime;
    if ( (float)(i - m_appliedDeltaTime) > m_maxDeltaTime )
    {
      this->m_deltaTime = m_maxDeltaTime;
      v11 = m_maxDeltaTime;
    }
    this->m_appliedDeltaTime = v11 + m_appliedDeltaTime;
    if ( v11 < 0.00000011920929 )
      break;
    if ( i < 0.00000011920929 )
      break;
    _XMM6 = 0i64;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    v14 = *velocity - (float)((float)((float)((float)((float)((float)((float)((float)(*currentPos - targetPos) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * this->m_springConstSqr) + (float)((float)(2.0 * this->m_springConst) * *velocity)) * v11) * this->m_accelWeight);
    *velocity = v14;
    v15 = I_fclamp(v14, -20000.0, 20000.0);
    *velocity = *(float *)&v15;
    __asm { vroundss xmm3, xmm6, xmm1, 1 }
    *currentPos = (float)((float)((float)((float)(*(float *)&v15 * this->m_deltaTime) + *currentPos) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    m_appliedDeltaTime = this->m_appliedDeltaTime;
  }
}

/*
==============
DampedSpring::Update1DAngleSpringInternal
==============
*/
void DampedSpring::Update1DAngleSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  float v4; 
  float v8; 
  double v11; 

  v4 = (float)(*currentPos - targetPos) * 0.0027777778;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v8 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v4 - *(float *)&_XMM2) * 360.0) * this->m_springConstSqr) ^ _xmm) - (float)((float)(this->m_springConst * 2.0) * *velocity)) * this->m_deltaTime) * this->m_accelWeight) + *velocity;
  *velocity = v8;
  v11 = I_fclamp(v8, -20000.0, 20000.0);
  *velocity = *(float *)&v11;
  __asm { vroundss xmm3, xmm9, xmm1, 1 }
  *currentPos = (float)((float)((float)((float)(*(float *)&v11 * this->m_deltaTime) + *currentPos) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
}

/*
==============
DampedSpring::Update1DLinearSpring
==============
*/
void DampedSpring::Update1DLinearSpring(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  float m_appliedDeltaTime; 
  float i; 
  float m_maxDeltaTime; 
  float v10; 
  float v11; 
  double v12; 

  m_appliedDeltaTime = this->m_appliedDeltaTime;
  for ( i = this->m_startDeltaTime; m_appliedDeltaTime < i; i = this->m_startDeltaTime )
  {
    m_maxDeltaTime = this->m_maxDeltaTime;
    v10 = i - m_appliedDeltaTime;
    this->m_deltaTime = i - m_appliedDeltaTime;
    if ( (float)(i - m_appliedDeltaTime) > m_maxDeltaTime )
    {
      this->m_deltaTime = m_maxDeltaTime;
      v10 = m_maxDeltaTime;
    }
    this->m_appliedDeltaTime = v10 + m_appliedDeltaTime;
    if ( v10 < 0.00000011920929 )
      break;
    if ( i < 0.00000011920929 )
      break;
    v11 = *velocity - (float)((float)((float)((float)((float)(*currentPos - targetPos) * this->m_springConstSqr) + (float)((float)(2.0 * this->m_springConst) * *velocity)) * v10) * this->m_accelWeight);
    *velocity = v11;
    v12 = I_fclamp(v11, -20000.0, 20000.0);
    *velocity = *(float *)&v12;
    *currentPos = (float)(*(float *)&v12 * this->m_deltaTime) + *currentPos;
    m_appliedDeltaTime = this->m_appliedDeltaTime;
  }
}

/*
==============
DampedSpring::Update1DLinearSpringInternal
==============
*/
void DampedSpring::Update1DLinearSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  float v4; 
  double v8; 

  v4 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*currentPos - targetPos) * this->m_springConstSqr) ^ _xmm) - (float)((float)(this->m_springConst * 2.0) * *velocity)) * this->m_deltaTime) * this->m_accelWeight) + *velocity;
  *velocity = v4;
  v8 = I_fclamp(v4, -20000.0, 20000.0);
  *velocity = *(float *)&v8;
  *currentPos = (float)(*(float *)&v8 * this->m_deltaTime) + *currentPos;
}

/*
==============
DampedSpring::Update3dSpring
==============
*/
void DampedSpring::Update3dSpring(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  float m_appliedDeltaTime; 
  float i; 
  float m_maxDeltaTime; 
  float v11; 

  m_appliedDeltaTime = this->m_appliedDeltaTime;
  for ( i = this->m_startDeltaTime; m_appliedDeltaTime < i; i = this->m_startDeltaTime )
  {
    m_maxDeltaTime = this->m_maxDeltaTime;
    v11 = i - m_appliedDeltaTime;
    this->m_deltaTime = i - m_appliedDeltaTime;
    if ( (float)(i - m_appliedDeltaTime) > m_maxDeltaTime )
    {
      this->m_deltaTime = m_maxDeltaTime;
      v11 = m_maxDeltaTime;
    }
    this->m_appliedDeltaTime = v11 + m_appliedDeltaTime;
    if ( v11 < 0.00000011920929 )
      break;
    if ( i < 0.00000011920929 )
      break;
    DampedSpring::Update3dSpringInternal(this, currentAngles, targetAngles, velocity);
    m_appliedDeltaTime = this->m_appliedDeltaTime;
  }
}

/*
==============
DampedSpring::Update3dSpringInternal
==============
*/
void DampedSpring::Update3dSpringInternal(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v15; 
  double v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float m_deltaTime; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float outRadians; 
  vec3_t v33; 
  vec4_t outAxis; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> matrix; 
  tmat33_t<vec3_t> v40; 
  tmat33_t<vec3_t> v41; 

  outRadians = currentAngles->v[0];
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 || (outRadians = currentAngles->v[1], (LODWORD(outRadians) & 0x7F800000) == 2139095040) || (outRadians = currentAngles->v[2], (LODWORD(outRadians) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4447, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] )") )
      __debugbreak();
  }
  outRadians = targetAngles->v[0];
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 || (outRadians = targetAngles->v[1], (LODWORD(outRadians) & 0x7F800000) == 2139095040) || (outRadians = targetAngles->v[2], (LODWORD(outRadians) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( targetAngles )[0] ) && !IS_NAN( ( targetAngles )[1] ) && !IS_NAN( ( targetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( targetAngles )[0] ) && !IS_NAN( ( targetAngles )[1] ) && !IS_NAN( ( targetAngles )[2] )") )
      __debugbreak();
  }
  outRadians = velocity->v[0];
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 || (outRadians = velocity->v[1], (LODWORD(outRadians) & 0x7F800000) == 2139095040) || (outRadians = velocity->v[2], (LODWORD(outRadians) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4449, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
  AnglesToAxis(targetAngles, &axis);
  AnglesToAxis(currentAngles, &in2);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&out, &in2, &matrix);
  MatrixToAngleRadAxis(&matrix, (vec3_t *)&outAxis, &outRadians);
  v8 = LODWORD(velocity->v[0]);
  v10 = LODWORD(outRadians);
  *(float *)&v10 = outRadians * 57.295776;
  v9 = v10;
  v11 = velocity->v[1];
  v12 = velocity->v[2];
  outRadians = outRadians * 57.295776;
  LODWORD(_XMM11) = 0;
  if ( *(float *)&v8 == 0.0 && v11 == 0.0 && v12 == 0.0 )
  {
    LODWORD(_XMM0) = 0;
  }
  else
  {
    v15 = v8;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v11 * v11)) + (float)(v12 * v12));
    _XMM0 = v15;
    __asm
    {
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm12, xmm1
    }
    *(float *)&v8 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v8;
    v11 = (float)(1.0 / *(float *)&_XMM1) * v11;
    v12 = (float)(1.0 / *(float *)&_XMM1) * v12;
  }
  v18 = I_fclamp(*(float *)&_XMM0, -20000.0, 20000.0);
  v19 = v9;
  *(float *)&v19 = *(float *)&v9 * this->m_springConstSqr;
  v20 = (float)(this->m_springConst * -2.0) * *(float *)&v18;
  v21 = this->m_accelWeight * this->m_deltaTime;
  v22 = (float)((float)((float)(*(float *)&v8 * v20) + (float)(COERCE_FLOAT(v19 ^ _xmm) * outAxis.v[0])) * v21) + velocity->v[0];
  v28 = v19 ^ _xmm;
  v23 = *(float *)&v28 * outAxis.v[2];
  *(float *)&v28 = (float)((float)((float)(*(float *)&v28 * outAxis.v[1]) + (float)(v11 * v20)) * v21) + velocity->v[1];
  velocity->v[0] = v22;
  velocity->v[1] = *(float *)&v28;
  v24 = (float)((float)((float)(v12 * v20) + v23) * v21) + velocity->v[2];
  velocity->v[2] = v24;
  m_deltaTime = this->m_deltaTime;
  v26 = v22 * m_deltaTime;
  *(float *)&v28 = *(float *)&v28 * m_deltaTime;
  v27 = *(float *)&v28;
  v29 = v24 * m_deltaTime;
  v33.v[2] = v24 * m_deltaTime;
  v33.v[0] = v26;
  v33.v[1] = *(float *)&v28;
  if ( v26 != 0.0 || *(float *)&v28 != 0.0 || (float)(v24 * m_deltaTime) != 0.0 )
  {
    *(float *)&v28 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v26 * v26)) + (float)(v29 * v29));
    _XMM11 = v28;
    __asm
    {
      vcmpless xmm0, xmm11, cs:__real@80000000
      vblendvps xmm0, xmm11, xmm12, xmm0
    }
    v33.v[0] = v26 * (float)(1.0 / *(float *)&_XMM0);
    v33.v[2] = v29 * (float)(1.0 / *(float *)&_XMM0);
    v33.v[1] = v27 * (float)(1.0 / *(float *)&_XMM0);
  }
  AngleRadAxisToQuat(*(float *)&_XMM11 * 0.017453292, &v33, &outAxis);
  QuatToAxis(&outAxis, &out);
  AxisToAngles(&out, &angles);
  AnglesToAxis(&angles, &v40);
  MatrixMultiply(&in2, &v40, &v41);
  AxisToAngles(&v41, currentAngles);
  outRadians = currentAngles->v[0];
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 || (outRadians = currentAngles->v[1], (LODWORD(outRadians) & 0x7F800000) == 2139095040) || (outRadians = currentAngles->v[2], (LODWORD(outRadians) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4498, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] )") )
      __debugbreak();
  }
  outRadians = velocity->v[0];
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 || (outRadians = velocity->v[1], (LODWORD(outRadians) & 0x7F800000) == 2139095040) || (outRadians = velocity->v[2], (LODWORD(outRadians) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4499, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
}

/*
==============
DampedSpring::UpdateDeltaTime
==============
*/
bool DampedSpring::UpdateDeltaTime(DampedSpring *this)
{
  float m_startDeltaTime; 
  float m_appliedDeltaTime; 
  float m_maxDeltaTime; 

  m_startDeltaTime = this->m_startDeltaTime;
  m_appliedDeltaTime = this->m_appliedDeltaTime;
  m_maxDeltaTime = this->m_maxDeltaTime;
  this->m_deltaTime = m_startDeltaTime - m_appliedDeltaTime;
  if ( (float)(m_startDeltaTime - m_appliedDeltaTime) <= m_maxDeltaTime )
    m_maxDeltaTime = m_startDeltaTime - m_appliedDeltaTime;
  else
    this->m_deltaTime = m_maxDeltaTime;
  this->m_appliedDeltaTime = m_appliedDeltaTime + m_maxDeltaTime;
  return m_maxDeltaTime >= 0.00000011920929 && m_startDeltaTime >= 0.00000011920929;
}

/*
==============
Vec2MinorAxis
==============
*/
_BOOL8 Vec2MinorAxis(const vec2_t *dir)
{
  return (float)(dir->v[0] * dir->v[0]) > (float)(dir->v[1] * dir->v[1]);
}

/*
==============
Vec3ProjectionCoords
==============
*/
__int64 Vec3ProjectionCoords(const vec3_t *dir, int *xCoord, int *yCoord)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  __int64 result; 
  int v9; 
  int v10; 

  v3 = dir->v[0];
  v4 = dir->v[2];
  v5 = dir->v[1];
  v6 = v4 * v4;
  v7 = v5 * v5;
  if ( (float)(v4 * v4) < (float)(v3 * v3) || v6 < v7 )
  {
    if ( v7 < (float)(v3 * v3) || v7 < v6 )
    {
      result = 0i64;
      if ( v3 <= 0.0 )
      {
        *xCoord = 2;
        *yCoord = 1;
      }
      else
      {
        *xCoord = 1;
        *yCoord = 2;
      }
    }
    else
    {
      v9 = 2;
      v10 = 0;
      if ( v5 <= 0.0 )
        v10 = 2;
      if ( v5 <= 0.0 )
        v9 = 0;
      *xCoord = v9;
      *yCoord = v10;
      return 1i64;
    }
  }
  else
  {
    *xCoord = v4 <= 0.0;
    *yCoord = v4 > 0.0;
    return 2i64;
  }
  return result;
}

/*
==============
Vec3RotateSelf
==============
*/
void Vec3RotateSelf(vec3_t *v, const tmat33_t<vec3_t> *matrix)
{
  float v2; 
  vec3_t in; 

  v2 = v->v[1];
  in.v[0] = v->v[0];
  in.v[2] = v->v[2];
  in.v[1] = v2;
  Vec3Rotate(&in, matrix, v);
}

/*
==============
VectorAngleMultiply
==============
*/
void VectorAngleMultiply(vec2_t *vec, float angle)
{
  float v3; 
  float v4; 
  float v5; 
  float s; 
  float c; 

  FastSinCos(angle * 0.017453292, &s, &c);
  v3 = vec->v[1];
  v4 = vec->v[0] * c;
  v5 = v3 * s;
  vec->v[1] = (float)(v3 * c) + (float)(vec->v[0] * s);
  vec->v[0] = v4 - v5;
}

/*
==============
VectorRotateQuatAroundPoint
==============
*/
void VectorRotateQuatAroundPoint(const vec3_t *vIn, const vec4_t *vQuat, const vec3_t *vOrigin, vec3_t *out)
{
  float v4; 
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  vec3_t in; 
  vec3_t outa; 

  v4 = vIn->v[1];
  in.v[0] = vIn->v[0] - vOrigin->v[0];
  v5 = v4 - vOrigin->v[1];
  v6 = vIn->v[2];
  in.v[1] = v5;
  in.v[2] = v6 - vOrigin->v[2];
  QuatTransform(vQuat, &in, &outa);
  v9 = outa.v[1];
  out->v[0] = outa.v[0] + vOrigin->v[0];
  v10 = outa.v[2];
  out->v[1] = v9 + vOrigin->v[1];
  out->v[2] = v10 + vOrigin->v[2];
}

