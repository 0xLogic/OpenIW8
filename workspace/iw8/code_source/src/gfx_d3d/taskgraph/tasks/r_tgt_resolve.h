/*
==============
RBT_Resolve_CopySampleFromMSAA
==============
*/

void __fastcall RBT_Resolve_CopySampleFromMSAA(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_CopySampleFromMSAA@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_Resolve_MSAATangentFrame4xToFull
==============
*/

void __fastcall RBT_Resolve_MSAATangentFrame4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_MSAATangentFrame4xToFull@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
R_TG_Resolve_Upsample4xMS
==============
*/

void __fastcall R_TG_Resolve_Upsample4xMS(R_TG_Script *pScript, R_TG_Handle *inoutFullresColor, R_TG_Handle *inoutFullresAlpha, R_TG_Handle halfresColor, R_TG_Handle halfresAlpha, unsigned int gpuTimer)
{
  ?R_TG_Resolve_Upsample4xMS@@YAXPEAUR_TG_Script@@AEAUR_TG_Handle@@1U2@2I@Z(pScript, inoutFullresColor, inoutFullresAlpha, halfresColor, halfresAlpha, gpuTimer);
}

/*
==============
RBT_ResolveFloatZ_Full_VRS
==============
*/

void __fastcall RBT_ResolveFloatZ_Full_VRS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ResolveFloatZ_Full_VRS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_ReProj_CopyMipmap
==============
*/

void __fastcall RBT_ReProj_CopyMipmap(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ReProj_CopyMipmap@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_ResolveFloatZ_Full_MSAA
==============
*/

void __fastcall RBT_ResolveFloatZ_Full_MSAA(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ResolveFloatZ_Full_MSAA@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_ResolveFloatZ_Full<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_ResolveFloatZ_Full<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_ResolveFloatZ_Full@UR_TG_Handle@@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
RBT_ResolveFloatZ_DownsampleMipCS
==============
*/

void __fastcall RBT_ResolveFloatZ_DownsampleMipCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ResolveFloatZ_DownsampleMipCS@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_Resolve_StencilMaskCreateClear<R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_StencilMaskCreateClear<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  return ??$cRBT_Resolve_StencilMaskCreateClear@UR_TG_Handle@@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@@Z(context, <args_0>);
}

/*
==============
cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_Resolve_MSAAVelocity4xToFull@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
cRBT_Resolve_CompactFmask<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_CompactFmask<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  return ??$cRBT_Resolve_CompactFmask@UR_TG_Handle@@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11@Z(context, <args_0>, <args_1>, <args_2>);
}

/*
==============
cRBT_Resolve_DilateCompactFmask<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_DilateCompactFmask<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_Resolve_DilateCompactFmask@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
RBT_Resolve_CompactFmask
==============
*/

void __fastcall RBT_Resolve_CompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_CompactFmask@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_ResolveFloatZ_Full_MSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_ResolveFloatZ_Full_MSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>)
{
  return ??$cRBT_ResolveFloatZ_Full_MSAA@UR_TG_Handle@@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>);
}

/*
==============
cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_Resolve_MSAATangentFrame4xToFull@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
RBT_Resolve_CopyFrom4xMS
==============
*/

void __fastcall RBT_Resolve_CopyFrom4xMS(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_CopyFrom4xMS@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_ResolveFloatZ_Full
==============
*/

void __fastcall RBT_ResolveFloatZ_Full(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ResolveFloatZ_Full@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_Resolve_MSAAVelocity4xToFull
==============
*/

void __fastcall RBT_Resolve_MSAAVelocity4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_MSAAVelocity4xToFull@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_Resolve_CopyFrom4xMS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_CopyFrom4xMS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  return ??$cRBT_Resolve_CopyFrom4xMS@UR_TG_Handle@@U1@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@111111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
RBT_Resolve_MSAASceneColor4xToFull
==============
*/

void __fastcall RBT_Resolve_MSAASceneColor4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_MSAASceneColor4xToFull@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_ResolveFloatZ_Full_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_ResolveFloatZ_Full_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_ResolveFloatZ_Full_VRS@UR_TG_Handle@@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
RBT_Resolve_DilateCompactFmask
==============
*/

void __fastcall RBT_Resolve_DilateCompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_DilateCompactFmask@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_ReProj_ClipToFloatZ
==============
*/

void __fastcall RBT_ReProj_ClipToFloatZ(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ReProj_ClipToFloatZ@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_Resolve_CopySampleFromMSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_Resolve_CopySampleFromMSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>)
{
  return ??$cRBT_Resolve_CopySampleFromMSAA@UR_TG_Handle@@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>);
}

/*
==============
RBT_ReProj_FloatZToClip
==============
*/

void __fastcall RBT_ReProj_FloatZToClip(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_ReProj_FloatZToClip@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_ResolveFloatZ_DownsampleMipCS<int,int,int,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_ResolveFloatZ_DownsampleMipCS<int,int,int,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const int *<args_0>, const int *<args_1>, const int *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_ResolveFloatZ_DownsampleMipCS@HHHUR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBH11AEBUR_TG_Handle@@2@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
R_TG_ReProjFloatZ_GetRenderTargetInfo
==============
*/

void __fastcall R_TG_ReProjFloatZ_GetRenderTargetInfo(const R_TG_Script *pScript, const unsigned int voxelCountX, const unsigned int voxelCountY, R_TG_DynamicSizes *outDynamicSizes)
{
  ?R_TG_ReProjFloatZ_GetRenderTargetInfo@@YAXPEBUR_TG_Script@@IIAEAUR_TG_DynamicSizes@@@Z(pScript, voxelCountX, voxelCountY, outDynamicSizes);
}

/*
==============
RBT_Resolve_StencilMaskCreateClear
==============
*/

void __fastcall RBT_Resolve_StencilMaskCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_Resolve_StencilMaskCreateClear@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_ResolveFloatZ_DownsampleMipCS<int,int,int,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_ResolveFloatZ_DownsampleMipCS<int,int,int,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const int *<args_0>, const int *<args_1>, const int *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  int v6; 
  unsigned int m_index; 
  int v11; 
  R_TG_AddTaskStack arguments; 

  v6 = *<args_0>;
  memset_0(&arguments, 0, sizeof(arguments));
  m_index = g_R_TG_Def_RBT_ResolveFloatZ_DownsampleMipCS.m_index;
  if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 139, ASSERT_TYPE_ASSERT, "(value >= 0)", (const char *)&queryFormat, "value >= 0") )
    __debugbreak();
  if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  v11 = *<args_1>;
  arguments.paramArgs[arguments.paramArgCount++] = v6;
  return R_TG_AddTask<int,R_TG_Handle,R_TG_Handle>(context, m_index, &arguments, v11, <args_2>, <args_3>, <args_4>);
}

/*
==============
cRBT_ResolveFloatZ_Full<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_ResolveFloatZ_Full<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_ResolveFloatZ_Full.m_index;
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
  v13 = stack.handleArgCount + 1;
  stack.handleArgCount = v13;
  if ( v13 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v13 = stack.handleArgCount;
  }
  stack.handleArgs[v13] = &<args_3>->index;
  v14 = stack.handleArgCount + 1;
  stack.handleArgCount = v14;
  if ( v14 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v14 = stack.handleArgCount;
  }
  stack.handleArgs[v14] = &<args_4>->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_ResolveFloatZ_Full_MSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_ResolveFloatZ_Full_MSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_ResolveFloatZ_Full_MSAA.m_index;
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
  v13 = stack.handleArgCount + 1;
  stack.handleArgCount = v13;
  if ( (unsigned int)v13 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v13 = stack.handleArgCount;
  }
  stack.handleArgs[v13] = &<args_2>->index;
  v14 = stack.handleArgCount + 1;
  stack.handleArgCount = v14;
  if ( v14 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v14 = stack.handleArgCount;
  }
  stack.handleArgs[v14] = &<args_3>->index;
  v15 = stack.handleArgCount + 1;
  stack.handleArgCount = v15;
  if ( v15 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v15 = stack.handleArgCount;
  }
  stack.handleArgs[v15] = &<args_4>->index;
  v16 = stack.handleArgCount + 1;
  stack.handleArgCount = v16;
  if ( v16 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v16 = stack.handleArgCount;
  }
  stack.handleArgs[v16] = &<args_5>->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_ResolveFloatZ_Full_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_ResolveFloatZ_Full_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_ResolveFloatZ_Full_VRS.m_index;
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
  v13 = stack.handleArgCount + 1;
  stack.handleArgCount = v13;
  if ( v13 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v13 = stack.handleArgCount;
  }
  stack.handleArgs[v13] = &<args_3>->index;
  v14 = stack.handleArgCount + 1;
  stack.handleArgCount = v14;
  if ( v14 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v14 = stack.handleArgCount;
  }
  stack.handleArgs[v14] = &<args_4>->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_CompactFmask<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_CompactFmask<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v10; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_CompactFmask.m_index;
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
  v10 = stack.handleArgCount + 1;
  stack.handleArgCount = v10;
  if ( (unsigned int)v10 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v10 = stack.handleArgCount;
  }
  stack.handleArgs[v10] = &<args_2>->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_CopyFrom4xMS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_CopyFrom4xMS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  R_TG_AddTaskStack arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  return R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(context, g_R_TG_Def_RBT_Resolve_CopyFrom4xMS.m_index, &arguments, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
cRBT_Resolve_CopySampleFromMSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_CopySampleFromMSAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v11; 
  unsigned int v12; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_CopySampleFromMSAA.m_index;
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
  v11 = stack.handleArgCount + 1;
  stack.handleArgCount = v11;
  if ( (unsigned int)v11 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v11 = stack.handleArgCount;
  }
  stack.handleArgs[v11] = &<args_2>->index;
  v12 = stack.handleArgCount + 1;
  stack.handleArgCount = v12;
  if ( v12 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v12 = stack.handleArgCount;
  }
  stack.handleArgs[v12] = &<args_3>->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_DilateCompactFmask<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_DilateCompactFmask<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_DilateCompactFmask.m_index;
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
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_MSAATangentFrame4xToFull.m_index;
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
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_MSAAVelocity4xToFull.m_index;
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
  ++stack.handleArgCount;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
cRBT_Resolve_StencilMaskCreateClear<R_TG_Handle>
==============
*/
unsigned int cRBT_Resolve_StencilMaskCreateClear<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &<args_0>->index;
  return R_TG_AddTask(context, g_R_TG_Def_RBT_Resolve_StencilMaskCreateClear.m_index, &stack);
}

/*
==============
RBT_ReProj_ClipToFloatZ
==============
*/
void RBT_ReProj_ClipToFloatZ(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  R_RT_Handle v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle v21; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0A8h+var_58], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
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
    vmovups [rsp+0A8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0A8h+var_38] }
      if ( v17 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0A8h+var_58]
    vmovups [rsp+0A8h+var_38], ymm1
    vmovups [rsp+0A8h+var_58], ymm0
  }
  R_ReProjClipToFloatZ(computeState, viewInfo, &v20, &v21);
}

/*
==============
RBT_ReProj_CopyMipmap
==============
*/
void RBT_ReProj_CopyMipmap(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int reProjFloatZMipMap; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_ColorHandle v25; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0A8h+var_38], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v23);
    if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_38], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_38], ymm0
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
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v24);
    if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID]
        vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID]
        vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      if ( v17 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v24)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v24);
  R_ReProjFloatZ_UpdatePrevMatrix(viewInfo, Surface->m_image.m_base.width, height);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
    vmovups ymm1, [rsp+0A8h+var_38]
  }
  reProjFloatZMipMap = viewInfo->reProjFloatZMipMap;
  __asm
  {
    vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
    vmovups [rsp+0A8h+var_38], ymm1
  }
  R_ReProjCopyMipmap(computeState, viewInfo, reProjFloatZMipMap, &v25, (const R_RT_ColorHandle *)&v24);
}

/*
==============
RBT_ReProj_FloatZToClip
==============
*/
void RBT_ReProj_FloatZToClip(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  R_RT_Handle v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle v21; 

  if ( R_RT_Handle::IsValid(taskInfo->attachments) )
  {
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovd   eax, xmm1
      vmovups [rsp+0A8h+var_58], ymm1
      vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v19);
      if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
          vmovups [rsp+0A8h+var_58], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
          vmovups [rsp+0A8h+var_58], ymm0
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
      vmovups ymmword ptr [rsp+0A8h+var_38.baseclass_0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v19);
      if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_38.baseclass_0.m_surfaceID] }
        if ( v17 )
          __debugbreak();
      }
    }
    __asm
    {
      vmovups ymm1, [rsp+0A8h+var_58]
      vmovups [rsp+0A8h+var_58], ymm1
      vmovups ymmword ptr [rsp+0A8h+var_38.baseclass_0.m_surfaceID], ymm0
    }
    R_ReProjFloatZClipSpace(computeState, viewInfo, &v20, &v21);
  }
}

/*
==============
RBT_ResolveFloatZ_DownsampleMipCS
==============
*/
void RBT_ResolveFloatZ_DownsampleMipCS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const unsigned int *pTaskData; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  bool v20; 
  R_RT_Handle v22; 
  R_RT_ColorHandle v23; 
  R_RT_ColorHandle v24; 

  pTaskData = taskInfo->pTaskData;
  v9 = *pTaskData;
  v10 = pTaskData[1];
  v11 = pTaskData[2];
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0B8h+var_68], ymm1
    vmovups ymmword ptr [rsp+0B8h+var_88.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0B8h+var_88.m_surfaceID]
        vmovups [rsp+0B8h+var_68], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0B8h+var_88.m_surfaceID]
        vmovups [rsp+0B8h+var_68], ymm0
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
    vmovups [rsp+0B8h+var_48], ymm0
    vmovups ymmword ptr [rsp+0B8h+var_88.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0B8h+var_88.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0B8h+var_88.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0B8h+var_48] }
      if ( v20 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0B8h+var_68]
    vmovups [rsp+0B8h+var_48], ymm0
    vmovups [rsp+0B8h+var_68], ymm1
  }
  R_ResolveFloatZDownsampleCS(computeState, &v23, &v24, v9, v10 != 0, v11 == 1);
}

/*
==============
RBT_ResolveFloatZ_Full
==============
*/
void RBT_ResolveFloatZ_Full(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v29; 
  __int16 v30; 
  unsigned __int16 v31; 
  bool v35; 
  bool v41; 
  __int16 v42; 
  unsigned __int16 v43; 
  bool v47; 
  bool v53; 
  __int16 v54; 
  unsigned __int16 v55; 
  bool v59; 
  bool v68; 
  const R_RT_Surface *Surface; 
  _QWORD v79[5]; 
  R_RT_Handle v80; 
  R_RT_Handle v81; 
  R_RT_Handle v82; 
  R_RT_Handle v83; 
  R_RT_Handle v84; 
  R_RT_ColorHandle v85; 
  R_RT_DepthHandle v86; 
  R_RT_Handle v87; 
  R_RT_Handle v88; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rbp+0E0h+var_A0], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v81);
    if ( (R_RT_Handle::GetSurface(&v81)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_A0], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_A0], ymm0
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
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
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
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups [rbp+0E0h+var_C0], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups [rbp+0E0h+var_C0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups [rbp+0E0h+var_C0], ymm0
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
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v83, &v88, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_E0.m_surfaceID] }
      if ( v29 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v30 = _EBX & 0x7FFF;
  if ( v30 )
  {
    v31 = v30 | 0x8000;
    v80.m_surfaceID = v31;
  }
  else
  {
    v31 = 0;
    v80.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
  }
  if ( v31 )
  {
    R_RT_Handle::GetSurface(&v84);
    if ( (R_RT_Handle::GetSurface(&v84)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v35 )
    __debugbreak();
LABEL_43:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v82, &v88, 0, 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_100.m_surfaceID] }
      if ( v41 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v42 = _EBX & 0x7FFF;
  if ( v42 )
    v43 = v42 | 0x8000;
  else
    v43 = 0;
  v80.m_surfaceID = v43;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
  }
  if ( v43 )
  {
    R_RT_Handle::GetSurface(&v83);
    if ( (R_RT_Handle::GetSurface(&v83)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v47 )
    __debugbreak();
LABEL_61:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v87, &v88, 0, 3);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_120.m_surfaceID] }
      if ( v53 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v54 = _EBX & 0x7FFF;
  if ( v54 )
  {
    v55 = v54 | 0x8000;
    v80.m_surfaceID = v55;
  }
  else
  {
    v55 = 0;
    v80.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
  }
  if ( v55 )
  {
    R_RT_Handle::GetSurface(&v82);
    if ( (R_RT_Handle::GetSurface(&v82)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v59 )
    __debugbreak();
LABEL_79:
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v80);
    if ( (R_RT_Handle::GetSurface(&v80)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
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
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v80);
    if ( (R_RT_Handle::GetSurface(&v80)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_60.m_surfaceID] }
      if ( v68 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0E0h+var_160.m_tracking.m_name], xmm0
  }
  v80.m_surfaceID = 0;
  v80.m_tracking.m_allocCounter = 0;
  Surface = R_RT_Handle::GetSurface(&v88);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
    vmovups ymm1, [rbp+0E0h+var_C0]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_120.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_100.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_E0.m_surfaceID]
    vmovups [rbp+0E0h+var_C0], ymm1
    vmovups ymm1, [rbp+0E0h+var_A0]
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
    vmovups [rbp+0E0h+var_A0], ymm1
  }
  R_ResolveFloatZDownsample(computeState, viewInfo, &v86, (R_RT_ColorHandle *)&v81, (R_RT_ColorHandle *)&v84, (R_RT_ColorHandle *)&v83, (R_RT_ColorHandle *)&v82, &v85, (R_RT_DepthHandle *)&v80, (R_RT_ColorHandle *)&v88, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_ResolveFloatZ_Full_MSAA
==============
*/
void RBT_ResolveFloatZ_Full_MSAA(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v29; 
  __int16 v30; 
  unsigned __int16 v31; 
  bool v35; 
  bool v41; 
  __int16 v42; 
  unsigned __int16 v43; 
  const char *v47; 
  int v48; 
  const char *v49; 
  bool v55; 
  __int16 v56; 
  unsigned __int16 v57; 
  const char *v61; 
  int v62; 
  const char *v63; 
  bool v72; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v87; 
  R_RT_Handle v88; 
  R_RT_Handle v89; 
  R_RT_DepthHandle v90; 
  R_RT_Handle v91; 
  R_RT_ColorHandle v92; 
  R_RT_DepthHandle v93; 
  R_RT_Handle v94; 
  R_RT_Handle v95; 
  R_RT_Handle v96; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rbp+0E0h+var_C0], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v89);
    if ( (R_RT_Handle::GetSurface(&v89)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_C0], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_C0], ymm0
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
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v87);
    if ( (R_RT_Handle::GetSurface(&v87)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
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
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups [rbp+0E0h+var_E0], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v87);
    if ( (R_RT_Handle::GetSurface(&v87)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID]
        vmovups [rbp+0E0h+var_E0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID]
        vmovups [rbp+0E0h+var_E0], ymm0
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
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v91, &v96, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v87);
    if ( (R_RT_Handle::GetSurface(&v87)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_60.m_surfaceID] }
      if ( v29 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v30 = _EBX & 0x7FFF;
  if ( v30 )
    v31 = v30 | 0x8000;
  else
    v31 = 0;
  v88.m_surfaceID = v31;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_180.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1E0h+var_180.m_tracking.m_location]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  if ( v31 )
  {
    R_RT_Handle::GetSurface(&v96);
    if ( (R_RT_Handle::GetSurface(&v96)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v35 )
    __debugbreak();
LABEL_43:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_80.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v91, &v95, 0, 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_80.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v87);
    if ( (R_RT_Handle::GetSurface(&v87)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_80.m_surfaceID] }
      if ( v41 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_80.m_surfaceID], ymm0 }
  v42 = _EBX & 0x7FFF;
  if ( v42 )
    v43 = v42 | 0x8000;
  else
    v43 = 0;
  v88.m_surfaceID = v43;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_180.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1E0h+var_180.m_tracking.m_location]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_80.m_surfaceID], ymm0
  }
  if ( v43 )
  {
    R_RT_Handle::GetSurface(&v95);
    if ( (R_RT_Handle::GetSurface(&v95)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v47 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v48 = 217;
    v49 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v47 = "!this->m_tracking.m_allocCounter";
    v48 = 100;
    v49 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v48, ASSERT_TYPE_ASSERT, v49, (const char *)&queryFormat, v47) )
    __debugbreak();
LABEL_61:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_A0.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v91, &v94, 0, 3);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_A0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v87);
    if ( (R_RT_Handle::GetSurface(&v87)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v87.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v87.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v55 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_A0.m_surfaceID] }
      if ( v55 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_A0.m_surfaceID], ymm0 }
  v56 = _EBX & 0x7FFF;
  if ( v56 )
    v57 = v56 | 0x8000;
  else
    v57 = 0;
  v88.m_surfaceID = v57;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_180.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1E0h+var_180.m_tracking.m_location]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_A0.m_surfaceID], ymm0
  }
  if ( v57 )
  {
    R_RT_Handle::GetSurface(&v94);
    if ( (R_RT_Handle::GetSurface(&v94)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v61 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v62 = 217;
    v63 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v61 = "!this->m_tracking.m_allocCounter";
    v62 = 100;
    v63 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v62, ASSERT_TYPE_ASSERT, v63, (const char *)&queryFormat, v61) )
    __debugbreak();
LABEL_79:
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v88);
    if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_180.m_surfaceID], ymm0
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
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups [rbp+0E0h+var_120], ymm0
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v88);
    if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0E0h+var_120] }
      if ( v72 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+0A0h]
    vmovd   eax, xmm0
    vmovups [rbp+0E0h+var_120], ymm0
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v88);
    if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups [rbp+0E0h+var_120], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups [rbp+0E0h+var_120], ymm0
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
  Surface = R_RT_Handle::GetSurface(&v91);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1E0h+var_180.m_surfaceID]
    vmovups ymm1, [rbp+0E0h+var_E0]
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymm0, [rbp+0E0h+var_120]
    vmovups [rbp+0E0h+var_120], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_A0.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_A0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_80.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_80.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_60.m_surfaceID]
    vmovups [rbp+0E0h+var_E0], ymm1
    vmovups ymm1, [rbp+0E0h+var_C0]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
    vmovups [rbp+0E0h+var_C0], ymm1
  }
  R_ResolveFloatZDownsample(computeState, viewInfo, &v93, (R_RT_ColorHandle *)&v88, (R_RT_ColorHandle *)&v96, (R_RT_ColorHandle *)&v95, (R_RT_ColorHandle *)&v94, &v92, &v90, (R_RT_ColorHandle *)&v91, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_ResolveFloatZ_Full_VRS
==============
*/
void RBT_ResolveFloatZ_Full_VRS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v29; 
  __int16 v30; 
  unsigned __int16 v31; 
  bool v35; 
  bool v41; 
  __int16 v42; 
  unsigned __int16 v43; 
  bool v47; 
  bool v53; 
  __int16 v54; 
  unsigned __int16 v55; 
  bool v59; 
  bool v68; 
  const R_RT_Surface *Surface; 
  _QWORD v79[5]; 
  R_RT_Handle v80; 
  R_RT_Handle v81; 
  R_RT_Handle v82; 
  R_RT_Handle v83; 
  R_RT_Handle v84; 
  R_RT_ColorHandle v85; 
  R_RT_DepthHandle v86; 
  R_RT_Handle v87; 
  R_RT_Handle v88; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rbp+0E0h+var_A0], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v81);
    if ( (R_RT_Handle::GetSurface(&v81)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_A0], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
        vmovups [rbp+0E0h+var_A0], ymm0
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
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
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
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups [rbp+0E0h+var_C0], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups [rbp+0E0h+var_C0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
        vmovups [rbp+0E0h+var_C0], ymm0
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
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v83, &v88, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_E0.m_surfaceID] }
      if ( v29 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v30 = _EBX & 0x7FFF;
  if ( v30 )
  {
    v31 = v30 | 0x8000;
    v80.m_surfaceID = v31;
  }
  else
  {
    v31 = 0;
    v80.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
  }
  if ( v31 )
  {
    R_RT_Handle::GetSurface(&v84);
    if ( (R_RT_Handle::GetSurface(&v84)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v35 )
    __debugbreak();
LABEL_43:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v82, &v88, 0, 2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_100.m_surfaceID] }
      if ( v41 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v42 = _EBX & 0x7FFF;
  if ( v42 )
    v43 = v42 | 0x8000;
  else
    v43 = 0;
  v80.m_surfaceID = v43;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
  }
  if ( v43 )
  {
    R_RT_Handle::GetSurface(&v83);
    if ( (R_RT_Handle::GetSurface(&v83)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v47 )
    __debugbreak();
LABEL_61:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v87, &v88, 0, 3);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v79[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v79[2];
      LOWORD(_EBX) = v79[1];
      __asm { vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_120.m_surfaceID] }
      if ( v53 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0 }
  v54 = _EBX & 0x7FFF;
  if ( v54 )
  {
    v55 = v54 | 0x8000;
    v80.m_surfaceID = v55;
  }
  else
  {
    v55 = 0;
    v80.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1E0h+var_188+10h]
    vmovsd  xmm1, qword ptr [rsp+1E0h+var_188+20h]
    vmovups xmmword ptr [rbp+0E0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0E0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
  }
  if ( v55 )
  {
    R_RT_Handle::GetSurface(&v82);
    if ( (R_RT_Handle::GetSurface(&v82)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v59 )
    __debugbreak();
LABEL_79:
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm1
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v80);
    if ( (R_RT_Handle::GetSurface(&v80)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rsp+1E0h+var_188+8], ymm0
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
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v80);
    if ( (R_RT_Handle::GetSurface(&v80)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0E0h+var_60.m_surfaceID] }
      if ( v68 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0E0h+var_160.m_tracking.m_name], xmm0
  }
  v80.m_surfaceID = 0;
  v80.m_tracking.m_allocCounter = 0;
  Surface = R_RT_Handle::GetSurface(&v88);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1E0h+var_188+8]
    vmovups ymm1, [rbp+0E0h+var_C0]
    vmovups ymmword ptr [rbp+0E0h+var_60.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_160.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_120.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_120.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_100.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_100.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_E0.m_surfaceID]
    vmovups [rbp+0E0h+var_C0], ymm1
    vmovups ymm1, [rbp+0E0h+var_A0]
    vmovups ymmword ptr [rbp+0E0h+var_E0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+var_140.m_surfaceID]
    vmovups ymmword ptr [rbp+0E0h+var_140.m_surfaceID], ymm0
    vmovups [rbp+0E0h+var_A0], ymm1
  }
  R_ResolveFloatZDownsample(computeState, viewInfo, &v86, (R_RT_ColorHandle *)&v81, (R_RT_ColorHandle *)&v84, (R_RT_ColorHandle *)&v83, (R_RT_ColorHandle *)&v82, &v85, (R_RT_DepthHandle *)&v80, (R_RT_ColorHandle *)&v88, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_Resolve_CompactFmask
==============
*/
void RBT_Resolve_CompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v19; 
  R_RT_Handle v21; 
  R_RT_ColorHandle v22; 
  R_RT_ColorHandle v23; 
  R_RT_ColorHandle v24; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_88], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rsp+0D8h+var_88] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups [rsp+0D8h+var_48], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovd   eax, xmm1
    vmovups [rsp+0D8h+var_88], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID]
        vmovups [rsp+0D8h+var_88], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID]
        vmovups [rsp+0D8h+var_88], ymm0
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
    vmovups [rsp+0D8h+var_68], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_68] }
      if ( v19 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_88]
    vmovups [rsp+0D8h+var_88], ymm1
    vmovups [rsp+0D8h+var_68], ymm0
  }
  R_Resolve_CompactFmask(computeState, &v22, &v23, &v24);
}

/*
==============
RBT_Resolve_CopyFrom4xMS
==============
*/
void RBT_Resolve_CopyFrom4xMS(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v31; 
  R_RT_Handle v37; 
  R_RT_ColorHandle v38; 
  R_RT_ColorHandle v39; 
  R_RT_ColorHandle v40; 
  R_RT_ColorHandle v41; 
  R_RT_ColorHandle v42; 

  _RAX = taskInfo->attachments;
  _RDI = gfxContext;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_50], ymm0
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_50], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_50], ymm0
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
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_70], ymm1
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_70], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_70], ymm0
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
    vmovups [rbp+57h+var_90], ymm0
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_90], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_90], ymm0
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
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovd   eax, xmm1
    vmovups [rbp+57h+var_B0], ymm1
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_B0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
        vmovups [rbp+57h+var_B0], ymm0
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
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_30], ymm0
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+57h+var_30] }
      if ( v31 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rbp+57h+var_B0]
    vmovups [rbp+57h+var_30], ymm0
    vmovups ymm0, [rbp+57h+var_90]
    vmovups [rbp+57h+var_90], ymm0
    vmovups ymm0, [rbp+57h+var_50]
    vmovups [rbp+57h+var_50], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+57h+var_B0], ymm1
    vmovups ymm1, [rbp+57h+var_70]
    vmovups xmmword ptr [rbp+57h+var_D0.m_surfaceID], xmm0
    vmovups [rbp+57h+var_70], ymm1
  }
  R_Resolve_CopyFrom4xMS((GfxCmdBufContext *)&v37, &v41, &v40, &v39, &v38, &v42);
}

/*
==============
RBT_Resolve_CopySampleFromMSAA
==============
*/
void RBT_Resolve_CopySampleFromMSAA(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v16; 
  R_RT_Handle v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle v21; 

  _RAX = taskInfo->attachments;
  _RDI = gfxContext;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+98h+var_48], ymm1
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID]
        vmovups [rsp+98h+var_48], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID]
        vmovups [rsp+98h+var_48], ymm0
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
    vmovups [rsp+98h+var_28], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+98h+var_28] }
      if ( v16 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+98h+var_48]
    vmovups [rsp+98h+var_28], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+98h+var_68.m_surfaceID], xmm0
    vmovups [rsp+98h+var_48], ymm1
  }
  R_Resolve_CopySampleFromMSAA((GfxCmdBufContext *)&v19, &v20, &v21);
}

/*
==============
RBT_Resolve_DilateCompactFmask
==============
*/
void RBT_Resolve_DilateCompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v13; 
  R_RT_Handle v14; 
  R_RT_ColorHandle dilatedCompactFmaskRtHandle; 
  R_RT_ColorHandle compactFmaskRtHandle; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_88], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rsp+0D8h+var_88] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rsp+0D8h+dilatedCompactFmaskRtHandle.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_88], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0D8h+var_88] }
      if ( v13 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+0D8h+compactFmaskRtHandle.baseclass_0.m_surfaceID], ymm0 }
  R_Resolve_DilateCompactFmask(computeState, &compactFmaskRtHandle, &dilatedCompactFmaskRtHandle);
}

/*
==============
RBT_Resolve_MSAASceneColor4xToFull
==============
*/
void RBT_Resolve_MSAASceneColor4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  const GfxBackEndData *v19; 
  R_RT_Handle v20; 
  R_RT_ColorHandle v21; 
  R_RT_ColorHandle v22; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0A8h+var_58], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
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
    vmovups [rsp+0A8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0A8h+var_38] }
      if ( v17 )
        __debugbreak();
    }
  }
  __asm { vmovups ymm1, [rsp+0A8h+var_58] }
  v19 = viewInfo->input.data;
  __asm
  {
    vmovups [rsp+0A8h+var_38], ymm1
    vmovups [rsp+0A8h+var_58], ymm0
  }
  R_Resolve_MSAAColor4xToFull(computeState, &v21, &v22, v19->frameCount);
}

/*
==============
RBT_Resolve_MSAATangentFrame4xToFull
==============
*/
void RBT_Resolve_MSAATangentFrame4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  const GfxBackEndData *v19; 
  R_RT_Handle v20; 
  R_RT_ColorHandle v21; 
  R_RT_ColorHandle v22; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0A8h+var_58], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
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
    vmovups [rsp+0A8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0A8h+var_38] }
      if ( v17 )
        __debugbreak();
    }
  }
  __asm { vmovups ymm1, [rsp+0A8h+var_58] }
  v19 = viewInfo->input.data;
  __asm
  {
    vmovups [rsp+0A8h+var_38], ymm1
    vmovups [rsp+0A8h+var_58], ymm0
  }
  R_Resolve_MSAAColor4xToFull(computeState, &v21, &v22, v19->frameCount);
}

/*
==============
RBT_Resolve_MSAAVelocity4xToFull
==============
*/
void RBT_Resolve_MSAAVelocity4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v17; 
  const GfxBackEndData *v19; 
  R_RT_Handle v20; 
  R_RT_ColorHandle v21; 
  R_RT_ColorHandle v22; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups [rsp+0A8h+var_58], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID]
        vmovups [rsp+0A8h+var_58], ymm0
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
    vmovups [rsp+0A8h+var_38], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+0A8h+var_38] }
      if ( v17 )
        __debugbreak();
    }
  }
  __asm { vmovups ymm1, [rsp+0A8h+var_58] }
  v19 = viewInfo->input.data;
  __asm
  {
    vmovups [rsp+0A8h+var_38], ymm1
    vmovups [rsp+0A8h+var_58], ymm0
  }
  R_Resolve_MSAAColor4xToFull(computeState, &v21, &v22, v19->frameCount);
}

/*
==============
RBT_Resolve_StencilMaskCreateClear
==============
*/
void RBT_Resolve_StencilMaskCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v9; 
  R_RT_BufferHandle v10; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v9);
    if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
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
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID], ymm0 }
  R_Resolve_ClearStencilMaskBuffer(computeState, &v10);
}

/*
==============
R_TG_ReProjFloatZ_GetRenderTargetInfo
==============
*/
void R_TG_ReProjFloatZ_GetRenderTargetInfo(const R_TG_Script *pScript, const unsigned int voxelCountX, const unsigned int voxelCountY, R_TG_DynamicSizes *outDynamicSizes)
{
  int v8; 
  __int64 v9; 
  unsigned int outReProjFloatZMipMap; 

  R_ReProjFloatZ_RenderTargetInfo(voxelCountX, voxelCountY, pScript->sceneSize.v[0], pScript->sceneSize.v[1], &outReProjFloatZMipMap, (unsigned int *)outDynamicSizes, (unsigned int *)outDynamicSizes->sizes + 1);
  v8 = 0;
  if ( pScript->dynamicSceneSizeStepCount )
  {
    do
    {
      v9 = (unsigned int)(v8 + 1);
      R_ReProjFloatZ_RenderTargetInfo(voxelCountX, voxelCountY, pScript->dynamicSceneSizes[v8].v[0], pScript->dynamicSceneSizes[v8].v[1], &outReProjFloatZMipMap, (unsigned int *)&outDynamicSizes->sizes[v9], (unsigned int *)&outDynamicSizes->sizes[v9] + 1);
      v8 = v9;
    }
    while ( (unsigned int)v9 < pScript->dynamicSceneSizeStepCount );
  }
}

/*
==============
R_TG_Resolve_Upsample4xMS
==============
*/
void R_TG_Resolve_Upsample4xMS(R_TG_Script *pScript, R_TG_Handle *inoutFullresColor, R_TG_Handle *inoutFullresAlpha, R_TG_Handle halfresColor, R_TG_Handle halfresAlpha, unsigned int gpuTimer)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  R_TG_AddTaskStack stack; 
  unsigned int index; 

  index = halfresColor.index;
  cGpuTimerBegin(pScript, gpuTimer);
  LODWORD(v25) = -1;
  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Resolve_CompactFmask.m_index;
  stack.handleArgs[0] = (unsigned int *)&v25;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", v25) )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = &index;
  v11 = stack.handleArgCount + 1;
  stack.handleArgCount = v11;
  if ( (unsigned int)v11 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v11 = stack.handleArgCount;
  }
  stack.handleArgs[v11] = (unsigned int *)&halfresAlpha;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
  HIDWORD(v25) = -1;
  memset_0(&stack, 0, sizeof(stack));
  v12 = g_R_TG_Def_RBT_Resolve_DilateCompactFmask.m_index;
  stack.handleArgs[0] = (unsigned int *)&v25 + 1;
  v13 = stack.handleArgCount + 1;
  stack.handleArgCount = v13;
  if ( (unsigned int)v13 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v13 = stack.handleArgCount;
  }
  stack.handleArgs[v13] = (unsigned int *)&v25;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v12, &stack);
  v26 = -1;
  v27 = -1;
  memset_0(&stack, 0, sizeof(stack));
  v14 = g_R_TG_Def_RBT_Resolve_CopySampleFromMSAA.m_index;
  stack.handleArgs[0] = (unsigned int *)&v26;
  v15 = stack.handleArgCount + 1;
  stack.handleArgCount = v15;
  if ( (unsigned int)v15 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v15 = stack.handleArgCount;
  }
  stack.handleArgs[v15] = (unsigned int *)&v27;
  v16 = stack.handleArgCount + 1;
  stack.handleArgCount = v16;
  if ( (unsigned int)v16 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v16 = stack.handleArgCount;
  }
  stack.handleArgs[v16] = &index;
  v17 = stack.handleArgCount + 1;
  stack.handleArgCount = v17;
  if ( (unsigned int)v17 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v17 = stack.handleArgCount;
  }
  stack.handleArgs[v17] = (unsigned int *)&halfresAlpha;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v14, &stack);
  memset_0(&stack, 0, sizeof(stack));
  v18 = g_R_TG_Def_RBT_Resolve_CopyFrom4xMS.m_index;
  v19 = stack.handleArgCount + 1;
  stack.handleArgs[0] = &inoutFullresColor->index;
  stack.handleArgCount = v19;
  if ( (unsigned int)v19 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v19 = stack.handleArgCount;
  }
  stack.handleArgs[v19] = &inoutFullresAlpha->index;
  v20 = stack.handleArgCount + 1;
  stack.handleArgCount = v20;
  if ( (unsigned int)v20 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v20 = stack.handleArgCount;
  }
  stack.handleArgs[v20] = &index;
  v21 = stack.handleArgCount + 1;
  stack.handleArgCount = v21;
  if ( (unsigned int)v21 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v21 = stack.handleArgCount;
  }
  stack.handleArgs[v21] = (unsigned int *)&halfresAlpha;
  v22 = stack.handleArgCount + 1;
  stack.handleArgCount = v22;
  if ( (unsigned int)v22 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v22 = stack.handleArgCount;
  }
  stack.handleArgs[v22] = (unsigned int *)&v25 + 1;
  v23 = stack.handleArgCount + 1;
  stack.handleArgCount = v23;
  if ( (unsigned int)v23 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v23 = stack.handleArgCount;
  }
  stack.handleArgs[v23] = (unsigned int *)&v26;
  v24 = stack.handleArgCount + 1;
  stack.handleArgCount = v24;
  if ( (unsigned int)v24 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v24 = stack.handleArgCount;
  }
  stack.handleArgs[v24] = (unsigned int *)&v27;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v18, &stack);
  cGpuTimerEnd(pScript);
}

