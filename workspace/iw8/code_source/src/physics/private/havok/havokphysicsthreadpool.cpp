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
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  float setColord; 
  float setColore; 
  float setColorf; 
  float setColorg; 
  float setColorh; 
  float setColori; 
  float setColorj; 
  float setColork; 
  int forceColor; 
  int forceColora; 
  int forceColorb; 
  int forceColorc; 
  int forceColord; 
  int forceColore; 
  int forceColorf; 
  int forceColorg; 
  int forceColorh; 
  int shadow; 
  int shadowa; 
  int shadowb; 
  int shadowc; 
  int shadowd; 
  int shadowe; 
  int shadowf; 
  int shadowg; 
  int shadowh; 
  float data; 
  float dataa; 
  float datab; 
  float datac; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, dword ptr [r8]; x
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RSI = y;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, [rsp+108h+charHeight]
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  dword ptr [rsp+108h+data], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RBP = x;
  __asm
  {
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Thread Pool Data - Time:Green Usage:Red NumThreads:Blue", &colorWhite, 0, 1, data, 0);
  __asm
  {
    vaddss  xmm0, xmm10, dword ptr [rsi]
    vmovss  xmm13, [rsp+108h+tabWidth]
    vmovss  dword ptr [rsi], xmm0
    vaddss  xmm1, xmm13, dword ptr [rbp+0]; x
    vmovss  dword ptr [rsp+108h+data], xmm10
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm2, dword ptr [rsi]; y
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Client Auth Collide Job", &colorWhite, 0, 1, dataa, 0);
  __asm
  {
    vaddss  xmm2, xmm10, dword ptr [rsi]; y
    vmovss  xmm11, cs:__real@44160000
    vmovss  xmm12, cs:__real@42c80000
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, &colorWhite);
  __asm
  {
    vmovss  xmm8, cs:__real@40400000
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm8
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, *(float *)&forceColor, *(float *)&shadow, this->m_debugLastTimesMS[0], 0x3Cu, this->m_debugDataHead[0], &colorGreen);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm6
    vmovss  [rsp+108h+forceColor], xmm9
    vmovss  dword ptr [rsp+108h+setColor], xmm12
    vmovaps xmm3, xmm11; width
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, *(float *)&forceColora, *(float *)&shadowa, this->m_debugHelperUtilizations[0], 0x3Cu, this->m_debugDataHead[0], &colorRed);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  _EAX = 3;
  __asm
  {
    vmovd   xmm0, eax
    vpminsd xmm0, xmm0, xmm0
    vmovd   eax, xmm0
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
    vmovss  [rsp+108h+shadow], xmm7
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, *(float *)&forceColorb, *(float *)&shadowb, this->m_debugNumThreads[0], 0x3Cu, this->m_debugDataHead[0], &colorBlue);
  __asm
  {
    vaddss  xmm2, xmm12, dword ptr [rsi]; y
    vmovss  dword ptr [rsp+108h+data], xmm10
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Client Auth Solve Job", &colorWhite, 0, 1, datab, 0);
  __asm
  {
    vaddss  xmm2, xmm10, dword ptr [rsi]; y
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColord, &colorWhite);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm8
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColore, *(float *)&forceColorc, *(float *)&shadowc, this->m_debugLastTimesMS[1], 0x3Cu, this->m_debugDataHead[1], &colorGreen);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm6
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorf, *(float *)&forceColord, *(float *)&shadowd, this->m_debugHelperUtilizations[1], 0x3Cu, this->m_debugDataHead[1], &colorRed);
  __asm
  {
    vmovss  [rsp+108h+shadow], xmm7
    vmovss  [rsp+108h+forceColor], xmm9
    vmovss  dword ptr [rsp+108h+setColor], xmm12
    vmovaps xmm3, xmm11; width
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorg, *(float *)&forceColore, *(float *)&shadowe, this->m_debugNumThreads[1], 0x3Cu, this->m_debugDataHead[1], &colorBlue);
  __asm
  {
    vaddss  xmm2, xmm12, dword ptr [rsi]; y
    vmovss  dword ptr [rsp+108h+data], xmm10
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "FX Job", &colorWhite, 0, 1, datac, 0);
  __asm
  {
    vaddss  xmm2, xmm10, dword ptr [rsi]; y
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorh, &colorWhite);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm8
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColori, *(float *)&forceColorf, *(float *)&shadowf, this->m_debugLastTimesMS[2], 0x3Cu, this->m_debugDataHead[2], &colorGreen);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm6
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorj, *(float *)&forceColorg, *(float *)&shadowg, this->m_debugHelperUtilizations[2], 0x3Cu, this->m_debugDataHead[2], &colorRed);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  [rsp+108h+shadow], xmm7
    vmovss  [rsp+108h+forceColor], xmm9
    vmovaps xmm3, xmm11; width
    vmovss  dword ptr [rsp+108h+setColor], xmm12
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColork, *(float *)&forceColorh, *(float *)&shadowh, this->m_debugNumThreads[2], 0x3Cu, this->m_debugDataHead[2], &colorBlue);
  __asm { vaddss  xmm1, xmm12, dword ptr [rsi] }
  _R11 = &v125;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rbp+0]
    vsubss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
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
  int result; 

  _EAX = 3;
  __asm
  {
    vmovd   xmm0, eax
    vpminsd xmm0, xmm0, xmm0
    vmovd   eax, xmm0
  }
  return result;
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

void __fastcall HavokPhysicsThreadPool::onWorkerCommandEnd(HavokPhysicsThreadPool *this, int workerIndex, double timeTaken, double timeWaiting)
{
  char v13; 
  char v14; 
  volatile int *p_m_numThreadsInFlight; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RDI = 3i64 * workerIndex;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovss  xmm0, cs:__real@3f800000
  }
  this->m_workerThreads[workerIndex].m_monitorStreamEnd = (char *)*((_QWORD *)TlsGetValue(hkMonitorStream__m_instance.m_slotID) + 1);
  if ( !(v13 | v14) )
  {
    __asm
    {
      vdivss  xmm1, xmm7, xmm6
      vsubss  xmm0, xmm0, xmm1
    }
  }
  __asm { vmovss  dword ptr [rbx+rdi*8+28h], xmm0 }
  p_m_numThreadsInFlight = &_RBX->m_numThreadsInFlight;
  if ( ((unsigned __int8)p_m_numThreadsInFlight & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_numThreadsInFlight) )
    __debugbreak();
  _InterlockedExchangeAdd(p_m_numThreadsInFlight, 0xFFFFFFFF);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
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
  int v5; 
  const dvar_t *v6; 
  unsigned int flags; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 TickCounter; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  int v27; 
  int v28; 
  int *v29; 
  __int64 v33; 
  char v71; 
  char v72; 
  int v74; 
  int v75; 
  __int64 v80; 

  _RBX = (int *)this;
  v5 = Sys_Milliseconds() + 20;
  while ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)_RBX + 40i64))(_RBX) )
  {
    if ( Sys_Milliseconds() >= v5 )
      break;
    if ( taskQueue )
      hkDefaultTaskQueue::wakeAllThreads(taskQueue);
  }
  if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)_RBX + 40i64))(_RBX) )
  {
    v6 = DVARBOOL_physics_processWorkerCommandsWhenWaiting_enabled;
    if ( !DVARBOOL_physics_processWorkerCommandsWhenWaiting_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_processWorkerCommandsWhenWaiting_enabled") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v6->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    if ( v6->current.enabled )
      Sys_ProcessWorkerCmdsWithTimeout(HavokPhysicsThreadPoolTimeoutFunc, taskQueue);
  }
  v8 = Sys_Milliseconds() + 30000;
  while ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)_RBX + 40i64))(_RBX) )
  {
    if ( Sys_Milliseconds() > v8 )
      CrashReport_TriggerNow();
    if ( taskQueue )
      hkDefaultTaskQueue::wakeAllThreads(taskQueue);
    if ( GetCurrentProcessorNumber() == 1 )
      Sys_PushUnblockDatabaseThread();
    Sys_Sleep(1);
    if ( GetCurrentProcessorNumber() == 1 )
      Sys_PopUnblockDatabaseThread();
  }
  v9 = 30i64 * _RBX[24];
  v10 = (unsigned int)_RBX[v9 + 54];
  _RBX[v9 + 54] = v10 + 1;
  v11 = _RBX[24];
  v12 = 30 * v11;
  if ( LOBYTE(_RBX[30 * v11 + 38]) )
  {
    TickCounter = hkStopwatch::getTickCounter();
    LOBYTE(_RBX[v12 + 38]) = 0;
    v14 = TickCounter - *(_QWORD *)&_RBX[v12 + 28];
    v15 = TickCounter - *(_QWORD *)&_RBX[v12 + 32];
    *(_QWORD *)&_RBX[v12 + 30] += v14;
    *(_QWORD *)&_RBX[v12 + 34] += v15;
    ++_RBX[v12 + 39];
    v16 = _RBX[24];
    v17 = 30 * v16;
    v18 = *(_QWORD *)&_RBX[30 * v16 + 30];
    if ( LOBYTE(_RBX[30 * v16 + 38]) )
    {
      v19 = hkStopwatch::getTickCounter();
      LODWORD(v16) = _RBX[24];
      v18 += v19 - *(_QWORD *)&_RBX[v17 + 28];
    }
    v20 = v10;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rdi
    }
    if ( v18 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, qword ptr [rsi+rbx+90h]
      vcvtsd2ss xmm1, xmm0, xmm0
      vmulss  xmm2, xmm1, cs:__real@447a0000
    }
    _RCX = v10 + 30i64 * (int)v16;
    __asm { vmovss  dword ptr [rbx+rcx*4+0A8h], xmm2 }
    v11 = 120i64 * _RBX[24];
    *(_QWORD *)((char *)_RBX + v11 + 112) = 0i64;
    *(_QWORD *)((char *)_RBX + v11 + 120) = 0i64;
    *(_QWORD *)((char *)_RBX + v11 + 128) = 0i64;
    *(_QWORD *)((char *)_RBX + v11 + 136) = 0i64;
    *((_BYTE *)_RBX + v11 + 152) = 0;
    *(int *)((char *)_RBX + v11 + 156) = 0;
    LODWORD(v11) = _RBX[24];
  }
  else
  {
    v20 = v10;
  }
  _RBX[30 * (int)v11 + 47 + v20] = 1065353216;
  v27 = _RBX[116];
  if ( v27 )
  {
    v28 = 0;
    if ( v27 > 0 )
    {
      v29 = _RBX + 10;
      do
      {
        v29 += 6;
        ++v28;
        _RCX = v20 + 30i64 * _RBX[24];
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx*4+0BCh]
          vminss  xmm1, xmm0, dword ptr [rdx-18h]
          vmovss  dword ptr [rbx+rcx*4+0BCh], xmm1
        }
      }
      while ( v28 < _RBX[116] );
    }
  }
  v33 = _RBX[24];
  if ( _RBX[30 * v33 + 54] == 5 )
  {
    _RBX[30 * v33 + 54] = 0;
    _RBX[30 * _RBX[24] + 53] = 0;
    _RBX[30 * _RBX[24] + 52] = 0;
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0BCh]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0A8h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0C0h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0ACh]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0C4h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0B0h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0C8h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0B4h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0CCh]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm1
    }
    _RAX = 120i64 * _RBX[24];
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0B8h]
      vaddss  xmm1, xmm0, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
      vmovss  xmm1, cs:__real@3e4ccccd
    }
    _RCX = 120i64 * _RBX[24];
    __asm
    {
      vmulss  xmm0, xmm1, dword ptr [rcx+rbx+0D4h]
      vmovss  dword ptr [rcx+rbx+0D4h], xmm0
      vmovss  xmm0, cs:__real@3ea8f5c3
    }
    _RCX = 120i64 * _RBX[24];
    __asm
    {
      vmulss  xmm1, xmm1, dword ptr [rcx+rbx+0D0h]
      vmovss  dword ptr [rcx+rbx+0D0h], xmm1
      vmovss  xmm1, cs:__real@3f800000
    }
    _RDX = 30i64 * _RBX[24];
    v72 = ((unsigned __int128)(120 * (__int128)_RBX[24]) >> 64 != 0) | v71;
    __asm { vcomiss xmm0, dword ptr [rdx+rbx+0D4h] }
    if ( v72 )
      goto LABEL_46;
    v74 = _RBX[_RDX + 26];
    v72 = (unsigned int)v74 <= 1;
    if ( v74 > 1 )
      goto LABEL_43;
    __asm { vcomiss xmm1, dword ptr [rdx+rbx+0D0h] }
    if ( (unsigned int)v74 <= 1 )
    {
LABEL_46:
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rbx+0D0h]
        vcomiss xmm0, xmm1
      }
      if ( !v72 )
      {
        __asm { vcvttss2si ecx, xmm0 }
        if ( _RBX[_RDX + 26] > _ECX )
          _ECX = _RBX[_RDX + 26];
        _RBX[_RDX + 26] = _ECX + 1;
      }
    }
    else
    {
LABEL_43:
      v75 = v74 - 1;
      if ( v75 < 0 )
        v75 = 0;
      _RBX[_RDX + 26] = v75;
    }
    _EAX = 3;
    __asm { vmovd   xmm0, eax }
    v80 = 30i64 * _RBX[24];
    __asm
    {
      vpminsd xmm0, xmm0, xmm0
      vmovd   edx, xmm0
    }
    if ( _RBX[v80 + 26] < _EDX )
      _EDX = _RBX[v80 + 26];
    _RBX[v80 + 26] = _EDX;
    _RBX[60 * _RBX[24] + 122 + _RBX[_RBX[24] + 662]] = _RBX[30 * _RBX[24] + 52];
    _RBX[60 * _RBX[24] + 302 + _RBX[_RBX[24] + 662]] = _RBX[30 * _RBX[24] + 53];
    _RBX[60 * _RBX[24] + 482 + _RBX[_RBX[24] + 662]] = _RBX[30 * _RBX[24] + 26];
    _RBX[_RBX[24] + 662] = (_RBX[_RBX[24] + 662] + 1) % 0x3Cu;
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

