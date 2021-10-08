/*
==============
PhysicallyBasedLight_AreaLightVPLOffsetTube
==============
*/

float __fastcall PhysicallyBasedLight_AreaLightVPLOffsetTube(const vec3_t *axis, const vec3_t *halfVector, const float bulbRadius, const float cosTheta)
{
  return ?PhysicallyBasedLight_AreaLightVPLOffsetTube@@YAMTvec3_t@@0MM@Z(axis, halfVector, bulbRadius, cosTheta);
}

/*
==============
PhysicallyBasedLight_AreaLightVPLOffsetTube
==============
*/

float __fastcall PhysicallyBasedLight_AreaLightVPLOffsetTube(const vec3_t *axis, const vec3_t *halfVector, double bulbRadius, double cosTheta)
{
  float v11; 
  float v67; 
  void *retaddr; 

  _R11 = &retaddr;
  v11 = halfVector->v[2];
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovsd  xmm6, qword ptr [rdx]
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovsd  xmm8, qword ptr [rcx]
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmm10, xmm2
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmm11, xmm3
    vmulss  xmm1, xmm6, xmm6
    vmovsd  [rsp+88h+var_88], xmm6
    vmovss  xmm5, dword ptr [rsp+88h+var_88+4]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
  }
  v67 = v11;
  __asm
  {
    vmovss  xmm7, [rsp+88h+var_80]
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm4, xmm9, xmm0
    vmulss  xmm0, xmm4, xmm6
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm6, xmm1, xmm6
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm2, xmm4, xmm5
    vmulss  xmm0, xmm2, xmm10
    vaddss  xmm3, xmm0, xmm5
    vmulss  xmm2, xmm1, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vaddss  xmm5, xmm2, xmm7
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vmulss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm6, xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm3, xmm3, xmm3
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vmulss  xmm1, xmm5, [rsp+88h+var_70]
    vaddss  xmm7, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm7, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vmulss  xmm3, xmm1, xmm11
    vmulss  xmm2, xmm11, xmm11
    vmovaps xmm11, xmmword ptr [r11-68h]
    vsubss  xmm0, xmm9, xmm2
    vmovaps xmm9, xmmword ptr [r11-48h]
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm3, xmm3, xmm1
    vaddss  xmm0, xmm3, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return *(float *)&_XMM0;
}

