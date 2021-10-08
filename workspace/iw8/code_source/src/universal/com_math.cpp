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

void __fastcall GetCartesianCoordinates(double zenithAngle, double azimuthAngle, double radius, vec3_t *vector)
{
  float v22; 
  float c[3]; 
  float s; 
  float v28; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = vector;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm2, xmm3
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm0, xmm8; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, c);
  __asm { vmovaps xmm0, xmm7; radians }
  FastSinCos(*(const float *)&_XMM0, &v22, &v28);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+78h+s]
    vmulss  xmm1, xmm2, [rsp+78h+arg_18]
    vmulss  xmm0, xmm2, [rsp+78h+var_48]
    vmulss  xmm2, xmm6, [rsp+78h+c]
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
DampedSpring::DampedSpring
==============
*/

void __fastcall DampedSpring::DampedSpring(DampedSpring *this, double springConst, double accelWeight, double deltaTime)
{
  this->m_maxDeltaTime = 0.016000001;
  __asm { vmulss  xmm0, xmm1, xmm1 }
  *(_QWORD *)&this->m_deltaTime = 0i64;
  __asm
  {
    vmovss  dword ptr [rcx], xmm1
    vmovss  dword ptr [rcx+4], xmm3
    vmovss  dword ptr [rcx+10h], xmm2
    vmovss  dword ptr [rcx+0Ch], xmm0
  }
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
  vec4_t in2; 
  vec4_t quat; 
  vec4_t out; 

  __asm { vmovaps [rsp+78h+var_18], xmm8 }
  _RDI = outAngles;
  AnglesToQuat(a0, &quat);
  AnglesToQuat(a1, &in2);
  QuatMultiply(&quat, &in2, &out);
  UnitQuatToAngles(&out, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovss  xmm5, cs:__real@43b40000
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm2, xmm8, xmm1, 1
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vmulss  xmm0, xmm0, xmm5
    vroundss xmm3, xmm8, xmm2, 1
    vmovss  dword ptr [rdi], xmm0
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm8, xmm2, 1
    vmovss  dword ptr [rdi+4], xmm1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [rdi+8], xmm0
    vmovaps xmm8, [rsp+78h+var_18]
  }
}

/*
==============
AngleBetween
==============
*/
float AngleBetween(const vec3_t *a, const vec3_t *b)
{
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1841, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
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
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@42652ee0 }
  return *(float *)&_XMM0;
}

/*
==============
AngleClamp
==============
*/

float __fastcall AngleClamp(double angle1, double angle2, double range)
{
  __asm
  {
    vsubss  xmm3, xmm0, xmm1
    vmovaps [rsp+28h+var_18], xmm6
    vmulss  xmm6, xmm3, cs:__real@3b360b61
    vaddss  xmm5, xmm6, cs:__real@3f000000
    vxorps  xmm4, xmm4, xmm4
    vmovss  xmm4, xmm4, xmm5
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm5, xmm3, xmm4, 1
    vsubss  xmm4, xmm6, xmm5
    vmulss  xmm3, xmm4, cs:__real@43b40000
    vcomiss xmm3, xmm2
    vmovaps [rsp+28h+var_28], xmm7
    vmovaps xmm7, xmm0
    vaddss  xmm0, xmm1, xmm2
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
AngleEigenTrace
==============
*/

float __fastcall AngleEigenTrace(double angle)
{
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmulsd  xmm2, xmm1, xmm1
    vcvtsd2ss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
AngleFromTanHalfFovY
==============
*/

float __fastcall AngleFromTanHalfFovY(double tanHalfFovY)
{
  __asm { vmulss  xmm0, xmm0, cs:__real@3faaaaab; X }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@42e52ee0 }
  return *(float *)&_XMM0;
}

/*
==============
ApplyLinearMap
==============
*/

double __fastcall ApplyLinearMap(double value, double min, double max)
{
  char v3; 

  __asm
  {
    vsubss  xmm3, xmm2, xmm1
    vandps  xmm2, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v3 )
  {
    __asm
    {
      vcmpltss xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vblendvps xmm0, xmm0, xmm1, xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vsubss  xmm0, xmm0, xmm1
      vdivss  xmm0, xmm0, xmm3; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  return *(double *)&_XMM0;
}

/*
==============
ApplySHRotation4
==============
*/
void ApplySHRotation4(const float *pMat, const float *pSHIn, float *pSHOut)
{
  *pSHOut = *pSHIn;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+4], xmm2
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+8], xmm2
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rcx+18h]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r8+0Ch], xmm2
    vmovss  xmm0, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [rcx+28h]
    vmulss  xmm2, xmm1, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+30h]
    vmulss  xmm0, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+34h]
    vmulss  xmm2, xmm1, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+10h], xmm0
    vmovss  xmm1, dword ptr [rcx+38h]
    vmulss  xmm3, xmm1, dword ptr [rdx+10h]
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vmulss  xmm2, xmm0, dword ptr [rdx+14h]
    vmovss  xmm1, dword ptr [rcx+40h]
    vmulss  xmm0, xmm1, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+44h]
    vmulss  xmm1, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+48h]
    vmulss  xmm2, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm2
    vmovss  dword ptr [r8+14h], xmm1
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [rcx+50h]
    vmulss  xmm2, xmm1, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [rcx+54h]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+58h]
    vmulss  xmm0, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+5Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+18h], xmm0
    vmovss  xmm1, dword ptr [rcx+60h]
    vmovss  xmm0, dword ptr [rcx+64h]
    vmulss  xmm3, xmm1, dword ptr [rdx+10h]
    vmulss  xmm2, xmm0, dword ptr [rdx+14h]
    vmovss  xmm1, dword ptr [rcx+68h]
    vmulss  xmm0, xmm1, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+6Ch]
    vmulss  xmm1, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+70h]
    vmulss  xmm2, xmm0, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm2
    vmovss  dword ptr [r8+1Ch], xmm1
    vmovss  xmm0, dword ptr [rcx+74h]
    vmulss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [rcx+78h]
    vmulss  xmm2, xmm1, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [rcx+7Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+80h]
    vmulss  xmm0, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+84h]
    vmulss  xmm2, xmm1, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+20h], xmm0
    vmovss  xmm0, dword ptr [rcx+8Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+28h]
    vmovss  xmm1, dword ptr [rcx+88h]
    vmulss  xmm2, xmm1, dword ptr [rdx+24h]
    vmovss  xmm0, dword ptr [rcx+90h]
    vmulss  xmm1, xmm0, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+94h]
    vmulss  xmm0, xmm2, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+98h]
    vmulss  xmm2, xmm1, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm0, dword ptr [rcx+9Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm2
    vmovss  xmm2, dword ptr [rcx+0A0h]
    vmulss  xmm0, xmm2, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  dword ptr [r8+24h], xmm1
    vmovss  xmm2, dword ptr [rcx+0A8h]
    vmulss  xmm3, xmm2, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+0A4h]
    vmulss  xmm1, xmm0, dword ptr [rdx+24h]
    vmovss  xmm2, dword ptr [rcx+0ACh]
    vmulss  xmm0, xmm2, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+0B0h]
    vmulss  xmm2, xmm1, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+0B4h]
    vmulss  xmm1, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+0B8h]
    vmulss  xmm0, xmm2, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+0BCh]
    vmulss  xmm2, xmm1, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+28h], xmm0
    vmovss  xmm1, dword ptr [rcx+0C4h]
    vmulss  xmm3, xmm1, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+0C0h]
    vmulss  xmm2, xmm0, dword ptr [rdx+24h]
    vmovss  xmm1, dword ptr [rcx+0C8h]
    vmulss  xmm0, xmm1, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+0CCh]
    vmulss  xmm1, xmm2, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+0D0h]
    vmulss  xmm2, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+0D4h]
    vmulss  xmm0, xmm1, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm2
    vmovss  xmm2, dword ptr [rcx+0D8h]
    vmulss  xmm1, xmm2, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm1
    vmovss  dword ptr [r8+2Ch], xmm0
    vmovss  xmm2, dword ptr [rcx+0E0h]
    vmulss  xmm3, xmm2, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+0DCh]
    vmulss  xmm1, xmm0, dword ptr [rdx+24h]
    vmovss  xmm2, dword ptr [rcx+0E4h]
    vmulss  xmm0, xmm2, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+0E8h]
    vmulss  xmm2, xmm1, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+0ECh]
    vmulss  xmm1, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+0F0h]
    vmulss  xmm0, xmm2, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+0F4h]
    vmulss  xmm2, xmm1, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+30h], xmm0
    vmovss  xmm1, dword ptr [rcx+0FCh]
    vmulss  xmm3, xmm1, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+0F8h]
    vmulss  xmm2, xmm0, dword ptr [rdx+24h]
    vmovss  xmm1, dword ptr [rcx+100h]
    vmulss  xmm0, xmm1, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+104h]
    vmulss  xmm1, xmm2, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+108h]
    vmulss  xmm2, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+10Ch]
    vmulss  xmm0, xmm1, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm2
    vmovss  xmm2, dword ptr [rcx+110h]
    vmulss  xmm1, xmm2, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm1
    vmovss  dword ptr [r8+34h], xmm0
    vmovss  xmm2, dword ptr [rcx+118h]
    vmulss  xmm3, xmm2, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+114h]
    vmulss  xmm1, xmm0, dword ptr [rdx+24h]
    vmovss  xmm2, dword ptr [rcx+11Ch]
    vmulss  xmm0, xmm2, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+120h]
    vmulss  xmm2, xmm1, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+124h]
    vmulss  xmm1, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+128h]
    vmulss  xmm0, xmm2, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, dword ptr [rcx+12Ch]
    vmulss  xmm2, xmm1, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r8+38h], xmm0
    vmovss  xmm1, dword ptr [rcx+134h]
    vmulss  xmm3, xmm1, dword ptr [rdx+28h]
    vmovss  xmm0, dword ptr [rcx+130h]
    vmulss  xmm2, xmm0, dword ptr [rdx+24h]
    vmovss  xmm1, dword ptr [rcx+138h]
    vmulss  xmm0, xmm1, dword ptr [rdx+2Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+13Ch]
    vmulss  xmm1, xmm2, dword ptr [rdx+30h]
    vaddss  xmm3, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+140h]
    vmulss  xmm2, xmm0, dword ptr [rdx+34h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+144h]
    vmulss  xmm0, xmm1, dword ptr [rdx+38h]
    vaddss  xmm3, xmm4, xmm2
    vmovss  xmm2, dword ptr [rcx+148h]
    vmulss  xmm1, xmm2, dword ptr [rdx+3Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm1
    vmovss  dword ptr [r8+3Ch], xmm0
  }
}

/*
==============
DampedSpring::AxisAngleToAngles
==============
*/

void __fastcall DampedSpring::AxisAngleToAngles(DampedSpring *this, double angle, const vec3_t *axis, vec3_t *outAngles)
{
  vec4_t quat; 
  tmat33_t<vec3_t> axisa; 

  __asm { vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians }
  AngleRadAxisToQuat(*(float *)&_XMM0, axis, &quat);
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
  const vec3_t *v23; 
  vec3_t point; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
    vmovss  xmm8, dword ptr [rcx+8]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm6, dword ptr [rcx]
    vxorps  xmm7, xmm5, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm0, xmm5, xmm8
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm1, xmm7, xmm8
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm4, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm6, xmm4
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm5, xmm4
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+88h+point], xmm1
    vmulss  xmm1, xmm8, xmm4
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+88h+point+8], xmm2
    vmovss  dword ptr [rsp+88h+point+4], xmm0
  }
  _RDI = left;
  v23 = forward;
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm3, xmm0, cs:__real@3c340000; degrees
  }
  RotatePointAroundVector(_RDI, v23, &point, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rdi]
    vmovss  xmm3, dword ptr [rdi+8]
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
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
  Vec3Cross(v23, _RDI, up);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm8, [rsp+88h+var_48]
  }
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
  __asm
  {
    vmovss  xmm0, [rsp+28h+outRadians]
    vmulss  xmm0, xmm0, cs:__real@42652ee0
  }
  return *(float *)&_XMM0;
}

/*
==============
AxisToSignedAngles
==============
*/
void AxisToSignedAngles(const tmat33_t<vec3_t> *axis, vec3_t *angles)
{
  char v29; 
  float s; 
  float c; 
  vec3_t vec; 

  __asm { vmovaps [rsp+58h+var_18], xmm7 }
  _RDI = angles;
  _RBX = axis;
  vectosignedangles(axis->m, angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rsp+58h+vec], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+58h+vec+4], xmm1
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+58h+vec+8], xmm0
    vmulss  xmm0, xmm1, cs:__real@bc8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+58h+vec+4]
    vmovss  xmm4, dword ptr [rsp+58h+vec]
    vmulss  xmm2, xmm4, [rsp+58h+c]
    vmulss  xmm0, xmm3, [rsp+58h+s]
    vmulss  xmm1, xmm3, [rsp+58h+c]
    vsubss  xmm7, xmm2, xmm0
    vmulss  xmm2, xmm4, [rsp+58h+s]
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdi]
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
    vmulss  xmm0, xmm2, cs:__real@bc8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+58h+vec+8]
    vmulss  xmm1, xmm3, [rsp+58h+s]
    vmulss  xmm0, xmm7, [rsp+58h+c]
    vmulss  xmm2, xmm3, [rsp+58h+c]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm7, [rsp+58h+s]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+58h+vec+8], xmm1
  }
  *(double *)&_XMM0 = vectosignedpitch(&vec);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+58h+vec+4]
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm1, xmm2
  }
  if ( v29 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@c3340000
      vcmpltss xmm3, xmm0, xmm2
      vmovss  xmm2, cs:__real@43340000
      vblendvps xmm2, xmm1, xmm2, xmm3
      vaddss  xmm0, xmm2, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000 }
  }
  __asm
  {
    vmovss  dword ptr [rdi+8], xmm0
    vmovaps xmm7, [rsp+58h+var_18]
  }
}

/*
==============
BoxMullerTransform
==============
*/

void __fastcall BoxMullerTransform(double uniformRandomA, double uniformRandomB, double mean, double standardDeviation, float *outNormalRandomA, float *outNormalRandomB)
{
  bool v18; 
  double v39; 
  double v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmm11, xmm2
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm1
    vmovaps xmm10, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vcvtss2sd xmm2, xmm10, xmm10
    vmovsd  [rsp+98h+var_68], xmm2
  }
  v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 504, ASSERT_TYPE_ASSERT, "(0.0f < uniformRandomA && uniformRandomA < 1.0f)", "%s\n\tBoxMullerTransform(): uniformRandomA must be greater than 0.0 and less than 1.0.  Provided: %f", "0.0f < uniformRandomA && uniformRandomA < 1.0f", v39);
  if ( v18 )
    __debugbreak();
  __asm { vcomiss xmm7, xmm6 }
  if ( v18 )
    __asm { vcomiss xmm7, cs:__real@3f800000 }
  __asm
  {
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+98h+var_68], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 505, ASSERT_TYPE_ASSERT, "(0.0f < uniformRandomB && uniformRandomB < 1.0f)", "%s\n\tBoxMullerTransform(): uniformRandomB must be greater than 0.0 and less than 1.0.  Provided: %f", "0.0f < uniformRandomB && uniformRandomB < 1.0f", v40) )
    __debugbreak();
  __asm { vcomiss xmm9, xmm6 }
  _RBX = outNormalRandomA;
  if ( !outNormalRandomA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 507, ASSERT_TYPE_ASSERT, "(outNormalRandomA)", (const char *)&queryFormat, "outNormalRandomA") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm10; X }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c0000000
    vmulss  xmm7, xmm7, cs:__real@40c90fdb
    vmovaps xmm0, xmm7; X
    vsqrtss xmm6, xmm1, xmm1
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, xmm11
    vmovss  dword ptr [rbx], xmm3
  }
  _RBX = outNormalRandomB;
  if ( outNormalRandomB )
  {
    __asm { vmovaps xmm0, xmm7; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm11
      vmovss  dword ptr [rbx], xmm3
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm9, [rsp+98h+var_38]
    vmovaps xmm10, [rsp+98h+var_48]
    vmovaps xmm11, [rsp+98h+var_58]
  }
}

/*
==============
BuildSHRotMat4
==============
*/
void BuildSHRotMat4(const float *rotMat, float *pOut)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+10h]
    vmovss  xmm5, dword ptr [rcx+1Ch]
    vmovss  xmm3, dword ptr [rcx+20h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rcx+14h]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovss  xmm13, dword ptr [rcx+0Ch]
    vmovaps [rsp+108h+var_98], xmm14
    vmovss  xmm14, dword ptr [rcx]
    vxorps  xmm0, xmm7, xmm8
    vmovss  dword ptr [rdx+4], xmm0
    vxorps  xmm1, xmm5, xmm8
    vmovss  dword ptr [rdx+0Ch], xmm1
    vxorps  xmm1, xmm11, xmm8
    vmovss  dword ptr [rdx+1Ch], xmm1
    vmovaps [rsp+108h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rcx+18h]
    vmulss  xmm1, xmm13, xmm12
    vxorps  xmm0, xmm15, xmm8
    vmovss  dword ptr [rdx+14h], xmm0
    vmulss  xmm0, xmm11, xmm11
    vmovss  [rsp+108h+arg_8], xmm0
    vmulss  xmm0, xmm14, xmm14
    vmovss  [rsp+108h+arg_10], xmm0
    vmulss  xmm0, xmm13, xmm13
    vmovss  [rsp+108h+arg_18], xmm0
    vmulss  xmm0, xmm12, xmm12
    vmovss  [rsp+108h+arg_0], xmm0
    vmulss  xmm0, xmm2, xmm14
    vaddss  xmm0, xmm1, xmm0
    vmovss  [rsp+108h+var_F8], xmm0
    vmovss  dword ptr [rdx+24h], xmm0
    vmulss  xmm0, xmm2, xmm11
    vmovss  [rsp+108h+var_E4], xmm0
    vxorps  xmm0, xmm0, xmm8
    vmulss  xmm1, xmm7, xmm12
    vmovss  [rsp+108h+var_E8], xmm1
    vsubss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rdx+28h], xmm1
    vmovss  [rsp+108h+var_100], xmm13
    vmovss  [rsp+108h+var_FC], xmm2
    vmovss  dword ptr [rdx], xmm2
    vmulss  xmm2, xmm11, cs:__real@3fddb3d7
    vmulss  xmm0, xmm2, xmm7
    vmovss  dword ptr [rdx+2Ch], xmm0
    vmovss  [rsp+108h+var_EC], xmm12
    vmovss  dword ptr [rdx+18h], xmm12
    vmulss  xmm12, xmm13, xmm11
    vxorps  xmm0, xmm12, xmm8
    vmovss  [rsp+108h+var_D8], xmm11
    vmulss  xmm11, xmm7, xmm14
    vsubss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rdx+30h], xmm1
    vmovss  xmm1, dword ptr [rcx+10h]
    vmovss  [rsp+108h+var_108], xmm14
    vmovss  dword ptr [rdx+20h], xmm14
    vmulss  xmm14, xmm13, xmm14
    vmovss  dword ptr [rdx+8], xmm13
    vmulss  xmm13, xmm1, dword ptr [rcx+4]
    vsubss  xmm0, xmm14, xmm13
    vmovss  dword ptr [rdx+34h], xmm0
    vmulss  xmm0, xmm15, xmm1
    vmulss  xmm1, xmm5, [rsp+108h+var_100]
    vmulss  xmm6, xmm7, xmm7
    vxorps  xmm0, xmm0, xmm8
    vmovss  [rsp+108h+var_F4], xmm7
    vmovss  [rsp+108h+var_F0], xmm5
    vmovss  dword ptr [rdx+10h], xmm3
    vmovss  [rsp+108h+var_104], xmm6
    vmulss  xmm4, xmm3, xmm3
    vmulss  xmm9, xmm15, xmm15
    vmulss  xmm10, xmm5, xmm5
    vsubss  xmm1, xmm0, xmm1
    vmulss  xmm0, xmm3, dword ptr [rcx+10h]
    vmovss  dword ptr [rdx+38h], xmm1
    vmulss  xmm2, xmm5, xmm7
    vaddss  xmm0, xmm2, xmm0
    vmulss  xmm2, xmm15, dword ptr [rcx+14h]
    vmovss  xmm7, cs:__real@bfddb3d7
    vmovss  [rsp+108h+var_E0], xmm0
    vmovss  dword ptr [rdx+3Ch], xmm0
    vmulss  xmm0, xmm7, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, xmm3
    vmulss  xmm0, xmm3, dword ptr [rcx+0Ch]
    vmovss  xmm3, [rsp+108h+var_FC]
    vmovss  dword ptr [rdx+40h], xmm1
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm15, [rsp+108h+var_100]
    vmovss  dword ptr [rdx+44h], xmm1
    vmulss  xmm1, xmm5, xmm3
    vmovss  xmm5, cs:__real@40000000
    vsubss  xmm0, xmm1, xmm0
    vmovss  xmm1, [rsp+108h+var_EC]
    vmulss  xmm1, xmm1, [rsp+108h+var_108]
    vmovss  dword ptr [rdx+48h], xmm0
    vmulss  xmm0, xmm3, [rsp+108h+var_100]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm15, xmm5
    vmulss  xmm0, xmm3, dword ptr [rcx+1Ch]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@bf13cd3a
    vmovss  xmm0, [rsp+108h+var_F4]
    vmulss  xmm0, xmm0, [rsp+108h+var_FC]
    vmovss  dword ptr [rdx+4Ch], xmm2
    vmovss  xmm2, dword ptr [rcx+8]
    vmulss  xmm15, xmm2, dword ptr [rcx+4]
    vaddss  xmm2, xmm15, xmm0
    vmulss  xmm0, xmm5, dword ptr [rcx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+20h]
    vsubss  xmm0, xmm2, xmm1
    vmovss  [rsp+108h+var_D4], xmm0
    vmulss  xmm0, xmm0, cs:__real@3f13cd3a
    vmovss  dword ptr [rdx+50h], xmm0
    vaddss  xmm0, xmm6, [rsp+108h+arg_8]
    vmulss  xmm0, xmm0, cs:__real@3f000000
    vsubss  xmm1, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm5, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm4, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm3, dword ptr [rcx+20h]
    vmovss  xmm3, [rsp+108h+arg_18]
    vmovss  dword ptr [rdx+54h], xmm1
    vmovss  [rsp+108h+var_D0], xmm2
    vaddss  xmm1, xmm4, xmm5
    vmovss  [rsp+108h+var_CC], xmm1
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@3f13cd3a
    vaddss  xmm1, xmm3, [rsp+108h+arg_10]
    vmulss  xmm0, xmm9, cs:__real@40000000
    vsubss  xmm1, xmm0, xmm1
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm0, xmm10, cs:__real@40000000
    vmovss  dword ptr [rdx+58h], xmm2
    vaddss  xmm2, xmm1, [rsp+108h+arg_0]
    vaddss  xmm3, xmm2, xmm3
    vmovss  xmm2, [rsp+108h+var_F0]
    vsubss  xmm0, xmm3, xmm0
    vmulss  xmm1, xmm0, cs:__real@3e93cd3a
    vmovss  xmm3, dword ptr [rcx+18h]
    vmulss  xmm10, xmm3, dword ptr [rcx+4]
    vmovss  [rsp+108h+var_C8], xmm0
    vxorps  xmm0, xmm10, xmm8
    vmovss  xmm8, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+5Ch], xmm1
    vmulss  xmm1, xmm2, [rsp+108h+var_108]
    vsubss  xmm1, xmm0, xmm1
    vmulss  xmm9, xmm2, xmm8
    vmovss  xmm2, dword ptr [rcx+20h]
    vmulss  xmm0, xmm2, dword ptr [rcx+4]
    vaddss  xmm0, xmm0, xmm9
    vmovss  dword ptr [rdx+60h], xmm1
    vmovss  [rsp+108h+var_C4], xmm0
    vmovss  dword ptr [rdx+64h], xmm0
    vmulss  xmm1, xmm8, xmm7
    vmulss  xmm0, xmm1, xmm2
    vmulss  xmm1, xmm2, dword ptr [rcx]
    vmovss  dword ptr [rdx+68h], xmm0
    vmulss  xmm7, xmm3, xmm8
    vmovss  xmm8, [rsp+108h+var_EC]
    vaddss  xmm0, xmm1, xmm7
    vmulss  xmm1, xmm8, [rsp+108h+var_F0]
    vmovss  dword ptr [rdx+6Ch], xmm0
    vmulss  xmm0, xmm3, [rsp+108h+var_108]
    vsubss  xmm0, xmm1, xmm0
    vmovss  xmm3, dword ptr [rcx+10h]
    vmulss  xmm2, xmm3, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+70h], xmm0
    vmulss  xmm0, xmm8, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm3, dword ptr [rcx+14h]
    vmovss  xmm3, [rsp+108h+arg_10]
    vsubss  xmm0, xmm0, xmm15
    vmovss  dword ptr [rdx+78h], xmm0
    vmovss  xmm0, [rsp+108h+arg_8]
    vsubss  xmm8, xmm0, xmm6
    vmovss  xmm6, dword ptr [rcx+10h]
    vmovss  dword ptr [rdx+74h], xmm1
    vmulss  xmm1, xmm8, cs:__real@3f5db3d7
    vmovss  dword ptr [rdx+7Ch], xmm1
    vsubss  xmm1, xmm3, [rsp+108h+arg_18]
    vsubss  xmm2, xmm1, [rsp+108h+arg_0]
    vmovss  xmm1, dword ptr [rcx+10h]
    vsubss  xmm0, xmm5, xmm4
    vmovss  xmm5, cs:__real@3f400000
    vmovss  dword ptr [rdx+80h], xmm0
    vmulss  xmm0, xmm1, xmm1
    vmovss  xmm1, [rsp+108h+var_108]
    vaddss  xmm0, xmm2, xmm0
    vmovss  [rsp+108h+var_B4], xmm0
    vmulss  xmm0, xmm0, cs:__real@3f000000
    vmovss  [rsp+108h+var_B8], xmm0
    vmovss  dword ptr [rdx+84h], xmm0
    vmulss  xmm0, xmm1, cs:__real@3fc00000
    vmulss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm5, [rsp+108h+arg_18]
    vmulss  xmm1, xmm5, [rsp+108h+arg_0]
    vmovss  xmm5, dword ptr [rcx+14h]
    vmulss  xmm0, xmm2, xmm6
    vsubss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm3, xmm4, xmm2
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm0, xmm0, cs:__real@3e800000
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm3, [rsp+108h+var_F8]
    vmovss  dword ptr [rdx+88h], xmm1
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm0, xmm5
    vmulss  xmm0, xmm3, dword ptr [rcx+8]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm5
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm4, cs:__real@bf9cc471
    vmovss  xmm4, cs:__real@3ff7def6
    vmulss  xmm1, xmm4, dword ptr [rcx+4]
    vmovss  dword ptr [rdx+8Ch], xmm0
    vmulss  xmm0, xmm1, dword ptr [rcx+8]
    vmulss  xmm3, xmm0, xmm5
    vmulss  xmm2, xmm8, xmm6
    vmulss  xmm0, xmm2, cs:__real@3f77def6
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm0, [rsp+108h+arg_8]
    vmulss  xmm0, xmm0, cs:__real@40400000
    vmovss  dword ptr [rdx+90h], xmm1
    vmovss  xmm1, [rsp+108h+var_104]
    vsubss  xmm0, xmm1, xmm0
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm1, xmm1, cs:__real@3f4a62c2
    vmulss  xmm0, xmm4, dword ptr [rcx]
    vmulss  xmm2, xmm0, dword ptr [rcx+8]
    vmulss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rdx+94h], xmm1
    vmulss  xmm1, xmm8, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm1, cs:__real@3f77def6
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, cs:__real@40000000
    vmulss  xmm8, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm0, dword ptr [rcx]
    vmulss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm3, [rsp+108h+arg_18]
    vmovss  [rsp+108h+var_100], xmm0
    vaddss  xmm0, xmm3, [rsp+108h+arg_0]
    vmovss  dword ptr [rdx+98h], xmm2
    vmulss  xmm2, xmm8, xmm6
    vsubss  xmm1, xmm2, xmm1
    vmovss  [rsp+108h+var_FC], xmm2
    vmulss  xmm2, xmm1, dword ptr [rcx+8]
    vmovaps xmm3, xmm6
    vmulss  xmm5, xmm3, xmm3
    vsubss  xmm4, xmm0, xmm5
    vmulss  xmm1, xmm4, dword ptr [rcx+14h]
    vmovss  xmm0, [rsp+108h+arg_10]
    vmulss  xmm0, xmm0, dword ptr [rcx+14h]
    vmulss  xmm5, xmm5, cs:__real@40400000
    vsubss  xmm3, xmm2, xmm0
    vmovss  xmm2, [rsp+108h+arg_0]
    vmovss  [rsp+108h+var_BC], xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm4, cs:__real@3f1cc471
    vmulss  xmm4, xmm2, cs:__real@40400000
    vmovss  dword ptr [rdx+9Ch], xmm0
    vmovss  xmm0, [rsp+108h+arg_10]
    vmulss  xmm1, xmm0, cs:__real@40400000
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmovss  xmm0, [rsp+108h+var_108]
    vmulss  xmm0, xmm0, cs:__real@40c00000
    vmulss  xmm0, xmm0, dword ptr [rcx+4]
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm4, [rsp+108h+arg_18]
    vmovss  xmm4, dword ptr [rcx+18h]
    vmulss  xmm6, xmm4, dword ptr [rcx]
    vsubss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm5, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm0, dword ptr [rcx+4]
    vsubss  xmm3, xmm3, xmm1
    vmulss  xmm2, xmm3, cs:__real@3e800000
    vmulss  xmm1, xmm6, dword ptr [rcx+10h]
    vmovss  dword ptr [rdx+0A0h], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm5
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm2, cs:__real@bf9cc471
    vmulss  xmm3, xmm4, dword ptr [rcx+10h]
    vmovss  xmm4, dword ptr [rcx+20h]
    vmulss  xmm0, xmm5, dword ptr [rcx]
    vmulss  xmm2, xmm5, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+0A4h], xmm1
    vaddss  xmm1, xmm0, xmm10
    vaddss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm0, dword ptr [rcx+8]
    vmulss  xmm0, xmm4, [rsp+108h+var_F8]
    vmovss  [rsp+108h+var_F4], xmm1
    vmulss  xmm1, xmm1, dword ptr [rcx+14h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm4, [rsp+108h+var_E8]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm1, cs:__real@bfca62c2
    vmovss  dword ptr [rdx+0A8h], xmm2
    vmulss  xmm2, xmm9, dword ptr [rcx+14h]
    vmovaps xmm9, xmm4
    vmovss  xmm4, dword ptr [rcx+14h]
    vmulss  xmm0, xmm9, [rsp+108h+var_E4]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm1, xmm1, cs:__real@3fca62c2
    vsubss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rdx+0ACh], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm0, cs:__real@4077def6
    vmulss  xmm1, xmm2, dword ptr [rcx+14h]
    vmulss  xmm0, xmm1, xmm9
    vmovss  dword ptr [rdx+0B0h], xmm0
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm0, xmm12, xmm9
    vaddss  xmm1, xmm1, xmm0
    vmovaps xmm12, xmm5
    vmulss  xmm2, xmm11, xmm9
    vmulss  xmm3, xmm2, cs:__real@bfca62c2
    vmulss  xmm2, xmm1, cs:__real@3fca62c2
    vmovss  xmm11, dword ptr [rcx+18h]
    vmulss  xmm0, xmm11, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vsubss  xmm3, xmm3, xmm2
    vmulss  xmm2, xmm12, dword ptr [rcx+10h]
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm12, dword ptr [rcx+4]
    vmulss  xmm0, xmm0, xmm4
    vmulss  xmm1, xmm6, xmm4
    vmovss  dword ptr [rdx+0B4h], xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm14, xmm9
    vaddss  xmm2, xmm4, xmm1
    vmovss  xmm4, cs:__real@3f9cc471
    vmulss  xmm1, xmm10, dword ptr [rcx+10h]
    vmovss  xmm10, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm13, xmm9
    vmovss  xmm9, cs:__real@40800000
    vmovss  xmm13, cs:__real@41000000
    vsubss  xmm2, xmm2, xmm0
    vmovss  dword ptr [rdx+0B8h], xmm2
    vmulss  xmm2, xmm1, xmm4
    vmulss  xmm0, xmm14, xmm11
    vmulss  xmm1, xmm0, xmm4
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm12, [rsp+108h+var_F8]
    vmulss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm0, [rsp+108h+arg_18]
    vmulss  xmm0, xmm0, cs:__real@40400000
    vaddss  xmm5, xmm0, [rsp+108h+arg_10]
    vmovss  dword ptr [rdx+0BCh], xmm1
    vmulss  xmm0, xmm10, xmm13
    vmulss  xmm6, xmm0, xmm11
    vmulss  xmm0, xmm12, xmm12
    vmulss  xmm4, xmm0, xmm9
    vmulss  xmm0, xmm10, [rsp+108h+var_100]
    vmulss  xmm0, xmm0, dword ptr [rcx+4]
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm14, xmm1, xmm9
    vmulss  xmm1, xmm5, dword ptr [rcx+10h]
    vaddss  xmm7, xmm14, [rsp+108h+arg_0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [rcx+10h]
    vmulss  xmm0, xmm1, xmm1
    vaddss  xmm0, xmm7, xmm0
    vsubss  xmm2, xmm0, xmm4
    vmulss  xmm1, xmm2, xmm1
    vsubss  xmm3, xmm3, xmm1
    vmulss  xmm0, xmm3, cs:__real@be464bf8
    vmulss  xmm1, xmm12, xmm9
    vmovss  xmm12, dword ptr [rcx+20h]
    vmovss  dword ptr [rdx+0C0h], xmm0
    vmovss  xmm0, [rsp+108h+var_E8]
    vaddss  xmm0, xmm0, [rsp+108h+var_E4]
    vmulss  xmm3, xmm1, xmm12
    vmovss  [rsp+108h+var_DC], xmm14
    vmovss  [rsp+108h+var_108], xmm4
    vmovss  [rsp+108h+var_C0], xmm3
    vmulss  xmm2, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm11, [rsp+108h+var_E0]
    vmulss  xmm1, xmm0, xmm9
    vsubss  xmm4, xmm2, xmm1
    vmovss  xmm1, cs:__real@40400000
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmulss  xmm0, xmm2, dword ptr [rcx+14h]
    vaddss  xmm1, xmm0, xmm15
    vsubss  xmm3, xmm1, xmm3
    vmulss  xmm2, xmm3, xmm10
    vmulss  xmm3, xmm8, dword ptr [rcx+8]
    vmovss  xmm8, [rsp+108h+var_104]
    vaddss  xmm0, xmm4, xmm2
    vmulss  xmm0, xmm0, cs:__real@3ea1e89b
    vmovss  dword ptr [rdx+0C4h], xmm0
    vmovss  xmm0, [rsp+108h+var_F0]
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm1, xmm1, dword ptr [rcx+14h]
    vmulss  xmm0, xmm8, cs:__real@40400000
    vaddss  xmm0, xmm0, [rsp+108h+arg_8]
    vmulss  xmm13, xmm13, dword ptr [rcx+18h]
    vmovss  [rsp+108h+var_E0], xmm3
    vmulss  xmm2, xmm12, xmm12
    vmulss  xmm11, xmm2, xmm9
    vmovss  xmm9, dword ptr [rcx+14h]
    vsubss  xmm4, xmm0, xmm11
    vmulss  xmm0, xmm3, dword ptr [rcx+14h]
    vmulss  xmm2, xmm1, xmm12
    vmulss  xmm1, xmm4, dword ptr [rcx+10h]
    vsubss  xmm3, xmm2, xmm0
    vsubss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm2, cs:__real@3e800000
    vaddss  xmm1, xmm8, [rsp+108h+arg_8]
    vmovss  xmm8, [rsp+108h+var_100]
    vmovss  dword ptr [rdx+0C8h], xmm0
    vsubss  xmm12, xmm1, xmm11
    vmulss  xmm1, xmm12, xmm9
    vmulss  xmm0, xmm1, cs:__real@3f1cc471
    vmulss  xmm1, xmm8, [rsp+108h+var_D8]
    vmovss  dword ptr [rdx+0CCh], xmm0
    vmulss  xmm1, xmm1, xmm9
    vmulss  xmm0, xmm13, xmm9
    vmulss  xmm2, xmm0, dword ptr [rcx+20h]
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm10
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm2, cs:__real@3e800000
    vmovss  dword ptr [rdx+0D0h], xmm1
    vmovss  xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm8, xmm10
    vmulss  xmm3, xmm0, xmm1
    vmulss  xmm0, xmm1, [rsp+108h+var_FC]
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm14, xmm9
    vmovss  xmm14, cs:__real@3fa1e89b
    vmulss  xmm1, xmm5, xmm9
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm9, [rsp+108h+arg_0]
    vsubss  xmm3, xmm4, xmm0
    vsubss  xmm2, xmm3, xmm1
    vmovss  xmm3, dword ptr [rcx+10h]
    vmovss  xmm1, dword ptr [rcx+14h]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm9, xmm0, cs:__real@40400000
    vmulss  xmm0, xmm9, xmm1
    vmulss  xmm1, xmm1, [rsp+108h+var_108]
    vsubss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rcx+20h]
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm14, dword ptr [rcx+10h]
    vmulss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm4, xmm2, cs:__real@3e21e89b
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmulss  xmm0, xmm8, [rsp+108h+var_EC]
    vmulss  xmm0, xmm0, dword ptr [rcx+10h]
    vaddss  xmm3, xmm4, xmm2
    vmovss  dword ptr [rdx+0D4h], xmm3
    vmovss  xmm3, [rsp+108h+arg_18]
    vaddss  xmm6, xmm3, [rsp+108h+arg_10]
    vmulss  xmm1, xmm6, xmm10
    vsubss  xmm3, xmm1, xmm0
    vmovss  xmm5, dword ptr [rcx+18h]
    vmulss  xmm8, xmm6, cs:__real@3ef2dce8
    vmovss  xmm6, dword ptr [rcx+1Ch]
    vmulss  xmm1, xmm13, dword ptr [rcx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+1Ch]
    vmovss  xmm14, dword ptr [rcx+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm7, xmm9
    vsubss  xmm1, xmm0, [rsp+108h+var_108]
    vmovss  xmm9, cs:__real@3f72dce8
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm3, xmm4, xmm2
    vmulss  xmm0, xmm3, cs:__real@be464bf8
    vmovss  xmm3, dword ptr [rcx+10h]
    vmulss  xmm2, xmm9, dword ptr [rcx]
    vmovss  dword ptr [rdx+0D8h], xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm0, xmm0, [rsp+108h+arg_0]
    vmulss  xmm7, xmm0, cs:__real@3ef2dce8
    vmulss  xmm1, xmm9, xmm10
    vmulss  xmm0, xmm1, xmm5
    vmulss  xmm3, xmm0, xmm3
    vmulss  xmm1, xmm2, xmm5
    vmulss  xmm0, xmm1, [rsp+108h+var_EC]
    vaddss  xmm3, xmm3, xmm0
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm9
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm2, xmm8, xmm6
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm0, cs:__real@3ea1e89b
    vsubss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rdx+0DCh], xmm2
    vmulss  xmm0, xmm6, xmm10
    vmulss  xmm10, xmm0, dword ptr [rcx+14h]
    vmulss  xmm0, xmm5, [rsp+108h+var_D4]
    vmulss  xmm4, xmm0, cs:__real@bf464bf8
    vmulss  xmm0, xmm6, dword ptr [rcx]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  xmm6, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rcx+10h]
    vmulss  xmm5, xmm14, dword ptr [rcx]
    vmovss  xmm6, cs:__real@3f464bf8
    vaddss  xmm3, xmm5, xmm0
    vmulss  xmm0, xmm3, dword ptr [rcx+20h]
    vaddss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm3, xmm6
    vsubss  xmm0, xmm4, xmm1
    vmovss  xmm1, [rsp+108h+var_104]
    vmovss  dword ptr [rdx+0E0h], xmm0
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm4, xmm0, xmm0
    vaddss  xmm0, xmm1, [rsp+108h+arg_8]
    vmulss  xmm2, xmm4, cs:__real@40000000
    vmovss  xmm1, [rsp+108h+var_D0]
    vmulss  xmm1, xmm1, cs:__real@3f9cc471
    vsubss  xmm5, xmm0, xmm2
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmulss  xmm0, xmm5, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm0, cs:__real@3f1cc471
    vmovss  xmm1, [rsp+108h+var_104]
    vaddss  xmm0, xmm3, xmm2
    vmovss  xmm3, dword ptr [rcx+20h]
    vmovss  dword ptr [rdx+0E4h], xmm0
    vaddss  xmm0, xmm1, [rsp+108h+arg_8]
    vmulss  xmm1, xmm0, cs:__real@3fc00000
    vmulss  xmm0, xmm1, xmm3
    vmovss  xmm1, [rsp+108h+var_CC]
    vmulss  xmm1, xmm1, cs:__real@3f9cc471
    vmulss  xmm4, xmm4, xmm3
    vsubss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm5, dword ptr [rcx+18h]
    vmovss  dword ptr [rdx+0E8h], xmm2
    vmulss  xmm2, xmm0, cs:__real@3f1cc471
    vmulss  xmm3, xmm1, xmm3
    vmovss  xmm5, cs:__real@3ec64bf8
    vaddss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rdx+0ECh], xmm1
    vmovaps xmm15, xmm14
    vmovss  xmm14, dword ptr [rcx]
    vmulss  xmm1, xmm14, xmm6
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmulss  xmm1, xmm6, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm15, xmm6
    vmulss  xmm3, xmm0, dword ptr [rcx+1Ch]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm4, xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmulss  xmm0, xmm2, dword ptr [rcx+14h]
    vmulss  xmm1, xmm6, dword ptr [rcx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+1Ch]
    vmovss  xmm1, [rsp+108h+var_C8]
    vmulss  xmm1, xmm1, dword ptr [rcx+20h]
    vsubss  xmm3, xmm4, xmm0
    vmulss  xmm0, xmm2, dword ptr [rcx+14h]
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm3, dword ptr [rcx+18h]
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm1, xmm4, xmm0
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+0F0h], xmm1
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm2, xmm0, cs:__real@3ea1e89b
    vsubss  xmm0, xmm8, xmm2
    vmulss  xmm2, xmm4, dword ptr [rcx+10h]
    vsubss  xmm1, xmm0, xmm7
    vmovss  xmm7, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm1, xmm3
    vmulss  xmm1, xmm15, xmm14
    vaddss  xmm0, xmm1, xmm2
    vmulss  xmm2, xmm0, xmm9
    vmulss  xmm0, xmm2, xmm7
    vsubss  xmm4, xmm3, xmm0
    vmovss  xmm3, dword ptr [rcx+18h]
    vmulss  xmm8, xmm3, cs:__real@3fc64bf8
    vmulss  xmm1, xmm3, xmm9
    vmovss  xmm9, dword ptr [rcx+14h]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx+0F4h], xmm0
    vmulss  xmm0, xmm5, dword ptr [rcx+0Ch]
    vmovss  xmm5, [rsp+108h+var_DC]
    vmulss  xmm2, xmm8, xmm7
    vmovss  xmm7, dword ptr [rcx+10h]
    vmulss  xmm1, xmm0, xmm7
    vmovss  xmm0, [rsp+108h+arg_10]
    vmulss  xmm0, xmm0, cs:__real@3f14b8fa
    vsubss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm0, xmm15
    vmulss  xmm3, xmm2, xmm14
    vsubss  xmm2, xmm5, [rsp+108h+arg_18]
    vaddss  xmm0, xmm2, [rsp+108h+arg_0]
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm7, xmm7
    vaddss  xmm1, xmm0, xmm3
    vsubss  xmm3, xmm1, [rsp+108h+var_108]
    vmulss  xmm2, xmm3, xmm15
    vmulss  xmm0, xmm2, cs:__real@3e464bf8
    vmovss  xmm3, [rsp+108h+var_C4]
    vaddss  xmm1, xmm4, xmm0
    vmovss  xmm0, [rsp+108h+var_E8]
    vaddss  xmm2, xmm0, [rsp+108h+var_E4]
    vmulss  xmm0, xmm3, dword ptr [rcx+18h]
    vmulss  xmm2, xmm2, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+0F8h], xmm1
    vmulss  xmm1, xmm0, cs:__real@40800000
    vsubss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm15, cs:__real@40400000
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm1, xmm0, xmm1
    vsubss  xmm3, xmm1, [rsp+108h+var_C0]
    vmulss  xmm2, xmm3, xmm14
    vaddss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, cs:__real@3ea1e89b
    vmovss  xmm0, [rsp+108h+arg_8]
    vmulss  xmm2, xmm0, cs:__real@40400000
    vaddss  xmm2, xmm2, [rsp+108h+var_104]
    vmovss  xmm6, cs:__real@40000000
    vsubss  xmm4, xmm2, xmm11
    vmovss  xmm11, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+0FCh], xmm1
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm1, cs:__real@41000000
    vmulss  xmm0, xmm0, dword ptr [rcx+8]
    vmulss  xmm3, xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm6, xmm7
    vmulss  xmm2, xmm1, dword ptr [rcx+8]
    vmulss  xmm6, xmm6, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm2, xmm9
    vsubss  xmm3, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm15
    vmovss  xmm15, [rsp+108h+arg_10]
    vsubss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm2, cs:__real@3e800000
    vmulss  xmm1, xmm12, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, cs:__real@3f1cc471
    vmulss  xmm1, xmm6, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+100h], xmm0
    vmulss  xmm0, xmm13, dword ptr [rcx+8]
    vmulss  xmm3, xmm0, dword ptr [rcx+20h]
    vmovss  xmm13, [rsp+108h+var_100]
    vmovss  dword ptr [rdx+104h], xmm2
    vmulss  xmm2, xmm1, xmm9
    vsubss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm4, xmm14
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, cs:__real@3e800000
    vmulss  xmm0, xmm13, dword ptr [rcx+0Ch]
    vmulss  xmm9, xmm0, xmm9
    vmovss  xmm0, [rsp+108h+arg_10]
    vmulss  xmm1, xmm0, cs:__real@40400000
    vaddss  xmm0, xmm1, [rsp+108h+arg_18]
    vmovss  dword ptr [rdx+108h], xmm2
    vmulss  xmm2, xmm0, xmm11
    vmovss  xmm0, [rsp+108h+arg_0]
    vmulss  xmm12, xmm0, cs:__real@40400000
    vmulss  xmm1, xmm5, xmm11
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm11
    vsubss  xmm4, xmm3, xmm0
    vmovaps xmm1, xmm7
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm11
    vmovss  xmm11, [rsp+108h+var_108]
    vmulss  xmm0, xmm11, dword ptr [rcx+8]
    vsubss  xmm2, xmm4, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmovss  xmm0, [rsp+108h+var_FC]
    vmulss  xmm1, xmm0, dword ptr [rcx+14h]
    vmulss  xmm0, xmm14, cs:__real@41000000
    vmovss  xmm14, cs:__real@3fa1e89b
    vaddss  xmm3, xmm2, xmm9
    vmulss  xmm2, xmm0, dword ptr [rcx+18h]
    vmulss  xmm0, xmm14, dword ptr [rcx+4]
    vmovss  xmm14, [rsp+108h+arg_18]
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm2, dword ptr [rcx+20h]
    vsubss  xmm3, xmm4, xmm1
    vmulss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmulss  xmm5, xmm3, cs:__real@3e21e89b
    vsubss  xmm0, xmm14, [rsp+108h+var_DC]
    vaddss  xmm3, xmm5, xmm2
    vsubss  xmm1, xmm0, xmm12
    vmovaps xmm5, xmm7
    vmulss  xmm12, xmm5, xmm5
    vsubss  xmm2, xmm1, xmm12
    vmovss  dword ptr [rdx+10Ch], xmm3
    vaddss  xmm3, xmm2, xmm11
    vmulss  xmm0, xmm3, dword ptr [rcx]
    vmovss  xmm11, dword ptr [rcx+4]
    vmulss  xmm4, xmm0, cs:__real@be464bf8
    vmulss  xmm0, xmm15, dword ptr [rcx]
    vmulss  xmm1, xmm6, xmm11
    vmulss  xmm2, xmm1, xmm5
    vmovss  xmm5, dword ptr [rcx+18h]
    vmovss  xmm7, dword ptr [rcx+1Ch]
    vsubss  xmm0, xmm0, xmm2
    vmulss  xmm3, xmm0, cs:__real@3e464bf8
    vmulss  xmm1, xmm8, xmm11
    vmovss  xmm8, [rsp+108h+var_BC]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm0, xmm3, xmm2
    vsubss  xmm3, xmm4, xmm0
    vmovss  dword ptr [rdx+110h], xmm3
    vmulss  xmm1, xmm6, xmm5
    vmovss  xmm6, dword ptr [rcx+10h]
    vmulss  xmm4, xmm1, xmm6
    vmulss  xmm1, xmm15, xmm7
    vmulss  xmm0, xmm13, xmm5
    vmulss  xmm2, xmm0, xmm11
    vsubss  xmm3, xmm4, xmm2
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm7, xmm8
    vmovss  xmm7, cs:__real@3f1cc471
    vaddss  xmm2, xmm4, xmm0
    vmovss  xmm0, [rsp+108h+var_F4]
    vmulss  xmm3, xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm2, xmm7
    vmovss  dword ptr [rdx+114h], xmm1
    vmulss  xmm0, xmm5, xmm6
    vmulss  xmm0, xmm0, dword ptr [rcx+14h]
    vsubss  xmm1, xmm3, xmm0
    vsubss  xmm4, xmm1, xmm10
    vmovss  xmm10, [rsp+108h+var_104]
    vmovaps xmm1, xmm11
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vmovss  xmm11, dword ptr [rcx+20h]
    vmulss  xmm2, xmm0, xmm11
    vmulss  xmm0, xmm6, dword ptr [rcx+0Ch]
    vsubss  xmm6, xmm10, [rsp+108h+arg_8]
    vmulss  xmm0, xmm0, xmm11
    vaddss  xmm3, xmm4, xmm2
    vmovss  xmm4, cs:__real@3fca62c2
    vmulss  xmm2, xmm6, dword ptr [rcx+1Ch]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm11, [rsp+108h+var_E0]
    vmovss  dword ptr [rdx+118h], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm3, xmm1, cs:__real@3f4a62c2
    vmulss  xmm2, xmm4, dword ptr [rcx+10h]
    vmulss  xmm0, xmm2, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm3, xmm3, xmm1
    vmovss  xmm1, [rsp+108h+arg_8]
    vsubss  xmm0, xmm1, xmm10
    vmulss  xmm0, xmm0, cs:__real@3ff7def6
    vmovss  xmm10, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm13, dword ptr [rcx+8]
    vmulss  xmm0, xmm0, xmm11
    vmovss  dword ptr [rdx+120h], xmm1
    vmovss  dword ptr [rdx+11Ch], xmm3
    vmulss  xmm2, xmm6, xmm5
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm3, xmm1, cs:__real@3f4a62c2
    vmulss  xmm2, xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm2, xmm10
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm5, dword ptr [rcx]
    vmulss  xmm2, xmm0, dword ptr [rcx+8]
    vaddss  xmm3, xmm3, xmm1
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+124h], xmm3
    vsubss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm5, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, xmm10
    vsubss  xmm4, xmm3, xmm1
    vmovss  xmm3, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm3, dword ptr [rcx+10h]
    vmulss  xmm1, xmm11, [rsp+108h+var_B8]
    vmulss  xmm0, xmm0, xmm10
    vaddss  xmm2, xmm4, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm10, cs:__real@bf9cc471
    vmulss  xmm0, xmm10, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+10h]
    vmulss  xmm0, xmm13, dword ptr [rcx+4]
    vmulss  xmm0, xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm13, dword ptr [rcx+8]
    vmulss  xmm3, xmm1, xmm3
    vmovss  dword ptr [rdx+128h], xmm2
    vmulss  xmm2, xmm5, [rsp+108h+var_B4]
    vmovss  xmm5, cs:__real@3f9cc471
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm15, cs:__real@40400000
    vmulss  xmm4, xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm3, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm0, xmm2, cs:__real@40c00000
    vmulss  xmm0, xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+10h]
    vmulss  xmm2, xmm14, cs:__real@40400000
    vaddss  xmm2, xmm2, [rsp+108h+arg_0]
    vmovss  xmm14, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm12, cs:__real@40400000
    vmovss  xmm12, dword ptr [rcx+14h]
    vsubss  xmm0, xmm2, xmm0
    vmovss  dword ptr [rdx+12Ch], xmm3
    vsubss  xmm3, xmm4, xmm1
    vmovss  xmm4, dword ptr [rcx+4]
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm14, dword ptr [rcx+10h]
    vsubss  xmm3, xmm3, xmm1
    vmulss  xmm2, xmm3, cs:__real@3e800000
    vmulss  xmm0, xmm0, xmm13
    vmulss  xmm3, xmm0, xmm5
    vmulss  xmm0, xmm4, dword ptr [rcx]
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm0, xmm12, [rsp+108h+var_F8]
    vmovss  dword ptr [rdx+130h], xmm2
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm5, cs:__real@bff7def6
    vmulss  xmm0, xmm5, dword ptr [rcx+10h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm3, xmm1, xmm12
    vmovss  dword ptr [rdx+134h], xmm2
    vmulss  xmm2, xmm6, dword ptr [rcx+4]
    vmulss  xmm0, xmm2, cs:__real@3f77def6
    vsubss  xmm1, xmm3, xmm0
    vmovss  xmm0, [rsp+108h+var_104]
    vmulss  xmm2, xmm0, cs:__real@40400000
    vmovss  dword ptr [rdx+138h], xmm1
    vmovss  xmm1, [rsp+108h+arg_8]
    vsubss  xmm2, xmm1, xmm2
    vmulss  xmm0, xmm2, xmm13
    vmulss  xmm1, xmm0, cs:__real@bf4a62c2
    vmovss  dword ptr [rdx+13Ch], xmm1
    vmulss  xmm1, xmm6, dword ptr [rcx]
    vmulss  xmm2, xmm14, xmm5
    vmulss  xmm0, xmm2, xmm13
    vmulss  xmm2, xmm1, cs:__real@3f77def6
    vmulss  xmm1, xmm10, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, xmm12
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovss  dword ptr [rdx+140h], xmm0
    vmulss  xmm0, xmm13, [rsp+108h+var_B4]
    vsubss  xmm1, xmm0, xmm9
    vmulss  xmm0, xmm14, cs:__real@40c00000
    vmulss  xmm3, xmm2, xmm12
    vmulss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm0, dword ptr [rcx+4]
    vsubss  xmm3, xmm3, xmm2
    vmulss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovaps xmm1, xmm15
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vmovss  dword ptr [rdx+144h], xmm3
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm8, dword ptr [rcx]
    vmulss  xmm1, xmm0, cs:__real@40400000
    vmovaps xmm6, xmmword ptr [rax-18h]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, [rsp+108h+var_98]
    vmovaps xmm15, [rsp+108h+var_A8]
    vsubss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm2, cs:__real@3e800000
    vmovss  dword ptr [rdx+148h], xmm3
  }
}

/*
==============
ByteToDir
==============
*/
void ByteToDir(const int b, vec3_t *dir)
{
  __int64 v2; 
  int v8; 

  v2 = b;
  _RBX = dir;
  if ( (unsigned int)b <= 0xA1 )
    goto LABEL_5;
  v8 = 161;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 567, ASSERT_TYPE_ASSERT, "( 0 ) <= ( b ) && ( b ) <= ( (162 - 1) )", "b not in [0, (NUMVERTEXNORMALS - 1)]\n\t%i not in [%i, %i]", b, 0i64, v8) )
    __debugbreak();
  if ( (unsigned int)v2 > 0xA1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
LABEL_5:
    _RBX->v[0] = bytedirs[v2].v[0];
    _RBX->v[1] = bytedirs[v2].v[1];
    _RBX->v[2] = bytedirs[v2].v[2];
  }
}

/*
==============
CalcRotationQuatFromVectors
==============
*/
void CalcRotationQuatFromVectors(const vec3_t *vec1, const vec3_t *vec2, vec4_t *quat)
{
  bool v12; 
  bool v25; 
  _BYTE v56[32]; 
  char v60; 
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
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rsp+110h+var_A8+8], xmm13
  }
  v12 = (unsigned __int64)v56 == _security_cookie;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm4, xmm6
  }
  _RSI = vec2;
  _RDI = vec1;
  if ( (unsigned __int64)v56 == _security_cookie )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1361, ASSERT_TYPE_ASSERT, "(Vec3Length( vec1 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec1 ) > 0.0f");
    v12 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm6
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1362, ASSERT_TYPE_ASSERT, "(Vec3Length( vec2 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec2 ) > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, dword ptr [rsi+4]
    vmovss  xmm9, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rsi]
    vmovss  xmm11, dword ptr [rdi+8]
    vmovss  xmm12, dword ptr [rsi+8]
    vmulss  xmm1, xmm10, xmm9
    vmovss  dword ptr [rbp+57h+v1+4], xmm6
    vmovss  dword ptr [rbp+57h+v1+8], xmm6
    vmovss  dword ptr [rbp+57h+var_D0], xmm6
    vmovss  dword ptr [rbp+57h+var_D0+8], xmm6
    vmovss  xmm6, dword ptr [rdi+4]
    vmulss  xmm0, xmm8, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm11
    vaddss  xmm13, xmm2, xmm1
    vcvtss2sd xmm0, xmm13, xmm13
    vcomisd xmm0, cs:__real@3feffffde7210be9
    vmovss  dword ptr [rbp+57h+v1], xmm7
    vmovss  dword ptr [rbp+57h+var_D0+4], xmm7
  }
  *(_QWORD *)quat->v = 0i64;
  quat->v[2] = 0.0;
  quat->v[3] = 1.0;
  _R11 = &v60;
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
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(double t, double arcAngle, const vec3_t *center, double radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  float s; 
  float c; 

  _RDI = right;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm9
    vmovaps [rsp+88h+var_48], xmm10
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm6, dword ptr [rdi+8]
    vmulss  xmm4, xmm2, xmm2
    vmovaps xmm10, xmm1
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm5, xmm4, xmm2
    vmulss  xmm4, xmm6, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm9, xmm3
    vaddss  xmm3, xmm5, xmm4
    vsubss  xmm1, xmm3, xmm6
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vmovaps [rsp+88h+var_58], xmm11
    vmovaps xmm11, xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )") )
    __debugbreak();
  _RBX = up;
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
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm11, xmm10; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  _RAX = outVert;
  __asm
  {
    vmulss  xmm2, xmm9, [rsp+88h+s]
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vaddss  xmm5, xmm0, dword ptr [rsi]
    vmulss  xmm6, xmm9, [rsp+88h+c]
    vmovaps xmm9, [rsp+88h+var_38]
    vmovaps xmm10, [rsp+88h+var_48]
    vmovaps xmm11, [rsp+88h+var_58]
    vmovss  dword ptr [rax], xmm5
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vaddss  xmm4, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rax+4], xmm4
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rax+8], xmm3
    vmulss  xmm0, xmm6, dword ptr [rdi]
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm2, xmm6, dword ptr [rdi+4]
    vaddss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax+4], xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+8]
    vmovaps xmm6, [rsp+88h+var_28]
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rax+8], xmm2
  }
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(double t, double arcAngle, const vec3_t *center, double radius, const vec3_t *dir, vec3_t *outVert)
{
  char v37; 
  bool v58; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  char v96; 
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
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0E8h+var_88], xmm14
  }
  _RAX = dir;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  _RBX = outVert;
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm5, dword ptr [rax+4]
    vmovss  xmm4, dword ptr [rax]
    vmovss  xmm6, dword ptr [rax+8]
    vmovaps xmm14, xmm1
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vmovaps xmm10, xmm3
    vmulss  xmm3, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0E8h+src], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0E8h+src+8], xmm0
    vmovss  dword ptr [rsp+0E8h+src+4], xmm1
  }
  _RDI = center;
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+0E8h+dst+8]
    vmovss  xmm5, dword ptr [rsp+0E8h+dst+4]
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+src+4]
    vmovss  xmm3, dword ptr [rsp+0E8h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+src+8]
    vmulss  xmm2, xmm5, dword ptr [rsp+0E8h+src]
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+src+8]
    vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+src]
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+src+4]
    vsubss  xmm9, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm11
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v37 )
  {
    v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )");
    v37 = 0;
    if ( v58 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm11
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm13, xmm14; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm5, xmm10, [rsp+0E8h+s]
    vmulss  xmm6, xmm10, [rsp+0E8h+c]
    vmulss  xmm0, xmm5, xmm7
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+dst]
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm1, xmm5, xmm8
    vaddss  xmm3, xmm1, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+dst+4]
    vaddss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  xmm4, dword ptr [rdi+8]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm1, xmm5, xmm9
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+dst+8]
    vaddss  xmm2, xmm1, xmm4
    vaddss  xmm2, xmm2, xmm0
    vmovss  dword ptr [rbx+8], xmm2
  }
  _R11 = &v96;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
}

/*
==============
CalculatePointOnArc
==============
*/

void __fastcall CalculatePointOnArc(double t, double startAngle, double deltaAngle, const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, vec3_t *outVert)
{
  float s; 
  float c; 

  _RDI = right;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm9
    vmovaps [rsp+88h+var_48], xmm10
    vmovss  xmm3, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm6, dword ptr [rdi+8]
    vmulss  xmm4, xmm3, xmm3
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm5, xmm4, xmm3
    vmulss  xmm4, xmm6, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm10, xmm1
    vaddss  xmm3, xmm5, xmm4
    vsubss  xmm1, xmm3, xmm6
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vmovaps [rsp+88h+var_58], xmm11
    vmovaps xmm9, xmm2
    vmovaps xmm11, xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4567, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( right ))", (const char *)&queryFormat, "Vec3IsNormalized( right )") )
    __debugbreak();
  _RBX = up;
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
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4568, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( up ))", (const char *)&queryFormat, "Vec3IsNormalized( up )") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm11, xmm9
    vaddss  xmm0, xmm0, xmm10; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  _RAX = outVert;
  __asm
  {
    vmovss  xmm2, [rsp+88h+radius]
    vmulss  xmm3, xmm2, [rsp+88h+s]
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vaddss  xmm5, xmm0, dword ptr [rsi]
    vmulss  xmm6, xmm2, [rsp+88h+c]
    vmovaps xmm9, [rsp+88h+var_38]
    vmovaps xmm10, [rsp+88h+var_48]
    vmovaps xmm11, [rsp+88h+var_58]
    vmovss  dword ptr [rax], xmm5
    vmulss  xmm0, xmm3, dword ptr [rbx+4]
    vaddss  xmm4, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rax+4], xmm4
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vaddss  xmm3, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rax+8], xmm3
    vmulss  xmm0, xmm6, dword ptr [rdi]
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm2, xmm6, dword ptr [rdi+4]
    vaddss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax+4], xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+8]
    vmovaps xmm6, [rsp+88h+var_28]
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rax+8], xmm2
  }
}

/*
==============
ClosestPointOnConicSectionOfSphereToPoint
==============
*/

void __fastcall ClosestPointOnConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, double radius, const vec3_t *point)
{
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = coneOrg;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
  }
  _RCX = point;
  __asm
  {
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm12, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm14, xmm0, dword ptr [rdi+8]
    vmulss  xmm3, xmm12, dword ptr [rsi+4]
    vmovss  xmm11, dword ptr [rcx]
    vsubss  xmm13, xmm11, xmm4
    vmulss  xmm0, xmm13, xmm13
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm13, dword ptr [rsi]
    vmulss  xmm1, xmm14, xmm14
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm1, xmm14, dword ptr [rsi+8]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm7
    vmulss  xmm0, xmm3, xmm3
    vsubss  xmm2, xmm5, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm6
    vsubss  xmm1, xmm0, xmm1
    vsqrtss xmm10, xmm1, xmm1
    vsqrtss xmm9, xmm2, xmm2
    vmulss  xmm1, xmm10, xmm9
    vmulss  xmm0, xmm3, xmm6
    vsubss  xmm2, xmm1, xmm0
    vcomiss xmm2, xmm7
    vmovaps xmm14, [rsp+0C8h+var_98]
  }
  _R11 = &v59;
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
}

/*
==============
ClosestPointsTwoSegs
==============
*/
void ClosestPointsTwoSegs(const vec3_t *s00, const vec3_t *s01, const vec3_t *s10, const vec3_t *s11, float *t0, float *t1)
{
  bool v22; 
  bool v23; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = t0;
  _RBX = t1;
  _RSI = s11;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _R14 = s01;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  _R15 = s00;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
    vmovaps [rsp+0E8h+var_A8], xmm14
    vmovaps [rsp+0E8h+var_B8], xmm15
  }
  if ( !t0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3346, ASSERT_TYPE_ASSERT, "(t0)", (const char *)&queryFormat, "t0") )
    __debugbreak();
  v22 = t1 == NULL;
  if ( !t1 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3347, ASSERT_TYPE_ASSERT, "(t1)", (const char *)&queryFormat, "t1");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr [r15]
    vmovss  xmm6, dword ptr [r15+4]
    vsubss  xmm4, xmm6, dword ptr [rbp+4]
    vmovss  xmm5, dword ptr [r15+8]
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm10, xmm1, xmm6
    vmovss  xmm1, dword ptr [rsi]
    vsubss  xmm12, xmm1, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rsi+8]
    vsubss  xmm9, xmm1, dword ptr [rbp+8]
    vsubss  xmm13, xmm0, xmm7
    vsubss  xmm7, xmm7, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm11, xmm0, xmm5
    vsubss  xmm5, xmm5, dword ptr [rbp+8]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm8, xmm0, dword ptr [rbp+4]
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm3, xmm8, xmm10
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm13
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm9, xmm11
    vaddss  xmm15, xmm2, xmm1
    vmulss  xmm3, xmm8, xmm8
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm4, xmm10
    vmulss  xmm0, xmm7, xmm13
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm14, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm11
    vmulss  xmm3, xmm4, xmm8
    vmulss  xmm0, xmm7, xmm12
    vaddss  xmm10, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm15, xmm15
    vmulss  xmm1, xmm5, xmm9
    vmulss  xmm3, xmm14, xmm6
    vsubss  xmm4, xmm3, xmm0
    vcvtss2sd xmm0, xmm4, xmm4
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vaddss  xmm7, xmm2, xmm1
    vmovaps xmm5, xmm4
    vmulss  xmm1, xmm7, xmm15
    vmulss  xmm0, xmm10, xmm14
    vsubss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm15
    vmulss  xmm2, xmm7, xmm6
    vsubss  xmm2, xmm2, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm3, xmm1
    vcomiss xmm3, xmm4
  }
  if ( !v22 )
  {
    __asm
    {
      vmovaps xmm3, xmm4
      vaddss  xmm2, xmm7, xmm15
      vmovaps xmm4, xmm14
    }
  }
  __asm
  {
    vcomiss xmm2, xmm1
    vcomiss xmm2, xmm4
  }
  if ( !v22 )
  {
    __asm
    {
      vsubss  xmm3, xmm15, xmm10
      vcomiss xmm3, xmm1
      vmovaps xmm2, xmm4
      vcomiss xmm3, xmm6
      vmovaps xmm3, xmm5
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@38d1b717
    vandps  xmm0, xmm3, xmm6
    vcomiss xmm0, xmm7
    vdivss  xmm3, xmm3, xmm5
    vandps  xmm0, xmm2, xmm6
    vcomiss xmm0, xmm7
    vmovss  dword ptr [rdi], xmm3
    vdivss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx], xmm0
    vmovaps xmm14, [rsp+0E8h+var_A8]
  }
  _R11 = &v101;
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
    vmovaps xmm15, [rsp+0E8h+var_B8]
  }
}

/*
==============
SH4VisToScaledCone::Convert
==============
*/
void SH4VisToScaledCone::Convert(SH4VisToScaledCone *this, const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos, float *scale)
{
  const float *v72; 
  int v74; 
  int v100; 
  int v121; 
  bool v133; 
  __int64 v167; 
  float rotMat[2]; 
  float pOut[84]; 
  char v180; 
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
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm4, dword ptr [rdx+8]
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm8, cs:__real@80000000
  }
  _R15 = y;
  _R14 = x;
  _R12 = z;
  _RSI = angleCos;
  _RBP = scale;
  __asm
  {
    vxorps  xmm5, xmm0, xmm7
    vmovss  xmm0, dword ptr [rdx+4]
    vxorps  xmm6, xmm0, xmm7
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcomiss xmm3, cs:__real@38d1b717
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm9, xmm4, xmm1
    vmovss  [rsp+298h+var_274], xmm9
    vmulss  xmm14, xmm5, xmm1
    vmulss  xmm15, xmm6, xmm1
    vandps  xmm2, xmm14, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm0
    vxorps  xmm12, xmm12, xmm12
  }
  if ( (unsigned __int64)&v167 != _security_cookie )
  {
    __asm
    {
      vxorps  xmm4, xmm15, xmm7
      vmovaps xmm7, xmm14
      vxorps  xmm5, xmm5, xmm5
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vxorps  xmm7, xmm9, xmm7
      vmovaps xmm5, xmm15
    }
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm8, xmm5, xmm1
    vmulss  xmm6, xmm4, xmm1
    vmulss  xmm7, xmm7, xmm1
    vmulss  xmm1, xmm7, xmm9
    vmulss  xmm0, xmm8, xmm15
    vsubss  xmm5, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm9
    vmulss  xmm2, xmm14, xmm8
    vsubss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm6, xmm15
    vmulss  xmm0, xmm14, xmm7
    vsubss  xmm1, xmm3, xmm0
    vmovss  [rsp+298h+var_260], xmm1
    vmovss  [rsp+298h+rotMat], xmm5
    vmovss  [rsp+298h+var_264], xmm4
    vmovss  [rsp+298h+var_25C], xmm6
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_254], xmm8
    vmovss  [rsp+298h+var_250], xmm14
    vmovss  [rsp+298h+var_24C], xmm15
    vmovss  [rsp+298h+var_248], xmm9
  }
  BuildSHRotMat4(rotMat, pOut);
  ApplySHRotation4(pOut, v72, rotMat);
  _R10 = this->m_minimizerCoeffs;
  v74 = 0;
  __asm
  {
    vmovss  xmm9, [rsp+298h+var_260]
    vmovss  xmm8, [rsp+298h+rotMat]
    vmovss  xmm10, [rsp+298h+var_250]
    vmovss  xmm11, [rsp+298h+var_238]
    vmovsd  xmm6, qword ptr cs:__xmm@80000000000000008000000000000000
    vcvtss2sd xmm9, xmm9, xmm9
    vmulsd  xmm1, xmm9, qword ptr [r10+8]
    vcvtss2sd xmm8, xmm8, xmm8
    vmulsd  xmm0, xmm8, qword ptr [r10]
    vaddsd  xmm2, xmm1, xmm0
    vcvtss2sd xmm10, xmm10, xmm10
    vmulsd  xmm1, xmm10, qword ptr [r10+10h]
    vaddsd  xmm3, xmm2, xmm1
    vmovsd  xmm2, qword ptr [r10+20h]
    vcvtss2sd xmm11, xmm11, xmm11
    vmulsd  xmm0, xmm11, qword ptr [r10+18h]
    vxorpd  xmm4, xmm4, xmm4
    vucomisd xmm2, xmm4
  }
  _ER8 = 0;
  __asm
  {
    vaddsd  xmm1, xmm3, xmm0
    vucomisd xmm1, xmm4
    vxorpd  xmm5, xmm5, xmm5
  }
  _EDX = 1;
  __asm
  {
    vmovss  xmm7, cs:__real@3d888889
    vmovss  xmm13, cs:__real@3f000000
  }
  v100 = this->m_numDataPoints - 1;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmovss  [rsp+298h+var_278], xmm1
  }
  while ( 1 )
  {
    __asm
    {
      vmovd   xmm0, edx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, xmm13
      vcvttss2si r9d, xmm3
    }
    _RCX = 10 * _ER9;
    __asm
    {
      vmulsd  xmm1, xmm9, qword ptr [r10+rcx*8+8]
      vmulsd  xmm0, xmm8, qword ptr [r10+rcx*8]
      vaddsd  xmm2, xmm1, xmm0
      vmulsd  xmm1, xmm10, qword ptr [r10+rcx*8+10h]
      vmulsd  xmm0, xmm11, qword ptr [r10+rcx*8+18h]
      vaddsd  xmm3, xmm2, xmm1
      vmovsd  xmm2, qword ptr [r10+rcx*8+20h]
      vucomisd xmm2, xmm4
      vaddsd  xmm1, xmm3, xmm0
    }
    if ( 10 * _ER9 )
      goto LABEL_8;
    __asm { vucomisd xmm1, xmm4 }
    if ( 10 * _ER9 )
    {
LABEL_8:
      __asm
      {
        vdivsd  xmm0, xmm1, xmm2
        vxorpd  xmm0, xmm0, xmm6
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm4 }
    }
    __asm { vcomisd xmm5, xmm4 }
    if ( __CFADD__(5 * _ER9, 5 * _ER9) )
    {
      __asm { vcomisd xmm0, xmm4 }
      if ( !__CFADD__(5 * _ER9, 5 * _ER9) && 10 * _ER9 != 0 )
        break;
    }
    ++_EDX;
    _ER8 = _ER9;
    __asm { vmovaps xmm5, xmm0 }
    if ( _EDX >= 16 )
      goto LABEL_24;
    __asm { vmovss  xmm1, [rsp+298h+var_278] }
  }
  if ( _ER8 == _ER9 )
  {
LABEL_24:
    _ER8 = v100;
    goto LABEL_25;
  }
  do
  {
    if ( _ER8 >= _ER9 )
      break;
    v121 = (_ER9 + _ER8) / 2;
    _RCX = 10 * v121;
    __asm
    {
      vmulsd  xmm1, xmm9, qword ptr [r10+rcx*8+8]
      vmulsd  xmm0, xmm8, qword ptr [r10+rcx*8]
      vaddsd  xmm2, xmm1, xmm0
      vmulsd  xmm1, xmm10, qword ptr [r10+rcx*8+10h]
      vmulsd  xmm0, xmm11, qword ptr [r10+rcx*8+18h]
      vaddsd  xmm3, xmm2, xmm1
      vmovsd  xmm2, qword ptr [r10+rcx*8+20h]
      vucomisd xmm2, xmm4
      vaddsd  xmm1, xmm3, xmm0
    }
    if ( 10 * v121 )
      goto LABEL_18;
    __asm { vucomisd xmm1, xmm4 }
    if ( 10 * v121 )
    {
LABEL_18:
      __asm
      {
        vdivsd  xmm0, xmm1, xmm2
        vxorpd  xmm0, xmm0, xmm6
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm4 }
    }
    v133 = v74++ == -1;
    __asm { vcomisd xmm0, xmm4 }
    if ( __CFADD__(5 * v121, 5 * v121) || v133 )
    {
      _ER8 = (_ER9 + _ER8) / 2;
      if ( __CFADD__(5 * v121, 5 * v121) || v133 )
        v121 = _ER9;
    }
    _ER9 = v121;
  }
  while ( v74 < 8 );
LABEL_25:
  __asm
  {
    vmovss  dword ptr [r14], xmm14
    vmovss  dword ptr [r15], xmm15
  }
  _RCX = 10 * _ER8;
  __asm
  {
    vmovd   xmm0, r8d
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm1, xmm0, [rsp+298h+var_278]
    vmulss  xmm7, xmm1, cs:__real@3fc90fdb
    vmovss  xmm0, [rsp+298h+var_274]
    vmovss  dword ptr [r12], xmm0
  }
  _RAX = this->m_minimizerCoeffs;
  __asm
  {
    vmulsd  xmm1, xmm8, qword ptr [rax+rcx*8+28h]
    vmulsd  xmm0, xmm9, qword ptr [rax+rcx*8+30h]
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm10, qword ptr [rax+rcx*8+38h]
    vmulsd  xmm0, xmm11, qword ptr [rax+rcx*8+40h]
    vaddsd  xmm3, xmm2, xmm1
    vmovsd  xmm2, qword ptr [rax+rcx*8+48h]
    vucomisd xmm2, xmm4
    vaddsd  xmm1, xmm3, xmm0
  }
  if ( 10 * _ER8 )
    goto LABEL_27;
  __asm { vucomisd xmm1, xmm4 }
  if ( 10 * _ER8 )
  {
LABEL_27:
    __asm
    {
      vdivsd  xmm3, xmm1, xmm2
      vxorpd  xmm4, xmm3, xmm6
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vcvtsd2ss xmm0, xmm4, xmm4; val
    vmovaps xmm1, xmm12; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm0, xmm7; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovaps xmm1, xmm12; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rsi], xmm0 }
  _R11 = &v180;
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
CullBoxFromCone
==============
*/

bool __fastcall CullBoxFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, const Bounds *bounds)
{
  bool result; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = bounds;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = coneDir;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovaps xmm6, xmm2
    vmovss  xmm13, dword ptr [rdi]
    vmovss  xmm12, dword ptr [rdi+4]
    vmovss  xmm14, dword ptr [rdi+8]
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm15, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm7, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm9, xmm0, dword ptr [rsi+8]
    vmovss  xmm10, dword ptr [rbx+0Ch]
    vmovss  xmm11, dword ptr [rbx+14h]
    vmulss  xmm0, xmm15, xmm13
    vmulss  xmm1, xmm7, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm14
    vaddss  xmm5, xmm2, xmm1
    vxorps  xmm1, xmm3, xmm4
    vcmpless xmm0, xmm8, xmm12
    vblendvps xmm0, xmm1, xmm3, xmm0
    vmulss  xmm2, xmm0, xmm12
    vxorps  xmm1, xmm10, xmm4
    vcmpless xmm0, xmm8, xmm13
    vblendvps xmm0, xmm1, xmm10, xmm0
    vmulss  xmm1, xmm0, xmm13
    vaddss  xmm3, xmm2, xmm1
    vxorps  xmm2, xmm11, xmm4
    vcmpless xmm0, xmm8, xmm14
    vblendvps xmm0, xmm2, xmm11, xmm0
    vmulss  xmm1, xmm0, xmm14
    vaddss  xmm2, xmm3, xmm1
    vcomiss xmm5, xmm2
    vmovss  [rsp+0D8h+arg_10], xmm7
    vmovss  [rsp+0D8h+arg_0], xmm9
  }
  result = 1;
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v66;
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
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
  return result;
}

/*
==============
CullBoxFromConicSectionOfSphere
==============
*/

bool __fastcall CullBoxFromConicSectionOfSphere(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, double radius, const Bounds *bounds)
{
  bool result; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  _RAX = bounds;
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+0D8h+var_58], xmm10
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm12, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm11, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm13, xmm0, dword ptr [rbx+8]
    vandps  xmm1, xmm12, xmm9
    vandps  xmm0, xmm11, xmm9
    vsubss  xmm0, xmm0, dword ptr [rax+0Ch]
    vmaxss  xmm4, xmm0, xmm8
    vsubss  xmm0, xmm1, dword ptr [rax+10h]
    vmaxss  xmm2, xmm0, xmm8
    vandps  xmm1, xmm13, xmm9
    vsubss  xmm0, xmm1, dword ptr [rax+14h]
    vmaxss  xmm3, xmm0, xmm8
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vcomiss xmm3, xmm0
    vmovaps [rsp+0D8h+var_A8], xmm15
  }
  result = 1;
  __asm { vmovaps xmm15, [rsp+0D8h+var_A8] }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0D8h+var_98]
    vmovaps xmm10, [rsp+0D8h+var_58]
  }
  return result;
}

/*
==============
CullBoxFromSphere
==============
*/

char __fastcall CullBoxFromSphere(const vec3_t *sphereOrg, double radius, const Bounds *bounds)
{
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm2, xmm0, dword ptr [r8]
    vmovaps [rsp+38h+var_18], xmm6
    vandps  xmm2, xmm2, xmm5
    vsubss  xmm0, xmm2, dword ptr [r8+0Ch]
    vmovaps [rsp+38h+var_28], xmm7
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm7, xmm0, xmm6
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm2, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm8, xmm1
    vsubss  xmm1, xmm0, dword ptr [r8+8]
    vandps  xmm2, xmm2, xmm5
    vsubss  xmm3, xmm2, dword ptr [r8+10h]
    vmaxss  xmm4, xmm3, xmm6
    vandps  xmm1, xmm1, xmm5
    vsubss  xmm2, xmm1, dword ptr [r8+14h]
    vmaxss  xmm3, xmm2, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+38h+var_28]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, xmm8
    vmovaps xmm8, [rsp+38h+var_38]
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm0
  }
  return 1;
}

/*
==============
CullSphereFromCone
==============
*/

bool __fastcall CullSphereFromCone(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, const vec3_t *sphereCenter, float radius)
{
  bool result; 
  char v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = sphereCenter;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = coneDir;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm7, xmm2
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm5, xmm1, dword ptr [rsi+4]
    vsubss  xmm6, xmm0, dword ptr [rsi+8]
    vmovss  xmm9, dword ptr [rdi+4]
    vmovss  xmm8, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rdi+8]
    vmulss  xmm1, xmm9, xmm5
    vmulss  xmm0, xmm8, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm6
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, [rsp+88h+radius]
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+88h+var_28]
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

void __fastcall DiffTrackAngles(const vec3_t *tgt, const vec3_t *cur, double rate, double deltaTime, vec3_t *outAngles)
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
  _RBP = (char *)outAngles - (char *)tgt;
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
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
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
DirToByte
==============
*/

__int64 __fastcall DirToByte(const vec3_t *dir, __int64 a2, __int64 a3, double _XMM3_8)
{
  unsigned __int8 v7; 
  bool v9; 
  unsigned __int8 v10; 
  unsigned __int8 v17; 

  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
  }
  v7 = 0;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
  }
  v10 = 0;
  v9 = 1;
  __asm { vxorps  xmm3, xmm3, xmm3 }
  do
  {
    __asm
    {
      vmulss  xmm1, xmm4, dword ptr [r8+rcx*4+4]
      vmulss  xmm0, xmm5, dword ptr [r8+rcx*4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, dword ptr [r8+rcx*4+8]
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm3
    }
    v17 = v10;
    if ( v9 )
      v17 = v7;
    ++v10;
    v7 = v17;
    __asm { vmaxss  xmm3, xmm0, xmm3 }
    v9 = v10 <= 0xA2u;
  }
  while ( v10 < 0xA2u );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return v17;
}

/*
==============
DistanceFromConeToPoint
==============
*/

float __fastcall DistanceFromConeToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, const vec3_t *point)
{
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = point;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm2, xmm9
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps xmm8, xmm2
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm10, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm11, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm12, xmm0, dword ptr [rsi+8]
    vmulss  xmm0, xmm10, dword ptr [rdi]
    vmulss  xmm1, xmm11, dword ptr [rdi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, dword ptr [rdi+8]
    vaddss  xmm13, xmm2, xmm1
    vxorps  xmm3, xmm13, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm1, xmm3, dword ptr [rdi+4]
    vaddss  xmm5, xmm0, xmm10
    vmulss  xmm0, xmm3, dword ptr [rdi+8]
    vaddss  xmm2, xmm1, xmm11
    vaddss  xmm4, xmm0, xmm12
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm8, xmm8
    vsubss  xmm1, xmm0, xmm1
    vsqrtss xmm3, xmm1, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm2, xmm3, xmm5
    vmulss  xmm0, xmm13, xmm8
    vcomiss xmm2, xmm0
    vmulss  xmm0, xmm5, xmm8
    vmulss  xmm1, xmm3, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmaxss  xmm0, xmm2, xmm9
  }
  _R11 = &v61;
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
  return *(float *)&_XMM0;
}

/*
==============
DistanceFromConicSectionOfSphereToPoint
==============
*/

float __fastcall DistanceFromConicSectionOfSphereToPoint(const vec3_t *coneOrg, const vec3_t *coneDir, double cosHalfFov, double radius, const vec3_t *point)
{
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = coneDir;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  _RAX = point;
  __asm
  {
    vmovss  xmm14, dword ptr [rbx+4]
    vmovss  xmm15, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm11, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm12, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm13, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm12, xmm12
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm3, cs:__real@3f800000
    vmulss  xmm0, xmm15, xmm11
    vmulss  xmm1, xmm14, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, dword ptr [rbx+8]
    vaddss  xmm5, xmm2, xmm1
    vcomiss xmm5, xmm6
    vmulss  xmm0, xmm5, xmm5
    vsubss  xmm2, xmm4, xmm0
    vmulss  xmm1, xmm8, xmm8
    vsubss  xmm0, xmm3, xmm1
    vsqrtss xmm10, xmm0, xmm0
    vsqrtss xmm9, xmm2, xmm2
    vmulss  xmm1, xmm10, xmm9
    vmulss  xmm0, xmm5, xmm8
    vsubss  xmm2, xmm1, xmm0
    vcomiss xmm2, xmm6
    vminss  xmm2, xmm2, xmm7
    vmulss  xmm0, xmm2, xmm10
    vdivss  xmm1, xmm0, xmm9
    vsubss  xmm7, xmm3, xmm1
    vmulss  xmm0, xmm2, xmm8
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm2, xmm15, xmm5
    vmulss  xmm3, xmm14, xmm5
    vmulss  xmm1, xmm7, xmm11
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm2, xmm5, dword ptr [rbx+8]
    vmulss  xmm0, xmm7, xmm12
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm13
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm3, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  _R11 = &v86;
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
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
  return *(float *)&_XMM0;
}

/*
==============
DotFromProjectedLineSegment
==============
*/
float DotFromProjectedLineSegment(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testPos)
{
  char v89; 
  char v90; 
  _BYTE v141[32]; 
  int v142; 
  vec3_t v0; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t v146; 
  vec3_t v147; 
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
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8]
    vsubss  xmm7, xmm0, xmm4
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm6, xmm0, xmm2
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm5, xmm0, xmm3
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm9, xmm0, xmm2
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm8, xmm1, xmm4
    vmovss  xmm1, dword ptr [r8+8]
    vsubss  xmm10, xmm1, xmm3
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm12, xmm1, xmm2
    vsubss  xmm11, xmm0, xmm4
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm13, xmm0, xmm3
    vmovsd  xmm3, cs:__real@3eb0c6f7a0b5ed8d
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vcvtss2sd xmm0, xmm2, xmm2
    vcomisd xmm0, xmm3
    vmovss  [rsp+130h+v0], xmm7
    vmovss  [rsp+130h+var_F4], xmm6
    vmovss  [rsp+130h+var_F0], xmm5
    vmovss  [rsp+130h+v1], xmm8
    vmovss  [rsp+130h+var_E4], xmm9
    vmovss  [rsp+130h+var_E0], xmm10
  }
  if ( (unsigned __int64)v141 == _security_cookie )
    goto LABEL_18;
  __asm
  {
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vcvtss2sd xmm0, xmm2, xmm2
    vcomisd xmm0, xmm3
  }
  if ( (unsigned __int64)v141 == _security_cookie )
    goto LABEL_18;
  __asm
  {
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm0, xmm11, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm14, xmm2, xmm1
    vcvtss2sd xmm0, xmm14, xmm14
    vcomisd xmm0, xmm3
  }
  if ( (unsigned __int64)v141 == _security_cookie )
  {
LABEL_18:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    goto LABEL_19;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3a83126f
    vmovaps xmm2, xmm7; epsilon
    vmovss  xmm10, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( VecNCompareCustomEpsilon(v0.v, v1.v, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vmovss  xmm4, [rsp+130h+v0]
      vmovss  xmm5, [rsp+130h+var_F4]
      vmovss  xmm8, [rsp+130h+var_F0]
    }
    goto LABEL_14;
  }
  __asm { vmovaps xmmword ptr [rsp+130h+var_A8+8], xmm15 }
  Vec3Cross(&v1, &v0, &cross);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+130h+cross]
    vmovss  xmm5, dword ptr [rsp+130h+cross+4]
    vmovss  xmm6, dword ptr [rsp+130h+cross+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm8, xmm4, xmm1
    vmulss  xmm15, xmm5, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm1, xmm12, xmm15
    vmulss  xmm0, xmm11, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm6
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, xmm8
    vaddss  xmm1, xmm0, xmm11
    vmulss  xmm2, xmm3, xmm15
    vaddss  xmm0, xmm2, xmm12
    vmovss  dword ptr [rsp+130h+var_C8], xmm1
    vmulss  xmm1, xmm3, xmm6
    vaddss  xmm2, xmm1, xmm13
    vmovss  dword ptr [rsp+130h+var_C8+8], xmm2
    vmovaps xmm2, xmm7; epsilon
    vmovss  dword ptr [rsp+130h+cross], xmm8
    vmovss  dword ptr [rsp+130h+cross+4], xmm15
    vmovss  dword ptr [rsp+130h+cross+8], xmm6
    vmovss  dword ptr [rsp+130h+var_C8+4], xmm0
  }
  if ( VecNCompareCustomEpsilon(v146.v, v0.v, *(float *)&_XMM2, 3) )
    goto LABEL_7;
  __asm { vmovaps xmm2, xmm7; epsilon }
  if ( VecNCompareCustomEpsilon(v146.v, v1.v, *(float *)&_XMM2, 3) )
    goto LABEL_12;
  Vec3Cross(&v146, &v0, &cross);
  Vec3Cross(&v146, &v1, &v147);
  __asm
  {
    vmulss  xmm3, xmm15, dword ptr [rsp+130h+cross+4]
    vmulss  xmm2, xmm8, dword ptr [rsp+130h+cross]
    vmulss  xmm1, xmm6, dword ptr [rsp+130h+cross+8]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm15, dword ptr [rsp+130h+var_B8+4]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbp+30h+var_B8+8]
    vcomiss xmm2, xmm9
    vmulss  xmm2, xmm8, dword ptr [rsp+130h+var_B8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm9
  }
  if ( !(v89 | v90) )
  {
LABEL_12:
    __asm
    {
      vmovss  xmm8, [rsp+130h+var_E0]
      vmovss  xmm5, [rsp+130h+var_E4]
      vmovss  xmm4, [rsp+130h+v1]
    }
    goto LABEL_13;
  }
  if ( v89 | v90 )
  {
LABEL_7:
    __asm
    {
      vmovss  xmm4, [rsp+130h+v0]
      vmovss  xmm5, [rsp+130h+var_F4]
      vmovss  xmm8, [rsp+130h+var_F0]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+130h+var_C8]
      vmovss  xmm5, dword ptr [rsp+130h+var_C8+4]
      vmovss  xmm8, dword ptr [rsp+130h+var_C8+8]
    }
  }
LABEL_13:
  __asm { vmovaps xmm15, xmmword ptr [rsp+130h+var_A8+8] }
LABEL_14:
  __asm
  {
    vsqrtss xmm1, xmm14, xmm14
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm10, xmm0
    vdivss  xmm7, xmm10, xmm0
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm6, xmm10, xmm0
    vmulss  xmm3, xmm5, xmm6
    vmulss  xmm4, xmm4, xmm6
    vmulss  xmm0, xmm12, xmm7
    vmulss  xmm5, xmm3, xmm0
    vmulss  xmm3, xmm11, xmm7
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm4, xmm5, xmm0
    vmulss  xmm5, xmm13, xmm7
    vmulss  xmm3, xmm8, xmm6
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm0, xmm4, xmm0; val
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  [rsp+130h+var_100], xmm0
    vmovaps xmm6, xmm0
  }
  if ( (v142 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2716, ASSERT_TYPE_SANITY, "( !IS_NAN( dot ) )", (const char *)&queryFormat, "!IS_NAN( dot )") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6 }
LABEL_19:
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
  }
  return *(float *)&_XMM0;
}

/*
==============
DotFromProjectedLineSegmentVec
==============
*/
float DotFromProjectedLineSegmentVec(const vec3_t *viewPos, const vec3_t *startSegmentPos, const vec3_t *endSegmentPos, const vec3_t *testVec)
{
  double v10; 
  vec3_t testPos; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [r9]
    vmovss  xmm2, dword ptr [rcx+4]
    vaddss  xmm0, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [rsp+48h+testPos], xmm1
    vmovss  xmm1, dword ptr [rcx+8]
    vaddss  xmm2, xmm1, dword ptr [r9+8]
    vmovss  dword ptr [rsp+48h+testPos+8], xmm2
    vmovss  dword ptr [rsp+48h+testPos+4], xmm0
  }
  v10 = DotFromProjectedLineSegment(viewPos, startSegmentPos, endSegmentPos, &testPos);
  return *(float *)&v10;
}

/*
==============
EigenDecomposition
==============
*/
void EigenDecomposition(const tmat33_t<vec3_t> *A, tmat33_t<vec3_t> *V, vec3_t *d)
{
  tmat33_t<vec3_t> *v5; 
  vec3_t e; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
  }
  v5 = V;
  V->m[2].v[2] = A->m[2].v[2];
  TriDiagReduce(V, d, &e);
  TriDiagQL(v5, d, &e);
}

/*
==============
SH4VisToScaledCone::EvalMinimizer
==============
*/

long double __fastcall SH4VisToScaledCone::EvalMinimizer(SH4VisToScaledCone *this, double zh0, double zh1, double zh2, float zh3, int dataPoint)
{
  __asm
  {
    vcvtss2sd xmm0, xmm2, xmm2
    vmovaps xmm4, xmm3
  }
  _RAX = this->m_minimizerCoeffs;
  _R8 = 10 * dataPoint;
  __asm
  {
    vmulsd  xmm2, xmm0, qword ptr [rax+r8*8+8]
    vcvtss2sd xmm0, xmm1, xmm1
    vmulsd  xmm1, xmm0, qword ptr [rax+r8*8]
    vaddsd  xmm3, xmm2, xmm1
    vmovss  xmm1, [rsp+zh3]
    vcvtss2sd xmm2, xmm4, xmm4
    vmulsd  xmm0, xmm2, qword ptr [rax+r8*8+10h]
    vaddsd  xmm4, xmm3, xmm0
    vmovsd  xmm3, qword ptr [rax+r8*8+20h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, qword ptr [rax+r8*8+18h]
    vaddsd  xmm2, xmm4, xmm0
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm3, xmm0
  }
  if ( 10 * dataPoint )
    goto LABEL_3;
  __asm { vucomisd xmm2, xmm0 }
  if ( 10 * dataPoint )
  {
LABEL_3:
    __asm
    {
      vdivsd  xmm0, xmm2, xmm3
      vxorpd  xmm0, xmm0, cs:__xmm@80000000000000008000000000000000
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
SH4VisToScaledCone::EvalMinimizerCoeffs
==============
*/

void __fastcall SH4VisToScaledCone::EvalMinimizerCoeffs(SH4VisToScaledCone *this, double angle, long double *outCoeffs)
{
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  char v161; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = outCoeffs;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm6, xmm1
    vcvtss2sd xmm9, xmm6, xmm1
    vmulsd  xmm2, xmm9, cs:__real@3fe0000000000000
    vxorpd  xmm0, xmm0, xmm0
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovsd  xmm0, xmm0, xmm2
    vmovaps [rsp+0C8h+var_A8], xmm15
    vmovsd  [rsp+0C8h+arg_10], xmm9
  }
  *(double *)&_XMM0 = j___libm_sse2_sincos_(this);
  __asm
  {
    vmovaps xmm2, xmm6
    vxorps  xmm1, xmm1, xmm1
    vmovupd xmm7, xmm0
    vmovss  xmm0, xmm1, xmm2
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v26, v25, v27, v28);
  __asm
  {
    vshufps xmm1, xmm0, xmm0, 1
    vcvtss2sd xmm6, xmm0, xmm0
    vmulsd  xmm0, xmm9, cs:__real@4000000000000000; X
    vcvtss2sd xmm15, xmm1, xmm1
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmovsd  [rsp+0C8h+arg_18], xmm0
    vmulsd  xmm0, xmm9, cs:__real@4008000000000000; X
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmovaps xmm12, xmm0
    vmulsd  xmm0, xmm9, cs:__real@4010000000000000; X
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmovaps xmm14, xmm0
    vmulsd  xmm0, xmm9, cs:__real@4014000000000000; X
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmovaps xmm8, xmm0
    vmulsd  xmm0, xmm9, cs:__real@4018000000000000; X
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmovaps xmm13, xmm0
    vmulsd  xmm0, xmm12, cs:__real@40e0090000000000
    vmulsd  xmm1, xmm7, xmm7
    vmulsd  xmm2, xmm1, xmm7
    vmulsd  xmm1, xmm2, xmm2
    vmulsd  xmm2, xmm1, xmm7
    vmulsd  xmm1, xmm15, cs:__real@40f4f50000000000
    vaddsd  xmm4, xmm1, cs:__real@40e8e20000000000
    vmulsd  xmm1, xmm14, cs:__real@40cb580000000000
    vshufpd xmm3, xmm7, xmm7, 1
    vmovsd  xmm7, [rsp+0C8h+arg_18]
    vmulsd  xmm3, xmm3, xmm2
    vmulsd  xmm2, xmm7, cs:__real@40ec480000000000
    vmulsd  xmm11, xmm6, xmm6
    vmulsd  xmm6, xmm3, cs:__real@3ffc5bf891b4ef6b
    vaddsd  xmm3, xmm4, xmm2
    vaddsd  xmm5, xmm3, xmm0
    vmulsd  xmm0, xmm8, cs:__real@40b0680000000000
    vaddsd  xmm2, xmm5, xmm1
    vaddsd  xmm2, xmm2, xmm0
    vmulsd  xmm0, xmm15, cs:__real@40f9be740cf686b8
    vmulsd  xmm1, xmm2, xmm6
    vaddsd  xmm2, xmm0, cs:__real@40e8c8808a28770f
    vmulsd  xmm0, xmm12, cs:__real@40e6e6fdf2a378db
    vmovsd  qword ptr [rbx], xmm1
    vmulsd  xmm1, xmm7, cs:__real@40f33087734ac476
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm1, xmm14, cs:__real@40d57299df115655
    vaddsd  xmm4, xmm3, xmm0
    vmulsd  xmm0, xmm8, cs:__real@40bc6a9d073e8a9c
    vaddsd  xmm2, xmm4, xmm1
    vmulsd  xmm1, xmm13, cs:__real@4092f1be04d45c68
    vaddsd  xmm3, xmm2, xmm0
    vaddsd  xmm2, xmm3, xmm1
    vmovsd  xmm1, [rsp+0C8h+arg_10]
    vmulsd  xmm0, xmm2, xmm6
    vmovsd  qword ptr [rbx+8], xmm0
    vmulsd  xmm0, xmm1, cs:__real@401c000000000000; X
    vmulsd  xmm9, xmm15, xmm15
    vmulsd  xmm10, xmm9, xmm9
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmulsd  xmm5, xmm0, cs:__real@407874fd86b9c07e
    vmulsd  xmm1, xmm15, cs:__real@40c909b058f71f9f
    vaddsd  xmm2, xmm1, cs:__real@40af83bbb71cb404
    vmulsd  xmm1, xmm12, cs:__real@40dd0821854c44d7
    vmulsd  xmm0, xmm7, cs:__real@40e18bb398c49320
    vaddsd  xmm3, xmm2, xmm0
    vmulsd  xmm0, xmm14, cs:__real@40d0d06e4c9fb456
    vaddsd  xmm4, xmm3, xmm1
    vmulsd  xmm1, xmm8, cs:__real@40bd0aed0ffc9495
    vaddsd  xmm2, xmm4, xmm0
    vmulsd  xmm0, xmm13, cs:__real@40a257be250b505e
    vaddsd  xmm3, xmm2, xmm1
    vaddsd  xmm2, xmm3, xmm0
    vmovsd  xmm0, cs:__real@c0f517fa7a1e6050
    vaddsd  xmm1, xmm5, xmm2
    vmulsd  xmm2, xmm15, cs:__real@4102234b26272a0e
    vmulsd  xmm3, xmm1, xmm6
    vmulsd  xmm1, xmm7, cs:__real@40f8acbb3389e20d
    vmovsd  qword ptr [rbx+10h], xmm3
    vsubsd  xmm3, xmm0, xmm2
    vmulsd  xmm0, xmm12, cs:__real@40e27fe514ae250f
    vsubsd  xmm4, xmm3, xmm1
    vmulsd  xmm1, xmm14, cs:__real@40c863f91cb21cd6
    vsubsd  xmm2, xmm4, xmm0
    vmulsd  xmm0, xmm8, cs:__real@40a8cdcd9b033bb2
    vsubsd  xmm3, xmm2, xmm1
    vmulsd  xmm1, xmm13, cs:__real@40808933bcacd277
    vsubsd  xmm4, xmm3, xmm0
    vmulsd  xmm3, xmm15, cs:__real@4090000000000000
    vsubsd  xmm2, xmm4, xmm1
    vmovsd  xmm1, cs:__real@4081c00000000000
    vmulsd  xmm0, xmm2, xmm6
    vsubsd  xmm2, xmm1, xmm3
    vmulsd  xmm1, xmm10, cs:__real@4094400000000000
    vmovsd  qword ptr [rbx+18h], xmm0
    vmulsd  xmm0, xmm9, cs:__real@407e000000000000
    vaddsd  xmm4, xmm2, xmm0
    vaddsd  xmm3, xmm4, xmm1
    vmulsd  xmm1, xmm10, xmm10
    vmulsd  xmm0, xmm10, xmm9
    vmulsd  xmm2, xmm0, cs:__real@40a5400000000000
    vmulsd  xmm0, xmm1, cs:__real@4095e00000000000
    vsubsd  xmm4, xmm3, xmm2
    vaddsd  xmm3, xmm4, xmm0
    vmulsd  xmm2, xmm11, xmm11
    vmulsd  xmm1, xmm2, cs:__real@4078000000000000
    vmulsd  xmm2, xmm14, cs:__real@409a751f9447b724
    vaddsd  xmm0, xmm3, xmm1
    vmulsd  xmm1, xmm15, cs:__real@40c0000000000000
    vmovsd  qword ptr [rbx+20h], xmm0
    vsubsd  xmm0, xmm1, cs:__real@40c0000000000000
    vmulsd  xmm1, xmm7, cs:__real@40abb67ae8584caa
    vmovsd  qword ptr [rbx+28h], xmm0
    vsubsd  xmm0, xmm1, cs:__real@40abb67ae8584caa
    vmulsd  xmm1, xmm12, cs:__real@40a1e3779b97f4a8
    vmovsd  qword ptr [rbx+30h], xmm0
    vmulsd  xmm0, xmm15, cs:__real@40a1e3779b97f4a8
    vsubsd  xmm1, xmm1, xmm0
    vmulsd  xmm0, xmm7, cs:__real@40952a7fa9d2f8ea
    vmovsd  qword ptr [rbx+38h], xmm1
    vaddsd  xmm1, xmm0, cs:__real@40752a7fa9d2f8ea
    vmovsd  xmm0, [rsp+0C8h+arg_10]
    vmulsd  xmm0, xmm0, cs:__real@4020000000000000; X
    vsubsd  xmm2, xmm2, xmm1
    vmovsd  qword ptr [rbx+40h], xmm2
  }
  *(double *)&_XMM0 = cos_0(*(double *)&_XMM0);
  __asm
  {
    vmulsd  xmm5, xmm0, cs:__real@407362deeb9aafaa
    vmulsd  xmm0, xmm7, cs:__real@408db04838896aa4
    vmulsd  xmm2, xmm15, cs:__real@40dc5bf891b4ef6b
    vmovsd  xmm1, cs:__real@40dae2e1a4837d8b
    vsubsd  xmm3, xmm1, xmm2
    vmulsd  xmm1, xmm14, cs:__real@406627da31d55b0c
    vaddsd  xmm4, xmm3, xmm0
    vmulsd  xmm0, xmm13, cs:__real@4051b97b5b1115a3
    vaddsd  xmm2, xmm4, xmm1
  }
  _R11 = &v161;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vaddsd  xmm2, xmm2, xmm0
    vaddsd  xmm1, xmm5, xmm2
    vmovsd  qword ptr [rbx+48h], xmm1
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovaps xmm15, [rsp+0C8h+var_A8]
  }
}

/*
==============
SH4VisToScaledCone::EvalScale
==============
*/

long double __fastcall SH4VisToScaledCone::EvalScale(SH4VisToScaledCone *this, double zh0, double zh1, double zh2, float zh3, int dataPoint)
{
  __asm
  {
    vcvtss2sd xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm2, xmm2
    vmovaps xmm5, xmm3
  }
  _RAX = this->m_minimizerCoeffs;
  _R8 = 10 * dataPoint;
  __asm
  {
    vcvtss2sd xmm2, xmm5, xmm5
    vmulsd  xmm4, xmm0, qword ptr [rax+r8*8+28h]
    vmulsd  xmm0, xmm1, qword ptr [rax+r8*8+30h]
    vmovss  xmm1, [rsp+zh3]
    vaddsd  xmm3, xmm4, xmm0
    vmulsd  xmm0, xmm2, qword ptr [rax+r8*8+38h]
    vaddsd  xmm4, xmm3, xmm0
    vmovsd  xmm3, qword ptr [rax+r8*8+48h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, qword ptr [rax+r8*8+40h]
    vaddsd  xmm2, xmm4, xmm0
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm3, xmm0
  }
  if ( 10 * dataPoint )
    goto LABEL_3;
  __asm { vucomisd xmm2, xmm0 }
  if ( 10 * dataPoint )
  {
LABEL_3:
    __asm
    {
      vdivsd  xmm0, xmm2, xmm3
      vxorpd  xmm0, xmm0, cs:__xmm@80000000000000008000000000000000
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
FinitePerspectiveMatrix
==============
*/

void __fastcall FinitePerspectiveMatrix(double tanHalfFovX, double tanHalfFovY, double zNear, double zFar, tmat44_t<vec4_t> *mtx)
{
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = mtx;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm4, xmm4, xmm4
    vcomiss xmm2, xmm4
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm8, xmm1
    vcomiss xmm7, xmm6
  }
  _R11 = &v32;
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  *(_QWORD *)mtx->row3.v = 0i64;
  mtx->m[3].v[3] = 0.0;
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm1, xmm2, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vdivss  xmm0, xmm2, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx], xmm0
    vmovss  dword ptr [rbx+14h], xmm1
    vsubss  xmm0, xmm7, xmm6
    vdivss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm2, xmm6
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+28h], xmm1
    vmulss  xmm0, xmm6, xmm7
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
  }
  mtx->m[2].v[3] = 1.0;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rbx+38h], xmm1
  }
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
  __int64 v6; 
  int v8; 
  int v9; 

  _RDI = to;
  v3 = (*from >> 10) & 0x1F;
  LODWORD(to->v[0]) = (*from & 0x3FF & ~((unsigned int)(v3 - 1) >> 16) | (8 * (*from & 0x8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[*from & 0x3FF]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  LODWORD(v3) = from[1];
  v4 = ((unsigned int)v3 >> 10) & 0x1F;
  v8 = (from[1] & 0x3FF & ~((unsigned int)(v4 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v4] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[1] & 0x3FF]) & (((unsigned int)(v4 - 1) >> 16 << 10) | ((unsigned int)(v4 - 1) >> 16) & 0x3FE)) << 13;
  __asm
  {
    vmovss  xmm0, [rsp+arg_0]
    vmovss  dword ptr [rdi+4], xmm0
  }
  LODWORD(v3) = from[2];
  v6 = ((unsigned int)v3 >> 10) & 0x1F;
  v9 = (from[2] & 0x3FF & ~((unsigned int)(v6 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v6] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[2] & 0x3FF]) & (((unsigned int)(v6 - 1) >> 16 << 10) | ((unsigned int)(v6 - 1) >> 16) & 0x3FE)) << 13;
  __asm
  {
    vmovss  xmm0, [rsp+arg_0]
    vmovss  dword ptr [rdi+8], xmm0
  }
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
  __int64 v6; 
  __int64 v8; 
  int v10; 
  int v11; 
  int v12; 

  _RDI = to;
  v3 = (*from >> 10) & 0x1F;
  LODWORD(to->v[0]) = (*from & 0x3FF & ~((unsigned int)(v3 - 1) >> 16) | (8 * (*from & 0x8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[*from & 0x3FF]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  LODWORD(v3) = from[1];
  v4 = ((unsigned int)v3 >> 10) & 0x1F;
  v10 = (from[1] & 0x3FF & ~((unsigned int)(v4 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v4] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[1] & 0x3FF]) & (((unsigned int)(v4 - 1) >> 16 << 10) | ((unsigned int)(v4 - 1) >> 16) & 0x3FE)) << 13;
  __asm
  {
    vmovss  xmm0, [rsp+arg_0]
    vmovss  dword ptr [rdi+4], xmm0
  }
  LODWORD(v3) = from[2];
  v6 = ((unsigned int)v3 >> 10) & 0x1F;
  v11 = (from[2] & 0x3FF & ~((unsigned int)(v6 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v6] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[2] & 0x3FF]) & (((unsigned int)(v6 - 1) >> 16 << 10) | ((unsigned int)(v6 - 1) >> 16) & 0x3FE)) << 13;
  __asm
  {
    vmovss  xmm0, [rsp+arg_0]
    vmovss  dword ptr [rdi+8], xmm0
  }
  LODWORD(v3) = from[3];
  v8 = ((unsigned int)v3 >> 10) & 0x1F;
  v12 = (from[3] & 0x3FF & ~((unsigned int)(v8 - 1) >> 16) | (8 * (v3 & 0xFFFF8000 | (s_halfToFloatExponent[v8] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[from[3] & 0x3FF]) & (((unsigned int)(v8 - 1) >> 16 << 10) | ((unsigned int)(v8 - 1) >> 16) & 0x3FE)) << 13;
  __asm
  {
    vmovss  xmm0, [rsp+arg_0]
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
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
  unsigned int v6; 

  v1 = h;
  v2 = h & 0x3FF;
  v3 = (h >> 10) & 0x1F;
  v6 = ((unsigned int)v2 & ~((unsigned int)(v3 - 1) >> 16) | (8 * (v1 & 0xFFFF8000 | (s_halfToFloatExponent[v3] << 7))) | (2 * s_halfToFloatSubnormalExponentAndMantissa[v2]) & (((unsigned int)(v3 - 1) >> 16 << 10) | ((unsigned int)(v3 - 1) >> 16) & 0x3FE)) << 13;
  __asm { vmovss  xmm0, [rsp+arg_0] }
  return *(float *)&_XMM0;
}

/*
==============
GaussianRandom
==============
*/
void GaussianRandom(float *f0, float *f1)
{
  char v29; 
  char v30; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = f1;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = f0;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  if ( !f0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 205, ASSERT_TYPE_ASSERT, "(f0)", (const char *)&queryFormat, "f0") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 206, ASSERT_TYPE_ASSERT, "(f1)", (const char *)&queryFormat, "f1") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, cs:__real@38000000
    vmovss  xmm11, cs:__real@40000000
    vmovss  xmm6, cs:__real@3f800000
  }
  do
  {
    _EAX = rand();
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm10
      vmulss  xmm2, xmm1, xmm11
      vsubss  xmm7, xmm2, xmm6
    }
    _EAX = rand();
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm10
      vmulss  xmm2, xmm1, xmm11
      vsubss  xmm8, xmm2, xmm6
      vmulss  xmm3, xmm8, xmm8
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm9, xmm3, xmm0
      vcomiss xmm9, xmm6
    }
  }
  while ( !(v29 | v30) );
  __asm { vmovaps xmm0, xmm9; X }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm1, xmm0, cs:__real@c0000000 }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vdivss  xmm2, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vsqrtss xmm3, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm7
    vmovaps xmm7, [rsp+98h+var_28]
    vmulss  xmm1, xmm3, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
GaussianWeight1D
==============
*/

float __fastcall GaussianWeight1D(double x, double sigma)
{
  __asm
  {
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, cs:__real@bf800000
    vmovaps [rsp+38h+var_18], xmm6
    vmulss  xmm6, xmm1, cs:__real@40000000
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm2, xmm1; X
  }
  *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@40490fdb
    vmovaps xmm6, [rsp+38h+var_18]
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm0, xmm0, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
GenerateAxisFromForwardVector
==============
*/
void GenerateAxisFromForwardVector(const vec3_t *forward, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  tmat33_t<vec3_t> *v6; 
  vec3_t *v13; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx]
    vmovss  dword ptr [r8], xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [r8+4], xmm0
    vmovss  xmm3, dword ptr [rcx+8]
  }
  v6 = outAxis;
  __asm
  {
    vmovss  dword ptr [r8+8], xmm3
    vmulss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm2, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rcx+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
  }
  v13 = &outAxis->m[1];
  _RSI = &outAxis->m[2];
  Vec3Cross(outAxis->m, &refAxis->m[1], &outAxis->m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+8]
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
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm0
  }
  Vec3Cross(_RSI, v6->m, v13);
}

/*
==============
GenerateAxisFromUpVector
==============
*/
void GenerateAxisFromUpVector(const vec3_t *up, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  __asm { vmovss  xmm2, dword ptr [rcx] }
  _RDI = &outAxis->m[2];
  _RBX = outAxis;
  __asm
  {
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  dword ptr [rdi+8], xmm3
    vmulss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm0, xmm2, dword ptr [rdx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rdx+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
  }
  Vec3Cross(&refAxis->m[1], &outAxis->m[2], outAxis->m);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
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
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  Vec3Cross(_RDI, _RBX->m, &_RBX->m[1]);
}

/*
==============
BarycentricTriangle::GetBarycentricCoordinates
==============
*/
void BarycentricTriangle::GetBarycentricCoordinates(BarycentricTriangle *this, const vec2_t *cartesianPoint, vec3_t *outBarycentricCoords)
{
  bool v11; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  v11 = !this->m_inited;
  _RDI = outBarycentricCoords;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = cartesianPoint;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4323, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  __asm
  {
    vmovss  xmm11, dword ptr [rbx+18h]
    vmovss  xmm2, dword ptr [rbx+14h]
    vsubss  xmm5, xmm2, dword ptr [rbx+0Ch]
    vmovss  xmm12, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm10, xmm1, xmm2
    vmovss  xmm1, dword ptr [rsi]
    vsubss  xmm6, xmm1, xmm2
  }
  _R11 = &v52;
  __asm
  {
    vsubss  xmm8, xmm0, xmm11
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm9, xmm0, xmm11
    vsubss  xmm0, xmm12, xmm11
    vmulss  xmm2, xmm0, xmm5
    vmulss  xmm1, xmm10, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm9, xmm5
    vmulss  xmm0, xmm6, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm1, xmm1, xmm0
    vsubss  xmm2, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vdivss  xmm4, xmm7, xmm3
    vmulss  xmm0, xmm9, xmm10
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmulss  xmm5, xmm1, xmm4
    vmulss  xmm3, xmm2, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm4
    vsubss  xmm0, xmm7, xmm5
    vmovaps xmm7, xmmword ptr [r11-20h]
    vsubss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  dword ptr [rdi], xmm5
    vmovss  dword ptr [rdi+4], xmm2
  }
}

/*
==============
BarycentricTriangle::GetCartesianCoordinates
==============
*/
void BarycentricTriangle::GetCartesianCoordinates(BarycentricTriangle *this, const vec3_t *barycentricPoint, vec2_t *outCartesianCoords)
{
  _RSI = outCartesianCoords;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = barycentricPoint;
  if ( !this->m_inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4349, ASSERT_TYPE_ASSERT, "(m_inited)", (const char *)&queryFormat, "m_inited") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rdi+4]
    vmulss  xmm0, xmm5, dword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rdi]
    vmulss  xmm1, xmm3, dword ptr [rbx+8]
    vmulss  xmm3, xmm3, dword ptr [rbx+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx+18h]
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+14h]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm4
  }
}

/*
==============
GetPerpendicularViewVector
==============
*/
void GetPerpendicularViewVector(const vec3_t *point, const vec3_t *p1, const vec3_t *p2, vec3_t *up)
{
  vec3_t v1; 
  vec3_t v0; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovss  xmm9, dword ptr [rcx]
    vsubss  xmm4, xmm9, dword ptr [rdx]
    vmovss  xmm8, dword ptr [rcx+4]
    vsubss  xmm5, xmm8, dword ptr [rdx+4]
    vmovss  xmm7, dword ptr [rcx+8]
    vsubss  xmm6, xmm7, dword ptr [rdx+8]
    vmovss  xmm11, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vsubss  xmm4, xmm9, dword ptr [r8]
    vmovss  dword ptr [rsp+0A8h+v0], xmm0
    vmulss  xmm0, xmm6, xmm2
    vsubss  xmm6, xmm7, dword ptr [r8+8]
    vmulss  xmm1, xmm5, xmm2
    vsubss  xmm5, xmm8, dword ptr [r8+4]
    vmovss  dword ptr [rsp+0A8h+v0+8], xmm0
    vmovss  dword ptr [rsp+0A8h+v0+4], xmm1
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0A8h+v1], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
  }
  _RBX = up;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+v1+8], xmm0
    vmovss  dword ptr [rsp+0A8h+v1+4], xmm1
  }
  Vec3Cross(&v0, &v1, up);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
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

float __fastcall GetWorldUnitsPerPixel(float distance, double tanHalfFov, float vpDim)
{
  __asm
  {
    vmulss  xmm1, xmm1, cs:__real@40000000
    vmulss  xmm0, xmm1, xmm0
    vdivss  xmm0, xmm0, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
GraphGetValueFromFraction
==============
*/

float __fastcall GraphGetValueFromFraction(const int knotCount, const vec2_t *knots, double fraction)
{
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool v18; 
  int v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v28; 
  bool v35; 
  bool v39; 
  bool v42; 
  __int64 v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBP = knots;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
    vmovaps [rsp+88h+var_58], xmm9
  }
  _RSI = knotCount;
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vmovaps xmm8, xmm2
  }
  if ( !knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 423, ASSERT_TYPE_ASSERT, "(knots)", (const char *)&queryFormat, "knots") )
    __debugbreak();
  v11 = (unsigned int)_RSI < 2;
  v12 = (_DWORD)_RSI == 2;
  v13 = (unsigned int)_RSI <= 2;
  if ( (int)_RSI < 2 )
  {
    LODWORD(v53) = _RSI;
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 424, ASSERT_TYPE_ASSERT, "( ( knotCount >= 2 ) )", "( knotCount ) = %i", v53);
    v11 = 0;
    v12 = !v14;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
  }
  if ( v11 )
    goto LABEL_43;
  __asm { vcomiss xmm8, xmm9 }
  if ( !v13 )
  {
LABEL_43:
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 425, ASSERT_TYPE_ASSERT, "( ( fraction >= 0.0f && fraction <= 1.0f ) )", "( fraction ) = %g", v54);
    v12 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+rsi*8-8]
    vucomiss xmm0, xmm9
  }
  if ( !v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_60], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 426, ASSERT_TYPE_ASSERT, "( ( knots[knotCount - 1][0] == 1.0f ) )", "( knots[knotCount - 1][0] ) = %g", v55) )
      __debugbreak();
  }
  v21 = 1;
  v22 = (_DWORD)_RSI == 0;
  v23 = (_DWORD)_RSI == 1;
  v24 = (unsigned int)_RSI <= 1;
  if ( (int)_RSI <= 1 )
    goto LABEL_37;
  _RBX = _RBP + 1;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rbx-8]
      vcomiss xmm1, xmm6
    }
    if ( v24 )
    {
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 431, ASSERT_TYPE_ASSERT, "(knots[knotIndex][0] - knots[knotIndex - 1][0] > 0.f)", "%s\n\tGraph query with 0 length between 2 knots", "knots[knotIndex][0] - knots[knotIndex - 1][0] > 0.f");
      v22 = 0;
      v23 = !v28;
      v24 = !v28;
      if ( v28 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx-8]
      vsubss  xmm2, xmm0, xmm1
      vucomiss xmm2, xmm6
    }
    if ( !v23 )
    {
      __asm { vcomiss xmm8, xmm0 }
      if ( v24 )
        break;
    }
    ++v21;
    ++_RBX;
    v22 = v21 < (unsigned int)_RSI;
    v23 = v21 == (_DWORD)_RSI;
    v24 = v21 <= (unsigned int)_RSI;
    if ( v21 >= (int)_RSI )
      goto LABEL_37;
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm1
    vdivss  xmm7, xmm0, xmm2
    vcomiss xmm7, xmm6
  }
  if ( v22 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 441, ASSERT_TYPE_ASSERT, "( ( adjustedFrac >= 0.0f && adjustedFrac <= 1.0f ) )", "( adjustedFrac ) = %g", v56);
    v24 = !v35;
    if ( v35 )
      __debugbreak();
  }
  else
  {
    __asm { vcomiss xmm7, xmm9 }
  }
  _RBX = v21;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+rbx*8-4]
    vcomiss xmm0, xmm6
    vcomiss xmm0, xmm9
  }
  if ( !v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 442, ASSERT_TYPE_ASSERT, "( ( knots[knotIndex - 1][1] >= 0.0f && knots[knotIndex - 1][1] <= 1.0f ) )", "( knots[knotIndex - 1][1] ) = %g", v57);
    v24 = !v39;
    if ( v39 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+rbx*8+4]
    vcomiss xmm0, xmm6
    vcomiss xmm0, xmm9
  }
  if ( !v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 443, ASSERT_TYPE_ASSERT, "( ( knots[knotIndex][1] >= 0.0f && knots[knotIndex][1] <= 1.0f ) )", "( knots[knotIndex][1] ) = %g", v58);
    v24 = !v42;
    if ( v42 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+rbx*8+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+rbx*8-4]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm7, xmm2, dword ptr [rbp+rbx*8-4]
    vcomiss xmm7, xmm6
    vcomiss xmm7, xmm9
  }
  if ( !v24 )
  {
LABEL_37:
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+88h+var_60], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 450, ASSERT_TYPE_ASSERT, "( ( result >= 0.0f && result <= 1.0f ) )", "( result ) = %g", v59) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_48]
    vmovaps xmm9, [rsp+88h+var_58]
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
GraphGetValueFromFractionUnnormalized
==============
*/

float __fastcall GraphGetValueFromFractionUnnormalized(const int knotCount, const vec2_t *knots, double fraction)
{
  __int64 v10; 
  int v13; 
  unsigned __int64 v14; 
  bool v15; 
  bool v16; 
  bool v21; 
  bool v23; 
  __int64 v40; 
  double v41; 
  double v42; 

  __asm { vmovaps [rsp+0D8h+var_68], xmm9 }
  _RSI = knots;
  __asm { vmovaps [rsp+0D8h+var_88], xmm11 }
  v10 = knotCount;
  __asm
  {
    vmovss  xmm9, cs:__real@7f7fffff
    vmovaps xmm11, xmm2
  }
  if ( !knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 461, ASSERT_TYPE_ASSERT, "(knots)", (const char *)&queryFormat, "knots") )
    __debugbreak();
  if ( (int)v10 < 2 )
  {
    LODWORD(v40) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 462, ASSERT_TYPE_ASSERT, "( ( knotCount >= 2 ) )", "( knotCount ) = %i", v40) )
      __debugbreak();
  }
  v13 = 1;
  v14 = v10;
  __asm
  {
    vmovaps [rsp+0D8h+var_38], xmm6
    vmovaps [rsp+0D8h+var_48], xmm7
    vmovaps [rsp+0D8h+var_58], xmm8
    vmovaps [rsp+0D8h+var_78], xmm10
  }
  v15 = v10 == 1;
  v16 = (unsigned __int64)v10 <= 1;
  if ( v10 <= 1 )
    goto LABEL_20;
  _RBX = 1i64;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+rbx*8]
      vmovss  xmm8, dword ptr [rsi+rbx*8-8]
      vcomiss xmm6, xmm8
    }
    if ( v16 )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 474, ASSERT_TYPE_ASSERT, "(currentX > prevX)", "%s\n\tGraph does not have the X value in ascending order.", "currentX > prevX");
      v15 = !v21;
      v16 = !v21;
      if ( v21 )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm7, xmm6, xmm8
      vcomiss xmm7, xmm10
    }
    if ( v16 )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 475, ASSERT_TYPE_ASSERT, "(currentX - prevX > 0.f)", "%s\n\tGraph with 0 length between two X values.", "currentX - prevX > 0.f");
      v15 = !v23;
      v16 = !v23;
      if ( v23 )
        __debugbreak();
    }
    __asm { vucomiss xmm7, xmm10 }
    if ( !v15 )
    {
      __asm { vcomiss xmm11, xmm6 }
      if ( v16 )
        break;
    }
    ++v13;
    v15 = ++_RBX == v14;
    v16 = _RBX <= v14;
    if ( _RBX >= (__int64)v14 )
      goto LABEL_20;
  }
  _RAX = v13;
  __asm
  {
    vsubss  xmm1, xmm11, xmm8
    vdivss  xmm2, xmm1, xmm7
    vmovss  xmm0, dword ptr [rsi+rax*8+4]
    vsubss  xmm3, xmm0, dword ptr [rsi+rax*8-4]
    vmulss  xmm0, xmm3, xmm2
    vaddss  xmm9, xmm0, dword ptr [rsi+rax*8-4]
    vucomiss xmm9, cs:__real@7f7fffff
  }
  if ( v15 )
  {
LABEL_20:
    __asm
    {
      vmovsd  xmm0, cs:__real@47efffffe0000000
      vmovsd  [rsp+0D8h+var_98], xmm0
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+0D8h+var_A0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 494, ASSERT_TYPE_ASSERT, "( result ) != ( 3.402823466e+38F )", "%s != %s\n\t%g, %g", "result", "FLT_MAX", v41, v42) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm10, [rsp+0D8h+var_78]
    vmovaps xmm8, [rsp+0D8h+var_58]
    vmovaps xmm7, [rsp+0D8h+var_48]
    vmovaps xmm6, [rsp+0D8h+var_38]
    vmovaps xmm11, [rsp+0D8h+var_88]
    vmovaps xmm0, xmm9
    vmovaps xmm9, [rsp+0D8h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
Half3FromFloat
==============
*/
void Half3FromFloat(const vec3_t *from, unsigned __int16 *to)
{
  __asm { vmovss  xmm0, dword ptr [rcx]; f }
  _RBX = from;
  *to = HalfFromFloat(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+4]; f }
  to[1] = HalfFromFloat(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+8]; f }
  to[2] = HalfFromFloat(*(float *)&_XMM0);
}

/*
==============
Half4FromFloat
==============
*/
void Half4FromFloat(const vec4_t *from, unsigned __int16 *to)
{
  __asm { vmovss  xmm0, dword ptr [rcx]; f }
  _RBX = from;
  *to = HalfFromFloat(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+4]; f }
  to[1] = HalfFromFloat(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+8]; f }
  to[2] = HalfFromFloat(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+0Ch]; f }
  to[3] = HalfFromFloat(*(float *)&_XMM0);
}

/*
==============
HalfFromFloat
==============
*/

unsigned __int16 __fastcall HalfFromFloat(double f)
{
  unsigned int v3; 
  unsigned __int16 result; 
  unsigned int v6; 
  unsigned int v7; 
  int v9; 
  unsigned int v12; 
  unsigned int v13; 
  int v17; 
  unsigned int v18; 

  __asm
  {
    vmovss  [rsp+48h+arg_0], xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 3018, ASSERT_TYPE_ASSERT, "(IS_FINITE(f))", (const char *)&queryFormat, "IS_FINITE(f)") )
    __debugbreak();
  __asm { vmovss  [rsp+48h+arg_0], xmm6 }
  if ( (v18 & 0x7FFFFFFF) == 0 )
  {
    v3 = HIWORD(v18);
LABEL_6:
    result = v3;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    return result;
  }
  LOWORD(v3) = HIWORD(v18) & 0x8000;
  v6 = v18 & 0x7FFFFF;
  v7 = v18 & 0x7F800000;
  if ( (v18 & 0x7F800000) == 0 )
    goto LABEL_6;
  if ( v7 == 2139095040 )
  {
    if ( v6 )
    {
      result = -512;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      return result;
    }
    goto LABEL_12;
  }
  v9 = (v7 >> 23) - 112;
  if ( v9 >= 31 )
  {
LABEL_12:
    result = v3 | 0x7C00;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    return result;
  }
  if ( v9 > 0 )
  {
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    result = (v3 | ((_WORD)v9 << 10) | (v6 >> 13)) + 1;
    if ( (v18 & 0x1000) == 0 )
      return v3 | ((_WORD)v9 << 10) | (v6 >> 13);
  }
  else if ( 14 - v9 <= 24 )
  {
    v12 = v6 | 0x800000;
    v13 = v12 >> (14 - v9);
    if ( ((v12 >> (13 - v9)) & 1) != 0 )
      LOWORD(v13) = v13 + 1;
    result = v13 | v3;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    result = HIWORD(v18) & 0x8000;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  return result;
}

/*
==============
I_crandom
==============
*/

float __fastcall I_crandom(double _XMM0_8)
{
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000000
    vmulss  xmm2, xmm1, cs:__real@40000000
    vsubss  xmm0, xmm2, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
I_flrand
==============
*/

float __fastcall I_flrand(float min, double max, double _XMM2_8)
{
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vsubss  xmm1, xmm1, xmm0
  }
  holdrand = 214013 * holdrand + 2531011;
  __asm
  {
    vcvtsi2ss xmm2, xmm2, rax
    vmulss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, cs:__real@38000000
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
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

float __fastcall I_random(double _XMM0_8)
{
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@38000000
  }
  return *(float *)&_XMM0;
}

/*
==============
InfinitePerspectiveMatrix
==============
*/

void __fastcall InfinitePerspectiveMatrix(double tanHalfFovX, double tanHalfFovY, double zNear, tmat44_t<vec4_t> *mtx)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  _RBX = mtx;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm8, xmm0
    vcomiss xmm8, xmm6
    vcomiss xmm7, xmm6
  }
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  mtx->m[2].v[2] = 0.0;
  *(_QWORD *)mtx->row3.v = 0i64;
  mtx->m[3].v[3] = 0.0;
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm6, [rsp+78h+var_18]
    vdivss  xmm0, xmm1, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmovss  dword ptr [rbx], xmm0
    vdivss  xmm1, xmm1, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vmovss  dword ptr [rbx+14h], xmm1
  }
  mtx->m[2].v[3] = 1.0;
  __asm
  {
    vmovss  dword ptr [rbx+38h], xmm9
    vmovaps xmm9, [rsp+78h+var_48]
  }
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
  unsigned __int64 v6; 
  unsigned __int64 v8; 
  int v9; 
  __int64 v11; 

  this->m_numDataPoints = numDataPoints;
  v6 = 10 * numDataPoints;
  v8 = 8 * v6;
  if ( !is_mul_ok(v6, 8ui64) )
    v8 = -1i64;
  v9 = 0;
  this->m_minimizerCoeffs = (long double *)operator new[](v8);
  if ( numDataPoints > 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps [rsp+48h+var_18], xmm6
    }
    v11 = 0i64;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovaps [rsp+48h+var_28], xmm7
      vmovss  xmm7, cs:__real@3fc90fdb
      vdivss  xmm6, xmm0, xmm1
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm1, xmm1, xmm6; angle
      }
      SH4VisToScaledCone::EvalMinimizerCoeffs(this, *(float *)&_XMM1, &this->m_minimizerCoeffs[v11]);
      ++v9;
      v11 += 10i64;
    }
    while ( v9 < numDataPoints );
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
}

/*
==============
Intersect2DPlanes
==============
*/

__int64 __fastcall Intersect2DPlanes(const vec2_t *dir1, double dist1, const vec2_t *dir2, double dist2, vec2_t *result)
{
  __asm
  {
    vmovss  xmm5, dword ptr [r8+4]
    vmulss  xmm2, xmm5, dword ptr [rcx]
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+4]
    vmulss  xmm0, xmm6, dword ptr [r8]
    vmovaps [rsp+38h+var_28], xmm7
    vsubss  xmm4, xmm2, xmm0
    vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm1
  }
  _RAX = result;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm7
    vmovaps xmm6, [rsp+38h+var_18]
    vdivss  xmm4, xmm0, xmm4
    vmulss  xmm2, xmm5, xmm8
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm3, xmm0, xmm4
    vmovss  dword ptr [rax], xmm3
    vmulss  xmm1, xmm7, dword ptr [rcx]
    vmulss  xmm0, xmm8, dword ptr [r8]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rax+4], xmm2
  }
  return 1i64;
}

/*
==============
IntersectLinePlane
==============
*/
bool IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outHitPoint)
{
  bool result; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  double v110; 
  double v111; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
  }
  _RBP = outHitPoint;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RDI = planeNormal;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = lineAxis;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0E8h+var_88], xmm11
    vmovss  xmm11, cs:__real@3b03126f
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm10
    vmovaps [rsp+0E8h+var_98], xmm12
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm11
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2817, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( lineAxis ) )", "(%g, %g, %g) len %g", v104, v106, v108, v110) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm11
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2818, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v105, v107, v109, v111) )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi]
    vmovss  xmm7, dword ptr [rdi+4]
    vmulss  xmm1, xmm7, dword ptr [r14+4]
    vmulss  xmm0, xmm6, dword ptr [r14]
    vmovss  xmm8, dword ptr [rdi+8]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [r14+8]
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm12, xmm2, xmm1
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm11
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2839, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( lineAxis ))", (const char *)&queryFormat, "Vec3IsNormalized( lineAxis )") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm11
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane ))", (const char *)&queryFormat, "Vec3IsNormalized( plane )") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmulss  xmm0, xmm5, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vaddss  xmm3, xmm2, xmm1
    vandps  xmm0, xmm3, xmm9
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmulss  xmm1, xmm7, dword ptr [rsi+4]
    vmulss  xmm0, xmm6, dword ptr [rsi]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rsi+8]
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm12, xmm2
    vdivss  xmm3, xmm0, xmm3
    vmulss  xmm1, xmm5, xmm3
    vaddss  xmm2, xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbp+0], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+4]
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm2, xmm3, dword ptr [rbx+8]
    vaddss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+8], xmm0
  }
  result = 1;
  _R11 = &v114;
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
IntersectLinePlane
==============
*/
bool IntersectLinePlane(const vec3_t *linePoint, const vec3_t *lineAxis, const vec4_t *plane, float *t)
{
  bool result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm6
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBP = t;
  _RBX = plane;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2839, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( lineAxis ))", (const char *)&queryFormat, "Vec3IsNormalized( lineAxis )") )
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
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane ))", (const char *)&queryFormat, "Vec3IsNormalized( plane )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+4]
    vmulss  xmm1, xmm5, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rbx]
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rbx+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+8]
    vaddss  xmm4, xmm2, xmm1
    vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmulss  xmm0, xmm3, dword ptr [rsi]
    vmulss  xmm1, xmm5, dword ptr [rsi+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsi+8]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rbx+0Ch]
    vdivss  xmm3, xmm2, xmm4
    vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbp+0], xmm1
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
IntersectLineSegmentSphere
==============
*/

bool __fastcall IntersectLineSegmentSphere(const vec3_t *p1, const vec3_t *p2, const vec3_t *sphereCenter, double radius, float *outT1, float *outT2)
{
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
  }
  _R9 = outT2;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovss  xmm9, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovss  xmm10, dword ptr [r8]
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovss  xmm11, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovss  xmm12, dword ptr [rcx+4]
    vsubss  xmm4, xmm1, xmm12
    vmulss  xmm2, xmm4, xmm4
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovss  xmm13, dword ptr [rcx+8]
  }
  _RAX = outT1;
  __asm
  {
    vmovaps [rsp+0A8h+var_88], xmm14
    vmovss  xmm14, dword ptr [rcx]
    vsubss  xmm6, xmm0, xmm14
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm5, xmm0, xmm13
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+0A8h+var_98], xmm15
    vmovaps xmm15, xmm3
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  [rsp+0A8h+var_A8], xmm1
    vsubss  xmm0, xmm12, xmm9
    vmulss  xmm3, xmm0, xmm4
    vsubss  xmm1, xmm14, xmm10
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm13, xmm11
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmovss  [rsp+0A8h+var_A4], xmm0
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm8, xmm0, cs:__real@40800000
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm12, xmm12
    vmulss  xmm0, xmm14, xmm14
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm5, xmm4, xmm2
    vmulss  xmm3, xmm9, xmm12
    vmulss  xmm0, xmm10, xmm14
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm11, xmm13
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, cs:__real@40000000
    vsubss  xmm3, xmm5, xmm0
    vmovss  xmm5, [rsp+0A8h+var_A8]
    vmulss  xmm1, xmm15, xmm15
    vsubss  xmm2, xmm3, xmm1
    vandps  xmm1, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm3, xmm0, cs:__real@40800000
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vsubss  xmm4, xmm8, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
    vmovss  xmm0, cs:__real@3f000000
    vdivss  xmm3, xmm0, xmm5
    vmovss  xmm0, [rsp+0A8h+var_A4]
    vsqrtss xmm4, xmm4, xmm4
    vsubss  xmm1, xmm4, xmm0
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rax], xmm2
    vsubss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [r9], xmm2
  }
  result = 1;
  __asm { vmovaps xmm14, [rsp+0A8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-68h]
    vmovaps xmm13, xmmword ptr [r11-78h]
    vmovaps xmm15, [rsp+0A8h+var_98]
  }
  return result;
}

/*
==============
IntersectRayBounds
==============
*/
bool IntersectRayBounds(const vec3_t *origin, const vec3_t *direction, const Bounds *bounds, float *tmin, vec3_t *outHitPoint)
{
  unsigned int v17; 
  bool v31; 
  bool v32; 
  bool v37; 
  bool v38; 
  bool v40; 
  bool v41; 
  bool result; 
  bool v55; 
  bool v56; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  int v81[4]; 
  char v85; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
  }
  _R13 = outHitPoint;
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovsd  xmm10, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  xmm11, cs:__real@3f800000
  }
  v17 = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm7 }
  *tmin = 0.0;
  __asm
  {
    vmovss  xmm6, dword ptr [r8]
    vaddss  xmm0, xmm6, dword ptr [r8+0Ch]
    vmovss  xmm5, dword ptr [r8+4]
    vmovss  xmm3, dword ptr [r8+8]
    vsubss  xmm1, xmm6, dword ptr [r8+0Ch]
    vmovss  [rsp+0F8h+var_A8], xmm0
    vaddss  xmm0, xmm5, dword ptr [r8+10h]
    vmovss  [rsp+0F8h+var_A4], xmm0
    vaddss  xmm0, xmm3, dword ptr [r8+14h]
  }
  _R14 = (char *)direction - (char *)v81;
  _R15 = tmin;
  __asm
  {
    vmovss  [rsp+0F8h+var_A0], xmm0
    vsubss  xmm0, xmm5, dword ptr [r8+10h]
    vmovss  [rsp+0F8h+var_B8], xmm1
    vsubss  xmm1, xmm3, dword ptr [r8+14h]
    vmovss  [rsp+0F8h+var_B4], xmm0
    vmovss  [rsp+0F8h+var_B0], xmm1
  }
  _RBP = origin;
  _RDI = 0i64;
  v31 = 1;
  do
  {
    if ( !v31 )
    {
      LODWORD(v76) = 3;
      LODWORD(v71) = v17;
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76);
      v31 = 0;
      if ( v32 )
        __debugbreak();
    }
    _RSI = &v81[_RDI];
    __asm
    {
      vmovss  xmm0, dword ptr [r14+rsi]
      vandps  xmm0, xmm0, xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, xmm10
    }
    if ( v31 )
    {
      v37 = v17 <= 3;
      if ( v17 >= 3 )
      {
        LODWORD(v76) = 3;
        LODWORD(v71) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76) )
          __debugbreak();
        LODWORD(v77) = 3;
        LODWORD(v72) = v17;
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v77);
        v37 = !v38;
        if ( v38 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vcomiss xmm0, dword ptr [rdi+rbp]
      }
      if ( !v37 )
        goto LABEL_18;
      v40 = v17 < 3;
      if ( v17 >= 3 )
      {
        LODWORD(v76) = 3;
        LODWORD(v71) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76) )
          __debugbreak();
        LODWORD(v78) = 3;
        LODWORD(v73) = v17;
        v41 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, v78);
        v40 = 0;
        if ( v41 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rsp+rdi+0F8h+var_A8]
        vcomiss xmm0, dword ptr [rdi+rbp]
      }
      if ( v40 )
        goto LABEL_18;
    }
    else
    {
      if ( v17 >= 3 )
      {
        LODWORD(v76) = 3;
        LODWORD(v71) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76) )
          __debugbreak();
      }
      __asm { vdivss  xmm7, xmm11, dword ptr [r14+rsi] }
      if ( v17 >= 3 )
      {
        LODWORD(v76) = 3;
        LODWORD(v71) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76) )
          __debugbreak();
        LODWORD(v79) = 3;
        LODWORD(v74) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v74, v79) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm1, xmm0, dword ptr [rdi+rbp]
        vmulss  xmm6, xmm1, xmm7
      }
      v55 = v17 <= 3;
      if ( v17 >= 3 )
      {
        LODWORD(v76) = 3;
        LODWORD(v71) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v71, v76) )
          __debugbreak();
        LODWORD(v80) = 3;
        LODWORD(v75) = v17;
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v75, v80);
        v55 = !v56;
        if ( v56 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rsp+rdi+0F8h+var_A8]
        vsubss  xmm1, xmm0, dword ptr [rdi+rbp]
        vmulss  xmm3, xmm1, xmm7
        vminss  xmm2, xmm6, xmm3
        vmaxss  xmm4, xmm2, dword ptr [r15]
        vmaxss  xmm0, xmm6, xmm3
        vminss  xmm8, xmm0, xmm8
        vcomiss xmm4, xmm8
        vmovss  dword ptr [r15], xmm4
      }
      if ( !v55 )
      {
LABEL_18:
        result = 0;
        goto LABEL_19;
      }
    }
    ++v17;
    ++_RDI;
    v31 = v17 < 3;
  }
  while ( (int)v17 < 3 );
  __asm
  {
    vmovss  xmm2, dword ptr [r15]
    vmulss  xmm0, xmm2, dword ptr [r12]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [r13+0], xmm1
    vmulss  xmm0, xmm2, dword ptr [r12+4]
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmovss  dword ptr [r13+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r12+8]
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [r13+8], xmm1
  }
  result = 1;
LABEL_19:
  __asm { vmovaps xmm7, [rsp+0F8h+var_48] }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
IntersectTwoPlanesIfNotParallel
==============
*/
__int64 IntersectTwoPlanesIfNotParallel(const vec4_t (*plane)[2], vec3_t *outPoint, vec3_t *outDir)
{
  char v42; 
  char v43; 
  __int64 result; 
  vec3_t v77; 
  vec3_t cross; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps [rsp+0B8h+var_58], xmm8
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b03126f
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm7
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm8
  }
  _RDI = outDir;
  _RBP = outPoint;
  _RBX = plane;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1873, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane[0] ))", (const char *)&queryFormat, "Vec3IsNormalized( plane[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm2, dword ptr [rbx+14h]
    vmovss  xmm3, dword ptr [rbx+18h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm7
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm8
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1874, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( plane[1] ))", (const char *)&queryFormat, "Vec3IsNormalized( plane[1] )") )
    __debugbreak();
  Vec3Cross((const vec3_t *)_RBX, (const vec3_t *)&(*_RBX)[1], _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm8, xmm2, xmm1
    vandps  xmm0, xmm8, xmm6
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v42 | v43 )
  {
    result = 0i64;
  }
  else
  {
    Vec3Cross(_RDI, (const vec3_t *)&(*_RBX)[1], &cross);
    __asm { vmovss  xmm6, dword ptr [rbx+0Ch] }
    Vec3Cross((const vec3_t *)_RBX, _RDI, &v77);
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+1Ch]
      vmulss  xmm3, xmm5, dword ptr [rsp+0B8h+var_88]
      vmulss  xmm4, xmm5, dword ptr [rsp+0B8h+var_88+4]
      vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+cross]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+cross+4]
      vaddss  xmm1, xmm4, xmm2
      vmulss  xmm4, xmm5, dword ptr [rsp+0B8h+var_88+8]
      vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+cross+8]
      vdivss  xmm3, xmm0, xmm8
      vmovss  dword ptr [rbp+0], xmm3
      vaddss  xmm0, xmm4, xmm2
      vdivss  xmm3, xmm1, xmm8
      vmovss  dword ptr [rbp+4], xmm3
      vdivss  xmm3, xmm0, xmm8
      vmovss  dword ptr [rbp+8], xmm3
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
      vmovss  dword ptr [rdi+8], xmm0
    }
    result = 1i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, [rsp+0B8h+var_58]
  }
  return result;
}

/*
==============
IsPosInsideArc
==============
*/

__int64 __fastcall IsPosInsideArc(const vec3_t *pos, double posRadius, const vec3_t *arcOrigin, double arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight)
{
  double v38; 
  char v39; 
  char v40; 
  __int64 result; 
  _BYTE v49[32]; 
  vec2_t vec; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm5, xmm0, dword ptr [r8]
    vmovss  xmm2, dword ptr [rcx+4]
    vsubss  xmm6, xmm2, dword ptr [r8+4]
    vmovss  xmm9, dword ptr [rcx+8]
    vmovss  xmm10, dword ptr [r8+8]
    vmovaps xmm7, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm0, xmm9, xmm10
    vmovss  [rsp+98h+var_70], xmm0
    vmulss  xmm2, xmm5, xmm5
    vmovaps xmm8, xmm3
    vmulss  xmm4, xmm6, xmm6
    vaddss  xmm0, xmm4, xmm2
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm1
    vmulss  xmm1, xmm6, xmm1
    vmovss  dword ptr [rsp+98h+vec], xmm0
    vsubss  xmm0, xmm3, xmm7
    vmovss  dword ptr [rsp+98h+vec+4], xmm1
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm8, xmm8
    vcomiss xmm2, xmm1
  }
  if ( (unsigned __int64)v49 != _security_cookie )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm1, [rsp+98h+arcHalfHeight]
    vsubss  xmm0, xmm10, xmm1
    vcomiss xmm9, xmm0
    vaddss  xmm0, xmm10, xmm1
    vcomiss xmm9, xmm0
  }
  if ( (unsigned __int64)v49 != _security_cookie )
    goto LABEL_5;
  v38 = vectoyaw(&vec);
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&v38);
  __asm
  {
    vmovss  xmm1, [rsp+98h+arcAngle0]
    vmovss  xmm2, [rsp+98h+arcAngle1]
    vcomiss xmm1, xmm2
  }
  if ( !v39 )
  {
    __asm { vcomiss xmm0, xmm2 }
    if ( v39 )
      goto LABEL_9;
    goto LABEL_8;
  }
  __asm { vcomiss xmm0, xmm2 }
  if ( v39 )
  {
LABEL_8:
    __asm { vcomiss xmm0, xmm1 }
    if ( v39 | v40 )
      goto LABEL_5;
LABEL_9:
    result = 1i64;
    goto LABEL_6;
  }
LABEL_5:
  result = 0i64;
LABEL_6:
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
  }
  return result;
}

/*
==============
LookAtAxisAndDistance
==============
*/
float LookAtAxisAndDistance(const vec3_t *origin, const vec3_t *lookAt, tmat33_t<vec3_t> *axis)
{
  char v52; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovaps [rsp+88h+var_18], xmm6
  }
  _RDI = axis;
  __asm
  {
    vsubss  xmm6, xmm0, dword ptr [rcx]
    vmovss  dword ptr [r8], xmm6
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm5, xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [r8+4], xmm5
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
  }
  _RDX = &axis->m[1];
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vblendvps xmm0, xmm7, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm2, xmm5, xmm1
    vucomiss xmm2, cs:__real@80000000
    vmulss  xmm0, xmm4, xmm1
    vxorps  xmm4, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [r8+8], xmm0
    vmovss  dword ptr [r8+4], xmm2
    vmulss  xmm3, xmm6, xmm1
    vmovss  dword ptr [r8], xmm3
    vmovss  dword ptr [rdx], xmm4
    vmovss  dword ptr [rdx+4], xmm3
  }
  axis->m[1].v[2] = 0.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm5, xmm5, xmm5
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [rdx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [rdx+8], xmm0
  }
  Vec3Cross(axis->m, &axis->m[1], &axis->m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  xmm5, dword ptr [rdi+18h]
    vmovss  xmm3, dword ptr [rdi+20h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm8
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v52 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+1Ch]
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+88h+var_48], xmm1
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+88h+var_50], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+88h+var_58], xmm4
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+88h+var_60], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1741, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v64, v65, v66, v67) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
MatrixAdd
==============
*/
void MatrixAdd(const tmat33_t<vec3_t> *a, const tmat33_t<vec3_t> *b, tmat33_t<vec3_t> *out)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm2, ymmword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+20h]
    vaddps  ymm2, ymm2, ymmword ptr [rdx]
    vaddss  xmm3, xmm1, dword ptr [rdx+20h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vmovaps xmm6, xmmword ptr [rax-18h]
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmovaps xmm8, xmmword ptr [rax-38h]
    vmovaps xmm9, xmmword ptr [rax-48h]
    vmovaps xmm10, [rsp+58h+var_58]
    vmovups ymmword ptr [r8], ymm2
    vmovss  dword ptr [r8+20h], xmm3
  }
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
  double v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0Ch]
    vmovss  xmm4, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = mtx;
  __asm
  {
    vmovss  xmm7, dword ptr [rdx+4]
    vmulss  xmm1, xmm7, dword ptr [rdx+10h]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = axis;
  __asm
  {
    vmovss  xmm8, dword ptr [rdx+8]
    vmulss  xmm1, xmm8, dword ptr [rdx+14h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  _RSI = origin;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+14h]
    vmovss  xmm6, dword ptr [rdx+10h]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  qword ptr [rax-40h], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  qword ptr [rax-48h], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  qword ptr [rax-50h], xmm6
    vmovsd  qword ptr [rax-58h], xmm1
    vmovsd  qword ptr [rax-60h], xmm2
    vmovsd  qword ptr [rax-68h], xmm3
    vmovsd  qword ptr [rax-70h], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1654, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v85, v87, v89, v91, v93, v95, v97) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, dword ptr [rbx+1Ch]
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+20h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rbx+20h]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+98h+var_40], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+98h+var_48], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+98h+var_50], xmm6
    vmovsd  [rsp+98h+var_58], xmm1
    vmovsd  [rsp+98h+var_60], xmm2
    vmovsd  [rsp+98h+var_68], xmm3
    vmovsd  [rsp+98h+var_70], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1655, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v86, v88, v90, v92, v94, v96, v98) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vxorps  xmm0, xmm0, xmm5
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vxorps  xmm0, xmm1, xmm5
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  xmm2, dword ptr [rbx+14h]
    vxorps  xmm4, xmm2, xmm5
    vmovss  dword ptr [rdi+20h], xmm4
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+10h]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+30h], xmm2
  }
  _RDI->m[0].v[1] = _RBX->m[2].v[0];
  _RDI->m[1].v[1] = _RBX->m[2].v[1];
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+20h]
    vmovss  dword ptr [rdi+24h], xmm4
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+34h], xmm2
  }
  _RDI->m[0].v[2] = _RBX->m[0].v[0];
  _RDI->m[1].v[2] = _RBX->m[0].v[1];
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+28h], xmm4
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+18h]
    vmulss  xmm3, xmm0, dword ptr [rdi+8]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+38h], xmm2
  }
  _RDI->m[0].v[3] = 0.0;
  _RDI->m[1].v[3] = 0.0;
  _RDI->m[2].v[3] = 0.0;
  _RDI->m[3].v[3] = 1.0;
}

/*
==============
MatrixForViewerOrthogonalNoOrigin
==============
*/
void MatrixForViewerOrthogonalNoOrigin(const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+0Ch]
    vmovss  xmm4, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = mtx;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+4]
    vmulss  xmm1, xmm7, dword ptr [rcx+10h]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = axis;
  __asm
  {
    vmovss  xmm8, dword ptr [rcx+8]
    vmulss  xmm1, xmm8, dword ptr [rcx+14h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rcx+14h]
    vmovss  xmm6, dword ptr [rcx+10h]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  qword ptr [rax-40h], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  qword ptr [rax-48h], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  qword ptr [rax-50h], xmm6
    vmovsd  qword ptr [rax-58h], xmm1
    vmovsd  qword ptr [rax-60h], xmm2
    vmovsd  qword ptr [rax-68h], xmm3
    vmovsd  qword ptr [rax-70h], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1681, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v57, v59, v61, v63, v65, v67, v69) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, dword ptr [rbx+1Ch]
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+20h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rbx+20h]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+98h+var_40], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+98h+var_48], xmm5
    vcvtss2sd xmm2, xmm8, xmm8
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+98h+var_50], xmm6
    vmovsd  [rsp+98h+var_58], xmm1
    vmovsd  [rsp+98h+var_60], xmm2
    vmovsd  [rsp+98h+var_68], xmm3
    vmovsd  [rsp+98h+var_70], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1682, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v58, v60, v62, v64, v66, v68, v70) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rdi+10h], xmm2
    vmovss  xmm0, dword ptr [rbx+14h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+20h], xmm1
  }
  _RDI->m[3].v[0] = 0.0;
  _RDI->m[0].v[1] = _RBX->m[2].v[0];
  _RDI->m[1].v[1] = _RBX->m[2].v[1];
  _RDI->m[2].v[1] = _RBX->m[2].v[2];
  _RDI->m[3].v[1] = 0.0;
  _RDI->m[0].v[2] = _RBX->m[0].v[0];
  _RDI->m[1].v[2] = _RBX->m[0].v[1];
  _RDI->m[2].v[2] = _RBX->m[0].v[2];
  _RDI->m[3].v[2] = 0.0;
  _RDI->m[0].v[3] = 0.0;
  _RDI->m[1].v[3] = 0.0;
  _RDI->m[2].v[3] = 0.0;
  _RDI->m[3].v[3] = 1.0;
}

/*
==============
MatrixForViewport
==============
*/

void __fastcall MatrixForViewport(double width, double height, double minZ, double maxZ, tmat44_t<vec4_t> *mtx)
{
  _RAX = mtx;
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm1, cs:__real@bf000000
    vmulss  xmm1, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rax], xmm4
  }
  *(_QWORD *)(&mtx->row0.xyz + 1) = 0i64;
  *(_QWORD *)mtx->row2.v = 0i64;
  __asm { vmovss  dword ptr [rax+30h], xmm4 }
  *(_QWORD *)&mtx->row0.xyz.y = 0i64;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm0
    vmovss  dword ptr [rax+34h], xmm1
  }
  *(_QWORD *)&mtx->row1.xyz.z = 0i64;
  __asm
  {
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rax+28h], xmm0
    vmovss  dword ptr [rax+38h], xmm2
  }
  mtx->m[2].v[3] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
MatrixInverse44Aligned
==============
*/

void __fastcall MatrixInverse44Aligned(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *dst, double _XMM2_8, double _XMM3_8)
{
  vector4 result; 

  _RBX = dst;
  _RDI = mat;
  if ( ((unsigned __int8)mat & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1044, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&mat & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&mat & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1045, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&dst & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&dst & 15 )") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rsp+0B8h+var_88], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups [rsp+0B8h+var_68], ymm0
    vmovups ymm0, [rsp+0B8h+var_88]
    vmovups ymm1, [rsp+0B8h+var_68]
    vmovups ymmword ptr [rsp+0B8h+result.baseclass_0.x.v], ymm0
    vmovups ymmword ptr [rsp+0B8h+result.baseclass_0.z.v], ymm1
  }
  Float4x4Inverse(&result, (const vector4 *)dst);
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
MatrixInverse44Safe
==============
*/
__int64 MatrixInverse44Safe(const tmat44_t<vec4_t> *mat, tmat44_t<vec4_t> *out)
{
  char v268; 
  __int64 result; 
  tmat44_t<vec4_t> outa; 
  char v292; 
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
  }
  _RBX = out;
  if ( mat == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 959, ASSERT_TYPE_ASSERT, "(&mat != &out)", (const char *)&queryFormat, "&mat != &out") )
    __debugbreak();
  MatrixTranspose44(mat, &outa);
  __asm
  {
    vmovss  xmm15, dword ptr [rsp+138h+out+1Ch]
    vmovss  xmm2, dword ptr [rsp+138h+out+3Ch]
    vmulss  xmm8, xmm2, dword ptr [rsp+138h+out+28h]
    vmovss  xmm0, dword ptr [rsp+138h+out+30h]
    vmulss  xmm7, xmm0, dword ptr [rsp+138h+out+28h]
    vmovss  xmm13, dword ptr [rsp+138h+out+18h]
    vmovss  xmm6, dword ptr [rsp+138h+out+2Ch]
    vmovss  xmm12, dword ptr [rsp+138h+out+24h]
    vmulss  xmm10, xmm6, dword ptr [rsp+138h+out+38h]
    vmulss  xmm11, xmm6, dword ptr [rsp+138h+out+34h]
    vmulss  xmm4, xmm12, dword ptr [rsp+138h+out+38h]
    vmovss  xmm9, dword ptr [rsp+138h+out+20h]
    vmulss  xmm14, xmm9, dword ptr [rsp+138h+out+38h]
    vmulss  xmm6, xmm0, xmm6
    vmulss  xmm5, xmm9, xmm2
    vmulss  xmm9, xmm9, dword ptr [rsp+138h+out+34h]
    vmulss  xmm3, xmm12, xmm2
    vmulss  xmm12, xmm0, xmm12
    vmulss  xmm0, xmm8, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm13, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm10, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm15, xmm4
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm13, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, dword ptr [rsp+138h+out+34h]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+28h]
    vmulss  xmm1, xmm15, xmm1
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm6, dword ptr [rsp+138h+out+18h]
    vsubss  xmm0, xmm4, xmm2
    vmovss  [rsp+138h+var_104], xmm0
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm13, xmm5
    vmovss  xmm13, dword ptr [rsp+138h+out+10h]
    vmulss  xmm0, xmm13, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm7
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm5, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm15, xmm14
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+138h+out+14h]
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm2, dword ptr [rsp+138h+out+24h]
    vmovss  [rsp+138h+var_108], xmm0
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+138h+out+3Ch]
    vmulss  xmm0, xmm13, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm9
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm7, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm15, xmm12
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm14, dword ptr [rsp+138h+out+14h]
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm2, dword ptr [rsp+138h+out+34h]
    vmovss  [rsp+138h+var_100], xmm0
    vmovss  dword ptr [rbx+8], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+138h+out+28h]
    vmulss  xmm0, xmm13, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, dword ptr [rsp+138h+out+18h]
    vaddss  xmm4, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsp+138h+out+24h]
    vmulss  xmm0, xmm1, dword ptr [rsp+138h+out+38h]
    vmulss  xmm1, xmm9, dword ptr [rsp+138h+out+18h]
    vmulss  xmm0, xmm13, xmm0
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  [rsp+138h+var_FC], xmm0
    vmovss  xmm2, dword ptr [rsp+138h+out+24h]
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+138h+out+3Ch]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+8]
    vmulss  xmm0, xmm10, dword ptr [rsp+138h+out+4]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsp+138h+out+34h]
    vmulss  xmm0, xmm1, dword ptr [rsp+138h+out+28h]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+0Ch]
    vmulss  xmm0, xmm8, dword ptr [rsp+138h+out+4]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm11, dword ptr [rsp+138h+out+8]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm2, dword ptr [rsp+138h+out+24h]
    vmulss  xmm0, xmm2, dword ptr [rsp+138h+out+38h]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+0Ch]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+138h+out+8]
    vmulss  xmm3, xmm5, dword ptr [rsp+138h+out+8]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+10h], xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+138h+out]
    vmovss  xmm8, dword ptr [rsp+138h+out+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm10, dword ptr [rsp+138h+out]
    vmovss  xmm10, dword ptr [rsp+138h+out]
    vmulss  xmm1, xmm14, dword ptr [rsp+138h+out+0Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+138h+out+0Ch]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+14h], xmm0
    vmulss  xmm0, xmm12, dword ptr [rsp+138h+out+0Ch]
    vmulss  xmm3, xmm8, xmm5
    vmulss  xmm1, xmm10, xmm11
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm3, xmm8, xmm6
    vmovss  xmm6, dword ptr [rsp+138h+out+24h]
    vmulss  xmm0, xmm6, dword ptr [rsp+138h+out+3Ch]
    vmulss  xmm1, xmm10, xmm0
    vmulss  xmm0, xmm9, dword ptr [rsp+138h+out+0Ch]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+138h+out+38h]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm0, xmm10, xmm0
    vmovss  dword ptr [rbx+18h], xmm1
    vmulss  xmm3, xmm8, xmm7
    vmovss  xmm7, dword ptr [rsp+138h+out+8]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm9
    vaddss  xmm4, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsp+138h+out+34h]
    vmulss  xmm0, xmm1, dword ptr [rsp+138h+out+28h]
    vmulss  xmm0, xmm10, xmm0
    vmulss  xmm1, xmm7, xmm12
    vmulss  xmm12, xmm13, dword ptr [rsp+138h+out+8]
    vmulss  xmm3, xmm8, xmm14
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsp+138h+out+18h]
    vmulss  xmm14, xmm1, dword ptr [rsp+138h+out+4]
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm4, dword ptr [rsp+138h+out+0Ch]
    vmulss  xmm5, xmm7, xmm15
    vmulss  xmm6, xmm4, xmm1
    vmulss  xmm11, xmm8, xmm15
    vmulss  xmm8, xmm4, dword ptr [rsp+138h+out+14h]
    vmulss  xmm7, xmm10, xmm15
    vmulss  xmm15, xmm10, xmm1
    vmulss  xmm1, xmm8, dword ptr [rsp+138h+out+38h]
    vmulss  xmm10, xmm10, dword ptr [rsp+138h+out+14h]
    vmulss  xmm9, xmm4, xmm13
    vmulss  xmm13, xmm13, dword ptr [rsp+138h+out+4]
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+138h+out+34h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rsp+138h+out+3Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm6, dword ptr [rsp+138h+out+34h]
    vmulss  xmm0, xmm11, dword ptr [rsp+138h+out+38h]
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+138h+out+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm1, dword ptr [rsp+138h+out+3Ch]
    vmulss  xmm3, xmm7, dword ptr [rsp+138h+out+38h]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+138h+out+30h]
    vsubss  xmm0, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+138h+out+30h]
    vmulss  xmm3, xmm9, dword ptr [rsp+138h+out+38h]
    vmovss  dword ptr [rbx+20h], xmm0
    vmulss  xmm0, xmm12, dword ptr [rsp+138h+out+3Ch]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm15, dword ptr [rsp+138h+out+3Ch]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm9, dword ptr [rsp+138h+out+34h]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm11, dword ptr [rsp+138h+out+30h]
    vsubss  xmm1, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm7, dword ptr [rsp+138h+out+34h]
    vmulss  xmm0, xmm8, dword ptr [rsp+138h+out+30h]
    vmovss  dword ptr [rbx+24h], xmm1
    vmulss  xmm1, xmm10, dword ptr [rsp+138h+out+3Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm13, dword ptr [rsp+138h+out+3Ch]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm15, dword ptr [rsp+138h+out+34h]
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsp+138h+out+8]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+28h], xmm0
    vmulss  xmm0, xmm1, dword ptr [rsp+138h+out+14h]
    vmulss  xmm1, xmm0, dword ptr [rsp+138h+out+30h]
    vmulss  xmm0, xmm13, dword ptr [rsp+138h+out+38h]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm12, dword ptr [rsp+138h+out+34h]
    vmulss  xmm1, xmm14, dword ptr [rsp+138h+out+30h]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm10, dword ptr [rsp+138h+out+38h]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vsubss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rbx+2Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+138h+out+8]
    vmulss  xmm0, xmm1, dword ptr [rsp+138h+out+14h]
    vmulss  xmm2, xmm0, dword ptr [rsp+138h+out+2Ch]
    vmulss  xmm1, xmm6, dword ptr [rsp+138h+out+24h]
    vmulss  xmm0, xmm11, dword ptr [rsp+138h+out+28h]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+138h+out+24h]
    vmulss  xmm2, xmm14, dword ptr [rsp+138h+out+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm8, dword ptr [rsp+138h+out+28h]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+138h+out+20h]
    vmovss  xmm5, dword ptr [rsp+138h+out+2Ch]
    vmulss  xmm3, xmm15, dword ptr [rsp+138h+out+2Ch]
    vsubss  xmm0, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+138h+out+28h]
    vmovss  dword ptr [rbx+30h], xmm0
    vmulss  xmm0, xmm9, dword ptr [rsp+138h+out+28h]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+138h+out+20h]
    vmovss  xmm6, dword ptr [rsp+138h+out+20h]
    vmulss  xmm3, xmm5, xmm12
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm7, dword ptr [rsp+138h+out+24h]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm3, xmm5, xmm13
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rbx+34h], xmm1
    vmulss  xmm1, xmm6, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm5, xmm10
    vmovss  xmm5, dword ptr [rsp+138h+out+24h]
    vmulss  xmm1, xmm5, xmm9
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm10, dword ptr [rsp+138h+out+28h]
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx+38h], xmm0
    vmulss  xmm0, xmm5, xmm12
    vmulss  xmm1, xmm6, xmm14
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm13, dword ptr [rsp+138h+out+28h]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm15
    vmovss  xmm5, dword ptr [rsp+138h+out+8]
    vmulss  xmm0, xmm5, dword ptr [rsp+138h+out+14h]
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm3, dword ptr [rsp+138h+out+4]
    vmulss  xmm3, xmm3, [rsp+138h+var_108]
    vmulss  xmm0, xmm6, xmm0
    vaddss  xmm2, xmm2, xmm0
    vmovss  xmm0, dword ptr [rsp+138h+out]
    vmulss  xmm0, xmm0, [rsp+138h+var_104]
    vsubss  xmm1, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+138h+out+0Ch]
    vmulss  xmm0, xmm0, [rsp+138h+var_FC]
    vmovss  dword ptr [rbx+3Ch], xmm1
    vmulss  xmm1, xmm5, [rsp+138h+var_100]
    vaddss  xmm4, xmm2, xmm1
    vaddss  xmm3, xmm4, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm3, xmm1
  }
  if ( v268 )
  {
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm0, xmm3
      vshufps xmm2, xmm2, xmm2, 0
      vinsertf128 ymm2, ymm2, xmm2, 1
      vmulps  ymm0, ymm2, ymmword ptr [rbx]
      vmovups ymmword ptr [rbx], ymm0
      vmulps  ymm0, ymm2, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rbx+20h], ymm0
    }
    result = 1i64;
  }
  _R11 = &v292;
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
  return result;
}

/*
==============
MatrixMultiply44Aligned
==============
*/

void __fastcall MatrixMultiply44Aligned(const tmat44_t<vec4_t> *in1, const tmat44_t<vec4_t> *in2, tmat44_t<vec4_t> *out, double _XMM3_8)
{
  vector4 M1; 
  vector4 result; 

  _RDI = out;
  _RBX = in2;
  _RSI = in1;
  if ( ((unsigned __int8)in1 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 916, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in1 & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in1 & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 917, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in2 & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in2 & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 918, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&out & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&out & 15 )") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups [rsp+0F8h+var_C8], ymm0
    vmovups ymm0, ymmword ptr [rsi+20h]
    vmovups [rsp+0F8h+var_A8], ymm0
    vmovups ymm0, [rsp+0F8h+var_C8]
    vmovups ymm1, [rsp+0F8h+var_A8]
    vmovups ymmword ptr [rsp+0F8h+result.baseclass_0.x.v], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+0F8h+var_C8], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups [rsp+0F8h+var_A8], ymm0
    vmovups ymm0, [rsp+0F8h+var_C8]
    vmovups ymmword ptr [rsp+0F8h+result.baseclass_0.z.v], ymm1
    vmovups ymm1, [rsp+0F8h+var_A8]
    vmovups ymmword ptr [rsp+0F8h+M1.baseclass_0.x.v], ymm0
    vmovups ymmword ptr [rsp+0F8h+M1.baseclass_0.z.v], ymm1
  }
  Float4x4Mul(&result, &M1, (const vector4 *)out);
  __asm
  {
    vmovups xmmword ptr [rdi], xmm0
    vmovups xmmword ptr [rdi+10h], xmm1
    vmovups xmmword ptr [rdi+20h], xmm2
    vmovups xmmword ptr [rdi+30h], xmm3
  }
}

/*
==============
MatrixMultiplyEquals
==============
*/
void MatrixMultiplyEquals(const tmat33_t<vec3_t> *in, tmat33_t<vec3_t> *out)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+0Ch]
    vmovss  xmm3, dword ptr [rdx+18h]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+10h]
    vmovss  [rsp+0B8h+var_B8], xmm2
    vmovss  [rsp+0B8h+var_B0], xmm0
    vmovss  xmm0, dword ptr [rdx+14h]
    vmovss  [rsp+0B8h+var_AC], xmm0
    vmulss  xmm0, xmm2, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx+10h]
    vmovss  [rsp+0B8h+var_B4], xmm3
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx+14h]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
    vmovaps [rsp+0B8h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rdx]
    vmulss  xmm1, xmm15, dword ptr [rcx+18h]
    vmovss  xmm11, dword ptr [rdx+4]
    vmovss  xmm13, dword ptr [rdx+1Ch]
    vmovss  xmm12, dword ptr [rdx+8]
    vmovss  xmm14, dword ptr [rdx+20h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rcx+20h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdx+18h], xmm0
    vmovss  xmm2, dword ptr [rdx+10h]
    vmulss  xmm3, xmm2, dword ptr [rcx+1Ch]
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm0, dword ptr [rcx+18h]
    vmovss  xmm2, dword ptr [rcx+20h]
    vmulss  xmm0, xmm2, dword ptr [rdx+1Ch]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rdx+1Ch], xmm1
    vmovss  xmm2, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm2, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [rcx+18h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  xmm2, dword ptr [rcx+20h]
    vmulss  xmm0, xmm2, dword ptr [rdx+20h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmulss  xmm0, xmm8, [rsp+0B8h+var_B8]
    vmovss  dword ptr [rdx+20h], xmm1
    vmulss  xmm1, xmm6, [rsp+0B8h+var_B4]
    vmulss  xmm2, xmm5, xmm15
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm8, [rsp+0B8h+var_B0]
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rdx], xmm2
    vmulss  xmm1, xmm6, xmm13
    vmulss  xmm3, xmm5, xmm12
    vmulss  xmm4, xmm5, xmm11
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm8, [rsp+0B8h+var_AC]
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rdx+4], xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm9, [rsp+0B8h+var_B8]
    vmulss  xmm1, xmm6, xmm14
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rdx+8], xmm2
    vmulss  xmm1, xmm7, xmm15
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, [rsp+0B8h+var_B4]
    vmulss  xmm0, xmm9, [rsp+0B8h+var_B0]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm7, xmm11
    vmovss  dword ptr [rdx+0Ch], xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm10, xmm13
    vmulss  xmm0, xmm9, [rsp+0B8h+var_AC]
    vmovaps xmm6, xmmword ptr [rax-18h]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm13, [rsp+0B8h+var_88]
    vmovaps xmm15, [rsp+0B8h+var_A8]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm7, xmm12
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmulss  xmm1, xmm10, xmm14
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm14, [rsp+0B8h+var_98]
    vmovss  dword ptr [rdx+10h], xmm2
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rdx+14h], xmm2
  }
}

/*
==============
MatrixMultiplyUniformScale
==============
*/

void __fastcall MatrixMultiplyUniformScale(const tmat33_t<vec3_t> *a, double b, tmat33_t<vec3_t> *out)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm0, xmm1
    vshufps xmm0, xmm0, xmm0, 0
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmulps  ymm8, ymm0, ymmword ptr [rcx]
    vmulss  xmm1, xmm0, dword ptr [rcx+20h]
    vmovups ymmword ptr [r8], ymm8
    vmovaps xmm8, [rsp+38h+var_38]
    vmovss  dword ptr [r8+20h], xmm1
  }
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
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm2, ymmword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+20h]
    vsubps  ymm2, ymm2, ymmword ptr [rdx]
    vsubss  xmm3, xmm1, dword ptr [rdx+20h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vmovaps xmm6, xmmword ptr [rax-18h]
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmovaps xmm8, xmmword ptr [rax-38h]
    vmovaps xmm9, xmmword ptr [rax-48h]
    vmovaps xmm10, [rsp+58h+var_58]
    vmovups ymmword ptr [r8], ymm2
    vmovss  dword ptr [r8+20h], xmm3
  }
}

/*
==============
MatrixToAngleRadAxis
==============
*/
void MatrixToAngleRadAxis(const tmat33_t<vec3_t> *matrix, vec3_t *outAxis, float *outRadians)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+14h]
    vsubss  xmm2, xmm0, dword ptr [rcx+1Ch]
    vmovss  dword ptr [rdx], xmm2
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm3, xmm0, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+8], xmm3
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm1, xmm3, xmm3
    vmovss  xmm3, cs:__real@3f000000
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RDI = outRadians;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+48h+var_28], xmm7
  }
  _RBX = outAxis;
  __asm
  {
    vaddss  xmm7, xmm2, xmm1
    vcomiss xmm7, cs:__real@38d1b717
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vaddss  xmm2, xmm1, dword ptr [rcx+20h]
    vsubss  xmm0, xmm2, xmm6
    vmulss  xmm4, xmm0, xmm3
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm6; max
    vmovaps xmm0, xmm4; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vsqrtss xmm1, xmm7, xmm7
    vdivss  xmm2, xmm6, xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
MatrixTransformVector44Aligned
==============
*/
void MatrixTransformVector44Aligned(const vec4_t *vec, const tmat44_t<vec4_t> *mat, vec4_t *out)
{
  char v4; 

  _RDI = out;
  v4 = (char)mat;
  _RSI = vec;
  if ( ((unsigned __int8)vec & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1061, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)vec.v & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)vec.v & 15 )") )
    __debugbreak();
  if ( (v4 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1062, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&mat & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&mat & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1063, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)out.v & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)out.v & 15 )") )
    __debugbreak();
  __asm
  {
    vmovups xmm1, xmmword ptr [rsi]
    vshufps xmm2, xmm1, xmm1, 55h ; 'U'
    vmulps  xmm3, xmm2, xmmword ptr [rbx+10h]
    vshufps xmm0, xmm1, xmm1, 0
    vshufps xmm4, xmm1, xmm1, 0AAh ; 'ª'
    vshufps xmm5, xmm1, xmm1, 0FFh
    vmulps  xmm1, xmm0, xmmword ptr [rbx]
    vmulps  xmm0, xmm4, xmmword ptr [rbx+20h]
    vaddps  xmm2, xmm0, xmm1
    vmulps  xmm1, xmm5, xmmword ptr [rbx+30h]
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm2
    vmovups xmmword ptr [rdi], xmm2
  }
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
  _RBX = out;
  _RDI = in;
  if ( ((unsigned __int8)in & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 937, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&in & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&in & 15 )") )
    __debugbreak();
  if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 938, ASSERT_TYPE_ASSERT, "(!( (uintptr_t)&out & 15 ))", (const char *)&queryFormat, "!( (uintptr_t)&out & 15 )") )
    __debugbreak();
  __asm
  {
    vmovups xmm5, xmmword ptr [rdi]
    vshufps xmm4, xmm5, xmmword ptr [rdi+10h], 44h ; 'D'
    vmovups xmm2, xmmword ptr [rdi+20h]
    vshufps xmm1, xmm2, xmmword ptr [rdi+30h], 44h ; 'D'
    vshufps xmm5, xmm5, xmmword ptr [rdi+10h], 0EEh ; 'î'
    vshufps xmm2, xmm2, xmmword ptr [rdi+30h], 0EEh ; 'î'
    vshufps xmm3, xmm4, xmm1, 88h ; 'ˆ'
    vmovups xmmword ptr [rbx], xmm3
    vshufps xmm0, xmm4, xmm1, 0DDh ; 'Ý'
    vmovups xmmword ptr [rbx+10h], xmm0
    vshufps xmm4, xmm5, xmm2, 88h ; 'ˆ'
    vmovups xmmword ptr [rbx+20h], xmm4
    vshufps xmm1, xmm5, xmm2, 0DDh ; 'Ý'
    vmovups xmmword ptr [rbx+30h], xmm1
  }
}

/*
==============
ModuloWrapD
==============
*/

double __fastcall ModuloWrapD(double val, double divisor, double _XMM2_8)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorpd  xmm2, xmm2, xmm2
    vcomisd xmm1, xmm2
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
    vmovaps xmm1, xmm6; Y
    vmovaps xmm0, xmm7; X
  }
  *(double *)&_XMM0 = fmod_0(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm
  {
    vaddsd  xmm0, xmm0, xmm6; X
    vmovaps xmm1, xmm6; Y
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return fmod_0(*(double *)&_XMM0, *(double *)&_XMM1);
}

/*
==============
NearestPitchAndYawOnPlane
==============
*/
void NearestPitchAndYawOnPlane(const vec3_t *angles, const vec3_t *normal, vec3_t *result)
{
  char v4; 
  const vec3_t *v7; 
  vec3_t forward; 
  vec3_t outProjectedPoint; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx]
  }
  v7 = normal;
  if ( v4 )
  {
    __asm { vucomiss xmm0, dword ptr [rdx+4] }
    if ( v4 )
    {
      __asm { vucomiss xmm0, dword ptr [rdx+8] }
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2271, ASSERT_TYPE_ASSERT, "(normal[0] || normal[1] || normal[2])", (const char *)&queryFormat, "normal[0] || normal[1] || normal[2]") )
          __debugbreak();
      }
    }
  }
  AngleVectors(angles, &forward, NULL, NULL);
  ProjectPointOnPlane(&forward, v7, &outProjectedPoint);
  vectoangles(&outProjectedPoint, result);
}

/*
==============
NonNegativeHalfFromFloat
==============
*/

unsigned __int16 __fastcall NonNegativeHalfFromFloat(float f, double _XMM1_8)
{
  double v4; 

  __asm
  {
    vmovss  xmm2, cs:__real@477fe000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v4 = I_fclamp(f, *(float *)&_XMM1, *(float *)&_XMM2);
  return HalfFromFloat(*(float *)&v4);
}

/*
==============
DampedSpring::Normalize
==============
*/
float DampedSpring::Normalize(DampedSpring *this, vec3_t *vec)
{
  char v2; 

  __asm
  {
    vmovss  xmm4, dword ptr [rdx]
    vucomiss xmm4, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v2 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+4]
  }
  if ( !v2 )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+8]
  }
  if ( v2 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
LABEL_5:
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+4]
      vmovss  xmm3, dword ptr [rdx+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  xmm2, cs:__real@3f800000
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm2, xmm1
      vdivss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm4, xmm3
      vmovss  dword ptr [rdx], xmm1
      vmulss  xmm2, xmm3, dword ptr [rdx+4]
      vmovss  dword ptr [rdx+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rdx+8]
      vmovss  dword ptr [rdx+8], xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
OrthographicMatrix
==============
*/

void __fastcall OrthographicMatrix(double width, double height, double depth, tmat44_t<vec4_t> *mtx)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  _RBX = mtx;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vucomiss xmm8, xmm6
    vucomiss xmm7, xmm6
  }
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  *(_QWORD *)(&mtx->row2.xyz + 1) = 0i64;
  mtx->m[3].v[1] = 0.0;
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vmovaps xmm6, [rsp+78h+var_18]
    vdivss  xmm0, xmm1, xmm9
    vmovaps xmm9, [rsp+78h+var_48]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, cs:__real@bf000000
    vdivss  xmm1, xmm1, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmovss  dword ptr [rbx+14h], xmm1
    vdivss  xmm2, xmm0, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vmovss  dword ptr [rbx+28h], xmm2
  }
  mtx->m[3].v[2] = 0.5;
  mtx->m[3].v[3] = 1.0;
}

/*
==============
OrthographicMatrixFull
==============
*/

void __fastcall OrthographicMatrixFull(double width, double height, double zNear, double zFar, tmat44_t<vec4_t> *mtx)
{
  _RBX = mtx;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm10, xmm0
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vucomiss xmm8, xmm6
    vsubss  xmm0, xmm7, xmm9
    vucomiss xmm0, xmm6
  }
  *(vec4_t *)((char *)&mtx->row0 + 4) = 0ui64;
  *(vec4_t *)((char *)&mtx->row1 + 8) = 0ui64;
  *(_QWORD *)(&mtx->row2.xyz + 1) = 0i64;
  mtx->m[3].v[1] = 0.0;
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vmovss  xmm2, cs:__real@3f800000
    vmovaps xmm6, [rsp+88h+var_18]
    vdivss  xmm0, xmm1, xmm10
    vmovaps xmm10, [rsp+88h+var_58]
    vmovss  dword ptr [rbx], xmm0
    vdivss  xmm1, xmm1, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vmovss  dword ptr [rbx+14h], xmm1
    vsubss  xmm0, xmm9, xmm7
    vmovaps xmm9, [rsp+88h+var_48]
    vdivss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+28h], xmm0
    vmulss  xmm1, xmm1, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rbx+38h], xmm2
  }
  mtx->m[3].v[3] = 1.0;
}

/*
==============
OrthonormalBasis
==============
*/
void OrthonormalBasis(const vec3_t *n, tmat33_t<vec3_t> *dst)
{
  float v33; 
  float v34; 
  float v35; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+8]; Sign
    vmovss  xmm0, cs:__real@3f800000; Number
    vmovaps [rsp+68h+var_18], xmm7
  }
  _RDI = dst;
  __asm { vmovaps [rsp+68h+var_28], xmm8 }
  _RBX = n;
  __asm { vmovaps [rsp+68h+var_38], xmm9 }
  *(float *)&_XMM0 = copysignf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vaddss  xmm2, xmm0, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm1, cs:__real@bf800000
    vdivss  xmm7, xmm1, xmm2
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm8, xmm1, xmm7
    vmovaps xmm9, xmm0
    vmulss  xmm2, xmm4, xmm3
    vmulss  xmm3, xmm8, xmm0
    vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm2, xmm7
    vaddss  xmm5, xmm1, cs:__real@3f800000
    vmovss  [rsp+68h+var_40], xmm0
    vunpcklps xmm1, xmm5, xmm3
    vmovsd  qword ptr [rdi], xmm1
  }
  _RDI->m[0].v[2] = v34;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4]
    vmulss  xmm0, xmm2, xmm2
    vxorps  xmm2, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+68h+var_18]
    vaddss  xmm3, xmm1, xmm9
    vmovaps xmm9, [rsp+68h+var_38]
    vunpcklps xmm0, xmm8, xmm3
    vmovaps xmm8, [rsp+68h+var_28]
    vmovsd  qword ptr [rdi+0Ch], xmm0
    vmovss  [rsp+68h+var_40], xmm2
  }
  _RDI->m[1].v[2] = v35;
  __asm { vmovsd  xmm0, qword ptr [rbx] }
  v33 = _RBX->v[2];
  __asm { vmovsd  qword ptr [rdi+18h], xmm0 }
  _RDI->m[2].v[2] = v33;
}

/*
==============
PitchForYawOnNormal
==============
*/

float __fastcall PitchForYawOnNormal(double fYaw, const vec3_t *normal)
{
  char v9; 
  _BYTE v20[32]; 
  vec3_t forward; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rdx]
  }
  _RBX = normal;
  __asm { vmovaps xmm7, xmm0 }
  if ( (unsigned __int64)v20 == _security_cookie )
  {
    __asm { vucomiss xmm6, dword ptr [rdx+4] }
    if ( (unsigned __int64)v20 == _security_cookie )
    {
      __asm { vucomiss xmm6, dword ptr [rdx+8] }
      if ( (unsigned __int64)v20 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2240, ASSERT_TYPE_ASSERT, "(normal[0] || normal[1] || normal[2])", (const char *)&queryFormat, "normal[0] || normal[1] || normal[2]") )
        __debugbreak();
    }
  }
  __asm { vmovaps xmm0, xmm7; yaw }
  YawVectors(*(float *)&_XMM0, &forward, NULL);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+8]
    vucomiss xmm4, xmm6
  }
  if ( v9 )
  {
    __asm { vmovss  xmm0, cs:__real@43870000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+forward+4]
      vmulss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rsp+78h+forward]
      vmulss  xmm2, xmm1, dword ptr [rbx]
      vaddss  xmm0, xmm3, xmm2
      vdivss  xmm0, xmm0, xmm4; X
    }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm0, xmm0, cs:__real@42652ee0 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
PointInCircleFromUniformDeviates
==============
*/

void __fastcall PointInCircleFromUniformDeviates(double radiusDeviate, double yawDeviate, vec2_t *point)
{
  float c; 
  float s; 

  _RBX = point;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vsqrtss xmm6, xmm0, xmm0
    vmulss  xmm0, xmm1, cs:__real@40c90fdb; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm1, xmm6, [rsp+38h+c]
    vmulss  xmm0, xmm6, [rsp+38h+s]
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
PointInsideCone
==============
*/

bool __fastcall PointInsideCone(const vec3_t *coneTip, const vec3_t *coneDir, double cosHalfFov, double coneHeight, const vec3_t *point)
{
  bool v27; 
  bool v28; 
  bool result; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rdx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm4, xmm1, xmm0
    vmovaps xmm8, xmm2
    vmovss  xmm2, dword ptr [rdx+8]
    vmulss  xmm1, xmm2, xmm2
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm3
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm0, xmm3, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vsqrtss xmm0, xmm3, xmm3
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rax-58h], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  qword ptr [rax-60h], xmm2
    vcvtss2sd xmm3, xmm5, xmm5
    vmovsd  qword ptr [rax-68h], xmm3
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  qword ptr [rax-70h], xmm0
  }
  v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2431, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( coneDir ) )", "(%g, %g, %g) len %g", v56, v57, v58, v59);
  v28 = !v27;
  if ( v27 )
    __debugbreak();
  _RAX = point;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm5, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm6, xmm1, dword ptr [rdi+4]
    vsubss  xmm7, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm6, dword ptr [rbx+4]
    vmulss  xmm1, xmm5, dword ptr [rbx]
    vmulss  xmm0, xmm7, dword ptr [rbx+8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, xmm9
  }
  if ( v28 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm4, xmm0
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm2, xmm3, xmm0
      vmulss  xmm4, xmm4, xmm4
      vcomiss xmm4, xmm2
    }
    result = !v28;
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
PointOnHemisphereFromUniformDeviates
==============
*/

void __fastcall PointOnHemisphereFromUniformDeviates(double azimuthDeviate, double yawDeviate, vec3_t *unitVec)
{
  float c; 
  float s; 

  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmulss  xmm3, xmm0, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vsubss  xmm3, xmm2, xmm3
  }
  _RBX = unitVec;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm1, cs:__real@40c90fdb; radians
    vsqrtss xmm6, xmm3, xmm3
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+48h+c]
    vmulss  xmm1, xmm6, [rsp+48h+s]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+8], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm1
  }
}

/*
==============
PointOnSphereFromUniformDeviates
==============
*/

void __fastcall PointOnSphereFromUniformDeviates(double azimuthDeviate, double yawDeviate, vec3_t *unitVec)
{
  float c; 
  float s; 

  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  xmm3, cs:__real@3f800000
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = unitVec;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vsubss  xmm7, xmm2, xmm3
    vmulss  xmm0, xmm7, xmm7
    vsubss  xmm0, xmm3, xmm0
    vsqrtss xmm6, xmm0, xmm0
    vmulss  xmm0, xmm1, cs:__real@40c90fdb; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm1, xmm6, [rsp+48h+c]
    vmulss  xmm0, xmm6, [rsp+48h+s]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+8], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
PointToLineDirDistSq
==============
*/
float PointToLineDirDistSq(const vec3_t *point, const vec3_t *linePoint, const vec3_t *lineDir)
{
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [r8]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rdx]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rdx+4]
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rcx+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovss  xmm14, dword ptr [rdx+8]
    vmulss  xmm1, xmm8, xmm8
    vmovaps [rsp+0D8h+var_A8], xmm15
    vaddss  xmm15, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm15, xmm0
  }
  _R11 = &v67;
  __asm
  {
    vsubss  xmm0, xmm12, xmm11
    vmulss  xmm3, xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vsubss  xmm1, xmm10, xmm9
    vmulss  xmm2, xmm1, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm14, xmm13
    vmulss  xmm1, xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm4, xmm1
    vdivss  xmm3, xmm2, xmm15
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vmovaps xmm15, [rsp+0D8h+var_A8]
    vsubss  xmm1, xmm9, xmm10
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vaddss  xmm5, xmm0, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vsubss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vsubss  xmm4, xmm13, xmm14
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0D8h+var_98]
    vaddss  xmm4, xmm0, xmm4
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
ProjectPointOnPlane
==============
*/
void ProjectPointOnPlane(const vec3_t *point, const vec3_t *planePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  const vec3_t *v15; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  vec3_t relativePoint; 

  __asm
  {
    vmovss  xmm3, dword ptr [r8+4]
    vmovss  xmm4, dword ptr [r8]
    vmovss  xmm5, dword ptr [r8+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RDI = outProjectedPoint;
  v15 = planeNormal;
  _RBP = point;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+88h+var_48], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+88h+var_50], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+88h+var_58], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+88h+var_60], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2059, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v34, v35, v36, v37) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+88h+relativePoint], xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+88h+relativePoint+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+88h+relativePoint+8], xmm1
  }
  ProjectPointOnPlane(&relativePoint, v15, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
ProjectPointOnPlane
==============
*/
void ProjectPointOnPlane(const vec3_t *relativePoint, const vec3_t *planeNormal, vec3_t *outProjectedPoint)
{
  double v36; 
  double v37; 
  double v38; 
  double v39; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RSI = outProjectedPoint;
  _RBX = planeNormal;
  _RDI = relativePoint;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+58h+var_18], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+58h+var_20], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+58h+var_28], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+58h+var_30], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 2050, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v36, v37, v38, v39) )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm2, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm5, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm3, xmm2
    vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm5, xmm4
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm1, xmm4, dword ptr [rbx+4]
    vaddss  xmm0, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm2, xmm4, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
ProjectPointOntoVectorClamped
==============
*/
void ProjectPointOntoVectorClamped(const vec3_t *point, const vec3_t *start, const vec3_t *end, vec3_t *vProj, float *outDistFromStart)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
  }
  _R10 = outDistFromStart;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vsubss  xmm8, xmm0, xmm5
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps [rsp+58h+var_48], xmm9
    vsubss  xmm9, xmm0, xmm4
    vmovss  xmm0, dword ptr [r8+8]
    vmovaps [rsp+58h+var_58], xmm10
    vsubss  xmm10, xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm7, xmm3, xmm0
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm7, xmm6
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm2, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm4
    vmulss  xmm3, xmm1, xmm9
    vsubss  xmm0, xmm2, xmm5
    vmovss  xmm2, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm8
    vsubss  xmm0, xmm2, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm3, xmm4, xmm1
    vcomiss xmm3, xmm6
    vminss  xmm6, xmm3, xmm7
    vdivss  xmm3, xmm6, xmm7
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r9], xmm1
    vmulss  xmm2, xmm9, xmm3
    vaddss  xmm0, xmm2, dword ptr [rdx+4]
    vmulss  xmm1, xmm10, xmm3
    vmovss  dword ptr [r9+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+8], xmm2
  }
  if ( outDistFromStart )
    __asm { vmovss  dword ptr [r10], xmm3 }
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
ProjectPointOntoVectorDir
==============
*/
void ProjectPointOntoVectorDir(const vec3_t *point, const vec3_t *start, const vec3_t *dir, vec3_t *result_projectedPoint, float *result_projectedDistanceFromStart)
{
  double v40; 
  double v41; 
  double v42; 
  double v43; 

  __asm
  {
    vmovss  xmm3, dword ptr [r8+4]
    vmovss  xmm4, dword ptr [r8]
    vmovss  xmm5, dword ptr [r8+8]
  }
  _R14 = result_projectedDistanceFromStart;
  _RBP = result_projectedPoint;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RSI = point;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+68h+var_28], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+68h+var_30], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+68h+var_38], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+68h+var_40], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 854, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v40, v41, v42, v43) )
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
    vaddss  xmm3, xmm4, xmm1
    vmulss  xmm2, xmm3, dword ptr [rbx]
    vaddss  xmm0, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+8], xmm1
    vmovss  dword ptr [r14], xmm3
  }
}

/*
==============
ProjectedWindingContainsCoplanarPoint
==============
*/
__int64 ProjectedWindingContainsCoplanarPoint(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point)
{
  int v10; 
  __int64 v17; 
  bool v28; 
  bool v29; 
  __int64 result; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  char *v51; 
  const vec3_t *v52; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v10 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v52 = verts;
  if ( vertCount <= 0 )
  {
LABEL_26:
    result = 1i64;
  }
  else
  {
    _R15 = 4i64 * x;
    _R12 = 4i64 * y;
    v51 = (char *)verts + _R15;
    _RDI = (char *)verts + _R15;
    v17 = 12i64 * (vertCount - 1);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    while ( 1 )
    {
      _RBP = (char *)verts + v17;
      if ( (unsigned int)y >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v41) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v41, v46) )
          __debugbreak();
        LODWORD(v47) = 3;
        LODWORD(v42) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v47) )
          __debugbreak();
      }
      _RAX = _R12 - _R15;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rdi]
        vsubss  xmm8, xmm0, dword ptr [r12+rbp]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v41) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v41, v46) )
          __debugbreak();
        LODWORD(v48) = 3;
        LODWORD(v43) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v48) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rbp]
        vsubss  xmm7, xmm0, dword ptr [rdi]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v41) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v41, v46) )
          __debugbreak();
        LODWORD(v49) = 3;
        LODWORD(v44) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v49) )
          __debugbreak();
      }
      _RAX = point;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rax]
        vsubss  xmm6, xmm0, dword ptr [r15+rbp]
      }
      v28 = (unsigned int)y < 3;
      if ( (unsigned int)y >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v41) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v41, v46) )
          __debugbreak();
        LODWORD(v50) = 3;
        LODWORD(v45) = y;
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v50);
        v28 = 0;
        if ( v29 )
          __debugbreak();
        _RAX = point;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r12+rax]
        vsubss  xmm1, xmm0, dword ptr [r12+rbp]
        vmulss  xmm3, xmm1, xmm7
        vmulss  xmm2, xmm8, xmm6
        vaddss  xmm0, xmm3, xmm2
        vcomiss xmm0, xmm9
      }
      if ( v28 )
        break;
      verts = v52;
      ++v10;
      v17 = _RDI - v51;
      _RDI += 12;
      if ( v10 >= vertCount )
        goto LABEL_26;
    }
    result = 0i64;
  }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
ProjectedWindingContainsCoplanarPointEpsilon
==============
*/
__int64 ProjectedWindingContainsCoplanarPointEpsilon(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, float epsilon)
{
  int v12; 
  __int64 v20; 
  bool v31; 
  bool v32; 
  bool v33; 
  __int64 result; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  char *v61; 
  const vec3_t *v62; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v12 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
  }
  v62 = verts;
  if ( vertCount <= 0 )
  {
LABEL_29:
    result = 1i64;
  }
  else
  {
    __asm { vmovss  xmm9, [rsp+0E8h+epsilon] }
    _R15 = 4i64 * x;
    _R12 = 4i64 * y;
    v61 = (char *)verts + _R15;
    _RSI = (char *)verts + _R15;
    v20 = 12i64 * (vertCount - 1);
    __asm { vxorps  xmm10, xmm10, xmm10 }
    while ( 1 )
    {
      _RBX = (char *)verts + v20;
      if ( (unsigned int)y >= 3 )
      {
        LODWORD(v56) = 3;
        LODWORD(v51) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v56) )
          __debugbreak();
        LODWORD(v57) = 3;
        LODWORD(v52) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v57) )
          __debugbreak();
      }
      _RAX = _R12 - _R15;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rsi]
        vsubss  xmm8, xmm0, dword ptr [rbx+r12]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v56) = 3;
        LODWORD(v51) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v56) )
          __debugbreak();
        LODWORD(v58) = 3;
        LODWORD(v53) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v58) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+r15]
        vsubss  xmm7, xmm0, dword ptr [rsi]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v56) = 3;
        LODWORD(v51) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v56) )
          __debugbreak();
        LODWORD(v59) = 3;
        LODWORD(v54) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v54, v59) )
          __debugbreak();
      }
      _RAX = point;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rax]
        vsubss  xmm6, xmm0, dword ptr [rbx+r15]
      }
      v31 = (unsigned int)y < 3;
      v32 = (unsigned int)y <= 3;
      if ( (unsigned int)y >= 3 )
      {
        LODWORD(v56) = 3;
        LODWORD(v51) = y;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v56) )
          __debugbreak();
        LODWORD(v60) = 3;
        LODWORD(v55) = y;
        v33 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v55, v60);
        v31 = 0;
        v32 = !v33;
        if ( v33 )
          __debugbreak();
        _RAX = point;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r12+rax]
        vsubss  xmm1, xmm0, dword ptr [rbx+r12]
        vmulss  xmm3, xmm1, xmm7
        vmulss  xmm2, xmm8, xmm6
        vaddss  xmm0, xmm3, xmm2
        vcomiss xmm0, xmm10
      }
      if ( v31 )
      {
        __asm
        {
          vmulss  xmm3, xmm0, xmm0
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, xmm9
          vcomiss xmm3, xmm2
        }
        if ( !v32 )
          break;
      }
      ++v12;
      v20 = _RSI - v61;
      _RSI += 12;
      if ( v12 >= vertCount )
        goto LABEL_29;
      verts = v62;
    }
    result = 0i64;
  }
  _R11 = &v64;
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
ProjectedWindingSegmentFractionToEdge
==============
*/
__int64 ProjectedWindingSegmentFractionToEdge(const vec3_t *verts, int vertCount, int x, int y, const vec3_t *point, const vec3_t *centroid, float *fracToEdge)
{
  unsigned int v15; 
  __int64 v16; 
  const vec3_t *v17; 
  __int64 v22; 
  __int64 v24; 
  bool v35; 
  bool v36; 
  bool v45; 
  bool v46; 
  char *v54; 
  __int64 v62; 
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
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  char *v76; 
  void *retaddr; 

  _R11 = &retaddr;
  _RAX = fracToEdge;
  v15 = 0;
  __asm { vmovaps [rsp+0F8h+var_88], xmm10 }
  v16 = y;
  v17 = verts;
  __asm { vmovss  xmm10, cs:__real@7f7fffff }
  if ( vertCount > 0 )
  {
    _R14 = 4i64 * x;
    _R15 = 4 * v16;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps [rsp+0F8h+var_98], xmm11
    }
    v22 = 12i64 * (vertCount - 1);
    v76 = (char *)verts + _R14;
    _RBP = (char *)verts + _R14;
    v24 = (unsigned int)vertCount;
    __asm { vxorps  xmm11, xmm11, xmm11 }
    do
    {
      _RSI = (char *)v17 + v22;
      if ( (unsigned int)v16 >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v62) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
          __debugbreak();
        LODWORD(v70) = 3;
        LODWORD(v63) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v63, v70) )
          __debugbreak();
      }
      _RAX = 4 * v16 - _R14;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rbp]
        vsubss  xmm9, xmm0, dword ptr [rsi+r15]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v62) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
          __debugbreak();
        LODWORD(v71) = 3;
        LODWORD(v64) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v64, v71) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+r14]
        vsubss  xmm8, xmm0, dword ptr [rbp+0]
      }
      if ( (unsigned int)x >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v62) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
          __debugbreak();
        LODWORD(v72) = 3;
        LODWORD(v65) = x;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v65, v72) )
          __debugbreak();
      }
      _RAX = point;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+rax]
        vsubss  xmm6, xmm0, dword ptr [rsi+r14]
      }
      v35 = (unsigned int)v16 < 3;
      if ( (unsigned int)v16 >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v62) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
          __debugbreak();
        LODWORD(v73) = 3;
        LODWORD(v66) = v16;
        v36 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v73);
        v35 = 0;
        if ( v36 )
          __debugbreak();
        _RAX = point;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rax]
        vsubss  xmm1, xmm0, dword ptr [rsi+r15]
        vmulss  xmm3, xmm1, xmm8
        vmulss  xmm2, xmm9, xmm6
        vaddss  xmm7, xmm3, xmm2
        vcomiss xmm7, xmm11
      }
      if ( v35 )
      {
        if ( (unsigned int)x >= 3 )
        {
          LODWORD(v69) = 3;
          LODWORD(v62) = x;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
            __debugbreak();
          LODWORD(v74) = 3;
          LODWORD(v67) = x;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v67, v74) )
            __debugbreak();
        }
        _RAX = centroid;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rax]
          vsubss  xmm6, xmm0, dword ptr [rsi+r14]
        }
        v45 = (unsigned int)v16 < 3;
        if ( (unsigned int)v16 >= 3 )
        {
          LODWORD(v69) = 3;
          LODWORD(v62) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v62, v69) )
            __debugbreak();
          LODWORD(v75) = 3;
          LODWORD(v68) = v16;
          v46 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v68, v75);
          v45 = 0;
          if ( v46 )
            __debugbreak();
          _RAX = centroid;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r15+rax]
          vsubss  xmm1, xmm0, dword ptr [rsi+r15]
          vmulss  xmm3, xmm1, xmm8
          vmulss  xmm2, xmm9, xmm6
          vaddss  xmm4, xmm3, xmm2
          vcomiss xmm4, xmm11
        }
        if ( !v45 )
        {
          __asm
          {
            vsubss  xmm0, xmm4, xmm7
            vdivss  xmm1, xmm4, xmm0
            vminss  xmm10, xmm1, xmm10
          }
          v15 = 1;
        }
      }
      v17 = verts;
      v54 = _RBP;
      _RBP += 12;
      v22 = v54 - v76;
      --v24;
    }
    while ( v24 );
    _RAX = fracToEdge;
    __asm
    {
      vmovaps xmm11, [rsp+0F8h+var_98]
      vmovaps xmm9, [rsp+0F8h+var_78]
      vmovaps xmm8, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
  __asm
  {
    vmovss  dword ptr [rax], xmm10
    vmovaps xmm10, [rsp+0F8h+var_88]
  }
  return v15;
}

/*
==============
ProjectileIntercept
==============
*/

bool __fastcall ProjectileIntercept(const vec3_t *startPos, const vec3_t *startVel, double projSpeed, const vec3_t *targetPos, const vec3_t *targetVel, vec3_t *intercept)
{
  bool result; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = intercept;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [r9]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm5, xmm2
    vmovaps xmmword ptr [rax-68h], xmm11
    vsubss  xmm11, xmm6, dword ptr [rcx]
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  _RAX = targetVel;
  __asm
  {
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm8, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm10, xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm9, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r9+4]
    vsubss  xmm12, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [r9+8]
    vsubss  xmm13, xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm2, xmm9, xmm9
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm2, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, cs:__real@3a83126f
    vmulss  xmm0, xmm5, xmm5
    vsqrtss xmm1, xmm4, xmm4
    vcomiss xmm1, xmm2
    vsubss  xmm5, xmm4, xmm0
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm7, xmm3, xmm0
    vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, xmm2
    vcomiss xmm7, cs:__real@358637be
    vmulss  xmm1, xmm11, xmm8
    vmulss  xmm0, xmm12, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm6, xmm3, cs:__real@40000000
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm2, xmm0, cs:__real@40800000
    vmulss  xmm0, xmm5, cs:__real@40800000
    vmulss  xmm1, xmm0, xmm7
    vsubss  xmm3, xmm2, xmm1
    vxorps  xmm4, xmm4, xmm4
    vcomiss xmm3, xmm4
    vucomiss xmm3, xmm4
    vmovss  xmm0, cs:__real@3f000000
    vsqrtss xmm2, xmm3, xmm3
    vdivss  xmm3, xmm0, xmm5
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm1, xmm2, xmm6
    vmulss  xmm5, xmm1, xmm3
    vcomiss xmm5, xmm4
    vsubss  xmm2, xmm0, xmm2
    vmulss  xmm6, xmm2, xmm3
    vcomiss xmm6, xmm4
    vminss  xmm6, xmm6, xmm5
    vcomiss xmm6, xmm4
    vmulss  xmm0, xmm8, xmm6
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm2, xmm9, xmm6
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmulss  xmm1, xmm10, xmm6
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8], xmm2
  }
  result = 1;
  _R11 = &v83;
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

float __fastcall Q_rint(double in, __int64 a2, double _XMM2_8)
{
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm0, xmm2, xmm1, 1
  }
  return *(float *)&_XMM0;
}

/*
==============
QuatEigenTrace
==============
*/
float QuatEigenTrace(const vec4_t *quat)
{
  char v1; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm5, xmm0, xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm3, xmm1, xmm1
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm1, xmm3, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm1, xmm2
    vaddss  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( !v1 )
    __asm { vdivss  xmm0, xmm3, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
QuatLerp
==============
*/

void __fastcall QuatLerp(const vec4_t *qa, const vec4_t *qb, double frac, vec4_t *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps xmm6, xmm2
    vmovaps [rsp+28h+var_28], xmm7
    vmovss  xmm7, dword ptr [rdx]
    vmulss  xmm2, xmm7, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdx+8]
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vmovss  xmm1, dword ptr [rdx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm3, xmm4, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vsubss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [r9], xmm2
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [r9+4], xmm3
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [r9+8], xmm3
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rcx+0Ch]
    vmovss  dword ptr [r9+0Ch], xmm3
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
}

/*
==============
QuatRatioEigenTrace
==============
*/
float QuatRatioEigenTrace(const vec4_t *quat1, const vec4_t *quat2)
{
  char v2; 
  vec4_t in2; 
  vec4_t out; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vucomiss xmm1, dword ptr [rcx]
  }
  if ( !v2 )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vucomiss xmm0, dword ptr [rcx+4]
  }
  if ( !v2 )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vucomiss xmm0, dword ptr [rcx+8]
  }
  if ( !v2 )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vucomiss xmm0, dword ptr [rcx+0Ch]
  }
  if ( v2 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
LABEL_6:
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm1, xmm3
      vmovss  xmm1, dword ptr [rdx+4]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+58h+in2], xmm0
      vmovss  xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rsp+58h+in2+4], xmm2
      vmovss  xmm2, dword ptr [rdx+0Ch]
      vxorps  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+58h+in2+0Ch], xmm2
      vmovss  dword ptr [rsp+58h+in2+8], xmm1
    }
    QuatMultiply(quat1, &in2, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+out]
      vmovss  xmm1, dword ptr [rsp+58h+out+4]
      vmulss  xmm4, xmm0, xmm0
      vmovss  xmm0, dword ptr [rsp+58h+out+8]
      vmulss  xmm2, xmm0, xmm0
      vmovss  xmm0, dword ptr [rsp+58h+out+0Ch]
      vmulss  xmm3, xmm1, xmm1
      vaddss  xmm1, xmm3, xmm4
      vaddss  xmm5, xmm1, xmm2
      vmulss  xmm1, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm5
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm2, xmm0
    }
    if ( !v2 )
      __asm { vdivss  xmm0, xmm5, xmm2 }
  }
  return *(float *)&_XMM0;
}

/*
==============
QuatSlerpLimited
==============
*/

void __fastcall QuatSlerpLimited(const vec4_t *from, const vec4_t *to, double limit, vec4_t *result)
{
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = result;
  __asm { vmovaps xmmword ptr [rax-48h], xmm9 }
  _RDI = to;
  __asm { vmovaps xmmword ptr [rax-68h], xmm11 }
  _RSI = from;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm12
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps xmm6, xmm2
    vxorpd  xmm11, xmm11, xmm11
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm9, dword ptr [rdi]
    vmulss  xmm2, xmm9, dword ptr [rsi]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdi+8]
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rsi+0Ch]
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm0, cs:__real@bf800000
    vaddss  xmm3, xmm4, xmm2
    vcmpless xmm1, xmm8, xmm3
    vblendvps xmm14, xmm0, xmm13, xmm1
    vmulss  xmm12, xmm14, xmm3
    vcomiss xmm12, xmm13
    vmovss  dword ptr [rbx], xmm9
  }
  *(_QWORD *)&result->xyz.y = *(_QWORD *)&to->xyz.y;
  result->v[3] = to->v[3];
  __asm { vmovaps xmm14, [rsp+0E8h+var_98] }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
QuatToAngleRadAxis
==============
*/
void QuatToAngleRadAxis(const vec4_t *quat, float *outRadians, vec3_t *outAxis)
{
  char v15; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outAxis;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm6, dword ptr [rcx+0Ch]
  }
  _RSI = outRadians;
  _RBX = quat;
  __asm { vmovss  xmm0, dword ptr [rbx+0Ch]; X }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm0, xmm2, xmm2
    vsubss  xmm0, xmm6, xmm0
    vsqrtss xmm2, xmm0, xmm0
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v15 )
  {
    __asm { vmovss  dword ptr [rdi], xmm1 }
    _RDI->v[1] = _RBX->v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+8] }
  }
  else
  {
    __asm
    {
      vdivss  xmm2, xmm6, xmm2
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+8], xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
QuatTrans_Inverse
==============
*/
void QuatTrans_Inverse(const vec4_t *quat, const vec3_t *trans, vec4_t *outInvQuat, vec3_t *outInvTrans)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm6
    vmovss  dword ptr [r8], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vxorps  xmm2, xmm1, xmm6
    vmovss  dword ptr [r8+4], xmm2
    vmovss  xmm0, dword ptr [rcx+8]
    vxorps  xmm1, xmm0, xmm6
    vmovss  dword ptr [r8+8], xmm1
  }
  _RBX = outInvTrans;
  outInvQuat->v[3] = quat->v[3];
  QuatTransform(outInvQuat, trans, outInvTrans);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vxorps  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx], xmm1
    vxorps  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+4], xmm1
    vxorps  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rbx+8], xmm1
  }
}

/*
==============
QuatTrans_MultiplyEquals
==============
*/
void QuatTrans_MultiplyEquals(vec4_t *inoutQuat1, vec3_t *inoutTrans1, const vec4_t *quat2, const vec3_t *trans2)
{
  vec3_t v14; 
  vec4_t out; 

  _RDI = inoutTrans1;
  _RBP = inoutQuat1;
  QuatMultiply(inoutQuat1, quat2, &out);
  QuatTransform(quat2, _RDI, &v14);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+var_48]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsp+68h+var_48+4]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsp+68h+var_48+8]
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovups xmm0, xmmword ptr [rsp+68h+out]
    vmovss  dword ptr [rdi+8], xmm2
    vmovups xmmword ptr [rbp+0], xmm0
  }
}

/*
==============
QuatTrans_TransformPoint
==============
*/
void QuatTrans_TransformPoint(const vec4_t *quat, const vec3_t *trans, const vec3_t *point, vec3_t *outTransformedPoint)
{
  vec3_t out; 

  _RDI = outTransformedPoint;
  QuatTransform(quat, point, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+out]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsp+48h+out+4]
    vmovss  dword ptr [rdi], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsp+48h+out+8]
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm2
  }
}

/*
==============
RotateAxisAroundVectors
==============
*/
void RotateAxisAroundVectors(const tmat33_t<vec3_t> *inAxis, const tmat33_t<vec3_t> *aroundAxes, const vec3_t *angles, tmat33_t<vec3_t> *outAxis)
{
  char v8; 
  char v9; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> out; 

  __asm { vmovaps [rsp+0C0h+var_40], xmm7 }
  _RBX = angles;
  AxisCopy(inAxis, outAxis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( !(v8 | v9) )
  {
    AxisCopy(outAxis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmulss  xmm2, xmm0, cs:__real@3c8efa35; radians
    }
    MatrixRotationRad(&mat, &aroundAxes->m[1], *(float *)&_XMM2);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, xmm7
  }
  if ( !(v8 | v9) )
  {
    AxisCopy(outAxis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmulss  xmm2, xmm0, cs:__real@3c8efa35; radians
    }
    MatrixRotationRad(&mat, &aroundAxes->m[2], *(float *)&_XMM2);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, xmm7
  }
  if ( !(v8 | v9) )
  {
    AxisCopy(outAxis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm0, cs:__real@3c8efa35; radians
    }
    MatrixRotationRad(&mat, aroundAxes->m, *(float *)&_XMM2);
    Vec3Rotate(out.m, &mat, outAxis->m);
    Vec3Rotate(&out.m[1], &mat, &outAxis->m[1]);
    Vec3Rotate(&out.m[2], &mat, &outAxis->m[2]);
  }
  __asm { vmovaps xmm7, [rsp+0C0h+var_40] }
}

/*
==============
RotatePointAroundPoint
==============
*/
void RotatePointAroundPoint(vec3_t *dst, const vec3_t *point, const vec3_t *pivotPoint, const tmat33_t<vec3_t> *rotation)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [r9+4]
    vmovss  xmm4, dword ptr [r9+10h]
    vmovss  xmm5, dword ptr [r9+1Ch]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [r9+8]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [r9+14h]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [r9+20h]
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vsubss  xmm11, xmm1, dword ptr [r8+4]
    vmulss  xmm1, xmm11, dword ptr [r9+0Ch]
    vmovaps [rsp+68h+var_68], xmm12
    vsubss  xmm12, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm10, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm12, dword ptr [r9]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r9+18h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [r8]
    vmovss  dword ptr [rcx], xmm2
    vmulss  xmm1, xmm12, xmm3
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm5
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [r8+4]
    vmulss  xmm1, xmm11, xmm7
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmovaps xmm11, xmmword ptr [rax-58h]
    vmulss  xmm3, xmm12, xmm6
    vmovaps xmm6, xmmword ptr [rax-18h]
    vmovaps xmm12, [rsp+68h+var_68]
    vmovss  dword ptr [rcx+4], xmm0
    vmulss  xmm0, xmm10, xmm8
    vmovaps xmm8, xmmword ptr [rax-38h]
    vmovaps xmm10, xmmword ptr [rax-48h]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm1, xmm2, dword ptr [r8+8]
    vmovss  dword ptr [rcx+8], xmm1
  }
}

/*
==============
RotationToYaw
==============
*/

float __fastcall RotationToYaw(const vec2_t *rot, __int64 a2, double _XMM2_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RBX = rot;
  __asm
  {
    vmulss  xmm6, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm1
    vmovaps [rsp+58h+var_28], xmm7
    vaddss  xmm7, xmm0, xmm6
    vxorps  xmm2, xmm2, xmm2
    vucomiss xmm7, xmm2
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, cs:__real@40000000
    vdivss  xmm2, xmm0, xmm7
    vmulss  xmm0, xmm1, dword ptr [rbx]
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm2; Y
    vmulss  xmm2, xmm2, xmm6
    vsubss  xmm1, xmm1, xmm2; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42652ee0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
SH4VisToConeAngle
==============
*/
void SH4VisToConeAngle(const float *visibilityData, const vec3_t *normal, float *x, float *y, float *z, float *angleCos)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm5, dword ptr [rcx+8]
  }
  _R10 = z;
  _RBX = angleCos;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rcx+4]
    vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm0, cs:__real@3f62dfc5; X
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm5, xmm5, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm3, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [r8], xmm2
    vmovss  dword ptr [r9], xmm4
    vmovss  dword ptr [r10], xmm5
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+38h+var_18]
  }
}

/*
==============
SegmentPointClosestToPoint
==============
*/
void SegmentPointClosestToPoint(const vec3_t *orig, const vec3_t *segMidPoint, const vec3_t *segHalfDir, vec3_t *pointOut)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx]
    vsubss  xmm0, xmm2, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+8]
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RSI = pointOut;
  __asm
  {
    vmovss  xmm6, dword ptr [r8]
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8+8]
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, dword ptr [r8+4]
    vmulss  xmm3, xmm1, xmm8
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm0, xmm2, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, cs:__real@bf800000; min
    vdivss  xmm0, xmm5, xmm2; val
    vmovss  xmm2, cs:__real@3f800000; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vaddss  xmm1, xmm3, dword ptr [rdi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
SignedAngleBetween
==============
*/
float SignedAngleBetween(const vec3_t *a, const vec3_t *b, const vec3_t *reference)
{
  char v64; 
  char v65; 
  vec3_t cross; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1851, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1852, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1840, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( a ))", (const char *)&queryFormat, "Vec3IsNormalized( a )") )
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1841, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( b ))", (const char *)&queryFormat, "Vec3IsNormalized( b )") )
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
    vmulss  xmm6, xmm0, cs:__real@42652ee0
    vandps  xmm1, xmm6, xmm7
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v64 | v65 )
    goto LABEL_12;
  Vec3Cross(_RDI, _RBX, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+cross+4]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsp+0A8h+cross]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsp+0A8h+cross+8]
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
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
SlerpAngles
==============
*/

void __fastcall SlerpAngles(const vec3_t *start, const vec3_t *end, double fraction, vec3_t *outAngles)
{
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  AnglesToQuat(start, &quat);
  AnglesToQuat(end, &to);
  __asm { vmovaps xmm2, xmm6; frac }
  QuatSlerp(&quat, &to, *(float *)&_XMM2, &result);
  UnitQuatToAngles(&result, outAngles);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
TanHalfAngles
==============
*/

void __fastcall TanHalfAngles(double fovdeg_x, double viewAspect, float *tanHalfFovX, float *tanHalfFovY)
{
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
    vmovaps [rsp+38h+var_18], xmm6
  }
  _RDI = tanHalfFovY;
  __asm { vmovaps xmm6, xmm1 }
  _RBX = tanHalfFovX;
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@3f400000
    vmulss  xmm1, xmm2, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rdi], xmm2
  }
}

/*
==============
TrajectoryCalculateExitAngle
==============
*/

float __fastcall TrajectoryCalculateExitAngle(double velocity, double gravity, const float horizontalDistance, double verticalDistance)
{
  __asm
  {
    vmulss  xmm3, xmm3, cs:__real@40000000
    vmovaps [rsp+68h+var_18], xmm6
    vmulss  xmm5, xmm3, xmm0
    vmovaps [rsp+68h+var_28], xmm7
    vmulss  xmm7, xmm0, xmm0
    vmulss  xmm4, xmm7, xmm0
    vmulss  xmm6, xmm4, xmm0
    vmulss  xmm4, xmm5, xmm0
    vmovaps [rsp+68h+var_38], xmm8
    vmulss  xmm8, xmm1, xmm2
    vmulss  xmm0, xmm8, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm1, xmm2, xmm1
    vsubss  xmm6, xmm6, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vsqrtss xmm0, xmm6, xmm6
    vsubss  xmm1, xmm7, xmm0
    vdivss  xmm0, xmm1, xmm8; X
  }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42652ee0
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
TrajectoryCalculateInitialVelocity
==============
*/

void __fastcall TrajectoryCalculateInitialVelocity(const vec3_t *startPos, const vec3_t *endPos, const vec3_t *gravityVector, double totalTime, vec3_t *returnVector)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  _RDI = endPos;
  __asm { vmulss  xmm0, xmm6, cs:__real@3f000000 }
  _RAX = returnVector;
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm4, xmm0, xmm6
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm2, xmm0, dword ptr [rsi]
    vdivss  xmm5, xmm1, xmm6
    vmulss  xmm1, xmm4, dword ptr [rbx]
    vmovaps xmm6, [rsp+48h+var_18]
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rax], xmm2
    vmulss  xmm1, xmm4, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm3, xmm0, dword ptr [rsi+4]
    vsubss  xmm0, xmm3, xmm1
    vmulss  xmm2, xmm0, xmm5
    vmovss  dword ptr [rax+4], xmm2
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm3, xmm1, dword ptr [rsi+8]
    vmulss  xmm0, xmm4, dword ptr [rbx+8]
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rax+8], xmm2
  }
}

/*
==============
TrajectoryCalculateMinimumVelocity
==============
*/

float __fastcall TrajectoryCalculateMinimumVelocity(const vec3_t *startPos, const vec3_t *endPos, double gravity)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm4, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm3, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm3, xmm3, xmm3
    vmovaps [rsp+28h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rcx+8]
    vmulss  xmm0, xmm2, xmm2
    vmovaps [rsp+28h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm2, xmm4, xmm0
    vmulss  xmm5, xmm2, cs:__real@40800000
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm0, cs:__real@40800000
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm0, xmm5, xmm3
    vcvtss2sd xmm1, xmm0, xmm0
    vmulss  xmm0, xmm7, xmm6
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
    vsqrtsd xmm2, xmm1, xmm1
    vmulsd  xmm3, xmm2, cs:__real@3fe0000000000000
    vcvtss2sd xmm1, xmm0, xmm0
    vaddsd  xmm2, xmm3, xmm1
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

float __fastcall TrajectoryComputeDeltaHeightAtTime(double verticalVelocity, double gravity, const float time)
{
  __asm
  {
    vmulss  xmm1, xmm1, cs:__real@3f000000
    vmulss  xmm3, xmm1, xmm2
    vsubss  xmm0, xmm0, xmm3
    vmulss  xmm0, xmm0, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
TrajectoryEstimateDesiredInAirTime
==============
*/

float __fastcall TrajectoryEstimateDesiredInAirTime(const vec3_t *startPos, const vec3_t *endPos, double velocity, double gravity)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm0, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm4, xmm1, dword ptr [rcx+4]
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmulss  xmm0, xmm0, xmm0
    vmovaps xmm7, xmm2
    vmulss  xmm5, xmm4, xmm4
    vaddss  xmm1, xmm5, xmm0
    vmovaps [rsp+88h+var_38], xmm8
    vsqrtss xmm8, xmm1, xmm1
    vmovss  xmm1, dword ptr [rdx+8]
    vmovaps xmm6, xmm3
    vmovaps [rsp+88h+var_48], xmm9
    vmulss  xmm9, xmm2, xmm2
    vmulss  xmm0, xmm9, xmm2
    vmulss  xmm5, xmm0, xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmovaps [rsp+88h+var_58], xmm10
    vmulss  xmm10, xmm8, xmm3
    vmulss  xmm3, xmm0, xmm7
    vmulss  xmm1, xmm10, xmm8
    vmulss  xmm4, xmm3, xmm7
    vaddss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm6, xmm5, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
    vsqrtss xmm0, xmm6, xmm6
    vsubss  xmm1, xmm9, xmm0
    vdivss  xmm0, xmm1, xmm10; X
  }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3f7fffff; X }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vdivss  xmm0, xmm8, xmm1
    vmovaps xmm8, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
TriDiagQL
==============
*/
void TriDiagQL(tmat33_t<vec3_t> *V, vec3_t *d, vec3_t *e)
{
  int v15; 
  bool v17; 
  unsigned int v20; 
  bool v24; 
  int v30; 
  bool v37; 
  bool v38; 
  bool v39; 
  unsigned int v42; 
  __int64 v43; 
  int v63; 
  bool v65; 
  int v73; 
  unsigned int v74; 
  unsigned int v78; 
  signed __int64 v81; 
  __int64 v82; 
  unsigned int v103; 
  bool v104; 
  bool v123; 
  bool v124; 
  unsigned int v131; 
  __int64 v132; 
  unsigned int v134; 
  __int64 v135; 
  int v137; 
  unsigned int v138; 
  bool v141; 
  bool v142; 
  bool v143; 
  unsigned int v147; 
  bool v150; 
  __int64 v164; 
  __int64 v165; 
  unsigned int v168; 
  __int64 v169; 
  vec3_t *v170; 
  unsigned int v173; 
  __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  signed __int64 v178; 
  char *v179; 
  char v180; 
  void *retaddr; 
  int v185; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _RDI = &e->v[1];
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v15 = 1;
  __asm { vmovaps xmmword ptr [rax-88h], xmm9 }
  _R14 = d;
  __asm { vmovaps xmmword ptr [rax-98h], xmm10 }
  v17 = 1;
  __asm
  {
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  do
  {
    if ( !v17 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rdi] }
    if ( (unsigned int)(v15 - 1) >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v15 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi-4], xmm6 }
    ++_RDI;
    v17 = (unsigned int)++v15 < 3;
  }
  while ( v15 < 3 );
  _RBX = e;
  v20 = 0;
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  _RDI = 0i64;
  v168 = 0;
  e->v[2] = 0.0;
  v24 = 1;
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm8, xmm8, xmm8
  }
  v175 = 0i64;
  do
  {
    if ( !v24 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [r14+rdi*4]
      vandps  xmm6, xmm6, xmm7
    }
    if ( v20 >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    v30 = v20;
    _R15 = _RDI;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rdi*4]
      vandps  xmm0, xmm0, xmm7
      vaddss  xmm0, xmm0, xmm6
      vmaxss  xmm8, xmm0, xmm8
      vmovss  [rsp+188h+var_12C], xmm8
      vmulss  xmm6, xmm8, cs:__real@35800000
    }
    v37 = v20 < 3;
    v38 = v20 <= 3;
    do
    {
      if ( !v37 )
      {
        LODWORD(v165) = 3;
        LODWORD(v164) = v30;
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165);
        v38 = !v39;
        if ( v39 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+r15*4]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm6
      }
      if ( v38 )
        break;
      ++v30;
      ++_R15;
      v37 = (unsigned int)v30 < 3;
      v38 = (unsigned int)v30 <= 3;
    }
    while ( v30 < 3 );
    v177 = _R15;
    v185 = v30;
    if ( v30 > (int)v20 )
    {
      v42 = v20 + 1;
      v43 = _R15 - 1;
      v173 = v20 + 1;
      v169 = _R15 - 1;
      do
      {
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vmovss  xmm8, dword ptr [r14+rdi*4] }
        if ( v42 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rdi*4+4]
          vmovss  xmm10, cs:__real@3f800000
          vsubss  xmm2, xmm0, xmm8
          vmovss  xmm0, cs:__real@3f000000
          vdivss  xmm1, xmm0, dword ptr [rbx+rdi*4]
          vmulss  xmm6, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm0, xmm10
          vsqrtss xmm3, xmm2, xmm2
          vxorps  xmm1, xmm3, xmm11
          vcmpltss xmm0, xmm6, xmm13
          vblendvps xmm0, xmm3, xmm1, xmm0
          vmovss  [rsp+188h+var_148], xmm0
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm6, xmm6, [rsp+188h+var_148]
          vmovss  xmm1, dword ptr [rbx+rdi*4]
          vdivss  xmm7, xmm1, xmm6
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [r14+rdi*4], xmm7 }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vmulss  xmm6, xmm6, dword ptr [rbx+rdi*4] }
        if ( v42 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [r14+rdi*4+4], xmm6 }
        if ( v42 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm7, dword ptr [r14+rdi*4+4]
          vmovss  [rsp+188h+var_134], xmm7
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vsubss  xmm6, xmm8, dword ptr [r14+rdi*4] }
        v63 = v20 + 2;
        if ( (int)(v20 + 2) < 3 )
        {
          _RDI = (__int64)(&_R14->z + _RDI);
          v65 = v20 + 2 < 3;
          do
          {
            if ( !v65 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v63;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vsubss  xmm1, xmm0, xmm6
              vmovss  dword ptr [rdi], xmm1
            }
            _RDI += 4i64;
            v65 = (unsigned int)++v63 < 3;
          }
          while ( v63 < 3 );
          _RDI = v175;
          v43 = _R15 - 1;
        }
        __asm
        {
          vaddss  xmm9, xmm9, xmm6
          vmovss  [rsp+188h+var_148], xmm9
        }
        if ( (unsigned int)v30 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm11, dword ptr [r14+r15*4]
          vmovaps xmm9, xmm10
          vmovaps xmm12, xmm10
          vmovaps xmm14, xmm10
        }
        if ( v42 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        _RBX = e;
        v73 = v30 - 1;
        v74 = v30 - 1;
        __asm
        {
          vmovaps xmm10, xmm13
          vmovss  xmm15, dword ptr [rbx+rdi*4+4]
          vmovss  [rsp+188h+var_138], xmm15
        }
        if ( v43 >= _RDI )
        {
          __asm { vmovss  xmm15, cs:__real@3f800000 }
          v78 = v73 + 1;
          _R15 = (char *)&e->v[v43];
          _R13 = (char *)((char *)e - (char *)_R14);
          v81 = (char *)_R14 - (char *)e;
          v179 = (char *)((char *)e - (char *)_R14);
          v82 = 4i64 - (_QWORD)e;
          v178 = v81;
          v176 = v169 - _RDI + 1;
          do
          {
            __asm
            {
              vmovaps xmm14, xmm12
              vmovaps xmm12, xmm9
              vmovaps xmm13, xmm10
            }
            if ( v74 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm7, xmm9, dword ptr [r15]
              vmulss  xmm8, xmm9, xmm11
            }
            if ( v74 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [r15]
              vmulss  xmm2, xmm0, xmm0
              vmulss  xmm1, xmm11, xmm11
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm6, xmm2, xmm2
            }
            if ( v78 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v78;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            _RBX = (__int64)&_R15[v81 + 4];
            __asm
            {
              vmulss  xmm0, xmm10, xmm6
              vmovss  dword ptr [rbx+r13], xmm0
            }
            if ( v74 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vdivss  xmm0, xmm15, xmm6
              vmulss  xmm10, xmm0, dword ptr [r15]
              vmulss  xmm9, xmm0, xmm11
            }
            if ( v74 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm1, xmm9, dword ptr [r12+r15]
              vmulss  xmm0, xmm10, xmm7
              vsubss  xmm11, xmm1, xmm0
            }
            if ( v74 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm1, xmm10, dword ptr [r12+r15]
              vmulss  xmm0, xmm9, xmm7
              vaddss  xmm1, xmm1, xmm0
              vmulss  xmm2, xmm1, xmm10
              vaddss  xmm6, xmm2, xmm8
            }
            if ( v78 >= 3 )
            {
              LODWORD(v165) = 3;
              LODWORD(v164) = v78;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                __debugbreak();
            }
            _RDI = &_R15[(char *)V - (char *)e];
            __asm { vmovss  dword ptr [rbx], xmm6 }
            _R14 = (char *)e + v82;
            v103 = 0;
            v104 = 1;
            do
            {
              if ( !v104 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v103;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              if ( v78 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v78;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              __asm { vmovss  xmm7, dword ptr [rdi+r14] }
              if ( v103 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v103;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              if ( v74 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              __asm
              {
                vmulss  xmm0, xmm10, dword ptr [rdi]
                vmulss  xmm1, xmm9, xmm7
                vaddss  xmm6, xmm1, xmm0
              }
              if ( v103 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v103;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              if ( v78 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v78;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              __asm { vmovss  dword ptr [rdi+r14], xmm6 }
              if ( v103 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v103;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              if ( v74 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              __asm
              {
                vmulss  xmm1, xmm9, dword ptr [rdi]
                vmulss  xmm0, xmm10, xmm7
                vsubss  xmm6, xmm1, xmm0
              }
              if ( v103 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v103;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              if ( v74 >= 3 )
              {
                LODWORD(v165) = 3;
                LODWORD(v164) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
                  __debugbreak();
              }
              __asm { vmovss  dword ptr [rdi], xmm6 }
              _RDI += 12;
              v104 = ++v103 < 3;
            }
            while ( (int)v103 < 3 );
            v81 = v178;
            --v74;
            _R13 = v179;
            --v78;
            v82 = 4i64 - (_QWORD)e;
            _R15 -= 4;
            --v176;
          }
          while ( v176 );
          __asm
          {
            vmovss  xmm15, [rsp+188h+var_138]
            vmovss  xmm7, [rsp+188h+var_134]
          }
          v20 = v168;
          _RDI = v175;
          _RBX = e;
          _R14 = d;
          v42 = v173;
          _R15 = v177;
          v43 = v169;
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm13, xmm10
          vmulss  xmm1, xmm0, xmm14
          vmulss  xmm2, xmm1, xmm15
          vmulss  xmm3, xmm2, dword ptr [rbx+rdi*4]
          vdivss  xmm0, xmm3, xmm7
          vxorps  xmm6, xmm0, xmm11
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm10, xmm6
          vmovss  dword ptr [rbx+rdi*4], xmm0
        }
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm9, xmm6
          vmovss  dword ptr [r14+rdi*4], xmm0
        }
        v123 = v20 <= 3;
        if ( v20 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v20;
          v124 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165);
          v123 = !v124;
          if ( v124 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rdi*4]
          vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm8, [rsp+188h+var_12C]
          vmulss  xmm1, xmm8, cs:__real@35800000
          vmovss  xmm9, [rsp+188h+var_148]
        }
        v30 = v185;
        __asm
        {
          vandps  xmm0, xmm0, xmm7
          vcomiss xmm0, xmm1
          vxorps  xmm13, xmm13, xmm13
        }
      }
      while ( !v123 );
    }
    if ( v20 >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm { vaddss  xmm6, xmm9, dword ptr [r14+rdi*4] }
    if ( v20 >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r14+rdi*4], xmm6 }
    if ( v20 >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    ++v20;
    _RBX->v[_RDI++] = 0.0;
    v168 = v20;
    v175 = _RDI;
    v24 = v20 < 3;
  }
  while ( (int)v20 < 3 );
  v131 = 0;
  v170 = _R14;
  v132 = 0i64;
  _R12 = _R14;
  do
  {
    v134 = v131;
    v135 = v132;
    if ( v131 >= 3 )
    {
      LODWORD(v165) = 3;
      LODWORD(v164) = v131;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r12] }
    v137 = v131 + 1;
    ++v132;
    v138 = v131 + 1;
    _RDI = v132;
    if ( (int)(v131 + 1) < 3 )
    {
      _RAX = d;
      v141 = v138 < 3;
      v142 = v138 <= 3;
      do
      {
        if ( !v141 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v138;
          v143 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165);
          v142 = !v143;
          if ( v143 )
            __debugbreak();
          _RAX = d;
        }
        __asm { vcomiss xmm6, dword ptr [rax+rdi*4] }
        if ( !v142 )
        {
          v134 = v138;
          v135 = _RDI;
          if ( v138 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v138;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
            _RAX = d;
          }
          __asm { vmovss  xmm6, dword ptr [rax+rdi*4] }
        }
        ++v138;
        ++_RDI;
        v141 = v138 < 3;
        v142 = v138 <= 3;
      }
      while ( (int)v138 < 3 );
      if ( v134 != v131 )
      {
        if ( v131 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v131;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        __asm { vmovss  xmm7, dword ptr [r12] }
        if ( v134 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v134;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        _RBX = d;
        _R15 = 4 * v135;
        __asm { vmovss  dword ptr [r15+rbx], xmm7 }
        if ( v131 >= 3 )
        {
          LODWORD(v165) = 3;
          LODWORD(v164) = v131;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
            __debugbreak();
        }
        v147 = 0;
        _RDI = (char *)V + _R15;
        _R14 = (char *)_R12 - _R15 - (char *)d;
        __asm { vmovss  dword ptr [r12], xmm6 }
        v150 = 1;
        do
        {
          if ( !v150 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v147;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          if ( v131 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v131;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          __asm { vmovss  xmm7, dword ptr [r14+rdi] }
          if ( v147 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v147;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          if ( v134 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v134;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          __asm { vmovss  xmm6, dword ptr [rdi] }
          if ( v147 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v147;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          if ( v131 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v131;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          __asm { vmovss  dword ptr [r14+rdi], xmm6 }
          if ( v147 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v147;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          if ( v134 >= 3 )
          {
            LODWORD(v165) = 3;
            LODWORD(v164) = v134;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v165) )
              __debugbreak();
          }
          __asm { vmovss  dword ptr [rdi], xmm7 }
          _RDI += 12;
          v150 = ++v147 < 3;
        }
        while ( (int)v147 < 3 );
        _R12 = v170;
        v137 = v131 + 1;
      }
    }
    _R12 = (vec3_t *)((char *)_R12 + 4);
    v131 = v137;
    v170 = _R12;
  }
  while ( v137 < 2 );
  _R11 = &v180;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
TriDiagReduce
==============
*/
void TriDiagReduce(tmat33_t<vec3_t> *V, vec3_t *d, vec3_t *e)
{
  int v13; 
  bool v18; 
  int v24; 
  unsigned int v27; 
  unsigned int v33; 
  unsigned int v39; 
  unsigned int v50; 
  __int64 i; 
  unsigned int v52; 
  tmat33_t<vec3_t> *v54; 
  int v61; 
  unsigned int v62; 
  char *v64; 
  unsigned int v70; 
  __int64 v72; 
  unsigned int v79; 
  __int64 v82; 
  unsigned int v86; 
  __int64 v87; 
  vec3_t *v88; 
  signed __int64 v91; 
  unsigned int v93; 
  vec3_t *v95; 
  int v104; 
  unsigned int v107; 
  __int64 v108; 
  char *v111; 
  _DWORD *v112; 
  tmat33_t<vec3_t> *v114; 
  unsigned int v115; 
  __int64 v116; 
  unsigned int v127; 
  bool v128; 
  bool v129; 
  unsigned int v131; 
  float *v133; 
  unsigned int v137; 
  __int64 v139; 
  tmat33_t<vec3_t> *p_y; 
  unsigned int v142; 
  __int64 v144; 
  unsigned int v148; 
  __int64 v149; 
  unsigned int v153; 
  float *v154; 
  __int64 v155; 
  unsigned int v156; 
  __int64 v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  __int64 v168; 
  __int64 v169; 
  __int64 v170; 
  __int64 v171; 
  __int64 v172; 
  __int64 v173; 
  __int64 v174; 
  __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  __int64 v178; 
  __int64 v179; 
  __int64 v180; 
  __int64 v181; 
  int v182; 
  tmat33_t<vec3_t> *v183; 
  __int64 v184; 
  __int64 v185; 
  tmat33_t<vec3_t> *v186; 
  __int64 v187; 
  float *v188; 
  unsigned int v190; 
  vec3_t *v191; 
  __int64 v192; 
  signed __int64 v193; 
  __int64 v194; 
  tmat33_t<vec3_t> *v195; 
  __int64 v196; 
  char *v197; 
  signed __int64 v198; 
  vec3_t *v199; 
  void *retaddr; 
  int v213; 
  unsigned int v214; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  v13 = 0;
  _RDI = d;
  _R13 = d;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  _R15 = e;
  __asm
  {
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  v199 = &V->m[2];
  _RSI = (char *)&V->row2 - (char *)d;
  v18 = 1;
  do
  {
    if ( !v18 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rsi+rdi] }
    if ( (unsigned int)v13 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v18 = (unsigned int)++v13 < 3;
  }
  while ( v13 < 3 );
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm11, cs:__real@3f000000
  }
  v24 = 2;
  __asm { vmovaps [rsp+168h+var_78], xmm8 }
  v182 = 2;
  _R14 = 2i64;
  v187 = 2i64;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  while ( 1 )
  {
    v27 = 0;
    _RDI = 0i64;
    __asm
    {
      vmovaps xmm7, xmm13
      vmovaps xmm9, xmm13
    }
    if ( _R14 > 0 )
    {
      do
      {
        if ( v27 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [r13+rdi*4+0] }
        ++_RDI;
        ++v27;
        __asm
        {
          vandps  xmm0, xmm0, xmm10
          vaddss  xmm7, xmm7, xmm0
        }
      }
      while ( _RDI < _R14 );
      __asm { vucomiss xmm7, xmm13 }
      if ( _RDI != _R14 )
      {
        v33 = 0;
        _RDI = 0i64;
        __asm { vdivss  xmm6, xmm14, xmm7 }
        do
        {
          if ( v33 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [r13+rdi*4+0]
            vmovss  dword ptr [r13+rdi*4+0], xmm0
          }
          if ( v33 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
            LODWORD(v174) = 3;
            LODWORD(v165) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v165, v174) )
              __debugbreak();
          }
          __asm { vmovss  xmm0, dword ptr [r13+rdi*4+0] }
          ++_RDI;
          ++v33;
          __asm
          {
            vmulss  xmm1, xmm0, xmm0
            vaddss  xmm9, xmm9, xmm1
          }
        }
        while ( _RDI < _R14 );
        v39 = v24 - 1;
        v213 = v24 - 1;
        _R13 = _R14 - 1;
        v184 = _R14 - 1;
        if ( (unsigned int)(v24 - 1) >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        _RBX = d;
        __asm
        {
          vsqrtss xmm2, xmm9, xmm9
          vxorps  xmm1, xmm2, xmm12
          vmovss  xmm8, dword ptr [rbx+r13*4]
          vcmpltss xmm0, xmm13, xmm8
          vblendvps xmm6, xmm2, xmm1, xmm0
          vmovss  [rsp+168h+var_110], xmm6
        }
        if ( (unsigned int)v24 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vmulss  xmm1, xmm6, xmm8
          vmovss  dword ptr [r15+r14*4], xmm0
          vsubss  xmm9, xmm9, xmm1
        }
        if ( v39 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm0, xmm8, xmm6
          vmovss  dword ptr [rbx+r13*4], xmm0
        }
        v50 = 0;
        for ( i = 0i64; i < _R14; ++i )
        {
          if ( v50 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v50;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          _R15->v[i] = 0.0;
          ++v50;
        }
        v52 = 0;
        if ( v24 > 0 )
        {
          _R13 = 12i64;
          v54 = V;
          v195 = V;
          v191 = _R15;
          _RBX = (char *)V + 4 * _R14 - 12;
          _R12 = (char *)d - (char *)e;
          v197 = _RBX;
          do
          {
            if ( v52 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            _RDI = (char *)_R15 + _R12;
            __asm { vmovss  xmm8, dword ptr [rdi] }
            if ( v52 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            if ( (unsigned int)v182 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v182;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm { vmovss  dword ptr [rbx+r13], xmm8 }
            if ( v52 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
              LODWORD(v175) = 3;
              LODWORD(v166) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v166, v175) )
                __debugbreak();
              LODWORD(v176) = 3;
              LODWORD(v167) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v167, v176) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm0, xmm8, dword ptr [rbp+0]
              vaddss  xmm7, xmm0, dword ptr [r15]
            }
            v61 = v52 + 1;
            v62 = v52 + 1;
            if ( (int)(v52 + 1) <= v213 )
            {
              _RBP = (signed __int64)&_RDI[(char *)e - (char *)d + 4];
              v64 = (char *)V + _R13 + (char *)_R15 - (char *)e;
              do
              {
                if ( v62 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v62;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                if ( v52 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v52;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                if ( v62 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v62;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [r12+rbp]
                  vmulss  xmm1, xmm0, dword ptr [rdi]
                  vaddss  xmm7, xmm7, xmm1
                }
                if ( v62 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v62;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                if ( v52 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v52;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                __asm { vmulss  xmm6, xmm8, dword ptr [rdi] }
                if ( v62 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v62;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                __asm
                {
                  vaddss  xmm0, xmm6, dword ptr [rbp+0]
                  vmovss  dword ptr [rbp+0], xmm0
                }
                _RBP += 4i64;
                ++v62;
                v64 += 12;
              }
              while ( (int)v62 <= v213 );
              v61 = v52 + 1;
              _R15 = v191;
              v54 = v195;
            }
            if ( v52 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            _RBX = v197;
            v54 = (tmat33_t<vec3_t> *)((char *)v54 + 16);
            __asm { vmovss  dword ptr [r15], xmm7 }
            _R15 = (vec3_t *)((char *)_R15 + 4);
            v195 = v54;
            _R13 += 12i64;
            v191 = _R15;
            v52 = v61;
          }
          while ( v61 < v182 );
          v39 = v213;
          _R14 = v187;
          _R15 = e;
        }
        _RDI = _R15;
        v70 = 0;
        _R15 = (char *)d - (char *)e;
        v72 = _R14;
        __asm
        {
          vmovaps xmm6, xmm13
          vdivss  xmm7, xmm14, xmm9
        }
        do
        {
          if ( v70 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v70;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm0, xmm7, dword ptr [rdi]
            vmovss  dword ptr [rdi], xmm0
          }
          if ( v70 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v70;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
            LODWORD(v177) = 3;
            LODWORD(v168) = v70;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v168, v177) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+r15]
            vmulss  xmm1, xmm0, dword ptr [rdi]
          }
          _RDI = (vec3_t *)((char *)_RDI + 4);
          ++v70;
          __asm { vaddss  xmm6, xmm6, xmm1 }
          --v72;
        }
        while ( v72 );
        _RDI = e;
        v24 = v182;
        v79 = 0;
        __asm
        {
          vdivss  xmm0, xmm11, xmm9
          vmulss  xmm7, xmm0, xmm6
        }
        v82 = _R14;
        do
        {
          if ( v79 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          __asm { vmulss  xmm6, xmm7, dword ptr [rdi+r15] }
          if ( v79 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v79;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vsubss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm1
          }
          _RDI = (vec3_t *)((char *)_RDI + 4);
          ++v79;
          --v82;
        }
        while ( v82 );
        v86 = 0;
        if ( v182 <= 0 )
        {
          _RDI = v184;
        }
        else
        {
          v87 = 0i64;
          v192 = 0i64;
          v88 = &V->m[_R14];
          _RSI = (char *)&V->m[v184] - (char *)e;
          _R14 = e;
          v91 = (char *)v88 - (char *)e;
          v198 = v91;
          do
          {
            if ( v86 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v86;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm { vmovss  xmm8, dword ptr [r15+r14] }
            if ( v86 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v86;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            v93 = v86;
            __asm { vmovss  xmm7, dword ptr [r14] }
            if ( (int)v86 <= (int)v39 )
            {
              v95 = _R14;
              _RSI = (char *)V + v87 + (char *)_R14 - (char *)e;
              do
              {
                if ( v93 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v93;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                  LODWORD(v178) = 3;
                  LODWORD(v169) = v93;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v169, v178) )
                    __debugbreak();
                }
                __asm
                {
                  vmulss  xmm1, xmm7, dword ptr [r15+rbp]
                  vmulss  xmm0, xmm8, dword ptr [rbp+0]
                  vaddss  xmm6, xmm1, xmm0
                }
                if ( v93 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v93;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                if ( v86 >= 3 )
                {
                  LODWORD(v173) = 3;
                  LODWORD(v164) = v86;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rsi]
                  vsubss  xmm1, xmm0, xmm6
                  vmovss  dword ptr [rsi], xmm1
                }
                _RSI += 12;
                ++v93;
                v95 = (vec3_t *)((char *)v95 + 4);
              }
              while ( (int)v93 <= v213 );
              v87 = v192;
              v91 = v198;
              _RSI = (char *)&V->m[v184] - (char *)e;
              v39 = v213;
            }
            if ( v39 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            if ( v86 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v86;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm { vmovss  xmm6, dword ptr [rsi+r14] }
            if ( v86 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v86;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm { vmovss  dword ptr [r15+r14], xmm6 }
            if ( (unsigned int)v182 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v182;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            if ( v86 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v86;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            v87 += 12i64;
            *(float *)((char *)_R14->v + v91) = 0.0;
            _R14 = (vec3_t *)((char *)_R14 + 4);
            v192 = v87;
            ++v86;
          }
          while ( (int)v86 < v182 );
          v24 = v182;
          _R14 = v187;
          _RDI = v184;
        }
        v104 = v213;
LABEL_177:
        _R13 = d;
        goto LABEL_178;
      }
    }
    v104 = v24 - 1;
    _RDI = _R14 - 1;
    v185 = _R14 - 1;
    if ( (unsigned int)(v24 - 1) >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v24 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r13+rdi*4+0] }
    if ( (unsigned int)v24 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    _RAX = e;
    v107 = 0;
    __asm { vmovss  dword ptr [rax+r14*4], xmm6 }
    if ( v24 > 0 )
    {
      v108 = 3 * _RDI;
      _RDI = _R13;
      _RBP = (char *)((char *)V + 4 * v108 - (char *)_R13);
      v111 = (char *)((char *)&V->m[_R14] - (char *)_R13);
      v112 = (_DWORD *)((char *)V + 4 * v187);
      do
      {
        if ( (unsigned int)v104 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        if ( v107 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v107;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rdi+rbp] }
        if ( v107 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v107;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
        if ( (unsigned int)v24 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        if ( v107 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v107;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        *(float *)((char *)_RDI->v + (_QWORD)v111) = 0.0;
        if ( v107 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v107;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        if ( (unsigned int)v24 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        *v112 = 0;
        ++v107;
        v112 += 3;
        _RDI = (vec3_t *)((char *)_RDI + 4);
      }
      while ( (int)v107 < v24 );
      _R14 = v187;
      _RDI = v185;
      goto LABEL_177;
    }
LABEL_178:
    if ( (unsigned int)v24 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    v187 = _RDI;
    v24 = v104;
    v182 = v104;
    __asm { vmovss  dword ptr [r13+r14*4+0], xmm9 }
    _R14 = _RDI;
    if ( v104 <= 0 )
      break;
    _R15 = e;
  }
  v114 = V;
  v115 = 0;
  v116 = 0i64;
  __asm { vmovaps xmm12, [rsp+168h+var_B8] }
  _RDI = (char *)d - (char *)V;
  __asm { vmovaps xmm11, [rsp+168h+var_A8] }
  _R12 = V;
  __asm
  {
    vmovaps xmm10, [rsp+168h+var_98]
    vmovaps xmm9, [rsp+168h+var_88]
  }
  _R15 = &V->m[0].v[1];
  __asm { vmovaps xmm8, [rsp+168h+var_78] }
  _RBX = 24i64;
  v214 = 0;
  v194 = 0i64;
  v183 = V;
  v188 = &V->m[0].v[1];
  do
  {
    if ( v115 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v115;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
      LODWORD(v179) = 3;
      LODWORD(v170) = v115;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v170, v179) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r12] }
    if ( v115 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v115;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rbx+r15-4], xmm6 }
    if ( v115 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v115;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
      LODWORD(v180) = 3;
      LODWORD(v171) = v115;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v171, v180) )
        __debugbreak();
    }
    v127 = v115 + 1;
    _R12->m[0].v[0] = 1.0;
    v190 = v115 + 1;
    v128 = v115 == 2;
    if ( v115 + 1 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v115 + 1;
      v129 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173);
      v128 = !v129;
      if ( v129 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+r15]
      vucomiss xmm0, xmm13
    }
    if ( !v128 )
    {
      v131 = 0;
      _RDI = 0i64;
      if ( v116 >= 0 )
      {
        v133 = _R15;
        __asm { vdivss  xmm7, xmm14, xmm0 }
        do
        {
          if ( v131 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v131;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          if ( v127 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v115 + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          __asm { vmulss  xmm6, xmm7, dword ptr [rsi] }
          if ( v131 >= 3 )
          {
            LODWORD(v173) = 3;
            LODWORD(v164) = v131;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
              __debugbreak();
          }
          _RAX = d;
          ++v131;
          v133 += 3;
          __asm { vmovss  dword ptr [rax+rdi*4], xmm6 }
          ++_RDI;
        }
        while ( _RDI <= v116 );
        _R15 = v188;
        _R12 = v183;
        v114 = V;
      }
      v137 = 0;
      if ( v116 >= 0 )
      {
        _R15 = (char *)_R15 - (char *)v114;
        v186 = v114;
        v139 = v116 + 1;
        v193 = _R15;
        v196 = v116 + 1;
        p_y = v114;
        do
        {
          _RDI = p_y;
          v142 = 0;
          __asm { vmovaps xmm7, xmm13 }
          v144 = v139;
          do
          {
            if ( v142 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v142;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
              LODWORD(v181) = 3;
              LODWORD(v172) = v142;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v172, v181) )
                __debugbreak();
            }
            if ( v137 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v137;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            if ( v127 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v127;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [r15+rdi]
              vmulss  xmm1, xmm0, dword ptr [rdi]
            }
            _RDI = (tmat33_t<vec3_t> *)((char *)_RDI + 12);
            ++v142;
            __asm { vaddss  xmm7, xmm7, xmm1 }
            --v144;
          }
          while ( v144 );
          _RSI = v186;
          v116 = v194;
          v148 = 0;
          v149 = 0i64;
          do
          {
            if ( v148 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v148;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm { vmulss  xmm6, xmm7, dword ptr [r14+rdi*4] }
            if ( v148 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v148;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            if ( v137 >= 3 )
            {
              LODWORD(v173) = 3;
              LODWORD(v164) = v137;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rsi]
              vsubss  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsi], xmm1
            }
            _RSI = (tmat33_t<vec3_t> *)((char *)_RSI + 12);
            ++v148;
            ++v149;
          }
          while ( v149 <= v194 );
          v139 = v194 + 1;
          _R15 = v193 - 4;
          v127 = v190;
          p_y = (tmat33_t<vec3_t> *)&v186->m[0].y;
          ++v137;
          v193 -= 4i64;
          v128 = v196-- == 1;
          v186 = (tmat33_t<vec3_t> *)((char *)v186 + 4);
        }
        while ( !v128 );
        _R15 = v188;
        _R12 = v183;
      }
      v115 = v214;
    }
    v153 = 0;
    if ( v116 >= 0 )
    {
      v154 = _R15;
      v155 = v116 + 1;
      do
      {
        if ( v153 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v153;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        if ( v115 + 1 >= 3 )
        {
          LODWORD(v173) = 3;
          LODWORD(v164) = v115 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
            __debugbreak();
        }
        *v154 = 0.0;
        ++v153;
        v154 += 3;
        --v155;
      }
      while ( v155 );
      _R15 = v188;
      _R12 = v183;
    }
    _RBX = 24i64;
    ++v115;
    _RDI = (char *)d - (char *)V;
    ++v116;
    v114 = V;
    ++_R15;
    _R12 = (tmat33_t<vec3_t> *)((char *)_R12 + 16);
    v214 = v115;
    v194 = v116;
    v188 = _R15;
    v183 = _R12;
  }
  while ( (int)v115 < 2 );
  v156 = 0;
  _RSI = v199;
  __asm { vmovaps xmm14, [rsp+168h+var_D8] }
  _RDI = (char *)((char *)d - (char *)v199);
  __asm
  {
    vmovaps xmm13, [rsp+168h+var_C8]
    vmovaps xmm7, [rsp+168h+var_68]
  }
  do
  {
    if ( v156 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v156;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rsi] }
    if ( v156 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v156;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rsi], xmm6 }
    if ( v156 >= 3 )
    {
      LODWORD(v173) = 3;
      LODWORD(v164) = v156;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v164, v173) )
        __debugbreak();
    }
    _RSI->v[0] = 0.0;
    ++v156;
    _RSI = (vec3_t *)((char *)_RSI + 4);
  }
  while ( (int)v156 < 3 );
  __asm { vmovaps xmm6, [rsp+168h+var_58] }
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
  __int64 v9; 
  __int64 v10; 
  __int64 v18; 

  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  _RBX = (char *)points;
  v9 = stride;
  v10 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 294, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v9 < 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 295, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec2_t ))", (const char *)&queryFormat, "stride >= sizeof( vec2_t )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm4, cs:__real@3ea6b0de
    vmovss  xmm2, cs:__real@3f720d81
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdi
    vdivss  xmm7, xmm0, xmm1
    vmulss  xmm5, xmm7, cs:__real@3f000000
  }
  if ( (_DWORD)v10 )
  {
    __asm { vmovaps [rsp+78h+var_18], xmm6 }
    v18 = v10;
    __asm
    {
      vmovss  xmm6, cs:__real@bf3cc435
      vmovaps [rsp+78h+var_38], xmm8
      vmovss  xmm8, cs:__real@3f2cecef
      vmovaps [rsp+78h+var_48], xmm9
      vmovss  xmm9, cs:__real@bf2cecef
    }
    do
    {
      __asm
      {
        vsqrtss xmm1, xmm5, xmm5
        vmulss  xmm0, xmm1, xmm2
        vmulss  xmm1, xmm1, xmm4
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  dword ptr [rbx], xmm0
        vmulss  xmm0, xmm2, xmm8
        vmulss  xmm1, xmm4, xmm6
        vmovaps xmm3, xmm4
        vsubss  xmm4, xmm1, xmm0
      }
      _RBX += v9;
      __asm
      {
        vmulss  xmm1, xmm3, xmm9
        vmulss  xmm2, xmm2, xmm6
        vsubss  xmm2, xmm2, xmm1
        vaddss  xmm5, xmm5, xmm7
      }
      --v18;
    }
    while ( v18 );
    __asm
    {
      vmovaps xmm9, [rsp+78h+var_48]
      vmovaps xmm8, [rsp+78h+var_38]
      vmovaps xmm6, [rsp+78h+var_18]
    }
  }
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
}

/*
==============
UniformPointsOnHemisphere
==============
*/
void UniformPointsOnHemisphere(unsigned int pointCount, void *points, unsigned int stride)
{
  __int64 v13; 
  __int64 v14; 
  __int64 v22; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = (char *)points;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v13 = stride;
  v14 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 332, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v13 < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 333, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec3_t ))", (const char *)&queryFormat, "stride >= sizeof( vec3_t )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
    vdivss  xmm8, xmm7, xmm0
    vmulss  xmm4, xmm8, cs:__real@3f000000
    vxorps  xmm5, xmm5, xmm5
    vmovaps xmm6, xmm7
  }
  if ( (_DWORD)v14 )
  {
    __asm { vmovaps [rsp+98h+var_48], xmm9 }
    v22 = v14;
    __asm
    {
      vmovss  xmm9, cs:__real@bf3cc435
      vmovaps [rsp+98h+var_58], xmm10
      vmovss  xmm10, cs:__real@3f2cecef
      vmovaps [rsp+98h+var_68], xmm11
      vmovss  xmm11, cs:__real@bf2cecef
    }
    do
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vsubss  xmm0, xmm7, xmm0
        vsqrtss xmm2, xmm0, xmm0
        vmulss  xmm1, xmm2, xmm6
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbx], xmm1
        vmovss  dword ptr [rbx+4], xmm0
        vmulss  xmm1, xmm5, xmm9
        vmulss  xmm0, xmm6, xmm10
        vmovss  dword ptr [rbx+8], xmm4
        vmovaps xmm3, xmm5
        vsubss  xmm5, xmm1, xmm0
      }
      _RBX += v13;
      __asm
      {
        vmulss  xmm1, xmm3, xmm11
        vmulss  xmm2, xmm6, xmm9
        vsubss  xmm6, xmm2, xmm1
        vaddss  xmm4, xmm4, xmm8
      }
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm11, [rsp+98h+var_68]
      vmovaps xmm10, [rsp+98h+var_58]
      vmovaps xmm9, [rsp+98h+var_48]
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
UniformPointsOnSphere
==============
*/
void UniformPointsOnSphere(unsigned int pointCount, void *points, unsigned int stride)
{
  __int64 v14; 
  __int64 v15; 
  __int64 v23; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = (char *)points;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  v14 = stride;
  v15 = pointCount;
  if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 372, ASSERT_TYPE_ASSERT, "(points)", (const char *)&queryFormat, "points") )
    __debugbreak();
  if ( (unsigned int)v14 < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 373, ASSERT_TYPE_ASSERT, "(stride >= sizeof( vec3_t ))", (const char *)&queryFormat, "stride >= sizeof( vec3_t )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
    vdivss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm8, cs:__real@3f000000
    vxorps  xmm5, xmm5, xmm5
    vmovaps xmm6, xmm4
  }
  if ( (_DWORD)v15 )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm9 }
    v23 = v15;
    __asm
    {
      vmovss  xmm9, cs:__real@bf3cc435
      vmovaps [rsp+0A8h+var_58], xmm10
      vmovss  xmm10, cs:__real@40000000
      vmovaps [rsp+0A8h+var_68], xmm11
      vmovss  xmm11, cs:__real@3f2cecef
      vmovaps [rsp+0A8h+var_78], xmm12
      vmovss  xmm12, cs:__real@bf2cecef
    }
    do
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm10
        vsubss  xmm3, xmm0, xmm4
        vmulss  xmm1, xmm3, xmm3
        vsubss  xmm0, xmm4, xmm1
        vsqrtss xmm2, xmm0, xmm0
        vmulss  xmm1, xmm2, xmm6
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbx], xmm1
        vmovss  dword ptr [rbx+4], xmm0
        vmulss  xmm1, xmm5, xmm9
        vmulss  xmm0, xmm6, xmm11
        vmovss  dword ptr [rbx+8], xmm3
        vmovaps xmm3, xmm5
        vsubss  xmm5, xmm1, xmm0
      }
      _RBX += v14;
      __asm
      {
        vmulss  xmm1, xmm3, xmm12
        vmulss  xmm2, xmm6, xmm9
        vsubss  xmm6, xmm2, xmm1
        vaddss  xmm7, xmm7, xmm8
      }
      --v23;
    }
    while ( v23 );
    __asm
    {
      vmovaps xmm12, [rsp+0A8h+var_78]
      vmovaps xmm11, [rsp+0A8h+var_68]
      vmovaps xmm10, [rsp+0A8h+var_58]
      vmovaps xmm9, [rsp+0A8h+var_48]
    }
  }
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
UnitQuatToAngles
==============
*/
void UnitQuatToAngles(const vec4_t *quat, vec3_t *angles)
{
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  tmat33_t<vec3_t> axis; 
  char v76; 
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
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm6, dword ptr [rcx+8]
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  xmm13, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm13
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  _RBX = quat;
  __asm
  {
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+108h+var_C0], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  [rsp+108h+var_C8], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+108h+var_D0], xmm3
    vmovsd  [rsp+108h+var_D8], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  [rsp+108h+var_E0], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v70, v71, v72, v73, v74) )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm5, dword ptr [rbx]
    vmulss  xmm12, xmm1, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx+0Ch]
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm3, xmm0
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm10, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm5, xmm4, xmm0
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm0, xmm13, xmm1
    vmovss  dword ptr [rsp+108h+axis], xmm0
    vsubss  xmm0, xmm9, xmm7
    vmovss  dword ptr [rsp+108h+axis+8], xmm0
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rsp+108h+axis+4], xmm1
    vsubss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+108h+axis+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm5, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rsp+108h+axis+10h], xmm0
    vaddss  xmm0, xmm7, xmm9
    vmovss  dword ptr [rsp+108h+axis+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovss  dword ptr [rsp+108h+axis+14h], xmm1
    vsubss  xmm0, xmm13, xmm0
    vsubss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rsp+108h+axis+20h], xmm0
    vmovss  dword ptr [rsp+108h+axis+1Ch], xmm1
  }
  AxisToAngles(&axis, angles);
  _R11 = &v76;
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
}

/*
==============
UnitQuatToForward
==============
*/
void UnitQuatToForward(const vec4_t *quat, vec3_t *forward)
{
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RDI = forward;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = quat;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm8
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rax-40h], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  qword ptr [rax-48h], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  qword ptr [rax-50h], xmm3
    vmovsd  qword ptr [rax-58h], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  qword ptr [rax-60h], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 1152, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v51, v52, v53, v54, v55) )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm5, cs:__real@40000000
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm3, xmm5
    vsubss  xmm0, xmm8, xmm0
    vmovaps xmm8, [rsp+88h+var_38]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm3, xmm2
    vmulss  xmm3, xmm1, xmm5
    vmovss  dword ptr [rdi+4], xmm3
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm3, xmm0, xmm5
    vmovss  dword ptr [rdi+8], xmm3
  }
}

/*
==============
DampedSpring::Update1DAngleSpring
==============
*/

void __fastcall DampedSpring::Update1DAngleSpring(DampedSpring *this, float *currentPos, double targetPos, float *velocity)
{
  char v11; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+18h]
    vmovss  xmm1, dword ptr [rcx+4]
    vcomiss xmm3, xmm1
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm2
  }
  _R11 = &v11;
  __asm { vmovaps xmm11, xmmword ptr [r11-60h] }
}

/*
==============
DampedSpring::Update1DAngleSpringInternal
==============
*/
void DampedSpring::Update1DAngleSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovaps [rsp+38h+var_18], xmm9
  }
  _RDI = velocity;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmulss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm0, xmm2, cs:__real@40000000
    vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm0, dword ptr [r9]
    vsubss  xmm3, xmm3, xmm1
    vmulss  xmm2, xmm3, dword ptr [rcx+14h]
    vmulss  xmm0, xmm2, dword ptr [rcx+10h]
    vaddss  xmm0, xmm0, dword ptr [r9]; val
    vmovss  xmm2, cs:__real@469c4000; max
    vmovss  xmm1, cs:__real@c69c4000; min
    vmovss  dword ptr [r9], xmm0
  }
  _RSI = currentPos;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm0, dword ptr [rbx+14h]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vroundss xmm3, xmm9, xmm1, 1
    vmovaps xmm9, [rsp+38h+var_18]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
DampedSpring::Update1DLinearSpring
==============
*/

void __fastcall DampedSpring::Update1DLinearSpring(DampedSpring *this, float *currentPos, double targetPos, float *velocity)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+18h]
    vmovss  xmm1, dword ptr [rcx+4]
    vcomiss xmm3, xmm1
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
DampedSpring::Update1DLinearSpringInternal
==============
*/
void DampedSpring::Update1DLinearSpringInternal(DampedSpring *this, float *currentPos, const float targetPos, float *velocity)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm1, dword ptr [r9]
    vsubss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm3, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rcx+10h]
    vaddss  xmm0, xmm1, dword ptr [r9]; val
    vmovss  xmm1, cs:__real@c69c4000; min
    vmovss  xmm2, cs:__real@469c4000; max
    vmovss  dword ptr [r9], xmm0
  }
  _RDI = velocity;
  _RSI = currentPos;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm0, dword ptr [rbx+14h]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
DampedSpring::Update3dSpring
==============
*/
void DampedSpring::Update3dSpring(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+18h]
    vmovss  xmm2, dword ptr [rcx+4]
    vcomiss xmm3, xmm2
  }
}

/*
==============
DampedSpring::Update3dSpringInternal
==============
*/
void DampedSpring::Update3dSpringInternal(DampedSpring *this, vec3_t *currentAngles, const vec3_t *targetAngles, vec3_t *velocity)
{
  char v25; 
  char v44; 
  float outRadians; 
  vec3_t v98; 
  vec4_t outAxis; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> matrix; 
  tmat33_t<vec3_t> v105; 
  tmat33_t<vec3_t> v106; 
  char v107; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  _RBX = velocity;
  _RSI = targetAngles;
  _RDI = currentAngles;
  _R14 = this;
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4447, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( targetAngles )[0] ) && !IS_NAN( ( targetAngles )[1] ) && !IS_NAN( ( targetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( targetAngles )[0] ) && !IS_NAN( ( targetAngles )[1] ) && !IS_NAN( ( targetAngles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4449, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
  AnglesToAxis(_RSI, &axis);
  AnglesToAxis(_RDI, &in2);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&out, &in2, &matrix);
  MatrixToAngleRadAxis(&matrix, (vec3_t *)&outAxis, &outRadians);
  __asm
  {
    vmovss  xmm0, [rsp+200h+outRadians]
    vmovss  xmm6, dword ptr [rbx]
    vucomiss xmm6, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmulss  xmm7, xmm0, cs:__real@42652ee0
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx+8]
    vmovss  xmm12, cs:__real@3f800000
    vmovss  [rsp+200h+outRadians], xmm7
    vxorps  xmm11, xmm11, xmm11
  }
  if ( !v25 )
    goto LABEL_20;
  __asm { vucomiss xmm9, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
  if ( !v25 )
    goto LABEL_20;
  __asm { vucomiss xmm10, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
  if ( v25 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
LABEL_20:
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2; val
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm12, xmm1
      vdivss  xmm2, xmm12, xmm1
      vmulss  xmm6, xmm2, xmm6
      vmulss  xmm9, xmm2, xmm9
      vmulss  xmm10, xmm2, xmm10
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@469c4000; max
    vmovss  xmm1, cs:__real@c69c4000; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [r14+0Ch]
    vmovss  xmm2, dword ptr [r14]
    vmulss  xmm3, xmm2, cs:__real@c0000000
    vxorps  xmm8, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm4, xmm3, xmm0
    vmovss  xmm0, dword ptr [r14+10h]
    vmulss  xmm7, xmm0, dword ptr [r14+14h]
    vmulss  xmm0, xmm8, dword ptr [rsp+200h+outAxis]
    vmulss  xmm2, xmm6, xmm4
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm3, xmm2, xmm7
    vaddss  xmm6, xmm3, dword ptr [rbx]
    vmulss  xmm2, xmm8, dword ptr [rsp+200h+outAxis+4]
    vmulss  xmm1, xmm9, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm8, dword ptr [rsp+200h+outAxis+8]
    vmulss  xmm0, xmm2, xmm7
    vaddss  xmm5, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx], xmm6
    vmovss  dword ptr [rbx+4], xmm5
    vmulss  xmm2, xmm10, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, xmm7
    vaddss  xmm4, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm4
    vmovss  xmm0, dword ptr [r14+14h]
    vmulss  xmm6, xmm6, xmm0
    vucomiss xmm6, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmulss  xmm3, xmm5, xmm0
    vmulss  xmm5, xmm4, xmm0
    vmovss  dword ptr [rsp+200h+var_1C8+8], xmm5
    vmovss  dword ptr [rsp+200h+var_1C8], xmm6
    vmovss  dword ptr [rsp+200h+var_1C8+4], xmm3
  }
  if ( !v44 )
    goto LABEL_24;
  __asm { vucomiss xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
  if ( !v44 )
    goto LABEL_24;
  __asm { vucomiss xmm5, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
  if ( !v44 )
  {
LABEL_24:
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm11, xmm2, xmm2
      vcmpless xmm0, xmm11, cs:__real@80000000
      vblendvps xmm0, xmm11, xmm12, xmm0
      vdivss  xmm2, xmm12, xmm0
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+200h+var_1C8], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+200h+var_1C8+8], xmm0
      vmovss  dword ptr [rsp+200h+var_1C8+4], xmm1
    }
  }
  __asm { vmulss  xmm0, xmm11, cs:__real@3c8efa35; radians }
  AngleRadAxisToQuat(*(float *)&_XMM0, &v98, &outAxis);
  QuatToAxis(&outAxis, &out);
  AxisToAngles(&out, &angles);
  AnglesToAxis(&angles, &v105);
  MatrixMultiply(&in2, &v105, &v106);
  AxisToAngles(&v106, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4498, ASSERT_TYPE_SANITY, "( !IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( currentAngles )[0] ) && !IS_NAN( ( currentAngles )[1] ) && !IS_NAN( ( currentAngles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+200h+outRadians], xmm0
  }
  if ( (LODWORD(outRadians) & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.cpp", 4499, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
  _R11 = &v107;
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
}

/*
==============
DampedSpring::UpdateDeltaTime
==============
*/
char DampedSpring::UpdateDeltaTime(DampedSpring *this)
{
  char v1; 
  char v2; 

  __asm
  {
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm2, dword ptr [rcx+18h]
    vmovss  xmm1, dword ptr [rcx+8]
    vsubss  xmm0, xmm3, xmm2
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rcx+14h], xmm0
  }
  if ( v1 | v2 )
    __asm { vmovaps xmm1, xmm0 }
  else
    __asm { vmovss  dword ptr [rcx+14h], xmm1 }
  __asm
  {
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm2, cs:__real@34000000
    vcomiss xmm1, xmm2
    vmovss  dword ptr [rcx+18h], xmm0
  }
  if ( v1 )
    return 0;
  __asm { vcomiss xmm3, xmm2 }
  return 1;
}

/*
==============
Vec2MinorAxis
==============
*/
__int64 Vec2MinorAxis(const vec2_t *dir)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vcomiss xmm1, xmm2
  }
  return 0i64;
}

/*
==============
Vec3ProjectionCoords
==============
*/
__int64 Vec3ProjectionCoords(const vec3_t *dir, int *xCoord, int *yCoord)
{
  char v3; 
  __int64 result; 

  __asm
  {
    vmovss  xmm3, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+8]
    vmovss  xmm5, dword ptr [rcx+4]
    vmulss  xmm4, xmm3, xmm3
    vmulss  xmm1, xmm2, xmm2
    vcomiss xmm1, xmm4
    vmulss  xmm0, xmm5, xmm5
  }
  if ( v3 )
  {
    __asm
    {
      vcomiss xmm0, xmm4
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
    }
    result = 0i64;
    *xCoord = 2;
    *yCoord = 1;
  }
  else
  {
    __asm
    {
      vcomiss xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    *xCoord = 1;
    *yCoord = 0;
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
  vec3_t in; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+48h+in], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+48h+in+8], xmm0
    vmovss  dword ptr [rsp+48h+in+4], xmm1
  }
  Vec3Rotate(&in, matrix, v);
}

/*
==============
VectorAngleMultiply
==============
*/

void __fastcall VectorAngleMultiply(vec2_t *vec, double angle)
{
  float s; 
  float c; 

  __asm { vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians }
  _RBX = vec;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rbx+4]
    vmulss  xmm1, xmm4, [rsp+28h+c]
    vmulss  xmm0, xmm5, [rsp+28h+s]
    vmulss  xmm2, xmm5, [rsp+28h+c]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm4, [rsp+28h+s]
    vmovss  dword ptr [rbx+4], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
VectorRotateQuatAroundPoint
==============
*/
void VectorRotateQuatAroundPoint(const vec3_t *vIn, const vec4_t *vQuat, const vec3_t *vOrigin, vec3_t *out)
{
  vec3_t in; 
  vec3_t outa; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+58h+in], xmm1
    vsubss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+58h+in+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [r8+8]
  }
  _RDI = out;
  __asm { vmovss  dword ptr [rsp+58h+in+8], xmm1 }
  QuatTransform(vQuat, &in, &outa);
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

