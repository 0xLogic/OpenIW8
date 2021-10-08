/*
==============
HavokPhysicsShapeViewer::getProcessTag
==============
*/

int __fastcall HavokPhysicsShapeViewer::getProcessTag(HavokPhysicsShapeViewer *this)
{
  return ?getProcessTag@HavokPhysicsShapeViewer@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsShapeViewer::GroupKey::MapOps::isValid
==============
*/

unsigned int __fastcall HavokPhysicsShapeViewer::GroupKey::MapOps::isValid(const HavokPhysicsShapeViewer::GroupKey *key)
{
  return ?isValid@MapOps@GroupKey@HavokPhysicsShapeViewer@@SAIAEBU23@@Z(key);
}

/*
==============
HavokPhysicsShapeViewer::operator delete
==============
*/

void __fastcall HavokPhysicsShapeViewer::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsShapeViewer@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsShapeViewer::operator delete
==============
*/
void HavokPhysicsShapeViewer::operator delete(void *p, unsigned __int64 nbytes)
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
HavokPhysicsShapeViewer::getProcessTag
==============
*/
__int64 HavokPhysicsShapeViewer::getProcessTag(HavokPhysicsShapeViewer *this)
{
  return this->m_aabb.m_min.m_quad.m128_u32[3];
}

/*
==============
HavokPhysicsShapeViewer::GroupKey::MapOps::isValid
==============
*/
_BOOL8 HavokPhysicsShapeViewer::GroupKey::MapOps::isValid(const HavokPhysicsShapeViewer::GroupKey *key)
{
  return key->m_shape != NULL;
}

