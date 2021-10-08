/*
==============
HavokPhysics_CollisionQueryDispatcher::operator delete
==============
*/

void __fastcall HavokPhysics_CollisionQueryDispatcher::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysics_CollisionQueryDispatcher@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysics_CollisionQueryDispatcher::operator delete
==============
*/
void HavokPhysics_CollisionQueryDispatcher::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 15080);
  }
}

