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
  return (float)((float)((float)(2.0 - x) * x) * 0.9921875) + 0.00390625;
}

/*
==============
FogSpline_MapFromDistanceRatioToTexCoordRatio
==============
*/
float FogSpline_MapFromDistanceRatioToTexCoordRatio(float x)
{
  return (float)(2.0 - x) * x;
}

/*
==============
FogSpline_MapFromTexCoordRatioToDistanceRatio
==============
*/
float FogSpline_MapFromTexCoordRatioToDistanceRatio(float x)
{
  return 1.0 - fsqrt(1.0 - x);
}

