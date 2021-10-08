/*
==============
hknpAllHitsCollector::reset
==============
*/

void __fastcall hknpAllHitsCollector::reset(hknpAllHitsCollector *this)
{
  ?reset@hknpAllHitsCollector@@UEAAXXZ(this);
}

/*
==============
hknpAllHitsCollector::getHits
==============
*/

const hknpCollisionResult *__fastcall hknpAllHitsCollector::getHits(hknpAllHitsCollector *this)
{
  return ?getHits@hknpAllHitsCollector@@UEBAPEBUhknpCollisionResult@@XZ(this);
}

/*
==============
hknpAllHitsCollector::~hknpAllHitsCollector
==============
*/

void __fastcall hknpAllHitsCollector::~hknpAllHitsCollector(hknpAllHitsCollector *this)
{
  ??1hknpAllHitsCollector@@UEAA@XZ(this);
}

/*
==============
hknpAllHitsCollector::~hknpAllHitsCollector
==============
*/
void hknpAllHitsCollector::~hknpAllHitsCollector(hknpAllHitsCollector *this)
{
  hknpAllHitsCollector *v1; 
  hkMemoryAllocator *v3; 
  int m_capacityAndFlags; 

  v1 = this;
  this->__vftable = (hknpAllHitsCollector_vtbl *)hknpAllHitsCollector::`vftable';
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
  v3 = hkMemHeapAllocator();
  v1->m_hits.m_size = 0;
  m_capacityAndFlags = v1->m_hits.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v3, v1->m_hits.m_data, 112, m_capacityAndFlags & 0x3FFFFFFF);
  v1->m_hits.m_data = NULL;
  v1->m_hits.m_capacityAndFlags = 0x80000000;
  v1->__vftable = (hknpAllHitsCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(v1);
}

/*
==============
hknpAllHitsCollector::getHits
==============
*/
hknpCollisionResult *hknpAllHitsCollector::getHits(hknpAllHitsCollector *this)
{
  return this->m_hits.m_data;
}

/*
==============
hknpAllHitsCollector::reset
==============
*/
void hknpAllHitsCollector::reset(hknpAllHitsCollector *this)
{
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
}

