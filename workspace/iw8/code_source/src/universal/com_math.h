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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vmovss  xmm5, cs:__real@43b40000
    vmovaps [rsp+18h+var_18], xmm8
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm2, xmm8, xmm1, 1
    vmovss  xmm1, dword ptr [rcx+4]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vmulss  xmm0, xmm0, xmm5
    vroundss xmm3, xmm8, xmm2, 1
    vmovss  dword ptr [rcx], xmm0
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm8, xmm2, 1
    vmovaps xmm8, [rsp+18h+var_18]
    vmovss  dword ptr [rcx+4], xmm1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [rcx+8], xmm0
  }
}

/*
==============
I_snap
==============
*/

float __fastcall I_snap(double f, double step, double _XMM2_8)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorps  xmm2, xmm2, xmm2
    vucomiss xmm1, xmm2
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
    vdivss  xmm0, xmm7, xmm6
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vmovaps xmm7, [rsp+58h+var_28]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
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
__int64 ModuloLerp<int>(int startVal, int endVal, int divisor, bool isDecreasing)
{
  if ( startVal >= divisor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 580, ASSERT_TYPE_ASSERT, "(startVal < divisor)", (const char *)&queryFormat, "startVal < divisor") )
    __debugbreak();
  if ( endVal >= divisor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 581, ASSERT_TYPE_ASSERT, "(endVal < divisor)", (const char *)&queryFormat, "endVal < divisor") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, [rsp+38h+fraction]
    vcvttss2si ebx, xmm1
  }
  if ( divisor <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 572, ASSERT_TYPE_ASSERT, "(divisor > 0)", (const char *)&queryFormat, "divisor > 0") )
    __debugbreak();
  return (unsigned int)((divisor + (_EBX + startVal) % divisor) % divisor);
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

__int64 __fastcall QuantizeRange01ToByte(double value, double _XMM1_8, double _XMM2_8)
{
  __int64 result; 
  double v15; 
  double v16; 
  double v17; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vmovsd  xmm1, cs:__real@3ff0000000000000
    vmovsd  [rsp+58h+var_20], xmm1
    vxorpd  xmm2, xmm2, xmm2
    vmovsd  [rsp+58h+var_28], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+58h+var_30], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", v15, v16, v17) )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@43800000
    vmovaps xmm6, [rsp+58h+var_18]
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vcvttss2si ecx, xmm1
  }
  result = (unsigned __int8)_ECX;
  if ( _ECX > 255 )
    return 255i64;
  return result;
}

/*
==============
FastSinBetweenMinusPiAndPi
==============
*/

float __fastcall FastSinBetweenMinusPiAndPi(double radians)
{
  __asm
  {
    vcomiss xmm0, cs:__real@c0490fdb
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@40490fdb
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 789, ASSERT_TYPE_ASSERT, "(radians >= -M_PI_F && radians <= M_PI_F)", (const char *)&queryFormat, "radians >= -M_PI_F && radians <= M_PI_F") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3ecf817a
    vandps  xmm1, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm2, xmm6, cs:__real@3fa2f983
    vmovaps xmm6, [rsp+48h+var_18]
    vmulss  xmm1, xmm1, xmm0
    vsubss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
ExponentialMovingAverage
==============
*/

float __fastcall ExponentialMovingAverage(double average, double newSample, double sampleCount)
{
  char v3; 
  char v4; 

  __asm
  {
    vmovaps xmm3, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcomiss xmm2, xmm1
    vmovaps xmm4, xmm0
  }
  if ( v3 | v4 )
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  else
  {
    __asm
    {
      vdivss  xmm1, xmm1, xmm2
      vmulss  xmm0, xmm1, xmm4
      vsubss  xmm2, xmm4, xmm0
      vmulss  xmm1, xmm1, xmm3
      vaddss  xmm0, xmm2, xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
MatrixTransposeTransformVector
==============
*/
void MatrixTransposeTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  _RDI = out;
  _RSI = in2;
  _RBX = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsi+10h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  xmm1, dword ptr [rsi+1Ch]
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
  _RSI = out;
  _RDI = in2;
  _RBX = in1;
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1093, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+30h]
    vmovss  dword ptr [rsi], xmm3
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+14h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+24h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+34h]
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm4, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+38h]
    vmovss  dword ptr [rsi+8], xmm3
  }
}

/*
==============
CopyVec3ToPreciseVec3
==============
*/
void CopyVec3ToPreciseVec3(const vec3_t *src, base_vec3_t<int> *dst, const unsigned __int8 fractionalBitCount)
{
  __asm { vmovss  xmm0, dword ptr [rcx]; f }
  _RBX = src;
  dst->v[0] = PreciseCoordFromFloat(*(const float *)&_XMM0, fractionalBitCount);
  __asm { vmovss  xmm0, dword ptr [rbx+4]; f }
  dst->v[1] = PreciseCoordFromFloat(*(const float *)&_XMM0, fractionalBitCount);
  __asm { vmovss  xmm0, dword ptr [rbx+8]; f }
  dst->v[2] = PreciseCoordFromFloat(*(const float *)&_XMM0, fractionalBitCount);
}

/*
==============
PreciseCoordFromFloat
==============
*/

int __fastcall PreciseCoordFromFloat(double f, const unsigned __int8 fractionalBitCount)
{
  int result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( fractionalBitCount >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1430, ASSERT_TYPE_ASSERT, "(fractionalBitCount < 32)", (const char *)&queryFormat, "fractionalBitCount < 32") )
    __debugbreak();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtss2sd xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vcvtsi2sd xmm1, xmm1, eax
    vmulsd  xmm1, xmm1, xmm0
    vcvttsd2si eax, xmm1
  }
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

