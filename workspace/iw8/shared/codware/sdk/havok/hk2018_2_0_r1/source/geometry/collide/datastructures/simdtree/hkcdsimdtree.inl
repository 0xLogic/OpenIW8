/*
==============
hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process
==============
*/

double __fastcall hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process(hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0> *this, const unsigned int *leaves, int numLeaves, const hkcdRay *ray)
{
  double result; 

  *(float *)&result = ?process@?$ProcessSimdTreeRayCastLeaves@U?$RayCast@$0A@@StaticModels_HavokShapeEx@@$0A@@hkcdSimdTreeUtils@@UEAAMPEBIHAEBUhkcdRay@@@Z(this, leaves, numLeaves, ray);
  return result;
}

/*
==============
hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::process
==============
*/

double __fastcall hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::process(hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0> *this, const unsigned int *leaves, int numLeaves, const hkcdRay *ray)
{
  double result; 

  *(float *)&result = ?process@?$ProcessSimdTreeRayCastLeaves@U?$RayCast@$00@StaticModels_HavokShapeEx@@$0A@@hkcdSimdTreeUtils@@UEAAMPEBIHAEBUhkcdRay@@@Z(this, leaves, numLeaves, ray);
  return result;
}

/*
==============
hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::process
==============
*/
float hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::process(hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0> *this, const unsigned int *leaves, int numLeaves, const hkcdRay *ray)
{
  __m128 v4; 
  StaticModels_HavokShapeEx::RayCast<1> *m_query; 
  const unsigned int *v6; 
  __int64 v7; 
  __int64 v8; 
  float v9; 
  __int64 v10; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v13; 
  StaticModels_HavokShapeInstance *m_data; 
  hkSimdFloat32 v15; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  int v20; 
  int v21; 
  const void *CollisionTileModelShape; 
  bool v23; 
  __int64 m_shapeTagCodec; 
  const StaticModels_HavokShape *v25; 
  void (__fastcall *v26)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __m128 *); 
  const hknpShapeQueryInfo *v27; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  _BOOL8 v31; 
  const hknpRayCastQuery *v32; 
  const hknpCollisionFilter *m_filter; 
  __int64 *v34; 
  __m128 v37; 
  const hknpShapeQueryInfo *v41; 
  const hkTransformf *m_shapeToWorld; 
  __m128 m_quad; 
  const hknpRayCastQuery *v46; 
  hknpCollisionQueryCollector *m_collector; 
  __int128 v50; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v64; 
  __int64 v65; 
  bool v68; 
  hkSimdFloat32 v69; 
  int v71; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v73; 
  StaticModels_HavokShapeInstance *v74; 
  __int64 v75; 
  __int64 v76; 
  __m128 v77; 
  __int64 v78; 
  const unsigned int *v79; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  __m128 v83; 
  __int64 v84; 
  int v85; 
  __int64 v86; 
  __int16 v87; 
  int v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  const StaticModels_HavokShape *v92; 
  int v93; 
  __int64 v94; 
  __int64 v95[2]; 
  const StaticModels_HavokShape *m_parentShape; 
  int v97; 
  int m_size; 
  const hkTransformf *v99; 
  __int64 v100; 
  bool m_isScaled; 
  unsigned int m_mode; 
  float m_convexRadius; 
  hkVector4f v104; 
  hkVector4f v105; 
  vec3_t origin; 
  char v107[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v110[3]; 
  __m128 v111; 
  __m256i v112; 
  __int64 v113; 
  __m128 v114; 
  __m128 v115; 
  __int128 m_invDirection; 
  unsigned int m_storage; 
  _BYTE v118[64]; 
  __m128 v119; 

  m_query = this->m_query;
  v6 = leaves;
  v7 = numLeaves;
  v76 = numLeaves;
  v79 = leaves;
  if ( numLeaves > 0 )
  {
    v8 = 0i64;
    v9 = FLOAT_0_03125;
    v119 = v4;
    v75 = 0i64;
    do
    {
      v10 = (int)v6[v8];
      m_simdTreeMask = m_query->m_simdTreeMask;
      if ( !m_simdTreeMask || ((m_simdTreeMask->m_enableInstances.m_storage.m_words.m_data[v10 >> 5] >> (v10 & 0x1F)) & 1) != 0 )
      {
        m_targetShape = m_query->m_targetShape;
        v13 = (unsigned __int16)v10;
        m_data = m_query->m_targetShape->m_instances.m_data;
        v15.m_real = (__m128)m_query->m_collector->m_earlyOutThreshold;
        v74 = m_data;
        m_modelIdxAndFlags = m_data[(unsigned __int16)v10].m_modelIdxAndFlags;
        if ( m_modelIdxAndFlags < 0 )
        {
          _XMM0 = *(__m128 *)m_query->m_targetShapeFilterData;
          m_targetShapeInfo = m_query->m_targetShapeInfo;
          v77 = _XMM0;
          m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
          m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
          v20 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
          v71 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
          v21 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | ((((_DWORD)v10 + 1) << (32 - (LOBYTE(m_shapeKeyPath.m_size) + m_numShapeKeyBits))) - 1);
          CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
          v73 = (__int64)CollisionTileModelShape;
          v23 = 1;
          m_shapeTagCodec = (__int64)m_query->m_query->m_shapeTagCodec;
          v78 = m_shapeTagCodec;
          if ( m_shapeTagCodec )
          {
            v25 = m_query->m_targetShape;
            v26 = *(void (__fastcall **)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __m128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
            v27 = m_query->m_targetShapeInfo;
            m_rootShape = v27->m_rootShape;
            m_body = v27->m_body;
            CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v74[(unsigned __int16)v10].m_modelIdxAndFlags & 0x4000) != 0, m_query->m_targetShape->m_tileIdx, v74[(unsigned __int16)v10].m_modelIdxAndFlags & 0x3FFF);
            v26(v78, CollisionTileModelShapeTag, 1i64, m_body, m_rootShape, v25, v21, v73, &v77);
            v32 = m_query->m_query;
            m_filter = v32->m_filter;
            if ( m_filter )
            {
              v34 = (__int64 *)m_query->m_targetShapeInfo;
              CollisionTileModelShape = (const void *)v73;
              m_collisionFilterInfo = 0;
              m_value = -1;
              LOBYTE(v31) = 1;
              m_userData = 0i64;
              m_value = v32->m_filterData.m_materialId.m_value;
              m_collisionFilterInfo = v32->m_filterData.m_collisionFilterInfo;
              m_userData = v32->m_filterData.m_userData;
              v87 = v77.m128_i16[0];
              v88 = v77.m128_i32[1];
              v89 = v77.m128_i64[1];
              v84 = 0i64;
              v85 = -1;
              v86 = 0i64;
              __asm { vpxor   xmm0, xmm0, xmm0 }
              v83 = _XMM0;
              v90 = *v34;
              v91 = v34[1];
              v92 = m_query->m_targetShape;
              v93 = v21;
              v94 = v73;
              v23 = m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, v31, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v87);
            }
            else
            {
              v23 = 1;
              CollisionTileModelShape = (const void *)v73;
            }
            v20 = v71;
            m_data = v74;
            v13 = (unsigned __int16)v10;
          }
          if ( v23 )
          {
            *(double *)_XMM0.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_query->m_targetShape->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx);
            _XMM14 = _mm_shuffle_ps(_XMM0, _XMM0, 0);
            __asm { vrcpps  xmm3, xmm14 }
            v37 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM14, _XMM3)), _XMM3);
            StaticModels_GetCollisionTileModelInstanceTransform(m_query->m_targetShape->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx, &origin, &orientationAsQuat);
            *(__m256i *)v107 = *(__m256i *)g_vectorfConstants[32].m128_f32;
            *(__m256i *)&v107[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
            qi.m_vec.m_quad = (__m128)orientationAsQuat;
            hkRotationImpl<float>::set((hkRotationImpl<float> *)v107, &qi);
            _XMM12 = *(__m128 *)&v107[32];
            _XMM11 = *(__m128 *)&v107[16];
            _XMM9 = *(__m128 *)v107;
            v41 = m_query->m_targetShapeInfo;
            *(float *)&v107[52] = v9 * origin.v[1];
            *(float *)&v107[48] = v9 * origin.v[0];
            *(float *)&v107[56] = v9 * origin.v[2];
            *(float *)&v107[60] = 0.0;
            m_shapeToWorld = v41->m_shapeToWorld;
            _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
            m_quad = m_shapeToWorld->m_rotation.m_col2.m_quad;
            __asm { vextractf128 xmm6, ymm7, 1 }
            v110[2] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 170), m_quad));
            v110[1] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), m_quad));
            v111 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v107[48], *(__m128 *)&v107[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v107[48], *(__m128 *)&v107[48], 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v107[48], *(__m128 *)&v107[48], 170), m_quad));
            v46 = m_query->m_query;
            m_collector = m_query->m_collector;
            v110[0] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 170), m_quad));
            v111 = _mm128_add_ps(v111, m_shapeToWorld->m_translation.m_quad);
            v112 = *(__m256i *)&v46->m_shapeTagCodec;
            v113 = *(_QWORD *)v46->m_levelOfDetail;
            v114 = v46->m_ray.m_origin.m_quad;
            v115 = v46->m_ray.m_direction.m_quad;
            m_invDirection = (__int128)v46->m_ray.m_invDirection;
            m_storage = v46->m_flags.m_storage;
            _mm128_sub_ps(v46->m_ray.m_origin.m_quad, *(__m128 *)&v107[48]);
            __asm
            {
              vdpps   xmm0, xmm9, xmm3, 71h ; 'q'
              vdpps   xmm1, xmm11, xmm3, 72h ; 'r'
            }
            v50 = _XMM1 | _XMM0;
            __asm { vdpps   xmm1, xmm12, xmm3, 74h ; 't' }
            _XMM0 = _mm128_mul_ps((__m128)(v50 | _XMM1), v37);
            __asm { vblendps xmm3, xmm0, xmmword ptr [r8+10h], 8 }
            v97 = -1;
            m_size = 0;
            _XMM2 = 0i64;
            __asm
            {
              vcmpeqps xmm0, xmm2, xmm3
              vandnps xmm1, xmm0, xmm3
            }
            v115 = _XMM1;
            __asm
            {
              vcmpeqps xmm0, xmm2, xmm1
              vrcpps  xmm3, xmm1
            }
            _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM1)), _XMM3);
            __asm { vblendvps xmm1, xmm3, xmm4, xmm0 }
            m_invDirection = _XMM1;
            __asm
            {
              vdpps   xmm0, xmm9, xmm5, 71h ; 'q'
              vdpps   xmm2, xmm11, xmm5, 72h ; 'r'
              vdpps   xmm1, xmm12, xmm5, 74h ; 't'
            }
            *(__m256i *)v118 = *(__m256i *)g_vectorfConstants[32].m128_f32;
            v114 = _mm128_mul_ps((__m128)(_XMM2 | _XMM0 | _XMM1), v37);
            *(__m256i *)&v118[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
            v95[0] = (__int64)v41->m_body;
            v95[1] = (__int64)v41->m_rootShape;
            m_parentShape = (const StaticModels_HavokShape *)v41->m_parentShape;
            v97 = v41->m_shapeKeyPath.m_key.m_value;
            m_size = v41->m_shapeKeyPath.m_size;
            v99 = v41->m_shapeToWorld;
            v100 = 0i64;
            m_isScaled = v41->m_scalingInternals.m_isScaled;
            m_mode = v41->m_scalingInternals.m_mode;
            v104.m_quad = (__m128)v41->m_scalingInternals.m_scale;
            v105.m_quad = (__m128)v41->m_scalingInternals.m_offset;
            m_convexRadius = v41->m_scalingInternals.m_convexRadius;
            v99 = (const hkTransformf *)v118;
            m_parentShape = m_query->m_targetShape;
            v64 = m_query->m_simdTreeMask;
            v97 = v21;
            m_size = v20;
            if ( v64 )
              v65 = (__int64)v64->m_instanceMasks.m_data[v10];
            else
              v65 = 0i64;
            v100 = v65;
            m_query->m_scaleAndTransformCollector.m_transform = (const hkTransformf *)v110;
            _XMM0.m_real = (__m128)m_query->m_scaleAndTransformCollector.m_earlyOutThreshold;
            m_query->m_scaleAndTransformCollector.m_scale.m_quad = _XMM14;
            m_query->m_scaleAndTransformCollector.m_invScale.m_quad = v37;
            m_query->m_scaleAndTransformCollector.m_childCollector = m_collector;
            m_query->m_scaleAndTransformCollector.m_hints.m_storage = m_collector->m_hints.m_storage;
            __asm { vminps  xmm1, xmm0, xmmword ptr [r8+10h] }
            m_query->m_scaleAndTransformCollector.m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
            v68 = m_query->m_scaleAndTransformCollector.m_earlyOut.m_bool || m_collector->m_earlyOut.m_bool;
            m_query->m_scaleAndTransformCollector.m_earlyOut.m_bool = v68;
            m_query->m_scaleAndTransformCollector.m_numHits = m_collector->m_numHits;
            (*(void (__fastcall **)(const void *, hknpCollisionQueryContext *, __m256i *, __m128 *, __int64 *, StaticModels_HavokShapeEx::ScaleAndTransformCollector *))(*(_QWORD *)CollisionTileModelShape + 184i64))(CollisionTileModelShape, m_query->m_queryContext, &v112, &v77, v95, &m_query->m_scaleAndTransformCollector);
            v9 = FLOAT_0_03125;
          }
          v7 = v76;
          v8 = v75;
        }
        m_query->m_hasHit |= v15.m_real.m128_f32[0] > m_query->m_collector->m_earlyOutThreshold.m_real.m128_f32[0];
      }
      v6 = v79;
      v75 = ++v8;
    }
    while ( v8 < v7 );
  }
  if ( m_query->m_earlyExit && m_query->m_hasHit )
    return FLOAT_N1_0;
  v69.m_real = (__m128)m_query->m_collector->m_earlyOutThreshold;
  return v69.m_real.m128_f32[0];
}

/*
==============
hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process
==============
*/
float hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process(hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0> *this, const unsigned int *leaves, int numLeaves, const hkcdRay *ray)
{
  __m128 v4; 
  StaticModels_HavokShapeEx::RayCast<0> *m_query; 
  const unsigned int *v6; 
  hknpCollisionQueryCollector *m_collector; 
  __int64 v8; 
  float v9; 
  const StaticModels_HavokShape *m_targetShape; 
  unsigned int v11; 
  hkSimdFloat32 v12; 
  __int64 v13; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  int v19; 
  const void *CollisionTileModelShape; 
  bool v21; 
  __int64 m_shapeTagCodec; 
  const StaticModels_HavokShape *v23; 
  void (__fastcall *v24)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __m128 *); 
  const hknpShapeQueryInfo *v25; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpRayCastQuery *v29; 
  const hknpCollisionFilter *m_filter; 
  __int64 *v31; 
  __m128 v34; 
  const hknpShapeQueryInfo *v38; 
  const hkTransformf *m_shapeToWorld; 
  __m128 m_quad; 
  const hknpRayCastQuery *v43; 
  hknpCollisionQueryCollector *v44; 
  __int128 v47; 
  bool v63; 
  bool m_hasHit; 
  hkSimdFloat32 v65; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v68; 
  int v69; 
  __int64 v70; 
  StaticModels_HavokShapeInstance *v71; 
  __int64 v72; 
  __m128 v74; 
  __int64 v75; 
  __int64 v76; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  __m128 v80; 
  __int64 v81; 
  int v82; 
  __int64 v83; 
  __int16 v84; 
  int v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  const StaticModels_HavokShape *v89; 
  int v90; 
  __int64 v91; 
  __int64 v92[2]; 
  const StaticModels_HavokShape *m_parentShape; 
  int v94; 
  int m_size; 
  const hkTransformf *v96; 
  __int64 v97; 
  bool m_isScaled; 
  unsigned int m_mode; 
  float m_convexRadius; 
  hkVector4f v101; 
  hkVector4f v102; 
  vec3_t origin; 
  char v104[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v107[3]; 
  __m128 v108; 
  __m256i v109; 
  __int64 v110; 
  __m128 v111; 
  __m128 v112; 
  __int128 m_invDirection; 
  unsigned int m_storage; 
  _BYTE v115[64]; 
  __m128 v116; 

  m_query = this->m_query;
  v6 = leaves;
  v76 = numLeaves;
  if ( numLeaves <= 0 )
  {
    m_hasHit = m_query->m_hasHit;
  }
  else
  {
    m_collector = m_query->m_collector;
    v8 = 0i64;
    v9 = FLOAT_0_03125;
    v116 = v4;
    v72 = 0i64;
    do
    {
      m_targetShape = m_query->m_targetShape;
      v11 = v6[v8];
      v12.m_real = (__m128)m_collector->m_earlyOutThreshold;
      v13 = (unsigned __int16)v11;
      m_data = m_query->m_targetShape->m_instances.m_data;
      v70 = (unsigned __int16)v11;
      v71 = m_data;
      m_modelIdxAndFlags = m_data[(unsigned __int16)v11].m_modelIdxAndFlags;
      if ( m_modelIdxAndFlags < 0 )
      {
        _XMM0 = *(__m128 *)m_query->m_targetShapeFilterData;
        m_targetShapeInfo = m_query->m_targetShapeInfo;
        v74 = _XMM0;
        m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
        m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
        v19 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | (((v11 + 1) << (32 - (LOBYTE(m_shapeKeyPath.m_size) + m_numShapeKeyBits))) - 1);
        v69 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
        CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
        v68 = (__int64)CollisionTileModelShape;
        v21 = 1;
        m_shapeTagCodec = (__int64)m_query->m_query->m_shapeTagCodec;
        v75 = m_shapeTagCodec;
        if ( m_shapeTagCodec )
        {
          v23 = m_query->m_targetShape;
          v24 = *(void (__fastcall **)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __m128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
          v25 = m_query->m_targetShapeInfo;
          m_rootShape = v25->m_rootShape;
          m_body = v25->m_body;
          CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v71[v70].m_modelIdxAndFlags & 0x4000) != 0, m_query->m_targetShape->m_tileIdx, v71[v70].m_modelIdxAndFlags & 0x3FFF);
          v24(v75, CollisionTileModelShapeTag, 1i64, m_body, m_rootShape, v23, v19, v68, &v74);
          v29 = m_query->m_query;
          m_filter = v29->m_filter;
          if ( m_filter )
          {
            v31 = (__int64 *)m_query->m_targetShapeInfo;
            CollisionTileModelShape = (const void *)v68;
            m_collisionFilterInfo = 0;
            m_value = -1;
            m_userData = 0i64;
            m_value = v29->m_filterData.m_materialId.m_value;
            m_collisionFilterInfo = v29->m_filterData.m_collisionFilterInfo;
            m_userData = v29->m_filterData.m_userData;
            v84 = v74.m128_i16[0];
            v85 = v74.m128_i32[1];
            v86 = v74.m128_i64[1];
            v81 = 0i64;
            v82 = -1;
            v83 = 0i64;
            __asm { vpxor   xmm0, xmm0, xmm0 }
            v80 = _XMM0;
            v87 = *v31;
            v88 = v31[1];
            v89 = m_query->m_targetShape;
            v90 = v19;
            v91 = v68;
            v21 = m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, 1, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v84);
          }
          else
          {
            CollisionTileModelShape = (const void *)v68;
          }
          m_data = v71;
          v13 = v70;
          v8 = v72;
        }
        if ( v21 )
        {
          *(double *)_XMM0.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_query->m_targetShape->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx);
          _XMM14 = _mm_shuffle_ps(_XMM0, _XMM0, 0);
          __asm { vrcpps  xmm3, xmm14 }
          v34 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM14, _XMM3)), _XMM3);
          StaticModels_GetCollisionTileModelInstanceTransform(m_query->m_targetShape->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx, &origin, &orientationAsQuat);
          *(__m256i *)v104 = *(__m256i *)g_vectorfConstants[32].m128_f32;
          *(__m256i *)&v104[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
          qi.m_vec.m_quad = (__m128)orientationAsQuat;
          hkRotationImpl<float>::set((hkRotationImpl<float> *)v104, &qi);
          _XMM12 = *(__m128 *)&v104[32];
          _XMM11 = *(__m128 *)&v104[16];
          _XMM9 = *(__m128 *)v104;
          v38 = m_query->m_targetShapeInfo;
          *(float *)&v104[52] = v9 * origin.v[1];
          *(float *)&v104[48] = v9 * origin.v[0];
          *(float *)&v104[56] = v9 * origin.v[2];
          *(float *)&v104[60] = 0.0;
          m_shapeToWorld = v38->m_shapeToWorld;
          _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
          m_quad = m_shapeToWorld->m_rotation.m_col2.m_quad;
          __asm { vextractf128 xmm6, ymm7, 1 }
          v107[2] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 170), m_quad));
          v107[1] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), m_quad));
          v108 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v104[48], *(__m128 *)&v104[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v104[48], *(__m128 *)&v104[48], 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v104[48], *(__m128 *)&v104[48], 170), m_quad));
          v43 = m_query->m_query;
          v44 = m_query->m_collector;
          v107[0] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 170), m_quad));
          v108 = _mm128_add_ps(v108, m_shapeToWorld->m_translation.m_quad);
          v109 = *(__m256i *)&v43->m_shapeTagCodec;
          v110 = *(_QWORD *)v43->m_levelOfDetail;
          v111 = v43->m_ray.m_origin.m_quad;
          v112 = v43->m_ray.m_direction.m_quad;
          m_invDirection = (__int128)v43->m_ray.m_invDirection;
          m_storage = v43->m_flags.m_storage;
          _mm128_sub_ps(v43->m_ray.m_origin.m_quad, *(__m128 *)&v104[48]);
          __asm
          {
            vdpps   xmm0, xmm9, xmm3, 71h ; 'q'
            vdpps   xmm1, xmm11, xmm3, 72h ; 'r'
          }
          v47 = _XMM1 | _XMM0;
          __asm { vdpps   xmm1, xmm12, xmm3, 74h ; 't' }
          _XMM0 = _mm128_mul_ps((__m128)(v47 | _XMM1), v34);
          __asm { vblendps xmm3, xmm0, xmmword ptr [r8+10h], 8 }
          v94 = -1;
          m_size = 0;
          _XMM2 = 0i64;
          __asm
          {
            vcmpeqps xmm0, xmm2, xmm3
            vandnps xmm1, xmm0, xmm3
          }
          v112 = _XMM1;
          __asm
          {
            vcmpeqps xmm0, xmm2, xmm1
            vrcpps  xmm3, xmm1
          }
          _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM1)), _XMM3);
          __asm { vblendvps xmm1, xmm3, xmm4, xmm0 }
          m_invDirection = _XMM1;
          __asm
          {
            vdpps   xmm0, xmm9, xmm5, 71h ; 'q'
            vdpps   xmm2, xmm11, xmm5, 72h ; 'r'
            vdpps   xmm1, xmm12, xmm5, 74h ; 't'
          }
          *(__m256i *)v115 = *(__m256i *)g_vectorfConstants[32].m128_f32;
          v111 = _mm128_mul_ps((__m128)(_XMM2 | _XMM0 | _XMM1), v34);
          *(__m256i *)&v115[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
          v92[0] = (__int64)v38->m_body;
          v92[1] = (__int64)v38->m_rootShape;
          m_parentShape = (const StaticModels_HavokShape *)v38->m_parentShape;
          v94 = v38->m_shapeKeyPath.m_key.m_value;
          m_size = v38->m_shapeKeyPath.m_size;
          v96 = v38->m_shapeToWorld;
          v97 = 0i64;
          m_isScaled = v38->m_scalingInternals.m_isScaled;
          m_mode = v38->m_scalingInternals.m_mode;
          v101.m_quad = (__m128)v38->m_scalingInternals.m_scale;
          v102.m_quad = (__m128)v38->m_scalingInternals.m_offset;
          m_convexRadius = v38->m_scalingInternals.m_convexRadius;
          v96 = (const hkTransformf *)v115;
          _XMM0.m_real = (__m128)m_query->m_scaleAndTransformCollector.m_earlyOutThreshold;
          m_parentShape = m_query->m_targetShape;
          m_size = v69;
          m_query->m_scaleAndTransformCollector.m_transform = (const hkTransformf *)v107;
          v94 = v19;
          m_query->m_scaleAndTransformCollector.m_scale.m_quad = _XMM14;
          m_query->m_scaleAndTransformCollector.m_invScale.m_quad = v34;
          m_query->m_scaleAndTransformCollector.m_childCollector = v44;
          m_query->m_scaleAndTransformCollector.m_hints.m_storage = v44->m_hints.m_storage;
          __asm { vminps  xmm1, xmm0, xmmword ptr [r8+10h] }
          m_query->m_scaleAndTransformCollector.m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
          v63 = m_query->m_scaleAndTransformCollector.m_earlyOut.m_bool || v44->m_earlyOut.m_bool;
          m_query->m_scaleAndTransformCollector.m_earlyOut.m_bool = v63;
          m_query->m_scaleAndTransformCollector.m_numHits = v44->m_numHits;
          (*(void (__fastcall **)(const void *, hknpCollisionQueryContext *, __m256i *, __m128 *, __int64 *, StaticModels_HavokShapeEx::ScaleAndTransformCollector *))(*(_QWORD *)CollisionTileModelShape + 184i64))(CollisionTileModelShape, m_query->m_queryContext, &v109, &v74, v92, &m_query->m_scaleAndTransformCollector);
          v9 = FLOAT_0_03125;
        }
        v6 = leaves;
      }
      m_collector = m_query->m_collector;
      ++v8;
      m_hasHit = m_query->m_hasHit || v12.m_real.m128_f32[0] > m_collector->m_earlyOutThreshold.m_real.m128_f32[0];
      m_query->m_hasHit = m_hasHit;
      v72 = v8;
    }
    while ( v8 < v76 );
  }
  if ( m_hasHit && m_query->m_earlyExit )
    return FLOAT_N1_0;
  v65.m_real = (__m128)m_query->m_collector->m_earlyOutThreshold;
  return v65.m_real.m128_f32[0];
}

