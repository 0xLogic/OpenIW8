/*
==============
HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData(HavokPhysicsFreeListMemorySystem::ThreadData *this)
{
  ??0ThreadData@HavokPhysicsFreeListMemorySystem@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::ThreadData::operator delete
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::ThreadData::operator delete(void *__formal, void *a2)
{
  ??3ThreadData@HavokPhysicsFreeListMemorySystem@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData
==============
*/
void HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData(HavokPhysicsFreeListMemorySystem::ThreadData *this)
{
  this->m_router = NULL;
  HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(&this->m_generalHeapThreadMemory);
  HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(&this->m_mapLocalHeapThreadMemory);
  this->m_name = NULL;
  this->m_inUse.m_bool = 0;
  this->m_next = NULL;
}

/*
==============
HavokPhysicsFreeListMemorySystem::ThreadData::operator delete
==============
*/
void HavokPhysicsFreeListMemorySystem::ThreadData::operator delete(void *__formal, void *a2)
{
  ;
}

