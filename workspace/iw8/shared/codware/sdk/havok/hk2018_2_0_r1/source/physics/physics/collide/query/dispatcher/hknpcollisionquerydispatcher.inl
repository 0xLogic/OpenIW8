/*
==============
hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>
==============
*/

bool __fastcall hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>(hknpCollisionQueryDispatcher *this, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget, hknpCollisionQueryCollector *collector)
{
  return ??$_getClosestPointsCvxCvxPreScaledImpl@VhknpCollisionQueryCollector@@UhknpClosestPointsQuery@@UhknpCollisionResult@@@hknpCollisionQueryDispatcher@@QEBA_NAEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@123AEBVhkTransformf@@PEAVhknpCollisionQueryCollector@@@Z(this, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget, collector);
}

/*
==============
hknpScaledConvexVertexShape::~hknpScaledConvexVertexShape
==============
*/

void __fastcall hknpScaledConvexVertexShape::~hknpScaledConvexVertexShape(hknpScaledConvexVertexShape *this)
{
  ??1hknpScaledConvexVertexShape@@QEAA@XZ(this);
}

/*
==============
hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>
==============
*/
char hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>(hknpCollisionQueryDispatcher *this, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget, hknpCollisionQueryCollector *collector)
{
  __int64 m_type; 
  unsigned int v17; 
  const hknpBody *m_body; 
  int m_serialAndIndex; 
  __int128 v39[2]; 
  int v41; 
  unsigned int m_value; 
  int v43; 
  unsigned __int16 v44; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v47; 
  unsigned int v48; 
  int v49; 
  unsigned __int16 v50; 
  unsigned int v51; 
  unsigned __int64 v52; 
  __int64 v53; 
  __int128 v54[2]; 

  _RBX = collector;
  m_type = query->m_type;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovups [rbp+27h+var_30], xmm0
  }
  if ( !((unsigned __int8 (__fastcall *)(const hknpConvexVertexShape *, const hknpConvexVertexShape *, const hkTransformf *, _QWORD, __int128 *))this->m_preScaledCvxClosestPointTable[m_type][target->m_type])(query, target, queryToTarget, collector->m_hints.m_storage, v54) )
    return 0;
  __asm
  {
    vmovups xmm5, [rbp+27h+var_50]
    vmovups xmm0, [rbp+27h+var_30]
  }
  v17 = 0xFFFFFF;
  m_body = queryInfo->m_body;
  v53 = 4i64;
  __asm
  {
    vmovss  [rbp+27h+var_A0], xmm0
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vshufps xmm1, xmm5, xmm5, 0
    vmulps  xmm3, xmm0, xmmword ptr [rax+10h]
    vmulps  xmm2, xmm1, xmmword ptr [rax]
    vaddps  xmm4, xmm3, xmm2
    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmmword ptr [rax+20h]
    vmovups xmm5, [rbp+27h+var_40]
    vaddps  xmm2, xmm4, xmm1
    vaddps  xmm3, xmm2, xmmword ptr [rax+30h]
    vmovups [rsp+0F0h+var_C0], xmm3
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vmulps  xmm3, xmm0, xmmword ptr [rax+10h]
    vshufps xmm1, xmm5, xmm5, 0
    vmulps  xmm2, xmm1, xmmword ptr [rax]
    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
    vmulps  xmm1, xmm0, xmmword ptr [rax+20h]
  }
  m_value = queryInfo->m_shapeKeyPath.m_key.m_value;
  v44 = queryFilterData->m_materialId.m_value;
  m_collisionFilterInfo = queryFilterData->m_collisionFilterInfo;
  m_userData = queryFilterData->m_userData;
  v43 = -1;
  __asm
  {
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm2, xmm4, xmm1
    vmovups [rsp+0F0h+var_B0], xmm2
  }
  if ( m_body )
    m_serialAndIndex = m_body->m_id.m_serialAndIndex;
  else
    m_serialAndIndex = 0xFFFFFF;
  v41 = m_serialAndIndex;
  if ( targetInfo->m_body )
    v17 = targetInfo->m_body->m_id.m_serialAndIndex;
  v48 = targetInfo->m_shapeKeyPath.m_key.m_value;
  v47 = v17;
  v50 = targetFilterData->m_materialId.m_value;
  v51 = targetFilterData->m_collisionFilterInfo;
  v52 = targetFilterData->m_userData;
  v49 = *(_DWORD *)initialQuery->m_levelOfDetail;
  collector->addHit(collector, (const hknpCollisionResult *)v39);
  return 1;
}

/*
==============
hknpScaledConvexVertexShape::~hknpScaledConvexVertexShape
==============
*/
void hknpScaledConvexVertexShape::~hknpScaledConvexVertexShape(hknpScaledConvexVertexShape *this)
{
  int m_numVertices; 
  hkcdVertex *m_vertices; 
  hkMemoryRouter *Value; 
  signed int v4; 
  int v5; 

  if ( this->m_isScaled )
  {
    m_numVertices = this->m_numVertices;
    m_vertices = (hkcdVertex *)this->m_vertices;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v4 = (16 * m_numVertices + 127) & 0xFFFFFF80;
    v5 = (v4 + 15) & 0xFFFFFFF0;
    if ( v4 > Value->m_stack.m_slabSize || (char *)m_vertices + v5 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_vertices )
      hkLifoAllocator::slowBlockFree(&Value->m_stack, m_vertices, v5);
    else
      Value->m_stack.m_cur = m_vertices;
  }
}

