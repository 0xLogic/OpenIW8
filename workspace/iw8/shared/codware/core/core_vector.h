/*
==============
I_rsqrt
==============
*/

double __fastcall I_rsqrt(float val)
{
  double result; 

  *(float *)&result = ?I_rsqrt@@YAMM@Z(val);
  return result;
}

/*
==============
Vec4Normalize
==============
*/

double __fastcall Vec4Normalize(vec4_t *v)
{
  double result; 

  *(float *)&result = ?Vec4Normalize@@YAMAEATvec4_t@@@Z(v);
  return result;
}

/*
==============
I_fres
==============
*/

double __fastcall I_fres(float val)
{
  double result; 

  *(float *)&result = ?I_fres@@YAMM@Z(val);
  return result;
}

/*
==============
Vec3Scale
==============
*/

void __fastcall Vec3Scale(const vec3_t *v, float scale, vec3_t *result)
{
  ?Vec3Scale@@YAXAEBTvec3_t@@MAEAT1@@Z(v, scale, result);
}

/*
==============
Vec3Lerp
==============
*/

void __fastcall Vec3Lerp(const vec3_t *from, const vec3_t *to, float frac, vec3_t *result)
{
  ?Vec3Lerp@@YAXAEBTvec3_t@@0MAEAT1@@Z(from, to, frac, result);
}

/*
==============
I_flerp
==============
*/

double __fastcall I_flerp(float a, float b, float w)
{
  double result; 

  *(float *)&result = ?I_flerp@@YAMMMM@Z(a, b, w);
  return result;
}

/*
==============
Vec2NormalizeFast
==============
*/

void __fastcall Vec2NormalizeFast(vec2_t *v)
{
  ?Vec2NormalizeFast@@YAXAEATvec2_t@@@Z(v);
}

/*
==============
DVec3Cross
==============
*/

void __fastcall DVec3Cross(const dvec3_t *v0, const dvec3_t *v1, dvec3_t *cross)
{
  ?DVec3Cross@@YAXAEBTdvec3_t@@0AEAT1@@Z(v0, v1, cross);
}

/*
==============
I_clamp
==============
*/

int __fastcall I_clamp(int val, int min, int max)
{
  return ?I_clamp@@YAHHHH@Z(val, min, max);
}

/*
==============
Vec2Rotate
==============
*/

void __fastcall Vec2Rotate(const vec2_t *in, float radians, vec2_t *out)
{
  ?Vec2Rotate@@YAXAEIBTvec2_t@@MAEIAT1@@Z(in, radians, out);
}

/*
==============
Vec3Add
==============
*/

void __fastcall Vec3Add(const vec3_t *a, const vec3_t *b, vec3_t *sum)
{
  ?Vec3Add@@YAXAEBTvec3_t@@0AEAT1@@Z(a, b, sum);
}

/*
==============
I_fclamp
==============
*/

double __fastcall I_fclamp(float val, float min, float max)
{
  double result; 

  *(float *)&result = ?I_fclamp@@YAMMMM@Z(val, min, max);
  return result;
}

/*
==============
I_tclamp<short>
==============
*/

__int16 __fastcall I_tclamp<short>(__int16 val, __int16 min, __int16 max)
{
  return ??$I_tclamp@F@@YAFFFF@Z(val, min, max);
}

/*
==============
Vec3Length
==============
*/

double __fastcall Vec3Length(const vec3_t *v)
{
  double result; 

  *(float *)&result = ?Vec3Length@@YAMAEBTvec3_t@@@Z(v);
  return result;
}

/*
==============
IS_NAN
==============
*/

bool __fastcall IS_NAN(float x)
{
  return ?IS_NAN@@YA_NM@Z(x);
}

/*
==============
Vec3Rotate
==============
*/

void __fastcall Vec3Rotate(const vec3_t *in, const tmat33_t<vec3_t> *matrix, vec3_t *out)
{
  ?Vec3Rotate@@YAXAEIBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEIAT1@@Z(in, matrix, out);
}

/*
==============
I_fdistnormalized
==============
*/

double __fastcall I_fdistnormalized(float min, float max, float dist)
{
  double result; 

  *(float *)&result = ?I_fdistnormalized@@YAMMMM@Z(min, max, dist);
  return result;
}

/*
==============
Vec3Normalize
==============
*/

double __fastcall Vec3Normalize(vec3_t *v)
{
  double result; 

  *(float *)&result = ?Vec3Normalize@@YAMAEATvec3_t@@@Z(v);
  return result;
}

/*
==============
Vec3Cross
==============
*/

void __fastcall Vec3Cross(const vec3_t *v0, const vec3_t *v1, vec3_t *cross)
{
  ?Vec3Cross@@YAXAEBTvec3_t@@0AEAT1@@Z(v0, v1, cross);
}

/*
==============
Vec3Dot
==============
*/

double __fastcall Vec3Dot(const vec3_t *a, const vec3_t *b)
{
  double result; 

  *(float *)&result = ?Vec3Dot@@YAMAEBTvec3_t@@0@Z(a, b);
  return result;
}

/*
==============
Vec3Mad
==============
*/

void __fastcall Vec3Mad(const vec3_t *start, float scale, const vec3_t *dir, vec3_t *result)
{
  ?Vec3Mad@@YAXAEBTvec3_t@@M0AEAT1@@Z(start, scale, dir, result);
}

/*
==============
Vec3NormalizeFast
==============
*/

void __fastcall Vec3NormalizeFast(vec3_t *v)
{
  ?Vec3NormalizeFast@@YAXAEATvec3_t@@@Z(v);
}

/*
==============
Mat33IsOrthonormal
==============
*/

bool __fastcall Mat33IsOrthonormal(const tmat33_t<vec3_t> *m)
{
  return ?Mat33IsOrthonormal@@YA_NAEBT?$tmat33_t@Tvec3_t@@@@@Z(m);
}

/*
==============
Vec2NormalizeFast
==============
*/
void Vec2NormalizeFast(vec2_t *v)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = v;
  __asm
  {
    vaddss  xmm6, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovaps xmm1, xmm6
    vrsqrtss xmm2, xmm1, xmm6
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
  }
}

/*
==============
I_fclamp
==============
*/

float __fastcall I_fclamp(double val, double min, double max)
{
  double v17; 
  double v18; 

  __asm
  {
    vcomiss xmm1, xmm2
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vcvtss2sd xmm3, xmm6, xmm2
    vmovsd  [rsp+78h+var_48], xmm3
    vcvtss2sd xmm4, xmm7, xmm1
    vmovsd  [rsp+78h+var_50], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v17, v18) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm8, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vminss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec3Cross
==============
*/
void Vec3Cross(const vec3_t *v0, const vec3_t *v1, vec3_t *cross)
{
  _RBX = cross;
  _RDI = v1;
  _RSI = v0;
  if ( v0 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+8]
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm2, xmm0, dword ptr [rdi+8]
    vmulss  xmm3, xmm1, dword ptr [rdi]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
I_clamp
==============
*/
__int64 I_clamp(int val, int min, int max)
{
  if ( min > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", min, max) )
    __debugbreak();
  if ( max < val )
    val = max;
  if ( min > val )
    return (unsigned int)min;
  return (unsigned int)val;
}

/*
==============
Vec3Normalize
==============
*/
float Vec3Normalize(vec3_t *v)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
    vdivss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rcx], xmm1
    vmulss  xmm2, xmm3, dword ptr [rcx+4]
    vmovss  dword ptr [rcx+4], xmm2
    vmulss  xmm1, xmm3, dword ptr [rcx+8]
    vmovss  dword ptr [rcx+8], xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
I_fdistnormalized
==============
*/

float __fastcall I_fdistnormalized(double min, double max, double dist)
{
  bool v11; 
  bool v12; 
  bool v15; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 

  __asm
  {
    vcomiss xmm0, xmm1
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vcvtss2sd xmm3, xmm8, xmm1
    vmovsd  [rsp+78h+var_48], xmm3
    vcvtss2sd xmm4, xmm6, xmm0
    vmovsd  [rsp+78h+var_50], xmm4
  }
  v11 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 826, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v24, v26);
  v12 = !v11;
  if ( v11 )
    __debugbreak();
  __asm
  {
    vcomiss xmm7, xmm6
    vcomiss xmm7, xmm8
  }
  if ( v11 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+78h+var_48], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+78h+var_50], xmm1
    }
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 828, ASSERT_TYPE_SANITY, "( dist ) <= ( max )", "dist <= max\n\t%g, %g", v25, v27);
    v12 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm1, xmm8, xmm6
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v12 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vdivss  xmm0, xmm0, xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec4Normalize
==============
*/
float Vec4Normalize(vec4_t *v)
{
  char v1; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm0, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( !v1 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm3, xmm1, xmm0
      vmulss  xmm2, xmm5, xmm3
      vmovss  dword ptr [rcx], xmm2
      vmulss  xmm1, xmm3, dword ptr [rcx+4]
      vmovss  dword ptr [rcx+4], xmm1
      vmulss  xmm2, xmm3, dword ptr [rcx+8]
      vmulss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rcx+8], xmm2
      vmovss  dword ptr [rcx+0Ch], xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
IS_NAN
==============
*/

bool __fastcall IS_NAN(double x)
{
  int v2; 

  __asm { vmovss  [rsp+arg_0], xmm0 }
  return (v2 & 0x7F800000) == 2139095040;
}

/*
==============
I_flerp
==============
*/

float __fastcall I_flerp(float a, double b, float w)
{
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm5, xmm4, xmm0
    vmulss  xmm0, xmm1, xmm2
    vaddss  xmm0, xmm5, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec3Add
==============
*/
void Vec3Add(const vec3_t *a, const vec3_t *b, vec3_t *sum)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vaddss  xmm0, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r8+4], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r8+8], xmm2
  }
}

/*
==============
Vec3Dot
==============
*/
float Vec3Dot(const vec3_t *a, const vec3_t *b)
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
Vec3Length
==============
*/
float Vec3Length(const vec3_t *v)
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
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec3Lerp
==============
*/
void Vec3Lerp(const vec3_t *from, const vec3_t *to, float frac, vec3_t *result)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm1, xmm2
    vaddss  xmm4, xmm3, dword ptr [rcx]
    vmovss  dword ptr [r9], xmm4
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm1, xmm2
    vaddss  xmm4, xmm3, dword ptr [rcx+4]
    vmovss  dword ptr [r9+4], xmm4
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm1, xmm2
    vaddss  xmm3, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [r9+8], xmm3
  }
}

/*
==============
Vec3Mad
==============
*/

void __fastcall Vec3Mad(const vec3_t *start, double scale, const vec3_t *dir, vec3_t *result)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [r8]
    vaddss  xmm2, xmm0, dword ptr [rcx]
    vmovss  dword ptr [r9], xmm2
    vmulss  xmm0, xmm1, dword ptr [r8+4]
    vaddss  xmm2, xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [r9+4], xmm2
    vmulss  xmm0, xmm1, dword ptr [r8+8]
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [r9+8], xmm1
  }
}

/*
==============
Vec3Scale
==============
*/

void __fastcall Vec3Scale(const vec3_t *v, double scale, vec3_t *result)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vmovss  dword ptr [r8], xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [r8+4], xmm2
    vmulss  xmm0, xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [r8+8], xmm0
  }
}

/*
==============
Mat33IsOrthonormal
==============
*/
bool Mat33IsOrthonormal(const tmat33_t<vec3_t> *m)
{
  bool v21; 
  bool v22; 
  bool result; 
  char v92; 
  void *retaddr; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = m;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v94 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v95 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v96 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1593, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[0] )[0] ) && !IS_NAN( ( m[0] )[1] ) && !IS_NAN( ( m[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[0] )[0] ) && !IS_NAN( ( m[0] )[1] ) && !IS_NAN( ( m[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v97 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v98 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v99 & 0x7F800000) == 2139095040 )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1594, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[1] )[0] ) && !IS_NAN( ( m[1] )[1] ) && !IS_NAN( ( m[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[1] )[0] ) && !IS_NAN( ( m[1] )[1] ) && !IS_NAN( ( m[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v100 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  if ( (v101 & 0x7F800000) == 2139095040 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v21 = (v102 & 0x7F800000u) < 0x7F800000;
  if ( (v102 & 0x7F800000) == 2139095040 )
  {
LABEL_29:
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1595, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[2] )[0] ) && !IS_NAN( ( m[2] )[1] ) && !IS_NAN( ( m[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[2] )[0] ) && !IS_NAN( ( m[2] )[1] ) && !IS_NAN( ( m[2] )[2] )");
    v21 = 0;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+8]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+0C8h+var_48], xmm9
    vmovaps [rsp+0C8h+var_58], xmm10
    vmovaps [rsp+0C8h+var_68], xmm11
    vmovaps [rsp+0C8h+var_78], xmm12
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0C8h+var_88], xmm13
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm8
    vmovss  xmm3, cs:__real@3b03126f
    vandps  xmm0, xmm0, xmm4
    vcomiss xmm0, xmm3
    vmovaps [rsp+0C8h+var_98], xmm14
  }
  if ( !v21 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+10h]
    vmovss  xmm10, dword ptr [rbx+0Ch]
    vmovss  xmm11, dword ptr [rbx+14h]
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm8
    vandps  xmm0, xmm0, xmm4
    vcomiss xmm0, xmm3
  }
  if ( !v21 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+1Ch]
    vmovss  xmm13, dword ptr [rbx+18h]
    vmovss  xmm14, dword ptr [rbx+20h]
    vmulss  xmm1, xmm13, xmm13
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm14
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm8
    vandps  xmm0, xmm0, xmm4
    vcomiss xmm0, xmm3
  }
  if ( !v21 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm8, cs:__real@3a83126f
    vmulss  xmm1, xmm6, xmm10
    vmulss  xmm0, xmm5, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm11
    vaddss  xmm3, xmm2, xmm1
    vandps  xmm3, xmm3, xmm4
    vcomiss xmm3, xmm8
  }
  if ( !v21 )
    goto LABEL_23;
  __asm
  {
    vmulss  xmm1, xmm6, xmm13
    vmulss  xmm0, xmm5, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm14
    vaddss  xmm3, xmm2, xmm1
    vandps  xmm3, xmm3, xmm4
    vcomiss xmm3, xmm8
  }
  if ( !v21 )
    goto LABEL_23;
  __asm
  {
    vmulss  xmm1, xmm13, xmm10
    vmulss  xmm0, xmm12, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm11
    vaddss  xmm3, xmm2, xmm1
    vandps  xmm3, xmm3, xmm4
    vcomiss xmm3, xmm8
  }
  if ( v21 )
    result = 1;
  else
LABEL_23:
    result = 0;
  __asm { vmovaps xmm14, [rsp+0C8h+var_98] }
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmovaps xmm12, [rsp+0C8h+var_78]
    vmovaps xmm11, [rsp+0C8h+var_68]
    vmovaps xmm10, [rsp+0C8h+var_58]
    vmovaps xmm9, [rsp+0C8h+var_48]
  }
  return result;
}

/*
==============
Vec3Rotate
==============
*/
void Vec3Rotate(const vec3_t *in, const tmat33_t<vec3_t> *matrix, vec3_t *out)
{
  _RBX = out;
  _RDI = in;
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi]
    vmulss  xmm1, xmm4, dword ptr [rsi+4]
    vmulss  xmm0, xmm3, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rdi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsi+8]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rsi+0Ch]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm4, dword ptr [rsi+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsi+14h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rsi+18h]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm4, dword ptr [rsi+1Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsi+20h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
Vec2Rotate
==============
*/

void __fastcall Vec2Rotate(const vec2_t *in, double radians, vec2_t *out)
{
  float c; 
  float s; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = out;
  _RDI = in;
  __asm { vmovaps xmm6, xmm1 }
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 887, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi]
    vmovss  xmm4, dword ptr [rdi+4]
    vmulss  xmm1, xmm5, [rsp+48h+c]
    vmulss  xmm0, xmm4, [rsp+48h+s]
    vmulss  xmm2, xmm4, [rsp+48h+c]
    vmovaps xmm6, [rsp+48h+var_18]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, [rsp+48h+s]
    vmovss  dword ptr [rbx], xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
}

/*
==============
I_rsqrt
==============
*/

float __fastcall I_rsqrt(double val, double _XMM1_8)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vrsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec3NormalizeFast
==============
*/
void Vec3NormalizeFast(vec3_t *v)
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
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = v;
  __asm
  {
    vaddss  xmm6, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovaps xmm1, xmm6
    vrsqrtss xmm2, xmm1, xmm6
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
I_tclamp<short>
==============
*/
__int64 I_tclamp<short>(__int16 val, __int16 min, __int16 max)
{
  if ( min > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 773, ASSERT_TYPE_SANITY, "( min <= max )", (const char *)&queryFormat, "min <= max") )
    __debugbreak();
  if ( max < val )
    val = max;
  if ( min > val )
    return (unsigned __int16)min;
  return (unsigned __int16)val;
}

/*
==============
I_fres
==============
*/

float __fastcall I_fres(double val, double _XMM1_8)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
DVec3Cross
==============
*/
void DVec3Cross(const dvec3_t *v0, const dvec3_t *v1, dvec3_t *cross)
{
  _RBX = cross;
  _RDI = v1;
  _RSI = v0;
  if ( v0 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1677, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1678, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmulsd  xmm2, xmm1, qword ptr [rdi+8]
    vmovsd  xmm0, qword ptr [rdi+10h]
    vmulsd  xmm3, xmm0, qword ptr [rsi+8]
    vsubsd  xmm0, xmm3, xmm2
    vmovsd  qword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmovsd  xmm0, qword ptr [rsi]
    vmulsd  xmm2, xmm0, qword ptr [rdi+10h]
    vmulsd  xmm3, xmm1, qword ptr [rdi]
    vsubsd  xmm1, xmm3, xmm2
    vmovsd  qword ptr [rbx+8], xmm1
    vmovsd  xmm0, qword ptr [rsi]
    vmovsd  xmm1, qword ptr [rdi]
    vmulsd  xmm2, xmm1, qword ptr [rsi+8]
    vmulsd  xmm3, xmm0, qword ptr [rdi+8]
    vsubsd  xmm0, xmm3, xmm2
    vmovsd  qword ptr [rbx+10h], xmm0
  }
}

