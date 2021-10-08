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
  const unsigned int *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v20; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_simdTreeMask; 
  const StaticModels_HavokShape *m_targetShape; 
  __int64 v24; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  char v28; 
  bool v29; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  int v34; 
  int v35; 
  const void *CollisionTileModelShape; 
  bool v37; 
  __int64 m_shapeTagCodec; 
  const StaticModels_HavokShape *v39; 
  void (__fastcall *v40)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __int128 *); 
  const hknpShapeQueryInfo *v41; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  _BOOL8 v45; 
  const hknpRayCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  __int64 *v48; 
  hknpCollisionQueryCollector *m_collector; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v144; 
  __int64 v145; 
  bool v148; 
  int v163; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v165; 
  StaticModels_HavokShapeInstance *v166; 
  __int64 v167; 
  __int64 v168; 
  __int128 v169; 
  __int64 v170; 
  const unsigned int *v171; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  __int64 v176; 
  int v177; 
  __int64 v178; 
  __int16 v179; 
  int v180; 
  __int64 v181; 
  __int64 v182; 
  __int64 v183; 
  const StaticModels_HavokShape *v184; 
  int v185; 
  __int64 v186; 
  __int64 v187[2]; 
  const StaticModels_HavokShape *m_parentShape; 
  int v189; 
  int m_size; 
  const hkTransformf *m_shapeToWorld; 
  __int64 v192; 
  bool m_isScaled; 
  unsigned int m_mode; 
  vec3_t origin; 
  char v199[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v202[3]; 
  __m256i v204; 
  unsigned int m_storage; 
  _BYTE v210[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  _R12 = this->m_query;
  v16 = leaves;
  v17 = numLeaves;
  v168 = numLeaves;
  v171 = leaves;
  if ( numLeaves > 0 )
  {
    v18 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovss  xmm6, cs:__real@3d000000
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [r11-0A8h], xmm13
      vmovaps xmmword ptr [r11-0B8h], xmm14
      vmovaps xmmword ptr [r11-0C8h], xmm15
    }
    v167 = 0i64;
    do
    {
      v20 = (int)v16[v18];
      m_simdTreeMask = _R12->m_simdTreeMask;
      if ( !m_simdTreeMask || ((m_simdTreeMask->m_enableInstances.m_storage.m_words.m_data[v20 >> 5] >> (v20 & 0x1F)) & 1) != 0 )
      {
        m_targetShape = _R12->m_targetShape;
        _RAX = _R12->m_collector;
        v24 = (unsigned __int16)v20;
        m_data = _R12->m_targetShape->m_instances.m_data;
        __asm { vmovups xmm13, xmmword ptr [rax+10h] }
        v166 = m_data;
        m_modelIdxAndFlags = m_data[(unsigned __int16)v20].m_modelIdxAndFlags;
        v28 = 0;
        v29 = m_modelIdxAndFlags == 0;
        if ( m_modelIdxAndFlags < 0 )
        {
          _RAX = _R12->m_targetShapeFilterData;
          __asm { vmovups xmm0, xmmword ptr [rax] }
          m_targetShapeInfo = _R12->m_targetShapeInfo;
          __asm { vmovups [rsp+3A8h+var_328], xmm0 }
          m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
          m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
          v34 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
          v163 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
          v35 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | ((((_DWORD)v20 + 1) << (32 - (LOBYTE(m_shapeKeyPath.m_size) + m_numShapeKeyBits))) - 1);
          CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
          v165 = (__int64)CollisionTileModelShape;
          v37 = 1;
          m_shapeTagCodec = (__int64)_R12->m_query->m_shapeTagCodec;
          v170 = m_shapeTagCodec;
          if ( m_shapeTagCodec )
          {
            v39 = _R12->m_targetShape;
            v40 = *(void (__fastcall **)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __int128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
            v41 = _R12->m_targetShapeInfo;
            m_rootShape = v41->m_rootShape;
            m_body = v41->m_body;
            CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v166[(unsigned __int16)v20].m_modelIdxAndFlags & 0x4000) != 0, _R12->m_targetShape->m_tileIdx, v166[(unsigned __int16)v20].m_modelIdxAndFlags & 0x3FFF);
            v40(v170, CollisionTileModelShapeTag, 1i64, m_body, m_rootShape, v39, v35, v165, &v169);
            m_query = _R12->m_query;
            m_filter = m_query->m_filter;
            if ( m_filter )
            {
              v48 = (__int64 *)_R12->m_targetShapeInfo;
              CollisionTileModelShape = (const void *)v165;
              m_collisionFilterInfo = 0;
              m_value = -1;
              LOBYTE(v45) = 1;
              m_userData = 0i64;
              m_value = m_query->m_filterData.m_materialId.m_value;
              m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
              m_userData = m_query->m_filterData.m_userData;
              v179 = v169;
              v180 = DWORD1(v169);
              v181 = *((_QWORD *)&v169 + 1);
              v176 = 0i64;
              v177 = -1;
              v178 = 0i64;
              __asm
              {
                vpxor   xmm0, xmm0, xmm0
                vmovdqu [rsp+3A8h+var_2F8], xmm0
              }
              v182 = *v48;
              v183 = v48[1];
              v184 = _R12->m_targetShape;
              v185 = v35;
              v186 = v165;
              v37 = m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, v45, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v179);
            }
            else
            {
              v37 = 1;
              CollisionTileModelShape = (const void *)v165;
            }
            v34 = v163;
            m_data = v166;
            v24 = (unsigned __int16)v20;
          }
          v28 = 0;
          v29 = !v37;
          if ( v37 )
          {
            *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(_R12->m_targetShape->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx);
            __asm
            {
              vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
              vmovaps xmm14, xmm0
              vshufps xmm14, xmm14, xmm14, 0
              vrcpps  xmm3, xmm14
              vmulps  xmm2, xmm14, xmm3
              vsubps  xmm2, xmm1, xmm2
              vmulps  xmm15, xmm2, xmm3
            }
            StaticModels_GetCollisionTileModelInstanceTransform(_R12->m_targetShape->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx, &origin, &orientationAsQuat);
            __asm
            {
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
              vmovups xmm0, xmmword ptr [rsp+3A8h+var_1E8]
              vmovups ymmword ptr [rsp+3A8h+var_228], ymm1
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
              vmovups ymmword ptr [rsp+3A8h+var_228+20h], ymm1
              vmovups xmmword ptr [rsp+3A8h+qi.m_vec.m_quad], xmm0
            }
            hkRotationImpl<float>::set((hkRotationImpl<float> *)v199, &qi);
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rsp+3A8h+origin+4]
              vmulss  xmm1, xmm6, dword ptr [rsp+3A8h+origin]
              vmulss  xmm2, xmm6, dword ptr [rsp+3A8h+origin+8]
              vmovups xmm12, xmmword ptr [rsp+3A8h+var_228+20h]
              vmovups xmm11, xmmword ptr [rsp+3A8h+var_228+10h]
              vmovups xmm9, xmmword ptr [rsp+3A8h+var_228]
            }
            _RDX = _R12->m_targetShapeInfo;
            __asm
            {
              vmovss  dword ptr [rsp+3A8h+var_228+34h], xmm0
              vmovss  dword ptr [rsp+3A8h+var_228+30h], xmm1
              vmovss  dword ptr [rsp+3A8h+var_228+38h], xmm2
              vxorps  xmm0, xmm0, xmm0
              vmovss  dword ptr [rsp+3A8h+var_228+3Ch], xmm0
            }
            _RAX = _RDX->m_shapeToWorld;
            __asm
            {
              vmovups xmm10, xmmword ptr [rsp+3A8h+var_228+30h]
              vshufps xmm0, xmm10, xmm10, 55h ; 'U'
              vshufps xmm1, xmm10, xmm10, 0
              vmovups ymm7, ymmword ptr [rax]
              vmovups xmm8, xmmword ptr [rax+20h]
              vextractf128 xmm6, ymm7, 1
              vmulps  xmm2, xmm0, xmm6
              vmulps  xmm0, xmm1, xmm7
              vaddps  xmm3, xmm2, xmm0
              vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
              vmulps  xmm2, xmm1, xmm8
              vaddps  xmm5, xmm3, xmm2
              vshufps xmm0, xmm12, xmm12, 55h ; 'U'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm12, xmm12, 0
              vmulps  xmm2, xmm1, xmm7
              vaddps  xmm4, xmm3, xmm2
              vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
              vmulps  xmm1, xmm0, xmm8
              vaddps  xmm2, xmm4, xmm1
              vmovups [rsp+3A8h+var_1A8], xmm2
              vshufps xmm0, xmm11, xmm11, 55h ; 'U'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm11, xmm11, 0
              vmulps  xmm2, xmm1, xmm7
              vaddps  xmm4, xmm3, xmm2
              vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
              vmulps  xmm1, xmm0, xmm8
              vaddps  xmm2, xmm4, xmm1
              vshufps xmm0, xmm9, xmm9, 55h ; 'U'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm9, xmm9, 0
              vmovups [rsp+3A8h+var_1B8], xmm2
              vmulps  xmm2, xmm1, xmm7
              vaddps  xmm4, xmm3, xmm2
              vmovups [rsp+3A8h+var_198], xmm5
              vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
            }
            _RCX = _R12->m_query;
            m_collector = _R12->m_collector;
            __asm
            {
              vmulps  xmm1, xmm0, xmm8
              vaddps  xmm2, xmm4, xmm1
              vmovups xmm4, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
              vmovups [rsp+3A8h+var_1C8], xmm2
              vaddps  xmm0, xmm5, xmmword ptr [rax+30h]
              vmovups [rsp+3A8h+var_198], xmm0
              vmovups ymm0, ymmword ptr [rcx]
              vmovups [rsp+3A8h+var_188], ymm0
              vmovsd  xmm1, qword ptr [rcx+20h]
              vmovsd  [rsp+3A8h+var_168], xmm1
              vmovups xmm0, xmmword ptr [rcx+30h]
              vmovups [rsp+3A8h+var_158], xmm0
              vmovups xmm1, xmmword ptr [rcx+40h]
              vmovups [rsp+3A8h+var_148], xmm1
              vmovups xmm0, xmmword ptr [rcx+50h]
              vmovups [rsp+3A8h+var_138], xmm0
            }
            m_storage = _RCX->m_flags.m_storage;
            __asm
            {
              vmovups xmm3, xmmword ptr [rcx+40h]
              vmovups xmm0, xmmword ptr [rcx+30h]
              vsubps  xmm5, xmm0, xmm10
              vdpps   xmm0, xmm9, xmm3, 71h ; 'q'
              vdpps   xmm1, xmm11, xmm3, 72h ; 'r'
              vorps   xmm2, xmm1, xmm0
              vdpps   xmm1, xmm12, xmm3, 74h ; 't'
              vorps   xmm2, xmm2, xmm1
              vmulps  xmm0, xmm2, xmm15
              vblendps xmm3, xmm0, xmmword ptr [r8+10h], 8
            }
            v189 = -1;
            m_size = 0;
            __asm
            {
              vxorps  xmm2, xmm2, xmm2
              vcmpeqps xmm0, xmm2, xmm3
              vandnps xmm1, xmm0, xmm3
              vmovups [rsp+3A8h+var_148], xmm1
              vcmpeqps xmm0, xmm2, xmm1
              vrcpps  xmm3, xmm1
              vmulps  xmm2, xmm3, xmm1
              vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
              vsubps  xmm2, xmm1, xmm2
              vmulps  xmm3, xmm2, xmm3
              vblendvps xmm1, xmm3, xmm4, xmm0
              vmovups [rsp+3A8h+var_138], xmm1
              vdpps   xmm0, xmm9, xmm5, 71h ; 'q'
              vdpps   xmm2, xmm11, xmm5, 72h ; 'r'
              vorps   xmm3, xmm2, xmm0
              vdpps   xmm1, xmm12, xmm5, 74h ; 't'
              vorps   xmm2, xmm3, xmm1
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
              vmovups [rsp+3A8h+var_118], ymm1
              vmulps  xmm0, xmm2, xmm15
              vmovups [rsp+3A8h+var_158], xmm0
              vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
              vmovups [rsp+3A8h+var_F8], ymm0
            }
            v187[0] = (__int64)_RDX->m_body;
            v187[1] = (__int64)_RDX->m_rootShape;
            m_parentShape = (const StaticModels_HavokShape *)_RDX->m_parentShape;
            v189 = _RDX->m_shapeKeyPath.m_key.m_value;
            m_size = _RDX->m_shapeKeyPath.m_size;
            m_shapeToWorld = _RDX->m_shapeToWorld;
            v192 = 0i64;
            m_isScaled = _RDX->m_scalingInternals.m_isScaled;
            m_mode = _RDX->m_scalingInternals.m_mode;
            __asm
            {
              vmovups xmm0, xmmword ptr [rdx+40h]
              vmovups [rsp+3A8h+var_258], xmm0
              vmovups xmm1, xmmword ptr [rdx+50h]
              vmovups [rsp+3A8h+var_248], xmm1
              vmovss  xmm0, dword ptr [rdx+38h]
              vmovss  [rsp+3A8h+var_260], xmm0
            }
            m_shapeToWorld = (const hkTransformf *)v210;
            m_parentShape = _R12->m_targetShape;
            v144 = _R12->m_simdTreeMask;
            v189 = v35;
            m_size = v34;
            if ( v144 )
              v145 = (__int64)v144->m_instanceMasks.m_data[v20];
            else
              v145 = 0i64;
            v192 = v145;
            _R12->m_scaleAndTransformCollector.m_transform = (const hkTransformf *)v202;
            __asm
            {
              vmovups xmm0, xmmword ptr [r12+50h]
              vmovups xmmword ptr [r12+70h], xmm14
              vmovups xmmword ptr [r12+80h], xmm15
            }
            _R12->m_scaleAndTransformCollector.m_childCollector = m_collector;
            _R12->m_scaleAndTransformCollector.m_hints.m_storage = m_collector->m_hints.m_storage;
            __asm
            {
              vminps  xmm1, xmm0, xmmword ptr [r8+10h]
              vmovups xmmword ptr [r12+50h], xmm1
            }
            v148 = _R12->m_scaleAndTransformCollector.m_earlyOut.m_bool || m_collector->m_earlyOut.m_bool;
            _R12->m_scaleAndTransformCollector.m_earlyOut.m_bool = v148;
            _R12->m_scaleAndTransformCollector.m_numHits = m_collector->m_numHits;
            (*(void (__fastcall **)(const void *, hknpCollisionQueryContext *, __m256i *, __int128 *, __int64 *, StaticModels_HavokShapeEx::ScaleAndTransformCollector *))(*(_QWORD *)CollisionTileModelShape + 184i64))(CollisionTileModelShape, _R12->m_queryContext, &v204, &v169, v187, &_R12->m_scaleAndTransformCollector);
            __asm { vmovss  xmm6, cs:__real@3d000000 }
          }
          v17 = v168;
          v18 = v167;
        }
        _RAX = _R12->m_collector;
        __asm { vucomiss xmm13, dword ptr [rax+10h] }
        _R12->m_hasHit |= !(v28 | v29);
      }
      v16 = v171;
      v167 = ++v18;
    }
    while ( v18 < v17 );
    __asm
    {
      vmovaps xmm15, [rsp+3A8h+var_C8]
      vmovaps xmm14, [rsp+3A8h+var_B8]
      vmovaps xmm13, [rsp+3A8h+var_A8]
      vmovaps xmm12, [rsp+3A8h+var_98]
      vmovaps xmm11, [rsp+3A8h+var_88]
      vmovaps xmm10, [rsp+3A8h+var_78]
      vmovaps xmm9, [rsp+3A8h+var_68]
      vmovaps xmm8, [rsp+3A8h+var_58]
      vmovaps xmm7, [rsp+3A8h+var_48]
      vmovaps xmm6, [rsp+3A8h+var_38]
    }
  }
  if ( _R12->m_earlyExit && _R12->m_hasHit )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  else
  {
    _RAX = _R12->m_collector;
    __asm { vmovups xmm0, xmmword ptr [rax+10h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process
==============
*/
float hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::process(hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0> *this, const unsigned int *leaves, int numLeaves, const hkcdRay *ray)
{
  const unsigned int *v16; 
  __int64 v18; 
  const StaticModels_HavokShape *m_targetShape; 
  unsigned int v21; 
  __int64 v23; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  char v26; 
  bool v27; 
  const hknpShapeQueryInfo *m_targetShapeInfo; 
  int m_numShapeKeyBits; 
  int v32; 
  const void *CollisionTileModelShape; 
  bool v34; 
  __int64 m_shapeTagCodec; 
  const StaticModels_HavokShape *v36; 
  void (__fastcall *v37)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __int128 *); 
  const hknpShapeQueryInfo *v38; 
  const hknpShape *m_rootShape; 
  const hknpBody *m_body; 
  unsigned __int16 CollisionTileModelShapeTag; 
  const hknpRayCastQuery *m_query; 
  const hknpCollisionFilter *m_filter; 
  __int64 *v44; 
  hknpCollisionQueryCollector *m_collector; 
  bool v142; 
  bool m_hasHit; 
  hknpShapeKeyPath m_shapeKeyPath; 
  __int64 v158; 
  int v159; 
  __int64 v160; 
  StaticModels_HavokShapeInstance *v161; 
  __int64 v162; 
  __int128 v164; 
  __int64 v165; 
  __int64 v166; 
  unsigned __int16 m_value; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  __int64 v171; 
  int v172; 
  __int64 v173; 
  __int16 v174; 
  int v175; 
  __int64 v176; 
  __int64 v177; 
  __int64 v178; 
  const StaticModels_HavokShape *v179; 
  int v180; 
  __int64 v181; 
  __int64 v182[2]; 
  const StaticModels_HavokShape *m_parentShape; 
  int v184; 
  int m_size; 
  const hkTransformf *m_shapeToWorld; 
  __int64 v187; 
  bool m_isScaled; 
  unsigned int m_mode; 
  vec3_t origin; 
  char v194[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v197[3]; 
  __m256i v199; 
  unsigned int m_storage; 
  _BYTE v205[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  _R12 = this->m_query;
  v16 = leaves;
  v166 = numLeaves;
  if ( numLeaves <= 0 )
  {
    m_hasHit = _R12->m_hasHit;
  }
  else
  {
    _RDX = _R12->m_collector;
    v18 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovss  xmm6, cs:__real@3d000000
      vmovaps xmmword ptr [r11-0C8h], xmm15
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [r11-0A8h], xmm13
      vmovaps xmmword ptr [r11-0B8h], xmm14
    }
    v162 = 0i64;
    do
    {
      m_targetShape = _R12->m_targetShape;
      v21 = v16[v18];
      __asm { vmovups xmm15, xmmword ptr [rdx+10h] }
      v23 = (unsigned __int16)v21;
      m_data = _R12->m_targetShape->m_instances.m_data;
      v160 = (unsigned __int16)v21;
      v161 = m_data;
      m_modelIdxAndFlags = m_data[(unsigned __int16)v21].m_modelIdxAndFlags;
      v26 = 0;
      v27 = m_modelIdxAndFlags == 0;
      if ( m_modelIdxAndFlags < 0 )
      {
        _RAX = _R12->m_targetShapeFilterData;
        __asm { vmovups xmm0, xmmword ptr [rax] }
        m_targetShapeInfo = _R12->m_targetShapeInfo;
        __asm { vmovups [rsp+3A8h+var_328], xmm0 }
        m_numShapeKeyBits = m_targetShape->m_numShapeKeyBits;
        m_shapeKeyPath = m_targetShapeInfo->m_shapeKeyPath;
        v32 = m_shapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_shapeKeyPath.m_size] | (((v21 + 1) << (32 - (LOBYTE(m_shapeKeyPath.m_size) + m_numShapeKeyBits))) - 1);
        v159 = m_numShapeKeyBits + m_shapeKeyPath.m_size;
        CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_modelIdxAndFlags & 0x4000) != 0, m_targetShape->m_tileIdx, m_modelIdxAndFlags & 0x3FFF);
        v158 = (__int64)CollisionTileModelShape;
        v34 = 1;
        m_shapeTagCodec = (__int64)_R12->m_query->m_shapeTagCodec;
        v165 = m_shapeTagCodec;
        if ( m_shapeTagCodec )
        {
          v36 = _R12->m_targetShape;
          v37 = *(void (__fastcall **)(__int64, _QWORD, __int64, const hknpBody *, const hknpShape *, const StaticModels_HavokShape *, int, __int64, __int128 *))(*(_QWORD *)m_shapeTagCodec + 32i64);
          v38 = _R12->m_targetShapeInfo;
          m_rootShape = v38->m_rootShape;
          m_body = v38->m_body;
          CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((v161[v160].m_modelIdxAndFlags & 0x4000) != 0, _R12->m_targetShape->m_tileIdx, v161[v160].m_modelIdxAndFlags & 0x3FFF);
          v37(v165, CollisionTileModelShapeTag, 1i64, m_body, m_rootShape, v36, v32, v158, &v164);
          m_query = _R12->m_query;
          m_filter = m_query->m_filter;
          if ( m_filter )
          {
            v44 = (__int64 *)_R12->m_targetShapeInfo;
            CollisionTileModelShape = (const void *)v158;
            m_collisionFilterInfo = 0;
            m_value = -1;
            m_userData = 0i64;
            m_value = m_query->m_filterData.m_materialId.m_value;
            m_collisionFilterInfo = m_query->m_filterData.m_collisionFilterInfo;
            m_userData = m_query->m_filterData.m_userData;
            v174 = v164;
            v175 = DWORD1(v164);
            v176 = *((_QWORD *)&v164 + 1);
            v171 = 0i64;
            v172 = -1;
            v173 = 0i64;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu [rsp+3A8h+var_2F8], xmm0
            }
            v177 = *v44;
            v178 = v44[1];
            v179 = _R12->m_targetShape;
            v180 = v32;
            v181 = v158;
            v34 = m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, 1, (const hknpCollisionFilter::FilterInput *)&m_value, (const hknpCollisionFilter::FilterInput *)&v174);
          }
          else
          {
            CollisionTileModelShape = (const void *)v158;
          }
          m_data = v161;
          v23 = v160;
          v18 = v162;
        }
        v26 = 0;
        v27 = !v34;
        if ( v34 )
        {
          *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(_R12->m_targetShape->m_tileIdx, m_data[v23].m_modelIdxAndFlags & 0x3FFF, m_data[v23].m_instanceIdx);
          __asm
          {
            vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
            vmovaps xmm14, xmm0
            vshufps xmm14, xmm14, xmm14, 0
            vrcpps  xmm3, xmm14
            vmulps  xmm2, xmm14, xmm3
            vsubps  xmm2, xmm1, xmm2
            vmulps  xmm13, xmm2, xmm3
          }
          StaticModels_GetCollisionTileModelInstanceTransform(_R12->m_targetShape->m_tileIdx, m_data[v23].m_modelIdxAndFlags & 0x3FFF, m_data[v23].m_instanceIdx, &origin, &orientationAsQuat);
          __asm
          {
            vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
            vmovups xmm0, xmmword ptr [rsp+3A8h+var_1E8]
            vmovups ymmword ptr [rsp+3A8h+var_228], ymm1
            vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
            vmovups ymmword ptr [rsp+3A8h+var_228+20h], ymm1
            vmovups xmmword ptr [rsp+3A8h+qi.m_vec.m_quad], xmm0
          }
          hkRotationImpl<float>::set((hkRotationImpl<float> *)v194, &qi);
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [rsp+3A8h+origin+4]
            vmulss  xmm1, xmm6, dword ptr [rsp+3A8h+origin]
            vmulss  xmm2, xmm6, dword ptr [rsp+3A8h+origin+8]
            vmovups xmm12, xmmword ptr [rsp+3A8h+var_228+20h]
            vmovups xmm11, xmmword ptr [rsp+3A8h+var_228+10h]
            vmovups xmm9, xmmword ptr [rsp+3A8h+var_228]
          }
          _RDX = _R12->m_targetShapeInfo;
          __asm
          {
            vmovss  dword ptr [rsp+3A8h+var_228+34h], xmm0
            vmovss  dword ptr [rsp+3A8h+var_228+30h], xmm1
            vmovss  dword ptr [rsp+3A8h+var_228+38h], xmm2
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rsp+3A8h+var_228+3Ch], xmm0
          }
          _RAX = _RDX->m_shapeToWorld;
          __asm
          {
            vmovups xmm10, xmmword ptr [rsp+3A8h+var_228+30h]
            vshufps xmm0, xmm10, xmm10, 55h ; 'U'
            vshufps xmm1, xmm10, xmm10, 0
            vmovups ymm7, ymmword ptr [rax]
            vmovups xmm8, xmmword ptr [rax+20h]
            vextractf128 xmm6, ymm7, 1
            vmulps  xmm2, xmm0, xmm6
            vmulps  xmm0, xmm1, xmm7
            vaddps  xmm3, xmm2, xmm0
            vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
            vmulps  xmm2, xmm1, xmm8
            vaddps  xmm5, xmm3, xmm2
            vshufps xmm0, xmm12, xmm12, 55h ; 'U'
            vmulps  xmm3, xmm0, xmm6
            vshufps xmm1, xmm12, xmm12, 0
            vmulps  xmm2, xmm1, xmm7
            vaddps  xmm4, xmm3, xmm2
            vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
            vmulps  xmm1, xmm0, xmm8
            vaddps  xmm2, xmm4, xmm1
            vmovups [rsp+3A8h+var_1A8], xmm2
            vshufps xmm0, xmm11, xmm11, 55h ; 'U'
            vmulps  xmm3, xmm0, xmm6
            vshufps xmm1, xmm11, xmm11, 0
            vmulps  xmm2, xmm1, xmm7
            vaddps  xmm4, xmm3, xmm2
            vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
            vmulps  xmm1, xmm0, xmm8
            vaddps  xmm2, xmm4, xmm1
            vshufps xmm0, xmm9, xmm9, 55h ; 'U'
            vmulps  xmm3, xmm0, xmm6
            vshufps xmm1, xmm9, xmm9, 0
            vmovups [rsp+3A8h+var_1B8], xmm2
            vmulps  xmm2, xmm1, xmm7
            vaddps  xmm4, xmm3, xmm2
            vmovups [rsp+3A8h+var_198], xmm5
            vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
          }
          _RCX = _R12->m_query;
          m_collector = _R12->m_collector;
          __asm
          {
            vmulps  xmm1, xmm0, xmm8
            vaddps  xmm2, xmm4, xmm1
            vmovups xmm4, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
            vmovups [rsp+3A8h+var_1C8], xmm2
            vaddps  xmm0, xmm5, xmmword ptr [rax+30h]
            vmovups [rsp+3A8h+var_198], xmm0
            vmovups ymm0, ymmword ptr [rcx]
            vmovups [rsp+3A8h+var_188], ymm0
            vmovsd  xmm1, qword ptr [rcx+20h]
            vmovsd  [rsp+3A8h+var_168], xmm1
            vmovups xmm0, xmmword ptr [rcx+30h]
            vmovups [rsp+3A8h+var_158], xmm0
            vmovups xmm1, xmmword ptr [rcx+40h]
            vmovups [rsp+3A8h+var_148], xmm1
            vmovups xmm0, xmmword ptr [rcx+50h]
            vmovups [rsp+3A8h+var_138], xmm0
          }
          m_storage = _RCX->m_flags.m_storage;
          __asm
          {
            vmovups xmm3, xmmword ptr [rcx+40h]
            vmovups xmm0, xmmword ptr [rcx+30h]
            vsubps  xmm5, xmm0, xmm10
            vdpps   xmm0, xmm9, xmm3, 71h ; 'q'
            vdpps   xmm1, xmm11, xmm3, 72h ; 'r'
            vorps   xmm2, xmm1, xmm0
            vdpps   xmm1, xmm12, xmm3, 74h ; 't'
            vorps   xmm2, xmm2, xmm1
            vmulps  xmm0, xmm2, xmm13
            vblendps xmm3, xmm0, xmmword ptr [r8+10h], 8
          }
          v184 = -1;
          m_size = 0;
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcmpeqps xmm0, xmm2, xmm3
            vandnps xmm1, xmm0, xmm3
            vmovups [rsp+3A8h+var_148], xmm1
            vcmpeqps xmm0, xmm2, xmm1
            vrcpps  xmm3, xmm1
            vmulps  xmm2, xmm3, xmm1
            vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
            vsubps  xmm2, xmm1, xmm2
            vmulps  xmm3, xmm2, xmm3
            vblendvps xmm1, xmm3, xmm4, xmm0
            vmovups [rsp+3A8h+var_138], xmm1
            vdpps   xmm0, xmm9, xmm5, 71h ; 'q'
            vdpps   xmm2, xmm11, xmm5, 72h ; 'r'
            vorps   xmm3, xmm2, xmm0
            vdpps   xmm1, xmm12, xmm5, 74h ; 't'
            vorps   xmm2, xmm3, xmm1
            vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
            vmovups [rsp+3A8h+var_118], ymm1
            vmulps  xmm0, xmm2, xmm13
            vmovups [rsp+3A8h+var_158], xmm0
            vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
            vmovups [rsp+3A8h+var_F8], ymm0
          }
          v182[0] = (__int64)_RDX->m_body;
          v182[1] = (__int64)_RDX->m_rootShape;
          m_parentShape = (const StaticModels_HavokShape *)_RDX->m_parentShape;
          v184 = _RDX->m_shapeKeyPath.m_key.m_value;
          m_size = _RDX->m_shapeKeyPath.m_size;
          m_shapeToWorld = _RDX->m_shapeToWorld;
          v187 = 0i64;
          m_isScaled = _RDX->m_scalingInternals.m_isScaled;
          m_mode = _RDX->m_scalingInternals.m_mode;
          __asm
          {
            vmovups xmm0, xmmword ptr [rdx+40h]
            vmovups [rsp+3A8h+var_258], xmm0
            vmovups xmm1, xmmword ptr [rdx+50h]
            vmovups [rsp+3A8h+var_248], xmm1
            vmovss  xmm0, dword ptr [rdx+38h]
            vmovss  [rsp+3A8h+var_260], xmm0
          }
          m_shapeToWorld = (const hkTransformf *)v205;
          __asm { vmovups xmm0, xmmword ptr [r12+50h] }
          m_parentShape = _R12->m_targetShape;
          m_size = v159;
          _R12->m_scaleAndTransformCollector.m_transform = (const hkTransformf *)v197;
          v184 = v32;
          __asm
          {
            vmovups xmmword ptr [r12+70h], xmm14
            vmovups xmmword ptr [r12+80h], xmm13
          }
          _R12->m_scaleAndTransformCollector.m_childCollector = m_collector;
          _R12->m_scaleAndTransformCollector.m_hints.m_storage = m_collector->m_hints.m_storage;
          __asm
          {
            vminps  xmm1, xmm0, xmmword ptr [r8+10h]
            vmovups xmmword ptr [r12+50h], xmm1
          }
          v142 = _R12->m_scaleAndTransformCollector.m_earlyOut.m_bool || m_collector->m_earlyOut.m_bool;
          _R12->m_scaleAndTransformCollector.m_earlyOut.m_bool = v142;
          _R12->m_scaleAndTransformCollector.m_numHits = m_collector->m_numHits;
          (*(void (__fastcall **)(const void *, hknpCollisionQueryContext *, __m256i *, __int128 *, __int64 *, StaticModels_HavokShapeEx::ScaleAndTransformCollector *))(*(_QWORD *)CollisionTileModelShape + 184i64))(CollisionTileModelShape, _R12->m_queryContext, &v199, &v164, v182, &_R12->m_scaleAndTransformCollector);
          __asm { vmovss  xmm6, cs:__real@3d000000 }
        }
        v16 = leaves;
      }
      _RDX = _R12->m_collector;
      __asm { vucomiss xmm15, dword ptr [rdx+10h] }
      ++v18;
      m_hasHit = _R12->m_hasHit || !(v26 | v27);
      _R12->m_hasHit = m_hasHit;
      v162 = v18;
    }
    while ( v18 < v166 );
    __asm
    {
      vmovaps xmm15, [rsp+3A8h+var_C8]
      vmovaps xmm14, [rsp+3A8h+var_B8]
      vmovaps xmm13, [rsp+3A8h+var_A8]
      vmovaps xmm12, [rsp+3A8h+var_98]
      vmovaps xmm11, [rsp+3A8h+var_88]
      vmovaps xmm10, [rsp+3A8h+var_78]
      vmovaps xmm9, [rsp+3A8h+var_68]
      vmovaps xmm8, [rsp+3A8h+var_58]
      vmovaps xmm7, [rsp+3A8h+var_48]
      vmovaps xmm6, [rsp+3A8h+var_38]
    }
  }
  if ( m_hasHit && _R12->m_earlyExit )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  else
  {
    _RAX = _R12->m_collector;
    __asm { vmovups xmm0, xmmword ptr [rax+10h] }
  }
  return *(float *)&_XMM0;
}

