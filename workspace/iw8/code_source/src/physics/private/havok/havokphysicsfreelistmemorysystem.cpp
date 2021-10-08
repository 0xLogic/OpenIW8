/*
==============
HavokPhysicsFreeListMemorySystem::threadInit
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::threadInit(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router, const char *name, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  ?threadInit@HavokPhysicsFreeListMemorySystem@@UEAAXAEAVhkMemoryRouter@@PEBDV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z(this, router, name, flags);
}

/*
==============
HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationGeneral
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationGeneral(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  ?SetThreadHeapAllocationGeneral@HavokPhysicsFreeListMemorySystem@@QEAAXAEAVhkMemoryRouter@@@Z(this, router);
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectShared
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::garbageCollectShared(HavokPhysicsFreeListMemorySystem *this)
{
  ?garbageCollectShared@HavokPhysicsFreeListMemorySystem@@UEAAXXZ(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::solverCanAllocSingleBlock
==============
*/

bool __fastcall HavokPhysicsFreeListMemorySystem::solverCanAllocSingleBlock(HavokPhysicsFreeListMemorySystem *this, int numBytes)
{
  return ?solverCanAllocSingleBlock@HavokPhysicsFreeListMemorySystem@@UEAA_NH@Z(this, numBytes);
}

/*
==============
HavokPhysicsFreeListMemorySystem::~HavokPhysicsFreeListMemorySystem
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::~HavokPhysicsFreeListMemorySystem(HavokPhysicsFreeListMemorySystem *this)
{
  ??1HavokPhysicsFreeListMemorySystem@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::printStatistics
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::printStatistics(HavokPhysicsFreeListMemorySystem *this, hkOstream *ostr)
{
  ?printStatistics@HavokPhysicsFreeListMemorySystem@@UEBAXAEAVhkOstream@@@Z(this, ostr);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getMemorySnapshot
==============
*/

hkResult __fastcall HavokPhysicsFreeListMemorySystem::getMemorySnapshot(HavokPhysicsFreeListMemorySystem *this, hkMemorySnapshot *snapshot)
{
  return ?getMemorySnapshot@HavokPhysicsFreeListMemorySystem@@UEBA?AUhkResult@@AEAVhkMemorySnapshot@@@Z(this, snapshot);
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectMapLocal
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::garbageCollectMapLocal(HavokPhysicsFreeListMemorySystem *this, bool shouldBeEmpty)
{
  ?garbageCollectMapLocal@HavokPhysicsFreeListMemorySystem@@QEAAX_N@Z(this, shouldBeEmpty);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getHeapSoftLimit
==============
*/

int __fastcall HavokPhysicsFreeListMemorySystem::getHeapSoftLimit(HavokPhysicsFreeListMemorySystem *this)
{
  return ?getHeapSoftLimit@HavokPhysicsFreeListMemorySystem@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::mainInit
==============
*/

hkMemoryRouter *__fastcall HavokPhysicsFreeListMemorySystem::mainInit(HavokPhysicsFreeListMemorySystem *this, const hkMemorySystem::FrameInfo *info, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  return ?mainInit@HavokPhysicsFreeListMemorySystem@@UEAAPEAVhkMemoryRouter@@AEBUFrameInfo@hkMemorySystem@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z(this, info, flags);
}

/*
==============
HavokPhysicsFreeListMemorySystem::threadQuit
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::threadQuit(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  ?threadQuit@HavokPhysicsFreeListMemorySystem@@UEAAXAEAVhkMemoryRouter@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z(this, router, flags);
}

/*
==============
HavokPhysicsFreeListMemorySystem::heapCanAllocTotal
==============
*/

bool __fastcall HavokPhysicsFreeListMemorySystem::heapCanAllocTotal(HavokPhysicsFreeListMemorySystem *this, int numBytes)
{
  return ?heapCanAllocTotal@HavokPhysicsFreeListMemorySystem@@UEAA_NH@Z(this, numBytes);
}

/*
==============
HavokPhysicsFreeListMemorySystem::HavokPhysicsFreeListMemorySystem
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::HavokPhysicsFreeListMemorySystem(HavokPhysicsFreeListMemorySystem *this, hkMemoryAllocator *systemAllocator, hkMemoryAllocator *generalHeapAllocator, hkMemoryAllocator::ExtendedInterface *generalHeapExtended, hkMemoryAllocator *mapLocalHeapAllocator, hkMemoryAllocator::ExtendedInterface *mapLocalHeapExtended, HavokPhysicsFreeListMemorySystem::SetupFlags flags)
{
  ??0HavokPhysicsFreeListMemorySystem@@QEAA@PEAVhkMemoryAllocator@@0PEAUExtendedInterface@1@01W4SetupFlags@0@@Z(this, systemAllocator, generalHeapAllocator, generalHeapExtended, mapLocalHeapAllocator, mapLocalHeapExtended, flags);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getUncachedLockedHeapAllocator
==============
*/

hkMemoryAllocator *__fastcall HavokPhysicsFreeListMemorySystem::getUncachedLockedHeapAllocator(HavokPhysicsFreeListMemorySystem *this)
{
  return ?getUncachedLockedHeapAllocator@HavokPhysicsFreeListMemorySystem@@UEAAPEAVhkMemoryAllocator@@XZ(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationMapLocal
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationMapLocal(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  ?SetThreadHeapAllocationMapLocal@HavokPhysicsFreeListMemorySystem@@QEAAXAEAVhkMemoryRouter@@@Z(this, router);
}

/*
==============
HavokPhysicsFreeListMemorySystem::setHeapScrubValues
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::setHeapScrubValues(HavokPhysicsFreeListMemorySystem *this, unsigned int allocValue, unsigned int freeValue)
{
  ?setHeapScrubValues@HavokPhysicsFreeListMemorySystem@@UEAAXII@Z(this, allocValue, freeValue);
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectThread
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::garbageCollectThread(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  ?garbageCollectThread@HavokPhysicsFreeListMemorySystem@@UEAAXAEAVhkMemoryRouter@@@Z(this, router);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getMemoryStatistics
==============
*/

void __fastcall HavokPhysicsFreeListMemorySystem::getMemoryStatistics(HavokPhysicsFreeListMemorySystem *this, hkMemorySystem::MemoryStatistics *stats)
{
  ?getMemoryStatistics@HavokPhysicsFreeListMemorySystem@@UEAAXAEAUMemoryStatistics@hkMemorySystem@@@Z(this, stats);
}

/*
==============
HavokPhysicsFreeListMemorySystem::setHeapSoftLimit
==============
*/

hkResult __fastcall HavokPhysicsFreeListMemorySystem::setHeapSoftLimit(HavokPhysicsFreeListMemorySystem *this, int nbytes)
{
  return ?setHeapSoftLimit@HavokPhysicsFreeListMemorySystem@@UEAA?AUhkResult@@H@Z(this, nbytes);
}

/*
==============
HavokPhysicsFreeListMemorySystem::mainQuit
==============
*/

hkResult __fastcall HavokPhysicsFreeListMemorySystem::mainQuit(HavokPhysicsFreeListMemorySystem *this, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  return ?mainQuit@HavokPhysicsFreeListMemorySystem@@UEAA?AUhkResult@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z(this, flags);
}

/*
==============
HavokPhysicsFreeListMemorySystem::HavokPhysicsFreeListMemorySystem
==============
*/
void HavokPhysicsFreeListMemorySystem::HavokPhysicsFreeListMemorySystem(HavokPhysicsFreeListMemorySystem *this, hkMemoryAllocator *systemAllocator, hkMemoryAllocator *generalHeapAllocator, hkMemoryAllocator::ExtendedInterface *generalHeapExtended, hkMemoryAllocator *mapLocalHeapAllocator, hkMemoryAllocator::ExtendedInterface *mapLocalHeapExtended, HavokPhysicsFreeListMemorySystem::SetupFlags flags)
{
  this->__vftable = (HavokPhysicsFreeListMemorySystem_vtbl *)&HavokPhysicsFreeListMemorySystem::`vftable';
  this->m_systemAllocator = systemAllocator;
  hkMemorySystem::FrameInfo::FrameInfo(&this->m_frameInfo, 0, 0x8000);
  this->m_generalHeapAllocator = generalHeapAllocator;
  this->m_mapLocalHeapAllocator = mapLocalHeapAllocator;
  this->m_generalHeapExtended = generalHeapExtended;
  this->m_mapLocalHeapExtended = mapLocalHeapExtended;
  hkRecallAllocator::hkRecallAllocator(&this->m_debugAllocator, systemAllocator);
  hkMemoryRouter::hkMemoryRouter(&this->m_mainRouter);
  hkSolverAllocator::hkSolverAllocator(&this->m_solverAllocator);
  `eh vector constructor iterator'(this->m_threadDatas, 0x270ui64, 0x1Cui64, (void (__fastcall *)(void *))HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData, (void (__fastcall *)(void *))HavokPhysicsFreeListMemorySystem::ThreadData::~ThreadData);
  hkCriticalSection::hkCriticalSection(&this->m_threadDataLock, 0);
  HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(&this->m_generalThreadMemory, generalHeapAllocator);
  HavokPhysicsThreadMemory::HavokPhysicsThreadMemory(&this->m_mapLocalThreadMemory, mapLocalHeapAllocator);
  hkMemorySystem::LockedMemoryAllocator::LockedMemoryAllocator(&this->m_lockingAllocator, &this->m_generalThreadMemory);
  this->m_flags = flags;
  this->m_threadDatas[0].m_next = &this->m_threadDatas[1];
  this->m_threadDatas[1].m_next = &this->m_threadDatas[2];
  this->m_threadDatas[2].m_next = &this->m_threadDatas[3];
  this->m_threadDatas[3].m_next = &this->m_threadDatas[4];
  this->m_threadDatas[4].m_next = &this->m_threadDatas[5];
  this->m_threadDatas[5].m_next = &this->m_threadDatas[6];
  this->m_threadDatas[6].m_next = &this->m_threadDatas[7];
  this->m_threadDatas[7].m_next = &this->m_threadDatas[8];
  this->m_threadDatas[8].m_next = &this->m_threadDatas[9];
  this->m_threadDatas[9].m_next = &this->m_threadDatas[10];
  this->m_threadDatas[10].m_next = &this->m_threadDatas[11];
  this->m_threadDatas[11].m_next = &this->m_threadDatas[12];
  this->m_threadDatas[12].m_next = &this->m_threadDatas[13];
  this->m_threadDatas[13].m_next = &this->m_threadDatas[14];
  this->m_threadDatas[14].m_next = &this->m_threadDatas[15];
  this->m_threadDatas[15].m_next = &this->m_threadDatas[16];
  this->m_threadDatas[16].m_next = &this->m_threadDatas[17];
  this->m_threadDatas[17].m_next = &this->m_threadDatas[18];
  this->m_threadDatas[18].m_next = &this->m_threadDatas[19];
  this->m_threadDatas[19].m_next = &this->m_threadDatas[20];
  this->m_threadDatas[20].m_next = &this->m_threadDatas[21];
  this->m_threadDatas[21].m_next = &this->m_threadDatas[22];
  this->m_threadDatas[22].m_next = &this->m_threadDatas[23];
  this->m_threadDatas[23].m_next = &this->m_threadDatas[24];
  this->m_threadDatas[24].m_next = &this->m_threadDatas[25];
  this->m_threadDatas[25].m_next = &this->m_threadDatas[26];
  this->m_threadDatas[26].m_next = &this->m_threadDatas[27];
}

/*
==============
HavokPhysicsFreeListMemorySystem::~HavokPhysicsFreeListMemorySystem
==============
*/
void HavokPhysicsFreeListMemorySystem::~HavokPhysicsFreeListMemorySystem(HavokPhysicsFreeListMemorySystem *this)
{
  this->__vftable = (HavokPhysicsFreeListMemorySystem_vtbl *)&HavokPhysicsFreeListMemorySystem::`vftable';
  hkCriticalSection::~hkCriticalSection((LPCRITICAL_SECTION)&this->m_lockingAllocator.m_section);
  hkMemoryAllocator::~hkMemoryAllocator(&this->m_lockingAllocator);
  this->m_mapLocalThreadMemory.__vftable = (HavokPhysicsThreadMemory_vtbl *)hkThreadMemory::`vftable';
  hkThreadMemory::releaseCachedMemory(&this->m_mapLocalThreadMemory);
  hkMemoryAllocator::~hkMemoryAllocator(&this->m_mapLocalThreadMemory);
  this->m_generalThreadMemory.__vftable = (HavokPhysicsThreadMemory_vtbl *)hkThreadMemory::`vftable';
  hkThreadMemory::releaseCachedMemory(&this->m_generalThreadMemory);
  hkMemoryAllocator::~hkMemoryAllocator(&this->m_generalThreadMemory);
  hkCriticalSection::~hkCriticalSection((LPCRITICAL_SECTION)&this->m_threadDataLock);
  `eh vector destructor iterator'(this->m_threadDatas, 0x270ui64, 0x1Cui64, (void (__fastcall *)(void *))HavokPhysicsFreeListMemorySystem::ThreadData::~ThreadData);
  hkSolverAllocator::~hkSolverAllocator(&this->m_solverAllocator);
  hkMemoryAllocator::~hkMemoryAllocator(&this->m_mainRouter.m_stack);
  hkCriticalSection::~hkCriticalSection((LPCRITICAL_SECTION)&this->m_debugAllocator.m_criticalSection);
  hkMemoryAllocator::~hkMemoryAllocator(&this->m_debugAllocator);
  hkMemorySystem::~hkMemorySystem(this);
}

/*
==============
HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationGeneral
==============
*/
void HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationGeneral(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  hkMemoryAllocator *m_generalHeapAllocator; 

  m_generalHeapAllocator = this->m_generalHeapAllocator;
  if ( (this->m_flags & 4) != 0 )
    m_generalHeapAllocator = (hkMemoryAllocator *)((char *)router->m_userData + 8);
  router->m_heap = m_generalHeapAllocator;
}

/*
==============
HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationMapLocal
==============
*/
void HavokPhysicsFreeListMemorySystem::SetThreadHeapAllocationMapLocal(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  hkMemoryAllocator *m_mapLocalHeapAllocator; 

  m_mapLocalHeapAllocator = this->m_mapLocalHeapAllocator;
  if ( (this->m_flags & 4) != 0 )
    m_mapLocalHeapAllocator = (hkMemoryAllocator *)((char *)router->m_userData + 304);
  router->m_heap = m_mapLocalHeapAllocator;
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectMapLocal
==============
*/
void HavokPhysicsFreeListMemorySystem::garbageCollectMapLocal(HavokPhysicsFreeListMemorySystem *this, bool shouldBeEmpty)
{
  HavokPhysicsFreeListMemorySystem::ThreadData *m_threadDatas; 
  hkMemoryAllocator::ExtendedInterface *m_mapLocalHeapExtended; 

  m_threadDatas = this->m_threadDatas;
  if ( this != (HavokPhysicsFreeListMemorySystem *)-1416i64 )
  {
    do
    {
      m_threadDatas->m_mapLocalHeapThreadMemory.releaseCachedMemory(&m_threadDatas->m_mapLocalHeapThreadMemory);
      if ( shouldBeEmpty && hkThreadMemory::getCachedSizeUnchecked(&m_threadDatas->m_mapLocalHeapThreadMemory) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfreelistmemorysystem.cpp", 390, ASSERT_TYPE_ASSERT, "(!shouldBeEmpty || td->m_mapLocalHeapThreadMemory.getCachedSizeUnchecked() == 0)", (const char *)&queryFormat, "!shouldBeEmpty || td->m_mapLocalHeapThreadMemory.getCachedSizeUnchecked() == 0") )
        __debugbreak();
      m_threadDatas = m_threadDatas->m_next;
    }
    while ( m_threadDatas );
  }
  m_mapLocalHeapExtended = this->m_mapLocalHeapExtended;
  if ( m_mapLocalHeapExtended )
  {
    HavokPhysicsFreeListAllocator::garbageCollectMapLocal((HavokPhysicsFreeListAllocator *)&m_mapLocalHeapExtended[-1]);
    if ( shouldBeEmpty )
    {
      if ( (__int64)this->m_mapLocalHeapExtended->getApproxTotalAllocated(this->m_mapLocalHeapExtended) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfreelistmemorysystem.cpp", 397, ASSERT_TYPE_ASSERT, "(!shouldBeEmpty || m_mapLocalHeapExtended->getApproxTotalAllocated() == 0)", (const char *)&queryFormat, "!shouldBeEmpty || m_mapLocalHeapExtended->getApproxTotalAllocated() == 0") )
          __debugbreak();
      }
    }
  }
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectShared
==============
*/
void HavokPhysicsFreeListMemorySystem::garbageCollectShared(HavokPhysicsFreeListMemorySystem *this)
{
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 
  hkMemoryAllocator::ExtendedInterface *m_mapLocalHeapExtended; 

  m_generalHeapExtended = this->m_generalHeapExtended;
  if ( m_generalHeapExtended )
    m_generalHeapExtended->garbageCollect(m_generalHeapExtended);
  m_mapLocalHeapExtended = this->m_mapLocalHeapExtended;
  if ( m_mapLocalHeapExtended )
    m_mapLocalHeapExtended->garbageCollect(m_mapLocalHeapExtended);
}

/*
==============
HavokPhysicsFreeListMemorySystem::garbageCollectThread
==============
*/
void HavokPhysicsFreeListMemorySystem::garbageCollectThread(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router)
{
  if ( (this->m_flags & 4) != 0 )
    router->m_heap->__vftable[1].~hkMemoryAllocator(router->m_heap);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getHeapSoftLimit
==============
*/
__int64 HavokPhysicsFreeListMemorySystem::getHeapSoftLimit(HavokPhysicsFreeListMemorySystem *this)
{
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 

  m_generalHeapExtended = this->m_generalHeapExtended;
  if ( m_generalHeapExtended )
    return m_generalHeapExtended->getMemorySoftLimit(m_generalHeapExtended);
  else
    return 0i64;
}

/*
==============
HavokPhysicsFreeListMemorySystem::getMemorySnapshot
==============
*/
hkMemorySnapshot *HavokPhysicsFreeListMemorySystem::getMemorySnapshot(HavokPhysicsFreeListMemorySystem *this, hkMemorySnapshot *snapshot, hkMemorySnapshot *a3)
{
  int v5; 
  unsigned int v6; 
  int v7; 
  hkRecallAllocator::Header *m_head; 
  int v9; 
  char *v10; 
  char *v11; 
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 
  int v13; 
  hkMemoryAllocator::ExtendedInterface *m_mapLocalHeapExtended; 
  int v15; 
  HavokPhysicsFreeListMemorySystem::ThreadData *m_threadDatas; 
  HavokPhysicsFreeListMemorySystem::ThreadData *v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int m_flags; 
  int v25; 
  int v26; 
  int v27; 
  int v29; 
  int parentId; 
  int i; 

  hkMemorySnapshot::init(a3, this);
  v5 = -1;
  v6 = hkMemorySnapshot::addProvider(a3, "<System>", -1);
  parentId = hkMemorySnapshot::addProvider(a3, "hkSolverAllocator(Solver)", v6);
  hkMemorySnapshot::addItem(a3, v6, (hkEnum<enum hkMemorySnapshot::StatusBits,signed char>)1, this->m_solverAllocator.m_bufferStart, LODWORD(this->m_solverAllocator.m_bufferEnd) - LODWORD(this->m_solverAllocator.m_bufferStart));
  hkMemorySnapshot::addItem(a3, parentId, (hkEnum<enum hkMemorySnapshot::StatusBits,signed char>)1, this->m_solverAllocator.m_bufferStart, LODWORD(this->m_solverAllocator.m_bufferEnd) - LODWORD(this->m_solverAllocator.m_bufferStart));
  v7 = hkMemorySnapshot::addProvider(a3, "hkRecallAllocator(Debug)", v6);
  m_head = this->m_debugAllocator.m_head;
  v9 = v7;
  for ( i = v7; m_head; m_head = m_head->m_next )
  {
    hkMemorySnapshot::addItem(a3, v6, (hkEnum<enum hkMemorySnapshot::StatusBits,signed char>)1, m_head, m_head->m_requestedSize);
    hkMemorySnapshot::addItem(a3, v9, 0, m_head, 16i64);
    hkMemorySnapshot::addItem(a3, v9, (hkEnum<enum hkMemorySnapshot::StatusBits,signed char>)1, &m_head[1], m_head->m_payloadSize);
    v10 = (char *)&m_head[1] + m_head->m_payloadSize;
    v11 = (char *)m_head + m_head->m_requestedSize;
    if ( v10 != v11 )
      hkMemorySnapshot::addItem(a3, v9, 0, v10, (int)v11 - (int)v10);
  }
  m_generalHeapExtended = this->m_generalHeapExtended;
  v13 = -1;
  v29 = -1;
  if ( m_generalHeapExtended )
    v13 = m_generalHeapExtended->addToSnapshot(m_generalHeapExtended, a3, v6);
  m_mapLocalHeapExtended = this->m_mapLocalHeapExtended;
  if ( m_mapLocalHeapExtended )
    v29 = m_mapLocalHeapExtended->addToSnapshot(m_mapLocalHeapExtended, a3, v6);
  if ( a3->m_areAllOtherThreadsAssumedToBePaused )
  {
    v15 = -1;
    m_threadDatas = this->m_threadDatas;
    if ( this != (HavokPhysicsFreeListMemorySystem *)-1416i64 )
    {
      v17 = this->m_threadDatas;
      do
      {
        if ( m_threadDatas->m_inUse.m_bool )
        {
          if ( (this->m_flags & 4) != 0 )
          {
            v18 = v13;
            if ( v13 == -1 )
              v18 = v6;
            v19 = hkThreadMemory::addToSnapshot(&m_threadDatas->m_generalHeapThreadMemory, a3, v18);
            v20 = v29;
            v21 = v19;
            if ( v29 == -1 )
              v20 = v6;
            hkThreadMemory::addToSnapshot(&m_threadDatas->m_mapLocalHeapThreadMemory, a3, v20);
            if ( m_threadDatas == this->m_threadDatas )
              v5 = v21;
            v17 = this->m_threadDatas;
          }
          v22 = v13;
          if ( (this->m_flags & 2) != 0 )
            v22 = parentId;
          v23 = hkLifoAllocator::addToSnapshot(&m_threadDatas->m_router->m_stack, a3, v22);
          if ( m_threadDatas == v17 )
            v15 = v23;
        }
        m_threadDatas = m_threadDatas->m_next;
      }
      while ( m_threadDatas );
      v9 = i;
    }
    m_flags = this->m_flags;
    v25 = v13;
    v26 = v13;
    if ( (m_flags & 1) != 0 )
      v25 = v15;
    if ( (m_flags & 4) != 0 )
      v26 = v5;
  }
  else
  {
    v15 = v13;
    v25 = v13;
    v26 = v13;
  }
  hkMemorySnapshot::setRouterWiring(a3, v15, v25, v26, v9, parentId);
  v27 = 0;
  if ( v13 == -1 )
    v27 = -2147220992;
  LODWORD(snapshot->m_mem) = v27;
  return snapshot;
}

/*
==============
HavokPhysicsFreeListMemorySystem::getMemoryStatistics
==============
*/
void HavokPhysicsFreeListMemorySystem::getMemoryStatistics(HavokPhysicsFreeListMemorySystem *this, hkMemorySystem::MemoryStatistics *stats)
{
  int v3; 
  hkMemorySystem::MemoryStatistics::Entry *v5; 
  hkMemoryAllocator *v6; 
  int m_size; 
  int v8; 
  hkMemorySystem::MemoryStatistics::Entry *m_data; 
  hkMemorySystem::MemoryStatistics::Entry *v10; 
  hkMemorySystem::MemoryStatistics::Entry *v11; 
  hkMemoryAllocator *v12; 
  int v13; 
  int v14; 
  hkMemorySystem::MemoryStatistics::Entry *v15; 
  hkMemorySystem::MemoryStatistics::Entry *v16; 
  hkStringPtr *p_m_allocatorName; 
  hkMemoryAllocator *m_generalHeapAllocator; 
  hkMemoryAllocator *v21; 
  int v22; 
  int v23; 
  hkMemorySystem::MemoryStatistics::Entry *v24; 
  hkMemorySystem::MemoryStatistics::Entry *v25; 
  hkMemorySystem::MemoryStatistics::Entry *v26; 
  hkMemoryAllocator *v27; 
  int v28; 
  int v29; 
  hkMemorySystem::MemoryStatistics::Entry *v30; 
  hkMemorySystem::MemoryStatistics::Entry *v31; 
  hkMemorySystem::MemoryStatistics::Entry *v32; 
  __m256i v33; 
  __int128 v34; 
  __m256i v35; 
  __int128 v36; 

  v3 = stats->m_entries.m_size - 1;
  if ( v3 >= 0 )
  {
    v5 = &stats->m_entries.m_data[v3];
    do
    {
      hkStringPtr::~hkStringPtr(&v5->m_allocatorName);
      --v5;
      --v3;
    }
    while ( v3 >= 0 );
  }
  stats->m_entries.m_size = 0;
  v6 = hkMemHeapAllocator();
  m_size = stats->m_entries.m_size;
  v8 = m_size;
  if ( m_size == (stats->m_entries.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v6, stats, 56);
    m_size = stats->m_entries.m_size;
    v8 = m_size;
  }
  m_data = stats->m_entries.m_data;
  v10 = &stats->m_entries.m_data[m_size];
  if ( v10 )
  {
    v10->m_allocatorName.m_stringAndFlag = NULL;
    v10->m_allocatorStats.m_allocated = -1i64;
    v10->m_allocatorStats.m_inUse = -1i64;
    v10->m_allocatorStats.m_peakInUse = -1i64;
    v10->m_allocatorStats.m_available = -1i64;
    v10->m_allocatorStats.m_totalAvailable = -1i64;
    v10->m_allocatorStats.m_largestBlock = -1i64;
    v8 = stats->m_entries.m_size;
    m_data = stats->m_entries.m_data;
  }
  v11 = &m_data[v8];
  stats->m_entries.m_size = v8 + 1;
  hkStringPtr::operator=(&v11->m_allocatorName, "System");
  this->m_systemAllocator->getMemoryStatistics(this->m_systemAllocator, &v11->m_allocatorStats);
  v12 = hkMemHeapAllocator();
  v13 = stats->m_entries.m_size;
  v14 = v13;
  if ( v13 == (stats->m_entries.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v12, stats, 56);
    v13 = stats->m_entries.m_size;
    v14 = v13;
  }
  v15 = stats->m_entries.m_data;
  v16 = &stats->m_entries.m_data[v13];
  if ( v16 )
  {
    v16->m_allocatorName.m_stringAndFlag = NULL;
    v16->m_allocatorStats.m_allocated = -1i64;
    v16->m_allocatorStats.m_inUse = -1i64;
    v16->m_allocatorStats.m_peakInUse = -1i64;
    v16->m_allocatorStats.m_available = -1i64;
    v16->m_allocatorStats.m_totalAvailable = -1i64;
    v16->m_allocatorStats.m_largestBlock = -1i64;
    v14 = stats->m_entries.m_size;
    v15 = stats->m_entries.m_data;
  }
  p_m_allocatorName = &v15[v14].m_allocatorName;
  stats->m_entries.m_size = v14 + 1;
  hkStringPtr::operator=(p_m_allocatorName, "Heap");
  __asm
  {
    vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
  }
  m_generalHeapAllocator = this->m_generalHeapAllocator;
  __asm
  {
    vmovdqu [rsp+88h+var_68], ymm0
    vmovdqu [rsp+88h+var_48], xmm1
    vmovdqu [rsp+88h+var_38], ymm0
    vmovdqu [rsp+88h+var_18], xmm1
  }
  m_generalHeapAllocator->getMemoryStatistics(m_generalHeapAllocator, (hkMemoryAllocator::MemoryStatistics *)&v33);
  this->m_mapLocalHeapAllocator->getMemoryStatistics(this->m_mapLocalHeapAllocator, (hkMemoryAllocator::MemoryStatistics *)&v35);
  p_m_allocatorName[1].m_stringAndFlag = (char *)(v35.m256i_i64[0] + v33.m256i_i64[0]);
  p_m_allocatorName[2].m_stringAndFlag = (char *)(v35.m256i_i64[1] + v33.m256i_i64[1]);
  p_m_allocatorName[3].m_stringAndFlag = (char *)(v35.m256i_i64[2] + v33.m256i_i64[2]);
  p_m_allocatorName[4].m_stringAndFlag = (char *)(v35.m256i_i64[3] + v33.m256i_i64[3]);
  p_m_allocatorName[5].m_stringAndFlag = (char *)(v36 + v34);
  p_m_allocatorName[6].m_stringAndFlag = (char *)(*((_QWORD *)&v36 + 1) + *((_QWORD *)&v34 + 1));
  v21 = hkMemHeapAllocator();
  v22 = stats->m_entries.m_size;
  v23 = v22;
  if ( v22 == (stats->m_entries.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v21, stats, 56);
    v22 = stats->m_entries.m_size;
    v23 = v22;
  }
  v24 = stats->m_entries.m_data;
  v25 = &stats->m_entries.m_data[v22];
  if ( v25 )
  {
    v25->m_allocatorName.m_stringAndFlag = NULL;
    v25->m_allocatorStats.m_allocated = -1i64;
    v25->m_allocatorStats.m_inUse = -1i64;
    v25->m_allocatorStats.m_peakInUse = -1i64;
    v25->m_allocatorStats.m_available = -1i64;
    v25->m_allocatorStats.m_totalAvailable = -1i64;
    v25->m_allocatorStats.m_largestBlock = -1i64;
    v23 = stats->m_entries.m_size;
    v24 = stats->m_entries.m_data;
  }
  v26 = &v24[v23];
  stats->m_entries.m_size = v23 + 1;
  hkStringPtr::operator=(&v26->m_allocatorName, "Debug");
  this->m_debugAllocator.getMemoryStatistics(&this->m_debugAllocator, &v26->m_allocatorStats);
  v27 = hkMemHeapAllocator();
  v28 = stats->m_entries.m_size;
  v29 = v28;
  if ( v28 == (stats->m_entries.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v27, stats, 56);
    v28 = stats->m_entries.m_size;
    v29 = v28;
  }
  v30 = stats->m_entries.m_data;
  v31 = &stats->m_entries.m_data[v28];
  if ( v31 )
  {
    v31->m_allocatorName.m_stringAndFlag = NULL;
    v31->m_allocatorStats.m_allocated = -1i64;
    v31->m_allocatorStats.m_inUse = -1i64;
    v31->m_allocatorStats.m_peakInUse = -1i64;
    v31->m_allocatorStats.m_available = -1i64;
    v31->m_allocatorStats.m_totalAvailable = -1i64;
    v31->m_allocatorStats.m_largestBlock = -1i64;
    v29 = stats->m_entries.m_size;
    v30 = stats->m_entries.m_data;
  }
  v32 = &v30[v29];
  stats->m_entries.m_size = v29 + 1;
  hkStringPtr::operator=(&v32->m_allocatorName, "Solver");
  this->m_solverAllocator.getMemoryStatistics(&this->m_solverAllocator, &v32->m_allocatorStats);
}

/*
==============
HavokPhysicsFreeListMemorySystem::getUncachedLockedHeapAllocator
==============
*/
hkMemorySystem::LockedMemoryAllocator *HavokPhysicsFreeListMemorySystem::getUncachedLockedHeapAllocator(HavokPhysicsFreeListMemorySystem *this)
{
  return &this->m_lockingAllocator;
}

/*
==============
HavokPhysicsFreeListMemorySystem::heapCanAllocTotal
==============
*/
char HavokPhysicsFreeListMemorySystem::heapCanAllocTotal(HavokPhysicsFreeListMemorySystem *this, int numBytes)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfreelistmemorysystem.cpp", 532, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
  return 1;
}

/*
==============
HavokPhysicsFreeListMemorySystem::mainInit
==============
*/
hkMemoryRouter *HavokPhysicsFreeListMemorySystem::mainInit(HavokPhysicsFreeListMemorySystem *this, const hkMemorySystem::FrameInfo *info, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  char m_storage; 
  void *v6; 

  m_storage = flags.m_storage;
  this->m_frameInfo = *info;
  if ( (flags.m_storage & 1) != 0 )
    ((void (__fastcall *)(HavokPhysicsFreeListMemorySystem *, hkMemoryRouter *, const char *, _QWORD))this->threadInit)(this, &this->m_mainRouter, "main", (unsigned int)flags.m_storage);
  if ( (m_storage & 2) != 0 && info->m_physics2012SolverBufferSize )
  {
    v6 = (void *)((__int64 (__fastcall *)(hkMemoryAllocator *))this->m_systemAllocator->blockAlloc)(this->m_systemAllocator);
    hkSolverAllocator::setBuffer(&this->m_solverAllocator, v6, info->m_physics2012SolverBufferSize);
  }
  return &this->m_mainRouter;
}

/*
==============
HavokPhysicsFreeListMemorySystem::mainQuit
==============
*/
_DWORD *HavokPhysicsFreeListMemorySystem::mainQuit(HavokPhysicsFreeListMemorySystem *this, _DWORD *flags, unsigned int a3)
{
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 
  hkMemoryAllocator::ExtendedInterface *m_mapLocalHeapExtended; 
  HavokPhysicsFreeListMemorySystem::ThreadData *m_next; 
  HavokPhysicsFreeListMemorySystem::ThreadData *v9; 

  if ( (a3 & 2) != 0 && LODWORD(this->m_solverAllocator.m_bufferEnd) != LODWORD(this->m_solverAllocator.m_bufferStart) )
    ((void (__fastcall *)(hkMemoryAllocator *, char *))this->m_systemAllocator->blockFree)(this->m_systemAllocator, this->m_solverAllocator.m_bufferStart);
  if ( (a3 & 1) != 0 )
  {
    ((void (__fastcall *)(HavokPhysicsFreeListMemorySystem *, hkMemoryRouter *, _QWORD))this->threadQuit)(this, &this->m_mainRouter, a3);
    hkSolverAllocator::setBuffer(&this->m_solverAllocator, NULL, 0);
    m_generalHeapExtended = this->m_generalHeapExtended;
    if ( m_generalHeapExtended )
      m_generalHeapExtended->garbageCollect(m_generalHeapExtended);
    m_mapLocalHeapExtended = this->m_mapLocalHeapExtended;
    if ( m_mapLocalHeapExtended )
      m_mapLocalHeapExtended->garbageCollect(m_mapLocalHeapExtended);
    m_next = this->m_threadDatas[27].m_next;
    if ( m_next )
    {
      do
      {
        if ( m_next->m_inUse.m_bool )
          __debugbreak();
        v9 = m_next->m_next;
        this->m_systemAllocator->blockFree(this->m_systemAllocator, m_next, 624);
        m_next = v9;
      }
      while ( v9 );
    }
  }
  this->m_systemAllocator = NULL;
  *flags = 0;
  return flags;
}

/*
==============
HavokPhysicsFreeListMemorySystem::printStatistics
==============
*/
void HavokPhysicsFreeListMemorySystem::printStatistics(HavokPhysicsFreeListMemorySystem *this, hkOstream *ostr)
{
  hkMemoryAllocator *m_systemAllocator; 
  hkMemoryAllocator *m_generalHeapAllocator; 
  hkMemoryAllocator *m_mapLocalHeapAllocator; 
  hkRecallAllocator_vtbl *v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  HavokPhysicsFreeListMemorySystem::ThreadData *m_threadDatas; 
  HavokPhysicsThreadMemory_vtbl *v25; 
  HavokPhysicsThreadMemory_vtbl *v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 m_peakUse_low; 
  int v43; 
  __int64 v44; 
  __m256i v45; 
  __m256i v47; 
  __m256i v49; 
  __m256i v51; 
  __m256i v53; 
  __m256i v55; 

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_threadDataLock);
  hkOstream::printf(ostr, "HavokPhysicsFreeListMemorySystem memory overview:\n=======================================\n");
  m_systemAllocator = this->m_systemAllocator;
  __asm
  {
    vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
    vmovdqu [rbp+60h+var_B0], ymm0
    vmovdqu [rbp+60h+var_90], xmm1
  }
  m_systemAllocator->getMemoryStatistics(m_systemAllocator, (hkMemoryAllocator::MemoryStatistics *)&v51);
  m_generalHeapAllocator = this->m_generalHeapAllocator;
  __asm
  {
    vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
    vmovdqu [rsp+160h+var_110], ymm0
    vmovdqu [rsp+160h+var_F0], xmm1
  }
  m_generalHeapAllocator->getMemoryStatistics(m_generalHeapAllocator, (hkMemoryAllocator::MemoryStatistics *)&v47);
  m_mapLocalHeapAllocator = this->m_mapLocalHeapAllocator;
  __asm
  {
    vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
    vmovdqu [rsp+160h+var_140], ymm0
    vmovdqu [rsp+160h+var_120], xmm1
  }
  m_mapLocalHeapAllocator->getMemoryStatistics(m_mapLocalHeapAllocator, (hkMemoryAllocator::MemoryStatistics *)&v45);
  __asm
  {
    vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
    vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
  }
  v15 = this->m_debugAllocator.__vftable;
  __asm
  {
    vmovdqu [rbp+60h+var_E0], ymm0
    vmovdqu [rbp+60h+var_C0], xmm1
  }
  v15->getMemoryStatistics(&this->m_debugAllocator, (hkMemoryAllocator::MemoryStatistics *)&v49);
  hkOstream::printf(ostr, "\n    Allocation totals:\n\n");
  v16 = v47.m256i_i32[0];
  v17 = v45.m256i_i32[0];
  hkOstream::printf(ostr, "%20i allocated by general heap\n", v47.m256i_u32[0]);
  hkOstream::printf(ostr, "%20i allocated by map local heap\n", v17);
  v18 = v49.m256i_i32[0];
  hkOstream::printf(ostr, "%20i allocated by debug\n", v49.m256i_u32[0]);
  v19 = LODWORD(this->m_solverAllocator.m_bufferEnd) - LODWORD(this->m_solverAllocator.m_bufferStart);
  hkOstream::printf(ostr, "%20i allocated by solver\n", v19);
  hkOstream::printf(ostr, "%20s\n", "-------");
  hkOstream::printf(ostr, "%20i computed total\n", v16 + v17 + v19 + v18);
  hkOstream::printf(ostr, "%20i reported total\n", v51.m256i_u32[0]);
  hkOstream::printf(ostr, "\n    Heap usage:\n\n");
  v20 = 0;
  v21 = 0;
  if ( (this->m_flags & 4) != 0 )
  {
    m_threadDatas = this->m_threadDatas;
    if ( this != (HavokPhysicsFreeListMemorySystem *)-1416i64 )
    {
      do
      {
        if ( m_threadDatas->m_inUse.m_bool )
        {
          __asm
          {
            vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
            vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
          }
          v25 = m_threadDatas->m_generalHeapThreadMemory.__vftable;
          __asm
          {
            vmovdqu [rbp+60h+var_80], ymm0
            vmovdqu [rbp+60h+var_60], xmm1
          }
          v25->getMemoryStatistics(&m_threadDatas->m_generalHeapThreadMemory, (hkMemoryAllocator::MemoryStatistics *)&v53);
          __asm
          {
            vmovdqu ymm0, cs:__ymm@ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
            vmovdqu xmm1, cs:__xmm@ffffffffffffffffffffffffffffffff
          }
          v20 += v53.m256i_u32[6];
          v28 = m_threadDatas->m_mapLocalHeapThreadMemory.__vftable;
          __asm
          {
            vmovdqu [rbp+60h+var_50], ymm0
            vmovdqu [rbp+60h+var_30], xmm1
          }
          v28->getMemoryStatistics(&m_threadDatas->m_mapLocalHeapThreadMemory, (hkMemoryAllocator::MemoryStatistics *)&v55);
          v21 += v55.m256i_u32[6];
        }
        m_threadDatas = m_threadDatas->m_next;
      }
      while ( m_threadDatas );
    }
    if ( v47.m256i_i32[0] )
      v29 = 100i64 * (int)v20 / v47.m256i_i32[0];
    else
      LODWORD(v29) = 0;
    hkOstream::printf(ostr, "%20i (%2i%%) unused in thread local general freelists\n", v20, (unsigned int)v29);
    if ( v45.m256i_i32[0] )
      v30 = 100i64 * (int)v21 / v45.m256i_i32[0];
    else
      LODWORD(v30) = 0;
    hkOstream::printf(ostr, "%20i (%2i%%) unused in thread local map local freelists\n", v21, (unsigned int)v30);
  }
  v31 = 0;
  if ( v47.m256i_i64[3] != -1 )
    v31 = v47.m256i_i32[6];
  v32 = 0;
  if ( v45.m256i_i64[3] != -1 )
    v32 = v45.m256i_i32[6];
  if ( v47.m256i_i32[0] )
    v33 = 100i64 * v31 / v47.m256i_i32[0];
  else
    LODWORD(v33) = 0;
  hkOstream::printf(ostr, "%20i (%2i%%) unused in main general heap\n", (unsigned int)v31, (unsigned int)v33);
  if ( v45.m256i_i32[0] )
    v34 = 100i64 * v32 / v45.m256i_i32[0];
  else
    LODWORD(v34) = 0;
  hkOstream::printf(ostr, "%20i (%2i%%) unused in main map local heap\n", (unsigned int)v32, (unsigned int)v34);
  v35 = v47.m256i_i32[0] - v31 - v20;
  v36 = v45.m256i_i32[0] - v32 - v21;
  v37 = 100i64 * (int)v35;
  if ( v47.m256i_i32[0] )
    v38 = v37 / v47.m256i_i32[0];
  else
    LODWORD(v38) = 0;
  hkOstream::printf(ostr, "%20i (%2i%%) used in main general heap\n", v35, (unsigned int)v38);
  if ( v45.m256i_i32[0] )
    v39 = 100i64 * (int)v36 / v45.m256i_i32[0];
  else
    LODWORD(v39) = 0;
  hkOstream::printf(ostr, "%20i (%2i%%) used in main map local heap\n", v36, (unsigned int)v39);
  hkOstream::printf(ostr, "%20s\n", "-------");
  hkOstream::printf(ostr, "%20i allocated by heap\n", v47.m256i_u32[0]);
  hkOstream::printf(ostr, "%20i allocated by heap\n", v45.m256i_u32[0]);
  hkOstream::printf(ostr, "\n    Peak usage:\n\n");
  if ( v47.m256i_i64[2] != -1 )
  {
    if ( v47.m256i_i32[4] )
      v40 = v37 / v47.m256i_i32[4];
    else
      LODWORD(v40) = 0;
    hkOstream::printf(ostr, "%20i (%2i%%) peak general heap used (versus current)\n", v47.m256i_i32[4], (unsigned int)v40);
  }
  if ( v45.m256i_i64[2] != -1 )
  {
    if ( v45.m256i_i32[4] )
      v41 = 100i64 * (int)v36 / v45.m256i_i32[4];
    else
      LODWORD(v41) = 0;
    hkOstream::printf(ostr, "%20i (%2i%%) peak map local heap used (versus current)\n", v45.m256i_i32[4], (unsigned int)v41);
  }
  m_peakUse_low = SLODWORD(this->m_solverAllocator.m_peakUse);
  v43 = LODWORD(this->m_solverAllocator.m_bufferEnd) - LODWORD(this->m_solverAllocator.m_bufferStart);
  if ( v43 )
    v44 = 100 * m_peakUse_low / v43;
  else
    LODWORD(v44) = 0;
  hkOstream::printf(ostr, "%20i (%2i%%) peak solver used (versus available)\n", m_peakUse_low, (unsigned int)v44);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_threadDataLock);
}

/*
==============
HavokPhysicsFreeListMemorySystem::setHeapScrubValues
==============
*/
void HavokPhysicsFreeListMemorySystem::setHeapScrubValues(HavokPhysicsFreeListMemorySystem *this, unsigned int allocValue, unsigned int freeValue)
{
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 
  hkMemoryAllocator::ExtendedInterface *m_mapLocalHeapExtended; 

  m_generalHeapExtended = this->m_generalHeapExtended;
  if ( m_generalHeapExtended )
    ((void (__fastcall *)(hkMemoryAllocator::ExtendedInterface *))m_generalHeapExtended->setScrubValues)(m_generalHeapExtended);
  m_mapLocalHeapExtended = this->m_mapLocalHeapExtended;
  if ( m_mapLocalHeapExtended )
    m_mapLocalHeapExtended->setScrubValues(m_mapLocalHeapExtended, allocValue, freeValue);
}

/*
==============
HavokPhysicsFreeListMemorySystem::setHeapSoftLimit
==============
*/
_DWORD *HavokPhysicsFreeListMemorySystem::setHeapSoftLimit(HavokPhysicsFreeListMemorySystem *this, _DWORD *nbytes, int a3)
{
  hkMemoryAllocator::ExtendedInterface *m_generalHeapExtended; 

  m_generalHeapExtended = this->m_generalHeapExtended;
  if ( m_generalHeapExtended )
  {
    ((void (__fastcall *)(hkMemoryAllocator::ExtendedInterface *, _DWORD *, _QWORD))m_generalHeapExtended->setMemorySoftLimit)(m_generalHeapExtended, nbytes, a3);
    return nbytes;
  }
  else
  {
    *nbytes = 0;
    return nbytes;
  }
}

/*
==============
HavokPhysicsFreeListMemorySystem::solverCanAllocSingleBlock
==============
*/
bool HavokPhysicsFreeListMemorySystem::solverCanAllocSingleBlock(HavokPhysicsFreeListMemorySystem *this, int numBytes)
{
  return hkSolverAllocator::canAllocSingleBlock(&this->m_solverAllocator, numBytes);
}

/*
==============
HavokPhysicsFreeListMemorySystem::threadInit
==============
*/
void HavokPhysicsFreeListMemorySystem::threadInit(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router, const char *name, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  char m_storage; 
  HavokPhysicsFreeListMemorySystem::ThreadData *m_threadDatas; 
  HavokPhysicsFreeListMemorySystem::ThreadData *v9; 
  HavokPhysicsFreeListMemorySystem::ThreadData *v10; 
  HavokPhysicsFreeListMemorySystem::ThreadData *v11; 
  hkMemoryAllocator *p_m_generalHeapThreadMemory; 
  hkMemoryRouter *m_generalHeapAllocator; 
  int m_flags; 
  hkSolverAllocator *p_m_solverAllocator; 

  m_storage = flags.m_storage;
  if ( (flags.m_storage & 1) != 0 )
  {
    m_threadDatas = this->m_threadDatas;
    v9 = NULL;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_threadDataLock);
    if ( m_threadDatas )
    {
      while ( m_threadDatas->m_inUse.m_bool )
      {
        v9 = m_threadDatas;
        m_threadDatas = m_threadDatas->m_next;
        if ( !m_threadDatas )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v10 = (HavokPhysicsFreeListMemorySystem::ThreadData *)this->m_systemAllocator->blockAlloc(this->m_systemAllocator, 624i64);
      if ( v10 )
      {
        HavokPhysicsFreeListMemorySystem::ThreadData::ThreadData(v10);
        m_threadDatas = v11;
      }
      else
      {
        m_threadDatas = NULL;
      }
      v9->m_next = m_threadDatas;
    }
    m_threadDatas->m_inUse.m_bool = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_threadDataLock);
    m_threadDatas->m_name = name;
    m_threadDatas->m_router = router;
    p_m_generalHeapThreadMemory = &m_threadDatas->m_generalHeapThreadMemory;
    hkThreadMemory::setMemory(&m_threadDatas->m_generalHeapThreadMemory, this->m_generalHeapAllocator, 8);
    hkThreadMemory::setMemory(&m_threadDatas->m_mapLocalHeapThreadMemory, this->m_mapLocalHeapAllocator, 8);
    router->m_temp = NULL;
    if ( (this->m_flags & 4) == 0 )
      p_m_generalHeapThreadMemory = this->m_generalHeapAllocator;
    router->m_heap = p_m_generalHeapThreadMemory;
    router->m_debug = &this->m_debugAllocator;
    router->m_solver = NULL;
    router->m_userData = m_threadDatas;
  }
  if ( (m_storage & 2) != 0 )
  {
    m_generalHeapAllocator = (hkMemoryRouter *)this->m_generalHeapAllocator;
    m_flags = this->m_flags;
    if ( (m_flags & 4) != 0 )
      m_generalHeapAllocator = (hkMemoryRouter *)((char *)router->m_userData + 8);
    p_m_solverAllocator = &this->m_solverAllocator;
    if ( (m_flags & 2) == 0 )
      p_m_solverAllocator = (hkSolverAllocator *)m_generalHeapAllocator;
    hkLifoAllocator::init(&router->m_stack, p_m_solverAllocator, &m_generalHeapAllocator->m_stack, &m_generalHeapAllocator->m_stack, this->m_frameInfo.m_stackAllocatorSizeHint);
    if ( (this->m_flags & 1) != 0 )
      m_generalHeapAllocator = router;
    router->m_temp = &m_generalHeapAllocator->m_stack;
    router->m_solver = &this->m_solverAllocator;
  }
}

/*
==============
HavokPhysicsFreeListMemorySystem::threadQuit
==============
*/
void HavokPhysicsFreeListMemorySystem::threadQuit(HavokPhysicsFreeListMemorySystem *this, hkMemoryRouter *router, hkFlags<enum hkMemorySystem::FlagBits,int> flags)
{
  _QWORD *m_userData; 
  char m_storage; 
  __int64 v6; 
  __int64 v7; 

  m_userData = router->m_userData;
  m_storage = flags.m_storage;
  if ( (flags.m_storage & 2) != 0 )
  {
    hkLifoAllocator::quit(&router->m_stack, NULL);
    v6 = m_userData[1];
    *m_userData = 0i64;
    (*(void (__fastcall **)(_QWORD *))(v6 + 120))(m_userData + 1);
    (*(void (__fastcall **)(_QWORD *))(m_userData[38] + 120i64))(m_userData + 38);
    router->m_temp = NULL;
    router->m_solver = NULL;
  }
  if ( (m_storage & 1) != 0 )
  {
    v7 = m_userData[1];
    *m_userData = 0i64;
    (*(void (__fastcall **)(_QWORD *))(v7 + 120))(m_userData + 1);
    (*(void (__fastcall **)(_QWORD *))(m_userData[38] + 120i64))(m_userData + 38);
    m_userData[75] = 0i64;
    *((_BYTE *)m_userData + 608) = 0;
    router->m_heap = NULL;
    router->m_debug = NULL;
  }
}

