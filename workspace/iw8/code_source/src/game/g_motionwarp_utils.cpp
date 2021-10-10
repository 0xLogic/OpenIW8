/*
==============
ComputeFrameRotationDeltaQuat
==============
*/

void __fastcall ComputeFrameRotationDeltaQuat(const vec4_t *startQuat, const vec4_t *targetQuat, const vec4_t *baseQuat, float f, vec4_t *outRotationDeltaQuat)
{
  ?ComputeFrameRotationDeltaQuat@@YAXAEBTvec4_t@@00MAEAT1@@Z(startQuat, targetQuat, baseQuat, f, outRotationDeltaQuat);
}

/*
==============
OrientVectorToWorldSpace
==============
*/

void __fastcall OrientVectorToWorldSpace(const vec3_t *localVec, vec3_t *outWorldVec, const vec3_t *angles)
{
  ?OrientVectorToWorldSpace@@YAXAEBTvec3_t@@AEAT1@0@Z(localVec, outWorldVec, angles);
}

/*
==============
OrientVectorToLocalSpace
==============
*/

void __fastcall OrientVectorToLocalSpace(const vec3_t *worldVec, vec3_t *outLocalVec, const vec3_t *angles)
{
  ?OrientVectorToLocalSpace@@YAXAEBTvec3_t@@AEAT1@0@Z(worldVec, outLocalVec, angles);
}

/*
==============
ComputeFrameRotationDeltaQuatFromAngles
==============
*/

void __fastcall ComputeFrameRotationDeltaQuatFromAngles(const vec3_t *startAngles, const vec3_t *targetAngles, const vec3_t *baseAngles, float f, vec4_t *outRotationDeltaQuat)
{
  ?ComputeFrameRotationDeltaQuatFromAngles@@YAXAEBTvec3_t@@00MAEATvec4_t@@@Z(startAngles, targetAngles, baseAngles, f, outRotationDeltaQuat);
}

/*
==============
TestMotionWarpUtils
==============
*/

void TestMotionWarpUtils(void)
{
  ?TestMotionWarpUtils@@YAXXZ();
}

/*
==============
ComputeFrameRotationDeltaQuat
==============
*/
void ComputeFrameRotationDeltaQuat(const vec4_t *startQuat, const vec4_t *targetQuat, const vec4_t *baseQuat, float f, vec4_t *outRotationDeltaQuat)
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
  vec4_t result; 
  char v15; 

  v5 = baseQuat->v[3];
  LODWORD(v6) = LODWORD(baseQuat->v[0]) ^ _xmm;
  LODWORD(v7) = LODWORD(baseQuat->v[1]) ^ _xmm;
  LODWORD(v8) = LODWORD(baseQuat->v[2]) ^ _xmm;
  QuatSlerp(startQuat, targetQuat, f, &result);
  if ( &result == outRotationDeltaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( &v15 == (char *)outRotationDeltaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  v9 = (float)((float)((float)(result.v[3] * v6) + (float)(result.v[0] * v5)) + (float)(result.v[2] * v7)) - (float)(result.v[1] * v8);
  v10 = (float)((float)((float)(result.v[1] * v5) - (float)(result.v[2] * v6)) + (float)(result.v[3] * v7)) + (float)(result.v[0] * v8);
  v11 = (float)((float)((float)(result.v[2] * v5) + (float)(result.v[1] * v6)) - (float)(result.v[0] * v7)) + (float)(result.v[3] * v8);
  v12 = (float)((float)((float)(result.v[3] * v5) - (float)(result.v[0] * v6)) - (float)(result.v[1] * v7)) - (float)(result.v[2] * v8);
  outRotationDeltaQuat->v[3] = v12;
  outRotationDeltaQuat->v[0] = v9;
  outRotationDeltaQuat->v[1] = v10;
  outRotationDeltaQuat->v[2] = v11;
  if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (LODWORD(v10) & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  v13 = 0.0;
  if ( v11 != 0.0 && (LODWORD(v12) & 0x7F800000) != 2139095040 )
    v13 = FLOAT_1_0;
  if ( (LODWORD(v13) & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 14, ASSERT_TYPE_ASSERT, "(!IS_NAN( outRotationDeltaQuat[0] ) && !IS_NAN( outRotationDeltaQuat[1] ) && !IS_NAN( outRotationDeltaQuat[2] && !IS_NAN( outRotationDeltaQuat[3] ) ))", "%s\n\trotationDeltaQuat has NAN!", "!IS_NAN( outRotationDeltaQuat[0] ) && !IS_NAN( outRotationDeltaQuat[1] ) && !IS_NAN( outRotationDeltaQuat[2] && !IS_NAN( outRotationDeltaQuat[3] ) )") )
      __debugbreak();
  }
}

/*
==============
ComputeFrameRotationDeltaQuatFromAngles
==============
*/
void ComputeFrameRotationDeltaQuatFromAngles(const vec3_t *startAngles, const vec3_t *targetAngles, const vec3_t *baseAngles, float f, vec4_t *outRotationDeltaQuat)
{
  vec4_t baseQuat; 
  vec4_t targetQuat; 
  vec4_t quat; 

  AnglesToQuat(startAngles, &quat);
  AnglesToQuat(targetAngles, &targetQuat);
  AnglesToQuat(baseAngles, &baseQuat);
  ComputeFrameRotationDeltaQuat(&quat, &targetQuat, &baseQuat, f, outRotationDeltaQuat);
}

/*
==============
OrientVectorToLocalSpace
==============
*/
void OrientVectorToLocalSpace(const vec3_t *worldVec, vec3_t *outLocalVec, const vec3_t *angles)
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
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(angles, &axis);
  if ( worldVec == outLocalVec && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  v5 = axis.m[1].v[0];
  v6 = (float)((float)(axis.m[0].v[0] * worldVec->v[0]) + (float)(axis.m[0].v[1] * worldVec->v[1])) + (float)(axis.m[0].v[2] * worldVec->v[2]);
  v7 = axis.m[1].v[1];
  outLocalVec->v[0] = v6;
  v8 = v5 * worldVec->v[0];
  v9 = axis.m[2].v[0];
  v10 = (float)(v8 + (float)(v7 * worldVec->v[1])) + (float)(axis.m[1].v[2] * worldVec->v[2]);
  v11 = axis.m[2].v[1];
  outLocalVec->v[1] = v10;
  v13 = v6;
  v12 = (float)((float)(v9 * worldVec->v[0]) + (float)(v11 * worldVec->v[1])) + (float)(axis.m[2].v[2] * worldVec->v[2]);
  outLocalVec->v[2] = v12;
  if ( (LODWORD(v6) & 0x7F800000) == 2139095040 || (v13 = v10, (LODWORD(v10) & 0x7F800000) == 2139095040) || (v13 = v12, (LODWORD(v12) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 38, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] )", v13) )
      __debugbreak();
  }
}

/*
==============
OrientVectorToWorldSpace
==============
*/
void OrientVectorToWorldSpace(const vec3_t *localVec, vec3_t *outWorldVec, const vec3_t *angles)
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
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(angles, &axis);
  if ( localVec == outWorldVec && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1785, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  v5 = axis.m[0].v[1];
  v6 = (float)((float)(axis.m[0].v[0] * localVec->v[0]) + (float)(axis.m[1].v[0] * localVec->v[1])) + (float)(axis.m[2].v[0] * localVec->v[2]);
  v7 = axis.m[1].v[1];
  outWorldVec->v[0] = v6;
  v8 = v5 * localVec->v[0];
  v9 = axis.m[0].v[2];
  v10 = (float)(v8 + (float)(v7 * localVec->v[1])) + (float)(axis.m[2].v[1] * localVec->v[2]);
  v11 = axis.m[1].v[2];
  outWorldVec->v[1] = v10;
  v13 = v6;
  v12 = (float)((float)(v9 * localVec->v[0]) + (float)(v11 * localVec->v[1])) + (float)(axis.m[2].v[2] * localVec->v[2]);
  outWorldVec->v[2] = v12;
  if ( (LODWORD(v6) & 0x7F800000) == 2139095040 || (v13 = v10, (LODWORD(v10) & 0x7F800000) == 2139095040) || (v13 = v12, (LODWORD(v12) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 48, ASSERT_TYPE_ASSERT, "(!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] )", v13) )
      __debugbreak();
  }
}

/*
==============
TestMotionWarpUtils
==============
*/
void TestMotionWarpUtils(void)
{
  vec3_t angles; 
  vec3_t v1; 
  vec4_t baseQuat; 
  vec4_t targetQuat; 
  vec4_t quat; 
  vec4_t outRotationDeltaQuat; 
  vec3_t v6; 

  TestVectorFuncs();
  angles.v[0] = 0.0;
  angles.v[1] = FLOAT_345_0;
  angles.v[2] = 0.0;
  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  AnglesToQuat(&angles, &quat);
  AnglesToQuat(&v1, &targetQuat);
  AnglesToQuat(&angles, &baseQuat);
  ComputeFrameRotationDeltaQuat(&quat, &targetQuat, &baseQuat, 1.0, &outRotationDeltaQuat);
  QuatToAngles(&outRotationDeltaQuat, &v6);
}

/*
==============
TestVectorFuncs
==============
*/
bool TestVectorFuncs()
{
  float v0; 
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  bool result; 
  __int64 v7; 
  float v8; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  angles.v[0] = 0.0;
  angles.v[1] = FLOAT_60_0;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  v0 = (float)(5.0 * axis.m[0].v[0]) + (float)(8.6602497 * axis.m[0].v[1]);
  v8 = v0;
  v1 = (float)(5.0 * axis.m[1].v[0]) + (float)(8.6602497 * axis.m[1].v[1]);
  v2 = (float)(5.0 * axis.m[2].v[0]) + (float)(8.6602497 * axis.m[2].v[1]);
  if ( (LODWORD(v0) & 0x7F800000) == 2139095040 || (v8 = (float)(5.0 * axis.m[1].v[0]) + (float)(8.6602497 * axis.m[1].v[1]), (LODWORD(v1) & 0x7F800000) == 2139095040) || (v8 = (float)(5.0 * axis.m[2].v[0]) + (float)(8.6602497 * axis.m[2].v[1]), (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 38, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] )", v8) )
      __debugbreak();
  }
  AnglesToAxis(&angles, &axis);
  v3 = 10.0 * axis.m[0].v[0];
  v4 = 10.0 * axis.m[0].v[1];
  v5 = 10.0 * axis.m[0].v[2];
  *(float *)&v7 = 10.0 * axis.m[0].v[0];
  if ( (COERCE_UNSIGNED_INT(10.0 * axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v7 = 10.0 * axis.m[0].v[1], (LODWORD(v4) & 0x7F800000) == 2139095040) || (*(float *)&v7 = 10.0 * axis.m[0].v[2], result = 0, (LODWORD(v5) & 0x7F800000) == 2139095040) )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 48, ASSERT_TYPE_ASSERT, "(!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] )", v7);
    if ( result )
      __debugbreak();
  }
  if ( fsqrt((float)((float)(COERCE_FLOAT(LODWORD(v1) ^ _xmm) * COERCE_FLOAT(LODWORD(v1) ^ _xmm)) + (float)((float)(10.0 - v0) * (float)(10.0 - v0))) + (float)(COERCE_FLOAT(LODWORD(v2) ^ _xmm) * COERCE_FLOAT(LODWORD(v2) ^ _xmm))) >= 0.000099999997 )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 71, ASSERT_TYPE_ASSERT, "(Vec3Length( localDiff ) < 0.0001f)", (const char *)&queryFormat, "Vec3Length( localDiff ) < 0.0001f");
    if ( result )
      __debugbreak();
  }
  if ( fsqrt((float)((float)((float)(8.6602497 - v4) * (float)(8.6602497 - v4)) + (float)((float)(5.0 - v3) * (float)(5.0 - v3))) + (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * COERCE_FLOAT(LODWORD(v5) ^ _xmm))) >= 0.000099999997 )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 75, ASSERT_TYPE_ASSERT, "(Vec3Length( worldDiff ) < 0.0001f)", (const char *)&queryFormat, "Vec3Length( worldDiff ) < 0.0001f");
    if ( result )
      __debugbreak();
  }
  return result;
}

