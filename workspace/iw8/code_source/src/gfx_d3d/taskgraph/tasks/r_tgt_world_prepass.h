/*
==============
Util_CreateSceneSSRMask
==============
*/

void __fastcall Util_CreateSceneSSRMask(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?Util_CreateSceneSSRMask@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_DrawPrepass
==============
*/

void __fastcall RBT_DrawPrepass(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_DrawPrepass@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
cUtil_CreateSceneSSRMask<R_TG_Handle>
==============
*/

unsigned int __fastcall cUtil_CreateSceneSSRMask<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  return ??$cUtil_CreateSceneSSRMask@UR_TG_Handle@@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@@Z(context, <args_0>);
}

/*
==============
RT_DrawPrepassSetup
==============
*/

void __fastcall RT_DrawPrepassSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  ?RT_DrawPrepassSetup@@YAXPEBUGfxTaskInfo@@PEAUGfxViewInfo@@@Z(taskInfo, viewInfo);
}

/*
==============
cUtil_CreateSceneSSRMask<R_TG_Handle>
==============
*/
unsigned int cUtil_CreateSceneSSRMask<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &<args_0>->index;
  return R_TG_AddTask(context, g_R_TG_Def_Util_CreateSceneSSRMask.m_index, &stack);
}

/*
==============
RBT_DrawPrepass
==============
*/
void RBT_DrawPrepass(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v5; 
  __int64 v9; 
  unsigned int taskFlags; 
  __int64 v11; 
  const R_TG_DrawList *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  GfxCmdBufContext v18; 
  R_RT_DepthHandle v19; 

  _R14 = gfxContext;
  v5 = r_flushCommandListsAt_Flags;
  _RBP = taskInfo;
  v9 = *taskInfo->pTaskData;
  taskFlags = taskInfo->pGraphInfo->taskFlags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v11 = 0i64;
  if ( g_R_TG_prepassGroups[v9].count )
  {
    do
    {
      v12 = &g_R_TG_prepassGroups[v9].drawLists[v11];
      if ( (taskFlags & v12->enableFlags) == v12->enableFlags && (taskFlags & v12->disableFlags) == 0 )
        RB_RunDrawList(viewInfo, data, &_RBP->rtGroup, v12->type);
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < g_R_TG_prepassGroups[v9].count );
    _R14 = gfxContext;
  }
  v13 = r_flushCommandListsAt_Flags;
  if ( !r_flushCommandListsAt_Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( (_DWORD)v9 == 1 )
  {
    v14 = DCONST_DVARBOOL_r_resummarizePrepass;
    if ( !DCONST_DVARBOOL_r_resummarizePrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_resummarizePrepass") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0B8h]
        vmovups xmm1, xmmword ptr [r14]
        vmovups [rsp+98h+var_48], ymm0
        vmovups [rsp+98h+var_58], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly(&v18, &v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_prepass.h(182)");
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups [rsp+98h+var_58], xmm0
      }
      R_ResummarizeDepth(&v18);
    }
  }
}

/*
==============
RT_DrawPrepassSetup
==============
*/
void RT_DrawPrepassSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  GfxCmdBufInput *p_input; 
  R_RT_Image *blackUintImage; 
  __int64 v17; 
  unsigned int taskFlags; 
  const unsigned int *pTaskData; 
  __int64 v20; 
  const R_TG_DrawList *v21; 
  R_RT_Handle v22; 

  _RAX = taskInfo->attachments;
  p_input = &viewInfo->input;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
  }
  R_SetInputCodeBuffer(&viewInfo->input, 6u, &v22);
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
  }
  R_SetInputCodeBuffer(p_input, 7u, &v22);
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
  }
  R_SetInputCodeBuffer(p_input, 9u, &v22);
  _RAX = taskInfo->attachments;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
  }
  R_SetInputCodePersistentBuffer(p_input, 0x17u, &v22);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[4] = &gfxBuf.unifiedIndexBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[5] = &gfxBuf.uibVirtPageTableBuffer;
  _RAX = taskInfo->attachments;
  blackUintImage = (R_RT_Image *)rgp.blackUintImage;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v22);
    blackUintImage = &R_RT_Handle::GetSurface(&v22)->m_image;
  }
  else if ( v22.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v22.m_surfaceID) )
  {
    __debugbreak();
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[83] = &blackUintImage->m_base;
  v17 = 0i64;
  taskFlags = taskInfo->pGraphInfo->taskFlags;
  pTaskData = taskInfo->pTaskData;
  v20 = *pTaskData;
  if ( g_R_TG_prepassGroups[*pTaskData].count )
  {
    do
    {
      v21 = &g_R_TG_prepassGroups[v20].drawLists[v17];
      if ( (taskFlags & v21->enableFlags) == v21->enableFlags && (taskFlags & v21->disableFlags) == 0 )
        R_AddDrawCall(viewInfo, &taskInfo->rtGroup, v21->type, 0x5Du);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < g_R_TG_prepassGroups[v20].count );
  }
}

/*
==============
Util_CreateSceneSSRMask
==============
*/
void Util_CreateSceneSSRMask(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ;
}

