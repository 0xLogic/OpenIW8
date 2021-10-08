/*
==============
hknpCollisionQueryCollector::reset
==============
*/

void __fastcall hknpCollisionQueryCollector::reset(hknpCollisionQueryCollector *this)
{
  ?reset@hknpCollisionQueryCollector@@UEAAXXZ(this);
}

/*
==============
hknpCollisionQueryCollector::getHits
==============
*/

const hknpCollisionResult *__fastcall hknpCollisionQueryCollector::getHits(hknpCollisionQueryCollector *this)
{
  return ?getHits@hknpCollisionQueryCollector@@UEBAPEBUhknpCollisionResult@@XZ(this);
}

/*
==============
hknpCollisionQueryCollector::~hknpCollisionQueryCollector
==============
*/

void __fastcall hknpCollisionQueryCollector::~hknpCollisionQueryCollector(hknpCollisionQueryCollector *this)
{
  ??1hknpCollisionQueryCollector@@UEAA@XZ(this);
}

/*
==============
hknpCollisionQueryCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall hknpCollisionQueryCollector::processClosestPointsCvxCvx(hknpCollisionQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@hknpCollisionQueryCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, m_dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
hknpCollisionQueryCollector::~hknpCollisionQueryCollector
==============
*/
void hknpCollisionQueryCollector::~hknpCollisionQueryCollector(hknpCollisionQueryCollector *this)
{
  this->__vftable = (hknpCollisionQueryCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(this);
}

/*
==============
hknpCollisionQueryCollector::getHits
==============
*/
const hknpCollisionResult *hknpCollisionQueryCollector::getHits(hknpCollisionQueryCollector *this)
{
  return 0i64;
}

/*
==============
hknpCollisionQueryCollector::processClosestPointsCvxCvx
==============
*/
void hknpCollisionQueryCollector::processClosestPointsCvxCvx(hknpCollisionQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query)
{
  ;
}

/*
==============
hknpCollisionQueryCollector::reset
==============
*/
void hknpCollisionQueryCollector::reset(hknpCollisionQueryCollector *this)
{
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
}

