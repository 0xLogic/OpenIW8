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

void __fastcall ComputeFrameRotationDeltaQuat(const vec4_t *startQuat, const vec4_t *targetQuat, const vec4_t *baseQuat, double f, vec4_t *outRotationDeltaQuat)
{
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  vec4_t result; 
  char v73; 
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
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+8]
  }
  _RBX = outRotationDeltaQuat;
  __asm
  {
    vmovss  xmm14, dword ptr [r8+0Ch]
    vmovaps xmm2, xmm3; frac
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm11, xmm0, xmm3
    vmovss  xmm0, dword ptr [r8+4]
    vxorps  xmm12, xmm0, xmm3
    vxorps  xmm13, xmm1, xmm3
  }
  QuatSlerp(startQuat, targetQuat, *(float *)&_XMM2, &result);
  if ( &result == outRotationDeltaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( &v73 == (char *)outRotationDeltaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0F8h+result+4]
    vmovss  xmm7, dword ptr [rsp+0F8h+result+0Ch]
    vmovss  xmm6, dword ptr [rsp+0F8h+result]
    vmovss  xmm8, dword ptr [rsp+0F8h+result+8]
    vmulss  xmm1, xmm7, xmm11
    vmulss  xmm0, xmm6, xmm14
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm13
    vmulss  xmm1, xmm8, xmm12
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm5, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm14
    vmulss  xmm0, xmm8, xmm11
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm12
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm13
    vaddss  xmm9, xmm3, xmm0
    vmulss  xmm0, xmm4, xmm11
    vmulss  xmm1, xmm8, xmm14
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm13
    vaddss  xmm10, xmm3, xmm0
    vmulss  xmm0, xmm6, xmm11
    vmulss  xmm1, xmm7, xmm14
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm12
    vmovss  [rsp+0F8h+var_C8], xmm5
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm13
    vsubss  xmm4, xmm3, xmm0
    vmovss  dword ptr [rbx+0Ch], xmm4
    vmovss  dword ptr [rbx], xmm5
    vmovss  dword ptr [rbx+4], xmm9
    vmovss  dword ptr [rbx+8], xmm10
  }
  if ( (v68 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm { vmovss  [rsp+0F8h+var_C8], xmm9 }
  if ( (v69 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm10, xmm0
  }
  if ( (v69 & 0x7F800000) != 2139095040 )
  {
    __asm { vmovss  [rsp+0F8h+var_C8], xmm4 }
    if ( (v70 & 0x7F800000) != 2139095040 )
      __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  __asm { vmovss  [rsp+0F8h+var_C8], xmm0 }
  if ( (v71 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 14, ASSERT_TYPE_ASSERT, "(!IS_NAN( outRotationDeltaQuat[0] ) && !IS_NAN( outRotationDeltaQuat[1] ) && !IS_NAN( outRotationDeltaQuat[2] && !IS_NAN( outRotationDeltaQuat[3] ) ))", "%s\n\trotationDeltaQuat has NAN!", "!IS_NAN( outRotationDeltaQuat[0] ) && !IS_NAN( outRotationDeltaQuat[1] ) && !IS_NAN( outRotationDeltaQuat[2] && !IS_NAN( outRotationDeltaQuat[3] ) )") )
      __debugbreak();
  }
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
    vmovaps xmm14, [rsp+0F8h+var_98]
  }
}

/*
==============
ComputeFrameRotationDeltaQuatFromAngles
==============
*/

void __fastcall ComputeFrameRotationDeltaQuatFromAngles(const vec3_t *startAngles, const vec3_t *targetAngles, const vec3_t *baseAngles, double f, vec4_t *outRotationDeltaQuat)
{
  vec4_t baseQuat; 
  vec4_t targetQuat; 
  vec4_t quat; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  AnglesToQuat(startAngles, &quat);
  AnglesToQuat(targetAngles, &targetQuat);
  AnglesToQuat(baseAngles, &baseQuat);
  __asm { vmovaps xmm3, xmm6; f }
  ComputeFrameRotationDeltaQuat(&quat, &targetQuat, &baseQuat, *(float *)&_XMM3, outRotationDeltaQuat);
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
OrientVectorToLocalSpace
==============
*/
void OrientVectorToLocalSpace(const vec3_t *worldVec, vec3_t *outLocalVec, const vec3_t *angles)
{
  int v31; 
  int v32; 
  int v33; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = outLocalVec;
  AnglesToAxis(angles, &axis);
  if ( worldVec == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+axis]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsp+88h+axis+4]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+88h+axis+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rsp+88h+axis+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm5, xmm4, xmm1
    vmovss  xmm1, dword ptr [rsp+88h+axis+10h]
    vmovss  dword ptr [rdi], xmm5
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+88h+axis+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rsp+88h+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vmovss  xmm1, dword ptr [rsp+88h+axis+1Ch]
    vmovss  dword ptr [rdi+4], xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsp+88h+axis+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_58], xmm5
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+88h+var_58], xmm6 }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+88h+var_58], xmm2 }
  if ( (v33 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 38, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] )") )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
OrientVectorToWorldSpace
==============
*/
void OrientVectorToWorldSpace(const vec3_t *localVec, vec3_t *outWorldVec, const vec3_t *angles)
{
  int v31; 
  int v32; 
  int v33; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = outWorldVec;
  AnglesToAxis(angles, &axis);
  if ( localVec == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1785, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+axis]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsp+88h+axis+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+88h+axis+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rsp+88h+axis+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm5, xmm4, xmm1
    vmovss  xmm1, dword ptr [rsp+88h+axis+10h]
    vmovss  dword ptr [rdi], xmm5
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+88h+axis+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rsp+88h+axis+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vmovss  xmm1, dword ptr [rsp+88h+axis+14h]
    vmovss  dword ptr [rdi+4], xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsp+88h+axis+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_58], xmm5
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+88h+var_58], xmm6 }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+88h+var_58], xmm2 }
  if ( (v33 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 48, ASSERT_TYPE_ASSERT, "(!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] )") )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
TestMotionWarpUtils
==============
*/

void __fastcall TestMotionWarpUtils(__int64 a1, double _XMM1_8)
{
  vec3_t angles; 
  vec3_t v6; 
  vec4_t baseQuat; 
  vec4_t targetQuat; 
  vec4_t quat; 
  vec4_t outRotationDeltaQuat; 
  vec3_t v11; 

  TestVectorFuncs();
  __asm
  {
    vmovss  xmm0, cs:__real@43ac8000
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+0B8h+angles], xmm1
    vmovss  dword ptr [rsp+0B8h+angles+4], xmm0
    vmovss  dword ptr [rsp+0B8h+angles+8], xmm1
    vmovss  dword ptr [rsp+0B8h+var_78], xmm1
    vmovss  dword ptr [rsp+0B8h+var_78+4], xmm1
    vmovss  dword ptr [rsp+0B8h+var_78+8], xmm1
  }
  AnglesToQuat(&angles, &quat);
  AnglesToQuat(&v6, &targetQuat);
  AnglesToQuat(&angles, &baseQuat);
  __asm { vmovss  xmm3, cs:__real@3f800000; f }
  ComputeFrameRotationDeltaQuat(&quat, &targetQuat, &baseQuat, *(float *)&_XMM3, &outRotationDeltaQuat);
  QuatToAngles(&outRotationDeltaQuat, &v11);
}

/*
==============
TestVectorFuncs
==============
*/

bool __fastcall TestVectorFuncs(__int64 a1, double _XMM1_8)
{
  bool result; 
  bool v30; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v69; 
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
    vmovss  xmm0, cs:__real@42700000
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+118h+angles], xmm1
    vmovss  dword ptr [rsp+118h+angles+4], xmm0
    vmovss  dword ptr [rsp+118h+angles+8], xmm1
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm12, cs:__real@40a00000
    vmovss  xmm13, cs:__real@410a9062
    vmulss  xmm2, xmm12, dword ptr [rsp+118h+axis]
    vmulss  xmm3, xmm12, dword ptr [rsp+118h+axis+0Ch]
    vmulss  xmm0, xmm13, dword ptr [rsp+118h+axis+4]
    vmulss  xmm1, xmm13, dword ptr [rsp+118h+axis+10h]
    vaddss  xmm14, xmm2, xmm0
    vmulss  xmm2, xmm13, dword ptr [rsp+118h+axis+1Ch]
    vmovss  [rsp+118h+var_E8], xmm14
    vaddss  xmm11, xmm3, xmm1
    vmulss  xmm3, xmm12, dword ptr [rsp+118h+axis+18h]
    vaddss  xmm9, xmm3, xmm2
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+118h+var_E8], xmm11 }
  if ( (v62 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  [rsp+118h+var_E8], xmm9 }
  if ( (v63 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 38, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outLocalVec[ 0 ] ) && !IS_NAN( outLocalVec[ 1 ] ) && !IS_NAN( outLocalVec[ 2 ] )") )
      __debugbreak();
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmulss  xmm10, xmm6, dword ptr [rsp+118h+axis]
    vmulss  xmm7, xmm6, dword ptr [rsp+118h+axis+4]
    vmulss  xmm8, xmm6, dword ptr [rsp+118h+axis+8]
    vmovss  [rsp+118h+var_E8], xmm10
  }
  if ( (v64 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm { vmovss  [rsp+118h+var_E8], xmm7 }
  if ( (v65 & 0x7F800000) == 2139095040 )
    goto LABEL_21;
  __asm { vmovss  [rsp+118h+var_E8], xmm8 }
  result = 0;
  v30 = (v66 & 0x7F800000u) < 0x7F800000;
  if ( (v66 & 0x7F800000) == 2139095040 )
  {
LABEL_21:
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 48, ASSERT_TYPE_ASSERT, "(!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( outWorldVec[ 0 ] ) && !IS_NAN( outWorldVec[ 1 ] ) && !IS_NAN( outWorldVec[ 2 ] )");
    v30 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm2, xmm6, xmm14
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm11, xmm6
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm3, xmm9, xmm6
    vmovss  xmm9, cs:__real@38d1b717
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm9
  }
  if ( !v30 )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 71, ASSERT_TYPE_ASSERT, "(Vec3Length( localDiff ) < 0.0001f)", (const char *)&queryFormat, "Vec3Length( localDiff ) < 0.0001f");
    v30 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm13, xmm7
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm2, xmm12, xmm10
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm3, xmm8, xmm6
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm9
  }
  if ( !v30 )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp_utils.cpp", 75, ASSERT_TYPE_ASSERT, "(Vec3Length( worldDiff ) < 0.0001f)", (const char *)&queryFormat, "Vec3Length( worldDiff ) < 0.0001f");
    if ( result )
      __debugbreak();
  }
  _R11 = &v69;
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
  return result;
}

