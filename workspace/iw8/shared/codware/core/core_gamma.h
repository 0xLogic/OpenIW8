/*
==============
LinearToGammaColor_Srgb
==============
*/

void __fastcall LinearToGammaColor_Srgb(vec3_t *color)
{
  ?LinearToGammaColor_Srgb@@YAXAEATvec3_t@@@Z(color);
}

/*
==============
GammaToLinearColor_Srgb
==============
*/

void __fastcall GammaToLinearColor_Srgb(vec3_t *color)
{
  ?GammaToLinearColor_Srgb@@YAXAEATvec3_t@@@Z(color);
}

/*
==============
LinearToGammaColor_Srgb
==============
*/
void LinearToGammaColor_Srgb(vec3_t *color)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]; X
    vcomiss xmm0, cs:__real@3b4d2e1c
  }
  _RBX = color;
  __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f870a3d
    vsubss  xmm1, xmm1, cs:__real@3d6147ae
    vmovss  xmm0, dword ptr [rbx+4]; X
    vcomiss xmm0, cs:__real@3b4d2e1c
    vmovss  dword ptr [rbx], xmm1
  }
  if ( v4 | v5 )
  {
    __asm { vmulss  xmm1, xmm0, cs:__real@414eb852 }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f870a3d
      vsubss  xmm1, xmm1, cs:__real@3d6147ae
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]; X
    vcomiss xmm0, cs:__real@3b4d2e1c
    vmovss  dword ptr [rbx+4], xmm1
  }
  if ( v4 | v5 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@414eb852
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f870a3d
      vsubss  xmm2, xmm1, cs:__real@3d6147ae
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
}

/*
==============
GammaToLinearColor_Srgb
==============
*/
void GammaToLinearColor_Srgb(vec3_t *color)
{
  char v6; 
  char v7; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@3d20e411
  }
  _RBX = color;
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3f72a76f
    vaddss  xmm0, xmm0, cs:__real@3d55891a; X
    vmovss  xmm1, cs:__real@4019999a; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, cs:__real@3d20e411
  }
  if ( v6 | v7 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, cs:__real@3d20e411
  }
  if ( v6 | v7 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3d9e8391
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
  }
}

