/*
==============
CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events>::Init
==============
*/

void __fastcall CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events>::Init(CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events> *this, CPUTimelineProfiler::Events *allocPool, int poolSize)
{
  ?Init@?$Allocator@UEvents@CPUTimelineProfiler@@@CPUTimelineProfiler@@QEAAXPEAUEvents@2@H@Z(this, allocPool, poolSize);
}

/*
==============
CPUTimelineProfiler::BeginSample
==============
*/

void __fastcall CPUTimelineProfiler::BeginSample(CPUTimelineProfiler *this, ThreadContext threadContext, int profileSample, const char *sampleName, unsigned int color)
{
  ?BeginSample@CPUTimelineProfiler@@QEAAXW4ThreadContext@@HPEBDI@Z(this, threadContext, profileSample, sampleName, color);
}

/*
==============
CPUTimelineProfiler::SampleStack::GetTop
==============
*/

int __fastcall CPUTimelineProfiler::SampleStack::GetTop(CPUTimelineProfiler::SampleStack *this)
{
  return ?GetTop@SampleStack@CPUTimelineProfiler@@QEAAHXZ(this);
}

/*
==============
CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples>::Init
==============
*/

void __fastcall CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples>::Init(CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples> *this, CPUTimelineProfiler::Samples *allocPool, int poolSize)
{
  ?Init@?$Allocator@USamples@CPUTimelineProfiler@@@CPUTimelineProfiler@@QEAAXPEAUSamples@2@H@Z(this, allocPool, poolSize);
}

/*
==============
CPUTimelineProfiler::CopySampleName
==============
*/

void __fastcall CPUTimelineProfiler::CopySampleName(CPUTimelineProfiler *this, char *dest, const char *src)
{
  ?CopySampleName@CPUTimelineProfiler@@AEAAXPEADPEBD@Z(this, dest, src);
}

/*
==============
CPUTimelineProfiler::EndSample
==============
*/

void __fastcall CPUTimelineProfiler::EndSample(CPUTimelineProfiler *this, ThreadContext threadContext)
{
  ?EndSample@CPUTimelineProfiler@@QEAAXW4ThreadContext@@@Z(this, threadContext);
}

/*
==============
CPUTimelineProfiler::BeginSample
==============
*/
void CPUTimelineProfiler::BeginSample(CPUTimelineProfiler *this, ThreadContext threadContext, int profileSample, const char *sampleName, unsigned int color)
{
  __int16 v6; 
  __int64 v7; 
  CPUTimelineProfiler::Samples *p_m_stack; 
  unsigned __int64 m_top; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  v6 = profileSample;
  if ( this->m_enabled && threadContext < THREAD_CONTEXT_COUNT )
  {
    v7 = threadContext;
    p_m_stack = &this->m_threadData[v7].m_sampleStack.m_stack;
    m_top = this->m_threadData[v7].m_sampleStack.m_top;
    if ( (int)m_top < 5 )
    {
      this->m_threadData[v7].m_sampleStack.m_top = m_top + 1;
      if ( (_DWORD)m_top != -1 )
      {
        v10 = m_top;
        p_m_stack->m_base[v10].m_profile = v6;
        p_m_stack->m_base[v10].m_color = color;
        p_m_stack->m_base[v10].m_thread = threadContext;
        v11 = __rdtsc();
        p_m_stack->m_base[v10].m_start = ((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11;
        p_m_stack->m_base[v10].m_end = -1i64;
        p_m_stack->m_base[v10].m_level = m_top;
        if ( this->m_pmcEnabled )
        {
          this->m_threadData[v7].m_sampleStack.m_stack.m_cpuStats[v10].m_counters[0] = __readpmc(0);
          this->m_threadData[v7].m_sampleStack.m_stack.m_cpuStats[v10].m_counters[1] = __readpmc(1u);
          this->m_threadData[v7].m_sampleStack.m_stack.m_cpuStats[v10].m_counters[2] = __readpmc(2u);
          this->m_threadData[v7].m_sampleStack.m_stack.m_cpuStats[v10].m_counters[3] = __readpmc(3u);
        }
        v12 = m_top;
        this->m_threadData[v7].m_sampleStack.m_stack.m_name[m_top][0] = 0;
        if ( sampleName )
        {
          CPUTimelineProfiler::CopySampleName(this, this->m_threadData[v7].m_sampleStack.m_stack.m_name[v12], sampleName);
          p_m_stack->m_name[v12][31] = 0;
        }
      }
    }
    else
    {
      ++this->m_threadData[v7].m_sampleStack.m_overflow;
    }
  }
}

/*
==============
CPUTimelineProfiler::CopySampleName
==============
*/
void CPUTimelineProfiler::CopySampleName(CPUTimelineProfiler *this, char *dest, const char *src)
{
  char v3; 
  char *v4; 
  signed __int64 v5; 

  v3 = *src;
  v4 = dest + 31;
  if ( *src )
  {
    v5 = src - dest;
    do
    {
      if ( dest >= v4 )
        break;
      *dest++ = v3;
      v3 = dest[v5];
    }
    while ( v3 );
  }
  *dest = 0;
}

/*
==============
CPUTimelineProfiler::EndSample
==============
*/
void CPUTimelineProfiler::EndSample(CPUTimelineProfiler *this, ThreadContext threadContext)
{
  char *v3; 
  CPUTimelineProfiler::SampleStack *v4; 
  int v5; 
  int v6; 
  _QWORD *v7; 
  int Top; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int m_overflow; 
  signed __int32 v13[8]; 

  if ( this->m_enabled && threadContext < THREAD_CONTEXT_COUNT )
  {
    v3 = (char *)this + 640 * threadContext;
    v4 = (CPUTimelineProfiler::SampleStack *)(v3 + 568);
    if ( *((int *)v3 + 271) <= 0 )
    {
      *(_QWORD *)(*((_QWORD *)v3 + 131) + 32i64 * CPUTimelineProfiler::SampleStack::GetTop((CPUTimelineProfiler::SampleStack *)(v3 + 568)) + 8) = __rdtsc();
      v5 = *((_DWORD *)v3 + 275);
      _InterlockedOr(v13, 0);
      if ( *((_DWORD *)v3 + 274) - v5 < (unsigned int)(*((_DWORD *)v3 + 276) - 1) )
      {
        v6 = (*((_DWORD *)v3 + 274))++ & *((_DWORD *)v3 + 277);
        if ( v6 != -1 )
        {
          v7 = v3 + 512;
          Top = CPUTimelineProfiler::SampleStack::GetTop(v4);
          v9 = Top;
          if ( Top == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 418, ASSERT_TYPE_ASSERT, "(topSample != -1)", (const char *)&queryFormat, "topSample != -1") )
            __debugbreak();
          v10 = v9;
          v11 = 32i64 * v6;
          *(CPUTimelineProfiler::SampleBase *)(v11 + *v7) = v4->m_stack.m_base[v10];
          CPUTimelineProfiler::CopySampleName(this, (char *)(v11 + v7[1]), v4->m_stack.m_name[v10]);
          if ( this->m_pmcEnabled )
          {
            *(_QWORD *)(v11 + v7[2]) = __readpmc(0) - v4->m_stack.m_cpuStats[v10].m_counters[0];
            *(_QWORD *)(v11 + v7[2] + 8) = __readpmc(1u) - v4->m_stack.m_cpuStats[v10].m_counters[1];
            *(_QWORD *)(v11 + v7[2] + 16) = __readpmc(2u) - v4->m_stack.m_cpuStats[v10].m_counters[2];
            *(_QWORD *)(v11 + v7[2] + 24) = __readpmc(3u) - v4->m_stack.m_cpuStats[v10].m_counters[3];
          }
        }
      }
      else
      {
        v3[1112] = 1;
      }
    }
    m_overflow = v4->m_overflow;
    if ( m_overflow <= 0 )
    {
      if ( v4->m_top <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 585, ASSERT_TYPE_ASSERT, "(m_top > 0)", (const char *)&queryFormat, "m_top > 0") )
        __debugbreak();
      --v4->m_top;
    }
    else
    {
      v4->m_overflow = m_overflow - 1;
    }
  }
}

/*
==============
CPUTimelineProfiler::SampleStack::GetTop
==============
*/
__int64 CPUTimelineProfiler::SampleStack::GetTop(CPUTimelineProfiler::SampleStack *this)
{
  if ( this->m_top <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 593, ASSERT_TYPE_ASSERT, "(m_top > 0)", (const char *)&queryFormat, "m_top > 0") )
    __debugbreak();
  return (unsigned int)(this->m_top - 1);
}

/*
==============
CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events>::Init
==============
*/
void CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events>::Init(CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Events> *this, CPUTimelineProfiler::Events *allocPool, int poolSize)
{
  if ( ((poolSize - 1) & poolSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 496, ASSERT_TYPE_ASSERT, "(( poolSize & ( poolSize - 1 ) ) == 0)", (const char *)&queryFormat, "( poolSize & ( poolSize - 1 ) ) == 0") )
    __debugbreak();
  this->m_allocPool = allocPool;
  this->m_mask = poolSize - 1;
  this->m_readPtr = 0;
  this->m_size = poolSize;
  this->m_writePtr = 0;
  this->m_oom = 0;
}

/*
==============
CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples>::Init
==============
*/
void CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples>::Init(CPUTimelineProfiler::Allocator<CPUTimelineProfiler::Samples> *this, CPUTimelineProfiler::Samples *allocPool, int poolSize)
{
  if ( ((poolSize - 1) & poolSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cpu_timeline_prof.h", 496, ASSERT_TYPE_ASSERT, "(( poolSize & ( poolSize - 1 ) ) == 0)", (const char *)&queryFormat, "( poolSize & ( poolSize - 1 ) ) == 0") )
    __debugbreak();
  this->m_allocPool = allocPool;
  this->m_mask = poolSize - 1;
  this->m_readPtr = 0;
  this->m_size = poolSize;
  this->m_writePtr = 0;
  this->m_oom = 0;
}

