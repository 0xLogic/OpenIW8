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

__int64 __fastcall CasSupportScaling(double outX, float outY, double inX, float inY)
{
  __asm
  {
    vmulss  xmm1, xmm0, xmm1
    vmulss  xmm0, xmm2, xmm3
    vdivss  xmm2, xmm1, xmm0
    vcomiss xmm2, cs:__real@40800000
  }
  return 1i64;
}

