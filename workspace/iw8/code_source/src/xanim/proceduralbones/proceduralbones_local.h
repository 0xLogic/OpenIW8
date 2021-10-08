/*
==============
XAnimBonePhysics_CalculateShortestRotationQuaternion
==============
*/

void __fastcall XAnimBonePhysics_CalculateShortestRotationQuaternion(const float4 *fromVector, const float4 *toVector, float4 *outQuat)
{
  ?XAnimBonePhysics_CalculateShortestRotationQuaternion@@YAXUfloat4@@0PEIAU1@@Z(fromVector, toVector, outQuat);
}

/*
==============
XAnimBonePhysics_CalculateShortestRotationQuaternion
==============
*/
void XAnimBonePhysics_CalculateShortestRotationQuaternion(const float4 *fromVector, const float4 *toVector, float4 *outQuat)
{
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovdqa xmm7, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm1, xmmword ptr [rdx]
    vmulps  xmm1, xmm1, xmmword ptr [rcx]
    vmovdqa xmm9, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vxorps  xmm8, xmm8, xmm8
    vsubps  xmm6, xmm8, xmm7
    vhaddps xmm10, xmm0, xmm0
    vcmpltps xmm0, xmm7, xmm6
    vmovmskps eax, xmm0
  }
  _RSI = outQuat;
  _RBX = toVector;
  _RDI = fromVector;
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmovups xmm4, xmmword ptr [rbx]
    vmovups xmm2, xmmword ptr [rdi]
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vmaxps  xmm0, xmm10, xmm6
    vminps  xmm5, xmm0, xmm7
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm4, xmm3, xmm0
    vmulps  xmm1, xmm5, xmm9
    vsubps  xmm0, xmm9, xmm1
    vsqrtps xmm5, xmm0
    vaddps  xmm6, xmm1, xmm9
    vmulps  xmm3, xmm4, xmm4
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm4, xmm1
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
    vcmpeqps xmm0, xmm0, xmm8
    vblendps xmm1, xmm7, xmm8, 0Eh
    vblendvps xmm1, xmm2, xmm1, xmm0
    vmulps  xmm2, xmm5, xmm1
    vsqrtps xmm0, xmm6
    vshufps xmm1, xmm2, xmm0, 0FAh ; 'ú'
    vshufps xmm2, xmm2, xmm1, 84h ; '„'
    vmovups xmmword ptr [rsi], xmm2
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

