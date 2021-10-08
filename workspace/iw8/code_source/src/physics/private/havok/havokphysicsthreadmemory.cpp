/*
==============
HavokPhysicsThreadMemory::HavokPhysicsThreadMemory
==============
*/

void __fastcall HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(HavokPhysicsThreadMemory *this)
{
  ??0HavokPhysicsThreadMemory@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsThreadMemory::HavokPhysicsThreadMemory
==============
*/

void __fastcall HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(HavokPhysicsThreadMemory *this, hkMemoryAllocator *mainMemoryManager)
{
  ??0HavokPhysicsThreadMemory@@QEAA@PEAVhkMemoryAllocator@@@Z(this, mainMemoryManager);
}

/*
==============
HavokPhysicsThreadMemory::HavokPhysicsThreadMemory
==============
*/
void HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(HavokPhysicsThreadMemory *this, hkMemoryAllocator *mainMemoryManager)
{
  hkThreadMemory::hkThreadMemory(this, mainMemoryManager);
  this->__vftable = (HavokPhysicsThreadMemory_vtbl *)&HavokPhysicsThreadMemory::`vftable';
}

/*
==============
HavokPhysicsThreadMemory::HavokPhysicsThreadMemory
==============
*/
void HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(HavokPhysicsThreadMemory *this)
{
  hkThreadMemory::hkThreadMemory(this);
  this->__vftable = (HavokPhysicsThreadMemory_vtbl *)&HavokPhysicsThreadMemory::`vftable';
}

