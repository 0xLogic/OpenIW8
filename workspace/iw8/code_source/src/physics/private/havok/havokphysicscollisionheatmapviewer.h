/*
==============
HavokPhysicsCollisionHeatmapViewer::getProcessTag
==============
*/

int __fastcall HavokPhysicsCollisionHeatmapViewer::getProcessTag(HavokPhysicsCollisionHeatmapViewer *this)
{
  return ?getProcessTag@HavokPhysicsCollisionHeatmapViewer@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::operator delete
==============
*/

void __fastcall HavokPhysicsCollisionHeatmapViewer::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsCollisionHeatmapViewer@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsCollisionHeatmapViewer::operator delete
==============
*/
void HavokPhysicsCollisionHeatmapViewer::operator delete(void *p, unsigned __int64 nbytes)
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
HavokPhysicsCollisionHeatmapViewer::getProcessTag
==============
*/
__int64 HavokPhysicsCollisionHeatmapViewer::getProcessTag(HavokPhysicsCollisionHeatmapViewer *this)
{
  return (unsigned int)HavokPhysicsCollisionHeatmapViewer::s_tag;
}

