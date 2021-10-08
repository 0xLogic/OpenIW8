/*
==============
Float4UnpackFloat16_2
==============
*/

void __fastcall Float4UnpackFloat16_2(const unsigned int packed, vec2_t *result)
{
  ?Float4UnpackFloat16_2@@YQXIAEATvec2_t@@@Z(packed, result);
}

/*
==============
Float4x4LoadMat33Unaligned
==============
*/

void __fastcall Float4x4LoadMat33Unaligned(const tmat33_t<vec3_t> *base, vector4 *result)
{
  ?Float4x4LoadMat33Unaligned@@YQXAEBT?$tmat33_t@Tvec3_t@@@@AEAUvector4@@@Z(base, result);
}

/*
==============
Float4EvalCubicBezierSpline
==============
*/

void __fastcall Float4EvalCubicBezierSpline(float t, float4 *result, float4 *a3, float4 *a4, float4 *a5, float4 *a6)
{
  ?Float4EvalCubicBezierSpline@@YQXMUfloat4@@000AEAU1@@Z(t, result, a3, a4, a5, a6);
}

/*
==============
Float4x4LoadMat43
==============
*/

void __fastcall Float4x4LoadMat43(const tmat43_t<vec3_t> *base, vector4 *result)
{
  ?Float4x4LoadMat43@@YQXAEBT?$tmat43_t@Tvec3_t@@@@AEAUvector4@@@Z(base, result);
}

/*
==============
Float4PackNormPackedNrmTanBin
==============
*/

float4 *__fastcall Float4PackNormPackedNrmTanBin(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  return ?Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U1@00@Z(result, a2, a3, a4);
}

/*
==============
Float4PackSelfVisX
==============
*/

void __fastcall Float4PackSelfVisX(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4PackSelfVisX@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4UnpackFloat16_2
==============
*/
void Float4UnpackFloat16_2(const unsigned int packed, vec2_t *result)
{
  unsigned int v6; 
  unsigned int v7; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( (_WORD)packed )
  {
    v6 = ((packed & 0x8000) << 16) | (((((packed & 0x3FFF) << 14) - (~((unsigned __int16)packed << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdx], xmm1 }
  if ( HIWORD(packed) )
  {
    v7 = ((HIWORD(packed) & 0xFFFF8000) << 16) | (((((HIWORD(packed) & 0x3FFF) << 14) - (~(HIWORD(packed) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+arg_0] }
  }
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
}

/*
==============
Float4PackNormPackedNrmTanBin
==============
*/
__m128 Float4PackNormPackedNrmTanBin(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  __int64 v14; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  v14 = tls_index;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovups xmm11, xmm2
    vmovups xmm6, xmm1
    vmovups xmm7, xmm0
  }
  if ( __TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
  {
    j__Init_thread_header(&__TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    if ( __TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@43ffc00043ffc00043ffc00043ffc000
        vmovups xmmword ptr cs:?cvScale@?1??Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U2@00@Z@4U2@B.v, xmm0; float4 const `Float4PackNormPackedNrmTanBin(float4,float4,float4)'::`2'::cvScale
      }
      j__Init_thread_footer(&__TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    }
  }
  if ( __TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v14) + 1772i64) )
  {
    j__Init_thread_header(&__TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    if ( __TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmmword ptr cs:?cvPosOne@?1??Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U2@00@Z@4U2@B.v, xmm0; float4 const `Float4PackNormPackedNrmTanBin(float4,float4,float4)'::`2'::cvPosOne
      }
      j__Init_thread_footer(&__TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    }
  }
  __asm
  {
    vmovdqu xmm10, xmmword ptr cs:?ci1023@?1??Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U2@00@Z@4QBIB; uint const near * const `Float4PackNormPackedNrmTanBin(float4,float4,float4)'::`2'::ci1023
    vshufps xmm8, xmm7, xmm6, 44h ; 'D'
    vshufps xmm0, xmm7, xmm6, 0EEh ; 'î'
    vmovups xmm7, xmmword ptr cs:?cvPosOne@?1??Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U2@00@Z@4U2@B.v; float4 const `Float4PackNormPackedNrmTanBin(float4,float4,float4)'::`2'::cvPosOne
    vmovups xmm6, xmmword ptr cs:?cvScale@?1??Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U2@00@Z@4U2@B.v; float4 const `Float4PackNormPackedNrmTanBin(float4,float4,float4)'::`2'::cvScale
    vshufps xmm1, xmm0, xmm11, 0A8h ; '¨'
    vaddps  xmm2, xmm1, xmm7
    vmulps  xmm0, xmm2, xmm6
    vcvttps2dq xmm1, xmm0
  }
  _R11 = &v58;
  __asm
  {
    vpxor   xmm9, xmm9, xmm9
    vpmaxsd xmm2, xmm1, xmm9
    vpminsd xmm3, xmm2, xmm10
    vshufps xmm1, xmm8, xmm11, 9Dh
    vaddps  xmm2, xmm1, xmm7
    vpslld  xmm0, xmm3, 14h
    vpor    xmm5, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vmulps  xmm0, xmm2, xmm6
    vcvttps2dq xmm3, xmm0
    vpmaxsd xmm1, xmm3, xmm9
    vpminsd xmm2, xmm1, xmm10
    vshufps xmm0, xmm8, xmm11, 88h ; 'ˆ'
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vaddps  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vpslld  xmm4, xmm2, 0Ah
    vmulps  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vcvttps2dq xmm3, xmm2
    vpmaxsd xmm0, xmm3, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vpminsd xmm1, xmm0, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vpor    xmm2, xmm4, xmm1
    vpor    xmm0, xmm5, xmm2
  }
  return _XMM0;
}

/*
==============
Float4x4LoadMat43
==============
*/
void Float4x4LoadMat43(const tmat43_t<vec3_t> *base, vector4 *result)
{
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  HIDWORD(v25) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rdx], xmm3
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v26) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vmovups xmmword ptr [rdx+10h], xmm3
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v27) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+20h], 20h ; ' '
    vmovups xmmword ptr [rdx+20h], xmm3
    vmovss  xmm0, dword ptr [rcx+24h]
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v28) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+2Ch], 20h ; ' '
    vmovups xmmword ptr [rdx+30h], xmm3
    vxorps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vxorps  xmm2, xmm1, xmm3
    vmovups xmmword ptr [rdx+30h], xmm2
  }
}

/*
==============
Float4EvalCubicBezierSpline
==============
*/

void __fastcall Float4EvalCubicBezierSpline(double t, float4 *result, float4 *a3, float4 *a4, float4 *a5, float4 *a6)
{
  __asm { vmovss  xmm5, cs:__real@3f800000 }
  _RAX = a6;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vsubss  xmm8, xmm5, xmm0
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps xmm10, xmm0
    vmulss  xmm5, xmm0, xmm0
    vmovaps [rsp+68h+var_68], xmm11
    vmovaps xmm6, [rsp+68h+var_18]
    vmovups xmm11, xmm1
    vmovups xmm9, xmm2
    vshufps xmm8, xmm8, xmm8, 0
    vmulps  xmm7, xmm8, xmm8
    vmulss  xmm1, xmm5, xmm10
    vshufps xmm1, xmm1, xmm1, 0
    vmovaps xmm0, xmm5
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm2, xmm0, xmm8
    vmulps  xmm0, xmm3, cs:__xmm@40400000404000004040000040400000
    vmulps  xmm3, xmm2, xmm0
    vmulps  xmm0, xmm1, xmm4
    vaddps  xmm4, xmm3, xmm0
    vmulps  xmm0, xmm9, cs:__xmm@40400000404000004040000040400000
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm2, xmm10
    vmovaps xmm10, [rsp+68h+var_58]
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm1, xmm2, xmm7
    vmulps  xmm1, xmm1, xmm0
    vmulps  xmm2, xmm7, xmm8
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmulps  xmm0, xmm2, xmm11
    vmovaps xmm11, [rsp+68h+var_68]
    vaddps  xmm3, xmm4, xmm1
    vaddps  xmm1, xmm3, xmm0
    vmovups xmmword ptr [rax], xmm1
  }
}

/*
==============
Float4PackSelfVisX
==============
*/
void Float4PackSelfVisX(const float4 *result, const float4 *a2, float4 *_R8)
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
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+98h+var_88], xmm13
    vmovups xmm11, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm8, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
    vshufps xmm4, xmm0, xmm0, 55h ; 'U'
    vshufps xmm3, xmm0, xmm0, 0
    vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
    vmovups xmm13, xmm1
    vandps  xmm0, xmm2, xmm8
    vxorps  xmm12, xmm12, xmm12
    vcmpleps xmm10, xmm2, xmm12
    vandps  xmm1, xmm4, xmm8
    vaddps  xmm2, xmm1, xmm0
    vandps  xmm1, xmm3, xmm8
    vaddps  xmm2, xmm2, xmm1
    vrcpps  xmm0, xmm2
    vmulps  xmm7, xmm3, xmm0
    vmulps  xmm9, xmm4, xmm0
    vcmpltps xmm6, xmm7, xmm12
    vcmpltps xmm0, xmm9, xmm12
    vandps  xmm1, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vandnps xmm0, xmm0, xmm11
    vorps   xmm3, xmm1, xmm0
    vandps  xmm1, xmm8, xmm7
    vsubps  xmm2, xmm11, xmm1
    vandps  xmm1, xmm6, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vmulps  xmm0, xmm3, xmm2
    vandps  xmm5, xmm0, xmm10
    vandnps xmm0, xmm6, xmm11
    vorps   xmm3, xmm1, xmm0
    vandps  xmm1, xmm9, xmm8
    vsubps  xmm2, xmm11, xmm1
    vmulps  xmm0, xmm3, xmm2
    vandps  xmm3, xmm0, xmm10
    vandnps xmm1, xmm10, xmm7
    vmovups xmm7, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vorps   xmm2, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm7
    vaddps  xmm3, xmm0, xmm7
    vandnps xmm1, xmm10, xmm9
    vorps   xmm0, xmm1, xmm5
    vmulps  xmm2, xmm0, xmm7
    vaddps  xmm4, xmm2, xmm7
    vcmpltps xmm0, xmm3, xmm12
    vandnps xmm6, xmm0, xmm3
    vcmpltps xmm0, xmm4, xmm12
    vandnps xmm3, xmm0, xmm4
    vcmpltps xmm2, xmm11, xmm3
    vandnps xmm1, xmm2, xmm3
    vandps  xmm0, xmm2, xmm11
    vorps   xmm2, xmm1, xmm0
    vmulps  xmm1, xmm2, xmmword ptr cs:?g_selfVisDirScale@@3Ufloat4@@B.v; float4 const g_selfVisDirScale
    vaddps  xmm0, xmm1, xmm7
    vcvtps2dq xmm2, xmm0
    vpslld  xmm4, xmm2, 9
    vcmpltps xmm5, xmm11, xmm6
    vandnps xmm0, xmm5, xmm6
    vandps  xmm1, xmm5, xmm11
    vorps   xmm1, xmm1, xmm0
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScale@@3Ufloat4@@B.v; float4 const g_selfVisDirScale
    vaddps  xmm3, xmm2, xmm7
    vcvtps2dq xmm0, xmm3
    vpor    xmm1, xmm4, xmm0
    vmovups xmm0, xmmword ptr [r8]
    vpor    xmm2, xmm1, xmm13
    vblendps xmm1, xmm0, xmm2, 1
    vmovups xmmword ptr [r8], xmm1
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+98h+var_88]
  }
}

/*
==============
Float4x4LoadMat33Unaligned
==============
*/

void __fastcall Float4x4LoadMat33Unaligned(const tmat33_t<vec3_t> *base, vector4 *result, double _XMM2_8)
{
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  HIDWORD(v22) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rdx], xmm3
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vmovups xmmword ptr [rdx+10h], xmm3
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovups xmmword ptr [rsp], xmm3
    vxorps  xmm2, xmm2, xmm2
  }
  HIDWORD(v24) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+20h], 20h ; ' '
    vmovups xmmword ptr [rdx+20h], xmm3
    vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vxorps  xmm3, xmm1, xmm2
    vmovups xmmword ptr [rdx+30h], xmm3
  }
}

