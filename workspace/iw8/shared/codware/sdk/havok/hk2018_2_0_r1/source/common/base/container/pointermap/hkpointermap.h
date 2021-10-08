/*
==============
hkPointerMap<PhysicsAsset *,HavokPhysicsAsset *,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<PhysicsAsset *,HavokPhysicsAsset *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@PEAUPhysicsAsset@@PEAVHavokPhysicsAsset@@UhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@PEAUPhysicsFXShape@@PEAU?$hkTuple@V?$hkArray@PEAVhknpConvexShape@@UhkContainerHeapAllocator@@@@V?$hkArray@MUhkContainerHeapAllocator@@@@XXXXXX@@UhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<hknpShape const *,float,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<hknpShape const *,float,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@PEBVhknpShape@@MUhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<XModelDetailCollision *,HavokPhysicsXModelLOD *,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<XModelDetailCollision *,HavokPhysicsXModelLOD *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@PEAUXModelDetailCollision@@PEAVHavokPhysicsXModelLOD@@UhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator>::operator delete
==============
*/

void __fastcall hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3?$hkPointerMap@PEBUClothAsset@@PEAUhclClothContainer@@UhkContainerHeapAllocator@@@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>
==============
*/

void __fastcall hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>(hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator> *this)
{
  ??1?$hkPointerMap@_KPEAUDisplayGeoList@HavokPhysicsDisplayHandler@@UhkContainerHeapAllocator@@@@QEAA@XZ(this);
}

/*
==============
hkPointerMap<PhysicsAsset *,HavokPhysicsAsset *,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<PhysicsAsset *,HavokPhysicsAsset *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkPointerMap<XModelDetailCollision *,HavokPhysicsXModelLOD *,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<XModelDetailCollision *,HavokPhysicsXModelLOD *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkPointerMap<hknpShape const *,float,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<hknpShape const *,float,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>
==============
*/
void hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator>(hkPointerMap<unsigned __int64,HavokPhysicsDisplayHandler::DisplayGeoList *,hkContainerHeapAllocator> *this)
{
  hkMemoryAllocator *v2; 

  v2 = hkMemHeapAllocator();
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&this->m_map, v2);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&this->m_map);
}

/*
==============
hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<ClothAsset const *,hclClothContainer *,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator>::operator delete
==============
*/
void hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator>::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

