/*
==============
StaticModels_HavokShapeEx::ScaleAndTransformCollector::reset
==============
*/

void __fastcall StaticModels_HavokShapeEx::ScaleAndTransformCollector::reset(StaticModels_HavokShapeEx::ScaleAndTransformCollector *this)
{
  ?reset@ScaleAndTransformCollector@StaticModels_HavokShapeEx@@UEAAXXZ(this);
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance
==============
*/

void __fastcall StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  ?processInstance@?$ClosestPointsToConvexQuery@$0A@@StaticModels_HavokShapeEx@@QEAAXHAEAVhkSimdFloat32@@@Z(this, instanceIndex, maxDistanceSquared);
}

/*
==============
StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale
==============
*/

void __fastcall StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(const hknpShapeQueryInfo *queryShapeInfo, const hknpShapeQueryInfo *targetShapeInfo, hkTransformf *transformOut, hkVector4f *targetScaleInvOut)
{
  ?calcQueryToTargetTransformWithScale@StaticModels_HavokShapeEx@@SAXAEBUhknpShapeQueryInfo@@0AEAVhkTransformf@@AEAVhkVector4f@@@Z(queryShapeInfo, targetShapeInfo, transformOut, targetScaleInvOut);
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance
==============
*/

void __fastcall StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  ?processInstance@?$ClosestPointsToConvexQuery@$00@StaticModels_HavokShapeEx@@QEAAXHAEAVhkSimdFloat32@@@Z(this, instanceIndex, maxDistanceSquared);
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<0>::processInstance
==============
*/

void __fastcall StaticModels_HavokShapeEx::ShapeCast<0>::processInstance(StaticModels_HavokShapeEx::ShapeCast<0> *this, int instanceIndex)
{
  ?processInstance@?$ShapeCast@$0A@@StaticModels_HavokShapeEx@@QEAAXH@Z(this, instanceIndex);
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<1>::processInstance
==============
*/

void __fastcall StaticModels_HavokShapeEx::ShapeCast<1>::processInstance(StaticModels_HavokShapeEx::ShapeCast<1> *this, int instanceIndex)
{
  ?processInstance@?$ShapeCast@$00@StaticModels_HavokShapeEx@@QEAAXH@Z(this, instanceIndex);
}

/*
==============
StaticModels_HavokShapeEx::ScaleAndTransformCollector::addHit
==============
*/

void __fastcall StaticModels_HavokShapeEx::ScaleAndTransformCollector::addHit(StaticModels_HavokShapeEx::ScaleAndTransformCollector *this, const hknpCollisionResult *flippedHit)
{
  ?addHit@ScaleAndTransformCollector@StaticModels_HavokShapeEx@@UEAAXAEBUhknpCollisionResult@@@Z(this, flippedHit);
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves
==============
*/

void __fastcall StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  ?addLeaves@?$AabbOverlaps@$00VhknpCollisionQueryCollector@@@StaticModels_HavokShapeEx@@UEAAXPEBIHPEAVhkAabb@@@Z(this, leaves, numLeaves, nmp);
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves
==============
*/

void __fastcall StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  ?addLeaves@?$AabbOverlaps@$0A@VhknpCollisionQueryCollector@@@StaticModels_HavokShapeEx@@UEAAXPEBIHPEAVhkAabb@@@Z(this, leaves, numLeaves, nmp);
}

/*
==============
StaticModels_HavokShapeEx::ScaleAndTransformCollector::addHit
==============
*/

void __fastcall StaticModels_HavokShapeEx::ScaleAndTransformCollector::addHit(StaticModels_HavokShapeEx::ScaleAndTransformCollector *this, const hknpCollisionResult *flippedHit, double a3)
{
  const hkTransformf *m_transform; 
  __m256i v5; 
  __m128 v6; 
  __m256i v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  hknpCollisionQueryCollector *m_childCollector; 
  __m128 v12; 
  bool v16; 
  hknpCollisionQueryCollector *v18; 
  bool v20; 
  _BYTE v21[96]; 
  __int128 v22; 

  m_transform = this->m_transform;
  v5 = *(__m256i *)flippedHit->m_position.m_quad.m128_f32;
  v6 = _mm128_mul_ps(*(__m128 *)&a3, this->m_scale.m_quad);
  v7 = *(__m256i *)&flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  *(__m256i *)&v21[32] = *(__m256i *)&flippedHit->m_fraction;
  v22 = *(_OWORD *)&flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  *(__m256i *)v21 = v5;
  *(__m256i *)&v21[64] = v7;
  *(__m128 *)v21 = v6;
  v8 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v6, v6, 85), m_transform->m_rotation.m_col1.m_quad), _mm128_mul_ps(_mm_shuffle_ps(v6, v6, 0), m_transform->m_rotation.m_col0.m_quad));
  v9 = _mm128_mul_ps(_mm_shuffle_ps(v6, v6, 170), m_transform->m_rotation.m_col2.m_quad);
  v10 = _mm128_mul_ps(*(__m128 *)&v5.m256i_u64[2], this->m_invScale.m_quad);
  m_childCollector = this->m_childCollector;
  v12 = _mm128_add_ps(_mm128_add_ps(v8, v9), m_transform->m_translation.m_quad);
  *(__m128 *)&v21[16] = v10;
  *(__m128 *)v21 = v12;
  _XMM5 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v10, v10, 85), m_transform->m_rotation.m_col1.m_quad), _mm128_mul_ps(_mm_shuffle_ps(v10, v10, 0), m_transform->m_rotation.m_col0.m_quad)), _mm128_mul_ps(_mm_shuffle_ps(v10, v10, 170), m_transform->m_rotation.m_col2.m_quad));
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 7Fh
    vrsqrtps xmm4, xmm0
  }
  *(__m128 *)&v21[16] = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)v21);
  v16 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  v18 = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  v20 = !v16 || v18->m_earlyOut.m_bool;
  this->m_earlyOut.m_bool = v20;
  this->m_numHits = v18->m_numHits;
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves
==============
*/
void StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *v4; 
  __int128 v5; 
  float v6; 
  __int64 v7; 
  signed int v8; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v11; 
  __int64 m_data; 
  __int16 v13; 
  const void *CollisionTileModelShape; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v15; 
  __int64 m_collector; 
  __int64 v17; 
  StaticModels_HavokShapeAabbOverlapsProcessInstanceData *p_m_data; 
  const hknpQueryFilterData *m_targetShapeFilterData; 
  int v20; 
  __int128 v21; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int v23; 
  int v24; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const void *v27; 
  const hknpShapeQueryInfo *v28; 
  const void *v29; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpAabbQuery *m_query; 
  unsigned __int64 m_userData; 
  __m128 *v35; 
  const hknpShapeQueryInfo *v36; 
  unsigned int v37; 
  __int16 v38; 
  _BOOL8 v39; 
  __int64 *v40; 
  const hknpAabbQuery *v41; 
  const hknpBody *v42; 
  const hknpShapeQueryInfo *v43; 
  const hknpBody *v44; 
  int m_serialAndIndex; 
  int v46; 
  const hknpAabbQuery *v47; 
  unsigned int v48; 
  int v49; 
  unsigned int v50; 
  __m128 m_quad; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  __int128 v58; 
  __m128 v61; 
  hkVector4f v65; 
  __m128 v67; 
  hkVector4f v69; 
  hkVector4f v70; 
  __m128 v79; 
  __m128 v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v87; 
  __m128 v92; 
  __m128 v95; 
  __m128 v98; 
  __int128 v106; 
  const hknpShapeQueryInfo *v108; 
  __int64 v109; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  float m_convexRadius; 
  __m128 *v112; 
  hkAabb *v113; 
  __m128 v115; 
  hknpCollisionQueryContext *m_queryContext; 
  double CollisionTileModelInstanceScale; 
  bool v118; 
  __m128 v119; 
  unsigned int v120; 
  int v121; 
  unsigned int v122; 
  __m128 v124; 
  __m128 v149; 
  __int64 v154; 
  const void *v155; 
  int v156; 
  __int128 v157; 
  __int64 v158; 
  __int64 v159; 
  __int64 v160; 
  hknpShapeKeyMask *v161; 
  __int64 v162; 
  __int128 v163; 
  hkAabb *v164; 
  __int64 v165; 
  StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *v166; 
  const unsigned int *v167; 
  char v168[64]; 
  hkSimdFloat32 extraRadius; 
  vec3_t origin; 
  vec3_t v171; 
  vec3_t v172; 
  __m256i v173; 
  const hkTransformf *m_shapeToWorld; 
  _BYTE v175[12]; 
  unsigned int m_mode; 
  float v177; 
  unsigned int m_collisionFilterInfo; 
  hkVector4f v179; 
  hkVector4f v180; 
  __int64 v181; 
  __int64 v182; 
  __m128 v183; 
  __m128 v184; 
  __int64 v185; 
  int v186; 
  __int64 v187; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v190; 
  hkQuaternionf v191; 
  vec4_t v192; 
  hkQuaternionf v193; 
  __m256i v194; 
  hkAabb aabbOut; 
  __m128 v196; 
  hkTransformf BvToWorld; 

  if ( numLeaves > 0 )
  {
    v4 = this;
    v5 = LODWORD(FLOAT_0_03125);
    v6 = FLOAT_1_0;
    v165 = numLeaves;
    v7 = 0i64;
    v164 = nmp;
    v167 = leaves;
    v166 = this;
    v162 = 0i64;
    do
    {
      v8 = leaves[v7];
      m_simdTreeMask = v4->m_simdTreeMask;
      if ( !m_simdTreeMask || ((m_simdTreeMask->m_enableInstances.m_storage.m_words.m_data[(__int64)v8 >> 5] >> (v8 & 0x1F)) & 1) != 0 )
      {
        m_targetShape = v4->m_targetShape;
        v11 = (unsigned __int16)v8;
        m_data = (__int64)m_targetShape->m_instances.m_data;
        v158 = m_data;
        v13 = *(_WORD *)(m_data + 4i64 * (unsigned __int16)v8);
        if ( v13 < 0 )
        {
          CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v13 & 0x4000) != 0, m_targetShape->m_tileIdx, *(_WORD *)(m_data + 4i64 * (unsigned __int16)v8) & 0x3FFF);
          v15 = v4->m_simdTreeMask;
          m_collector = (__int64)v4->m_collector;
          extraRadius.m_real.m128_u64[0] = (unsigned __int64)CollisionTileModelShape;
          v160 = m_collector;
          if ( v15 )
            v161 = v15->m_instanceMasks.m_data[v8];
          else
            v161 = NULL;
          v17 = (__int64)v4->m_targetShape;
          p_m_data = &v4->m_data;
          m_targetShapeFilterData = v4->m_data.m_targetShapeFilterData;
          v159 = v17;
          v20 = *(unsigned __int8 *)(v17 + 27);
          v21 = (__int128)*m_targetShapeFilterData;
          m_targetShapeInfo = v4->m_data.m_targetShapeInfo;
          v157 = v21;
          v23 = v20 + HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath);
          v156 = v23;
          v24 = *(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath & hknpShapeKeyPath_usedBitsMaskTable[HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath)] | (((v8 + 1) << (32 - (v20 + HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath)))) - 1);
          m_shapeTagCodec = p_m_data->m_query->m_shapeTagCodec;
          *(_QWORD *)&v163 = m_shapeTagCodec;
          if ( !m_shapeTagCodec )
            goto LABEL_15;
          decode = m_shapeTagCodec->decode;
          v27 = StaticModels_GetCollisionTileModelShape((*(_WORD *)(m_data + 4i64 * (unsigned __int16)v8) & 0x4000) != 0, *(_DWORD *)(v17 + 72), *(_WORD *)(m_data + 4i64 * (unsigned __int16)v8) & 0x3FFF);
          v28 = p_m_data->m_targetShapeInfo;
          v29 = v27;
          m_rootShape = v28->m_rootShape;
          m_body = v28->m_body;
          CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(v158 + 4 * v11) & 0x4000) != 0, *(_DWORD *)(v159 + 72), *(_WORD *)(v158 + 4 * v11) & 0x3FFF);
          v155 = v29;
          v17 = v159;
          LODWORD(v154) = v24;
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *))decode)(v163, CollisionTileModelShapeTag, 5i64, m_body, m_rootShape, v159, v154, v155, &v157);
          m_query = p_m_data->m_query;
          if ( !m_query->m_filter )
          {
            m_data = v158;
LABEL_14:
            v23 = v156;
            m_collector = v160;
LABEL_15:
            v40 = (__int64 *)extraRadius.m_real.m128_u64[0];
            if ( *(_BYTE *)(extraRadius.m_real.m128_u64[0] + 28) == 3 )
            {
              v47 = p_m_data->m_query;
              v48 = *(unsigned __int16 *)(m_data + 4 * v11 + 2);
              v49 = *(_WORD *)(m_data + 4 * v11) & 0x3FFF;
              v50 = *(_DWORD *)(v17 + 72);
              v194 = *(__m256i *)&v47->m_shapeTagCodec;
              aabbOut = *(hkAabb *)v47->m_levelOfDetail;
              m_quad = v47->m_aabb.m_max.m_quad;
              v196 = m_quad;
              *(double *)m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v50, v49, v48);
              v52 = *(unsigned __int16 *)(m_data + 4 * v11 + 2);
              v53 = *(_WORD *)(m_data + 4 * v11) & 0x3FFF;
              if ( m_quad.m128_f32[0] == v6 )
              {
                StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v17 + 72), v53, v52, &v171, &v190);
                *(__m256i *)v168 = *(__m256i *)g_vectorfConstants[32].m128_f32;
                *(__m256i *)&v168[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
                v191.m_vec.m_quad = (__m128)v190;
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v168, &v191);
                _XMM13 = *(_OWORD *)&v168[32];
                _XMM5 = *(_OWORD *)hkMath::hkSse_signMask;
                _XMM15 = *(_OWORD *)&v168[16];
                v79 = (__m128)LODWORD(v171.v[0]);
                v79.m128_f32[0] = v171.v[0] * *(float *)&v5;
                v80 = p_m_data->m_transformedAabb.m_max.m_quad;
                v81 = _mm128_sub_ps(v80, p_m_data->m_transformedAabb.m_min.m_quad);
                extraRadius.m_real = v79;
                v82 = _mm128_mul_ps(v81, g_vectorfConstants[21]);
                _XMM0 = *(_OWORD *)v168;
                __asm
                {
                  vunpcklps xmm3, xmm0, xmm15
                  vunpckhps xmm0, xmm0, xmm15
                  vblendps xmm7, xmm0, xmm13, 0Ch
                }
                v87 = _mm_shuffle_ps(v82, v82, 170);
                __asm
                {
                  vmovlhps xmm8, xmm3, xmm13
                  vmovhlps xmm0, xmm8, xmm3
                }
                _mm128_mul_ps(_mm_shuffle_ps(_XMM0, *(__m128 *)&v168[32], 212), _mm_shuffle_ps(v82, v82, 85));
                __asm { vandnps xmm3, xmm5, xmm2 }
                _mm128_mul_ps(_mm_shuffle_ps(v82, v82, 0), _XMM8);
                __asm { vandnps xmm1, xmm5, xmm0 }
                v92 = _mm128_add_ps(_XMM3, _XMM1);
                __asm { vpxor   xmm1, xmm1, xmm1 }
                _mm128_mul_ps(v87, _XMM7);
                __asm { vandnps xmm0, xmm5, xmm2 }
                v95 = _mm128_add_ps(v92, _XMM0);
                __asm { vpinsrw xmm0, xmm1, eax, 1 }
                v163 = _XMM0;
                __asm { vpshufd xmm5, xmm0, 0 }
                v98 = _mm128_mul_ps(_mm128_add_ps(v80, p_m_data->m_transformedAabb.m_min.m_quad), g_vectorfConstants[21]);
                _XMM0 = v79;
                v5 = LODWORD(FLOAT_0_03125);
                __asm { vinsertps xmm0, xmm0, xmm12, 10h }
                _XMM12 = v163;
                __asm
                {
                  vinsertps xmm0, xmm0, xmm14, 20h ; ' '
                  vinsertps xmm0, xmm0, xmm7, 30h ; '0'
                }
                _mm128_sub_ps(v98, _XMM0);
                *(__m128 *)&v168[48] = _XMM0;
                _XMM0 = *(_OWORD *)v168;
                __asm
                {
                  vdpps   xmm0, xmm0, xmm3, 71h ; 'q'
                  vdpps   xmm1, xmm15, xmm3, 72h ; 'r'
                }
                v106 = _XMM1 | _XMM0;
                __asm { vdpps   xmm1, xmm13, xmm3, 74h ; 't' }
                v6 = FLOAT_1_0;
                aabbOut.m_max.m_quad = _mm128_add_ps((__m128)(*(_OWORD *)&v95 ^ _XMM5), (__m128)(v106 | _XMM1));
                v196 = _mm128_add_ps((__m128)(v106 | _XMM1), v95);
              }
              else
              {
                v54 = *(_DWORD *)(v17 + 72);
                *(double *)m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v54, v53, v52);
                _XMM6 = _mm_shuffle_ps(m_quad, m_quad, 0);
                StaticModels_GetCollisionTileModelInstanceTransform(v54, *(_WORD *)(m_data + 4 * v11) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v11 + 2), &origin, &orientationAsQuat);
                qi.m_vec.m_quad = (__m128)orientationAsQuat;
                *(__m256i *)&v168[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
                *(__m256i *)v168 = *(__m256i *)g_vectorfConstants[32].m128_f32;
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v168, &qi);
                _XMM3 = *(_OWORD *)v168;
                v58 = LODWORD(origin.v[0]);
                *(float *)&v58 = origin.v[0] * *(float *)&v5;
                _XMM10 = v58;
                __asm
                {
                  vrcpps  xmm2, xmm6
                  vunpcklps xmm5, xmm3, xmm0
                }
                v61 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM6)), _XMM2);
                __asm
                {
                  vunpckhps xmm0, xmm3, xmm0
                  vblendps xmm2, xmm0, xmm4, 0Ch
                  vmovlhps xmm1, xmm5, xmm4
                }
                v65.m_quad = _mm128_mul_ps(v61, _XMM1);
                __asm { vmovhlps xmm0, xmm1, xmm5 }
                v67 = _mm_shuffle_ps(_XMM0, *(__m128 *)&v168[32], 212);
                __asm { vpxor   xmm0, xmm0, xmm0 }
                v69.m_quad = _mm128_mul_ps(v67, v61);
                v70.m_quad = _mm128_mul_ps(_XMM2, v61);
                BvToWorld.m_rotation.m_col1 = (hkVector4f)v69.m_quad;
                __asm
                {
                  vinsertps xmm10, xmm10, xmm8, 10h
                  vpinsrw xmm12, xmm0, eax, 1
                  vpshufd xmm5, xmm12, 40h ; '@'
                  vinsertps xmm10, xmm10, xmm9, 20h ; ' '
                  vinsertps xmm10, xmm10, xmm0, 30h ; '0'
                }
                BvToWorld.m_translation = (hkVector4f)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 85), v69.m_quad), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 0), v65.m_quad)), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 170), v70.m_quad)) ^ _XMM5);
                BvToWorld.m_rotation.m_col0 = (hkVector4f)v65.m_quad;
                BvToWorld.m_rotation.m_col2 = (hkVector4f)v70.m_quad;
                *(__m128 *)&v168[48] = _XMM10;
                extraRadius.m_real = g_vectorfConstants[5];
                hkAabbUtil::calcAabb(&BvToWorld, &p_m_data->m_transformedAabb, &extraRadius, (hkAabb *)&aabbOut.m_max);
                v17 = v159;
              }
              v108 = p_m_data->m_targetShapeInfo;
              v109 = *v40;
              m_queryShapeInfo = p_m_data->m_queryShapeInfo;
              v173.m256i_i64[3] = 0xFFFFFFFFi64;
              v173 = *(__m256i *)&v108->m_body;
              m_shapeToWorld = v108->m_shapeToWorld;
              *(_QWORD *)v175 = 0i64;
              v175[8] = v108->m_scalingInternals.m_isScaled;
              m_mode = v108->m_scalingInternals.m_mode;
              v179.m_quad = (__m128)v108->m_scalingInternals.m_scale;
              v180.m_quad = (__m128)v108->m_scalingInternals.m_offset;
              m_convexRadius = v108->m_scalingInternals.m_convexRadius;
              *(_QWORD *)v175 = v161;
              v177 = m_convexRadius;
              v173.m256i_i32[7] = v23;
              v112 = &v183;
              v113 = v164;
              __asm { vpshufd xmm0, xmm12, 0 }
              v115 = (__m128)(*(_OWORD *)&g_vectorfConstants[37] ^ _XMM0);
              v173.m256i_i64[2] = (__int64)v40;
              v173.m256i_i32[6] = v24;
              if ( !v164 )
                v112 = NULL;
              m_queryContext = p_m_data->m_queryContext;
              v184 = g_vectorfConstants[37];
              v183 = v115;
              (*(void (__fastcall **)(__int64 *, hknpCollisionQueryContext *, __m256i *, const hknpShapeQueryInfo *, __int128 *, __m256i *, __int64, __m128 *))(v109 + 200))(v40, m_queryContext, &v194, m_queryShapeInfo, &v157, &v173, v160, v112);
              if ( v113 )
              {
                CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(*(_DWORD *)(v17 + 72), *(_WORD *)(m_data + 4 * v11) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v11 + 2));
                v118 = *(float *)&CollisionTileModelInstanceScale != v6;
                StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v17 + 72), *(_WORD *)(m_data + 4 * v11) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v11 + 2), &v172, &v192);
                *(__m256i *)v168 = *(__m256i *)g_vectorfConstants[32].m128_f32;
                *(__m256i *)&v168[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
                v193.m_vec.m_quad = (__m128)v192;
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v168, &v193);
                v119.m128_u64[1] = *((_QWORD *)&v5 + 1);
                v120 = *(unsigned __int16 *)(m_data + 4 * v11 + 2);
                v121 = *(_WORD *)(m_data + 4 * v11) & 0x3FFF;
                v122 = *(_DWORD *)(v17 + 72);
                *(float *)&v168[48] = *(float *)&v5 * v172.v[0];
                *(float *)&v168[52] = *(float *)&v5 * v172.v[1];
                *(float *)&v168[56] = *(float *)&v5 * v172.v[2];
                *(float *)&v168[60] = 0.0;
                *(double *)v119.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v122, v121, v120);
                _XMM3 = _mm128_sub_ps(aabbOut.m_max.m_quad, v183);
                v124 = _mm128_sub_ps(v184, v196);
                _XMM8 = *(_OWORD *)hkMath::hkSse_signMask;
                _mm_shuffle_ps(v119, v119, 0);
                if ( v118 )
                {
                  __asm { vandnps xmm0, xmm8, xmm0 }
                  _XMM3 = _mm128_mul_ps(_XMM0, _XMM3);
                  _mm128_mul_ps(_XMM0, v124);
                }
                __asm
                {
                  vpminsd xmm3, xmm3, xmm1
                  vpshufd xmm1, xmm3, 55h ; 'U'
                  vpshufd xmm0, xmm3, 0
                  vpminsd xmm2, xmm0, xmm1
                  vpshufd xmm1, xmm3, 0AAh ; 'ª'
                }
                _XMM3 = *(_OWORD *)v168;
                __asm
                {
                  vpminsd xmm7, xmm1, xmm2
                  vunpcklps xmm1, xmm3, xmm0
                  vmovlhps xmm2, xmm1, xmm5
                  vunpckhps xmm6, xmm3, xmm0
                  vmovhlps xmm0, xmm2, xmm1
                }
                _mm_shuffle_ps(_XMM0, *(__m128 *)&v168[32], 212);
                __asm
                {
                  vandnps xmm3, xmm8, xmm1
                  vandnps xmm2, xmm8, xmm2
                  vblendps xmm0, xmm6, xmm5, 0Ch
                  vandnps xmm1, xmm8, xmm0
                }
                _XMM5 = _mm128_add_ps(_XMM1, _mm128_add_ps(_XMM3, _XMM2));
                __asm
                {
                  vpshufd xmm2, xmm5, 55h ; 'U'
                  vpshufd xmm0, xmm5, 0
                  vpmaxsd xmm3, xmm0, xmm2
                  vpshufd xmm1, xmm5, 0AAh ; 'ª'
                  vpmaxsd xmm4, xmm1, xmm3
                  vrcpps  xmm2, xmm4
                }
                v149 = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM4)), _XMM2), _XMM7);
                _XMM1 = _mm128_add_ps(v149, p_m_data->m_transformedAabb.m_max.m_quad);
                _XMM0 = _mm128_sub_ps(p_m_data->m_transformedAabb.m_min.m_quad, v149);
                __asm { vmaxps  xmm0, xmm0, xmmword ptr [r15] }
                v113->m_min = (hkVector4f)_XMM0.m_quad;
                __asm { vminps  xmm1, xmm1, xmmword ptr [r15+10h] }
                v113->m_max = (hkVector4f)_XMM1.m_quad;
              }
            }
            else
            {
              v41 = p_m_data->m_query;
              v42 = p_m_data->m_targetShapeInfo->m_body;
              v43 = p_m_data->m_queryShapeInfo;
              *(float *)&m_shapeToWorld = 0.0;
              v173 = (__m256i)0i64;
              *(_QWORD *)&v175[4] = -1i64;
              v44 = v43->m_body;
              v180.m_quad.m128_i32[0] = -1;
              v182 = 5i64;
              if ( v44 )
                m_serialAndIndex = v44->m_id.m_serialAndIndex;
              else
                m_serialAndIndex = 0xFFFFFF;
              *(_DWORD *)v175 = m_serialAndIndex;
              LOWORD(v177) = v41->m_filterData.m_materialId.m_value;
              m_collisionFilterInfo = v41->m_filterData.m_collisionFilterInfo;
              v179.m_quad.m128_u64[0] = v41->m_filterData.m_userData;
              if ( v42 )
                v46 = v42->m_id.m_serialAndIndex;
              else
                v46 = 0xFFFFFF;
              v179.m_quad.m128_u64[1] = __PAIR64__(v24, v46);
              v180.m_quad.m128_i16[4] = v157;
              v180.m_quad.m128_i32[3] = DWORD1(v157);
              v181 = *((_QWORD *)&v157 + 1);
              (*(void (__fastcall **)(__int64, __m256i *))(*(_QWORD *)m_collector + 32i64))(m_collector, &v173);
            }
            goto LABEL_32;
          }
          m_data = v158;
          v183.m128_i32[1] = 0;
          v183.m128_i16[0] = -1;
          v183.m128_u64[1] = 0i64;
          v183.m128_i16[0] = m_query->m_filterData.m_materialId.m_value;
          v183.m128_i32[1] = m_query->m_filterData.m_collisionFilterInfo;
          m_userData = m_query->m_filterData.m_userData;
          v35 = (__m128 *)p_m_data->m_queryShapeInfo;
          v183.m128_u64[1] = m_userData;
          v184 = *v35;
          v185 = v35[1].m128_i64[0];
          LODWORD(m_userData) = v35[1].m128_i32[2];
          v36 = p_m_data->m_targetShapeInfo;
          v186 = m_userData;
          *(_WORD *)v168 = v157;
          *(_DWORD *)&v168[4] = DWORD1(v157);
          *(_QWORD *)&v168[8] = *((_QWORD *)&v157 + 1);
          v187 = 0i64;
          v37 = *(_DWORD *)(v17 + 72);
          *(_OWORD *)&v168[16] = *(_OWORD *)&v36->m_body;
          v38 = *(_WORD *)(v158 + 4 * v11);
          *(_QWORD *)&v168[32] = v17;
          *(_DWORD *)&v168[40] = v24;
          *(_QWORD *)&v168[48] = StaticModels_GetCollisionTileModelShape((v38 & 0x4000) != 0, v37, v38 & 0x3FFF);
          LOBYTE(v39) = 1;
          if ( p_m_data->m_query->m_filter->isCollisionEnabled((hknpCollisionFilter *)p_m_data->m_query->m_filter, QUERY_AABB, v39, (const hknpCollisionFilter::FilterInput *)&v183, (const hknpCollisionFilter::FilterInput *)v168) )
            goto LABEL_14;
        }
      }
LABEL_32:
      v4 = v166;
      v7 = v162 + 1;
      leaves = v167;
      v162 = v7;
    }
    while ( v7 < v165 );
  }
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves
==============
*/
void StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector> *v4; 
  __int128 v5; 
  float v6; 
  __int64 v7; 
  unsigned int v8; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v10; 
  __int64 m_data; 
  __int16 v12; 
  const void *CollisionTileModelShape; 
  const hknpQueryFilterData *m_targetShapeFilterData; 
  __int64 v15; 
  __int64 v16; 
  hknpCollisionQueryCollector *m_collector; 
  __int128 v18; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int v20; 
  int v21; 
  unsigned __int64 m_shapeTagCodec; 
  void (__fastcall *v23)(unsigned __int64, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *); 
  const void *v24; 
  const hknpShapeQueryInfo *v25; 
  const void *v26; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpAabbQuery *m_query; 
  unsigned int v31; 
  unsigned __int64 m_userData; 
  __m128 *m_queryShapeInfo; 
  const hknpShapeQueryInfo *v34; 
  __int16 v35; 
  _BOOL8 v36; 
  const hknpAabbQuery *v37; 
  const hknpBody *v38; 
  const hknpShapeQueryInfo *v39; 
  const hknpBody *v40; 
  int m_serialAndIndex; 
  int v42; 
  const hknpAabbQuery *v43; 
  unsigned int v44; 
  int v45; 
  unsigned int v46; 
  __m128 m_quad; 
  unsigned int v48; 
  int v49; 
  unsigned int v50; 
  __int128 v54; 
  __m128 v57; 
  hkVector4f v61; 
  __m128 v63; 
  hkVector4f v65; 
  hkVector4f v66; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  __m128 v83; 
  __m128 v88; 
  __m128 v91; 
  __m128 v94; 
  __int128 v102; 
  const hknpShapeQueryInfo *v104; 
  __int64 v105; 
  const hknpShapeQueryInfo *v106; 
  float m_convexRadius; 
  __m128 v109; 
  __m128 *v110; 
  hknpCollisionQueryContext *m_queryContext; 
  hkAabb *v112; 
  double CollisionTileModelInstanceScale; 
  bool v114; 
  __m128 v115; 
  unsigned int v116; 
  int v117; 
  unsigned int v118; 
  __m128 v120; 
  __m128 v145; 
  __int64 v150; 
  const void *v151; 
  const unsigned int *v153; 
  __int128 v154; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v156; 
  __int64 v157; 
  __int64 v158; 
  hkAabb *v159; 
  __int64 v160; 
  __int128 v161; 
  __int64 v162; 
  char v163[64]; 
  hkSimdFloat32 extraRadius; 
  vec3_t origin; 
  vec3_t v166; 
  vec3_t v167; 
  __m256i v168; 
  const hkTransformf *m_shapeToWorld; 
  _BYTE v170[12]; 
  unsigned int m_mode; 
  float v172; 
  unsigned int m_collisionFilterInfo; 
  hkVector4f v174; 
  hkVector4f v175; 
  __int64 v176; 
  __int64 v177; 
  __m128 v178; 
  __m128 v179; 
  __int64 v180; 
  int v181; 
  __int64 v182; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v185; 
  hkQuaternionf v186; 
  vec4_t v187; 
  hkQuaternionf v188; 
  __m256i v189; 
  hkAabb aabbOut; 
  __m128 v191; 
  hkTransformf BvToWorld; 

  if ( numLeaves > 0 )
  {
    v4 = this;
    v5 = LODWORD(FLOAT_0_03125);
    v6 = FLOAT_1_0;
    v162 = numLeaves;
    v7 = 0i64;
    v159 = nmp;
    v153 = leaves;
    v160 = 0i64;
    while ( 1 )
    {
      v8 = leaves[v7];
      m_targetShape = v4->m_targetShape;
      v10 = (unsigned __int16)v8;
      m_data = (__int64)m_targetShape->m_instances.m_data;
      v156 = m_data;
      v12 = *(_WORD *)(m_data + 4i64 * (unsigned __int16)v8);
      if ( v12 < 0 )
        break;
LABEL_28:
      v7 = v160 + 1;
      v160 = v7;
      if ( v7 >= v162 )
        return;
    }
    CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v12 & 0x4000) != 0, m_targetShape->m_tileIdx, *(_WORD *)(m_data + 4i64 * (unsigned __int16)v8) & 0x3FFF);
    m_targetShapeFilterData = v4->m_data.m_targetShapeFilterData;
    v15 = (__int64)CollisionTileModelShape;
    v16 = (__int64)v4->m_targetShape;
    m_collector = v4->m_collector;
    v158 = (__int64)CollisionTileModelShape;
    v18 = (__int128)*m_targetShapeFilterData;
    m_targetShapeInfo = v4->m_data.m_targetShapeInfo;
    v20 = *(unsigned __int8 *)(v16 + 27);
    v154 = v18;
    *(_QWORD *)&v161 = m_collector;
    m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
    v157 = v16;
    v21 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | (((v8 + 1) << (32 - (v20 + LOBYTE(m_shapeKeyPath.m_size)))) - 1);
    m_shapeKeyPath.m_key.m_value = v20 + m_shapeKeyPath.m_size;
    m_shapeTagCodec = (unsigned __int64)v4->m_data.m_query->m_shapeTagCodec;
    extraRadius.m_real.m128_u64[0] = m_shapeTagCodec;
    if ( m_shapeTagCodec )
    {
      v23 = *(void (__fastcall **)(unsigned __int64, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
      v24 = StaticModels_GetCollisionTileModelShape((*(_WORD *)(m_data + 4 * v10) & 0x4000) != 0, *(_DWORD *)(v16 + 72), *(_WORD *)(m_data + 4 * v10) & 0x3FFF);
      v25 = v4->m_data.m_targetShapeInfo;
      v26 = v24;
      m_rootShape = v25->m_rootShape;
      m_body = v25->m_body;
      CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(v156 + 4 * v10) & 0x4000) != 0, *(_DWORD *)(v157 + 72), *(_WORD *)(v156 + 4 * v10) & 0x3FFF);
      v151 = v26;
      v16 = v157;
      LODWORD(v150) = v21;
      v23(extraRadius.m_real.m128_u64[0], CollisionTileModelShapeTag, 5i64, m_body, m_rootShape, v157, v150, v151, &v154);
      m_query = v4->m_data.m_query;
      if ( m_query->m_filter )
      {
        m_data = v156;
        v31 = *(_DWORD *)(v16 + 72);
        v178.m128_i16[0] = -1;
        v178.m128_i32[1] = 0;
        v178.m128_u64[1] = 0i64;
        v178.m128_i16[0] = m_query->m_filterData.m_materialId.m_value;
        v178.m128_i32[1] = m_query->m_filterData.m_collisionFilterInfo;
        m_userData = m_query->m_filterData.m_userData;
        m_queryShapeInfo = (__m128 *)v4->m_data.m_queryShapeInfo;
        v178.m128_u64[1] = m_userData;
        v179 = *m_queryShapeInfo;
        v180 = m_queryShapeInfo[1].m128_i64[0];
        LODWORD(m_userData) = m_queryShapeInfo[1].m128_i32[2];
        v34 = v4->m_data.m_targetShapeInfo;
        v181 = m_userData;
        *(_WORD *)v163 = v154;
        *(_DWORD *)&v163[4] = DWORD1(v154);
        *(_QWORD *)&v163[8] = *((_QWORD *)&v154 + 1);
        v182 = 0i64;
        *(_OWORD *)&v163[16] = *(_OWORD *)&v34->m_body;
        v35 = *(_WORD *)(v156 + 4 * v10);
        *(_QWORD *)&v163[32] = v16;
        *(_DWORD *)&v163[40] = v21;
        *(_QWORD *)&v163[48] = StaticModels_GetCollisionTileModelShape((v35 & 0x4000) != 0, v31, v35 & 0x3FFF);
        LOBYTE(v36) = 1;
        if ( !v4->m_data.m_query->m_filter->isCollisionEnabled((hknpCollisionFilter *)v4->m_data.m_query->m_filter, QUERY_AABB, v36, (const hknpCollisionFilter::FilterInput *)&v178, (const hknpCollisionFilter::FilterInput *)v163) )
        {
LABEL_27:
          leaves = v153;
          v4 = this;
          goto LABEL_28;
        }
      }
      else
      {
        m_data = v156;
      }
      m_collector = (hknpCollisionQueryCollector *)v161;
      v15 = v158;
    }
    if ( *(_BYTE *)(v15 + 28) == 3 )
    {
      v43 = v4->m_data.m_query;
      v44 = *(unsigned __int16 *)(m_data + 4 * v10 + 2);
      v45 = *(_WORD *)(m_data + 4 * v10) & 0x3FFF;
      v46 = *(_DWORD *)(v16 + 72);
      v189 = *(__m256i *)&v43->m_shapeTagCodec;
      aabbOut = *(hkAabb *)v43->m_levelOfDetail;
      m_quad = v43->m_aabb.m_max.m_quad;
      v191 = m_quad;
      *(double *)m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v46, v45, v44);
      v48 = *(unsigned __int16 *)(m_data + 4 * v10 + 2);
      v49 = *(_WORD *)(m_data + 4 * v10) & 0x3FFF;
      if ( m_quad.m128_f32[0] == v6 )
      {
        StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v16 + 72), v49, v48, &v166, &v185);
        *(__m256i *)v163 = *(__m256i *)g_vectorfConstants[32].m128_f32;
        *(__m256i *)&v163[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
        v186.m_vec.m_quad = (__m128)v185;
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v163, &v186);
        _XMM13 = *(_OWORD *)&v163[32];
        _XMM5 = *(_OWORD *)hkMath::hkSse_signMask;
        _XMM15 = *(_OWORD *)&v163[16];
        v75 = (__m128)LODWORD(v166.v[0]);
        v75.m128_f32[0] = v166.v[0] * *(float *)&v5;
        v76 = v4->m_data.m_transformedAabb.m_max.m_quad;
        v77 = _mm128_sub_ps(v76, v4->m_data.m_transformedAabb.m_min.m_quad);
        extraRadius.m_real = v75;
        v78 = _mm128_mul_ps(v77, g_vectorfConstants[21]);
        _XMM0 = *(_OWORD *)v163;
        __asm
        {
          vunpcklps xmm3, xmm0, xmm15
          vunpckhps xmm0, xmm0, xmm15
          vblendps xmm7, xmm0, xmm13, 0Ch
        }
        v83 = _mm_shuffle_ps(v78, v78, 170);
        __asm
        {
          vmovlhps xmm8, xmm3, xmm13
          vmovhlps xmm0, xmm8, xmm3
        }
        _mm128_mul_ps(_mm_shuffle_ps(_XMM0, *(__m128 *)&v163[32], 212), _mm_shuffle_ps(v78, v78, 85));
        __asm { vandnps xmm3, xmm5, xmm2 }
        _mm128_mul_ps(_mm_shuffle_ps(v78, v78, 0), _XMM8);
        __asm { vandnps xmm1, xmm5, xmm0 }
        v88 = _mm128_add_ps(_XMM3, _XMM1);
        __asm { vpxor   xmm1, xmm1, xmm1 }
        _mm128_mul_ps(v83, _XMM7);
        __asm { vandnps xmm0, xmm5, xmm2 }
        v91 = _mm128_add_ps(v88, _XMM0);
        __asm { vpinsrw xmm0, xmm1, eax, 1 }
        v161 = _XMM0;
        __asm { vpshufd xmm5, xmm0, 0 }
        v94 = _mm128_mul_ps(_mm128_add_ps(v76, v4->m_data.m_transformedAabb.m_min.m_quad), g_vectorfConstants[21]);
        _XMM0 = v75;
        v5 = LODWORD(FLOAT_0_03125);
        __asm { vinsertps xmm0, xmm0, xmm12, 10h }
        _XMM12 = v161;
        __asm
        {
          vinsertps xmm0, xmm0, xmm14, 20h ; ' '
          vinsertps xmm0, xmm0, xmm7, 30h ; '0'
        }
        _mm128_sub_ps(v94, _XMM0);
        *(__m128 *)&v163[48] = _XMM0;
        _XMM0 = *(_OWORD *)v163;
        __asm
        {
          vdpps   xmm0, xmm0, xmm3, 71h ; 'q'
          vdpps   xmm1, xmm15, xmm3, 72h ; 'r'
        }
        v102 = _XMM1 | _XMM0;
        __asm { vdpps   xmm1, xmm13, xmm3, 74h ; 't' }
        v6 = FLOAT_1_0;
        aabbOut.m_max.m_quad = _mm128_add_ps((__m128)(*(_OWORD *)&v91 ^ _XMM5), (__m128)(v102 | _XMM1));
        v191 = _mm128_add_ps((__m128)(v102 | _XMM1), v91);
      }
      else
      {
        v50 = *(_DWORD *)(v16 + 72);
        *(double *)m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v50, v49, v48);
        _XMM6 = _mm_shuffle_ps(m_quad, m_quad, 0);
        StaticModels_GetCollisionTileModelInstanceTransform(v50, *(_WORD *)(m_data + 4 * v10) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v10 + 2), &origin, &orientationAsQuat);
        qi.m_vec.m_quad = (__m128)orientationAsQuat;
        *(__m256i *)&v163[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
        *(__m256i *)v163 = *(__m256i *)g_vectorfConstants[32].m128_f32;
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v163, &qi);
        _XMM3 = *(_OWORD *)v163;
        v54 = LODWORD(origin.v[0]);
        *(float *)&v54 = origin.v[0] * *(float *)&v5;
        _XMM10 = v54;
        __asm
        {
          vrcpps  xmm2, xmm6
          vunpcklps xmm5, xmm3, xmm0
        }
        v57 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM6)), _XMM2);
        __asm
        {
          vunpckhps xmm0, xmm3, xmm0
          vblendps xmm2, xmm0, xmm4, 0Ch
          vmovlhps xmm1, xmm5, xmm4
        }
        v61.m_quad = _mm128_mul_ps(v57, _XMM1);
        __asm { vmovhlps xmm0, xmm1, xmm5 }
        v63 = _mm_shuffle_ps(_XMM0, *(__m128 *)&v163[32], 212);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        v65.m_quad = _mm128_mul_ps(v63, v57);
        v66.m_quad = _mm128_mul_ps(_XMM2, v57);
        BvToWorld.m_rotation.m_col1 = (hkVector4f)v65.m_quad;
        __asm
        {
          vinsertps xmm10, xmm10, xmm8, 10h
          vpinsrw xmm12, xmm0, eax, 1
          vpshufd xmm5, xmm12, 40h ; '@'
          vinsertps xmm10, xmm10, xmm9, 20h ; ' '
          vinsertps xmm10, xmm10, xmm0, 30h ; '0'
        }
        BvToWorld.m_translation = (hkVector4f)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 85), v65.m_quad), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 0), v61.m_quad)), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 170), v66.m_quad)) ^ _XMM5);
        BvToWorld.m_rotation.m_col0 = (hkVector4f)v61.m_quad;
        BvToWorld.m_rotation.m_col2 = (hkVector4f)v66.m_quad;
        *(__m128 *)&v163[48] = _XMM10;
        extraRadius.m_real = g_vectorfConstants[5];
        hkAabbUtil::calcAabb(&BvToWorld, &v4->m_data.m_transformedAabb, &extraRadius, (hkAabb *)&aabbOut.m_max);
        v16 = v157;
      }
      v104 = v4->m_data.m_targetShapeInfo;
      v105 = *(_QWORD *)v15;
      v106 = v4->m_data.m_queryShapeInfo;
      v168.m256i_i64[3] = 0xFFFFFFFFi64;
      v168 = *(__m256i *)&v104->m_body;
      m_shapeToWorld = v104->m_shapeToWorld;
      *(_QWORD *)v170 = 0i64;
      v170[8] = v104->m_scalingInternals.m_isScaled;
      m_mode = v104->m_scalingInternals.m_mode;
      v174.m_quad = (__m128)v104->m_scalingInternals.m_scale;
      v175.m_quad = (__m128)v104->m_scalingInternals.m_offset;
      m_convexRadius = v104->m_scalingInternals.m_convexRadius;
      v168.m256i_i32[7] = m_shapeKeyPath.m_key.m_value;
      v172 = m_convexRadius;
      __asm { vpshufd xmm0, xmm12, 0 }
      v109 = (__m128)(*(_OWORD *)&g_vectorfConstants[37] ^ _XMM0);
      v110 = &v178;
      v168.m256i_i64[2] = v15;
      if ( !v159 )
        v110 = NULL;
      v168.m256i_i32[6] = v21;
      m_queryContext = v4->m_data.m_queryContext;
      v179 = g_vectorfConstants[37];
      v178 = v109;
      (*(void (__fastcall **)(__int64, hknpCollisionQueryContext *, __m256i *, const hknpShapeQueryInfo *, __int128 *, __m256i *, hknpCollisionQueryCollector *, __m128 *))(v105 + 200))(v15, m_queryContext, &v189, v106, &v154, &v168, m_collector, v110);
      v112 = v159;
      if ( v159 )
      {
        CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(*(_DWORD *)(v16 + 72), *(_WORD *)(m_data + 4 * v10) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v10 + 2));
        v114 = *(float *)&CollisionTileModelInstanceScale != v6;
        StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v16 + 72), *(_WORD *)(m_data + 4 * v10) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v10 + 2), &v167, &v187);
        *(__m256i *)v163 = *(__m256i *)g_vectorfConstants[32].m128_f32;
        *(__m256i *)&v163[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
        v188.m_vec.m_quad = (__m128)v187;
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v163, &v188);
        v115.m128_u64[1] = *((_QWORD *)&v5 + 1);
        v116 = *(unsigned __int16 *)(m_data + 4 * v10 + 2);
        v117 = *(_WORD *)(m_data + 4 * v10) & 0x3FFF;
        v118 = *(_DWORD *)(v16 + 72);
        *(float *)&v163[48] = *(float *)&v5 * v167.v[0];
        *(float *)&v163[52] = *(float *)&v5 * v167.v[1];
        *(float *)&v163[56] = *(float *)&v5 * v167.v[2];
        *(float *)&v163[60] = 0.0;
        *(double *)v115.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(v118, v117, v116);
        _XMM3 = _mm128_sub_ps(aabbOut.m_max.m_quad, v178);
        v120 = _mm128_sub_ps(v179, v191);
        _XMM8 = *(_OWORD *)hkMath::hkSse_signMask;
        _mm_shuffle_ps(v115, v115, 0);
        if ( v114 )
        {
          __asm { vandnps xmm0, xmm8, xmm0 }
          _XMM3 = _mm128_mul_ps(_XMM0, _XMM3);
          _mm128_mul_ps(_XMM0, v120);
        }
        __asm
        {
          vpminsd xmm3, xmm3, xmm1
          vpshufd xmm1, xmm3, 55h ; 'U'
          vpshufd xmm0, xmm3, 0
          vpminsd xmm2, xmm0, xmm1
          vpshufd xmm1, xmm3, 0AAh ; 'ª'
        }
        _XMM3 = *(_OWORD *)v163;
        __asm
        {
          vpminsd xmm7, xmm1, xmm2
          vunpcklps xmm1, xmm3, xmm0
          vmovlhps xmm2, xmm1, xmm5
          vunpckhps xmm6, xmm3, xmm0
          vmovhlps xmm0, xmm2, xmm1
        }
        _mm_shuffle_ps(_XMM0, *(__m128 *)&v163[32], 212);
        __asm
        {
          vandnps xmm3, xmm8, xmm1
          vandnps xmm2, xmm8, xmm2
          vblendps xmm0, xmm6, xmm5, 0Ch
          vandnps xmm1, xmm8, xmm0
        }
        _XMM5 = _mm128_add_ps(_XMM1, _mm128_add_ps(_XMM3, _XMM2));
        __asm
        {
          vpshufd xmm2, xmm5, 55h ; 'U'
          vpshufd xmm0, xmm5, 0
          vpmaxsd xmm3, xmm0, xmm2
          vpshufd xmm1, xmm5, 0AAh ; 'ª'
          vpmaxsd xmm4, xmm1, xmm3
          vrcpps  xmm2, xmm4
        }
        v145 = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM4)), _XMM2), _XMM7);
        _XMM1 = _mm128_add_ps(v145, v4->m_data.m_transformedAabb.m_max.m_quad);
        _XMM0 = _mm128_sub_ps(v4->m_data.m_transformedAabb.m_min.m_quad, v145);
        __asm { vmaxps  xmm0, xmm0, xmmword ptr [r14] }
        v112->m_min = (hkVector4f)_XMM0.m_quad;
        __asm { vminps  xmm1, xmm1, xmmword ptr [r14+10h] }
        v112->m_max = (hkVector4f)_XMM1.m_quad;
      }
    }
    else
    {
      v37 = v4->m_data.m_query;
      v38 = v4->m_data.m_targetShapeInfo->m_body;
      v39 = v4->m_data.m_queryShapeInfo;
      *(float *)&m_shapeToWorld = 0.0;
      v168 = (__m256i)0i64;
      *(_QWORD *)&v170[4] = -1i64;
      v40 = v39->m_body;
      v175.m_quad.m128_i32[0] = -1;
      v177 = 5i64;
      if ( v40 )
        m_serialAndIndex = v40->m_id.m_serialAndIndex;
      else
        m_serialAndIndex = 0xFFFFFF;
      *(_DWORD *)v170 = m_serialAndIndex;
      LOWORD(v172) = v37->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = v37->m_filterData.m_collisionFilterInfo;
      v174.m_quad.m128_u64[0] = v37->m_filterData.m_userData;
      if ( v38 )
        v42 = v38->m_id.m_serialAndIndex;
      else
        v42 = 0xFFFFFF;
      v174.m_quad.m128_u64[1] = __PAIR64__(v21, v42);
      v175.m_quad.m128_i16[4] = v154;
      v175.m_quad.m128_i32[3] = DWORD1(v154);
      v176 = *((_QWORD *)&v154 + 1);
      m_collector->addHit(m_collector, (const hknpCollisionResult *)&v168);
    }
    goto LABEL_27;
  }
}

/*
==============
StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale
==============
*/
void StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(const hknpShapeQueryInfo *queryShapeInfo, const hknpShapeQueryInfo *targetShapeInfo, hkTransformf *transformOut, hkVector4f *targetScaleInvOut)
{
  hkTransformf *m_shapeToWorld; 
  hkVector4f v9; 
  __m128 m_quad; 
  __m128 v13; 
  hkTransformf t; 
  hkTransformf a; 
  hkVector4f v17; 

  _RSI = targetShapeInfo;
  a = *queryShapeInfo->m_shapeToWorld;
  hkVector4f::setRotatedDir(&v17, &a.m_rotation, &queryShapeInfo->m_scalingInternals.m_offset);
  m_shapeToWorld = (hkTransformf *)_RSI->m_shapeToWorld;
  v9.m_quad = (__m128)queryShapeInfo->m_scalingInternals.m_scale;
  a.m_translation.m_quad = _mm128_add_ps(a.m_translation.m_quad, v17.m_quad);
  a.m_rotation.m_col0.m_quad = _mm128_mul_ps(_mm_shuffle_ps(v9.m_quad, v9.m_quad, 0), a.m_rotation.m_col0.m_quad);
  a.m_rotation.m_col1.m_quad = _mm128_mul_ps(_mm_shuffle_ps(v9.m_quad, v9.m_quad, 85), a.m_rotation.m_col1.m_quad);
  __asm { vrcpps  xmm2, xmmword ptr [rsi+40h] }
  a.m_rotation.m_col2.m_quad = _mm128_mul_ps(_mm_shuffle_ps(v9.m_quad, v9.m_quad, 170), a.m_rotation.m_col2.m_quad);
  t = *m_shapeToWorld;
  targetScaleInvOut->m_quad = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _RSI->m_scalingInternals.m_scale.m_quad)), _XMM2);
  hkTransformf::setInverse(&t, &t);
  m_quad = targetScaleInvOut->m_quad;
  _YMM3 = (__m256i)*(_OWORD *)&targetScaleInvOut->m_quad;
  v13 = _mm128_sub_ps(t.m_translation.m_quad, _RSI->m_scalingInternals.m_offset.m_quad);
  __asm { vinsertf128 ymm3, ymm3, xmm3, 1 }
  *(__m256 *)t.m_rotation.m_col0.m_quad.m128_f32 = _mm256_mul_ps(_YMM3, *(__m256 *)t.m_rotation.m_col0.m_quad.m128_f32);
  t.m_rotation.m_col2.m_quad = _mm128_mul_ps(m_quad, t.m_rotation.m_col2.m_quad);
  t.m_translation.m_quad = _mm128_mul_ps(v13, m_quad);
  hkTransformf::setMul(transformOut, &t, &a);
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  __m128 v3; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v6; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v11; 
  const hknpShapeKeyMask *v12; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v14; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v16; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpClosestPointsQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v23; 
  bool v24; 
  __int64 v25; 
  const hknpShapeQueryInfo *v26; 
  unsigned int m_instanceIdx; 
  int v28; 
  hkVector4f v29; 
  const StaticModels_HavokShape *v30; 
  __m128 m_convexRadius_low; 
  unsigned int m_tileIdx; 
  hkVector4f v33; 
  double CollisionTileModelInstanceScale; 
  __m128 m_quad; 
  unsigned int v36; 
  int v37; 
  double v38; 
  signed int m_mode; 
  unsigned __int16 v40; 
  float *CollisionTileModelShape; 
  const hkTransformf *m_shapeToWorld; 
  const StaticModels_HavokShape *v46; 
  __m128 v48; 
  __m128 v50; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const hknpShapeQueryInfo *v52; 
  hknpCollisionQueryContext *m_queryContext; 
  const hknpClosestPointsQuery *v54; 
  __int128 v57; 
  __int128 v61; 
  __int128 v65; 
  __int128 v69; 
  __int128 v73; 
  __m128 v80; 
  bool queryAndTargetSwapped; 
  hknpCollisionQueryCollector *collector; 
  StaticModels_HavokShapeInstance *v87; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v90; 
  hknpQueryFilterData targetShapeFilterData; 
  hkSimdFloat32 *v93; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v97; 
  const hknpShape *v98; 
  const hknpShape *m_parentShape; 
  unsigned int v100; 
  const hknpShape *m_shape; 
  unsigned __int16 v102; 
  unsigned int v103; 
  unsigned __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  const StaticModels_HavokShape *v107; 
  unsigned int v108; 
  hknpShape *v109; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  char v112[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v115[3]; 
  __m128 v116; 
  hkTransformf queryToTarget; 
  __m128 v118; 

  m_targetShape = this->m_targetShape;
  v6 = (unsigned __int16)instanceIndex;
  v93 = maxDistanceSquared;
  m_data = m_targetShape->m_instances.m_data;
  v87 = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  m_targetShapeInfo = this->m_targetShapeInfo;
  targetShapeFilterData = *this->m_targetShapeFilterData;
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v11 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v90 = m_numShapeKeyBits + HIDWORD(targetShapea);
  v12 = NULL;
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v14 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v16 = this->m_targetShapeInfo;
    m_rootShape = v16->m_rootShape;
    m_body = v16->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v87[v6].m_modelIdxAndFlags & 0x4000) != 0, this->m_targetShape->m_tileIdx, v87[v6].m_modelIdxAndFlags & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 4i64, m_body, m_rootShape, v14, v11, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    v12 = NULL;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v23 = (__int64 *)this->m_targetShapeInfo;
      v24 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v97 = m_queryShapeInfo->m_body;
      v98 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v100 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v102 = targetShapeFilterData.m_materialId.m_value;
      v103 = targetShapeFilterData.m_collisionFilterInfo;
      v104 = targetShapeFilterData.m_userData;
      v105 = *v23;
      v25 = v23[1];
      LOBYTE(v23) = v24;
      v106 = v25;
      v107 = this->m_targetShape;
      v109 = targetShape;
      v108 = v11;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, GET_CLOSEST_POINTS, (bool)v23, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v102) )
        return;
    }
    m_data = v87;
  }
  v26 = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v6].m_instanceIdx;
  v28 = m_data[v6].m_modelIdxAndFlags & 0x3FFF;
  targetShapeInfo.m_body = v26->m_body;
  targetShapeInfo.m_rootShape = v26->m_rootShape;
  targetShapeInfo.m_parentShape = v26->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = v26->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = v26->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = v26->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = v26->m_scalingInternals.m_mode;
  v29.m_quad = (__m128)v26->m_scalingInternals.m_scale;
  v30 = this->m_targetShape;
  v118 = v3;
  targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v29.m_quad;
  targetShapeInfo.m_scalingInternals.m_offset = v26->m_scalingInternals.m_offset;
  targetShapeInfo.m_scalingInternals.m_convexRadius = v26->m_scalingInternals.m_convexRadius;
  m_convexRadius_low = (__m128)LODWORD(targetShapeInfo.m_scalingInternals.m_convexRadius);
  m_tileIdx = v30->m_tileIdx;
  *(double *)m_convexRadius_low.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v28, m_instanceIdx);
  v33.m_quad = _mm_shuffle_ps(m_convexRadius_low, m_convexRadius_low, 0);
  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v6].m_modelIdxAndFlags & 0x3FFF, m_data[v6].m_instanceIdx);
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v6].m_modelIdxAndFlags & 0x3FFF, m_data[v6].m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v112 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v112[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v112, &qi);
  *(float *)&v112[52] = 0.03125 * origin.v[1];
  *(float *)&v112[60] = 0.0;
  *(float *)&v112[48] = 0.03125 * origin.v[0];
  *(float *)&v112[56] = 0.03125 * origin.v[2];
  if ( v26->m_scalingInternals.m_isScaled )
  {
    m_quad = v26->m_scalingInternals.m_scale.m_quad;
    v33.m_quad = _mm128_mul_ps(v33.m_quad, m_quad);
    *(__m128 *)&v112[48] = _mm128_mul_ps(m_quad, *(__m128 *)&v112[48]);
    goto LABEL_9;
  }
  if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
  {
LABEL_9:
    v36 = m_data[v6].m_instanceIdx;
    v37 = m_data[v6].m_modelIdxAndFlags & 0x3FFF;
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v33.m_quad;
    targetShapeInfo.m_scalingInternals.m_offset = 0i64;
    v38 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v37, v36);
    if ( *(float *)&v38 == 1.0 )
      m_mode = v26->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v40 = m_data[v6].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    CollisionTileModelShape = (float *)StaticModels_GetCollisionTileModelShape((v40 & 0x4000) != 0, m_tileIdx, v40 & 0x3FFF);
    targetShapeInfo.m_scalingInternals.m_convexRadius = CollisionTileModelShape[8];
    if ( ((_BYTE)CollisionTileModelShape[6] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)*((unsigned __int8 *)CollisionTileModelShape + 26), (const hkcdVertex *)((char *)CollisionTileModelShape + *((unsigned __int16 *)CollisionTileModelShape + 30) + 58), *((unsigned __int16 *)CollisionTileModelShape + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  _XMM9 = *(__m128 *)&v112[32];
  _XMM10 = *(__m128 *)&v112[16];
  _XMM11 = *(__m128 *)v112;
  m_shapeToWorld = this->m_targetShapeInfo->m_shapeToWorld;
  v46 = this->m_targetShape;
  _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
  v48 = m_shapeToWorld->m_rotation.m_col2.m_quad;
  __asm { vextractf128 xmm6, ymm7, 1 }
  v115[2] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 170), v48));
  v115[1] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 170), v48));
  v116 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v112[48], *(__m128 *)&v112[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v112[48], *(__m128 *)&v112[48], 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v112[48], *(__m128 *)&v112[48], 170), v48));
  v115[0] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), v48));
  v50 = _mm128_add_ps(v116, m_shapeToWorld->m_translation.m_quad);
  targetShapeInfo.m_parentShape = v46;
  targetShapeInfo.m_shapeKeyPath.m_size = v90;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v115;
  m_simdTreeMask = this->m_simdTreeMask;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v11;
  v116 = v50;
  if ( m_simdTreeMask )
    v12 = m_simdTreeMask->m_instanceMasks.m_data[instanceIndex];
  v52 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  v54 = this->m_query;
  collector = this->m_collector;
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeKeyMask = v12;
  __asm
  {
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v57 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v57 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v61 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col2 = (hkVector4f)(v61 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v65 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col1 = (hkVector4f)(v65 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v69 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  _mm128_sub_ps(this->m_queryToTarget.m_translation.m_quad, *(__m128 *)&v112[48]);
  queryToTarget.m_rotation.m_col0 = (hkVector4f)(v69 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v73 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v73 | _XMM1);
  hknpCollisionQueryDispatcher::getClosestPoints((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, v54, v52, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector);
  _XMM0 = g_vectorfConstants[5];
  __asm { vmaxps  xmm5, xmm0, xmmword ptr [rax+10h] }
  if ( this->m_targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
    __asm
    {
      vandnps xmm1, xmm0, xmmword ptr [rax+40h]
      vrcpps  xmm2, xmm1
    }
    v80 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM1, _XMM2)), _XMM2);
    _XMM2 = _mm_shuffle_ps(v80, v80, 85);
    _mm_shuffle_ps(v80, v80, 0);
    __asm { vmaxps  xmm3, xmm2, xmm0 }
    _XMM1 = _mm_shuffle_ps(v80, v80, 170);
    __asm { vmaxps  xmm2, xmm1, xmm3 }
    _XMM5 = _mm128_mul_ps(_XMM2, _XMM5);
  }
  v93->m_real = _mm128_mul_ps(_XMM5, _XMM5);
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  __m128 v3; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v6; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v11; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v13; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v15; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpClosestPointsQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v22; 
  bool v23; 
  __int64 v24; 
  const hknpShapeQueryInfo *v25; 
  unsigned int m_instanceIdx; 
  int v27; 
  hkVector4f v28; 
  const StaticModels_HavokShape *v29; 
  __m128 m_convexRadius_low; 
  unsigned int m_tileIdx; 
  hkVector4f v32; 
  double CollisionTileModelInstanceScale; 
  __m128 m_quad; 
  unsigned int v35; 
  int v36; 
  double v37; 
  signed int m_mode; 
  unsigned __int16 v39; 
  float *CollisionTileModelShape; 
  const hkTransformf *m_shapeToWorld; 
  const StaticModels_HavokShape *v45; 
  __m128 v47; 
  __int128 v51; 
  __int128 v55; 
  __int128 v59; 
  __int128 v63; 
  const hknpShapeQueryInfo *v65; 
  hknpCollisionQueryContext *m_queryContext; 
  const hknpClosestPointsQuery *v67; 
  __int128 v70; 
  __m128 v77; 
  bool queryAndTargetSwapped; 
  hknpCollisionQueryCollector *collector; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v86; 
  hknpQueryFilterData targetShapeFilterData; 
  hkSimdFloat32 *v88; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v92; 
  const hknpShape *v93; 
  const hknpShape *m_parentShape; 
  unsigned int v95; 
  const hknpShape *m_shape; 
  unsigned __int16 v97; 
  unsigned int v98; 
  unsigned __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  const StaticModels_HavokShape *v102; 
  unsigned int v103; 
  hknpShape *v104; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  char v108[64]; 
  hkQuaternionf qi; 
  __int128 v110[3]; 
  __m128 v111; 
  hkTransformf queryToTarget; 
  __m128 v113; 

  m_targetShape = this->m_targetShape;
  v6 = (unsigned __int16)instanceIndex;
  v88 = maxDistanceSquared;
  m_data = m_targetShape->m_instances.m_data;
  *(_QWORD *)orientationAsQuat.v = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  m_targetShapeInfo = this->m_targetShapeInfo;
  targetShapeFilterData = *this->m_targetShapeFilterData;
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v11 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v86 = m_numShapeKeyBits + HIDWORD(targetShapea);
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v13 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v15 = this->m_targetShapeInfo;
    m_rootShape = v15->m_rootShape;
    m_body = v15->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v6) & 0x4000) != 0, this->m_targetShape->m_tileIdx, *(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v6) & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 4i64, m_body, m_rootShape, v13, v11, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v22 = (__int64 *)this->m_targetShapeInfo;
      v23 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v92 = m_queryShapeInfo->m_body;
      v93 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v95 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v97 = targetShapeFilterData.m_materialId.m_value;
      v98 = targetShapeFilterData.m_collisionFilterInfo;
      v99 = targetShapeFilterData.m_userData;
      v100 = *v22;
      v24 = v22[1];
      LOBYTE(v22) = v23;
      v101 = v24;
      v102 = this->m_targetShape;
      v104 = targetShape;
      v103 = v11;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, GET_CLOSEST_POINTS, (bool)v22, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v97) )
        return;
    }
    m_data = *(StaticModels_HavokShapeInstance **)orientationAsQuat.v;
  }
  v25 = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v6].m_instanceIdx;
  v27 = m_data[v6].m_modelIdxAndFlags & 0x3FFF;
  targetShapeInfo.m_body = v25->m_body;
  targetShapeInfo.m_rootShape = v25->m_rootShape;
  targetShapeInfo.m_parentShape = v25->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = v25->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = v25->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = v25->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = v25->m_scalingInternals.m_mode;
  v28.m_quad = (__m128)v25->m_scalingInternals.m_scale;
  v29 = this->m_targetShape;
  v113 = v3;
  targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v28.m_quad;
  targetShapeInfo.m_scalingInternals.m_offset = v25->m_scalingInternals.m_offset;
  targetShapeInfo.m_scalingInternals.m_convexRadius = v25->m_scalingInternals.m_convexRadius;
  m_convexRadius_low = (__m128)LODWORD(targetShapeInfo.m_scalingInternals.m_convexRadius);
  m_tileIdx = v29->m_tileIdx;
  *(double *)m_convexRadius_low.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v27, m_instanceIdx);
  v32.m_quad = _mm_shuffle_ps(m_convexRadius_low, m_convexRadius_low, 0);
  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v6].m_modelIdxAndFlags & 0x3FFF, m_data[v6].m_instanceIdx);
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v6].m_modelIdxAndFlags & 0x3FFF, m_data[v6].m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v108 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v108[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v108, &qi);
  *(float *)&v108[52] = 0.03125 * origin.v[1];
  *(float *)&v108[60] = 0.0;
  *(float *)&v108[48] = 0.03125 * origin.v[0];
  *(float *)&v108[56] = 0.03125 * origin.v[2];
  if ( v25->m_scalingInternals.m_isScaled )
  {
    m_quad = v25->m_scalingInternals.m_scale.m_quad;
    v32.m_quad = _mm128_mul_ps(v32.m_quad, m_quad);
    *(__m128 *)&v108[48] = _mm128_mul_ps(m_quad, *(__m128 *)&v108[48]);
    goto LABEL_9;
  }
  if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
  {
LABEL_9:
    v35 = m_data[v6].m_instanceIdx;
    v36 = m_data[v6].m_modelIdxAndFlags & 0x3FFF;
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v32.m_quad;
    targetShapeInfo.m_scalingInternals.m_offset = 0i64;
    v37 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v36, v35);
    if ( *(float *)&v37 == 1.0 )
      m_mode = v25->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v39 = m_data[v6].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    CollisionTileModelShape = (float *)StaticModels_GetCollisionTileModelShape((v39 & 0x4000) != 0, m_tileIdx, v39 & 0x3FFF);
    targetShapeInfo.m_scalingInternals.m_convexRadius = CollisionTileModelShape[8];
    if ( ((_BYTE)CollisionTileModelShape[6] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)*((unsigned __int8 *)CollisionTileModelShape + 26), (const hkcdVertex *)((char *)CollisionTileModelShape + *((unsigned __int16 *)CollisionTileModelShape + 30) + 58), *((unsigned __int16 *)CollisionTileModelShape + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  _XMM11 = *(__m128 *)&v108[32];
  _XMM10 = *(__m128 *)&v108[16];
  _XMM9 = *(__m128 *)v108;
  m_shapeToWorld = this->m_targetShapeInfo->m_shapeToWorld;
  v45 = this->m_targetShape;
  _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
  v47 = m_shapeToWorld->m_rotation.m_col2.m_quad;
  __asm { vextractf128 xmm6, ymm7, 1 }
  v111 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v108[48], *(__m128 *)&v108[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v108[48], *(__m128 *)&v108[48], 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v108[48], *(__m128 *)&v108[48], 170), v47));
  v110[2] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), v47));
  v110[1] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 170), v47));
  v110[0] = (__int128)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 0), v3)), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 170), v47));
  v111 = _mm128_add_ps(v111, m_shapeToWorld->m_translation.m_quad);
  targetShapeInfo.m_parentShape = v45;
  targetShapeInfo.m_shapeKeyPath.m_size = v86;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v110;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v11;
  targetShapeInfo.m_shapeKeyMask = NULL;
  __asm
  {
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v51 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v51 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v55 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col2 = (hkVector4f)(v55 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v59 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col1 = (hkVector4f)(v59 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v63 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  v65 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  v67 = this->m_query;
  collector = this->m_collector;
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  _mm128_sub_ps(this->m_queryToTarget.m_translation.m_quad, *(__m128 *)&v108[48]);
  queryToTarget.m_rotation.m_col0 = (hkVector4f)(v63 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v70 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v70 | _XMM1);
  hknpCollisionQueryDispatcher::getClosestPoints((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, v67, v65, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector);
  _XMM0 = g_vectorfConstants[5];
  __asm { vmaxps  xmm5, xmm0, xmmword ptr [rax+10h] }
  if ( this->m_targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
    __asm
    {
      vandnps xmm1, xmm0, xmmword ptr [rax+40h]
      vrcpps  xmm2, xmm1
    }
    v77 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM1)), _XMM2);
    _XMM2 = _mm_shuffle_ps(v77, v77, 85);
    _mm_shuffle_ps(v77, v77, 0);
    __asm { vmaxps  xmm3, xmm2, xmm0 }
    _XMM1 = _mm_shuffle_ps(v77, v77, 170);
    __asm { vmaxps  xmm2, xmm1, xmm3 }
    _XMM5 = _mm128_mul_ps(_XMM2, _XMM5);
  }
  v88->m_real = _mm128_mul_ps(_XMM5, _XMM5);
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<1>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ShapeCast<1>::processInstance(StaticModels_HavokShapeEx::ShapeCast<1> *this, int instanceIndex)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v4; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v9; 
  const hknpShapeKeyMask *v10; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v12; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v14; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpShapeCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v21; 
  bool v22; 
  __int64 v23; 
  const hknpShapeQueryInfo *v24; 
  unsigned int m_instanceIdx; 
  int v26; 
  const StaticModels_HavokShape *v27; 
  __m128 m_convexRadius_low; 
  unsigned int m_tileIdx; 
  hkVector4f v30; 
  double CollisionTileModelInstanceScale; 
  __m128 m_quad; 
  unsigned int v33; 
  int v34; 
  double v35; 
  signed int m_mode; 
  unsigned __int16 v37; 
  float *CollisionTileModelShape; 
  const hknpShapeCastQuery *v39; 
  const hkTransformf *m_shapeToWorld; 
  __m128 v45; 
  hkVector4f v50; 
  __int128 v53; 
  const StaticModels_HavokShape *v60; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  bool queryAndTargetSwapped; 
  __int128 v71; 
  const hknpShapeQueryInfo *v80; 
  hknpCollisionQueryContext *m_queryContext; 
  __m128 *p_m_quad; 
  __int128 v85; 
  __int128 v89; 
  __int128 v93; 
  __int128 v97; 
  __int128 v101; 
  hknpCollisionQueryCollector *collector; 
  hknpCollisionQueryCollector *startCollector; 
  StaticModels_HavokShapeInstance *v105; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v108; 
  hknpQueryFilterData targetShapeFilterData; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v114; 
  const hknpShape *v115; 
  const hknpShape *m_parentShape; 
  unsigned int v117; 
  const hknpShape *m_shape; 
  unsigned __int16 v119; 
  unsigned int v120; 
  unsigned __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  const StaticModels_HavokShape *v124; 
  unsigned int v125; 
  hknpShape *v126; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  char v129[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v132[3]; 
  __m128 v133; 
  hknpShapeCastQuery query; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  v4 = (unsigned __int16)instanceIndex;
  m_data = this->m_targetShape->m_instances.m_data;
  v105 = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  m_targetShapeInfo = this->m_targetShapeInfo;
  targetShapeFilterData = *this->m_targetShapeFilterData;
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v9 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v108 = m_numShapeKeyBits + HIDWORD(targetShapea);
  v10 = NULL;
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v12 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v14 = this->m_targetShapeInfo;
    m_rootShape = v14->m_rootShape;
    m_body = v14->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v105[v4].m_modelIdxAndFlags & 0x4000) != 0, this->m_targetShape->m_tileIdx, v105[v4].m_modelIdxAndFlags & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 2i64, m_body, m_rootShape, v12, v9, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    v10 = NULL;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v21 = (__int64 *)this->m_targetShapeInfo;
      v22 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v114 = m_queryShapeInfo->m_body;
      v115 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v117 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v119 = targetShapeFilterData.m_materialId.m_value;
      v120 = targetShapeFilterData.m_collisionFilterInfo;
      v121 = targetShapeFilterData.m_userData;
      v122 = *v21;
      v23 = v21[1];
      LOBYTE(v21) = v22;
      v123 = v23;
      v124 = this->m_targetShape;
      v126 = targetShape;
      v125 = v9;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, SHAPE_CAST, (bool)v21, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v119) )
        return;
    }
    m_data = v105;
  }
  v24 = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v4].m_instanceIdx;
  v26 = m_data[v4].m_modelIdxAndFlags & 0x3FFF;
  targetShapeInfo.m_body = v24->m_body;
  targetShapeInfo.m_rootShape = v24->m_rootShape;
  targetShapeInfo.m_parentShape = v24->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = v24->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = v24->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = v24->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = v24->m_scalingInternals.m_mode;
  v27 = this->m_targetShape;
  targetShapeInfo.m_scalingInternals.m_scale = v24->m_scalingInternals.m_scale;
  targetShapeInfo.m_scalingInternals.m_offset = v24->m_scalingInternals.m_offset;
  targetShapeInfo.m_scalingInternals.m_convexRadius = v24->m_scalingInternals.m_convexRadius;
  m_convexRadius_low = (__m128)LODWORD(targetShapeInfo.m_scalingInternals.m_convexRadius);
  m_tileIdx = v27->m_tileIdx;
  *(double *)m_convexRadius_low.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v26, m_instanceIdx);
  v30.m_quad = _mm_shuffle_ps(m_convexRadius_low, m_convexRadius_low, 0);
  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v4].m_modelIdxAndFlags & 0x3FFF, m_data[v4].m_instanceIdx);
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v4].m_modelIdxAndFlags & 0x3FFF, m_data[v4].m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v129 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v129[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v129, &qi);
  *(float *)&v129[52] = 0.03125 * origin.v[1];
  *(float *)&v129[60] = 0.0;
  *(float *)&v129[48] = 0.03125 * origin.v[0];
  *(float *)&v129[56] = 0.03125 * origin.v[2];
  if ( v24->m_scalingInternals.m_isScaled )
  {
    m_quad = v24->m_scalingInternals.m_scale.m_quad;
    v30.m_quad = _mm128_mul_ps(v30.m_quad, m_quad);
    *(__m128 *)&v129[48] = _mm128_mul_ps(m_quad, *(__m128 *)&v129[48]);
    goto LABEL_9;
  }
  if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
  {
LABEL_9:
    v33 = m_data[v4].m_instanceIdx;
    v34 = m_data[v4].m_modelIdxAndFlags & 0x3FFF;
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v30.m_quad;
    targetShapeInfo.m_scalingInternals.m_offset = 0i64;
    v35 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v34, v33);
    if ( *(float *)&v35 == 1.0 )
      m_mode = v24->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v37 = m_data[v4].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    CollisionTileModelShape = (float *)StaticModels_GetCollisionTileModelShape((v37 & 0x4000) != 0, m_tileIdx, v37 & 0x3FFF);
    targetShapeInfo.m_scalingInternals.m_convexRadius = CollisionTileModelShape[8];
    if ( ((_BYTE)CollisionTileModelShape[6] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)*((unsigned __int8 *)CollisionTileModelShape + 26), (const hkcdVertex *)((char *)CollisionTileModelShape + *((unsigned __int16 *)CollisionTileModelShape + 30) + 58), *((unsigned __int16 *)CollisionTileModelShape + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  v39 = this->m_query;
  _XMM11 = *(__m128 *)&v129[32];
  _XMM12 = *(__m128 *)&v129[16];
  _XMM13 = *(__m128 *)v129;
  m_shapeToWorld = this->m_targetShapeInfo->m_shapeToWorld;
  _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
  v45 = m_shapeToWorld->m_rotation.m_col2.m_quad;
  __asm { vextractf128 xmm6, ymm7, 1 }
  v133 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v129[48], *(__m128 *)&v129[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v129[48], *(__m128 *)&v129[48], 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v129[48], *(__m128 *)&v129[48], 170), v45));
  _XMM9 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), v45));
  v132[2] = (__int128)_XMM9;
  _XMM10 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 170), v45));
  v132[1] = (__int128)_XMM10;
  _XMM7 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 170), v45));
  v132[0] = (__int128)_XMM7;
  v133 = _mm128_add_ps(v133, m_shapeToWorld->m_translation.m_quad);
  *(__m256i *)&query.m_shapeTagCodec = *(__m256i *)&v39->m_shapeTagCodec;
  *(_QWORD *)query.m_levelOfDetail = *(_QWORD *)v39->m_levelOfDetail;
  query.m_shape = v39->m_shape;
  query.m_accuracy = v39->m_accuracy;
  query.m_extraRadius = v39->m_extraRadius;
  query.m_startTolerance = v39->m_startTolerance;
  query.m_maxCastIterations = v39->m_maxCastIterations;
  query.m_body = v39->m_body;
  query.m_angularAccuracy = v39->m_angularAccuracy;
  query.m_deltaAngleLocal = v39->m_deltaAngleLocal;
  v50.m_quad = (__m128)v39->m_rotationCenterLocal;
  query.m_rotationCenterLocal = (hkVector4f)v50.m_quad;
  __asm
  {
    vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
    vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
  }
  v53 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  _XMM3 = v53 | _XMM1;
  __asm
  {
    vblendps xmm4, xmm3, xmm5, 8
    vcmpeqps xmm0, xmm4, xmm15
    vandnps xmm1, xmm0, xmm4
    vrcpps  xmm3, xmm1
  }
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v9;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v132;
  v60 = this->m_targetShape;
  query.m_ray.m_direction = (hkVector4f)_XMM1.m_quad;
  __asm { vcmpeqps xmm0, xmm1, xmm15 }
  targetShapeInfo.m_parentShape = v60;
  _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM1.m_quad)), _XMM3);
  targetShapeInfo.m_shapeKeyPath.m_size = v108;
  m_simdTreeMask = this->m_simdTreeMask;
  __asm { vblendvps xmm1, xmm3, xmm4, xmm0 }
  query.m_ray.m_invDirection = (hkVector4f)_XMM1.m_quad;
  query.m_ray.m_origin.m_quad = g_vectorfConstants[5];
  if ( m_simdTreeMask )
    v10 = m_simdTreeMask->m_instanceMasks.m_data[instanceIndex];
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeKeyMask = v10;
  if ( queryAndTargetSwapped )
  {
    _XMM0.m_quad = (__m128)v39->m_deltaAngleLocal;
    __asm
    {
      vcmpneqps xmm1, xmm0, xmm15
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      _mm128_sub_ps(v50.m_quad, *(__m128 *)&v129[48]);
      __asm
      {
        vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
        vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
      }
      v71 = _XMM1 | _XMM0;
      __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
      _XMM2 = v71 | _XMM1;
      __asm
      {
        vblendps xmm0, xmm2, xmm8, 8
        vdpps   xmm1, xmm13, xmm6, 71h ; 'q'
        vdpps   xmm3, xmm12, xmm6, 72h ; 'r'
      }
      query.m_rotationCenterLocal = (hkVector4f)_XMM0.m_quad;
      __asm { vdpps   xmm0, xmm11, xmm6, 74h ; 't' }
      _XMM2 = _XMM3 | _XMM1 | _XMM0;
      __asm { vblendps xmm1, xmm2, xmm6, 8 }
      query.m_deltaAngleLocal = (hkVector4f)_XMM1.m_quad;
    }
  }
  v80 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  p_m_quad = &v80->m_shapeToWorld->m_rotation.m_col0.m_quad;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v85 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v85 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v89 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col2 = (hkVector4f)(v89 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v93 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col1 = (hkVector4f)(v93 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v97 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col0 = (hkVector4f)(v97 | _XMM1);
  _mm128_sub_ps(p_m_quad[3], v133);
  startCollector = this->m_startCollector;
  collector = this->m_collector;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v101 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v101 | _XMM1);
  hknpCollisionQueryDispatcher::castShape((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, &query, v80, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector, startCollector);
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<0>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ShapeCast<0>::processInstance(StaticModels_HavokShapeEx::ShapeCast<0> *this, int instanceIndex)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v4; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v9; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v11; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v13; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpShapeCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v20; 
  bool v21; 
  __int64 v22; 
  const hknpShapeQueryInfo *v23; 
  unsigned int m_instanceIdx; 
  int v25; 
  const StaticModels_HavokShape *v26; 
  __m128 m_convexRadius_low; 
  unsigned int m_tileIdx; 
  hkVector4f v29; 
  double CollisionTileModelInstanceScale; 
  __m128 m_quad; 
  unsigned int v32; 
  int v33; 
  double v34; 
  signed int m_mode; 
  unsigned __int16 v36; 
  float *CollisionTileModelShape; 
  const hkTransformf *m_shapeToWorld; 
  __m128 v43; 
  __m128 v48; 
  const hknpShapeCastQuery *v49; 
  hkVector4f v50; 
  __int128 v53; 
  bool queryAndTargetSwapped; 
  __int128 v69; 
  const hknpShapeQueryInfo *v78; 
  hknpCollisionQueryContext *m_queryContext; 
  __m128 *p_m_quad; 
  __int128 v83; 
  __int128 v87; 
  __int128 v91; 
  __int128 v95; 
  __int128 v99; 
  hknpCollisionQueryCollector *collector; 
  hknpCollisionQueryCollector *startCollector; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v105; 
  hknpQueryFilterData targetShapeFilterData; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v110; 
  const hknpShape *v111; 
  const hknpShape *m_parentShape; 
  unsigned int v113; 
  const hknpShape *m_shape; 
  unsigned __int16 v115; 
  unsigned int v116; 
  unsigned __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  const StaticModels_HavokShape *v120; 
  unsigned int v121; 
  hknpShape *v122; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  char v126[64]; 
  hkQuaternionf qi; 
  __int128 v128[3]; 
  __m128 v129; 
  hknpShapeCastQuery query; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  v4 = (unsigned __int16)instanceIndex;
  m_data = this->m_targetShape->m_instances.m_data;
  *(_QWORD *)orientationAsQuat.v = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  m_targetShapeInfo = this->m_targetShapeInfo;
  targetShapeFilterData = *this->m_targetShapeFilterData;
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v9 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v105 = m_numShapeKeyBits + HIDWORD(targetShapea);
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v11 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v13 = this->m_targetShapeInfo;
    m_rootShape = v13->m_rootShape;
    m_body = v13->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v4) & 0x4000) != 0, this->m_targetShape->m_tileIdx, *(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v4) & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 2i64, m_body, m_rootShape, v11, v9, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v20 = (__int64 *)this->m_targetShapeInfo;
      v21 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v110 = m_queryShapeInfo->m_body;
      v111 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v113 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v115 = targetShapeFilterData.m_materialId.m_value;
      v116 = targetShapeFilterData.m_collisionFilterInfo;
      v117 = targetShapeFilterData.m_userData;
      v118 = *v20;
      v22 = v20[1];
      LOBYTE(v20) = v21;
      v119 = v22;
      v120 = this->m_targetShape;
      v122 = targetShape;
      v121 = v9;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, SHAPE_CAST, (bool)v20, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v115) )
        return;
    }
    m_data = *(StaticModels_HavokShapeInstance **)orientationAsQuat.v;
  }
  v23 = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v4].m_instanceIdx;
  v25 = m_data[v4].m_modelIdxAndFlags & 0x3FFF;
  targetShapeInfo.m_body = v23->m_body;
  targetShapeInfo.m_rootShape = v23->m_rootShape;
  targetShapeInfo.m_parentShape = v23->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = v23->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = v23->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = v23->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = v23->m_scalingInternals.m_mode;
  v26 = this->m_targetShape;
  targetShapeInfo.m_scalingInternals.m_scale = v23->m_scalingInternals.m_scale;
  targetShapeInfo.m_scalingInternals.m_offset = v23->m_scalingInternals.m_offset;
  targetShapeInfo.m_scalingInternals.m_convexRadius = v23->m_scalingInternals.m_convexRadius;
  m_convexRadius_low = (__m128)LODWORD(targetShapeInfo.m_scalingInternals.m_convexRadius);
  m_tileIdx = v26->m_tileIdx;
  *(double *)m_convexRadius_low.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v25, m_instanceIdx);
  v29.m_quad = _mm_shuffle_ps(m_convexRadius_low, m_convexRadius_low, 0);
  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v4].m_modelIdxAndFlags & 0x3FFF, m_data[v4].m_instanceIdx);
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v4].m_modelIdxAndFlags & 0x3FFF, m_data[v4].m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v126 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v126[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v126, &qi);
  *(float *)&v126[52] = 0.03125 * origin.v[1];
  *(float *)&v126[60] = 0.0;
  *(float *)&v126[48] = 0.03125 * origin.v[0];
  *(float *)&v126[56] = 0.03125 * origin.v[2];
  if ( v23->m_scalingInternals.m_isScaled )
  {
    m_quad = v23->m_scalingInternals.m_scale.m_quad;
    v29.m_quad = _mm128_mul_ps(v29.m_quad, m_quad);
    *(__m128 *)&v126[48] = _mm128_mul_ps(m_quad, *(__m128 *)&v126[48]);
    goto LABEL_9;
  }
  if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
  {
LABEL_9:
    v32 = m_data[v4].m_instanceIdx;
    v33 = m_data[v4].m_modelIdxAndFlags & 0x3FFF;
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)v29.m_quad;
    targetShapeInfo.m_scalingInternals.m_offset = 0i64;
    v34 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v33, v32);
    if ( *(float *)&v34 == 1.0 )
      m_mode = v23->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v36 = m_data[v4].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    CollisionTileModelShape = (float *)StaticModels_GetCollisionTileModelShape((v36 & 0x4000) != 0, m_tileIdx, v36 & 0x3FFF);
    targetShapeInfo.m_scalingInternals.m_convexRadius = CollisionTileModelShape[8];
    if ( ((_BYTE)CollisionTileModelShape[6] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)*((unsigned __int8 *)CollisionTileModelShape + 26), (const hkcdVertex *)((char *)CollisionTileModelShape + *((unsigned __int16 *)CollisionTileModelShape + 30) + 58), *((unsigned __int16 *)CollisionTileModelShape + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  _XMM11 = *(__m128 *)&v126[32];
  _XMM12 = *(__m128 *)&v126[16];
  _XMM13 = *(__m128 *)v126;
  m_shapeToWorld = this->m_targetShapeInfo->m_shapeToWorld;
  _YMM7 = *(__m256i *)m_shapeToWorld->m_rotation.m_col0.m_quad.m128_f32;
  v43 = m_shapeToWorld->m_rotation.m_col2.m_quad;
  __asm { vextractf128 xmm6, ymm7, 1 }
  v129 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v126[48], *(__m128 *)&v126[48], 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v126[48], *(__m128 *)&v126[48], 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v126[48], *(__m128 *)&v126[48], 170), v43));
  _XMM9 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), v43));
  v128[2] = (__int128)_XMM9;
  _XMM10 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM12, _XMM12, 170), v43));
  v128[1] = (__int128)_XMM10;
  _XMM7 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 85), _XMM6), _mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 0), (__m128)LODWORD(FLOAT_1_0))), _mm128_mul_ps(_mm_shuffle_ps(_XMM13, _XMM13, 170), v43));
  v128[0] = (__int128)_XMM7;
  v48 = _mm128_add_ps(v129, m_shapeToWorld->m_translation.m_quad);
  v49 = this->m_query;
  v129 = v48;
  *(__m256i *)&query.m_shapeTagCodec = *(__m256i *)&v49->m_shapeTagCodec;
  *(_QWORD *)query.m_levelOfDetail = *(_QWORD *)v49->m_levelOfDetail;
  query.m_shape = v49->m_shape;
  query.m_accuracy = v49->m_accuracy;
  query.m_extraRadius = v49->m_extraRadius;
  query.m_startTolerance = v49->m_startTolerance;
  query.m_maxCastIterations = v49->m_maxCastIterations;
  query.m_body = v49->m_body;
  query.m_angularAccuracy = v49->m_angularAccuracy;
  query.m_deltaAngleLocal = v49->m_deltaAngleLocal;
  v50.m_quad = (__m128)v49->m_rotationCenterLocal;
  query.m_rotationCenterLocal = (hkVector4f)v50.m_quad;
  __asm
  {
    vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
    vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
  }
  v53 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
  _XMM3 = v53 | _XMM1;
  __asm
  {
    vblendps xmm4, xmm3, xmm5, 8
    vcmpeqps xmm0, xmm4, xmm15
    vandnps xmm1, xmm0, xmm4
  }
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v128;
  targetShapeInfo.m_parentShape = this->m_targetShape;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v9;
  targetShapeInfo.m_shapeKeyPath.m_size = v105;
  targetShapeInfo.m_shapeKeyMask = NULL;
  __asm { vrcpps  xmm3, xmm1 }
  query.m_ray.m_direction = (hkVector4f)_XMM1.m_quad;
  __asm { vcmpeqps xmm0, xmm1, xmm15 }
  _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM1.m_quad)), _XMM3);
  __asm { vblendvps xmm1, xmm3, xmm4, xmm0 }
  query.m_ray.m_invDirection = (hkVector4f)_XMM1.m_quad;
  query.m_ray.m_origin.m_quad = g_vectorfConstants[5];
  if ( queryAndTargetSwapped )
  {
    _XMM0.m_quad = (__m128)v49->m_deltaAngleLocal;
    __asm
    {
      vcmpneqps xmm1, xmm0, xmm15
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      _mm128_sub_ps(v50.m_quad, *(__m128 *)&v126[48]);
      __asm
      {
        vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
        vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
      }
      v69 = _XMM1 | _XMM0;
      __asm { vdpps   xmm1, xmm11, xmm3, 74h ; 't' }
      _XMM2 = v69 | _XMM1;
      __asm
      {
        vblendps xmm0, xmm2, xmm8, 8
        vdpps   xmm1, xmm13, xmm6, 71h ; 'q'
        vdpps   xmm3, xmm12, xmm6, 72h ; 'r'
      }
      query.m_rotationCenterLocal = (hkVector4f)_XMM0.m_quad;
      __asm { vdpps   xmm0, xmm11, xmm6, 74h ; 't' }
      _XMM2 = _XMM3 | _XMM1 | _XMM0;
      __asm { vblendps xmm1, xmm2, xmm6, 8 }
      query.m_deltaAngleLocal = (hkVector4f)_XMM1.m_quad;
    }
  }
  v78 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  p_m_quad = &v78->m_shapeToWorld->m_rotation.m_col0.m_quad;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v83 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v83 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v87 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col2 = (hkVector4f)(v87 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v91 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col1 = (hkVector4f)(v91 | _XMM1);
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v95 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_rotation.m_col0 = (hkVector4f)(v95 | _XMM1);
  _mm128_sub_ps(p_m_quad[3], v129);
  startCollector = this->m_startCollector;
  collector = this->m_collector;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
  }
  v99 = _XMM1 | _XMM0;
  __asm { vdpps   xmm1, xmm9, xmm3, 74h ; 't' }
  queryToTarget.m_translation = (hkVector4f)(v99 | _XMM1);
  hknpCollisionQueryDispatcher::castShape((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, &query, v78, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector, startCollector);
}

/*
==============
StaticModels_HavokShapeEx::ScaleAndTransformCollector::reset
==============
*/
void StaticModels_HavokShapeEx::ScaleAndTransformCollector::reset(StaticModels_HavokShapeEx::ScaleAndTransformCollector *this)
{
  bool v2; 
  hknpCollisionQueryCollector *m_childCollector; 

  this->m_childCollector->reset(this->m_childCollector);
  v2 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  m_childCollector = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  if ( !v2 || m_childCollector->m_earlyOut.m_bool )
  {
    this->m_earlyOut.m_bool = 1;
    this->m_numHits = m_childCollector->m_numHits;
  }
  else
  {
    this->m_earlyOut.m_bool = 0;
    this->m_numHits = m_childCollector->m_numHits;
  }
}

