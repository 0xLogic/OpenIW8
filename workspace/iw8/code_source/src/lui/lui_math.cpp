/*
==============
LUI_Matrix_BuildXRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildXRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildXRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Vec3MadHighPrecision
==============
*/

void __fastcall LUI_Vec3MadHighPrecision(const dvec3_t *start, long double scale, const dvec3_t *dir, dvec3_t *result)
{
  ?LUI_Vec3MadHighPrecision@@YAXAEBTdvec3_t@@N0AEAT1@@Z(start, scale, dir, result);
}

/*
==============
LUI_Matrix_Copy
==============
*/

void __fastcall LUI_Matrix_Copy(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *dest)
{
  ?LUI_Matrix_Copy@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(source, dest);
}

/*
==============
LUI_Matrix_LoadIdentity
==============
*/

void __fastcall LUI_Matrix_LoadIdentity(tmat44_t<vec4_t> *matrix)
{
  ?LUI_Matrix_LoadIdentity@@YAXAEAT?$tmat44_t@Tvec4_t@@@@@Z(matrix);
}

/*
==============
LUI_Matrix_BuildYRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildYRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildYRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Matrix_Invert
==============
*/

bool __fastcall LUI_Matrix_Invert(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *result)
{
  return ?LUI_Matrix_Invert@@YA_NAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(source, result);
}

/*
==============
LUI_Matrix_BuildScaleMatrix
==============
*/

void __fastcall LUI_Matrix_BuildScaleMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildScaleMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(x, y, z, result);
}

/*
==============
LUI_ApplyTransformsToPoint
==============
*/

void __fastcall LUI_ApplyTransformsToPoint(vec4_t *point)
{
  ?LUI_ApplyTransformsToPoint@@YAXPEATvec4_t@@@Z(point);
}

/*
==============
LUI_Matrix_MultiplyVector
==============
*/

void __fastcall LUI_Matrix_MultiplyVector(const tmat44_t<vec4_t> *matrix, const vec4_t *vec, vec4_t *result)
{
  ?LUI_Matrix_MultiplyVector@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEBTvec4_t@@AEAT2@@Z(matrix, vec, result);
}

/*
==============
LUI_Vector3_DotProduct
==============
*/

double __fastcall LUI_Vector3_DotProduct(const vec3_t *vec1, const vec4_t *vec2)
{
  double result; 

  *(float *)&result = ?LUI_Vector3_DotProduct@@YAMAEBTvec3_t@@AEBTvec4_t@@@Z(vec1, vec2);
  return result;
}

/*
==============
LUI_Matrix_Multiply
==============
*/

void __fastcall LUI_Matrix_Multiply(const tmat44_t<vec4_t> *matrix1, const tmat44_t<vec4_t> *matrix2, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_Multiply@@YAXAEBT?$tmat44_t@Tvec4_t@@@@0AEAT1@@Z(matrix1, matrix2, result);
}

/*
==============
LUI_Matrix_BuildTranslationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildTranslationMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildTranslationMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(x, y, z, result);
}

/*
==============
LUI_Matrix_BuildZRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildZRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildZRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Vector3_DotProduct
==============
*/

double __fastcall LUI_Vector3_DotProduct(const vec3_t *vec1, const vec3_t *vec2)
{
  double result; 

  *(float *)&result = ?LUI_Vector3_DotProduct@@YAMAEBTvec3_t@@0@Z(vec1, vec2);
  return result;
}

/*
==============
LUI_Vector_NormalizeInPlace
==============
*/

void __fastcall LUI_Vector_NormalizeInPlace(float *x, float *y, float *z)
{
  ?LUI_Vector_NormalizeInPlace@@YAXAEAM00@Z(x, y, z);
}

/*
==============
LUI_ApplyTransformsToPoint
==============
*/
void LUI_ApplyTransformsToPoint(vec4_t *point)
{
  char v46; 
  char v47; 
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
  _RDI = (char *)point;
  if ( !LUI_GetCurrentMenuTransform() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 224, ASSERT_TYPE_ASSERT, "(currentMatrix)", (const char *)&queryFormat, "currentMatrix") )
    __debugbreak();
  if ( &v46 == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 44, ASSERT_TYPE_ASSERT, "(&result != &vec)", (const char *)&queryFormat, "&result != &vec") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+4]
    vmulss  xmm1, xmm8, dword ptr [rbx+4]
    vmovss  xmm7, dword ptr [rdi]
    vmulss  xmm0, xmm7, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rdi+8]
    vmovss  xmm10, dword ptr [rdi+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+8]
    vmulss  xmm0, xmm10, dword ptr [rbx+0Ch]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rbx+10h]
    vaddss  xmm6, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+14h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+18h]
    vmulss  xmm0, xmm10, dword ptr [rbx+1Ch]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rbx+20h]
    vaddss  xmm5, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+24h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+28h]
    vmulss  xmm0, xmm10, dword ptr [rbx+2Ch]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rbx+30h]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+34h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbx+38h]
    vmulss  xmm0, xmm10, dword ptr [rbx+3Ch]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  dword ptr [rdi], xmm6
    vmovss  dword ptr [rdi+4], xmm5
    vmovss  dword ptr [rdi+8], xmm4
  }
  _R11 = &v47;
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
LUI_Matrix_BuildScaleMatrix
==============
*/

void __fastcall LUI_Matrix_BuildScaleMatrix(double x, double y, double z, tmat44_t<vec4_t> *result)
{
  __asm { vmovss  dword ptr [r9], xmm0 }
  *(vec4_t *)((char *)&result->row0 + 4) = 0ui64;
  __asm { vmovss  dword ptr [r9+14h], xmm1 }
  *(vec4_t *)((char *)&result->row1 + 8) = 0ui64;
  __asm { vmovss  dword ptr [r9+28h], xmm2 }
  *(vec4_t *)((char *)&result->row2 + 12) = 0ui64;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildTranslationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildTranslationMatrix(double x, double y, double z, tmat44_t<vec4_t> *result)
{
  *(_QWORD *)result->m[0].v = 1065353216i64;
  result->m[0].v[2] = 0.0;
  __asm { vmovss  dword ptr [r9+0Ch], xmm0 }
  result->m[1].v[0] = 0.0;
  *(_QWORD *)&result->row1.xyz.y = 1065353216i64;
  __asm { vmovss  dword ptr [r9+1Ch], xmm1 }
  *(_QWORD *)result->row2.v = 0i64;
  result->m[2].v[2] = 1.0;
  __asm { vmovss  dword ptr [r9+2Ch], xmm2 }
  *(_QWORD *)result->row3.v = 0i64;
  result->m[3].v[2] = 0.0;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildXRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildXRotationMatrix(double degrees, tmat44_t<vec4_t> *result)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = result;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
  }
  *(_QWORD *)_RBX->m[0].v = 1065353216i64;
  *(_QWORD *)&_RBX->row0.xyz.z = 0i64;
  _RBX->m[1].v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+14h], xmm2
    vmovss  dword ptr [rbx+18h], xmm0
  }
  *(_QWORD *)(&_RBX->row1.xyz + 1) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+24h], xmm1
    vmovss  dword ptr [rbx+28h], xmm2
  }
  *(_QWORD *)(&_RBX->row2.xyz + 1) = 0i64;
  *(_QWORD *)&_RBX->row3.xyz.y = 0i64;
  _RBX->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildYRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildYRotationMatrix(double degrees, tmat44_t<vec4_t> *result)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = result;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm2, [rsp+28h+c]
    vmovss  xmm1, [rsp+28h+s]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx], xmm2
  }
  _RBX->m[0].v[1] = 0.0;
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  *(_QWORD *)(&_RBX->row0.xyz + 1) = 0i64;
  *(_QWORD *)&_RBX->row1.xyz.y = 1065353216i64;
  _RBX->m[1].v[3] = 0.0;
  __asm { vmovss  dword ptr [rbx+20h], xmm1 }
  _RBX->m[2].v[1] = 0.0;
  __asm { vmovss  dword ptr [rbx+28h], xmm2 }
  *(_QWORD *)(&_RBX->row2.xyz + 1) = 0i64;
  *(_QWORD *)&_RBX->row3.xyz.y = 0i64;
  _RBX->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildZRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildZRotationMatrix(double degrees, tmat44_t<vec4_t> *result)
{
  float c; 
  float s; 

  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  _RBX = result;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+s]
    vmovss  xmm2, [rsp+28h+c]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
  *(_QWORD *)&_RBX->row0.xyz.z = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm1
    vmovss  dword ptr [rbx+14h], xmm2
  }
  *(_QWORD *)&_RBX->row1.xyz.z = 0i64;
  *(_QWORD *)_RBX->row2.v = 0i64;
  *(_QWORD *)&_RBX->row2.xyz.z = 1065353216i64;
  *(_QWORD *)_RBX->row3.v = 0i64;
  _RBX->m[3].v[2] = 0.0;
  _RBX->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_Copy
==============
*/
void LUI_Matrix_Copy(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *dest)
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
LUI_Matrix_Invert
==============
*/
bool LUI_Matrix_Invert(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *result)
{
  int v13; 
  __int64 v14; 
  int v17; 
  const tmat44_t<vec4_t> *v18; 
  bool v19; 
  bool v272; 
  int i; 
  int j; 
  __int64 v289; 
  __int64 v290; 
  int v291; 
  char v304; 
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
  }
  v13 = 0;
  v14 = 0i64;
  _RDI = result;
  do
  {
    v17 = 0;
    v18 = source;
    v19 = 1;
    do
    {
      if ( !v19 )
      {
        LODWORD(v290) = 4;
        LODWORD(v289) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v289, v290) )
          __debugbreak();
      }
      if ( (unsigned int)v13 >= 4 )
      {
        LODWORD(v290) = 4;
        LODWORD(v289) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v289, v290) )
          __debugbreak();
      }
      ++v17;
      *(&v291 + v14) = LODWORD(v18->m[0].v[0]);
      v18 = (const tmat44_t<vec4_t> *)((char *)v18 + 16);
      ++v14;
      v19 = (unsigned int)v17 < 4;
    }
    while ( v17 < 4 );
    ++v13;
    source = (const tmat44_t<vec4_t> *)((char *)source + 4);
  }
  while ( v13 < 4 );
  __asm
  {
    vmovss  xmm15, [rsp+158h+var_FC]
    vmovss  xmm1, [rsp+158h+var_DC]
    vmulss  xmm9, xmm1, [rsp+158h+var_F0]
    vmovss  xmm0, [rsp+158h+var_E8]
    vmulss  xmm7, xmm0, [rsp+158h+var_F0]
    vmovss  xmm13, [rsp+158h+var_100]
    vmovss  xmm6, [rsp+158h+var_EC]
    vmulss  xmm10, xmm6, [rsp+158h+var_E0]
    vmovss  xmm12, [rsp+158h+var_F4]
    vmovss  xmm8, [rsp+158h+var_F8]
    vmulss  xmm11, xmm6, [rsp+158h+var_E4]
    vmulss  xmm4, xmm12, [rsp+158h+var_E0]
    vmulss  xmm14, xmm8, [rsp+158h+var_E0]
    vmulss  xmm3, xmm12, xmm1
    vmulss  xmm12, xmm0, xmm12
    vmulss  xmm5, xmm8, xmm1
    vmulss  xmm8, xmm8, [rsp+158h+var_E4]
    vmulss  xmm6, xmm0, xmm6
    vmulss  xmm0, xmm9, [rsp+158h+var_104]
    vmulss  xmm1, xmm11, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm10, [rsp+158h+var_104]
    vmulss  xmm1, xmm4, xmm15
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm3, xmm13
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, [rsp+158h+var_E4]
    vmulss  xmm1, xmm0, [rsp+158h+var_F0]
    vmulss  xmm1, xmm1, xmm15
    vaddss  xmm2, xmm3, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm5, xmm13
    vmovss  xmm13, [rsp+158h+var_108]
    vmulss  xmm0, xmm10, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, [rsp+158h+var_100]
    vmulss  xmm1, xmm7, xmm15
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm9, xmm13
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm5, [rsp+158h+var_104]
    vmulss  xmm1, xmm14, xmm15
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm0, [rsp+158h+var_F4]
    vmulss  xmm1, xmm0, [rsp+158h+var_DC]
    vmulss  xmm0, xmm6, [rsp+158h+var_104]
    vmulss  xmm1, xmm1, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm7, [rsp+158h+var_104]
    vmulss  xmm1, xmm15, xmm12
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm14, [rsp+158h+var_104]
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm2, [rsp+158h+var_E4]
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm0, xmm2, [rsp+158h+var_F0]
    vmulss  xmm0, xmm13, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, [rsp+158h+var_100]
    vaddss  xmm4, xmm2, xmm1
    vmovss  xmm1, [rsp+158h+var_F4]
    vmulss  xmm0, xmm1, [rsp+158h+var_E0]
    vmulss  xmm1, xmm8, [rsp+158h+var_100]
    vmulss  xmm0, xmm13, xmm0
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm2, [rsp+158h+var_F4]
    vmovss  dword ptr [rdi+0Ch], xmm0
    vmulss  xmm0, xmm2, [rsp+158h+var_DC]
    vmulss  xmm1, xmm0, [rsp+158h+var_110]
    vmulss  xmm0, xmm10, [rsp+158h+var_114]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, [rsp+158h+var_E4]
    vmulss  xmm0, xmm1, [rsp+158h+var_F0]
    vmulss  xmm1, xmm0, [rsp+158h+var_10C]
    vmulss  xmm0, xmm9, [rsp+158h+var_114]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm11, [rsp+158h+var_110]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm2, [rsp+158h+var_F4]
    vmulss  xmm0, xmm2, [rsp+158h+var_E0]
    vmulss  xmm1, xmm0, [rsp+158h+var_10C]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm6, [rsp+158h+var_110]
    vmulss  xmm3, xmm5, [rsp+158h+var_110]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+10h], xmm0
    vmulss  xmm0, xmm9, [rsp+158h+var_118]
    vmovss  xmm9, [rsp+158h+var_114]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm10, [rsp+158h+var_118]
    vmovss  xmm10, [rsp+158h+var_118]
    vmulss  xmm1, xmm14, [rsp+158h+var_10C]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm7, [rsp+158h+var_10C]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+14h], xmm0
    vmulss  xmm0, xmm12, [rsp+158h+var_10C]
    vmulss  xmm3, xmm9, xmm5
    vmulss  xmm1, xmm10, xmm11
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm3, xmm9, xmm6
    vmovss  xmm6, [rsp+158h+var_F4]
    vmulss  xmm0, xmm6, [rsp+158h+var_DC]
    vmulss  xmm1, xmm10, xmm0
    vmulss  xmm0, xmm8, [rsp+158h+var_10C]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm6, [rsp+158h+var_E0]
    vsubss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi+18h], xmm1
    vmulss  xmm0, xmm10, xmm0
    vmulss  xmm3, xmm9, xmm7
    vmovss  xmm7, [rsp+158h+var_110]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmovss  xmm1, [rsp+158h+var_E4]
    vmulss  xmm0, xmm1, [rsp+158h+var_F0]
    vmulss  xmm0, xmm10, xmm0
    vmulss  xmm3, xmm9, xmm14
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, [rsp+158h+var_10C]
    vmulss  xmm8, xmm3, [rsp+158h+var_104]
    vmulss  xmm1, xmm7, xmm12
    vmulss  xmm12, xmm13, [rsp+158h+var_110]
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, [rsp+158h+var_100]
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm6, xmm3, xmm1
    vmulss  xmm14, xmm9, xmm1
    vmulss  xmm5, xmm7, xmm15
    vmulss  xmm11, xmm9, xmm15
    vmovss  dword ptr [rdi+1Ch], xmm0
    vmulss  xmm0, xmm5, [rsp+158h+var_E4]
    vmulss  xmm7, xmm10, xmm15
    vmulss  xmm15, xmm10, xmm1
    vmulss  xmm1, xmm8, [rsp+158h+var_E0]
    vmulss  xmm10, xmm10, [rsp+158h+var_104]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, [rsp+158h+var_DC]
    vmulss  xmm0, xmm11, [rsp+158h+var_E0]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm9, xmm3, xmm13
    vmulss  xmm3, xmm6, [rsp+158h+var_E4]
    vmulss  xmm13, xmm13, [rsp+158h+var_114]
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, [rsp+158h+var_110]
    vmulss  xmm1, xmm0, [rsp+158h+var_104]
    vmulss  xmm1, xmm1, [rsp+158h+var_DC]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm6, [rsp+158h+var_E8]
    vmulss  xmm1, xmm7, [rsp+158h+var_E0]
    vsubss  xmm0, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm5, [rsp+158h+var_E8]
    vmulss  xmm3, xmm9, [rsp+158h+var_E0]
    vmovss  dword ptr [rdi+20h], xmm0
    vmulss  xmm0, xmm12, [rsp+158h+var_DC]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm15, [rsp+158h+var_DC]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm9, [rsp+158h+var_E4]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm11, [rsp+158h+var_E8]
    vsubss  xmm1, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm8, [rsp+158h+var_E8]
    vmulss  xmm0, xmm7, [rsp+158h+var_E4]
    vmovss  dword ptr [rdi+24h], xmm1
    vmulss  xmm1, xmm10, [rsp+158h+var_DC]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm13, [rsp+158h+var_DC]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, [rsp+158h+var_110]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+28h], xmm0
    vmulss  xmm0, xmm1, [rsp+158h+var_104]
    vmulss  xmm3, xmm0, [rsp+158h+var_E8]
    vmulss  xmm1, xmm15, [rsp+158h+var_E4]
    vmulss  xmm0, xmm13, [rsp+158h+var_E0]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm14, [rsp+158h+var_E8]
    vmulss  xmm1, xmm12, [rsp+158h+var_E4]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm10, [rsp+158h+var_E0]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vsubss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi+2Ch], xmm1
    vmovss  xmm1, [rsp+158h+var_110]
    vmulss  xmm0, xmm1, [rsp+158h+var_104]
    vmulss  xmm3, xmm0, [rsp+158h+var_EC]
    vmulss  xmm1, xmm6, [rsp+158h+var_F4]
    vmulss  xmm0, xmm11, [rsp+158h+var_F0]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm5, [rsp+158h+var_F4]
    vmulss  xmm3, xmm14, [rsp+158h+var_EC]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm8, [rsp+158h+var_F0]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm15, [rsp+158h+var_EC]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm5, [rsp+158h+var_F8]
    vmovss  xmm5, [rsp+158h+var_EC]
    vsubss  xmm0, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm7, [rsp+158h+var_F0]
    vmovss  dword ptr [rdi+30h], xmm0
    vmulss  xmm0, xmm9, [rsp+158h+var_F0]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm6, [rsp+158h+var_F8]
    vmovss  xmm6, [rsp+158h+var_F8]
    vmulss  xmm3, xmm12, xmm5
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm7, [rsp+158h+var_F4]
    vsubss  xmm1, xmm4, xmm2
    vmulss  xmm3, xmm13, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rdi+34h], xmm1
    vmulss  xmm1, xmm6, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm10, xmm5
    vmovss  xmm5, [rsp+158h+var_F4]
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm9, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+38h], xmm0
    vmulss  xmm1, xmm10, [rsp+158h+var_F0]
    vmulss  xmm0, xmm12, xmm5
    vmulss  xmm3, xmm6, xmm14
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm13, [rsp+158h+var_F0]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm3, xmm15, xmm5
    vmovss  xmm5, [rsp+158h+var_110]
    vmulss  xmm0, xmm5, [rsp+158h+var_104]
    vmulss  xmm0, xmm6, xmm0
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmovss  xmm0, [rsp+158h+var_118]
    vsubss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi+3Ch], xmm1
    vmulss  xmm2, xmm0, dword ptr [rdi]
    vmovss  xmm0, [rsp+158h+var_114]
    vmulss  xmm0, xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm5, dword ptr [rdi+8]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, [rsp+158h+var_10C]
    vmulss  xmm0, xmm0, dword ptr [rdi+0Ch]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm4, xmm2, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm4, xmm1
  }
  if ( v13 == 4 )
  {
    v272 = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm6, xmm0, xmm4
    }
    for ( i = 0; i < 4; ++i )
    {
      for ( j = 0; j < 4; ++j )
      {
        if ( (unsigned int)i >= 4 )
        {
          LODWORD(v290) = 4;
          LODWORD(v289) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v289, v290) )
            __debugbreak();
        }
        if ( (unsigned int)j >= 4 )
        {
          LODWORD(v290) = 4;
          LODWORD(v289) = j;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v289, v290) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
        _RDI = (tmat44_t<vec4_t> *)((char *)_RDI + 4);
      }
    }
    v272 = 1;
  }
  _R11 = &v304;
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
  return v272;
}

/*
==============
LUI_Matrix_LoadIdentity
==============
*/
void LUI_Matrix_LoadIdentity(tmat44_t<vec4_t> *matrix)
{
  matrix->m[0] = (vec4_t)0x3F800000ui64;
  matrix->m[1].v[0] = 0.0;
  *(vec4_t *)((char *)&matrix->row1 + 4) = (vec4_t)0x3F800000ui64;
  matrix->m[2].v[1] = 0.0;
  *(vec4_t *)((char *)&matrix->row2 + 8) = (vec4_t)0x3F800000ui64;
  matrix->m[3].v[2] = 0.0;
  matrix->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_Multiply
==============
*/
void LUI_Matrix_Multiply(const tmat44_t<vec4_t> *matrix1, const tmat44_t<vec4_t> *matrix2, tmat44_t<vec4_t> *result)
{
  _RBX = result;
  _RDI = matrix2;
  _RSI = matrix1;
  if ( result == matrix1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 55, ASSERT_TYPE_ASSERT, "(&result != &matrix1)", (const char *)&queryFormat, "&result != &matrix1") )
    __debugbreak();
  if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 56, ASSERT_TYPE_ASSERT, "(&result != &matrix2)", (const char *)&queryFormat, "&result != &matrix2") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+10h]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+30h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rdi+24h]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+34h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+38h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm1, dword ptr [rdi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+2Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+3Ch]
    vmulss  xmm0, xmm2, dword ptr [rsi+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm3, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+10h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+18h]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+1Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+30h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+10h], xmm1
    vmovss  xmm2, dword ptr [rdi+14h]
    vmulss  xmm3, xmm2, dword ptr [rsi+14h]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rsi+10h]
    vmovss  xmm2, dword ptr [rdi+24h]
    vmulss  xmm0, xmm2, dword ptr [rsi+18h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+34h]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm3, xmm1, dword ptr [rsi+14h]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm0, dword ptr [rsi+10h]
    vmovss  xmm1, dword ptr [rsi+18h]
    vmulss  xmm0, xmm1, dword ptr [rdi+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+1Ch]
    vaddss  xmm3, xmm4, xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+38h]
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rbx+18h], xmm0
    vmovss  xmm2, dword ptr [rsi+14h]
    vmulss  xmm3, xmm2, dword ptr [rdi+1Ch]
    vmovss  xmm0, dword ptr [rsi+10h]
    vmulss  xmm1, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm2, dword ptr [rsi+18h]
    vmulss  xmm0, xmm2, dword ptr [rdi+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+1Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+3Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+24h]
    vmulss  xmm3, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+20h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+2Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+30h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+20h], xmm1
    vmovss  xmm2, dword ptr [rdi+14h]
    vmulss  xmm3, xmm2, dword ptr [rsi+24h]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rsi+20h]
    vmovss  xmm2, dword ptr [rdi+24h]
    vmulss  xmm0, xmm2, dword ptr [rsi+28h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+2Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+34h]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm3, xmm1, dword ptr [rsi+24h]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm0, dword ptr [rsi+20h]
    vmovss  xmm1, dword ptr [rsi+28h]
    vmulss  xmm0, xmm1, dword ptr [rdi+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm2, dword ptr [rdi+38h]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  xmm2, dword ptr [rsi+24h]
    vmulss  xmm3, xmm2, dword ptr [rdi+1Ch]
    vmovss  xmm0, dword ptr [rsi+20h]
    vmulss  xmm1, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm2, dword ptr [rsi+28h]
    vmulss  xmm0, xmm2, dword ptr [rdi+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+2Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+3Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+34h]
    vmulss  xmm3, xmm0, dword ptr [rdi+10h]
    vmovss  xmm1, dword ptr [rsi+30h]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+38h]
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+3Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+30h]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+30h], xmm1
    vmovss  xmm2, dword ptr [rdi+14h]
    vmulss  xmm3, xmm2, dword ptr [rsi+34h]
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm0, dword ptr [rsi+30h]
    vmovss  xmm2, dword ptr [rdi+24h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+38h]
    vmovss  xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+34h]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm3, xmm1, dword ptr [rsi+34h]
    vmovss  xmm1, dword ptr [rsi+38h]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm0, dword ptr [rsi+30h]
    vmulss  xmm0, xmm1, dword ptr [rdi+28h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsi+3Ch]
    vmulss  xmm1, xmm2, dword ptr [rdi+38h]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rbx+38h], xmm0
    vmovss  xmm2, dword ptr [rsi+34h]
    vmulss  xmm3, xmm2, dword ptr [rdi+1Ch]
    vmovss  xmm0, dword ptr [rsi+30h]
    vmulss  xmm1, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm2, dword ptr [rsi+38h]
    vmulss  xmm0, xmm2, dword ptr [rdi+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm1, dword ptr [rdi+3Ch]
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+3Ch], xmm0
  }
}

/*
==============
LUI_Matrix_MultiplyVector
==============
*/
void LUI_Matrix_MultiplyVector(const tmat44_t<vec4_t> *matrix, const vec4_t *vec, vec4_t *result)
{
  _RDI = result;
  _RSI = matrix;
  if ( result == vec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 44, ASSERT_TYPE_ASSERT, "(&result != &vec)", (const char *)&queryFormat, "&result != &vec") )
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
LUI_Vec3MadHighPrecision
==============
*/

void __fastcall LUI_Vec3MadHighPrecision(const dvec3_t *start, double scale, const dvec3_t *dir, dvec3_t *result)
{
  __asm
  {
    vmulsd  xmm0, xmm1, qword ptr [r8]
    vaddsd  xmm2, xmm0, qword ptr [rcx]
    vmovsd  qword ptr [r9], xmm2
    vmulsd  xmm0, xmm1, qword ptr [r8+8]
    vaddsd  xmm2, xmm0, qword ptr [rcx+8]
    vmovsd  qword ptr [r9+8], xmm2
    vmulsd  xmm0, xmm1, qword ptr [r8+10h]
    vaddsd  xmm1, xmm0, qword ptr [rcx+10h]
    vmovsd  qword ptr [r9+10h], xmm1
  }
}

/*
==============
LUI_Vector3_DotProduct
==============
*/
float LUI_Vector3_DotProduct(const vec3_t *vec1, const vec3_t *vec2)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Vector3_DotProduct
==============
*/
float LUI_Vector3_DotProduct(const vec3_t *vec1, const vec4_t *vec2)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Vector_NormalizeInPlace
==============
*/
void LUI_Vector_NormalizeInPlace(float *x, float *y, float *z)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm3, dword ptr [r8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vdivss  xmm4, xmm0, xmm3
    vmulss  xmm1, xmm4, xmm5
    vmovss  dword ptr [rcx], xmm1
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm1, xmm4, dword ptr [r8]
    vmovss  dword ptr [r8], xmm1
  }
}

