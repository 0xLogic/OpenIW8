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
  unsigned int v17; 
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
  _RAX = <args_4>;
  ++stack.handleArgCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+190h+var_160], xmm0
  }
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v17;
  return R_TG_AddTask(context, m_index, &stack);
}

/*
==============
RBT_MBlur_Filter
==============
*/
void RBT_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v26; 
  float v32; 
  R_RT_Handle v33; 
  R_RT_ColorHandle v34; 
  R_RT_ColorHandle v35; 
  R_RT_ColorHandle v36; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RAX = taskInfo->pTaskData;
  _RSI = gfxContext;
  __asm { vmovss  xmm6, dword ptr [rax] }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+0D8h+var_68], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID]
        vmovups [rsp+0D8h+var_68], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+var_A8.m_surfaceID]
        vmovups [rsp+0D8h+var_68], ymm0
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
    vmovups [rsp+0D8h+var_88], ymm1
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm1
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
    vmovups ymmword ptr [rsp+0D8h+var_48.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0D8h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v33);
    if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_48.baseclass_0.m_surfaceID] }
      if ( v26 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_88]
    vmovups ymmword ptr [rsp+0D8h+var_48.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, [rsp+0D8h+var_68]
    vmovups [rsp+0D8h+var_68], ymm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  dword ptr [rsp+0D8h+var_B0], xmm6
    vmovups xmmword ptr [rsp+0D8h+var_A8.m_surfaceID], xmm0
    vmovups [rsp+0D8h+var_88], ymm1
  }
  R_MBlur_Filter((GfxCmdBufContext *)&v33, viewInfo, &v35, &v34, &v36, v32);
  _R11 = &v37;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RBT_MBlur_TileNeighbor
==============
*/
void RBT_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
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
    vmovups [rsp+98h+var_48], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+98h+var_68.m_surfaceID], xmm0
    vmovups [rsp+98h+var_28], ymm1
  }
  R_MBlur_TileNeighbor((GfxCmdBufContext *)&v19, &v20, &v21);
}

/*
==============
RBT_MBlur_VelocityTileDownsampleHorizontal
==============
*/
void RBT_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v15; 
  R_RT_Handle v18; 
  R_RT_ColorHandle v19; 
  R_RT_ColorHandle v20; 

  _RAX = taskInfo->attachments;
  _RBX = taskInfo;
  _RDI = gfxContext;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+98h+var_48], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  if ( _RBX->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+38h]
    vmovd   eax, xmm0
    vmovups [rsp+98h+var_28], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+98h+var_28] }
      if ( v15 )
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
  R_MBlur_VelocityTileDownsampleHorizontal((GfxCmdBufContext *)&v18, &v19, &v20);
}

/*
==============
RBT_MBlur_VelocityTileDownsampleVertical
==============
*/
void RBT_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v15; 
  R_RT_Handle v18; 
  R_RT_ColorHandle v19; 
  R_RT_ColorHandle v20; 

  _RAX = taskInfo->attachments;
  _RBX = taskInfo;
  _RDI = gfxContext;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rsp+98h+var_48], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  if ( _RBX->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+38h]
    vmovd   eax, xmm0
    vmovups [rsp+98h+var_28], ymm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rsp+98h+var_28] }
      if ( v15 )
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
  R_MBlur_VelocityTileDownsampleVertical((GfxCmdBufContext *)&v18, &v19, &v20);
}

/*
==============
R_TG_MBlur_Apply
==============
*/
R_TG_Handle *R_TG_MBlur_Apply(R_TG_Handle *result, R_TG_Script *pScript, R_TG_Handle sceneColor, R_TG_Handle sceneVelocityHalf, float aspectRatio)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  R_TG_Handle *v23; 
  __int64 v25; 
  int v26; 
  unsigned int v27; 
  R_TG_AddTaskStack stack; 
  void *retaddr; 
  unsigned int v31; 
  unsigned int index; 

  _RAX = &retaddr;
  index = sceneVelocityHalf.index;
  v31 = sceneColor.index;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovss  xmm6, [rbp+0C0h+aspectRatio]
    vmulss  xmm0, xmm6, cs:__real@42580000
  }
  LODWORD(v25) = -1;
  __asm { vcvttss2si rdi, xmm0 }
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  m_index = g_R_TG_Def_RBT_MBlur_VelocityTileDownsampleHorizontal.m_index;
  stack.paramArgs[0] = _RDI;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", v25) )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v25;
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
  HIDWORD(v25) = -1;
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  v14 = g_R_TG_Def_RBT_MBlur_VelocityTileDownsampleVertical.m_index;
  stack.paramArgs[0] = _RDI;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v25 + 1;
  v15 = stack.handleArgCount + 1;
  stack.handleArgCount = v15;
  if ( (unsigned int)v15 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v15 = stack.handleArgCount;
  }
  stack.handleArgs[v15] = (unsigned int *)&v25;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v14, &stack);
  v26 = -1;
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  v16 = g_R_TG_Def_RBT_MBlur_TileNeighbor.m_index;
  stack.paramArgs[0] = _RDI;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v26;
  v17 = stack.handleArgCount + 1;
  stack.handleArgCount = v17;
  if ( (unsigned int)v17 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v17 = stack.handleArgCount;
  }
  stack.handleArgs[v17] = (unsigned int *)&v25 + 1;
  v18 = stack.handleArgCount + 1;
  stack.handleArgCount = v18;
  if ( (unsigned int)v18 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v18 = stack.handleArgCount;
  }
  stack.handleArgs[v18] = &index;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v16, &stack);
  result->index = -1;
  memset_0(&stack, 0, sizeof(stack));
  v19 = g_R_TG_Def_RBT_MBlur_Filter.m_index;
  v20 = stack.handleArgCount + 1;
  stack.handleArgs[0] = &result->index;
  stack.handleArgCount = v20;
  if ( (unsigned int)v20 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v20 = stack.handleArgCount;
  }
  stack.handleArgs[v20] = &v31;
  v21 = stack.handleArgCount + 1;
  stack.handleArgCount = v21;
  if ( (unsigned int)v21 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v21 = stack.handleArgCount;
  }
  stack.handleArgs[v21] = &index;
  v22 = stack.handleArgCount + 1;
  stack.handleArgCount = v22;
  if ( (unsigned int)v22 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v22 = stack.handleArgCount;
  }
  stack.handleArgs[v22] = (unsigned int *)&v26;
  ++stack.handleArgCount;
  __asm { vmovss  [rsp+1C0h+anonymous_0], xmm6 }
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 149, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v27;
  R_TG_AddTask(pScript, v19, &stack);
  v23 = result;
  __asm { vmovaps xmm6, xmmword ptr [rsp+1C0h+var_48+8] }
  return v23;
}

