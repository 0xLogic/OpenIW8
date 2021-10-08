/*
==============
GPUTimerQuery::InitQueries
==============
*/

void GPUTimerQuery::InitQueries(void)
{
  ?InitQueries@GPUTimerQuery@@SAXXZ();
}

/*
==============
GPUTimerQuery::ResetQueries
==============
*/

void GPUTimerQuery::ResetQueries(void)
{
  ?ResetQueries@GPUTimerQuery@@SAXXZ();
}

/*
==============
GPUTimerQuery::AllocateQuery
==============
*/

GPUTimerQuery *__fastcall GPUTimerQuery::AllocateQuery()
{
  return ?AllocateQuery@GPUTimerQuery@@SAPEAV1@XZ();
}

/*
==============
GPUTimerQuery::AllocateQuery
==============
*/
GPUTimerQuery *GPUTimerQuery::AllocateQuery()
{
  __int64 v0; 
  ntl::fixed_array<GPUTimerQuery,768> *v1; 
  unsigned __int64 v2; 

  v0 = GPUTimerQuery::ms_queryBufferIndex;
  if ( GPUTimerQuery::ms_queryBufferIndex >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree_query_dx12.h", 109, ASSERT_TYPE_ASSERT, "(unsigned)( ms_queryBufferIndex ) < (unsigned)( 2 )", "ms_queryBufferIndex doesn't index 2\n\t%i not in [0, %i)", GPUTimerQuery::ms_queryBufferIndex, 2) )
      __debugbreak();
    v0 = GPUTimerQuery::ms_queryBufferIndex;
  }
  v1 = &GPUTimerQuery::ms_queries[v0];
  v2 = GPUTimerQuery::ms_nextFreeQueryIndex++;
  if ( v2 >= 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  return (GPUTimerQuery *)((char *)v1 + 4 * v2);
}

/*
==============
GPUTimerQuery::InitQueries
==============
*/
void GPUTimerQuery::InitQueries(void)
{
  unsigned int v0; 
  unsigned __int64 v1; 
  volatile unsigned __int64 *gpuTimerLables; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int m_queryIndex; 

  if ( GPUTimerQuery::ms_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_tree_query_dx12.h", 17, ASSERT_TYPE_ASSERT, "(!ms_initialized)", (const char *)&queryFormat, "!ms_initialized") )
    __debugbreak();
  GPUTimerQuery::ms_queryBufferIndex = 1;
  GPUTimerQuery::ms_nextFreeQueryIndex = 0;
  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( v1 >= 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    gpuTimerLables = g_dx.gpuTimerLables;
    v3 = 2 * v0;
    GPUTimerQuery::ms_queries[0].m_data[v1].m_queryIndex = v0;
    gpuTimerLables[v3] = 0i64;
    g_dx.gpuTimerLables[2 * GPUTimerQuery::ms_queries[0].m_data[v1].m_queryIndex + 1] = 0i64;
    if ( v1 >= 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v4 = v0 + 768;
    ++v0;
    GPUTimerQuery::ms_queries[1].m_data[v1].m_queryIndex = v4;
    g_dx.gpuTimerLables[(unsigned int)(v3 + 1536)] = 0i64;
    m_queryIndex = GPUTimerQuery::ms_queries[1].m_data[v1++].m_queryIndex;
    g_dx.gpuTimerLables[2 * m_queryIndex + 1] = 0i64;
  }
  while ( v0 < 0x300 );
  GPUTimerQuery::ms_fence[0] = 0i64;
  GPUTimerQuery::ms_fence[1] = 0i64;
  GPUTimerQuery::ms_initialized = 1;
}

/*
==============
GPUTimerQuery::ResetQueries
==============
*/
void GPUTimerQuery::ResetQueries(void)
{
  __int64 v0; 

  v0 = GPUTimerQuery::ms_queryBufferIndex;
  if ( GPUTimerQuery::ms_fence[GPUTimerQuery::ms_queryBufferIndex] )
  {
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
    if ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < GPUTimerQuery::ms_fence[v0] )
    {
      for ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence); g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < GPUTimerQuery::ms_fence[v0]; g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence) )
        Sys_Sleep(0);
    }
    LODWORD(v0) = GPUTimerQuery::ms_queryBufferIndex;
    GPUTimerQuery::ms_fence[GPUTimerQuery::ms_queryBufferIndex] = 0i64;
  }
  GPUTimerQuery::ms_nextFreeQueryIndex = 0;
  GPUTimerQuery::ms_queryBufferIndex = v0 ^ 1;
  GPUTimerQuery::ms_fence[(unsigned int)v0 ^ 1] = R_FlushImmediateContext();
}

