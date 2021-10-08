/*
==============
R_CullBoxDpvs
==============
*/

int __fastcall R_CullBoxDpvs(const Bounds *bounds, const DpvsPlane *planes, int planeCount)
{
  return ?R_CullBoxDpvs@@YAHPEIBUBounds@@PEIBUDpvsPlane@@H@Z(bounds, planes, planeCount);
}

/*
==============
R_CullBoxDpvs
==============
*/
__int64 R_CullBoxDpvs(const Bounds *bounds, const DpvsPlane *planes, int planeCount)
{
  int v13; 
  bool v14; 
  __int64 result; 
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
  }
  v13 = 0;
  __asm
  {
    vmovaps [rsp+98h+var_88], xmm13
    vmovaps [rsp+98h+var_98], xmm14
  }
  v14 = planeCount == 0;
  if ( planeCount <= 0 )
  {
LABEL_5:
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rcx+0Ch]
      vmovss  xmm9, dword ptr [rcx]
      vmovss  xmm10, dword ptr [rcx+4]
      vmovss  xmm11, dword ptr [rcx+10h]
      vmovss  xmm12, dword ptr [rcx+8]
      vmovss  xmm13, dword ptr [rcx+14h]
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    _RCX = &planes->coeffs.xyz + 1;
    __asm { vxorps  xmm14, xmm14, xmm14 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rcx-0Ch]
        vmovss  xmm5, dword ptr [rcx-8]
        vmovss  xmm6, dword ptr [rcx-4]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm8
        vmulss  xmm0, xmm9, xmm1
        vaddss  xmm1, xmm0, dword ptr [rcx]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm10, xmm5
        vmulss  xmm1, xmm12, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm11
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm14
      }
      if ( v14 )
        break;
      ++v13;
      _RCX = (vec3_t *)((char *)_RCX + 16);
      v14 = v13 <= (unsigned int)planeCount;
      if ( v13 >= planeCount )
        goto LABEL_5;
    }
    result = 1i64;
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+98h+var_88]
    vmovaps xmm14, [rsp+98h+var_98]
  }
  return result;
}

