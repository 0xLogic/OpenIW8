/*
==============
RBT_MBlur_VelocityTileDownsampleVertical
==============
*/

void __fastcall RBT_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MBlur_VelocityTileDownsampleVertical@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
R_TG_MBlur_Apply
==============
*/

R_TG_Handle *__fastcall R_TG_MBlur_Apply(R_TG_Handle *result, R_TG_Script *pScript, R_TG_Handle sceneColor, R_TG_Handle sceneVelocityHalf, float aspectRatio)
{
  return ?R_TG_MBlur_Apply@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@U1@1M@Z(result, pScript, sceneColor, sceneVelocityHalf, aspectRatio);
}

/*
==============
cRBT_MBlur_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,float>
==============
*/

unsigned int __fastcall cRBT_MBlur_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,float>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const float *<args_4>)
{
  return ??$cRBT_MBlur_Filter@UR_TG_Handle@@U1@U1@U1@M@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@111AEBM@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
RBT_MBlur_Filter
==============
*/

void __fastcall RBT_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MBlur_Filter@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_MBlur_TileNeighbor
==============
*/

void __fastcall RBT_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MBlur_TileNeighbor@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_MBlur_VelocityTileDownsampleHorizontal
==============
*/

void __fastcall RBT_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MBlur_VelocityTileDownsampleHorizontal@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
cRBT_MBlur_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,float>
==============
*/
unsigned int cRBT_MBlur_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,float>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const float *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v15; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_MBlur_Filter.m_index;
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
  ++stack.handleArgCount;
  v15 = *(_DWORD *)<args_4>;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v15;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
RBT_MBlur_Filter
==============
*/
void RBT_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  float v9; 
  R_RT_Handle v12; 
  bool v14; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  __m256i v18; 

  v9 = *(float *)taskInfo->pTaskData;
  v17 = *taskInfo->attachments;
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
  v16 = taskInfo->attachments[1];
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
  v18 = (__m256i)v12;
  *(GfxCmdBufContext *)&v15.m_surfaceID = *gfxContext;
  R_MBlur_Filter((GfxCmdBufContext *)&v15, viewInfo, (R_RT_ColorHandle *)&v17, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v18, v9);
}

/*
==============
RBT_MBlur_TileNeighbor
==============
*/
void RBT_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v9; 
  bool v11; 
  __m256i v12; 
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
  v9 = taskInfo->attachments[1];
  v15 = (__m256i)v9;
  v13 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v9 = v13;
      __debugbreak();
    }
    else
    {
      v9 = v13;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v9 = (R_RT_Handle)v15;
      if ( v11 )
        __debugbreak();
    }
  }
  v12 = (__m256i)v14;
  v14 = v9;
  *(GfxCmdBufContext *)&v13.m_surfaceID = *gfxContext;
  v15 = v12;
  R_MBlur_TileNeighbor((GfxCmdBufContext *)&v13, (R_RT_ColorHandle *)&v14, (R_RT_ColorHandle *)&v15);
}

/*
==============
RBT_MBlur_VelocityTileDownsampleHorizontal
==============
*/
void RBT_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v8; 
  bool v10; 
  R_RT_Handle v11; 
  R_RT_Handle v12; 
  __m256i v13; 

  v12 = *taskInfo->attachments;
  v11 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v12 = v11;
      __debugbreak();
    }
    else
    {
      v12 = v11;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  if ( taskInfo->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v8 = (R_RT_Handle)taskInfo->rtGroup.m_colorRts[0];
  v13 = (__m256i)v8;
  v11 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v11;
      __debugbreak();
    }
    else
    {
      v8 = v11;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v8 = (R_RT_Handle)v13;
      if ( v10 )
        __debugbreak();
    }
  }
  v13 = (__m256i)v8;
  *(GfxCmdBufContext *)&v11.m_surfaceID = *gfxContext;
  R_MBlur_VelocityTileDownsampleHorizontal((GfxCmdBufContext *)&v11, (R_RT_ColorHandle *)&v12, (R_RT_ColorHandle *)&v13);
}

/*
==============
RBT_MBlur_VelocityTileDownsampleVertical
==============
*/
void RBT_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v8; 
  bool v10; 
  R_RT_Handle v11; 
  R_RT_Handle v12; 
  __m256i v13; 

  v12 = *taskInfo->attachments;
  v11 = v12;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v12 = v11;
      __debugbreak();
    }
    else
    {
      v12 = v11;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  if ( taskInfo->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v8 = (R_RT_Handle)taskInfo->rtGroup.m_colorRts[0];
  v13 = (__m256i)v8;
  v11 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
    if ( (R_RT_Handle::GetSurface(&v11)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = v11;
      __debugbreak();
    }
    else
    {
      v8 = v11;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v8 = (R_RT_Handle)v13;
      if ( v10 )
        __debugbreak();
    }
  }
  v13 = (__m256i)v8;
  *(GfxCmdBufContext *)&v11.m_surfaceID = *gfxContext;
  R_MBlur_VelocityTileDownsampleVertical((GfxCmdBufContext *)&v11, (R_RT_ColorHandle *)&v12, (R_RT_ColorHandle *)&v13);
}

/*
==============
R_TG_MBlur_Apply
==============
*/
R_TG_Handle *R_TG_MBlur_Apply(R_TG_Handle *result, R_TG_Script *pScript, R_TG_Handle sceneColor, R_TG_Handle sceneVelocityHalf, float aspectRatio)
{
  float v5; 
  int v8; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  R_TG_AddTaskStack stack; 
  unsigned int v25; 
  unsigned int index; 

  index = sceneVelocityHalf.index;
  v25 = sceneColor.index;
  v5 = aspectRatio;
  LODWORD(v21) = -1;
  v8 = (int)(float)(aspectRatio * 54.0);
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  m_index = g_R_TG_Def_RBT_MBlur_VelocityTileDownsampleHorizontal.m_index;
  stack.paramArgs[0] = v8;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", v21) )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v21;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = &index;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
  HIDWORD(v21) = -1;
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  v11 = g_R_TG_Def_RBT_MBlur_VelocityTileDownsampleVertical.m_index;
  stack.paramArgs[0] = v8;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v21 + 1;
  v12 = stack.handleArgCount + 1;
  stack.handleArgCount = v12;
  if ( (unsigned int)v12 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v12 = stack.handleArgCount;
  }
  stack.handleArgs[v12] = (unsigned int *)&v21;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v11, &stack);
  v22 = -1;
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  v13 = g_R_TG_Def_RBT_MBlur_TileNeighbor.m_index;
  stack.paramArgs[0] = v8;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v22;
  v14 = stack.handleArgCount + 1;
  stack.handleArgCount = v14;
  if ( (unsigned int)v14 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v14 = stack.handleArgCount;
  }
  stack.handleArgs[v14] = (unsigned int *)&v21 + 1;
  v15 = stack.handleArgCount + 1;
  stack.handleArgCount = v15;
  if ( (unsigned int)v15 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v15 = stack.handleArgCount;
  }
  stack.handleArgs[v15] = &index;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v13, &stack);
  result->index = -1;
  memset_0(&stack, 0, sizeof(stack));
  v16 = g_R_TG_Def_RBT_MBlur_Filter.m_index;
  v17 = stack.handleArgCount + 1;
  stack.handleArgs[0] = &result->index;
  stack.handleArgCount = v17;
  if ( (unsigned int)v17 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v17 = stack.handleArgCount;
  }
  stack.handleArgs[v17] = &v25;
  v18 = stack.handleArgCount + 1;
  stack.handleArgCount = v18;
  if ( (unsigned int)v18 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v18 = stack.handleArgCount;
  }
  stack.handleArgs[v18] = &index;
  v19 = stack.handleArgCount + 1;
  stack.handleArgCount = v19;
  if ( (unsigned int)v19 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v19 = stack.handleArgCount;
  }
  stack.handleArgs[v19] = (unsigned int *)&v22;
  ++stack.handleArgCount;
  *(float *)&v23 = v5;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v23;
  R_TG_AddTask(pScript, v16, &stack);
  return result;
}

