/*
==============
bdMax<float>
==============
*/

const float *__fastcall bdMax<float>(const float *first, const float *second)
{
  return ??$bdMax@M@@YAAEBMAEBM0@Z(first, second);
}

/*
==============
bdMax<float>
==============
*/
const float *bdMax<float>(const float *first, const float *second)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rdx]
  }
  if ( v2 )
    return second;
  return first;
}

