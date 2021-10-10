/*
==============
RBT_VRS_GenerateVRSMask
==============
*/

void __fastcall RBT_VRS_GenerateVRSMask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_VRS_GenerateVRSMask@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_VRS_GenerateVRSMask
==============
*/
void RBT_VRS_GenerateVRSMask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 

  v14 = *taskInfo->attachments;
  v13 = v14;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v14 = v13;
      __debugbreak();
    }
    else
    {
      v14 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = taskInfo->attachments[1];
  v13 = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = v13;
      __debugbreak();
    }
    else
    {
      v17 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v16 = taskInfo->attachments[2];
  v13 = v16;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v16 = v13;
      __debugbreak();
    }
    else
    {
      v16 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v15 = taskInfo->attachments[3];
  v13 = v15;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v15 = v13;
      __debugbreak();
    }
    else
    {
      v15 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v13 = v14;
  R_VRS_UpdateConstants(computeState, viewInfo, (R_RT_ColorHandle *)&v13);
  R_VRS_GenerateVRSMask(computeState, (R_RT_ColorHandle *)&v14, (R_RT_ColorHandle *)&v17, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v15);
}

