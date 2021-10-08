/*
==============
FogSpline_MapFromDistanceRatioToCenteredTexCoord
==============
*/

double __fastcall FogSpline_MapFromDistanceRatioToCenteredTexCoord(float x)
{
  double result; 

  *(float *)&result = ?FogSpline_MapFromDistanceRatioToCenteredTexCoord@@YAMM@Z(x);
  return result;
}

/*
==============
FogSpline_MapFromDistanceRatioToTexCoordRatio
==============
*/

double __fastcall FogSpline_MapFromDistanceRatioToTexCoordRatio(float x)
{
  double result; 

  *(float *)&result = ?FogSpline_MapFromDistanceRatioToTexCoordRatio@@YAMM@Z(x);
  return result;
}

/*
==============
FogSpline_MapFromTexCoordRatioToDistanceRatio
==============
*/

double __fastcall FogSpline_MapFromTexCoordRatioToDistanceRatio(float x)
{
  double result; 

  *(float *)&result = ?FogSpline_MapFromTexCoordRatioToDistanceRatio@@YAMM@Z(x);
  return result;
}

/*
==============
FogSpline_MapFromDistanceRatioToCenteredTexCoord
==============
*/
float FogSpline_MapFromDistanceRatioToCenteredTexCoord(float x)
{
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm0
    vmulss  xmm3, xmm0, cs:__real@3f7e0000
    vaddss  xmm0, xmm3, cs:__real@3b800000
  }
  return *(float *)&_XMM0;
}

/*
==============
FogSpline_MapFromDistanceRatioToTexCoordRatio
==============
*/
float FogSpline_MapFromDistanceRatioToTexCoordRatio(float x)
{
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
FogSpline_MapFromTexCoordRatioToDistanceRatio
==============
*/
float FogSpline_MapFromTexCoordRatioToDistanceRatio(float x)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vsubss  xmm0, xmm2, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vsubss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

