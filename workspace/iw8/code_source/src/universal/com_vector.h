/*
==============
Short4LerpAsVec4
==============
*/

void __fastcall Short4LerpAsVec4(const __int16 *from, const __int16 *to, const float frac, vec4_t *out)
{
  ?Short4LerpAsVec4@@YAXQEBF0MAEATvec4_t@@@Z(from, to, frac, out);
}

/*
==============
Vec2CubicBezierSplitHalf
==============
*/

void __fastcall Vec2CubicBezierSplitHalf(const CubicBezierVec2 *input, CubicBezierVec2 *a, CubicBezierVec2 *b)
{
  ?Vec2CubicBezierSplitHalf@@YAXAEBUCubicBezierVec2@@AEAU1@1@Z(input, a, b);
}

/*
==============
Vec3ZeroEpsilon
==============
*/

int __fastcall Vec3ZeroEpsilon(const vec3_t *a)
{
  return ?Vec3ZeroEpsilon@@YAHAEBTvec3_t@@@Z(a);
}

/*
==============
Vec3LimitLength
==============
*/

double __fastcall Vec3LimitLength(vec3_t *v, float maxLength)
{
  double result; 

  *(float *)&result = ?Vec3LimitLength@@YAMAEATvec3_t@@M@Z(v, maxLength);
  return result;
}

/*
==============
Vec3ZeroEpsilon
==============
*/
_BOOL8 Vec3ZeroEpsilon(const vec3_t *a)
{
  float v1[4]; 

  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+48h+v1], xmm0
    vmovss  [rsp+48h+var_24], xmm0
    vmovss  [rsp+48h+var_20], xmm0
  }
  return VecNCompareCustomEpsilon(a->v, v1, *(float *)&_XMM2, 3);
}

/*
==============
Vec3LimitLength
==============
*/

float __fastcall Vec3LimitLength(vec3_t *v, double maxLength)
{
  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RBX = v;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm6, xmm1
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vcomiss xmm3, xmm0
    vsqrtss xmm3, xmm3, xmm3
    vdivss  xmm2, xmm6, xmm3
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm8, xmm2
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rbx+8], xmm0
    vmovaps xmm0, xmm3
    vmovss  dword ptr [rbx+4], xmm1
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
Short4LerpAsVec4
==============
*/

void __fastcall Short4LerpAsVec4(const __int16 *from, const __int16 *to, double frac, vec4_t *out)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r8d
    vaddss  xmm3, xmm3, xmm1
    vmovss  dword ptr [r9], xmm3
    vmovaps xmm4, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r8d
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r9+4], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm4
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r9+8], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vmulss  xmm2, xmm0, xmm4
    vcvtsi2ss xmm1, xmm1, ecx
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r9+0Ch], xmm2
  }
}

/*
==============
Vec2CubicBezierSplitHalf
==============
*/
void Vec2CubicBezierSplitHalf(const CubicBezierVec2 *input, CubicBezierVec2 *a, CubicBezierVec2 *b)
{
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+10h]
    vaddss  xmm3, xmm0, dword ptr [rcx+18h]
    vaddss  xmm5, xmm0, dword ptr [rcx+8]
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vmovss  xmm1, dword ptr [rcx+14h]
    vaddss  xmm4, xmm1, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmmword ptr [r11-78h], xmm12
    vaddss  xmm8, xmm2, dword ptr [rcx+4]
    vmovss  xmm10, cs:__real@3f000000
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rcx]
    vaddss  xmm7, xmm15, dword ptr [rcx+8]
    vmovss  dword ptr [rdx], xmm15
    vmovaps xmm15, [rsp+0A8h+var_A8]
  }
  a->p[0].v[1] = input->p[0].v[1];
  __asm
  {
    vaddss  xmm6, xmm2, xmm1
    vmovss  xmm2, cs:__real@3e800000
    vaddss  xmm0, xmm7, xmm5
    vmulss  xmm9, xmm0, xmm2
    vaddss  xmm0, xmm8, xmm6
    vmulss  xmm11, xmm7, xmm10
    vmovss  dword ptr [rdx+8], xmm11
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmulss  xmm7, xmm0, xmm2
    vmulss  xmm12, xmm8, xmm10
    vmovss  dword ptr [rdx+0Ch], xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovss  dword ptr [rdx+10h], xmm9
    vmovss  dword ptr [rdx+14h], xmm7
    vaddss  xmm1, xmm5, xmm3
    vmulss  xmm8, xmm1, xmm2
    vmulss  xmm13, xmm3, xmm10
    vaddss  xmm0, xmm6, xmm4
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmulss  xmm5, xmm0, xmm2
    vaddss  xmm1, xmm9, xmm8
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmulss  xmm3, xmm1, xmm10
    vmovss  dword ptr [rdx+18h], xmm3
    vmulss  xmm14, xmm4, xmm10
    vaddss  xmm0, xmm5, xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmulss  xmm2, xmm0, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovss  dword ptr [rdx+1Ch], xmm2
    vmovss  dword ptr [r8], xmm3
    vmovss  dword ptr [r8+4], xmm2
    vmovss  dword ptr [r8+8], xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovss  dword ptr [r8+0Ch], xmm5
    vmovss  dword ptr [r8+10h], xmm13
    vmovaps xmm13, [rsp+0A8h+var_88]
    vmovss  dword ptr [r8+14h], xmm14
    vmovaps xmm14, [rsp+0A8h+var_98]
  }
  b->p[3] = input->p[3];
}

