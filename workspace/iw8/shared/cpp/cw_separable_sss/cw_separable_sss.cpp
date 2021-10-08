/*
==============
SSSSCalculateProfileParams
==============
*/

void __fastcall SSSSCalculateProfileParams(const SSSSProfile *profile, float *profileParams)
{
  ?SSSSCalculateProfileParams@@YAXPEBUSSSSProfile@@QEAM@Z(profile, profileParams);
}

/*
==============
SSSSCalculateScaleParams
==============
*/

void __fastcall SSSSCalculateScaleParams(const SSSSProfile *profile, float tanHalfFovY, float aspectRatio, float *scaleParams)
{
  ?SSSSCalculateScaleParams@@YAXPEBUSSSSProfile@@MMQEAM@Z(profile, tanHalfFovY, aspectRatio, scaleParams);
}

/*
==============
SSSSCalculateProfileParams
==============
*/
void SSSSCalculateProfileParams(const SSSSProfile *profile, float *profileParams)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm0, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [rdx], xmm0
    vdivss  xmm1, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+4], xmm1
    vdivss  xmm0, xmm2, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rdx+8], xmm0
  }
  profileParams[3] = profile->falloff;
}

/*
==============
SSSSCalculateScaleParams
==============
*/

void __fastcall SSSSCalculateScaleParams(const SSSSProfile *profile, float tanHalfFovY, double aspectRatio, float *scaleParams)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm3, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [r9], xmm1
    vdivss  xmm0, xmm3, dword ptr [rcx]
    vmovss  dword ptr [r9+4], xmm0
    vdivss  xmm0, xmm3, xmm2
    vmovss  dword ptr [r9+0Ch], xmm0
    vmovss  dword ptr [r9+8], xmm2
  }
}

