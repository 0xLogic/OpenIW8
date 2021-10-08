/*
==============
RBT_EffectLighting_Process_MultilightGrid_Combine
==============
*/

void __fastcall RBT_EffectLighting_Process_MultilightGrid_Combine(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_EffectLighting_Process_MultilightGrid_Combine@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_EffectLighting_Process_MultilightGrid_Sample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_EffectLighting_Process_MultilightGrid_Sample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  return ??$cRBT_EffectLighting_Process_MultilightGrid_Sample@UR_TG_Handle@@U1@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@111111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
cRBT_EffectLighting_Process_MultilightGrid_Prepare<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_EffectLighting_Process_MultilightGrid_Prepare<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  return ??$cRBT_EffectLighting_Process_MultilightGrid_Prepare@UR_TG_Handle@@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11@Z(context, <args_0>, <args_1>, <args_2>);
}

/*
==============
RBT_EffectLighting_Process
==============
*/

void __fastcall RBT_EffectLighting_Process(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_EffectLighting_Process@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
R_TGS_EffectLighting
==============
*/

void __fastcall R_TGS_EffectLighting(R_TG_Script *pScript, bool lightGrid, bool multiLightGrid, R_TG_Handle lightsCluster, R_TG_Handle sunShadow0, R_TG_Handle sunShadow1, R_TG_Handle transSunShadow, R_TG_Handle transSunShadowMask, R_TG_Handle nullTexture, R_TG_Handle nullBuffer, R_TG_Handle reflectionGrid, R_TG_Handle spotShadowsStaleCache, R_TG_Handle volScattering, R_TG_Handle volExtinction, R_TG_Handle volVisibility, R_TG_Handle *outColor, R_TG_Handle *outSH, R_TG_Handle *outFog, R_TG_Handle syncToken)
{
  ?R_TGS_EffectLighting@@YAXPEAUR_TG_Script@@_N1UR_TG_Handle@@22222222222AEAU2@332@Z(pScript, lightGrid, multiLightGrid, lightsCluster, sunShadow0, sunShadow1, transSunShadow, transSunShadowMask, nullTexture, nullBuffer, reflectionGrid, spotShadowsStaleCache, volScattering, volExtinction, volVisibility, outColor, outSH, outFog, syncToken);
}

/*
==============
RBT_EffectLighting_Process_MultilightGrid_Prepare
==============
*/

void __fastcall RBT_EffectLighting_Process_MultilightGrid_Prepare(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_EffectLighting_Process_MultilightGrid_Prepare@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_EffectLighting_CreateFogTextures<R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_EffectLighting_CreateFogTextures<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  return ??$cRBT_EffectLighting_CreateFogTextures@UR_TG_Handle@@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@@Z(context, <args_0>);
}

/*
==============
cRBT_EffectLighting_CreateTextures<R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_EffectLighting_CreateTextures<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  return ??$cRBT_EffectLighting_CreateTextures@UR_TG_Handle@@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@1@Z(context, <args_0>, <args_1>);
}

/*
==============
cRBT_EffectLighting_Process_MultilightGrid_Combine<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_EffectLighting_Process_MultilightGrid_Combine<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>, const R_TG_Handle *<args_7>, const R_TG_Handle *<args_8>, const R_TG_Handle *<args_9>, const R_TG_Handle *<args_10>, const R_TG_Handle *<args_11>, const R_TG_Handle *<args_12>, const R_TG_Handle *<args_13>, const R_TG_Handle *<args_14>)
{
  return ??$cRBT_EffectLighting_Process_MultilightGrid_Combine@UR_TG_Handle@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@11111111111111@Z(context, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>, <args_7>, <args_8>, <args_9>, <args_10>, <args_11>, <args_12>, <args_13>, <args_14>);
}

/*
==============
RBT_EffectLighting_Process_MultilightGrid_Sample
==============
*/

void __fastcall RBT_EffectLighting_Process_MultilightGrid_Sample(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_EffectLighting_Process_MultilightGrid_Sample@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_EffectLighting_CreateFogTextures<R_TG_Handle>
==============
*/
unsigned int cRBT_EffectLighting_CreateFogTextures<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &<args_0>->index;
  return R_TG_AddTask(context, g_R_TG_Def_RBT_EffectLighting_CreateFogTextures.m_index, &stack);
}

/*
==============
cRBT_EffectLighting_CreateTextures<R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_EffectLighting_CreateTextures<R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_EffectLighting_CreateTextures.m_index;
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
cRBT_EffectLighting_Process_MultilightGrid_Combine<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_EffectLighting_Process_MultilightGrid_Combine<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>, const R_TG_Handle *<args_7>, const R_TG_Handle *<args_8>, const R_TG_Handle *<args_9>, const R_TG_Handle *<args_10>, const R_TG_Handle *<args_11>, const R_TG_Handle *<args_12>, const R_TG_Handle *<args_13>, const R_TG_Handle *<args_14>)
{
  R_TG_AddTaskStack arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  return R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(context, g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Combine.m_index, &arguments, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>, <args_7>, <args_8>, <args_9>, <args_10>, <args_11>, <args_12>, <args_13>, <args_14>);
}

/*
==============
cRBT_EffectLighting_Process_MultilightGrid_Prepare<R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_EffectLighting_Process_MultilightGrid_Prepare<R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v10; 
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Prepare.m_index;
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
cRBT_EffectLighting_Process_MultilightGrid_Sample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>
==============
*/
unsigned int cRBT_EffectLighting_Process_MultilightGrid_Sample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>, const R_TG_Handle *<args_1>, const R_TG_Handle *<args_2>, const R_TG_Handle *<args_3>, const R_TG_Handle *<args_4>, const R_TG_Handle *<args_5>, const R_TG_Handle *<args_6>)
{
  R_TG_AddTaskStack arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  return R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(context, g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Sample.m_index, &arguments, <args_0>, <args_1>, <args_2>, <args_3>, <args_4>, <args_5>, <args_6>);
}

/*
==============
RBT_EffectLighting_Process
==============
*/
void RBT_EffectLighting_Process(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v5; 
  ComputeCmdBufState *v6; 
  bool v13; 
  bool v15; 
  bool v18; 
  bool v20; 
  R_RT_Image *blackShadowImage; 
  bool v26; 
  GfxWrappedBuffer *lightsClusterBuffer; 
  const R_RT_Surface *Surface; 
  R_RT_Image *blackImage3D; 
  bool enabled; 
  R_RT_Image *whiteImage3D; 
  bool v37; 
  signed int v39; 
  const dvar_t *v40; 
  bool v44; 
  bool v48; 
  ComputeCmdBufState *v55; 
  bool v56; 
  R_RT_Handle v57; 
  ComputeCmdBufState *computeStatea; 
  GfxImage *translucentSunShadowMaskImage; 
  GfxImage *translucentSunShadowImage; 
  GfxImage *sunShadowImage; 
  GfxImage *imagesRead; 
  R_RT_Image *p_m_image; 
  R_RT_Handle v64; 
  GfxImage *imagesWrite[2]; 
  GfxImage *lightGenImages[2]; 
  R_RT_Image *v67; 

  v5 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
  computeStatea = computeState;
  v6 = computeState;
  _RCX = 256i64;
  if ( data->sunShadow.opaqueCascadeCount <= 1u )
    _RCX = 224i64;
  _RAX = taskInfo->attachments;
  __asm { vmovups ymm0, ymmword ptr [rcx+rax] }
  sunShadowImage = rgp.blackShadowImage;
  __asm
  {
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( v5 )
      sunShadowImage = &R_RT_Handle::GetSurface(&v57)->m_image.m_base;
  }
  else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  translucentSunShadowImage = rgp.zeroImage;
  v13 = R_SunShadow_TranslucentEnabled(viewInfo);
  _RCX = taskInfo->attachments;
  v15 = v13;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+120h]
    vmovd   ecx, xmm0
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_ECX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( v15 )
      translucentSunShadowImage = &R_RT_Handle::GetSurface(&v57)->m_image.m_base;
  }
  else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  translucentSunShadowMaskImage = rgp.blackImage;
  v18 = R_SunShadow_TranslucentEnabled(viewInfo);
  _RCX = taskInfo->attachments;
  v20 = v18;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+140h]
    vmovd   ecx, xmm0
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_ECX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( v20 )
    {
      translucentSunShadowMaskImage = &R_RT_Handle::GetSurface(&v57)->m_image.m_base;
      v6 = computeStatea;
    }
  }
  else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  _RAX = taskInfo->attachments;
  blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+180h]
    vmovd   eax, xmm0
  }
  v26 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 2) != 0;
  __asm { vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0 }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( v26 )
      blackShadowImage = &R_RT_Handle::GetSurface(&v57)->m_image;
  }
  else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+1A0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v57);
    Surface = R_RT_Handle::GetSurface(&v57);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    lightsClusterBuffer = (GfxWrappedBuffer *)&Surface->1080;
  }
  else
  {
    if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    lightsClusterBuffer = &gfxBuf.dummyBuffer;
  }
  if ( R_DeferredLighting_SetupSharedInputCustom(v6, viewInfo, &blackShadowImage->m_base) )
  {
    RB_DrawEmissive_UnmapMeshes(data);
    _RAX = taskInfo->attachments;
    blackImage3D = (R_RT_Image *)rgp.blackImage3D;
    enabled = viewInfo->volumetrics.enabled;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+0A0h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      if ( enabled )
        blackImage3D = &R_RT_Handle::GetSurface(&v57)->m_image;
    }
    else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    _RAX = taskInfo->attachments;
    whiteImage3D = (R_RT_Image *)rgp.whiteImage3D;
    v37 = viewInfo->volumetrics.enabled;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+0C0h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      if ( v37 )
        whiteImage3D = &R_RT_Handle::GetSurface(&v57)->m_image;
    }
    else if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    v39 = *taskInfo->pTaskData;
    if ( v39 == 2 )
    {
      v40 = r_del_oof;
      if ( !r_del_oof && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.enabled )
        v39 = 3;
    }
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_surfaceID] }
        if ( v44 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0 }
    imagesWrite[0] = &R_RT_Handle::GetSurface(&v64)->m_image.m_base;
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+120h+var_E0.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_surfaceID] }
        if ( v48 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0 }
    imagesWrite[1] = &R_RT_Handle::GetSurface(&v64)->m_image.m_base;
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      imagesRead = &R_RT_Handle::GetSurface(&v57)->m_image.m_base;
    }
    else
    {
      if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      imagesRead = NULL;
    }
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      p_m_image = &R_RT_Handle::GetSurface(&v57)->m_image;
    }
    else
    {
      if ( v57.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      p_m_image = NULL;
    }
    _RAX = taskInfo->attachments;
    lightGenImages[0] = &blackImage3D->m_base;
    lightGenImages[1] = &whiteImage3D->m_base;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+120h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v57);
      v67 = &R_RT_Handle::GetSurface(&v57)->m_image;
    }
    else
    {
      if ( v57.m_tracking.m_allocCounter )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
      v67 = NULL;
    }
    v55 = computeStatea;
    v56 = R_EffectLighting_SetConstantBuffer(computeStatea, viewInfo);
    R_DeferredLighting_SetupOverlappingInputCustom(v55, viewInfo, (EffectLightingProcessType)v39, sunShadowImage, translucentSunShadowImage, translucentSunShadowMaskImage, lightsClusterBuffer);
    R_EffectLighting_Process(v55, viewInfo, v56, (EffectLightingProcessType)v39, (const GfxImage *const *)&imagesRead, (const GfxImage *const *)imagesWrite, (const GfxImage *const *)lightGenImages, NULL);
  }
}

/*
==============
RBT_EffectLighting_Process_MultilightGrid_Combine
==============
*/
void RBT_EffectLighting_Process_MultilightGrid_Combine(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Image *blackShadowImage; 
  bool v7; 
  bool v8; 
  R_RT_Image *zeroImage; 
  bool v15; 
  bool v17; 
  R_RT_Image *translucentSunShadowMaskImage; 
  bool v21; 
  bool v23; 
  R_RT_Image *p_m_image; 
  bool v29; 
  const GfxImage *p_m_base; 
  ComputeCmdBufState *v31; 
  bool v35; 
  bool v39; 
  const R_RT_Surface *Surface; 
  bool v42; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  R_RT_Handle *v44; 
  const GfxWrappedRWBuffer *v45; 
  R_RT_Handle *v46; 
  const GfxWrappedRWBuffer *v47; 
  R_RT_Handle *v48; 
  const GfxWrappedRWBuffer *v49; 
  R_RT_Handle *v50; 
  const GfxWrappedRWBuffer *v51; 
  R_RT_Handle *v52; 
  R_RT_Handle v53; 
  GfxBackEndData *dataa[2]; 
  R_RT_Handle v55; 
  ComputeCmdBufState *computeStatea[2]; 
  EffectLightingMultiLightGridTempBuffers multiLightGridTempBuffers; 
  GfxImage *lightGenImages[3]; 

  blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
  v7 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
  computeStatea[0] = computeState;
  v8 = data->sunShadow.opaqueCascadeCount <= 1u;
  _RCX = 96i64;
  dataa[0] = (GfxBackEndData *)data;
  _RAX = taskInfo->attachments;
  if ( v8 )
    _RCX = 64i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v53);
    if ( v7 )
      blackShadowImage = &R_RT_Handle::GetSurface(&v53)->m_image;
  }
  else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  zeroImage = (R_RT_Image *)rgp.zeroImage;
  v15 = R_SunShadow_TranslucentEnabled(viewInfo);
  _RCX = taskInfo->attachments;
  v17 = v15;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovd   ecx, xmm0
    vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0
  }
  if ( (_WORD)_ECX )
  {
    R_RT_Handle::GetSurface(&v53);
    if ( v17 )
      zeroImage = &R_RT_Handle::GetSurface(&v53)->m_image;
  }
  else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  translucentSunShadowMaskImage = (R_RT_Image *)rgp.blackImage;
  v21 = R_SunShadow_TranslucentEnabled(viewInfo);
  _RCX = taskInfo->attachments;
  v23 = v21;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+0A0h]
    vmovd   ecx, xmm0
    vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0
  }
  if ( (_WORD)_ECX )
  {
    R_RT_Handle::GetSurface(&v53);
    if ( v23 )
      translucentSunShadowMaskImage = &R_RT_Handle::GetSurface(&v53)->m_image;
  }
  else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  _RAX = taskInfo->attachments;
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0E0h]
    vmovd   eax, xmm0
  }
  v29 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 2) != 0;
  __asm { vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0 }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v53);
    if ( v29 )
      p_m_image = &R_RT_Handle::GetSurface(&v53)->m_image;
  }
  else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  p_m_base = &p_m_image->m_base;
  v31 = computeStatea[0];
  if ( R_DeferredLighting_SetupSharedInputCustom(computeStatea[0], viewInfo, p_m_base) )
  {
    RB_DrawEmissive_UnmapMeshes(dataa[0]);
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+130h+var_F0.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+130h+var_F0.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID] }
        if ( v35 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0 }
    dataa[0] = (GfxBackEndData *)&R_RT_Handle::GetSurface(&v55)->m_image;
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+130h+var_F0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+130h+var_F0.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+130h+var_F0.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_C0.m_surfaceID] }
        if ( v39 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+57h+var_C0.m_surfaceID], ymm0 }
    Surface = R_RT_Handle::GetSurface(&v55);
    lightGenImages[2] = NULL;
    dataa[1] = (GfxBackEndData *)&Surface->m_image;
    lightGenImages[0] = rgp.blackImage3D;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    lightGenImages[1] = rgp.whiteImage3D;
    __asm { vmovdqu xmmword ptr [rbp+57h+computeState], xmm0 }
    v42 = R_EffectLighting_SetConstantBuffer(v31, viewInfo);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments + 8);
    v44 = taskInfo->attachments + 9;
    multiLightGridTempBuffers.m_lightGridElements[0] = WrappedBuffer;
    v45 = R_RT_Handle::GetWrappedBuffer(v44);
    v46 = taskInfo->attachments + 10;
    multiLightGridTempBuffers.m_lightGridElements[1] = v45;
    v47 = R_RT_Handle::GetWrappedBuffer(v46);
    v48 = taskInfo->attachments + 11;
    multiLightGridTempBuffers.m_lightingData[0] = v47;
    v49 = R_RT_Handle::GetWrappedBuffer(v48);
    v50 = taskInfo->attachments + 12;
    multiLightGridTempBuffers.m_lightingData[1] = v49;
    v51 = R_RT_Handle::GetWrappedBuffer(v50);
    v52 = taskInfo->attachments + 13;
    multiLightGridTempBuffers.m_lightingAlpha[0] = v51;
    multiLightGridTempBuffers.m_lightingAlpha[1] = R_RT_Handle::GetWrappedBuffer(v52);
    R_DeferredLighting_SetupOverlappingInputCustom(v31, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE, &blackShadowImage->m_base, &zeroImage->m_base, &translucentSunShadowMaskImage->m_base, NULL);
    R_EffectLighting_Process(v31, viewInfo, v42, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE, (const GfxImage *const *)computeStatea, (const GfxImage *const *)dataa, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
  }
}

/*
==============
RBT_EffectLighting_Process_MultilightGrid_Prepare
==============
*/
void RBT_EffectLighting_Process_MultilightGrid_Prepare(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v12; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  R_RT_Handle *v14; 
  EffectLightingMultiLightGridTempBuffers multiLightGridTempBuffers; 
  GfxImage *imagesWrite[2]; 
  GfxImage *imagesRead[2]; 
  GfxImage *lightGenImages[3]; 

  if ( R_DeferredLighting_SetupSharedInputCustom(computeState, viewInfo, rgp.blackShadowImage) )
  {
    RB_DrawEmissive_UnmapMeshes(data);
    lightGenImages[0] = rgp.blackImage3D;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vpxor   xmm1, xmm1, xmm1
    }
    lightGenImages[1] = rgp.whiteImage3D;
    __asm
    {
      vmovdqu xmmword ptr [rsp+0D8h+imagesWrite], xmm0
      vmovdqu xmmword ptr [rsp+0D8h+imagesRead], xmm1
    }
    lightGenImages[2] = NULL;
    v12 = R_EffectLighting_SetConstantBuffer(computeState, viewInfo);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments);
    v14 = taskInfo->attachments + 1;
    multiLightGridTempBuffers.m_lightGridElements[0] = WrappedBuffer;
    multiLightGridTempBuffers.m_lightGridElements[1] = R_RT_Handle::GetWrappedBuffer(v14);
    multiLightGridTempBuffers.m_lightingData[0] = &gfxBuf.dummyRWBuffer;
    multiLightGridTempBuffers.m_lightingData[1] = &gfxBuf.dummyRWBuffer;
    multiLightGridTempBuffers.m_lightingAlpha[0] = &gfxBuf.dummyRWBuffer;
    multiLightGridTempBuffers.m_lightingAlpha[1] = &gfxBuf.dummyRWBuffer;
    R_DeferredLighting_SetupOverlappingInputCustom(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE, rgp.blackShadowImage, rgp.zeroImage, rgp.blackImage, NULL);
    R_EffectLighting_Process(computeState, viewInfo, v12, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE, (const GfxImage *const *)imagesRead, (const GfxImage *const *)imagesWrite, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
  }
}

/*
==============
RBT_EffectLighting_Process_MultilightGrid_Sample
==============
*/
void RBT_EffectLighting_Process_MultilightGrid_Sample(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v12; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  R_RT_Handle *v14; 
  const GfxWrappedRWBuffer *v15; 
  R_RT_Handle *v16; 
  const GfxWrappedRWBuffer *v17; 
  R_RT_Handle *v18; 
  const GfxWrappedRWBuffer *v19; 
  R_RT_Handle *v20; 
  const GfxWrappedRWBuffer *v21; 
  R_RT_Handle *v22; 
  EffectLightingMultiLightGridTempBuffers multiLightGridTempBuffers; 
  GfxImage *imagesWrite[2]; 
  GfxImage *imagesRead[2]; 
  GfxImage *lightGenImages[3]; 

  if ( R_DeferredLighting_SetupSharedInputCustom(computeState, viewInfo, rgp.blackShadowImage) )
  {
    RB_DrawEmissive_UnmapMeshes(data);
    lightGenImages[0] = rgp.blackImage3D;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vpxor   xmm1, xmm1, xmm1
    }
    lightGenImages[1] = rgp.whiteImage3D;
    __asm
    {
      vmovdqu xmmword ptr [rsp+0D8h+imagesWrite], xmm0
      vmovdqu xmmword ptr [rsp+0D8h+imagesRead], xmm1
    }
    lightGenImages[2] = NULL;
    v12 = R_EffectLighting_SetConstantBuffer(computeState, viewInfo);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(taskInfo->attachments);
    v14 = taskInfo->attachments + 1;
    multiLightGridTempBuffers.m_lightGridElements[0] = WrappedBuffer;
    v15 = R_RT_Handle::GetWrappedBuffer(v14);
    v16 = taskInfo->attachments + 2;
    multiLightGridTempBuffers.m_lightGridElements[1] = v15;
    v17 = R_RT_Handle::GetWrappedBuffer(v16);
    v18 = taskInfo->attachments + 3;
    multiLightGridTempBuffers.m_lightingData[0] = v17;
    v19 = R_RT_Handle::GetWrappedBuffer(v18);
    v20 = taskInfo->attachments + 4;
    multiLightGridTempBuffers.m_lightingData[1] = v19;
    v21 = R_RT_Handle::GetWrappedBuffer(v20);
    v22 = taskInfo->attachments + 5;
    multiLightGridTempBuffers.m_lightingAlpha[0] = v21;
    multiLightGridTempBuffers.m_lightingAlpha[1] = R_RT_Handle::GetWrappedBuffer(v22);
    R_DeferredLighting_SetupOverlappingInputCustom(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE, rgp.blackShadowImage, rgp.zeroImage, rgp.blackImage, NULL);
    R_EffectLighting_Process(computeState, viewInfo, v12, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE, (const GfxImage *const *)imagesRead, (const GfxImage *const *)imagesWrite, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
  }
}

/*
==============
R_TGS_EffectLighting
==============
*/
void R_TGS_EffectLighting(R_TG_Script *pScript, bool lightGrid, bool multiLightGrid, R_TG_Handle lightsCluster, R_TG_Handle sunShadow0, R_TG_Handle sunShadow1, R_TG_Handle transSunShadow, R_TG_Handle transSunShadowMask, R_TG_Handle nullTexture, R_TG_Handle nullBuffer, R_TG_Handle reflectionGrid, R_TG_Handle spotShadowsStaleCache, R_TG_Handle volScattering, R_TG_Handle volExtinction, R_TG_Handle volVisibility, R_TG_Handle *outColor, R_TG_Handle *outSH, R_TG_Handle *outFog, R_TG_Handle syncToken)
{
  R_TG_Handle *v19; 
  R_TG_Handle *v21; 
  R_TG_Handle *v23; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  R_TG_Handle *p_nullTexture; 
  R_TG_Handle *v67; 
  unsigned int v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  EffectLightingProcessType v82; 
  R_TG_Handle v83; 
  R_TG_Handle v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  R_TG_AddTaskStack stack; 
  R_TG_Handle v91; 

  v91.index = lightsCluster.index;
  v19 = outFog;
  v21 = outColor;
  v23 = outSH;
  v84.index = -1;
  v83.index = -1;
  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_EffectLighting_CreateTextures.m_index;
  stack.handleArgs[0] = (unsigned int *)&v84;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = (unsigned int *)&v83;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
  cRBT_EffectLighting_CreateTextures<R_TG_Handle,R_TG_Handle>(pScript, v21, v23);
  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &v19->index;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_EffectLighting_CreateFogTextures.m_index, &stack);
  if ( lightGrid )
  {
    if ( multiLightGrid )
    {
      v85 = -1;
      v86 = -1;
      v87 = -1;
      v88 = -1;
      v89 = -1;
      v82 = -1;
      memset_0(&stack, 0, sizeof(stack));
      v27 = g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Prepare.m_index;
      stack.handleArgs[0] = (unsigned int *)&v85;
      v28 = stack.handleArgCount + 1;
      stack.handleArgCount = v28;
      if ( (unsigned int)v28 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v28 = stack.handleArgCount;
      }
      stack.handleArgs[v28] = (unsigned int *)&v86;
      v29 = stack.handleArgCount + 1;
      stack.handleArgCount = v29;
      if ( (unsigned int)v29 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v29 = stack.handleArgCount;
      }
      stack.handleArgs[v29] = (unsigned int *)&syncToken;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v27, &stack);
      memset_0(&stack, 0, sizeof(stack));
      v30 = g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Sample.m_index;
      stack.handleArgs[0] = (unsigned int *)&v85;
      v31 = stack.handleArgCount + 1;
      stack.handleArgCount = v31;
      if ( (unsigned int)v31 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v31 = stack.handleArgCount;
      }
      stack.handleArgs[v31] = (unsigned int *)&v86;
      v32 = stack.handleArgCount + 1;
      stack.handleArgCount = v32;
      if ( (unsigned int)v32 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v32 = stack.handleArgCount;
      }
      stack.handleArgs[v32] = (unsigned int *)&v87;
      v33 = stack.handleArgCount + 1;
      stack.handleArgCount = v33;
      if ( (unsigned int)v33 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v33 = stack.handleArgCount;
      }
      stack.handleArgs[v33] = (unsigned int *)&v88;
      v34 = stack.handleArgCount + 1;
      stack.handleArgCount = v34;
      if ( (unsigned int)v34 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v34 = stack.handleArgCount;
      }
      stack.handleArgs[v34] = (unsigned int *)&v89;
      v35 = stack.handleArgCount + 1;
      stack.handleArgCount = v35;
      if ( (unsigned int)v35 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v35 = stack.handleArgCount;
      }
      stack.handleArgs[v35] = (unsigned int *)&v82;
      v36 = stack.handleArgCount + 1;
      stack.handleArgCount = v36;
      if ( (unsigned int)v36 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v36 = stack.handleArgCount;
      }
      stack.handleArgs[v36] = (unsigned int *)&syncToken;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v30, &stack);
      memset_0(&stack, 0, sizeof(stack));
      v37 = g_R_TG_Def_RBT_EffectLighting_Process_MultilightGrid_Combine.m_index;
      stack.handleArgs[0] = (unsigned int *)&v84;
      v38 = stack.handleArgCount + 1;
      stack.handleArgCount = v38;
      if ( (unsigned int)v38 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v38 = stack.handleArgCount;
      }
      stack.handleArgs[v38] = (unsigned int *)&v83;
      v39 = stack.handleArgCount + 1;
      stack.handleArgCount = v39;
      if ( (unsigned int)v39 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v39 = stack.handleArgCount;
      }
      stack.handleArgs[v39] = (unsigned int *)&sunShadow0;
      v40 = stack.handleArgCount + 1;
      stack.handleArgCount = v40;
      if ( (unsigned int)v40 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v40 = stack.handleArgCount;
      }
      stack.handleArgs[v40] = (unsigned int *)&sunShadow1;
      v41 = stack.handleArgCount + 1;
      stack.handleArgCount = v41;
      if ( (unsigned int)v41 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v41 = stack.handleArgCount;
      }
      stack.handleArgs[v41] = (unsigned int *)&transSunShadow;
      v42 = stack.handleArgCount + 1;
      stack.handleArgCount = v42;
      if ( (unsigned int)v42 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v42 = stack.handleArgCount;
      }
      stack.handleArgs[v42] = (unsigned int *)&transSunShadowMask;
      v43 = stack.handleArgCount + 1;
      stack.handleArgCount = v43;
      if ( (unsigned int)v43 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v43 = stack.handleArgCount;
      }
      stack.handleArgs[v43] = (unsigned int *)&reflectionGrid;
      v44 = stack.handleArgCount + 1;
      stack.handleArgCount = v44;
      if ( (unsigned int)v44 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v44 = stack.handleArgCount;
      }
      stack.handleArgs[v44] = (unsigned int *)&spotShadowsStaleCache;
      v45 = stack.handleArgCount + 1;
      stack.handleArgCount = v45;
      if ( (unsigned int)v45 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v45 = stack.handleArgCount;
      }
      stack.handleArgs[v45] = (unsigned int *)&v85;
      v46 = stack.handleArgCount + 1;
      stack.handleArgCount = v46;
      if ( (unsigned int)v46 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v46 = stack.handleArgCount;
      }
      stack.handleArgs[v46] = (unsigned int *)&v86;
      v47 = stack.handleArgCount + 1;
      stack.handleArgCount = v47;
      if ( (unsigned int)v47 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v47 = stack.handleArgCount;
      }
      stack.handleArgs[v47] = (unsigned int *)&v87;
      v48 = stack.handleArgCount + 1;
      stack.handleArgCount = v48;
      if ( (unsigned int)v48 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v48 = stack.handleArgCount;
      }
      stack.handleArgs[v48] = (unsigned int *)&v88;
      v49 = stack.handleArgCount + 1;
      stack.handleArgCount = v49;
      if ( (unsigned int)v49 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v49 = stack.handleArgCount;
      }
      stack.handleArgs[v49] = (unsigned int *)&v89;
      v50 = stack.handleArgCount + 1;
      stack.handleArgCount = v50;
      if ( (unsigned int)v50 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v50 = stack.handleArgCount;
      }
      stack.handleArgs[v50] = (unsigned int *)&v82;
      v51 = stack.handleArgCount + 1;
      stack.handleArgCount = v51;
      if ( (unsigned int)v51 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v51 = stack.handleArgCount;
      }
      stack.handleArgs[v51] = (unsigned int *)&syncToken;
    }
    else
    {
      memset_0(&stack, 0, sizeof(stack));
      v37 = g_R_TG_Def_RBT_EffectLighting_Process.m_index;
      stack.paramArgs[stack.paramArgCount++] = 0;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v84;
      v52 = stack.handleArgCount + 1;
      stack.handleArgCount = v52;
      if ( (unsigned int)v52 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v52 = stack.handleArgCount;
      }
      stack.handleArgs[v52] = (unsigned int *)&v83;
      v53 = stack.handleArgCount + 1;
      stack.handleArgCount = v53;
      if ( (unsigned int)v53 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v53 = stack.handleArgCount;
      }
      stack.handleArgs[v53] = (unsigned int *)&nullTexture;
      v54 = stack.handleArgCount + 1;
      stack.handleArgCount = v54;
      if ( (unsigned int)v54 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v54 = stack.handleArgCount;
      }
      stack.handleArgs[v54] = (unsigned int *)&nullTexture;
      v55 = stack.handleArgCount + 1;
      stack.handleArgCount = v55;
      if ( (unsigned int)v55 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v55 = stack.handleArgCount;
      }
      stack.handleArgs[v55] = (unsigned int *)&nullTexture;
      v56 = stack.handleArgCount + 1;
      stack.handleArgCount = v56;
      if ( (unsigned int)v56 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v56 = stack.handleArgCount;
      }
      stack.handleArgs[v56] = (unsigned int *)&nullTexture;
      v57 = stack.handleArgCount + 1;
      stack.handleArgCount = v57;
      if ( (unsigned int)v57 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v57 = stack.handleArgCount;
      }
      stack.handleArgs[v57] = (unsigned int *)&nullTexture;
      v58 = stack.handleArgCount + 1;
      stack.handleArgCount = v58;
      if ( (unsigned int)v58 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v58 = stack.handleArgCount;
      }
      stack.handleArgs[v58] = (unsigned int *)&sunShadow0;
      v59 = stack.handleArgCount + 1;
      stack.handleArgCount = v59;
      if ( (unsigned int)v59 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v59 = stack.handleArgCount;
      }
      stack.handleArgs[v59] = (unsigned int *)&sunShadow1;
      v60 = stack.handleArgCount + 1;
      stack.handleArgCount = v60;
      if ( (unsigned int)v60 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v60 = stack.handleArgCount;
      }
      stack.handleArgs[v60] = (unsigned int *)&transSunShadow;
      v61 = stack.handleArgCount + 1;
      stack.handleArgCount = v61;
      if ( (unsigned int)v61 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v61 = stack.handleArgCount;
      }
      stack.handleArgs[v61] = (unsigned int *)&transSunShadowMask;
      v62 = stack.handleArgCount + 1;
      stack.handleArgCount = v62;
      if ( (unsigned int)v62 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v62 = stack.handleArgCount;
      }
      stack.handleArgs[v62] = (unsigned int *)&reflectionGrid;
      v63 = stack.handleArgCount + 1;
      stack.handleArgCount = v63;
      if ( (unsigned int)v63 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v63 = stack.handleArgCount;
      }
      stack.handleArgs[v63] = (unsigned int *)&spotShadowsStaleCache;
      v64 = stack.handleArgCount + 1;
      stack.handleArgCount = v64;
      if ( (unsigned int)v64 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v64 = stack.handleArgCount;
      }
      stack.handleArgs[v64] = (unsigned int *)&nullBuffer;
      v65 = stack.handleArgCount + 1;
      stack.handleArgCount = v65;
      if ( (unsigned int)v65 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v65 = stack.handleArgCount;
      }
      stack.handleArgs[v65] = (unsigned int *)&syncToken;
    }
    ++stack.handleArgCount;
    R_TG_AddTask(pScript, v37, &stack);
  }
  v82 = EFFECT_LIGHTING_LIGHTMAP_GENERATE;
  p_nullTexture = &v83;
  if ( !lightGrid )
    p_nullTexture = &nullTexture;
  v67 = &v84;
  if ( !lightGrid )
    v67 = &nullTexture;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, v21, v23, v19, v67, p_nullTexture, &volScattering, &volExtinction, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &v91, &syncToken);
  memset_0(&stack, 0, sizeof(stack));
  v68 = g_R_TG_Def_RBT_EffectLighting_Process.m_index;
  stack.paramArgs[stack.paramArgCount++] = 1;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v84;
  v69 = stack.handleArgCount + 1;
  stack.handleArgCount = v69;
  if ( (unsigned int)v69 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v69 = stack.handleArgCount;
  }
  stack.handleArgs[v69] = (unsigned int *)&v83;
  v70 = stack.handleArgCount + 1;
  stack.handleArgCount = v70;
  if ( (unsigned int)v70 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v70 = stack.handleArgCount;
  }
  stack.handleArgs[v70] = (unsigned int *)&nullTexture;
  v71 = stack.handleArgCount + 1;
  stack.handleArgCount = v71;
  if ( (unsigned int)v71 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v71 = stack.handleArgCount;
  }
  stack.handleArgs[v71] = &v21->index;
  v72 = stack.handleArgCount + 1;
  stack.handleArgCount = v72;
  if ( (unsigned int)v72 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v72 = stack.handleArgCount;
  }
  stack.handleArgs[v72] = &v23->index;
  v73 = stack.handleArgCount + 1;
  stack.handleArgCount = v73;
  if ( (unsigned int)v73 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v73 = stack.handleArgCount;
  }
  stack.handleArgs[v73] = (unsigned int *)&nullTexture;
  v74 = stack.handleArgCount + 1;
  stack.handleArgCount = v74;
  if ( (unsigned int)v74 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v74 = stack.handleArgCount;
  }
  stack.handleArgs[v74] = (unsigned int *)&nullTexture;
  v75 = stack.handleArgCount + 1;
  stack.handleArgCount = v75;
  if ( (unsigned int)v75 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v75 = stack.handleArgCount;
  }
  stack.handleArgs[v75] = (unsigned int *)&sunShadow0;
  v76 = stack.handleArgCount + 1;
  stack.handleArgCount = v76;
  if ( (unsigned int)v76 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v76 = stack.handleArgCount;
  }
  stack.handleArgs[v76] = (unsigned int *)&sunShadow1;
  v77 = stack.handleArgCount + 1;
  stack.handleArgCount = v77;
  if ( (unsigned int)v77 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v77 = stack.handleArgCount;
  }
  stack.handleArgs[v77] = (unsigned int *)&transSunShadow;
  v78 = stack.handleArgCount + 1;
  stack.handleArgCount = v78;
  if ( (unsigned int)v78 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v78 = stack.handleArgCount;
  }
  stack.handleArgs[v78] = (unsigned int *)&transSunShadowMask;
  v79 = stack.handleArgCount + 1;
  stack.handleArgCount = v79;
  if ( (unsigned int)v79 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v79 = stack.handleArgCount;
  }
  stack.handleArgs[v79] = (unsigned int *)&reflectionGrid;
  v80 = stack.handleArgCount + 1;
  stack.handleArgCount = v80;
  if ( (unsigned int)v80 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v80 = stack.handleArgCount;
  }
  stack.handleArgs[v80] = (unsigned int *)&spotShadowsStaleCache;
  v81 = stack.handleArgCount + 1;
  stack.handleArgCount = v81;
  if ( (unsigned int)v81 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v81 = stack.handleArgCount;
  }
  stack.handleArgs[v81] = (unsigned int *)&nullBuffer;
  ++stack.handleArgCount;
  R_TG_AddTask<>(pScript, v68, &stack, &syncToken);
  v82 = EFFECT_LIGHTING_LIGHTMAP_BLUR_Y;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, v21, v23, &nullTexture, &v84, &v83, &nullTexture, &nullTexture, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &nullBuffer, &syncToken);
  v82 = EFFECT_LIGHTING_LIGHTMAP_BLUR_X;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, &v84, &v83, &nullTexture, v21, v23, &nullTexture, &nullTexture, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &nullBuffer, &syncToken);
  v82 = EFFECT_LIGHTING_LIGHTMAP_BLUR_Y;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, v21, v23, &nullTexture, &v84, &v83, &nullTexture, &nullTexture, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &nullBuffer, &syncToken);
  v82 = EFFECT_LIGHTING_LIGHTMAP_BLUR_X;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, &v84, &v83, &nullTexture, v21, v23, &nullTexture, &nullTexture, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &nullBuffer, &syncToken);
  v82 = EFFECT_LIGHTING_LIGHTMAP_BLUR_Y;
  cRBT_EffectLighting_Process<enum EffectLightingProcessType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82, v21, v23, &nullTexture, &v84, &v83, &nullTexture, &nullTexture, &sunShadow0, &sunShadow1, &transSunShadow, &transSunShadowMask, &reflectionGrid, &spotShadowsStaleCache, &nullBuffer, &syncToken);
}

