/*
==============
CasSupportScaling
==============
*/

unsigned int __fastcall CasSupportScaling(float outX, float outY, float inX, float inY)
{
  return ?CasSupportScaling@@YAIMMMM@Z(outX, outY, inX, inY);
}

/*
==============
CasSupportScaling
==============
*/
_BOOL8 CasSupportScaling(float outX, float outY, float inX, float inY)
{
  return (float)((float)(outX * outY) / (float)(inX * inY)) <= 4.0;
}

