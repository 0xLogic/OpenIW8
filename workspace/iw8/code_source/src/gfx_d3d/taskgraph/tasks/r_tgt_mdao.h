/*
==============
cRBT_MDAO_ComputeTileBoundingBoxes<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_ComputeTileBoundingBoxes<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_MDAO_ComputeTileBoundingBoxes@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
cRBT_MDAO_DrawVolumeOccluders<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_DrawVolumeOccluders<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  return ??$cRBT_MDAO_DrawVolumeOccluders@UR_TG_Handle@@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11@Z(context, <args_0>, <args_1>, <args_2>);
}

/*
==============
cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_MDAO_ComputeOcclusionInlineResolve@UR_TG_Handle@@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
RBT_MDAO_DrawVolumeOccludersInlineResolve
==============
*/

void __fastcall RBT_MDAO_DrawVolumeOccludersInlineResolve(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_DrawVolumeOccludersInlineResolve@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_MDAO_ComputeOcclusion
==============
*/

void __fastcall RBT_MDAO_ComputeOcclusion(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_ComputeOcclusion@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_MDAO_ComputeOcclusion@UR_TG_Handle@@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
cRBT_MDAO_DrawVolumeOccludersInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_DrawVolumeOccludersInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  return ??$cRBT_MDAO_DrawVolumeOccludersInlineResolve@UR_TG_Handle@@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11@Z(context, <args_0>, <args_1>, <args_2>);
}

/*
==============
RBT_MDAO_DrawVolumeOccluders
==============
*/

void __fastcall RBT_MDAO_DrawVolumeOccluders(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_DrawVolumeOccluders@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_MDAO_ComputeTileBoundingBoxes
==============
*/

void __fastcall RBT_MDAO_ComputeTileBoundingBoxes(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_ComputeTileBoundingBoxes@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_MDAO_CullOccluders
==============
*/

void __fastcall RBT_MDAO_CullOccluders(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_CullOccluders@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_MDAO_CullOccluders<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MDAO_CullOccluders<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_MDAO_CullOccluders@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
RBT_MDAO_ComputeOcclusionInlineResolve
==============
*/

void __fastcall RBT_MDAO_ComputeOcclusionInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MDAO_ComputeOcclusionInlineResolve@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_ComputeOcclusion.m_index;
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
cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_ComputeOcclusionInlineResolve.m_index;
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
cRBT_MDAO_ComputeTileBoundingBoxes<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_ComputeTileBoundingBoxes<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_ComputeTileBoundingBoxes.m_index;
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
cRBT_MDAO_CullOccluders<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_CullOccluders<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_CullOccluders.m_index;
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
cRBT_MDAO_DrawVolumeOccluders<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_DrawVolumeOccluders<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v10; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_DrawVolumeOccluders.m_index;
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
cRBT_MDAO_DrawVolumeOccludersInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_MDAO_DrawVolumeOccludersInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v10; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MDAO_DrawVolumeOccludersInlineResolve.m_index;
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
RBT_MDAO_ComputeOcclusion
==============
*/
void RBT_MDAO_ComputeOcclusion(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v16; 
  bool v25; 
  bool v29; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  __int16 v36; 
  unsigned __int16 v37; 
  bool v41; 
  const R_RT_Surface *Surface; 
  const GfxWrappedBuffer *v44; 
  const R_RT_Surface *v45; 
  R_RT_Handle v46; 
  R_RT_Handle v47; 
  ID3D12Resource *buffers; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_ColorHandle rtMdao; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_ColorHandle rtFloatHalf; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_118.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      if ( v16 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_138.m_surfaceID], ymm0
    vmovups ymm1, ymmword ptr [rax+40h]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm1
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
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
    vmovups [rbp+0C0h+var_D0], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0C0h+var_D0] }
      if ( v25 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_90.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups [rbp+0C0h+var_D0], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0C0h+var_D0] }
      if ( v29 )
        __debugbreak();
    }
  }
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  __asm { vmovups ymmword ptr [rbp+0C0h+var_B0.baseclass_0.m_surfaceID], ymm0 }
  buffers = globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups [rbp+0C0h+var_D0], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v51, &v52, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v46.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v46.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v46.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v46.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v36 = _EBX & 0x7FFF;
  if ( v36 )
    v37 = v36 | 0x8000;
  else
    v37 = 0;
  v47.m_surfaceID = v37;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1C0h+var_180.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1C0h+var_180.m_tracking.m_location]
    vmovups xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+1C0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
  }
  if ( v37 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_59;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_59;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v41 )
    __debugbreak();
LABEL_59:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0C0h+var_70.baseclass_0.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v49);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v44 = (const GfxWrappedBuffer *)&Surface->1080;
  v45 = R_RT_Handle::GetSurface(&v50);
  if ( (v45->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_ComputeOcclusion(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v45->1080, v44, &rtFloatHalf, &rtTangentBasis, &rtMdao);
}

/*
==============
RBT_MDAO_ComputeOcclusionInlineResolve
==============
*/
void RBT_MDAO_ComputeOcclusionInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v16; 
  bool v25; 
  bool v29; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  __int16 v36; 
  unsigned __int16 v37; 
  bool v41; 
  const R_RT_Surface *Surface; 
  const GfxWrappedBuffer *v44; 
  const R_RT_Surface *v45; 
  R_RT_Handle v46; 
  R_RT_Handle v47; 
  ID3D12Resource *buffers; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_ColorHandle rtMdao; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_ColorHandle rtFloatHalf; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_118.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      if ( v16 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_138.m_surfaceID], ymm0
    vmovups ymm1, ymmword ptr [rax+40h]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm1
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID]
        vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
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
    vmovups [rbp+0C0h+var_D0], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0C0h+var_D0] }
      if ( v25 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+0C0h+var_90.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups [rbp+0C0h+var_D0], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_180.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0C0h+var_D0] }
      if ( v29 )
        __debugbreak();
    }
  }
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  __asm { vmovups ymmword ptr [rbp+0C0h+var_B0.baseclass_0.m_surfaceID], ymm0 }
  buffers = globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups [rbp+0C0h+var_D0], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v51, &v52, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+1C0h+var_180.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v46);
    if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v46.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v46.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v46.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v46.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v36 = _EBX & 0x7FFF;
  if ( v36 )
    v37 = v36 | 0x8000;
  else
    v37 = 0;
  v47.m_surfaceID = v37;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1C0h+var_180.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1C0h+var_180.m_tracking.m_location]
    vmovups xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+1C0h+var_160.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
  }
  if ( v37 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_59;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_59;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v41 )
    __debugbreak();
LABEL_59:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID]
    vmovups ymmword ptr [rbp+0C0h+var_70.baseclass_0.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v49);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v44 = (const GfxWrappedBuffer *)&Surface->1080;
  v45 = R_RT_Handle::GetSurface(&v50);
  if ( (v45->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_ComputeOcclusion(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v45->1080, v44, &rtFloatHalf, &rtTangentBasis, &rtMdao);
}

/*
==============
RBT_MDAO_ComputeTileBoundingBoxes
==============
*/
void RBT_MDAO_ComputeTileBoundingBoxes(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v18; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v21; 
  __int16 v26; 
  unsigned __int16 v27; 
  const char *v31; 
  int v32; 
  const char *v33; 
  R_RT_Handle v35; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  R_RT_Handle v38; 
  R_RT_ColorHandle rtFloatzHalf; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm1
    vmovups ymmword ptr [rsp+120h+var_F0.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v35);
    if ( (R_RT_Handle::GetSurface(&v35)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+120h+var_F0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+120h+var_F0.m_surfaceID]
        vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
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
    vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+120h+var_F0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v35);
    if ( (R_RT_Handle::GetSurface(&v35)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_F0.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_F0.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_surfaceID] }
      if ( v18 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0 }
  R_MDAO_UpdateConstants(computeState, viewInfo, data);
  Surface = R_RT_Handle::GetSurface(&v38);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
    vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
  }
  v21 = (const GfxWrappedRWBuffer *)&Surface->1080;
  _RAX = R_RT_GetViewInternal(&v37, &v38, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+120h+var_F0.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v35);
    if ( (R_RT_Handle::GetSurface(&v35)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v35.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v35.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v35.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v35.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v26 = _EBX & 0x7FFF;
  if ( v26 )
    v27 = v26 | 0x8000;
  else
    v27 = 0;
  v36.m_surfaceID = v27;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+120h+var_F0.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+120h+var_F0.m_tracking.m_location]
    vmovups xmmword ptr [rbp+57h+var_D0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+57h+var_D0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
    vmovups ymmword ptr [rbp+57h+var_D0.m_surfaceID], ymm0
  }
  if ( v27 )
  {
    R_RT_Handle::GetSurface(&v36);
    if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_38;
    v31 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v32 = 217;
    v33 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_38;
    v31 = "!this->m_tracking.m_allocCounter";
    v32 = 100;
    v33 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v32, ASSERT_TYPE_ASSERT, v33, (const char *)&queryFormat, v31) )
    __debugbreak();
LABEL_38:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+var_D0.m_surfaceID]
    vmovups ymmword ptr [rbp+57h+rtFloatzHalf.baseclass_0.m_surfaceID], ymm0
  }
  R_MDAO_ComputeTileBoundingBoxes(computeState, viewInfo, data, &rtFloatzHalf, v21);
}

/*
==============
RBT_MDAO_CullOccluders
==============
*/
void RBT_MDAO_CullOccluders(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v15; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v17; 
  const R_RT_Surface *v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
  R_RT_Handle v21; 

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
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
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
    R_RT_Handle::GetSurface(&v19);
    if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
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
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID] }
      if ( v15 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0 }
  Surface = R_RT_Handle::GetSurface(&v20);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v17 = (const GfxWrappedRWBuffer *)&Surface->1080;
  v18 = R_RT_Handle::GetSurface(&v21);
  if ( (v18->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_CullOccluders(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v18->1080, v17);
}

/*
==============
RBT_MDAO_DrawVolumeOccluders
==============
*/
void RBT_MDAO_DrawVolumeOccluders(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v18; 
  GfxCmdBufSourceState *source; 
  __int16 v25; 
  unsigned __int16 v26; 
  bool v30; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_Handle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
  }
  _RSI = gfxContext;
  __asm
  {
    vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm1
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID]
        vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID]
        vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
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
    vmovups [rbp+40h+var_B0], ymm0
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+40h+var_B0] }
      if ( v18 )
        __debugbreak();
    }
  }
  source = _RSI->source;
  __asm { vmovups [rbp+40h+var_90], ymm0 }
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups [rbp+40h+var_B0], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v35, &v36, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v33.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v33.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v33.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v33.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v25 = _EBX & 0x7FFF;
  if ( v25 )
    v26 = v25 | 0x8000;
  else
    v26 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+140h+var_110.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+140h+var_110.m_tracking.m_location]
  }
  v34.m_surfaceID = v26;
  __asm
  {
    vmovups xmmword ptr [rsp+140h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+140h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
  }
  if ( v26 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_35;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_35;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v30 )
    __debugbreak();
LABEL_35:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rsi]
    vmovups [rbp+40h+var_70], ymm0
    vmovups xmmword ptr [rsp+140h+var_110.m_surfaceID], xmm1
  }
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v33, viewInfo, data, &v38, &v37);
}

/*
==============
RBT_MDAO_DrawVolumeOccludersInlineResolve
==============
*/
void RBT_MDAO_DrawVolumeOccludersInlineResolve(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v18; 
  GfxCmdBufSourceState *source; 
  __int16 v25; 
  unsigned __int16 v26; 
  bool v30; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_Handle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 

  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm1, ymmword ptr [rax]
    vmovd   eax, xmm1
  }
  _RSI = gfxContext;
  __asm
  {
    vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm1
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID]
        vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID]
        vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
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
    vmovups [rbp+40h+var_B0], ymm0
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+140h+var_110.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+40h+var_B0] }
      if ( v18 )
        __debugbreak();
    }
  }
  source = _RSI->source;
  __asm { vmovups [rbp+40h+var_90], ymm0 }
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups [rbp+40h+var_B0], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v35, &v36, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+140h+var_110.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v33.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v33.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v33.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v33.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v25 = _EBX & 0x7FFF;
  if ( v25 )
    v26 = v25 | 0x8000;
  else
    v26 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+140h+var_110.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+140h+var_110.m_tracking.m_location]
  }
  v34.m_surfaceID = v26;
  __asm
  {
    vmovups xmmword ptr [rsp+140h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+140h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rsp+140h+var_F0.m_surfaceID], ymm0
  }
  if ( v26 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_35;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_35;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v30 )
    __debugbreak();
LABEL_35:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+140h+var_F0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rsi]
    vmovups [rbp+40h+var_70], ymm0
    vmovups xmmword ptr [rsp+140h+var_110.m_surfaceID], xmm1
  }
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v33, viewInfo, data, &v38, &v37);
}

