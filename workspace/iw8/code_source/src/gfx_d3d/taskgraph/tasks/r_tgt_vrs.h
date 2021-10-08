/*
==============
cRBT_VRS_CreateResources<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_VRS_CreateResources<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  return ??$cRBT_VRS_CreateResources@UR_TG_Handle@@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>);
}

/*
==============
cRBT_VRS_ResolveMask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_VRS_ResolveMask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>, const R_TG_Handle *<args_7>, const R_TG_Handle *<args_8>)
{
  return ??$cRBT_VRS_ResolveMask@UR_TG_Handle@@U1@U1@U1@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11111111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>, <args_7>, <args_8>);
}

/*
==============
RBT_VRS_ResolveMask
==============
*/

void __fastcall RBT_VRS_ResolveMask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_VRS_ResolveMask@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_VRS_CreateResources<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_VRS_CreateResources<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_VRS_CreateResources.m_index;
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
cRBT_VRS_ResolveMask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_VRS_ResolveMask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>, const R_TG_Handle *<args_7>, const R_TG_Handle *<args_8>)
{
  R_TG_AddTaskStack arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  return R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(context, g_R_TG_Def_RBT_VRS_ResolveMask.m_index, &arguments, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>, <args_7>, <args_8>);
}

/*
==============
RBT_VRS_ResolveMask
==============
*/
void RBT_VRS_ResolveMask(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v18; 
  bool v22; 
  bool v26; 
  bool v30; 
  bool v34; 
  bool v38; 
  bool v42; 
  bool v46; 
  const GfxBackEndData *v57; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v62; 
  GfxTextureId textureId; 
  const R_RT_Surface *v64; 
  R_RT_Handle *v65; 
  const R_RT_Surface *v66; 
  const R_RT_Surface *v67; 
  const R_RT_Surface *v68; 
  const R_RT_Surface *v69; 
  const R_RT_Surface *v70; 
  int height; 
  const R_RT_Surface *v72; 
  int width; 
  R_RT_Handle v78; 
  R_RT_Handle v79; 
  R_RT_Handle v80; 
  R_RT_Handle v81; 
  R_RT_Handle v82; 
  R_RT_Handle v83; 
  R_RT_Handle v84; 
  R_RT_Handle v85; 
  R_RT_Handle v86; 
  R_RT_Handle v87; 
  int dataa[4]; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_110.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v18 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_F0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v22 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_170.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v26 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_D0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v30 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_B0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+0A0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v34 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+var_130.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+0C0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_198+8] }
      if ( v38 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rsp+200h+var_198+8], ymm0
    vmovups ymm0, ymmword ptr [rax+0E0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+200h+var_1B8.m_tracking.m_allocCounter], ymm0
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v78);
    if ( (R_RT_Handle::GetSurface(&v78)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1B8.m_tracking.m_allocCounter] }
      if ( v42 )
        __debugbreak();
    }
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymmword ptr [rsp+200h+var_1D8.m_tracking.m_allocCounter], ymm0
    vmovups ymm0, ymmword ptr [rax+100h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+100h+var_150.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+200h+var_1B8.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v79);
    if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()", *(_QWORD *)&v78.m_surfaceID, *(_QWORD *)&v78.m_tracking.m_allocCounter, v78.m_tracking.m_name, v78.m_tracking.m_location) )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1B8.m_tracking.m_allocCounter] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+200h+var_1B8.m_tracking.m_allocCounter] }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v78.m_surfaceID, *(_QWORD *)&v78.m_tracking.m_allocCounter, v78.m_tracking.m_name, v78.m_tracking.m_location);
      __asm { vmovups ymm0, ymmword ptr [rbp+100h+var_150.m_surfaceID] }
      if ( v46 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+100h+var_150.m_surfaceID], ymm0 }
  R_RT_Handle::GetSurface(&v78);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm8, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(&v78);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm7, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(&v78);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, ecx
  }
  R_RT_Handle::GetSurface(&v78);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v57 = viewInfo->input.data;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  [rbp+100h+data], xmm0
    vmovss  [rbp+100h+var_8C], xmm6
    vmovss  [rbp+100h+var_88], xmm7
    vmovss  [rbp+100h+var_84], xmm8
  }
  _RAX = R_VRSGetPixelsToSamplesUint((base_vec4_t<unsigned int> *)&v79, v57->frameCount, rg.vrsEmissiveOnly);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+100h+var_80], xmm0
  }
  R_UploadAndSetComputeConstants(computeState, 0, dataa, 0x20u, NULL);
  Surface = R_RT_Handle::GetSurface(&v82);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 503, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  if ( (Surface->m_rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 504, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle") )
    __debugbreak();
  if ( (Surface->m_depth.m_stencilRWView.rwView & 0xFFFFFFFB) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 506, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_stencil4RWView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_stencil4RWView.IsNull()") )
    __debugbreak();
  *(_QWORD *)&v79.m_surfaceID = &Surface->m_depth.1112;
  R_SetComputeTextureRWViews(computeState, 2, 1, (const GfxShaderTextureRWView *const *)&v79);
  R_SetComputeShader(computeState, rgp.variableRateShadingVRSMaskGeneratorComputeShader);
  v62 = R_RT_Handle::GetSurface(&v78);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v62->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v79);
  if ( v81.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v81);
    textureId = R_RT_Handle::GetSurface(&v81)->m_image.m_base.textureId;
  }
  else
  {
    if ( v81.m_tracking.m_allocCounter != v81.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v81.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    textureId = rgp.blackImage->textureId;
  }
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v79);
  v64 = R_RT_Handle::GetSurface(&v83);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v64->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&v79);
  if ( v80.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v80);
    v65 = &v80;
  }
  else
  {
    if ( v80.m_tracking.m_allocCounter != v80.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v80.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v65 = &v83;
  }
  v66 = R_RT_Handle::GetSurface(v65);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v66->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 3, 1, (const GfxTexture *const *)&v79);
  v67 = R_RT_Handle::GetSurface(&v84);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v67->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&v79);
  v68 = R_RT_Handle::GetSurface(&v85);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v68->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&v79);
  v69 = R_RT_Handle::GetSurface(&v86);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v69->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 3, 1, (const GfxTexture *const *)&v79);
  v70 = R_RT_Handle::GetSurface(&v87);
  *(_QWORD *)&v79.m_surfaceID = R_Texture_GetResident(v70->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 4, 1, (const GfxTexture *const *)&v79);
  height = R_RT_Handle::GetSurface(&v78)->m_image.m_base.height;
  v72 = R_RT_Handle::GetSurface(&v78);
  width = v72->m_image.m_base.width;
  if ( (!v72->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

