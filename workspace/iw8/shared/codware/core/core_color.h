/*
==============
Byte4PackRgba
==============
*/

void __fastcall Byte4PackRgba(const vec4_t *from, unsigned __int8 *to)
{
  ?Byte4PackRgba@@YAXAEBTvec4_t@@QEAE@Z(from, to);
}

/*
==============
ColorNormalizeLuminance
==============
*/

double __fastcall ColorNormalizeLuminance(vec3_t *color)
{
  double result; 

  *(float *)&result = ?ColorNormalizeLuminance@@YAMAEATvec3_t@@@Z(color);
  return result;
}

/*
==============
Byte4PackRgba
==============
*/
void Byte4PackRgba(const vec4_t *from, unsigned __int8 *to)
{
  unsigned __int8 v10; 
  unsigned __int8 v15; 
  unsigned __int8 v20; 
  unsigned __int8 v26; 

  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmulss  xmm1, xmm5, dword ptr [rcx]
    vmovss  xmm4, cs:__real@3f000000
    vmovaps [rsp+18h+var_18], xmm6
    vaddss  xmm2, xmm1, xmm4
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si r8d, xmm3
  }
  if ( _ER8 > 255 )
    _ER8 = 255;
  v10 = _ER8;
  if ( _ER8 < 0 )
    v10 = 0;
  *to = v10;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [rcx+4]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v15 = _ECX;
  if ( _ECX < 0 )
    v15 = 0;
  to[1] = v15;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [r9+8]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v20 = _ECX;
  if ( _ECX < 0 )
    v20 = 0;
  to[2] = v20;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [r9+0Ch]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vmovaps xmm6, [rsp+18h+var_18]
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v26 = _ECX;
  if ( _ECX < 0 )
    v26 = 0;
  to[3] = v26;
}

/*
==============
ColorNormalizeLuminance
==============
*/
float ColorNormalizeLuminance(vec3_t *color)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmulss  xmm0, xmm4, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+4; vec3_t const luminanceCoefficientsBT709
    vmovss  xmm5, dword ptr [rcx]
    vmulss  xmm1, xmm5, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B; vec3_t const luminanceCoefficientsBT709
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vmulss  xmm1, xmm6, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+8; vec3_t const luminanceCoefficientsBT709
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm0, xmm2
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm3, xmm1, xmm0
    vmulss  xmm2, xmm5, xmm3
    vmovss  dword ptr [rcx], xmm2
    vmulss  xmm2, xmm6, xmm3
    vmulss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rcx+8], xmm2
    vmovss  dword ptr [rcx+4], xmm1
    vmovaps xmm6, [rsp+18h+var_18]
  }
  return *(float *)&_XMM0;
}

