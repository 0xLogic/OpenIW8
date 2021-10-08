/*
==============
SpartialPartition_Tree_Test::FrustumCullBox
==============
*/

bool __fastcall SpartialPartition_Tree_Test::FrustumCullBox(const Bounds *bounds, const vec4_t *planes, int planeCount)
{
  return ?FrustumCullBox@SpartialPartition_Tree_Test@@YA_NPEIBUBounds@@PEIBTvec4_t@@H@Z(bounds, planes, planeCount);
}

/*
==============
SpatialPartition_Tree_Test
==============
*/

void SpatialPartition_Tree_Test(void)
{
  ?SpatialPartition_Tree_Test@@YAXXZ();
}

/*
==============
SpartialPartition_Tree_Test::FrustumAABBIntersection
==============
*/

bool __fastcall SpartialPartition_Tree_Test::FrustumAABBIntersection(const vec4_t *frustumPlanes, unsigned int numFrustumPlanes, const vec3_t *boxMin, const vec3_t *boxMax)
{
  return ?FrustumAABBIntersection@SpartialPartition_Tree_Test@@YA_NPEBTvec4_t@@IAEBTvec3_t@@1@Z(frustumPlanes, numFrustumPlanes, boxMin, boxMax);
}

/*
==============
SpartialPartition_Tree_Test::BoxEntirelyBehindPlane
==============
*/

bool __fastcall SpartialPartition_Tree_Test::BoxEntirelyBehindPlane(const Bounds *bounds, const vec4_t *plane)
{
  return ?BoxEntirelyBehindPlane@SpartialPartition_Tree_Test@@YA_NPEIBUBounds@@PEIBTvec4_t@@@Z(bounds, plane);
}

/*
==============
SpartialPartition_Tree_Test::SphereAABBIntersection
==============
*/

bool __fastcall SpartialPartition_Tree_Test::SphereAABBIntersection(const vec3_t *spherePos, float sphereRadius, const vec3_t *boxMin, const vec3_t *boxMax)
{
  return ?SphereAABBIntersection@SpartialPartition_Tree_Test@@YA_NAEBTvec3_t@@M00@Z(spherePos, sphereRadius, boxMin, boxMax);
}

/*
==============
SpartialPartition_Tree_Test::BoxEntirelyBehindPlane
==============
*/
bool SpartialPartition_Tree_Test::BoxEntirelyBehindPlane(const Bounds *bounds, const vec4_t *plane)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, dword ptr [rdx+4]
    vandps  xmm0, xmm1, xmm5
    vmulss  xmm2, xmm0, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm4, dword ptr [rcx+4]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+8]
    vandps  xmm4, xmm4, xmm5
    vmulss  xmm0, xmm4, dword ptr [rcx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rcx+8]
    vandps  xmm6, xmm6, xmm5
    vmulss  xmm0, xmm6, dword ptr [rcx+14h]
    vmovaps xmm6, [rsp+18h+var_18]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm2, xmm1
  }
  return 0;
}

/*
==============
SpartialPartition_Tree_Test::FrustumAABBIntersection
==============
*/
bool SpartialPartition_Tree_Test::FrustumAABBIntersection(const vec4_t *frustumPlanes, unsigned int numFrustumPlanes, const vec3_t *boxMin, const vec3_t *boxMax)
{
  unsigned int v20; 
  bool v33; 
  bool result; 
  float v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
    vmovsd  xmm1, qword ptr [r8]
    vmovss  xmm4, cs:__real@3f000000
    vmovsd  xmm6, qword ptr [r9]
    vaddss  xmm0, xmm6, xmm1
    vmulss  xmm12, xmm0, xmm4
  }
  v20 = 0;
  v71 = boxMax->v[2];
  __asm
  {
    vmovss  xmm3, [rsp+0B8h+var_A4]
    vmovsd  [rsp+0B8h+var_B8], xmm1
    vmovsd  [rsp+0B8h+var_AC], xmm6
    vmovss  xmm5, dword ptr [rsp+0B8h+var_AC+4]
    vaddss  xmm0, xmm5, dword ptr [rsp+0B8h+var_B8+4]
    vmulss  xmm13, xmm0, xmm4
    vaddss  xmm0, xmm3, [rsp+0B8h+var_B0]
    vmulss  xmm14, xmm0, xmm4
    vsubss  xmm0, xmm14, [rsp+0B8h+var_B0]
    vsubss  xmm7, xmm12, xmm1
    vsubss  xmm1, xmm13, dword ptr [rsp+0B8h+var_B8+4]
    vsubss  xmm2, xmm5, xmm13
    vsubss  xmm5, xmm3, xmm14
    vsubss  xmm4, xmm6, xmm12
  }
  v33 = numFrustumPlanes == 0;
  if ( (int)numFrustumPlanes <= 0 )
  {
LABEL_5:
    result = 1;
  }
  else
  {
    __asm
    {
      vmaxss  xmm8, xmm4, xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmaxss  xmm9, xmm2, xmm1
      vmaxss  xmm10, xmm5, xmm0
    }
    _RAX = &frustumPlanes->xyz + 1;
    __asm { vxorps  xmm11, xmm11, xmm11 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax-0Ch]
        vmovss  xmm5, dword ptr [rax-8]
        vmovss  xmm6, dword ptr [rax-4]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm8
        vmulss  xmm0, xmm12, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm13, xmm5
        vmulss  xmm1, xmm14, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm9
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm11
      }
      if ( v33 )
        break;
      ++v20;
      _RAX = (vec3_t *)((char *)_RAX + 16);
      v33 = v20 <= numFrustumPlanes;
      if ( (int)v20 >= (int)numFrustumPlanes )
        goto LABEL_5;
    }
    result = 0;
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0B8h+var_88]
    vmovaps xmm14, [rsp+0B8h+var_98]
  }
  return result;
}

/*
==============
SpartialPartition_Tree_Test::FrustumCullBox
==============
*/
bool SpartialPartition_Tree_Test::FrustumCullBox(const Bounds *bounds, const vec4_t *planes, int planeCount)
{
  int v13; 
  bool v14; 
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  v13 = 0;
  __asm
  {
    vmovaps [rsp+98h+var_88], xmm13
    vmovaps [rsp+98h+var_98], xmm14
  }
  v14 = planeCount == 0;
  if ( planeCount <= 0 )
  {
LABEL_5:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rcx+0Ch]
      vmovss  xmm9, dword ptr [rcx]
      vmovss  xmm10, dword ptr [rcx+4]
      vmovss  xmm11, dword ptr [rcx+10h]
      vmovss  xmm12, dword ptr [rcx+8]
      vmovss  xmm13, dword ptr [rcx+14h]
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    _RCX = &planes->xyz + 1;
    __asm { vxorps  xmm14, xmm14, xmm14 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rcx-0Ch]
        vmovss  xmm5, dword ptr [rcx-8]
        vmovss  xmm6, dword ptr [rcx-4]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm8
        vmulss  xmm0, xmm9, xmm1
        vaddss  xmm1, xmm0, dword ptr [rcx]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm10, xmm5
        vmulss  xmm1, xmm12, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm11
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm14
      }
      if ( v14 )
        break;
      ++v13;
      _RCX = (vec3_t *)((char *)_RCX + 16);
      v14 = v13 <= (unsigned int)planeCount;
      if ( v13 >= planeCount )
        goto LABEL_5;
    }
    result = 1;
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+98h+var_88]
    vmovaps xmm14, [rsp+98h+var_98]
  }
  return result;
}

/*
==============
SpartialPartition_Tree_Test::MakeTree
==============
*/
SpartialPartition_Tree_Test::Tree_Buffer *SpartialPartition_Tree_Test::MakeTree(SpartialPartition_Tree_Test::Tree_Buffer *buffer, const ExtentBounds *bounds, unsigned int numBounds)
{
  __int64 v3; 
  const ExtentBounds *v4; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned __int8 *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int i; 
  unsigned int v15; 
  unsigned int v17; 
  unsigned __int8 *v22; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v28; 

  v3 = numBounds;
  v4 = bounds;
  if ( numBounds - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 195, ASSERT_TYPE_ASSERT, "(numBounds >= 1 && numBounds <= SPATIAL_PARTITION_MAX_CHILDREN)", (const char *)&queryFormat, "numBounds >= 1 && numBounds <= SPATIAL_PARTITION_MAX_CHILDREN") )
    __debugbreak();
  *(_QWORD *)&buffer->data[16] = 0x2000i64;
  *(_QWORD *)buffer->data = &buffer->data[24];
  v6 = 0;
  v7 = v3;
  *(_QWORD *)&buffer->data[8] = 0i64;
  buffer->data[24] = 2 * v3;
  v8 = truncate_cast<unsigned int,unsigned __int64>(4 * v3 + 28);
  v9 = truncate_cast<unsigned int,unsigned __int64>(v8 + 4i64 * (unsigned int)(6 * v3));
  v28 = v9;
  if ( (_DWORD)v3 )
  {
    v10 = &buffer->data[28];
    v11 = v9 - 24i64;
    do
    {
      v10 += 4;
      v12 = v11 >> 2;
      v11 += 8i64;
      *((_DWORD *)v10 - 1) = v12;
      --v7;
    }
    while ( v7 );
  }
  _R13 = &buffer->data[v8];
  for ( i = 0; i < 6; ++i )
  {
    v15 = 0;
    if ( (_DWORD)v3 )
    {
      _RDI = v4;
      v17 = i % 3;
      do
      {
        if ( i >= 3 )
        {
          if ( v17 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = i % 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          _RAX = (int)v17;
          __asm { vmovss  xmm0, dword ptr [rdi+rax*4+0Ch] }
        }
        else
        {
          if ( v17 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = i % 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          _RAX = (int)v17;
          __asm { vmovss  xmm0, dword ptr [rdi+rax*4] }
        }
        _RAX = (_DWORD)v3 * i + v15;
        ++_RDI;
        ++v15;
        __asm { vmovss  dword ptr [r13+rax*4+0], xmm0 }
      }
      while ( v15 < (unsigned int)v3 );
      v4 = bounds;
      v6 = 0;
    }
  }
  if ( !(_DWORD)v3 )
    return buffer;
  v22 = &buffer->data[v28];
  do
  {
    *v22 = 3;
    *((_DWORD *)v22 + 1) = v6;
    v22 += 8;
    ++v6;
  }
  while ( v6 < (unsigned int)v3 );
  return buffer;
}

/*
==============
SpartialPartition_Tree_Test::RayAABBIntersect
==============
*/
float SpartialPartition_Tree_Test::RayAABBIntersect(const vec3_t *rayStart, const vec3_t *rayDir, const vec3_t *boxMin, const vec3_t *boxMax)
{
  unsigned int v37; 
  bool v43; 
  bool v46; 
  bool v47; 
  bool v48; 
  __int64 v75; 
  __int64 v76; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps [rsp+108h+var_98], xmm14
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm8, dword ptr [r9+8]
    vmovss  xmm3, dword ptr [r9]
    vsubss  xmm0, xmm3, dword ptr [r8]
    vmovss  xmm5, dword ptr [r9+4]
    vsubss  xmm1, xmm5, dword ptr [r8+4]
    vmovss  xmm10, cs:__real@7f7fffff
    vmovss  xmm11, cs:__real@ff7fffff
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm12, cs:__real@38d1b717
    vmovss  xmm14, cs:__real@3f800000
    vmulss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm0, xmm7
    vmovss  [rsp+108h+var_C8], xmm0
    vsubss  xmm0, xmm8, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm3, dword ptr [r8]
    vmovss  [rsp+108h+var_C0], xmm1
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm5, dword ptr [r8+4]
    vmovss  [rsp+108h+var_C4], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm8, dword ptr [r8+8]
    vmovss  [rsp+108h+var_B8], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
  }
  v37 = 0;
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vmovss  [rsp+108h+var_B4], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx+8]
    vmovss  [rsp+108h+var_B0], xmm2
  }
  _RSI = rayDir;
  _RDI = 0i64;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  v43 = 1;
  while ( 1 )
  {
    if ( !v43 )
    {
      LODWORD(v76) = 3;
      LODWORD(v75) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v75, v76) )
        __debugbreak();
    }
    __asm { vmovss  xmm7, [rsp+rdi+108h+var_C8] }
    if ( v37 >= 3 )
    {
      LODWORD(v76) = 3;
      LODWORD(v75) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v75, v76) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, [rsp+rdi+108h+var_B8] }
    v46 = v37 < 3;
    v47 = v37 <= 3;
    if ( v37 >= 3 )
    {
      LODWORD(v76) = 3;
      LODWORD(v75) = v37;
      v48 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v75, v76);
      v46 = 0;
      v47 = !v48;
      if ( v48 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+rsi]
      vandps  xmm0, xmm1, xmm9
      vcomiss xmm0, xmm12
    }
    if ( v47 )
    {
      __asm
      {
        vxorps  xmm0, xmm6, xmm13
        vsubss  xmm1, xmm0, xmm7
        vcomiss xmm1, xmm8
      }
      if ( !v47 )
        break;
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vcomiss xmm0, xmm8
      }
    }
    else
    {
      __asm
      {
        vdivss  xmm2, xmm14, xmm1
        vsubss  xmm1, xmm6, xmm7
        vaddss  xmm0, xmm6, xmm7
        vmulss  xmm3, xmm1, xmm2
        vmulss  xmm4, xmm0, xmm2
        vminss  xmm0, xmm3, xmm4
        vmaxss  xmm1, xmm3, xmm4
        vmaxss  xmm11, xmm0, xmm11
        vminss  xmm10, xmm1, xmm10
        vcomiss xmm11, xmm10
      }
      if ( !v47 )
        break;
      __asm { vcomiss xmm10, xmm8 }
    }
    if ( v46 )
      break;
    ++v37;
    _RDI += 4i64;
    v43 = v37 < 3;
    if ( (int)v37 >= 3 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm11
        vblendvps xmm0, xmm10, xmm11, xmm0
      }
      goto LABEL_20;
    }
  }
  __asm { vmovss  xmm0, cs:__real@bf800000 }
LABEL_20:
  _R11 = &v80;
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
    vmovaps xmm14, [rsp+108h+var_98]
  }
  return *(float *)&_XMM0;
}

/*
==============
SpartialPartition_Tree_Test::RunTest_Big
==============
*/
signed __int64 SpartialPartition_Tree_Test::RunTest_Big()
{
  signed __int64 result; 
  void *v11; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int i; 
  int v48; 
  unsigned int v86; 
  unsigned int v190; 
  unsigned int v215; 
  __int64 v254; 
  unsigned int v287; 
  unsigned int v288; 
  unsigned int v289; 
  unsigned int v290; 
  unsigned int v291; 
  unsigned int v297; 
  bool v299; 
  bool v300; 
  bool v301; 
  char v302; 
  const vec3_t *v304; 
  bool v307; 
  char v308; 
  int v326; 
  int v327; 
  unsigned int v328; 
  bool v329; 
  char v354; 
  char v355; 
  __int64 v356; 
  __int64 v357; 
  __int64 v358; 
  __int64 v359; 
  __int64 v360; 
  SpatialPartition_Tree *v361; 
  unsigned int v366; 
  __int64 v378; 
  char v379[26928]; 
  char v390; 

  v11 = alloca(result);
  __asm
  {
    vmovaps [rsp+6A58h+var_38], xmm6
    vmovaps [rsp+6A58h+var_48], xmm7
    vmovaps [rsp+6A58h+var_58], xmm8
    vmovaps [rsp+6A58h+var_68], xmm9
    vmovaps [rsp+6A58h+var_78], xmm10
    vmovaps [rsp+6A58h+var_88], xmm11
    vmovaps [rsp+6A58h+var_98], xmm12
    vmovaps [rsp+6A58h+var_A8], xmm13
    vmovaps [rsp+6A58h+var_B8], xmm14
    vmovaps [rsp+6A58h+var_C8], xmm15
  }
  _RBP = (unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 26912) = (unsigned __int64)&v378 ^ _security_cookie;
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm0, cs:__real@80000000
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm8, cs:__real@2f800000
    vmovss  xmm7, cs:__real@447a0000
    vmovss  xmm9, cs:__real@3dcccccd
    vmovss  xmm15, cs:__real@34000000
  }
  LODWORD(result) = 0;
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm13
    vmovss  dword ptr [rbp+24h], xmm0
  }
  *(_DWORD *)(_RBP + 48) = 0;
  do
  {
    v21 = 233191843 - 597723754 * result;
    v22 = v21 % 7 + 1;
    *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = v22;
    if ( v21 % 7 != -1 )
    {
      __asm
      {
        vmovss  xmm15, cs:__real@447a0000
        vmovss  xmm12, cs:__real@3c23d70a
      }
      _RSI = _RBP + 26732;
      v26 = v22;
      do
      {
        v27 = 0;
        do
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm8
            vmulss  xmm2, xmm1, xmm15
            vsubss  xmm0, xmm13, xmm1
            vmulss  xmm1, xmm0, xmm15
            vxorps  xmm0, xmm0, xmm0
            vsubss  xmm6, xmm2, xmm1
          }
          v21 = 1103515245 * (1103515245 * v21 + 12345) + 12345;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm3, xmm0, xmm8
            vsubss  xmm1, xmm13, xmm3
            vmulss  xmm2, xmm1, xmm12
            vmulss  xmm0, xmm3, xmm15
            vaddss  xmm7, xmm2, xmm0
          }
          _RDI = (int)v27;
          __asm
          {
            vsubss  xmm0, xmm6, xmm7
            vmovss  dword ptr [rsi+rdi*4-0Ch], xmm0
          }
          ++v27;
          __asm
          {
            vaddss  xmm0, xmm7, xmm6
            vmovss  dword ptr [rsi+rdi*4], xmm0
          }
        }
        while ( v27 < 3 );
        _RSI += 24i64;
        --v26;
      }
      while ( v26 );
      __asm
      {
        vmovss  xmm15, cs:__real@34000000
        vmovss  xmm7, cs:__real@447a0000
        vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
      }
    }
    *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(_RBP + 18112), (const ExtentBounds *)(_RBP + 26720), v22);
    *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = 0;
    do
    {
      for ( i = 0; i < 3; ++i )
      {
        while ( 1 )
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
          v48 = 1103515245 * v21 + 12345;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm8
            vmulss  xmm2, xmm1, xmm7
            vsubss  xmm0, xmm13, xmm1
            vmulss  xmm1, xmm0, xmm7
            vsubss  xmm6, xmm2, xmm1
            vxorps  xmm0, xmm0, xmm0
          }
          _RSI = (int)i;
          v21 = 1103515245 * v48 + 12345;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm8
            vcomiss xmm1, xmm9
            vmovss  dword ptr [rbp+rsi*4+0C0h], xmm6
          }
          if ( (unsigned int)(1103515245 * v48) < 0xFFFFCFC7 )
          {
            __asm { vxorps  xmm0, xmm0, xmm0 }
            v21 = 1103515245 * v21 + 12345;
            __asm
            {
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm1, xmm0, xmm8
              vmulss  xmm2, xmm1, xmm7
              vsubss  xmm0, xmm13, xmm1
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm6, xmm2, xmm1
            }
          }
          else
          {
            __asm { vmovss  xmm6, dword ptr [rbp+rsi*4+0C0h] }
          }
          __asm { vmovss  dword ptr [rbp+rsi*4+100h], xmm6 }
          if ( !v22 )
            break;
          _RDI = _RBP + 4i64 * (int)i + 26732;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi-0Ch]
            vsubss  xmm1, xmm0, dword ptr [rbp+rsi*4+0C0h]
            vandps  xmm1, xmm1, xmm14
            vcomiss xmm1, xmm15
          }
        }
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+100h]
        vmovss  xmm6, dword ptr [rbp+0C0h]
        vmovss  xmm8, dword ptr [rbp+104h]
        vmovss  xmm9, dword ptr [rbp+0C4h]
        vmovss  xmm10, dword ptr [rbp+108h]
        vmovss  xmm11, dword ptr [rbp+0C8h]
        vsubss  xmm7, xmm3, xmm6
        vsubss  xmm4, xmm8, xmm9
        vmulss  xmm1, xmm4, xmm4
        vsubss  xmm5, xmm10, xmm11
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm1, xmm2, xmm2
        vcomiss xmm1, cs:__real@3c23d70a
        vmovss  dword ptr [rbp+0D0h], xmm7
      }
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v21;
      *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 2) = i > 3;
      __asm
      {
        vmovss  dword ptr [rbp+0D4h], xmm4
        vmovss  dword ptr [rbp+0D8h], xmm5
      }
      if ( i > 3 )
      {
        __asm
        {
          vcmpless xmm0, xmm1, dword ptr [rbp+24h]
          vblendvps xmm0, xmm1, xmm13, xmm0
          vdivss  xmm1, xmm13, xmm0
          vmulss  xmm7, xmm1, xmm7
          vmulss  xmm4, xmm1, xmm4
          vmulss  xmm5, xmm1, xmm5
          vmovss  dword ptr [rbp+0D0h], xmm7
          vmovss  dword ptr [rbp+0D4h], xmm4
          vmovss  dword ptr [rbp+0D8h], xmm5
        }
      }
      v86 = 0;
      if ( i > 3 )
      {
        __asm
        {
          vxorps  xmm12, xmm7, xmm12
          vmulss  xmm1, xmm12, xmm12
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcomiss xmm2, cs:__real@3c23d70a
          vcmpless xmm0, xmm2, dword ptr [rbp+24h]
          vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
          vblendvps xmm0, xmm2, xmm13, xmm0
          vdivss  xmm1, xmm13, xmm0
          vmulss  xmm2, xmm1, xmm4
          vmulss  xmm3, xmm1, xmm12
          vmulss  xmm1, xmm2, xmm4
          vmulss  xmm0, xmm2, xmm5
          vmulss  xmm6, xmm3, xmm5
          vxorps  xmm5, xmm0, xmm9
          vmulss  xmm0, xmm3, xmm7
          vsubss  xmm4, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm0
          vmovss  dword ptr [rbp+118h], xmm4
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm13
          vandps  xmm4, xmm4, xmm14
          vcomiss xmm4, cs:__real@3c23d70a
          vmovss  dword ptr [rbp+110h], xmm6
          vmovss  dword ptr [rbp+114h], xmm5
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 496, ASSERT_TYPE_ASSERT, "(fabsf( Vec3Length( localUp ) - 1.0f ) < 0.01f)", (const char *)&queryFormat, "fabsf( Vec3Length( localUp ) - 1.0f ) < 0.01f") )
          __debugbreak();
        __asm
        {
          vmovss  xmm8, cs:__real@2f800000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm3, xmm0, xmm8
          vmulss  xmm0, xmm3, cs:__real@3f860a92
          vsubss  xmm1, xmm13, xmm3
          vmulss  xmm2, xmm1, cs:__real@3c8efa35
          vaddss  xmm6, xmm2, xmm0
          vmovaps xmm3, xmm6; degrees
        }
        RotatePointAroundVector((vec3_t *)(_RBP + 448), (const vec3_t *)(_RBP + 272), (const vec3_t *)(_RBP + 208), *(float *)&_XMM3);
        __asm { vxorps  xmm3, xmm6, xmm9; degrees }
        RotatePointAroundVector((vec3_t *)(_RBP + 432), (const vec3_t *)(_RBP + 272), (const vec3_t *)(_RBP + 208), *(float *)&_XMM3);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+20h]
          vmovss  xmm13, dword ptr [rbp+114h]
          vmovss  xmm12, dword ptr [rbp+118h]
          vmovss  xmm11, dword ptr [rbp+110h]
          vmulss  xmm1, xmm13, dword ptr [rbp+1C8h]
          vmulss  xmm0, xmm12, dword ptr [rbp+1C4h]
          vmulss  xmm2, xmm12, dword ptr [rbp+1C0h]
          vmulss  xmm3, xmm11, dword ptr [rbp+1B8h]
          vsubss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm11, dword ptr [rbp+1C8h]
          vmovss  dword ptr [rbp+1A0h], xmm1
          vsubss  xmm1, xmm2, xmm0
          vmulss  xmm2, xmm11, dword ptr [rbp+1C4h]
          vmulss  xmm0, xmm13, dword ptr [rbp+1C0h]
          vmovss  dword ptr [rbp+1A4h], xmm1
          vsubss  xmm1, xmm2, xmm0
          vmulss  xmm2, xmm12, dword ptr [rbp+1B4h]
          vmulss  xmm0, xmm13, dword ptr [rbp+1B8h]
          vmovss  dword ptr [rbp+1A8h], xmm1
          vsubss  xmm1, xmm2, xmm0
          vmulss  xmm0, xmm12, dword ptr [rbp+1B0h]
          vmulss  xmm2, xmm13, dword ptr [rbp+1B0h]
          vmovss  dword ptr [rbp+180h], xmm1
          vsubss  xmm1, xmm3, xmm0
          vmulss  xmm0, xmm11, dword ptr [rbp+1B4h]
          vmovss  dword ptr [rbp+184h], xmm1
          vsubss  xmm1, xmm2, xmm0
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+188h], xmm1
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm0, xmm8
          vmulss  xmm0, xmm2, cs:__real@437a0000
          vsubss  xmm1, xmm5, xmm2
          vaddss  xmm7, xmm1, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm0, xmm8
          vsubss  xmm1, xmm5, xmm2
          vaddss  xmm0, xmm7, xmm5
          vmulss  xmm3, xmm1, xmm0
          vaddss  xmm1, xmm7, cs:__real@447a0000
          vmulss  xmm2, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vaddss  xmm6, xmm3, xmm2
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm0, xmm8
          vmulss  xmm0, xmm2, cs:__real@447a0000
          vsubss  xmm1, xmm5, xmm2
          vmovss  xmm5, dword ptr [rbp+0D0h]
          vmulss  xmm2, xmm7, xmm5
          vaddss  xmm10, xmm1, xmm0
          vmovss  xmm9, dword ptr [rbp+0C0h]
          vmovss  xmm8, dword ptr [rbp+0C4h]
          vmovss  xmm3, dword ptr [rbp+0D8h]
          vmovss  xmm4, dword ptr [rbp+0D4h]
          vaddss  xmm0, xmm2, xmm9
          vmovss  dword ptr [rbp+170h], xmm0
          vmulss  xmm1, xmm4, xmm7
          vaddss  xmm0, xmm1, xmm8
          vmovss  dword ptr [rbp+174h], xmm0
          vmulss  xmm1, xmm3, xmm7
          vmovss  xmm7, dword ptr [rbp+0C8h]
          vaddss  xmm0, xmm1, xmm7
          vmovss  dword ptr [rbp+178h], xmm0
          vmulss  xmm1, xmm6, xmm5
          vaddss  xmm2, xmm1, xmm9
          vmovss  dword ptr [rbp+190h], xmm2
          vmulss  xmm2, xmm3, xmm6
          vmulss  xmm0, xmm4, xmm6
          vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
          vaddss  xmm1, xmm0, xmm8
          vaddss  xmm0, xmm2, xmm7
          vmovss  dword ptr [rbp+198h], xmm0
          vmovss  dword ptr [rbp+194h], xmm1
          vxorps  xmm1, xmm5, xmm6
          vmovss  dword ptr [rbp+160h], xmm1
          vxorps  xmm1, xmm3, xmm6
          vmovss  dword ptr [rbp+168h], xmm1
          vxorps  xmm3, xmm10, xmm6
          vxorps  xmm0, xmm4, xmm6
          vmovss  dword ptr [rbp+164h], xmm0
          vmulss  xmm0, xmm11, xmm10
          vaddss  xmm2, xmm0, xmm9
        }
        v190 = 1103515245 * (1103515245 * (1103515245 * (1103515245 * (1103515245 * v21 + 12345) + 12345) + 12345) + 12345) + 12345;
        __asm
        {
          vmovss  dword ptr [rbp+1E0h], xmm2
          vmulss  xmm1, xmm13, xmm10
          vaddss  xmm0, xmm1, xmm8
          vmovss  dword ptr [rbp+1E4h], xmm0
          vmulss  xmm2, xmm12, xmm10
          vaddss  xmm1, xmm2, xmm7
          vmovss  dword ptr [rbp+1E8h], xmm1
          vmulss  xmm0, xmm3, xmm11
          vaddss  xmm1, xmm0, xmm9
          vmulss  xmm2, xmm3, xmm13
          vaddss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbp+154h], xmm0
          vmovss  dword ptr [rbp+150h], xmm1
          vxorps  xmm0, xmm11, xmm6
          vmulss  xmm1, xmm3, xmm12
          vaddss  xmm2, xmm1, xmm7
          vmovss  dword ptr [rbp+1D0h], xmm0
          vxorps  xmm0, xmm12, xmm6
          vxorps  xmm1, xmm13, xmm6
          vmovss  dword ptr [rbp+1D8h], xmm0
          vmovss  dword ptr [rbp+158h], xmm2
          vmovss  dword ptr [rbp+1D4h], xmm1
        }
        if ( v190 % 5 )
        {
          do
          {
            _RAX = PlaneFromPoint((vec4_t *)(_RBP + 144), (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 208));
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups xmmword ptr [rbp+0E0h], xmm0
              vmovups xmm1, xmmword ptr [rbp+0E0h]
            }
            _RAX = v86++;
            _RAX *= 2i64;
            __asm
            {
              vshufps xmm0, xmm0, xmm0, 0FFh
              vxorps  xmm0, xmm0, xmm6
              vinsertps xmm1, xmm1, xmm0, 30h ; '0'
              vmovups xmmword ptr [rbp+0E0h], xmm1
              vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
            }
          }
          while ( v86 < v190 % 5 );
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 128), (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 416));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v86;
        v215 = v86 + 1;
        __asm { vshufps xmm0, xmm0, xmm0, 0FFh }
        _RAX *= 2i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+0E0h], xmm1
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 64), (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 384));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v215++;
        __asm { vshufps xmm0, xmm0, xmm0, 0FFh }
        _RAX *= 2i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+0E0h], xmm1
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 112), (const vec3_t *)(_RBP + 368), (const vec3_t *)(_RBP + 208));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v215++;
        __asm { vshufps xmm0, xmm0, xmm0, 0FFh }
        _RAX *= 2i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+0E0h], xmm1
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 96), (const vec3_t *)(_RBP + 400), (const vec3_t *)(_RBP + 352));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v215++;
        __asm { vshufps xmm0, xmm0, xmm0, 0FFh }
        _RAX *= 2i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+0E0h], xmm1
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 80), (const vec3_t *)(_RBP + 480), (const vec3_t *)(_RBP + 464));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v215++;
        __asm { vshufps xmm0, xmm0, xmm0, 0FFh }
        _RAX *= 2i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+0E0h], xmm1
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        _RAX = PlaneFromPoint((vec4_t *)(_RBP + 160), (const vec3_t *)(_RBP + 336), (const vec3_t *)(_RBP + 272));
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0E0h], xmm0
          vmovups xmm1, xmmword ptr [rbp+0E0h]
        }
        _RAX = v215;
        v86 = v215 + 1;
        _RAX *= 2i64;
        __asm
        {
          vshufps xmm0, xmm0, xmm0, 0FFh
          vxorps  xmm0, xmm0, xmm6
          vinsertps xmm1, xmm1, xmm0, 30h ; '0'
          vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
        }
        v21 = 1103515245 * v190 + 12345;
        *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v21;
        __asm { vmovups xmmword ptr [rbp+0E0h], xmm1 }
        if ( v21 % 5 )
        {
          v254 = v21 % 5;
          do
          {
            _RAX = PlaneFromPoint((vec4_t *)(_RBP + 176), (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 208));
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups xmmword ptr [rbp+0E0h], xmm0
              vmovups xmm1, xmmword ptr [rbp+0E0h]
            }
            _RAX = v86++;
            _RAX *= 2i64;
            __asm
            {
              vshufps xmm0, xmm0, xmm0, 0FFh
              vxorps  xmm0, xmm0, xmm6
              vinsertps xmm1, xmm1, xmm0, 30h ; '0'
              vmovups xmmword ptr [rbp+0E0h], xmm1
              vmovups xmmword ptr [rbp+rax*8+6760h], xmm1
            }
            --v254;
          }
          while ( v254 );
        }
        if ( v86 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 538, ASSERT_TYPE_ASSERT, "(numFrustumPlanes <= ( sizeof( *array_counter( frustumPlanes ) ) + 0 ))", (const char *)&queryFormat, "numFrustumPlanes <= ARRAY_COUNT( frustumPlanes )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm11, dword ptr [rbp+0C8h]
          vmovss  xmm9, dword ptr [rbp+0C4h]
          vmovss  xmm6, dword ptr [rbp+0C0h]
          vmovss  xmm10, dword ptr [rbp+108h]
          vmovss  xmm8, dword ptr [rbp+104h]
          vmovss  xmm3, dword ptr [rbp+100h]
        }
      }
      __asm
      {
        vmovss  xmm4, cs:__real@3f000000
        vminss  xmm13, xmm6, xmm3
        vmaxss  xmm12, xmm6, xmm3
        vminss  xmm7, xmm9, xmm8
        vmaxss  xmm6, xmm11, xmm10
        vmaxss  xmm9, xmm9, xmm8
        vminss  xmm0, xmm11, xmm10
        vmovss  dword ptr [rbp+128h], xmm0
        vminss  xmm8, xmm11, xmm10
        vaddss  xmm0, xmm13, xmm12
        vmulss  xmm2, xmm0, xmm4
        vaddss  xmm0, xmm8, xmm6
        vaddss  xmm1, xmm9, xmm7
        vmulss  xmm3, xmm1, xmm4
        vmulss  xmm4, xmm0, xmm4
        vsubss  xmm0, xmm12, xmm2
        vsubss  xmm1, xmm2, xmm13
        vmaxss  xmm5, xmm1, xmm0
        vsubss  xmm1, xmm3, xmm7
        vsubss  xmm0, xmm9, xmm3
        vmovss  dword ptr [rbp+138h], xmm2
        vmaxss  xmm2, xmm1, xmm0
        vsubss  xmm0, xmm6, xmm4
        vsubss  xmm1, xmm4, xmm8
      }
      v287 = 0;
      v288 = 0;
      v289 = 0;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0;
      v290 = 0;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = 0;
      v291 = 0;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0;
      __asm
      {
        vmovss  dword ptr [rbp+13Ch], xmm3
        vmaxss  xmm3, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm2, xmm2
        vmovss  dword ptr [rbp+148h], xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm10, xmm2, xmm1
        vmovss  dword ptr [rbp+134h], xmm6
      }
      v297 = 0;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = 0;
      __asm
      {
        vsqrtss xmm6, xmm10, xmm10
        vmovss  dword ptr [rbp+34h], xmm6
        vmovss  dword ptr [rbp+120h], xmm13
        vmovss  dword ptr [rbp+124h], xmm7
        vmovss  dword ptr [rbp+12Ch], xmm12
        vmovss  dword ptr [rbp+130h], xmm9
        vmovss  dword ptr [rbp+140h], xmm4
        vmovss  dword ptr [rbp+144h], xmm5
        vmovss  dword ptr [rbp+14Ch], xmm3
        vmovss  dword ptr [rbp+28h], xmm10
      }
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
      v299 = 0;
      v300 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) == 0;
      v301 = v300;
      if ( *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
      {
        v302 = *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 2);
        _RBX = _RBP + 26736;
        v304 = (const vec3_t *)(_RBP + 26720);
        __asm { vmovaps xmm15, xmm7 }
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rbx-10h]
            vcomiss xmm6, xmm12
          }
          if ( v301 )
          {
            __asm { vcomiss xmm9, dword ptr [rbx-0Ch] }
            if ( v299 )
            {
              v307 = 0;
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+134h]
                vcomiss xmm0, dword ptr [rbx-8]
              }
              if ( v299 )
              {
                v307 = 0;
              }
              else
              {
                __asm
                {
                  vcomiss xmm13, dword ptr [rbx-4]
                  vcomiss xmm15, dword ptr [rbx]
                  vcomiss xmm8, dword ptr [rbx+4]
                }
                v307 = v299 || v300;
              }
            }
          }
          else
          {
            v307 = 0;
          }
          *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 3) = SpartialPartition_Tree_Test::SegmentAABBIntersection((const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 256), v304, v304 + 1);
          v308 = 0;
          if ( !v302 )
            goto LABEL_41;
          *(float *)&_XMM0 = SpartialPartition_Tree_Test::RayAABBIntersect((const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 208), v304, v304 + 1);
          __asm { vcomiss xmm0, cs:__real@00000000 }
          *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 1;
          if ( v308 )
LABEL_41:
            *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 0;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-4]
            vminss  xmm0, xmm0, dword ptr [rbp+138h]
            vmaxss  xmm3, xmm0, xmm6
            vmovss  xmm6, dword ptr [rbp+13Ch]
            vmovss  xmm0, dword ptr [rbx+4]
            vminss  xmm1, xmm6, dword ptr [rbx]
            vminss  xmm0, xmm0, dword ptr [rbp+140h]
            vmaxss  xmm2, xmm0, dword ptr [rbx-8]
            vsubss  xmm4, xmm2, dword ptr [rbp+140h]
            vmaxss  xmm5, xmm1, dword ptr [rbx-0Ch]
            vsubss  xmm3, xmm3, dword ptr [rbp+138h]
            vsubss  xmm1, xmm5, xmm6
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm1
            vcomiss xmm10, xmm2
          }
          *(_BYTE *)_RBP = !v308;
          if ( !v86 )
            goto LABEL_50;
          __asm { vmovsd  xmm0, qword ptr [rbx-10h] }
          v326 = *(_DWORD *)(_RBX - 8);
          __asm
          {
            vmovsd  qword ptr [rbp+1F0h], xmm0
            vmovsd  xmm0, qword ptr [rbx-4]
          }
          *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1F8) = v326;
          v327 = *(_DWORD *)(_RBX + 4);
          __asm { vmovsd  qword ptr [rbp+1FCh], xmm0 }
          *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x204) = v327;
          Bounds_FromExtentBounds((Bounds *)(_RBP + 224), (const ExtentBounds *)(_RBP + 496));
          v328 = 0;
          v329 = v86 == 0;
          if ( (int)v86 > 0 )
            break;
LABEL_48:
          v354 = 1;
LABEL_51:
          v300 = !v307;
          v355 = *(_BYTE *)_RBP;
          if ( !v300 )
          {
            if ( !v355 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 571, ASSERT_TYPE_ASSERT, "(intersectSphere)", (const char *)&queryFormat, "intersectSphere") )
              __debugbreak();
            v356 = *(unsigned int *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v356 + 0x66C0) = v297;
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = v356 + 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 3) )
          {
            v357 = *(unsigned int *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v357 + 0x66E0) = v297;
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = v357 + 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 1) )
          {
            v358 = *(unsigned int *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v358 + 0x6700) = v297;
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v358 + 1;
          }
          if ( v355 )
          {
            v359 = *(unsigned int *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v359 + 0x6720) = v297;
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v359 + 1;
          }
          if ( v354 )
          {
            v360 = *(unsigned int *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v360 + 0x6740) = v297;
            v291 = v360 + 1;
            *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v291;
          }
          else
          {
            v291 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
          }
          ++v297;
          v304 += 2;
          _RBX += 24i64;
          v299 = v297 < *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C);
          v300 = v297 == *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C);
          v301 = v297 <= *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C);
          if ( v297 >= *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
          {
            __asm
            {
              vmovss  xmm15, cs:__real@34000000
              vmovss  xmm6, dword ptr [rbp+34h]
            }
            v21 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
            v290 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
            v289 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            v288 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
            v287 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
            goto LABEL_67;
          }
        }
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+0F4h]
          vmovss  xmm8, dword ptr [rbp+0F0h]
          vmovss  xmm9, dword ptr [rbp+0ECh]
          vmovss  xmm10, dword ptr [rbp+0E8h]
          vmovss  xmm11, dword ptr [rbp+0E4h]
          vmovss  xmm12, dword ptr [rbp+0E0h]
        }
        _RAX = _RBP + 26476;
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rax-0Ch]
            vmovss  xmm5, dword ptr [rax-8]
            vmovss  xmm6, dword ptr [rax-4]
            vandps  xmm0, xmm1, xmm14
            vmulss  xmm2, xmm0, xmm9
            vmulss  xmm0, xmm12, xmm1
            vaddss  xmm1, xmm0, dword ptr [rax]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm11, xmm5
            vmulss  xmm1, xmm10, xmm6
            vaddss  xmm4, xmm3, xmm2
            vandps  xmm5, xmm5, xmm14
            vmulss  xmm0, xmm5, xmm8
            vaddss  xmm2, xmm4, xmm0
            vandps  xmm6, xmm6, xmm14
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm7
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, cs:__real@00000000
          }
          if ( v329 )
            break;
          ++v328;
          _RAX += 16i64;
          v329 = v328 <= v86;
          if ( (int)v328 >= (int)v86 )
          {
            __asm
            {
              vmovss  xmm12, dword ptr [rbp+12Ch]
              vmovss  xmm8, dword ptr [rbp+128h]
              vmovss  xmm9, dword ptr [rbp+130h]
              vmovss  xmm10, dword ptr [rbp+28h]
            }
            goto LABEL_48;
          }
        }
        __asm
        {
          vmovss  xmm12, dword ptr [rbp+12Ch]
          vmovss  xmm8, dword ptr [rbp+128h]
          vmovss  xmm9, dword ptr [rbp+130h]
          vmovss  xmm10, dword ptr [rbp+28h]
        }
LABEL_50:
        v354 = 0;
        goto LABEL_51;
      }
LABEL_67:
      v361 = *(SpatialPartition_Tree **)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
      SpartialPartition_Tree_Test::TestBox(v361, (const ExtentBounds *)(_RBP + 288), v287, (const unsigned int *)(_RBP + 26304));
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E0) = 0i64;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E8) = 0;
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2F0) = 0i64;
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2F8) = 0i64;
      SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 544), v361, (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 256));
      SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(_RBP + 544), v288, (const unsigned int *)(_RBP + 26336));
      if ( *(_BYTE *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 2) )
      {
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C0) = 0i64;
        *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C8) = 0;
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13D0) = 0i64;
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13D8) = 0i64;
        SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 4864), v361, (const vec3_t *)(_RBP + 192), (const vec3_t *)(_RBP + 208));
        SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(_RBP + 4864), v289, (const unsigned int *)(_RBP + 26368));
      }
      __asm { vmovaps xmm3, xmm6; radius }
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24A0) = 0i64;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24A8) = 0;
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24B0) = 0i64;
      *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24B8) = 0i64;
      SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 9184), v361, (const vec3_t *)(_RBP + 312), *(float *)&_XMM3);
      SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(_RBP + 9184), v290, (const unsigned int *)(_RBP + 26400));
      if ( v86 )
      {
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3580) = 0i64;
        *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3588) = 0;
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3590) = 0i64;
        *(_QWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3598) = 0i64;
        SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 13504), v361, (const vec4_t *)(_RBP + 26464), v86);
        SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(_RBP + 13504), v291, (const unsigned int *)(_RBP + 26432));
      }
      __asm
      {
        vmovss  xmm7, cs:__real@447a0000
        vmovss  xmm13, dword ptr [rbp+20h]
        vmovss  xmm8, cs:__real@2f800000
        vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm9, cs:__real@3dcccccd
      }
      v22 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C);
      v366 = *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) + 1;
      *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = v366;
    }
    while ( v366 < 0x64 );
    result = (unsigned int)(*(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) + 1);
    *(_DWORD *)(((unsigned __int64)v379 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = result;
  }
  while ( (unsigned int)result < 0x64 );
  _R11 = &v390;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
SpartialPartition_Tree_Test::RunTest_Moving
==============
*/
void SpartialPartition_Tree_Test::RunTest_Moving()
{
  signed __int64 v0; 
  void *v3; 
  SpatialPartition_Tree *Tree; 
  __int64 v21; 
  char v22[12928]; 
  char v25; 

  v3 = alloca(v0);
  __asm
  {
    vmovaps [rsp+32E8h+var_18], xmm6
    vmovaps [rsp+32E8h+var_28], xmm7
  }
  _RBP = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 12912) = (unsigned __int64)&v21 ^ _security_cookie;
  __asm
  {
    vmovups ymm0, cs:__ymm@434800004489800043a50000435c000042dc0000439600004348000042c80000
    vmovups xmm1, cs:__xmm@43a50000435c0000448ac00043960000
    vmovups ymmword ptr [rbp+3230h], ymm0
    vmovups xmmword ptr [rbp+3250h], xmm1
    vmovups xmm0, cs:__xmm@42d2000043910000433e000042b40000
    vmovss  xmm6, cs:__real@434d0000
  }
  Tree = (SpatialPartition_Tree *)SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 4640), (const ExtentBounds *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 12848), 2u);
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3260) = 50;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3264) = 60;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3268) = 70;
  Tree->alwaysListLength = 3;
  __asm
  {
    vmovups xmmword ptr [rbp+3230h], xmm0
    vmovss  xmm0, cs:__real@43988000
  }
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3220) = 50;
  Tree->alwaysList = (unsigned int *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 12896);
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3224) = 60;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm6
    vmovss  dword ptr [rbp+3244h], xmm0
  }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3228) = 70i64;
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(_RBP + 12848), 4u, (const unsigned int *)(_RBP + 12832));
  __asm
  {
    vmovups xmm0, cs:__xmm@42d2000043910000433e000042b40000
    vmovss  xmm1, cs:__real@43918000
    vmovss  dword ptr [rbp+3244h], xmm1
    vmovups xmmword ptr [rbp+3230h], xmm0
    vmovss  dword ptr [rbp+3240h], xmm6
  }
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(_RBP + 12848), 3u, (const unsigned int *)(_RBP + 12832));
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovss  xmm7, cs:__real@3f800000
    vmovups xmmword ptr [rbp+3230h], xmm0
    vmovss  dword ptr [rbp+3240h], xmm7
    vmovss  dword ptr [rbp+3244h], xmm7
  }
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(_RBP + 12848), 3u, (const unsigned int *)(_RBP + 12832));
  __asm { vxorps  xmm6, xmm6, xmm6 }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm6
    vmovss  dword ptr [rbp+8], xmm6
    vmovss  dword ptr [rbp+3230h], xmm6
    vmovss  dword ptr [rbp+3234h], xmm6
    vmovss  dword ptr [rbp+3238h], xmm6
    vmovss  dword ptr [rbp+0], xmm7
  }
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 32), Tree, (const vec3_t *)(_RBP + 12848), (const vec3_t *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(_RBP + 32), 3u, (const unsigned int *)(_RBP + 12832));
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3230h], xmm7
    vmovss  dword ptr [rbp+3234h], xmm6
    vmovss  dword ptr [rbp+3238h], xmm6
    vmovss  dword ptr [rbp+0], xmm6
    vmovss  dword ptr [rbp+4], xmm6
    vmovss  dword ptr [rbp+8], xmm6
  }
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 32), Tree, (const vec3_t *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64), (const vec3_t *)(_RBP + 12848));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(_RBP + 32), 3u, (const unsigned int *)(_RBP + 12832));
  __asm { vmovaps xmm3, xmm7; radius }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3230h], xmm6
    vmovss  dword ptr [rbp+3234h], xmm6
    vmovss  dword ptr [rbp+3238h], xmm6
  }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 32), Tree, (const vec3_t *)(_RBP + 12848), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(_RBP + 32), 3u, (const unsigned int *)(_RBP + 12832));
  __asm { vmovups xmm0, cs:__xmm@c3fa00003f8000000000000000000000 }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  __asm { vmovups xmmword ptr [rbp+10h], xmm0 }
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 32), Tree, (const vec4_t *)(_RBP + 16), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(_RBP + 32), 3u, (const unsigned int *)(_RBP + 12832));
  _R11 = &v25;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
SpartialPartition_Tree_Test::RunTest_Simple
==============
*/
void SpartialPartition_Tree_Test::RunTest_Simple()
{
  signed __int64 v0; 
  void *v11; 
  SpatialPartition_Tree *Tree; 
  SpatialPartition_Tree *v19; 
  __int64 v60; 
  char v61[13008]; 
  char v72; 

  v11 = alloca(v0);
  __asm
  {
    vmovaps [rsp+33B8h+var_18], xmm6
    vmovaps [rsp+33B8h+var_28], xmm7
    vmovaps [rsp+33B8h+var_38], xmm8
    vmovaps [rsp+33B8h+var_48], xmm9
    vmovaps [rsp+33B8h+var_58], xmm10
    vmovaps [rsp+33B8h+var_68], xmm11
    vmovaps [rsp+33B8h+var_78], xmm12
    vmovaps [rsp+33B8h+var_88], xmm13
    vmovaps [rsp+33B8h+var_98], xmm14
    vmovaps [rsp+33B8h+var_A8], xmm15
  }
  _RBP = (unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 12992) = (unsigned __int64)&v60 ^ _security_cookie;
  __asm
  {
    vmovups ymm0, cs:__ymm@434800004489800043a50000435c000042dc0000439600004348000042c80000
    vmovups xmm1, cs:__xmm@43a50000435c0000448ac00043960000
    vmovups ymmword ptr [rbp+3240h], ymm0
    vmovups xmmword ptr [rbp+3260h], xmm1
  }
  Tree = (SpatialPartition_Tree *)SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 4672), (const ExtentBounds *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 2u);
  __asm
  {
    vmovups xmm0, cs:__xmm@42d2000043910000433e000042b40000
    vmovss  xmm15, cs:__real@434d0000
    vmovss  xmm14, cs:__real@43988000
  }
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 1;
  *(_DWORD *)_RBP = 0;
  __asm { vmovss  dword ptr [rbp+3250h], xmm15 }
  v19 = Tree;
  __asm
  {
    vmovss  dword ptr [rbp+3254h], xmm14
    vmovups xmmword ptr [rbp+3240h], xmm0
  }
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 1u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovups xmm0, cs:__xmm@42d2000043910000433e000042b40000
    vmovss  xmm1, cs:__real@43918000
    vmovss  dword ptr [rbp+3254h], xmm1
    vmovups xmmword ptr [rbp+3240h], xmm0
    vmovss  dword ptr [rbp+3250h], xmm15
  }
  SpartialPartition_Tree_Test::TestBox(v19, (const ExtentBounds *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 0, NULL);
  __asm
  {
    vmovups xmm0, cs:__xmm@448a200043910000433e000044898000
    vmovups xmmword ptr [rbp+3240h], xmm0
    vmovss  dword ptr [rbp+3250h], xmm15
    vmovss  dword ptr [rbp+3254h], xmm14
  }
  SpartialPartition_Tree_Test::TestBox(v19, (const ExtentBounds *)(_RBP + 12864), 1u, (const unsigned int *)(_RBP + 4));
  __asm
  {
    vmovups xmm0, cs:__xmm@448a200043910000433e000042b40000
    vmovups xmmword ptr [rbp+3240h], xmm0
    vmovss  dword ptr [rbp+3250h], xmm15
    vmovss  dword ptr [rbp+3254h], xmm14
  }
  SpartialPartition_Tree_Test::TestBox(v19, (const ExtentBounds *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovss  xmm11, cs:__real@43520000
    vmovss  xmm12, cs:__real@439d8000
    vmovss  xmm10, cs:__real@42d20000
    vmovss  xmm9, cs:__real@42b40000
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm10
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
    vmovss  dword ptr [rbp+3240h], xmm9
    vmovss  dword ptr [rbp+3244h], xmm11
    vmovss  dword ptr [rbp+3248h], xmm12
  }
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), (const vec3_t *)(_RBP + 8));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovss  xmm13, cs:__real@448a2000
    vmovss  dword ptr [rbp+3240h], xmm13
    vmovss  dword ptr [rbp+3244h], xmm11
    vmovss  dword ptr [rbp+3248h], xmm12
    vmovss  dword ptr [rbp+8], xmm10
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 8), (const vec3_t *)(_RBP + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm { vmovss  xmm8, cs:__real@43fa0000 }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm8
    vmovss  dword ptr [rbp+3240h], xmm13
    vmovss  dword ptr [rbp+3244h], xmm11
    vmovss  dword ptr [rbp+3248h], xmm12
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
  }
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 8), (const vec3_t *)(_RBP + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(_RBP + 64), 1u, (const unsigned int *)(_RBP + 4));
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm6
    vmovss  dword ptr [rbp+3244h], xmm7
    vmovss  dword ptr [rbp+3248h], xmm7
    vmovss  dword ptr [rbp+8], xmm9
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
  }
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 8), (const vec3_t *)(_RBP + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm6
    vmovss  dword ptr [rbp+3244h], xmm7
    vmovss  dword ptr [rbp+3248h], xmm7
    vmovss  dword ptr [rbp+8], xmm10
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
  }
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 8), (const vec3_t *)(_RBP + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm6
    vmovss  dword ptr [rbp+3244h], xmm7
    vmovss  dword ptr [rbp+3248h], xmm7
    vmovss  dword ptr [rbp+8], xmm8
    vmovss  dword ptr [rbp+0Ch], xmm11
    vmovss  dword ptr [rbp+10h], xmm12
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 8), (const vec3_t *)(_RBP + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(_RBP + 64), 1u, (const unsigned int *)(_RBP + 4));
  __asm
  {
    vmovss  xmm7, cs:__real@42be0000
    vmovss  xmm6, cs:__real@435a0000
    vmovss  xmm3, cs:__real@40a33333; radius
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm7
    vmovss  dword ptr [rbp+3244h], xmm6
    vmovss  dword ptr [rbp+3248h], xmm12
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm { vmovss  xmm3, cs:__real@409ccccd; radius }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm7
    vmovss  dword ptr [rbp+3244h], xmm6
    vmovss  dword ptr [rbp+3248h], xmm12
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  __asm { vmovss  xmm3, cs:__real@448a2333; radius }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm7
    vmovss  dword ptr [rbp+3244h], xmm6
    vmovss  dword ptr [rbp+3248h], xmm12
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovss  xmm8, cs:__real@42de0000
    vmovss  xmm7, cs:__real@435d0000
    vmovss  xmm6, cs:__real@43a58000
    vmovss  xmm3, cs:__real@3fea80a4; radius
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm8
    vmovss  dword ptr [rbp+3244h], xmm7
    vmovss  dword ptr [rbp+3248h], xmm6
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm8
    vmovss  xmm3, cs:__real@3fd0e70a; radius
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3244h], xmm7
    vmovss  dword ptr [rbp+3248h], xmm6
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  __asm { vmovss  xmm3, cs:__real@34000000; radius }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+3240h], xmm13
    vmovss  dword ptr [rbp+3244h], xmm15
    vmovss  dword ptr [rbp+3248h], xmm14
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), v19, (const vec3_t *)(_RBP + 12864), *(float *)&_XMM3);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(_RBP + 64), 1u, (const unsigned int *)(_RBP + 4));
  __asm { vmovups xmm0, cs:__xmm@c3fa000000000000000000003f800000 }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm { vmovups xmmword ptr [rbp+28h], xmm0 }
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 64), v19, (const vec4_t *)(_RBP + 40), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(_RBP + 64), 1u, (const unsigned int *)(_RBP + 4));
  __asm { vmovups xmm0, cs:__xmm@0000000000000000000000003f800000 }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm { vmovups xmmword ptr [rbp+18h], xmm0 }
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 64), v19, (const vec4_t *)(_RBP + 24), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovups xmm1, cs:__xmm@43fa00000000000000000000bf800000
    vmovups xmm0, xmmword ptr [rbp+18h]
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovups xmmword ptr [rbp+3270h], xmm0
    vmovups xmmword ptr [rbp+3280h], xmm1
  }
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 64), v19, (const vec4_t *)(_RBP + 12912), 2u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm
  {
    vmovups ymm0, cs:__ymm@4357000000000000bf80000000000000c34d0000000000003f80000000000000
    vmovups xmm1, cs:__xmm@43160000000000003f34fdf43f34fdf4
    vmovups ymmword ptr [rbp+3290h], ymm0
  }
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm { vmovups xmmword ptr [rbp+32B0h], xmm1 }
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(_RBP + 64), v19, (const vec4_t *)(_RBP + 12944), 3u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFE0ui64));
  _R11 = &v72;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
SpartialPartition_Tree_Test::SegmentAABBIntersection
==============
*/
bool SpartialPartition_Tree_Test::SegmentAABBIntersection(const vec3_t *p0, const vec3_t *p1, const vec3_t *boxMin, const vec3_t *boxMax)
{
  unsigned int v43; 
  bool v47; 
  bool v51; 
  bool v52; 
  bool v53; 
  bool result; 
  __int64 v78; 
  __int64 v79; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm8, dword ptr [r9+8]
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [r9]
    vmovss  xmm5, dword ptr [r9+4]
    vmovss  xmm13, cs:__real@7f7fffff
    vmovss  xmm14, cs:__real@ff7fffff
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, cs:__real@38d1b717
    vmovss  xmm9, cs:__real@3f800000
    vmovss  [rsp+118h+var_B8], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+118h+var_B4], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vsubss  xmm0, xmm3, dword ptr [r8]
    vmulss  xmm0, xmm0, xmm7
    vmovss  [rsp+118h+var_B0], xmm1
    vsubss  xmm1, xmm5, dword ptr [r8+4]
    vmulss  xmm2, xmm1, xmm7
    vmovss  [rsp+118h+var_D8], xmm0
    vsubss  xmm0, xmm8, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm3, dword ptr [r8]
    vmovss  [rsp+118h+var_D0], xmm1
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm5, dword ptr [r8+4]
    vmovss  [rsp+118h+var_D4], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm8, dword ptr [r8+8]
    vmovss  [rsp+118h+var_C8], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
  }
  v43 = 0;
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vmovss  [rsp+118h+var_C4], xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx+8]
    vmovss  [rsp+118h+var_C0], xmm2
  }
  _RDI = 0i64;
  v47 = 1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  while ( 1 )
  {
    if ( !v47 )
    {
      LODWORD(v79) = 3;
      LODWORD(v78) = v43;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v78, v79) )
        __debugbreak();
    }
    __asm { vmovss  xmm7, [rsp+rdi+118h+var_D8] }
    if ( v43 >= 3 )
    {
      LODWORD(v79) = 3;
      LODWORD(v78) = v43;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v78, v79) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, [rsp+rdi+118h+var_C8] }
    v51 = v43 < 3;
    v52 = v43 <= 3;
    if ( v43 >= 3 )
    {
      LODWORD(v79) = 3;
      LODWORD(v78) = v43;
      v53 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v78, v79);
      v51 = 0;
      v52 = !v53;
      if ( v53 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, [rsp+rdi+118h+var_B8]
      vandps  xmm0, xmm1, xmm10
      vcomiss xmm0, xmm11
    }
    if ( v52 )
    {
      __asm
      {
        vxorps  xmm0, xmm6, xmm12
        vsubss  xmm1, xmm0, xmm7
        vcomiss xmm1, xmm8
      }
      if ( !v52 )
        break;
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vcomiss xmm0, xmm8
      }
    }
    else
    {
      __asm
      {
        vdivss  xmm2, xmm9, xmm1
        vsubss  xmm1, xmm6, xmm7
        vaddss  xmm0, xmm6, xmm7
        vmulss  xmm3, xmm1, xmm2
        vmulss  xmm4, xmm0, xmm2
        vminss  xmm0, xmm3, xmm4
        vmaxss  xmm1, xmm3, xmm4
        vmaxss  xmm14, xmm0, xmm14
        vminss  xmm13, xmm1, xmm13
        vcomiss xmm14, xmm13
      }
      if ( !v52 )
        break;
      __asm { vcomiss xmm13, xmm8 }
    }
    if ( v51 )
      break;
    ++v43;
    _RDI += 4i64;
    v47 = v43 < 3;
    if ( (int)v43 >= 3 )
    {
      __asm { vcomiss xmm14, xmm9 }
      break;
    }
  }
  result = 0;
  _R11 = &v83;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
}

/*
==============
SpatialPartition_Tree_Test
==============
*/
void SpatialPartition_Tree_Test()
{
  signed __int64 v0; 
  void *v3; 
  unsigned __int64 v7; 
  __int64 v16; 
  char v17[4400]; 
  char v20; 

  v3 = alloca(v0);
  __asm
  {
    vmovaps [rsp+1198h+var_18], xmm6
    vmovaps [rsp+1198h+var_28], xmm7
  }
  _RBP = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4384) = (unsigned __int64)&v16 ^ _security_cookie;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovss  xmm7, cs:__real@3f800000
  }
  v7 = __rdtsc();
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm7
    vmovss  dword ptr [rbp+24h], xmm7
    vmovups xmmword ptr [rbp+10h], xmm0
  }
  SpartialPartition_Tree_Test::TestBox(NULL, (const ExtentBounds *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 16), 0, NULL);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm6
    vmovss  dword ptr [rbp+14h], xmm6
    vmovss  dword ptr [rbp+18h], xmm6
  }
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm7
    vmovss  dword ptr [rbp+4], xmm7
    vmovss  dword ptr [rbp+8], xmm7
  }
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(_RBP + 64), NULL, (const vec3_t *)(_RBP + 16), (const vec3_t *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm7
    vmovss  dword ptr [rbp+14h], xmm7
    vmovss  dword ptr [rbp+18h], xmm7
    vmovss  dword ptr [rbp+0], xmm6
    vmovss  dword ptr [rbp+4], xmm6
    vmovss  dword ptr [rbp+8], xmm6
  }
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(_RBP + 64), NULL, (const vec3_t *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64), (const vec3_t *)(_RBP + 16));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  SpartialPartition_Tree_Test::RunTest_Simple();
  SpartialPartition_Tree_Test::RunTest_Moving();
  SpartialPartition_Tree_Test::RunTest_Big();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v7) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   rdx, xmm1
  }
  Sys_Printf("SpatialPartition Tree tests ran in %.3f ms.\n", *(double *)&_XMM1);
  _R11 = &v20;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
SpartialPartition_Tree_Test::SphereAABBIntersection
==============
*/

char __fastcall SpartialPartition_Tree_Test::SphereAABBIntersection(const vec3_t *spherePos, double sphereRadius, const vec3_t *boxMin, const vec3_t *boxMax)
{
  __asm
  {
    vmovss  xmm3, dword ptr [rcx]
    vminss  xmm0, xmm3, dword ptr [r9]
    vmaxss  xmm2, xmm0, dword ptr [r8]
    vmovaps [rsp+28h+var_18], xmm6
    vsubss  xmm6, xmm2, xmm3
    vmovss  xmm3, dword ptr [r9+4]
    vminss  xmm0, xmm3, dword ptr [rcx+4]
    vmaxss  xmm2, xmm0, dword ptr [r8+4]
    vmovss  xmm3, dword ptr [r9+8]
    vminss  xmm0, xmm3, dword ptr [rcx+8]
    vsubss  xmm5, xmm2, dword ptr [rcx+4]
    vmovaps [rsp+28h+var_28], xmm8
    vmovaps xmm8, xmm1
    vmaxss  xmm1, xmm0, dword ptr [r8+8]
    vsubss  xmm4, xmm1, dword ptr [rcx+8]
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+28h+var_18]
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm8, xmm8
    vmovaps xmm8, [rsp+28h+var_28]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vcomiss xmm0, xmm4
  }
  return 1;
}

/*
==============
SpartialPartition_Tree_Test::TestBox
==============
*/
void SpartialPartition_Tree_Test::TestBox(SpatialPartition_Tree *tree, const ExtentBounds *box, unsigned int expectedHitCount, const unsigned int *expectedHits)
{
  signed __int64 v4; 
  void *v7; 
  __int64 v32; 
  char v33[4368]; 

  v7 = alloca(v4);
  __asm
  {
    vmovaps [rsp+1188h+var_28], xmm7
    vmovaps [rsp+1188h+var_38], xmm8
  }
  _RBP = (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4352) = (unsigned __int64)&v32 ^ _security_cookie;
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm8, dword ptr [rdx+0Ch]
    vaddss  xmm0, xmm8, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+10h]
    vmovss  xmm7, dword ptr [rdx+14h]
    vmulss  xmm2, xmm0, xmm1
    vaddss  xmm0, xmm5, dword ptr [rdx+4]
    vmulss  xmm3, xmm0, xmm1
    vaddss  xmm0, xmm7, dword ptr [rdx+8]
    vmulss  xmm4, xmm0, xmm1
    vsubss  xmm0, xmm2, dword ptr [rdx]
    vsubss  xmm1, xmm8, xmm2
    vmaxss  xmm1, xmm1, xmm0
    vsubss  xmm0, xmm3, dword ptr [rdx+4]
    vmovss  dword ptr [rbp+0Ch], xmm1
    vmovss  dword ptr [rbp+0], xmm2
    vsubss  xmm2, xmm5, xmm3
    vmaxss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbp+4], xmm3
    vsubss  xmm3, xmm4, dword ptr [rdx+8]
    vsubss  xmm0, xmm7, xmm4
    vmovss  dword ptr [rbp+10h], xmm1
    vmaxss  xmm1, xmm3, xmm0
  }
  *(_QWORD *)(_RBP + 224) = 0i64;
  *(_DWORD *)(_RBP + 232) = 0;
  *(_QWORD *)(_RBP + 240) = 0i64;
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm1
    vmovss  dword ptr [rbp+8], xmm4
  }
  *(_QWORD *)(_RBP + 248) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFE0ui64) + 32), tree, (const Bounds *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_AABBIterator_((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFE0ui64) + 32), expectedHitCount, expectedHits);
  __asm
  {
    vmovaps xmm7, [rsp+1188h+var_28]
    vmovaps xmm8, [rsp+1188h+var_38]
  }
}

