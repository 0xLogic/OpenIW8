/*
==============
QuatDec3nToUnitQuat
==============
*/

void __fastcall QuatDec3nToUnitQuat(const PackedQuatDec3n quatPacked, vec4_t *outQuat, float *binormalSign)
{
  ?QuatDec3nToUnitQuat@@YAXTPackedQuatDec3n@@AEATvec4_t@@AEAM@Z(quatPacked, outQuat, binormalSign);
}

/*
==============
AxisToPackedQuat
==============
*/

void __fastcall AxisToPackedQuat(const tmat33_t<vec3_t> *axis, vec3_t *outQuatPacked)
{
  ?AxisToPackedQuat@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(axis, outQuatPacked);
}

/*
==============
UnitQuatToNormal
==============
*/

void __fastcall UnitQuatToNormal(const vec4_t *quat, vec3_t *normal)
{
  ?UnitQuatToNormal@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(quat, normal);
}

/*
==============
PackedQuatToUnitQuat
==============
*/

void __fastcall PackedQuatToUnitQuat(const vec3_t *quatPacked, vec4_t *outQuat)
{
  ?PackedQuatToUnitQuat@@YAXAEBTvec3_t@@AEATvec4_t@@@Z(quatPacked, outQuat);
}

/*
==============
UnitQuatToQuatDec3n
==============
*/

PackedQuatDec3n __fastcall UnitQuatToQuatDec3n(const vec4_t *quat, float binormalSign)
{
  return ?UnitQuatToQuatDec3n@@YA?ATPackedQuatDec3n@@AEBTvec4_t@@M@Z(quat, binormalSign);
}

/*
==============
AxisToPackedQuat
==============
*/
void AxisToPackedQuat(const tmat33_t<vec3_t> *axis, vec3_t *outQuatPacked)
{
  char v99; 
  bool v119; 
  bool v134; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  double v159; 
  double v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  double v165; 
  double v166; 
  double v167; 
  double v168; 
  double v169; 
  double v170; 
  double v171; 
  double v172; 
  double v173; 
  double v174; 
  double v175; 
  double v176; 
  double v177; 
  double v178; 
  double v179; 
  vec4_t out; 
  char v181; 
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
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+8]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm10, cs:__real@3b03126f
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm9
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm10
  }
  _RDI = outQuatPacked;
  _RBX = axis;
  __asm
  {
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 112, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v144, v151, v158, v165) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm5, dword ptr [rbx+0Ch]
    vmovss  xmm3, dword ptr [rbx+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm9
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm10
    vmovss  xmm4, dword ptr [rbx+10h]
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B0], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_B8], xmm4
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_C0], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 113, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v145, v152, v159, v166) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr [rbx+18h]
    vmovss  xmm3, dword ptr [rbx+20h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm9
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm10
    vmovss  xmm4, dword ptr [rbx+1Ch]
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B0], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_B8], xmm4
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_C0], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 114, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v146, v153, v160, v167) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, dword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rbx+0Ch]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm11, dword ptr [rbx+8]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+14h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm8
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rbx+14h]
    vmovss  xmm6, dword ptr [rbx+10h]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+0E8h+var_90], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_98], xmm5
    vcvtss2sd xmm2, xmm11, xmm11
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0E8h+var_A0], xmm6
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vmovsd  [rsp+0E8h+var_C0], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 115, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v147, v154, v161, v168, v172, v176, v178) )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, dword ptr [rbx+1Ch]
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm11, dword ptr [rbx+8]
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+20h]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm8
    vcomiss xmm0, cs:__real@3a83126f
    vmovss  xmm5, dword ptr [rbx+20h]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+0E8h+var_90], xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_98], xmm5
    vcvtss2sd xmm2, xmm11, xmm11
    vcvtss2sd xmm3, xmm7, xmm7
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0E8h+var_A0], xmm6
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vmovsd  [rsp+0E8h+var_C0], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 116, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v148, v155, v162, v169, v173, v177, v179) )
    __debugbreak();
  AxisToQuat(_RBX, &out);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0E8h+out]
    vmovss  xmm5, dword ptr [rsp+0E8h+out+4]
    vmovss  xmm6, dword ptr [rsp+0E8h+out+8]
    vmovss  xmm7, dword ptr [rsp+0E8h+out+0Ch]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm9
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm10
  }
  if ( !v99 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_A0], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_A8], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm3
      vcvtss2sd xmm0, xmm5, xmm5
      vmovsd  [rsp+0E8h+var_B8], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0E8h+var_C0], xmm4
    }
    v119 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 120, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v149, v156, v163, v170, v174);
    v99 = 0;
    if ( v119 )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0E8h+out]
      vmovss  xmm5, dword ptr [rsp+0E8h+out+4]
      vmovss  xmm6, dword ptr [rsp+0E8h+out+8]
      vmovss  xmm7, dword ptr [rsp+0E8h+out+0Ch]
    }
  }
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm9
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm10
  }
  if ( !v99 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_A0], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_A8], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_B0], xmm3
      vcvtss2sd xmm0, xmm5, xmm5
      vmovsd  [rsp+0E8h+var_B8], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0E8h+var_C0], xmm4
    }
    v134 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 58, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v150, v157, v164, v171, v175);
    v99 = 0;
    if ( v134 )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0E8h+out]
      vmovss  xmm5, dword ptr [rsp+0E8h+out+4]
      vmovss  xmm6, dword ptr [rsp+0E8h+out+8]
      vmovss  xmm7, dword ptr [rsp+0E8h+out+0Ch]
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
    vmovss  dword ptr [rdi], xmm4
    vmovss  dword ptr [rdi+4], xmm5
    vmovss  dword ptr [rdi+8], xmm6
  }
  if ( v99 )
  {
    __asm
    {
      vaddss  xmm0, xmm4, cs:__real@40800000
      vmovss  dword ptr [rdi], xmm0
    }
  }
  _R11 = &v181;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
PackedQuatToUnitQuat
==============
*/
void PackedQuatToUnitQuat(const vec3_t *quatPacked, vec4_t *outQuat)
{
  bool v41; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@40000000
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = outQuat;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm7, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  dword ptr [rdx+4], xmm7
    vmovss  xmm6, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+8], xmm6
    vmovaps xmm4, xmm0
    vsubss  xmm0, xmm0, cs:__real@40800000
    vmovss  dword ptr [rdx], xmm0
    vmovaps xmm4, xmm0
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm9, xmm3
    vxorps  xmm10, xmm10, xmm10
    vmaxss  xmm0, xmm0, xmm10
    vsqrtss xmm5, xmm0, xmm0
    vmovss  dword ptr [rdx+0Ch], xmm5
    vxorps  xmm5, xmm5, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdx+0Ch], xmm5
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm8, xmm2, xmm9
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm8, cs:__real@3c03126f
    vcvtss2sd xmm0, xmm5, xmm5
    vmovsd  [rsp+0B8h+var_60], xmm0
    vmovsd  xmm0, cs:__real@3f80624de0000000
    vcvtss2sd xmm3, xmm4, xmm4
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  [rsp+0B8h+var_68], xmm1
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  [rsp+0B8h+var_70], xmm2
    vmovsd  [rsp+0B8h+var_78], xmm3
    vmovsd  [rsp+0B8h+var_80], xmm0
    vcvtss2sd xmm4, xmm8, xmm8
    vmovsd  [rsp+0B8h+var_88], xmm4
  }
  v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 101, ASSERT_TYPE_ASSERT, "(isCloseToNormal)", "%s\n\tPackedQuatToUnitQuat: !isCloseToNormal -- %f >= %f -- (%f, %f, %f, %f)", "isCloseToNormal", v65, v66, v67, v68, v69, v70);
  if ( v41 )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vucomiss xmm1, xmm10
  }
  if ( v41 )
  {
    __asm
    {
      vdivss  xmm2, xmm9, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
  }
  _R11 = &v71;
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
UnitQuatToNormal
==============
*/
void UnitQuatToNormal(const vec4_t *quat, vec3_t *normal)
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
  _RDI = normal;
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v51, v52, v53, v54, v55) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm5, cs:__real@40000000
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm5
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm3, xmm2
    vmulss  xmm3, xmm1, xmm5
    vmovss  dword ptr [rdi+4], xmm3
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rbx+4]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vsubss  xmm0, xmm8, xmm0
    vmovaps xmm8, [rsp+88h+var_38]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
UnitQuatToQuatDec3n
==============
*/

__int64 __fastcall UnitQuatToQuatDec3n(const vec4_t *quat, double binormalSign)
{
  unsigned int v18; 
  signed int v20; 
  bool v23; 
  int v48; 
  int v49; 
  int v50; 
  unsigned int v51; 
  __int64 result; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm2, dword ptr [rcx+8]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+4]
    vandps  xmm0, xmm0, xmm4
    vandps  xmm2, xmm2, xmm4
    vandps  xmm5, xmm5, xmm4
    vandps  xmm3, xmm3, xmm4
    vmovaps xmm9, xmm1
    vmaxss  xmm1, xmm0, xmm2
    vmovss  [rsp+0A8h+var_54], xmm0
  }
  v18 = 1;
  _RDI = quat;
  v20 = 0;
  __asm
  {
    vmaxss  xmm0, xmm3, xmm5
    vmaxss  xmm6, xmm1, xmm0
    vmovss  [rsp+0A8h+var_60], xmm5
    vmovss  [rsp+0A8h+var_5C], xmm3
    vmovss  [rsp+0A8h+var_58], xmm2
  }
  v23 = 0;
  do
  {
    _RAX = (int)v18;
    __asm { vucomiss xmm6, [rsp+rax*4+0A8h+var_60] }
    if ( v23 )
      v20 = v18;
    v23 = ++v18 == 4;
  }
  while ( v18 < 4 );
  if ( !v20 )
  {
    __asm { vmovss  xmm6, dword ptr [rdi+4] }
LABEL_7:
    __asm { vmovss  xmm7, dword ptr [rdi+8] }
LABEL_8:
    __asm { vmovss  xmm8, dword ptr [rdi+0Ch] }
    goto LABEL_12;
  }
  __asm { vmovss  xmm6, dword ptr [rdi] }
  if ( v20 == 1 )
    goto LABEL_7;
  __asm { vmovss  xmm7, dword ptr [rdi+4] }
  if ( v20 == 2 )
    goto LABEL_8;
  __asm { vmovss  xmm8, dword ptr [rdi+8] }
LABEL_12:
  __asm
  {
    vmovss  xmm2, cs:__real@bfb504f3
    vmovss  xmm1, cs:__real@3fb504f3
  }
  _RAX = v20;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vmovss  xmm0, dword ptr [rdi+rax*4]
    vcmpltss xmm3, xmm0, xmm5
    vblendvps xmm4, xmm1, xmm2, xmm3
    vmovss  xmm3, cs:__real@3f800000
    vmulss  xmm0, xmm6, xmm4
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm0, xmm1, cs:__real@43ffc000
    vcvttss2si r8, xmm0
    vmulss  xmm0, xmm7, xmm4
  }
  if ( (int)_R8 > 1023 )
    LODWORD(_R8) = 1023;
  __asm
  {
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, cs:__real@43ffc000
    vcvttss2si rcx, xmm2
    vmulss  xmm0, xmm8, xmm4
  }
  if ( (int)_RCX > 1023 )
    LODWORD(_RCX) = 1023;
  __asm
  {
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, cs:__real@437f8000
    vcvttss2si rdx, xmm2
  }
  if ( (int)_RDX > 511 )
    LODWORD(_RDX) = 511;
  if ( (int)_RDX < 0 )
    LOWORD(_RDX) = 0;
  v48 = _RDX & 0x1FF;
  v49 = 512;
  __asm { vcomiss xmm9, xmm5 }
  if ( v48 )
    v49 = 0;
  v50 = ((v20 << 10) | v48 | v49) << 10;
  if ( (int)_RCX < 0 )
    LOWORD(_RCX) = 0;
  v51 = (_RCX & 0x3FF | (unsigned int)v50) << 10;
  if ( (int)_R8 < 0 )
    LOWORD(_R8) = 0;
  result = _R8 & 0x3FF | v51;
  _R11 = &v59;
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
QuatDec3nToUnitQuat
==============
*/
void QuatDec3nToUnitQuat(const PackedQuatDec3n quatPacked, vec4_t *outQuat, float *binormalSign)
{
  unsigned int v11; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f3504f3
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+18h+var_18], xmm6
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3ab53240
    vsubss  xmm6, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
  }
  v11 = quatPacked.packed >> 30;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3ab53240
    vsubss  xmm5, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3b355fa3
    vsubss  xmm4, xmm1, xmm3
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm2, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm3, xmm1
    vcomiss xmm0, xmm2
    vxorps  xmm3, xmm3, xmm3
  }
  if ( ((quatPacked.packed >> 20) & 0x1FF) != 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm0
      vsqrtss xmm0, xmm0, xmm0
    }
  }
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      __asm
      {
        vmovaps xmm1, xmm4
        vmovaps xmm4, xmm5
        vmovaps xmm5, xmm0
      }
    }
    else if ( v11 == 2 )
    {
      __asm
      {
        vmovaps xmm1, xmm4
        vmovaps xmm4, xmm0
      }
    }
    else
    {
      __asm { vmovaps xmm1, xmm0 }
    }
    __asm { vmovaps xmm0, xmm6 }
  }
  else
  {
    __asm
    {
      vmovaps xmm1, xmm4
      vmovaps xmm4, xmm5
      vmovaps xmm5, xmm6
    }
  }
  __asm
  {
    vmovss  dword ptr [rdx], xmm0
    vmovss  dword ptr [rdx+4], xmm5
    vmovss  dword ptr [rdx+8], xmm4
    vmovss  dword ptr [rdx+0Ch], xmm1
    vmovaps xmm6, [rsp+18h+var_18]
  }
  _ECX = quatPacked.packed & 0x20000000;
  __asm { vmovd   xmm0, ecx }
  _EAX = 0;
  __asm
  {
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@bf800000
    vblendvps xmm0, xmm1, xmm3, xmm2
    vmovss  dword ptr [r8], xmm0
  }
}

