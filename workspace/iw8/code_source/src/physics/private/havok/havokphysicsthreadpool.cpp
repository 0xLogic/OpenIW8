/*
==============
HavokPhysicsThreadPool::onWorkerCommandEnd
==============
*/

void __fastcall HavokPhysicsThreadPool::onWorkerCommandEnd(HavokPhysicsThreadPool *this, int workerIndex, float timeTaken, float timeWaiting)
{
  ?onWorkerCommandEnd@HavokPhysicsThreadPool@@QEAAXHMM@Z(this, workerIndex, timeTaken, timeWaiting);
}

/*
==============
HavokPhysicsThreadPoolTimeoutFunc
==============
*/

bool __fastcall HavokPhysicsThreadPoolTimeoutFunc(void *taskQueuePtr)
{
  return ?HavokPhysicsThreadPoolTimeoutFunc@@YA_NPEAX@Z(taskQueuePtr);
}

/*
==============
HavokPhysicsThreadPool::setUsage
==============
*/

void __fastcall HavokPhysicsThreadPool::setUsage(HavokPhysicsThreadPool *this, HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsage usage)
{
  ?setUsage@HavokPhysicsThreadPool@@QEAAXW4HavokPhysicsThreadPoolUsage@1@@Z(this, usage);
}

/*
==============
HavokPhysicsThreadPool::getNumThreads
==============
*/

int __fastcall HavokPhysicsThreadPool::getNumThreads(HavokPhysicsThreadPool *this)
{
  return ?getNumThreads@HavokPhysicsThreadPool@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsThreadPool::appendTimerData
==============
*/

void __fastcall HavokPhysicsThreadPool::appendTimerData(HavokPhysicsThreadPool *this, hkArray<hkTimerData,hkContainerHeapAllocator> *timerDataOut)
{
  ?appendTimerData@HavokPhysicsThreadPool@@UEAAXAEAV?$hkArray@UhkTimerData@@UhkContainerHeapAllocator@@@@@Z(this, timerDataOut);
}

/*
==============
HavokPhysicsThreadPool::getProcessingTaskQueue
==============
*/

hkDefaultTaskQueue *__fastcall HavokPhysicsThreadPool::getProcessingTaskQueue(HavokPhysicsThreadPool *this)
{
  return ?getProcessingTaskQueue@HavokPhysicsThreadPool@@UEBAPEAVhkDefaultTaskQueue@@XZ(this);
}

/*
==============
HavokPhysicsThreadPool::processTaskQueue
==============
*/

void __fastcall HavokPhysicsThreadPool::processTaskQueue(HavokPhysicsThreadPool *this, hkDefaultTaskQueue *taskQueue)
{
  ?processTaskQueue@HavokPhysicsThreadPool@@UEAAXPEAVhkDefaultTaskQueue@@@Z(this, taskQueue);
}

/*
==============
HavokPhysicsThreadPool::~HavokPhysicsThreadPool
==============
*/

void __fastcall HavokPhysicsThreadPool::~HavokPhysicsThreadPool(HavokPhysicsThreadPool *this)
{
  ??1HavokPhysicsThreadPool@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsThreadPool::gcThreadMemoryOnNextCompletion
==============
*/

void __fastcall HavokPhysicsThreadPool::gcThreadMemoryOnNextCompletion(HavokPhysicsThreadPool *this)
{
  ?gcThreadMemoryOnNextCompletion@HavokPhysicsThreadPool@@UEAAXXZ(this);
}

/*
==============
HavokPhysicsThreadPool::clearTimerData
==============
*/

void __fastcall HavokPhysicsThreadPool::clearTimerData(HavokPhysicsThreadPool *this)
{
  ?clearTimerData@HavokPhysicsThreadPool@@UEAAXXZ(this);
}

/*
==============
HavokPhysicsThreadPool::waitForCompletion
==============
*/

void __fastcall HavokPhysicsThreadPool::waitForCompletion(HavokPhysicsThreadPool *this)
{
  ?waitForCompletion@HavokPhysicsThreadPool@@UEAAXXZ(this);
}

/*
==============
HavokPhysicsThreadPool::onWorkerCommandStart
==============
*/

void __fastcall HavokPhysicsThreadPool::onWorkerCommandStart(HavokPhysicsThreadPool *this, int workerIndex)
{
  ?onWorkerCommandStart@HavokPhysicsThreadPool@@QEAAXH@Z(this, workerIndex);
}

/*
==============
HavokPhysicsThreadPool::setNumThreads
==============
*/

void __fastcall HavokPhysicsThreadPool::setNumThreads(HavokPhysicsThreadPool *this, int numThreads)
{
  ?setNumThreads@HavokPhysicsThreadPool@@UEAAXH@Z(this, numThreads);
}

/*
==============
HavokPhysicsThreadPool::getMaxNumThreadsStatic
==============
*/

int __fastcall HavokPhysicsThreadPool::getMaxNumThreadsStatic()
{
  return ?getMaxNumThreadsStatic@HavokPhysicsThreadPool@@SAHXZ();
}

/*
==============
HavokPhysicsThreadPool::processJobQueue
==============
*/

void __fastcall HavokPhysicsThreadPool::processJobQueue(HavokPhysicsThreadPool *this, hkJobQueue *jobQueue, hkJobType firstJobType)
{
  ?processJobQueue@HavokPhysicsThreadPool@@UEAAXPEAVhkJobQueue@@W4hkJobType@@@Z(this, jobQueue, firstJobType);
}

/*
==============
HavokPhysicsThreadPool::getProcessingJobQueue
==============
*/

hkJobQueue *__fastcall HavokPhysicsThreadPool::getProcessingJobQueue(HavokPhysicsThreadPool *this)
{
  return ?getProcessingJobQueue@HavokPhysicsThreadPool@@UEBAPEAVhkJobQueue@@XZ(this);
}

/*
==============
HavokPhysicsThreadPool::HavokPhysicsThreadPool
==============
*/

void __fastcall HavokPhysicsThreadPool::HavokPhysicsThreadPool(HavokPhysicsThreadPool *this)
{
  ??0HavokPhysicsThreadPool@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsThreadPool::waitForCompletion
==============
*/

void __fastcall HavokPhysicsThreadPool::waitForCompletion(HavokPhysicsThreadPool *this, hkDefaultTaskQueue *taskQueue)
{
  ?waitForCompletion@HavokPhysicsThreadPool@@QEAAXPEAVhkDefaultTaskQueue@@@Z(this, taskQueue);
}

/*
==============
HavokPhysicsThreadPool::DrawDebug
==============
*/

void __fastcall HavokPhysicsThreadPool::DrawDebug(HavokPhysicsThreadPool *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DrawDebug@HavokPhysicsThreadPool@@QEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsThreadPool::startWorkerCommands
==============
*/

void __fastcall HavokPhysicsThreadPool::startWorkerCommands(HavokPhysicsThreadPool *this, Physics_WorldId worldId, int numRequestedThreads)
{
  ?startWorkerCommands@HavokPhysicsThreadPool@@QEAAXW4Physics_WorldId@@H@Z(this, worldId, numRequestedThreads);
}

/*
==============
HavokPhysicsThreadPool::isProcessing
==============
*/

bool __fastcall HavokPhysicsThreadPool::isProcessing(HavokPhysicsThreadPool *this)
{
  return ?isProcessing@HavokPhysicsThreadPool@@UEBA_NXZ(this);
}

/*
==============
HavokPhysicsThreadPool::HavokPhysicsThreadPool
==============
*/
void HavokPhysicsThreadPool::HavokPhysicsThreadPool(HavokPhysicsThreadPool *this)
{
  HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData *m_usageData; 
  __int64 v3; 

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (HavokPhysicsThreadPool_vtbl *)&HavokPhysicsThreadPool::`vftable';
  this->m_usage = HAVOKPHYSICS_THREADPOOL_USAGE_AUTHCOLLIDE;
  m_usageData = this->m_usageData;
  v3 = 3i64;
  do
  {
    HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData(m_usageData++);
    --v3;
  }
  while ( v3 );
  this->m_numThreadsUsed = 0;
  this->m_numThreadsInFlight = 0;
  this->m_streams.m_data = NULL;
  this->m_streams.m_size = 0;
  this->m_streams.m_capacityAndFlags = 0x80000000;
  memset_0(this->m_debugLastTimesMS, 0, 0x87Cui64);
}

/*
==============
HavokPhysicsThreadPool::~HavokPhysicsThreadPool
==============
*/
void HavokPhysicsThreadPool::~HavokPhysicsThreadPool(HavokPhysicsThreadPool *this)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 

  this->__vftable = (HavokPhysicsThreadPool_vtbl *)&HavokPhysicsThreadPool::`vftable';
  HavokPhysicsThreadPool::waitForCompletion(this, NULL);
  v2 = hkMemHeapAllocator();
  this->m_streams.m_size = 0;
  m_capacityAndFlags = this->m_streams.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_streams.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_streams.m_data = NULL;
  this->m_streams.m_capacityAndFlags = 0x80000000;
  this->__vftable = (HavokPhysicsThreadPool_vtbl *)&hkThreadPool::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
HavokPhysicsThreadPool::DrawDebug
==============
*/
void HavokPhysicsThreadPool::DrawDebug(HavokPhysicsThreadPool *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  float v10; 
  float v11; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  Physics_DrawDebugString(scrPlace, *x, *y, "Thread Pool Data - Time:Green Usage:Red NumThreads:Blue", &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  v10 = tabWidth + *x;
  *x = v10;
  Physics_DrawDebugString(scrPlace, v10, *y, "Client Auth Collide Job", &colorWhite, 0, 1, charHeight, 0);
  v11 = charHeight + *y;
  *y = v11;
  CG_DebugGraphs_DrawAxes(scrPlace, *x, v11, 600.0, 100.0, &colorWhite);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 3.0, this->m_debugLastTimesMS[0], 0x3Cu, this->m_debugDataHead[0], &colorGreen);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 1.0, this->m_debugHelperUtilizations[0], 0x3Cu, this->m_debugDataHead[0], &colorRed);
  _XMM0 = 3u;
  __asm { vpminsd xmm0, xmm0, xmm0 }
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, (float)(int)_XMM0, this->m_debugNumThreads[0], 0x3Cu, this->m_debugDataHead[0], &colorBlue);
  v14 = *y + 100.0;
  *y = v14;
  Physics_DrawDebugString(scrPlace, *x, v14, "Client Auth Solve Job", &colorWhite, 0, 1, charHeight, 0);
  v15 = charHeight + *y;
  *y = v15;
  CG_DebugGraphs_DrawAxes(scrPlace, *x, v15, 600.0, 100.0, &colorWhite);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 3.0, this->m_debugLastTimesMS[1], 0x3Cu, this->m_debugDataHead[1], &colorGreen);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 1.0, this->m_debugHelperUtilizations[1], 0x3Cu, this->m_debugDataHead[1], &colorRed);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, (float)(int)_XMM0, this->m_debugNumThreads[1], 0x3Cu, this->m_debugDataHead[1], &colorBlue);
  v16 = *y + 100.0;
  *y = v16;
  Physics_DrawDebugString(scrPlace, *x, v16, "FX Job", &colorWhite, 0, 1, charHeight, 0);
  v17 = charHeight + *y;
  *y = v17;
  CG_DebugGraphs_DrawAxes(scrPlace, *x, v17, 600.0, 100.0, &colorWhite);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 3.0, this->m_debugLastTimesMS[2], 0x3Cu, this->m_debugDataHead[2], &colorGreen);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, 1.0, this->m_debugHelperUtilizations[2], 0x3Cu, this->m_debugDataHead[2], &colorRed);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 600.0, 100.0, 0.0, (float)(int)_XMM0, this->m_debugNumThreads[2], 0x3Cu, this->m_debugDataHead[2], &colorBlue);
  *y = *y + 100.0;
  *x = *x - tabWidth;
}

/*
==============
HavokPhysicsThreadPoolTimeoutFunc
==============
*/
bool HavokPhysicsThreadPoolTimeoutFunc(void *taskQueuePtr)
{
  if ( taskQueuePtr )
    hkDefaultTaskQueue::wakeAllThreads((hkDefaultTaskQueue *)taskQueuePtr);
  return !Sys_IsWorkerCmdOfTypeAvailableForProcess(WRKCMD_PHYSICS_TASK);
}

/*
==============
HavokPhysicsThreadPool::appendTimerData
==============
*/
void HavokPhysicsThreadPool::appendTimerData(HavokPhysicsThreadPool *this, hkArray<hkTimerData,hkContainerHeapAllocator> *timerDataOut)
{
  int v4; 
  char **p_m_monitorStreamEnd; 
  __int64 v6; 
  __int64 v7; 
  hkMemoryAllocator *v8; 
  int m_size; 
  hkTimerData *v10; 
  char *v11; 

  v4 = 0;
  if ( this->getNumThreads(this) > 0 )
  {
    p_m_monitorStreamEnd = &this->m_workerThreads[0].m_monitorStreamEnd;
    do
    {
      v8 = hkMemHeapAllocator();
      m_size = timerDataOut->m_size;
      if ( m_size == (timerDataOut->m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v8, timerDataOut, 16);
        m_size = timerDataOut->m_size;
      }
      ++v4;
      v10 = &timerDataOut->m_data[m_size];
      timerDataOut->m_size = m_size + 1;
      v10->m_streamBegin = *(p_m_monitorStreamEnd - 1);
      v11 = *p_m_monitorStreamEnd;
      p_m_monitorStreamEnd += 3;
      v10->m_streamEnd = v11;
    }
    while ( v4 < ((int (__fastcall *)(HavokPhysicsThreadPool *, __int64, __int64, hkMemoryAllocator *))this->getNumThreads)(this, v6, v7, v8) );
  }
}

/*
==============
HavokPhysicsThreadPool::clearTimerData
==============
*/
void HavokPhysicsThreadPool::clearTimerData(HavokPhysicsThreadPool *this)
{
  hkMonitorStream **m_data; 

  EnterCriticalSection((LPCRITICAL_SECTION)&s_havokPhysics_PoolDebugCritSection);
  m_data = this->m_streams.m_data;
  if ( m_data != &m_data[this->m_streams.m_size] )
  {
    do
    {
      if ( *m_data )
        hkMonitorStream::reset(*m_data);
      ++m_data;
    }
    while ( m_data != &this->m_streams.m_data[this->m_streams.m_size] );
  }
  this->m_streams.m_size = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&s_havokPhysics_PoolDebugCritSection);
}

/*
==============
HavokPhysicsThreadPool::gcThreadMemoryOnNextCompletion
==============
*/
void HavokPhysicsThreadPool::gcThreadMemoryOnNextCompletion(HavokPhysicsThreadPool *this)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsthreadpool.cpp", 415, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysics: Thread Pool doesn't support garbage collection") )
    __debugbreak();
}

/*
==============
HavokPhysicsThreadPool::getMaxNumThreadsStatic
==============
*/
int HavokPhysicsThreadPool::getMaxNumThreadsStatic()
{
  _XMM0 = 3u;
  __asm { vpminsd xmm0, xmm0, xmm0 }
  return _XMM0;
}

/*
==============
HavokPhysicsThreadPool::getNumThreads
==============
*/
__int64 HavokPhysicsThreadPool::getNumThreads(HavokPhysicsThreadPool *this)
{
  return (unsigned int)this->m_usageData[this->m_usage].m_numThreads;
}

/*
==============
HavokPhysicsThreadPool::getProcessingJobQueue
==============
*/
hkJobQueue *HavokPhysicsThreadPool::getProcessingJobQueue(HavokPhysicsThreadPool *this)
{
  return 0i64;
}

/*
==============
HavokPhysicsThreadPool::getProcessingTaskQueue
==============
*/
hkDefaultTaskQueue *HavokPhysicsThreadPool::getProcessingTaskQueue(HavokPhysicsThreadPool *this)
{
  return 0i64;
}

/*
==============
HavokPhysicsThreadPool::isProcessing
==============
*/
bool HavokPhysicsThreadPool::isProcessing(HavokPhysicsThreadPool *this)
{
  return this->m_numThreadsInFlight > 0;
}

/*
==============
HavokPhysicsThreadPool::onWorkerCommandEnd
==============
*/
void HavokPhysicsThreadPool::onWorkerCommandEnd(HavokPhysicsThreadPool *this, int workerIndex, float timeTaken, float timeWaiting)
{
  __int64 v5; 
  float v6; 
  volatile int *p_m_numThreadsInFlight; 

  v5 = workerIndex;
  v6 = FLOAT_1_0;
  this->m_workerThreads[workerIndex].m_monitorStreamEnd = (char *)*((_QWORD *)TlsGetValue(hkMonitorStream__m_instance.m_slotID) + 1);
  if ( timeTaken > 0.0 )
    v6 = 1.0 - (float)(timeWaiting / timeTaken);
  this->m_workerThreads[v5].m_utilizationProportion = v6;
  p_m_numThreadsInFlight = &this->m_numThreadsInFlight;
  if ( ((unsigned __int8)p_m_numThreadsInFlight & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_numThreadsInFlight) )
    __debugbreak();
  _InterlockedExchangeAdd(p_m_numThreadsInFlight, 0xFFFFFFFF);
}

/*
==============
HavokPhysicsThreadPool::onWorkerCommandStart
==============
*/
void HavokPhysicsThreadPool::onWorkerCommandStart(HavokPhysicsThreadPool *this, int workerIndex)
{
  HavokPhysicsThreadPool::ThreadData *v3; 
  hkMonitorStream *Value; 
  hkMemoryAllocator *v5; 
  int m_size; 
  char *v7; 

  v3 = &this->m_workerThreads[workerIndex];
  EnterCriticalSection((LPCRITICAL_SECTION)&s_havokPhysics_PoolDebugCritSection);
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = hkMemHeapAllocator();
  m_size = this->m_streams.m_size;
  if ( m_size == (this->m_streams.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v5, &this->m_streams, 8);
    m_size = this->m_streams.m_size;
  }
  this->m_streams.m_data[m_size] = Value;
  ++this->m_streams.m_size;
  v7 = (char *)*((_QWORD *)TlsGetValue(hkMonitorStream__m_instance.m_slotID) + 1);
  v3->m_monitorStreamBegin = v7;
  v3->m_monitorStreamEnd = v7;
  LeaveCriticalSection((LPCRITICAL_SECTION)&s_havokPhysics_PoolDebugCritSection);
}

/*
==============
HavokPhysicsThreadPool::processJobQueue
==============
*/
void HavokPhysicsThreadPool::processJobQueue(HavokPhysicsThreadPool *this, hkJobQueue *jobQueue, hkJobType firstJobType)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsthreadpool.cpp", 151, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysics: Thread Pool doesn't support jobs yet") )
    __debugbreak();
}

/*
==============
HavokPhysicsThreadPool::processTaskQueue
==============
*/
void HavokPhysicsThreadPool::processTaskQueue(HavokPhysicsThreadPool *this, hkDefaultTaskQueue *taskQueue)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsthreadpool.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysics: Thread Pool doesn't support processing task queues directly") )
    __debugbreak();
}

/*
==============
HavokPhysicsThreadPool::setNumThreads
==============
*/
void HavokPhysicsThreadPool::setNumThreads(HavokPhysicsThreadPool *this, int numThreads)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsthreadpool.cpp", 374, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysics: Thread Pool doesn't support variable thread counts") )
    __debugbreak();
}

/*
==============
HavokPhysicsThreadPool::setUsage
==============
*/
void HavokPhysicsThreadPool::setUsage(HavokPhysicsThreadPool *this, HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsage usage)
{
  this->m_usage = usage;
}

/*
==============
HavokPhysicsThreadPool::startWorkerCommands
==============
*/
void HavokPhysicsThreadPool::startWorkerCommands(HavokPhysicsThreadPool *this, Physics_WorldId worldId, int numRequestedThreads)
{
  __int64 m_usage; 
  unsigned __int64 TickCounter; 
  int v8; 
  int v9; 
  float *p_m_utilizationProportion; 
  Physics_WorldId data; 
  int v12; 

  if ( this->isProcessing(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsthreadpool.cpp", 79, ASSERT_TYPE_ASSERT, "(!isProcessing())", "%s\n\tHavokPhysics: Thread Pool already has worker commands", "!isProcessing()") )
    __debugbreak();
  m_usage = this->m_usage;
  this->m_usageData[m_usage].m_stopwatch.m_running_flag.m_bool = 1;
  TickCounter = hkStopwatch::getTickCounter();
  this->m_usageData[m_usage].m_stopwatch.m_ticks_at_start = TickCounter;
  this->m_usageData[m_usage].m_stopwatch.m_ticks_at_split = TickCounter;
  v8 = this->getNumThreads(this);
  if ( v8 < numRequestedThreads )
    numRequestedThreads = v8;
  v9 = 0;
  this->m_numThreadsUsed = numRequestedThreads;
  if ( numRequestedThreads > 0 )
  {
    p_m_utilizationProportion = &this->m_workerThreads[0].m_utilizationProportion;
    do
    {
      if ( (((_BYTE)this - 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numThreadsInFlight) )
        __debugbreak();
      _InterlockedExchangeAdd(&this->m_numThreadsInFlight, 1u);
      *p_m_utilizationProportion = 1.0;
      data = worldId;
      v12 = v9;
      Sys_AddWorkerCmd(WRKCMD_PHYSICS_TASK, &data);
      ++v9;
      p_m_utilizationProportion += 6;
    }
    while ( v9 < this->m_numThreadsUsed );
  }
}

/*
==============
HavokPhysicsThreadPool::waitForCompletion
==============
*/
void HavokPhysicsThreadPool::waitForCompletion(HavokPhysicsThreadPool *this, hkDefaultTaskQueue *taskQueue)
{
  int v4; 
  const dvar_t *v5; 
  unsigned int flags; 
  int v7; 
  __int64 m_usage; 
  __int64 m_currentSampleId; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 TickCounter; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  signed __int64 m_ticks_total; 
  unsigned __int64 v18; 
  __int64 v19; 
  __int128 v22; 
  __int128 v24; 
  int m_numThreadsUsed; 
  int v27; 
  float *p_m_utilizationProportion; 
  __int64 v29; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  float m_lastTimeInMSAverage; 
  int m_numThreads; 
  __int64 v39; 
  int v41; 

  v4 = Sys_Milliseconds() + 20;
  while ( this->isProcessing(this) )
  {
    if ( Sys_Milliseconds() >= v4 )
      break;
    if ( taskQueue )
      hkDefaultTaskQueue::wakeAllThreads(taskQueue);
  }
  if ( this->isProcessing(this) )
  {
    v5 = DVARBOOL_physics_processWorkerCommandsWhenWaiting_enabled;
    if ( !DVARBOOL_physics_processWorkerCommandsWhenWaiting_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_processWorkerCommandsWhenWaiting_enabled") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v5->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v5->name) )
        __debugbreak();
    }
    if ( v5->current.enabled )
      Sys_ProcessWorkerCmdsWithTimeout(HavokPhysicsThreadPoolTimeoutFunc, taskQueue);
  }
  v7 = Sys_Milliseconds() + 30000;
  while ( this->isProcessing(this) )
  {
    if ( Sys_Milliseconds() > v7 )
      CrashReport_TriggerNow();
    if ( taskQueue )
      hkDefaultTaskQueue::wakeAllThreads(taskQueue);
    if ( GetCurrentProcessorNumber() == 1 )
      Sys_PushUnblockDatabaseThread();
    Sys_Sleep(1);
    if ( GetCurrentProcessorNumber() == 1 )
      Sys_PopUnblockDatabaseThread();
  }
  m_usage = this->m_usage;
  m_currentSampleId = this->m_usageData[m_usage].m_currentSampleId;
  this->m_usageData[m_usage].m_currentSampleId = m_currentSampleId + 1;
  v10 = this->m_usage;
  v11 = v10;
  if ( this->m_usageData[v10].m_stopwatch.m_running_flag.m_bool )
  {
    TickCounter = hkStopwatch::getTickCounter();
    this->m_usageData[v11].m_stopwatch.m_running_flag.m_bool = 0;
    v13 = TickCounter - this->m_usageData[v11].m_stopwatch.m_ticks_at_start;
    v14 = TickCounter - this->m_usageData[v11].m_stopwatch.m_ticks_at_split;
    this->m_usageData[v11].m_stopwatch.m_ticks_total += v13;
    this->m_usageData[v11].m_stopwatch.m_split_total += v14;
    ++this->m_usageData[v11].m_stopwatch.m_num_timings;
    v15 = this->m_usage;
    v16 = v15;
    m_ticks_total = this->m_usageData[v15].m_stopwatch.m_ticks_total;
    if ( this->m_usageData[v15].m_stopwatch.m_running_flag.m_bool )
    {
      v18 = hkStopwatch::getTickCounter();
      LODWORD(v15) = this->m_usage;
      m_ticks_total += v18 - this->m_usageData[v16].m_stopwatch.m_ticks_at_start;
    }
    v19 = m_currentSampleId;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rdi }
    if ( m_ticks_total < 0 )
    {
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v22 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v22;
    }
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v24 = *(double *)&_XMM0 * this->m_usageData[v16].m_stopwatch.m_inv_ticks_per_second;
    _XMM0 = v24;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    this->m_usageData[(int)v15].m_lastTimesInMS[m_currentSampleId] = *(float *)&_XMM1 * 1000.0;
    v10 = 120i64 * (int)this->m_usage;
    *(unsigned __int64 *)((char *)&this->m_usageData[0].m_stopwatch.m_ticks_at_start + v10) = 0i64;
    *(unsigned __int64 *)((char *)&this->m_usageData[0].m_stopwatch.m_ticks_total + v10) = 0i64;
    *(unsigned __int64 *)((char *)&this->m_usageData[0].m_stopwatch.m_ticks_at_split + v10) = 0i64;
    *(unsigned __int64 *)((char *)&this->m_usageData[0].m_stopwatch.m_split_total + v10) = 0i64;
    *(&this->m_usageData[0].m_stopwatch.m_running_flag.m_bool + v10) = 0;
    *(int *)((char *)&this->m_usageData[0].m_stopwatch.m_num_timings + v10) = 0;
    LODWORD(v10) = this->m_usage;
  }
  else
  {
    v19 = m_currentSampleId;
  }
  this->m_usageData[(int)v10].m_helperMinUtilizations[v19] = 1.0;
  m_numThreadsUsed = this->m_numThreadsUsed;
  if ( m_numThreadsUsed )
  {
    v27 = 0;
    if ( m_numThreadsUsed > 0 )
    {
      p_m_utilizationProportion = &this->m_workerThreads[0].m_utilizationProportion;
      do
      {
        p_m_utilizationProportion += 6;
        ++v27;
        v29 = v19 + 30i64 * (int)this->m_usage;
        _XMM0 = LODWORD(this->m_usageData[0].m_helperMinUtilizations[v29]);
        __asm { vminss  xmm1, xmm0, dword ptr [rdx-18h] }
        this->m_usageData[0].m_helperMinUtilizations[v29] = *(float *)&_XMM1;
      }
      while ( v27 < this->m_numThreadsUsed );
    }
  }
  v32 = this->m_usage;
  if ( this->m_usageData[v32].m_currentSampleId == 5 )
  {
    this->m_usageData[v32].m_currentSampleId = 0;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = 0.0;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = 0.0;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = this->m_usageData[this->m_usage].m_helperMinUtilizations[0] + this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = this->m_usageData[this->m_usage].m_lastTimesInMS[0] + this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = this->m_usageData[this->m_usage].m_helperMinUtilizations[1] + this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = this->m_usageData[this->m_usage].m_lastTimesInMS[1] + this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = this->m_usageData[this->m_usage].m_helperMinUtilizations[2] + this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = this->m_usageData[this->m_usage].m_lastTimesInMS[2] + this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = this->m_usageData[this->m_usage].m_helperMinUtilizations[3] + this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = this->m_usageData[this->m_usage].m_lastTimesInMS[3] + this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = this->m_usageData[this->m_usage].m_helperMinUtilizations[4] + this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = this->m_usageData[this->m_usage].m_lastTimesInMS[4] + this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_usageData[this->m_usage].m_helperMinUtilizationAverage = 0.2 * this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_usageData[this->m_usage].m_lastTimeInMSAverage = 0.2 * this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    v33 = this->m_usage;
    if ( this->m_usageData[v33].m_helperMinUtilizationAverage >= 0.33000001 || (v34 = this->m_usageData[v33].m_numThreads, v34 <= 1) && this->m_usageData[v33].m_lastTimeInMSAverage >= 1.0 )
    {
      m_lastTimeInMSAverage = this->m_usageData[v33].m_lastTimeInMSAverage;
      if ( m_lastTimeInMSAverage > 1.0 )
      {
        m_numThreads = (int)m_lastTimeInMSAverage;
        if ( this->m_usageData[v33].m_numThreads > (int)m_lastTimeInMSAverage )
          m_numThreads = this->m_usageData[v33].m_numThreads;
        this->m_usageData[v33].m_numThreads = m_numThreads + 1;
      }
    }
    else
    {
      v35 = v34 - 1;
      if ( v35 < 0 )
        v35 = 0;
      this->m_usageData[v33].m_numThreads = v35;
    }
    _XMM0 = 3u;
    v39 = this->m_usage;
    __asm { vpminsd xmm0, xmm0, xmm0 }
    v41 = _XMM0;
    if ( this->m_usageData[v39].m_numThreads < (int)_XMM0 )
      v41 = this->m_usageData[v39].m_numThreads;
    this->m_usageData[v39].m_numThreads = v41;
    this->m_debugLastTimesMS[this->m_usage][this->m_debugDataHead[this->m_usage]] = this->m_usageData[this->m_usage].m_lastTimeInMSAverage;
    this->m_debugHelperUtilizations[this->m_usage][this->m_debugDataHead[this->m_usage]] = this->m_usageData[this->m_usage].m_helperMinUtilizationAverage;
    this->m_debugNumThreads[this->m_usage][this->m_debugDataHead[this->m_usage]] = this->m_usageData[this->m_usage].m_numThreads;
    this->m_debugDataHead[this->m_usage] = (this->m_debugDataHead[this->m_usage] + 1) % 0x3C;
  }
}

/*
==============
HavokPhysicsThreadPool::waitForCompletion
==============
*/
void HavokPhysicsThreadPool::waitForCompletion(HavokPhysicsThreadPool *this)
{
  HavokPhysicsThreadPool::waitForCompletion(this, NULL);
}

