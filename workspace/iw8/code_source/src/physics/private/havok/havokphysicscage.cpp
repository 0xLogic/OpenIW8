/*
==============
HavokPhysicsCage_ResetAll
==============
*/

void HavokPhysicsCage_ResetAll(void)
{
  ?HavokPhysicsCage_ResetAll@@YAXXZ();
}

/*
==============
HavokPhysicsCage_DrawDebug
==============
*/

void __fastcall HavokPhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  ?HavokPhysicsCage_DrawDebug@@YAXII@Z(cageId, planesCount);
}

/*
==============
HavokPhysicsCage_Invalidate
==============
*/

void __fastcall HavokPhysicsCage_Invalidate(unsigned int cageId)
{
  ?HavokPhysicsCage_Invalidate@@YAXI@Z(cageId);
}

/*
==============
HavokPhysicsCage_ClipPlanes
==============
*/

void __fastcall HavokPhysicsCage_ClipPlanes(unsigned int cageId, const hkVector4f *planesWs, unsigned int planeCount)
{
  ?HavokPhysicsCage_ClipPlanes@@YAXIPEBVhkVector4f@@I@Z(cageId, planesWs, planeCount);
}

/*
==============
HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/

void __fastcall HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  ?HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane@@YAXIIAEBTvec3_t@@AEATvec2_t@@@Z(cageId, planeIndex, pointWs, outPoint);
}

/*
==============
HavokPhysicsCage_Update
==============
*/

void __fastcall HavokPhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const hkAabb *newAabb)
{
  ?HavokPhysicsCage_Update@@YAXIPEAVHavokPhysics_IgnoreBodies@@AEBVhkAabb@@@Z(cageId, ignoreBodies, newAabb);
}

/*
==============
HavokPhysicsCage_Destroy
==============
*/

void __fastcall HavokPhysicsCage_Destroy(unsigned int cageId)
{
  ?HavokPhysicsCage_Destroy@@YAXI@Z(cageId);
}

/*
==============
HavokPhysicsCage_Create
==============
*/

unsigned int __fastcall HavokPhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  return ?HavokPhysicsCage_Create@@YAIW4Physics_WorldId@@W4PhysicsCage_Type@@@Z(worldId, cageType);
}

/*
==============
HavokPhysicsCage_SegmentCastInPlane
==============
*/

bool __fastcall HavokPhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  return ?HavokPhysicsCage_SegmentCastInPlane@@YA_NIAEBTvec3_t@@0IAEAM@Z(cageId, startWs, endWs, planeIndex, outFrac);
}

/*
==============
HavokPhysicsCage_ClipPlanes
==============
*/
void HavokPhysicsCage_ClipPlanes(unsigned int cageId, const hkVector4f *planesWs, unsigned int planeCount)
{
  unsigned int v3; 
  const hkVector4f *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  HavokPhysicsCage *v8; 
  unsigned int v9; 
  const hkVector4f *v10; 
  HavokPhysicsMidphaseClippedPlane *v11; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  hknpShape *v16; 
  hkTransformf *v17; 
  hkVector4f *v18; 
  __int64 v19; 
  hkTransformf *v25; 
  __m128 v32; 
  __m128 v36; 
  __m128 v37; 
  int m_value; 
  hknpShape *Shape; 
  unsigned int v40; 
  __int64 v41; 
  HavokPhysicsMidphaseClippedPlane *v42; 
  __int64 pointCount; 
  __int64 v44; 
  __int64 v45; 
  float *v46; 
  __int64 v47; 
  hkVector4f *edgesOut; 
  __int64 v49; 
  unsigned __int16 v50; 
  unsigned int v51; 
  unsigned int i; 
  int v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  const hkVector4f *v57; 
  HavokPhysicsCage *v58; 
  __int64 v59; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t out; 
  hkVector4f b; 
  hkSimdFloat32 tolerance; 
  hkVector4f a[2]; 
  hkVector4f c; 
  tmat33_t<vec3_t> outAxis; 
  _BYTE v68[64]; 
  __int64 v69; 
  int v70; 
  __int64 v71; 
  __m128 v72; 
  __int64 v73; 
  void (__fastcall *const *v74)(); 
  __int64 v75; 
  char *v76; 
  int v77; 
  char v78; 
  __m256i v79; 
  __m128 v80; 
  __int16 v81; 
  hkVector4f plane[2]; 
  hkVector4f v83; 
  __m128 v84; 

  v59 = -2i64;
  v3 = planeCount;
  LODWORD(v54) = planeCount;
  v4 = planesWs;
  v57 = planesWs;
  v5 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 245, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( v3 - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 246, ASSERT_TYPE_ASSERT, "(planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES)", "%s\n\tHavokPhysicsCage_ClipPlanes: Max number of allowed planes to clip is %d", "planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES", 2) )
    __debugbreak();
  v6 = v5 - 1;
  v55 = v5 - 1;
  v7 = v5 - 1;
  if ( !s_cages[v7].inUse )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 249, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
      __debugbreak();
    v6 = v55;
  }
  v8 = &s_cages[v7];
  v58 = &s_cages[v7];
  if ( s_cages[v7].updateCount )
  {
    v9 = 0;
    if ( v3 )
    {
      v10 = v4;
      v11 = s_midphaseCageClippedPlanes[v6];
      do
      {
        v11->index = v9;
        _XMM0 = v10->m_quad;
        __asm
        {
          vmovlps qword ptr [rbp+0DB0h+forward], xmm0
          vextractps dword ptr [rbp+0DB0h+forward+8], xmm0, 2
        }
        BG_AxisFromForward(&forward, &identityMatrix33.m[2], &outAxis);
        MatrixTranspose(&outAxis, &v11->worldToPlane);
        v11->pointCount = 0;
        ++v9;
        ++v11;
        ++v10;
      }
      while ( v9 < v3 );
    }
    v13 = 0;
    v51 = 0;
    v14 = 0;
    for ( i = 0; v14 < v8->shapeCount; i = v14 )
    {
      if ( v14 >= 4 )
      {
        LODWORD(v49) = 4;
        LODWORD(edgesOut) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", edgesOut, v49) )
          __debugbreak();
      }
      v15 = v14;
      v56 = v14;
      if ( (v8->bodyIds[v14].m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF && HavokPhysics_IsRigidBodyValid(v8->worldId, v8->bodyIds[v14]) && (v16 = HavokPhysics_GetShape(v8->worldId, v8->bodyIds[v14])) != NULL && v16->m_type.m_storage == 9 )
      {
        if ( v3 )
        {
          v17 = &v8->worldToShape[v14];
          v18 = plane;
          v19 = v3;
          do
          {
            b.m_quad = *(__m128 *)((char *)v18 + (char *)v4 - (char *)plane);
            hkVector4f::setRotatedDir(v18, &v17->m_rotation, &b);
            __asm { vbroadcastss xmm2, dword ptr [rbp+0DB0h+b.m_quad+0Ch] }
            _XMM3.m_quad = v18->m_quad;
            _XMM0.m_quad = (__m128)v17->m_translation;
            __asm { vdpps   xmm1, xmm0, xmm3, 7Fh }
            _mm128_sub_ps(_XMM2, _XMM1);
            __asm { vblendps xmm0, xmm3, xmm2, 8 }
            *v18++ = (hkVector4f)_XMM0.m_quad;
            --v19;
          }
          while ( v19 );
          v13 = v51;
          v15 = v56;
          v14 = i;
        }
        v25 = &v8->worldToShape[v15];
        _XMM1.m_quad = (__m128)v25->m_rotation.m_col0;
        __asm
        {
          vunpcklps xmm2, xmm1, xmm0
          vunpckhps xmm0, xmm1, xmm0
          vblendps xmm8, xmm0, xmm3, 0Ch
          vmovlhps xmm7, xmm2, xmm3
          vmovhlps xmm0, xmm7, xmm2
        }
        v32 = _mm_shuffle_ps(_XMM0, v25->m_rotation.m_col2.m_quad, 212);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vpinsrw xmm0, xmm0, ecx, 1
          vpshufd xmm1, xmm0, 0
        }
        v36 = (__m128)(_XMM1 ^ *(_OWORD *)&v25->m_translation);
        v37 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v36, v36, 85), v32), _mm128_mul_ps(_mm_shuffle_ps(v36, v36, 0), _XMM7)), _mm128_mul_ps(_mm_shuffle_ps(v36, v36, 170), _XMM8));
        v50 = 0;
        if ( v8->subshapeCount[v15] )
        {
          do
          {
            if ( v13 >= v8->subshapeTotalCount )
              break;
            m_value = v8->shapeKeys[v13].m_value;
            if ( v14 >= 4 )
            {
              LODWORD(v49) = 4;
              LODWORD(edgesOut) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", edgesOut, v49) )
                __debugbreak();
            }
            if ( (v8->bodyIds[v15].m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF || !HavokPhysics_IsRigidBodyValid(v8->worldId, v8->bodyIds[v15]) )
              Shape = NULL;
            else
              Shape = HavokPhysics_GetShape(v8->worldId, v8->bodyIds[v15]);
            v53 = m_value;
            if ( Shape )
            {
              v75 = 0i64;
              v76 = &v78;
              v77 = 2048;
              v74 = hknpInplaceShapeBuffer<2048>::`vftable';
              v73 = 0i64;
              v69 = 0i64;
              v70 = 0;
              v71 = 13i64;
              *(__m256i *)v68 = *(__m256i *)g_vectorfConstants[32].m128_f32;
              *(__m256i *)&v68[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
              v72 = g_vectorfConstants[6];
              v81 = -1;
              Shape->getLeafShapes(Shape, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&v53, 1, (hknpShapeCollector *)v68);
              if ( (v71 & 0x10) != 0 )
              {
                *(__m256i *)a[0].m_quad.m128_f32 = v79;
                c.m_quad = v80;
                v74 = hknpShapeBuffer::`vftable';
                if ( v75 )
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v75 + 8i64))(v75, 0i64);
                v40 = 0;
                v41 = v55;
                while ( v40 < v3 )
                {
                  v42 = &s_midphaseCageClippedPlanes[v41][v40];
                  tolerance.m_real = g_vectorfConstants[38];
                  if ( hkcdTriangleUtil::clipWithPlane(a, &a[1], &c, &plane[v40], &tolerance, &v83) )
                  {
                    pointCount = v42->pointCount;
                    if ( (unsigned int)pointCount < 0x13F )
                    {
                      v83.m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v83.m_quad, v83.m_quad, 85), v32), _mm128_mul_ps(_mm_shuffle_ps(v83.m_quad, v83.m_quad, 0), _XMM7)), _mm128_mul_ps(_mm_shuffle_ps(v83.m_quad, v83.m_quad, 170), _XMM8)), v37);
                      v84 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v84, v84, 85), v32), _mm128_mul_ps(_mm_shuffle_ps(v84, v84, 0), _XMM7)), _mm128_mul_ps(_mm_shuffle_ps(v84, v84, 170), _XMM8)), v37);
                      v44 = pointCount;
                      v45 = 0i64;
                      v46 = &v83.m_quad.m128_f32[2];
                      do
                      {
                        vec.v[0] = 32.0 * *(v46 - 2);
                        vec.v[1] = 32.0 * *(v46 - 1);
                        vec.v[2] = 32.0 * *v46;
                        v47 = v45 + v44;
                        AxisTransformVec3(&s_midphaseCageClippedPlanes[v41][v40].worldToPlane, &vec, &out);
                        v42->points2D[v47].v[0] = out.v[1];
                        v42->points2D[v47].v[1] = out.v[2];
                        v42->debugPoints[v42->pointCount + v45++] = vec;
                        v46 += 4;
                      }
                      while ( v45 < 2 );
                      v42->pointCount += 2;
                      v3 = v54;
                    }
                  }
                  ++v40;
                }
                v8 = v58;
                v13 = v51;
                v15 = v56;
                v14 = i;
              }
              else
              {
                v74 = hknpShapeBuffer::`vftable';
                if ( v75 )
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v75 + 8i64))(v75, 0i64);
              }
            }
            ++v50;
            v51 = ++v13;
          }
          while ( v50 < v8->subshapeCount[v15] );
          v4 = v57;
        }
      }
      else
      {
        v13 += v8->subshapeCount[v14];
        v51 = v13;
      }
      ++v14;
    }
  }
}

/*
==============
HavokPhysicsCage_Create
==============
*/
__int64 HavokPhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  bool *p_inUse; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  hkVector4f v10; 
  __int64 result; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 86, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysicsCage_Create: Invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( cageType != PhysicsCage_Midphase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 87, ASSERT_TYPE_ASSERT, "(cageType == PhysicsCage_Type::PhysicsCage_Midphase)", "%s\n\tPhysicsCage_Create: Only PhysicsCage_Midphase is supported so far", "cageType == PhysicsCage_Type::PhysicsCage_Midphase") )
    __debugbreak();
  p_inUse = &s_cages[0].inUse;
  v6 = 0;
  while ( *p_inUse )
  {
    ++v6;
    p_inUse += 1616;
    if ( v6 >= 4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 96, ASSERT_TYPE_ASSERT, "(index < MAX_CAGE_COUNT)", "%s\n\tPhysicsCage_Create: Not enough memory for physics cage. Increase MAX_CAGE_COUNT?", "index < MAX_CAGE_COUNT") )
        __debugbreak();
      break;
    }
  }
  v7 = (int)v6;
  s_cages[v7].worldId = worldId;
  v8 = v6 + 1;
  s_cages[v7].cageType = cageType;
  s_cages[v7].inUse = 1;
  if ( v6 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 128, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v9 = (int)v6;
  if ( !s_cages[v9].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 131, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v10.m_quad = g_vectorfConstants[36];
  s_cages[v9].updateCount = 0;
  s_cages[v9].aabb.m_min = (hkVector4f)v10.m_quad;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpinsrw xmm0, xmm0, eax, 1
    vpshufd xmm1, xmm0, 0
  }
  s_cages[v9].aabb.m_max = (hkVector4f)(*(_OWORD *)&v10.m_quad ^ _XMM1);
  *(_QWORD *)&s_cages[v9].shapeCount = 0i64;
  result = v8;
  *(_QWORD *)s_cages[v9].subshapeCount = 0i64;
  return result;
}

/*
==============
HavokPhysicsCage_Destroy
==============
*/
void HavokPhysicsCage_Destroy(unsigned int cageId)
{
  __int64 v1; 

  v1 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 115, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  s_cages[v1 - 1].inUse = 0;
}

/*
==============
HavokPhysicsCage_DrawDebug
==============
*/
void HavokPhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  HavokPhysicsCage *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  hknpShape *Shape; 
  hknpShape *v11; 
  unsigned __int16 v12; 
  char v13; 
  __int64 v14; 
  vec3_t *debugPoints; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v22; 
  __int64 v23; 
  HavokPhysicsCage *v24; 
  __int64 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m256i v29; 
  __m256i v30; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  __m128 v34; 
  __int64 v35; 
  void (__fastcall *const *v36)(); 
  __int64 v37; 
  char *v38; 
  int v39; 
  char v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __int16 v44; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v47; 

  v25 = -2i64;
  v2 = planesCount;
  v3 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 444, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v4 = v3 - 1;
  v23 = v3 - 1;
  v5 = v3 - 1;
  if ( !s_cages[v5].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 447, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v6 = &s_cages[v5];
  v24 = &s_cages[v5];
  if ( s_cages[v5].updateCount )
  {
    v7 = 0i64;
    v20 = 0;
    if ( v6->shapeCount )
    {
      v8 = 0i64;
      v22 = 0i64;
      do
      {
        if ( (unsigned int)v7 >= 4 )
        {
          LODWORD(v19) = 4;
          LODWORD(v18) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v9 = (unsigned int)v7;
        if ( (v6->bodyIds[v7].m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF && HavokPhysics_IsRigidBodyValid(v6->worldId, v6->bodyIds[v7]) )
        {
          Shape = HavokPhysics_GetShape(v6->worldId, v6->bodyIds[v7]);
          v11 = Shape;
          if ( Shape )
          {
            if ( Shape->m_type.m_storage == 9 )
            {
              if ( drawTris )
              {
                v12 = 0;
                if ( v6->subshapeCount[v9] )
                {
                  do
                  {
                    LODWORD(v22) = v6->shapeKeys[v8].m_value;
                    v37 = 0i64;
                    v38 = &v40;
                    v39 = 2048;
                    v36 = hknpInplaceShapeBuffer<2048>::`vftable';
                    v35 = 0i64;
                    v31 = 0i64;
                    v32 = 0;
                    v33 = 13i64;
                    v29 = *(__m256i *)g_vectorfConstants[32].m128_f32;
                    v30 = *(__m256i *)g_vectorfConstants[34].m128_f32;
                    v34 = g_vectorfConstants[6];
                    v44 = -1;
                    v11->getLeafShapes(v11, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&v22, 1, (hknpShapeCollector *)&v29);
                    if ( (v33 & 0x10) != 0 )
                    {
                      v26 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v41, v41, 85), *(__m128 *)&v29.m256i_u64[2]), _mm128_mul_ps(_mm_shuffle_ps(v41, v41, 0), *(__m128 *)v29.m256i_i8)), _mm128_mul_ps(_mm_shuffle_ps(v41, v41, 170), *(__m128 *)v30.m256i_i8)), *(__m128 *)&v30.m256i_u64[2]);
                      v27 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 85), *(__m128 *)&v29.m256i_u64[2]), _mm128_mul_ps(_mm_shuffle_ps(v42, v42, 0), *(__m128 *)v29.m256i_i8)), _mm128_mul_ps(_mm_shuffle_ps(v42, v42, 170), *(__m128 *)v30.m256i_i8)), *(__m128 *)&v30.m256i_u64[2]);
                      v28 = _mm128_add_ps(*(__m128 *)&v30.m256i_u64[2], _mm128_add_ps(_mm128_mul_ps(*(__m128 *)v30.m256i_i8, _mm_shuffle_ps(v43, v43, 170)), _mm128_add_ps(_mm128_mul_ps(*(__m128 *)&v29.m256i_u64[2], _mm_shuffle_ps(v43, v43, 85)), _mm128_mul_ps(*(__m128 *)v29.m256i_i8, _mm_shuffle_ps(v43, v43, 0)))));
                      v36 = hknpShapeBuffer::`vftable';
                      if ( v37 )
                        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 8i64))(v37, 0i64);
                      v13 = 1;
                    }
                    else
                    {
                      v36 = hknpShapeBuffer::`vftable';
                      if ( v37 )
                        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 8i64))(v37, 0i64);
                      v13 = 0;
                    }
                    if ( v13 )
                    {
                      start.v[0] = 32.0 * v26.m128_f32[0];
                      start.v[1] = 32.0 * v26.m128_f32[1];
                      start.v[2] = 32.0 * v26.m128_f32[2];
                      end.v[0] = 32.0 * v27.m128_f32[0];
                      end.v[1] = 32.0 * v27.m128_f32[1];
                      end.v[2] = 32.0 * v27.m128_f32[2];
                      v47.v[0] = 32.0 * v28.m128_f32[0];
                      v47.v[1] = 32.0 * v28.m128_f32[1];
                      v47.v[2] = 32.0 * v28.m128_f32[2];
                      CG_DebugLine(&start, &end, &colorCyan, 0, 0);
                      CG_DebugLine(&start, &v47, &colorCyan, 0, 0);
                      CG_DebugLine(&end, &v47, &colorCyan, 0, 0);
                    }
                    ++v12;
                    ++v8;
                  }
                  while ( v12 < v6->subshapeCount[v9] );
                  v22 = v8;
                  v2 = planesCount;
                  v4 = v23;
                }
                LODWORD(v7) = v20;
              }
              if ( drawEdges && (_DWORD)v2 )
              {
                v14 = 2 * v4;
                do
                {
                  debugPoints = s_midphaseCageClippedPlanes[0][v14].debugPoints;
                  v16 = s_midphaseCageClippedPlanes[0][v14].pointCount / 2;
                  if ( v16 > 0 )
                  {
                    v17 = (unsigned int)v16;
                    do
                    {
                      CG_DebugLine(debugPoints, debugPoints + 1, &colorRed, 0, 0);
                      debugPoints += 2;
                      --v17;
                    }
                    while ( v17 );
                  }
                  ++v14;
                  --v2;
                }
                while ( v2 );
                v6 = v24;
                v8 = v22;
                LODWORD(v7) = v20;
                v2 = planesCount;
                v4 = v23;
              }
            }
          }
        }
        v7 = (unsigned int)(v7 + 1);
        v20 = v7;
      }
      while ( (unsigned int)v7 < v6->shapeCount );
    }
  }
}

/*
==============
HavokPhysicsCage_Invalidate
==============
*/
void HavokPhysicsCage_Invalidate(unsigned int cageId)
{
  __int64 v2; 
  __int64 v3; 
  hkVector4f v4; 

  v2 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 128, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v3 = v2;
  if ( !s_cages[v3 - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 131, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v4.m_quad = g_vectorfConstants[36];
  s_cages[v3 - 1].updateCount = 0;
  s_cages[v3 - 1].aabb.m_min = (hkVector4f)v4.m_quad;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpinsrw xmm0, xmm0, eax, 1
    vpshufd xmm1, xmm0, 0
  }
  s_cages[v3 - 1].aabb.m_max = (hkVector4f)(_XMM1 ^ *(_OWORD *)&v4.m_quad);
  *(_QWORD *)&s_cages[v3 - 1].shapeCount = 0i64;
  *(_QWORD *)s_cages[v3 - 1].subshapeCount = 0i64;
}

/*
==============
HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/
void HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  __int64 v4; 
  float v8; 
  vec3_t out; 

  v4 = planeIndex;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 352, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 353, ASSERT_TYPE_ASSERT, "(planeIndex < MAX_MIDCAGE_CLIPPLANES)", (const char *)&queryFormat, "planeIndex < MAX_MIDCAGE_CLIPPLANES") )
    __debugbreak();
  AxisTransformVec3(&s_midphaseCageClippedPlanes[cageId - 1][v4].worldToPlane, pointWs, &out);
  v8 = out.v[2];
  outPoint->v[0] = out.v[1];
  outPoint->v[1] = v8;
}

/*
==============
HavokPhysicsCage_ResetAll
==============
*/
void HavokPhysicsCage_ResetAll(void)
{
  memset_0(s_cages, 0, sizeof(s_cages));
  memset_0(s_midphaseCageClippedPlanes, 0, sizeof(s_midphaseCageClippedPlanes));
}

/*
==============
HavokPhysicsCage_SegmentCastInPlane
==============
*/
char HavokPhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  __int128 v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  char v14; 
  float v15; 
  int v16; 
  const vec2_t *v17; 
  int v18; 
  __int64 v19; 
  const dvar_t *v22; 
  float v23; 
  vec3_t out; 
  vec2_t p2; 
  vec2_t p1; 
  __int128 v27; 

  v6 = (int)cageId;
  v8 = planeIndex;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 367, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 368, ASSERT_TYPE_ASSERT, "(planeIndex < MAX_MIDCAGE_CLIPPLANES)", (const char *)&queryFormat, "planeIndex < MAX_MIDCAGE_CLIPPLANES") )
    __debugbreak();
  v10 = v6 - 1;
  if ( !s_cages[v10].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 371, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v11 = v8 + 2 * v10;
  *outFrac = 1.0;
  v12 = (char *)s_midphaseCageClippedPlanes + 6444 * v11;
  if ( *((int *)v12 + 649) <= 0 )
    return 0;
  v27 = v5;
  AxisTransformVec3(&s_midphaseCageClippedPlanes[0][v11].worldToPlane, startWs, &out);
  p1 = *(vec2_t *)&out.y;
  AxisTransformVec3((const tmat33_t<vec3_t> *)v12, endWs, &out);
  v14 = 0;
  v15 = FLOAT_3_4028235e38;
  v16 = *((_DWORD *)v12 + 649);
  v17 = (const vec2_t *)(v12 + 36);
  v18 = v16 / 2;
  p2 = *(vec2_t *)&out.y;
  if ( v18 > 0 )
  {
    v19 = (unsigned int)v18;
    do
    {
      if ( SegmentsIntersection(&p1, &p2, v17, v17 + 1, &v23) && v23 < v15 )
      {
        v15 = v23;
        v14 = 1;
      }
      v17 += 2;
      --v19;
    }
    while ( v19 );
  }
  _XMM0 = *(unsigned int *)outFrac;
  __asm { vminss  xmm1, xmm0, xmm6 }
  *outFrac = *(float *)&_XMM1;
  v22 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
  if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    CG_DebugSphere(startWs, 0.2, &colorBlue, 0, 0);
    CG_DebugLine(startWs, endWs, &colorGreen, 0, 0);
  }
  return v14;
}

/*
==============
HavokPhysicsCage_Update
==============
*/
void HavokPhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const hkAabb *newAabb)
{
  __int64 v6; 
  __int64 v7; 
  char *v8; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  unsigned int i; 
  hknpBodyId v28; 
  hknpShape *Shape; 
  __int64 v30; 
  hknpWorld *world; 
  __int64 v32; 
  __m128 *v33; 
  __m128 v40; 
  __m128 v43; 
  unsigned int j; 
  unsigned int AABBQueryHitShapeKey; 
  hkMemoryAllocator *v46; 
  __int64 v47; 
  HavokPhysics_BroadphaseCollisionQueryResult v48; 
  Physics_AABBQueryExtendedData v49; 
  Physics_AABBBroadphaseQueryExtendedData v50; 
  __int64 v51; 
  hkAabb v52[2]; 

  v51 = -2i64;
  v6 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 148, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v7 = 1616 * v6;
  if ( !VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_961.v.m128_i8[v7 + 15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 151, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v8 = (char *)&unk_150D5F430 + v7;
  _XMM4 = *((_OWORD *)v8 + 98);
  _XMM5.m_quad = (__m128)newAabb->m_min;
  __asm { vcmpeqps xmm1, xmm5, xmm4 }
  _XMM7.m_quad = (__m128)newAabb->m_max;
  __asm { vcmpeqps xmm0, xmm7, xmm6 }
  _XMM2 = _XMM1 & _XMM0;
  _XMM1 = 0i64;
  __asm
  {
    vpxor   xmm8, xmm8, xmm8
    vpcmpeqd xmm0, xmm8, xmm8
    vblendps xmm3, xmm1, xmm0, 7
    vpand   xmm0, xmm2, xmm3
    vptest  xmm0, xmm3
  }
  if ( !_CF )
  {
    __asm
    {
      vcmpleps xmm1, xmm4, xmm5
      vcmpleps xmm0, xmm7, xmm6
    }
    _XMM1 = _XMM1 & _XMM0;
    __asm
    {
      vpand   xmm0, xmm1, xmm3
      vptest  xmm0, xmm3
    }
    if ( !_CF )
    {
      Sys_ProfBeginNamedEvent(0xFFFF6347, "HavokPhysicsCage_Update: BP");
      *((_OWORD *)v8 + 98) = newAabb->m_min;
      *((_OWORD *)v8 + 99) = newAabb->m_max;
      *((_QWORD *)v8 + 200) = 0i64;
      *((_QWORD *)v8 + 194) = 0i64;
      ++*((_WORD *)v8 + 806);
      v50.phaseSelection = All;
      v50.ignoreBodies = ignoreBodies;
      v48.m_propertyBag.m_bag = NULL;
      *(_DWORD *)&v48.m_memSizeAndFlags = 0x1FFFF;
      v48.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
      v48.m_hits.m_data = NULL;
      v48.m_hits.m_size = 0;
      v48.m_hits.m_capacityAndFlags = 0x80000000;
      v50.contents = 41943825;
      v48.m_worldId = *((_DWORD *)v8 + 402);
      v52[0] = *((hkAabb *)v8 + 49);
      HavokPhysics_AABBBroadphaseQuery(v48.m_worldId, v52, &v50, &v48);
      v49.contents = -1;
      v49.simplify = 0;
      v49.ignoreBodies = NULL;
      v49.collisionBuffer = 0.0;
      v49.phaseSelection = All;
      AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)*((_DWORD *)v8 + 402));
      Sys_ProfEndNamedEvent();
      Sys_ProfBeginNamedEvent(0xFFFF6347, "HavokPhysicsCage_Update: MP");
      for ( i = 0; i < HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&v48); ++i )
      {
        v28.m_serialAndIndex = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&v48, i);
        if ( (v28.m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
        {
          Shape = HavokPhysics_GetShape((Physics_WorldId)*((_DWORD *)v8 + 402), v28);
          if ( !Shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 189, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
            __debugbreak();
          if ( Shape->m_type.m_storage == 9 )
          {
            v30 = *((int *)v8 + 402);
            if ( (unsigned int)v30 > 7 )
            {
              LODWORD(v47) = *((_DWORD *)v8 + 402);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                __debugbreak();
              if ( (unsigned int)v30 > 7 )
              {
                LODWORD(v47) = v30;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 56, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                  __debugbreak();
              }
            }
            world = g_havokPhysicsWorlds[v30].world;
            if ( !world )
            {
              LODWORD(v47) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v47) )
                __debugbreak();
            }
            v32 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v28.m_serialAndIndex);
            v33 = (__m128 *)&v8[64 * *((unsigned int *)v8 + 400) + 1280];
            _XMM1 = *(_OWORD *)v32;
            __asm
            {
              vunpcklps xmm2, xmm1, xmm0
              vunpckhps xmm0, xmm1, xmm0
              vblendps xmm6, xmm0, xmm3, 0Ch
              vmovlhps xmm5, xmm2, xmm3
              vmovhlps xmm0, xmm5, xmm2
            }
            v40 = _mm_shuffle_ps(_XMM0, *(__m128 *)(v32 + 32), 212);
            *v33 = _XMM5;
            v33[1] = v40;
            v33[2] = _XMM6;
            __asm
            {
              vpinsrw xmm0, xmm8, edx, 1
              vpshufd xmm1, xmm0, 0
            }
            v43 = (__m128)(_XMM1 ^ *(_OWORD *)(v32 + 48));
            v33[3] = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v43, v43, 170), _XMM6), _mm128_add_ps(_mm128_mul_ps(v40, _mm_shuffle_ps(v43, v43, 85)), _mm128_mul_ps(_XMM5, _mm_shuffle_ps(v43, v43, 0))));
            *(hknpBodyId *)&v8[4 * *((unsigned int *)v8 + 400) + 1536] = v28;
            HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
            v52[0] = *((hkAabb *)v8 + 49);
            HavokPhysics_AABBQuery(*((Physics_WorldId *)v8 + 402), v28, v52, &v49, AllResult);
            *(_WORD *)&v8[2 * *((unsigned int *)v8 + 400) + 1552] = 0;
            for ( j = 0; j < HavokPhysics_CollisionQueryResult::GetNumHits(AllResult); ++j )
            {
              AABBQueryHitShapeKey = HavokPhysics_CollisionQueryResult::GetAABBQueryHitShapeKey(AllResult, j);
              if ( AABBQueryHitShapeKey != -1 )
              {
                *(_DWORD *)&v8[4 * *((unsigned int *)v8 + 401)] = AABBQueryHitShapeKey;
                ++*(_WORD *)&v8[2 * *((unsigned int *)v8 + 400) + 1552];
                if ( ++*((_DWORD *)v8 + 401) >= 0x140u )
                  break;
              }
            }
            if ( ++*((_DWORD *)v8 + 400) >= 4u || *((_DWORD *)v8 + 401) >= 0x140u )
              break;
          }
        }
      }
      Sys_ProfEndNamedEvent();
      v46 = hkMemHeapAllocator();
      v48.m_hits.m_size = 0;
      if ( v48.m_hits.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v46, v48.m_hits.m_data, 4, v48.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
      v48.m_hits.m_data = NULL;
      v48.m_hits.m_capacityAndFlags = 0x80000000;
      hkReferencedObject::~hkReferencedObject(&v48);
    }
  }
}

