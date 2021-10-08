/*
==============
jpeg_fdct_float
==============
*/
void jpeg_fdct_float(float *data)
{
  __int64 v12; 
  __int64 v13; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v12 = 2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v13 = 2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  _RAX = data + 2;
  __asm
  {
    vmovss  xmm12, cs:__real@3f3504f3
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovss  xmm13, cs:__real@3ec3ef15
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovss  xmm14, cs:__real@3f0a8bd4
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, cs:__real@3fa73d75
  }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax-8]
      vsubss  xmm10, xmm0, dword ptr [rax+14h]
      vaddss  xmm4, xmm0, dword ptr [rax+14h]
      vmovss  xmm0, dword ptr [rax-4]
      vsubss  xmm9, xmm0, dword ptr [rax+10h]
      vaddss  xmm7, xmm0, dword ptr [rax+10h]
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm8, xmm0, dword ptr [rax+0Ch]
      vaddss  xmm3, xmm0, dword ptr [rax+0Ch]
      vmovss  xmm6, dword ptr [rax+8]
      vmovss  xmm5, dword ptr [rax+4]
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax-8], xmm0
      vmovss  dword ptr [rax+8], xmm1
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm4
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+10h], xmm0
      vmovss  dword ptr [rax], xmm1
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm4, xmm9, xmm10
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vaddss  xmm5, xmm1, xmm3
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm10, xmm2
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+0Ch], xmm0
      vaddss  xmm4, xmm2, xmm10
      vsubss  xmm1, xmm3, xmm5
      vmovss  xmm5, dword ptr [rax+24h]
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax-4], xmm0
      vmovss  xmm0, dword ptr [rax+18h]
      vsubss  xmm10, xmm0, dword ptr [rax+34h]
      vmovss  dword ptr [rax+4], xmm1
      vsubss  xmm1, xmm4, xmm6
      vaddss  xmm4, xmm0, dword ptr [rax+34h]
      vmovss  xmm0, dword ptr [rax+1Ch]
      vaddss  xmm7, xmm0, dword ptr [rax+30h]
      vsubss  xmm9, xmm0, dword ptr [rax+30h]
      vmovss  xmm0, dword ptr [rax+20h]
      vaddss  xmm3, xmm0, dword ptr [rax+2Ch]
      vsubss  xmm8, xmm0, dword ptr [rax+2Ch]
      vmovss  xmm6, dword ptr [rax+28h]
      vmovss  dword ptr [rax+14h], xmm1
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax+18h], xmm0
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+28h], xmm1
      vaddss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rax+20h], xmm1
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vaddss  xmm4, xmm9, xmm10
      vmovss  dword ptr [rax+30h], xmm0
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm5, xmm1, xmm3
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm10, xmm2
      vaddss  xmm4, xmm2, xmm10
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+2Ch], xmm0
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax+1Ch], xmm0
      vmovss  xmm0, dword ptr [rax+38h]
      vsubss  xmm10, xmm0, dword ptr [rax+54h]
      vsubss  xmm1, xmm3, xmm5
      vmovss  xmm5, dword ptr [rax+44h]
      vmovss  dword ptr [rax+24h], xmm1
      vsubss  xmm1, xmm4, xmm6
      vaddss  xmm4, xmm0, dword ptr [rax+54h]
      vmovss  xmm0, dword ptr [rax+3Ch]
      vsubss  xmm9, xmm0, dword ptr [rax+50h]
      vaddss  xmm7, xmm0, dword ptr [rax+50h]
      vmovss  xmm0, dword ptr [rax+40h]
      vsubss  xmm8, xmm0, dword ptr [rax+4Ch]
      vaddss  xmm3, xmm0, dword ptr [rax+4Ch]
      vmovss  xmm6, dword ptr [rax+48h]
      vmovss  dword ptr [rax+34h], xmm1
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax+38h], xmm0
      vmovss  dword ptr [rax+48h], xmm1
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rax+40h], xmm1
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+50h], xmm0
      vaddss  xmm4, xmm9, xmm10
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm5, xmm1, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm4, xmm2, xmm10
      vsubss  xmm3, xmm10, xmm2
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+4Ch], xmm0
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax+3Ch], xmm0
      vmovss  xmm0, dword ptr [rax+58h]
      vsubss  xmm11, xmm0, dword ptr [rax+74h]
      vsubss  xmm1, xmm3, xmm5
      vaddss  xmm5, xmm0, dword ptr [rax+74h]
      vmovss  xmm0, dword ptr [rax+5Ch]
      vaddss  xmm8, xmm0, dword ptr [rax+70h]
      vsubss  xmm10, xmm0, dword ptr [rax+70h]
      vmovss  xmm0, dword ptr [rax+60h]
      vsubss  xmm9, xmm0, dword ptr [rax+6Ch]
      vmovss  dword ptr [rax+44h], xmm1
      vsubss  xmm1, xmm4, xmm6
      vaddss  xmm6, xmm0, dword ptr [rax+6Ch]
      vmovss  xmm0, dword ptr [rax+64h]
      vsubss  xmm7, xmm0, dword ptr [rax+68h]
      vaddss  xmm2, xmm6, xmm8
      vmovss  dword ptr [rax+54h], xmm1
      vaddss  xmm1, xmm0, dword ptr [rax+68h]
      vaddss  xmm4, xmm1, xmm5
      vaddss  xmm0, xmm2, xmm4
      vsubss  xmm5, xmm5, xmm1
      vsubss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rax+58h], xmm0
      vsubss  xmm0, xmm8, xmm6
      vaddss  xmm2, xmm0, xmm5
      vmovss  dword ptr [rax+68h], xmm1
    }
    _RAX += 32;
    __asm
    {
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm5
      vmovss  dword ptr [rax-20h], xmm1
      vsubss  xmm0, xmm5, xmm3
      vmovss  dword ptr [rax-10h], xmm0
      vaddss  xmm1, xmm7, xmm9
      vaddss  xmm3, xmm10, xmm11
      vsubss  xmm0, xmm1, xmm3
      vmulss  xmm2, xmm0, xmm13
      vmulss  xmm1, xmm1, xmm14
      vaddss  xmm5, xmm1, xmm2
      vmulss  xmm0, xmm3, xmm15
      vaddss  xmm6, xmm0, xmm2
      vaddss  xmm1, xmm9, xmm10
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm11, xmm2
      vaddss  xmm0, xmm3, xmm5
      vsubss  xmm1, xmm3, xmm5
      vaddss  xmm4, xmm2, xmm11
      vmovss  dword ptr [rax-14h], xmm0
      vmovss  dword ptr [rax-1Ch], xmm1
      vaddss  xmm0, xmm4, xmm6
      vsubss  xmm1, xmm4, xmm6
      vmovss  dword ptr [rax-24h], xmm0
      vmovss  dword ptr [rax-0Ch], xmm1
    }
    --v13;
  }
  while ( v13 );
  _RAX = data + 16;
  do
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rax+0A0h]
      vmovss  xmm0, dword ptr [rax-40h]
      vmovss  xmm2, dword ptr [rax+80h]
      vmovss  xmm6, dword ptr [rax+40h]
      vmovss  xmm5, dword ptr [rax+20h]
      vsubss  xmm10, xmm0, xmm1
      vaddss  xmm4, xmm1, xmm0
      vmovss  xmm0, dword ptr [rax-20h]
      vsubss  xmm9, xmm0, xmm2
      vaddss  xmm7, xmm2, xmm0
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm8, xmm0, dword ptr [rax+60h]
      vaddss  xmm3, xmm0, dword ptr [rax+60h]
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax-40h], xmm0
      vmovss  dword ptr [rax+40h], xmm1
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm4
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+80h], xmm0
      vmovss  dword ptr [rax], xmm1
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm4, xmm9, xmm10
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vaddss  xmm5, xmm1, xmm3
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm10, xmm2
      vaddss  xmm4, xmm2, xmm10
      vmovss  xmm2, dword ptr [rax+0A4h]
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+60h], xmm0
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax-20h], xmm0
      vmovss  xmm0, dword ptr [rax-3Ch]
      vsubss  xmm10, xmm0, xmm2
      vsubss  xmm1, xmm3, xmm5
      vmovss  xmm5, dword ptr [rax+24h]
      vmovss  dword ptr [rax+20h], xmm1
      vsubss  xmm1, xmm4, xmm6
      vmovss  xmm6, dword ptr [rax+44h]
      vaddss  xmm4, xmm2, xmm0
      vmovss  xmm0, dword ptr [rax-1Ch]
      vmovss  dword ptr [rax+0A0h], xmm1
      vmovss  xmm1, dword ptr [rax+84h]
      vsubss  xmm9, xmm0, xmm1
      vaddss  xmm7, xmm1, xmm0
      vmovss  xmm0, dword ptr [rax+4]
      vaddss  xmm3, xmm0, dword ptr [rax+64h]
      vsubss  xmm8, xmm0, dword ptr [rax+64h]
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax-3Ch], xmm0
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+44h], xmm1
      vaddss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rax+4], xmm1
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vaddss  xmm4, xmm9, xmm10
      vmovss  dword ptr [rax+84h], xmm0
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm5, xmm1, xmm3
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm10, xmm2
      vaddss  xmm4, xmm2, xmm10
      vmovss  xmm2, dword ptr [rax+0A8h]
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+64h], xmm0
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax-1Ch], xmm0
      vmovss  xmm0, dword ptr [rax-38h]
      vsubss  xmm10, xmm0, xmm2
      vsubss  xmm1, xmm3, xmm5
      vmovss  xmm5, dword ptr [rax+28h]
      vmovss  dword ptr [rax+24h], xmm1
      vsubss  xmm1, xmm4, xmm6
      vmovss  xmm6, dword ptr [rax+48h]
      vaddss  xmm4, xmm2, xmm0
      vmovss  xmm0, dword ptr [rax-18h]
      vmovss  dword ptr [rax+0A4h], xmm1
      vmovss  xmm1, dword ptr [rax+88h]
      vsubss  xmm9, xmm0, xmm1
      vaddss  xmm7, xmm1, xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm8, xmm0, dword ptr [rax+68h]
      vaddss  xmm3, xmm0, dword ptr [rax+68h]
      vaddss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm4, xmm4, xmm0
      vaddss  xmm1, xmm3, xmm7
      vaddss  xmm0, xmm1, xmm2
      vsubss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rax-38h], xmm0
      vmovss  dword ptr [rax+48h], xmm1
      vsubss  xmm0, xmm7, xmm3
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rax+8], xmm1
      vsubss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rax+88h], xmm0
      vsubss  xmm1, xmm5, xmm6
      vaddss  xmm2, xmm1, xmm8
      vaddss  xmm4, xmm9, xmm10
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm3, xmm0, xmm13
      vmulss  xmm1, xmm2, xmm14
      vaddss  xmm5, xmm1, xmm3
      vaddss  xmm1, xmm8, xmm9
      vmulss  xmm2, xmm1, xmm12
      vmulss  xmm0, xmm4, xmm15
      vaddss  xmm6, xmm0, xmm3
      vaddss  xmm4, xmm2, xmm10
      vsubss  xmm3, xmm10, xmm2
      vmovss  xmm2, dword ptr [rax+0ACh]
      vaddss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rax+68h], xmm0
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax-18h], xmm0
      vmovss  xmm0, dword ptr [rax-34h]
      vsubss  xmm1, xmm3, xmm5
      vaddss  xmm5, xmm2, xmm0
      vmovss  dword ptr [rax+28h], xmm1
      vsubss  xmm1, xmm4, xmm6
      vsubss  xmm11, xmm0, xmm2
      vmovss  xmm0, dword ptr [rax-14h]
      vmovss  dword ptr [rax+0A8h], xmm1
      vmovss  xmm1, dword ptr [rax+8Ch]
      vaddss  xmm8, xmm1, xmm0
      vsubss  xmm10, xmm0, xmm1
      vmovss  xmm0, dword ptr [rax+0Ch]
      vaddss  xmm6, xmm0, dword ptr [rax+6Ch]
      vsubss  xmm9, xmm0, dword ptr [rax+6Ch]
      vmovss  xmm0, dword ptr [rax+2Ch]
      vaddss  xmm1, xmm0, dword ptr [rax+4Ch]
      vsubss  xmm7, xmm0, dword ptr [rax+4Ch]
      vaddss  xmm4, xmm1, xmm5
    }
    _RAX += 4;
    __asm
    {
      vsubss  xmm5, xmm5, xmm1
      vaddss  xmm2, xmm6, xmm8
      vaddss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rax-44h], xmm0
      vsubss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rax+3Ch], xmm1
      vsubss  xmm0, xmm8, xmm6
      vaddss  xmm2, xmm0, xmm5
      vmulss  xmm3, xmm2, xmm12
      vaddss  xmm1, xmm3, xmm5
      vmovss  dword ptr [rax-4], xmm1
      vsubss  xmm0, xmm5, xmm3
      vmovss  dword ptr [rax+7Ch], xmm0
      vaddss  xmm1, xmm7, xmm9
      vaddss  xmm3, xmm10, xmm11
      vsubss  xmm0, xmm1, xmm3
      vmulss  xmm2, xmm0, xmm13
      vmulss  xmm1, xmm1, xmm14
      vaddss  xmm5, xmm1, xmm2
      vmulss  xmm0, xmm3, xmm15
      vaddss  xmm6, xmm0, xmm2
      vaddss  xmm1, xmm9, xmm10
      vmulss  xmm2, xmm1, xmm12
      vsubss  xmm3, xmm11, xmm2
      vaddss  xmm0, xmm3, xmm5
      vsubss  xmm1, xmm3, xmm5
      vaddss  xmm4, xmm2, xmm11
      vmovss  dword ptr [rax+5Ch], xmm0
      vmovss  dword ptr [rax+1Ch], xmm1
      vaddss  xmm0, xmm4, xmm6
      vsubss  xmm1, xmm4, xmm6
      vmovss  dword ptr [rax-24h], xmm0
      vmovss  dword ptr [rax+9Ch], xmm1
    }
    --v12;
  }
  while ( v12 );
  __asm { vmovaps xmm13, [rsp+0A8h+var_88] }
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
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmovaps xmm15, [rsp+0A8h+var_A8]
  }
}

