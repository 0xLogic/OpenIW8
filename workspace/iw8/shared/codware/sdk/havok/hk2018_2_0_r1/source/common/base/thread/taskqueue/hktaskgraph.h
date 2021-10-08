/*
==============
hkTaskGraph::~hkTaskGraph
==============
*/

void __fastcall hkTaskGraph::~hkTaskGraph(hkTaskGraph *this)
{
  ??1hkTaskGraph@@UEAA@XZ(this);
}

/*
==============
hkTaskGraph::~hkTaskGraph
==============
*/
void hkTaskGraph::~hkTaskGraph(hkTaskGraph *this)
{
  hkMemoryAllocator *v2; 
  hkRefPtr<hkReferencedTask> *m_data; 
  int v4; 
  __int64 i; 
  hkReferencedObject *m_ptr; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v8; 
  int v9; 
  hkMemoryAllocator *v10; 
  int v11; 

  this->__vftable = (hkTaskGraph_vtbl *)hkTaskGraph::`vftable';
  v2 = hkMemHeapAllocator();
  m_data = this->m_referencedTasks.m_data;
  v4 = this->m_referencedTasks.m_size - 1;
  for ( i = v4; i >= 0; --i )
  {
    m_ptr = m_data[i].m_ptr;
    if ( m_ptr )
      hkReferencedObject::removeReference(m_ptr);
  }
  this->m_referencedTasks.m_size = 0;
  m_capacityAndFlags = this->m_referencedTasks.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_referencedTasks.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_referencedTasks.m_data = NULL;
  this->m_referencedTasks.m_capacityAndFlags = 0x80000000;
  v8 = hkMemHeapAllocator();
  this->m_dependencies.m_size = 0;
  v9 = this->m_dependencies.m_capacityAndFlags;
  if ( v9 >= 0 )
    hkMemoryAllocator::bufFree2(v8, this->m_dependencies.m_data, 4, v9 & 0x3FFFFFFF);
  this->m_dependencies.m_data = NULL;
  this->m_dependencies.m_capacityAndFlags = 0x80000000;
  v10 = hkMemHeapAllocator();
  this->m_nodes.m_size = 0;
  v11 = this->m_nodes.m_capacityAndFlags;
  if ( v11 >= 0 )
    hkMemoryAllocator::bufFree2(v10, this->m_nodes.m_data, 24, v11 & 0x3FFFFFFF);
  this->m_nodes.m_data = NULL;
  this->m_nodes.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(this);
}

