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
  hknpCollisionQueryCollector *m_childCollector; 
  unsigned __int64 m_userData; 
  bool v18; 
  hknpCollisionQueryCollector *v20; 
  bool v22; 
  __m256i v23; 
  __m256i v24; 
  __m256i v25; 
  unsigned __int64 v26; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups [rsp+0A8h+var_68], ymm1
    vmovups xmm1, xmmword ptr [rdx+60h]
    vmovups [rsp+0A8h+var_88], ymm0
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups [rsp+0A8h+var_48], ymm0
    vmovups xmmword ptr [r11-28h], xmm1
    vpxor   xmm0, xmm0, xmm0
  }
  _RBX = this;
  m_childCollector = this->m_childCollector;
  __asm { vpinsrw xmm0, xmm0, eax, 1 }
  v24.m256i_i64[1] = *(_QWORD *)&flippedHit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
  v24.m256i_i32[4] = *(_DWORD *)flippedHit->m_hitBodyInfo.m_levelOfDetail;
  v24.m256i_i16[12] = flippedHit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
  v24.m256i_i32[7] = flippedHit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
  m_userData = flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  __asm
  {
    vpshufd xmm1, xmm0, 40h ; '@'
    vxorps  xmm0, xmm1, xmmword ptr [rdx+10h]
    vbroadcastss xmm1, dword ptr [rdx+20h]
    vmulps  xmm2, xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rsp+0A8h+var_88+10h], xmm0
    vaddps  xmm0, xmm2, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+0A8h+var_88], xmm0
  }
  v25.m256i_i64[0] = m_userData;
  v25.m256i_i64[1] = *(_QWORD *)&flippedHit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
  v25.m256i_i32[4] = *(_DWORD *)flippedHit->m_queryBodyInfo.m_levelOfDetail;
  v25.m256i_i16[12] = flippedHit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
  v25.m256i_i32[7] = flippedHit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
  v26 = flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v23);
  v18 = _RBX->m_earlyOut.m_bool == 0;
  __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
  v20 = _RBX->m_childCollector;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
  }
  v22 = !v18 || v20->m_earlyOut.m_bool;
  _RBX->m_earlyOut.m_bool = v22;
  _RBX->m_numHits = v20->m_numHits;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+initialQuery.m_maxDistance], xmm0
  }
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

