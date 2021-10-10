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
  double v1; 

  v1 = MatrixDeterminant(&orient->axis);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v1) & _xmm) - 1.0) & _xmm) < 0.001;
}

/*
==============
OrientationPosToWorldPos
==============
*/
void OrientationPosToWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  double v6; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 24, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 25, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)((float)(orient->axis.m[0].v[0] * pos->v[0]) + orient->origin.v[0]) + (float)(orient->axis.m[1].v[0] * pos->v[1])) + (float)(orient->axis.m[2].v[0] * pos->v[2]);
  out->v[1] = (float)((float)((float)(orient->axis.m[0].v[1] * pos->v[0]) + orient->origin.v[1]) + (float)(orient->axis.m[1].v[1] * pos->v[1])) + (float)(orient->axis.m[2].v[1] * pos->v[2]);
  out->v[2] = (float)((float)((float)(orient->axis.m[0].v[2] * pos->v[0]) + orient->origin.v[2]) + (float)(orient->axis.m[1].v[2] * pos->v[1])) + (float)(orient->axis.m[2].v[2] * pos->v[2]);
}

/*
==============
OrientationPosToWorldPos
==============
*/
void OrientationPosToWorldPos(const orientation_t *orient, const dvec3_t *pos, dvec3_t *out)
{
  double v6; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 33, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 34, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->x = orient->axis.m[0].v[0] * pos->x + orient->origin.v[0] + orient->axis.m[1].v[0] * pos->y + orient->axis.m[2].v[0] * pos->z;
  out->y = orient->axis.m[0].v[1] * pos->x + orient->origin.v[1] + orient->axis.m[1].v[1] * pos->y + orient->axis.m[2].v[1] * pos->z;
  out->z = orient->axis.m[0].v[2] * pos->x + orient->origin.v[2] + orient->axis.m[1].v[2] * pos->y + orient->axis.m[2].v[2] * pos->z;
}

/*
==============
OrientationDirToWorldDir
==============
*/
void OrientationDirToWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  double v6; 

  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 42, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 43, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)(orient->axis.m[1].v[0] * dir->v[1]) + (float)(orient->axis.m[0].v[0] * dir->v[0])) + (float)(orient->axis.m[2].v[0] * dir->v[2]);
  out->v[1] = (float)((float)(orient->axis.m[0].v[1] * dir->v[0]) + (float)(orient->axis.m[1].v[1] * dir->v[1])) + (float)(orient->axis.m[2].v[1] * dir->v[2]);
  out->v[2] = (float)((float)(orient->axis.m[0].v[2] * dir->v[0]) + (float)(orient->axis.m[1].v[2] * dir->v[1])) + (float)(orient->axis.m[2].v[2] * dir->v[2]);
}

/*
==============
OrientationDirToWorldDir
==============
*/
void OrientationDirToWorldDir(const orientation_t *orient, const dvec3_t *dir, dvec3_t *out)
{
  double v6; 

  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 51, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 52, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal(*orient) )", "%s", "OrientationIsOrthogonal(*orient)") )
    __debugbreak();
  out->x = orient->axis.m[1].v[0] * dir->y + orient->axis.m[0].v[0] * dir->x + orient->axis.m[2].v[0] * dir->z;
  out->y = orient->axis.m[1].v[1] * dir->y + orient->axis.m[0].v[1] * dir->x + orient->axis.m[2].v[1] * dir->z;
  out->z = orient->axis.m[1].v[2] * dir->y + orient->axis.m[0].v[2] * dir->x + orient->axis.m[2].v[2] * dir->z;
}

/*
==============
OrientationHPosToWorldHPos
==============
*/
void OrientationHPosToWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  double v6; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 60, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 61, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)((float)(orient->origin.v[0] * pos->v[3]) + (float)(orient->axis.m[0].v[0] * pos->v[0])) + (float)(orient->axis.m[1].v[0] * pos->v[1])) + (float)(orient->axis.m[2].v[0] * pos->v[2]);
  out->v[1] = (float)((float)((float)(orient->axis.m[0].v[1] * pos->v[0]) + (float)(orient->origin.v[1] * pos->v[3])) + (float)(orient->axis.m[1].v[1] * pos->v[1])) + (float)(orient->axis.m[2].v[1] * pos->v[2]);
  out->v[2] = (float)((float)((float)(orient->axis.m[0].v[2] * pos->v[0]) + (float)(orient->origin.v[2] * pos->v[3])) + (float)(orient->axis.m[1].v[2] * pos->v[1])) + (float)(orient->axis.m[2].v[2] * pos->v[2]);
  out->v[3] = pos->v[3];
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
void OrientationPlaneToWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 70, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirToWorldDir(orient, (const vec3_t *)plane, (vec3_t *)out);
  out->v[3] = (float)((float)((float)(orient->origin.v[1] * out->v[1]) + (float)(orient->origin.v[0] * out->v[0])) + (float)(orient->origin.v[2] * out->v[2])) + plane->v[3];
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
void OrientationPlaneToWorldPlane(const orientation_t *orient, const dvec4_t *plane, dvec4_t *out)
{
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  long double v10; 
  long double v11; 
  long double v12; 

  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 78, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  v6 = orient->origin.v[0];
  v7 = orient->origin.v[1];
  v8 = orient->origin.v[2];
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 51, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  v9 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v9) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 52, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal(*orient) )", "%s", "OrientationIsOrthogonal(*orient)") )
    __debugbreak();
  v10 = orient->axis.m[1].v[0] * plane->v[1] + orient->axis.m[0].v[0] * plane->v[0] + orient->axis.m[2].v[0] * plane->v[2];
  out->v[0] = v10;
  v11 = orient->axis.m[0].v[1] * plane->v[0] + orient->axis.m[1].v[1] * plane->v[1] + orient->axis.m[2].v[1] * plane->v[2];
  out->v[1] = v11;
  v12 = orient->axis.m[0].v[2] * plane->v[0] + orient->axis.m[1].v[2] * plane->v[1] + orient->axis.m[2].v[2] * plane->v[2];
  out->v[2] = v12;
  out->v[3] = v7 * v11 + v6 * v10 + v8 * v12 + plane->v[3];
}

/*
==============
OrientationPosFromWorldPos
==============
*/
void OrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *pos, vec3_t *out)
{
  double v6; 
  float v7; 
  float v8; 
  float v9; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 90, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 91, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = pos->v[0] - orient->origin.v[0];
  v8 = pos->v[1] - orient->origin.v[1];
  v9 = pos->v[2] - orient->origin.v[2];
  out->v[0] = (float)((float)(v8 * orient->axis.m[0].v[1]) + (float)(v7 * orient->axis.m[0].v[0])) + (float)(v9 * orient->axis.m[0].v[2]);
  out->v[1] = (float)((float)(v8 * orient->axis.m[1].v[1]) + (float)(v7 * orient->axis.m[1].v[0])) + (float)(v9 * orient->axis.m[1].v[2]);
  out->v[2] = (float)((float)(v8 * orient->axis.m[2].v[1]) + (float)(v7 * orient->axis.m[2].v[0])) + (float)(v9 * orient->axis.m[2].v[2]);
}

/*
==============
OrientationDirFromWorldDir
==============
*/
void OrientationDirFromWorldDir(const orientation_t *orient, const vec3_t *dir, vec3_t *out)
{
  double v6; 

  if ( dir == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 104, ASSERT_TYPE_SANITY, "( &dir != &out )", "%s", "&dir != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 105, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)(orient->axis.m[0].v[1] * dir->v[1]) + (float)(orient->axis.m[0].v[0] * dir->v[0])) + (float)(orient->axis.m[0].v[2] * dir->v[2]);
  out->v[1] = (float)((float)(orient->axis.m[1].v[0] * dir->v[0]) + (float)(orient->axis.m[1].v[1] * dir->v[1])) + (float)(orient->axis.m[1].v[2] * dir->v[2]);
  out->v[2] = (float)((float)(orient->axis.m[2].v[0] * dir->v[0]) + (float)(orient->axis.m[2].v[1] * dir->v[1])) + (float)(orient->axis.m[2].v[2] * dir->v[2]);
}

/*
==============
OrientationHPosFromWorldHPos
==============
*/
void OrientationHPosFromWorldHPos(const orientation_t *orient, const vec4_t *pos, vec4_t *out)
{
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 116, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = pos->v[3];
  v8 = pos->v[0] - (float)(v7 * orient->origin.v[0]);
  v9 = pos->v[1] - (float)(v7 * orient->origin.v[1]);
  v10 = pos->v[2] - (float)(v7 * orient->origin.v[2]);
  out->v[0] = (float)((float)(v9 * orient->axis.m[0].v[1]) + (float)(v8 * orient->axis.m[0].v[0])) + (float)(v10 * orient->axis.m[0].v[2]);
  out->v[1] = (float)((float)(v9 * orient->axis.m[1].v[1]) + (float)(v8 * orient->axis.m[1].v[0])) + (float)(v10 * orient->axis.m[1].v[2]);
  out->v[2] = (float)((float)(v9 * orient->axis.m[2].v[1]) + (float)(v8 * orient->axis.m[2].v[0])) + (float)(v10 * orient->axis.m[2].v[2]);
  out->v[3] = pos->v[3];
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/
void OrientationPlaneFromWorldPlane(const orientation_t *orient, const vec4_t *plane, vec4_t *out)
{
  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 189, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirFromWorldDir(orient, (const vec3_t *)plane, (vec3_t *)out);
  out->v[3] = plane->v[3] - (float)((float)((float)(orient->origin.v[1] * plane->v[1]) + (float)(orient->origin.v[0] * plane->v[0])) + (float)(orient->origin.v[2] * plane->v[2]));
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
  double v6; 
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
  orientation_t orFirst; 

  v6 = MatrixDeterminant(&orSrc->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 158, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = orSrc->axis.m[0].v[2];
  v8 = orSrc->axis.m[0].v[0];
  v9 = orSrc->axis.m[1].v[0];
  v10 = orSrc->axis.m[1].v[1];
  v11 = orSrc->axis.m[1].v[2];
  v12 = orSrc->axis.m[2].v[0];
  v13 = orSrc->axis.m[2].v[1];
  v14 = orSrc->axis.m[2].v[2];
  LODWORD(v15) = LODWORD(orSrc->origin.v[0]) ^ _xmm;
  LODWORD(v16) = LODWORD(orSrc->origin.v[1]) ^ _xmm;
  LODWORD(v17) = LODWORD(orSrc->origin.v[2]) ^ _xmm;
  orFirst.axis.m[1].v[0] = orSrc->axis.m[0].v[1];
  orFirst.origin.v[0] = (float)((float)(v16 * orFirst.axis.m[1].v[0]) + (float)(v15 * v8)) + (float)(v17 * v7);
  orFirst.axis.m[2].v[0] = v7;
  orFirst.origin.v[1] = (float)((float)(v16 * v10) + (float)(v15 * v9)) + (float)(v17 * v11);
  orFirst.origin.v[2] = (float)((float)(v16 * v13) + (float)(v15 * v12)) + (float)(v17 * v14);
  orFirst.axis.m[0].v[0] = v8;
  orFirst.axis.m[0].v[1] = v9;
  orFirst.axis.m[0].v[2] = v12;
  orFirst.axis.m[1].v[1] = v10;
  orFirst.axis.m[1].v[2] = v13;
  orFirst.axis.m[2].v[1] = v11;
  orFirst.axis.m[2].v[2] = v14;
  OrientationConcatenate(&orFirst, orDst, orDelta);
}

/*
==============
OrientationInvert
==============
*/
void OrientationInvert(const orientation_t *orient, orientation_t *out)
{
  double v4; 
  float v5; 
  float v6; 
  float v7; 

  v4 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v4) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 158, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->axis.m[0].v[0] = orient->axis.m[0].v[0];
  out->axis.m[0].v[1] = orient->axis.m[1].v[0];
  out->axis.m[0].v[2] = orient->axis.m[2].v[0];
  out->axis.m[1].v[0] = orient->axis.m[0].v[1];
  out->axis.m[1].v[1] = orient->axis.m[1].v[1];
  out->axis.m[1].v[2] = orient->axis.m[2].v[1];
  out->axis.m[2].v[0] = orient->axis.m[0].v[2];
  out->axis.m[2].v[1] = orient->axis.m[1].v[2];
  out->axis.m[2].v[2] = orient->axis.m[2].v[2];
  v5 = orient->origin.v[2];
  LODWORD(v6) = LODWORD(orient->origin.v[0]) ^ _xmm;
  LODWORD(v7) = LODWORD(orient->origin.v[1]) ^ _xmm;
  out->origin.v[0] = (float)((float)(v7 * out->axis.m[1].v[0]) + (float)(v6 * out->axis.m[0].v[0])) + (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * out->axis.m[2].v[0]);
  out->origin.v[1] = (float)((float)(v6 * out->axis.m[0].v[1]) + (float)(v7 * out->axis.m[1].v[1])) + (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * out->axis.m[2].v[1]);
  out->origin.v[2] = (float)((float)(v6 * out->axis.m[0].v[2]) + (float)(v7 * out->axis.m[1].v[2])) + (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * out->axis.m[2].v[2]);
}

/*
==============
OrientationEqualEpsilon
==============
*/
bool OrientationEqualEpsilon(const orientation_t *orient1, const orientation_t *orient2)
{
  return VecNCompareCustomEpsilon(orient1->origin.v, orient2->origin.v, 0.001, 3) && VecNCompareCustomEpsilon((const float *)&orient1->axis, (const float *)&orient2->axis, 0.001, 3) && VecNCompareCustomEpsilon(orient1->axis.m[1].v, orient2->axis.m[1].v, 0.001, 3) && VecNCompareCustomEpsilon(orient1->axis.m[2].v, orient2->axis.m[2].v, 0.001, 3);
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/
void ScaledOrientationPosToWorldPos(const orientation_t *orient, float scale, const vec3_t *pos, vec3_t *out)
{
  double v7; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 197, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 198, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  v7 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v7) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 199, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)((float)((float)(orient->axis.m[1].v[0] * pos->v[1]) + (float)(pos->v[0] * orient->axis.m[0].v[0])) + (float)(orient->axis.m[2].v[0] * pos->v[2])) * scale) + orient->origin.v[0];
  out->v[1] = (float)((float)((float)((float)(orient->axis.m[0].v[1] * pos->v[0]) + (float)(orient->axis.m[1].v[1] * pos->v[1])) + (float)(orient->axis.m[2].v[1] * pos->v[2])) * scale) + orient->origin.v[1];
  out->v[2] = (float)((float)((float)((float)(orient->axis.m[0].v[2] * pos->v[0]) + (float)(orient->axis.m[1].v[2] * pos->v[1])) + (float)(orient->axis.m[2].v[2] * pos->v[2])) * scale) + orient->origin.v[2];
}

/*
==============
ScaledOrientationPosToWorldPos
==============
*/
void ScaledOrientationPosToWorldPos(const orientation_t *orient, long double scale, const dvec3_t *pos, dvec3_t *out)
{
  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 208, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  out->x = (orient->axis.m[0].v[0] * pos->x + orient->axis.m[1].v[0] * pos->y + orient->axis.m[2].v[0] * pos->z) * scale + orient->origin.v[0];
  out->y = (orient->axis.m[0].v[1] * pos->x + orient->axis.m[1].v[1] * pos->y + orient->axis.m[2].v[1] * pos->z) * scale + orient->origin.v[1];
  out->z = (orient->axis.m[0].v[2] * pos->x + orient->axis.m[1].v[2] * pos->y + orient->axis.m[2].v[2] * pos->z) * scale + orient->origin.v[2];
}

/*
==============
ScaledOrientationPlaneToWorldPlane
==============
*/
void ScaledOrientationPlaneToWorldPlane(const orientation_t *orient, float scale, const vec4_t *plane, vec4_t *out)
{
  double v7; 

  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 216, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 217, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  v7 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v7) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 218, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  OrientationDirToWorldDir(orient, (const vec3_t *)plane, (vec3_t *)out);
  out->v[3] = (float)((float)((float)(orient->origin.v[1] * out->v[1]) + (float)(orient->origin.v[0] * out->v[0])) + (float)(orient->origin.v[2] * out->v[2])) + (float)(scale * plane->v[3]);
}

/*
==============
ScaledOrientationPosFromWorldPos
==============
*/
void ScaledOrientationPosFromWorldPos(const orientation_t *orient, float scale, const vec3_t *pos, vec3_t *out)
{
  double v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 226, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 227, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  v7 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v7) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 228, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v8 = pos->v[0] - orient->origin.v[0];
  v9 = pos->v[1] - orient->origin.v[1];
  v10 = pos->v[2] - orient->origin.v[2];
  out->v[0] = (float)((float)((float)(v9 * orient->axis.m[0].v[1]) + (float)(v8 * orient->axis.m[0].v[0])) + (float)(v10 * orient->axis.m[0].v[2])) * (float)(1.0 / scale);
  out->v[1] = (float)((float)((float)(v9 * orient->axis.m[1].v[1]) + (float)(v8 * orient->axis.m[1].v[0])) + (float)(v10 * orient->axis.m[1].v[2])) * (float)(1.0 / scale);
  out->v[2] = (float)((float)((float)(v9 * orient->axis.m[2].v[1]) + (float)(v8 * orient->axis.m[2].v[0])) + (float)(v10 * orient->axis.m[2].v[2])) * (float)(1.0 / scale);
}

/*
==============
ScaledOrientationPlaneFromWorldPlane
==============
*/
void ScaledOrientationPlaneFromWorldPlane(const orientation_t *orient, float scale, const vec4_t *plane, vec4_t *out)
{
  double v7; 

  if ( plane == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 244, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 245, ASSERT_TYPE_SANITY, "( scale != 0.0f )", "%s", "scale != 0.0f") )
    __debugbreak();
  v7 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v7) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 246, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  OrientationDirFromWorldDir(orient, (const vec3_t *)plane, (vec3_t *)out);
  out->v[3] = (float)(plane->v[3] - (float)((float)((float)(orient->origin.v[1] * plane->v[1]) + (float)(orient->origin.v[0] * plane->v[0])) + (float)(orient->origin.v[2] * plane->v[2]))) / scale;
}

/*
==============
ScaledXYZOrientationPosToWorldPos
==============
*/
void ScaledXYZOrientationPosToWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  double v8; 

  if ( pos == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 254, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  if ( (scaleXYZ->v[0] == 0.0 || scaleXYZ->v[1] == 0.0 || scaleXYZ->v[2] == 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 255, ASSERT_TYPE_SANITY, "( scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0 )", "%s", "scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0") )
    __debugbreak();
  v8 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v8) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 256, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  out->v[0] = (float)((float)((float)((float)(orient->axis.m[1].v[0] * pos->v[1]) * scaleXYZ->v[1]) + (float)((float)(orient->axis.m[0].v[0] * pos->v[0]) * scaleXYZ->v[0])) + (float)((float)(orient->axis.m[2].v[0] * pos->v[2]) * scaleXYZ->v[2])) + orient->origin.v[0];
  out->v[1] = (float)((float)((float)((float)(orient->axis.m[1].v[1] * pos->v[1]) * scaleXYZ->v[1]) + (float)((float)(orient->axis.m[0].v[1] * pos->v[0]) * scaleXYZ->v[0])) + (float)((float)(orient->axis.m[2].v[1] * pos->v[2]) * scaleXYZ->v[2])) + orient->origin.v[1];
  out->v[2] = (float)((float)((float)((float)(orient->axis.m[1].v[2] * pos->v[1]) * scaleXYZ->v[1]) + (float)((float)(orient->axis.m[0].v[2] * pos->v[0]) * scaleXYZ->v[0])) + (float)((float)(orient->axis.m[2].v[2] * pos->v[2]) * scaleXYZ->v[2])) + orient->origin.v[2];
}

/*
==============
ScaledXYZOrientationPosFromWorldPos
==============
*/
void ScaledXYZOrientationPosFromWorldPos(const orientation_t *orient, const vec3_t *scaleXYZ, const vec3_t *pos, vec3_t *out)
{
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  if ( (scaleXYZ->v[0] == 0.0 || scaleXYZ->v[1] == 0.0 || scaleXYZ->v[2] == 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 265, ASSERT_TYPE_SANITY, "( scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0 )", "%s", "scaleXYZ.x != 0 && scaleXYZ.y != 0 && scaleXYZ.z != 0") )
    __debugbreak();
  v8 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v8) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 266, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v9 = pos->v[0] - orient->origin.v[0];
  v10 = pos->v[1] - orient->origin.v[1];
  v11 = pos->v[2] - orient->origin.v[2];
  v12 = scaleXYZ->v[1];
  v13 = scaleXYZ->v[2];
  out->v[0] = (float)((float)((float)(v10 * orient->axis.m[0].v[1]) + (float)(v9 * orient->axis.m[0].v[0])) + (float)(v11 * orient->axis.m[0].v[2])) / scaleXYZ->v[0];
  out->v[1] = (float)((float)((float)(v9 * orient->axis.m[1].v[0]) + (float)(v10 * orient->axis.m[1].v[1])) + (float)(v11 * orient->axis.m[1].v[2])) / v12;
  out->v[2] = (float)((float)((float)(v9 * orient->axis.m[2].v[0]) + (float)(v10 * orient->axis.m[2].v[1])) + (float)(v11 * orient->axis.m[2].v[2])) / v13;
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
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec4_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 60, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 61, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = pos->v[3];
  v8 = pos->v[2];
  v9 = pos->v[0];
  v10 = pos->v[1];
  v11 = result;
  v12 = (float)(pos->v[0] * orient->axis.m[0].v[1]) + (float)(v7 * orient->origin.v[1]);
  v13 = v8 * orient->axis.m[2].v[1];
  result->v[0] = (float)((float)((float)(pos->v[0] * orient->axis.m[0].v[0]) + (float)(v7 * orient->origin.v[0])) + (float)(v10 * orient->axis.m[1].v[0])) + (float)(v8 * orient->axis.m[2].v[0]);
  v14 = (float)(v12 + (float)(v10 * orient->axis.m[1].v[1])) + v13;
  v15 = v7 * orient->origin.v[2];
  v16 = v9 * orient->axis.m[0].v[2];
  result->v[1] = v14;
  v17 = v10 * orient->axis.m[1].v[2];
  v18 = v16 + v15;
  v19 = v8 * orient->axis.m[2].v[2];
  result->v[3] = v7;
  result->v[2] = (float)(v18 + v17) + v19;
  return v11;
}

/*
==============
OrientationPlaneToWorldPlane
==============
*/
vec4_t *OrientationPlaneToWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *plane)
{
  vec4_t *v6; 

  if ( plane == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 70, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirToWorldDir(orient, (const vec3_t *)plane, (vec3_t *)result);
  v6 = result;
  result->v[3] = (float)((float)((float)(result->v[1] * orient->origin.v[1]) + (float)(result->v[0] * orient->origin.v[0])) + (float)(result->v[2] * orient->origin.v[2])) + plane->v[3];
  return v6;
}

/*
==============
OrientationPosFromWorldPos
==============
*/
vec3_t *OrientationPosFromWorldPos(vec3_t *result, const orientation_t *orient, const vec3_t *pos)
{
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t *v10; 
  float v11; 
  float v12; 

  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 90, ASSERT_TYPE_SANITY, "( &pos != &out )", "%s", "&pos != &out") )
    __debugbreak();
  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 91, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = pos->v[0] - orient->origin.v[0];
  v8 = pos->v[1] - orient->origin.v[1];
  v9 = pos->v[2] - orient->origin.v[2];
  v10 = result;
  v11 = v8 * orient->axis.m[1].v[1];
  result->v[0] = (float)((float)(v8 * orient->axis.m[0].v[1]) + (float)(v7 * orient->axis.m[0].v[0])) + (float)(v9 * orient->axis.m[0].v[2]);
  v12 = v8 * orient->axis.m[2].v[1];
  result->v[1] = (float)(v11 + (float)(v7 * orient->axis.m[1].v[0])) + (float)(v9 * orient->axis.m[1].v[2]);
  result->v[2] = (float)(v12 + (float)(v7 * orient->axis.m[2].v[0])) + (float)(v9 * orient->axis.m[2].v[2]);
  return v10;
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
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  vec4_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  v6 = MatrixDeterminant(&orient->axis);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v6) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 116, ASSERT_TYPE_SANITY, "( OrientationIsOrthogonal( *orient ) )", "%s", "OrientationIsOrthogonal( *orient )") )
    __debugbreak();
  v7 = pos->v[3];
  v8 = pos->v[0] - (float)(v7 * orient->origin.v[0]);
  v9 = pos->v[1] - (float)(v7 * orient->origin.v[1]);
  v10 = result;
  v11 = pos->v[2] - (float)(v7 * orient->origin.v[2]);
  v12 = v9 * orient->axis.m[1].v[1];
  result->v[0] = (float)((float)(v9 * orient->axis.m[0].v[1]) + (float)(v8 * orient->axis.m[0].v[0])) + (float)(v11 * orient->axis.m[0].v[2]);
  v13 = v9 * orient->axis.m[2].v[1];
  result->v[1] = (float)(v12 + (float)(v8 * orient->axis.m[1].v[0])) + (float)(v11 * orient->axis.m[1].v[2]);
  v14 = v13 + (float)(v8 * orient->axis.m[2].v[0]);
  v15 = v11 * orient->axis.m[2].v[2];
  result->v[3] = v7;
  result->v[2] = v14 + v15;
  return v10;
}

/*
==============
OrientationPlaneFromWorldPlane
==============
*/
vec4_t *OrientationPlaneFromWorldPlane(vec4_t *result, const orientation_t *orient, const vec4_t *pos)
{
  vec4_t *v6; 

  if ( pos == result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\orientation.cpp", 189, ASSERT_TYPE_SANITY, "( &plane != &out )", "%s", "&plane != &out") )
    __debugbreak();
  OrientationDirFromWorldDir(orient, (const vec3_t *)pos, (vec3_t *)result);
  v6 = result;
  result->v[3] = pos->v[3] - (float)((float)((float)(orient->origin.v[1] * pos->v[1]) + (float)(orient->origin.v[0] * pos->v[0])) + (float)(orient->origin.v[2] * pos->v[2]));
  return v6;
}

