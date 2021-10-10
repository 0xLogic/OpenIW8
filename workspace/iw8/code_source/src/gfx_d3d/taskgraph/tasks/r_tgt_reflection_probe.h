/*
==============
RBT_RP_ProcessView
==============
*/

void __fastcall RBT_RP_ProcessView(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_RP_ProcessView@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_RP_ProcessView
==============
*/
void RBT_RP_ProcessView(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v8; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v11; 
  R_RT_Handle v12; 

  v8 = *taskInfo->attachments;
  v12 = v8;
  v11 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v8 = v11;
    }
    else
    {
      v8 = v11;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v12 = v8;
  Surface = R_RT_Handle::GetSurface(&v12);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_ExecuteReflectionProbeProcessViewComputeBuffer(computeState, viewInfo, data, (const GfxWrappedRWBuffer *)&Surface->1080);
  R_ReflectionProbe_CopyProbesToFrameCache(computeState, data);
}

