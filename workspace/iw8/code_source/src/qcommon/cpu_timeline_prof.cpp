/*
==============
CPUTimelineProfiler::EnableCPUStatsCounters
==============
*/

void __fastcall CPUTimelineProfiler::EnableCPUStatsCounters(CPUTimelineProfiler *this, CPUTimelineProfiler::CPUStatsSet counterSet)
{
  ?EnableCPUStatsCounters@CPUTimelineProfiler@@QEAAXW4CPUStatsSet@1@@Z(this, counterSet);
}

/*
==============
CPUTimelineProfiler::GetBufferedFrameRange
==============
*/

void __fastcall CPUTimelineProfiler::GetBufferedFrameRange(CPUTimelineProfiler *this, int bufferedFrame, unsigned __int64 *frameStart, unsigned __int64 *frameEnd, bool *breakpointTriggered)
{
  ?GetBufferedFrameRange@CPUTimelineProfiler@@QEAAXHAEA_K0AEA_N@Z(this, bufferedFrame, frameStart, frameEnd, breakpointTriggered);
}

/*
==============
CPUTimelineProfiler::DisableCPUStatsCounters
==============
*/

void __fastcall CPUTimelineProfiler::DisableCPUStatsCounters(CPUTimelineProfiler *this)
{
  ?DisableCPUStatsCounters@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::Events::Init
==============
*/

int __fastcall CPUTimelineProfiler::Events::Init(CPUTimelineProfiler::Events *this, unsigned __int8 *memory, int numEvents)
{
  return ?Init@Events@CPUTimelineProfiler@@QEAAHPEAEH@Z(this, memory, numEvents);
}

/*
==============
CPUTimelineProfiler::Shutdown
==============
*/

void __fastcall CPUTimelineProfiler::Shutdown(CPUTimelineProfiler *this)
{
  ?Shutdown@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::GetEventsForTimeRange
==============
*/

int __fastcall CPUTimelineProfiler::GetEventsForTimeRange(CPUTimelineProfiler *this, unsigned __int64 startTime, unsigned __int64 endTime, CPUTimelineProfiler::Events *events, int maxEvents, bool *threadAllocatorOOMStatus)
{
  return ?GetEventsForTimeRange@CPUTimelineProfiler@@QEAAH_K0PEAUEvents@1@HPEA_N@Z(this, startTime, endTime, events, maxEvents, threadAllocatorOOMStatus);
}

/*
==============
CPUTimelineProfiler::SampleAllocator::EndTimeUpperBound
==============
*/

int __fastcall CPUTimelineProfiler::SampleAllocator::EndTimeUpperBound(CPUTimelineProfiler::SampleAllocator *this, int start, int end, unsigned __int64 time)
{
  return ?EndTimeUpperBound@SampleAllocator@CPUTimelineProfiler@@QEBAHHH_K@Z(this, start, end, time);
}

/*
==============
CPUTimelineProfiler::EventAllocator::CopyEvents
==============
*/

void __fastcall CPUTimelineProfiler::EventAllocator::CopyEvents(CPUTimelineProfiler::EventAllocator *this, unsigned int firstEvent, unsigned int numEvents, CPUTimelineProfiler::Events *events, int destShift)
{
  ?CopyEvents@EventAllocator@CPUTimelineProfiler@@QEBAXIIPEAUEvents@2@H@Z(this, firstEvent, numEvents, events, destShift);
}

/*
==============
CPUTimelineProfiler::GetSamplesForTimeRange
==============
*/

int __fastcall CPUTimelineProfiler::GetSamplesForTimeRange(CPUTimelineProfiler *this, unsigned __int64 startTime, unsigned __int64 endTime, CPUTimelineProfiler::Samples *samples, int maxEvents, bool *threadAllocatorOOMStatus)
{
  return ?GetSamplesForTimeRange@CPUTimelineProfiler@@QEAAH_K0PEAUSamples@1@HPEA_N@Z(this, startTime, endTime, samples, maxEvents, threadAllocatorOOMStatus);
}

/*
==============
CPUTimelineProfiler::SampleStack::Init
==============
*/

void __fastcall CPUTimelineProfiler::SampleStack::Init(CPUTimelineProfiler::SampleStack *this)
{
  ?Init@SampleStack@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::Samples::Init
==============
*/

int __fastcall CPUTimelineProfiler::Samples::Init(CPUTimelineProfiler::Samples *this, unsigned __int8 *memory, int numSamples)
{
  return ?Init@Samples@CPUTimelineProfiler@@QEAAHPEAEH@Z(this, memory, numSamples);
}

/*
==============
CPUTimelineProfiler::MarkFrame
==============
*/

void __fastcall CPUTimelineProfiler::MarkFrame(CPUTimelineProfiler *this)
{
  ?MarkFrame@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::SampleAllocator::CopySamples
==============
*/

void __fastcall CPUTimelineProfiler::SampleAllocator::CopySamples(CPUTimelineProfiler::SampleAllocator *this, unsigned int firstSample, unsigned int numSamples, CPUTimelineProfiler::Samples *samples, int destShift)
{
  ?CopySamples@SampleAllocator@CPUTimelineProfiler@@QEBAXIIPEAUSamples@2@H@Z(this, firstSample, numSamples, samples, destShift);
}

/*
==============
CPUTimelineProfiler::GetNumBufferedFrames
==============
*/

int __fastcall CPUTimelineProfiler::GetNumBufferedFrames(CPUTimelineProfiler *this)
{
  return ?GetNumBufferedFrames@CPUTimelineProfiler@@QEBAHXZ(this);
}

/*
==============
CPUTimelineProfiler::TriggerFrameBreakpoint
==============
*/

void __fastcall CPUTimelineProfiler::TriggerFrameBreakpoint(CPUTimelineProfiler *this)
{
  ?TriggerFrameBreakpoint@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::EventAllocator::TimeUpperBound
==============
*/

int __fastcall CPUTimelineProfiler::EventAllocator::TimeUpperBound(CPUTimelineProfiler::EventAllocator *this, int start, int end, unsigned __int64 time)
{
  return ?TimeUpperBound@EventAllocator@CPUTimelineProfiler@@QEBAHHH_K@Z(this, start, end, time);
}

/*
==============
CPUTimelineProfiler::ConsumeFrame
==============
*/

void __fastcall CPUTimelineProfiler::ConsumeFrame(CPUTimelineProfiler *this)
{
  ?ConsumeFrame@CPUTimelineProfiler@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfiler::Init
==============
*/

void __fastcall CPUTimelineProfiler::Init(CPUTimelineProfiler *this, const char *cmdLine)
{
  ?Init@CPUTimelineProfiler@@QEAAXPEBD@Z(this, cmdLine);
}

/*
==============
CPUTimelineProfiler::GetStatsFromCounter
==============
*/

void __fastcall CPUTimelineProfiler::GetStatsFromCounter(const CPUTimelineProfiler::SampleCPUStats *stats, CPUTimelineProfiler::CPUStatsSet statsSet, unsigned __int64 *cacheAccesses, unsigned __int64 *l2CacheMisses, unsigned __int64 *instructionsRetired)
{
  ?GetStatsFromCounter@CPUTimelineProfiler@@SAXAEBUSampleCPUStats@1@W4CPUStatsSet@1@AEA_K22@Z(stats, statsSet, cacheAccesses, l2CacheMisses, instructionsRetired);
}

/*
==============
CPUTimelineProfiler::ConsumeFrame
==============
*/
void CPUTimelineProfiler::ConsumeFrame(CPUTimelineProfiler *this)
{
  int m_frameReadPtr; 
  unsigned __int64 m_endTime; 
  bool *p_m_oom; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  signed __int32 v16; 

  m_frameReadPtr = this->m_frameReadPtr;
  if ( m_frameReadPtr < this->m_frameWritePtr )
  {
    m_endTime = this->m_frames[m_frameReadPtr & 7].m_endTime;
    this->m_frameReadPtr = m_frameReadPtr + 1;
    _InterlockedOr(&v16, 0);
    p_m_oom = &this->m_threadData[0].m_eventAllocator.m_oom;
    v5 = 28i64;
    do
    {
      v6 = *((_DWORD *)p_m_oom - 12);
      _InterlockedOr(&v16, 0);
      v7 = *((_DWORD *)p_m_oom - 11);
      v8 = 0;
      v9 = v6 - v7;
      while ( v9 > 0 )
      {
        v10 = v9 / 2;
        if ( *(_QWORD *)(32 * (*((int *)p_m_oom - 9) & (unsigned __int64)(v8 + v7 + v9 / 2)) + **((_QWORD **)p_m_oom - 7) + 8) >= m_endTime )
        {
          v9 /= 2;
        }
        else
        {
          v8 += v10 + 1;
          v9 += -1 - v10;
        }
      }
      *(p_m_oom - 32) = 0;
      *((_DWORD *)p_m_oom - 11) = v7 + v8;
      v11 = *((_DWORD *)p_m_oom - 4);
      _InterlockedOr(&v16, 0);
      v12 = *((_DWORD *)p_m_oom - 3);
      v13 = 0;
      v14 = v11 - v12;
      while ( v14 > 0 )
      {
        v15 = v14 / 2;
        if ( *(_QWORD *)(**((_QWORD **)p_m_oom - 3) + 16 * (*((int *)p_m_oom - 1) & (unsigned __int64)(v13 + v12 + v14 / 2))) >= m_endTime )
        {
          v14 /= 2;
        }
        else
        {
          v13 += v15 + 1;
          v14 += -1 - v15;
        }
      }
      *p_m_oom = 0;
      *((_DWORD *)p_m_oom - 3) = v12 + v13;
      p_m_oom += 640;
      --v5;
    }
    while ( v5 );
    this->m_lastConsumedFrameEndTime = m_endTime;
  }
}

/*
==============
CPUTimelineProfiler::EventAllocator::CopyEvents
==============
*/
void CPUTimelineProfiler::EventAllocator::CopyEvents(CPUTimelineProfiler::EventAllocator *this, unsigned int firstEvent, unsigned int numEvents, CPUTimelineProfiler::Events *events, int destShift)
{
  unsigned int v5; 
  unsigned int v8; 
  __int64 v10; 
  signed int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  size_t v15; 
  char (*m_name)[32]; 
  char *v17; 
  __int64 v18; 
  __int64 v19; 

  if ( numEvents )
  {
    v5 = this->m_readPtr + firstEvent;
    v8 = v5 & this->m_mask;
    v10 = destShift;
    v11 = this->m_mask & (v5 + numEvents);
    v12 = destShift;
    v13 = v8;
    v14 = v8;
    if ( v8 >= v11 )
    {
      v18 = (int)(this->m_size - v8);
      memcpy_0(&events->m_base[v10], &this->m_allocPool->m_base[v13], 16 * v18);
      memcpy_0(events->m_name[v12], this->m_allocPool->m_name[v14], 32 * v18);
      v19 = destShift + v18;
      memcpy_0(&events->m_base[v19], this->m_allocPool->m_base, 16i64 * v11);
      v15 = 32i64 * v11;
      m_name = this->m_allocPool->m_name;
      v17 = events->m_name[v19];
    }
    else
    {
      memcpy_0(&events->m_base[v10], &this->m_allocPool->m_base[v13], 16i64 * numEvents);
      v15 = 32i64 * numEvents;
      m_name = (char (*)[32])this->m_allocPool->m_name[v14];
      v17 = events->m_name[v12];
    }
    memcpy_0(v17, m_name, v15);
    events->m_numEvents = numEvents;
  }
}

/*
==============
CPUTimelineProfiler::SampleAllocator::CopySamples
==============
*/
void CPUTimelineProfiler::SampleAllocator::CopySamples(CPUTimelineProfiler::SampleAllocator *this, unsigned int firstSample, unsigned int numSamples, CPUTimelineProfiler::Samples *samples, int destShift)
{
  unsigned int v5; 
  unsigned int v8; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  size_t v14; 
  __int64 v15; 
  size_t v16; 

  if ( numSamples )
  {
    v5 = this->m_readPtr + firstSample;
    v8 = v5 & this->m_mask;
    v10 = v8;
    v11 = destShift;
    v12 = this->m_mask & (v5 + numSamples);
    if ( v8 >= v12 )
    {
      v13 = (int)(this->m_size - v8);
      v14 = 32 * v13;
      memcpy_0(&samples->m_base[v11], &this->m_allocPool->m_base[v10], 32 * v13);
      memcpy_0(samples->m_name[v11], this->m_allocPool->m_name[v10], 32 * v13);
      v15 = destShift + v13;
      v16 = 32i64 * (int)v12;
      memcpy_0(&samples->m_base[v15], this->m_allocPool->m_base, v16);
      memcpy_0(samples->m_name[v15], this->m_allocPool->m_name, v16);
      memcpy_0(&samples->m_cpuStats[v11], &this->m_allocPool->m_cpuStats[v10], v14);
      memcpy_0(&samples->m_cpuStats[v15], this->m_allocPool->m_cpuStats, v16);
    }
    else
    {
      memcpy_0(&samples->m_base[v11], &this->m_allocPool->m_base[v10], 32i64 * numSamples);
      memcpy_0(samples->m_name[v11], this->m_allocPool->m_name[v10], 32i64 * numSamples);
      memcpy_0(&samples->m_cpuStats[v11], &this->m_allocPool->m_cpuStats[v10], 32i64 * numSamples);
    }
    samples->m_numSamples = numSamples;
  }
}

/*
==============
CPUTimelineProfiler::DisableCPUStatsCounters
==============
*/
void CPUTimelineProfiler::DisableCPUStatsCounters(CPUTimelineProfiler *this)
{
  this->m_pmcEnabled = 0;
}

/*
==============
CPUTimelineProfiler::EnableCPUStatsCounters
==============
*/
void CPUTimelineProfiler::EnableCPUStatsCounters(CPUTimelineProfiler *this, CPUTimelineProfiler::CPUStatsSet counterSet)
{
  __int64 v3; 
  __int64 v4; 

  if ( counterSet )
  {
    if ( counterSet == CPU_STATS_DCACHE )
    {
      v3 = 3i64;
      v4 = 2i64;
    }
    else
    {
      if ( counterSet != CPU_STATS_ICACHE )
      {
LABEL_7:
        this->m_pmcEnabled = 1;
        return;
      }
      v3 = 10i64;
      v4 = 9i64;
    }
    ConfigurePMCs_0(v4, v3, 4i64);
    goto LABEL_7;
  }
}

/*
==============
CPUTimelineProfiler::SampleAllocator::EndTimeUpperBound
==============
*/
__int64 CPUTimelineProfiler::SampleAllocator::EndTimeUpperBound(CPUTimelineProfiler::SampleAllocator *this, int start, int end, unsigned __int64 time)
{
  int v4; 
  unsigned int v5; 
  int v6; 

  v4 = end - start;
  v5 = start;
  while ( v4 > 0 )
  {
    v6 = v4 / 2;
    if ( this->m_allocPool->m_base[(int)this->m_mask & (unsigned __int64)(int)(v5 + this->m_readPtr + v4 / 2)].m_end >= time )
    {
      v4 /= 2;
    }
    else
    {
      v5 += v6 + 1;
      v4 += -1 - v6;
    }
  }
  return v5;
}

/*
==============
CPUTimelineProfiler::GetBufferedFrameRange
==============
*/
void CPUTimelineProfiler::GetBufferedFrameRange(CPUTimelineProfiler *this, int bufferedFrame, unsigned __int64 *frameStart, unsigned __int64 *frameEnd, bool *breakpointTriggered)
{
  __int64 v5; 

  v5 = ((_BYTE)bufferedFrame + (unsigned __int8)this->m_frameReadPtr) & 7;
  *frameStart = this->m_frames[v5].m_startTime;
  *frameEnd = this->m_frames[v5].m_endTime;
  *breakpointTriggered = this->m_frames[v5].m_breakpointTriggered != 0;
}

/*
==============
CPUTimelineProfiler::GetEventsForTimeRange
==============
*/
__int64 CPUTimelineProfiler::GetEventsForTimeRange(CPUTimelineProfiler *this, unsigned __int64 startTime, unsigned __int64 endTime, CPUTimelineProfiler::Events *events, int maxEvents, bool *threadAllocatorOOMStatus)
{
  unsigned int destShift; 
  __int64 v10; 
  CPUTimelineProfiler::EventAllocator *p_m_eventAllocator; 
  unsigned int v12; 
  unsigned int m_readPtr; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 

  destShift = 0;
  Sys_ProfBeginNamedEvent(0xFFFF69B4, "prof copy events");
  v10 = 0i64;
  p_m_eventAllocator = &this->m_threadData[0].m_eventAllocator;
  do
  {
    if ( threadAllocatorOOMStatus )
      threadAllocatorOOMStatus[v10] = p_m_eventAllocator->m_oom;
    v12 = 0;
    m_readPtr = p_m_eventAllocator->m_readPtr;
    v14 = p_m_eventAllocator->m_writePtr - m_readPtr;
    v15 = v14;
    while ( v15 > 0 )
    {
      v16 = v15 / 2;
      if ( p_m_eventAllocator->m_allocPool->m_base[(int)p_m_eventAllocator->m_mask & (unsigned __int64)(int)(v12 + m_readPtr + v15 / 2)].m_time >= startTime )
      {
        v15 /= 2;
      }
      else
      {
        v12 += v16 + 1;
        v15 += -1 - v16;
      }
    }
    if ( v12 == v14 )
      goto LABEL_17;
    v17 = 0;
    while ( v14 > 0 )
    {
      v18 = v14 / 2;
      if ( p_m_eventAllocator->m_allocPool->m_base[(int)p_m_eventAllocator->m_mask & (unsigned __int64)(int)(v17 + m_readPtr + v14 / 2)].m_time >= endTime )
      {
        v14 /= 2;
      }
      else
      {
        v17 += v18 + 1;
        v14 += -1 - v18;
      }
    }
    v19 = v17 - v12;
    v20 = v19 + destShift;
    if ( (int)(v19 + destShift) > maxEvents )
      break;
    CPUTimelineProfiler::EventAllocator::CopyEvents(p_m_eventAllocator, v12, v19, events, destShift);
    destShift = v20;
LABEL_17:
    ++v10;
    p_m_eventAllocator += 20;
  }
  while ( v10 < 28 );
  Sys_ProfEndNamedEvent();
  return destShift;
}

/*
==============
CPUTimelineProfiler::GetNumBufferedFrames
==============
*/
__int64 CPUTimelineProfiler::GetNumBufferedFrames(CPUTimelineProfiler *this)
{
  return (unsigned int)(this->m_frameWritePtr - this->m_frameReadPtr);
}

/*
==============
CPUTimelineProfiler::GetSamplesForTimeRange
==============
*/
__int64 CPUTimelineProfiler::GetSamplesForTimeRange(CPUTimelineProfiler *this, unsigned __int64 startTime, unsigned __int64 endTime, CPUTimelineProfiler::Samples *samples, int maxEvents, bool *threadAllocatorOOMStatus)
{
  CPUTimelineProfiler::SampleAllocator *p_m_sampleAllocator; 
  unsigned int destShift; 
  __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  CPUTimelineProfiler::Samples *m_allocPool; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 

  p_m_sampleAllocator = &this->m_threadData[0].m_sampleAllocator;
  destShift = 0;
  v9 = 0i64;
  v10 = startTime;
  do
  {
    if ( threadAllocatorOOMStatus )
      threadAllocatorOOMStatus[v9] = p_m_sampleAllocator->m_oom;
    v11 = p_m_sampleAllocator->m_writePtr - p_m_sampleAllocator->m_readPtr;
    Sys_ProfBeginNamedEvent(0xFF4169E1, "prof begin iter");
    v12 = 0;
    v13 = v11;
    while ( v13 > 0 )
    {
      v14 = v13 / 2;
      if ( p_m_sampleAllocator->m_allocPool->m_base[(int)p_m_sampleAllocator->m_mask & (unsigned __int64)(int)(v12 + p_m_sampleAllocator->m_readPtr + v13 / 2)].m_end >= v10 )
      {
        v13 /= 2;
      }
      else
      {
        v12 += v14 + 1;
        v13 += -1 - v14;
      }
    }
    Sys_ProfEndNamedEvent();
    if ( v12 == v11 )
      goto LABEL_22;
    Sys_ProfBeginNamedEvent(0xFF008008, "prof end iter");
    v15 = 0;
    v16 = v11;
    while ( v16 > 0 )
    {
      v17 = v16 / 2;
      if ( p_m_sampleAllocator->m_allocPool->m_base[(int)p_m_sampleAllocator->m_mask & (unsigned __int64)(v15 + p_m_sampleAllocator->m_readPtr + v16 / 2)].m_end >= endTime )
      {
        v16 /= 2;
      }
      else
      {
        v15 += v17 + 1;
        v16 += -1 - v17;
      }
    }
    if ( v15 < v11 )
    {
      m_allocPool = p_m_sampleAllocator[-18].m_allocPool;
      do
      {
        v19 = (int)p_m_sampleAllocator->m_mask & (unsigned __int64)(p_m_sampleAllocator->m_readPtr + v15 + 1);
        if ( !BYTE2(m_allocPool[v19].m_numSamples) && m_allocPool[v19].m_base > (CPUTimelineProfiler::SampleBase *)endTime )
          break;
        ++v15;
      }
      while ( v15 < v11 );
    }
    v20 = v15 - v12;
    Sys_ProfEndNamedEvent();
    v21 = v20 + destShift;
    if ( (int)(v20 + destShift) > maxEvents )
      break;
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "prof copy samples internal");
    CPUTimelineProfiler::SampleAllocator::CopySamples(p_m_sampleAllocator, v12, v20, samples, destShift);
    Sys_ProfEndNamedEvent();
    v10 = startTime;
    destShift = v21;
LABEL_22:
    ++v9;
    p_m_sampleAllocator += 20;
  }
  while ( v9 < 28 );
  return destShift;
}

/*
==============
CPUTimelineProfiler::GetStatsFromCounter
==============
*/
void CPUTimelineProfiler::GetStatsFromCounter(const CPUTimelineProfiler::SampleCPUStats *stats, CPUTimelineProfiler::CPUStatsSet statsSet, unsigned __int64 *cacheAccesses, unsigned __int64 *l2CacheMisses, unsigned __int64 *instructionsRetired)
{
  if ( statsSet == CPU_STATS_DCACHE )
  {
    *l2CacheMisses = stats->m_counters[1];
    *cacheAccesses = stats->m_counters[0];
    *instructionsRetired = stats->m_counters[3];
  }
  else if ( statsSet == CPU_STATS_ICACHE )
  {
    *cacheAccesses = stats->m_counters[0] + stats->m_counters[1];
    *l2CacheMisses = stats->m_counters[0];
    *instructionsRetired = stats->m_counters[3];
  }
  else
  {
    *cacheAccesses = 0i64;
    *l2CacheMisses = 0i64;
    *instructionsRetired = 0i64;
  }
}

/*
==============
CPUTimelineProfiler::Init
==============
*/

void __fastcall CPUTimelineProfiler::Init(CPUTimelineProfiler *this, const char *cmdLine, double _XMM2_8)
{
  const int *v5; 
  int v12; 
  const int *v13; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  bool v22; 
  __int64 v23; 
  CPUTimelineProfiler::Events *p_m_events; 
  CPUTimelineProfiler::SampleCPUStats **p_m_cpuStats; 
  int v26; 
  int v27; 
  unsigned __int8 *v28; 
  int v29; 
  unsigned __int8 *v30; 
  int v31; 
  signed __int32 v32[8]; 
  int v33; 

  v5 = &s_numSamplesPerThread[4];
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  do
  {
    __asm
    {
      vpaddd  xmm1, xmm1, xmmword ptr [rax-10h]
      vpaddd  xmm2, xmm2, xmmword ptr [rax]
    }
    v5 += 8;
  }
  while ( (__int64)v5 < (__int64)&unk_143EEBF20 );
  __asm
  {
    vpaddd  xmm1, xmm1, xmm2
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
  }
  v12 = 0;
  v13 = s_numSamplesPerThread;
  __asm
  {
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   ebx, xmm0
  }
  v17 = 0;
  v18 = 0;
  v19 = 24i64;
  v20 = 896;
  do
  {
    v17 += s_numSamplesPerThread[v19];
    v18 += s_numSamplesPerThread[v19 + 1];
    v19 += 2i64;
  }
  while ( v19 < 27 );
  if ( v19 < 28 )
  {
    _EBX += s_numSamplesPerThread[v19];
    v20 = 928;
  }
  this->m_frameWritePtr = 0;
  v21 = v17 + v18 + _EBX;
  this->m_frameReadPtr = 0;
  v22 = Mem_Paged_GetDevMemorySize() >= 0x30000000;
  if ( cmdLine && I_stristr(cmdLine, "useCpuProfiler") || v22 )
  {
    v33 = 48 * (v20 + 2 * v21);
    PMem_BeginAlloc("cpu profiler", PMEM_STACK_GAME);
    this->m_sampleMemory = (unsigned __int8 *)PMem_Alloc(v33, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler sample memory");
    PMem_EndAlloc("cpu profiler", PMEM_STACK_GAME);
    v23 = 28i64;
    p_m_events = &this->m_threadData[0].m_events;
    p_m_cpuStats = &this->m_threadData[0].m_sampleStack.m_stack.m_cpuStats;
    do
    {
      v26 = *v13;
      v27 = 32 * *v13;
      v28 = &this->m_sampleMemory[v12];
      *((_DWORD *)p_m_cpuStats - 132) = *v13;
      *(p_m_cpuStats - 67) = (CPUTimelineProfiler::SampleCPUStats *)&v28[v27];
      v29 = 3 * v27;
      *(p_m_cpuStats - 69) = (CPUTimelineProfiler::SampleCPUStats *)v28;
      *(p_m_cpuStats - 68) = (CPUTimelineProfiler::SampleCPUStats *)&v28[2 * v27];
      if ( 3 * v27 != 96 * v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.cpp", 280, ASSERT_TYPE_ASSERT, "((uint)currOffset == SINGLE_SAMPLE_SIZE * numSamples)", (const char *)&queryFormat, "(uint)currOffset == SINGLE_SAMPLE_SIZE * numSamples") )
        __debugbreak();
      v30 = &this->m_sampleMemory[v29 + v12];
      *((_DWORD *)p_m_cpuStats - 126) = 32;
      v31 = *v13;
      *(p_m_cpuStats - 65) = (CPUTimelineProfiler::SampleCPUStats *)v30;
      *(p_m_cpuStats - 64) = (CPUTimelineProfiler::SampleCPUStats *)(v30 + 512);
      *(p_m_cpuStats - 2) = (CPUTimelineProfiler::SampleCPUStats *)(p_m_cpuStats - 62);
      *p_m_cpuStats = (CPUTimelineProfiler::SampleCPUStats *)(p_m_cpuStats - 42);
      *(p_m_cpuStats - 1) = (CPUTimelineProfiler::SampleCPUStats *)(p_m_cpuStats - 22);
      *((_DWORD *)p_m_cpuStats + 2) = 5;
      p_m_cpuStats[2] = NULL;
      if ( ((v31 - 1) & v31) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 496, ASSERT_TYPE_ASSERT, "(( poolSize & ( poolSize - 1 ) ) == 0)", (const char *)&queryFormat, "( poolSize & ( poolSize - 1 ) ) == 0") )
        __debugbreak();
      *((_DWORD *)p_m_cpuStats + 10) = v31;
      p_m_cpuStats[3] = (CPUTimelineProfiler::SampleCPUStats *)&p_m_events[-2].m_numEvents;
      v12 += v29 + 1536;
      ++v13;
      *((_DWORD *)p_m_cpuStats + 11) = v31 - 1;
      *((_DWORD *)p_m_cpuStats + 9) = 0;
      *((_DWORD *)p_m_cpuStats + 8) = 0;
      *((_BYTE *)p_m_cpuStats + 48) = 0;
      p_m_cpuStats[7] = (CPUTimelineProfiler::SampleCPUStats *)p_m_events;
      p_m_events = (CPUTimelineProfiler::Events *)((char *)p_m_events + 640);
      *((_DWORD *)p_m_cpuStats + 18) = 32;
      *((_DWORD *)p_m_cpuStats + 19) = 31;
      *((_DWORD *)p_m_cpuStats + 17) = 0;
      *((_DWORD *)p_m_cpuStats + 16) = 0;
      *((_BYTE *)p_m_cpuStats + 80) = 0;
      p_m_cpuStats += 80;
      --v23;
    }
    while ( v23 );
    if ( v33 != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.cpp", 361, ASSERT_TYPE_ASSERT, "(totalMemNeeded == currMemOffset)", (const char *)&queryFormat, "totalMemNeeded == currMemOffset") )
      __debugbreak();
    _InterlockedOr(v32, 0);
    this->m_enabled = 1;
  }
  else
  {
    this->m_enabled = 0;
  }
}

/*
==============
CPUTimelineProfiler::Events::Init
==============
*/
__int64 CPUTimelineProfiler::Events::Init(CPUTimelineProfiler::Events *this, unsigned __int8 *memory, int numEvents)
{
  this->m_numEvents = numEvents;
  this->m_name = (char (*)[32])&memory[16 * numEvents];
  this->m_base = (CPUTimelineProfiler::EventBase *)memory;
  return (unsigned int)(48 * numEvents);
}

/*
==============
CPUTimelineProfiler::SampleStack::Init
==============
*/
void CPUTimelineProfiler::SampleStack::Init(CPUTimelineProfiler::SampleStack *this)
{
  CPUTimelineProfiler::Samples::Init(&this->m_stack, this->m_stackMem, 5);
  *(_QWORD *)&this->m_top = 0i64;
}

/*
==============
CPUTimelineProfiler::Samples::Init
==============
*/
__int64 CPUTimelineProfiler::Samples::Init(CPUTimelineProfiler::Samples *this, unsigned __int8 *memory, int numSamples)
{
  this->m_numSamples = numSamples;
  this->m_base = (CPUTimelineProfiler::SampleBase *)memory;
  this->m_cpuStats = (CPUTimelineProfiler::SampleCPUStats *)&memory[32 * numSamples];
  this->m_name = (char (*)[32])&memory[64 * numSamples];
  return (unsigned int)(96 * numSamples);
}

/*
==============
CPUTimelineProfiler::MarkFrame
==============
*/
void CPUTimelineProfiler::MarkFrame(CPUTimelineProfiler *this)
{
  int m_frameWritePtr; 
  unsigned __int64 v2; 
  void *retaddr; 

  m_frameWritePtr = this->m_frameWritePtr;
  if ( m_frameWritePtr - this->m_frameReadPtr != 7 )
  {
    this->m_frames[m_frameWritePtr & 7].m_endTime = __rdtsc();
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    this->m_frameWritePtr = m_frameWritePtr + 1;
    v2 = __rdtsc();
    this->m_frames[(m_frameWritePtr + 1) & 7].m_startTime = ((unsigned __int64)HIDWORD(v2) << 32) | (unsigned int)v2;
    this->m_frames[this->m_frameWritePtr & 7].m_endTime = -1i64;
    this->m_frames[this->m_frameWritePtr & 7].m_breakpointTriggered = 0;
  }
}

/*
==============
CPUTimelineProfiler::Shutdown
==============
*/
void CPUTimelineProfiler::Shutdown(CPUTimelineProfiler *this)
{
  this->m_sampleMemory = NULL;
}

/*
==============
CPUTimelineProfiler::EventAllocator::TimeUpperBound
==============
*/
__int64 CPUTimelineProfiler::EventAllocator::TimeUpperBound(CPUTimelineProfiler::EventAllocator *this, int start, int end, unsigned __int64 time)
{
  int v4; 
  unsigned int v5; 
  int v6; 

  v4 = end - start;
  v5 = start;
  while ( v4 > 0 )
  {
    v6 = v4 / 2;
    if ( this->m_allocPool->m_base[(int)this->m_mask & (unsigned __int64)(int)(v5 + this->m_readPtr + v4 / 2)].m_time >= time )
    {
      v4 /= 2;
    }
    else
    {
      v5 += v6 + 1;
      v4 += -1 - v6;
    }
  }
  return v5;
}

/*
==============
CPUTimelineProfiler::TriggerFrameBreakpoint
==============
*/
void CPUTimelineProfiler::TriggerFrameBreakpoint(CPUTimelineProfiler *this)
{
  this->m_frames[this->m_frameWritePtr & 7].m_breakpointTriggered = 1;
}

