/*
==============
SND_Hash
==============
*/

unsigned int __fastcall SND_Hash(const void *data, unsigned int length)
{
  return ?SND_Hash@@YAIPEBXI@Z(data, length);
}

/*
==============
SND_AssetEnvelope
==============
*/

double __fastcall SND_AssetEnvelope(int played, int length, unsigned __int8 e0, unsigned __int8 e1, unsigned __int8 e2, unsigned __int8 e3, unsigned __int16 i1, unsigned __int16 i2)
{
  double result; 

  *(float *)&result = ?SND_AssetEnvelope@@YAMHHEEEEGG@Z(played, length, e0, e1, e2, e3, i1, i2);
  return result;
}

/*
==============
SND_AssetEnvelope
==============
*/
double SND_AssetEnvelope(int played, int length, unsigned __int8 e0, unsigned __int8 e1, unsigned __int8 e2, unsigned __int8 e3, unsigned __int16 i1, unsigned __int16 i2)
{
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, eax
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vmaxss  xmm0, xmm8, xmm11
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
    vmaxss  xmm1, xmm7, xmm0
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, eax
    vmaxss  xmm2, xmm9, xmm1
    vxorps  xmm10, xmm10, xmm10
    vcmpeqss xmm0, xmm2, xmm10
    vblendvps xmm0, xmm2, xmm6, xmm0
    vmovss  [rsp+88h+e3], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vmulss  xmm2, xmm1, cs:__real@477fff00
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vdivss  xmm2, xmm2, xmm0
    vcvttss2si ebx, xmm2
  }
  if ( dword_14EAFF664 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EAFF664);
    if ( dword_14EAFF664 == -1 )
    {
      __asm
      {
        vdivss  xmm0, xmm6, [rsp+88h+e3]
        vmovss  cs:escale, xmm0
      }
      j__Init_thread_footer(&dword_14EAFF664);
    }
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( _EBX >= i1 )
  {
    if ( _EBX >= i2 )
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, ebx
        vcvtsi2ss xmm0, xmm0, edi
        vdivss  xmm5, xmm3, xmm0
        vmulss  xmm0, xmm11, xmm5
        vsubss  xmm3, xmm6, xmm5
        vmulss  xmm4, xmm3, xmm8
        vaddss  xmm4, xmm4, xmm0
        vmulss  xmm0, xmm4, cs:escale; val
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm3, xmm1, xmm0
        vmulss  xmm0, xmm8, xmm3
        vsubss  xmm1, xmm6, xmm3
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm2, xmm2, xmm0
        vmulss  xmm0, xmm2, cs:escale
      }
    }
  }
  else
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, ecx
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vdivss  xmm3, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm3
      vsubss  xmm1, xmm6, xmm3
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm2, xmm2, xmm0
      vmulss  xmm0, xmm2, cs:escale
    }
  }
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+88h+var_18]
  }
  _R11 = &v74;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
SND_Hash
==============
*/
__int64 SND_Hash(const void *data, unsigned int length)
{
  __int64 result; 
  __int64 v3; 
  int v4; 

  result = 5381i64;
  if ( length )
  {
    v3 = length;
    do
    {
      v4 = *(unsigned __int8 *)data;
      data = (char *)data + 1;
      result = (unsigned int)(v4 + 65599 * result);
      --v3;
    }
    while ( v3 );
    if ( !(_DWORD)result )
      return 1i64;
  }
  return result;
}

