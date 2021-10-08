/*
==============
HavokPhysicsDebugDrawViewer::operator delete
==============
*/

void __fastcall HavokPhysicsDebugDrawViewer::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsDebugDrawViewer@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsDebugDrawViewer::getProcessTag
==============
*/

int __fastcall HavokPhysicsDebugDrawViewer::getProcessTag(HavokPhysicsDebugDrawViewer *this)
{
  return ?getProcessTag@HavokPhysicsDebugDrawViewer@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsDebugDrawViewer::operator delete
==============
*/
void HavokPhysicsDebugDrawViewer::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  v2 = nbytes;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  if ( *((_WORD *)p + 8) != 0xFFFF )
    v2 = *((unsigned __int16 *)p + 8);
  Value->m_heap->blockFree(Value->m_heap, p, v2);
}

/*
==============
HavokPhysicsDebugDrawViewer::getProcessTag
==============
*/
__int64 HavokPhysicsDebugDrawViewer::getProcessTag(HavokPhysicsDebugDrawViewer *this)
{
  return (unsigned int)HavokPhysicsDebugDrawViewer::s_tag;
}

