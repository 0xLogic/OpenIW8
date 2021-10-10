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
  R_RT_BufferHandle v6; 
  R_RT_BufferHandle v7; 
  R_RT_BufferHandle v8; 

  v6.m_surfaceID = 0;
  v6.m_tracking.m_allocCounter = 0;
  v7.m_surfaceID = 0;
  v7.m_tracking.m_allocCounter = 0;
  v8.m_surfaceID = 0;
  v8.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v6.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v8.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v7.m_tracking.m_name = _XMM0;
  R_SpotShadow_BlurCommon(computeState, taskInfo, viewInfo, data, &v8, &v7, &v6);
}

/*
==============
RBT_SpotShadow_BlurMasked
==============
*/
void RBT_SpotShadow_BlurMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v12; 
  bool v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  __m256i v18; 

  v17 = taskInfo->attachments[2];
  v15 = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v17 = v15;
    }
    else
    {
      v17 = v15;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v16 = taskInfo->attachments[3];
  v15 = v16;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v16 = v15;
    }
    else
    {
      v16 = v15;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v12 = taskInfo->attachments[4];
  v18 = (__m256i)v12;
  v15 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v12 = v15;
    }
    else
    {
      v12 = v15;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v12 = (R_RT_Handle)v18;
      if ( v14 )
        __debugbreak();
    }
  }
  v18 = (__m256i)v12;
  R_SpotShadow_BlurCommon(computeState, taskInfo, viewInfo, data, (R_RT_BufferHandle *)&v17, (R_RT_BufferHandle *)&v16, (R_RT_BufferHandle *)&v18);
}

/*
==============
RBT_SpotShadow_ClearHTileMaskCounters
==============
*/
void RBT_SpotShadow_ClearHTileMaskCounters(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v6; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 

  v6 = *taskInfo->attachments;
  v10 = v6;
  v9 = v6;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v9);
    if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v6 = v9;
    }
    else
    {
      v6 = v9;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v6 = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v10 = v6;
  Surface = R_RT_Handle::GetSurface(&v10);
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
  R_RT_Handle v8; 
  R_RT_Handle *attachments; 
  R_RT_Handle v11; 
  bool v13; 
  int v14; 
  int v15; 
  __int64 ComputeShaderIndex; 
  unsigned int v17; 
  int v18; 
  R_SpotShadow_ActiveCacheEntry *active; 
  unsigned int ArraySliceIndex; 
  int v21; 
  int v22; 
  int v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 
  GfxShaderBufferRWView *views[4]; 
  GfxShaderBufferView v28; 
  GfxShaderBufferRWView v29; 

  v8 = *taskInfo->attachments;
  *(R_RT_Handle *)views = v8;
  v25 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v25);
    if ( (R_RT_Handle::GetSurface(&v25)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v8 = v25;
      *(R_RT_Handle *)views = v25;
    }
    else
    {
      v8 = v25;
      *(R_RT_Handle *)views = v25;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = *(R_RT_Handle *)views;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v26 = v8;
  v11 = attachments[1];
  v25 = v11;
  v24 = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v24);
    if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v11 = v24;
      v25 = v24;
    }
    else
    {
      v11 = v24;
      v25 = v24;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = v25;
      if ( v13 )
        __debugbreak();
    }
  }
  v24 = v11;
  v14 = R_RT_Handle::GetSurface(&v26)->m_image.m_base.width >> 3;
  v23 = v14;
  v15 = 4 * v14 * (R_RT_Handle::GetSurface(&v26)->m_image.m_base.height >> 3);
  if ( ((R_RT_Handle::GetSurface(&v26)->m_image.m_base.width & 7) != 0 || (R_RT_Handle::GetSurface(&v26)->m_image.m_base.height & 7) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 245, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0)", (const char *)&queryFormat, "dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0") )
    __debugbreak();
  if ( (R_RT_Handle::GetSurface(&v24)->m_image.m_base.format != GFX_PF_D16 || R_RT_Handle::GetSurface(&v26)->m_image.m_base.format != GFX_PF_D16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 246, ASSERT_TYPE_ASSERT, "(activeCache.GetFormat() == GFX_PF_D16 && dynamicDepth.GetFormat() == GFX_PF_D16)", "%s\n\tspotCopyHTileClearZPlanes shaders support only 16 bit depth", "activeCache.GetFormat() == GFX_PF_D16 && dynamicDepth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  v24 = *(R_RT_Handle *)views;
  ComputeShaderIndex = (unsigned int)R_SpotShadow_GetComputeShaderIndex((R_RT_DepthHandle *)&v24);
  v24 = *(R_RT_Handle *)views;
  R_RT_GetHtileRWView(&v29, (R_RT_DepthHandle *)&v24);
  v24 = v25;
  R_RT_GetHtileView(&v28, (R_RT_DepthHandle *)&v24);
  views[0] = &v29;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = (GfxShaderBufferRWView *)&v28;
  R_SetComputeViews(computeState, 4, 1, (const GfxShaderBufferView *const *)views);
  R_SetComputeShader(computeState, rgp.spotCopyHTileClearZPlanes[ComputeShaderIndex]);
  v17 = 0;
  if ( data->spotShadowUpdateCount )
  {
    v18 = 0;
    do
    {
      if ( R_SpotShadow_ShouldUseHTileMask(&data->spotShadowUpdates[v17]) && data->spotShadowUpdates[v17].activeStatus )
      {
        active = data->spotShadowUpdates[v17].active;
        HIDWORD(views[0]) = v18;
        ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(active);
        LODWORD(views[1]) = v14;
        LODWORD(views[0]) = v15 * (ArraySliceIndex + 1);
        R_UploadAndSetComputeConstants(computeState, 0, views, 0x10u, NULL);
        v21 = R_RT_Handle::GetSurface(&v26)->m_image.m_base.height >> 3;
        v22 = R_RT_Handle::GetSurface(&v26)->m_image.m_base.width >> 3;
        if ( (!v22 || !v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
          __debugbreak();
        R_Dispatch(computeState, (unsigned int)(v22 + 7) >> 3, (unsigned int)(v21 + 7) >> 3, 1u);
        v14 = v23;
      }
      ++v17;
      v18 += v15;
    }
    while ( v17 < data->spotShadowUpdateCount );
  }
}

/*
==============
RBT_SpotShadow_Downsample
==============
*/
void RBT_SpotShadow_Downsample(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_BufferHandle v6; 
  R_RT_BufferHandle v7; 
  R_RT_BufferHandle v8; 
  R_RT_DepthHandle v9; 

  v6.m_surfaceID = 0;
  v6.m_tracking.m_allocCounter = 0;
  v7.m_surfaceID = 0;
  v7.m_tracking.m_allocCounter = 0;
  v8.m_surfaceID = 0;
  v8.m_tracking.m_allocCounter = 0;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v6.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v8.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v7.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  R_SpotShadow_DownsampleCommon(computeState, taskInfo, viewInfo, data, &v9, &v8, &v7, &v6);
}

/*
==============
RBT_SpotShadow_DownsampleMasked
==============
*/
void RBT_SpotShadow_DownsampleMasked(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  __m256i v20; 

  v19 = taskInfo->attachments[2];
  v16 = v19;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v19 = v16;
    }
    else
    {
      v19 = v16;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18 = taskInfo->attachments[3];
  v16 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v18 = v16;
    }
    else
    {
      v18 = v16;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = taskInfo->attachments[4];
  v16 = v17;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v17 = v16;
    }
    else
    {
      v17 = v16;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v13 = taskInfo->attachments[5];
  v20 = (__m256i)v13;
  v16 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v13 = v16;
    }
    else
    {
      v13 = v16;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = (R_RT_Handle)v20;
      if ( v15 )
        __debugbreak();
    }
  }
  v20 = (__m256i)v13;
  R_SpotShadow_DownsampleCommon(computeState, taskInfo, viewInfo, data, (R_RT_DepthHandle *)&v19, (R_RT_BufferHandle *)&v18, (R_RT_BufferHandle *)&v17, (R_RT_BufferHandle *)&v20);
}

/*
==============
RBT_SpotShadow_Draw
==============
*/
void RBT_SpotShadow_Draw(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v5; 
  R_RT_Handle v10; 
  unsigned __int16 m_surfaceID; 
  bool v13; 
  int v14; 
  R_RT_DepthHandle *p_m_depthRt; 
  unsigned int spotShadowUpdateCount; 
  R_RT_Handle v17; 
  bool v19; 
  unsigned int v20; 
  R_RT_Handle v21; 
  unsigned __int16 v22; 
  bool v24; 
  __m256i v25; 
  unsigned int v26; 
  const GfxViewInfo *v27; 
  GfxCmdBufState *state; 
  GfxDrawListType v29; 
  __int64 v30; 
  const char *v31; 
  __int64 sceneLightIndex; 
  unsigned int primaryLightCount; 
  const char *v34; 
  GfxDrawListType v35; 
  const dvar_t *v36; 
  R_RT_Handle v37; 
  R_RT_Handle v38; 
  const GfxViewInfo *v39; 
  R_RT_Handle v40; 
  R_RT_Handle v41; 
  __m256i v42; 
  __m256i v43; 
  __m256i v44; 
  __m256i v45; 
  _BYTE v46[64]; 
  __int64 v47; 
  R_RT_Handle v48; 
  _QWORD rtGroup[1174]; 

  v5 = r_flushCommandListsAt_Flags;
  v39 = viewInfo;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v10 = *taskInfo->attachments;
  m_surfaceID = _XMM0;
  v40 = v10;
  v37 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v10 = v37;
      LODWORD(_RDI) = v37.m_tracking.m_allocCounter;
      m_surfaceID = v37.m_surfaceID;
      v40 = v37;
    }
    else
    {
      v10 = v37;
      LODWORD(_RDI) = v37.m_tracking.m_allocCounter;
      m_surfaceID = v37.m_surfaceID;
      v40 = v37;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v10 = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v38 = v10;
  if ( !m_surfaceID )
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_22;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
    goto LABEL_20;
  }
  R_RT_Handle::GetSurface(&v38);
  v14 = *(_DWORD *)&viewInfo->spotshadowActiveCache.m_surfaceID;
  if ( !(_WORD)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  if ( ((m_surfaceID ^ (unsigned __int16)v14) & 0x7FFF) != 0 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 96, ASSERT_TYPE_ASSERT, "(!cacheRt.IsValid() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex())", (const char *)&queryFormat, "!cacheRt.IsValid() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex()");
LABEL_20:
    if ( v13 )
      __debugbreak();
  }
LABEL_22:
  p_m_depthRt = &taskInfo->rtGroup.m_depthRt;
  if ( R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 98, ASSERT_TYPE_ASSERT, "(taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount < R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements )
  {
    do
    {
      v38 = p_m_depthRt->R_RT_Handle;
      v17 = *R_RT_GetViewInternal(&v41, &v38, spotShadowUpdateCount, -1);
      v37 = v17;
      v38 = v17;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v38);
        if ( (R_RT_Handle::GetSurface(&v38)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v17 = v38;
        }
        else
        {
          v17 = v38;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v17 = v37;
          if ( v19 )
            __debugbreak();
        }
      }
      v48 = v17;
      R_RT_Handle::ClearAuxDirty(&v48);
      ++spotShadowUpdateCount;
    }
    while ( spotShadowUpdateCount < R_RT_Handle::GetSurface(p_m_depthRt)->m_image.m_base.numElements );
  }
  v20 = 0;
  if ( data->spotShadowUpdateCount )
  {
    do
    {
      v48 = p_m_depthRt->R_RT_Handle;
      v21 = *R_RT_GetViewInternal(&v41, &v48, v20, -1);
      v22 = _XMM0;
      v38 = v21;
      v37 = v21;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v37);
        if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v21 = v37;
          LODWORD(_RBX) = v37.m_tracking.m_allocCounter;
          v22 = v37.m_surfaceID;
          v38 = v37;
        }
        else
        {
          v21 = v37;
          LODWORD(_RBX) = v37.m_tracking.m_allocCounter;
          v22 = v37.m_surfaceID;
          v38 = v37;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v21 = v38;
          if ( v24 )
            __debugbreak();
        }
      }
      v37 = v21;
      *(R_RT_Handle *)&rtGroup[4 * v20 + 1142] = v21;
      if ( v22 )
      {
        R_RT_Handle::GetSurface(&v37);
        v25 = (__m256i)v37;
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        v25 = (__m256i)v38;
      }
      v42.m256i_i8[0] = 0;
      *(__m256i *)&v46[8] = v25;
      *(__m256i *)rtGroup = v42;
      *(__m256i *)&rtGroup[4] = v43;
      *(__m256i *)&rtGroup[8] = v44;
      *(__m256i *)&rtGroup[12] = v45;
      *(__m256i *)&rtGroup[16] = *(__m256i *)v46;
      *(__m256i *)&rtGroup[20] = *(__m256i *)&v46[32];
      rtGroup[24] = v47;
      R_ClearRtGroup(gfxContext->state, (const R_RT_Group *)rtGroup, 0x10u, 0, (PipeFlushMode)((v20 != data->spotShadowUpdateCount - 1) + 1));
      v26 = data->spotShadowUpdateCount;
      ++v20;
    }
    while ( v20 < v26 );
    v27 = v39;
    if ( v26 )
    {
      state = gfxContext->state;
      v29 = DRAWLIST_SPOTSHADOW_0_DYNAMIC;
      do
      {
        v30 = (unsigned int)(v29 - 37);
        v31 = "PrimaryLight";
        sceneLightIndex = data->spotShadowUpdates[v30].sceneLightIndex;
        primaryLightCount = rgp.world->primaryLightCount;
        if ( (unsigned int)sceneLightIndex > primaryLightCount )
          v31 = "DynLight";
        if ( (unsigned int)sceneLightIndex > primaryLightCount )
          sceneLightIndex = data->spotShadowUpdates[v30].sceneLightIndex - primaryLightCount;
        v34 = j_va("%s(%d) shadowmap", v31, sceneLightIndex, "DynLight");
        R_ProfBeginNamedEvent(state, v34);
        v35 = v29 - 8;
        if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v29 - 8)) )
        {
          R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
          R_ProfBeginDrawListImmediate(v35);
          R_GPU_BeginRunDrawListTimer(v35);
          v48 = v40;
          v38 = *(R_RT_Handle *)&rtGroup[4 * (unsigned int)v30 + 1142];
          R_DrawSpotShadowMapStatics(v27, &v27->drawList[v35], v35, (R_RT_DepthHandle *)&v38, (R_RT_DepthHandle *)&v48, v29 - 37, (GfxDrawCallOutput *)rtGroup, 0);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        if ( R_RunDrawListCommandBuffer(data, v29) )
        {
          R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
          R_ProfBeginDrawListImmediate(v29);
          R_GPU_BeginRunDrawListTimer(v29);
          v48 = *(R_RT_Handle *)&rtGroup[4 * v30 + 1142];
          R_DrawSpotShadowMapDynamics(v27, &v27->drawList[v29], v29, (R_RT_DepthHandle *)&v48, v29 - 37, (GfxDrawCallOutput *)rtGroup, 0);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        R_ProfEndNamedEvent(state);
        ++v29;
      }
      while ( v29 - 37 < data->spotShadowUpdateCount );
    }
  }
  v36 = r_flushCommandListsAt_Flags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
}

/*
==============
RBT_SpotShadow_DrawDynamics
==============
*/
void RBT_SpotShadow_DrawDynamics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxDrawListType v8; 
  R_RT_Handle v9; 
  bool v11; 
  const dvar_t *v12; 
  R_RT_Handle m_depthRt; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 
  GfxDrawCallOutput drawOutput; 

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
        m_depthRt = (R_RT_Handle)taskInfo->rtGroup.m_depthRt;
        v9 = *R_RT_GetViewInternal(&v15, &m_depthRt, v8 - 37, -1);
        m_depthRt = v9;
        v14 = v9;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v14);
          if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
          {
            v9 = v14;
          }
          else
          {
            v9 = v14;
            __debugbreak();
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v9 = m_depthRt;
            if ( v11 )
              __debugbreak();
          }
        }
        m_depthRt = v9;
        R_DrawSpotShadowMapDynamics(viewInfo, &viewInfo->drawList[v8], v8, (R_RT_DepthHandle *)&m_depthRt, v8 - 37, &drawOutput, 1);
        R_GPU_EndTimer();
        R_ProfEndDrawListImmediate();
      }
      ++v8;
    }
    while ( v8 - 37 < data->spotShadowUpdateCount );
  }
  v12 = r_flushCommandListsAt_Flags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
}

/*
==============
RBT_SpotShadow_DrawStatics
==============
*/
void RBT_SpotShadow_DrawStatics(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v5; 
  const GfxViewInfo *v7; 
  R_RT_Handle v9; 
  R_RT_DepthHandle *p_m_depthRt; 
  __int16 m_surfaceID; 
  int v13; 
  unsigned int spotShadowUpdateCount; 
  R_RT_Handle v15; 
  bool v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  R_RT_Handle v21; 
  unsigned __int16 v22; 
  bool v24; 
  __m256i v25; 
  __int64 v26; 
  GfxViewport v27; 
  const R_RT_Surface *Surface; 
  unsigned int height; 
  const R_RT_Surface *v31; 
  GfxViewport v32; 
  const R_RT_Surface *v33; 
  CmdBufState *v34; 
  float m_clearDepth; 
  GfxDescriptorState *descState; 
  GfxDevice *device; 
  __int64 v39; 
  GfxViewport v40; 
  GfxDrawListType v41; 
  bool spotshadowHTileMask; 
  GfxViewport v43; 
  R_RT_Handle v44; 
  int v45; 
  R_RT_Handle v46; 
  const GfxViewInfo *v47; 
  R_RT_Handle v48; 
  R_RT_Handle v49; 
  __m256i v50; 
  __m256i v51; 
  __m256i v52; 
  __m256i v53; 
  _BYTE v54[72]; 
  R_RT_Handle v55; 
  R_RT_Handle v56; 
  _QWORD rtGroup[1174]; 

  v5 = r_flushCommandListsAt_Flags;
  v7 = viewInfo;
  v47 = viewInfo;
  *(_QWORD *)&v43.x = gfxContext;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v9 = *taskInfo->attachments;
  v48 = v9;
  v44 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v9 = v44;
      v48 = v44;
    }
    else
    {
      v9 = v44;
      v48 = v44;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v9 = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  p_m_depthRt = &taskInfo->rtGroup.m_depthRt;
  v49 = v9;
  if ( R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 179, ASSERT_TYPE_ASSERT, "(taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "taskInfo->rtGroup.m_depthRt.GetArraySize() <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  m_surfaceID = v48.m_surfaceID;
  v45 = *(_DWORD *)&v48.m_surfaceID;
  if ( v48.m_surfaceID )
  {
    v13 = *(_DWORD *)&v7->spotshadowActiveCache.m_surfaceID;
    if ( !(_WORD)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    if ( (((unsigned __int16)v13 ^ (unsigned __int16)m_surfaceID) & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 180, ASSERT_TYPE_ASSERT, "(cacheRt.IsNull() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex())", (const char *)&queryFormat, "cacheRt.IsNull() || cacheRt.GetSurfaceIndex() == R_GetSpotShadowCacheActive( viewInfo ).GetSurfaceIndex()") )
      __debugbreak();
  }
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount < R_RT_Handle::GetSurface(&taskInfo->rtGroup.m_depthRt)->m_image.m_base.numElements )
  {
    do
    {
      v44 = p_m_depthRt->R_RT_Handle;
      v15 = *R_RT_GetViewInternal(&v55, &v44, spotShadowUpdateCount, -1);
      v46 = v15;
      v44 = v15;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v44);
        if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v15 = v44;
        }
        else
        {
          v15 = v44;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v15 = v46;
          if ( v17 )
            __debugbreak();
        }
      }
      v56 = v15;
      R_RT_Handle::ClearAuxDirty(&v56);
      ++spotShadowUpdateCount;
    }
    while ( spotShadowUpdateCount < R_RT_Handle::GetSurface(p_m_depthRt)->m_image.m_base.numElements );
    v7 = v47;
  }
  v18 = data->spotShadowUpdateCount;
  v19 = 0;
  if ( v18 )
  {
    v20 = *(_QWORD *)&v43.x;
    do
    {
      v56 = p_m_depthRt->R_RT_Handle;
      v21 = *R_RT_GetViewInternal(&v55, &v56, v19, -1);
      v22 = _XMM0;
      v44 = v21;
      v46 = v21;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v46);
        if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v21 = v46;
          LODWORD(_RBX) = v46.m_tracking.m_allocCounter;
          v22 = v46.m_surfaceID;
          v44 = v46;
        }
        else
        {
          v21 = v46;
          LODWORD(_RBX) = v46.m_tracking.m_allocCounter;
          v22 = v46.m_surfaceID;
          v44 = v46;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v21 = v44;
          if ( v24 )
            __debugbreak();
        }
      }
      v46 = v21;
      *(R_RT_Handle *)&rtGroup[4 * v19 + 1142] = v21;
      if ( v22 )
      {
        R_RT_Handle::GetSurface(&v46);
        v25 = (__m256i)v46;
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        v25 = (__m256i)v44;
      }
      v50.m256i_i8[0] = 0;
      *(__m256i *)&v54[8] = v25;
      *(__m256i *)rtGroup = v50;
      *(__m256i *)&rtGroup[4] = v51;
      *(__m256i *)&rtGroup[8] = v52;
      *(__m256i *)&rtGroup[12] = v53;
      *(__m256i *)&rtGroup[16] = *(__m256i *)v54;
      *(__m256i *)&rtGroup[20] = *(__m256i *)&v54[32];
      rtGroup[24] = *(_QWORD *)&v54[64];
      R_ClearRtGroup(*(GfxCmdBufState **)(v20 + 8), (const R_RT_Group *)rtGroup, 0x10u, 0, (PipeFlushMode)((v19 != data->spotShadowUpdateCount - 1) + 1));
      v18 = data->spotShadowUpdateCount;
      ++v19;
    }
    while ( v19 < v18 );
    v7 = v47;
    m_surfaceID = v45;
  }
  if ( !v7->taskGraphViewInfo.frameCount )
  {
    v26 = *(_QWORD *)&v43.x;
    v56 = v48;
    R_HW_AddResourceTransition(*(CmdBufState **)(*(_QWORD *)&v43.x + 8i64), &v56, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(*(CmdBufState **)(*(_QWORD *)&v43.x + 8i64));
    v27 = *(GfxViewport *)*(_QWORD *)&v43.x;
    v44 = v48;
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&v44);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    *(R_RT_Handle *)&v54[8] = v44;
    v50.m256i_i8[0] = 0;
    *(__m256i *)rtGroup = v50;
    *(__m256i *)&rtGroup[4] = v51;
    *(__m256i *)&rtGroup[8] = v52;
    *(__m256i *)&rtGroup[12] = v53;
    *(__m256i *)&rtGroup[16] = *(__m256i *)v54;
    *(__m256i *)&rtGroup[20] = *(__m256i *)&v54[32];
    rtGroup[24] = *(_QWORD *)&v54[64];
    v43 = v27;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v43, (const R_RT_Group *)rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp(202)");
    Surface = R_RT_Handle::GetSurface(&v49);
    *(_QWORD *)&v43.x = 0i64;
    height = Surface->m_image.m_base.height;
    v31 = R_RT_Handle::GetSurface(&v49);
    v43.height = height;
    v43.width = v31->m_image.m_base.width;
    v32 = v43;
    v33 = R_RT_Handle::GetSurface(&v49);
    if ( (v33->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
      __debugbreak();
    v34 = *(CmdBufState **)(v26 + 8);
    m_clearDepth = v33->m_depth.m_clearDepth;
    descState = v34->descState;
    device = v34->device;
    v43 = v32;
    v56 = v48;
    R_HW_ClearDepthViewport(device, descState, (R_RT_DepthHandle *)&v56, m_clearDepth, &v43);
    v56 = v48;
    R_HW_AddResourceTransition(v34, &v56, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0x400000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v34);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v54[24] = _XMM0;
    *(_OWORD *)&v54[56] = _XMM0;
    v50.m256i_i8[0] = 0;
    *(_WORD *)&v54[8] = 0;
    *(_DWORD *)&v54[16] = 0;
    *(_WORD *)&v54[40] = 0;
    *(_DWORD *)&v54[48] = 0;
    *(__m256i *)rtGroup = v50;
    *(__m256i *)&rtGroup[4] = v51;
    *(__m256i *)&rtGroup[8] = v52;
    *(__m256i *)&rtGroup[12] = v53;
    *(__m256i *)&rtGroup[16] = *(__m256i *)v54;
    v39 = *((_QWORD *)&_XMM0 + 1);
    *(__m256i *)&rtGroup[20] = *(__m256i *)&v54[32];
    v40 = *(GfxViewport *)v26;
    rtGroup[24] = v39;
    v43 = v40;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v43, (const R_RT_Group *)rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp(210)");
    v18 = data->spotShadowUpdateCount;
  }
  if ( v18 )
  {
    v41 = DRAWLIST_SPOTSHADOW_FIRST;
    do
    {
      if ( R_RunDrawListCommandBuffer(data, v41) )
      {
        R_InitDrawCallOutput(data, (GfxDrawCallOutput *)rtGroup);
        R_ProfBeginDrawListImmediate(v41);
        R_GPU_BeginRunDrawListTimer(v41);
        v56 = v48;
        spotshadowHTileMask = v7->spotshadowHTileMask;
        v49 = *(R_RT_Handle *)&rtGroup[4 * (unsigned int)(v41 - 29) + 1142];
        R_DrawSpotShadowMapStatics(v7, &v7->drawList[v41], v41, (R_RT_DepthHandle *)&v49, (R_RT_DepthHandle *)&v56, v41 - 29, (GfxDrawCallOutput *)rtGroup, spotshadowHTileMask);
        R_GPU_EndTimer();
        R_ProfEndDrawListImmediate();
      }
      ++v41;
    }
    while ( v41 - 29 < data->spotShadowUpdateCount );
  }
}

/*
==============
RBT_SpotShadow_GenerateHTileMaskIndirectArgs
==============
*/
void RBT_SpotShadow_GenerateHTileMaskIndirectArgs(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v7; 
  R_RT_Handle *attachments; 
  R_RT_Handle v10; 
  bool v12; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  GfxShaderBufferRWView *views; 

  v7 = *taskInfo->attachments;
  v16 = v7;
  v15 = v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v7 = v15;
    }
    else
    {
      v7 = v15;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v7 = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v17 = v7;
  v10 = attachments[1];
  v16 = v10;
  v15 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v10 = v15;
    }
    else
    {
      v10 = v15;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = v16;
      if ( v12 )
        __debugbreak();
    }
  }
  v16 = v10;
  Surface = R_RT_Handle::GetSurface(&v17);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = &Surface->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v14 = R_RT_Handle::GetSurface(&v16);
  if ( (v14->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferRWView *)&v14->m_array.m_handles[0].m_tracking;
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
  unsigned __int64 v5; 
  R_RT_Handle *attachments; 
  __m256i v9; 
  bool v11; 
  R_RT_Handle *v12; 
  __m256i v13; 
  bool v15; 
  R_RT_Handle *v16; 
  __m256i v17; 
  bool v19; 
  R_RT_Handle *v20; 
  __m256i v21; 
  bool v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  base_vec2_t<unsigned int> HTileCacheSliceSize2D; 
  base_vec2_t<unsigned int> v29; 
  unsigned int v30; 
  const R_RT_Surface *v31; 
  base_vec2_t<unsigned int> v32; 
  SpotComputerShaderIndex ComputeShaderIndex; 
  const R_RT_Surface *v34; 
  const R_RT_Surface *v35; 
  const R_RT_Surface *v36; 
  GfxShaderBufferRWView *p_rwView; 
  int v38; 
  __int64 v39; 
  unsigned int v40; 
  int v41; 
  const GfxSpotShadowUpdate *v42; 
  bool v43; 
  unsigned int ArraySliceIndex; 
  unsigned int activeStatus; 
  const dvar_t *v46; 
  int v47; 
  R_SpotShadow_StaleCacheEntry *stale; 
  unsigned int maskedUpdateCount; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  int v55; 
  float *p_minX; 
  unsigned int v57; 
  float v58; 
  float v59; 
  unsigned __int64 v60; 
  char v61; 
  char v62; 
  unsigned __int64 v63; 
  unsigned int i; 
  __int64 v65; 
  ComputeCmdBufState *v66; 
  __int64 v67; 
  char *fmt; 
  _BYTE v69[2608]; 

  v5 = (unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(v5 + 2560) = (unsigned __int64)&v67 ^ _security_cookie;
  attachments = taskInfo->attachments;
  *(_QWORD *)(v5 + 80) = data;
  *(_QWORD *)(v5 + 144) = computeState;
  v9 = *(__m256i *)attachments;
  *(__m256i *)(v5 + 152) = *(__m256i *)attachments;
  *(__m256i *)(v5 + 256) = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v9 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x100);
      *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x98) = v9;
    }
    else
    {
      v9 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x100);
      *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x98) = v9;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v9 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x98);
      if ( v11 )
        __debugbreak();
    }
  }
  v12 = taskInfo->attachments;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = v9;
  v13 = (__m256i)v12[1];
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60) = v13;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v13 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
    }
    else
    {
      v13 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60);
      if ( v15 )
        __debugbreak();
    }
  }
  v16 = taskInfo->attachments;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0xE0) = v13;
  v17 = (__m256i)v16[2];
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60) = v17;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v17 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
    }
    else
    {
      v17 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v17 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60);
      if ( v19 )
        __debugbreak();
    }
  }
  v20 = taskInfo->attachments;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0xC0) = v17;
  v21 = (__m256i)v20[3];
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60) = v21;
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = v21;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32));
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32))->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v21 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
    }
    else
    {
      v21 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v21 = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60);
      if ( v23 )
        __debugbreak();
    }
  }
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = v21;
  v24 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.width >> 3;
  *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x40) = v24;
  v25 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.height >> 3;
  *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x44) = v25;
  height = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256));
  HTileCacheSliceSize2D = R_SpotShadow_GetHTileCacheSliceSize2D(Surface->m_image.m_base.width, height);
  *(base_vec2_t<unsigned int> *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x88) = HTileCacheSliceSize2D;
  v29 = HTileCacheSliceSize2D;
  v30 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.height;
  v31 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256));
  v32 = R_SpotShadow_GetHTileCacheSliceSize2D(v31->m_image.m_base.width, v30);
  *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) = v32.v[0] * v32.v[1];
  if ( (v24 > 0x80 || v25 > 0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 354, ASSERT_TYPE_ASSERT, "(htileWidth <= SPOT_MAX_HTILE_DIM && htileHeight <= SPOT_MAX_HTILE_DIM)", (const char *)&queryFormat, "htileWidth <= SPOT_MAX_HTILE_DIM && htileHeight <= SPOT_MAX_HTILE_DIM") )
    __debugbreak();
  if ( ((R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.width & 7) != 0 || (R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.height & 7) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 355, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0)", (const char *)&queryFormat, "dynamicDepth.GetWidth() % 8 == 0 && dynamicDepth.GetHeight() % 8 == 0") )
    __debugbreak();
  if ( R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 256))->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 356, ASSERT_TYPE_ASSERT, "(dynamicDepth.GetFormat() == GFX_PF_D16)", "%s\n\tspotHtileMask shaders support only 16 bit depth", "dynamicDepth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x60) = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x98);
  ComputeShaderIndex = R_SpotShadow_GetComputeShaderIndex((R_RT_DepthHandle *)(v5 + 96));
  R_SetComputeShader(computeState, rgp.spotHTileMask[ComputeShaderIndex]);
  v34 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 224));
  if ( (v34->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  fmt = NULL;
  *(_QWORD *)v5 = &v34->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64), (const unsigned int *)fmt);
  v35 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 32));
  if ( (v35->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  fmt = NULL;
  *(_QWORD *)v5 = &v35->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64), (const unsigned int *)fmt);
  v36 = R_RT_Handle::GetSurface((R_RT_Handle *)(v5 + 192));
  if ( (v36->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  p_rwView = &v36->m_buffer.m_wrappedBuffer.rwView;
  v38 = 0;
  *(_QWORD *)v5 = p_rwView;
  R_SetComputeRWViewsWithCounters(computeState, 3, 1, (const GfxShaderBufferRWView *const *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64), NULL);
  *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0xC0) = *(__m256i *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x98);
  *(_QWORD *)v5 = R_RT_GetHtileView((GfxShaderBufferView *)(v5 + 256), (R_RT_DepthHandle *)(v5 + 192));
  R_SetComputeViews(computeState, 5, 1, (const GfxShaderBufferView *const *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64));
  v39 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x50);
  v40 = 0;
  *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x14) = 0;
  if ( *(_DWORD *)(v39 + 954032) )
  {
    *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x18) = 0;
    v41 = 0;
    *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C) = 0;
    *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x48) = 4 * v24 * v25;
    *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x4C) = 8 * v24 * v25;
    do
    {
      v42 = (const GfxSpotShadowUpdate *)(16832i64 * v40 + v39 + 954048);
      *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = v42;
      if ( R_SpotShadow_ShouldUseHTileMask(v42) )
      {
        memset_0((void *)(v5 + 384), 0, 0x830ui64);
        v43 = v42->activeStatus == 0;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x18C) = 8 * v40;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = v41;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = v38;
        if ( v43 )
        {
          *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = -1;
          activeStatus = 0;
        }
        else
        {
          ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(v42->active);
          activeStatus = v42->activeStatus;
          *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = 4 * *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) * (ArraySliceIndex >> 1);
        }
        v46 = DCONST_DVARBOOL_sm_spotHTileMaskCache;
        *(_DWORD *)v5 = v24;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 4) = v25;
        *(base_vec2_t<unsigned int> *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = v29;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = activeStatus >= 3;
        *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0) = *(_QWORD *)((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64);
        if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotHTileMaskCache") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v46);
        v47 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x194);
        stale = v42->stale;
        if ( !v46->current.enabled )
          v47 = 0;
        *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v47;
        if ( stale )
        {
          maskedUpdateCount = stale->maskedUpdateCount;
          if ( !maskedUpdateCount )
          {
            *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = 0;
            maskedUpdateCount = stale->maskedUpdateCount;
          }
          stale->maskedUpdateCount = maskedUpdateCount + 1;
        }
        if ( v42->activeStatus == 3 )
        {
          if ( v24 != 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 401, ASSERT_TYPE_ASSERT, "(htileWidth == 128)", "%s\n\tSpotshadow map size has changed, need to readjust optimized static cpu-htile generation.", "htileWidth == 128") )
            __debugbreak();
          v50 = 0;
          *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 8) = 0;
          if ( v42->smodelsChangedCount )
          {
            v51 = v24 - 1;
            v52 = v25 - 1;
            *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x10) = v24 - 1;
            *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0xC) = v25 - 1;
            do
            {
              v53 = v51;
              v54 = v51;
              v55 = v52;
              p_minX = &v42->smodelChangedBoundingBox[v50].minX;
              v57 = v52;
              v58 = (float)(p_minX[1] + 1.0) * 0.125;
              if ( v51 > (int)(float)(0.125 * *p_minX) )
                v53 = (int)(float)(0.125 * *p_minX);
              if ( v51 > (int)v58 )
                v54 = (int)v58;
              v59 = (float)(p_minX[3] + 1.0) * 0.125;
              if ( v52 > (int)(float)(0.125 * p_minX[2]) )
                v55 = (int)(float)(0.125 * p_minX[2]);
              if ( v52 > (int)v59 )
                v57 = (int)v59;
              if ( v53 < 0x40 )
              {
                v61 = 63;
                if ( v54 < 0x3F )
                  v61 = v54;
                v60 = 0xFFFFFFFFFFFFFFFFui64 >> ((unsigned __int8)v53 - v61 + 63) << v53;
              }
              else
              {
                v60 = 0i64;
              }
              v62 = 64;
              if ( v53 > 0x40 )
                v62 = v53;
              if ( v54 >= 0x40 )
                v63 = 0xFFFFFFFFFFFFFFFFui64 >> (v62 - (unsigned __int8)v54 + 63) << (v62 - 64);
              else
                v63 = 0i64;
              if ( v54 - v53 + 1 != (unsigned int)__popcnt(v60) + (unsigned int)__popcnt(v63) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_spotshadow.cpp", 418, ASSERT_TYPE_ASSERT, "(maxX - minX + 1u == (uint)CountBitsEnabled64( qword1 ) + (uint)CountBitsEnabled64( qword2 ))", "%s\n\tEncountered error during static cpu-htile bitmask calculation.", "maxX - minX + 1u == (uint)CountBitsEnabled64( qword1 ) + (uint)CountBitsEnabled64( qword2 )") )
                  __debugbreak();
                v51 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
                v52 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0xC);
                v50 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 8);
              }
              for ( i = v55; i <= v57; *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 8 * v65 + 0x1B8) |= v63 )
              {
                v65 = i++;
                v65 *= 2i64;
                *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 8 * v65 + 0x1B0) |= v60;
              }
              if ( !v53 && !v55 && v54 == v51 && v57 == v52 )
                break;
              v42 = *(const GfxSpotShadowUpdate **)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x100);
              *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 8) = ++v50;
            }
            while ( v50 < v42->smodelsChangedCount );
            v29 = *(base_vec2_t<unsigned int> *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x88);
            v24 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x40);
            v40 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x14);
            v25 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x44);
            v41 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x18);
          }
        }
        fmt = NULL;
        v66 = *(ComputeCmdBufState **)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x90);
        R_UploadAndSetComputeConstants(v66, 0, (const void *)(v5 + 384), 0x830u, NULL);
        if ( (!v24 || !v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
          __debugbreak();
        R_Dispatch(v66, (v24 + 13) / 0xE, (v25 + 13) / 0xE, 1u);
        v38 = *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C);
      }
      v41 += *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x48);
      ++v40;
      v38 += *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x4C);
      v39 = *(_QWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x50);
      *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x14) = v40;
      *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x18) = v41;
      *(_DWORD *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C) = v38;
    }
    while ( v40 < *(_DWORD *)(v39 + 954032) );
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
  R_RT_Handle v5; 
  unsigned __int16 m_surfaceID; 
  bool v8; 
  bool v9; 
  unsigned int v10; 
  R_RT_Handle v11; 
  R_RT_DepthHandle v12; 

  v5 = *taskInfo->attachments;
  m_surfaceID = _XMM0;
  v12 = (R_RT_DepthHandle)v5;
  v11 = v5;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v5 = v11;
      LODWORD(_RBX) = v11.m_tracking.m_allocCounter;
      m_surfaceID = v11.m_surfaceID;
      v12 = (R_RT_DepthHandle)v11;
    }
    else
    {
      v5 = v11;
      LODWORD(_RBX) = v11.m_tracking.m_allocCounter;
      m_surfaceID = v11.m_surfaceID;
      v12 = (R_RT_DepthHandle)v11;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX )
    {
      v5 = (R_RT_Handle)v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v8 = viewInfo->taskGraphViewInfo.frameCount == 0;
  v11 = v5;
  if ( v8 )
  {
    R_SpotShadow_UpdateDynamicMesh();
    R_SpotShadow_FlushStaleCache();
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&v11);
      R_SpotShadow_FlushActiveCache();
    }
    else if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v11.m_surfaceID, *(_QWORD *)&v11.m_tracking.m_allocCounter, v11.m_tracking.m_name, v11.m_tracking.m_location) )
    {
      __debugbreak();
    }
  }
  v11 = taskInfo->attachments[1];
  R_SetInputCodeBuffer(&viewInfo->input, 6u, &v11);
  v11 = taskInfo->attachments[2];
  R_SetInputCodeBuffer(&viewInfo->input, 9u, &v11);
  v11 = taskInfo->attachments[3];
  R_SetInputCodePersistentBuffer(&viewInfo->input, 0x17u, &v11);
  viewInfo->spotshadowActiveCache = v12;
  v9 = sm_spotHTileMask->current.enabled && !rg.splitScreen;
  viewInfo->spotshadowHTileMask = v9;
  v10 = 0;
  viewInfo->taskGraphViewInfo.compressedHandle = (R_RT_Handle)taskInfo->rtGroup.m_depthRt;
  for ( viewInfo->taskGraphViewInfo.compressedSubresourceCount = frontEndDataOut->spotShadowUpdateCount; v10 < frontEndDataOut->spotShadowUpdateCount; ++v10 )
    R_AddDrawCall(viewInfo, &taskInfo->rtGroup, (GfxDrawListType)(v10 + 29), 0x5Du);
}

/*
==============
R_SpotShadow_BlurCommon
==============
*/
void R_SpotShadow_BlurCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  R_RT_Handle v13; 
  bool v15; 
  unsigned int i; 
  R_SpotShadow_StaleCacheEntry *stale; 
  R_RT_BufferHandle v19; 
  R_RT_Handle v20; 
  R_RT_Handle v21; 
  __m256i v22; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_BufferHandle v25; 
  R_RT_BufferHandle v26; 
  R_RT_Handle v27; 

  v23 = *taskInfo->attachments;
  v21 = v23;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v23 = v21;
      __debugbreak();
    }
    else
    {
      v23 = v21;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v13 = taskInfo->attachments[1];
  v21 = v13;
  v20 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v13 = v20;
      v21 = v20;
      __debugbreak();
    }
    else
    {
      v13 = v20;
      v21 = v20;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = v21;
      if ( v15 )
        __debugbreak();
    }
  }
  for ( i = 0; i < data->spotShadowUpdateCount; ++i )
  {
    v22 = (__m256i)v13;
    v22 = *(__m256i *)R_RT_GetViewInternal(&v24, (R_RT_Handle *)&v22, i, -1);
    v20 = (R_RT_Handle)v22;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v20);
      if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v22 = (__m256i)v20;
        __debugbreak();
      }
      else
      {
        v22 = (__m256i)v20;
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
    stale = data->spotShadowUpdates[i].stale;
    v20 = v23;
    R_SpotShadow_StaleCacheEntry::GetColorRt(stale, (const R_RT_ColorHandle *)&v27, (R_RT_ColorHandle *)&v20);
    v19 = *htileMaskCounter;
    v20 = htileMaskIndirectArgs->R_RT_Handle;
    v26 = *htileMask;
    v25 = v19;
    v24 = v27;
    R_SpotShadow_Blur(computeState, (R_RT_ColorHandle *)&v22, (R_RT_ColorHandle *)&v24, &v26, &v25, (R_RT_BufferHandle *)&v20, &data->spotShadowUpdates[i], i);
    v13 = v21;
  }
}

/*
==============
R_SpotShadow_DownsampleCommon
==============
*/
void R_SpotShadow_DownsampleCommon(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_DepthHandle *activeCache, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs)
{
  R_RT_Handle v14; 
  bool v16; 
  unsigned int i; 
  R_RT_BufferHandle v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
  R_RT_Handle v21; 
  R_RT_BufferHandle v22; 
  R_RT_BufferHandle v23; 
  R_RT_Handle v24; 
  R_RT_DepthHandle v25; 
  R_RT_Handle v26; 

  v21 = *taskInfo->attachments;
  v19 = v21;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v21 = v19;
      __debugbreak();
    }
    else
    {
      v21 = v19;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v14 = taskInfo->attachments[1];
  v19 = v14;
  v20 = v14;
  if ( (_WORD)_XMM2 )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v14 = v20;
      v19 = v20;
    }
    else
    {
      v14 = v20;
      v19 = v20;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm2, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v14 = v19;
      if ( v16 )
        __debugbreak();
    }
  }
  for ( i = 0; i < data->spotShadowUpdateCount; ++i )
  {
    v18 = *htileMaskCounter;
    v20 = htileMaskIndirectArgs->R_RT_Handle;
    v23 = *htileMask;
    v25 = *activeCache;
    v22 = v18;
    v24 = v14;
    v26 = v21;
    R_SpotShadow_Downsample(computeState, (R_RT_ColorHandle *)&v26, &v25, (R_RT_DepthHandle *)&v24, &v23, &v22, (R_RT_BufferHandle *)&v20, &data->spotShadowUpdates[i], 1, i);
    v14 = v19;
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

