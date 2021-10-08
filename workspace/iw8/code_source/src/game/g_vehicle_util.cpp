/*
==============
Vehicle_AccelerateSpeed
==============
*/

double __fastcall Vehicle_AccelerateSpeed(float speed, float tgtSpeed, float accel, float dt)
{
  double result; 

  *(float *)&result = ?Vehicle_AccelerateSpeed@@YAMMMMM@Z(speed, tgtSpeed, accel, dt);
  return result;
}

/*
==============
Vehicle_AccelerateSpeed
==============
*/

float __fastcall Vehicle_AccelerateSpeed(double speed, double tgtSpeed, double accel, float dt)
{
  char v4; 

  __asm
  {
    vcomiss xmm0, xmm1
    vmulss  xmm4, xmm2, xmm3
  }
  if ( v4 )
  {
    __asm
    {
      vaddss  xmm0, xmm4, xmm0
      vminss  xmm0, xmm0, xmm1
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm4
      vmaxss  xmm0, xmm0, xmm1
    }
  }
  return *(float *)&_XMM0;
}

