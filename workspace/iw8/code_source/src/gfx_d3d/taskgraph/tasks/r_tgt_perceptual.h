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
  unsigned int v18; 
  unsigned int v19; 
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
  _RAX = <args_3>;
  ++stack.handleArgCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+190h+var_160], xmm0
  }
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount] = v18;
  _RAX = <args_4>;
  ++stack.paramArgCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+190h+var_160], xmm0
  }
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v19;
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
  bool v11; 
  GfxPixelFormat format; 
  GfxRenderTargetFormat v19; 
  unsigned int v24; 
  R_RT_Handle v26; 
  R_RT_ColorHandle v27; 
  R_RT_Handle v28; 
  R_RT_Handle v29; 
  R_RT_Group result; 

  _RDI = gfxContext;
  R_RT_Group::As(&taskInfo->rtGroup, &result, 0x8000u);
  if ( (result.m_colorRts[0].m_surfaceID & 0x7FFF) != 0 )
    v7 = result.m_colorRts[0].m_surfaceID & 0x7FFF | 0x8000;
  else
    v7 = 0;
  v26.m_surfaceID = v7;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0D0h+result.m_colorRts.baseclass_0.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+0D0h+result.m_colorRts.baseclass_0.m_tracking.m_location]
    vmovups xmmword ptr [rsp+1D0h+var_190.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+1D0h+var_190.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+0D0h+var_150.m_surfaceID], ymm0
  }
  if ( v7 )
  {
    R_RT_Handle::GetSurface(&v28);
    if ( (R_RT_Handle::GetSurface(&v28)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_11;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !result.m_colorRts[0].m_tracking.m_allocCounter )
      goto LABEL_11;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v11 )
    __debugbreak();
LABEL_11:
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0D0h+var_150.m_surfaceID]
    vmovups ymmword ptr [rbp+0D0h+var_130.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+1D0h+var_170], ymm0
    vmovups ymmword ptr [rsp+1D0h+var_190.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
        vmovups [rsp+1D0h+var_170], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
        vmovups [rsp+1D0h+var_170], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  format = R_RT_Handle::GetSurface(&v29)->m_image.m_base.format;
  if ( format == g_R_RT_renderTargetFmts[3] )
  {
    v19 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
  }
  else
  {
    v19 = GFX_RENDERTARGET_FORMAT_BACKBUFFER;
    if ( format == g_R_RT_renderTargetFmts[5] )
      v19 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_HIGH_PRECISION;
  }
  __asm { vmovups ymm0, ymmword ptr [rbp+0D0h+var_150.m_surfaceID] }
  _RAX = taskInfo->pTaskData;
  __asm
  {
    vmovups ymmword ptr [rbp+0D0h+var_130.m_surfaceID], ymm0
    vmovups ymm0, [rsp+1D0h+var_170]
    vmovss  xmm2, dword ptr [rax+4]
  }
  v24 = *_RAX;
  __asm
  {
    vmovups [rsp+1D0h+var_170], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+1D0h+var_190.m_surfaceID], xmm0
  }
  RB_GaussianFilterHdrImageStep((GfxCmdBufContext *)&v26, v24, *(float *)&_XMM2, &v27, (R_RT_ColorHandle *)&v29, v19, 7u, viewInfo);
}

/*
==============
RBT_GaussianFilterHdrImageToMip
==============
*/
void RBT_GaussianFilterHdrImageToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned __int16 v7; 
  bool v11; 
  GfxPixelFormat format; 
  GfxRenderTargetFormat v19; 
  unsigned int v24; 
  R_RT_Handle v26; 
  R_RT_ColorHandle v27; 
  R_RT_Handle v28; 
  R_RT_Handle v29; 
  R_RT_Group result; 

  _RDI = gfxContext;
  R_RT_Group::As(&taskInfo->rtGroup, &result, 0x8000u);
  if ( (result.m_colorRts[0].m_surfaceID & 0x7FFF) != 0 )
    v7 = result.m_colorRts[0].m_surfaceID & 0x7FFF | 0x8000;
  else
    v7 = 0;
  v26.m_surfaceID = v7;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0D0h+result.m_colorRts.baseclass_0.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+0D0h+result.m_colorRts.baseclass_0.m_tracking.m_location]
    vmovups xmmword ptr [rsp+1D0h+var_190.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+1D0h+var_190.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+0D0h+var_150.m_surfaceID], ymm0
  }
  if ( v7 )
  {
    R_RT_Handle::GetSurface(&v28);
    if ( (R_RT_Handle::GetSurface(&v28)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_11;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !result.m_colorRts[0].m_tracking.m_allocCounter )
      goto LABEL_11;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v11 )
    __debugbreak();
LABEL_11:
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0D0h+var_150.m_surfaceID]
    vmovups ymmword ptr [rbp+0D0h+var_130.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+1D0h+var_170], ymm0
    vmovups ymmword ptr [rsp+1D0h+var_190.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
        vmovups [rsp+1D0h+var_170], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1D0h+var_190.m_surfaceID]
        vmovups [rsp+1D0h+var_170], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  format = R_RT_Handle::GetSurface(&v29)->m_image.m_base.format;
  if ( format == g_R_RT_renderTargetFmts[3] )
  {
    v19 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
  }
  else
  {
    v19 = GFX_RENDERTARGET_FORMAT_BACKBUFFER;
    if ( format == g_R_RT_renderTargetFmts[5] )
      v19 = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_HIGH_PRECISION;
  }
  __asm { vmovups ymm0, ymmword ptr [rbp+0D0h+var_150.m_surfaceID] }
  _RAX = taskInfo->pTaskData;
  __asm
  {
    vmovups ymmword ptr [rbp+0D0h+var_130.m_surfaceID], ymm0
    vmovups ymm0, [rsp+1D0h+var_170]
    vmovss  xmm2, dword ptr [rax+4]
  }
  v24 = *_RAX;
  __asm
  {
    vmovups [rsp+1D0h+var_170], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+1D0h+var_190.m_surfaceID], xmm0
  }
  RB_GaussianFilterHdrImageStep((GfxCmdBufContext *)&v26, v24, *(float *)&_XMM2, &v27, (R_RT_ColorHandle *)&v29, v19, 7u, viewInfo);
}

/*
==============
RBT_Perceptual_Downsample
==============
*/
void RBT_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 
  R_RT_Handle v12; 
  R_RT_ColorHandle v13; 

  _RDI = gfxContext;
  v7 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+78h+var_28], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rsp+78h+var_28] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+78h+var_48.m_surfaceID], xmm0
  }
  R_Perceptual_Downsample((GfxCmdBufContext *)&v12, viewInfo, &v13, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_DownsampleCS
==============
*/
void RBT_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  bool v19; 
  R_RT_Handle v22; 
  R_RT_ColorHandle v23; 
  R_RT_ColorHandle v24; 
  R_RT_ColorHandle v25; 

  v9 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0D8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  _RAX = taskInfo->attachments;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0D8h+var_58+10h], xmm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_38] }
      if ( v19 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_78]
    vmovups [rsp+0D8h+var_38], ymm1
    vmovups ymm1, [rsp+0D8h+var_58]
    vmovups [rsp+0D8h+var_58], ymm1
    vmovups [rsp+0D8h+var_78], ymm0
  }
  R_Perceptual_DownsampleCS(computeState, viewInfo, &v23, &v24, &v25, (VeilTonemapMode)v9, 0);
}

/*
==============
RBT_Perceptual_DownsampleCSInlineResolve
==============
*/
void RBT_Perceptual_DownsampleCSInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  bool v23; 
  R_RT_Handle v26; 
  R_RT_ColorHandle v27; 
  R_RT_ColorHandle v28; 
  R_RT_ColorHandle v29; 

  v9 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_78], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
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
    vmovups [rsp+0D8h+var_58], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_58], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_58], ymm0
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
    vmovups [rsp+0D8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_38] }
      if ( v23 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_78]
    vmovups [rsp+0D8h+var_38], ymm1
    vmovups ymm1, [rsp+0D8h+var_58]
    vmovups [rsp+0D8h+var_58], ymm1
    vmovups [rsp+0D8h+var_78], ymm0
  }
  R_Perceptual_DownsampleCS(computeState, viewInfo, &v27, &v28, &v29, (VeilTonemapMode)v9, 1);
}

/*
==============
RBT_Perceptual_DownsampleCustom
==============
*/
void RBT_Perceptual_DownsampleCustom(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 
  R_RT_Handle v12; 
  R_RT_ColorHandle v13; 

  _RDI = gfxContext;
  v7 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+78h+var_28], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rsp+78h+var_28] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+78h+var_48.m_surfaceID], xmm0
  }
  R_Perceptual_Downsample((GfxCmdBufContext *)&v12, viewInfo, &v13, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_DownsampleToMip
==============
*/
void RBT_Perceptual_DownsampleToMip(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufContext v5; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  RBT_Perceptual_Downsample(&v5, taskInfo, viewInfo, data);
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
  R_RT_Handle v12; 
  R_RT_ColorHandle v13; 

  _RDI = gfxContext;
  v7 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+78h+var_28], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rsp+78h+var_28] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups [rsp+78h+var_28], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+78h+var_48.m_surfaceID], xmm0
  }
  R_Perceptual_Downsample((GfxCmdBufContext *)&v12, viewInfo, &v13, (VeilTonemapMode)v7);
}

/*
==============
RBT_Perceptual_Downsample_NoDynResCS
==============
*/
void RBT_Perceptual_Downsample_NoDynResCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v9; 
  bool v19; 
  R_RT_Handle v22; 
  R_RT_ColorHandle v23; 
  R_RT_ColorHandle v24; 
  R_RT_ColorHandle v25; 

  v9 = *taskInfo->pTaskData;
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0D8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  _RAX = taskInfo->attachments;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0D8h+var_58+10h], xmm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_38] }
      if ( v19 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_78]
    vmovups [rsp+0D8h+var_38], ymm1
    vmovups ymm1, [rsp+0D8h+var_58]
    vmovups [rsp+0D8h+var_58], ymm1
    vmovups [rsp+0D8h+var_78], ymm0
  }
  R_Perceptual_DownsampleCS(computeState, viewInfo, &v23, &v24, &v25, (VeilTonemapMode)v9, 0);
}

/*
==============
RBT_Perceptual_Upsample
==============
*/
void RBT_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v23; 
  float fmt; 
  float v30; 
  R_RT_Handle v31; 
  R_RT_ColorHandle v32; 
  R_RT_ColorHandle v33; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RAX = taskInfo->pTaskData;
  _RSI = gfxContext;
  __asm
  {
    vmovss  xmm6, dword ptr [rax]
    vmovss  xmm7, dword ptr [rax+4]
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0C8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0C8h+var_98.m_surfaceID]
        vmovups [rsp+0C8h+var_78], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0C8h+var_98.m_surfaceID]
        vmovups [rsp+0C8h+var_78], ymm0
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
    vmovups [rsp+0C8h+var_58], ymm0
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0C8h+var_98.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0C8h+var_98.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0C8h+var_58] }
      if ( v23 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0C8h+var_78]
    vmovups [rsp+0C8h+var_78], ymm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  dword ptr [rsp+0C8h+var_A0], xmm7
    vmovups xmmword ptr [rsp+0C8h+var_98.m_surfaceID], xmm0
    vmovss  dword ptr [rsp+0C8h+fmt], xmm6
    vmovups [rsp+0C8h+var_58], ymm1
  }
  R_Perceptual_Upsample((GfxCmdBufContext *)&v31, viewInfo, &v32, &v33, fmt, v30);
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RBT_Perceptual_UpsampleCS
==============
*/
void RBT_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v28; 
  float v34; 
  float v35; 
  R_RT_Handle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 
  R_RT_ColorHandle v39; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RAX = taskInfo->pTaskData;
  __asm
  {
    vmovss  xmm6, dword ptr [rax]
    vmovss  xmm7, dword ptr [rax+4]
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups [rsp+0F8h+var_98], ymm0
    vmovups ymmword ptr [rsp+0F8h+var_B8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v36);
    if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID]
        vmovups [rsp+0F8h+var_98], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID]
        vmovups [rsp+0F8h+var_98], ymm0
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
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0F8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0F8h+var_B8.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v36);
    if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID]
        vmovups [rsp+0F8h+var_78], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID]
        vmovups [rsp+0F8h+var_78], ymm0
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
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups [rsp+0F8h+var_58], ymm0
    vmovups ymmword ptr [rsp+0F8h+var_B8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v36);
    if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0F8h+var_B8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0F8h+var_58] }
      if ( v28 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0F8h+var_98]
    vmovups [rsp+0F8h+var_58], ymm1
    vmovups ymm1, [rsp+0F8h+var_78]
    vmovss  [rsp+0F8h+var_C8], xmm7
    vmovss  dword ptr [rsp+0F8h+var_D0], xmm6
    vmovups [rsp+0F8h+var_78], ymm1
    vmovups [rsp+0F8h+var_98], ymm0
  }
  R_Perceptual_UpsampleCS(computeState, viewInfo, &v37, &v38, &v39, v34, v35);
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_TGS_DistortSceneColor
==============
*/
void R_TGS_DistortSceneColor(R_TG_Script *pScript, R_TG_Handle *outputRt, R_TG_Handle sceneColor, R_TG_Handle vrsSWMask, bool (*pCondition)(const GfxViewInfo *), unsigned int gpuTimer, const bool vrsInlineResolve)
{
  bool (__fastcall *v11)(const GfxViewInfo *); 
  unsigned int v14; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v18; 
  unsigned int v19; 
  int v21; 
  int v24; 
  unsigned int GaussianFilterChain; 
  unsigned int v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned int j; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int i; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  R_TG_Handle v39[2]; 
  bool (__fastcall *v40)(const GfxViewInfo *); 
  R_TG_AddTaskStack arguments; 
  R_TG_AddTaskStack v42; 
  R_TG_AddTaskStack v43; 
  void *retaddr; 
  unsigned int v46; 
  unsigned int index; 

  _R11 = &retaddr;
  index = vrsSWMask.index;
  v46 = sceneColor.index;
  v11 = pCondition;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm7
  }
  v40 = v11;
  if ( v11 )
    cConditionBegin(pScript, v11);
  if ( gpuTimer )
    cGpuTimerBegin(pScript, gpuTimer);
  memset_0(&arguments, 0, sizeof(arguments));
  v14 = arguments.handleArgCount + 1;
  arguments.handleArgs[0] = &outputRt->index;
  ++arguments.handleArgCount;
  if ( vrsInlineResolve )
  {
    m_index = g_R_TG_Def_RBT_Perceptual_DownsampleToMipCSInlineResolve.m_index;
    if ( v14 >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.handleArgs[arguments.handleArgCount] = &v46;
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
    if ( v14 >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.handleArgs[arguments.handleArgCount] = &v46;
    if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount] = 0;
  }
  ++arguments.paramArgCount;
  R_TG_AddTask<>(pScript, m_index, &arguments, 1);
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  v37 = 1;
  v18 = 1;
  do
  {
    v19 = 1 << (v18 + 1);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    v21 = (pScript->sceneSize.v[0] + v19 - 1) / v19;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm6, xmm0, xmm7
    }
    v24 = (v19 + pScript->sceneSize.v[1] - 1) / v19;
    __asm
    {
      vmovaps xmm0, xmm6; radius
      vmovss  [rsp+430h+var_3E0.index+4], xmm6
    }
    GaussianFilterChain = R_GenerateGaussianFilterChain(*(float *)&_XMM0, v21, v24);
    v36 = v18 - 1;
    if ( (GaussianFilterChain & 1) != 0 )
    {
      v39[0].index = -1;
      memset_0(&v43, 0, sizeof(v43));
      v30 = g_R_TG_Def_RBT_Perceptual_DownsampleCS.m_index;
      v43.handleArgs[0] = (unsigned int *)v39;
      v31 = v43.handleArgCount + 1;
      v43.handleArgCount = v31;
      if ( (unsigned int)v31 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v31 = v43.handleArgCount;
      }
      v43.handleArgs[v31] = &outputRt->index;
      if ( ++v43.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v43.paramArgs[v43.paramArgCount++] = v36;
      R_TG_AddTask<>(pScript, v30, &v43, 1);
      v36 = 0;
      v32 = GaussianFilterChain - 1;
      if ( v32 )
      {
        for ( i = 0; i < v32; v36 = i )
        {
          v38 = 0;
          if ( (i & 1) != 0 )
            cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,int,R_TG_Handle,unsigned int,unsigned int,float>(pScript, v39, (const int *)&v38, outputRt, &v37, &v36, (const float *)&v39[1].index);
          else
            cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v37, v39, (const int *)&v38, &v36, (const float *)&v39[1].index);
          ++i;
        }
      }
      v38 = v32;
      v36 = 0;
      cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v37, v39, (const int *)&v36, &v38, (const float *)&v39[1].index);
    }
    else
    {
      memset_0(&v42, 0, sizeof(v42));
      v26 = g_R_TG_Def_RBT_Perceptual_DownsampleToMipCS.m_index;
      v42.handleArgs[0] = &outputRt->index;
      if ( ++v42.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v42.paramArgs[v42.paramArgCount++] = v37;
      if ( v42.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v42.handleArgs[v42.handleArgCount] = &outputRt->index;
      if ( ++v42.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v42.paramArgs[v42.paramArgCount++] = v36;
      R_TG_AddTask<>(pScript, v26, &v42, 1);
      if ( GaussianFilterChain )
      {
        v39[0].index = -1;
        memset_0(&arguments, 0, sizeof(arguments));
        v27 = g_R_TG_Def_RBT_GaussianFilterHdrImage.m_index;
        arguments.handleArgs[0] = (unsigned int *)v39;
        v28 = arguments.handleArgCount + 1;
        arguments.handleArgCount = v28;
        if ( (unsigned int)v28 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v28 = arguments.handleArgCount;
        }
        arguments.handleArgs[v28] = &outputRt->index;
        if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        arguments.paramArgs[arguments.paramArgCount++] = v37;
        if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        __asm { vmovss  [rsp+430h+var_3F0], xmm6 }
        arguments.paramArgs[arguments.paramArgCount++] = 0;
        if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        arguments.paramArgs[arguments.paramArgCount++] = v36;
        R_TG_AddTask(pScript, v27, &arguments);
        v36 = 1;
        if ( GaussianFilterChain > 1 )
        {
          for ( j = 1; j < GaussianFilterChain; v36 = j )
          {
            v38 = 0;
            if ( (j & 1) != 0 )
              cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,unsigned int,R_TG_Handle,int,unsigned int,float>(pScript, outputRt, &v37, v39, (const int *)&v38, &v36, (const float *)&v39[1].index);
            else
              cRBT_GaussianFilterHdrImageToMip<R_TG_Handle,int,R_TG_Handle,unsigned int,unsigned int,float>(pScript, v39, (const int *)&v38, outputRt, &v37, &v36, (const float *)&v39[1].index);
            ++j;
          }
        }
      }
    }
    v18 = ++v37;
  }
  while ( v37 < 4 );
  __asm
  {
    vmovaps xmm7, [rsp+430h+var_68+8]
    vmovaps xmm6, xmmword ptr [rsp+430h+var_58+8]
  }
  if ( gpuTimer )
    cGpuTimerEnd(pScript);
  if ( v40 )
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
  unsigned int v13; 
  unsigned int m_index; 
  unsigned int handleArgCount; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  R_TG_Handle *v28; 
  R_TG_AddTaskStack stack; 

  v28 = downsampleMipChainRt;
  upsampledRt->index = (unsigned int)downsampleMipChainRt[baseMip - 1 + mipCount];
  cGpuTimerBegin(pScript, 0x73u);
  _RBX = (int)(mipCount - 1);
  if ( (int)(mipCount - 1) > 0 )
  {
    v13 = mipCount - 1 + baseMip;
    _RSI = weights;
    __asm
    {
      vmovaps [rsp+1E0h+var_40], xmm6
      vmovaps [rsp+1E0h+var_50], xmm7
      vmovaps [rsp+1E0h+var_60], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      if ( _RBX == mipCount - 1 )
        __asm { vmovss  xmm6, dword ptr [rsi+rbx*4] }
      else
        __asm { vmovaps xmm6, xmm8 }
      __asm { vmovss  xmm7, dword ptr [rsi+rbx*4-4] }
      v27 = -1;
      memset_0(&stack, 0, sizeof(stack));
      m_index = g_R_TG_Def_RBT_Perceptual_UpsampleCS.m_index;
      handleArgCount = stack.handleArgCount + 1;
      stack.handleArgs[0] = &v27;
      stack.handleArgCount = handleArgCount;
      if ( handleArgCount >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        handleArgCount = stack.handleArgCount;
      }
      stack.handleArgs[handleArgCount] = &v28[v13 - 1].index;
      v20 = stack.handleArgCount + 1;
      stack.handleArgCount = v20;
      if ( (unsigned int)v20 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v20 = stack.handleArgCount;
      }
      stack.handleArgs[v20] = &upsampledRt->index;
      ++stack.handleArgCount;
      __asm { vmovss  [rsp+1E0h+var_1B0], xmm6 }
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v21 = v25;
      __asm { vmovss  [rsp+1E0h+var_1B0], xmm7 }
      stack.paramArgs[stack.paramArgCount++] = v21;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = v26;
      R_TG_AddTask(pScript, m_index, &stack);
      --v13;
      --_RBX;
      upsampledRt->index = v27;
    }
    while ( _RBX > 0 );
    __asm
    {
      vmovaps xmm8, [rsp+1E0h+var_60]
      vmovaps xmm7, [rsp+1E0h+var_50]
      vmovaps xmm6, [rsp+1E0h+var_40]
    }
  }
  cGpuTimerEnd(pScript);
}

