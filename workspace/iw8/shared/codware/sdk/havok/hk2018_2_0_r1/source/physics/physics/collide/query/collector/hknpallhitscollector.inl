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
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 

  this->__vftable = (hknpAllHitsCollector_vtbl *)hknpAllHitsCollector::`vftable';
  this->m_numHits = 0;
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
  v2 = hkMemHeapAllocator();
  this->m_hits.m_size = 0;
  m_capacityAndFlags = this->m_hits.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_hits.m_data, 112, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_hits.m_data = NULL;
  this->m_hits.m_capacityAndFlags = 0x80000000;
  this->__vftable = (hknpAllHitsCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(this);
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
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
}

