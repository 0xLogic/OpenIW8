/*
==============
HavokPhysicsThreadPool::operator delete
==============
*/

void __fastcall HavokPhysicsThreadPool::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsThreadPool@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData
==============
*/

void __fastcall HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData(HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData *this)
{
  ??0HavokPhysicsThreadPoolUsageData@HavokPhysicsThreadPool@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsThreadPool::operator delete
==============
*/
void HavokPhysicsThreadPool::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  v2 = nbytes;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  if ( *((_WORD *)p + 8) != 0xFFFF )
    v2 = *((unsigned __int16 *)p + 8);
  Value->m_heap->blockFree(Value->m_heap, p, v2);
}

/*
==============
HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData
==============
*/

void __fastcall HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData(HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData *this, double _XMM1_8)
{
  _RBX = this;
  this->m_stopwatch.m_name = NULL;
  this->m_stopwatch.m_ticks_at_start = 0i64;
  this->m_stopwatch.m_ticks_total = 0i64;
  this->m_stopwatch.m_ticks_at_split = 0i64;
  this->m_stopwatch.m_split_total = 0i64;
  this->m_stopwatch.m_running_flag.m_bool = 0;
  this->m_stopwatch.m_num_timings = 0;
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
    vmovsd  qword ptr [rbx+28h], xmm1
  }
  _RBX->m_numThreads = 0;
  *(_QWORD *)&_RBX->m_lastTimeInMSAverage = 0i64;
  _RBX->m_currentSampleId = 0;
}

