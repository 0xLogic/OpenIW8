/*
==============
DynEnt_Vec4LengthSq
==============
*/

long double __fastcall DynEnt_Vec4LengthSq(const dvec4_t *v)
{
  return ?DynEnt_Vec4LengthSq@@YANAEBTdvec4_t@@@Z(v);
}

/*
==============
DynEnt_AxisComponentsToQuat
==============
*/

void __fastcall DynEnt_AxisComponentsToQuat(const dvec3_t *mat0, const dvec3_t *mat1, const dvec3_t *mat2, vec4_t *out)
{
  ?DynEnt_AxisComponentsToQuat@@YAXAEBTdvec3_t@@00AEATvec4_t@@@Z(mat0, mat1, mat2, out);
}

/*
==============
DynEnt_MatrixMultiply43
==============
*/

void __fastcall DynEnt_MatrixMultiply43(const tmat43_t<dvec3_t> *in1, const tmat43_t<dvec3_t> *in2, tmat43_t<dvec3_t> *out)
{
  ?DynEnt_MatrixMultiply43@@YAXAEBT?$tmat43_t@Tdvec3_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
DynEnt_AnglesToAxis
==============
*/

void __fastcall DynEnt_AnglesToAxis(const vec3_t *angles, tmat33_t<dvec3_t> *axis)
{
  ?DynEnt_AnglesToAxis@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tdvec3_t@@@@@Z(angles, axis);
}

/*
==============
DynEnt_AnglesToAxis
==============
*/
void DynEnt_AnglesToAxis(const vec3_t *angles, tmat33_t<dvec3_t> *axis)
{
  long double v46; 
  long double v47; 
  void *retaddr; 
  long double pcos; 
  __int64 v53; 
  __int64 v54; 
  long double psin; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovsd  xmm6, cs:__real@3f91df46aaaaaaab
    vcvtss2sd xmm0, xmm0, xmm0
  }
  _RDI = axis;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmulsd  xmm0, xmm0, xmm6; radians
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = angles;
  FastSinCosDouble(*(const long double *)&_XMM0, (long double *)&v54, (long double *)&v53);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm0, xmm0, xmm6; radians
  }
  FastSinCosDouble(*(const long double *)&_XMM0, &psin, &pcos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm0, xmm0, xmm6; radians
  }
  FastSinCosDouble(*(const long double *)&_XMM0, &v46, &v47);
  __asm
  {
    vmovsd  xmm7, [rsp+78h+arg_8]
    vmovsd  xmm6, [rsp+78h+arg_10]
    vmovsd  xmm8, [rsp+78h+pcos]
    vmovsd  xmm4, [rsp+78h+var_58]
    vmovsd  xmm5, [rsp+78h+var_50]
    vmovsd  xmm3, [rsp+78h+psin]
    vmulsd  xmm0, xmm8, xmm7
    vmovsd  qword ptr [rdi], xmm0
    vxorpd  xmm0, xmm3, cs:__xmm@80000000000000008000000000000000
    vmulsd  xmm1, xmm8, xmm6
    vmovsd  qword ptr [rdi+8], xmm1
    vmovsd  qword ptr [rdi+10h], xmm0
    vmulsd  xmm2, xmm4, xmm3
    vmulsd  xmm1, xmm2, xmm7
    vmulsd  xmm2, xmm2, xmm6
    vmulsd  xmm0, xmm5, xmm6
    vsubsd  xmm1, xmm1, xmm0
    vmovsd  qword ptr [rdi+18h], xmm1
    vmulsd  xmm0, xmm5, xmm7
    vaddsd  xmm1, xmm2, xmm0
    vmovsd  qword ptr [rdi+20h], xmm1
    vmulsd  xmm2, xmm4, xmm8
    vmovsd  qword ptr [rdi+28h], xmm2
    vmulsd  xmm0, xmm4, xmm6
    vmulsd  xmm3, xmm5, xmm3
    vmulsd  xmm1, xmm3, xmm7
    vaddsd  xmm1, xmm1, xmm0
    vmulsd  xmm2, xmm3, xmm6
    vmovaps xmm6, [rsp+78h+var_28]
    vmovsd  qword ptr [rdi+30h], xmm1
    vmulsd  xmm0, xmm4, xmm7
    vmovaps xmm7, [rsp+78h+var_38]
    vsubsd  xmm1, xmm2, xmm0
    vmulsd  xmm2, xmm5, xmm8
    vmovaps xmm8, [rsp+78h+var_48]
    vmovsd  qword ptr [rdi+38h], xmm1
    vmovsd  qword ptr [rdi+40h], xmm2
  }
}

/*
==============
DynEnt_AxisComponentsToQuat
==============
*/
void DynEnt_AxisComponentsToQuat(const dvec3_t *mat0, const dvec3_t *mat1, const dvec3_t *mat2, vec4_t *out)
{
  __int64 v59; 
  __int64 v60; 
  char v65; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovsd  xmm0, qword ptr [rcx+8]
    vsubsd  xmm11, xmm0, qword ptr [rdx]
    vmovsd  xmm7, cs:__real@3ff0000000000000
    vmovsd  xmm5, qword ptr [rdx+8]
    vmovsd  xmm8, qword ptr [rcx]
    vmovsd  xmm4, qword ptr [rdx+10h]
    vmovsd  xmm12, qword ptr [r8+8]
    vmovsd  xmm10, qword ptr [r8]
    vsubsd  xmm13, xmm10, qword ptr [rcx+10h]
    vmovsd  xmm9, qword ptr [r8+10h]
    vaddsd  xmm0, xmm8, xmm5
    vaddsd  xmm1, xmm0, xmm9
    vaddsd  xmm3, xmm1, xmm7
    vmulsd  xmm1, xmm11, xmm11
    vsubsd  xmm14, xmm4, xmm12
    vmulsd  xmm0, xmm14, xmm14
    vmulsd  xmm15, xmm13, xmm13
    vaddsd  xmm0, xmm0, xmm15
    vaddsd  xmm2, xmm0, xmm1
    vmovsd  [rsp+180h+var_150], xmm1
    vmulsd  xmm1, xmm3, xmm3
    vaddsd  xmm6, xmm2, xmm1
    vcomisd xmm6, xmm7
    vmovsd  [rsp+180h+var_140], xmm14
    vmovsd  [rsp+180h+var_138], xmm13
    vmovsd  [rsp+180h+var_130], xmm11
    vmovsd  [rsp+180h+var_128], xmm3
  }
  _R15 = out;
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm6, xmm0
  }
  if ( (unsigned __int64)&v59 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 160, ASSERT_TYPE_ASSERT, "(testSizeSq)", (const char *)&queryFormat, "testSizeSq", v60) )
    __debugbreak();
  __asm
  {
    vsqrtsd xmm0, xmm6, xmm6
    vdivsd  xmm3, xmm7, xmm0
    vmulsd  xmm0, xmm3, qword ptr [rbx]
    vmulsd  xmm2, xmm3, qword ptr [rdi]
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [r15], xmm1
    vmulsd  xmm1, xmm3, qword ptr [rsi]
    vcvtsd2ss xmm0, xmm2, xmm2
    vmovss  dword ptr [r15+4], xmm0
    vcvtsd2ss xmm0, xmm1, xmm1
    vmulsd  xmm1, xmm3, qword ptr [r14]
    vmovss  dword ptr [r15+8], xmm0
    vcvtsd2ss xmm0, xmm1, xmm1
    vmovss  dword ptr [r15+0Ch], xmm0
  }
  _R11 = &v65;
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
DynEnt_MatrixMultiply43
==============
*/
void DynEnt_MatrixMultiply43(const tmat43_t<dvec3_t> *in1, const tmat43_t<dvec3_t> *in2, tmat43_t<dvec3_t> *out)
{
  _RBX = out;
  _RDI = in2;
  _RSI = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 75, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 76, ASSERT_TYPE_ASSERT, "(&in2 != &out)", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vmulsd  xmm3, xmm0, qword ptr [rdi]
    vmovsd  xmm1, qword ptr [rsi+8]
    vmulsd  xmm2, xmm1, qword ptr [rdi+18h]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+30h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx], xmm2
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+18h]
    vmovsd  xmm1, qword ptr [rsi+18h]
    vmulsd  xmm2, xmm1, qword ptr [rdi]
    vmovsd  xmm0, qword ptr [rsi+28h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+30h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+18h], xmm2
    vmovsd  xmm0, qword ptr [rsi+38h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+18h]
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmulsd  xmm2, xmm1, qword ptr [rdi]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+30h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+30h], xmm2
    vmovsd  xmm0, qword ptr [rdi+8]
    vmulsd  xmm3, xmm0, qword ptr [rsi]
    vmovsd  xmm1, qword ptr [rdi+20h]
    vmulsd  xmm2, xmm1, qword ptr [rsi+8]
    vmovsd  xmm0, qword ptr [rdi+38h]
    vmulsd  xmm1, xmm0, qword ptr [rsi+10h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+8], xmm2
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+20h]
    vmovsd  xmm1, qword ptr [rsi+18h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vmovsd  xmm0, qword ptr [rdi+38h]
    vmulsd  xmm1, xmm0, qword ptr [rsi+28h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+20h], xmm2
    vmovsd  xmm0, qword ptr [rsi+38h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+20h]
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+38h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+38h], xmm2
    vmovsd  xmm0, qword ptr [rsi]
    vmulsd  xmm3, xmm0, qword ptr [rdi+10h]
    vmovsd  xmm1, qword ptr [rsi+8]
    vmulsd  xmm2, xmm1, qword ptr [rdi+28h]
    vmovsd  xmm0, qword ptr [rsi+10h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+40h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+10h], xmm2
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+28h]
    vmovsd  xmm1, qword ptr [rsi+18h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+10h]
    vmovsd  xmm0, qword ptr [rsi+28h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+40h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+28h], xmm2
    vmovsd  xmm0, qword ptr [rsi+38h]
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+10h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+28h]
    vmovsd  xmm0, qword ptr [rsi+40h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+40h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vmovsd  qword ptr [rbx+40h], xmm2
    vmovsd  xmm0, qword ptr [rsi+50h]
    vmulsd  xmm3, xmm0, qword ptr [rdi+18h]
    vmovsd  xmm1, qword ptr [rsi+48h]
    vmulsd  xmm2, xmm1, qword ptr [rdi]
    vmovsd  xmm0, qword ptr [rsi+58h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+30h]
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm2, xmm4, xmm1
    vaddsd  xmm3, xmm2, qword ptr [rdi+48h]
    vmovsd  qword ptr [rbx+48h], xmm3
    vmovsd  xmm0, qword ptr [rsi+50h]
    vmulsd  xmm4, xmm0, qword ptr [rdi+20h]
    vmovsd  xmm1, qword ptr [rsi+48h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vmovsd  xmm0, qword ptr [rsi+58h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+38h]
    vaddsd  xmm3, xmm4, xmm2
    vaddsd  xmm2, xmm3, xmm1
    vaddsd  xmm3, xmm2, qword ptr [rdi+50h]
    vmovsd  qword ptr [rbx+50h], xmm3
    vmovsd  xmm0, qword ptr [rsi+50h]
    vmovsd  xmm1, qword ptr [rsi+48h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+10h]
    vmulsd  xmm4, xmm0, qword ptr [rdi+28h]
    vmovsd  xmm0, qword ptr [rsi+58h]
    vmulsd  xmm1, xmm0, qword ptr [rdi+40h]
    vaddsd  xmm3, xmm4, xmm2
    vaddsd  xmm2, xmm3, xmm1
    vaddsd  xmm3, xmm2, qword ptr [rdi+58h]
    vmovsd  qword ptr [rbx+58h], xmm3
  }
}

/*
==============
DynEnt_Vec4LengthSq
==============
*/
long double DynEnt_Vec4LengthSq(const dvec4_t *v)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  xmm2, qword ptr [rcx+8]
    vmovsd  xmm3, qword ptr [rcx+10h]
    vmovsd  xmm4, qword ptr [rcx+18h]
    vmulsd  xmm1, xmm0, xmm0
    vmulsd  xmm0, xmm2, xmm2
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm3, xmm3
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm4, xmm4
    vaddsd  xmm0, xmm3, xmm0
  }
  return *(double *)&_XMM0;
}

