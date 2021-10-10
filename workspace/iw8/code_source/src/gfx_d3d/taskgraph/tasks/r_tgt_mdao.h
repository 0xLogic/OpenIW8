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
  R_RT_Handle v10; 
  R_RT_Handle *attachments; 
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle *v16; 
  __m256i v18; 
  bool v20; 
  R_RT_Handle *v21; 
  __m256i v22; 
  bool v24; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  unsigned __int16 m_surfaceID; 
  __int16 v28; 
  unsigned __int16 v29; 
  bool v30; 
  const R_RT_Surface *Surface; 
  const GfxWrappedBuffer *v32; 
  const R_RT_Surface *v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  ID3D12Resource *buffers; 
  R_RT_Handle v37; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  R_RT_Handle v40; 
  R_RT_ColorHandle rtMdao; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_ColorHandle rtFloatHalf; 

  v10 = *taskInfo->attachments;
  v35 = v10;
  v34 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v10 = v34;
    }
    else
    {
      v10 = v34;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v10 = v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v38 = v10;
  v13 = attachments[1];
  v35 = v13;
  v34 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v13 = v34;
    }
    else
    {
      v13 = v34;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = v35;
      if ( v15 )
        __debugbreak();
    }
  }
  v16 = taskInfo->attachments;
  v37 = v13;
  v35 = v16[2];
  v34 = v35;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v35 = v34;
      __debugbreak();
    }
    else
    {
      v35 = v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18 = (__m256i)taskInfo->attachments[3];
  v40 = (R_RT_Handle)v18;
  v34 = (R_RT_Handle)v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = (__m256i)v34;
      __debugbreak();
    }
    else
    {
      v18 = (__m256i)v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v18 = (__m256i)v40;
      if ( v20 )
        __debugbreak();
    }
  }
  v21 = taskInfo->attachments;
  rtTangentBasis = (R_RT_ColorHandle)v18;
  v22 = (__m256i)v21[4];
  v40 = (R_RT_Handle)v22;
  v34 = (R_RT_Handle)v22;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v22 = (__m256i)v34;
      __debugbreak();
    }
    else
    {
      v22 = (__m256i)v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v22 = (__m256i)v40;
      if ( v24 )
        __debugbreak();
    }
  }
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  rtMdao = (R_RT_ColorHandle)v22;
  buffers = globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  v40 = v35;
  m_surfaceID = _XMM0;
  v34 = *R_RT_GetViewInternal(&v39, &v40, 0, 1);
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      m_surfaceID = v34.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      m_surfaceID = v34.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v28 = m_surfaceID & 0x7FFF;
  if ( v28 )
    v29 = v28 | 0x8000;
  else
    v29 = 0;
  v35.m_surfaceID = v29;
  v35.m_tracking = v34.m_tracking;
  if ( v29 )
  {
    R_RT_Handle::GetSurface(&v35);
    if ( (R_RT_Handle::GetSurface(&v35)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_59;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_59;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v30 )
    __debugbreak();
LABEL_59:
  rtFloatHalf = (R_RT_ColorHandle)v35;
  Surface = R_RT_Handle::GetSurface(&v37);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v32 = (const GfxWrappedBuffer *)&Surface->1080;
  v33 = R_RT_Handle::GetSurface(&v38);
  if ( (v33->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_ComputeOcclusion(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v33->1080, v32, &rtFloatHalf, &rtTangentBasis, &rtMdao);
}

/*
==============
RBT_MDAO_ComputeOcclusionInlineResolve
==============
*/
void RBT_MDAO_ComputeOcclusionInlineResolve(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  R_RT_Handle *attachments; 
  R_RT_Handle v13; 
  bool v15; 
  R_RT_Handle *v16; 
  __m256i v18; 
  bool v20; 
  R_RT_Handle *v21; 
  __m256i v22; 
  bool v24; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  unsigned __int16 m_surfaceID; 
  __int16 v28; 
  unsigned __int16 v29; 
  bool v30; 
  const R_RT_Surface *Surface; 
  const GfxWrappedBuffer *v32; 
  const R_RT_Surface *v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  ID3D12Resource *buffers; 
  R_RT_Handle v37; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  R_RT_Handle v40; 
  R_RT_ColorHandle rtMdao; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_ColorHandle rtFloatHalf; 

  v10 = *taskInfo->attachments;
  v35 = v10;
  v34 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v10 = v34;
    }
    else
    {
      v10 = v34;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v10 = v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v38 = v10;
  v13 = attachments[1];
  v35 = v13;
  v34 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v13 = v34;
    }
    else
    {
      v13 = v34;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = v35;
      if ( v15 )
        __debugbreak();
    }
  }
  v16 = taskInfo->attachments;
  v37 = v13;
  v35 = v16[2];
  v34 = v35;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v35 = v34;
      __debugbreak();
    }
    else
    {
      v35 = v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18 = (__m256i)taskInfo->attachments[3];
  v40 = (R_RT_Handle)v18;
  v34 = (R_RT_Handle)v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = (__m256i)v34;
      __debugbreak();
    }
    else
    {
      v18 = (__m256i)v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v18 = (__m256i)v40;
      if ( v20 )
        __debugbreak();
    }
  }
  v21 = taskInfo->attachments;
  rtTangentBasis = (R_RT_ColorHandle)v18;
  v22 = (__m256i)v21[4];
  v40 = (R_RT_Handle)v22;
  v34 = (R_RT_Handle)v22;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v22 = (__m256i)v34;
      __debugbreak();
    }
    else
    {
      v22 = (__m256i)v34;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v22 = (__m256i)v40;
      if ( v24 )
        __debugbreak();
    }
  }
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  rtMdao = (R_RT_ColorHandle)v22;
  buffers = globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  v40 = v35;
  m_surfaceID = _XMM0;
  v34 = *R_RT_GetViewInternal(&v39, &v40, 0, 1);
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      m_surfaceID = v34.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      m_surfaceID = v34.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v28 = m_surfaceID & 0x7FFF;
  if ( v28 )
    v29 = v28 | 0x8000;
  else
    v29 = 0;
  v35.m_surfaceID = v29;
  v35.m_tracking = v34.m_tracking;
  if ( v29 )
  {
    R_RT_Handle::GetSurface(&v35);
    if ( (R_RT_Handle::GetSurface(&v35)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_59;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_59;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v30 )
    __debugbreak();
LABEL_59:
  rtFloatHalf = (R_RT_ColorHandle)v35;
  Surface = R_RT_Handle::GetSurface(&v37);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v32 = (const GfxWrappedBuffer *)&Surface->1080;
  v33 = R_RT_Handle::GetSurface(&v38);
  if ( (v33->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_ComputeOcclusion(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v33->1080, v32, &rtFloatHalf, &rtTangentBasis, &rtMdao);
}

/*
==============
RBT_MDAO_ComputeTileBoundingBoxes
==============
*/
void RBT_MDAO_ComputeTileBoundingBoxes(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v11; 
  bool v13; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v15; 
  unsigned __int16 m_surfaceID; 
  __int16 v18; 
  unsigned __int16 v19; 
  const char *v20; 
  int v21; 
  const char *v22; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 
  R_RT_ColorHandle rtFloatzHalf; 

  v24 = *taskInfo->attachments;
  v23 = v24;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v23);
    if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v24 = v23;
      __debugbreak();
    }
    else
    {
      v24 = v23;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v11 = taskInfo->attachments[1];
  v26 = v11;
  v23 = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v23);
    if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v11 = v23;
    }
    else
    {
      v11 = v23;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = v26;
      if ( v13 )
        __debugbreak();
    }
  }
  v26 = v11;
  R_MDAO_UpdateConstants(computeState, viewInfo, data);
  Surface = R_RT_Handle::GetSurface(&v26);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v26 = v24;
  v15 = (const GfxWrappedRWBuffer *)&Surface->1080;
  m_surfaceID = _XMM0;
  v23 = *R_RT_GetViewInternal(&v25, &v26, 0, 1);
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v23);
    if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v23.m_tracking.m_allocCounter;
      m_surfaceID = v23.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v23.m_tracking.m_allocCounter;
      m_surfaceID = v23.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v18 = m_surfaceID & 0x7FFF;
  if ( v18 )
    v19 = v18 | 0x8000;
  else
    v19 = 0;
  v24.m_surfaceID = v19;
  v24.m_tracking = v23.m_tracking;
  if ( v19 )
  {
    R_RT_Handle::GetSurface(&v24);
    if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_38;
    v20 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v21 = 217;
    v22 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_38;
    v20 = "!this->m_tracking.m_allocCounter";
    v21 = 100;
    v22 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v21, ASSERT_TYPE_ASSERT, v22, (const char *)&queryFormat, v20) )
    __debugbreak();
LABEL_38:
  rtFloatzHalf = (R_RT_ColorHandle)v24;
  R_MDAO_ComputeTileBoundingBoxes(computeState, viewInfo, data, &rtFloatzHalf, v15);
}

/*
==============
RBT_MDAO_CullOccluders
==============
*/
void RBT_MDAO_CullOccluders(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v9; 
  R_RT_Handle *attachments; 
  R_RT_Handle v12; 
  bool v14; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v16; 
  const R_RT_Surface *v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 

  v9 = *taskInfo->attachments;
  v19 = v9;
  v18 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v9 = v18;
    }
    else
    {
      v9 = v18;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v9 = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v20 = v9;
  v12 = attachments[1];
  v19 = v12;
  v18 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v12 = v18;
    }
    else
    {
      v12 = v18;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v12 = v19;
      if ( v14 )
        __debugbreak();
    }
  }
  v19 = v12;
  Surface = R_RT_Handle::GetSurface(&v19);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v16 = (const GfxWrappedRWBuffer *)&Surface->1080;
  v17 = R_RT_Handle::GetSurface(&v20);
  if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_MDAO_CullOccluders(computeState, viewInfo, data, (const GfxWrappedBuffer *)&v17->1080, v16);
}

/*
==============
RBT_MDAO_DrawVolumeOccluders
==============
*/
void RBT_MDAO_DrawVolumeOccluders(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v11; 
  bool v13; 
  GfxCmdBufSourceState *source; 
  unsigned __int16 m_surfaceID; 
  __int16 v17; 
  unsigned __int16 v18; 
  bool v19; 
  GfxCmdBufContext v20; 
  R_RT_Handle v21; 
  R_RT_Handle v22; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 

  v22 = *taskInfo->attachments;
  v21 = v22;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v22 = v21;
      __debugbreak();
    }
    else
    {
      v22 = v21;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v11 = taskInfo->attachments[1];
  v24 = v11;
  v21 = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = v21;
      __debugbreak();
    }
    else
    {
      v11 = v21;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = v24;
      if ( v13 )
        __debugbreak();
    }
  }
  source = gfxContext->source;
  v25 = v11;
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  v24 = v22;
  m_surfaceID = _XMM0;
  v21 = *R_RT_GetViewInternal(&v23, &v24, 0, 1);
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v21.m_tracking.m_allocCounter;
      m_surfaceID = v21.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v21.m_tracking.m_allocCounter;
      m_surfaceID = v21.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = m_surfaceID & 0x7FFF;
  if ( v17 )
    v18 = v17 | 0x8000;
  else
    v18 = 0;
  v22.m_surfaceID = v18;
  v22.m_tracking = v21.m_tracking;
  if ( v18 )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_35;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_35;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v19 )
    __debugbreak();
LABEL_35:
  v20 = *gfxContext;
  v26 = v22;
  *(GfxCmdBufContext *)&v21.m_surfaceID = v20;
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v21, viewInfo, data, (const R_RT_ColorHandle *)&v26, (const R_RT_ColorHandle *)&v25);
}

/*
==============
RBT_MDAO_DrawVolumeOccludersInlineResolve
==============
*/
void RBT_MDAO_DrawVolumeOccludersInlineResolve(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v11; 
  bool v13; 
  GfxCmdBufSourceState *source; 
  unsigned __int16 m_surfaceID; 
  __int16 v17; 
  unsigned __int16 v18; 
  bool v19; 
  GfxCmdBufContext v20; 
  R_RT_Handle v21; 
  R_RT_Handle v22; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 

  v22 = *taskInfo->attachments;
  v21 = v22;
  if ( (_WORD)_XMM1 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v22 = v21;
      __debugbreak();
    }
    else
    {
      v22 = v21;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v11 = taskInfo->attachments[1];
  v24 = v11;
  v21 = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = v21;
      __debugbreak();
    }
    else
    {
      v11 = v21;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = v24;
      if ( v13 )
        __debugbreak();
    }
  }
  source = gfxContext->source;
  v25 = v11;
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  v24 = v22;
  m_surfaceID = _XMM0;
  v21 = *R_RT_GetViewInternal(&v23, &v24, 0, 1);
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v21);
    if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v21.m_tracking.m_allocCounter;
      m_surfaceID = v21.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v21.m_tracking.m_allocCounter;
      m_surfaceID = v21.m_surfaceID;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  v17 = m_surfaceID & 0x7FFF;
  if ( v17 )
    v18 = v17 | 0x8000;
  else
    v18 = 0;
  v22.m_surfaceID = v18;
  v22.m_tracking = v21.m_tracking;
  if ( v18 )
  {
    R_RT_Handle::GetSurface(&v22);
    if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_35;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_35;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v19 )
    __debugbreak();
LABEL_35:
  v20 = *gfxContext;
  v26 = v22;
  *(GfxCmdBufContext *)&v21.m_surfaceID = v20;
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v21, viewInfo, data, (const R_RT_ColorHandle *)&v26, (const R_RT_ColorHandle *)&v25);
}

