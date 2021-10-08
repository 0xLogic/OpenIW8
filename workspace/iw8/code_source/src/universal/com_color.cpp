/*
==============
PQFromLinear
==============
*/

vec3_t *__fastcall PQFromLinear(vec3_t *result, vec3_t *linearValues)
{
  return ?PQFromLinear@@YA?ATvec3_t@@T1@@Z(result, linearValues);
}

/*
==============
LinearFromPQ
==============
*/

vec3_t *__fastcall LinearFromPQ(vec3_t *result, vec3_t *pqValues)
{
  return ?LinearFromPQ@@YA?ATvec3_t@@T1@@Z(result, pqValues);
}

/*
==============
Primaries_BT2020FromBT709
==============
*/

vec3_t *__fastcall Primaries_BT2020FromBT709(vec3_t *result, vec3_t *linearBT709)
{
  return ?Primaries_BT2020FromBT709@@YA?ATvec3_t@@T1@@Z(result, linearBT709);
}

/*
==============
LinearFromPQ
==============
*/
vec3_t *LinearFromPQ(vec3_t *result, vec3_t *pqValues)
{
  vec3_t *v35; 

  __asm
  {
    vmovss  xmm1, cs:__real@3c4fcdac; Y
    vmovss  xmm0, dword ptr [rdx]; X
    vmovaps [rsp+48h+var_18], xmm9
  }
  _RBX = pqValues;
  __asm { vmovaps [rsp+48h+var_28], xmm11 }
  _RDI = result;
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@3f560000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vmovss  xmm9, cs:__real@4196d000
    vsubss  xmm0, xmm9, xmm0
    vxorps  xmm11, xmm11, xmm11
    vmaxss  xmm2, xmm1, xmm11
    vmovss  xmm1, cs:__real@40c8e06b; Y
    vdivss  xmm0, xmm2, xmm0; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@461c4000
    vmovss  xmm1, cs:__real@3c4fcdac; Y
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rbx+4]; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm2, xmm0, cs:__real@3f560000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vmovss  xmm1, cs:__real@40c8e06b; Y
    vsubss  xmm0, xmm9, xmm0
    vmaxss  xmm3, xmm2, xmm11
    vdivss  xmm0, xmm3, xmm0; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@461c4000
    vmovss  xmm0, dword ptr [rbx+8]; X
    vmovss  xmm1, cs:__real@3c4fcdac; Y
    vmovss  dword ptr [rdi+4], xmm2
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm2, xmm0, cs:__real@3f560000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vmovss  xmm1, cs:__real@40c8e06b; Y
    vsubss  xmm0, xmm9, xmm0
    vmaxss  xmm3, xmm2, xmm11
    vdivss  xmm0, xmm3, xmm0; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmulss  xmm1, xmm0, cs:__real@461c4000 }
  v35 = _RDI;
  __asm
  {
    vmovaps xmm9, [rsp+48h+var_18]
    vmovaps xmm11, [rsp+48h+var_28]
    vmovss  dword ptr [rdi+8], xmm1
  }
  return v35;
}

/*
==============
PQFromLinear
==============
*/
vec3_t *PQFromLinear(vec3_t *result, vec3_t *linearValues)
{
  vec3_t *v31; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm0, cs:__real@38d1b717; X
    vmovss  xmm1, cs:__real@3e232000; Y
  }
  _RBX = linearValues;
  _RDI = result;
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@4196d000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vaddss  xmm2, xmm1, cs:__real@3f560000
    vaddss  xmm0, xmm0, cs:__real@3f800000
    vmovss  xmm1, cs:__real@429db000; Y
    vdivss  xmm0, xmm2, xmm0; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm1, cs:__real@38d1b717; X
    vmovss  xmm1, cs:__real@3e232000; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@4196d000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vaddss  xmm3, xmm0, cs:__real@3f800000
    vaddss  xmm4, xmm2, cs:__real@3f560000
    vmovss  xmm1, cs:__real@429db000; Y
    vdivss  xmm0, xmm4, xmm3; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  xmm1, cs:__real@3e232000; Y
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm2, cs:__real@38d1b717; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@4196d000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vaddss  xmm3, xmm0, cs:__real@3f800000
    vaddss  xmm4, xmm2, cs:__real@3f560000
    vmovss  xmm1, cs:__real@429db000; Y
    vdivss  xmm0, xmm4, xmm3; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  v31 = _RDI;
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  return v31;
}

/*
==============
Primaries_BT2020FromBT709
==============
*/
vec3_t *Primaries_BT2020FromBT709(vec3_t *result, vec3_t *linearBT709)
{
  vec3_t vec; 

  __asm { vmovsd  xmm0, qword ptr [rdx] }
  vec.v[2] = linearBT709->v[2];
  __asm { vmovsd  qword ptr [rsp+48h+vec], xmm0 }
  AxisTransformVec3(&BT2020_FROM_BT709_MAT, &vec, result);
  return result;
}

