/*
==============
Float4PointLineSegmentDistSq
==============
*/

double __fastcall Float4PointLineSegmentDistSq(const float4 *lineSegPointA, const float4 *lineSegPointB, const float4 *point, float4 *outSegClosestFraction)
{
  double result; 

  *(float *)&result = ?Float4PointLineSegmentDistSq@@YAMAEBUfloat4@@00AEAU1@@Z(lineSegPointA, lineSegPointB, point, outSegClosestFraction);
  return result;
}

/*
==============
Float4IntegrateDampedSpring
==============
*/

void __fastcall Float4IntegrateDampedSpring(const float4 *timestepSec, const float4 *mass, const float4 *springConstant, const float4 *damperConstant, const float4 *anchorPos, const float4 *anchorVelocity, float4 *inOutMassPos, float4 *inOutMassVelocity)
{
  ?Float4IntegrateDampedSpring@@YAXAEBUfloat4@@00000AEAU1@1@Z(timestepSec, mass, springConstant, damperConstant, anchorPos, anchorVelocity, inOutMassPos, inOutMassVelocity);
}

/*
==============
Float3x3Inverse
==============
*/

void __fastcall Float3x3Inverse(const vector3 *in, vector3 *out)
{
  ?Float3x3Inverse@@YAXAEBUvector3@@AEAU1@@Z(in, out);
}

/*
==============
Float4PackNegUnitVec
==============
*/

PackedUnitVec __fastcall Float4PackNegUnitVec(const vec3_t *in)
{
  return ?Float4PackNegUnitVec@@YA?AUPackedUnitVec@@AEBTvec3_t@@@Z(in);
}

/*
==============
Float4PointLineSegmentDistSq
==============
*/
float Float4PointLineSegmentDistSq(const float4 *lineSegPointA, const float4 *lineSegPointB, const float4 *point, float4 *outSegClosestFraction)
{
  int v27; 
  char v47; 
  __int64 v57; 
  double v58; 
  double v59; 
  int v60; 
  float4 v61; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovups xmm0, xmmword ptr [rdx]
    vsubps  xmm1, xmm0, xmmword ptr [rcx]
    vmulps  xmm7, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
    vmovups xmm0, xmmword ptr [r8]
    vaddps  xmm9, xmm7, xmmword ptr [rcx]
    vmulps  xmm1, xmm7, xmm7
    vsubps  xmm2, xmm0, xmm9
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm3, xmm0, xmm0
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm3, xmm8
  }
  _RSI = outSegClosestFraction;
  _RDI = point;
  if ( (unsigned __int64)&v57 == _security_cookie )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vsubps  xmm1, xmm0, xmmword ptr [r8]
      vmulps  xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm6, xmm0, xmm0
      vcomiss xmm6, xmm8
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [r9], xmm0
      vmovss  [rsp+0C8h+var_78], xmm6
    }
    if ( (v60 & 0x7F800000) != 2139095040 )
      goto LABEL_14;
    v27 = 398;
    goto LABEL_12;
  }
  __asm
  {
    vmulps  xmm0, xmm7, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vdivps  xmm6, xmm2, xmm3
    vcmpneqps xmm0, xmm6, xmm6
    vmovmskps eax, xmm0
    vmovups [rsp+0C8h+var_68], xmm6
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 407, ASSERT_TYPE_SANITY, "( !Float4IsNaN( segHalfDirClosestFraction ) )", (const char *)&queryFormat, "!Float4IsNaN( segHalfDirClosestFraction )") )
    __debugbreak();
  __asm
  {
    vmovups xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm1, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vmovups xmm0, xmm6
  }
  Float4Clamp(lineSegPointA, lineSegPointB, point, &v61);
  __asm
  {
    vmovups xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmulps  xmm0, xmm1, [rsp+0C8h+var_68]
    vaddps  xmm1, xmm0, xmm1
    vmulps  xmm0, xmm7, [rsp+0C8h+var_68]
    vmovups xmmword ptr [rsi], xmm1
    vmovups xmm2, xmmword ptr [rdi]
    vaddps  xmm1, xmm0, xmm9
    vsubps  xmm2, xmm2, xmm1
    vmulps  xmm0, xmm2, xmm2
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
    vcomiss xmm6, xmm8
  }
  if ( v47 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_88], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0C8h+var_90], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 423, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distSquaredFloat )", "%s <= %s\n\t%g, %g", "0.0f", "distSquaredFloat", v58, v59) )
      __debugbreak();
  }
  __asm { vmovss  [rsp+0C8h+var_78], xmm6 }
  if ( (v60 & 0x7F800000) == 2139095040 )
  {
    v27 = 424;
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", v27, ASSERT_TYPE_SANITY, "( !IS_NAN( distSquaredFloat ) )", (const char *)&queryFormat, "!IS_NAN( distSquaredFloat )") )
      __debugbreak();
  }
LABEL_14:
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
Float3x3Inverse
==============
*/
void Float3x3Inverse(const vector3 *in, vector3 *out)
{
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
    vmovups xmm0, xmmword ptr [rcx]
    vshufps xmm11, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm10, xmm0, xmm0, 0D2h ; 'Ò'
    vmovups xmm0, xmmword ptr [rcx+10h]
    vshufps xmm9, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vmovups xmm0, xmmword ptr [rcx+20h]
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm4, xmm0, xmm0, 0D2h ; 'Ò'
    vmulps  xmm0, xmm8, xmm6
    vmulps  xmm1, xmm9, xmm4
    vsubps  xmm7, xmm1, xmm0
    vmulps  xmm1, xmm7, xmmword ptr [rcx]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
    vrcpps  xmm1, xmm3
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm3
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm5, xmm1, xmm2
    vmulps  xmm3, xmm10, xmm6
    vmulps  xmm0, xmm11, xmm4
    vsubps  xmm4, xmm3, xmm0
    vmulps  xmm0, xmm10, xmm9
    vmulps  xmm7, xmm7, xmm5
    vmulps  xmm6, xmm5, xmm4
    vmulps  xmm1, xmm11, xmm8
    vsubps  xmm2, xmm1, xmm0
    vmulps  xmm5, xmm5, xmm2
    vshufps xmm1, xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 44h ; 'D'; float4 const g_one
    vshufps xmm3, xmm7, xmm6, 44h ; 'D'
    vshufps xmm0, xmm3, xmm1, 88h ; 'ˆ'
    vmovups xmmword ptr [rsp+0A8h+var_A8], xmm0
    vshufps xmm0, xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 0EEh ; 'î'; float4 const g_one
    vshufps xmm1, xmm3, xmm1, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+0A8h+var_A8+10h], xmm1
    vshufps xmm2, xmm7, xmm6, 0EEh ; 'î'
    vshufps xmm1, xmm2, xmm0, 88h ; 'ˆ'
    vmovups ymm0, [rsp+0A8h+var_A8]
    vmovups ymmword ptr [rdx], ymm0
    vmovups xmmword ptr [rdx+20h], xmm1
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
Float4IntegrateDampedSpring
==============
*/
void Float4IntegrateDampedSpring(const float4 *timestepSec, const float4 *mass, const float4 *springConstant, const float4 *damperConstant, const float4 *anchorPos, const float4 *anchorVelocity, float4 *inOutMassPos, float4 *inOutMassVelocity)
{
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RBX = inOutMassPos;
  _R15 = inOutMassVelocity;
  _RSI = damperConstant;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcmpltps xmm0, xmm6, xmmword ptr [rdx]
    vmovmskps eax, xmm0
  }
  _RBP = springConstant;
  _RDI = timestepSec;
  if ( (_EAX & 0xF) != 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 440, ASSERT_TYPE_ASSERT, "(!Float4AnyLe( mass, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLe( mass, g_zero )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vcmpltps xmm0, xmm0, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 441, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( springConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( springConstant, g_zero )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vcmpltps xmm0, xmm0, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 442, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( damperConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( damperConstant, g_zero )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vdivps  xmm7, xmm0, xmmword ptr [r14]
    vmovups xmm0, xmmword ptr [rsi]
    vdivps  xmm6, xmm0, xmmword ptr [r14]
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmm1, xmmword ptr [rdi]
    vmulps  xmm2, xmm7, xmmword ptr [rdi]
    vmulps  xmm5, xmm1, xmm1
    vmulps  xmm1, xmm6, xmm1
    vsubps  xmm4, xmm0, xmmword ptr [rax]
    vmulps  xmm0, xmm4, xmm2
    vmulps  xmm3, xmm1, xmmword ptr [rax]
    vmovups xmm1, xmmword ptr [r15]
    vsubps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm3, xmm1
    vmulps  xmm0, xmm7, xmm5
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm0, xmm6, xmmword ptr [rdi]
    vaddps  xmm1, xmm0, xmm1
    vdivps  xmm2, xmm2, xmm1
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
    vmovups xmmword ptr [r15], xmm2
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 475, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassVelocity ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassVelocity )") )
    __debugbreak();
  __asm
  {
    vmovups xmm2, xmmword ptr [r15]
    vmulps  xmm0, xmm2, xmmword ptr [rdi]
    vaddps  xmm2, xmm0, xmmword ptr [rbx]
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rbx], xmm2
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 477, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassPos ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassPos )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
Float4PackNegUnitVec
==============
*/
__int64 Float4PackNegUnitVec(const vec3_t *in)
{
  unsigned int v21; 
  __int128 v22; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  HIDWORD(v22) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+10h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm5, xmm0, xmm3
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  [rsp+38h+var_38], xmm0
  }
  return v21;
}

