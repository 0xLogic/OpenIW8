/*
==============
Vec3AngleNormalize180
==============
*/

void __fastcall Vec3AngleNormalize180(vec3_t *angles)
{
  ?Vec3AngleNormalize180@@YAXAEATvec3_t@@@Z(angles);
}

/*
==============
I_power2Ceil
==============
*/

unsigned int __fastcall I_power2Ceil(unsigned int value)
{
  return ?I_power2Ceil@@YAII@Z(value);
}

/*
==============
AlignUp<unsigned __int64>
==============
*/

unsigned __int64 __fastcall AlignUp<unsigned __int64>(unsigned __int64 value, unsigned __int64 align)
{
  return ??$AlignUp@_K@@YA_K_K0@Z(value, align);
}

/*
==============
ModuloWrap<int>
==============
*/

int __fastcall ModuloWrap<int>(int val, int divisor)
{
  return ??$ModuloWrap@H@@YAHHH@Z(val, divisor);
}

/*
==============
I_log2Floor
==============
*/

unsigned int __fastcall I_log2Floor(unsigned int value)
{
  return ?I_log2Floor@@YAII@Z(value);
}

/*
==============
MatrixTransformPosition44
==============
*/

void __fastcall MatrixTransformPosition44(const vec3_t *in1, const tmat44_t<vec4_t> *in2, vec3_t *out)
{
  ?MatrixTransformPosition44@@YAXAEBTvec3_t@@AEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
LOG2<int>
==============
*/

int __fastcall LOG2<int>(const int n)
{
  return ??$LOG2@H@@YAHH@Z(n);
}

/*
==============
CopyVec3ToPreciseVec3
==============
*/

void __fastcall CopyVec3ToPreciseVec3(const vec3_t *src, base_vec3_t<int> *dst, const unsigned __int8 fractionalBitCount)
{
  ?CopyVec3ToPreciseVec3@@YAXAEBTvec3_t@@AEAT?$base_vec3_t@H@@E@Z(src, dst, fractionalBitCount);
}

/*
==============
MatrixTransposeTransformVector
==============
*/

void __fastcall MatrixTransposeTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  ?MatrixTransposeTransformVector@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
QuantizeRange01ToByte
==============
*/

unsigned __int8 __fastcall QuantizeRange01ToByte(const float value)
{
  return ?QuantizeRange01ToByte@@YAEM@Z(value);
}

/*
==============
Int32_RoundUpToPowerOf2
==============
*/

unsigned int __fastcall Int32_RoundUpToPowerOf2(unsigned int x)
{
  return ?Int32_RoundUpToPowerOf2@@YAII@Z(x);
}

/*
==============
PreciseCoordFromFloat
==============
*/

int __fastcall PreciseCoordFromFloat(const float f, const unsigned __int8 fractionalBitCount)
{
  return ?PreciseCoordFromFloat@@YAHME@Z(f, fractionalBitCount);
}

/*
==============
AlignUp<int>
==============
*/

int __fastcall AlignUp<int>(int value, unsigned __int64 align)
{
  return ??$AlignUp@H@@YAHH_K@Z(value, align);
}

/*
==============
I_snap
==============
*/

double __fastcall I_snap(float f, float step)
{
  double result; 

  *(float *)&result = ?I_snap@@YAMMM@Z(f, step);
  return result;
}

/*
==============
ModuloLerp<int>
==============
*/

int __fastcall ModuloLerp<int>(int startVal, int endVal, int divisor, bool isDecreasing, float fraction)
{
  return ??$ModuloLerp@H@@YAHHHH_NM@Z(startVal, endVal, divisor, isDecreasing, fraction);
}

/*
==============
FastSinBetweenMinusPiAndPi
==============
*/

double __fastcall FastSinBetweenMinusPiAndPi(float radians)
{
  double result; 

  *(float *)&result = ?FastSinBetweenMinusPiAndPi@@YAMM@Z(radians);
  return result;
}

/*
==============
I_log2Ceil
==============
*/

unsigned int __fastcall I_log2Ceil(unsigned int value)
{
  return ?I_log2Ceil@@YAII@Z(value);
}

/*
==============
ExponentialMovingAverage
==============
*/

double __fastcall ExponentialMovingAverage(float average, float newSample, float sampleCount)
{
  double result; 

  *(float *)&result = ?ExponentialMovingAverage@@YAMMMM@Z(average, newSample, sampleCount);
  return result;
}

/*
==============
Vec3AngleNormalize180
==============
*/
void Vec3AngleNormalize180(vec3_t *angles)
{
  float v3; 
  float v5; 
  float v6; 

  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v3 = angles->v[1] * 0.0027777778;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  angles->v[0] = (float)((float)(angles->v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v5 = (float)(v3 - *(float *)&_XMM3) * 360.0;
  v6 = angles->v[2] * 0.0027777778;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  angles->v[1] = v5;
  angles->v[2] = (float)(v6 - *(float *)&_XMM3) * 360.0;
}

/*
==============
I_snap
==============
*/
float I_snap(float f, float step)
{
  if ( step == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 425, ASSERT_TYPE_ASSERT, "(step != 0.0f)", (const char *)&queryFormat, "step != 0.0f") )
    __debugbreak();
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  return *(float *)&_XMM2 * step;
}

/*
==============
I_power2Ceil
==============
*/
__int64 I_power2Ceil(unsigned int value)
{
  if ( value > 0x80000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 227, ASSERT_TYPE_ASSERT, "(value <= 0x80000000u)", (const char *)&queryFormat, "value <= 0x80000000u") )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  return (unsigned int)(1 << (32 - __lzcnt(value - 1)));
}

/*
==============
LOG2<int>
==============
*/
__int64 LOG2<int>(const int n)
{
  if ( n >= 2 )
    return (unsigned int)(LOG2<int>(n / 2) + 1);
  else
    return 1i64;
}

/*
==============
AlignUp<unsigned __int64>
==============
*/
unsigned __int64 AlignUp<unsigned __int64>(unsigned __int64 value, unsigned __int64 align)
{
  unsigned __int64 v2; 

  v2 = align - 1;
  if ( (!align || (v2 & align) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  return ~v2 & (value + align - 1);
}

/*
==============
ModuloLerp<int>
==============
*/
__int64 ModuloLerp<int>(int startVal, int endVal, int divisor, bool isDecreasing, float fraction)
{
  int v9; 

  if ( startVal >= divisor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 580, ASSERT_TYPE_ASSERT, "(startVal < divisor)", (const char *)&queryFormat, "startVal < divisor") )
    __debugbreak();
  if ( endVal >= divisor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 581, ASSERT_TYPE_ASSERT, "(endVal < divisor)", (const char *)&queryFormat, "endVal < divisor") )
    __debugbreak();
  if ( isDecreasing )
  {
    if ( endVal > startVal )
      endVal -= divisor;
  }
  else if ( endVal < startVal )
  {
    endVal += divisor;
  }
  v9 = (int)(float)((float)(endVal - startVal) * fraction);
  if ( divisor <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 572, ASSERT_TYPE_ASSERT, "(divisor > 0)", (const char *)&queryFormat, "divisor > 0") )
    __debugbreak();
  return (unsigned int)((divisor + (v9 + startVal) % divisor) % divisor);
}

/*
==============
ModuloWrap<int>
==============
*/
__int64 ModuloWrap<int>(int val, int divisor)
{
  if ( divisor <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 572, ASSERT_TYPE_ASSERT, "(divisor > 0)", (const char *)&queryFormat, "divisor > 0") )
    __debugbreak();
  return (unsigned int)((divisor + val % divisor) % divisor);
}

/*
==============
I_log2Ceil
==============
*/
__int64 I_log2Ceil(unsigned int value)
{
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  return 32 - __lzcnt(value - 1);
}

/*
==============
QuantizeRange01ToByte
==============
*/

__int64 __fastcall QuantizeRange01ToByte(const float value, __int64 a2, double _XMM2_8)
{
  __int64 result; 

  if ( value < 0.0 || value > 1.0 )
  {
    __asm { vxorpd  xmm2, xmm2, xmm2 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", value, *(double *)&_XMM2, DOUBLE_1_0) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  result = (unsigned __int8)(int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    return 255i64;
  return result;
}

/*
==============
FastSinBetweenMinusPiAndPi
==============
*/
float FastSinBetweenMinusPiAndPi(float radians)
{
  if ( (radians < -3.1415927 || radians > 3.1415927) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 789, ASSERT_TYPE_ASSERT, "(radians >= -M_PI_F && radians <= M_PI_F)", (const char *)&queryFormat, "radians >= -M_PI_F && radians <= M_PI_F") )
    __debugbreak();
  return (float)(radians * 1.2732395) - (float)(COERCE_FLOAT(LODWORD(radians) & _xmm) * (float)(radians * 0.4052847));
}

/*
==============
ExponentialMovingAverage
==============
*/
float ExponentialMovingAverage(float average, float newSample, float sampleCount)
{
  if ( sampleCount > 1.0 )
    return (float)(average - (float)((float)(1.0 / sampleCount) * average)) + (float)((float)(1.0 / sampleCount) * newSample);
  else
    return newSample;
}

/*
==============
MatrixTransposeTransformVector
==============
*/
void MatrixTransposeTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)(in2->m[0].v[1] * in1->v[1]) + (float)(in1->v[0] * in2->m[0].v[0])) + (float)(in2->m[0].v[2] * in1->v[2]);
  out->v[1] = (float)((float)(in2->m[1].v[0] * in1->v[0]) + (float)(in2->m[1].v[1] * in1->v[1])) + (float)(in2->m[1].v[2] * in1->v[2]);
  out->v[2] = (float)((float)(in2->m[2].v[0] * in1->v[0]) + (float)(in2->m[2].v[1] * in1->v[1])) + (float)(in2->m[2].v[2] * in1->v[2]);
}

/*
==============
Int32_RoundUpToPowerOf2
==============
*/
__int64 Int32_RoundUpToPowerOf2(unsigned int x)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v6; 

  if ( x > 0x80000000 )
  {
    v6 = 0x80000000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 753, ASSERT_TYPE_ASSERT, "( x ) <= ( 0x80000000u )", "x not in [0, 0x80000000u]\n\t%u not in [0, %u]", x, v6) )
      __debugbreak();
  }
  v2 = ((((x - 1) >> 1) | (x - 1)) >> 2) | ((x - 1) >> 1) | (x - 1);
  v3 = (((v2 >> 4) | v2) >> 8) | (v2 >> 4) | v2;
  return (v3 | HIWORD(v3)) + 1;
}

/*
==============
MatrixTransformPosition44
==============
*/
void MatrixTransformPosition44(const vec3_t *in1, const tmat44_t<vec4_t> *in2, vec3_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1093, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)((float)(in2->m[1].v[0] * in1->v[1]) + (float)(in1->v[0] * in2->m[0].v[0])) + (float)(in2->m[2].v[0] * in1->v[2])) + in2->m[3].v[0];
  out->v[1] = (float)((float)((float)(in2->m[0].v[1] * in1->v[0]) + (float)(in2->m[1].v[1] * in1->v[1])) + (float)(in2->m[2].v[1] * in1->v[2])) + in2->m[3].v[1];
  out->v[2] = (float)((float)((float)(in2->m[0].v[2] * in1->v[0]) + (float)(in2->m[1].v[2] * in1->v[1])) + (float)(in2->m[2].v[2] * in1->v[2])) + in2->m[3].v[2];
}

/*
==============
CopyVec3ToPreciseVec3
==============
*/
void CopyVec3ToPreciseVec3(const vec3_t *src, base_vec3_t<int> *dst, const unsigned __int8 fractionalBitCount)
{
  dst->v[0] = PreciseCoordFromFloat(src->v[0], fractionalBitCount);
  dst->v[1] = PreciseCoordFromFloat(src->v[1], fractionalBitCount);
  dst->v[2] = PreciseCoordFromFloat(src->v[2], fractionalBitCount);
}

/*
==============
PreciseCoordFromFloat
==============
*/
int PreciseCoordFromFloat(const float f, const unsigned __int8 fractionalBitCount)
{
  __int128 v5; 
  int result; 

  if ( fractionalBitCount >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1430, ASSERT_TYPE_ASSERT, "(fractionalBitCount < 32)", (const char *)&queryFormat, "fractionalBitCount < 32") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, eax }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v5 = *(double *)&_XMM1 * f;
  _XMM1 = v5;
  __asm { vcvttsd2si eax, xmm1 }
  return result;
}

/*
==============
AlignUp<int>
==============
*/
__int64 AlignUp<int>(int value, unsigned __int64 align)
{
  unsigned __int64 v2; 
  int v3; 

  v2 = align - 1;
  v3 = align;
  if ( (!align || (v2 & align) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  return ~(_DWORD)v2 & (unsigned int)(value + v3 - 1);
}

/*
==============
I_log2Floor
==============
*/
__int64 I_log2Floor(unsigned int value)
{
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  return 31 - __lzcnt(value);
}

