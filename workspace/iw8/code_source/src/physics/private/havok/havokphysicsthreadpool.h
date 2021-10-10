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
void HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData::HavokPhysicsThreadPoolUsageData(HavokPhysicsThreadPool::HavokPhysicsThreadPoolUsageData *this)
{
  this->m_stopwatch.m_name = NULL;
  this->m_stopwatch.m_ticks_at_start = 0i64;
  this->m_stopwatch.m_ticks_total = 0i64;
  this->m_stopwatch.m_ticks_at_split = 0i64;
  this->m_stopwatch.m_split_total = 0i64;
  this->m_stopwatch.m_running_flag.m_bool = 0;
  this->m_stopwatch.m_num_timings = 0;
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  if ( (hkStopwatch::getTicksPerSecond() & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
  this->m_stopwatch.m_inv_ticks_per_second = 1.0 / *(double *)&_XMM1;
  this->m_numThreads = 0;
  *(_QWORD *)&this->m_lastTimeInMSAverage = 0i64;
  this->m_currentSampleId = 0;
}

