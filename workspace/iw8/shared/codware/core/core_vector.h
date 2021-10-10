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
  __int128 v2; 

  v2 = LODWORD(v->v[0]);
  *(float *)&v2 = (float)(v->v[0] * v->v[0]) + (float)(v->v[1] * v->v[1]);
  if ( *(float *)&v2 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  _XMM1 = v2;
  __asm { vrsqrtss xmm2, xmm1, xmm6 }
  v->v[0] = *(float *)&_XMM2 * v->v[0];
  v->v[1] = *(float *)&_XMM2 * v->v[1];
}

/*
==============
I_fclamp
==============
*/

float __fastcall I_fclamp(double val, float min, float max)
{
  _XMM8 = *(_OWORD *)&val;
  if ( min > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", min, max) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm8, xmm7
    vminss  xmm0, xmm0, xmm6
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
  if ( v0 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v1 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  cross->v[0] = (float)(v1->v[2] * v0->v[1]) - (float)(v0->v[2] * v1->v[1]);
  cross->v[1] = (float)(v0->v[2] * v1->v[0]) - (float)(v0->v[0] * v1->v[2]);
  cross->v[2] = (float)(v0->v[0] * v1->v[1]) - (float)(v1->v[0] * v0->v[1]);
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
  __int128 v1; 
  __int128 v2; 

  v1 = LODWORD(v->v[0]);
  v2 = v1;
  *(float *)&v2 = fsqrt((float)((float)(*(float *)&v1 * *(float *)&v1) + (float)(v->v[1] * v->v[1])) + (float)(v->v[2] * v->v[2]));
  _XMM0 = v2;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  v->v[0] = *(float *)&v1 * (float)(1.0 / *(float *)&_XMM1);
  v->v[1] = (float)(1.0 / *(float *)&_XMM1) * v->v[1];
  v->v[2] = (float)(1.0 / *(float *)&_XMM1) * v->v[2];
  return *(float *)&_XMM0;
}

/*
==============
I_fdistnormalized
==============
*/
float I_fdistnormalized(float min, float max, float dist)
{
  if ( min > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 826, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", min, max) )
    __debugbreak();
  if ( dist < min && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 827, ASSERT_TYPE_SANITY, "( dist ) >= ( min )", "dist >= min\n\t%g, %g", dist, min) )
    __debugbreak();
  if ( dist > max && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 828, ASSERT_TYPE_SANITY, "( dist ) <= ( max )", "dist <= max\n\t%g, %g", dist, max) )
    __debugbreak();
  if ( (float)(max - min) > 0.000001 )
    return (float)(dist - min) / (float)(max - min);
  else
    return 0.0;
}

/*
==============
Vec4Normalize
==============
*/
float Vec4Normalize(vec4_t *v)
{
  float v1; 
  float v2; 
  float result; 
  float v4; 

  v1 = v->v[0];
  v2 = v->v[3];
  v4 = fsqrt((float)((float)((float)(v1 * v1) + (float)(v->v[1] * v->v[1])) + (float)(v->v[2] * v->v[2])) + (float)(v2 * v2));
  result = v4;
  if ( v4 != 0.0 )
  {
    v->v[0] = v1 * (float)(1.0 / v4);
    v->v[1] = (float)(1.0 / v4) * v->v[1];
    v->v[2] = (float)(1.0 / v4) * v->v[2];
    v->v[3] = (float)(1.0 / v4) * v2;
  }
  return result;
}

/*
==============
IS_NAN
==============
*/
bool IS_NAN(float x)
{
  return (LODWORD(x) & 0x7F800000) == 2139095040;
}

/*
==============
I_flerp
==============
*/
float I_flerp(float a, float b, float w)
{
  return (float)((float)(1.0 - w) * a) + (float)(b * w);
}

/*
==============
Vec3Add
==============
*/
void Vec3Add(const vec3_t *a, const vec3_t *b, vec3_t *sum)
{
  sum->v[0] = a->v[0] + b->v[0];
  sum->v[1] = a->v[1] + b->v[1];
  sum->v[2] = a->v[2] + b->v[2];
}

/*
==============
Vec3Dot
==============
*/
float Vec3Dot(const vec3_t *a, const vec3_t *b)
{
  return (float)((float)(a->v[1] * b->v[1]) + (float)(a->v[0] * b->v[0])) + (float)(a->v[2] * b->v[2]);
}

/*
==============
Vec3Length
==============
*/
float Vec3Length(const vec3_t *v)
{
  return fsqrt((float)((float)(v->v[0] * v->v[0]) + (float)(v->v[1] * v->v[1])) + (float)(v->v[2] * v->v[2]));
}

/*
==============
Vec3Lerp
==============
*/
void Vec3Lerp(const vec3_t *from, const vec3_t *to, float frac, vec3_t *result)
{
  result->v[0] = (float)((float)(to->v[0] - from->v[0]) * frac) + from->v[0];
  result->v[1] = (float)((float)(to->v[1] - from->v[1]) * frac) + from->v[1];
  result->v[2] = (float)((float)(to->v[2] - from->v[2]) * frac) + from->v[2];
}

/*
==============
Vec3Mad
==============
*/
void Vec3Mad(const vec3_t *start, float scale, const vec3_t *dir, vec3_t *result)
{
  result->v[0] = (float)(scale * dir->v[0]) + start->v[0];
  result->v[1] = (float)(scale * dir->v[1]) + start->v[1];
  result->v[2] = (float)(scale * dir->v[2]) + start->v[2];
}

/*
==============
Vec3Scale
==============
*/
void Vec3Scale(const vec3_t *v, float scale, vec3_t *result)
{
  result->v[0] = scale * v->v[0];
  result->v[1] = scale * v->v[1];
  result->v[2] = scale * v->v[2];
}

/*
==============
Mat33IsOrthonormal
==============
*/
bool Mat33IsOrthonormal(const tmat33_t<vec3_t> *m)
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
  bool result; 

  if ( ((LODWORD(m->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1593, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[0] )[0] ) && !IS_NAN( ( m[0] )[1] ) && !IS_NAN( ( m[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[0] )[0] ) && !IS_NAN( ( m[0] )[1] ) && !IS_NAN( ( m[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(m->m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1594, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[1] )[0] ) && !IS_NAN( ( m[1] )[1] ) && !IS_NAN( ( m[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[1] )[0] ) && !IS_NAN( ( m[1] )[1] ) && !IS_NAN( ( m[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(m->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(m->m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1595, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m[2] )[0] ) && !IS_NAN( ( m[2] )[1] ) && !IS_NAN( ( m[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m[2] )[0] ) && !IS_NAN( ( m[2] )[1] ) && !IS_NAN( ( m[2] )[2] )") )
    __debugbreak();
  v2 = m->m[0].v[1];
  v3 = m->m[0].v[0];
  v4 = m->m[0].v[2];
  result = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) - 1.0) & _xmm) < 0.0020000001 )
  {
    v5 = m->m[1].v[1];
    v6 = m->m[1].v[0];
    v7 = m->m[1].v[2];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) - 1.0) & _xmm) < 0.0020000001 )
    {
      v8 = m->m[2].v[1];
      v9 = m->m[2].v[0];
      v10 = m->m[2].v[2];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10)) - 1.0) & _xmm) < 0.0020000001 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v3 * v6) + (float)(v2 * v5)) + (float)(v4 * v7)) & _xmm) < 0.001 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v3 * v9) + (float)(v2 * v8)) + (float)(v4 * v10)) & _xmm) < 0.001 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * v6) + (float)(v8 * v5)) + (float)(v10 * v7)) & _xmm) < 0.001 )
        return 1;
    }
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
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  v6 = in->v[1];
  v7 = in->v[0];
  v8 = in->v[2];
  v9 = in->v[0] * matrix->m[1].v[0];
  out->v[0] = (float)((float)(v6 * matrix->m[0].v[1]) + (float)(in->v[0] * matrix->m[0].v[0])) + (float)(v8 * matrix->m[0].v[2]);
  v10 = v7 * matrix->m[2].v[0];
  out->v[1] = (float)(v9 + (float)(v6 * matrix->m[1].v[1])) + (float)(v8 * matrix->m[1].v[2]);
  out->v[2] = (float)(v10 + (float)(v6 * matrix->m[2].v[1])) + (float)(v8 * matrix->m[2].v[2]);
}

/*
==============
Vec2Rotate
==============
*/
void Vec2Rotate(const vec2_t *in, float radians, vec2_t *out)
{
  float v5; 
  float v6; 
  float v7; 
  float c; 
  float s; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 887, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  FastSinCos(radians, &s, &c);
  v5 = in->v[1];
  v6 = v5 * c;
  v7 = in->v[0] * s;
  out->v[0] = (float)(in->v[0] * c) - (float)(v5 * s);
  out->v[1] = v6 + v7;
}

/*
==============
I_rsqrt
==============
*/
float I_rsqrt(float val)
{
  __int128 v2; 

  if ( val <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  v2 = 0i64;
  *(float *)&v2 = val;
  _XMM2 = v2;
  __asm { vrsqrtss xmm0, xmm2, xmm2 }
  return *(float *)&_XMM0;
}

/*
==============
Vec3NormalizeFast
==============
*/
void Vec3NormalizeFast(vec3_t *v)
{
  __int128 v2; 

  v2 = LODWORD(v->v[0]);
  *(float *)&v2 = (float)((float)(v->v[0] * v->v[0]) + (float)(v->v[1] * v->v[1])) + (float)(v->v[2] * v->v[2]);
  if ( *(float *)&v2 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  _XMM1 = v2;
  __asm { vrsqrtss xmm2, xmm1, xmm6 }
  v->v[0] = *(float *)&_XMM2 * v->v[0];
  v->v[1] = *(float *)&_XMM2 * v->v[1];
  v->v[2] = *(float *)&_XMM2 * v->v[2];
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
float I_fres(float val)
{
  if ( val == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  return 1.0 / val;
}

/*
==============
DVec3Cross
==============
*/
void DVec3Cross(const dvec3_t *v0, const dvec3_t *v1, dvec3_t *cross)
{
  if ( v0 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1677, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v1 == cross && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1678, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  cross->x = v1->z * v0->y - v0->z * v1->y;
  cross->y = v0->z * v1->x - v0->x * v1->z;
  cross->z = v0->x * v1->y - v1->x * v0->y;
}

