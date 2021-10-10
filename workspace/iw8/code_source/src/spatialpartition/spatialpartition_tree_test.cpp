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
  return (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(plane->v[0]) & _xmm) * bounds->halfSize.v[0]) + (float)((float)(plane->v[0] * bounds->midPoint.v[0]) + plane->v[3])) + (float)(plane->v[1] * bounds->midPoint.v[1])) + (float)(COERCE_FLOAT(LODWORD(plane->v[1]) & _xmm) * bounds->halfSize.v[1])) + (float)(plane->v[2] * bounds->midPoint.v[2])) + (float)(COERCE_FLOAT(LODWORD(plane->v[2]) & _xmm) * bounds->halfSize.v[2])) <= 0.0;
}

/*
==============
SpartialPartition_Tree_Test::FrustumAABBIntersection
==============
*/
char SpartialPartition_Tree_Test::FrustumAABBIntersection(const vec4_t *frustumPlanes, unsigned int numFrustumPlanes, const vec3_t *boxMin, const vec3_t *boxMax)
{
  float v5; 
  int v6; 
  float v7; 
  float v8; 
  __int128 v10; 
  __int128 v12; 
  __int128 v14; 
  vec3_t *i; 
  float v20; 

  v5 = (float)(COERCE_FLOAT(*(_QWORD *)boxMax->v) + COERCE_FLOAT(*(_QWORD *)boxMin->v)) * 0.5;
  v6 = 0;
  v20 = boxMax->v[2];
  v7 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)boxMax->v)) + COERCE_FLOAT(HIDWORD(*(_QWORD *)boxMin->v))) * 0.5;
  v8 = (float)(v20 + boxMin->v[2]) * 0.5;
  v10 = (unsigned int)HIDWORD(*(_QWORD *)boxMax->v);
  *(float *)&v10 = COERCE_FLOAT(HIDWORD(*(_QWORD *)boxMax->v)) - v7;
  _XMM2 = v10;
  v12 = LODWORD(v20);
  *(float *)&v12 = v20 - v8;
  _XMM5 = v12;
  v14 = *(unsigned __int64 *)boxMax->v;
  *(float *)&v14 = COERCE_FLOAT(*(_QWORD *)boxMax->v) - v5;
  _XMM4 = v14;
  if ( (int)numFrustumPlanes <= 0 )
    return 1;
  __asm
  {
    vmaxss  xmm8, xmm4, xmm7
    vmaxss  xmm9, xmm2, xmm1
    vmaxss  xmm10, xmm5, xmm0
  }
  for ( i = &frustumPlanes->xyz + 1; (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(i[-1].v[0]) & _xmm) * *(float *)&_XMM8) + (float)((float)(v5 * i[-1].v[0]) + i->v[0])) + (float)(v7 * i[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[1]) & _xmm) * *(float *)&_XMM9)) + (float)(v8 * i[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[2]) & _xmm) * *(float *)&_XMM10)) > 0.0; i = (vec3_t *)((char *)i + 16) )
  {
    if ( ++v6 >= (int)numFrustumPlanes )
      return 1;
  }
  return 0;
}

/*
==============
SpartialPartition_Tree_Test::FrustumCullBox
==============
*/
char SpartialPartition_Tree_Test::FrustumCullBox(const Bounds *bounds, const vec4_t *planes, int planeCount)
{
  int v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t *i; 

  v3 = 0;
  if ( planeCount <= 0 )
    return 0;
  v4 = bounds->halfSize.v[0];
  v5 = bounds->midPoint.v[0];
  v6 = bounds->midPoint.v[1];
  v7 = bounds->halfSize.v[1];
  v8 = bounds->midPoint.v[2];
  v9 = bounds->halfSize.v[2];
  for ( i = &planes->xyz + 1; (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(i[-1].v[0]) & _xmm) * v4) + (float)((float)(v5 * i[-1].v[0]) + i->v[0])) + (float)(v6 * i[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[1]) & _xmm) * v7)) + (float)(v8 * i[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(i[-1].v[2]) & _xmm) * v9)) > 0.0; i = (vec3_t *)((char *)i + 16) )
  {
    if ( ++v3 >= planeCount )
      return 0;
  }
  return 1;
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
  unsigned __int8 *v13; 
  unsigned int i; 
  unsigned int v15; 
  const ExtentBounds *v16; 
  unsigned int v17; 
  float v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v26; 

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
  v26 = v9;
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
  v13 = &buffer->data[v8];
  for ( i = 0; i < 6; ++i )
  {
    v15 = 0;
    if ( (_DWORD)v3 )
    {
      v16 = v4;
      v17 = i % 3;
      do
      {
        if ( i >= 3 )
        {
          if ( v17 >= 3 )
          {
            LODWORD(v23) = 3;
            LODWORD(v22) = i % 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v18 = v16->maxs.v[v17];
        }
        else
        {
          if ( v17 >= 3 )
          {
            LODWORD(v23) = 3;
            LODWORD(v22) = i % 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v18 = v16->mins.v[v17];
        }
        v19 = (_DWORD)v3 * i + v15;
        ++v16;
        ++v15;
        *(float *)&v13[4 * v19] = v18;
      }
      while ( v15 < (unsigned int)v3 );
      v4 = bounds;
      v6 = 0;
    }
  }
  if ( !(_DWORD)v3 )
    return buffer;
  v20 = &buffer->data[v26];
  do
  {
    *v20 = 3;
    *((_DWORD *)v20 + 1) = v6;
    v20 += 8;
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
  float v4; 
  float v5; 
  float v6; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  __int64 v15; 
  bool v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  bool v26; 
  __int64 v30; 
  __int64 v31; 
  int v32[4]; 
  int v33[4]; 

  v4 = boxMax->v[2];
  v5 = boxMax->v[0];
  v6 = boxMax->v[1];
  _XMM10 = LODWORD(FLOAT_3_4028235e38);
  *(float *)&v8 = (float)(v6 - boxMin->v[1]) * 0.5;
  *(float *)v32 = (float)(boxMax->v[0] - boxMin->v[0]) * 0.5;
  v9 = v5 + boxMin->v[0];
  *(float *)&v32[2] = (float)(v4 - boxMin->v[2]) * 0.5;
  v10 = v9 * 0.5;
  v11 = v6 + boxMin->v[1];
  v32[1] = v8;
  v12 = v4 + boxMin->v[2];
  *(float *)v33 = v10 - rayStart->v[0];
  v13 = 0;
  *(float *)&v33[1] = (float)(v11 * 0.5) - rayStart->v[1];
  *(float *)&v33[2] = (float)(v12 * 0.5) - rayStart->v[2];
  v15 = 0i64;
  _XMM8 = 0i64;
  v17 = 1;
  while ( 1 )
  {
    if ( !v17 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v18 = *(float *)&v32[v15];
    if ( v13 >= 3 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v19 = (unsigned int)v33[v15];
    if ( v13 >= 3 )
    {
      LODWORD(v31) = 3;
      LODWORD(v30) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v20 = rayDir->v[v15];
    if ( COERCE_FLOAT(LODWORD(v20) & _xmm) <= 0.000099999997 )
    {
      if ( (float)(COERCE_FLOAT(v19 ^ _xmm) - v18) > 0.0 )
        break;
      v26 = (float)(v18 - *(float *)&v19) < 0.0;
    }
    else
    {
      v21 = v19;
      *(float *)&v21 = (float)(*(float *)&v19 - v18) * (float)(1.0 / v20);
      _XMM3 = v21;
      __asm
      {
        vminss  xmm0, xmm3, xmm4
        vmaxss  xmm1, xmm3, xmm4
        vmaxss  xmm11, xmm0, xmm11
        vminss  xmm10, xmm1, xmm10
      }
      if ( *(float *)&_XMM11 > *(float *)&_XMM10 )
        break;
      v26 = *(float *)&_XMM10 < 0.0;
    }
    if ( v26 )
      break;
    ++v13;
    ++v15;
    v17 = v13 < 3;
    if ( (int)v13 >= 3 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm11
        vblendvps xmm0, xmm10, xmm11, xmm0
      }
      return *(float *)&_XMM0;
    }
  }
  *(float *)&_XMM0 = FLOAT_N1_0;
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
  void *v1; 
  unsigned __int64 v2; 
  __int128 v3; 
  __int128 v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  signed int i; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  signed int j; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int v26; 
  float *v27; 
  __int128 v31; 
  __int128 v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  bool v37; 
  __int128 v40; 
  unsigned int v41; 
  __int128 v42; 
  __int128 v43; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  __int64 v72; 
  float v73; 
  float v74; 
  __int64 v75; 
  float v76; 
  float v77; 
  unsigned int v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  unsigned int v89; 
  __m128 v90; 
  __int64 v92; 
  __m128 v94; 
  __int64 v96; 
  unsigned int v97; 
  __m128 v99; 
  __int64 v101; 
  __m128 v103; 
  __int64 v105; 
  __m128 v107; 
  __int64 v109; 
  __m128 v111; 
  __int64 v113; 
  __m128 v115; 
  __int64 v117; 
  __int64 v119; 
  __m128 v120; 
  __int64 v122; 
  __int128 v131; 
  __int128 v132; 
  __int128 v133; 
  __int128 v134; 
  __int128 v135; 
  __int128 v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v140; 
  __int128 v143; 
  __int128 v146; 
  unsigned int v147; 
  unsigned int v148; 
  unsigned int v149; 
  unsigned int v150; 
  unsigned int v151; 
  float v153; 
  unsigned int v154; 
  float v155; 
  char v156; 
  float *v157; 
  const vec3_t *v158; 
  bool v159; 
  float v160; 
  int v170; 
  double v171; 
  int v172; 
  signed int v173; 
  float *v174; 
  char v175; 
  bool v176; 
  char v177; 
  __int64 v178; 
  __int64 v179; 
  __int64 v180; 
  __int64 v181; 
  __int64 v182; 
  SpatialPartition_Tree *v183; 
  unsigned int v184; 
  __int64 v185; 
  char v186[26928]; 

  v1 = alloca(result);
  v2 = (unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v2 + 26912) = (unsigned __int64)&v185 ^ _security_cookie;
  v3 = LODWORD(FLOAT_1_0);
  v4 = (unsigned int)_xmm;
  v5 = FLOAT_2_3283064eN10;
  v6 = FLOAT_1000_0;
  v7 = FLOAT_0_1;
  v8 = FLOAT_1_1920929eN7;
  LODWORD(result) = 0;
  *(const float *)(v2 + 32) = FLOAT_1_0;
  *(const float *)(v2 + 36) = FLOAT_N0_0;
  *(_DWORD *)(v2 + 48) = 0;
  do
  {
    v9 = 233191843 - 597723754 * result;
    v10 = v9 % 7 + 1;
    *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = v10;
    if ( v9 % 7 != -1 )
    {
      v11 = v2 + 26732;
      v12 = v10;
      do
      {
        for ( i = 0; (unsigned int)i < 3; ++i )
        {
          v14 = 1103515245 * v9 + 12345;
          v15 = (float)v14;
          v16 = (float)((float)(v15 * v5) * 1000.0) - (float)((float)(*(float *)&v3 - (float)(v15 * v5)) * 1000.0);
          v9 = 1103515245 * v14 + 12345;
          v17 = (float)v9;
          v18 = (float)((float)(*(float *)&v3 - (float)(v17 * v5)) * 0.0099999998) + (float)((float)(v17 * v5) * 1000.0);
          v19 = i;
          *(float *)(v11 + 4i64 * i - 12) = v16 - v18;
          *(float *)(v11 + 4 * v19) = v18 + v16;
        }
        v11 += 24i64;
        --v12;
      }
      while ( v12 );
      v8 = FLOAT_1_1920929eN7;
      v6 = FLOAT_1000_0;
      v4 = (unsigned int)_xmm;
    }
    *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(v2 + 18112), (const ExtentBounds *)(v2 + 26720), v10);
    *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = 0;
    do
    {
      for ( j = 0; (unsigned int)j < 3; ++j )
      {
        while ( 1 )
        {
          v21 = (float)(1103515245 * v9 + 12345);
          v22 = (float)((float)(v21 * v5) * v6) - (float)((float)(*(float *)&v3 - (float)(v21 * v5)) * v6);
          v9 = 1103515245 * (1103515245 * v9 + 12345) + 12345;
          v23 = (float)v9;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0xC0) = v22;
          if ( (float)(v23 * v5) >= v7 )
          {
            v9 = 1103515245 * v9 + 12345;
            v25 = (float)v9;
            v24 = (float)((float)(v25 * v5) * v6) - (float)((float)(*(float *)&v3 - (float)(v25 * v5)) * v6);
          }
          else
          {
            v24 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0xC0);
          }
          v26 = 0;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0x100) = v24;
          if ( !v10 )
            break;
          v27 = (float *)(v2 + 4i64 * j + 26732);
          while ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v27 - 3) - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0xC0)) & _xmm) > v8 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v27 - 3) - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0x100)) & _xmm) > v8 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*v27 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0xC0)) & _xmm) > v8 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*v27 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4i64 * j + 0x100)) & _xmm) > v8 )
          {
            ++v26;
            v27 += 6;
            if ( v26 >= v10 )
              goto LABEL_20;
          }
        }
LABEL_20:
        ;
      }
      _XMM6 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      _XMM9 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC4);
      _XMM11 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      v32 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(float *)&v32 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) - *(float *)&_XMM6;
      v31 = v32;
      v34 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x104);
      v33 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x104) - *(float *)&_XMM9;
      v35 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) - *(float *)&_XMM11;
      *(float *)&v34 = fsqrt((float)((float)(v33 * v33) + (float)(*(float *)&v31 * *(float *)&v31)) + (float)(v35 * v35));
      _XMM1 = v34;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0) = *(float *)&v31;
      v37 = *(float *)&v34 > 0.0099999998;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v9;
      *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 2) = *(float *)&v34 > 0.0099999998;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD4) = v33;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8) = v35;
      if ( *(float *)&v34 > 0.0099999998 )
      {
        __asm
        {
          vcmpless xmm0, xmm1, dword ptr [rbp+24h]
          vblendvps xmm0, xmm1, xmm13, xmm0
        }
        v40 = v3;
        *(float *)&v40 = (float)(*(float *)&v3 / *(float *)&_XMM0) * *(float *)&v31;
        v31 = v40;
        v33 = (float)(*(float *)&v3 / *(float *)&_XMM0) * v33;
        v35 = (float)(*(float *)&v3 / *(float *)&_XMM0) * v35;
        *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0) = *(float *)&v40;
        *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD4) = v33;
        *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8) = v35;
      }
      v41 = 0;
      if ( v37 )
      {
        v42 = v31 ^ v4;
        v43 = v42;
        *(float *)&v43 = fsqrt((float)(*(float *)&v42 * *(float *)&v42) + (float)(v33 * v33));
        _XMM2 = v43;
        if ( *(float *)&v43 > 0.0099999998 )
        {
          __asm
          {
            vcmpless xmm0, xmm2, dword ptr [rbp+24h]
            vblendvps xmm0, xmm2, xmm13, xmm0
          }
          v47 = (float)(*(float *)&v3 / *(float *)&_XMM0) * v33;
          v48 = (float)(*(float *)&v3 / *(float *)&_XMM0) * *(float *)&v42;
          v49 = v48 * v35;
          LODWORD(v50) = COERCE_UNSIGNED_INT(v47 * v35) ^ _xmm;
          v51 = (float)(v47 * v33) - (float)(v48 * *(float *)&v31);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = v51;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = v49;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x114) = v50;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fsqrt((float)((float)(v49 * v49) + (float)(v50 * v50)) + (float)(v51 * v51)) - *(float *)&v3) & _xmm) >= 0.0099999998 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 496, ASSERT_TYPE_ASSERT, "(fabsf( Vec3Length( localUp ) - 1.0f ) < 0.01f)", (const char *)&queryFormat, "fabsf( Vec3Length( localUp ) - 1.0f ) < 0.01f") )
            __debugbreak();
          v52 = (float)(1103515245 * v9 + 12345);
          v53 = (float)((float)(*(float *)&v3 - (float)(v52 * 2.3283064e-10)) * 0.017453292) + (float)((float)(v52 * 2.3283064e-10) * 1.0471976);
          RotatePointAroundVector((vec3_t *)(v2 + 448), (const vec3_t *)(v2 + 272), (const vec3_t *)(v2 + 208), v53);
          RotatePointAroundVector((vec3_t *)(v2 + 432), (const vec3_t *)(v2 + 272), (const vec3_t *)(v2 + 208), COERCE_FLOAT(LODWORD(v53) ^ _xmm));
          v54 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
          v55 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x114);
          v56 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118);
          v57 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110);
          v58 = v56 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
          v59 = v57 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B8);
          v60 = v57 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0) = (float)(v55 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8)) - (float)(v56 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C4));
          v61 = v58 - v60;
          v62 = v57 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C4);
          v63 = v55 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A4) = v61;
          v64 = v62 - v63;
          v65 = v56 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B4);
          v66 = v55 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B8);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A8) = v64;
          v67 = v65 - v66;
          v68 = v56 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B0);
          v69 = v55 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B0);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180) = v67;
          v70 = v59 - v68;
          v71 = v57 * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1B4);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x184) = v70;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x188) = v69 - v71;
          v72 = 1103515245 * (1103515245 * v9 + 12345) + 12345;
          v73 = (float)v72;
          v74 = (float)(v54 - (float)(v73 * 2.3283064e-10)) + (float)((float)(v73 * 2.3283064e-10) * 250.0);
          v75 = (unsigned int)(1103515245 * v72 + 12345);
          v76 = (float)v75;
          v77 = (float)((float)(v54 - (float)(v76 * 2.3283064e-10)) * (float)(v74 + v54)) + (float)((float)(v74 + 1000.0) * (float)(v76 * 2.3283064e-10));
          v78 = 1103515245 * v75 + 12345;
          v79 = (float)v78;
          v80 = v54 - (float)(v79 * 2.3283064e-10);
          v81 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
          v82 = v80 + (float)((float)(v79 * 2.3283064e-10) * 1000.0);
          v83 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
          v84 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC4);
          v85 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
          v86 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD4);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = (float)(v74 * v81) + v83;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x174) = (float)(v86 * v74) + v84;
          v87 = v85 * v74;
          v88 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) = v87 + v88;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x190) = (float)(v77 * v81) + v83;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x198) = (float)(v85 * v77) + v88;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x194) = (float)(v86 * v77) + v84;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) = COERCE_FLOAT(LODWORD(v81) ^ _xmm);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x168) = COERCE_FLOAT(LODWORD(v85) ^ _xmm);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x164) = COERCE_FLOAT(LODWORD(v86) ^ _xmm);
          v89 = 1103515245 * v78 + 12345;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0) = (float)(v57 * v82) + v83;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E4) = (float)(v55 * v82) + v84;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E8) = (float)(v56 * v82) + v88;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x154) = (float)(COERCE_FLOAT(LODWORD(v82) ^ _xmm) * v55) + v84;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = (float)(COERCE_FLOAT(LODWORD(v82) ^ _xmm) * v57) + v83;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) = COERCE_FLOAT(LODWORD(v57) ^ _xmm);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) = COERCE_FLOAT(LODWORD(v56) ^ _xmm);
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) = (float)(COERCE_FLOAT(LODWORD(v82) ^ _xmm) * v56) + v88;
          *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D4) = COERCE_FLOAT(LODWORD(v55) ^ _xmm);
          if ( v89 % 5 )
          {
            do
            {
              v90 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 144), (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 208));
              *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v90;
              _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
              v92 = v41++;
              _mm_shuffle_ps(v90, v90, 255);
              __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
              *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
              *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v92 + 0x6760) = _XMM1;
            }
            while ( v41 < v89 % 5 );
          }
          v94 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 128), (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 416));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v94;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v96 = v41;
          v97 = v41 + 1;
          _mm_shuffle_ps(v94, v94, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v96 + 0x6760) = _XMM1;
          v99 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 64), (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 384));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v99;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v101 = v97++;
          _mm_shuffle_ps(v99, v99, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v101 + 0x6760) = _XMM1;
          v103 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 112), (const vec3_t *)(v2 + 368), (const vec3_t *)(v2 + 208));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v103;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v105 = v97++;
          _mm_shuffle_ps(v103, v103, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v105 + 0x6760) = _XMM1;
          v107 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 96), (const vec3_t *)(v2 + 400), (const vec3_t *)(v2 + 352));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v107;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v109 = v97++;
          _mm_shuffle_ps(v107, v107, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v109 + 0x6760) = _XMM1;
          v111 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 80), (const vec3_t *)(v2 + 480), (const vec3_t *)(v2 + 464));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v111;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v113 = v97++;
          _mm_shuffle_ps(v111, v111, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v113 + 0x6760) = _XMM1;
          v115 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 160), (const vec3_t *)(v2 + 336), (const vec3_t *)(v2 + 272));
          *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v115;
          _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
          v117 = v97;
          v41 = v97 + 1;
          _mm_shuffle_ps(v115, v115, 255);
          __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v117 + 0x6760) = _XMM1;
          v9 = 1103515245 * v89 + 12345;
          *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v9;
          *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
          if ( v9 % 5 )
          {
            v119 = v9 % 5;
            do
            {
              v120 = *(__m128 *)PlaneFromPoint((vec4_t *)(v2 + 176), (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 208));
              *(__m128 *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v120;
              _XMM1 = *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
              v122 = v41++;
              _mm_shuffle_ps(v120, v120, 255);
              __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
              *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = _XMM1;
              *(_OWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 16 * v122 + 0x6760) = _XMM1;
              --v119;
            }
            while ( v119 );
          }
          if ( v41 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 538, ASSERT_TYPE_ASSERT, "(numFrustumPlanes <= ( sizeof( *array_counter( frustumPlanes ) ) + 0 ))", (const char *)&queryFormat, "numFrustumPlanes <= ARRAY_COUNT( frustumPlanes )") )
            __debugbreak();
          _XMM11 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
          _XMM9 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC4);
          _XMM6 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
        }
      }
      __asm
      {
        vminss  xmm13, xmm6, xmm3
        vmaxss  xmm12, xmm6, xmm3
        vminss  xmm7, xmm9, xmm8
        vmaxss  xmm6, xmm11, xmm10
        vmaxss  xmm9, xmm9, xmm8
        vminss  xmm0, xmm11, xmm10
      }
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128) = *(float *)&_XMM0;
      __asm { vminss  xmm8, xmm11, xmm10 }
      v131 = _XMM13;
      *(float *)&v131 = (float)(*(float *)&_XMM13 + *(float *)&_XMM12) * 0.5;
      v132 = v131;
      v134 = _XMM8;
      *(float *)&v134 = *(float *)&_XMM8 + *(float *)&_XMM6;
      v133 = v134;
      v135 = _XMM9;
      *(float *)&v135 = (float)(*(float *)&_XMM9 + *(float *)&_XMM7) * 0.5;
      v136 = v135;
      v138 = v133;
      *(float *)&v138 = *(float *)&v133 * 0.5;
      v137 = v138;
      v140 = v132;
      *(float *)&v140 = *(float *)&v132 - *(float *)&_XMM13;
      _XMM1 = v140;
      __asm { vmaxss  xmm5, xmm1, xmm0 }
      v143 = v136;
      *(float *)&v143 = *(float *)&v136 - *(float *)&_XMM7;
      _XMM1 = v143;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) = *(float *)&v132;
      __asm { vmaxss  xmm2, xmm1, xmm0 }
      v146 = v137;
      *(float *)&v146 = *(float *)&v137 - *(float *)&_XMM8;
      _XMM1 = v146;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0;
      v150 = 0;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = 0;
      v151 = 0;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C) = *(float *)&v136;
      __asm { vmaxss  xmm3, xmm1, xmm0 }
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148) = *(float *)&_XMM2;
      v153 = (float)((float)(*(float *)&_XMM5 * *(float *)&_XMM5) + (float)(*(float *)&_XMM2 * *(float *)&_XMM2)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3);
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x134) = *(float *)&_XMM6;
      v154 = 0;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = 0;
      v155 = fsqrt(v153);
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34) = v155;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = *(float *)&_XMM13;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x124) = *(float *)&_XMM7;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x12C) = *(float *)&_XMM12;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(float *)&_XMM9;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = *(float *)&v137;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x144) = *(float *)&_XMM5;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14C) = *(float *)&_XMM3;
      *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v153;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
      if ( *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
      {
        v156 = *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 2);
        v157 = (float *)(v2 + 26736);
        v158 = (const vec3_t *)(v2 + 26720);
        while ( 1 )
        {
          if ( *(v157 - 4) <= *(float *)&_XMM12 )
          {
            if ( *(float *)&_XMM9 >= *(v157 - 3) )
            {
              if ( *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x134) >= *(v157 - 2) )
                v159 = *(float *)&_XMM13 <= *(v157 - 1) && *(float *)&_XMM7 <= *v157 && *(float *)&_XMM8 <= v157[1];
              else
                v159 = 0;
            }
            else
            {
              v159 = 0;
            }
          }
          else
          {
            v159 = 0;
          }
          *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 3) = SpartialPartition_Tree_Test::SegmentAABBIntersection((const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 256), v158, v158 + 1);
          if ( !v156 || (v160 = SpartialPartition_Tree_Test::RayAABBIntersect((const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 208), v158, v158 + 1), *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 1, v160 < 0.0) )
            *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = 0;
          _XMM0 = *((unsigned int *)v157 - 1);
          __asm
          {
            vminss  xmm0, xmm0, dword ptr [rbp+138h]
            vmaxss  xmm3, xmm0, xmm6
          }
          _XMM6 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C);
          _XMM0 = *((unsigned int *)v157 + 1);
          __asm
          {
            vminss  xmm1, xmm6, dword ptr [rbx]
            vminss  xmm0, xmm0, dword ptr [rbp+140h]
            vmaxss  xmm2, xmm0, dword ptr [rbx-8]
            vmaxss  xmm5, xmm1, dword ptr [rbx-0Ch]
          }
          *(_BYTE *)v2 = v153 >= (float)((float)((float)((float)(*(float *)&_XMM5 - *(float *)&_XMM6) * (float)(*(float *)&_XMM5 - *(float *)&_XMM6)) + (float)((float)(*(float *)&_XMM3 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138)) * (float)(*(float *)&_XMM3 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138)))) + (float)((float)(*(float *)&_XMM2 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140)) * (float)(*(float *)&_XMM2 - *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140))));
          if ( !v41 )
            goto LABEL_61;
          v170 = *((_DWORD *)v157 - 2);
          *(double *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1F0) = *((double *)v157 - 2);
          v171 = *(double *)(v157 - 1);
          *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1F8) = v170;
          v172 = *((_DWORD *)v157 + 1);
          *(double *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1FC) = v171;
          *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x204) = v172;
          Bounds_FromExtentBounds((Bounds *)(v2 + 224), (const ExtentBounds *)(v2 + 496));
          v173 = 0;
          if ( (int)v41 > 0 )
            break;
LABEL_59:
          v175 = 1;
LABEL_62:
          v176 = !v159;
          v177 = *(_BYTE *)v2;
          if ( !v176 )
          {
            if ( !v177 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_test.cpp", 571, ASSERT_TYPE_ASSERT, "(intersectSphere)", (const char *)&queryFormat, "intersectSphere") )
              __debugbreak();
            v178 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v178 + 0x66C0) = v154;
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = v178 + 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 3) )
          {
            v179 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v179 + 0x66E0) = v154;
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = v179 + 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 1) )
          {
            v180 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v180 + 0x6700) = v154;
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v180 + 1;
          }
          if ( v177 )
          {
            v181 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v181 + 0x6720) = v154;
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v181 + 1;
          }
          if ( v175 )
          {
            v182 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4 * v182 + 0x6740) = v154;
            v151 = v182 + 1;
            *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v151;
          }
          else
          {
            v151 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
          }
          ++v154;
          v158 += 2;
          v157 += 6;
          if ( v154 >= *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
          {
            v8 = FLOAT_1_1920929eN7;
            v155 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34);
            v9 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
            v150 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
            v149 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            v148 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14);
            v147 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
            goto LABEL_78;
          }
        }
        v174 = (float *)(v2 + 26476);
        while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v174 - 3) & _xmm) * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xEC)) + (float)((float)(*(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) * *(v174 - 3)) + *v174)) + (float)(*(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE4) * *(v174 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v174 - 2) & _xmm) * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0))) + (float)(*(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) * *(v174 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v174 - 1) & _xmm) * *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF4))) > 0.0 )
        {
          ++v173;
          v174 += 4;
          if ( v173 >= (int)v41 )
          {
            LODWORD(_XMM12) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x12C);
            LODWORD(_XMM8) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
            LODWORD(_XMM9) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130);
            v153 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
            goto LABEL_59;
          }
        }
        LODWORD(_XMM12) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x12C);
        LODWORD(_XMM8) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
        LODWORD(_XMM9) = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130);
        v153 = *(float *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
LABEL_61:
        v175 = 0;
        goto LABEL_62;
      }
LABEL_78:
      v183 = *(SpatialPartition_Tree **)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
      SpartialPartition_Tree_Test::TestBox(v183, (const ExtentBounds *)(v2 + 288), v147, (const unsigned int *)(v2 + 26304));
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E0) = 0i64;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E8) = 0;
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2F0) = 0i64;
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2F8) = 0i64;
      SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 544), v183, (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 256));
      SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(v2 + 544), v148, (const unsigned int *)(v2 + 26336));
      if ( *(_BYTE *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 2) )
      {
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C0) = 0i64;
        *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13C8) = 0;
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13D0) = 0i64;
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x13D8) = 0i64;
        SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 4864), v183, (const vec3_t *)(v2 + 192), (const vec3_t *)(v2 + 208));
        SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(v2 + 4864), v149, (const unsigned int *)(v2 + 26368));
      }
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24A0) = 0i64;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24A8) = 0;
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24B0) = 0i64;
      *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24B8) = 0i64;
      SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 9184), v183, (const vec3_t *)(v2 + 312), v155);
      SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(v2 + 9184), v150, (const unsigned int *)(v2 + 26400));
      if ( v41 )
      {
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3580) = 0i64;
        *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3588) = 0;
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3590) = 0i64;
        *(_QWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3598) = 0i64;
        SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 13504), v183, (const vec4_t *)(v2 + 26464), v41);
        SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(v2 + 13504), v151, (const unsigned int *)(v2 + 26432));
      }
      v6 = FLOAT_1000_0;
      v3 = *(unsigned int *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
      v5 = FLOAT_2_3283064eN10;
      v4 = (unsigned int)_xmm;
      v7 = FLOAT_0_1;
      v10 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C);
      v184 = *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) + 1;
      *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = v184;
    }
    while ( v184 < 0x64 );
    result = (unsigned int)(*(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) + 1);
    *(_DWORD *)(((unsigned __int64)v186 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = result;
  }
  while ( (unsigned int)result < 0x64 );
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
  void *v1; 
  unsigned __int64 v2; 
  SpatialPartition_Tree *Tree; 
  __int64 v4; 
  char v5[12928]; 

  v1 = alloca(v0);
  v2 = (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v2 + 12912) = (unsigned __int64)&v4 ^ _security_cookie;
  *(__m256i *)(v2 + 12848) = _ymm;
  *(_OWORD *)(v2 + 12880) = _xmm;
  Tree = (SpatialPartition_Tree *)SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 4640), (const ExtentBounds *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 12848), 2u);
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3260) = 50;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3264) = 60;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3268) = 70;
  Tree->alwaysListLength = 3;
  *(_OWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = _xmm;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3220) = 50;
  Tree->alwaysList = (unsigned int *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 12896);
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3224) = 60;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_205_0;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_305_0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3228) = 70i64;
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(v2 + 12848), 4u, (const unsigned int *)(v2 + 12832));
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_291_0;
  *(_OWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = _xmm;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_205_0;
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(v2 + 12848), 3u, (const unsigned int *)(v2 + 12832));
  *(_OWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = _xmm;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_1_0;
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(v2 + 12848), 3u, (const unsigned int *)(v2 + 12832));
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3234) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3238) = 0;
  *(const float *)v2 = FLOAT_1_0;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 32), Tree, (const vec3_t *)(v2 + 12848), (const vec3_t *)((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(v2 + 32), 3u, (const unsigned int *)(v2 + 12832));
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(const float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = FLOAT_1_0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3234) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3238) = 0;
  *(float *)v2 = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 32), Tree, (const vec3_t *)((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64), (const vec3_t *)(v2 + 12848));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(v2 + 32), 3u, (const unsigned int *)(v2 + 12832));
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3230) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3234) = 0;
  *(float *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3238) = 0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 32), Tree, (const vec3_t *)(v2 + 12848), 1.0);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(v2 + 32), 3u, (const unsigned int *)(v2 + 12832));
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8) = 0;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8) = 0i64;
  *(_OWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = _xmm_c3fa00003f8000000000000000000000;
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 32), Tree, (const vec4_t *)(v2 + 16), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(v2 + 32), 3u, (const unsigned int *)(v2 + 12832));
}

/*
==============
SpartialPartition_Tree_Test::RunTest_Simple
==============
*/
void SpartialPartition_Tree_Test::RunTest_Simple()
{
  signed __int64 v0; 
  void *v1; 
  unsigned __int64 v2; 
  SpatialPartition_Tree *Tree; 
  SpatialPartition_Tree *v4; 
  __int128 v5; 
  __int64 v6; 
  char v7[13008]; 

  v1 = alloca(v0);
  v2 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v2 + 12992) = (unsigned __int64)&v6 ^ _security_cookie;
  *(__m256i *)(v2 + 12864) = _ymm;
  *(_OWORD *)(v2 + 12896) = _xmm;
  Tree = (SpatialPartition_Tree *)SpartialPartition_Tree_Test::MakeTree((SpartialPartition_Tree_Test::Tree_Buffer *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 4672), (const ExtentBounds *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 2u);
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 1;
  *(_DWORD *)v2 = 0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3250) = FLOAT_205_0;
  v4 = Tree;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3254) = FLOAT_305_0;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = _xmm;
  SpartialPartition_Tree_Test::TestBox(Tree, (const ExtentBounds *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 1u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3254) = FLOAT_291_0;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = _xmm;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3250) = FLOAT_205_0;
  SpartialPartition_Tree_Test::TestBox(v4, (const ExtentBounds *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 0, NULL);
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = _xmm;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3250) = FLOAT_205_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3254) = FLOAT_305_0;
  SpartialPartition_Tree_Test::TestBox(v4, (const ExtentBounds *)(v2 + 12864), 1u, (const unsigned int *)(v2 + 4));
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = _xmm;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3250) = FLOAT_205_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3254) = FLOAT_305_0;
  SpartialPartition_Tree_Test::TestBox(v4, (const ExtentBounds *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 12864), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_90_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), (const vec3_t *)(v2 + 8));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 8), (const vec3_t *)(v2 + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_500_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 8), (const vec3_t *)(v2 + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(v2 + 64), 1u, (const unsigned int *)(v2 + 4));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1_0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = 0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_90_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 8), (const vec3_t *)(v2 + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1_0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = 0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 8), (const vec3_t *)(v2 + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1_0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = 0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_500_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_210_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_315_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 8), (const vec3_t *)(v2 + 12864));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(v2 + 64), 1u, (const unsigned int *)(v2 + 4));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_95_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_218_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 5.0999999);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_95_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_218_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 4.9000001);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_95_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_218_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_315_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 1105.1);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_111_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_221_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_331_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 1.8320508);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_111_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_221_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_331_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 1.6320508);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3240) = FLOAT_1105_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3244) = FLOAT_205_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3248) = FLOAT_305_0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_SphereIterator::Init((SpatialPartition_Tree_SphereIterator *)(v2 + 64), v4, (const vec3_t *)(v2 + 12864), 0.00000011920929);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SphereIterator_((SpatialPartition_Tree_SphereIterator *)(v2 + 64), 1u, (const unsigned int *)(v2 + 4));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = _xmm_c3fa000000000000000000003f800000;
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 64), v4, (const vec4_t *)(v2 + 40), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(v2 + 64), 1u, (const unsigned int *)(v2 + 4));
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = _xmm;
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 64), v4, (const vec4_t *)(v2 + 24), 1u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  v5 = *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3270) = v5;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3280) = _xmm;
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 64), v4, (const vec4_t *)(v2 + 12912), 2u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 1u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  *(__m256i *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3290) = _ymm;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x32B0) = _xmm;
  SpatialPartition_Tree_FrustumIterator::Init((SpatialPartition_Tree_FrustumIterator *)(v2 + 64), v4, (const vec4_t *)(v2 + 12944), 3u);
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_FrustumIterator_((SpatialPartition_Tree_FrustumIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 2u, (const unsigned int *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
}

/*
==============
SpartialPartition_Tree_Test::SegmentAABBIntersection
==============
*/
bool SpartialPartition_Tree_Test::SegmentAABBIntersection(const vec3_t *p0, const vec3_t *p1, const vec3_t *boxMin, const vec3_t *boxMax)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  int v10; 
  float v11; 
  int v12; 
  float v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  __int64 v20; 
  bool v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  __int128 v25; 
  bool v29; 
  __int64 v31; 
  __int64 v32; 
  int v33[4]; 
  int v34[4]; 
  int v35[4]; 

  v4 = boxMax->v[2];
  v5 = p1->v[1];
  v6 = boxMax->v[0];
  v7 = boxMax->v[1];
  *(float *)&_XMM13 = FLOAT_3_4028235e38;
  *(float *)&_XMM14 = FLOAT_N3_4028235e38;
  *(float *)v35 = p1->v[0] - p0->v[0];
  *(float *)&v10 = v5 - p0->v[1];
  v11 = p1->v[2];
  v35[1] = v10;
  *(float *)&v12 = v11 - p0->v[2];
  v13 = (float)(v6 - boxMin->v[0]) * 0.5;
  v35[2] = v12;
  *(float *)&v14 = (float)(v7 - boxMin->v[1]) * 0.5;
  *(float *)v33 = v13;
  v15 = v6 + boxMin->v[0];
  *(float *)&v33[2] = (float)(v4 - boxMin->v[2]) * 0.5;
  v16 = v15 * 0.5;
  v17 = v7 + boxMin->v[1];
  v33[1] = v14;
  v18 = v4 + boxMin->v[2];
  *(float *)v34 = v16 - p0->v[0];
  v19 = 0;
  *(float *)&v34[1] = (float)(v17 * 0.5) - p0->v[1];
  *(float *)&v34[2] = (float)(v18 * 0.5) - p0->v[2];
  v20 = 0i64;
  v21 = 1;
  while ( 1 )
  {
    if ( !v21 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v22 = *(float *)&v33[v20];
    if ( v19 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v23 = (unsigned int)v34[v20];
    if ( v19 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v24 = *(float *)&v35[v20];
    if ( COERCE_FLOAT(LODWORD(v24) & _xmm) <= 0.000099999997 )
    {
      if ( (float)(COERCE_FLOAT(v23 ^ _xmm) - v22) > 0.0 )
        return 0;
      v29 = (float)(v22 - *(float *)&v23) < 0.0;
    }
    else
    {
      v25 = v23;
      *(float *)&v25 = (float)(*(float *)&v23 - v22) * (float)(1.0 / v24);
      _XMM3 = v25;
      __asm
      {
        vminss  xmm0, xmm3, xmm4
        vmaxss  xmm1, xmm3, xmm4
        vmaxss  xmm14, xmm0, xmm14
        vminss  xmm13, xmm1, xmm13
      }
      if ( *(float *)&_XMM14 > *(float *)&_XMM13 )
        return 0;
      v29 = *(float *)&_XMM13 < 0.0;
    }
    if ( v29 )
      break;
    ++v19;
    ++v20;
    v21 = v19 < 3;
    if ( (int)v19 >= 3 )
      return *(float *)&_XMM14 < 1.0 && *(float *)&_XMM13 > 0.0;
  }
  return 0;
}

/*
==============
SpatialPartition_Tree_Test
==============
*/
void SpatialPartition_Tree_Test()
{
  signed __int64 v0; 
  void *v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v6; 
  char v7[4400]; 

  v1 = alloca(v0);
  v2 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v2 + 4384) = (unsigned __int64)&v6 ^ _security_cookie;
  v3 = __rdtsc();
  *(const float *)(v2 + 32) = FLOAT_1_0;
  *(const float *)(v2 + 36) = FLOAT_1_0;
  *(_OWORD *)(v2 + 16) = _xmm;
  SpartialPartition_Tree_Test::TestBox(NULL, (const ExtentBounds *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 16), 0, NULL);
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)v2 = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_1_0;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(v2 + 64), NULL, (const vec3_t *)(v2 + 16), (const vec3_t *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_SegmentIterator_((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = FLOAT_1_0;
  *(float *)v2 = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = 0;
  *(float *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0;
  SpatialPartition_Tree_RayIterator::Init((SpatialPartition_Tree_RayIterator *)(v2 + 64), NULL, (const vec3_t *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64), (const vec3_t *)(v2 + 16));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_RayIterator_((SpatialPartition_Tree_RayIterator *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0ui64) + 64), 0, NULL);
  SpartialPartition_Tree_Test::RunTest_Simple();
  SpartialPartition_Tree_Test::RunTest_Moving();
  SpartialPartition_Tree_Test::RunTest_Big();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v3) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Sys_Printf("SpatialPartition Tree tests ran in %.3f ms.\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
}

/*
==============
SpartialPartition_Tree_Test::SphereAABBIntersection
==============
*/
bool SpartialPartition_Tree_Test::SphereAABBIntersection(const vec3_t *spherePos, float sphereRadius, const vec3_t *boxMin, const vec3_t *boxMax)
{
  float v7; 

  _XMM3 = LODWORD(spherePos->v[0]);
  __asm
  {
    vminss  xmm0, xmm3, dword ptr [r9]
    vmaxss  xmm2, xmm0, dword ptr [r8]
  }
  v7 = *(float *)&_XMM2 - *(float *)&_XMM3;
  _XMM3 = LODWORD(boxMax->v[1]);
  __asm
  {
    vminss  xmm0, xmm3, dword ptr [rcx+4]
    vmaxss  xmm2, xmm0, dword ptr [r8+4]
  }
  _XMM3 = LODWORD(boxMax->v[2]);
  __asm
  {
    vminss  xmm0, xmm3, dword ptr [rcx+8]
    vmaxss  xmm1, xmm0, dword ptr [r8+8]
  }
  return (float)(sphereRadius * sphereRadius) >= (float)((float)((float)((float)(*(float *)&_XMM2 - spherePos->v[1]) * (float)(*(float *)&_XMM2 - spherePos->v[1])) + (float)(v7 * v7)) + (float)((float)(*(float *)&_XMM1 - spherePos->v[2]) * (float)(*(float *)&_XMM1 - spherePos->v[2])));
}

/*
==============
SpartialPartition_Tree_Test::TestBox
==============
*/
void SpartialPartition_Tree_Test::TestBox(SpatialPartition_Tree *tree, const ExtentBounds *box, unsigned int expectedHitCount, const unsigned int *expectedHits)
{
  signed __int64 v4; 
  void *v5; 
  unsigned __int64 v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v15; 
  __int128 v18; 
  __int128 v21; 
  __int64 v24; 
  char v25[4368]; 

  v5 = alloca(v4);
  v6 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v6 + 4352) = (unsigned __int64)&v24 ^ _security_cookie;
  v7 = box->maxs.v[0];
  v8 = LODWORD(box->maxs.v[1]);
  v9 = (float)(v7 + box->mins.v[0]) * 0.5;
  v10 = (float)(*(float *)&v8 + box->mins.v[1]) * 0.5;
  v11 = LODWORD(box->maxs.v[2]);
  *(float *)&v11 = (float)(*(float *)&v11 + box->mins.v[2]) * 0.5;
  v12 = v11;
  v15 = LODWORD(v7);
  *(float *)&v15 = v7 - v9;
  _XMM1 = v15;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  *(float *)(v6 + 12) = *(float *)&_XMM1;
  *(float *)v6 = v9;
  v18 = v8;
  *(float *)&v18 = *(float *)&v8 - v10;
  _XMM2 = v18;
  __asm { vmaxss  xmm1, xmm2, xmm0 }
  *(float *)(v6 + 4) = v10;
  v21 = v12;
  *(float *)&v21 = *(float *)&v12 - box->mins.v[2];
  _XMM3 = v21;
  *(float *)(v6 + 16) = *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm3, xmm0 }
  *(_QWORD *)(v6 + 224) = 0i64;
  *(_DWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 240) = 0i64;
  *(float *)(v6 + 20) = *(float *)&_XMM1;
  *(float *)(v6 + 8) = *(float *)&v12;
  *(_QWORD *)(v6 + 248) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 32), tree, (const Bounds *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64));
  SpartialPartition_Tree_Test::TestIterator_SpatialPartition_Tree_AABBIterator_((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 32), expectedHitCount, expectedHits);
}

