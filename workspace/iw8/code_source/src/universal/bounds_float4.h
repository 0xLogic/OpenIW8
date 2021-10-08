/*
==============
Float4Bounds_Transform
==============
*/

void __fastcall Float4Bounds_Transform(const Float4Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Float4Bounds *rotatedBounds)
{
  ?Float4Bounds_Transform@@YAXPEBUFloat4Bounds@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@PEAU1@@Z(baseBounds, origin, axis, rotatedBounds);
}

/*
==============
Float4Bounds_Transform
==============
*/
void Float4Bounds_Transform(const Float4Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Float4Bounds *rotatedBounds)
{
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
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
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
    vmovups xmm1, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmovss  xmm0, dword ptr [r8]
    vbroadcastss xmm10, dword ptr [rcx+10h]
    vbroadcastss xmm9, dword ptr [rcx+14h]
    vbroadcastss xmm8, dword ptr [rcx+18h]
  }
  HIDWORD(v66) = 0;
  __asm
  {
    vmovups xmm14, xmmword ptr [rsp]
    vmovss  xmm14, xmm14, xmm0
    vmovss  xmm0, dword ptr [r8+0Ch]
    vinsertps xmm14, xmm14, dword ptr [r8+4], 10h
    vinsertps xmm14, xmm14, dword ptr [r8+8], 20h ; ' '
    vandnps xmm5, xmm1, xmm14
    vmovups xmmword ptr [rsp], xmm14
  }
  HIDWORD(v67) = 0;
  __asm
  {
    vmovups xmm13, xmmword ptr [rsp]
    vmovss  xmm13, xmm13, xmm0
    vmovss  xmm0, dword ptr [r8+18h]
    vinsertps xmm13, xmm13, dword ptr [r8+10h], 10h
    vinsertps xmm13, xmm13, dword ptr [r8+14h], 20h ; ' '
    vandnps xmm6, xmm1, xmm13
    vmovups xmmword ptr [rsp], xmm13
  }
  HIDWORD(v68) = 0;
  __asm
  {
    vmovups xmm12, xmmword ptr [rsp]
    vmovss  xmm12, xmm12, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vinsertps xmm12, xmm12, dword ptr [r8+1Ch], 10h
    vinsertps xmm12, xmm12, dword ptr [r8+20h], 20h ; ' '
    vandnps xmm7, xmm1, xmm12
    vmovups xmmword ptr [rsp], xmm12
  }
  HIDWORD(v69) = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp]
    vmovss  xmm11, xmm11, xmm0
    vmovups xmm0, xmmword ptr [rcx]
    vinsertps xmm11, xmm11, dword ptr [rdx+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rdx+8], 20h ; ' '
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm4, xmm0, xmm0, 0
    vmulps  xmm0, xmm12, xmm1
    vaddps  xmm2, xmm0, xmm11
    vmulps  xmm1, xmm13, xmm3
    vaddps  xmm3, xmm1, xmm2
    vmulps  xmm0, xmm14, xmm4
    vaddps  xmm1, xmm0, xmm3
    vmulps  xmm0, xmm9, xmm6
    vmulps  xmm2, xmm10, xmm5
    vmovups xmmword ptr [r9], xmm1
    vaddps  xmm3, xmm0, xmm2
    vmulps  xmm1, xmm8, xmm7
    vaddps  xmm0, xmm1, xmm3
    vmovups xmmword ptr [r9+10h], xmm0
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
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0B8h+var_88]
    vmovaps xmm14, [rsp+0B8h+var_98]
  }
}

