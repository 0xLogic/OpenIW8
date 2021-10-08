/*
==============
hknpTaskGraph::clear
==============
*/

void __fastcall hknpTaskGraph::clear(hknpTaskGraph *this)
{
  ?clear@hknpTaskGraph@@UEAAXXZ(this);
}

/*
==============
hknpTaskGraph::operator delete
==============
*/

void __fastcall hknpTaskGraph::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hknpTaskGraph@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hknpTaskGraph::hknpTaskGraph
==============
*/

void __fastcall hknpTaskGraph::hknpTaskGraph(hknpTaskGraph *this)
{
  ??0hknpTaskGraph@@QEAA@XZ(this);
}

/*
==============
hknpTaskGraph::hknpTaskGraph
==============
*/
void hknpTaskGraph::hknpTaskGraph(hknpTaskGraph *this)
{
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_nodes.m_data = (hkTaskGraph::Node *)&this->m_nodes.m_storage;
  this->m_nodes.m_size = 0;
  this->m_nodes.m_capacityAndFlags = -2147483632;
  this->m_dependencies.m_data = (hkTaskGraph::Dependency *)&this->m_dependencies.m_storage;
  this->m_dependencies.m_size = 0;
  this->m_dependencies.m_capacityAndFlags = -2147483632;
  this->m_referencedTasks.m_data = NULL;
  this->m_referencedTasks.m_size = 0;
  this->m_referencedTasks.m_capacityAndFlags = 0x80000000;
  this->__vftable = (hknpTaskGraph_vtbl *)hknpTaskGraph::`vftable';
  *(_QWORD *)&this->m_taskIds.m_solveFinalizedId.m_value = -1i64;
  *(_QWORD *)&this->m_taskIds.m_prepareNarrowPhaseId.m_value = -1i64;
  *(_DWORD *)&this->m_taskIds.m_broadPhaseUpdateFinishedId.m_value = -1;
  this->m_taskIds.m_preCollideId.m_value = -1;
  hkTaskGraph::clear(this);
}

/*
==============
hknpTaskGraph::clear
==============
*/
void hknpTaskGraph::clear(hknpTaskGraph *this)
{
  *(_QWORD *)&this->m_taskIds.m_solveFinalizedId.m_value = -1i64;
  *(_QWORD *)&this->m_taskIds.m_prepareNarrowPhaseId.m_value = -1i64;
  *(_DWORD *)&this->m_taskIds.m_broadPhaseUpdateFinishedId.m_value = -1;
  this->m_taskIds.m_preCollideId.m_value = -1;
  hkTaskGraph::clear(this);
}

/*
==============
hknpTaskGraph::operator delete
==============
*/
void hknpTaskGraph::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 544);
  }
}

