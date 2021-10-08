/*
==============
CM_RayTriangleIntersect
==============
*/

bool __fastcall CM_RayTriangleIntersect(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv)
{
  return ?CM_RayTriangleIntersect@@YA_NAEBTvec3_t@@0000PEAM11@Z(orig, dir, vert1, vert2, vert3, pt, pu, pv);
}

/*
==============
CM_RayTriangleIntersect
==============
*/
bool CM_RayTriangleIntersect(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv)
{
  char v36; 
  char v37; 
  bool result; 
  vec3_t v1; 
  vec3_t cross; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
  }
  _RAX = vert3;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm9, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [r9+4]
    vsubss  xmm11, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm12, xmm0, dword ptr [r8+8]
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm13, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm14, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm15, xmm0, dword ptr [r8+8]
  }
  _R15 = pt;
  _RDI = pu;
  _RBX = pv;
  _RBP = orig;
  __asm
  {
    vmovss  dword ptr [rsp+108h+v1+8], xmm15
    vmovss  dword ptr [rsp+108h+v1], xmm13
    vmovss  dword ptr [rsp+108h+v1+4], xmm14
  }
  Vec3Cross(dir, &v1, &cross);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+108h+cross+4]
    vmovss  xmm8, dword ptr [rsp+108h+cross]
    vmovss  xmm10, dword ptr [rsp+108h+cross+8]
    vmulss  xmm1, xmm5, xmm11
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm12
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@3a83126f
  }
  if ( v36 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm4, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm6, xmm1, dword ptr [rsi+4]
    vsubss  xmm7, xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm5, xmm6
    vmulss  xmm0, xmm8, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm7
    vaddss  xmm5, xmm2, xmm1
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm5, xmm10
    vcomiss xmm5, xmm3
  }
  if ( !(v36 | v37) )
    goto LABEL_11;
  __asm
  {
    vmulss  xmm1, xmm6, xmm12
    vmulss  xmm0, xmm7, xmm11
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm2, xmm7, xmm9
    vmulss  xmm0, xmm12, xmm4
    vsubss  xmm7, xmm2, xmm0
    vmulss  xmm0, xmm6, xmm9
    vmulss  xmm1, xmm11, xmm4
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [r14+4]
    vmulss  xmm0, xmm8, dword ptr [r14]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [r14+8]
    vaddss  xmm6, xmm2, xmm1
    vcomiss xmm6, xmm10
    vaddss  xmm0, xmm6, xmm5
    vcomiss xmm0, xmm3
  }
  if ( v36 | v37 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm4, xmm0, xmm3
      vmulss  xmm2, xmm14, xmm7
      vmulss  xmm1, xmm13, xmm8
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm9, xmm15
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, xmm4
      vmovss  dword ptr [r15], xmm1
    }
    if ( pu )
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm5
        vmovss  dword ptr [rdi], xmm0
      }
    }
    if ( pv )
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    result = 1;
  }
  else
  {
LABEL_11:
    result = 0;
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
  return result;
}

