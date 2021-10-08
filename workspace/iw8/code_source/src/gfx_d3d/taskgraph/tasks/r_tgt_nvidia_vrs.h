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
  R_RT_Handle v34; 
  R_RT_ColorHandle v35; 
  R_RT_ColorHandle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_90], ymm1
    vmovups ymmword ptr [rbp+57h+var_B0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_90], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_90], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_30], ymm0
    vmovups ymmword ptr [rbp+57h+var_B0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_30], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_30], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+40h]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_50], ymm1
    vmovups ymmword ptr [rbp+57h+var_B0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_50], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_50], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_70], ymm0
    vmovups ymmword ptr [rbp+57h+var_B0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_70], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_B0.m_surfaceID]
        vmovups [rbp+57h+var_70], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, [rbp+57h+var_90]
    vmovups ymmword ptr [rbp+57h+var_B0.m_surfaceID], ymm0
  }
  R_VRS_UpdateConstants(computeState, viewInfo, (R_RT_ColorHandle *)&v34);
  __asm
  {
    vmovups ymm0, [rbp+57h+var_70]
    vmovups ymm1, [rbp+57h+var_50]
    vmovups [rbp+57h+var_70], ymm0
    vmovups ymm0, [rbp+57h+var_30]
    vmovups [rbp+57h+var_30], ymm0
    vmovups ymm0, [rbp+57h+var_90]
    vmovups [rbp+57h+var_90], ymm0
    vmovups [rbp+57h+var_50], ymm1
  }
  R_VRS_GenerateVRSMask(computeState, &v35, &v38, &v37, &v36);
}

