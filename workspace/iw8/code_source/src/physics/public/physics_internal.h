/*
==============
HavokPhysics_IgnoreBodies::operator delete
==============
*/

void __fastcall HavokPhysics_IgnoreBodies::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysics_IgnoreBodies@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysics_IgnoreBodies::operator delete
==============
*/
void HavokPhysics_IgnoreBodies::operator delete(void *p, unsigned __int64 nbytes)
{
  hkMemoryRouter *Value; 

  if ( p )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, 56);
  }
}

