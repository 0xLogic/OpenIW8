/*
==============
RBT_SpotShadow_Draw
==============
*/

void __fastcall RBT_SpotShadow_Draw(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_Draw@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
R_SpotShadow_BlurCommon
==============
*/

void __fastcall R_SpotShadow_BlurCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  ?R_SpotShadow_BlurCommon@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_BufferHandle@@44@Z(computeState, taskInfo, viewInfo, data, htileMask, htileMaskCounter, htileMaskIndirectArgs);
}

/*
==============
RBT_SpotShadow_Blur
==============
*/

void __fastcall RBT_SpotShadow_Blur(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_Blur@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_GenerateHTileMaskIndirectArgs
==============
*/

void __fastcall RBT_SpotShadow_GenerateHTileMaskIndirectArgs(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_GenerateHTileMaskIndirectArgs@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_GenerateHTileMaskTiles
==============
*/

void __fastcall RBT_SpotShadow_GenerateHTileMaskTiles(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_GenerateHTileMaskTiles@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_CopyHTile
==============
*/

void __fastcall RBT_SpotShadow_CopyHTile(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_CopyHTile@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RT_SpotShadow_DrawSetupStatics
==============
*/

void __fastcall RT_SpotShadow_DrawSetupStatics(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  ?RT_SpotShadow_DrawSetupStatics@@YAXPEBUGfxTaskInfo@@PEAUGfxViewInfo@@@Z(taskInfo, viewInfo);
}

/*
==============
RT_SpotShadow_DrawSetup
==============
*/

void __fastcall RT_SpotShadow_DrawSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  ?RT_SpotShadow_DrawSetup@@YAXPEBUGfxTaskInfo@@PEAUGfxViewInfo@@@Z(taskInfo, viewInfo);
}

/*
==============
R_SpotShadow_GetHTileCacheSliceSize
==============
*/

unsigned int __fastcall R_SpotShadow_GetHTileCacheSliceSize(unsigned int shadowMapWidth, unsigned int shadowMapHeight)
{
  return ?R_SpotShadow_GetHTileCacheSliceSize@@YAIII@Z(shadowMapWidth, shadowMapHeight);
}

/*
==============
RBT_SpotShadow_DownsampleMasked
==============
*/

void __fastcall RBT_SpotShadow_DownsampleMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_DownsampleMasked@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_DrawDynamics
==============
*/

void __fastcall RBT_SpotShadow_DrawDynamics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_DrawDynamics@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_ClearHTileMaskCounters
==============
*/

void __fastcall RBT_SpotShadow_ClearHTileMaskCounters(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_ClearHTileMaskCounters@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
R_SpotShadow_DownsampleCommon
==============
*/

void __fastcall R_SpotShadow_DownsampleCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_DepthHandle *activeCache, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  ?R_SpotShadow_DownsampleCommon@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_DepthHandle@@VR_RT_BufferHandle@@55@Z(computeState, taskInfo, viewInfo, data, activeCache, htileMask, htileMaskCounter, htileMaskIndirectArgs);
}

/*
==============
RBT_SpotShadow_DrawStatics
==============
*/

void __fastcall RBT_SpotShadow_DrawStatics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_DrawStatics@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_BlurMasked
==============
*/

void __fastcall RBT_SpotShadow_BlurMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_BlurMasked@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RT_SpotShadow_DrawSetupDynamics
==============
*/

void __fastcall RT_SpotShadow_DrawSetupDynamics(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  ?RT_SpotShadow_DrawSetupDynamics@@YAXPEBUGfxTaskInfo@@PEAUGfxViewInfo@@@Z(taskInfo, viewInfo);
}

/*
==============
RBT_SpotShadow_Downsample
==============
*/

void __fastcall RBT_SpotShadow_Downsample(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_SpotShadow_Downsample@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_SpotShadow_Blur
==============
*/
void RBT_SpotShadow_Blur(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_BufferHandle v10; 
  R_RT_BufferHandle v11; 
  R_RT_BufferHandle v12; 
  void *retaddr; 

  _R11 = &retaddr;
  v10.m_surfaceID = 0;
  v10.m_tracking.m_allocCounter = 0;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  v12.m_surfaceID = 0;
  v12.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0A8h+var_68+10h], xmm0
    vmovups ymm1, [rsp+0A8h+var_68]
    vmovdqu xmmword ptr [r11-18h], xmm0
    vmovdqu xmmword ptr [rsp+0A8h+var_48+10h], xmm0
    vmovups ymm0, [rsp+0A8h+var_48]
    vmovups [rsp+0A8h+var_68], ymm1
    vmovups ymm1, ymmword ptr [r11-28h]
    vmovups [rsp+0A8h+var_48], ymm0
    vmovups ymmword ptr [r11-28h], ymm1
  }
  R_SpotShadow_BlurCommon(computeState, taskInfo, viewInfo, data, &v12, &v11, &v10);
}

/*
==============
RBT_SpotShadow_BlurMasked
==============
*/
void RBT_SpotShadow_BlurMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v24; 
  R_RT_Handle v27; 
  R_RT_BufferHandle v28; 
  R_RT_BufferHandle v29; 
  R_RT_BufferHandle v30; 
  void *retaddr; 

  _R11 = &retaddr;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [r11-58h], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v27);
    if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_58], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_58], ymm0
      }
      __debugbreak();
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
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovd   eax, xmm1
    vmovups [rsp+0D8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v27);
    if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
      __debugbreak();
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
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v27);
    if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_38] }
      if ( v24 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_78]
    vmovups [rsp+0D8h+var_38], ymm0
    vmovups ymm0, [rsp+0D8h+var_58]
    vmovups [rsp+0D8h+var_78], ymm1
    vmovups [rsp+0D8h+var_58], ymm0
  }
  R_SpotShadow_BlurCommon(computeState, taskInfo, viewInfo, data, &v29, &v28, &v30);
}

/*
==============
RBT_SpotShadow_ClearHTileMaskCounters
==============
*/
void RBT_SpotShadow_ClearHTileMaskCounters(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const R_RT_Surface *Surface; 
  R_RT_Handle v10; 
  R_RT_Handle v11; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+78h+var_28.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v10);
    if ( (R_RT_Handle::GetSurface(&v10)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_28.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+78h+var_28.m_surfaceID], ymm0 }
  Surface = R_RT_Handle::GetSurface(&v11);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_ClearBuffer_Uint(computeState, (const GfxWrappedRWBuffer *)&Surface->1080, 0, 1, PIPE_FLUSH_NONE);
}

/*
==============
RBT_SpotShadow_CopyHTile
==============
*/
void RBT_SpotShadow_CopyHTile(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v14; 
  int v15; 
  int v16; 
  SpotComputerShaderIndex ComputeShaderIndex; 
  __int64 v20; 
  unsigned int v22; 
  int v23; 
  R_SpotShadow_ActiveCacheEntry *active; 
  unsigned int ArraySliceIndex; 
  int v26; 
  int v27; 
  int v28; 
  R_RT_Handle v29; 
  R_RT_Handle v30; 
  R_RT_Handle v31; 
  GfxShaderBufferRWView *views[4]; 
  GfxShaderBufferView v33; 
  GfxShaderBufferRWView v34; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+views], ymm0
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v30);
    if ( (R_RT_Handle::GetSurface(&v30)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+views], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+views], ymm0
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+views] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+57h+var_A0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v29);
    if ( (R_RT_Handle::GetSurface(&v29)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID] }
      if ( v14 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0 }
  v15 = R_RT_Handle::GetSurface(&v31)->m_image.m_base.width >> 3;
  v28 = v15;
  v16 = 4 * v15 * (R_RT_Handle::GetSurface(&v31)->m_image.m_base.height >> 3);
  if ( ((R_RT_Handle::GetSurface(&v31)->m_image.m_base.width & 7) != 0 || (R_RT_Handle::GetSurface(&v31)->m_image.m_base.height & 7) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 245, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0)", (const char *)&queryFormat, "dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0") )
    __debugbreak();
  if ( (R_RT_Handle::GetSurface(&v29)->m_image.m_base.format != GFX_PF_D16 || R_RT_Handle::GetSurface(&v31)->m_image.m_base.format != GFX_PF_D16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 246, ASSERT_TYPE_ASSERT, "(activeCache.GetFormat() == GFX_PF_D16 && dynamicDepth.GetFormat() == GFX_PF_D16)", "%s\n\tspotCopyHTileClearZPlanes shaders support only 16 bit depth", "activeCache.GetFormat() == GFX_PF_D16 && dynamicDepth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+views]
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  ComputeShaderIndex = R_SpotShadow_GetComputeShaderIndex((R_RT_DepthHandle *)&v29);
  __asm { vmovups ymm0, ymmword ptr [rbp+57h+views] }
  v20 = (unsigned int)ComputeShaderIndex;
  __asm { vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0 }
  R_RT_GetHtileRWView(&v34, (R_RT_DepthHandle *)&v29);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  R_RT_GetHtileView(&v33, (R_RT_DepthHandle *)&v29);
  views[0] = &v34;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = (GfxShaderBufferRWView *)&v33;
  R_SetComputeViews(computeState, 4, 1, (const GfxShaderBufferView *const *)views);
  R_SetComputeShader(computeState, rgp.spotCopyHTileClearZPlanes[v20]);
  v22 = 0;
  if ( data->spotShadowUpdateCount )
  {
    v23 = 0;
    do
    {
      if ( R_SpotShadow_ShouldUseHTileMask(&data->spotShadowUpdates[v22]) && data->spotShadowUpdates[v22].activeStatus )
      {
        active = data->spotShadowUpdates[v22].active;
        HIDWORD(views[0]) = v23;
        ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(active);
        LODWORD(views[1]) = v15;
        LODWORD(views[0]) = v16 * (ArraySliceIndex + 1);
        R_UploadAndSetComputeConstants(computeState, 0, views, 0x10u, NULL);
        v26 = R_RT_Handle::GetSurface(&v31)->m_image.m_base.height >> 3;
        v27 = R_RT_Handle::GetSurface(&v31)->m_image.m_base.width >> 3;
        if ( (!v27 || !v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
          __debugbreak();
        R_Dispatch(computeState, (unsigned int)(v27 + 7) >> 3, (unsigned int)(v26 + 7) >> 3, 1u);
        v15 = v28;
      }
      ++v22;
      v23 += v16;
    }
    while ( v22 < data->spotShadowUpdateCount );
  }
}

/*
==============
RBT_SpotShadow_Downsample
==============
*/
void RBT_SpotShadow_Downsample(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_BufferHandle v10; 
  R_RT_BufferHandle v11; 
  R_RT_BufferHandle v12; 
  R_RT_DepthHandle v13; 

  v10.m_surfaceID = 0;
  v10.m_tracking.m_allocCounter = 0;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  v12.m_surfaceID = 0;
  v12.m_tracking.m_allocCounter = 0;
  v13.m_surfaceID = 0;
  v13.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+57h+var_80+10h], xmm0
    vmovups ymm1, [rbp+57h+var_80]
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovdqu xmmword ptr [rbp+57h+var_60+10h], xmm0
    vmovdqu xmmword ptr [rbp+57h+var_20+10h], xmm0
    vmovups ymm0, [rbp+57h+var_60]
    vmovups [rbp+57h+var_80], ymm1
    vmovups ymm1, [rbp+57h+var_40]
    vmovups [rbp+57h+var_60], ymm0
    vmovups ymm0, [rbp+57h+var_20]
    vmovups [rbp+57h+var_40], ymm1
    vmovups [rbp+57h+var_20], ymm0
  }
  R_SpotShadow_DownsampleCommon(computeState, taskInfo, viewInfo, data, &v13, &v12, &v11, &v10);
}

/*
==============
RBT_SpotShadow_DownsampleMasked
==============
*/
void RBT_SpotShadow_DownsampleMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v28; 
  R_RT_Handle v32; 
  R_RT_BufferHandle v33; 
  R_RT_BufferHandle v34; 
  R_RT_DepthHandle v35; 
  R_RT_BufferHandle v36; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+40h]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_60], ymm1
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v32);
    if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_60], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_60], ymm0
      }
      __debugbreak();
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
    vmovups [rbp+57h+var_80], ymm0
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v32);
    if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_80], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_80], ymm0
      }
      __debugbreak();
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
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_A0], ymm1
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v32);
    if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_A0], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID]
        vmovups [rbp+57h+var_A0], ymm0
      }
      __debugbreak();
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
    vmovups ymm0, ymmword ptr [rax+0A0h]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_40], ymm0
    vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v32);
    if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+57h+var_40] }
      if ( v28 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups [rbp+57h+var_40], ymm0
    vmovups ymm0, [rbp+57h+var_80]
    vmovups [rbp+57h+var_A0], ymm1
    vmovups ymm1, [rbp+57h+var_60]
    vmovups [rbp+57h+var_80], ymm0
    vmovups [rbp+57h+var_60], ymm1
  }
  R_SpotShadow_DownsampleCommon(computeState, taskInfo, viewInfo, data, &v35, &v34, &v33, &v36);
}

/*
==============
RBT_SpotShadow_Draw
==============
*/
void RBT_SpotShadow_Draw(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v5; 
  bool v14; 
  int v15; 
  unsigned int spotShadowUpdateCount; 
  bool v22; 
  unsigned int v23; 
  bool v29; 
  __int64 v40; 
  unsigned int v41; 
  const GfxViewInfo *v42; 
  GfxCmdBufState *state; 
  GfxDrawListType v44; 
  __int64 v45; 
  const char *v46; 
  __int64 sceneLightIndex; 
  unsigned int primaryLightCount; 
  const char *v49; 
  GfxDrawListType v50; 
  const dvar_t *v56; 
  R_RT_Handle v57; 
  R_RT_Handle v58; 
  const GfxViewInfo *v59; 
  R_RT_Handle v61; 
  char v62; 
  __int64 v64; 
  R_RT_Handle v65; 
  _QWORD rtGroup[1174]; 

  v5 = r_flushCommandListsAt_Flags;
  v59 = viewInfo;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups [rbp+25B0h+var_2628], ymm0
    vmovups ymmword ptr [rsp+26B0h+var_2670.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
      LODWORD(_RDI) = v57.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v57.m_surfaceID;
      __asm { vmovups [rbp+25B0h+var_2628], ymm0 }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
      LODWORD(_RDI) = v57.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v57.m_surfaceID;
      __asm { vmovups [rbp+25B0h+var_2628], ymm0 }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      __asm { vmovups ymm0, [rbp+25B0h+var_2628] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0 }
  if ( !(_WORD)_EBX )
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_22;
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
    goto LABEL_20;
  }
  R_RT_Handle::GetSurface(&v58);
  v15 = *(_DWORD *)&viewInfo->spotshadowActiveCache.m_surfaceID;
  if ( !(_WORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  if ( (((unsigned __int16)_EBX ^ (unsigned __int16)v15) & 0x7FFF) != 0 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 96, ASSERT_TYPE_ASSERT, "(!cacheRt.IsValid() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex())", (const char *)&queryFormat, "!cacheRt.IsValid() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex()");
LABEL_20:
    if ( v14 )
      __debugbreak();
  }
LABEL_22:
  _R14 = &taskInfo->rtGroup.m_depthRt;
  if ( R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 98, ASSERT_TYPE_ASSERT, "(taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount < R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements )
  {
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0
      }
      _RAX = R_RT_GetViewInternal(&v61, &v58, spotShadowUpdateCount, -1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+26B0h+var_2670.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2650.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2650.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
          if ( v22 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+25B0h+var_2520.m_surfaceID], ymm0 }
      R_RT_Handle::ClearAuxDirty(&v65);
      ++spotShadowUpdateCount;
    }
    while ( spotShadowUpdateCount < R_RT_Handle::GetSurface(_R14)->m_image.m_base.numElements );
  }
  v23 = 0;
  if ( data->spotShadowUpdateCount )
  {
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups ymmword ptr [rbp+25B0h+var_2520.m_surfaceID], ymm0
      }
      _RAX = R_RT_GetViewInternal(&v61, &v65, v23, -1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   edi, xmm0
        vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+26B0h+var_2670.m_surfaceID], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v57);
        if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
          LODWORD(_RBX) = v57.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v57.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0 }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
          LODWORD(_RBX) = v57.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v57.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0 }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2650.m_surfaceID] }
          if ( v29 )
            __debugbreak();
        }
      }
      _RAX = 32i64 * v23;
      __asm
      {
        vmovups ymmword ptr [rsp+26B0h+var_2670.m_surfaceID], ymm0
        vmovups [rbp+rax+25B0h+var_150], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v57);
        __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2670.m_surfaceID] }
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rsp+26B0h+var_2650.m_surfaceID] }
      }
      _RCX = rtGroup;
      v62 = 0;
      __asm { vmovups [rbp+25B0h+var_2560], ymm0 }
      _RAX = &v62;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymm0, ymmword ptr [rax+80h]
        vmovups ymmword ptr [rcx+80h], ymm0
        vmovups ymm0, ymmword ptr [rax+0A0h]
      }
      v40 = v64;
      __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
      rtGroup[24] = v40;
      R_ClearRtGroup(gfxContext->state, (const R_RT_Group *)rtGroup, 0x10u, 0, (PipeFlushMode)((v23 != data->spotShadowUpdateCount - 1) + 1));
      v41 = data->spotShadowUpdateCount;
      ++v23;
    }
    while ( v23 < v41 );
    v42 = v59;
    if ( v41 )
    {
      state = gfxContext->state;
      v44 = DRAWLIST_SPOTSHADOW_0_DYNAMIC;
      do
      {
        v45 = (unsigned int)(v44 - 37);
        v46 = "PrimaryLight";
        sceneLightIndex = data->spotShadowUpdates[v45].sceneLightIndex;
        primaryLightCount = rgp.world->primaryLightCount;
        if ( (unsigned int)sceneLightIndex > primaryLightCount )
          v46 = "DynLight";
        if ( (unsigned int)sceneLightIndex > primaryLightCount )
          sceneLightIndex = data->spotShadowUpdates[v45].sceneLightIndex - primaryLightCount;
        v49 = j_va("%s(%d) shadowmap", v46, sceneLightIndex, "DynLight");
        R_ProfBeginNamedEvent(state, v49);
        v50 = v44 - 8;
        if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v44 - 8)) )
        {
          R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
          R_ProfBeginDrawListImmediate(v50);
          R_GPU_BeginRunDrawListTimer(v50);
          __asm
          {
            vmovups ymm0, [rbp+25B0h+var_2628]
            vmovups ymmword ptr [rbp+25B0h+var_2520.m_surfaceID], ymm0
          }
          _RAX = 32i64 * (unsigned int)v45;
          __asm
          {
            vmovups ymm0, [rbp+rax+25B0h+var_150]
            vmovups ymmword ptr [rsp+26B0h+var_2650.m_surfaceID], ymm0
          }
          R_DrawSpotShadowMapStatics(v42, &v42->drawList[v50], v50, (R_RT_DepthHandle *)&v58, (R_RT_DepthHandle *)&v65, v44 - 37, (GfxDrawCallOutput *)rtGroup, 0);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        if ( R_RunDrawListCommandBuffer(data, v44) )
        {
          R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
          R_ProfBeginDrawListImmediate(v44);
          R_GPU_BeginRunDrawListTimer(v44);
          _RSI = 32 * v45;
          __asm
          {
            vmovups ymm0, [rbp+rsi+25B0h+var_150]
            vmovups ymmword ptr [rbp+25B0h+var_2520.m_surfaceID], ymm0
          }
          R_DrawSpotShadowMapDynamics(v42, &v42->drawList[v44], v44, (R_RT_DepthHandle *)&v65, v44 - 37, (GfxDrawCallOutput *)rtGroup, 0);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        R_ProfEndNamedEvent(state);
        ++v44;
      }
      while ( v44 - 37 < data->spotShadowUpdateCount );
    }
  }
  v56 = r_flushCommandListsAt_Flags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
}

/*
==============
RBT_SpotShadow_DrawDynamics
==============
*/
void RBT_SpotShadow_DrawDynamics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxDrawListType v8; 
  bool v13; 
  const dvar_t *v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  GfxDrawCallOutput drawOutput; 

  _R14 = taskInfo;
  if ( data->spotShadowUpdateCount )
  {
    v8 = DRAWLIST_SPOTSHADOW_0_DYNAMIC;
    do
    {
      if ( R_RunDrawListCommandBuffer(data, v8) )
      {
        R_InitDrawCallOutput(data, &drawOutput);
        R_ProfBeginDrawListImmediate(v8);
        R_GPU_BeginRunDrawListTimer(v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [r14+0B8h]
          vmovups [rsp+2498h+var_2458], ymm0
        }
        _RAX = R_RT_GetViewInternal(&v17, &v15, v8 - 37, -1);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   eax, xmm0
          vmovups [rsp+2498h+var_2458], ymm0
          vmovups ymmword ptr [rsp+2498h+var_2438.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v16);
          if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+2498h+var_2438.m_surfaceID] }
          }
          else
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+2498h+var_2438.m_surfaceID] }
            __debugbreak();
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, [rsp+2498h+var_2458] }
            if ( v13 )
              __debugbreak();
          }
        }
        __asm { vmovups [rsp+2498h+var_2458], ymm0 }
        R_DrawSpotShadowMapDynamics(viewInfo, &viewInfo->drawList[v8], v8, (R_RT_DepthHandle *)&v15, v8 - 37, &drawOutput, 1);
        R_GPU_EndTimer();
        R_ProfEndDrawListImmediate();
      }
      ++v8;
    }
    while ( v8 - 37 < data->spotShadowUpdateCount );
  }
  v14 = r_flushCommandListsAt_Flags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
}

/*
==============
RBT_SpotShadow_DrawStatics
==============
*/
void RBT_SpotShadow_DrawStatics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v6; 
  const GfxViewInfo *v8; 
  __int16 v14; 
  int v15; 
  unsigned int spotShadowUpdateCount; 
  bool v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  bool v30; 
  __int64 v41; 
  __int64 v56; 
  const R_RT_Surface *Surface; 
  unsigned int height; 
  const R_RT_Surface *v59; 
  CmdBufState *v62; 
  GfxDescriptorState *descState; 
  GfxDevice *device; 
  __int64 v77; 
  GfxDrawListType v80; 
  bool spotshadowHTileMask; 
  GfxViewport v85; 
  R_RT_Handle v86; 
  int v87; 
  R_RT_Handle v88; 
  const GfxViewInfo *v89; 
  __m256i v90; 
  R_RT_Handle v91; 
  char v92[136]; 
  __m256i v93; 
  __int16 v94; 
  int v95; 
  __int128 v96; 
  R_RT_Handle v97; 
  R_RT_Handle v98; 
  _QWORD rtGroup[1174]; 

  v6 = r_flushCommandListsAt_Flags;
  v8 = viewInfo;
  v89 = viewInfo;
  *(_QWORD *)&v85.x = gfxContext;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+2610h+var_2668], ymm0
    vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v86);
    if ( (R_RT_Handle::GetSurface(&v86)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID]
        vmovups [rbp+2610h+var_2668], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID]
        vmovups [rbp+2610h+var_2668], ymm0
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rbp+2610h+var_2668] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _R15 = &taskInfo->rtGroup.m_depthRt;
  __asm { vmovups ymmword ptr [rbp+2610h+var_2640.m_surfaceID], ymm0 }
  if ( R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 179, ASSERT_TYPE_ASSERT, "(taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  v14 = v90.m256i_i16[0];
  v87 = v90.m256i_i32[0];
  if ( v90.m256i_i16[0] )
  {
    v15 = *(_DWORD *)&v8->spotshadowActiveCache.m_surfaceID;
    if ( !(_WORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    if ( (((unsigned __int16)v15 ^ (unsigned __int16)v14) & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 180, ASSERT_TYPE_ASSERT, "(cacheRt.IsNull() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex())", (const char *)&queryFormat, "cacheRt.IsNull() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex()") )
      __debugbreak();
  }
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount < R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements )
  {
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0
      }
      _RAX = R_RT_GetViewInternal(&v97, &v86, spotShadowUpdateCount, -1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+2610h+var_2690.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v86);
        if ( (R_RT_Handle::GetSurface(&v86)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+2610h+var_2690.m_surfaceID] }
          if ( v21 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0 }
      R_RT_Handle::ClearAuxDirty(&v98);
      ++spotShadowUpdateCount;
    }
    while ( spotShadowUpdateCount < R_RT_Handle::GetSurface(_R15)->m_image.m_base.numElements );
    v8 = v89;
  }
  v22 = data->spotShadowUpdateCount;
  v23 = 0;
  if ( v22 )
  {
    v24 = *(_QWORD *)&v85.x;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0
      }
      _RAX = R_RT_GetViewInternal(&v97, &v98, v23, -1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   edi, xmm0
        vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+2610h+var_2690.m_surfaceID], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v88);
        if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+2610h+var_2690.m_surfaceID] }
          LODWORD(_RBX) = v88.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v88.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0 }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+2610h+var_2690.m_surfaceID] }
          LODWORD(_RBX) = v88.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v88.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0 }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID] }
          if ( v30 )
            __debugbreak();
        }
      }
      _RAX = 32i64 * v23;
      __asm
      {
        vmovups ymmword ptr [rbp+2610h+var_2690.m_surfaceID], ymm0
        vmovups [rbp+rax+2610h+var_160], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v88);
        __asm { vmovups ymm0, ymmword ptr [rbp+2610h+var_2690.m_surfaceID] }
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID] }
      }
      _RCX = rtGroup;
      v92[0] = 0;
      __asm { vmovups [rbp+2610h+var_2598], ymm0 }
      _RAX = v92;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymm0, ymmword ptr [rax+80h]
        vmovups ymmword ptr [rcx+80h], ymm0
        vmovups ymm0, ymmword ptr [rax+0A0h]
      }
      v41 = *((_QWORD *)&v96 + 1);
      __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
      rtGroup[24] = v41;
      R_ClearRtGroup(*(GfxCmdBufState **)(v24 + 8), (const R_RT_Group *)rtGroup, 0x10u, 0, (PipeFlushMode)((v23 != data->spotShadowUpdateCount - 1) + 1));
      v22 = data->spotShadowUpdateCount;
      ++v23;
    }
    while ( v23 < v22 );
    v8 = v89;
    v14 = v87;
  }
  if ( !v8->taskGraphViewInfo.frameCount )
  {
    __asm { vmovups ymm0, [rbp+2610h+var_2668] }
    _R14 = *(_QWORD *)&v85.x;
    __asm
    {
      vmovaps [rsp+2710h+var_50], xmm6
      vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(*(CmdBufState **)(*(_QWORD *)&v85.x + 8i64), &v98, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(*(CmdBufState **)(*(_QWORD *)&v85.x + 8i64));
    __asm
    {
      vmovups ymm0, [rbp+2610h+var_2668]
      vmovups xmm6, xmmword ptr [r14]
      vmovups ymmword ptr [rsp+2710h+var_26C0.m_surfaceID], ymm0
    }
    if ( v14 )
    {
      R_RT_Handle::GetSurface(&v86);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+2710h+var_26C0.m_surfaceID]
      vmovups [rbp+2610h+var_2598], ymm0
    }
    _RCX = rtGroup;
    v92[0] = 0;
    _RAX = v92;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v56 = *((_QWORD *)&v96 + 1);
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    rtGroup[24] = v56;
    __asm { vmovdqa [rsp+2710h+var_26D0], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v85, (const R_RT_Group *)rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp(202)");
    Surface = R_RT_Handle::GetSurface(&v91);
    *(_QWORD *)&v85.x = 0i64;
    height = Surface->m_image.m_base.height;
    v59 = R_RT_Handle::GetSurface(&v91);
    v85.height = height;
    v85.width = v59->m_image.m_base.width;
    __asm { vmovups xmm6, [rsp+2710h+var_26D0] }
    _RDI = R_RT_Handle::GetSurface(&v91);
    if ( (_RDI->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
      __debugbreak();
    v62 = *(CmdBufState **)(_R14 + 8);
    __asm
    {
      vmovups ymm0, [rbp+2610h+var_2668]
      vmovss  xmm3, dword ptr [rdi+8E0h]
    }
    descState = v62->descState;
    device = v62->device;
    __asm
    {
      vmovups [rsp+2710h+var_26D0], xmm6
      vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0
    }
    R_HW_ClearDepthViewport(device, descState, (R_RT_DepthHandle *)&v98, *(float *)&_XMM3, &v85);
    __asm
    {
      vmovups ymm0, [rbp+2610h+var_2668]
      vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(v62, &v98, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0x400000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v62);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+2610h+var_2598+10h], xmm0
      vmovdqu [rbp+2610h+var_2568], xmm0
    }
    _RCX = rtGroup;
    v92[0] = 0;
    _RAX = v92;
    v93.m256i_i16[0] = 0;
    v93.m256i_i32[2] = 0;
    v94 = 0;
    v95 = 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v77 = *((_QWORD *)&v96 + 1);
    __asm
    {
      vmovups ymmword ptr [rcx+0A0h], ymm0
      vmovups xmm0, xmmword ptr [r14]
    }
    rtGroup[24] = v77;
    __asm { vmovups [rsp+2710h+var_26D0], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v85, (const R_RT_Group *)rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp(210)");
    v22 = data->spotShadowUpdateCount;
    __asm { vmovaps xmm6, [rsp+2710h+var_50] }
  }
  if ( v22 )
  {
    v80 = DRAWLIST_SPOTSHADOW_FIRST;
    do
    {
      if ( R_RunDrawListCommandBuffer(data, v80) )
      {
        R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
        R_ProfBeginDrawListImmediate(v80);
        R_GPU_BeginRunDrawListTimer(v80);
        __asm
        {
          vmovups ymm0, [rbp+2610h+var_2668]
          vmovups ymmword ptr [rbp+2610h+var_2530.m_surfaceID], ymm0
        }
        _RCX = 32i64 * (unsigned int)(v80 - 29);
        __asm { vmovups ymm0, [rbp+rcx+2610h+var_160] }
        spotshadowHTileMask = v8->spotshadowHTileMask;
        __asm { vmovups ymmword ptr [rbp+2610h+var_2640.m_surfaceID], ymm0 }
        R_DrawSpotShadowMapStatics(v8, &v8->drawList[v80], v80, (R_RT_DepthHandle *)&v91, (R_RT_DepthHandle *)&v98, v80 - 29, (GfxDrawCallOutput *)rtGroup, spotshadowHTileMask);
        R_GPU_EndTimer();
        R_ProfEndDrawListImmediate();
      }
      ++v80;
    }
    while ( v80 - 29 < data->spotShadowUpdateCount );
  }
}

/*
==============
RBT_SpotShadow_GenerateHTileMaskIndirectArgs
==============
*/
void RBT_SpotShadow_GenerateHTileMaskIndirectArgs(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v13; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  GfxShaderBufferRWView *views; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rsp+0A8h+var_38.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID] }
      if ( v13 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0 }
  Surface = R_RT_Handle::GetSurface(&v18);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = &Surface->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v15 = R_RT_Handle::GetSurface(&v17);
  if ( (v15->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferRWView *)&v15->m_array.m_handles[0].m_tracking;
  R_SetComputeViews(computeState, 7, 1, (const GfxShaderBufferView *const *)&views);
  R_SetComputeShader(computeState, rgp.spotHTileMaskIndirectArgs);
  R_Dispatch(computeState, 1u, 1u, 1u);
}

/*
==============
RBT_SpotShadow_GenerateHTileMaskTiles
==============
*/
void RBT_SpotShadow_GenerateHTileMaskTiles(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v14; 
  bool v18; 
  bool v22; 
  bool v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  base_vec2_t<unsigned int> HTileCacheSliceSize2D; 
  base_vec2_t<unsigned int> v32; 
  unsigned int v33; 
  const R_RT_Surface *v34; 
  base_vec2_t<unsigned int> v35; 
  SpotComputerShaderIndex ComputeShaderIndex; 
  const R_RT_Surface *v38; 
  const R_RT_Surface *v39; 
  const R_RT_Surface *v40; 
  GfxShaderBufferRWView *p_rwView; 
  int v42; 
  __int64 v44; 
  unsigned int v45; 
  int v48; 
  const GfxSpotShadowUpdate *v49; 
  bool v50; 
  unsigned int ArraySliceIndex; 
  unsigned int activeStatus; 
  const dvar_t *v53; 
  int v54; 
  R_SpotShadow_StaleCacheEntry *stale; 
  unsigned int maskedUpdateCount; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned __int64 v74; 
  char v75; 
  char v76; 
  unsigned __int64 v77; 
  unsigned int i; 
  __int64 v79; 
  __int64 v80; 
  ComputeCmdBufState *v81; 
  __int64 v85; 
  char *fmt; 
  _BYTE v87[2608]; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBP = (unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(_RBP + 2560) = (unsigned __int64)&v85 ^ _security_cookie;
  _RAX = taskInfo->attachments;
  *(_QWORD *)(_RBP + 80) = data;
  *(_QWORD *)(_RBP + 144) = computeState;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+98h], ymm0
    vmovups ymmword ptr [rbp+100h], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+100h]
        vmovups ymmword ptr [rbp+98h], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+100h]
        vmovups ymmword ptr [rbp+98h], ymm0
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+98h] }
      if ( v14 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmovups ymmword ptr [rbp+20h], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+60h] }
      if ( v18 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0E0h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmovups ymmword ptr [rbp+20h], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+60h] }
      if ( v22 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmovups ymmword ptr [rbp+20h], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+20h] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+60h] }
      if ( v26 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+20h], ymm0 }
  v27 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.width >> 3;
  *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x40) = v27;
  v28 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.height >> 3;
  *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x44) = v28;
  height = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256));
  HTileCacheSliceSize2D = R_SpotShadow_GetHTileCacheSliceSize2D(Surface->m_image.m_base.width, height);
  *(base_vec2_t<unsigned int> *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x88) = HTileCacheSliceSize2D;
  v32 = HTileCacheSliceSize2D;
  v33 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.height;
  v34 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256));
  v35 = R_SpotShadow_GetHTileCacheSliceSize2D(v34->m_image.m_base.width, v33);
  *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) = v35.v[0] * v35.v[1];
  if ( (v27 > 0x80 || v28 > 0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 354, ASSERT_TYPE_ASSERT, "(htileWidth <= SPOT_MAX_HTILE_DIM && htileHeight <= SPOT_MAX_HTILE_DIM)", (const char *)&queryFormat, "htileWidth <= SPOT_MAX_HTILE_DIM && htileHeight <= SPOT_MAX_HTILE_DIM") )
    __debugbreak();
  if ( ((R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.width & 7) != 0 || (R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.height & 7) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 355, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0)", (const char *)&queryFormat, "dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0") )
    __debugbreak();
  if ( R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 256))->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 356, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetFormat() == GFX_PF_D16)", "%s\n\tspotHtileMask shaders support only 16 bit depth", "dynamicDepth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+98h]
    vmovups ymmword ptr [rbp+60h], ymm0
  }
  ComputeShaderIndex = R_SpotShadow_GetComputeShaderIndex((R_RT_DepthHandle *)(_RBP + 96));
  R_SetComputeShader(computeState, rgp.spotHTileMask[ComputeShaderIndex]);
  v38 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 224));
  if ( (v38->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  fmt = NULL;
  *(_QWORD *)_RBP = &v38->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64), (const unsigned int *)fmt);
  v39 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 32));
  if ( (v39->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  fmt = NULL;
  *(_QWORD *)_RBP = &v39->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64), (const unsigned int *)fmt);
  v40 = R_RT_Handle::GetSurface((R_RT_Handle *)(_RBP + 192));
  if ( (v40->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  p_rwView = &v40->m_buffer.m_wrappedBuffer.rwView;
  v42 = 0;
  *(_QWORD *)_RBP = p_rwView;
  R_SetComputeRWViewsWithCounters(computeState, 3, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64), NULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+98h]
    vmovups ymmword ptr [rbp+0C0h], ymm0
  }
  *(_QWORD *)_RBP = R_RT_GetHtileView((GfxShaderBufferView *)(_RBP + 256), (R_RT_DepthHandle *)(_RBP + 192));
  R_SetComputeViews(computeState, 5, 1, (const GfxShaderBufferView *const *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64));
  v44 = *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x50);
  v45 = 0;
  *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x14) = 0;
  if ( *(_DWORD *)(v44 + 954032) )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3e000000
      vmovss  xmm7, cs:__real@3f800000
    }
    *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x18) = 0;
    v48 = 0;
    *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C) = 0;
    *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x48) = 4 * v27 * v28;
    *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x4C) = 8 * v27 * v28;
    do
    {
      v49 = (const GfxSpotShadowUpdate *)(16832i64 * v45 + v44 + 954048);
      *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = v49;
      if ( R_SpotShadow_ShouldUseHTileMask(v49) )
      {
        memset_0((void *)(_RBP + 384), 0, 0x830ui64);
        v50 = v49->activeStatus == 0;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x18C) = 8 * v45;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = v48;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = v42;
        if ( v50 )
        {
          *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = -1;
          activeStatus = 0;
        }
        else
        {
          ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(v49->active);
          activeStatus = v49->activeStatus;
          *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = 4 * *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) * (ArraySliceIndex >> 1);
        }
        v53 = DCONST_DVARBOOL_sm_spotHTileMaskCache;
        *(_DWORD *)_RBP = v27;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 4) = v28;
        *(base_vec2_t<unsigned int> *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = v32;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = activeStatus >= 3;
        *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0) = *(_QWORD *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64);
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotHTileMaskCache") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v53);
        v54 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x194);
        stale = v49->stale;
        if ( !v53->current.enabled )
          v54 = 0;
        *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v54;
        if ( stale )
        {
          maskedUpdateCount = stale->maskedUpdateCount;
          if ( !maskedUpdateCount )
          {
            *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = 0;
            maskedUpdateCount = stale->maskedUpdateCount;
          }
          stale->maskedUpdateCount = maskedUpdateCount + 1;
        }
        if ( v49->activeStatus == 3 )
        {
          if ( v27 != 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 401, ASSERT_TYPE_ASSERT, "(htileWidth == 128)", "%s\n\tSpotshadow map size has changed, need to readjust optimized static cpu-htile generation.", "htileWidth == 128") )
            __debugbreak();
          v57 = 0;
          *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 8) = 0;
          if ( v49->smodelsChangedCount )
          {
            v58 = v27 - 1;
            v59 = v28 - 1;
            *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x10) = v27 - 1;
            *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0xC) = v28 - 1;
            do
            {
              v60 = v58;
              v61 = v58;
              v62 = v59;
              v63 = v59;
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rcx]
                vcvttss2si rax, xmm1
                vaddss  xmm1, xmm7, dword ptr [rcx+4]
                vmulss  xmm2, xmm1, xmm6
                vmulss  xmm1, xmm6, dword ptr [rcx+8]
              }
              if ( v58 > (unsigned int)_RAX )
                v60 = _RAX;
              __asm { vcvttss2si rax, xmm2 }
              if ( v58 > (unsigned int)_RAX )
                v61 = _RAX;
              __asm
              {
                vcvttss2si rax, xmm1
                vaddss  xmm1, xmm7, dword ptr [rcx+0Ch]
                vmulss  xmm2, xmm1, xmm6
              }
              if ( v59 > (unsigned int)_RAX )
                v62 = _RAX;
              __asm { vcvttss2si rax, xmm2 }
              if ( v59 > (unsigned int)_RAX )
                v63 = _RAX;
              if ( v60 < 0x40 )
              {
                v75 = 63;
                if ( v61 < 0x3F )
                  v75 = v61;
                v74 = 0xFFFFFFFFFFFFFFFFui64 >> ((unsigned __int8)v60 - v75 + 63) << v60;
              }
              else
              {
                v74 = 0i64;
              }
              v76 = 64;
              if ( v60 > 0x40 )
                v76 = v60;
              if ( v61 >= 0x40 )
                v77 = 0xFFFFFFFFFFFFFFFFui64 >> (v76 - (unsigned __int8)v61 + 63) << (v76 - 64);
              else
                v77 = 0i64;
              if ( v61 - v60 + 1 != (unsigned int)__popcnt(v74) + (unsigned int)__popcnt(v77) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 418, ASSERT_TYPE_ASSERT, "(maxX - minX + 1u == (uint)CountBitsEnabled64( qword1 ) + (uint)CountBitsEnabled64( qword2 ))", "%s\n\tEncountered error during static cpu-htile bitmask calculation.", "maxX - minX + 1u == (uint)CountBitsEnabled64( qword1 ) + (uint)CountBitsEnabled64( qword2 )") )
                  __debugbreak();
                v58 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
                v59 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0xC);
                v57 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 8);
              }
              for ( i = v62; i <= v63; *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 8 * v79 + 0x1B8) |= v77 )
              {
                v79 = i++;
                v79 *= 2i64;
                *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 8 * v79 + 0x1B0) |= v74;
              }
              if ( !v60 && !v62 && v61 == v58 && v63 == v59 )
                break;
              v80 = *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x100);
              *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 8) = ++v57;
            }
            while ( v57 < *(_DWORD *)(v80 + 444) );
            v32 = *(base_vec2_t<unsigned int> *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x88);
            v27 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x40);
            v45 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x14);
            v28 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x44);
            v48 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x18);
          }
        }
        fmt = NULL;
        v81 = *(ComputeCmdBufState **)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x90);
        R_UploadAndSetComputeConstants(v81, 0, (const void *)(_RBP + 384), 0x830u, NULL);
        if ( (!v27 || !v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
          __debugbreak();
        R_Dispatch(v81, (v27 + 13) / 0xE, (v28 + 13) / 0xE, 1u);
        v42 = *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C);
      }
      v48 += *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x48);
      ++v45;
      v42 += *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x4C);
      v44 = *(_QWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x50);
      *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x14) = v45;
      *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x18) = v48;
      *(_DWORD *)(((unsigned __int64)v87 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C) = v42;
    }
    while ( v45 < *(_DWORD *)(v44 + 954032) );
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RT_SpotShadow_DrawSetup
==============
*/
void RT_SpotShadow_DrawSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  GfxBackEndData *v4; 
  unsigned int i; 

  RT_SpotShadow_DrawSetupStatics(taskInfo, viewInfo);
  v4 = frontEndDataOut;
  for ( i = 0; i < v4->spotShadowUpdateCount; ++i )
  {
    if ( v4->spotShadowUpdates[i].needsDynamicShadows )
    {
      R_AddDrawCall(viewInfo, &taskInfo->rtGroup, (GfxDrawListType)(i + 37), 0x5Du);
      v4 = frontEndDataOut;
    }
  }
}

/*
==============
RT_SpotShadow_DrawSetupDynamics
==============
*/
void RT_SpotShadow_DrawSetupDynamics(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  GfxBackEndData *v2; 
  unsigned int i; 

  v2 = frontEndDataOut;
  for ( i = 0; i < v2->spotShadowUpdateCount; ++i )
  {
    if ( v2->spotShadowUpdates[i].needsDynamicShadows )
    {
      R_AddDrawCall(viewInfo, &taskInfo->rtGroup, (GfxDrawListType)(i + 37), 0x5Du);
      v2 = frontEndDataOut;
    }
  }
}

/*
==============
RT_SpotShadow_DrawSetupStatics
==============
*/
void RT_SpotShadow_DrawSetupStatics(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  bool v9; 
  bool v17; 
  unsigned int v18; 
  R_RT_Handle v20; 

  _RAX = taskInfo->attachments;
  _RDI = viewInfo;
  _RBP = taskInfo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   esi, xmm0
    vmovups [rsp+88h+var_38], ymm0
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  if ( (_WORD)_ESI )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+88h+var_58.m_surfaceID] }
      LODWORD(_RBX) = v20.m_tracking.m_allocCounter;
      LOWORD(_ESI) = v20.m_surfaceID;
      __asm { vmovups [rsp+88h+var_38], ymm0 }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+88h+var_58.m_surfaceID] }
      LODWORD(_RBX) = v20.m_tracking.m_allocCounter;
      LOWORD(_ESI) = v20.m_surfaceID;
      __asm { vmovups [rsp+88h+var_38], ymm0 }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX )
    {
      __asm { vmovups ymm0, [rsp+88h+var_38] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v9 = _RDI->taskGraphViewInfo.frameCount == 0;
  __asm { vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0 }
  if ( v9 )
  {
    R_SpotShadow_UpdateDynamicMesh();
    R_SpotShadow_FlushStaleCache();
    if ( (_WORD)_ESI )
    {
      R_RT_Handle::GetSurface(&v20);
      R_SpotShadow_FlushActiveCache();
    }
    else if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v20.m_surfaceID, *(_QWORD *)&v20.m_tracking.m_allocCounter, v20.m_tracking.m_name, v20.m_tracking.m_location) )
    {
      __debugbreak();
    }
  }
  _RAX = _RBP->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  R_SetInputCodeBuffer(&_RDI->input, 6u, &v20);
  _RAX = _RBP->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  R_SetInputCodeBuffer(&_RDI->input, 9u, &v20);
  _RAX = _RBP->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  R_SetInputCodePersistentBuffer(&_RDI->input, 0x17u, &v20);
  __asm
  {
    vmovups ymm0, [rsp+88h+var_38]
    vmovups ymmword ptr [rdi+6420h], ymm0
  }
  v17 = sm_spotHTileMask->current.enabled && !rg.splitScreen;
  _RDI->spotshadowHTileMask = v17;
  v18 = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0B8h]
    vmovups ymmword ptr [rdi+3D48h], ymm0
  }
  _RDI->taskGraphViewInfo.compressedSubresourceCount = frontEndDataOut->spotShadowUpdateCount;
  if ( frontEndDataOut->spotShadowUpdateCount )
  {
    do
    {
      R_AddDrawCall(_RDI, &_RBP->rtGroup, (GfxDrawListType)(v18 + 29), 0x5Du);
      ++v18;
    }
    while ( v18 < frontEndDataOut->spotShadowUpdateCount );
  }
}

/*
==============
R_SpotShadow_BlurCommon
==============
*/
void R_SpotShadow_BlurCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  bool v23; 
  unsigned int i; 
  R_SpotShadow_StaleCacheEntry *stale; 
  R_RT_Handle v37; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  R_RT_Handle v41; 
  R_RT_BufferHandle v42; 
  R_RT_BufferHandle v43; 
  R_RT_ColorHandle v44; 

  _RAX = taskInfo->attachments;
  _R15 = htileMask;
  _R12 = htileMaskCounter;
  _R13 = htileMaskIndirectArgs;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rbp+80h+var_E0], ymm1
    vmovups ymmword ptr [rsp+180h+var_120.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v38);
    if ( (R_RT_Handle::GetSurface(&v38)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+180h+var_120.m_surfaceID]
        vmovups [rbp+80h+var_E0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+180h+var_120.m_surfaceID]
        vmovups [rbp+80h+var_E0], ymm0
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
    vmovups ymmword ptr [rsp+180h+var_120.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID]
        vmovups ymmword ptr [rsp+180h+var_120.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID]
        vmovups ymmword ptr [rsp+180h+var_120.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_120.m_surfaceID] }
      if ( v23 )
        __debugbreak();
    }
  }
  for ( i = 0; i < data->spotShadowUpdateCount; ++i )
  {
    __asm { vmovups [rbp+80h+var_100], ymm0 }
    _RAX = R_RT_GetViewInternal(&v41, &v39, i, -1);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+80h+var_100], ymm0
      vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v37);
      if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID]
          vmovups [rbp+80h+var_100], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID]
          vmovups [rbp+80h+var_100], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymm0, [rbp+80h+var_E0] }
    stale = data->spotShadowUpdates[i].stale;
    __asm { vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0 }
    R_SpotShadow_StaleCacheEntry::GetColorRt(stale, &v44, (R_RT_ColorHandle *)&v37);
    __asm
    {
      vmovups ymm0, ymmword ptr [r13+0]
      vmovups ymm1, ymmword ptr [r12]
      vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [r15]
      vmovups [rbp+80h+var_80], ymm0
      vmovups ymm0, [rbp+80h+var_100]
      vmovups [rbp+80h+var_A0], ymm1
      vmovups ymm1, [rbp+80h+var_60]
      vmovups [rbp+80h+var_100], ymm0
      vmovups [rbp+80h+var_C0], ymm1
    }
    R_SpotShadow_Blur(computeState, (R_RT_ColorHandle *)&v39, (R_RT_ColorHandle *)&v41, &v43, &v42, (R_RT_BufferHandle *)&v37, &data->spotShadowUpdates[i], i);
    __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_120.m_surfaceID] }
  }
}

/*
==============
R_SpotShadow_DownsampleCommon
==============
*/
void R_SpotShadow_DownsampleCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_DepthHandle *activeCache, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  bool v21; 
  unsigned int v22; 
  R_RT_Handle v32; 
  R_RT_Handle v33; 
  R_RT_BufferHandle v35; 
  R_RT_BufferHandle v36; 
  R_RT_DepthHandle v37; 
  R_RT_DepthHandle v38; 
  R_RT_ColorHandle v39; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+168h+var_D8], ymm0
    vmovups ymmword ptr [rsp+168h+var_118.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v32);
    if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+168h+var_118.m_surfaceID]
        vmovups [rsp+168h+var_D8], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+168h+var_118.m_surfaceID]
        vmovups [rsp+168h+var_D8], ymm0
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
    vmovups ymm2, ymmword ptr [rax+20h]
    vmovd   eax, xmm2
    vmovups ymmword ptr [rsp+168h+var_118.m_surfaceID], ymm2
    vmovups ymmword ptr [rsp+168h+var_F8.m_surfaceID], ymm2
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm2, ymmword ptr [rsp+168h+var_F8.m_surfaceID]
        vmovups ymmword ptr [rsp+168h+var_118.m_surfaceID], ymm2
      }
    }
    else
    {
      __asm
      {
        vmovups ymm2, ymmword ptr [rsp+168h+var_F8.m_surfaceID]
        vmovups ymmword ptr [rsp+168h+var_118.m_surfaceID], ymm2
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm2, 2 }
    if ( (_DWORD)_RAX )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm2, ymmword ptr [rsp+168h+var_118.m_surfaceID] }
      if ( v21 )
        __debugbreak();
    }
  }
  v22 = 0;
  if ( data->spotShadowUpdateCount )
  {
    _RSI = htileMaskIndirectArgs;
    _RBP = htileMaskCounter;
    _R14 = htileMask;
    _R15 = activeCache;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymm1, ymmword ptr [rbp+0]
        vmovups ymmword ptr [rsp+168h+var_F8.m_surfaceID], ymm0
        vmovups ymm0, ymmword ptr [r14]
        vmovups [rsp+168h+var_98], ymm0
        vmovups ymm0, ymmword ptr [r15]
        vmovups [rsp+168h+var_58], ymm0
        vmovups ymm0, [rsp+168h+var_D8]
        vmovups [rsp+168h+var_B8], ymm1
        vmovups [rsp+168h+var_78], ymm2
        vmovups [rsp+168h+var_38], ymm0
      }
      R_SpotShadow_Downsample(computeState, &v39, &v38, &v37, &v36, &v35, (R_RT_BufferHandle *)&v33, &data->spotShadowUpdates[v22], 1, v22);
      __asm { vmovups ymm2, ymmword ptr [rsp+168h+var_118.m_surfaceID] }
      ++v22;
    }
    while ( v22 < data->spotShadowUpdateCount );
  }
}

/*
==============
R_SpotShadow_GetHTileCacheSliceSize2D
==============
*/
base_vec2_t<unsigned int> R_SpotShadow_GetHTileCacheSliceSize2D(unsigned int shadowMapWidth, unsigned int shadowMapHeight)
{
  __int64 v5; 

  if ( (((unsigned __int8)shadowMapHeight | (unsigned __int8)shadowMapWidth) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 321, ASSERT_TYPE_ASSERT, "(shadowMapWidth % 8 == 0 && shadowMapHeight % 8 == 0)", (const char *)&queryFormat, "shadowMapWidth % 8 == 0 && shadowMapHeight % 8 == 0") )
    __debugbreak();
  LODWORD(v5) = 16 * (((shadowMapWidth >> 3) + 13) / 0xE);
  HIDWORD(v5) = 16 * (((shadowMapHeight >> 3) + 13) / 0xE);
  return (base_vec2_t<unsigned int>)v5;
}

/*
==============
R_SpotShadow_GetHTileCacheSliceSize
==============
*/
__int64 R_SpotShadow_GetHTileCacheSliceSize(unsigned int shadowMapWidth, unsigned int shadowMapHeight)
{
  base_vec2_t<unsigned int> HTileCacheSliceSize2D; 

  HTileCacheSliceSize2D = R_SpotShadow_GetHTileCacheSliceSize2D(shadowMapWidth, shadowMapHeight);
  return 4 * HTileCacheSliceSize2D.v[1] * HTileCacheSliceSize2D.v[0];
}

