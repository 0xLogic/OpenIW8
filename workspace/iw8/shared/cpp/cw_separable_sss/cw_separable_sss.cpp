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
  *profileParams = 1.0 / profile->radius[0];
  profileParams[1] = 1.0 / profile->radius[1];
  profileParams[2] = 1.0 / profile->radius[2];
  profileParams[3] = profile->falloff;
}

/*
==============
SSSSCalculateScaleParams
==============
*/
void SSSSCalculateScaleParams(const SSSSProfile *profile, float tanHalfFovY, float aspectRatio, float *scaleParams)
{
  *scaleParams = profile->maxRadius / tanHalfFovY;
  scaleParams[1] = 1.0 / profile->maxRadius;
  scaleParams[3] = 1.0 / aspectRatio;
  scaleParams[2] = aspectRatio;
}

