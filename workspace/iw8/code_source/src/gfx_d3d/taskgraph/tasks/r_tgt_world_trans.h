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
  unsigned __int16 v2; 
  signed int v5; 
  R_RT_Image *defaultWaveWaterFloatZImage; 
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *blackShadowImage; 
  bool v10; 
  R_RT_Image *v11; 
  bool v12; 
  R_RT_Image *v13; 
  bool v14; 
  R_RT_Image *v15; 
  bool v16; 
  R_RT_Image *v17; 
  bool v18; 
  R_RT_Image *v19; 
  bool v20; 
  R_RT_Image *v21; 
  R_RT_Image *v22; 
  R_RT_Handle v23; 

  v5 = *taskInfo->pTaskData;
  if ( (unsigned int)(v5 - 12) <= 1 )
  {
    defaultWaveWaterFloatZImage = (R_RT_Image *)rgp.defaultWaveWaterFloatZImage;
    v23 = *taskInfo->attachments;
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      defaultWaveWaterFloatZImage = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[15] = &defaultWaveWaterFloatZImage->m_base;
    p_m_image = (R_RT_Image *)rgp.defaultWaveWaterFloatZImage;
    v23 = *taskInfo->attachments;
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      p_m_image = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[77] = &p_m_image->m_base;
    v23 = taskInfo->attachments[1];
    R_SetInputCodePersistentBuffer(&viewInfo->input, 0xBu, &v23);
    blackImage = (R_RT_Image *)rgp.blackImage;
    v23 = taskInfo->attachments[4];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      blackImage = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[0] = &blackImage->m_base;
    blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
    v10 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    v23 = taskInfo->attachments[13];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v10 )
        blackShadowImage = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[1] = &blackShadowImage->m_base;
    v11 = (R_RT_Image *)rgp.blackShadowImage;
    v12 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    v23 = taskInfo->attachments[14];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v12 )
        v11 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[2] = &v11->m_base;
    v13 = (R_RT_Image *)rgp.blackShadowImage;
    v14 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    v23 = taskInfo->attachments[15];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v14 )
        v13 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[3] = &v13->m_base;
    v15 = (R_RT_Image *)rgp.blackShadowImage;
    v16 = (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 4) != 0;
    v23 = taskInfo->attachments[16];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v16 )
        v15 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[4] = &v15->m_base;
    v17 = (R_RT_Image *)rgp.blackShadowImage;
    v18 = R_SunShadow_TranslucentEnabled(viewInfo);
    v23 = taskInfo->attachments[17];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v18 )
        v17 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v2 + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[5] = &v17->m_base;
    v19 = (R_RT_Image *)rgp.blackImage;
    v20 = R_SunShadow_TranslucentEnabled(viewInfo);
    v23 = taskInfo->attachments[18];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( v20 )
        v19 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v2 + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[6] = &v19->m_base;
    v23 = taskInfo->attachments[19];
    R_SetInputCodePersistentBuffer(&viewInfo->input, 0x10u, &v23);
    v21 = (R_RT_Image *)rgp.blackImage;
    v23 = taskInfo->attachments[21];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      v21 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[12] = &v21->m_base;
    v22 = (R_RT_Image *)rgp.blackImage;
    v23 = taskInfo->attachments[12];
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&v23);
      v22 = &R_RT_Handle::GetSurface(&v23)->m_image;
    }
    else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v23.m_surfaceID) )
    {
      __debugbreak();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codeImages[6] = &v22->m_base;
    R_AddDrawCall(viewInfo, &taskInfo->rtGroup, (GfxDrawListType)v5, 0x5Du);
  }
}

