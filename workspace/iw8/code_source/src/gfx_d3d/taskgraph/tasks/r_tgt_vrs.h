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
  R_RT_Handle v8; 
  R_RT_Handle *attachments; 
  R_RT_Handle v11; 
  bool v13; 
  R_RT_Handle *v14; 
  R_RT_Handle v15; 
  bool v17; 
  R_RT_Handle *v18; 
  R_RT_Handle v19; 
  bool v21; 
  R_RT_Handle *v22; 
  R_RT_Handle v23; 
  bool v25; 
  R_RT_Handle *v26; 
  R_RT_Handle v27; 
  bool v29; 
  R_RT_Handle *v30; 
  __m256i v31; 
  bool v33; 
  R_RT_Handle *v34; 
  __m256i v35; 
  bool v37; 
  R_RT_Handle *v38; 
  R_RT_Handle v39; 
  bool v41; 
  int v42; 
  int v43; 
  float height; 
  int width; 
  const GfxBackEndData *v46; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v48; 
  GfxTextureId textureId; 
  const R_RT_Surface *v50; 
  R_RT_Handle *v51; 
  const R_RT_Surface *v52; 
  const R_RT_Surface *v53; 
  const R_RT_Surface *v54; 
  const R_RT_Surface *v55; 
  const R_RT_Surface *v56; 
  int v57; 
  const R_RT_Surface *v58; 
  int v59; 
  __m256i v60; 
  __m256i v61; 
  __m256i v62; 
  R_RT_Handle v63; 
  R_RT_Handle v64; 
  R_RT_Handle v65; 
  R_RT_Handle v66; 
  R_RT_Handle v67; 
  R_RT_Handle v68; 
  R_RT_Handle v69; 
  int dataa[4]; 
  __int128 v71; 

  v8 = *taskInfo->attachments;
  v62 = (__m256i)v8;
  v60 = (__m256i)v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v8 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v8 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = (R_RT_Handle)v62;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  attachments = taskInfo->attachments;
  v66 = v8;
  v11 = attachments[1];
  v62 = (__m256i)v11;
  v60 = (__m256i)v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v11 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = (R_RT_Handle)v62;
      if ( v13 )
        __debugbreak();
    }
  }
  v14 = taskInfo->attachments;
  v67 = v11;
  v15 = v14[2];
  v62 = (__m256i)v15;
  v60 = (__m256i)v15;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v15 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v15 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v15 = (R_RT_Handle)v62;
      if ( v17 )
        __debugbreak();
    }
  }
  v18 = taskInfo->attachments;
  v63 = v15;
  v19 = v18[3];
  v62 = (__m256i)v19;
  v60 = (__m256i)v19;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v19 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v19 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v19 = (R_RT_Handle)v62;
      if ( v21 )
        __debugbreak();
    }
  }
  v22 = taskInfo->attachments;
  v68 = v19;
  v23 = v22[4];
  v62 = (__m256i)v23;
  v60 = (__m256i)v23;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v23 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v23 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v23 = (R_RT_Handle)v62;
      if ( v25 )
        __debugbreak();
    }
  }
  v26 = taskInfo->attachments;
  v69 = v23;
  v27 = v26[5];
  v62 = (__m256i)v27;
  v60 = (__m256i)v27;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v27 = (R_RT_Handle)v60;
      __debugbreak();
    }
    else
    {
      v27 = (R_RT_Handle)v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v27 = (R_RT_Handle)v62;
      if ( v29 )
        __debugbreak();
    }
  }
  v30 = taskInfo->attachments;
  v65 = v27;
  v31 = (__m256i)v30[6];
  v62 = v31;
  v60 = v31;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v31 = v60;
      __debugbreak();
    }
    else
    {
      v31 = v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v31 = v62;
      if ( v33 )
        __debugbreak();
    }
  }
  v34 = taskInfo->attachments;
  v62 = v31;
  v35 = (__m256i)v34[7];
  v61 = v35;
  v60 = v35;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v35 = v60;
      __debugbreak();
    }
    else
    {
      v35 = v60;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v35 = v61;
      if ( v37 )
        __debugbreak();
    }
  }
  v38 = taskInfo->attachments;
  v60 = v35;
  v39 = v38[8];
  v64 = v39;
  v61 = (__m256i)v39;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v61);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v61)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()", v60.m256i_i64[0], v60.m256i_i64[1], v60.m256i_i64[2], v60.m256i_i64[3]) )
    {
      v39 = (R_RT_Handle)v61;
    }
    else
    {
      v39 = (R_RT_Handle)v61;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", v60.m256i_i64[0], v60.m256i_i64[1], v60.m256i_i64[2], v60.m256i_i64[3]);
      v39 = v64;
      if ( v41 )
        __debugbreak();
    }
  }
  v64 = v39;
  *(float *)&v42 = 1.0 / (float)R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_image.m_base.height;
  *(float *)&v43 = 1.0 / (float)R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_image.m_base.width;
  height = (float)R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_image.m_base.height;
  width = R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_image.m_base.width;
  v46 = viewInfo->input.data;
  *(float *)dataa = (float)width;
  *(float *)&dataa[1] = height;
  dataa[2] = v43;
  dataa[3] = v42;
  v71 = (__int128)*R_VRSGetPixelsToSamplesUint((base_vec4_t<unsigned int> *)&v61, v46->frameCount, rg.vrsEmissiveOnly);
  R_UploadAndSetComputeConstants(computeState, 0, dataa, 0x20u, NULL);
  Surface = R_RT_Handle::GetSurface(&v64);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 503, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  if ( (Surface->m_rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 504, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle") )
    __debugbreak();
  if ( (Surface->m_depth.m_stencilRWView.rwView & 0xFFFFFFFB) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 506, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_stencil4RWView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_stencil4RWView.IsNull()") )
    __debugbreak();
  v61.m256i_i64[0] = (__int64)&Surface->m_depth.m_stencilRWView;
  R_SetComputeTextureRWViews(computeState, 2, 1, (const GfxShaderTextureRWView *const *)&v61);
  R_SetComputeShader(computeState, rgp.variableRateShadingVRSMaskGeneratorComputeShader);
  v48 = R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v48->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v61);
  if ( v63.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v63);
    textureId = R_RT_Handle::GetSurface(&v63)->m_image.m_base.textureId;
  }
  else
  {
    if ( v63.m_tracking.m_allocCounter != v63.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v63.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    textureId = rgp.blackImage->textureId;
  }
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v61);
  v50 = R_RT_Handle::GetSurface(&v65);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v50->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&v61);
  if ( v62.m256i_i16[0] )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)&v62);
    v51 = (R_RT_Handle *)&v62;
  }
  else
  {
    if ( v62.m256i_i32[2] != v62.m256i_u16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v62.m256i_u16[0] + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v51 = &v65;
  }
  v52 = R_RT_Handle::GetSurface(v51);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v52->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 3, 1, (const GfxTexture *const *)&v61);
  v53 = R_RT_Handle::GetSurface(&v66);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v53->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&v61);
  v54 = R_RT_Handle::GetSurface(&v67);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v54->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&v61);
  v55 = R_RT_Handle::GetSurface(&v68);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v55->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 3, 1, (const GfxTexture *const *)&v61);
  v56 = R_RT_Handle::GetSurface(&v69);
  v61.m256i_i64[0] = (__int64)R_Texture_GetResident(v56->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 4, 1, (const GfxTexture *const *)&v61);
  v57 = R_RT_Handle::GetSurface((R_RT_Handle *)&v60)->m_image.m_base.height;
  v58 = R_RT_Handle::GetSurface((R_RT_Handle *)&v60);
  v59 = v58->m_image.m_base.width;
  if ( (!v58->m_image.m_base.width || !v57) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (unsigned int)(v59 + 7) >> 3, (unsigned int)(v57 + 7) >> 3, 1u);
}

