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

float __fastcall Vehicle_AccelerateSpeed(double speed, float tgtSpeed, double accel, float dt)
{
  __int128 v4; 
  __int128 v8; 

  v4 = *(_OWORD *)&accel;
  *(float *)&v4 = *(float *)&accel * dt;
  if ( *(float *)&speed >= tgtSpeed )
  {
    v8 = *(_OWORD *)&speed;
    *(float *)&v8 = *(float *)&speed - (float)(*(float *)&accel * dt);
    _XMM0 = v8;
    __asm { vmaxss  xmm0, xmm0, xmm1 }
  }
  else
  {
    *(float *)&v4 = *(float *)&v4 + *(float *)&speed;
    _XMM0 = v4;
    __asm { vminss  xmm0, xmm0, xmm1 }
  }
  return *(float *)&_XMM0;
}

