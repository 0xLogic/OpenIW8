/*
==============
RT_DrawTransSetup
==============
*/

void __fastcall RT_DrawTransSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  ?RT_DrawTransSetup@@YAXPEBUGfxTaskInfo@@PEAUGfxViewInfo@@@Z(taskInfo, viewInfo);
}

/*
==============
RBT_DrawTrans
==============
*/

void __fastcall RBT_DrawTrans(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_DrawTrans@@YAXUGfxCmdBufContext@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, taskInfo, viewInfo, data);
}

/*
==============
RBT_DrawTrans
==============
*/
void RBT_DrawTrans(GfxCmdBufContext *gfxContext, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  signed int v7; 

  v7 = *taskInfo->pTaskData;
  if ( v7 == 12 )
  {
    RB_PreOpaque_UnmapMeshes(data);
  }
  else if ( v7 != 13 && v7 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\tasks\\r_tgt_world_trans.h", 51, ASSERT_TYPE_ASSERT, "(drawlist == DRAWLIST_LIT_TRANS || drawlist == DRAWLIST_LIT_TRANS1 || drawlist == DRAWLIST_DEPTH_HACK_TRANS)", (const char *)&queryFormat, "drawlist == DRAWLIST_LIT_TRANS || drawlist == DRAWLIST_LIT_TRANS1 || drawlist == DRAWLIST_DEPTH_HACK_TRANS") )
  {
    __debugbreak();
  }
  RB_RunDrawList(viewInfo, data, &taskInfo->rtGroup, (GfxDrawListType)v7);
}

/*
==============
RT_DrawTransSetup
==============
*/
void RT_DrawTransSetup(const GfxTaskInfo *taskInfo, GfxViewInfo *viewInfo)
{
  signed int v5; 
  R_RT_Image *defaultWaveWaterFloatZImage; 
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *blackShadowImage; 
  bool v20; 
  R_RT_Image *v22; 
  bool v24; 
  R_RT_Image *v26; 
  bool v28; 
  R_RT_Image *v30; 
  bool v32; 
  R_RT_Image *v33; 
  bool v34; 
  bool v36; 
  R_RT_Image *v39; 
  bool v40; 
  bool v42; 
  R_RT_Image *v48; 
  R_RT_Image *v51; 
  R_RT_Handle v53; 

  v5 = *taskInfo->pTaskData;
  if ( (unsigned int)(v5 - 12) <= 1 )
  {
    _RAX = taskInfo->attachments;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    defaultWaveWaterFloatZImage = (R_RT_Image *)rgp.defaultWaveWaterFloatZImage;
    __asm
    {
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      defaultWaveWaterFloatZImage = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[15] = &defaultWaveWaterFloatZImage->m_base;
    _RAX = taskInfo->attachments;
    p_m_image = (R_RT_Image *)rgp.defaultWaveWaterFloatZImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      p_m_image = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[77] = &p_m_image->m_base;
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    R_SetInputCodePersistentBuffer(&viewInfo->input, 0xBu, &v53);
    _RAX = taskInfo->attachments;
    blackImage = (R_RT_Image *)rgp.blackImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      blackImage = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[0] = &blackImage->m_base;
    _RAX = taskInfo->attachments;
    blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+1A0h]
      vmovd   eax, xmm0
    }
    v20 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    __asm { vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0 }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v20 )
        blackShadowImage = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[1] = &blackShadowImage->m_base;
    _RAX = taskInfo->attachments;
    v22 = (R_RT_Image *)rgp.blackShadowImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+1C0h]
      vmovd   eax, xmm0
    }
    v24 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    __asm { vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0 }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v24 )
        v22 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[2] = &v22->m_base;
    _RAX = taskInfo->attachments;
    v26 = (R_RT_Image *)rgp.blackShadowImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+1E0h]
      vmovd   eax, xmm0
    }
    v28 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    __asm { vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0 }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v28 )
        v26 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[3] = &v26->m_base;
    _RAX = taskInfo->attachments;
    v30 = (R_RT_Image *)rgp.blackShadowImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+200h]
      vmovd   eax, xmm0
    }
    v32 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    __asm { vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0 }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v32 )
        v30 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[4] = &v30->m_base;
    v33 = (R_RT_Image *)rgp.blackShadowImage;
    v34 = R_SunShadow_TranslucentEnabled(viewInfo);
    _RCX = taskInfo->attachments;
    v36 = v34;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+220h]
      vmovd   ecx, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_ECX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v36 )
        v33 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[5] = &v33->m_base;
    v39 = (R_RT_Image *)rgp.blackImage;
    v40 = R_SunShadow_TranslucentEnabled(viewInfo);
    _RCX = taskInfo->attachments;
    v42 = v40;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+240h]
      vmovd   ecx, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_ECX )
    {
      R_RT_Handle::GetSurface(&v53);
      if ( v42 )
        v39 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", (unsigned __int16)_ECX + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[6] = &v39->m_base;
    _RAX = taskInfo->attachments;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+260h]
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    R_SetInputCodePersistentBuffer(&viewInfo->input, 0x10u, &v53);
    _RAX = taskInfo->attachments;
    v48 = (R_RT_Image *)rgp.blackImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+2A0h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      v48 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[12] = &v48->m_base;
    _RAX = taskInfo->attachments;
    v51 = (R_RT_Image *)rgp.blackImage;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+180h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v53);
      v51 = &R_RT_Handle::GetSurface(&v53)->m_image;
    }
    else if ( v53.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v53.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[6] = &v51->m_base;
    R_AddDrawCall(viewInfo, &taskInfo->rtGroup, (GfxDrawListType)v5, 0x5Du);
  }
}

