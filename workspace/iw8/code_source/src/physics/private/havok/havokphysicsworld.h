/*
==============
HavokPhysicsWorld::HavokPhysicsWorld
==============
*/

void __fastcall HavokPhysicsWorld::HavokPhysicsWorld(HavokPhysicsWorld *this)
{
  ??0HavokPhysicsWorld@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsWorld::HavokPhysicsWorld
==============
*/
void HavokPhysicsWorld::HavokPhysicsWorld(HavokPhysicsWorld *this)
{
  *(_QWORD *)&this->stepInput.m_deltaTime = 1023969417i64;
  this->stepInput.m_numThreads = 0;
  hkCriticalSection::hkCriticalSection(&this->critSection, 0);
  hkCriticalSection::hkCriticalSection(&this->deferredQueryCritSection, 0);
  this->visProcesses.m_data = NULL;
  this->visProcesses.m_size = 0;
  this->visProcesses.m_capacityAndFlags = 0x80000000;
  this->debugAABBBroadphaseQueryExtendedData.contents = -1;
  this->debugAABBBroadphaseQueryExtendedData.ignoreBodies = NULL;
  this->debugAABBBroadphaseQueryExtendedData.phaseSelection = All;
  this->debugAABBQueryExtendedData.contents = -1;
  this->debugAABBQueryExtendedData.simplify = 0;
  this->debugAABBQueryExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&this->debugAABBQueryExtendedData.collisionBuffer = 0i64;
  this->debugRaycastExtendedData.contents = -1;
  this->debugRaycastExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&this->debugRaycastExtendedData.characterProxyType = 1i64;
  this->debugRaycastExtendedData.phaseSelection = All;
  this->debugRaycastExtendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&this->debugRaycastExtendedData.collectInsideHits = 256;
  this->debugShapecastExtendedData.contents = -1;
  this->debugShapecastExtendedData.startTolerance = 0.0;
  this->debugShapecastExtendedData.accuracy = 0.016000001;
  this->debugShapecastExtendedData.simplifyStart = 0;
  this->debugShapecastExtendedData.ignoreBodies = NULL;
  this->debugShapecastExtendedData.collisionBuffer = 0.0;
  this->debugShapecastExtendedData.nonBrushShape = NULL;
  this->debugShapecastExtendedData.secondPassShape = NULL;
  this->debugShapecastExtendedData.phaseSelection = All;
  this->debugShapecastExtendedData.permitOutwardTrace = 0;
  this->debugQueryPointExtendedData.contents = -1;
  this->debugQueryPointExtendedData.simplify = 0;
  this->debugQueryPointExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&this->debugQueryPointExtendedData.characterProxyType = 1i64;
  this->debugQueryPointExtendedData.phaseSelection = All;
  this->debugGetClosestPointsExtendedData.contents = -1;
  this->debugGetClosestPointsExtendedData.simplify = 0;
  this->debugGetClosestPointsExtendedData.ignoreBodies = NULL;
  this->debugGetClosestPointsExtendedData.collisionBuffer = 0.0;
  this->debugGetClosestPointsExtendedData.nonBrushShape = NULL;
  this->debugGetClosestPointsExtendedData.phaseSelection = All;
  this->stepStopWatch.m_name = NULL;
  this->stepStopWatch.m_ticks_at_start = 0i64;
  this->stepStopWatch.m_ticks_total = 0i64;
  this->stepStopWatch.m_ticks_at_split = 0i64;
  this->stepStopWatch.m_split_total = 0i64;
  this->stepStopWatch.m_running_flag.m_bool = 0;
  this->stepStopWatch.m_num_timings = 0;
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
  this->stepStopWatch.m_inv_ticks_per_second = 1.0 / *(double *)&_XMM1;
  this->persistentMemoryStats.m_allocatorName.m_stringAndFlag = NULL;
  this->persistentMemoryStats.m_allocatorStats.m_allocated = -1i64;
  this->persistentMemoryStats.m_allocatorStats.m_inUse = -1i64;
  this->persistentMemoryStats.m_allocatorStats.m_peakInUse = -1i64;
  this->persistentMemoryStats.m_allocatorStats.m_available = -1i64;
  this->persistentMemoryStats.m_allocatorStats.m_totalAvailable = -1i64;
  this->persistentMemoryStats.m_allocatorStats.m_largestBlock = -1i64;
  this->m_deferredBulletForceEntries = NULL;
}

