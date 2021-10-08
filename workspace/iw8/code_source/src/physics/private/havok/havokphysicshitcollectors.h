/*
==============
HavokPhysicsHitCollectorDummy::~HavokPhysicsHitCollectorDummy
==============
*/

void __fastcall HavokPhysicsHitCollectorDummy::~HavokPhysicsHitCollectorDummy(HavokPhysicsHitCollectorDummy *this)
{
  ??1HavokPhysicsHitCollectorDummy@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsAllHitsCollector::operator delete
==============
*/

void __fastcall HavokPhysicsAllHitsCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsAllHitsCollector@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsAnyHitCollector::operator delete
==============
*/

void __fastcall HavokPhysicsAnyHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsAnyHitCollector@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsHitCollector::operator delete
==============
*/

void __fastcall HavokPhysicsHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsHitCollector@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsClosestHitCollector::operator delete
==============
*/

void __fastcall HavokPhysicsClosestHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsClosestHitCollector@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsAllHitsCollector::operator delete
==============
*/
void HavokPhysicsAllHitsCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 1216);
  }
}

/*
==============
HavokPhysicsAnyHitCollector::operator delete
==============
*/
void HavokPhysicsAnyHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 176);
  }
}

/*
==============
HavokPhysicsClosestHitCollector::operator delete
==============
*/
void HavokPhysicsClosestHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 176);
  }
}

/*
==============
HavokPhysicsHitCollector::operator delete
==============
*/
void HavokPhysicsHitCollector::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 144);
  }
}

/*
==============
HavokPhysicsHitCollectorDummy::~HavokPhysicsHitCollectorDummy
==============
*/
void HavokPhysicsHitCollectorDummy::~HavokPhysicsHitCollectorDummy(HavokPhysicsHitCollectorDummy *this)
{
  this->__vftable = (HavokPhysicsHitCollectorDummy_vtbl *)&HavokPhysicsHitCollectorDummy::`vftable';
}

