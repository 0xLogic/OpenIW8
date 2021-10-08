/*
==============
HavokPhysicsCollisionTileViewer::getProcessTag
==============
*/

int __fastcall HavokPhysicsCollisionTileViewer::getProcessTag(HavokPhysicsCollisionTileViewer *this)
{
  return ?getProcessTag@HavokPhysicsCollisionTileViewer@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsCollisionTileViewer::operator delete
==============
*/

void __fastcall HavokPhysicsCollisionTileViewer::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsCollisionTileViewer@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsCollisionTileViewer::operator delete
==============
*/
void HavokPhysicsCollisionTileViewer::operator delete(void *p, unsigned __int64 nbytes)
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
HavokPhysicsCollisionTileViewer::getProcessTag
==============
*/
__int64 HavokPhysicsCollisionTileViewer::getProcessTag(HavokPhysicsCollisionTileViewer *this)
{
  return (unsigned int)HavokPhysicsCollisionTileViewer::s_tag;
}

