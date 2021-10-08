/*
==============
HavokPhysicsFreeListAllocator::garbageCollectMapLocal
==============
*/

void __fastcall HavokPhysicsFreeListAllocator::garbageCollectMapLocal(HavokPhysicsFreeListAllocator *this)
{
  ?garbageCollectMapLocal@HavokPhysicsFreeListAllocator@@QEAAXXZ(this);
}

/*
==============
HavokPhysicsFreeListAllocator::HavokPhysicsFreeListAllocator
==============
*/

void __fastcall HavokPhysicsFreeListAllocator::HavokPhysicsFreeListAllocator(HavokPhysicsFreeListAllocator *this, hkMemoryAllocator *allocator, hkMemoryAllocator::ExtendedInterface *allocatorExtended, const hkFreeListAllocator::Cinfo *info)
{
  ??0HavokPhysicsFreeListAllocator@@QEAA@PEAVhkMemoryAllocator@@PEAUExtendedInterface@1@PEBUCinfo@hkFreeListAllocator@@@Z(this, allocator, allocatorExtended, info);
}

/*
==============
HavokPhysicsFreeListAllocator::HavokPhysicsFreeListAllocator
==============
*/
void HavokPhysicsFreeListAllocator::HavokPhysicsFreeListAllocator(HavokPhysicsFreeListAllocator *this, hkMemoryAllocator *allocator, hkMemoryAllocator::ExtendedInterface *allocatorExtended, const hkFreeListAllocator::Cinfo *info)
{
  hkFreeListAllocator::hkFreeListAllocator(this, allocator, allocatorExtended, info);
  this->hkFreeListAllocator::hkMemoryAllocator::__vftable = (HavokPhysicsFreeListAllocator_vtbl *)&HavokPhysicsFreeListAllocator::`vftable'{for `hkMemoryAllocator'};
  this->hkFreeListAllocator::hkMemoryAllocator::ExtendedInterface::__vftable = (hkMemoryAllocator::ExtendedInterface_vtbl *)&HavokPhysicsFreeListAllocator::`vftable'{for `hkMemoryAllocator::ExtendedInterface'};
}

/*
==============
HavokPhysicsFreeListAllocator::garbageCollectMapLocal
==============
*/
void HavokPhysicsFreeListAllocator::garbageCollectMapLocal(HavokPhysicsFreeListAllocator *this)
{
  hkFreeListAllocator::garbageCollect((hkFreeListAllocator *)&this->hkMemoryAllocator::ExtendedInterface);
  hkFreeList::freeAllMemory(&this->m_blockAllocator.m_freeList);
}

