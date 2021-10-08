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

void __fastcall HavokPhysicsWorld::HavokPhysicsWorld(HavokPhysicsWorld *this, double _XMM1_8)
{
  _RBX = this;
  *(_QWORD *)&this->stepInput.m_deltaTime = 1023969417i64;
  this->stepInput.m_numThreads = 0;
  hkCriticalSection::hkCriticalSection(&this->critSection, 0);
  hkCriticalSection::hkCriticalSection(&_RBX->deferredQueryCritSection, 0);
  _RBX->visProcesses.m_data = NULL;
  _RBX->visProcesses.m_size = 0;
  _RBX->visProcesses.m_capacityAndFlags = 0x80000000;
  _RBX->debugAABBBroadphaseQueryExtendedData.contents = -1;
  _RBX->debugAABBBroadphaseQueryExtendedData.ignoreBodies = NULL;
  _RBX->debugAABBBroadphaseQueryExtendedData.phaseSelection = All;
  _RBX->debugAABBQueryExtendedData.contents = -1;
  _RBX->debugAABBQueryExtendedData.simplify = 0;
  _RBX->debugAABBQueryExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&_RBX->debugAABBQueryExtendedData.collisionBuffer = 0i64;
  _RBX->debugRaycastExtendedData.contents = -1;
  _RBX->debugRaycastExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&_RBX->debugRaycastExtendedData.characterProxyType = 1i64;
  _RBX->debugRaycastExtendedData.phaseSelection = All;
  _RBX->debugRaycastExtendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&_RBX->debugRaycastExtendedData.collectInsideHits = 256;
  _RBX->debugShapecastExtendedData.contents = -1;
  _RBX->debugShapecastExtendedData.startTolerance = 0.0;
  _RBX->debugShapecastExtendedData.accuracy = 0.016000001;
  _RBX->debugShapecastExtendedData.simplifyStart = 0;
  _RBX->debugShapecastExtendedData.ignoreBodies = NULL;
  _RBX->debugShapecastExtendedData.collisionBuffer = 0.0;
  _RBX->debugShapecastExtendedData.nonBrushShape = NULL;
  _RBX->debugShapecastExtendedData.secondPassShape = NULL;
  _RBX->debugShapecastExtendedData.phaseSelection = All;
  _RBX->debugShapecastExtendedData.permitOutwardTrace = 0;
  _RBX->debugQueryPointExtendedData.contents = -1;
  _RBX->debugQueryPointExtendedData.simplify = 0;
  _RBX->debugQueryPointExtendedData.ignoreBodies = NULL;
  *(_QWORD *)&_RBX->debugQueryPointExtendedData.characterProxyType = 1i64;
  _RBX->debugQueryPointExtendedData.phaseSelection = All;
  _RBX->debugGetClosestPointsExtendedData.contents = -1;
  _RBX->debugGetClosestPointsExtendedData.simplify = 0;
  _RBX->debugGetClosestPointsExtendedData.ignoreBodies = NULL;
  _RBX->debugGetClosestPointsExtendedData.collisionBuffer = 0.0;
  _RBX->debugGetClosestPointsExtendedData.nonBrushShape = NULL;
  _RBX->debugGetClosestPointsExtendedData.phaseSelection = All;
  _RBX->stepStopWatch.m_name = NULL;
  _RBX->stepStopWatch.m_ticks_at_start = 0i64;
  _RBX->stepStopWatch.m_ticks_total = 0i64;
  _RBX->stepStopWatch.m_ticks_at_split = 0i64;
  _RBX->stepStopWatch.m_split_total = 0i64;
  _RBX->stepStopWatch.m_running_flag.m_bool = 0;
  _RBX->stepStopWatch.m_num_timings = 0;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
  }
  if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000 }
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vdivsd  xmm1, xmm0, xmm1
    vmovsd  qword ptr [rbx+0E80h], xmm1
  }
  _RBX->persistentMemoryStats.m_allocatorName.m_stringAndFlag = NULL;
  _RBX->persistentMemoryStats.m_allocatorStats.m_allocated = -1i64;
  _RBX->persistentMemoryStats.m_allocatorStats.m_inUse = -1i64;
  _RBX->persistentMemoryStats.m_allocatorStats.m_peakInUse = -1i64;
  _RBX->persistentMemoryStats.m_allocatorStats.m_available = -1i64;
  _RBX->persistentMemoryStats.m_allocatorStats.m_totalAvailable = -1i64;
  _RBX->persistentMemoryStats.m_allocatorStats.m_largestBlock = -1i64;
  _RBX->m_deferredBulletForceEntries = NULL;
}

