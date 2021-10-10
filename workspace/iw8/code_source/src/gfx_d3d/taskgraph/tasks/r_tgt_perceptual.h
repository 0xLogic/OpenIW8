/*
==============
RBT_GaussianFilterHdrImage
==============
*/

void __fastcall RBT_GaussianFilterHdrImage(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_GaussianFilterHdrImage@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
R_TGS_DistortSceneColor
==============
*/

void __fastcall R_TGS_DistortSceneColor(R_TG_Script *pScript, R_TG_Handle *outputRt, R_TG_Handle sceneColor, R_TG_Handle vrsSWMask, bool (__fastcall *pCondition)(const GfxViewInfo *), unsigned int gpuTimer, const bool vrsInlineResolve)
{
  ?R_TGS_DistortSceneColor@@YAXPEAUR_TG_Script@@AEAUR_TG_Handle@@U2@2P6A_NPEBUGfxViewInfo@@@ZI_N@Z(pScript, outputRt, sceneColor, vrsSWMask, pCondition, gpuTimer, vrsInlineResolve);
}

/*
==============
RBT_Perceptual_DownsampleToMipCS
==============
*/

void __fastcall RBT_Perceptual_DownsampleToMipCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleToMipCS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleCustom
==============
*/

void __fastcall RBT_Perceptual_DownsampleCustom(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleCustom@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_Downsample
==============
*/

void __fastcall RBT_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_Downsample@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_Downsample_NoDynRes
==============
*/

void __fastcall RBT_Perceptual_Downsample_NoDynRes(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_Downsample_NoDynRes@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
R_TG_Perceptual_UpsampleChain
==============
*/

void __fastcall R_TG_Perceptual_UpsampleChain(R_TG_Script *pScript, R_TG_Handle *downsampleMipChainRt, R_TG_Handle *upsampledRt, unsigned int baseMip, unsigned int mipCount, float *weights)
{
  ?R_TG_Perceptual_UpsampleChain@@YAXPEAUR_TG_Script@@QEAUR_TG_Handle@@AEAU2@IIPEAM@Z(pScript, downsampleMipChainRt, upsampledRt, baseMip, mipCount, weights);
}

/*
==============
RBT_Perceptual_Downsample_NoDynResCS
==============
*/

void __fastcall RBT_Perceptual_Downsample_NoDynResCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_Downsample_NoDynResCS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_GaussianFilterHdrImageToMip
==============
*/

void __fastcall RBT_GaussianFilterHdrImageToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_GaussianFilterHdrImageToMip@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleToMipCSInlineResolve
==============
*/

void __fastcall RBT_Perceptual_DownsampleToMipCSInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleToMipCSInlineResolve@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_Upsample
==============
*/

void __fastcall RBT_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_Upsample@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
cRBT_Perceptual_UpsampleCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,float,float>
==============
*/

unsigned int __fastcall cRBT_Perceptual_UpsampleCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,float,float>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const float *<args_3>, const float *<args_4>)
{
  return ??$cRBT_Perceptual_UpsampleCS@UR_TG_Handle@@U1@U1@MM@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11AEBM2@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
RBT_Perceptual_DownsampleCSInlineResolve
==============
*/

void __fastcall RBT_Perceptual_DownsampleCSInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleCSInlineResolve@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleCS
==============
*/

void __fastcall RBT_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleCS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
R_TGS_DistortionCreateRt
==============
*/

void __fastcall R_TGS_DistortionCreateRt(R_TG_Script *pScript, bool vrsEnabled, R_TG_Handle relativeRt, R_TG_Handle *outCreateRt, bool temporal)
{
  ?R_TGS_DistortionCreateRt@@YAXPEAUR_TG_Script@@_NUR_TG_Handle@@AEAU2@1@Z(pScript, vrsEnabled, relativeRt, outCreateRt, temporal);
}

/*
==============
RBT_Perceptual_UpsampleCS
==============
*/

void __fastcall RBT_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_UpsampleCS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleToMip
==============
*/

void __fastcall RBT_Perceptual_DownsampleToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Perceptual_DownsampleToMip@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
cRBT_Perceptual_UpsampleCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,float,float>
==============
*/
unsigned int cRBT_Perceptual_UpsampleCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,float,float>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const float *<args_3>, const float *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v14; 
  unsigned int v15; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Perceptual_UpsampleCS.m_index;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgs[0] = &<args_0>->index;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = &<args_1>->index;
  v12 = stack.handleArgCount + 1;
  stack.handleArgCount = v12;
  if ( (unsigned int)v12 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v12 = stack.handleArgCount;
  }
  stack.handleArgs[v12] = &<args_2>->index;
  ++stack.handleArgCount;
  v14 = *(_DWORD *)<args_3>;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v14;
  v15 = *(_DWORD *)<args_4>;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v15;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
RBT_GaussianFilterHdrImage
==============
*/
void RBT_GaussianFilterHdrImage(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned __int16 v7; 
  bool v9; 
  R_RT_ColorHandle *attachments; 
  GfxPixelFormat format; 
  GfxRenderTargetFormat v13; 
  const unsigned int *pTaskData; 
  float v15; 
  unsigned int v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
  R_RT_Group result; 

  R_RT_Group::As(&taskInfo->rtGroup, &result, 0x8000u);
  if ( (result.m_colorRts[0].m_surfaceID & 0x7FFF) != 0 )
    v7 = result.m_colorRts[0].m_surfaceID & 0x7FFF | 0x8000;
  else
    v7 = 0;
  v17.m_surfaceID = v7;
  _XMM0 = *(_OWORD *)&result.m_colorRts[0].m_tracking.m_allocCounter;
  v17.m_tracking = result.m_colorRts[0].m_tracking;
  v19 = v17;
  if ( v7 )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_11;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !result.m_colorRts[0].m_tracking.m_allocCounter )
      goto LABEL_11;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v9 )
    __debugbreak();
LABEL_11:
  attachments = (R_RT_ColorHandle *)taskInfo->attachments;
  v20 = v19;
  v18 = attachments->R_RT_Handle;
  v17 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v17;
      __debugbreak();
    }
    else
    {
      v18 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  format = R_RT_Handle::GetSurface(&v20)->m_image.m_base.format;
  if ( format == g_R_RT_renderTargetFmts[3] )
  {
    v13 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
  }
  else
  {
    v13 = GFX_RENDERTARGET_FORMAT_BACKBUFFER;
    if ( format == g_R_RT_renderTargetFmts[5] )
      v13 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_HIGH_PRECISION;
  }
  pTaskData = taskInfo->pTaskData;
  v20 = v19;
  v15 = *((float *)pTaskData + 1);
  v16 = *pTaskData;
  *(GfxCmdBufContext *)&v17.m_surfaceID = *gfxContext;
  RB_GaussianFilterHdrImageStep((GfxCmdBufContext *)&v17, v16, v15, (R_RT_ColorHandle *)&v18, (R_RT_ColorHandle *)&v20, v13, 7u, viewInfo);
}

/*
==============
RBT_GaussianFilterHdrImageToMip
==============
*/
void RBT_GaussianFilterHdrImageToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned __int16 v7; 
  bool v9; 
  R_RT_ColorHandle *attachments; 
  GfxPixelFormat format; 
  GfxRenderTargetFormat v13; 
  const unsigned int *pTaskData; 
  float v15; 
  unsigned int v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
  R_RT_Group result; 

  R_RT_Group::As(&taskInfo->rtGroup, &result, 0x8000u);
  if ( (result.m_colorRts[0].m_surfaceID & 0x7FFF) != 0 )
    v7 = result.m_colorRts[0].m_surfaceID & 0x7FFF | 0x8000;
  else
    v7 = 0;
  v17.m_surfaceID = v7;
  _XMM0 = *(_OWORD *)&result.m_colorRts[0].m_tracking.m_allocCounter;
  v17.m_tracking = result.m_colorRts[0].m_tracking;
  v19 = v17;
  if ( v7 )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_11;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !result.m_colorRts[0].m_tracking.m_allocCounter )
      goto LABEL_11;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v9 )
    __debugbreak();
LABEL_11:
  attachments = (R_RT_ColorHandle *)taskInfo->attachments;
  v20 = v19;
  v18 = attachments->R_RT_Handle;
  v17 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v17;
      __debugbreak();
    }
    else
    {
      v18 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  format = R_RT_Handle::GetSurface(&v20)->m_image.m_base.format;
  if ( format == g_R_RT_renderTargetFmts[3] )
  {
    v13 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
  }
  else
  {
    v13 = GFX_RENDERTARGET_FORMAT_BACKBUFFER;
    if ( format == g_R_RT_renderTargetFmts[5] )
      v13 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_HIGH_PRECISION;
  }
  pTaskData = taskInfo->pTaskData;
  v20 = v19;
  v15 = *((float *)pTaskData + 1);
  v16 = *pTaskData;
  *(GfxCmdBufContext *)&v17.m_surfaceID = *gfxContext;
  RB_GaussianFilterHdrImageStep((GfxCmdBufContext *)&v17, v16, v15, (R_RT_ColorHandle *)&v18, (R_RT_ColorHandle *)&v20, v13, 7u, viewInfo);
}

/*
==============
RBT_Perceptual_Downsample
==============
*/
void RBT_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 
  R_RT_Handle v8; 
  R_RT_Handle v10; 
  __m256i v11; 

  v7 = *taskInfo->pTaskData;
  v8 = *taskInfo->attachments;
  v11 = (__m256i)v8;
  v10 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
    if ( (R_RT_Handle::GetSurface(&v10)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v10;
      __debugbreak();
    }
    else
    {
      v8 = v10;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = (R_RT_Handle)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v11 = (__m256i)v8;
  *(GfxCmdBufContext *)&v10.m_surfaceID = *gfxContext;
  R_Perceptual_Downsample((GfxCmdBufContext *)&v10, viewInfo, (R_RT_ColorHandle *)&v11, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_DownsampleCS
==============
*/
void RBT_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  R_RT_Handle *attachments; 
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_ColorHandle v18; 
  __m256i v19; 

  v9 = *taskInfo->pTaskData;
  v17 = *taskInfo->attachments;
  v16 = v17;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = v16;
      __debugbreak();
    }
    else
    {
      v17 = v16;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18.m_surfaceID = 0;
  v18.m_tracking.m_allocCounter = 0;
  attachments = taskInfo->attachments;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v18.m_tracking.m_name = _XMM0;
  v13 = attachments[1];
  v19 = (__m256i)v13;
  v16 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v13 = v16;
      __debugbreak();
    }
    else
    {
      v13 = v16;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = (R_RT_Handle)v19;
      if ( v15 )
        __debugbreak();
    }
  }
  v19 = (__m256i)v17;
  v17 = v13;
  R_Perceptual_DownsampleCS(computeState, viewInfo, (R_RT_ColorHandle *)&v17, &v18, (R_RT_ColorHandle *)&v19, (VeilTonemapMode)v9, 0);
}

/*
==============
RBT_Perceptual_DownsampleCSInlineResolve
==============
*/
void RBT_Perceptual_DownsampleCSInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  R_RT_Handle v12; 
  bool v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  __m256i v18; 

  v9 = *taskInfo->pTaskData;
  v16 = *taskInfo->attachments;
  v15 = v16;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v16 = v15;
      __debugbreak();
    }
    else
    {
      v16 = v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = taskInfo->attachments[2];
  v15 = v17;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = v15;
      __debugbreak();
    }
    else
    {
      v17 = v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v12 = taskInfo->attachments[1];
  v18 = (__m256i)v12;
  v15 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v12 = v15;
      __debugbreak();
    }
    else
    {
      v12 = v15;
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
  v18 = (__m256i)v16;
  v16 = v12;
  R_Perceptual_DownsampleCS(computeState, viewInfo, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v17, (R_RT_ColorHandle *)&v18, (VeilTonemapMode)v9, 1);
}

/*
==============
RBT_Perceptual_DownsampleCustom
==============
*/
void RBT_Perceptual_DownsampleCustom(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 
  R_RT_Handle v8; 
  R_RT_Handle v10; 
  __m256i v11; 

  v7 = *taskInfo->pTaskData;
  v8 = *taskInfo->attachments;
  v11 = (__m256i)v8;
  v10 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
    if ( (R_RT_Handle::GetSurface(&v10)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v10;
      __debugbreak();
    }
    else
    {
      v8 = v10;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = (R_RT_Handle)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v11 = (__m256i)v8;
  *(GfxCmdBufContext *)&v10.m_surfaceID = *gfxContext;
  R_Perceptual_Downsample((GfxCmdBufContext *)&v10, viewInfo, (R_RT_ColorHandle *)&v11, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_DownsampleToMip
==============
*/
void RBT_Perceptual_DownsampleToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufContext v4; 

  v4 = *gfxContext;
  RBT_Perceptual_Downsample(&v4, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleToMipCS
==============
*/

void __fastcall RBT_Perceptual_DownsampleToMipCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  RBT_Perceptual_DownsampleCS(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_DownsampleToMipCSInlineResolve
==============
*/

void __fastcall RBT_Perceptual_DownsampleToMipCSInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  RBT_Perceptual_DownsampleCSInlineResolve(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Perceptual_Downsample_NoDynRes
==============
*/
void RBT_Perceptual_Downsample_NoDynRes(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 
  R_RT_Handle v8; 
  R_RT_Handle v10; 
  __m256i v11; 

  v7 = *taskInfo->pTaskData;
  v8 = *taskInfo->attachments;
  v11 = (__m256i)v8;
  v10 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v10);
    if ( (R_RT_Handle::GetSurface(&v10)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v10;
      __debugbreak();
    }
    else
    {
      v8 = v10;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = (R_RT_Handle)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v11 = (__m256i)v8;
  *(GfxCmdBufContext *)&v10.m_surfaceID = *gfxContext;
  R_Perceptual_Downsample((GfxCmdBufContext *)&v10, viewInfo, (R_RT_ColorHandle *)&v11, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_Downsample_NoDynResCS
==============
*/
void RBT_Perceptual_Downsample_NoDynResCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  R_RT_Handle *attachments; 
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_ColorHandle v18; 
  __m256i v19; 

  v9 = *taskInfo->pTaskData;
  v17 = *taskInfo->attachments;
  v16 = v17;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = v16;
      __debugbreak();
    }
    else
    {
      v17 = v16;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18.m_surfaceID = 0;
  v18.m_tracking.m_allocCounter = 0;
  attachments = taskInfo->attachments;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v18.m_tracking.m_name = _XMM0;
  v13 = attachments[1];
  v19 = (__m256i)v13;
  v16 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v13 = v16;
      __debugbreak();
    }
    else
    {
      v13 = v16;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = (R_RT_Handle)v19;
      if ( v15 )
        __debugbreak();
    }
  }
  v19 = (__m256i)v17;
  v17 = v13;
  R_Perceptual_DownsampleCS(computeState, viewInfo, (R_RT_ColorHandle *)&v17, &v18, (R_RT_ColorHandle *)&v19, (VeilTonemapMode)v9, 0);
}

/*
==============
RBT_Perceptual_Upsample
==============
*/
void RBT_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const unsigned int *pTaskData; 
  float v10; 
  float v11; 
  R_RT_Handle v13; 
  bool v15; 
  __m256i v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  __m256i v19[2]; 

  pTaskData = taskInfo->pTaskData;
  v10 = *(float *)pTaskData;
  v11 = *((float *)pTaskData + 1);
  v18 = *taskInfo->attachments;
  v17 = v18;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v17;
      __debugbreak();
    }
    else
    {
      v18 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v13 = taskInfo->attachments[1];
  v19[0] = (__m256i)v13;
  v17 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v13 = v17;
      __debugbreak();
    }
    else
    {
      v13 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = (R_RT_Handle)v19[0];
      if ( v15 )
        __debugbreak();
    }
  }
  v16 = (__m256i)v18;
  v18 = v13;
  *(GfxCmdBufContext *)&v17.m_surfaceID = *gfxContext;
  v19[0] = v16;
  R_Perceptual_Upsample((GfxCmdBufContext *)&v17, viewInfo, (R_RT_ColorHandle *)&v18, (R_RT_ColorHandle *)v19, v10, v11);
}

/*
==============
RBT_Perceptual_UpsampleCS
==============
*/
void RBT_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const unsigned int *pTaskData; 
  float v10; 
  float v11; 
  R_RT_Handle v14; 
  bool v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  __m256i v20[2]; 

  pTaskData = taskInfo->pTaskData;
  v10 = *(float *)pTaskData;
  v11 = *((float *)pTaskData + 1);
  v18 = taskInfo->attachments[1];
  v17 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v17;
      __debugbreak();
    }
    else
    {
      v18 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v19 = *taskInfo->attachments;
  v17 = v19;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v19 = v17;
      __debugbreak();
    }
    else
    {
      v19 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v14 = taskInfo->attachments[2];
  v20[0] = (__m256i)v14;
  v17 = v14;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v14 = v17;
      __debugbreak();
    }
    else
    {
      v14 = v17;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v14 = (R_RT_Handle)v20[0];
      if ( v16 )
        __debugbreak();
    }
  }
  v20[0] = (__m256i)v18;
  v18 = v14;
  R_Perceptual_UpsampleCS(computeState, viewInfo, (R_RT_ColorHandle *)&v18, (R_RT_ColorHandle *)&v19, (R_RT_ColorHandle *)v20, v10, v11);
}

/*
==============
R_TGS_DistortSceneColor
==============
*/
void R_TGS_DistortSceneColor(R_TG_Script *pScript, R_TG_Handle *outputRt, R_TG_Handle sceneColor, R_TG_Handle vrsSWMask, bool (*pCondition)(const GfxViewInfo *), unsigned int gpuTimer, const bool vrsInlineResolve)
{
  unsigned int v9; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  float v15; 
  unsigned int v16; 
  int v17; 
  unsigned int GaussianFilterChain; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int j; 
  unsigned int v23; 
  __int64 v24; 
  unsigned int v25; 
  unsigned int i; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  R_TG_Handle v30[2]; 
  bool (__fastcall *v31)(const GfxViewInfo *); 
  R_TG_AddTaskStack arguments; 
  R_TG_AddTaskStack v33; 
  R_TG_AddTaskStack v34; 
  unsigned int v35; 
  unsigned int index; 

  index = vrsSWMask.index;
  v35 = sceneColor.index;
  v31 = pCondition;
  if ( pCondition )
    cConditionBegin(pScript, pCondition);
  if ( gpuTimer )
    cGpuTimerBegin(pScript, gpuTimer);
  memset_0(&arguments, 0, sizeof(arguments));
  v9 = arguments.handleArgCount + 1;
  arguments.handleArgs[0] = &outputRt->index;
  ++arguments.handleArgCount;
  if ( vrsInlineResolve )
  {
    m_index = g_R_TG_Def_RBT_Perceptual_DownsampleToMipCSInlineResolve.m_index;
    if ( v9 >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.handleArgs[arguments.handleArgCount] = &v35;
    handleArgCount = arguments.handleArgCount + 1;
    arguments.handleArgCount = handleArgCount;
    if ( (unsigned int)handleArgCount >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      handleArgCount = arguments.handleArgCount;
    }
    arguments.handleArgs[handleArgCount] = &index;
    if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount] = 0;
  }
  else
  {
    m_index = g_R_TG_Def_RBT_Perceptual_DownsampleToMipCS.m_index;
    if ( v9 >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.handleArgs[arguments.handleArgCount] = &v35;
    if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount] = 0;
  }
  ++arguments.paramArgCount;
  R_TG_AddTask<>(pScript, m_index, &arguments, 1);
  v28 = 1;
  v12 = 1;
  do
  {
    v13 = 1 << (v12 + 1);
    v14 = (pScript->sceneSize.v[0] + v13 - 1) / v13;
    v15 = (float)v12;
    *(float *)&v16 = v15 * 0.5;
    v17 = (v13 + pScript->sceneSize.v[1] - 1) / v13;
    v30[1] = (R_TG_Handle)v16;
    GaussianFilterChain = R_GenerateGaussianFilterChain(*(float *)&v16, v14, v17);
    v27 = v12 - 1;
    if ( (GaussianFilterChain & 1) != 0 )
    {
      v30[0].index = -1;
      memset_0(&v34, 0, sizeof(v34));
      v23 = g_R_TG_Def_RBT_Perceptual_DownsampleCS.m_index;
      v34.handleArgs[0] = (unsigned int *)v30;
      v24 = v34.handleArgCount + 1;
      v34.handleArgCount = v24;
      if ( (unsigned int)v24 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v24 = v34.handleArgCount;
      }
      v34.handleArgs[v24] = &outputRt->index;
      if ( ++v34.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v34.paramArgs[v34.paramArgCount++] = v27;
      R_TG_AddTask<>(pScript, v23, &v34, 1);
      *(float *)&v27 = 0.0;
      v25 = GaussianFilterChain - 1;
      if ( v25 )
      {
        for ( i = 0; i < v25; v27 = i )
        {
          v29 = 0;
          if ( (i & 1) != 0 )
            cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,int,R_TG_Handle,unsigned int,unsigned int,float>(pScript, v30, (const int *)&v29, outputRt, &v28, &v27, (const float *)&v30[1].index);
          else
            cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v28, v30, (const int *)&v29, &v27, (const float *)&v30[1].index);
          ++i;
        }
      }
      v29 = v25;
      *(float *)&v27 = 0.0;
      cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v28, v30, (const int *)&v27, &v29, (const float *)&v30[1].index);
    }
    else
    {
      memset_0(&v33, 0, sizeof(v33));
      v19 = g_R_TG_Def_RBT_Perceptual_DownsampleToMipCS.m_index;
      v33.handleArgs[0] = &outputRt->index;
      if ( ++v33.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v33.paramArgs[v33.paramArgCount++] = v28;
      if ( v33.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v33.handleArgs[v33.handleArgCount] = &outputRt->index;
      if ( ++v33.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v33.paramArgs[v33.paramArgCount++] = v27;
      R_TG_AddTask<>(pScript, v19, &v33, 1);
      if ( GaussianFilterChain )
      {
        v30[0].index = -1;
        memset_0(&arguments, 0, sizeof(arguments));
        v20 = g_R_TG_Def_RBT_GaussianFilterHdrImage.m_index;
        arguments.handleArgs[0] = (unsigned int *)v30;
        v21 = arguments.handleArgCount + 1;
        arguments.handleArgCount = v21;
        if ( (unsigned int)v21 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v21 = arguments.handleArgCount;
        }
        arguments.handleArgs[v21] = &outputRt->index;
        if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        arguments.paramArgs[arguments.paramArgCount++] = v28;
        if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v27 = v16;
        arguments.paramArgs[arguments.paramArgCount++] = 0;
        if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        arguments.paramArgs[arguments.paramArgCount++] = v27;
        R_TG_AddTask(pScript, v20, &arguments);
        v27 = 1;
        if ( GaussianFilterChain > 1 )
        {
          for ( j = 1; j < GaussianFilterChain; v27 = j )
          {
            v29 = 0;
            if ( (j & 1) != 0 )
              cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v28, v30, (const int *)&v29, &v27, (const float *)&v30[1].index);
            else
              cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,int,R_TG_Handle,unsigned int,unsigned int,float>(pScript, v30, (const int *)&v29, outputRt, &v28, &v27, (const float *)&v30[1].index);
            ++j;
          }
        }
      }
    }
    v12 = ++v28;
  }
  while ( v28 < 4 );
  if ( gpuTimer )
    cGpuTimerEnd(pScript);
  if ( v31 )
    cConditionEnd(pScript);
}

/*
==============
R_TGS_DistortionCreateRt
==============
*/
void R_TGS_DistortionCreateRt(R_TG_Script *pScript, bool vrsEnabled, R_TG_Handle relativeRt, R_TG_Handle *outCreateRt, bool temporal)
{
  bool v7; 
  int v8; 
  unsigned int m_index; 
  R_TG_AddTaskStack stack; 
  unsigned int index; 

  index = relativeRt.index;
  if ( outCreateRt->index == -1 )
  {
    v7 = temporal;
    temporal = -temporal;
    v8 = v7 ? 0x9000 : 0;
    if ( vrsEnabled )
    {
      memset_0(&stack, 0, sizeof(stack));
      m_index = g_R_TG_Def_Util_CreateRelativeTexture_Full.m_index;
      stack.handleArgs[0] = &outCreateRt->index;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 4;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 3;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 1;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = v8;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount] = &index;
    }
    else
    {
      memset_0(&stack, 0, sizeof(stack));
      m_index = g_R_TG_Def_Util_CreateRelativeTexture_Half.m_index;
      stack.handleArgs[0] = &outCreateRt->index;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 4;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 3;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 1;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = v8;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount] = &index;
    }
    ++stack.handleArgCount;
    R_TG_AddTask(pScript, m_index, &stack);
  }
}

/*
==============
R_TG_Perceptual_UpsampleChain
==============
*/
void R_TG_Perceptual_UpsampleChain(R_TG_Script *pScript, R_TG_Handle *downsampleMipChainRt, R_TG_Handle *upsampledRt, unsigned int baseMip, unsigned int mipCount, float *weights)
{
  __int64 v9; 
  unsigned int v10; 
  float v11; 
  float v12; 
  unsigned int m_index; 
  unsigned int handleArgCount; 
  __int64 v15; 
  unsigned int v16; 
  R_TG_Handle *v17; 
  R_TG_AddTaskStack stack; 

  v17 = downsampleMipChainRt;
  upsampledRt->index = (unsigned int)downsampleMipChainRt[baseMip - 1 + mipCount];
  cGpuTimerBegin(pScript, 0x73u);
  v9 = (int)(mipCount - 1);
  if ( (int)(mipCount - 1) > 0 )
  {
    v10 = mipCount - 1 + baseMip;
    do
    {
      if ( v9 == mipCount - 1 )
        v11 = weights[v9];
      else
        v11 = FLOAT_1_0;
      v12 = weights[v9 - 1];
      v16 = -1;
      memset_0(&stack, 0, sizeof(stack));
      m_index = g_R_TG_Def_RBT_Perceptual_UpsampleCS.m_index;
      handleArgCount = stack.handleArgCount + 1;
      stack.handleArgs[0] = &v16;
      stack.handleArgCount = handleArgCount;
      if ( handleArgCount >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        handleArgCount = stack.handleArgCount;
      }
      stack.handleArgs[handleArgCount] = &v17[v10 - 1].index;
      v15 = stack.handleArgCount + 1;
      stack.handleArgCount = v15;
      if ( (unsigned int)v15 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v15 = stack.handleArgCount;
      }
      stack.handleArgs[v15] = &upsampledRt->index;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      *(float *)&stack.paramArgs[stack.paramArgCount++] = v11;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      *(float *)&stack.paramArgs[stack.paramArgCount++] = v12;
      R_TG_AddTask(pScript, m_index, &stack);
      --v10;
      --v9;
      upsampledRt->index = v16;
    }
    while ( v9 > 0 );
  }
  cGpuTimerEnd(pScript);
}

