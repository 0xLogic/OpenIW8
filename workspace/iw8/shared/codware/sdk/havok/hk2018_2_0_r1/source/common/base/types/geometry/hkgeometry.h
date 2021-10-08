/*
==============
hkGeometry::~hkGeometry
==============
*/

void __fastcall hkGeometry::~hkGeometry(hkGeometry *this)
{
  ??1hkGeometry@@UEAA@XZ(this);
}

/*
==============
hkGeometry::operator delete
==============
*/

void __fastcall hkGeometry::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hkGeometry@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkGeometry::operator delete
==============
*/
void hkGeometry::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    if ( *((_WORD *)p + 8) != 0xFFFF )
      v2 = *((unsigned __int16 *)p + 8);
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkGeometry::~hkGeometry
==============
*/
void hkGeometry::~hkGeometry(hkGeometry *this)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v4; 
  int v5; 

  this->__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
  v2 = hkMemHeapAllocator();
  this->m_triangles.m_size = 0;
  m_capacityAndFlags = this->m_triangles.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_triangles.m_data, 16, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_triangles.m_data = NULL;
  this->m_triangles.m_capacityAndFlags = 0x80000000;
  v4 = hkMemHeapAllocator();
  this->m_vertices.m_size = 0;
  v5 = this->m_vertices.m_capacityAndFlags;
  if ( v5 >= 0 )
    hkMemoryAllocator::bufFree2(v4, this->m_vertices.m_data, 16, v5 & 0x3FFFFFFF);
  this->m_vertices.m_data = NULL;
  this->m_vertices.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(this);
}

