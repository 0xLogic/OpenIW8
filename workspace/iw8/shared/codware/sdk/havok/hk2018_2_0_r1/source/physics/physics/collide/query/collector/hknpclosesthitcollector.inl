/*
==============
hknpClosestHitCollector::~hknpClosestHitCollector
==============
*/

void __fastcall hknpClosestHitCollector::~hknpClosestHitCollector(hknpClosestHitCollector *this)
{
  ??1hknpClosestHitCollector@@UEAA@XZ(this);
}

/*
==============
hknpClosestHitCollector::getHits
==============
*/

const hknpCollisionResult *__fastcall hknpClosestHitCollector::getHits(hknpClosestHitCollector *this)
{
  return ?getHits@hknpClosestHitCollector@@UEBAPEBUhknpCollisionResult@@XZ(this);
}

/*
==============
hknpClosestHitCollector::reset
==============
*/

void __fastcall hknpClosestHitCollector::reset(hknpClosestHitCollector *this)
{
  ?reset@hknpClosestHitCollector@@UEAAXXZ(this);
}

/*
==============
hknpClosestHitCollector::~hknpClosestHitCollector
==============
*/
void hknpClosestHitCollector::~hknpClosestHitCollector(hknpClosestHitCollector *this)
{
  this->__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(this);
}

/*
==============
hknpClosestHitCollector::getHits
==============
*/
hknpCollisionResult *hknpClosestHitCollector::getHits(hknpClosestHitCollector *this)
{
  return &this->m_hit;
}

/*
==============
hknpClosestHitCollector::reset
==============
*/
void hknpClosestHitCollector::reset(hknpClosestHitCollector *this)
{
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  this->m_hit.m_fraction = 3.40282e38;
  this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups ymmword ptr [rcx+30h], ymm0
  }
  *(_QWORD *)&this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_hitBodyInfo.m_filterData.m_userData = 0i64;
}

