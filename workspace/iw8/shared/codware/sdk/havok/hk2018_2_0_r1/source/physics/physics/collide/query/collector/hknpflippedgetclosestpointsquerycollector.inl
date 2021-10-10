/*
==============
hknpFlippedGetClosestPointsQueryCollector::addHit
==============
*/

void __fastcall hknpFlippedGetClosestPointsQueryCollector::addHit(hknpFlippedGetClosestPointsQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  ?addHit@hknpFlippedGetClosestPointsQueryCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, flippedHit);
}

/*
==============
hknpFlippedGetClosestPointsQueryCollector::reset
==============
*/

void __fastcall hknpFlippedGetClosestPointsQueryCollector::reset(hknpFlippedGetClosestPointsQueryCollector *this)
{
  ?reset@hknpFlippedGetClosestPointsQueryCollector@@UEAAXXZ(this);
}

/*
==============
hknpFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall hknpFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx(hknpFlippedGetClosestPointsQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@hknpFlippedGetClosestPointsQueryCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, m_dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
hknpFlippedGetClosestPointsQueryCollector::addHit
==============
*/
void hknpFlippedGetClosestPointsQueryCollector::addHit(hknpFlippedGetClosestPointsQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  __m256i v3; 
  __int128 v4; 
  hknpCollisionQueryCollector *m_childCollector; 
  unsigned __int64 m_userData; 
  __int128 v11; 
  __m128 v13; 
  bool v14; 
  hknpCollisionQueryCollector *v16; 
  bool v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  __int128 v22; 

  v3 = *(__m256i *)flippedHit->m_position.m_quad.m128_f32;
  v20 = *(__m256i *)&flippedHit->m_fraction;
  v4 = *(_OWORD *)&flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  v19 = v3;
  v21 = *(__m256i *)&flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  v22 = v4;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  m_childCollector = this->m_childCollector;
  __asm { vpinsrw xmm0, xmm0, eax, 1 }
  v20.m256i_i64[1] = *(_QWORD *)&flippedHit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
  v20.m256i_i32[4] = *(_DWORD *)flippedHit->m_hitBodyInfo.m_levelOfDetail;
  v20.m256i_i16[12] = flippedHit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
  v20.m256i_i32[7] = flippedHit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
  m_userData = flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  __asm { vpshufd xmm1, xmm0, 40h ; '@' }
  v11 = _XMM1 ^ *(_OWORD *)&flippedHit->m_normal;
  __asm { vbroadcastss xmm1, dword ptr [rdx+20h] }
  v13 = _mm128_mul_ps(_XMM1, flippedHit->m_normal.m_quad);
  *(_OWORD *)&v19.m256i_u64[2] = v11;
  *(__m128 *)v19.m256i_i8 = _mm128_add_ps(v13, flippedHit->m_position.m_quad);
  v21.m256i_i64[0] = m_userData;
  v21.m256i_i64[1] = *(_QWORD *)&flippedHit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
  v21.m256i_i32[4] = *(_DWORD *)flippedHit->m_queryBodyInfo.m_levelOfDetail;
  v21.m256i_i16[12] = flippedHit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
  v21.m256i_i32[7] = flippedHit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
  *(_QWORD *)&v22 = flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v19);
  v14 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  v16 = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  v18 = !v14 || v16->m_earlyOut.m_bool;
  this->m_earlyOut.m_bool = v18;
  this->m_numHits = v16->m_numHits;
}

/*
==============
hknpFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx
==============
*/
void hknpFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx(hknpFlippedGetClosestPointsQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  hknpClosestPointsQuery initialQuerya; 

  *(_DWORD *)initialQuerya.m_levelOfDetail = 2;
  initialQuerya.m_filterData.m_materialId.m_value = -1;
  initialQuerya.m_broadPhaseFilterMask = -5;
  initialQuerya.m_filterData.m_collisionFilterInfo = 0;
  initialQuerya.m_filterData.m_userData = 0i64;
  initialQuerya.m_filter = NULL;
  initialQuerya.m_shapeTagCodec = NULL;
  initialQuerya.m_shape = NULL;
  initialQuerya.m_body = NULL;
  initialQuerya.m_maxDistance = 0.0;
  hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>((hknpCollisionQueryDispatcher *)m_dispatcher, &initialQuerya, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget, this);
}

/*
==============
hknpFlippedGetClosestPointsQueryCollector::reset
==============
*/
void hknpFlippedGetClosestPointsQueryCollector::reset(hknpFlippedGetClosestPointsQueryCollector *this)
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

