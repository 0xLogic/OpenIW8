/*
==============
R_HW_IsFencePending
==============
*/

int __fastcall R_HW_IsFencePending(const unsigned __int64 *fence)
{
  return ?R_HW_IsFencePending@@YAHPEB_K@Z(fence);
}

/*
==============
R_HW_WaitForFence
==============
*/

void __fastcall R_HW_WaitForFence(const unsigned __int64 *fence)
{
  ?R_HW_WaitForFence@@YAXPEB_K@Z(fence);
}

/*
==============
R_HW_IsFencePending
==============
*/
_BOOL8 R_HW_IsFencePending(const unsigned __int64 *fence)
{
  g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
  return g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < *fence;
}

/*
==============
R_HW_WaitForFence
==============
*/
void R_HW_WaitForFence(const unsigned __int64 *fence)
{
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
  if ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < *fence )
  {
    for ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence); g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < *fence; g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence) )
      Sys_Sleep(0);
  }
}

