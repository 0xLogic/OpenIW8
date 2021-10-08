/*
==============
LerpAngles
==============
*/

void __fastcall LerpAngles(const vec3_t *from, const vec3_t *to, const float frac, vec3_t *out)
{
  ?LerpAngles@@YAXAEBTvec3_t@@0MAEAT1@@Z(from, to, frac, out);
}

/*
==============
Vec3Basis_RightHanded
==============
*/

void __fastcall Vec3Basis_RightHanded(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  ?Vec3Basis_RightHanded@@YAXAEBTvec3_t@@AEAT1@1@Z(forward, left, up);
}

/*
==============
QuatMultiply
==============
*/

void __fastcall QuatMultiply(const vec4_t *in1, const vec4_t *in2, vec4_t *out)
{
  ?QuatMultiply@@YAXAEBTvec4_t@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
RotatePoint
==============
*/

void __fastcall RotatePoint(const vec3_t *v, const vec4_t *q, vec3_t *out)
{
  ?RotatePoint@@YAXAEBTvec3_t@@AEBTvec4_t@@AEAT1@@Z(v, q, out);
}

/*
==============
MatrixTransformVector
==============
*/

void __fastcall MatrixTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  ?MatrixTransformVector@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
UnitQuatToAxis
==============
*/

void __fastcall UnitQuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  ?UnitQuatToAxis@@YAXAEBTvec4_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(quat, axis);
}

/*
==============
ClosestPointToBounds
==============
*/

bool __fastcall ClosestPointToBounds(const vec3_t *v, const vec3_t *mins, const vec3_t *maxs, vec3_t *out)
{
  return ?ClosestPointToBounds@@YA_NAEBTvec3_t@@00AEAT1@@Z(v, mins, maxs, out);
}

/*
==============
QuatMultiply
==============
*/
void QuatMultiply(const vec4_t *in1, const vec4_t *in2, vec4_t *out)
{
  _RBX = out;
  _RDI = in2;
  _RSI = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+8]
    vmulss  xmm0, xmm2, dword ptr [rsi+4]
    vaddss  xmm3, xmm4, xmm1
    vsubss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm2, dword ptr [rsi+4]
    vmulss  xmm3, xmm2, dword ptr [rdi+0Ch]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
    vsubss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm3, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm0, xmm1, dword ptr [rsi]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm1, xmm2, dword ptr [rdi+8]
    vsubss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm3, xmm2, dword ptr [rdi+0Ch]
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmulss  xmm0, xmm2, dword ptr [rsi+4]
    vsubss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, dword ptr [rsi+8]
    vsubss  xmm3, xmm4, xmm0
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
}

/*
==============
MatrixTransformVector
==============
*/
void MatrixTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  _RDI = out;
  _RSI = in2;
  _RBX = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsi+10h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
}

/*
==============
RotatePoint
==============
*/
void RotatePoint(const vec3_t *v, const vec4_t *q, vec3_t *out)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
    vmulss  xmm9, xmm3, xmm0
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmulss  xmm11, xmm3, xmm1
    vmulss  xmm7, xmm4, xmm1
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmulss  xmm13, xmm4, xmm0
    vmovaps [rsp+98h+var_88], xmm14
    vmulss  xmm10, xmm3, xmm4
    vmovaps [rsp+98h+var_98], xmm15
    vmulss  xmm15, xmm1, xmm0
    vmulss  xmm0, xmm1, xmm1
    vxorps  xmm14, xmm0, xmm2
    vmulss  xmm1, xmm3, xmm3
    vxorps  xmm6, xmm1, xmm2
    vmulss  xmm0, xmm4, xmm4
    vxorps  xmm12, xmm0, xmm2
    vaddss  xmm0, xmm6, xmm12
    vmulss  xmm3, xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm7, xmm9
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm11, xmm13
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:__real@40000000
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmovss  dword ptr [r8], xmm1
    vaddss  xmm0, xmm7, xmm9
    vmulss  xmm3, xmm0, dword ptr [rcx]
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vaddss  xmm1, xmm6, xmm14
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmovaps xmm6, xmmword ptr [r11-18h]
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm10, xmm15
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, cs:__real@40000000
    vaddss  xmm0, xmm3, dword ptr [rcx+4]
    vmovss  dword ptr [r8+4], xmm0
    vsubss  xmm1, xmm11, xmm13
    vmulss  xmm3, xmm1, dword ptr [rcx]
    vmovaps xmm11, xmmword ptr [r11-58h]
    vmovaps xmm13, xmmword ptr [r11-78h]
    vaddss  xmm0, xmm10, xmm15
    vmulss  xmm2, xmm0, dword ptr [rcx+4]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm15, [rsp+98h+var_98]
    vaddss  xmm1, xmm12, xmm14
    vmulss  xmm0, xmm1, dword ptr [rcx+8]
    vmovaps xmm12, xmmword ptr [r11-68h]
    vmovaps xmm14, [rsp+98h+var_88]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, cs:__real@40000000
    vaddss  xmm1, xmm3, dword ptr [rcx+8]
    vmovss  dword ptr [r8+8], xmm1
  }
}

/*
==============
UnitQuatToAxis
==============
*/
void UnitQuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RDI = axis;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = quat;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovaps xmmword ptr [rax-38h], xmm8
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
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v70, v71, v72, v73, v74) )
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
  _R11 = &v76;
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
    vaddss  xmm0, xmm7, xmm9
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+14h], xmm1
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vsubss  xmm0, xmm13, xmm0
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  dword ptr [rdi+20h], xmm0
  }
}

/*
==============
ClosestPointToBounds
==============
*/
bool ClosestPointToBounds(const vec3_t *v, const vec3_t *mins, const vec3_t *maxs, vec3_t *out)
{
  char v8; 
  unsigned int v9; 
  bool v10; 
  bool v11; 
  bool v13; 
  bool v16; 
  bool v17; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _R14 = (char *)mins - (char *)maxs;
  _RBP = (char *)v - (char *)maxs;
  _R15 = (char *)out - (char *)maxs;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  v11 = 1;
  _RDI = maxs;
  do
  {
    if ( !v10 )
    {
      LODWORD(v24) = 3;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
        __debugbreak();
      LODWORD(v25) = 3;
      LODWORD(v22) = v9;
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v25);
      v11 = !v13;
      if ( v13 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+rdi]
      vcomiss xmm0, dword ptr [rdi+rbp]
    }
    if ( !v11 )
    {
      if ( v9 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [r14+rdi] }
LABEL_22:
      if ( v9 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
          __debugbreak();
      }
      v8 = 1;
      goto LABEL_32;
    }
    v16 = v9 < 3;
    if ( v9 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
        __debugbreak();
      LODWORD(v26) = 3;
      LODWORD(v23) = v9;
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26);
      v16 = 0;
      if ( v17 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vcomiss xmm0, dword ptr [rdi+rbp]
    }
    if ( v16 )
    {
      if ( v9 >= 3 )
      {
        LODWORD(v24) = 3;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
      goto LABEL_22;
    }
    if ( v9 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rdi+rbp] }
    if ( v9 >= 3 )
    {
      LODWORD(v24) = 3;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v24) )
        __debugbreak();
    }
LABEL_32:
    __asm { vmovss  dword ptr [r15+rdi], xmm6 }
    _RDI = (const vec3_t *)((char *)_RDI + 4);
    v10 = ++v9 < 3;
    v11 = v9 <= 3;
  }
  while ( (int)v9 < 3 );
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return v8 == 0;
}

/*
==============
LerpAngles
==============
*/

void __fastcall LerpAngles(const vec3_t *from, const vec3_t *to, double frac, vec3_t *out)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovaps [rsp+28h+var_18], xmm9
    vxorps  xmm9, xmm9, xmm9
    vmovaps [rsp+28h+var_28], xmm10
    vmovaps xmm10, xmm2
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [rcx]
    vmovss  dword ptr [r9], xmm2
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [r9+4], xmm3
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm9, xmm2, 1
    vmovaps xmm9, [rsp+28h+var_18]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rcx+8]
    vmovaps xmm10, [rsp+28h+var_28]
    vmovss  dword ptr [r9+8], xmm3
  }
}

/*
==============
Vec3Basis_RightHanded
==============
*/
void Vec3Basis_RightHanded(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  _RSI = left;
  _RDI = up;
  _RBX = forward;
  PerpendicularVector(forward, up);
  if ( _RDI == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+8]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm1, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm0, dword ptr [rbx+8]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+8], xmm0
  }
}

