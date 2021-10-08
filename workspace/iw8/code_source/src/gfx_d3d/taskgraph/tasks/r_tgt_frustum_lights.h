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
  int integer; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v10; 
  GfxWrappedBuffer *p_dummyBuffer; 
  GfxWrappedBuffer *v14; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v18; 
  int v22; 
  const R_RT_Surface *v23; 
  const GfxWrappedBuffer *v24; 
  const R_RT_Surface *v25; 
  float v27; 
  const GfxWrappedBuffer *v28; 
  R_RT_Handle v29; 

  _R12 = gfxContext;
  integer = r_showFrustumLightsDebug->current.integer;
  if ( integer )
  {
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments);
    v10 = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments + 1);
    _RCX = taskInfo->attachments;
    p_dummyBuffer = &gfxBuf.dummyBuffer;
    v28 = v10;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovd   ecx, xmm0
      vmovups ymmword ptr [rsp+0A8h+var_48.m_surfaceID], ymm0
    }
    if ( (_WORD)_RCX )
    {
      R_RT_Handle::GetSurface(&v29);
      Surface = R_RT_Handle::GetSurface(&v29);
      if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      v14 = (GfxWrappedBuffer *)&Surface->1080;
    }
    else
    {
      if ( v29.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v14 = &gfxBuf.dummyBuffer;
    }
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+0A8h+var_48.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v29);
      v18 = R_RT_Handle::GetSurface(&v29);
      if ( (v18->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      p_dummyBuffer = (GfxWrappedBuffer *)&v18->1080;
    }
    else if ( v29.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    _RAX = r_showFrustumLightsDebugBlend;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rsp+0A8h+var_48.m_surfaceID], xmm0
      vmovss  xmm1, dword ptr [rax+28h]
      vmovss  [rsp+0A8h+var_60], xmm1
    }
    R_FL_ShowDebugOverlay((GfxCmdBufContext *)&v29, viewInfo, WrappedBuffer, v28, v14, p_dummyBuffer, integer, r_showFrustumLightsMinIndexDebug->current.unsignedInt, r_showFrustumLightsMaxIndexDebug->current.unsignedInt, v27);
  }
  v22 = r_showFrustumGridDebug->current.integer;
  if ( v22 )
  {
    v23 = R_RT_Handle::GetSurface(taskInfo->attachments + 4);
    if ( (v23->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v24 = (const GfxWrappedBuffer *)&v23->1080;
    v25 = R_RT_Handle::GetSurface(taskInfo->attachments + 5);
    if ( (v25->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rsp+0A8h+var_48.m_surfaceID], xmm0
    }
    R_DecalVolumes_FrustumGridOverlay((GfxCmdBufContext *)&v29, viewInfo, (const GfxWrappedBuffer *)&v25->1080, v24, v22);
  }
}

/*
==============
RBT_FL_ClusterCreateClear
==============
*/
void RBT_FL_ClusterCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v10; 
  R_RT_BufferHandle v11; 

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
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID], ymm0 }
  R_ClearFrustumLightsClusterBuffer(computeState, viewInfo, &v11);
}

/*
==============
RBT_FL_ClusterWrite
==============
*/
void RBT_FL_ClusterWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v15; 
  R_RT_BufferHandle v16; 

  _RAX = taskInfo->attachments;
  _RSI = gfxContext;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+78h+var_28], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID]
        vmovups [rsp+78h+var_28], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+var_48.m_surfaceID]
        vmovups [rsp+78h+var_28], ymm0
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
  R_SetupFrustumLightsUpdateBuffers(data);
  __asm
  {
    vmovups ymm0, [rsp+78h+var_28]
    vmovups [rsp+78h+var_28], ymm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rsp+78h+var_48.m_surfaceID], xmm0
  }
  R_RenderFrustumLightsClusterBuffer((GfxCmdBufContext *)&v15, viewInfo, data, &v16);
}

/*
==============
RBT_FL_TileCreateClear
==============
*/
void RBT_FL_TileCreateClear(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int height; 
  unsigned int width; 
  R_RT_Handle v13; 
  R_RT_BufferHandle v14; 

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
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
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
      __asm { vmovups ymm0, [rsp+78h+var_28] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  height = viewInfo->sceneViewport.height;
  width = viewInfo->sceneViewport.width;
  __asm { vmovups [rsp+78h+var_28], ymm0 }
  R_ClearFrustumLightsTileBuffer(computeState, 1u, width, height, &v14);
  R_SetupFrustumLightsUpdateBuffers(data);
}

/*
==============
RBT_FL_TileWrite
==============
*/
void RBT_FL_TileWrite(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v17; 
  R_RT_ColorHandle v18; 
  R_RT_BufferHandle v19; 
  R_RT_DepthHandle v20; 

  _RAX = taskInfo->attachments;
  _RBX = taskInfo;
  _RBP = gfxContext;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+0B8h+var_68], ymm0
    vmovups ymmword ptr [rsp+0B8h+var_88.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v17);
    if ( (R_RT_Handle::GetSurface(&v17)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
    {
      __asm { vmovups ymm2, ymmword ptr [rsp+0B8h+var_88.m_surfaceID] }
    }
    else
    {
      __asm { vmovups ymm2, ymmword ptr [rsp+0B8h+var_88.m_surfaceID] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm2, [rsp+0B8h+var_68] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    else
    {
      __asm { vmovups ymm2, [rsp+0B8h+var_68] }
    }
  }
  v18.m_surfaceID = 0;
  v18.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0B8h+var_68+10h], xmm0
    vmovups ymm1, [rsp+0B8h+var_68]
    vmovups ymm0, ymmword ptr [rbx+0B8h]
    vmovups [rsp+0B8h+var_68], ymm1
    vmovups xmm1, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rsp+0B8h+var_88.m_surfaceID], xmm1
    vmovups [rsp+0B8h+var_48], ymm2
    vmovups [rsp+0B8h+var_28], ymm0
  }
  R_RenderFrustumLightsTileBuffer((GfxCmdBufContext *)&v17, viewInfo, data, &v20, &v19, &v18);
}

