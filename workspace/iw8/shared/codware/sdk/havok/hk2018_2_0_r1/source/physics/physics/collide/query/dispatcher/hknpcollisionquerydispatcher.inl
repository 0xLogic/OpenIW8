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
  __m128 v13; 
  unsigned int v14; 
  const hknpBody *m_body; 
  const hkTransformf *m_shapeToWorld; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  int m_serialAndIndex; 
  __int128 v25[2]; 
  int v26; 
  int v27; 
  unsigned int m_value; 
  int v29; 
  unsigned __int16 v30; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v33; 
  unsigned int v34; 
  int v35; 
  unsigned __int16 v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  __int128 v40[2]; 
  hkSimdFloat32 v41; 

  m_type = query->m_type;
  v41.m_real = (__m128)collector->m_earlyOutThreshold;
  if ( !((unsigned __int8 (__fastcall *)(const hknpConvexVertexShape *, const hknpConvexVertexShape *, const hkTransformf *, _QWORD, __int128 *))this->m_preScaledCvxClosestPointTable[m_type][target->m_type])(query, target, queryToTarget, collector->m_hints.m_storage, v40) )
    return 0;
  v13 = (__m128)v40[0];
  v14 = 0xFFFFFF;
  m_body = queryInfo->m_body;
  v39 = 4i64;
  v26 = v41.m_real.m128_i32[0];
  m_shapeToWorld = targetInfo->m_shapeToWorld;
  v17 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v13, v13, 85), m_shapeToWorld->m_rotation.m_col1.m_quad), _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 0), m_shapeToWorld->m_rotation.m_col0.m_quad));
  v18 = _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 170), m_shapeToWorld->m_rotation.m_col2.m_quad);
  v19 = (__m128)v40[1];
  v25[0] = (__int128)_mm128_add_ps(_mm128_add_ps(v17, v18), m_shapeToWorld->m_translation.m_quad);
  v20 = _mm128_mul_ps(_mm_shuffle_ps(v19, v19, 85), m_shapeToWorld->m_rotation.m_col1.m_quad);
  v21 = _mm128_mul_ps(_mm_shuffle_ps(v19, v19, 0), m_shapeToWorld->m_rotation.m_col0.m_quad);
  v22 = _mm128_mul_ps(_mm_shuffle_ps(v19, v19, 170), m_shapeToWorld->m_rotation.m_col2.m_quad);
  m_value = queryInfo->m_shapeKeyPath.m_key.m_value;
  v30 = queryFilterData->m_materialId.m_value;
  m_collisionFilterInfo = queryFilterData->m_collisionFilterInfo;
  m_userData = queryFilterData->m_userData;
  v29 = -1;
  v25[1] = (__int128)_mm128_add_ps(_mm128_add_ps(v20, v21), v22);
  if ( m_body )
    m_serialAndIndex = m_body->m_id.m_serialAndIndex;
  else
    m_serialAndIndex = 0xFFFFFF;
  v27 = m_serialAndIndex;
  if ( targetInfo->m_body )
    v14 = targetInfo->m_body->m_id.m_serialAndIndex;
  v34 = targetInfo->m_shapeKeyPath.m_key.m_value;
  v33 = v14;
  v36 = targetFilterData->m_materialId.m_value;
  v37 = targetFilterData->m_collisionFilterInfo;
  v38 = targetFilterData->m_userData;
  v35 = *(_DWORD *)initialQuery->m_levelOfDetail;
  collector->addHit(collector, (const hknpCollisionResult *)v25);
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

