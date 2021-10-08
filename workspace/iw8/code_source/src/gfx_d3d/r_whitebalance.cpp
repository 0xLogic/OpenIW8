/*
==============
R_WhiteBalance_Init
==============
*/

void R_WhiteBalance_Init(void)
{
  ?R_WhiteBalance_Init@@YAXXZ();
}

/*
==============
ChromaticAdaptationTransform_CAT02
==============
*/

void __fastcall ChromaticAdaptationTransform_CAT02(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  ?ChromaticAdaptationTransform_CAT02@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whitePoint, transform);
}

/*
==============
ChromaticAdaptationTransform_sRGB
==============
*/

void __fastcall ChromaticAdaptationTransform_sRGB(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  ?ChromaticAdaptationTransform_sRGB@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whitePoint, transform);
}

/*
==============
R_WhiteBalance_SetMatrix
==============
*/

void __fastcall R_WhiteBalance_SetMatrix(const GfxWhiteBalance *whiteBalance, const vec3_t *sRGBWhitePoint, tmat33_t<vec3_t> *matrix)
{
  ?R_WhiteBalance_SetMatrix@@YAXPEBUGfxWhiteBalance@@AEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whiteBalance, sRGBWhitePoint, matrix);
}

/*
==============
ChromaticAdaptationTransform_CAT02
==============
*/
void ChromaticAdaptationTransform_CAT02(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  tmat33_t<vec3_t> in2; 
  char v54; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = whitePoint;
  if ( whitePoint == (const vec3_t *)&v54 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm1, xmm5, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
    vmulss  xmm0, xmm7, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
    vmulss  xmm3, xmm5, cs:__real@3ec7e339
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
    vmulss  xmm0, xmm7, cs:__real@3f0cc8f1
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm1, xmm8, cs:__real@3c123fb3
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, cs:__real@3f73038c
    vaddss  xmm4, xmm2, xmm1
    vdivss  xmm2, xmm0, xmm4
    vmulss  xmm3, xmm2, xmm6
    vmulss  xmm1, xmm3, cs:__real@4036f122
    vmulss  xmm0, xmm3, cs:__real@be573a05
    vmulss  xmm2, xmm5, cs:__real@3d911565
    vmovss  dword ptr [rsp+0A8h+in2], xmm1
    vmulss  xmm1, xmm3, cs:__real@bd2b4310
    vmovss  dword ptr [rsp+0A8h+in2+4], xmm0
    vmulss  xmm0, xmm7, cs:__real@3f76926d
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, cs:__real@3f84870a
    vmovss  dword ptr [rsp+0A8h+in2+8], xmm1
    vmulss  xmm1, xmm8, cs:__real@3ab1f688
    vaddss  xmm4, xmm3, xmm1
    vdivss  xmm2, xmm0, xmm4
    vmulss  xmm3, xmm2, xmm6
    vmulss  xmm1, xmm3, cs:__real@bfd07c1e
    vmulss  xmm0, xmm3, cs:__real@3f943fed
    vmulss  xmm2, xmm5, cs:__real@3cbd4d5e
    vmovss  dword ptr [rsp+0A8h+in2+0Ch], xmm1
    vmulss  xmm1, xmm3, cs:__real@bdf202c6
    vmovss  dword ptr [rsp+0A8h+in2+10h], xmm0
    vmulss  xmm0, xmm7, cs:__real@3e0317e2
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, cs:__real@3f8b2f13
    vmovss  dword ptr [rsp+0A8h+in2+14h], xmm1
    vmulss  xmm1, xmm8, cs:__real@3f6fadc3
    vaddss  xmm4, xmm3, xmm1
    vdivss  xmm2, xmm0, xmm4
    vmulss  xmm3, xmm2, xmm6
    vmulss  xmm1, xmm3, cs:__real@bccbe849
    vmulss  xmm0, xmm3, cs:__real@39aa0453
    vmovss  dword ptr [rsp+0A8h+in2+18h], xmm1
    vmulss  xmm1, xmm3, cs:__real@3f88ca0f
    vmovss  dword ptr [rsp+0A8h+in2+20h], xmm1
    vmovss  dword ptr [rsp+0A8h+in2+1Ch], xmm0
  }
  MatrixMultiply(&s_sRGBToCAT02LMS, &in2, transform);
  _R11 = &v55;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
ChromaticAdaptationTransform_sRGB
==============
*/
void ChromaticAdaptationTransform_sRGB(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  vec3_t scale; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm6, dword ptr [rcx+8]
    vmulss  xmm1, xmm5, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
    vmulss  xmm0, xmm4, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
    vaddss  xmm3, xmm2, xmm1
    vdivss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rsp+58h+scale], xmm0
    vdivss  xmm0, xmm3, xmm6
    vdivss  xmm1, xmm3, xmm5
    vmovss  dword ptr [rsp+58h+scale+8], xmm0
    vmovss  dword ptr [rsp+58h+scale+4], xmm1
  }
  MatrixScale(&scale, transform);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
ColorTemperatureToDIlluminantChromaticity
==============
*/

void __fastcall ColorTemperatureToDIlluminantChromaticity(double colorTempK, vec2_t *chroma)
{
  char v2; 
  char v3; 

  __asm
  {
    vcomiss xmm0, cs:__real@45dac000
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm3, xmm1, xmm0
    vmulss  xmm2, xmm3, xmm3
    vmulss  xmm4, xmm2, xmm3
  }
  _RAX = chroma;
  if ( v2 | v3 )
  {
    __asm
    {
      vmulss  xmm1, xmm2, cs:__real@4a3523e0
      vmulss  xmm0, xmm4, cs:__real@4f894c9f
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, cs:__real@42c63852
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, cs:__real@3e79eba7
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm2, cs:__real@49e82740
      vmulss  xmm0, xmm4, cs:__real@4eef2e78
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, cs:__real@43777ae1
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, cs:__real@3e72ba9d
    }
  }
  __asm
  {
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm2, dword ptr [rdx]
    vmulss  xmm1, xmm2, cs:__real@40400000
    vmovss  xmm0, cs:__real@4037ae14
    vsubss  xmm1, xmm0, xmm1
    vmulss  xmm2, xmm1, xmm2
    vsubss  xmm3, xmm2, cs:__real@3e8ccccd
    vmovss  dword ptr [rdx+4], xmm3
  }
}

/*
==============
IlluminantChromaticityGreenMagentaTint
==============
*/

void __fastcall IlluminantChromaticityGreenMagentaTint(vec2_t *chroma, double colorTempK, double tint, bool useDIlluminant)
{
  char v108; 
  char v109; 
  float c; 
  vec2_t chromaa; 
  char v127; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0D8h+var_88], xmm14
    vmovaps [rsp+0D8h+var_98], xmm15
  }
  _RBX = chroma;
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vaddss  xmm0, xmm1, xmm14; colorTempK
    vmovaps xmm15, xmm2
  }
  if ( useDIlluminant )
  {
    ColorTemperatureToDIlluminantChromaticity(*(double *)&_XMM0, &chromaa);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+0D8h+chroma+4]
      vmovss  xmm13, dword ptr [rsp+0D8h+chroma]
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm10, xmm14, xmm0
      vmovss  xmm0, cs:__real@3e79057d
      vmulss  xmm9, xmm10, xmm10
      vmulss  xmm8, xmm9, xmm10
      vmulss  xmm7, xmm9, xmm9
      vmulss  xmm5, xmm8, xmm9
      vmulss  xmm1, xmm5, cs:__real@58d5070c
      vsubss  xmm2, xmm0, xmm1
      vmulss  xmm1, xmm7, cs:__real@54aa0b36
      vmulss  xmm0, xmm8, cs:__real@4fc528a4
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm9, cs:__real@4a305270
      vsubss  xmm4, xmm3, xmm0
      vmulss  xmm0, xmm10, cs:__real@43245a1d
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm13, xmm2, xmm0
      vmulss  xmm1, xmm13, cs:__real@40383223
      vsubss  xmm6, xmm1, cs:__real@3e951eda
      vmulss  xmm2, xmm13, cs:__real@3f357297
      vmulss  xmm0, xmm13, xmm5
      vmulss  xmm1, xmm0, cs:__real@599b388e
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm13, xmm7
      vmulss  xmm0, xmm2, cs:__real@5577cd62
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm13, xmm8
      vmulss  xmm2, xmm1, cs:__real@508fa883
      vmulss  xmm0, xmm13, xmm9
      vmulss  xmm1, xmm0, cs:__real@4b0079c9
      vsubss  xmm3, xmm4, xmm2
      vmulss  xmm2, xmm13, xmm10
      vmulss  xmm0, xmm2, cs:__real@43ef81fa
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm0
      vsubss  xmm7, xmm6, xmm1
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmulss  xmm0, xmm5, cs:__real@40c00000
    vmovss  xmm12, cs:__real@3fc00000
    vsubss  xmm1, xmm12, xmm3
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm3, cs:__real@40000000
    vdivss  xmm2, xmm14, xmm1
    vmulss  xmm9, xmm0, xmm2
    vmulss  xmm0, xmm5, cs:__real@40400000
    vmulss  xmm10, xmm0, xmm2
    vmulss  xmm0, xmm7, cs:__real@40c00000
    vsubss  xmm1, xmm12, xmm13
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm0, xmm7, cs:__real@40400000
    vmulss  xmm1, xmm13, cs:__real@40000000
    vdivss  xmm2, xmm1, xmm3
    vdivss  xmm1, xmm0, xmm3
    vsubss  xmm5, xmm1, xmm10
    vsubss  xmm6, xmm2, xmm9
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm1, xmm14, xmm0
    vmovss  xmm0, cs:__real@bfc90fdb; radians
    vmulss  xmm7, xmm6, xmm1
    vmulss  xmm8, xmm5, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, (float *)&chromaa, &c);
  __asm
  {
    vmulss  xmm1, xmm7, [rsp+0D8h+c]
    vmulss  xmm3, xmm7, dword ptr [rsp+0D8h+chroma]
    vmulss  xmm0, xmm8, dword ptr [rsp+0D8h+chroma]
    vmulss  xmm6, xmm15, cs:__real@39aec33e
    vmovss  xmm7, cs:__real@3f7fffef
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm8, [rsp+0D8h+c]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm5, xmm2, xmm9
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm4, xmm2, xmm10
    vmulss  xmm0, xmm4, cs:__real@40800000
    vsubss  xmm1, xmm5, xmm0
    vaddss  xmm3, xmm1, cs:__real@40000000
    vdivss  xmm1, xmm4, xmm3
    vmulss  xmm2, xmm5, xmm12
    vdivss  xmm0, xmm2, xmm3; val
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm1, cs:__real@358637bd; min
    vmovaps xmm2, xmm7; max
    vmovss  dword ptr [rbx], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@358637bd; min
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vaddss  xmm2, xmm1, xmm0
    vcomiss xmm2, xmm7
    vmovss  dword ptr [rbx+4], xmm0
  }
  if ( !(v108 | v109) )
  {
    __asm
    {
      vdivss  xmm2, xmm7, xmm2
      vmulss  xmm1, xmm1, xmm2
      vmulss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rbx+4], xmm0
    }
  }
  _R11 = &v127;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0D8h+var_98]
  }
}

/*
==============
R_WhiteBalance_Init
==============
*/
void R_WhiteBalance_Init(void)
{
  const dvar_t *v3; 

  if ( !r_whiteBalanceTweaks )
  {
    Dvar_BeginPermanentRegistration();
    r_whiteBalanceTweaks = Dvar_RegisterBool("OLSLLQSNS", 0, 4u, "Use white balance tweaks");
    r_whiteBalanceMethod = Dvar_RegisterEnum("OLLPQNLOPO", methodNames, 0, 0x44u, "White balance method");
    __asm
    {
      vmovss  xmm3, cs:__real@471c4000; max
      vmovss  xmm2, cs:__real@44fa0000; min
      vmovss  xmm1, cs:__real@459c4000; value
    }
    r_whiteBalanceIlluminant = Dvar_RegisterEnum("MNOQRLLRTQ", illuminantNames, 0, 0x44u, "White balance illuminant");
    v3 = Dvar_RegisterFloat("NOTKKKNTQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x45u, "White balance color temperature (2000K to 40000K) - only 4000K to 25000K is valid for D Custom");
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; max
      vmovss  xmm2, cs:__real@bf800000; min
    }
    r_whiteBalanceColorTempK = v3;
    __asm { vxorps  xmm1, xmm1, xmm1; value }
    r_whiteBalanceGreenMagentaShift = Dvar_RegisterFloat("NNTLNTPRNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x45u, "White balance green / magenta shift");
    Dvar_EndPermanentRegistration();
  }
}

/*
==============
R_WhiteBalance_SetMatrix
==============
*/
void R_WhiteBalance_SetMatrix(const GfxWhiteBalance *whiteBalance, const vec3_t *sRGBWhitePoint, tmat33_t<vec3_t> *matrix)
{
  __int64 illuminant; 
  __int64 method; 
  tmat33_t<vec3_t> *p_in2; 
  tmat33_t<vec3_t> *v60; 
  bool v82; 
  const tmat33_t<vec3_t> *v132; 
  vec3_t out; 
  vec3_t in1; 
  vec3_t v148; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v150; 
  tmat33_t<vec3_t> v151; 
  tmat33_t<vec3_t> v152; 
  char v156; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm13
  }
  illuminant = whiteBalance->illuminant;
  _R14 = 0x140000000ui64;
  method = whiteBalance->method;
  _RDI = sRGBWhitePoint;
  _R8 = whiteBalance;
  __asm { vmovss  xmm13, cs:__real@3f800000 }
  if ( (_DWORD)illuminant )
  {
    if ( (_DWORD)illuminant == 1 )
    {
      __asm { vmovss  xmm0, dword ptr [rcx+8]; colorTempK }
      ColorTemperatureToDIlluminantChromaticity(*(double *)&_XMM0, (vec2_t *)&out);
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+0Ch]
        vmovss  xmm1, dword ptr [rcx+8]
      }
      v82 = 1;
    }
    else
    {
      if ( (_DWORD)illuminant == 2 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3e79057d
          vmovaps xmmword ptr [rsp+1B0h+var_68+8], xmm9
          vmovaps [rsp+1B0h+var_78+8], xmm10
          vmovaps [rsp+1B0h+var_88+8], xmm11
          vdivss  xmm11, xmm13, dword ptr [rcx+8]
          vmulss  xmm10, xmm11, xmm11
          vmulss  xmm9, xmm11, xmm10
          vmulss  xmm5, xmm9, xmm10
          vmulss  xmm1, xmm5, cs:__real@58d5070c
          vsubss  xmm2, xmm0, xmm1
          vmulss  xmm0, xmm9, cs:__real@4fc528a4
          vmulss  xmm8, xmm10, xmm10
          vmulss  xmm1, xmm8, cs:__real@54aa0b36
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm1, xmm10, cs:__real@4a305270
          vsubss  xmm4, xmm3, xmm0
          vmulss  xmm0, xmm11, cs:__real@43245a1d
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm6, xmm2, xmm0
          vmulss  xmm1, xmm6, cs:__real@40383223
          vsubss  xmm7, xmm1, cs:__real@3e951eda
          vmulss  xmm2, xmm6, cs:__real@3f357297
          vmulss  xmm0, xmm6, xmm5
          vmulss  xmm1, xmm0, cs:__real@599b388e
          vsubss  xmm3, xmm2, xmm1
          vmovss  xmm1, dword ptr [rcx+8]; colorTempK
          vmulss  xmm2, xmm6, xmm8
          vmulss  xmm0, xmm2, cs:__real@5577cd62
          vaddss  xmm4, xmm3, xmm0
          vmulss  xmm3, xmm6, xmm9
          vmulss  xmm2, xmm3, cs:__real@508fa883
          vsubss  xmm5, xmm4, xmm2
          vmulss  xmm0, xmm6, xmm10
          vmulss  xmm3, xmm0, cs:__real@4b0079c9
          vmulss  xmm2, xmm6, xmm11
          vmulss  xmm0, xmm2, cs:__real@43ef81fa
          vmovss  xmm2, dword ptr [rcx+0Ch]; tint
          vaddss  xmm4, xmm5, xmm3
          vaddss  xmm3, xmm4, xmm0
          vsubss  xmm4, xmm7, xmm3
          vmovss  dword ptr [rsp+1B0h+out+4], xmm4
          vmovss  dword ptr [rsp+1B0h+out], xmm6
        }
        IlluminantChromaticityGreenMagentaTint((vec2_t *)&out, *(double *)&_XMM1, *(double *)&_XMM2, 0);
        __asm
        {
          vmovaps xmm11, [rsp+1B0h+var_88+8]
          vmovaps xmm10, [rsp+1B0h+var_78+8]
          vmovaps xmm9, xmmword ptr [rsp+1B0h+var_68+8]
        }
        goto LABEL_16;
      }
      __asm { vmovss  xmm2, dword ptr [r8+0Ch]; tint }
      _RCX = 5 * illuminant;
      v82 = 0;
      __asm
      {
        vmovss  xmm0, dword ptr rva illuminants.x2[r14+rcx*4]
        vmovss  xmm1, rva illuminants.cct[r14+rcx*4]; colorTempK
        vmovss  dword ptr [rsp+1B0h+out], xmm0
        vmovss  xmm0, rva illuminants.y2[r14+rcx*4]
        vmovss  dword ptr [rsp+1B0h+out+4], xmm0
      }
    }
    IlluminantChromaticityGreenMagentaTint((vec2_t *)&out, *(double *)&_XMM1, *(double *)&_XMM2, v82);
  }
  else
  {
    if ( !(_DWORD)method )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rdx]
        vmovss  xmm5, dword ptr [rdx+4]
        vmovss  xmm6, dword ptr [rdx+8]
        vmulss  xmm1, xmm5, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
        vmulss  xmm0, xmm4, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
        vaddss  xmm3, xmm2, xmm1
        vdivss  xmm0, xmm3, xmm4
        vmovss  dword ptr [rsp+1B0h+out], xmm0
        vdivss  xmm0, xmm3, xmm6
        vdivss  xmm1, xmm3, xmm5
        vmovss  dword ptr [rsp+1B0h+out+8], xmm0
        vmovss  dword ptr [rsp+1B0h+out+4], xmm1
      }
      MatrixScale(&out, matrix);
      goto LABEL_23;
    }
    if ( (_DWORD)method == 1 )
    {
      if ( sRGBWhitePoint == &v148 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+4]
        vmovss  xmm6, dword ptr [rdi]
        vmovss  xmm8, dword ptr [rdi+8]
        vmulss  xmm1, xmm5, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+4; vec3_t const vec3_colorluminance
        vmulss  xmm0, xmm6, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B; vec3_t const vec3_colorluminance
        vmulss  xmm3, xmm5, cs:__real@3f0cc8f1
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr cs:?vec3_colorluminance@@3Tvec3_t@@B+8; vec3_t const vec3_colorluminance
        vmulss  xmm0, xmm6, cs:__real@3ec7e339
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm1, xmm8, cs:__real@3c123fb3
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm0, cs:__real@3f73038c
        vaddss  xmm4, xmm2, xmm1
        vdivss  xmm2, xmm0, xmm4
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm1, xmm3, cs:__real@4036f122
        vmulss  xmm0, xmm3, cs:__real@be573a05
        vmulss  xmm2, xmm5, cs:__real@3f76926d
        vmovss  dword ptr [rsp+1B0h+in2], xmm1
        vmulss  xmm1, xmm3, cs:__real@bd2b4310
        vmovss  dword ptr [rsp+1B0h+in2+4], xmm0
        vmulss  xmm0, xmm6, cs:__real@3d911565
        vaddss  xmm3, xmm2, xmm0
        vmovss  xmm0, cs:__real@3f84870a
        vmovss  dword ptr [rsp+1B0h+in2+8], xmm1
        vmulss  xmm1, xmm8, cs:__real@3ab1f688
        vaddss  xmm4, xmm3, xmm1
        vdivss  xmm2, xmm0, xmm4
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm1, xmm3, cs:__real@bfd07c1e
        vmulss  xmm0, xmm3, cs:__real@3f943fed
        vmulss  xmm2, xmm5, cs:__real@3e0317e2
        vmovss  dword ptr [rsp+1B0h+in2+0Ch], xmm1
        vmulss  xmm1, xmm3, cs:__real@bdf202c6
        vmovss  dword ptr [rbp+0B0h+in2+10h], xmm0
        vmulss  xmm0, xmm6, cs:__real@3cbd4d5e
        vaddss  xmm3, xmm2, xmm0
        vmovss  xmm0, cs:__real@3f8b2f13
        vmovss  dword ptr [rbp+0B0h+in2+14h], xmm1
        vmulss  xmm1, xmm8, cs:__real@3f6fadc3
        vaddss  xmm4, xmm3, xmm1
        vdivss  xmm2, xmm0, xmm4
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm1, xmm3, cs:__real@bccbe849
        vmulss  xmm0, xmm3, cs:__real@39aa0453
        vmovss  dword ptr [rbp+0B0h+in2+18h], xmm1
        vmulss  xmm1, xmm3, cs:__real@3f88ca0f
        vmovss  dword ptr [rbp+0B0h+in2+20h], xmm1
        vmovss  dword ptr [rbp+0B0h+in2+1Ch], xmm0
      }
      p_in2 = &in2;
      v60 = &s_sRGBToCAT02LMS;
      goto LABEL_22;
    }
    MatrixTransformVector(sRGBWhitePoint, &s_sRGBD65ToXYZ, &out);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+1B0h+out+4]
      vaddss  xmm0, xmm4, dword ptr [rsp+1B0h+out]
      vaddss  xmm1, xmm0, dword ptr [rsp+1B0h+out+8]
      vdivss  xmm2, xmm13, xmm1
      vmulss  xmm0, xmm2, dword ptr [rsp+1B0h+out]
      vmulss  xmm3, xmm2, xmm4
      vmovss  dword ptr [rsp+1B0h+out], xmm0
      vmovss  dword ptr [rsp+1B0h+out+4], xmm3
    }
  }
LABEL_16:
  if ( (unsigned int)method >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_whitebalance.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( crd ) < (unsigned)( CRD_COUNT )", "crd doesn't index CRD_COUNT\n\t%i not in [0, %i)", method, 7) )
    __debugbreak();
  if ( (_DWORD)method != 6 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+1B0h+out]
      vmovss  xmm3, dword ptr [rsp+1B0h+out+4]
      vmovss  xmm0, cs:__real@3f735200
      vmovss  xmm1, cs:__real@3f8b5dcc
      vmovss  dword ptr [rsp+1B0h+in1], xmm0
      vdivss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+1B0h+out], xmm0
      vsubss  xmm0, xmm13, xmm2
      vmovss  dword ptr [rsp+1B0h+in1+8], xmm1
    }
    v132 = &s_XYZToCRD[method];
    __asm
    {
      vsubss  xmm1, xmm0, xmm3
      vdivss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+1B0h+out+8], xmm2
      vmovss  dword ptr [rsp+1B0h+in1+4], xmm13
      vmovss  dword ptr [rsp+1B0h+out+4], xmm13
    }
    MatrixTransformVector(&in1, v132, &v148);
    MatrixTransformVector(&out, v132, &in1);
    MatrixIdentity33(&in2);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1B0h+var_150]
      vdivss  xmm1, xmm0, dword ptr [rsp+1B0h+in1]
      vmovss  xmm2, dword ptr [rsp+1B0h+var_150+4]
      vdivss  xmm0, xmm2, dword ptr [rsp+1B0h+in1+4]
      vmovss  dword ptr [rsp+1B0h+in2], xmm1
      vmovss  xmm1, dword ptr [rsp+1B0h+var_150+8]
      vdivss  xmm2, xmm1, dword ptr [rsp+1B0h+in1+8]
      vmovss  dword ptr [rbp+0B0h+in2+20h], xmm2
      vmovss  dword ptr [rbp+0B0h+in2+10h], xmm0
    }
    MatrixInverse(v132, &v151);
    MatrixMultiply(&s_sRGBD50ToXYZ, v132, &v150);
    MatrixMultiply(&v150, &in2, &v152);
    MatrixMultiply(&v152, &v151, &v150);
    p_in2 = &s_XYZTosRGBD65;
    v60 = &v150;
LABEL_22:
    MatrixMultiply(v60, p_in2, matrix);
    goto LABEL_23;
  }
  MatrixIdentity33(matrix);
LABEL_23:
  _R11 = &v156;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm13, xmmword ptr [r11-70h]
  }
}

