/*
==============
RBTD_FL_DV_Overlay
==============
*/

void __fastcall RBTD_FL_DV_Overlay(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBTD_FL_DV_Overlay@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_FL_ClusterCreateClear
==============
*/

void __fastcall RBT_FL_ClusterCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_FL_ClusterCreateClear@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_FL_TileCreateClear
==============
*/

void __fastcall RBT_FL_TileCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_FL_TileCreateClear@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
RBT_FL_TileWrite
==============
*/

void __fastcall RBT_FL_TileWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_FL_TileWrite@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_FL_ClusterWrite
==============
*/

void __fastcall RBT_FL_ClusterWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_FL_ClusterWrite@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
cRBT_FL_TileWrite<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_FL_TileWrite<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_FL_TileWrite@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
cRBT_FL_ClusterWrite<R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_FL_ClusterWrite<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  return ??$cRBT_FL_ClusterWrite@UR_TG_Handle@@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@@Z(context, <args_0>);
}

/*
==============
cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  return ??$cRBTD_FL_DV_Overlay@UR_TG_Handle@@U1@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@111111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  R_TG_AddTaskStack arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  return R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(context, g_R_TG_Def_RBTD_FL_DV_Overlay.m_index, &arguments, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
cRBT_FL_ClusterWrite<R_TG_Handle>
==============
*/
unsigned int cRBT_FL_ClusterWrite<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &<args_0>->index;
  return R_TG_AddTask(context, g_R_TG_Def_RBT_FL_ClusterWrite.m_index, &stack);
}

/*
==============
cRBT_FL_TileWrite<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_FL_TileWrite<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_FL_TileWrite.m_index;
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
RBTD_FL_DV_Overlay
==============
*/
void RBTD_FL_DV_Overlay(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int16 v4; 
  int integer; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxWrappedBuffer *p_dummyBuffer; 
  GfxWrappedBuffer *v11; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  int v14; 
  const R_RT_Surface *v15; 
  const GfxWrappedBuffer *v16; 
  const R_RT_Surface *v17; 
  const GfxWrappedRWBuffer *v18; 
  R_RT_Handle v19; 

  integer = r_showFrustumLightsDebug->current.integer;
  if ( integer )
  {
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments);
    p_dummyBuffer = &gfxBuf.dummyBuffer;
    v18 = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments + 1);
    v19 = taskInfo->attachments[2];
    if ( v4 )
    {
      R_RT_Handle::GetSurface(&v19);
      Surface = R_RT_Handle::GetSurface(&v19);
      if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      v11 = (GfxWrappedBuffer *)&Surface->1080;
    }
    else
    {
      if ( v19.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v11 = &gfxBuf.dummyBuffer;
    }
    v19 = taskInfo->attachments[3];
    if ( v4 )
    {
      R_RT_Handle::GetSurface(&v19);
      v13 = R_RT_Handle::GetSurface(&v19);
      if ( (v13->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      p_dummyBuffer = (GfxWrappedBuffer *)&v13->1080;
    }
    else if ( v19.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    *(GfxCmdBufContext *)&v19.m_surfaceID = *gfxContext;
    R_FL_ShowDebugOverlay((GfxCmdBufContext *)&v19, viewInfo, WrappedBuffer, v18, v11, p_dummyBuffer, integer, r_showFrustumLightsMinIndexDebug->current.unsignedInt, r_showFrustumLightsMaxIndexDebug->current.unsignedInt, r_showFrustumLightsDebugBlend->current.value);
  }
  v14 = r_showFrustumGridDebug->current.integer;
  if ( v14 )
  {
    v15 = R_RT_Handle::GetSurface(taskInfo->attachments + 4);
    if ( (v15->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v16 = (const GfxWrappedBuffer *)&v15->1080;
    v17 = R_RT_Handle::GetSurface(taskInfo->attachments + 5);
    if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    *(GfxCmdBufContext *)&v19.m_surfaceID = *gfxContext;
    R_DecalVolumes_FrustumGridOverlay((GfxCmdBufContext *)&v19, viewInfo, (const GfxWrappedBuffer *)&v17->1080, v16, v14);
  }
}

/*
==============
RBT_FL_ClusterCreateClear
==============
*/
void RBT_FL_ClusterCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v7; 
  R_RT_Handle v9; 
  __m256i v10; 

  v7 = *taskInfo->attachments;
  v10 = (__m256i)v7;
  v9 = v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v9);
    if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v7 = v9;
    }
    else
    {
      v7 = v9;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v7 = (R_RT_Handle)v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v10 = (__m256i)v7;
  R_ClearFrustumLightsClusterBuffer(computeState, viewInfo, (R_RT_BufferHandle *)&v10);
}

/*
==============
RBT_FL_ClusterWrite
==============
*/
void RBT_FL_ClusterWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v9; 
  R_RT_Handle v10; 

  v10 = *taskInfo->attachments;
  v9 = v10;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v9);
    if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v10 = v9;
    }
    else
    {
      v10 = v9;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  R_SetupFrustumLightsUpdateBuffers(data);
  *(GfxCmdBufContext *)&v9.m_surfaceID = *gfxContext;
  R_RenderFrustumLightsClusterBuffer((GfxCmdBufContext *)&v9, viewInfo, data, (R_RT_BufferHandle *)&v10);
}

/*
==============
RBT_FL_TileCreateClear
==============
*/
void RBT_FL_TileCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v8; 
  unsigned int height; 
  unsigned int width; 
  R_RT_Handle v12; 
  __m256i v13; 

  v8 = *taskInfo->attachments;
  v13 = (__m256i)v8;
  v12 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v12);
    if ( (R_RT_Handle::GetSurface(&v12)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v8 = v12;
    }
    else
    {
      v8 = v12;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = (R_RT_Handle)v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  height = viewInfo->sceneViewport.height;
  width = viewInfo->sceneViewport.width;
  v13 = (__m256i)v8;
  R_ClearFrustumLightsTileBuffer(computeState, 1u, width, height, (R_RT_BufferHandle *)&v13);
  R_SetupFrustumLightsUpdateBuffers(data);
}

/*
==============
RBT_FL_TileWrite
==============
*/
void RBT_FL_TileWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __m256i v10; 
  __m256i m_depthRt; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 
  __m256i v15; 
  __m256i v16; 

  v14 = *taskInfo->attachments;
  v13 = v14;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      v10 = (__m256i)v13;
    }
    else
    {
      v10 = (__m256i)v13;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v10 = (__m256i)v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    else
    {
      v10 = (__m256i)v14;
    }
  }
  v14.m_surfaceID = 0;
  v14.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v14.m_tracking.m_name = _XMM0;
  m_depthRt = (__m256i)taskInfo->rtGroup.m_depthRt;
  *(GfxCmdBufContext *)&v13.m_surfaceID = *gfxContext;
  v15 = v10;
  v16 = m_depthRt;
  R_RenderFrustumLightsTileBuffer((GfxCmdBufContext *)&v13, viewInfo, data, (R_RT_DepthHandle *)&v16, (R_RT_BufferHandle *)&v15, (R_RT_ColorHandle *)&v14);
}

