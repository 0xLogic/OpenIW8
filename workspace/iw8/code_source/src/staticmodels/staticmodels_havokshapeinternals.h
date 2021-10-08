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

void __fastcall StaticModels_HavokShapeEx::ScaleAndTransformCollector::addHit(StaticModels_HavokShapeEx::ScaleAndTransformCollector *this, const hknpCollisionResult *flippedHit, double _XMM2_8)
{
  hknpCollisionQueryCollector *m_childCollector; 
  bool v39; 
  hknpCollisionQueryCollector *v41; 
  bool v43; 
  __int128 v44; 
  __int128 v45; 

  _RBX = this;
  __asm
  {
    vmovups ymm2, ymmword ptr [rdx]
    vmulps  xmm5, xmm2, xmmword ptr [rcx+30h]
    vmovups ymm0, ymmword ptr [rdx+20h]
    vmovups ymm1, ymmword ptr [rdx+40h]
    vmovups [rsp+0A8h+var_68], ymm0
    vmovups xmm0, xmmword ptr [rdx+60h]
    vmovups [rsp+0A8h+var_28], xmm0
    vmovups [rsp+0A8h+var_88], ymm2
  }
  v45 = *(_OWORD *)&_RT0.m256i_u64[2];
  __asm
  {
    vmovups [rsp+0A8h+var_48], ymm1
    vmovups xmmword ptr [rsp+0A8h+var_88], xmm5
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm0, xmmword ptr [rax+10h]
    vshufps xmm1, xmm5, xmm5, 0
    vmulps  xmm2, xmm1, xmmword ptr [rax]
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmmword ptr [rax+20h]
    vmovups xmm0, xmmword ptr [rsp+0A8h+var_88+10h]
    vmulps  xmm5, xmm0, xmmword ptr [rcx+40h]
  }
  m_childCollector = this->m_childCollector;
  __asm
  {
    vaddps  xmm2, xmm4, xmm1
    vaddps  xmm3, xmm2, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rsp+0A8h+var_88+10h], xmm5
    vmovups xmmword ptr [rsp+0A8h+var_88], xmm3
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm0, xmmword ptr [rax+10h]
    vshufps xmm1, xmm5, xmm5, 0
    vmulps  xmm2, xmm1, xmmword ptr [rax]
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmmword ptr [rax+20h]
    vaddps  xmm5, xmm4, xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vdpps   xmm0, xmm5, xmm5, 7Fh
    vrsqrtps xmm4, xmm0
    vmulps  xmm0, xmm0, xmm4
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+0A8h+var_88+10h], xmm1
  }
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v44);
  v39 = _RBX->m_earlyOut.m_bool == 0;
  __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
  v41 = _RBX->m_childCollector;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
  }
  v43 = !v39 || v41->m_earlyOut.m_bool;
  _RBX->m_earlyOut.m_bool = v43;
  _RBX->m_numHits = v41->m_numHits;
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves
==============
*/
void StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *v16; 
  __int64 v19; 
  signed int v20; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v23; 
  __int64 m_data; 
  __int16 v25; 
  const void *CollisionTileModelShape; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v27; 
  __int64 m_collector; 
  __int64 v29; 
  int v32; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int v35; 
  int v36; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const void *v39; 
  const hknpShapeQueryInfo *v40; 
  const void *v41; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpAabbQuery *m_query; 
  unsigned __int64 m_userData; 
  const hknpShapeQueryInfo *v47; 
  const hknpShapeQueryInfo *v48; 
  unsigned int v49; 
  __int16 v50; 
  _BOOL8 v51; 
  __int64 *v52; 
  const hknpAabbQuery *v53; 
  const hknpBody *v55; 
  const hknpShapeQueryInfo *v56; 
  const hknpBody *v57; 
  int m_serialAndIndex; 
  int v59; 
  unsigned int v61; 
  int v62; 
  unsigned int v63; 
  char v66; 
  char v67; 
  unsigned int v68; 
  int v69; 
  unsigned int v70; 
  __int64 v164; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int128 *v170; 
  hknpCollisionQueryContext *m_queryContext; 
  char v175; 
  unsigned int v182; 
  int v183; 
  unsigned int v184; 
  __int64 v238; 
  const void *v239; 
  int v240; 
  __int128 v241; 
  __int64 v242; 
  __int64 v243; 
  __int64 v244; 
  hknpShapeKeyMask *v245; 
  __int64 v246; 
  __int128 v247; 
  hkAabb *v248; 
  __int64 v249; 
  StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector> *v250; 
  const unsigned int *v251; 
  char v252[64]; 
  hkSimdFloat32 extraRadius; 
  vec3_t origin; 
  vec3_t v255; 
  vec3_t v256; 
  __m256i v257; 
  __int64 v258; 
  _BYTE v259[12]; 
  int v260; 
  int v261; 
  unsigned int m_collisionFilterInfo; 
  __int128 v263; 
  __int128 v264; 
  __int64 v265; 
  __int64 v266; 
  __int128 v267; 
  __int128 v268; 
  const hknpShape *m_parentShape; 
  int v270; 
  __int64 v271; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v274; 
  hkQuaternionf v275; 
  vec4_t v276; 
  hkQuaternionf v277; 
  __m256i v278; 
  hkAabb aabbOut; 
  hkTransformf BvToWorld; 
  void *retaddr; 

  if ( numLeaves > 0 )
  {
    _R11 = &retaddr;
    v16 = this;
    __asm
    {
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovss  xmm11, cs:__real@3d000000
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-0A8h], xmm12
    }
    v249 = numLeaves;
    v19 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmovaps xmmword ptr [r11-0D8h], xmm15
    }
    v248 = nmp;
    v251 = leaves;
    v250 = this;
    v246 = 0i64;
    while ( 1 )
    {
      v20 = leaves[v19];
      m_simdTreeMask = v16->m_simdTreeMask;
      if ( !m_simdTreeMask || ((m_simdTreeMask->m_enableInstances.m_storage.m_words.m_data[(__int64)v20 >> 5] >> (v20 & 0x1F)) & 1) != 0 )
      {
        m_targetShape = v16->m_targetShape;
        v23 = (unsigned __int16)v20;
        m_data = (__int64)m_targetShape->m_instances.m_data;
        v242 = m_data;
        v25 = *(_WORD *)(m_data + 4i64 * (unsigned __int16)v20);
        if ( v25 < 0 )
        {
          CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v25 & 0x4000) != 0, m_targetShape->m_tileIdx, *(_WORD *)(m_data + 4i64 * (unsigned __int16)v20) & 0x3FFF);
          v27 = v16->m_simdTreeMask;
          m_collector = (__int64)v16->m_collector;
          extraRadius.m_real.m128_u64[0] = (unsigned __int64)CollisionTileModelShape;
          v244 = m_collector;
          if ( v27 )
            v245 = v27->m_instanceMasks.m_data[v20];
          else
            v245 = NULL;
          v29 = (__int64)v16->m_targetShape;
          _R13 = &v16->m_data;
          _RAX = v16->m_data.m_targetShapeFilterData;
          v243 = v29;
          v32 = *(unsigned __int8 *)(v29 + 27);
          __asm { vmovups xmm0, xmmword ptr [rax] }
          m_targetShapeInfo = v16->m_data.m_targetShapeInfo;
          __asm { vmovups [rsp+3C8h+var_370], xmm0 }
          v35 = v32 + HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath);
          v240 = v35;
          v36 = *(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath & hknpShapeKeyPath_usedBitsMaskTable[HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath)] | (((v20 + 1) << (32 - (v32 + HIDWORD(*(_QWORD *)&m_targetShapeInfo->m_shapeKeyPath)))) - 1);
          m_shapeTagCodec = _R13->m_query->m_shapeTagCodec;
          *(_QWORD *)&v247 = m_shapeTagCodec;
          if ( !m_shapeTagCodec )
            goto LABEL_15;
          decode = m_shapeTagCodec->decode;
          v39 = StaticModels_GetCollisionTileModelShape((*(_WORD *)(m_data + 4i64 * (unsigned __int16)v20) & 0x4000) != 0, *(_DWORD *)(v29 + 72), *(_WORD *)(m_data + 4i64 * (unsigned __int16)v20) & 0x3FFF);
          v40 = _R13->m_targetShapeInfo;
          v41 = v39;
          m_rootShape = v40->m_rootShape;
          m_body = v40->m_body;
          CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(v242 + 4 * v23) & 0x4000) != 0, *(_DWORD *)(v243 + 72), *(_WORD *)(v242 + 4 * v23) & 0x3FFF);
          v239 = v41;
          v29 = v243;
          LODWORD(v238) = v36;
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *))decode)(v247, CollisionTileModelShapeTag, 5i64, m_body, m_rootShape, v243, v238, v239, &v241);
          m_query = _R13->m_query;
          if ( !m_query->m_filter )
          {
            m_data = v242;
LABEL_14:
            v35 = v240;
            m_collector = v244;
LABEL_15:
            v52 = (__int64 *)extraRadius.m_real.m128_u64[0];
            if ( *(_BYTE *)(extraRadius.m_real.m128_u64[0] + 28) == 3 )
            {
              _RAX = _R13->m_query;
              v61 = *(unsigned __int16 *)(m_data + 4 * v23 + 2);
              v62 = *(_WORD *)(m_data + 4 * v23) & 0x3FFF;
              v63 = *(_DWORD *)(v29 + 72);
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups [rsp+3C8h+var_178], ymm0
                vmovups ymm1, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rsp+3C8h+aabbOut.m_min.m_quad], ymm1
                vmovups xmm0, xmmword ptr [rax+40h]
                vmovups [rsp+3C8h+var_138], xmm0
              }
              *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v63, v62, v61);
              __asm { vucomiss xmm0, xmm13 }
              if ( v66 )
                v67 = 0;
              else
                v67 = 1;
              v68 = *(unsigned __int16 *)(m_data + 4 * v23 + 2);
              v69 = *(_WORD *)(m_data + 4 * v23) & 0x3FFF;
              if ( v67 )
              {
                v70 = *(_DWORD *)(v29 + 72);
                *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v70, v69, v68);
                __asm
                {
                  vmovaps xmm6, xmm0
                  vshufps xmm6, xmm6, xmm6, 0
                }
                StaticModels_GetCollisionTileModelInstanceTransform(v70, *(_WORD *)(m_data + 4 * v23) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v23 + 2), &origin, &orientationAsQuat);
                __asm
                {
                  vmovups xmm1, xmmword ptr [rsp+3C8h+var_1D8]
                  vmovups ymm2, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                  vmovups xmmword ptr [rsp+3C8h+qi.m_vec.m_quad], xmm1
                  vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                  vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
                  vmovups ymmword ptr [rsp+3C8h+var_308], ymm2
                }
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v252, &qi);
                __asm
                {
                  vmovups xmm4, xmmword ptr [rsp+3C8h+var_308+20h]
                  vmovups xmm3, xmmword ptr [rsp+3C8h+var_308]
                  vmovss  xmm0, dword ptr [rsp+3C8h+origin]
                  vmulss  xmm8, xmm11, dword ptr [rsp+3C8h+origin+4]
                  vmulss  xmm9, xmm11, dword ptr [rsp+3C8h+origin+8]
                  vmulss  xmm10, xmm0, xmm11
                  vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
                  vrcpps  xmm2, xmm6
                  vmulps  xmm1, xmm2, xmm6
                  vsubps  xmm1, xmm0, xmm1
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_308+10h]
                  vunpcklps xmm5, xmm3, xmm0
                  vmulps  xmm6, xmm1, xmm2
                  vunpckhps xmm0, xmm3, xmm0
                  vblendps xmm2, xmm0, xmm4, 0Ch
                  vmovlhps xmm1, xmm5, xmm4
                  vmulps  xmm7, xmm6, xmm1
                  vmovhlps xmm0, xmm1, xmm5
                  vshufps xmm1, xmm0, xmm4, 0D4h ; 'Ô'
                  vpxor   xmm0, xmm0, xmm0
                  vmulps  xmm3, xmm1, xmm6
                  vmulps  xmm6, xmm2, xmm6
                  vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col1.m_quad], xmm3
                  vinsertps xmm10, xmm10, xmm8, 10h
                  vpinsrw xmm12, xmm0, eax, 1
                  vpshufd xmm5, xmm12, 40h ; '@'
                  vinsertps xmm10, xmm10, xmm9, 20h ; ' '
                  vinsertps xmm10, xmm10, xmm0, 30h ; '0'
                  vshufps xmm0, xmm10, xmm10, 55h ; 'U'
                  vmulps  xmm3, xmm0, xmm3
                  vshufps xmm1, xmm10, xmm10, 0
                  vmulps  xmm2, xmm1, xmm7
                  vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
                  vmulps  xmm1, xmm0, xmm6
                  vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
                  vaddps  xmm4, xmm3, xmm2
                  vaddps  xmm2, xmm4, xmm1
                  vxorps  xmm3, xmm2, xmm5
                  vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_translation.m_quad], xmm3
                  vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col0.m_quad], xmm7
                  vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col2.m_quad], xmm6
                  vmovups xmmword ptr [rsp+3C8h+var_308+30h], xmm10
                  vmovups xmmword ptr [rsp+3C8h+extraRadius.m_real], xmm0
                }
                hkAabbUtil::calcAabb(&BvToWorld, &_R13->m_transformedAabb, &extraRadius, (hkAabb *)&aabbOut.m_max);
                v29 = v243;
                __asm { vxorps  xmm7, xmm7, xmm7 }
              }
              else
              {
                StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v29 + 72), v69, v68, &v255, &v274);
                __asm
                {
                  vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_1B8]
                  vmovups ymmword ptr [rsp+3C8h+var_308], ymm1
                  vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                  vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
                  vmovups xmmword ptr [rsp+3C8h+var_1A8.m_vec.m_quad], xmm0
                }
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v252, &v275);
                __asm
                {
                  vmovups xmm13, xmmword ptr [rsp+3C8h+var_308+20h]
                  vmulss  xmm12, xmm11, dword ptr [rsp+3C8h+var_2A8+4]
                  vmovups xmm5, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
                  vmulss  xmm14, xmm11, dword ptr [rsp+3C8h+var_2A8+8]
                  vmovups xmm15, xmmword ptr [rsp+3C8h+var_308+10h]
                  vmovss  xmm0, dword ptr [rsp+3C8h+var_2A8]
                  vmulss  xmm1, xmm0, xmm11
                  vmovups xmm11, xmmword ptr [r13+10h]
                  vsubps  xmm0, xmm11, xmmword ptr [r13+0]
                  vmovups xmmword ptr [rsp+3C8h+extraRadius.m_real], xmm1
                  vmulps  xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_308]
                  vunpcklps xmm3, xmm0, xmm15
                  vunpckhps xmm0, xmm0, xmm15
                  vblendps xmm7, xmm0, xmm13, 0Ch
                  vshufps xmm4, xmm1, xmm1, 0
                  vshufps xmm6, xmm1, xmm1, 0AAh ; 'ª'
                  vshufps xmm2, xmm1, xmm1, 55h ; 'U'
                  vmovlhps xmm8, xmm3, xmm13
                  vmovhlps xmm0, xmm8, xmm3
                  vshufps xmm1, xmm0, xmm13, 0D4h ; 'Ô'
                  vmulps  xmm2, xmm1, xmm2
                  vandnps xmm3, xmm5, xmm2
                  vmulps  xmm0, xmm4, xmm8
                  vandnps xmm1, xmm5, xmm0
                  vaddps  xmm4, xmm3, xmm1
                  vpxor   xmm1, xmm1, xmm1
                  vmulps  xmm2, xmm6, xmm7
                  vandnps xmm0, xmm5, xmm2
                  vaddps  xmm6, xmm4, xmm0
                  vpinsrw xmm0, xmm1, eax, 1
                  vmovdqu [rsp+3C8h+var_338], xmm0
                  vpshufd xmm5, xmm0, 0
                  vaddps  xmm0, xmm11, xmmword ptr [r13+0]
                  vmulps  xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
                  vmovups xmm0, xmmword ptr [rsp+3C8h+extraRadius.m_real]
                  vmovss  xmm11, cs:__real@3d000000
                  vinsertps xmm0, xmm0, xmm12, 10h
                  vmovdqu xmm12, [rsp+3C8h+var_338]
                  vinsertps xmm0, xmm0, xmm14, 20h ; ' '
                  vxorps  xmm7, xmm7, xmm7
                  vinsertps xmm0, xmm0, xmm7, 30h ; '0'
                  vsubps  xmm3, xmm1, xmm0
                  vmovups xmmword ptr [rsp+3C8h+var_308+30h], xmm0
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_308]
                  vdpps   xmm0, xmm0, xmm3, 71h ; 'q'
                  vdpps   xmm1, xmm15, xmm3, 72h ; 'r'
                  vorps   xmm2, xmm1, xmm0
                  vdpps   xmm1, xmm13, xmm3, 74h ; 't'
                  vmovss  xmm13, cs:__real@3f800000
                  vorps   xmm4, xmm2, xmm1
                  vxorps  xmm1, xmm6, xmm5
                  vaddps  xmm2, xmm1, xmm4
                  vaddps  xmm0, xmm4, xmm6
                  vmovups xmmword ptr [rsp+3C8h+aabbOut.m_max.m_quad], xmm2
                  vmovups [rsp+3C8h+var_138], xmm0
                }
              }
              _RCX = (__m256i *)_R13->m_targetShapeInfo;
              v164 = *v52;
              m_queryShapeInfo = _R13->m_queryShapeInfo;
              v257.m256i_i64[3] = 0xFFFFFFFFi64;
              v257 = *_RCX;
              v258 = _RCX[1].m256i_i64[0];
              *(_QWORD *)v259 = 0i64;
              v259[8] = _RCX[1].m256i_i8[16];
              v260 = _RCX[1].m256i_i32[5];
              __asm
              {
                vmovups xmm0, xmmword ptr [rcx+40h]
                vmovups [rsp+3C8h+var_248], xmm0
                vmovups xmm1, xmmword ptr [rcx+50h]
                vmovups [rsp+3C8h+var_238], xmm1
                vmovss  xmm0, dword ptr [rcx+38h]
                vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
              }
              *(_QWORD *)v259 = v245;
              __asm { vmovss  [rsp+3C8h+var_250], xmm0 }
              v257.m256i_i32[7] = v35;
              v170 = &v267;
              _R15 = v248;
              __asm
              {
                vpshufd xmm0, xmm12, 0
                vxorps  xmm0, xmm1, xmm0
              }
              v257.m256i_i64[2] = (__int64)v52;
              v257.m256i_i32[6] = v36;
              if ( !v248 )
                v170 = NULL;
              m_queryContext = _R13->m_queryContext;
              __asm
              {
                vmovups [rsp+3C8h+var_208], xmm1
                vmovups [rsp+3C8h+var_218], xmm0
              }
              (*(void (__fastcall **)(__int64 *, hknpCollisionQueryContext *, __m256i *, const hknpShapeQueryInfo *, __int128 *, __m256i *, __int64, __int128 *))(v164 + 200))(v52, m_queryContext, &v278, m_queryShapeInfo, &v241, &v257, v244, v170);
              if ( _R15 )
              {
                *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(*(_DWORD *)(v29 + 72), *(_WORD *)(m_data + 4 * v23) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v23 + 2));
                __asm { vucomiss xmm0, xmm13 }
                if ( v66 )
                  v175 = 0;
                else
                  v175 = 1;
                StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v29 + 72), *(_WORD *)(m_data + 4 * v23) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v23 + 2), &v256, &v276);
                __asm
                {
                  vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_198]
                  vmovups ymmword ptr [rsp+3C8h+var_308], ymm1
                  vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                  vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
                  vmovups xmmword ptr [rsp+3C8h+var_188.m_vec.m_quad], xmm0
                }
                hkRotationImpl<float>::set((hkRotationImpl<float> *)v252, &v277);
                __asm
                {
                  vmulss  xmm1, xmm11, dword ptr [rsp+3C8h+var_298]
                  vmulss  xmm0, xmm11, dword ptr [rsp+3C8h+var_298+4]
                  vmulss  xmm2, xmm11, dword ptr [rsp+3C8h+var_298+8]
                }
                v182 = *(unsigned __int16 *)(m_data + 4 * v23 + 2);
                v183 = *(_WORD *)(m_data + 4 * v23) & 0x3FFF;
                v184 = *(_DWORD *)(v29 + 72);
                __asm
                {
                  vmovss  dword ptr [rsp+3C8h+var_308+30h], xmm1
                  vmovss  dword ptr [rsp+3C8h+var_308+34h], xmm0
                  vmovss  dword ptr [rsp+3C8h+var_308+38h], xmm2
                  vmovss  dword ptr [rsp+3C8h+var_308+3Ch], xmm7
                }
                *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v184, v183, v182);
                __asm
                {
                  vmovups xmm1, xmmword ptr [rsp+3C8h+aabbOut.m_max.m_quad]
                  vmovups xmm2, [rsp+3C8h+var_208]
                  vsubps  xmm3, xmm1, [rsp+3C8h+var_218]
                  vsubps  xmm1, xmm2, [rsp+3C8h+var_138]
                  vmovups xmm8, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
                  vshufps xmm0, xmm0, xmm0, 0
                }
                if ( v175 )
                {
                  __asm
                  {
                    vandnps xmm0, xmm8, xmm0
                    vmulps  xmm3, xmm0, xmm3
                    vmulps  xmm1, xmm0, xmm1
                  }
                }
                __asm
                {
                  vmovups xmm5, xmmword ptr [rsp+3C8h+var_308+20h]
                  vpminsd xmm3, xmm3, xmm1
                  vpshufd xmm1, xmm3, 55h ; 'U'
                  vpshufd xmm0, xmm3, 0
                  vpminsd xmm2, xmm0, xmm1
                  vmovups xmm0, xmmword ptr [rsp+3C8h+var_308+10h]
                  vpshufd xmm1, xmm3, 0AAh ; 'ª'
                  vmovups xmm3, xmmword ptr [rsp+3C8h+var_308]
                  vpminsd xmm7, xmm1, xmm2
                  vunpcklps xmm1, xmm3, xmm0
                  vmovlhps xmm2, xmm1, xmm5
                  vunpckhps xmm6, xmm3, xmm0
                  vmovhlps xmm0, xmm2, xmm1
                  vshufps xmm1, xmm0, xmm5, 0D4h ; 'Ô'
                  vandnps xmm3, xmm8, xmm1
                  vandnps xmm2, xmm8, xmm2
                  vaddps  xmm4, xmm3, xmm2
                  vblendps xmm0, xmm6, xmm5, 0Ch
                  vandnps xmm1, xmm8, xmm0
                  vaddps  xmm5, xmm1, xmm4
                  vpshufd xmm2, xmm5, 55h ; 'U'
                  vpshufd xmm0, xmm5, 0
                  vpmaxsd xmm3, xmm0, xmm2
                  vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
                  vpshufd xmm1, xmm5, 0AAh ; 'ª'
                  vpmaxsd xmm4, xmm1, xmm3
                  vrcpps  xmm2, xmm4
                  vmulps  xmm1, xmm2, xmm4
                  vsubps  xmm1, xmm0, xmm1
                  vmovups xmm0, xmmword ptr [r13+0]
                  vmulps  xmm2, xmm1, xmm2
                  vmulps  xmm3, xmm2, xmm7
                  vaddps  xmm1, xmm3, xmmword ptr [r13+10h]
                  vsubps  xmm0, xmm0, xmm3
                  vmaxps  xmm0, xmm0, xmmword ptr [r15]
                  vmovups xmmword ptr [r15], xmm0
                  vminps  xmm1, xmm1, xmmword ptr [r15+10h]
                  vmovups xmmword ptr [r15+10h], xmm1
                }
              }
            }
            else
            {
              v53 = _R13->m_query;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vxorps  xmm7, xmm7, xmm7
              }
              v55 = _R13->m_targetShapeInfo->m_body;
              v56 = _R13->m_queryShapeInfo;
              __asm
              {
                vmovss  dword ptr [rsp+3C8h+var_268], xmm7
                vmovups [rsp+3C8h+var_288], ymm0
              }
              *(_QWORD *)&v259[4] = -1i64;
              v57 = v56->m_body;
              LODWORD(v264) = -1;
              v266 = 5i64;
              if ( v57 )
                m_serialAndIndex = v57->m_id.m_serialAndIndex;
              else
                m_serialAndIndex = 0xFFFFFF;
              *(_DWORD *)v259 = m_serialAndIndex;
              LOWORD(v261) = v53->m_filterData.m_materialId.m_value;
              m_collisionFilterInfo = v53->m_filterData.m_collisionFilterInfo;
              *(_QWORD *)&v263 = v53->m_filterData.m_userData;
              if ( v55 )
                v59 = v55->m_id.m_serialAndIndex;
              else
                v59 = 0xFFFFFF;
              *((_QWORD *)&v263 + 1) = __PAIR64__(v36, v59);
              WORD4(v264) = v241;
              HIDWORD(v264) = DWORD1(v241);
              v265 = *((_QWORD *)&v241 + 1);
              (*(void (__fastcall **)(__int64, __m256i *))(*(_QWORD *)m_collector + 32i64))(m_collector, &v257);
            }
            goto LABEL_38;
          }
          m_data = v242;
          DWORD1(v267) = 0;
          LOWORD(v267) = -1;
          *((_QWORD *)&v267 + 1) = 0i64;
          LOWORD(v267) = m_query->m_filterData.m_materialId.m_value;
          DWORD1(v267) = m_query->m_filterData.m_collisionFilterInfo;
          m_userData = m_query->m_filterData.m_userData;
          v47 = _R13->m_queryShapeInfo;
          *((_QWORD *)&v267 + 1) = m_userData;
          v268 = *(_OWORD *)&v47->m_body;
          m_parentShape = v47->m_parentShape;
          LODWORD(m_userData) = v47->m_shapeKeyPath.m_key.m_value;
          v48 = _R13->m_targetShapeInfo;
          v270 = m_userData;
          *(_WORD *)v252 = v241;
          *(_DWORD *)&v252[4] = DWORD1(v241);
          *(_QWORD *)&v252[8] = *((_QWORD *)&v241 + 1);
          v271 = 0i64;
          v49 = *(_DWORD *)(v29 + 72);
          *(_OWORD *)&v252[16] = *(_OWORD *)&v48->m_body;
          v50 = *(_WORD *)(v242 + 4 * v23);
          *(_QWORD *)&v252[32] = v29;
          *(_DWORD *)&v252[40] = v36;
          *(_QWORD *)&v252[48] = StaticModels_GetCollisionTileModelShape((v50 & 0x4000) != 0, v49, v50 & 0x3FFF);
          LOBYTE(v51) = 1;
          if ( _R13->m_query->m_filter->isCollisionEnabled((hknpCollisionFilter *)_R13->m_query->m_filter, QUERY_AABB, v51, (const hknpCollisionFilter::FilterInput *)&v267, (const hknpCollisionFilter::FilterInput *)v252) )
            goto LABEL_14;
        }
      }
LABEL_38:
      v16 = v250;
      v19 = v246 + 1;
      leaves = v251;
      v246 = v19;
      if ( v19 >= v249 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+3C8h+var_D8]
          vmovaps xmm14, [rsp+3C8h+var_C8]
          vmovaps xmm13, [rsp+3C8h+var_B8]
          vmovaps xmm12, [rsp+3C8h+var_A8]
          vmovaps xmm11, [rsp+3C8h+var_98]
          vmovaps xmm10, [rsp+3C8h+var_88]
          vmovaps xmm9, [rsp+3C8h+var_78]
          vmovaps xmm8, [rsp+3C8h+var_68]
          vmovaps xmm7, [rsp+3C8h+var_58]
          vmovaps xmm6, [rsp+3C8h+var_48]
        }
        return;
      }
    }
  }
}

/*
==============
StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves
==============
*/
void StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::addLeaves(StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector> *this, const unsigned int *leaves, int numLeaves, hkAabb *nmp)
{
  __int64 v19; 
  unsigned int v20; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v22; 
  __int64 m_data; 
  __int16 v24; 
  const void *CollisionTileModelShape; 
  __int64 v27; 
  __int64 v28; 
  hknpCollisionQueryCollector *m_collector; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int v32; 
  int v33; 
  unsigned __int64 m_shapeTagCodec; 
  void (__fastcall *v35)(unsigned __int64, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *); 
  const void *v36; 
  const hknpShapeQueryInfo *v37; 
  const void *v38; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpAabbQuery *m_query; 
  unsigned int v43; 
  unsigned __int64 m_userData; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  const hknpShapeQueryInfo *v46; 
  __int16 v47; 
  _BOOL8 v48; 
  const hknpAabbQuery *v49; 
  const hknpBody *v51; 
  const hknpShapeQueryInfo *v52; 
  const hknpBody *v53; 
  int m_serialAndIndex; 
  int v55; 
  unsigned int v57; 
  int v58; 
  unsigned int v59; 
  char v62; 
  char v63; 
  unsigned int v64; 
  int v65; 
  unsigned int v66; 
  __int64 v160; 
  const hknpShapeQueryInfo *v161; 
  __int128 *v168; 
  hknpCollisionQueryContext *m_queryContext; 
  char v171; 
  unsigned int v178; 
  int v179; 
  unsigned int v180; 
  __int64 v234; 
  const void *v235; 
  const unsigned int *v237; 
  __int128 v238; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v240; 
  __int64 v241; 
  __int64 v242; 
  hkAabb *v243; 
  __int64 v244; 
  __int128 v245; 
  __int64 v246; 
  char v247[64]; 
  hkSimdFloat32 extraRadius; 
  vec3_t origin; 
  vec3_t v250; 
  vec3_t v251; 
  __m256i v252; 
  __int64 v253; 
  _BYTE v254[12]; 
  int v255; 
  int v256; 
  unsigned int m_collisionFilterInfo; 
  __int128 v258; 
  __int128 v259; 
  __int64 v260; 
  __int64 v261; 
  __int128 v262; 
  __int128 v263; 
  const hknpShape *m_parentShape; 
  int v265; 
  __int64 v266; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v269; 
  hkQuaternionf v270; 
  vec4_t v271; 
  hkQuaternionf v272; 
  __m256i v273; 
  hkAabb aabbOut; 
  hkTransformf BvToWorld; 
  void *retaddr; 

  if ( numLeaves > 0 )
  {
    _R11 = &retaddr;
    _R13 = this;
    __asm
    {
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovss  xmm11, cs:__real@3d000000
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-0A8h], xmm12
    }
    v246 = numLeaves;
    v19 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmovaps xmmword ptr [r11-0D8h], xmm15
    }
    v243 = nmp;
    v237 = leaves;
    v244 = 0i64;
    while ( 1 )
    {
      v20 = leaves[v19];
      m_targetShape = _R13->m_targetShape;
      v22 = (unsigned __int16)v20;
      m_data = (__int64)m_targetShape->m_instances.m_data;
      v240 = m_data;
      v24 = *(_WORD *)(m_data + 4i64 * (unsigned __int16)v20);
      if ( v24 < 0 )
        break;
LABEL_34:
      v19 = v244 + 1;
      v244 = v19;
      if ( v19 >= v246 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+3C8h+var_D8]
          vmovaps xmm14, [rsp+3C8h+var_C8]
          vmovaps xmm13, [rsp+3C8h+var_B8]
          vmovaps xmm12, [rsp+3C8h+var_A8]
          vmovaps xmm11, [rsp+3C8h+var_98]
          vmovaps xmm10, [rsp+3C8h+var_88]
          vmovaps xmm9, [rsp+3C8h+var_78]
          vmovaps xmm8, [rsp+3C8h+var_68]
          vmovaps xmm7, [rsp+3C8h+var_58]
          vmovaps xmm6, [rsp+3C8h+var_48]
        }
        return;
      }
    }
    CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v24 & 0x4000) != 0, m_targetShape->m_tileIdx, *(_WORD *)(m_data + 4i64 * (unsigned __int16)v20) & 0x3FFF);
    _RCX = _R13->m_data.m_targetShapeFilterData;
    v27 = (__int64)CollisionTileModelShape;
    v28 = (__int64)_R13->m_targetShape;
    m_collector = _R13->m_collector;
    v242 = (__int64)CollisionTileModelShape;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    m_targetShapeInfo = _R13->m_data.m_targetShapeInfo;
    v32 = *(unsigned __int8 *)(v28 + 27);
    __asm { vmovups [rsp+3C8h+var_368], xmm0 }
    *(_QWORD *)&v245 = m_collector;
    m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
    v241 = v28;
    v33 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | (((v20 + 1) << (32 - (v32 + LOBYTE(m_shapeKeyPath.m_size)))) - 1);
    m_shapeKeyPath.m_key.m_value = v32 + m_shapeKeyPath.m_size;
    m_shapeTagCodec = (unsigned __int64)_R13->m_data.m_query->m_shapeTagCodec;
    extraRadius.m_real.m128_u64[0] = m_shapeTagCodec;
    if ( m_shapeTagCodec )
    {
      v35 = *(void (__fastcall **)(unsigned __int64, _QWORD, __int64, const hknpBody *, const hknpShape *, __int64, __int64, const void *, __int128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
      v36 = StaticModels_GetCollisionTileModelShape((*(_WORD *)(m_data + 4 * v22) & 0x4000) != 0, *(_DWORD *)(v28 + 72), *(_WORD *)(m_data + 4 * v22) & 0x3FFF);
      v37 = _R13->m_data.m_targetShapeInfo;
      v38 = v36;
      m_rootShape = v37->m_rootShape;
      m_body = v37->m_body;
      CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(v240 + 4 * v22) & 0x4000) != 0, *(_DWORD *)(v241 + 72), *(_WORD *)(v240 + 4 * v22) & 0x3FFF);
      v235 = v38;
      v28 = v241;
      LODWORD(v234) = v33;
      v35(extraRadius.m_real.m128_u64[0], CollisionTileModelShapeTag, 5i64, m_body, m_rootShape, v241, v234, v235, &v238);
      m_query = _R13->m_data.m_query;
      if ( m_query->m_filter )
      {
        m_data = v240;
        v43 = *(_DWORD *)(v28 + 72);
        LOWORD(v262) = -1;
        DWORD1(v262) = 0;
        *((_QWORD *)&v262 + 1) = 0i64;
        LOWORD(v262) = m_query->m_filterData.m_materialId.m_value;
        DWORD1(v262) = m_query->m_filterData.m_collisionFilterInfo;
        m_userData = m_query->m_filterData.m_userData;
        m_queryShapeInfo = _R13->m_data.m_queryShapeInfo;
        *((_QWORD *)&v262 + 1) = m_userData;
        v263 = *(_OWORD *)&m_queryShapeInfo->m_body;
        m_parentShape = m_queryShapeInfo->m_parentShape;
        LODWORD(m_userData) = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
        v46 = _R13->m_data.m_targetShapeInfo;
        v265 = m_userData;
        *(_WORD *)v247 = v238;
        *(_DWORD *)&v247[4] = DWORD1(v238);
        *(_QWORD *)&v247[8] = *((_QWORD *)&v238 + 1);
        v266 = 0i64;
        *(_OWORD *)&v247[16] = *(_OWORD *)&v46->m_body;
        v47 = *(_WORD *)(v240 + 4 * v22);
        *(_QWORD *)&v247[32] = v28;
        *(_DWORD *)&v247[40] = v33;
        *(_QWORD *)&v247[48] = StaticModels_GetCollisionTileModelShape((v47 & 0x4000) != 0, v43, v47 & 0x3FFF);
        LOBYTE(v48) = 1;
        if ( !_R13->m_data.m_query->m_filter->isCollisionEnabled((hknpCollisionFilter *)_R13->m_data.m_query->m_filter, QUERY_AABB, v48, (const hknpCollisionFilter::FilterInput *)&v262, (const hknpCollisionFilter::FilterInput *)v247) )
        {
LABEL_33:
          leaves = v237;
          _R13 = this;
          goto LABEL_34;
        }
      }
      else
      {
        m_data = v240;
      }
      m_collector = (hknpCollisionQueryCollector *)v245;
      v27 = v242;
    }
    if ( *(_BYTE *)(v27 + 28) == 3 )
    {
      _RAX = _R13->m_data.m_query;
      v57 = *(unsigned __int16 *)(m_data + 4 * v22 + 2);
      v58 = *(_WORD *)(m_data + 4 * v22) & 0x3FFF;
      v59 = *(_DWORD *)(v28 + 72);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+3C8h+var_178], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+3C8h+aabbOut.m_min.m_quad], ymm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups [rsp+3C8h+var_138], xmm0
      }
      *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v59, v58, v57);
      __asm { vucomiss xmm0, xmm13 }
      if ( v62 )
        v63 = 0;
      else
        v63 = 1;
      v64 = *(unsigned __int16 *)(m_data + 4 * v22 + 2);
      v65 = *(_WORD *)(m_data + 4 * v22) & 0x3FFF;
      if ( v63 )
      {
        v66 = *(_DWORD *)(v28 + 72);
        *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v66, v65, v64);
        __asm
        {
          vmovaps xmm6, xmm0
          vshufps xmm6, xmm6, xmm6, 0
        }
        StaticModels_GetCollisionTileModelInstanceTransform(v66, *(_WORD *)(m_data + 4 * v22) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v22 + 2), &origin, &orientationAsQuat);
        __asm
        {
          vmovups xmm1, xmmword ptr [rsp+3C8h+var_1D8]
          vmovups ymm2, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups xmmword ptr [rsp+3C8h+qi.m_vec.m_quad], xmm1
          vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
          vmovups ymmword ptr [rsp+3C8h+var_308], ymm2
        }
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v247, &qi);
        __asm
        {
          vmovups xmm4, xmmword ptr [rsp+3C8h+var_308+20h]
          vmovups xmm3, xmmword ptr [rsp+3C8h+var_308]
          vmovss  xmm0, dword ptr [rsp+3C8h+origin]
          vmulss  xmm8, xmm11, dword ptr [rsp+3C8h+origin+4]
          vmulss  xmm9, xmm11, dword ptr [rsp+3C8h+origin+8]
          vmulss  xmm10, xmm0, xmm11
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vrcpps  xmm2, xmm6
          vmulps  xmm1, xmm2, xmm6
          vsubps  xmm1, xmm0, xmm1
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_308+10h]
          vunpcklps xmm5, xmm3, xmm0
          vmulps  xmm6, xmm1, xmm2
          vunpckhps xmm0, xmm3, xmm0
          vblendps xmm2, xmm0, xmm4, 0Ch
          vmovlhps xmm1, xmm5, xmm4
          vmulps  xmm7, xmm6, xmm1
          vmovhlps xmm0, xmm1, xmm5
          vshufps xmm1, xmm0, xmm4, 0D4h ; 'Ô'
          vpxor   xmm0, xmm0, xmm0
          vmulps  xmm3, xmm1, xmm6
          vmulps  xmm6, xmm2, xmm6
          vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col1.m_quad], xmm3
          vinsertps xmm10, xmm10, xmm8, 10h
          vpinsrw xmm12, xmm0, eax, 1
          vpshufd xmm5, xmm12, 40h ; '@'
          vinsertps xmm10, xmm10, xmm9, 20h ; ' '
          vinsertps xmm10, xmm10, xmm0, 30h ; '0'
          vshufps xmm0, xmm10, xmm10, 55h ; 'U'
          vmulps  xmm3, xmm0, xmm3
          vshufps xmm1, xmm10, xmm10, 0
          vmulps  xmm2, xmm1, xmm7
          vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
          vmulps  xmm1, xmm0, xmm6
          vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
          vaddps  xmm4, xmm3, xmm2
          vaddps  xmm2, xmm4, xmm1
          vxorps  xmm3, xmm2, xmm5
          vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_translation.m_quad], xmm3
          vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col0.m_quad], xmm7
          vmovups xmmword ptr [rsp+3C8h+BvToWorld.m_rotation.baseclass_0.m_col2.m_quad], xmm6
          vmovups xmmword ptr [rsp+3C8h+var_308+30h], xmm10
          vmovups xmmword ptr [rsp+3C8h+extraRadius.m_real], xmm0
        }
        hkAabbUtil::calcAabb(&BvToWorld, &_R13->m_data.m_transformedAabb, &extraRadius, (hkAabb *)&aabbOut.m_max);
        v28 = v241;
        __asm { vxorps  xmm7, xmm7, xmm7 }
      }
      else
      {
        StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v28 + 72), v65, v64, &v250, &v269);
        __asm
        {
          vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_1B8]
          vmovups ymmword ptr [rsp+3C8h+var_308], ymm1
          vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
          vmovups xmmword ptr [rsp+3C8h+var_1A8.m_vec.m_quad], xmm0
        }
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v247, &v270);
        __asm
        {
          vmovups xmm13, xmmword ptr [rsp+3C8h+var_308+20h]
          vmulss  xmm12, xmm11, dword ptr [rsp+3C8h+var_2A8+4]
          vmovups xmm5, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
          vmulss  xmm14, xmm11, dword ptr [rsp+3C8h+var_2A8+8]
          vmovups xmm15, xmmword ptr [rsp+3C8h+var_308+10h]
          vmovss  xmm0, dword ptr [rsp+3C8h+var_2A8]
          vmulss  xmm1, xmm0, xmm11
          vmovups xmm11, xmmword ptr [r13+40h]
          vsubps  xmm0, xmm11, xmmword ptr [r13+30h]
          vmovups xmmword ptr [rsp+3C8h+extraRadius.m_real], xmm1
          vmulps  xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_308]
          vunpcklps xmm3, xmm0, xmm15
          vunpckhps xmm0, xmm0, xmm15
          vblendps xmm7, xmm0, xmm13, 0Ch
          vshufps xmm4, xmm1, xmm1, 0
          vshufps xmm6, xmm1, xmm1, 0AAh ; 'ª'
          vshufps xmm2, xmm1, xmm1, 55h ; 'U'
          vmovlhps xmm8, xmm3, xmm13
          vmovhlps xmm0, xmm8, xmm3
          vshufps xmm1, xmm0, xmm13, 0D4h ; 'Ô'
          vmulps  xmm2, xmm1, xmm2
          vandnps xmm3, xmm5, xmm2
          vmulps  xmm0, xmm4, xmm8
          vandnps xmm1, xmm5, xmm0
          vaddps  xmm4, xmm3, xmm1
          vpxor   xmm1, xmm1, xmm1
          vmulps  xmm2, xmm6, xmm7
          vandnps xmm0, xmm5, xmm2
          vaddps  xmm6, xmm4, xmm0
          vpinsrw xmm0, xmm1, eax, 1
          vmovdqu [rsp+3C8h+var_328], xmm0
          vpshufd xmm5, xmm0, 0
          vaddps  xmm0, xmm11, xmmword ptr [r13+30h]
          vmulps  xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vmovups xmm0, xmmword ptr [rsp+3C8h+extraRadius.m_real]
          vmovss  xmm11, cs:__real@3d000000
          vinsertps xmm0, xmm0, xmm12, 10h
          vmovdqu xmm12, [rsp+3C8h+var_328]
          vinsertps xmm0, xmm0, xmm14, 20h ; ' '
          vxorps  xmm7, xmm7, xmm7
          vinsertps xmm0, xmm0, xmm7, 30h ; '0'
          vsubps  xmm3, xmm1, xmm0
          vmovups xmmword ptr [rsp+3C8h+var_308+30h], xmm0
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_308]
          vdpps   xmm0, xmm0, xmm3, 71h ; 'q'
          vdpps   xmm1, xmm15, xmm3, 72h ; 'r'
          vorps   xmm2, xmm1, xmm0
          vdpps   xmm1, xmm13, xmm3, 74h ; 't'
          vmovss  xmm13, cs:__real@3f800000
          vorps   xmm4, xmm2, xmm1
          vxorps  xmm1, xmm6, xmm5
          vaddps  xmm2, xmm1, xmm4
          vaddps  xmm0, xmm4, xmm6
          vmovups xmmword ptr [rsp+3C8h+aabbOut.m_max.m_quad], xmm2
          vmovups [rsp+3C8h+var_138], xmm0
        }
      }
      _RCX = (__m256i *)_R13->m_data.m_targetShapeInfo;
      v160 = *(_QWORD *)v27;
      v161 = _R13->m_data.m_queryShapeInfo;
      v252.m256i_i64[3] = 0xFFFFFFFFi64;
      v252 = *_RCX;
      v253 = _RCX[1].m256i_i64[0];
      *(_QWORD *)v254 = 0i64;
      v254[8] = _RCX[1].m256i_i8[16];
      v255 = _RCX[1].m256i_i32[5];
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+40h]
        vmovups [rsp+3C8h+var_248], xmm0
        vmovups xmm1, xmmword ptr [rcx+50h]
        vmovups [rsp+3C8h+var_238], xmm1
        vmovss  xmm0, dword ptr [rcx+38h]
        vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
      }
      v252.m256i_i32[7] = m_shapeKeyPath.m_key.m_value;
      __asm
      {
        vmovss  [rsp+3C8h+var_250], xmm0
        vpshufd xmm0, xmm12, 0
        vxorps  xmm0, xmm1, xmm0
      }
      v168 = &v262;
      v252.m256i_i64[2] = v27;
      if ( !v243 )
        v168 = NULL;
      v252.m256i_i32[6] = v33;
      m_queryContext = _R13->m_data.m_queryContext;
      __asm
      {
        vmovups [rsp+3C8h+var_208], xmm1
        vmovups [rsp+3C8h+var_218], xmm0
      }
      (*(void (__fastcall **)(__int64, hknpCollisionQueryContext *, __m256i *, const hknpShapeQueryInfo *, __int128 *, __m256i *, hknpCollisionQueryCollector *, __int128 *))(v160 + 200))(v27, m_queryContext, &v273, v161, &v238, &v252, m_collector, v168);
      _R14 = v243;
      if ( v243 )
      {
        *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(*(_DWORD *)(v28 + 72), *(_WORD *)(m_data + 4 * v22) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v22 + 2));
        __asm { vucomiss xmm0, xmm13 }
        if ( v62 )
          v171 = 0;
        else
          v171 = 1;
        StaticModels_GetCollisionTileModelInstanceTransform(*(_DWORD *)(v28 + 72), *(_WORD *)(m_data + 4 * v22) & 0x3FFF, *(unsigned __int16 *)(m_data + 4 * v22 + 2), &v251, &v271);
        __asm
        {
          vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_198]
          vmovups ymmword ptr [rsp+3C8h+var_308], ymm1
          vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rsp+3C8h+var_308+20h], ymm1
          vmovups xmmword ptr [rsp+3C8h+var_188.m_vec.m_quad], xmm0
        }
        hkRotationImpl<float>::set((hkRotationImpl<float> *)v247, &v272);
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rsp+3C8h+var_298]
          vmulss  xmm0, xmm11, dword ptr [rsp+3C8h+var_298+4]
          vmulss  xmm2, xmm11, dword ptr [rsp+3C8h+var_298+8]
        }
        v178 = *(unsigned __int16 *)(m_data + 4 * v22 + 2);
        v179 = *(_WORD *)(m_data + 4 * v22) & 0x3FFF;
        v180 = *(_DWORD *)(v28 + 72);
        __asm
        {
          vmovss  dword ptr [rsp+3C8h+var_308+30h], xmm1
          vmovss  dword ptr [rsp+3C8h+var_308+34h], xmm0
          vmovss  dword ptr [rsp+3C8h+var_308+38h], xmm2
          vmovss  dword ptr [rsp+3C8h+var_308+3Ch], xmm7
        }
        *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v180, v179, v178);
        __asm
        {
          vmovups xmm1, xmmword ptr [rsp+3C8h+aabbOut.m_max.m_quad]
          vmovups xmm2, [rsp+3C8h+var_208]
          vsubps  xmm3, xmm1, [rsp+3C8h+var_218]
          vsubps  xmm1, xmm2, [rsp+3C8h+var_138]
          vmovups xmm8, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
          vshufps xmm0, xmm0, xmm0, 0
        }
        if ( v171 )
        {
          __asm
          {
            vandnps xmm0, xmm8, xmm0
            vmulps  xmm3, xmm0, xmm3
            vmulps  xmm1, xmm0, xmm1
          }
        }
        __asm
        {
          vmovups xmm5, xmmword ptr [rsp+3C8h+var_308+20h]
          vpminsd xmm3, xmm3, xmm1
          vpshufd xmm1, xmm3, 55h ; 'U'
          vpshufd xmm0, xmm3, 0
          vpminsd xmm2, xmm0, xmm1
          vmovups xmm0, xmmword ptr [rsp+3C8h+var_308+10h]
          vpshufd xmm1, xmm3, 0AAh ; 'ª'
          vmovups xmm3, xmmword ptr [rsp+3C8h+var_308]
          vpminsd xmm7, xmm1, xmm2
          vunpcklps xmm1, xmm3, xmm0
          vmovlhps xmm2, xmm1, xmm5
          vunpckhps xmm6, xmm3, xmm0
          vmovhlps xmm0, xmm2, xmm1
          vshufps xmm1, xmm0, xmm5, 0D4h ; 'Ô'
          vandnps xmm3, xmm8, xmm1
          vandnps xmm2, xmm8, xmm2
          vaddps  xmm4, xmm3, xmm2
          vblendps xmm0, xmm6, xmm5, 0Ch
          vandnps xmm1, xmm8, xmm0
          vaddps  xmm5, xmm1, xmm4
          vpshufd xmm2, xmm5, 55h ; 'U'
          vpshufd xmm0, xmm5, 0
          vpmaxsd xmm3, xmm0, xmm2
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vpshufd xmm1, xmm5, 0AAh ; 'ª'
          vpmaxsd xmm4, xmm1, xmm3
          vrcpps  xmm2, xmm4
          vmulps  xmm1, xmm2, xmm4
          vsubps  xmm1, xmm0, xmm1
          vmovups xmm0, xmmword ptr [r13+30h]
          vmulps  xmm2, xmm1, xmm2
          vmulps  xmm3, xmm2, xmm7
          vaddps  xmm1, xmm3, xmmword ptr [r13+40h]
          vsubps  xmm0, xmm0, xmm3
          vmaxps  xmm0, xmm0, xmmword ptr [r14]
          vmovups xmmword ptr [r14], xmm0
          vminps  xmm1, xmm1, xmmword ptr [r14+10h]
          vmovups xmmword ptr [r14+10h], xmm1
        }
      }
    }
    else
    {
      v49 = _R13->m_data.m_query;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm7, xmm7, xmm7
      }
      v51 = _R13->m_data.m_targetShapeInfo->m_body;
      v52 = _R13->m_data.m_queryShapeInfo;
      __asm
      {
        vmovss  dword ptr [rsp+3C8h+var_268], xmm7
        vmovups [rsp+3C8h+var_288], ymm0
      }
      *(_QWORD *)&v254[4] = -1i64;
      v53 = v52->m_body;
      LODWORD(v259) = -1;
      v261 = 5i64;
      if ( v53 )
        m_serialAndIndex = v53->m_id.m_serialAndIndex;
      else
        m_serialAndIndex = 0xFFFFFF;
      *(_DWORD *)v254 = m_serialAndIndex;
      LOWORD(v256) = v49->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = v49->m_filterData.m_collisionFilterInfo;
      *(_QWORD *)&v258 = v49->m_filterData.m_userData;
      if ( v51 )
        v55 = v51->m_id.m_serialAndIndex;
      else
        v55 = 0xFFFFFF;
      *((_QWORD *)&v258 + 1) = __PAIR64__(v33, v55);
      WORD4(v259) = v238;
      HIDWORD(v259) = DWORD1(v238);
      v260 = *((_QWORD *)&v238 + 1);
      m_collector->addHit(m_collector, (const hknpCollisionResult *)&v252);
    }
    goto LABEL_33;
  }
}

/*
==============
StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale
==============
*/
void StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(const hknpShapeQueryInfo *queryShapeInfo, const hknpShapeQueryInfo *targetShapeInfo, hkTransformf *transformOut, hkVector4f *targetScaleInvOut)
{
  hkTransformf t; 
  hkTransformf a; 
  hkVector4f v42; 

  _RAX = queryShapeInfo->m_shapeToWorld;
  _RSI = targetShapeInfo;
  _RBX = queryShapeInfo;
  _RDI = targetScaleInvOut;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+57h+a.m_col0.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbp+57h+a.m_col1.m_quad], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+57h+a.m_col2.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups [rbp+57h+var_50], xmm1
  }
  hkVector4f::setRotatedDir(&v42, &a.m_rotation, &queryShapeInfo->m_scalingInternals.m_offset);
  _RAX = _RSI->m_shapeToWorld;
  __asm
  {
    vmovups xmm4, xmmword ptr [rbx+40h]
    vmovups xmm0, [rbp+57h+var_50]
    vaddps  xmm1, xmm0, xmmword ptr [rbp+57h+var_40.m_quad]
    vmovups [rbp+57h+var_50], xmm1
    vshufps xmm2, xmm4, xmm4, 0
    vmulps  xmm1, xmm2, xmmword ptr [rbp+57h+a.m_col0.m_quad]
    vmovups xmmword ptr [rbp+57h+a.m_col0.m_quad], xmm1
    vshufps xmm2, xmm4, xmm4, 0AAh ; 'ª'
    vshufps xmm3, xmm4, xmm4, 55h ; 'U'
    vmulps  xmm1, xmm3, xmmword ptr [rbp+57h+a.m_col1.m_quad]
    vmovups xmmword ptr [rbp+57h+a.m_col1.m_quad], xmm1
    vmulps  xmm1, xmm2, xmmword ptr [rbp+57h+a.m_col2.m_quad]
    vrcpps  xmm2, xmmword ptr [rsi+40h]
    vmovups xmmword ptr [rbp+57h+a.m_col2.m_quad], xmm1
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col0.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col1.m_quad], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col2.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vmovups xmmword ptr [rbp+57h+t.m_translation.m_quad], xmm1
    vmulps  xmm1, xmm2, xmmword ptr [rsi+40h]
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rdi], xmm2
  }
  hkTransformf::setInverse(&t, &t);
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+57h+t.m_translation.m_quad]
    vmovups xmm3, xmmword ptr [rdi]
    vsubps  xmm2, xmm1, xmmword ptr [rsi+50h]
    vinsertf128 ymm3, ymm3, xmm3, 1
    vmulps  ymm0, ymm3, ymmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col0.m_quad]
    vmovups ymmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col0.m_quad], ymm0
    vmulps  xmm0, xmm3, xmmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col2.m_quad]
    vmovups xmmword ptr [rbp+57h+t.m_rotation.baseclass_0.m_col2.m_quad], xmm0
    vmulps  xmm0, xmm2, xmm3
    vmovups xmmword ptr [rbp+57h+t.m_translation.m_quad], xmm0
  }
  hkTransformf::setMul(transformOut, &t, &a);
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v12; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v19; 
  const hknpShapeKeyMask *v20; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v22; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v24; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpClosestPointsQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v31; 
  bool v32; 
  __int64 v33; 
  unsigned int m_instanceIdx; 
  int v36; 
  const StaticModels_HavokShape *v38; 
  unsigned int m_tileIdx; 
  unsigned int v53; 
  int v54; 
  signed int m_mode; 
  unsigned __int16 v57; 
  const hknpShape *v67; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const hknpShapeQueryInfo *v106; 
  hknpCollisionQueryContext *m_queryContext; 
  const hknpClosestPointsQuery *v108; 
  bool queryAndTargetSwapped; 
  hknpCollisionQueryCollector *collector; 
  StaticModels_HavokShapeInstance *v162; 
  BOOL v163; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v166; 
  hknpQueryFilterData targetShapeFilterData; 
  hkSimdFloat32 *v169; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v173; 
  const hknpShape *v174; 
  const hknpShape *m_parentShape; 
  unsigned int v176; 
  const hknpShape *m_shape; 
  unsigned __int16 v178; 
  unsigned int v179; 
  unsigned __int64 v180; 
  __int64 v181; 
  __int64 v182; 
  const StaticModels_HavokShape *v183; 
  unsigned int v184; 
  hknpShape *v185; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  char v188[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v191[3]; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  _R12 = this;
  v12 = (unsigned __int16)instanceIndex;
  v169 = maxDistanceSquared;
  m_data = m_targetShape->m_instances.m_data;
  v162 = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  _RAX = this->m_targetShapeFilterData;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  m_targetShapeInfo = this->m_targetShapeInfo;
  __asm { vmovups xmmword ptr [rsp+2F8h+targetShapeFilterData.m_materialId.baseclass_0.m_value], xmm0 }
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v19 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v166 = m_numShapeKeyBits + HIDWORD(targetShapea);
  v20 = NULL;
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = _R12->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v22 = _R12->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v24 = _R12->m_targetShapeInfo;
    m_rootShape = v24->m_rootShape;
    m_body = v24->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v162[v12].m_modelIdxAndFlags & 0x4000) != 0, _R12->m_targetShape->m_tileIdx, v162[v12].m_modelIdxAndFlags & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 4i64, m_body, m_rootShape, v22, v19, targetShape, &targetShapeFilterData);
    m_query = _R12->m_query;
    v20 = NULL;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = _R12->m_queryShapeInfo;
      v31 = (__int64 *)_R12->m_targetShapeInfo;
      v32 = !_R12->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v173 = m_queryShapeInfo->m_body;
      v174 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v176 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v178 = targetShapeFilterData.m_materialId.m_value;
      v179 = targetShapeFilterData.m_collisionFilterInfo;
      v180 = targetShapeFilterData.m_userData;
      v181 = *v31;
      v33 = v31[1];
      LOBYTE(v31) = v32;
      v182 = v33;
      v183 = _R12->m_targetShape;
      v185 = targetShape;
      v184 = v19;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, GET_CLOSEST_POINTS, (bool)v31, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v178) )
        return;
    }
    m_data = v162;
  }
  _RSI = _R12->m_targetShapeInfo;
  m_instanceIdx = m_data[v12].m_instanceIdx;
  v36 = m_data[v12].m_modelIdxAndFlags & 0x3FFF;
  __asm { vmovaps [rsp+2F8h+var_48], xmm6 }
  targetShapeInfo.m_body = _RSI->m_body;
  targetShapeInfo.m_rootShape = _RSI->m_rootShape;
  targetShapeInfo.m_parentShape = _RSI->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = _RSI->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = _RSI->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = _RSI->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = _RSI->m_scalingInternals.m_mode;
  __asm { vmovups xmm0, xmmword ptr [rsi+40h] }
  v38 = _R12->m_targetShape;
  __asm
  {
    vmovaps [rsp+2F8h+var_58], xmm7
    vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rsi+50h]
    vmovaps [rsp+2F8h+var_68], xmm8
    vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm1
    vmovss  xmm0, dword ptr [rsi+38h]
    vmovaps [rsp+2F8h+var_78], xmm9
    vmovss  [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
  }
  m_tileIdx = v38->m_tileIdx;
  __asm
  {
    vmovaps [rsp+2F8h+var_88], xmm10
    vmovaps [rsp+2F8h+var_98], xmm11
    vmovaps [rsp+2F8h+var_A8], xmm12
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v36, m_instanceIdx);
  __asm
  {
    vmovaps xmm6, xmm0
    vshufps xmm6, xmm6, xmm6, 0
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v12].m_modelIdxAndFlags & 0x3FFF, m_data[v12].m_instanceIdx);
  __asm { vucomiss xmm0, cs:__real@3f800000 }
  v163 = !v32;
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v12].m_modelIdxAndFlags & 0x3FFF, m_data[v12].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+2F8h+var_158]
    vmovups ymmword ptr [rsp+2F8h+var_198], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+2F8h+var_198+20h], ymm1
    vmovups xmmword ptr [rsp+2F8h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v188, &qi);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+2F8h+origin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+2F8h+origin]
    vmulss  xmm2, xmm3, dword ptr [rsp+2F8h+origin+8]
    vmovss  dword ptr [rsp+2F8h+var_198+34h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+2F8h+var_198+3Ch], xmm0
    vmovss  dword ptr [rsp+2F8h+var_198+30h], xmm1
    vmovss  dword ptr [rsp+2F8h+var_198+38h], xmm2
  }
  if ( _RSI->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+40h]
      vmulps  xmm6, xmm6, xmm0
      vmulps  xmm0, xmm0, xmmword ptr [rsp+2F8h+var_198+30h]
      vmovups xmmword ptr [rsp+2F8h+var_198+30h], xmm0
    }
    goto LABEL_9;
  }
  if ( v163 )
  {
LABEL_9:
    v53 = m_data[v12].m_instanceIdx;
    v54 = m_data[v12].m_modelIdxAndFlags & 0x3FFF;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    __asm
    {
      vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm6
      vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm0
    }
    *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v54, v53);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v32 )
      m_mode = _RSI->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v57 = m_data[v12].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    _RAX = StaticModels_GetCollisionTileModelShape((v57 & 0x4000) != 0, m_tileIdx, v57 & 0x3FFF);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
    }
    if ( (_RAX[24] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)(unsigned __int8)_RAX[26], (const hkcdVertex *)&_RAX[*((unsigned __int16 *)_RAX + 30) + 58], *((unsigned __int16 *)_RAX + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  __asm
  {
    vmovups xmm12, xmmword ptr [rsp+2F8h+var_198+30h]
    vmovups xmm9, xmmword ptr [rsp+2F8h+var_198+20h]
    vmovups xmm10, xmmword ptr [rsp+2F8h+var_198+10h]
    vmovups xmm11, xmmword ptr [rsp+2F8h+var_198]
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vshufps xmm1, xmm12, xmm12, 0
  }
  _RCX = _R12->m_targetShapeInfo->m_shapeToWorld;
  v67 = _R12->m_targetShape;
  __asm
  {
    vmovups ymm7, ymmword ptr [rcx]
    vmovups xmm8, xmmword ptr [rcx+20h]
    vextractf128 xmm6, ymm7, 1
    vmulps  xmm2, xmm0, xmm6
    vmulps  xmm0, xmm1, xmm7
    vaddps  xmm3, xmm2, xmm0
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vmulps  xmm2, xmm1, xmm8
    vaddps  xmm5, xmm3, xmm2
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm9, xmm9, 0
    vmulps  xmm2, xmm1, xmm7
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_118], xmm2
    vshufps xmm0, xmm10, xmm10, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm10, xmm10, 0
    vmulps  xmm2, xmm1, xmm7
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_128], xmm2
    vshufps xmm0, xmm11, xmm11, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+2F8h+var_48]
    vshufps xmm1, xmm11, xmm11, 0
    vmulps  xmm2, xmm1, xmm7
    vmovaps xmm7, [rsp+2F8h+var_58]
    vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+2F8h+var_68]
    vmovups [rsp+2F8h+var_108], xmm5
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_138], xmm2
    vaddps  xmm0, xmm5, xmmword ptr [rcx+30h]
  }
  targetShapeInfo.m_parentShape = v67;
  targetShapeInfo.m_shapeKeyPath.m_size = v166;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v191;
  m_simdTreeMask = _R12->m_simdTreeMask;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v19;
  __asm { vmovups [rsp+2F8h+var_108], xmm0 }
  if ( m_simdTreeMask )
    v20 = m_simdTreeMask->m_instanceMasks.m_data[instanceIndex];
  v106 = _R12->m_queryShapeInfo;
  m_queryContext = _R12->m_queryContext;
  v108 = _R12->m_query;
  collector = _R12->m_collector;
  queryAndTargetSwapped = _R12->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeKeyMask = v20;
  __asm
  {
    vmovups xmm3, xmmword ptr [r12+70h]
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_translation.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+60h]
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col2.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+50h]
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col1.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+40h]
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vmovups xmm0, xmmword ptr [r12+70h]
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vsubps  xmm3, xmm0, xmm12
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col0.m_quad], xmm2
    vdpps   xmm1, xmm11, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_translation.m_quad], xmm2
  }
  hknpCollisionQueryDispatcher::getClosestPoints((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, v108, v106, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
    vmovaps xmm12, [rsp+2F8h+var_A8]
    vmovaps xmm11, [rsp+2F8h+var_98]
    vmaxps  xmm5, xmm0, xmmword ptr [rax+10h]
    vmovaps xmm10, [rsp+2F8h+var_88]
    vmovaps xmm9, [rsp+2F8h+var_78]
  }
  if ( _R12->m_targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
      vandnps xmm1, xmm0, xmmword ptr [rax+40h]
      vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
      vrcpps  xmm2, xmm1
      vmulps  xmm1, xmm1, xmm2
      vsubps  xmm1, xmm0, xmm1
      vmulps  xmm4, xmm1, xmm2
      vshufps xmm2, xmm4, xmm4, 55h ; 'U'
      vshufps xmm0, xmm4, xmm4, 0
      vmaxps  xmm3, xmm2, xmm0
      vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
      vmaxps  xmm2, xmm1, xmm3
      vmulps  xmm5, xmm2, xmm5
    }
  }
  _RAX = v169;
  __asm
  {
    vmulps  xmm0, xmm5, xmm5
    vmovups xmmword ptr [rax], xmm0
  }
}

/*
==============
StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>::processInstance(StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *this, int instanceIndex, hkSimdFloat32 *maxDistanceSquared)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v12; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v19; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v21; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v23; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpClosestPointsQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v30; 
  bool v31; 
  __int64 v32; 
  unsigned int m_instanceIdx; 
  int v35; 
  const StaticModels_HavokShape *v37; 
  unsigned int m_tileIdx; 
  int v43; 
  unsigned int v53; 
  int v54; 
  signed int m_mode; 
  unsigned __int16 v57; 
  const hknpShape *v67; 
  const hknpShapeQueryInfo *v127; 
  hknpCollisionQueryContext *m_queryContext; 
  const hknpClosestPointsQuery *v129; 
  bool queryAndTargetSwapped; 
  hknpCollisionQueryCollector *collector; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v164; 
  hknpQueryFilterData targetShapeFilterData; 
  hkSimdFloat32 *v166; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v170; 
  const hknpShape *v171; 
  const hknpShape *m_parentShape; 
  unsigned int v173; 
  const hknpShape *m_shape; 
  unsigned __int16 v175; 
  unsigned int v176; 
  unsigned __int64 v177; 
  __int64 v178; 
  __int64 v179; 
  const StaticModels_HavokShape *v180; 
  unsigned int v181; 
  hknpShape *v182; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  char v186[64]; 
  hkQuaternionf qi; 
  __int128 v188[4]; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  _R12 = this;
  v12 = (unsigned __int16)instanceIndex;
  v166 = maxDistanceSquared;
  m_data = m_targetShape->m_instances.m_data;
  *(_QWORD *)orientationAsQuat.v = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  _RAX = this->m_targetShapeFilterData;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  m_targetShapeInfo = this->m_targetShapeInfo;
  __asm { vmovups xmmword ptr [rsp+2F8h+targetShapeFilterData.m_materialId.baseclass_0.m_value], xmm0 }
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v19 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v164 = m_numShapeKeyBits + HIDWORD(targetShapea);
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = _R12->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v21 = _R12->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v23 = _R12->m_targetShapeInfo;
    m_rootShape = v23->m_rootShape;
    m_body = v23->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v12) & 0x4000) != 0, _R12->m_targetShape->m_tileIdx, *(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v12) & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 4i64, m_body, m_rootShape, v21, v19, targetShape, &targetShapeFilterData);
    m_query = _R12->m_query;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = _R12->m_queryShapeInfo;
      v30 = (__int64 *)_R12->m_targetShapeInfo;
      v31 = !_R12->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v170 = m_queryShapeInfo->m_body;
      v171 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v173 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v175 = targetShapeFilterData.m_materialId.m_value;
      v176 = targetShapeFilterData.m_collisionFilterInfo;
      v177 = targetShapeFilterData.m_userData;
      v178 = *v30;
      v32 = v30[1];
      LOBYTE(v30) = v31;
      v179 = v32;
      v180 = _R12->m_targetShape;
      v182 = targetShape;
      v181 = v19;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, GET_CLOSEST_POINTS, (bool)v30, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v175) )
        return;
    }
    m_data = *(StaticModels_HavokShapeInstance **)orientationAsQuat.v;
  }
  _RDI = _R12->m_targetShapeInfo;
  m_instanceIdx = m_data[v12].m_instanceIdx;
  v35 = m_data[v12].m_modelIdxAndFlags & 0x3FFF;
  __asm { vmovaps [rsp+2F8h+var_48], xmm6 }
  targetShapeInfo.m_body = _RDI->m_body;
  targetShapeInfo.m_rootShape = _RDI->m_rootShape;
  targetShapeInfo.m_parentShape = _RDI->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = _RDI->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = _RDI->m_shapeToWorld;
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = _RDI->m_scalingInternals.m_isScaled;
  targetShapeInfo.m_scalingInternals.m_mode = _RDI->m_scalingInternals.m_mode;
  __asm { vmovups xmm0, xmmword ptr [rdi+40h] }
  v37 = _R12->m_targetShape;
  __asm
  {
    vmovaps [rsp+2F8h+var_58], xmm7
    vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovaps [rsp+2F8h+var_68], xmm8
    vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm1
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovaps [rsp+2F8h+var_78], xmm9
    vmovss  [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
  }
  m_tileIdx = v37->m_tileIdx;
  __asm
  {
    vmovaps [rsp+2F8h+var_88], xmm10
    vmovaps [rsp+2F8h+var_98], xmm11
    vmovaps [rsp+2F8h+var_A8], xmm12
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v35, m_instanceIdx);
  __asm
  {
    vmovaps xmm6, xmm0
    vshufps xmm6, xmm6, xmm6, 0
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v12].m_modelIdxAndFlags & 0x3FFF, m_data[v12].m_instanceIdx);
  __asm { vucomiss xmm0, cs:__real@3f800000 }
  v43 = !v31;
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v12].m_modelIdxAndFlags & 0x3FFF, m_data[v12].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+2F8h+var_198]
    vmovups ymmword ptr [rsp+2F8h+var_188], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+2F8h+var_188+20h], ymm1
    vmovups xmmword ptr [rsp+2F8h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v186, &qi);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+2F8h+origin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+2F8h+origin]
    vmulss  xmm2, xmm3, dword ptr [rsp+2F8h+origin+8]
    vmovss  dword ptr [rsp+2F8h+var_188+34h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+2F8h+var_188+3Ch], xmm0
    vmovss  dword ptr [rsp+2F8h+var_188+30h], xmm1
    vmovss  dword ptr [rsp+2F8h+var_188+38h], xmm2
  }
  if ( _RDI->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmulps  xmm6, xmm6, xmm0
      vmulps  xmm0, xmm0, xmmword ptr [rsp+2F8h+var_188+30h]
      vmovups xmmword ptr [rsp+2F8h+var_188+30h], xmm0
    }
    goto LABEL_12;
  }
  if ( v43 )
  {
LABEL_12:
    v53 = m_data[v12].m_instanceIdx;
    v54 = m_data[v12].m_modelIdxAndFlags & 0x3FFF;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    __asm
    {
      vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm6
      vmovups xmmword ptr [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm0
    }
    *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v54, v53);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v31 )
      m_mode = _RDI->m_scalingInternals.m_mode;
    else
      m_mode = 0;
    v57 = m_data[v12].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = m_mode;
    _RAX = StaticModels_GetCollisionTileModelShape((v57 & 0x4000) != 0, m_tileIdx, v57 & 0x3FFF);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  [rsp+2F8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
    }
    if ( (_RAX[24] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)(unsigned __int8)_RAX[26], (const hkcdVertex *)&_RAX[*((unsigned __int16 *)_RAX + 30) + 58], *((unsigned __int16 *)_RAX + 29), (hknpShape::ScaleMode)m_mode, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+2F8h+var_188+20h]
    vmovups xmm10, xmmword ptr [rsp+2F8h+var_188+10h]
    vmovups xmm9, xmmword ptr [rsp+2F8h+var_188]
    vmovups xmm12, xmmword ptr [rsp+2F8h+var_188+30h]
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vshufps xmm1, xmm12, xmm12, 0
  }
  _RCX = _R12->m_targetShapeInfo->m_shapeToWorld;
  v67 = _R12->m_targetShape;
  __asm
  {
    vmovups ymm7, ymmword ptr [rcx]
    vmovups xmm8, xmmword ptr [rcx+20h]
    vextractf128 xmm6, ymm7, 1
    vmulps  xmm2, xmm0, xmm6
    vmulps  xmm0, xmm1, xmm7
    vaddps  xmm3, xmm2, xmm0
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vmulps  xmm2, xmm1, xmm8
    vaddps  xmm5, xmm3, xmm2
    vmovups [rsp+2F8h+var_108], xmm5
    vshufps xmm0, xmm11, xmm11, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm11, xmm11, 0
    vmulps  xmm2, xmm1, xmm7
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_118], xmm2
    vshufps xmm0, xmm10, xmm10, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm10, xmm10, 0
    vmulps  xmm2, xmm1, xmm7
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_128], xmm2
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm9, xmm9, 0
    vmulps  xmm2, xmm1, xmm7
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+2F8h+var_138], xmm2
    vaddps  xmm0, xmm5, xmmword ptr [rcx+30h]
    vmovups [rsp+2F8h+var_108], xmm0
  }
  targetShapeInfo.m_parentShape = v67;
  targetShapeInfo.m_shapeKeyPath.m_size = v164;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v188;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v19;
  targetShapeInfo.m_shapeKeyMask = NULL;
  __asm
  {
    vmovups xmm3, xmmword ptr [r12+70h]
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_translation.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+60h]
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col2.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+50h]
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col1.m_quad], xmm2
    vmovups xmm3, xmmword ptr [r12+40h]
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vmovups xmm0, xmmword ptr [r12+70h]
  }
  v127 = _R12->m_queryShapeInfo;
  m_queryContext = _R12->m_queryContext;
  v129 = _R12->m_query;
  collector = _R12->m_collector;
  queryAndTargetSwapped = _R12->m_queryAndTargetSwapped;
  __asm
  {
    vorps   xmm2, xmm2, xmm1
    vsubps  xmm3, xmm0, xmm12
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_rotation.baseclass_0.m_col0.m_quad], xmm2
    vdpps   xmm1, xmm9, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+2F8h+var_F8.m_translation.m_quad], xmm2
  }
  hknpCollisionQueryDispatcher::getClosestPoints((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, v129, v127, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
    vmovaps xmm12, [rsp+2F8h+var_A8]
    vmovaps xmm11, [rsp+2F8h+var_98]
    vmaxps  xmm5, xmm0, xmmword ptr [rax+10h]
    vmovaps xmm10, [rsp+2F8h+var_88]
    vmovaps xmm9, [rsp+2F8h+var_78]
    vmovaps xmm8, [rsp+2F8h+var_68]
    vmovaps xmm7, [rsp+2F8h+var_58]
    vmovaps xmm6, [rsp+2F8h+var_48]
  }
  if ( _R12->m_targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
      vandnps xmm1, xmm0, xmmword ptr [rax+40h]
      vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
      vrcpps  xmm2, xmm1
      vmulps  xmm1, xmm2, xmm1
      vsubps  xmm1, xmm0, xmm1
      vmulps  xmm4, xmm1, xmm2
      vshufps xmm2, xmm4, xmm4, 55h ; 'U'
      vshufps xmm0, xmm4, xmm4, 0
      vmaxps  xmm3, xmm2, xmm0
      vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
      vmaxps  xmm2, xmm1, xmm3
      vmulps  xmm5, xmm2, xmm5
    }
  }
  _RAX = v166;
  __asm
  {
    vmulps  xmm0, xmm5, xmm5
    vmovups xmmword ptr [rax], xmm0
  }
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<1>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ShapeCast<1>::processInstance(StaticModels_HavokShapeEx::ShapeCast<1> *this, int instanceIndex)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v14; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v21; 
  const hknpShapeKeyMask *v22; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v24; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v26; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpShapeCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v33; 
  bool v34; 
  __int64 v35; 
  unsigned int m_instanceIdx; 
  int v38; 
  unsigned int m_mode; 
  const StaticModels_HavokShape *v41; 
  unsigned int m_tileIdx; 
  unsigned int v58; 
  int v59; 
  signed int v61; 
  unsigned __int16 v62; 
  const StaticModels_HavokShape *v130; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  bool queryAndTargetSwapped; 
  const hknpShapeQueryInfo *v154; 
  hknpCollisionQueryContext *m_queryContext; 
  hknpCollisionQueryCollector *collector; 
  hknpCollisionQueryCollector *startCollector; 
  StaticModels_HavokShapeInstance *v200; 
  BOOL v201; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v204; 
  hknpQueryFilterData targetShapeFilterData; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v210; 
  const hknpShape *v211; 
  const hknpShape *m_parentShape; 
  unsigned int v213; 
  const hknpShape *m_shape; 
  unsigned __int16 v215; 
  unsigned int v216; 
  unsigned __int64 v217; 
  __int64 v218; 
  __int64 v219; 
  const StaticModels_HavokShape *v220; 
  unsigned int v221; 
  hknpShape *v222; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  char v225[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v228[4]; 
  hknpShapeCastQuery query; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  v14 = (unsigned __int16)instanceIndex;
  m_data = this->m_targetShape->m_instances.m_data;
  v200 = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  _RAX = this->m_targetShapeFilterData;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  m_targetShapeInfo = this->m_targetShapeInfo;
  __asm { vmovups xmmword ptr [rsp+3C8h+targetShapeFilterData.m_materialId.baseclass_0.m_value], xmm0 }
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v21 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v204 = m_numShapeKeyBits + HIDWORD(targetShapea);
  v22 = NULL;
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v24 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v26 = this->m_targetShapeInfo;
    m_rootShape = v26->m_rootShape;
    m_body = v26->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v200[v14].m_modelIdxAndFlags & 0x4000) != 0, this->m_targetShape->m_tileIdx, v200[v14].m_modelIdxAndFlags & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 2i64, m_body, m_rootShape, v24, v21, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    v22 = NULL;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v33 = (__int64 *)this->m_targetShapeInfo;
      v34 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v210 = m_queryShapeInfo->m_body;
      v211 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v213 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v215 = targetShapeFilterData.m_materialId.m_value;
      v216 = targetShapeFilterData.m_collisionFilterInfo;
      v217 = targetShapeFilterData.m_userData;
      v218 = *v33;
      v35 = v33[1];
      LOBYTE(v33) = v34;
      v219 = v35;
      v220 = this->m_targetShape;
      v222 = targetShape;
      v221 = v21;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, SHAPE_CAST, (bool)v33, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v215) )
        return;
    }
    m_data = v200;
  }
  _RDI = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v14].m_instanceIdx;
  v38 = m_data[v14].m_modelIdxAndFlags & 0x3FFF;
  __asm { vmovaps [rsp+3C8h+var_38], xmm6 }
  targetShapeInfo.m_body = _RDI->m_body;
  targetShapeInfo.m_rootShape = _RDI->m_rootShape;
  targetShapeInfo.m_parentShape = _RDI->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = _RDI->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = _RDI->m_shapeToWorld;
  __asm { vmovaps [rsp+3C8h+var_48], xmm7 }
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = _RDI->m_scalingInternals.m_isScaled;
  m_mode = _RDI->m_scalingInternals.m_mode;
  __asm { vmovaps [rsp+3C8h+var_58], xmm8 }
  targetShapeInfo.m_scalingInternals.m_mode = m_mode;
  __asm { vmovups xmm0, xmmword ptr [rdi+40h] }
  v41 = this->m_targetShape;
  __asm
  {
    vmovaps [rsp+3C8h+var_68], xmm9
    vmovaps [rsp+3C8h+var_78], xmm10
    vmovups xmmword ptr [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovaps [rsp+3C8h+var_88], xmm11
    vmovups xmmword ptr [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm1
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovaps [rsp+3C8h+var_98], xmm12
    vmovss  [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
  }
  m_tileIdx = v41->m_tileIdx;
  __asm
  {
    vmovaps [rsp+3C8h+var_A8], xmm13
    vmovaps [rsp+3C8h+var_B8], xmm14
    vmovaps [rsp+3C8h+var_C8], xmm15
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v38, m_instanceIdx);
  __asm
  {
    vmovaps xmm6, xmm0
    vshufps xmm6, xmm6, xmm6, 0
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v14].m_modelIdxAndFlags & 0x3FFF, m_data[v14].m_instanceIdx);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vucomiss xmm0, xmm7
  }
  v201 = !v34;
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v14].m_modelIdxAndFlags & 0x3FFF, m_data[v14].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+3C8h+var_218]
    vmovups ymmword ptr [rsp+3C8h+var_258], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+3C8h+var_258+20h], ymm1
    vmovups xmmword ptr [rsp+3C8h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v225, &qi);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+3C8h+origin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+3C8h+origin]
    vmulss  xmm2, xmm3, dword ptr [rsp+3C8h+origin+8]
    vmovss  dword ptr [rsp+3C8h+var_258+34h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+3C8h+var_258+3Ch], xmm0
    vmovss  dword ptr [rsp+3C8h+var_258+30h], xmm1
    vmovss  dword ptr [rsp+3C8h+var_258+38h], xmm2
  }
  if ( _RDI->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi+40h]
      vmulps  xmm6, xmm6, xmm1
      vmulps  xmm1, xmm1, xmmword ptr [rsp+3C8h+var_258+30h]
      vmovups xmmword ptr [rsp+3C8h+var_258+30h], xmm1
    }
    goto LABEL_9;
  }
  if ( v201 )
  {
LABEL_9:
    v58 = m_data[v14].m_instanceIdx;
    v59 = m_data[v14].m_modelIdxAndFlags & 0x3FFF;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    __asm
    {
      vmovups xmmword ptr [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm6
      vmovups xmmword ptr [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm0
    }
    *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v59, v58);
    __asm { vucomiss xmm0, xmm7 }
    if ( v34 )
      v61 = _RDI->m_scalingInternals.m_mode;
    else
      v61 = 0;
    v62 = m_data[v14].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = v61;
    _RAX = StaticModels_GetCollisionTileModelShape((v62 & 0x4000) != 0, m_tileIdx, v62 & 0x3FFF);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  [rsp+3C8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
    }
    if ( (_RAX[24] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)(unsigned __int8)_RAX[26], (const hkcdVertex *)&_RAX[*((unsigned __int16 *)_RAX + 30) + 58], *((unsigned __int16 *)_RAX + 29), (hknpShape::ScaleMode)v61, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  _R8 = this->m_query;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+3C8h+var_258+20h]
    vmovups xmm12, xmmword ptr [rsp+3C8h+var_258+10h]
    vmovups xmm13, xmmword ptr [rsp+3C8h+var_258]
    vmovups xmm14, xmmword ptr [rsp+3C8h+var_258+30h]
    vshufps xmm0, xmm14, xmm14, 55h ; 'U'
    vshufps xmm1, xmm14, xmm14, 0
    vxorps  xmm15, xmm15, xmm15
  }
  _RCX = this->m_targetShapeInfo->m_shapeToWorld;
  __asm
  {
    vmovups ymm7, ymmword ptr [rcx]
    vmovups xmm8, xmmword ptr [rcx+20h]
    vextractf128 xmm6, ymm7, 1
    vmulps  xmm2, xmm0, xmm6
    vmulps  xmm0, xmm1, xmm7
    vaddps  xmm3, xmm2, xmm0
    vshufps xmm0, xmm11, xmm11, 55h ; 'U'
    vshufps xmm1, xmm14, xmm14, 0AAh ; 'ª'
    vmulps  xmm2, xmm1, xmm8
    vaddps  xmm5, xmm3, xmm2
    vmulps  xmm3, xmm0, xmm6
    vmovups [rsp+3C8h+var_1C8], xmm5
    vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
    vshufps xmm1, xmm11, xmm11, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm9, xmm4, xmm1
    vmovups [rsp+3C8h+var_1D8], xmm9
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vshufps xmm1, xmm12, xmm12, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm10, xmm4, xmm1
    vmovups [rsp+3C8h+var_1E8], xmm10
    vshufps xmm0, xmm13, xmm13, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm0, xmm13, xmm13, 0AAh ; 'ª'
    vshufps xmm1, xmm13, xmm13, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm7, xmm4, xmm1
    vmovups [rsp+3C8h+var_1F8], xmm7
    vaddps  xmm0, xmm5, xmmword ptr [rcx+30h]
    vmovups xmm5, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
    vmovups [rsp+3C8h+var_1C8], xmm0
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rsp+3C8h+query.baseclass_0.m_shapeTagCodec], ymm0
    vmovsd  xmm1, qword ptr [r8+20h]
    vmovsd  qword ptr [rsp+3C8h+query.baseclass_0.m_levelOfDetail], xmm1
  }
  query.m_shape = _R8->m_shape;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+60h]
    vmovss  [rsp+3C8h+query.m_accuracy], xmm0
    vmovss  xmm1, dword ptr [r8+64h]
    vmovss  [rsp+3C8h+query.m_extraRadius], xmm1
    vmovss  xmm0, dword ptr [r8+68h]
    vmovss  [rsp+3C8h+query.m_startTolerance], xmm0
  }
  query.m_maxCastIterations = _R8->m_maxCastIterations;
  query.m_body = _R8->m_body;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+78h]
    vmovss  [rsp+3C8h+query.m_angularAccuracy], xmm0
    vmovups xmm6, xmmword ptr [r8+80h]
    vmovups xmmword ptr [rsp+3C8h+query.m_deltaAngleLocal.m_quad], xmm6
    vmovups xmm8, xmmword ptr [r8+90h]
    vmovups xmmword ptr [rsp+3C8h+query.m_rotationCenterLocal.m_quad], xmm8
    vmovups xmm3, xmmword ptr [r8+40h]
    vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
    vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm3, xmm2, xmm1
    vblendps xmm4, xmm3, xmm5, 8
    vcmpeqps xmm0, xmm4, xmm15
    vandnps xmm1, xmm0, xmm4
    vmovups xmm4, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
    vrcpps  xmm3, xmm1
    vmulps  xmm2, xmm3, xmm1
  }
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v21;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v228;
  v130 = this->m_targetShape;
  __asm
  {
    vmovups xmmword ptr [rsp+3C8h+query.m_ray.m_direction.m_quad], xmm1
    vcmpeqps xmm0, xmm1, xmm15
    vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm2, xmm1, xmm2
  }
  targetShapeInfo.m_parentShape = v130;
  __asm { vmulps  xmm3, xmm2, xmm3 }
  targetShapeInfo.m_shapeKeyPath.m_size = v204;
  m_simdTreeMask = this->m_simdTreeMask;
  __asm
  {
    vblendvps xmm1, xmm3, xmm4, xmm0
    vmovups xmmword ptr [rsp+3C8h+query.m_ray.m_invDirection.m_quad], xmm1
    vmovups xmmword ptr [rsp+3C8h+query.m_ray.m_origin.m_quad], xmm5
  }
  if ( m_simdTreeMask )
    v22 = m_simdTreeMask->m_instanceMasks.m_data[instanceIndex];
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeKeyMask = v22;
  if ( queryAndTargetSwapped )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r8+80h]
      vcmpneqps xmm1, xmm0, xmm15
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      __asm
      {
        vsubps  xmm3, xmm8, xmm14
        vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
        vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
        vorps   xmm2, xmm1, xmm0
        vdpps   xmm1, xmm11, xmm3, 74h ; 't'
        vorps   xmm2, xmm2, xmm1
        vblendps xmm0, xmm2, xmm8, 8
        vdpps   xmm1, xmm13, xmm6, 71h ; 'q'
        vdpps   xmm3, xmm12, xmm6, 72h ; 'r'
        vorps   xmm2, xmm3, xmm1
        vmovups xmmword ptr [rsp+3C8h+query.m_rotationCenterLocal.m_quad], xmm0
        vdpps   xmm0, xmm11, xmm6, 74h ; 't'
        vorps   xmm2, xmm2, xmm0
        vblendps xmm1, xmm2, xmm6, 8
        vmovups xmmword ptr [rsp+3C8h+query.m_deltaAngleLocal.m_quad], xmm1
      }
    }
  }
  v154 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  _RAX = v154->m_shapeToWorld;
  __asm
  {
    vmovups xmm3, xmmword ptr [rax+30h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3C8h+var_118.m_translation.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax+20h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3C8h+var_118.m_rotation.baseclass_0.m_col2.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax+10h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3C8h+var_118.m_rotation.baseclass_0.m_col1.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3C8h+var_118.m_rotation.baseclass_0.m_col0.m_quad], xmm2
    vmovups xmm0, xmmword ptr [rax+30h]
    vsubps  xmm3, xmm0, [rsp+3C8h+var_1C8]
  }
  startCollector = this->m_startCollector;
  collector = this->m_collector;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3C8h+var_118.m_translation.m_quad], xmm2
  }
  hknpCollisionQueryDispatcher::castShape((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, &query, v154, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector, startCollector);
  __asm
  {
    vmovaps xmm15, [rsp+3C8h+var_C8]
    vmovaps xmm14, [rsp+3C8h+var_B8]
    vmovaps xmm13, [rsp+3C8h+var_A8]
    vmovaps xmm12, [rsp+3C8h+var_98]
    vmovaps xmm11, [rsp+3C8h+var_88]
    vmovaps xmm10, [rsp+3C8h+var_78]
    vmovaps xmm9, [rsp+3C8h+var_68]
    vmovaps xmm8, [rsp+3C8h+var_58]
    vmovaps xmm7, [rsp+3C8h+var_48]
    vmovaps xmm6, [rsp+3C8h+var_38]
  }
}

/*
==============
StaticModels_HavokShapeEx::ShapeCast<0>::processInstance
==============
*/
void StaticModels_HavokShapeEx::ShapeCast<0>::processInstance(StaticModels_HavokShapeEx::ShapeCast<0> *this, int instanceIndex)
{
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v14; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  unsigned int v21; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const StaticModels_HavokShape *v23; 
  void (__fastcall *decode)(hknpShapeTagCodec *, unsigned __int16, hknpCollisionQueryType::Enum, const hknpBody *, const hknpShape *, const hknpShape *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>, const hknpShape *, hknpQueryFilterData *); 
  const hknpShapeQueryInfo *v25; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpShapeCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  const hknpShapeQueryInfo *m_queryShapeInfo; 
  __int64 *v32; 
  bool v33; 
  __int64 v34; 
  unsigned int m_instanceIdx; 
  int v37; 
  unsigned int m_mode; 
  const StaticModels_HavokShape *v40; 
  unsigned int m_tileIdx; 
  int v47; 
  unsigned int v58; 
  int v59; 
  signed int v61; 
  unsigned __int16 v62; 
  bool queryAndTargetSwapped; 
  const hknpShapeQueryInfo *v151; 
  hknpCollisionQueryContext *m_queryContext; 
  hknpCollisionQueryCollector *collector; 
  hknpCollisionQueryCollector *startCollector; 
  hknpShape *targetShapea; 
  hknpShape *targetShape; 
  int v199; 
  hknpQueryFilterData targetShapeFilterData; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  const hknpBody *v204; 
  const hknpShape *v205; 
  const hknpShape *m_parentShape; 
  unsigned int v207; 
  const hknpShape *m_shape; 
  unsigned __int16 v209; 
  unsigned int v210; 
  unsigned __int64 v211; 
  __int64 v212; 
  __int64 v213; 
  const StaticModels_HavokShape *v214; 
  unsigned int v215; 
  hknpShape *v216; 
  hknpShapeQueryInfo targetShapeInfo; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  char v220[64]; 
  hkQuaternionf qi; 
  __int128 v222[3]; 
  hknpShapeCastQuery query; 
  hkTransformf queryToTarget; 

  m_targetShape = this->m_targetShape;
  v14 = (unsigned __int16)instanceIndex;
  m_data = this->m_targetShape->m_instances.m_data;
  *(_QWORD *)orientationAsQuat.v = m_data;
  m_modelIdxAndFlags = m_data[(unsigned __int16)instanceIndex].m_modelIdxAndFlags;
  if ( m_modelIdxAndFlags >= 0 )
    return;
  _RAX = this->m_targetShapeFilterData;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  m_targetShapeInfo = this->m_targetShapeInfo;
  __asm { vmovups xmmword ptr [rsp+3B8h+targetShapeFilterData.m_materialId.baseclass_0.m_value], xmm0 }
  m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
  targetShapea = (hknpShape *)m_targetShapeInfo->m_shapeKeyPath;
  v21 = (unsigned int)targetShapea & hknpShapeKeyPath_usedBitsMaskTable[SHIDWORD(targetShapea)] | (((instanceIndex + 1) << (32 - (BYTE4(targetShapea) + m_numShapeKeyBits))) - 1);
  v199 = m_numShapeKeyBits + HIDWORD(targetShapea);
  targetShape = (hknpShape *)StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
  m_shapeTagCodec = this->m_query->m_shapeTagCodec;
  *(_QWORD *)origin.v = m_shapeTagCodec;
  if ( m_shapeTagCodec )
  {
    v23 = this->m_targetShape;
    decode = m_shapeTagCodec->decode;
    v25 = this->m_targetShapeInfo;
    m_rootShape = v25->m_rootShape;
    m_body = v25->m_body;
    CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((*(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v14) & 0x4000) != 0, this->m_targetShape->m_tileIdx, *(_WORD *)(*(_QWORD *)orientationAsQuat.v + 4 * v14) & 0x3FFF);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, unsigned int, hknpShape *, hknpQueryFilterData *))decode)(*(_QWORD *)origin.v, CollisionTileModelShapeTag, 2i64, m_body, m_rootShape, v23, v21, targetShape, &targetShapeFilterData);
    m_query = this->m_query;
    m_filter = m_query->m_filter;
    if ( m_filter )
    {
      m_queryShapeInfo = this->m_queryShapeInfo;
      v32 = (__int64 *)this->m_targetShapeInfo;
      v33 = !this->m_queryAndTargetSwapped;
      m_value = -1;
      m_collisionFilterInfo = 0;
      m_userData = 0i64;
      m_value = m_query->m_filterData.m_materialId.m_value;
      m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
      m_userData = m_query->m_filterData.m_userData;
      v204 = m_queryShapeInfo->m_body;
      v205 = m_queryShapeInfo->m_rootShape;
      m_parentShape = m_queryShapeInfo->m_parentShape;
      v207 = m_queryShapeInfo->m_shapeKeyPath.m_key.m_value;
      m_shape = m_query->m_shape;
      v209 = targetShapeFilterData.m_materialId.m_value;
      v210 = targetShapeFilterData.m_collisionFilterInfo;
      v211 = targetShapeFilterData.m_userData;
      v212 = *v32;
      v34 = v32[1];
      LOBYTE(v32) = v33;
      v213 = v34;
      v214 = this->m_targetShape;
      v216 = targetShape;
      v215 = v21;
      if ( !m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, SHAPE_CAST, (bool)v32, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v209) )
        return;
    }
    m_data = *(StaticModels_HavokShapeInstance **)orientationAsQuat.v;
  }
  _RDI = this->m_targetShapeInfo;
  m_instanceIdx = m_data[v14].m_instanceIdx;
  v37 = m_data[v14].m_modelIdxAndFlags & 0x3FFF;
  __asm { vmovaps [rsp+3B8h+var_38], xmm6 }
  targetShapeInfo.m_body = _RDI->m_body;
  targetShapeInfo.m_rootShape = _RDI->m_rootShape;
  targetShapeInfo.m_parentShape = _RDI->m_parentShape;
  targetShapeInfo.m_shapeKeyPath = _RDI->m_shapeKeyPath;
  targetShapeInfo.m_shapeToWorld = _RDI->m_shapeToWorld;
  __asm { vmovaps [rsp+3B8h+var_48], xmm7 }
  targetShapeInfo.m_shapeKeyMask = NULL;
  targetShapeInfo.m_scalingInternals.m_isScaled = _RDI->m_scalingInternals.m_isScaled;
  m_mode = _RDI->m_scalingInternals.m_mode;
  __asm { vmovaps [rsp+3B8h+var_58], xmm8 }
  targetShapeInfo.m_scalingInternals.m_mode = m_mode;
  __asm { vmovups xmm0, xmmword ptr [rdi+40h] }
  v40 = this->m_targetShape;
  __asm
  {
    vmovaps [rsp+3B8h+var_68], xmm9
    vmovaps [rsp+3B8h+var_78], xmm10
    vmovups xmmword ptr [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovaps [rsp+3B8h+var_88], xmm11
    vmovups xmmword ptr [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm1
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovaps [rsp+3B8h+var_98], xmm12
    vmovss  [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
  }
  m_tileIdx = v40->m_tileIdx;
  __asm
  {
    vmovaps [rsp+3B8h+var_A8], xmm13
    vmovaps [rsp+3B8h+var_B8], xmm14
    vmovaps [rsp+3B8h+var_C8], xmm15
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v37, m_instanceIdx);
  __asm
  {
    vmovaps xmm6, xmm0
    vshufps xmm6, xmm6, xmm6, 0
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v14].m_modelIdxAndFlags & 0x3FFF, m_data[v14].m_instanceIdx);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vucomiss xmm0, xmm7
  }
  v47 = !v33;
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v14].m_modelIdxAndFlags & 0x3FFF, m_data[v14].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+3B8h+var_258]
    vmovups ymmword ptr [rsp+3B8h+var_248], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+3B8h+var_248+20h], ymm1
    vmovups xmmword ptr [rsp+3B8h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v220, &qi);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+3B8h+origin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+3B8h+origin]
    vmulss  xmm2, xmm3, dword ptr [rsp+3B8h+origin+8]
    vmovss  dword ptr [rsp+3B8h+var_248+34h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+3B8h+var_248+3Ch], xmm0
    vmovss  dword ptr [rsp+3B8h+var_248+30h], xmm1
    vmovss  dword ptr [rsp+3B8h+var_248+38h], xmm2
  }
  if ( _RDI->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi+40h]
      vmulps  xmm6, xmm6, xmm1
      vmulps  xmm1, xmm1, xmmword ptr [rsp+3B8h+var_248+30h]
      vmovups xmmword ptr [rsp+3B8h+var_248+30h], xmm1
    }
    goto LABEL_12;
  }
  if ( v47 )
  {
LABEL_12:
    v58 = m_data[v14].m_instanceIdx;
    v59 = m_data[v14].m_modelIdxAndFlags & 0x3FFF;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    targetShapeInfo.m_scalingInternals.m_isScaled = 1;
    __asm
    {
      vmovups xmmword ptr [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_scale.m_quad], xmm6
      vmovups xmmword ptr [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_offset.m_quad], xmm0
    }
    *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v59, v58);
    __asm { vucomiss xmm0, xmm7 }
    if ( v33 )
      v61 = _RDI->m_scalingInternals.m_mode;
    else
      v61 = 0;
    v62 = m_data[v14].m_modelIdxAndFlags;
    targetShapeInfo.m_scalingInternals.m_mode = v61;
    _RAX = StaticModels_GetCollisionTileModelShape((v62 & 0x4000) != 0, m_tileIdx, v62 & 0x3FFF);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  [rsp+3B8h+targetShapeInfo.m_scalingInternals.m_convexRadius], xmm0
    }
    if ( (_RAX[24] & 1) != 0 )
      hknpShapeUtil::calcScalingParameters((hknpShapeType::Enum)(unsigned __int8)_RAX[26], (const hkcdVertex *)&_RAX[*((unsigned __int16 *)_RAX + 30) + 58], *((unsigned __int16 *)_RAX + 29), (hknpShape::ScaleMode)v61, &targetShapeInfo.m_scalingInternals.m_scale, &targetShapeInfo.m_scalingInternals.m_convexRadius, &targetShapeInfo.m_scalingInternals.m_offset);
  }
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+3B8h+var_248+20h]
    vmovups xmm12, xmmword ptr [rsp+3B8h+var_248+10h]
    vmovups xmm13, xmmword ptr [rsp+3B8h+var_248]
    vmovups xmm14, xmmword ptr [rsp+3B8h+var_248+30h]
    vshufps xmm0, xmm14, xmm14, 55h ; 'U'
    vshufps xmm1, xmm14, xmm14, 0
    vxorps  xmm15, xmm15, xmm15
  }
  _RCX = this->m_targetShapeInfo->m_shapeToWorld;
  __asm
  {
    vmovups ymm7, ymmword ptr [rcx]
    vmovups xmm8, xmmword ptr [rcx+20h]
    vextractf128 xmm6, ymm7, 1
    vmulps  xmm2, xmm0, xmm6
    vmulps  xmm0, xmm1, xmm7
    vaddps  xmm3, xmm2, xmm0
    vshufps xmm0, xmm11, xmm11, 55h ; 'U'
    vshufps xmm1, xmm14, xmm14, 0AAh ; 'ª'
    vmulps  xmm2, xmm1, xmm8
    vaddps  xmm5, xmm3, xmm2
    vmulps  xmm3, xmm0, xmm6
    vmovups [rsp+3B8h+var_1C8], xmm5
    vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
    vshufps xmm1, xmm11, xmm11, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm9, xmm4, xmm1
    vmovups [rsp+3B8h+var_1D8], xmm9
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vshufps xmm1, xmm12, xmm12, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm10, xmm4, xmm1
    vmovups [rsp+3B8h+var_1E8], xmm10
    vshufps xmm0, xmm13, xmm13, 55h ; 'U'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm0, xmm13, xmm13, 0AAh ; 'ª'
    vshufps xmm1, xmm13, xmm13, 0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm1, xmm0, xmm8
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm7, xmm4, xmm1
    vmovups [rsp+3B8h+var_1F8], xmm7
    vaddps  xmm0, xmm5, xmmword ptr [rcx+30h]
  }
  _RCX = this->m_query;
  __asm
  {
    vmovups xmm5, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
    vmovups [rsp+3B8h+var_1C8], xmm0
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rsp+3B8h+query.baseclass_0.m_shapeTagCodec], ymm0
    vmovsd  xmm1, qword ptr [rcx+20h]
    vmovsd  qword ptr [rsp+3B8h+query.baseclass_0.m_levelOfDetail], xmm1
  }
  query.m_shape = _RCX->m_shape;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+60h]
    vmovss  [rsp+3B8h+query.m_accuracy], xmm0
    vmovss  xmm1, dword ptr [rcx+64h]
    vmovss  [rsp+3B8h+query.m_extraRadius], xmm1
    vmovss  xmm0, dword ptr [rcx+68h]
    vmovss  [rsp+3B8h+query.m_startTolerance], xmm0
  }
  query.m_maxCastIterations = _RCX->m_maxCastIterations;
  query.m_body = _RCX->m_body;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+78h]
    vmovss  [rsp+3B8h+query.m_angularAccuracy], xmm0
    vmovups xmm6, xmmword ptr [rcx+80h]
    vmovups xmmword ptr [rsp+3B8h+query.m_deltaAngleLocal.m_quad], xmm6
    vmovups xmm8, xmmword ptr [rcx+90h]
    vmovups xmmword ptr [rsp+3B8h+query.m_rotationCenterLocal.m_quad], xmm8
    vmovups xmm3, xmmword ptr [rcx+40h]
    vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
    vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm11, xmm3, 74h ; 't'
    vorps   xmm3, xmm2, xmm1
    vblendps xmm4, xmm3, xmm5, 8
    vcmpeqps xmm0, xmm4, xmm15
    vandnps xmm1, xmm0, xmm4
    vmovups xmm4, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
  }
  queryAndTargetSwapped = this->m_queryAndTargetSwapped;
  targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v222;
  targetShapeInfo.m_parentShape = this->m_targetShape;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = v21;
  targetShapeInfo.m_shapeKeyPath.m_size = v199;
  targetShapeInfo.m_shapeKeyMask = NULL;
  __asm
  {
    vrcpps  xmm3, xmm1
    vmulps  xmm2, xmm3, xmm1
    vmovups xmmword ptr [rsp+3B8h+query.m_ray.m_direction.m_quad], xmm1
    vcmpeqps xmm0, xmm1, xmm15
    vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm2, xmm1, xmm2
    vmulps  xmm3, xmm2, xmm3
    vblendvps xmm1, xmm3, xmm4, xmm0
    vmovups xmmword ptr [rsp+3B8h+query.m_ray.m_invDirection.m_quad], xmm1
    vmovups xmmword ptr [rsp+3B8h+query.m_ray.m_origin.m_quad], xmm5
  }
  if ( queryAndTargetSwapped )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+80h]
      vcmpneqps xmm1, xmm0, xmm15
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      __asm
      {
        vsubps  xmm3, xmm8, xmm14
        vdpps   xmm1, xmm12, xmm3, 72h ; 'r'
        vdpps   xmm0, xmm13, xmm3, 71h ; 'q'
        vorps   xmm2, xmm1, xmm0
        vdpps   xmm1, xmm11, xmm3, 74h ; 't'
        vorps   xmm2, xmm2, xmm1
        vblendps xmm0, xmm2, xmm8, 8
        vdpps   xmm1, xmm13, xmm6, 71h ; 'q'
        vdpps   xmm3, xmm12, xmm6, 72h ; 'r'
        vorps   xmm2, xmm3, xmm1
        vmovups xmmword ptr [rsp+3B8h+query.m_rotationCenterLocal.m_quad], xmm0
        vdpps   xmm0, xmm11, xmm6, 74h ; 't'
        vorps   xmm2, xmm2, xmm0
        vblendps xmm1, xmm2, xmm6, 8
        vmovups xmmword ptr [rsp+3B8h+query.m_deltaAngleLocal.m_quad], xmm1
      }
    }
  }
  v151 = this->m_queryShapeInfo;
  m_queryContext = this->m_queryContext;
  _RAX = v151->m_shapeToWorld;
  __asm
  {
    vmovups xmm3, xmmword ptr [rax+30h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3B8h+var_118.m_translation.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax+20h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3B8h+var_118.m_rotation.baseclass_0.m_col2.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax+10h]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3B8h+var_118.m_rotation.baseclass_0.m_col1.m_quad], xmm2
    vmovups xmm3, xmmword ptr [rax]
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3B8h+var_118.m_rotation.baseclass_0.m_col0.m_quad], xmm2
    vmovups xmm0, xmmword ptr [rax+30h]
    vsubps  xmm3, xmm0, [rsp+3B8h+var_1C8]
  }
  startCollector = this->m_startCollector;
  collector = this->m_collector;
  __asm
  {
    vdpps   xmm1, xmm7, xmm3, 71h ; 'q'
    vdpps   xmm0, xmm10, xmm3, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vdpps   xmm1, xmm9, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vmovups xmmword ptr [rsp+3B8h+var_118.m_translation.m_quad], xmm2
  }
  hknpCollisionQueryDispatcher::castShape((hknpCollisionQueryDispatcher *)m_queryContext->m_dispatcher, m_queryContext, &query, v151, targetShape, &targetShapeFilterData, &targetShapeInfo, &queryToTarget, queryAndTargetSwapped, collector, startCollector);
  __asm
  {
    vmovaps xmm15, [rsp+3B8h+var_C8]
    vmovaps xmm14, [rsp+3B8h+var_B8]
    vmovaps xmm13, [rsp+3B8h+var_A8]
    vmovaps xmm12, [rsp+3B8h+var_98]
    vmovaps xmm11, [rsp+3B8h+var_88]
    vmovaps xmm10, [rsp+3B8h+var_78]
    vmovaps xmm9, [rsp+3B8h+var_68]
    vmovaps xmm8, [rsp+3B8h+var_58]
    vmovaps xmm7, [rsp+3B8h+var_48]
    vmovaps xmm6, [rsp+3B8h+var_38]
  }
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

  _RBX = this;
  this->m_childCollector->reset(this->m_childCollector);
  v2 = _RBX->m_earlyOut.m_bool == 0;
  __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
  m_childCollector = _RBX->m_childCollector;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
  }
  if ( !v2 || m_childCollector->m_earlyOut.m_bool )
  {
    _RBX->m_earlyOut.m_bool = 1;
    _RBX->m_numHits = m_childCollector->m_numHits;
  }
  else
  {
    _RBX->m_earlyOut.m_bool = 0;
    _RBX->m_numHits = m_childCollector->m_numHits;
  }
}

