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
  R_RT_Handle v10; 
  bool v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 
  __m256i v15; 

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
  v10 = taskInfo->attachments[1];
  v15 = (__m256i)v10;
  v13 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = v13;
      __debugbreak();
    }
    else
    {
      v10 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = (R_RT_Handle)v15;
      if ( v12 )
        __debugbreak();
    }
  }
  v15 = (__m256i)v14;
  v14 = v10;
  R_ReProjClipToFloatZ(computeState, viewInfo, (const R_RT_ColorHandle *)&v14, (const R_RT_ColorHandle *)&v15);
}

/*
==============
RBT_ReProj_CopyMipmap
==============
*/
void RBT_ReProj_CopyMipmap(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  bool v12; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int reProjFloatZMipMap; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 

  v18 = *taskInfo->attachments;
  v16 = v18;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v16);
    if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v16;
      __debugbreak();
    }
    else
    {
      v18 = v16;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v10 = taskInfo->attachments[1];
  v16 = v10;
  v17 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = v17;
      v16 = v17;
      __debugbreak();
    }
    else
    {
      v10 = v17;
      v16 = v17;
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
  v17 = v10;
  height = R_RT_Handle::GetSurface(&v17)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v17);
  R_ReProjFloatZ_UpdatePrevMatrix(viewInfo, Surface->m_image.m_base.width, height);
  reProjFloatZMipMap = viewInfo->reProjFloatZMipMap;
  v17 = v16;
  R_ReProjCopyMipmap(computeState, viewInfo, reProjFloatZMipMap, (const R_RT_ColorHandle *)&v18, (const R_RT_ColorHandle *)&v17);
}

/*
==============
RBT_ReProj_FloatZToClip
==============
*/
void RBT_ReProj_FloatZToClip(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  bool v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 
  __m256i v15; 

  if ( R_RT_Handle::IsValid(taskInfo->attachments) )
  {
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
    v10 = taskInfo->attachments[1];
    v15 = (__m256i)v10;
    v13 = v10;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v13);
      if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v10 = v13;
        __debugbreak();
      }
      else
      {
        v10 = v13;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v10 = (R_RT_Handle)v15;
        if ( v12 )
          __debugbreak();
      }
    }
    v15 = (__m256i)v10;
    R_ReProjFloatZClipSpace(computeState, viewInfo, (const R_RT_ColorHandle *)&v14, (const R_RT_ColorHandle *)&v15);
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
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  __m256i v18; 

  pTaskData = taskInfo->pTaskData;
  v9 = *pTaskData;
  v10 = pTaskData[1];
  v11 = pTaskData[2];
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
  v13 = taskInfo->attachments[1];
  v18 = (__m256i)v13;
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
      v13 = (R_RT_Handle)v18;
      if ( v15 )
        __debugbreak();
    }
  }
  v18 = (__m256i)v13;
  R_ResolveFloatZDownsampleCS(computeState, (R_RT_ColorHandle *)&v17, (R_RT_ColorHandle *)&v18, v9, v10 != 0, v11 == 1);
}

/*
==============
RBT_ResolveFloatZ_Full
==============
*/
void RBT_ResolveFloatZ_Full(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v12; 
  __int16 v13; 
  bool v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  bool v19; 
  R_RT_Handle v20; 
  __int16 v21; 
  bool v23; 
  __int16 v24; 
  unsigned __int16 v25; 
  bool v27; 
  R_RT_Handle v28; 
  __int16 v29; 
  bool v31; 
  __int16 v32; 
  unsigned __int16 v33; 
  bool v36; 
  R_RT_Handle v38; 
  bool v40; 
  const R_RT_Surface *Surface; 
  char v43[40]; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  R_RT_Handle v47; 
  R_RT_Handle v48; 
  R_RT_ColorHandle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 

  v50 = *taskInfo->attachments;
  v45 = v50;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v50 = v45;
    }
    else
    {
      v50 = v45;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v45 = taskInfo->attachments[1];
  *(R_RT_Handle *)&v43[8] = v45;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v45 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      v45 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v49 = (R_RT_ColorHandle)taskInfo->attachments[2];
  *(R_RT_ColorHandle *)&v43[8] = v49;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v49 = *(R_RT_ColorHandle *)&v43[8];
      __debugbreak();
    }
    else
    {
      v49 = *(R_RT_ColorHandle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v52 = v45;
  v12 = *R_RT_GetViewInternal(&v47, &v52, 0, 1);
  v13 = _XMM0;
  v48 = v12;
  *(R_RT_Handle *)&v43[8] = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v13 = *(_WORD *)&v43[8];
      v12 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v13 = *(_WORD *)&v43[8];
      v12 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v12 = v48;
      if ( v15 )
        __debugbreak();
    }
  }
  v52 = v12;
  v16 = v13 & 0x7FFF;
  if ( v16 )
  {
    v17 = v16 | 0x8000;
    v44.m_surfaceID = v17;
  }
  else
  {
    v17 = 0;
    v44.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v43[16];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v48 = v44;
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v19 )
    __debugbreak();
LABEL_43:
  v52 = v45;
  v20 = *R_RT_GetViewInternal(&v46, &v52, 0, 2);
  v21 = _XMM0;
  v47 = v20;
  *(R_RT_Handle *)&v43[8] = v20;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v21 = *(_WORD *)&v43[8];
      v20 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v21 = *(_WORD *)&v43[8];
      v20 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v20 = v47;
      if ( v23 )
        __debugbreak();
    }
  }
  v52 = v20;
  v24 = v21 & 0x7FFF;
  if ( v24 )
    v25 = v24 | 0x8000;
  else
    v25 = 0;
  v44.m_surfaceID = v25;
  _XMM0 = *(_OWORD *)&v43[16];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v47 = v44;
  if ( v25 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v27 )
    __debugbreak();
LABEL_61:
  v52 = v45;
  v28 = *R_RT_GetViewInternal(&v51, &v52, 0, 3);
  v29 = _XMM0;
  v46 = v28;
  *(R_RT_Handle *)&v43[8] = v28;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v29 = *(_WORD *)&v43[8];
      v28 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v29 = *(_WORD *)&v43[8];
      v28 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v28 = v46;
      if ( v31 )
        __debugbreak();
    }
  }
  v52 = v28;
  v32 = v29 & 0x7FFF;
  if ( v32 )
  {
    v33 = v32 | 0x8000;
    v44.m_surfaceID = v33;
  }
  else
  {
    v33 = 0;
    v44.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v43[16];
  _XMM1 = *(unsigned __int64 *)&v43[32];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v46 = v44;
  if ( v33 )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v36 )
    __debugbreak();
LABEL_79:
  *(R_RT_Handle *)&v43[8] = taskInfo->attachments[3];
  v44 = *(R_RT_Handle *)&v43[8];
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      *(R_RT_Handle *)&v43[8] = v44;
      __debugbreak();
    }
    else
    {
      *(R_RT_Handle *)&v43[8] = v44;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v38 = taskInfo->attachments[4];
  v52 = v38;
  v44 = v38;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v38 = v44;
    }
    else
    {
      v38 = v44;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v38 = v52;
      if ( v40 )
        __debugbreak();
    }
  }
  v52 = v38;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v44.m_tracking.m_name = _XMM0;
  v44.m_surfaceID = 0;
  v44.m_tracking.m_allocCounter = 0;
  Surface = R_RT_Handle::GetSurface(&v52);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v52 = *(R_RT_Handle *)&v43[8];
  R_ResolveFloatZDownsample(computeState, viewInfo, (R_RT_DepthHandle *)&v50, (R_RT_ColorHandle *)&v45, (R_RT_ColorHandle *)&v48, (R_RT_ColorHandle *)&v47, (R_RT_ColorHandle *)&v46, &v49, (R_RT_DepthHandle *)&v44, (R_RT_ColorHandle *)&v52, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_ResolveFloatZ_Full_MSAA
==============
*/
void RBT_ResolveFloatZ_Full_MSAA(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v12; 
  unsigned __int16 m_surfaceID; 
  bool v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  bool v19; 
  R_RT_Handle v20; 
  unsigned __int16 v21; 
  bool v23; 
  __int16 v24; 
  unsigned __int16 v25; 
  const char *v27; 
  int v28; 
  const char *v29; 
  R_RT_Handle v30; 
  unsigned __int16 v31; 
  bool v33; 
  __int16 v34; 
  unsigned __int16 v35; 
  const char *v38; 
  int v39; 
  const char *v40; 
  R_RT_Handle v42; 
  bool v44; 
  R_RT_DepthHandle *attachments; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v48; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_Handle v53; 
  R_RT_Handle v54; 
  R_RT_Handle v55; 
  R_RT_Handle v56; 
  R_RT_Handle v57; 

  v54 = *taskInfo->attachments;
  v50 = v54;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v54 = v50;
    }
    else
    {
      v54 = v50;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v50 = taskInfo->attachments[1];
  v48 = v50;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v50 = v48;
      __debugbreak();
    }
    else
    {
      v50 = v48;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v53 = taskInfo->attachments[2];
  v48 = v53;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v53 = v48;
      __debugbreak();
    }
    else
    {
      v53 = v48;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v57 = v50;
  v12 = *R_RT_GetViewInternal(&v52, &v57, 0, 1);
  m_surfaceID = _XMM0;
  v57 = v12;
  v48 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      m_surfaceID = v48.m_surfaceID;
      v12 = v48;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      m_surfaceID = v48.m_surfaceID;
      v12 = v48;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v12 = v57;
      if ( v15 )
        __debugbreak();
    }
  }
  v57 = v12;
  v16 = m_surfaceID & 0x7FFF;
  if ( v16 )
    v17 = v16 | 0x8000;
  else
    v17 = 0;
  v49.m_surfaceID = v17;
  _XMM0 = *(_OWORD *)&v48.m_tracking.m_allocCounter;
  v49.m_tracking = v48.m_tracking;
  v57 = v49;
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v19 )
    __debugbreak();
LABEL_43:
  v56 = v50;
  v20 = *R_RT_GetViewInternal(&v52, &v56, 0, 2);
  v21 = _XMM0;
  v56 = v20;
  v48 = v20;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      v21 = v48.m_surfaceID;
      v20 = v48;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      v21 = v48.m_surfaceID;
      v20 = v48;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v20 = v56;
      if ( v23 )
        __debugbreak();
    }
  }
  v56 = v20;
  v24 = v21 & 0x7FFF;
  if ( v24 )
    v25 = v24 | 0x8000;
  else
    v25 = 0;
  v49.m_surfaceID = v25;
  _XMM0 = *(_OWORD *)&v48.m_tracking.m_allocCounter;
  v49.m_tracking = v48.m_tracking;
  v56 = v49;
  if ( v25 )
  {
    R_RT_Handle::GetSurface(&v56);
    if ( (R_RT_Handle::GetSurface(&v56)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v27 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v28 = 217;
    v29 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v27 = "!this->m_tracking.m_allocCounter";
    v28 = 100;
    v29 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v28, ASSERT_TYPE_ASSERT, v29, (const char *)&queryFormat, v27) )
    __debugbreak();
LABEL_61:
  v55 = v50;
  v30 = *R_RT_GetViewInternal(&v52, &v55, 0, 3);
  v31 = _XMM0;
  v55 = v30;
  v48 = v30;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      v31 = v48.m_surfaceID;
      v30 = v48;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v48.m_tracking.m_allocCounter;
      v31 = v48.m_surfaceID;
      v30 = v48;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v30 = v55;
      if ( v33 )
        __debugbreak();
    }
  }
  v55 = v30;
  v34 = v31 & 0x7FFF;
  if ( v34 )
    v35 = v34 | 0x8000;
  else
    v35 = 0;
  v49.m_surfaceID = v35;
  _XMM0 = *(_OWORD *)&v48.m_tracking.m_allocCounter;
  _XMM1 = (unsigned __int64)v48.m_tracking.m_location;
  v49.m_tracking = v48.m_tracking;
  v55 = v49;
  if ( v35 )
  {
    R_RT_Handle::GetSurface(&v55);
    if ( (R_RT_Handle::GetSurface(&v55)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v38 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v39 = 217;
    v40 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v38 = "!this->m_tracking.m_allocCounter";
    v39 = 100;
    v40 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v39, ASSERT_TYPE_ASSERT, v40, (const char *)&queryFormat, v38) )
    __debugbreak();
LABEL_79:
  v48 = taskInfo->attachments[3];
  v49 = v48;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v49);
    if ( (R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v48 = v49;
      __debugbreak();
    }
    else
    {
      v48 = v49;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v42 = taskInfo->attachments[4];
  v51 = v42;
  v49 = v42;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v49);
    if ( (R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v42 = v49;
    }
    else
    {
      v42 = v49;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v42 = v51;
      if ( v44 )
        __debugbreak();
    }
  }
  attachments = (R_RT_DepthHandle *)taskInfo->attachments;
  v52 = v42;
  v51 = attachments[5].R_RT_Handle;
  v49 = v51;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v49);
    if ( (R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v51 = v49;
    }
    else
    {
      v51 = v49;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  Surface = R_RT_Handle::GetSurface(&v52);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v52 = v48;
  v49 = v50;
  R_ResolveFloatZDownsample(computeState, viewInfo, (R_RT_DepthHandle *)&v54, (R_RT_ColorHandle *)&v49, (R_RT_ColorHandle *)&v57, (R_RT_ColorHandle *)&v56, (R_RT_ColorHandle *)&v55, (R_RT_ColorHandle *)&v53, (R_RT_DepthHandle *)&v51, (R_RT_ColorHandle *)&v52, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_ResolveFloatZ_Full_VRS
==============
*/
void RBT_ResolveFloatZ_Full_VRS(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v12; 
  __int16 v13; 
  bool v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  bool v19; 
  R_RT_Handle v20; 
  __int16 v21; 
  bool v23; 
  __int16 v24; 
  unsigned __int16 v25; 
  bool v27; 
  R_RT_Handle v28; 
  __int16 v29; 
  bool v31; 
  __int16 v32; 
  unsigned __int16 v33; 
  bool v36; 
  R_RT_Handle v38; 
  bool v40; 
  const R_RT_Surface *Surface; 
  char v43[40]; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  R_RT_Handle v47; 
  R_RT_Handle v48; 
  R_RT_ColorHandle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 

  v50 = *taskInfo->attachments;
  v45 = v50;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v50 = v45;
    }
    else
    {
      v50 = v45;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v45 = taskInfo->attachments[1];
  *(R_RT_Handle *)&v43[8] = v45;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v45 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      v45 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v49 = (R_RT_ColorHandle)taskInfo->attachments[2];
  *(R_RT_ColorHandle *)&v43[8] = v49;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v49 = *(R_RT_ColorHandle *)&v43[8];
      __debugbreak();
    }
    else
    {
      v49 = *(R_RT_ColorHandle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v52 = v45;
  v12 = *R_RT_GetViewInternal(&v47, &v52, 0, 1);
  v13 = _XMM0;
  v48 = v12;
  *(R_RT_Handle *)&v43[8] = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v13 = *(_WORD *)&v43[8];
      v12 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v13 = *(_WORD *)&v43[8];
      v12 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v12 = v48;
      if ( v15 )
        __debugbreak();
    }
  }
  v52 = v12;
  v16 = v13 & 0x7FFF;
  if ( v16 )
  {
    v17 = v16 | 0x8000;
    v44.m_surfaceID = v17;
  }
  else
  {
    v17 = 0;
    v44.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v43[16];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v48 = v44;
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_43;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v19 )
    __debugbreak();
LABEL_43:
  v52 = v45;
  v20 = *R_RT_GetViewInternal(&v46, &v52, 0, 2);
  v21 = _XMM0;
  v47 = v20;
  *(R_RT_Handle *)&v43[8] = v20;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v21 = *(_WORD *)&v43[8];
      v20 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v21 = *(_WORD *)&v43[8];
      v20 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v20 = v47;
      if ( v23 )
        __debugbreak();
    }
  }
  v52 = v20;
  v24 = v21 & 0x7FFF;
  if ( v24 )
    v25 = v24 | 0x8000;
  else
    v25 = 0;
  v44.m_surfaceID = v25;
  _XMM0 = *(_OWORD *)&v43[16];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v47 = v44;
  if ( v25 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_61;
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_61;
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v27 )
    __debugbreak();
LABEL_61:
  v52 = v45;
  v28 = *R_RT_GetViewInternal(&v51, &v52, 0, 3);
  v29 = _XMM0;
  v46 = v28;
  *(R_RT_Handle *)&v43[8] = v28;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8]);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v43[8])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v29 = *(_WORD *)&v43[8];
      v28 = *(R_RT_Handle *)&v43[8];
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = *(_DWORD *)&v43[16];
      v29 = *(_WORD *)&v43[8];
      v28 = *(R_RT_Handle *)&v43[8];
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v28 = v46;
      if ( v31 )
        __debugbreak();
    }
  }
  v52 = v28;
  v32 = v29 & 0x7FFF;
  if ( v32 )
  {
    v33 = v32 | 0x8000;
    v44.m_surfaceID = v33;
  }
  else
  {
    v33 = 0;
    v44.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v43[16];
  _XMM1 = *(unsigned __int64 *)&v43[32];
  v44.m_tracking = *(R_RT_Tracking_HandleInfo *)&v43[16];
  v46 = v44;
  if ( v33 )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_79;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_79;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v36 )
    __debugbreak();
LABEL_79:
  *(R_RT_Handle *)&v43[8] = taskInfo->attachments[3];
  v44 = *(R_RT_Handle *)&v43[8];
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      *(R_RT_Handle *)&v43[8] = v44;
      __debugbreak();
    }
    else
    {
      *(R_RT_Handle *)&v43[8] = v44;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v38 = taskInfo->attachments[4];
  v52 = v38;
  v44 = v38;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v38 = v44;
    }
    else
    {
      v38 = v44;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v38 = v52;
      if ( v40 )
        __debugbreak();
    }
  }
  v52 = v38;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v44.m_tracking.m_name = _XMM0;
  v44.m_surfaceID = 0;
  v44.m_tracking.m_allocCounter = 0;
  Surface = R_RT_Handle::GetSurface(&v52);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v52 = *(R_RT_Handle *)&v43[8];
  R_ResolveFloatZDownsample(computeState, viewInfo, (R_RT_DepthHandle *)&v50, (R_RT_ColorHandle *)&v45, (R_RT_ColorHandle *)&v48, (R_RT_ColorHandle *)&v47, (R_RT_ColorHandle *)&v46, &v49, (R_RT_DepthHandle *)&v44, (R_RT_ColorHandle *)&v52, (const GfxWrappedRWBuffer *)&Surface->1080);
}

/*
==============
RBT_Resolve_CompactFmask
==============
*/
void RBT_Resolve_CompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v8; 
  R_RT_ColorHandle *attachments; 
  R_RT_Handle v12; 
  bool v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  __m256i v17; 
  R_RT_Handle v18; 

  v8 = *taskInfo->attachments;
  v16 = v8;
  v15 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v15;
      __debugbreak();
    }
    else
    {
      v8 = v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = (R_RT_ColorHandle *)taskInfo->attachments;
  v18 = v8;
  v16 = attachments[1].R_RT_Handle;
  v15 = v16;
  if ( (_WORD)_XMM1 )
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
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v12 = taskInfo->attachments[2];
  v17 = (__m256i)v12;
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
      v12 = (R_RT_Handle)v17;
      if ( v14 )
        __debugbreak();
    }
  }
  v17 = (__m256i)v12;
  R_Resolve_CompactFmask(computeState, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v17, (const R_RT_ColorHandle *)&v18);
}

/*
==============
RBT_Resolve_CopyFrom4xMS
==============
*/
void RBT_Resolve_CopyFrom4xMS(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v12; 
  bool v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  __m256i v20; 

  v19 = *taskInfo->attachments;
  v15 = v19;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v19 = v15;
      __debugbreak();
    }
    else
    {
      v19 = v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18 = taskInfo->attachments[1];
  v15 = v18;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v15;
      __debugbreak();
    }
    else
    {
      v18 = v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = taskInfo->attachments[2];
  v15 = v17;
  if ( (_WORD)_XMM0 )
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
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v16 = taskInfo->attachments[3];
  v15 = v16;
  if ( (_WORD)_XMM1 )
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
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v12 = taskInfo->attachments[4];
  v20 = (__m256i)v12;
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
      v12 = (R_RT_Handle)v20;
      if ( v14 )
        __debugbreak();
    }
  }
  v20 = (__m256i)v12;
  *(GfxCmdBufContext *)&v15.m_surfaceID = *gfxContext;
  R_Resolve_CopyFrom4xMS((GfxCmdBufContext *)&v15, (R_RT_ColorHandle *)&v19, (R_RT_ColorHandle *)&v18, (R_RT_ColorHandle *)&v17, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v20);
}

/*
==============
RBT_Resolve_CopySampleFromMSAA
==============
*/
void RBT_Resolve_CopySampleFromMSAA(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v9; 
  bool v11; 
  R_RT_Handle v12; 
  R_RT_Handle v13; 
  __m256i v14; 

  v13 = *taskInfo->attachments;
  v12 = v13;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v13 = v12;
      __debugbreak();
    }
    else
    {
      v13 = v12;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v9 = taskInfo->attachments[1];
  v14 = (__m256i)v9;
  v12 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v9 = v12;
      __debugbreak();
    }
    else
    {
      v9 = v12;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v9 = (R_RT_Handle)v14;
      if ( v11 )
        __debugbreak();
    }
  }
  v14 = (__m256i)v9;
  *(GfxCmdBufContext *)&v12.m_surfaceID = *gfxContext;
  R_Resolve_CopySampleFromMSAA((GfxCmdBufContext *)&v12, (R_RT_ColorHandle *)&v13, (R_RT_ColorHandle *)&v14);
}

/*
==============
RBT_Resolve_DilateCompactFmask
==============
*/
void RBT_Resolve_DilateCompactFmask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __m256i v7; 
  R_RT_Handle *attachments; 
  __m256i v10; 
  bool v12; 
  R_RT_Handle v13; 
  __m256i v14; 
  R_RT_ColorHandle dilatedCompactFmaskRtHandle; 
  R_RT_ColorHandle compactFmaskRtHandle; 

  v7 = *(__m256i *)taskInfo->attachments;
  v14 = v7;
  v13 = (R_RT_Handle)v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v7 = (__m256i)v13;
      __debugbreak();
    }
    else
    {
      v7 = (__m256i)v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v7 = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  dilatedCompactFmaskRtHandle = (R_RT_ColorHandle)v7;
  v10 = (__m256i)attachments[1];
  v14 = v10;
  v13 = (R_RT_Handle)v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = (__m256i)v13;
      __debugbreak();
    }
    else
    {
      v10 = (__m256i)v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = v14;
      if ( v12 )
        __debugbreak();
    }
  }
  compactFmaskRtHandle = (R_RT_ColorHandle)v10;
  R_Resolve_DilateCompactFmask(computeState, &compactFmaskRtHandle, &dilatedCompactFmaskRtHandle);
}

/*
==============
RBT_Resolve_MSAASceneColor4xToFull
==============
*/
void RBT_Resolve_MSAASceneColor4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  bool v12; 
  const GfxBackEndData *v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 
  __m256i v16; 

  v15 = *taskInfo->attachments;
  v14 = v15;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v15 = v14;
      __debugbreak();
    }
    else
    {
      v15 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v10 = taskInfo->attachments[1];
  v16 = (__m256i)v10;
  v14 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = v14;
      __debugbreak();
    }
    else
    {
      v10 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = (R_RT_Handle)v16;
      if ( v12 )
        __debugbreak();
    }
  }
  v13 = viewInfo->input.data;
  v16 = (__m256i)v15;
  v15 = v10;
  R_Resolve_MSAAColor4xToFull(computeState, (R_RT_ColorHandle *)&v15, (R_RT_ColorHandle *)&v16, v13->frameCount);
}

/*
==============
RBT_Resolve_MSAATangentFrame4xToFull
==============
*/
void RBT_Resolve_MSAATangentFrame4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  bool v12; 
  const GfxBackEndData *v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 
  __m256i v16; 

  v15 = *taskInfo->attachments;
  v14 = v15;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v15 = v14;
      __debugbreak();
    }
    else
    {
      v15 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v10 = taskInfo->attachments[1];
  v16 = (__m256i)v10;
  v14 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = v14;
      __debugbreak();
    }
    else
    {
      v10 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = (R_RT_Handle)v16;
      if ( v12 )
        __debugbreak();
    }
  }
  v13 = viewInfo->input.data;
  v16 = (__m256i)v15;
  v15 = v10;
  R_Resolve_MSAAColor4xToFull(computeState, (R_RT_ColorHandle *)&v15, (R_RT_ColorHandle *)&v16, v13->frameCount);
}

/*
==============
RBT_Resolve_MSAAVelocity4xToFull
==============
*/
void RBT_Resolve_MSAAVelocity4xToFull(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  bool v12; 
  const GfxBackEndData *v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 
  __m256i v16; 

  v15 = *taskInfo->attachments;
  v14 = v15;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v15 = v14;
      __debugbreak();
    }
    else
    {
      v15 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v10 = taskInfo->attachments[1];
  v16 = (__m256i)v10;
  v14 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v14);
    if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v10 = v14;
      __debugbreak();
    }
    else
    {
      v10 = v14;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v10 = (R_RT_Handle)v16;
      if ( v12 )
        __debugbreak();
    }
  }
  v13 = viewInfo->input.data;
  v16 = (__m256i)v15;
  v15 = v10;
  R_Resolve_MSAAColor4xToFull(computeState, (R_RT_ColorHandle *)&v15, (R_RT_ColorHandle *)&v16, v13->frameCount);
}

/*
==============
RBT_Resolve_StencilMaskCreateClear
==============
*/
void RBT_Resolve_StencilMaskCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v6; 
  R_RT_Handle v8; 
  __m256i v9; 

  v6 = *taskInfo->attachments;
  v9 = (__m256i)v6;
  v8 = v6;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v8);
    if ( (R_RT_Handle::GetSurface(&v8)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v6 = v8;
    }
    else
    {
      v6 = v8;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v6 = (R_RT_Handle)v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v9 = (__m256i)v6;
  R_Resolve_ClearStencilMaskBuffer(computeState, (R_RT_BufferHandle *)&v9);
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

