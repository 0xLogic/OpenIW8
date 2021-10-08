/*
==============
hkcdSimdTree::BuildContext::~BuildContext
==============
*/

void __fastcall hkcdSimdTree::BuildContext::~BuildContext(hkcdSimdTree::BuildContext *this)
{
  ??1BuildContext@hkcdSimdTree@@UEAA@XZ(this);
}

/*
==============
hkcdSimdTree::BuildContext::onBuildHierarchy
==============
*/

void __fastcall hkcdSimdTree::BuildContext::onBuildHierarchy(hkcdSimdTree::BuildContext *this, bool multithreaded, int numBranches, int reservedNodes)
{
  ?onBuildHierarchy@BuildContext@hkcdSimdTree@@UEAAX_NHH@Z(this, multithreaded, numBranches, reservedNodes);
}

/*
==============
hkcdSimdTree::ProcessRayCastLeaves::~ProcessRayCastLeaves
==============
*/

void __fastcall hkcdSimdTree::ProcessRayCastLeaves::~ProcessRayCastLeaves(hkcdSimdTree::ProcessRayCastLeaves *this)
{
  ??1ProcessRayCastLeaves@hkcdSimdTree@@UEAA@XZ(this);
}

/*
==============
hkcdSimdTree::LeafCollector::~LeafCollector
==============
*/

void __fastcall hkcdSimdTree::LeafCollector::~LeafCollector(hkcdSimdTree::LeafCollector *this)
{
  ??1LeafCollector@hkcdSimdTree@@UEAA@XZ(this);
}

/*
==============
hkcdSimdTree::LeafCollector::~LeafCollector
==============
*/
void hkcdSimdTree::LeafCollector::~LeafCollector(hkcdSimdTree::LeafCollector *this)
{
  this->__vftable = (hkcdSimdTree::LeafCollector_vtbl *)hkcdSimdTree::LeafCollector::`vftable';
}

/*
==============
hkcdSimdTree::ProcessRayCastLeaves::~ProcessRayCastLeaves
==============
*/
void hkcdSimdTree::ProcessRayCastLeaves::~ProcessRayCastLeaves(hkcdSimdTree::ProcessRayCastLeaves *this)
{
  this->__vftable = (hkcdSimdTree::ProcessRayCastLeaves_vtbl *)hkcdSimdTree::ProcessRayCastLeaves::`vftable';
}

/*
==============
hkcdSimdTree::BuildContext::~BuildContext
==============
*/
void hkcdSimdTree::BuildContext::~BuildContext(hkcdSimdTree::BuildContext *this)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v4; 
  int v5; 

  this->__vftable = (hkcdSimdTree::BuildContext_vtbl *)hkcdSimdTree::BuildContext::`vftable';
  v2 = hkMemHeapAllocator();
  this->m_compounds.m_size = 0;
  m_capacityAndFlags = this->m_compounds.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_compounds.m_data, 32, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_compounds.m_data = NULL;
  this->m_compounds.m_capacityAndFlags = 0x80000000;
  v4 = hkMemHeapAllocator();
  this->m_points.m_size = 0;
  v5 = this->m_points.m_capacityAndFlags;
  if ( v5 >= 0 )
    hkMemoryAllocator::bufFree2(v4, this->m_points.m_data, 16, v5 & 0x3FFFFFFF);
  this->m_points.m_data = NULL;
  this->m_points.m_capacityAndFlags = 0x80000000;
}

/*
==============
hkcdSimdTree::BuildContext::onBuildHierarchy
==============
*/
void hkcdSimdTree::BuildContext::onBuildHierarchy(hkcdSimdTree::BuildContext *this, bool multithreaded, int numBranches, int reservedNodes)
{
  ;
}

