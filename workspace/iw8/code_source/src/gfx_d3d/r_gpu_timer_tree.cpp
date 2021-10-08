/*
==============
GPUTimerTree::ClearSystemOverheadTimerId
==============
*/

void GPUTimerTree::ClearSystemOverheadTimerId(void)
{
  ?ClearSystemOverheadTimerId@GPUTimerTree@@SAXXZ();
}

/*
==============
TimerTree::CalcTimes
==============
*/

void __fastcall TimerTree::CalcTimes(TimerTree *this)
{
  ?CalcTimes@TimerTree@@AEAAXXZ(this);
}

/*
==============
GPUTimerTree::EndFrame
==============
*/

void GPUTimerTree::EndFrame(void)
{
  ?EndFrame@GPUTimerTree@@SAXXZ();
}

/*
==============
TimerTree::EndTimer
==============
*/

void __fastcall TimerTree::EndTimer(TimerTree *this, int frameCount)
{
  ?EndTimer@TimerTree@@QEAAXH@Z(this, frameCount);
}

/*
==============
TimerTree::SortIdArray
==============
*/

void __fastcall TimerTree::SortIdArray(TimerTree *this, GPUTimerId *pId, int numId)
{
  ?SortIdArray@TimerTree@@QEAAXPEAW4GPUTimerId@@H@Z(this, pId, numId);
}

/*
==============
TimerTree::GetExclusiveTimeForTimerId
==============
*/

unsigned int __fastcall TimerTree::GetExclusiveTimeForTimerId(TimerTree *this, const GPUTimerId id)
{
  return ?GetExclusiveTimeForTimerId@TimerTree@@QEBAIW4GPUTimerId@@@Z(this, id);
}

/*
==============
TimerTree::GetTotalTimeForTimerId
==============
*/

unsigned int __fastcall TimerTree::GetTotalTimeForTimerId(TimerTree *this, const GPUTimerId id)
{
  return ?GetTotalTimeForTimerId@TimerTree@@QEBAIW4GPUTimerId@@@Z(this, id);
}

/*
==============
GPUTimerTree::BeginFrame
==============
*/

void __fastcall GPUTimerTree::BeginFrame(int frameCount, bool flush)
{
  ?BeginFrame@GPUTimerTree@@SAXH_N@Z(frameCount, flush);
}

/*
==============
TimerTree::RemoveSysOverhead
==============
*/

void __fastcall TimerTree::RemoveSysOverhead(TimerTree *this)
{
  ?RemoveSysOverhead@TimerTree@@AEAAXXZ(this);
}

/*
==============
NodeSortCallback
==============
*/

AlgoCompareVal __fastcall NodeSortCallback(const GPUTimeStampNode *rLeft, const GPUTimeStampNode *rRight)
{
  return ?NodeSortCallback@@YA?AW4AlgoCompareVal@@AEBVGPUTimeStampNode@@0@Z(rLeft, rRight);
}

/*
==============
TimerTree::UpdateTimeStamps
==============
*/

void __fastcall TimerTree::UpdateTimeStamps(TimerTree *this)
{
  ?UpdateTimeStamps@TimerTree@@AEAAXXZ(this);
}

/*
==============
GPUTimerTree::LogTimerTree
==============
*/

void GPUTimerTree::LogTimerTree(void)
{
  ?LogTimerTree@GPUTimerTree@@SAXXZ();
}

/*
==============
GPUTimerTree::GetDrawTree
==============
*/

TimerTree *__fastcall GPUTimerTree::GetDrawTree()
{
  return ?GetDrawTree@GPUTimerTree@@SAPEAVTimerTree@@XZ();
}

/*
==============
GPUTimerTree::IsSystemOverheadTimerId
==============
*/

bool __fastcall GPUTimerTree::IsSystemOverheadTimerId(GPUTimerId id)
{
  return ?IsSystemOverheadTimerId@GPUTimerTree@@SA_NW4GPUTimerId@@@Z(id);
}

/*
==============
GPUTimerTree::Init
==============
*/

void GPUTimerTree::Init(void)
{
  ?Init@GPUTimerTree@@SAXXZ();
}

/*
==============
TimerTree::ResetForFrameStart
==============
*/

void __fastcall TimerTree::ResetForFrameStart(TimerTree *this, int frameCount, bool flush)
{
  ?ResetForFrameStart@TimerTree@@QEAAXH_N@Z(this, frameCount, flush);
}

/*
==============
GPUTimerTree::LogNode
==============
*/

bool __fastcall GPUTimerTree::LogNode(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int depth, GPUTimerTree::WalkData *pWalkData)
{
  return ?LogNode@GPUTimerTree@@SA_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAUWalkData@1@@Z(__formal, pNode, depth, pWalkData);
}

/*
==============
TimerTree::IsCalculated
==============
*/

bool __fastcall TimerTree::IsCalculated(TimerTree *this)
{
  return ?IsCalculated@TimerTree@@QEBA_NXZ(this);
}

/*
==============
GPUFrameTimer::EndFrameCallback
==============
*/

void GPUFrameTimer::EndFrameCallback(void)
{
  ?EndFrameCallback@GPUFrameTimer@@SAXXZ();
}

/*
==============
TimerTree::CalcTimerTree
==============
*/

void __fastcall TimerTree::CalcTimerTree(TimerTree *this)
{
  ?CalcTimerTree@TimerTree@@QEAAXXZ(this);
}

/*
==============
GPUFrameTimer::GetFrameTimer
==============
*/

GPUTimeStampNode *__fastcall GPUFrameTimer::GetFrameTimer()
{
  return ?GetFrameTimer@GPUFrameTimer@@SAPEAVGPUTimeStampNode@@XZ();
}

/*
==============
GPUTimerTree::Shutdown
==============
*/

void GPUTimerTree::Shutdown(void)
{
  ?Shutdown@GPUTimerTree@@SAXXZ();
}

/*
==============
GPUTimerTree::ClearReadTree
==============
*/

void GPUTimerTree::ClearReadTree(void)
{
  ?ClearReadTree@GPUTimerTree@@SAXXZ();
}

/*
==============
GPUFrameTimer::Init
==============
*/

void GPUFrameTimer::Init(void)
{
  ?Init@GPUFrameTimer@@SAXXZ();
}

/*
==============
TimerTree::GetRootNode
==============
*/

GPUTimeStampNode *__fastcall TimerTree::GetRootNode(TimerTree *this)
{
  return ?GetRootNode@TimerTree@@QEAAPEAVGPUTimeStampNode@@XZ(this);
}

/*
==============
GPUTimerTree::EndTimer
==============
*/

void __fastcall GPUTimerTree::EndTimer(int framecount)
{
  ?EndTimer@GPUTimerTree@@SAXH@Z(framecount);
}

/*
==============
TimerTree::IsEmpty
==============
*/

bool __fastcall TimerTree::IsEmpty(TimerTree *this)
{
  return ?IsEmpty@TimerTree@@QEBA_NXZ(this);
}

/*
==============
TimerTree::CreateGraph
==============
*/

void __fastcall TimerTree::CreateGraph(TimerTree *this)
{
  ?CreateGraph@TimerTree@@AEAAXXZ(this);
}

/*
==============
GPUFrameTimer::ClearReadTimer
==============
*/

void GPUFrameTimer::ClearReadTimer(void)
{
  ?ClearReadTimer@GPUFrameTimer@@SAXXZ();
}

/*
==============
GPUFrameTimer::EndFrame
==============
*/

void GPUFrameTimer::EndFrame(void)
{
  ?EndFrame@GPUFrameTimer@@SAXXZ();
}

/*
==============
GPUTimerTree::BeginTimer
==============
*/

void __fastcall GPUTimerTree::BeginTimer(const GPUTimerId id, const GfxDrawListType drawListType, int framecount)
{
  ?BeginTimer@GPUTimerTree@@SAXW4GPUTimerId@@W4GfxDrawListType@@H@Z(id, drawListType, framecount);
}

/*
==============
GPUFrameTimer::Shutdown
==============
*/

void GPUFrameTimer::Shutdown(void)
{
  ?Shutdown@GPUFrameTimer@@SAXXZ();
}

/*
==============
IdSortCallback
==============
*/

AlgoCompareVal __fastcall IdSortCallback(const int *rLeft, const int *rRight)
{
  return ?IdSortCallback@@YA?AW4AlgoCompareVal@@AEBH0@Z(rLeft, rRight);
}

/*
==============
GPUTimerTree::EndFrameCallback
==============
*/

void __fastcall GPUTimerTree::EndFrameCallback(unsigned __int64 callbackGpuTime)
{
  ?EndFrameCallback@GPUTimerTree@@SAX_K@Z(callbackGpuTime);
}

/*
==============
GPUTimerTree::RegisterSystemOverheadTimerId
==============
*/

void __fastcall GPUTimerTree::RegisterSystemOverheadTimerId(GPUTimerId id)
{
  ?RegisterSystemOverheadTimerId@GPUTimerTree@@SAXW4GPUTimerId@@@Z(id);
}

/*
==============
TimerTree::BeginTimer
==============
*/

void __fastcall TimerTree::BeginTimer(TimerTree *this, const GPUTimerId id, const GfxDrawListType drawListType, int frameCount)
{
  ?BeginTimer@TimerTree@@QEAAXW4GPUTimerId@@W4GfxDrawListType@@H@Z(this, id, drawListType, frameCount);
}

/*
==============
GPUFrameTimer::BeginFrame
==============
*/

void __fastcall GPUFrameTimer::BeginFrame(bool flush)
{
  ?BeginFrame@GPUFrameTimer@@SAX_N@Z(flush);
}

/*
==============
GPUFrameTimer::BeginFrame
==============
*/
void GPUFrameTimer::BeginFrame(bool flush)
{
  GPUTimerQuery *Query; 

  if ( GPUFrameTimer::ms_pWriteFrameTimer->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 721, ASSERT_TYPE_ASSERT, "(!ms_pWriteFrameTimer->m_isRunning)", (const char *)&queryFormat, "!ms_pWriteFrameTimer->m_isRunning") )
    __debugbreak();
  GPUTimerQuery::ResetQueries();
  GPUFrameTimer::ms_flushGpu = flush;
  GPUFrameTimer::ms_pWriteFrameTimer = &GPUFrameTimer::ms_frameTimers[GPUFrameTimer::ms_writeFrameTimerIndex];
  GPUFrameTimer::ms_pWriteFrameTimer->m_isRunning = 1;
  Query = GPUTimerQuery::AllocateQuery();
  GPUFrameTimer::ms_pWriteFrameTimer->m_pQuery = Query;
  R_LockGfxImmediateContext();
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, &g_dx.gpuTimerLables[2 * Query->m_queryIndex], 0i64, 0i64, 1);
  R_UnlockGfxImmediateContext();
}

/*
==============
GPUTimerTree::BeginFrame
==============
*/
void GPUTimerTree::BeginFrame(int frameCount, bool flush)
{
  GPUTimerTree::ms_pWriteTree = &GPUTimerTree::ms_trees[GPUTimerTree::ms_writeTreeIndex];
  TimerTree::ResetForFrameStart(GPUTimerTree::ms_pWriteTree, frameCount, flush);
  GPUTimerQuery::ResetQueries();
}

/*
==============
GPUTimerTree::BeginTimer
==============
*/
void GPUTimerTree::BeginTimer(const GPUTimerId id, const GfxDrawListType drawListType, int framecount)
{
  TimerTree::BeginTimer(GPUTimerTree::ms_pWriteTree, id, drawListType, framecount);
}

/*
==============
TimerTree::BeginTimer
==============
*/
void TimerTree::BeginTimer(TimerTree *this, const GPUTimerId id, const GfxDrawListType drawListType, int frameCount)
{
  int m_frameNumber; 
  const char *Name; 
  char *v10; 
  GPUTimerQuery *Query; 
  char *v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  unsigned __int64 v17; 
  const char *v18; 
  int v19; 
  int v20; 

  m_frameNumber = this->m_frameNumber;
  if ( frameCount != m_frameNumber )
  {
    Name = R_GPU_TimerGetName(id);
    v20 = m_frameNumber;
    v19 = frameCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 296, ASSERT_TYPE_ASSERT, "(frameCount == m_frameNumber)", "%s\n\tBeginTimer (%s | %d) is not contained within the expected Begin/EndFrame (%d) pair. ", "frameCount == m_frameNumber", Name, v19, v20) )
      __debugbreak();
  }
  if ( this->m_flatNodes.m_size >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  v10 = &this->m_flatNodes.m_data.m_buffer[72 * this->m_flatNodes.m_size];
  *(_QWORD *)v10 = 0i64;
  *((_QWORD *)v10 + 1) = 0i64;
  *((_QWORD *)v10 + 2) = 0i64;
  *((_QWORD *)v10 + 3) = 0i64;
  *((_QWORD *)v10 + 4) = 0i64;
  *((_QWORD *)v10 + 5) = 0i64;
  *((_QWORD *)v10 + 6) = 0i64;
  *((_QWORD *)v10 + 7) = 0i64;
  *((_QWORD *)v10 + 8) = 0i64;
  *((_QWORD *)v10 + 7) = v10 + 56;
  *((_QWORD *)v10 + 8) = v10 + 56;
  ++this->m_flatNodes.m_size;
  *((_QWORD *)v10 + 6) = &this->m_nodePointerArena;
  Query = GPUTimerQuery::AllocateQuery();
  *(_QWORD *)v10 = Query;
  R_LockGfxImmediateContext();
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, &g_dx.gpuTimerLables[2 * Query->m_queryIndex], 0i64, 0i64, 1);
  R_UnlockGfxImmediateContext();
  *((_DWORD *)v10 + 7) = id;
  *((_DWORD *)v10 + 11) = drawListType;
  *((_QWORD *)v10 + 4) = 0i64;
  v12 = (char *)*((_QWORD *)v10 + 8);
  if ( v12 == v10 + 56 )
  {
    if ( v12 == *((char **)v10 + 7) )
      goto LABEL_13;
    v13 = "m_sentinel.mp_next == m_sentinel.mp_prev";
    v14 = 95;
    v15 = "( m_sentinel.mp_next == m_sentinel.mp_prev )";
    v16 = "c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h";
  }
  else
  {
    v13 = "pNode->m_children.empty()";
    v14 = 312;
    v15 = "(pNode->m_children.empty())";
    v16 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp";
  }
  if ( CoreAssert_Handler(v16, v14, ASSERT_TYPE_ASSERT, v15, (const char *)&queryFormat, v13) )
    __debugbreak();
LABEL_13:
  if ( this->m_nodeStack.m_size )
  {
    v17 = this->m_nodeStack.m_size - 1;
    if ( v17 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    if ( *(_DWORD *)(*(_QWORD *)&this->m_nodeStack.m_data.m_buffer[8 * v17] + 28i64) == 100 )
    {
      v18 = R_GPU_TimerGetName(id);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 322, ASSERT_TYPE_ASSERT, "(m_nodeStack.empty() || (m_nodeStack.back()->m_id != GPU_TIMER_WAIT_FLIP))", "%s\n\tPushing a timerID ('%s') within a Wait Flip block is not allowed.\n", "m_nodeStack.empty() || (m_nodeStack.back()->m_id != GPU_TIMER_WAIT_FLIP)", v18) )
        __debugbreak();
    }
  }
  if ( GPUTimerTree::IsSystemOverheadTimerId(*((GPUTimerId *)v10 + 7)) )
  {
    if ( this->m_sysover_nodes.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    *(_QWORD *)&this->m_sysover_nodes.m_data.m_buffer[8 * this->m_sysover_nodes.m_size++] = v10;
  }
  if ( this->m_nodeStack.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  *(_QWORD *)&this->m_nodeStack.m_data.m_buffer[8 * this->m_nodeStack.m_size++] = v10;
}

/*
==============
TimerTree::CalcTimerTree
==============
*/
void TimerTree::CalcTimerTree(TimerTree *this)
{
  TimerTree *v1; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *p_m_sysover_nodes; 
  unsigned __int64 m_size; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  const char *v9; 
  int v10; 
  const char *Name; 
  const char *v12; 
  const char *v13; 
  bool v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v18; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v19; 

  v1 = this;
  if ( !this->m_isCalculated )
  {
    TimerTree::UpdateTimeStamps(this);
    TimerTree::CreateGraph(v1);
    p_m_sysover_nodes = &v1->m_sysover_nodes;
    m_size = v1->m_sysover_nodes.m_size;
    v18 = &v1->m_sysover_nodes;
    if ( &v1->m_sysover_nodes != (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)&v1->m_sysover_nodes + 8 * m_size) )
    {
      v4 = &v1->m_sysover_nodes;
      v19 = &v1->m_sysover_nodes;
      do
      {
        v5 = *(_QWORD *)p_m_sysover_nodes->m_data.m_buffer;
        v6 = *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes->m_data.m_buffer + 16i64) - *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes->m_data.m_buffer + 8i64);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v5 + 32);
          if ( v7 )
          {
            do
            {
              v8 = *(_QWORD *)(v7 + 16);
              if ( v6 > v8 )
              {
                v9 = "False";
                v10 = *(unsigned __int8 *)(v7 + 24);
                if ( *(_BYTE *)(v5 + 24) )
                  v9 = "True";
                Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v7 + 28));
                v12 = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v5 + 28));
                v13 = "False";
                if ( (_BYTE)v10 )
                  v13 = "True";
                LODWORD(v16) = v10;
                Com_Printf(8, "Overhead time (%s | %zu) exceeds the parent end time (%s | %zu). CalcErr = %d, Node Err = %s Parent Err = %s\n", v12, v6, Name, v8, v16, v9, v13);
              }
              else
              {
                *(_QWORD *)(v7 + 16) = v8 - v6;
              }
              v7 = *(_QWORD *)(v7 + 32);
            }
            while ( v7 );
            p_m_sysover_nodes = v18;
            v4 = v19;
          }
        }
        m_size = v4->m_size;
        p_m_sysover_nodes = (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)p_m_sysover_nodes + 8);
        v18 = p_m_sysover_nodes;
        v14 = p_m_sysover_nodes == (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)v4 + 8 * m_size);
        v4 = v19;
      }
      while ( !v14 );
      v1 = this;
    }
    v15 = 0i64;
    if ( m_size )
    {
      do
      {
        if ( v15 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        ++v15;
      }
      while ( v15 < v1->m_sysover_nodes.m_size );
    }
    v1->m_sysover_nodes.m_size = 0i64;
    TimerTree::CalcTimes(v1);
    v1->m_isCalculated = 1;
  }
}

/*
==============
TimerTree::CalcTimes
==============
*/
void TimerTree::CalcTimes(TimerTree *this)
{
  unsigned int v1; 
  TimerTree *v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  const char *Name; 
  unsigned int v12; 
  const char *v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  int v16; 
  char *fmt; 

  v1 = 0;
  v2 = this;
  if ( this->m_flatNodes.m_size )
  {
    v3 = 0i64;
    if ( !this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    do
    {
      if ( v3 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v4 = 0;
      v5 = (__int64)&v2->m_flatNodes + 72 * v3;
      v6 = *(_QWORD *)&v2->m_flatNodes.m_data.m_buffer[72 * v3 + 64];
      if ( v6 != v5 + 56 )
      {
        do
        {
          if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v7 = *(_QWORD *)(v6 + 16);
          if ( !GPUTimerTree::IsSystemOverheadTimerId(*(GPUTimerId *)(v7 + 28)) )
            v4 += *(_DWORD *)(v7 + 16) - *(_DWORD *)(v7 + 8);
          v6 = *(_QWORD *)(v6 + 8);
        }
        while ( v6 != v5 + 56 );
        v2 = this;
      }
      v8 = *(_QWORD *)(v5 + 8);
      v9 = *(_QWORD *)(v5 + 16);
      if ( v8 > v9 )
      {
        Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v5 + 28));
        Com_Printf(8, "timer id '%s' end time (%zu) is before start time (%zu)\n", Name, v9, v8);
        v10 = v4;
      }
      else
      {
        v10 = v9 - v8;
      }
      if ( v4 > v10 )
      {
        v13 = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v5 + 28));
        LODWORD(fmt) = v10;
        Com_Printf(8, "timer id '%s' child time (%d) is greater than it's total time (%d)\n", v13, v4, fmt);
        v12 = 0;
      }
      else
      {
        v12 = v10 - v4;
      }
      *(_DWORD *)(v5 + 40) = v12;
      v14 = *(unsigned int *)(v5 + 28);
      if ( v14 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v2->m_totalTimes.m_data[v14] += v10;
      v15 = *(unsigned int *)(v5 + 28);
      v16 = *(_DWORD *)(v5 + 40);
      if ( v15 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v2->m_exclTimes.m_data[v15] += v16;
      v3 = ++v1;
    }
    while ( v1 < v2->m_flatNodes.m_size );
  }
}

/*
==============
GPUFrameTimer::ClearReadTimer
==============
*/
void GPUFrameTimer::ClearReadTimer(void)
{
  GPUFrameTimer::ms_pReadFrameTimer = NULL;
}

/*
==============
GPUTimerTree::ClearReadTree
==============
*/
void GPUTimerTree::ClearReadTree(void)
{
  GPUTimerTree::ms_pReadTree = NULL;
}

/*
==============
GPUTimerTree::ClearSystemOverheadTimerId
==============
*/
void GPUTimerTree::ClearSystemOverheadTimerId(void)
{
  GPUTimerTree::ms_numSysOverhead = 0;
}

/*
==============
TimerTree::CreateGraph
==============
*/
void TimerTree::CreateGraph(TimerTree *this)
{
  unsigned __int64 m_size; 
  unsigned int v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  int v6; 
  GPUTimeStampNode *v7; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  GPUTimeStampNode *v12; 
  unsigned __int64 v13; 
  unsigned __int64 m_endTimeUs; 
  char *v15; 
  unsigned __int64 v16; 
  const char *v17; 
  const char *Name; 
  __int64 v19; 
  ntl::internal::list_node<GPUTimeStampNode *> *v20; 

  m_size = this->m_flatNodes.m_size;
  v2 = 0;
  if ( m_size )
  {
    v4 = 0i64;
    do
    {
      TimerTree::s_nodeSortIndices[v4] = v2++;
      m_size = this->m_flatNodes.m_size;
      v4 = v2;
    }
    while ( v2 < m_size );
  }
  if ( (m_size > 0x7FFFFFFFFFFFFFFFi64 || m_size + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)m_size, "unsigned", m_size) )
    __debugbreak();
  Algo_MergeSortIndices<GPUTimeStampNode>((const GPUTimeStampNode *)&this->m_flatNodes, (int *)TimerTree::s_nodeSortIndices, (int *)TimerTree::s_nodeScratchIndices, 0, m_size - 1, NodeSortCallback);
  if ( this->m_pRoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 472, ASSERT_TYPE_ASSERT, "(m_pRoot == nullptr)", "%s\n\tCreateGraph called before ResetForFrameStart", "m_pRoot == nullptr") )
    __debugbreak();
  v5 = TimerTree::s_nodeSortIndices[0];
  if ( TimerTree::s_nodeSortIndices[0] >= this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v5 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  v6 = 1;
  v7 = (GPUTimeStampNode *)((char *)&this->m_flatNodes + 72 * v5);
  this->m_pRoot = v7;
  v7->m_pParent = NULL;
  if ( this->m_flatNodes.m_size > 1 )
  {
    v8 = &TimerTree::s_nodeSortIndices[1];
    v9 = 0i64;
    do
    {
      v10 = *v8;
      if ( v10 >= this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v10 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v11 = v9;
      v12 = (GPUTimeStampNode *)((char *)&this->m_flatNodes + 72 * v10);
      while ( v11 >= 0 )
      {
        v13 = TimerTree::s_nodeSortIndices[v11];
        if ( v13 >= this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v13 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        m_endTimeUs = v12->m_endTimeUs;
        v15 = &this->m_flatNodes.m_data.m_buffer[72 * v13];
        v16 = *((_QWORD *)v15 + 2);
        if ( v16 == m_endTimeUs )
        {
          if ( v16 > v12->m_beginTimeUs )
            goto LABEL_34;
        }
        else if ( v16 > m_endTimeUs && *((_QWORD *)v15 + 1) != m_endTimeUs )
        {
LABEL_34:
          if ( *((_DWORD *)v15 + 7) == 100 )
          {
            if ( v12->m_calcErr || v15[24] )
            {
              Name = R_GPU_TimerGetName(v12->m_id);
              Com_PrintWarning(8, "WARNING: The Wait for Flip timer id should not have any childnodes ('%s')\n", Name);
            }
            else
            {
              v17 = R_GPU_TimerGetName(v12->m_id);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 530, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The Wait for Flip timer id should not have any childnodes ('%s')\n", v17) )
                __debugbreak();
            }
          }
          if ( !*((_QWORD *)v15 + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 89, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
            __debugbreak();
          v19 = *((_QWORD *)v15 + 6);
          if ( !*(_QWORD *)(v19 + 7296) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 53, ASSERT_TYPE_ASSERT, "( mp_bottom_up )", (const char *)&queryFormat, "mp_bottom_up") )
            __debugbreak();
          if ( *(_QWORD *)(v19 + 7304) < *(_QWORD *)(v19 + 7296) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 92, ASSERT_TYPE_ASSERT, "( mp_top_down >= mp_bottom_up )", (const char *)&queryFormat, "mp_top_down >= mp_bottom_up") )
            __debugbreak();
          if ( *(_QWORD *)(v19 + 7304) - *(_QWORD *)(v19 + 7296) < 0x18ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 54, ASSERT_TYPE_ASSERT, "( available() >= size_bytes )", (const char *)&queryFormat, "available() >= size_bytes") )
            __debugbreak();
          v20 = *(ntl::internal::list_node<GPUTimeStampNode *> **)(v19 + 7296);
          *(_QWORD *)(v19 + 7296) = v20 + 1;
          v20->mp_prev = NULL;
          v20->mp_next = NULL;
          v20->m_data = v12;
          ntl::internal::list_head_base<ntl::internal::list_node<GPUTimeStampNode *>>::insert_before((ntl::internal::list_head_base<ntl::internal::list_node<GPUTimeStampNode *> > *)(v15 + 56), (ntl::internal::list_node<GPUTimeStampNode *> *)(v15 + 56), v20);
          if ( v12->m_pParent )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 538, ASSERT_TYPE_ASSERT, "(pChildNode->m_pParent == nullptr)", (const char *)&queryFormat, "pChildNode->m_pParent == nullptr") )
              __debugbreak();
          }
          v12->m_pParent = (GPUTimeStampNode *)v15;
          break;
        }
        --v11;
      }
      ++v6;
      ++v8;
      ++v9;
    }
    while ( v6 < this->m_flatNodes.m_size );
  }
}

/*
==============
GPUFrameTimer::EndFrame
==============
*/
void GPUFrameTimer::EndFrame(void)
{
  GPUTimerQuery *m_pQuery; 

  if ( !GPUFrameTimer::ms_pWriteFrameTimer->m_isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 736, ASSERT_TYPE_ASSERT, "(ms_pWriteFrameTimer->m_isRunning)", (const char *)&queryFormat, "ms_pWriteFrameTimer->m_isRunning") )
    __debugbreak();
  m_pQuery = GPUFrameTimer::ms_pWriteFrameTimer->m_pQuery;
  R_LockGfxImmediateContext();
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, &g_dx.gpuTimerLables[2 * m_pQuery->m_queryIndex + 1], 0i64, 0i64, 1);
  R_UnlockGfxImmediateContext();
  GPUFrameTimer::ms_pWriteFrameTimer->m_isRunning = 0;
  GPUFrameTimer::ms_writeFrameTimerIndex = ((_BYTE)GPUFrameTimer::ms_writeFrameTimerIndex + 1) & 3;
}

/*
==============
GPUTimerTree::EndFrame
==============
*/
void GPUTimerTree::EndFrame(void)
{
  GPUTimerTree::ms_writeTreeIndex = ((_BYTE)GPUTimerTree::ms_writeTreeIndex + 1) & 0x3F;
}

/*
==============
GPUFrameTimer::EndFrameCallback
==============
*/
void GPUFrameTimer::EndFrameCallback(void)
{
  char v0; 

  v0 = GPUFrameTimer::ms_readFrameTimerIndex;
  GPUFrameTimer::ms_pReadFrameTimer = &GPUFrameTimer::ms_frameTimers[GPUFrameTimer::ms_readFrameTimerIndex];
  if ( GPUFrameTimer::ms_readFrameTimerIndex == GPUFrameTimer::ms_writeFrameTimerIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 749, ASSERT_TYPE_ASSERT, "(ms_readFrameTimerIndex != ms_writeFrameTimerIndex)", (const char *)&queryFormat, "ms_readFrameTimerIndex != ms_writeFrameTimerIndex") )
      __debugbreak();
    v0 = GPUFrameTimer::ms_readFrameTimerIndex;
  }
  GPUFrameTimer::ms_readFrameTimerIndex = (v0 + 1) & 3;
}

/*
==============
GPUTimerTree::EndFrameCallback
==============
*/
void GPUTimerTree::EndFrameCallback(unsigned __int64 callbackGpuTime)
{
  int CurrentThreadContext; 
  __int64 v2; 
  unsigned int m_readPtr; 
  CPUTimelineProfiler::Events *p_m_events; 
  signed int v5; 
  char (*m_name)[32]; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  char *v10; 
  char *v11; 
  char v12; 
  __int64 v13; 
  signed __int32 v14[8]; 

  GPUTimerTree::ms_pReadTree = &GPUTimerTree::ms_trees[GPUTimerTree::ms_readTreeIndex];
  if ( GPUTimerTree::ms_pReadTree->m_nodeStack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 138, ASSERT_TYPE_ASSERT, "(ms_pReadTree->IsEmpty())", "%s\n\tThe tree we use to draw timers is not empty. Did we miss a call to EndTimer?", "ms_pReadTree->IsEmpty()") )
    __debugbreak();
  GPUTimerTree::ms_readTreeIndex = ((_BYTE)GPUTimerTree::ms_readTreeIndex + 1) & 0x3F;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = 28;
  if ( g_cpuProfiler.m_enabled && CurrentThreadContext < 28 )
  {
    v2 = CurrentThreadContext;
    m_readPtr = g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_readPtr;
    p_m_events = &g_cpuProfiler.m_threadData[v2].m_events;
    _InterlockedOr(v14, 0);
    if ( g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_writePtr - m_readPtr < g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_size - 1 )
    {
      v5 = g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_writePtr++ & g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_mask;
      if ( v5 != -1 )
      {
        m_name = g_cpuProfiler.m_threadData[v2].m_events.m_name;
        v7 = "GPU End Frame";
        v8 = v5;
        v9 = v5;
        m_name[v9][0] = 0;
        v10 = p_m_events->m_name[v9];
        v11 = v10 + 31;
        do
        {
          if ( v10 >= v11 )
            break;
          v12 = *v7++;
          *v10++ = v12;
        }
        while ( *v7 );
        *v10 = 0;
        v13 = v8;
        p_m_events->m_name[v9][31] = 0;
        p_m_events->m_base[v13].m_color = -60269;
        p_m_events->m_base[v13].m_thread = CurrentThreadContext;
        p_m_events->m_base[v13].m_time = __rdtsc();
      }
    }
    else
    {
      g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_oom = 1;
    }
  }
}

/*
==============
GPUTimerTree::EndTimer
==============
*/
void GPUTimerTree::EndTimer(int framecount)
{
  TimerTree *v1; 
  unsigned __int64 v3; 
  __int64 v4; 
  int m_frameNumber; 
  const char *Name; 
  _DWORD *v7; 

  v1 = GPUTimerTree::ms_pWriteTree;
  if ( !GPUTimerTree::ms_pWriteTree->m_nodeStack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v3 = v1->m_nodeStack.m_size - 1;
  if ( v3 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  v4 = *(_QWORD *)&v1->m_nodeStack.m_data.m_buffer[8 * v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 342, ASSERT_TYPE_ASSERT, "(pNode != nullptr)", "%s\n\tEndTimer (frame: %d) node is null. EndTimer called too many times. Look for a mismatched BeginTimer/EndTimer pair.", "pNode != nullptr", framecount) )
    __debugbreak();
  m_frameNumber = v1->m_frameNumber;
  if ( framecount != m_frameNumber )
  {
    Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v4 + 28));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 344, ASSERT_TYPE_ASSERT, "(frameCount == m_frameNumber)", "%s\n\tEndTimer (%s | %d) is not contained within the expected Begin/EndFrame (%d) pair. ", "frameCount == m_frameNumber", Name, framecount, m_frameNumber) )
      __debugbreak();
  }
  v7 = *(_DWORD **)v4;
  R_LockGfxImmediateContext();
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, &g_dx.gpuTimerLables[2 * *v7 + 1], 0i64, 0i64, 1);
  R_UnlockGfxImmediateContext();
  if ( !v1->m_nodeStack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
    __debugbreak();
  --v1->m_nodeStack.m_size;
}

/*
==============
TimerTree::EndTimer
==============
*/
void TimerTree::EndTimer(TimerTree *this, int frameCount)
{
  unsigned __int64 v4; 
  __int64 v5; 
  int m_frameNumber; 
  const char *Name; 
  _DWORD *v8; 

  if ( !this->m_nodeStack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v4 = this->m_nodeStack.m_size - 1;
  if ( v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  v5 = *(_QWORD *)&this->m_nodeStack.m_data.m_buffer[8 * v4];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 342, ASSERT_TYPE_ASSERT, "(pNode != nullptr)", "%s\n\tEndTimer (frame: %d) node is null. EndTimer called too many times. Look for a mismatched BeginTimer/EndTimer pair.", "pNode != nullptr", frameCount) )
    __debugbreak();
  m_frameNumber = this->m_frameNumber;
  if ( frameCount != m_frameNumber )
  {
    Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v5 + 28));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 344, ASSERT_TYPE_ASSERT, "(frameCount == m_frameNumber)", "%s\n\tEndTimer (%s | %d) is not contained within the expected Begin/EndFrame (%d) pair. ", "frameCount == m_frameNumber", Name, frameCount, m_frameNumber) )
      __debugbreak();
  }
  v8 = *(_DWORD **)v5;
  R_LockGfxImmediateContext();
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, &g_dx.gpuTimerLables[2 * *v8 + 1], 0i64, 0i64, 1);
  R_UnlockGfxImmediateContext();
  if ( !this->m_nodeStack.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
    __debugbreak();
  --this->m_nodeStack.m_size;
}

/*
==============
GPUTimerTree::GetDrawTree
==============
*/
TimerTree *GPUTimerTree::GetDrawTree()
{
  return GPUTimerTree::ms_pReadTree;
}

/*
==============
TimerTree::GetExclusiveTimeForTimerId
==============
*/
__int64 TimerTree::GetExclusiveTimeForTimerId(TimerTree *this, const GPUTimerId id)
{
  __int64 v2; 

  v2 = (unsigned int)id;
  if ( (unsigned int)id < GPU_TIMER_COUNT )
    return this->m_exclTimes.m_data[id];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  return this->m_exclTimes.m_data[v2];
}

/*
==============
GPUFrameTimer::GetFrameTimer
==============
*/
GPUTimeStampNode *GPUFrameTimer::GetFrameTimer()
{
  return GPUFrameTimer::ms_pReadFrameTimer;
}

/*
==============
TimerTree::GetRootNode
==============
*/
GPUTimeStampNode *TimerTree::GetRootNode(TimerTree *this)
{
  return this->m_pRoot;
}

/*
==============
TimerTree::GetTotalTimeForTimerId
==============
*/
__int64 TimerTree::GetTotalTimeForTimerId(TimerTree *this, const GPUTimerId id)
{
  __int64 v2; 

  v2 = (unsigned int)id;
  if ( (unsigned int)id < GPU_TIMER_COUNT )
    return this->m_totalTimes.m_data[id];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  return this->m_totalTimes.m_data[v2];
}

/*
==============
IdSortCallback
==============
*/
__int64 IdSortCallback(const int *rLeft, const int *rRight)
{
  if ( *rLeft >= *rRight )
    return *rLeft > *rRight;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
GPUFrameTimer::Init
==============
*/
void GPUFrameTimer::Init(void)
{
  GPUFrameTimer::ms_writeFrameTimerIndex = 0;
  GPUFrameTimer::ms_readFrameTimerIndex = 0;
  GPUFrameTimer::ms_pWriteFrameTimer = GPUFrameTimer::ms_frameTimers;
  GPUFrameTimer::ms_pReadFrameTimer = NULL;
  if ( !GPUTimerQuery::ms_initialized )
    GPUTimerQuery::InitQueries();
}

/*
==============
GPUTimerTree::Init
==============
*/
void GPUTimerTree::Init(void)
{
  GPUTimerTree::ms_writeTreeIndex = 0;
  GPUTimerTree::ms_pWriteTree = GPUTimerTree::ms_trees;
  GPUTimerTree::ms_readTreeIndex = 0;
  GPUTimerTree::ms_pReadTree = NULL;
  if ( !GPUTimerQuery::ms_initialized )
    GPUTimerQuery::InitQueries();
}

/*
==============
TimerTree::IsCalculated
==============
*/
_BOOL8 TimerTree::IsCalculated(TimerTree *this)
{
  return this->m_isCalculated;
}

/*
==============
TimerTree::IsEmpty
==============
*/
bool TimerTree::IsEmpty(TimerTree *this)
{
  return this->m_nodeStack.m_size == 0;
}

/*
==============
GPUTimerTree::IsSystemOverheadTimerId
==============
*/
char GPUTimerTree::IsSystemOverheadTimerId(GPUTimerId id)
{
  int v1; 
  unsigned __int64 i; 

  v1 = 0;
  if ( GPUTimerTree::ms_numSysOverhead <= 0 )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    if ( i >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    if ( GPUTimerTree::ms_sysOverheadId.m_data[i] == id )
      break;
    if ( ++v1 >= GPUTimerTree::ms_numSysOverhead )
      return 0;
  }
  return 1;
}

/*
==============
GPUTimerTree::LogNode
==============
*/
bool GPUTimerTree::LogNode(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int depth, GPUTimerTree::WalkData *pWalkData)
{
  const char *Name; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 m_beginTimeUs; 
  double v18; 
  int v20; 
  unsigned int v21; 

  if ( depth >= 8 )
  {
    v20 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 190, ASSERT_TYPE_ASSERT, "(depth < MAX_CHILD_DEPTH)", "%s\n\tRequested depth (%d) exceeds max allowed depth (%d)", "depth < MAX_CHILD_DEPTH", depth, v20) )
      __debugbreak();
  }
  Name = R_GPU_TimerGetName(pNode->m_id);
  v9 = Name;
  v10 = 3 * depth;
  v11 = -1i64;
  do
    ++v11;
  while ( Name[v11] );
  v12 = v11 + (unsigned int)(v10 + 4);
  if ( v12 >= 0x200 )
  {
    v21 = depth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 199, ASSERT_TYPE_ASSERT, "(4 + offset + name_len < 512)", "%s\n\tname buffer for logging timer nodes is short by %zu characters.\nTimer name is %s, depth is %u.\n", "LOGNODE_TAGLEN + offset + name_len < LOGNODE_BUFF", v12 - 511, v9, v21) )
      __debugbreak();
  }
  memset_0(&pWalkData->name[4], 32, (unsigned int)v10);
  Core_strcpy(&pWalkData->name[v10 + 4], (unsigned int)(508 - v10), v9);
  m_beginTimeUs = pNode->m_beginTimeUs;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(pNode->m_endTimeUs - m_beginTimeUs) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm1, xmm0, cs:__real@3eb0c6f7a0b5ed8d; value }
  if ( pWalkData->outputCsv )
  {
    Com_CSVWriteMetric(pWalkData->name, *(long double *)&_XMM1);
  }
  else
  {
    __asm { vmovsd  [rsp+58h+var_30], xmm1 }
    Com_Printf(8, "%-30s, %11zu, %11zu, %5.6f\n", pWalkData->name, m_beginTimeUs, pNode->m_endTimeUs, v18);
  }
  return 0;
}

/*
==============
GPUTimerTree::LogTimerTree
==============
*/
void GPUTimerTree::LogTimerTree()
{
  TimerTree *v2; 
  bool v3; 
  __int64 p_m_sysover_nodes; 
  unsigned __int64 m_size; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  const char *v11; 
  int v12; 
  const char *Name; 
  const char *v14; 
  const char *v15; 
  unsigned __int64 v16; 
  GPUTimeStampNode *m_pRoot; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<GPUTimeStampNode *> > *i; 
  GPUTimeStampNode *mp_prev; 
  __int64 v23; 
  unsigned __int128 v24; 
  __int64 v25; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v26; 
  GPUTimerTree::WalkData v27; 
  void *retaddr; 

  _R11 = &retaddr;
  v2 = GPUTimerTree::ms_pReadTree;
  *(_QWORD *)&v24 = GPUTimerTree::ms_pReadTree;
  if ( GPUTimerTree::ms_pReadTree )
  {
    __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
    Core_strcpy(v27.name, 0x200ui64, "GPU.");
    v3 = !v2->m_isCalculated;
    v27.outputCsv = 1;
    if ( v3 )
    {
      TimerTree::UpdateTimeStamps(v2);
      TimerTree::CreateGraph(v2);
      p_m_sysover_nodes = (__int64)&v2->m_sysover_nodes;
      m_size = v2->m_sysover_nodes.m_size;
      v25 = (__int64)&v2->m_sysover_nodes;
      if ( &v2->m_sysover_nodes != (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)&v2->m_sysover_nodes + 8 * m_size) )
      {
        v6 = (__int64)&v2->m_sysover_nodes;
        v26 = &v2->m_sysover_nodes;
        do
        {
          v7 = *(_QWORD *)p_m_sysover_nodes;
          v8 = *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes + 16i64) - *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes + 8i64);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v7 + 32);
            if ( v9 )
            {
              do
              {
                v10 = *(_QWORD *)(v9 + 16);
                if ( v8 > v10 )
                {
                  v11 = "False";
                  v12 = *(unsigned __int8 *)(v9 + 24);
                  if ( *(_BYTE *)(v7 + 24) )
                    v11 = "True";
                  Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v9 + 28));
                  v14 = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v7 + 28));
                  v15 = "False";
                  if ( (_BYTE)v12 )
                    v15 = "True";
                  LODWORD(v23) = v12;
                  Com_Printf(8, "Overhead time (%s | %zu) exceeds the parent end time (%s | %zu). CalcErr = %d, Node Err = %s Parent Err = %s\n", v14, v8, Name, v10, v23, v11, v15);
                }
                else
                {
                  *(_QWORD *)(v9 + 16) = v10 - v8;
                }
                v9 = *(_QWORD *)(v9 + 32);
              }
              while ( v9 );
              p_m_sysover_nodes = v25;
              v6 = (__int64)v26;
            }
          }
          m_size = *(_QWORD *)(v6 + 64);
          p_m_sysover_nodes += 8i64;
          v25 = p_m_sysover_nodes;
          v3 = p_m_sysover_nodes == v6 + 8 * m_size;
          v6 = (__int64)v26;
        }
        while ( !v3 );
        v2 = (TimerTree *)v24;
      }
      v16 = 0i64;
      if ( m_size )
      {
        do
        {
          if ( v16 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v16;
        }
        while ( v16 < v2->m_sysover_nodes.m_size );
      }
      v2->m_sysover_nodes.m_size = 0i64;
      TimerTree::CalcTimes(v2);
      v2->m_isCalculated = 1;
    }
    m_pRoot = v2->m_pRoot;
    v24 = 0ui64;
    __asm
    {
      vmovups xmm6, [rsp+2C8h+var_278]
      vmovdqa [rsp+2C8h+var_278], xmm6
    }
    if ( !GPUTimerTree::LogNode((GfxCmdBufContext *)&v24, m_pRoot, 0, &v27) )
    {
      mp_next = m_pRoot->m_children.m_listHead.m_sentinel.mp_next;
      for ( i = &m_pRoot->m_children.m_listHead; mp_next != (ntl::internal::list_node_base *)i; mp_next = mp_next->mp_next )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_prev = (GPUTimeStampNode *)mp_next[1].mp_prev;
        __asm { vmovdqa [rsp+2C8h+var_278], xmm6 }
        if ( TimerTree::WalkSubTree<GPUTimerTree::WalkData *>(GPUTimerTree::LogNode, (GfxCmdBufContext *)&v24, mp_prev, &v27, 1u) )
          break;
      }
    }
    __asm { vmovaps xmm6, [rsp+2C8h+var_38] }
  }
  else
  {
    Com_Printf(8, "Gpu Timer Tree is not ready for logging.\n");
  }
}

/*
==============
NodeSortCallback
==============
*/
__int64 NodeSortCallback(const GPUTimeStampNode *rLeft, const GPUTimeStampNode *rRight)
{
  unsigned __int64 m_beginTimeUs; 
  unsigned __int64 m_endTimeUs; 

  m_beginTimeUs = rLeft->m_beginTimeUs;
  if ( m_beginTimeUs >= rRight->m_beginTimeUs )
  {
    if ( m_beginTimeUs > rRight->m_beginTimeUs )
      return 1i64;
    m_endTimeUs = rLeft->m_endTimeUs;
    if ( m_endTimeUs < rRight->m_endTimeUs )
      return 1i64;
    if ( m_endTimeUs <= rRight->m_endTimeUs )
      return 0i64;
  }
  return 0xFFFFFFFFi64;
}

/*
==============
GPUTimerTree::RegisterSystemOverheadTimerId
==============
*/
void GPUTimerTree::RegisterSystemOverheadTimerId(GPUTimerId id)
{
  __int64 v2; 

  if ( (unsigned __int64)GPUTimerTree::ms_numSysOverhead >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 84, ASSERT_TYPE_ASSERT, "(ms_numSysOverhead < ms_sysOverheadId.size())", "%s\n\tTrying to set too many id's please increase the array size.\n", "ms_numSysOverhead < ms_sysOverheadId.size()") )
    __debugbreak();
  v2 = GPUTimerTree::ms_numSysOverhead;
  if ( (unsigned __int64)GPUTimerTree::ms_numSysOverhead >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  ++GPUTimerTree::ms_numSysOverhead;
  GPUTimerTree::ms_sysOverheadId.m_data[v2] = id;
}

/*
==============
TimerTree::RemoveSysOverhead
==============
*/
void TimerTree::RemoveSysOverhead(TimerTree *this)
{
  TimerTree *v1; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *p_m_sysover_nodes; 
  unsigned __int64 m_size; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  const char *v9; 
  int v10; 
  const char *Name; 
  const char *v12; 
  const char *v13; 
  bool v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v18; 
  ntl::fixed_vector<GPUTimeStampNode *,8,0> *v19; 

  v1 = this;
  p_m_sysover_nodes = &this->m_sysover_nodes;
  m_size = this->m_sysover_nodes.m_size;
  v18 = &this->m_sysover_nodes;
  if ( &this->m_sysover_nodes != (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)&this->m_sysover_nodes + 8 * m_size) )
  {
    v4 = &this->m_sysover_nodes;
    v19 = &this->m_sysover_nodes;
    do
    {
      v5 = *(_QWORD *)p_m_sysover_nodes->m_data.m_buffer;
      v6 = *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes->m_data.m_buffer + 16i64) - *(_QWORD *)(*(_QWORD *)p_m_sysover_nodes->m_data.m_buffer + 8i64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v5 + 32);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 16);
            if ( v6 > v8 )
            {
              v9 = "False";
              v10 = *(unsigned __int8 *)(v7 + 24);
              if ( *(_BYTE *)(v5 + 24) )
                v9 = "True";
              Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v7 + 28));
              v12 = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(v5 + 28));
              v13 = "False";
              if ( (_BYTE)v10 )
                v13 = "True";
              LODWORD(v16) = v10;
              Com_Printf(8, "Overhead time (%s | %zu) exceeds the parent end time (%s | %zu). CalcErr = %d, Node Err = %s Parent Err = %s\n", v12, v6, Name, v8, v16, v9, v13);
            }
            else
            {
              *(_QWORD *)(v7 + 16) = v8 - v6;
            }
            v7 = *(_QWORD *)(v7 + 32);
          }
          while ( v7 );
          p_m_sysover_nodes = v18;
          v4 = v19;
        }
      }
      m_size = v4->m_size;
      p_m_sysover_nodes = (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)p_m_sysover_nodes + 8);
      v18 = p_m_sysover_nodes;
      v14 = p_m_sysover_nodes == (ntl::fixed_vector<GPUTimeStampNode *,8,0> *)((char *)v4 + 8 * m_size);
      v4 = v19;
    }
    while ( !v14 );
    v1 = this;
  }
  v15 = 0i64;
  if ( m_size )
  {
    do
    {
      if ( v15 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v15;
    }
    while ( v15 < v1->m_sysover_nodes.m_size );
  }
  v1->m_sysover_nodes.m_size = 0i64;
}

/*
==============
TimerTree::ResetForFrameStart
==============
*/
void TimerTree::ResetForFrameStart(TimerTree *this, int frameCount, bool flush)
{
  unsigned __int64 v6; 
  const char *Name; 
  GPUTimeStampNode *p_m_flatNodes; 
  unsigned __int64 v9; 
  unsigned __int64 *p_m_size; 
  unsigned __int64 v11; 

  if ( this->m_nodeStack.m_size )
  {
    v6 = this->m_nodeStack.m_size - 1;
    if ( v6 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(*(_QWORD *)&this->m_nodeStack.m_data.m_buffer[8 * v6] + 28i64));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 633, ASSERT_TYPE_ASSERT, "(m_nodeStack.empty())", "%s\n\tTrying to reset for frame start but there are nodes still on the stack (top one is %s). Missing a call to EndTimer?", "m_nodeStack.empty()", Name) )
      __debugbreak();
  }
  this->m_flushGpu = flush;
  this->m_pRoot = NULL;
  this->m_isCalculated = 0;
  this->m_frameNumber = frameCount;
  memset_0(this, 0, 0x408ui64);
  p_m_flatNodes = (GPUTimeStampNode *)&this->m_flatNodes;
  v9 = 0i64;
  p_m_size = &this->m_flatNodes.m_size;
  for ( this->m_nodePointerArena.mp_bottom_up = this->m_nodePointerArena.m_data.m_buffer; v9 < *p_m_size; ++p_m_flatNodes )
  {
    if ( v9 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    GPUTimeStampNode::~GPUTimeStampNode(p_m_flatNodes);
    ++v9;
  }
  v11 = 0i64;
  for ( *p_m_size = 0i64; v11 < this->m_sysover_nodes.m_size; ++v11 )
  {
    if ( v11 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  this->m_sysover_nodes.m_size = 0i64;
}

/*
==============
GPUFrameTimer::Shutdown
==============
*/
void GPUFrameTimer::Shutdown(void)
{
  GPUTimerQuery::ms_initialized = 0;
}

/*
==============
GPUTimerTree::Shutdown
==============
*/
void GPUTimerTree::Shutdown(void)
{
  GPUTimerQuery::ms_initialized = 0;
  GPUTimerTree::ms_numSysOverhead = 0;
}

/*
==============
TimerTree::SortIdArray
==============
*/
void TimerTree::SortIdArray(TimerTree *this, GPUTimerId *pId, int numId)
{
  unsigned __int64 v3; 
  int v4; 
  GPUTimerId *v5; 
  int v7; 
  signed __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  GPUTimerId *v17; 
  unsigned __int64 i; 
  unsigned __int64 v19; 
  int v20; 
  signed __int64 v23; 
  int pArray[304]; 
  int scratchBuffer[304]; 
  int v26[304]; 

  v3 = 0i64;
  v4 = numId;
  v5 = pId;
  v7 = 0;
  v8 = numId;
  v20 = 0;
  v23 = numId;
  if ( numId > 0 )
  {
    v9 = 0i64;
    v10 = 0i64;
    do
    {
      if ( v10 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v11 = 0;
      pArray[v10] = 304;
      if ( this->m_flatNodes.m_size )
      {
        v12 = TimerTree::s_nodeSortIndices;
        while ( 1 )
        {
          v13 = *v12;
          if ( v13 >= this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v13 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          v14 = 9 * v13;
          v5 = pId;
          if ( *(_DWORD *)&this->m_flatNodes.m_data.m_buffer[8 * v14 + 28] == pId[v10] )
            break;
          ++v11;
          ++v12;
          if ( v11 >= this->m_flatNodes.m_size )
            goto LABEL_21;
        }
        if ( v10 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        pArray[v10] = v11;
        ++v7;
LABEL_21:
        v8 = v23;
      }
      if ( v10 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( pArray[v10] == 304 )
      {
        v15 = v5[v10];
        if ( v9 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        ++v20;
        v26[v9++] = v15;
      }
      v5 = pId;
      ++v10;
    }
    while ( (__int64)v10 < v8 );
    v4 = numId;
  }
  v16 = v4 - 1;
  if ( v4 - 1 > 0 )
  {
    Algo_MergeSort<int,304,enum AlgoCompareVal (*)(int const &,int const &)>(pArray, (int (*)[304])scratchBuffer, 0, v16 / 2, IdSortCallback);
    Algo_MergeSort<int,304,enum AlgoCompareVal (*)(int const &,int const &)>(pArray, (int (*)[304])scratchBuffer, v16 / 2 + 1, v16, IdSortCallback);
    Algo_Merge<int,304,enum AlgoCompareVal (*)(int const &,int const &)>(pArray, (int (*)[304])scratchBuffer, 0, v16 / 2, v16, IdSortCallback);
  }
  if ( v7 > 0 )
  {
    v17 = pId;
    for ( i = 0i64; (__int64)i < v7; ++i )
    {
      if ( i >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v19 = TimerTree::s_nodeSortIndices[*(int *)((char *)v17 + (char *)pArray - (char *)pId)];
      if ( v19 >= this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v19 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      *v17++ = *(GPUTimerId *)&this->m_flatNodes.m_data.m_buffer[72 * v19 + 28];
    }
    v3 = 0i64;
  }
  if ( v20 > 0 )
  {
    do
    {
      if ( v3 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      pId[v7 + v3] = v26[v3];
      ++v3;
    }
    while ( (__int64)v3 < v20 );
  }
}

/*
==============
TimerTree::UpdateTimeStamps
==============
*/
void TimerTree::UpdateTimeStamps(TimerTree *this)
{
  unsigned __int64 v2; 
  const char *Name; 
  unsigned int v4; 
  unsigned __int64 v5; 
  char *v6; 
  char v7; 
  int v8; 
  __int64 v9; 
  volatile unsigned __int64 *v10; 
  volatile unsigned __int64 *i; 
  volatile unsigned __int64 v12; 
  __int64 v13; 

  if ( this->m_nodeStack.m_size )
  {
    v2 = this->m_nodeStack.m_size - 1;
    if ( v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    Name = R_GPU_TimerGetName((GPUTimerId)*(_DWORD *)(*(_QWORD *)&this->m_nodeStack.m_data.m_buffer[8 * v2] + 28i64));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree.cpp", 354, ASSERT_TYPE_ASSERT, "(m_nodeStack.empty())", "%s\n\tTrying to update timestamps, yet there are nodes still on the stack (top one is %s). Missing a call to EndTimer?", "m_nodeStack.empty()", Name) )
      __debugbreak();
  }
  v4 = 0;
  if ( this->m_flatNodes.m_size )
  {
    v5 = 0i64;
    if ( !this->m_flatNodes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    do
    {
      if ( v5 >= 0x130 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v6 = &this->m_flatNodes.m_data.m_buffer[72 * v5];
      v7 = 0;
      v8 = 100000;
      v9 = (unsigned int)(2 * **(_DWORD **)v6);
      v10 = &g_dx.gpuTimerLables[v9];
      for ( i = &g_dx.gpuTimerLables[(unsigned int)(v9 + 1)]; *v10 > *i; v7 = 1 )
      {
        if ( --v8 <= 0 )
          break;
        Sleep(0);
      }
      v5 = ++v4;
      *((_QWORD *)v6 + 1) = *v10 / 0x64;
      v12 = *i;
      v13 = (*(unsigned __int64 *)i * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
      v6[24] = v7;
      *((_QWORD *)v6 + 2) = (v13 + ((v12 - v13) >> 1)) >> 6;
    }
    while ( v4 < this->m_flatNodes.m_size );
  }
}

