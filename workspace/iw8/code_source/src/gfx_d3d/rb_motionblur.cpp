/*
==============
R_MBlur_TileNeighbor
==============
*/

void __fastcall R_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *srcVelocityTileRt)
{
  ?R_MBlur_TileNeighbor@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, srcVelocityTileRt);
}

/*
==============
R_MBlur_VelocityTileDownsampleHorizontal
==============
*/

void __fastcall R_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  ?R_MBlur_VelocityTileDownsampleHorizontal@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, dstVelocityRt);
}

/*
==============
R_MBlur_Filter
==============
*/

void __fastcall R_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcVelocity, R_RT_ColorHandle *srcVelocityTileNeighbor, float aspectRatio)
{
  ?R_MBlur_Filter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22M@Z(gfxContext, viewInfo, srcColorRt, srcVelocity, srcVelocityTileNeighbor, aspectRatio);
}

/*
==============
RB_MBlur_Apply
==============
*/

void __fastcall RB_MBlur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_MBlur_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_MBlur_VelocityTileDownsampleVertical
==============
*/

void __fastcall R_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  ?R_MBlur_VelocityTileDownsampleVertical@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, dstVelocityRt);
}

/*
==============
RB_MBlur_Apply
==============
*/
void RB_MBlur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  bool v8; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int m_allocHeight; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v19; 
  int v20; 
  int rtFlags; 
  unsigned int v23; 
  const R_RT_Surface *Surface; 
  GfxCmdBufState *v26; 
  unsigned int v27; 
  const R_RT_Surface *v28; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v30; 
  GfxCmdBufContext v31; 
  float v32; 
  R_RT_Image *p_m_image; 
  R_RT_Handle v34; 
  unsigned int v35; 
  const R_RT_Surface *v36; 
  unsigned int v37; 
  const R_RT_Surface *v38; 
  float v39; 
  float v40; 
  __int128 v42; 
  R_RT_Image *v43; 
  GfxCmdBufState *v45; 
  unsigned int v46; 
  const R_RT_Surface *v47; 
  R_RT_Image *v48; 
  R_RT_Image *v49; 
  GfxCmdBufState *v50; 
  R_RT_Group *v51; 
  const dvar_t *v52; 
  int v53; 
  const dvar_t *v54; 
  int v55; 
  int v56; 
  unsigned int v57; 
  unsigned int m_allocWidth; 
  unsigned int v59; 
  const R_RT_Surface *v60; 
  R_RT_Handle v61; 
  bool v63; 
  GfxCmdBufState *v64; 
  GfxCmdBufContext v65; 
  GfxCmdBufSourceState *v66; 
  R_RT_Handle result; 
  R_RT_Handle v68; 
  R_RT_Handle v69; 
  R_RT_Handle v70; 
  R_RT_Handle v71; 
  unsigned int allocHeight; 
  unsigned int height; 
  GfxCmdBufContext v74; 
  R_RT_Image *v75; 
  R_RT_Handle v76; 
  R_RT_ColorHandle m_halfVelocityMBlurRt; 
  R_RT_Group v78; 
  R_RT_Group v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 

  v8 = !viewInfo->motionBlur.enabled;
  *(_QWORD *)&v76.m_surfaceID = activeGroup;
  v74.source = (GfxCmdBufSourceState *)viewInfo;
  if ( !v8 )
  {
    state = gfxContext->state;
    v83 = v4;
    v82 = v5;
    v81 = v6;
    v80 = v7;
    R_ProfBeginNamedEvent(state, "RB_ApplyMotionBlur");
    v12 = gfxContext->state;
    m_halfVelocityMBlurRt = viewInfo->sceneRtInput.m_halfVelocityMBlurRt;
    v70 = (R_RT_Handle)m_halfVelocityMBlurRt;
    R_ProfBeginNamedEvent(v12, "RB_MotionBlurPostfxVelocityPass");
    v13 = R_RT_Handle::GetSurface(&v70)->m_image.m_base.width / 0xAu;
    v14 = R_RT_Handle::GetSurface(&v70)->m_image.m_base.height / 0xAu;
    height = v14;
    v15 = R_RT_Handle::GetSurface(&v70)->m_allocWidth / 0xA;
    m_allocHeight = R_RT_Handle::GetSurface(&v70)->m_allocHeight;
    allocHeight = m_allocHeight / 0xA;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_7;
    v17 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = 2112;
    if ( !v17->current.enabled )
LABEL_7:
      v18 = 2048;
    v19 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = 0;
    if ( v19->current.integer == 1 )
      v20 = 8;
    rtFlags = v20 | v18;
    v71 = *R_RT_CreateInternal(&result, v13, v14, v15, m_allocHeight / 0xA, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(87)");
    v69 = v71;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v69);
      if ( (R_RT_Handle::GetSurface(&v69)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v71 = v69;
        __debugbreak();
      }
      else
      {
        v71 = v69;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v23 = R_RT_Handle::GetSurface(&v70)->m_allocHeight;
    Surface = R_RT_Handle::GetSurface(&v70);
    v70 = *R_RT_CreateInternal(&result, v13, Surface->m_image.m_base.height, v15, v23, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE0_TEMP", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(88)");
    v69 = v70;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v69);
      if ( (R_RT_Handle::GetSurface(&v69)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v70 = v69;
        __debugbreak();
      }
      else
      {
        v70 = v69;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_TILE);
    v26 = gfxContext->state;
    result = v70;
    R_AddRenderTargetTransition(v26, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v26);
    v68 = v70;
    v27 = R_RT_Handle::GetSurface(&v68)->m_image.m_base.height;
    v28 = R_RT_Handle::GetSurface(&v68);
    source = gfxContext->source;
    R_SetRenderTargetSize(gfxContext->source, v28->m_image.m_base.width, v27, GFX_USE_VIEWPORT_FULL);
    result = v70;
    R_RT_Group::AssignColor(&v78, (R_RT_ColorHandle *)&result);
    *(__m256i *)&v79.m_colorRtCount = *(__m256i *)&v78.m_colorRtCount;
    *(__m256i *)&v79.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v78.m_colorRts[0].m_tracking.m_location;
    *(__m256i *)&v79.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v78.m_colorRts[1].m_tracking.m_location;
    *(__m256i *)&v79.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v78.m_colorRts[2].m_tracking.m_location;
    v30 = *gfxContext;
    *(__m256i *)&v79.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v78.m_colorRts[3].m_tracking.m_location;
    *(__m256i *)&v79.m_depthRt.m_tracking.m_location = *(__m256i *)&v78.m_depthRt.m_tracking.m_location;
    v79.m_vrsRt.m_tracking.m_location = v78.m_vrsRt.m_tracking.m_location;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v30;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v69, &v79, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(97)");
    v31 = *gfxContext;
    v68 = v70;
    result = (R_RT_Handle)m_halfVelocityMBlurRt;
    v32 = 1.0 / (float)R_RT_Handle::GetSurface(&v68)->m_image.m_base.width;
    R_RT_Handle::GetSurface(&v68);
    *(_QWORD *)&v69.m_surfaceID = v31.source;
    v31.source->input.consts[123].v[0] = (float)((float)(v32 * 0.1) * 0.5) - (float)(v32 * 0.5);
    v31.source->input.consts[123].v[1] = v32 * 0.1;
    *(_QWORD *)&v31.source->input.consts[123].xyz.z = 0i64;
    ++v31.source->constVersions[123];
    p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
    v75 = p_m_image;
    if ( v31.source == (GfxCmdBufSourceState *)-1792i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      p_m_image = v75;
    }
    v34 = v68;
    v31.source->input.codeImages[29] = &p_m_image->m_base;
    result = v34;
    v35 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v36 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(*(GfxCmdBufSourceState **)&v69.m_surfaceID, v36->m_image.m_base.width, v35, GFX_USE_VIEWPORT_FULL);
    result = v68;
    R_RT_Group::AssignColor(&v79, (R_RT_ColorHandle *)&result);
    v78 = v79;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v69, &v78, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(27)");
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v69, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(28)");
    result = v71;
    R_AddRenderTargetTransition(v26, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    result = v70;
    R_AddRenderTargetTransition(v26, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v26);
    result = v71;
    v37 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v38 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(source, v38->m_image.m_base.width, v37, GFX_USE_VIEWPORT_FULL);
    result = v71;
    R_RT_Group::AssignColor(&v79, (R_RT_ColorHandle *)&result);
    v78 = v79;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v69, &v78, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(105)");
    result = v71;
    v68 = v70;
    R_RT_Handle::GetSurface(&result);
    v42 = LODWORD(FLOAT_1_0);
    *(float *)&v42 = 1.0 / (float)R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v39 = *(float *)&v42 * 0.1;
    v40 = (float)(*(float *)&v42 * 0.1) * 0.5;
    *(float *)&v42 = *(float *)&v42 * 0.5;
    _XMM0 = v42;
    v31.source->input.consts[123].v[0] = v40 - *(float *)&v42;
    v31.source->input.consts[123].v[1] = v39;
    v31.source->input.consts[123].v[2] = 0.0;
    v31.source->input.consts[123].v[3] = 1.0;
    ++v31.source->constVersions[123];
    v43 = &R_RT_Handle::GetSurface(&v68)->m_image;
    if ( v31.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    {
      __debugbreak();
      v26 = gfxContext->state;
    }
    v31.source->input.codeImages[29] = &v43->m_base;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v69, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(45)");
    result = v71;
    R_AddRenderTargetTransition(v26, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v26);
    R_GPU_EndTimer();
    result = v70;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    R_RT_Destroy((GfxCmdBufContext *)&v69, (R_RT_ColorHandle *)&result);
    v70 = *R_RT_CreateInternal(&result, v13, height, v15, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(116)");
    v68 = v70;
    if ( (_WORD)v42 )
    {
      R_RT_Handle::GetSurface(&v68);
      if ( (R_RT_Handle::GetSurface(&v68)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v70 = v68;
        __debugbreak();
      }
      else
      {
        v70 = v68;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_TILE);
    v45 = gfxContext->state;
    result = v70;
    R_AddRenderTargetTransition(v45, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    result = v70;
    v46 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v47 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(gfxContext->source, v47->m_image.m_base.width, v46, GFX_USE_VIEWPORT_FULL);
    result = v70;
    R_RT_Group::AssignColor(&v79, (R_RT_ColorHandle *)&result);
    v78 = v79;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v69, &v78, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(125)");
    v68 = v71;
    result = (R_RT_Handle)m_halfVelocityMBlurRt;
    v48 = &R_RT_Handle::GetSurface(&result)->m_image;
    if ( !v31.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( v31.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v31.source->input.codeImages[29] = &v48->m_base;
    v49 = &R_RT_Handle::GetSurface(&v68)->m_image;
    if ( !v31.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( v31.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v31.source->input.codeImages[30] = &v49->m_base;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v69, rgp.mblurTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(53)");
    v50 = gfxContext->state;
    result = v70;
    R_AddRenderTargetTransition(v50, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v50);
    R_GPU_EndTimer();
    result = v71;
    *(GfxCmdBufContext *)&v69.m_surfaceID = v31;
    R_RT_Destroy((GfxCmdBufContext *)&v69, (R_RT_ColorHandle *)&result);
    R_ProfEndNamedEvent(v50);
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_FILTER);
    v51 = *(R_RT_Group **)&v76.m_surfaceID;
    if ( **(_BYTE **)&v76.m_surfaceID != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v52 = DCONST_DVARINT_r_dccPostFX;
    result = (R_RT_Handle)v51->m_colorRts[0];
    v68 = result;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    v53 = 0;
    if ( v52->current.integer == 1 )
      v53 = 8;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_69;
    v54 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    v55 = 2112;
    if ( !v54->current.enabled )
LABEL_69:
      v55 = 2048;
    v56 = v53 | v55;
    v57 = R_RT_Handle::GetSurface(&v68)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v68)->m_allocWidth;
    v59 = R_RT_Handle::GetSurface(&v68)->m_image.m_base.height;
    v60 = R_RT_Handle::GetSurface(&v68);
    v61 = *R_RT_CreateInternal(&v76, v60->m_image.m_base.width, v59, m_allocWidth, v57, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v56, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "motionblur color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(143)");
    v71 = v61;
    v68 = v61;
    if ( (_WORD)v42 )
    {
      R_RT_Handle::GetSurface(&v68);
      if ( (R_RT_Handle::GetSurface(&v68)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v61 = v68;
        v71 = v68;
        __debugbreak();
      }
      else
      {
        v61 = v68;
        v71 = v68;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v61 = v71;
        if ( v63 )
          __debugbreak();
      }
    }
    v64 = gfxContext->state;
    v68 = v61;
    R_AddRenderTargetTransition(v64, (R_RT_ColorHandle *)&v68, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v64);
    v68 = v71;
    R_RT_Group::AssignColor(&v79, (R_RT_ColorHandle *)&v68);
    *(__m256i *)&v78.m_colorRtCount = *(__m256i *)&v79.m_colorRtCount;
    *(__m256i *)&v78.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v79.m_colorRts[0].m_tracking.m_location;
    *(__m256i *)&v78.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v79.m_colorRts[1].m_tracking.m_location;
    *(__m256i *)&v78.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v79.m_colorRts[2].m_tracking.m_location;
    *(__m256i *)&v78.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v79.m_colorRts[3].m_tracking.m_location;
    *(__m256i *)&v78.m_depthRt.m_tracking.m_location = *(__m256i *)&v79.m_depthRt.m_tracking.m_location;
    v65 = *gfxContext;
    v78.m_vrsRt.m_tracking.m_location = v79.m_vrsRt.m_tracking.m_location;
    *(GfxCmdBufContext *)&v76.m_surfaceID = v65;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v76, &v78, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(148)");
    v66 = v74.source;
    R_DynamicResolutionForceRendertargetConstant(gfxContext->source, HIWORD(v74.source->decalVolumeSurfType), LOWORD(v74.source->viewStatsTarget));
    v68 = v70;
    v76 = result;
    v74 = *gfxContext;
    R_MBlur_Filter(&v74, (const GfxViewInfo *)v66, (R_RT_ColorHandle *)&v76, &m_halfVelocityMBlurRt, (R_RT_ColorHandle *)&v68, 1.7777778);
    v74 = *gfxContext;
    R_RT_Destroy(&v74, (R_RT_ColorHandle *)&result);
    result = v70;
    v74 = *gfxContext;
    R_RT_Destroy(&v74, (R_RT_ColorHandle *)&result);
    result = v71;
    R_RT_Group::AssignColor(v51, (R_RT_ColorHandle *)&result);
    result = v71;
    R_AddRenderTargetTransition(v64, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v64);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v64);
  }
}

/*
==============
R_MBlur_Filter
==============
*/
void R_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcVelocity, R_RT_ColorHandle *srcVelocityTileNeighbor, float aspectRatio)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v13; 
  R_RT_Image *v14; 
  GfxCmdBufInput *v15; 
  const R_RT_Surface *v16; 
  GfxCmdBufSourceState *v17; 
  R_RT_Image *v18; 
  GfxCmdBufInput *v19; 
  GfxCmdBufContext v20; 
  Material *mblurFilterMaterial; 
  float height; 
  float width; 
  GfxCmdBufContext v24; 

  source = gfxContext->source;
  source->input.consts[38].v[0] = aspectRatio;
  *(_QWORD *)&source->input.consts[38].xyz.y = 0i64;
  source->input.consts[38].v[3] = 0.0;
  ++source->constVersions[38];
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  Surface = R_RT_Handle::GetSurface(srcVelocity);
  v13 = gfxContext->source;
  v14 = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v15 = &v13->input;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v15->codeImages[29] = &v14->m_base;
  v16 = R_RT_Handle::GetSurface(srcVelocityTileNeighbor);
  v17 = gfxContext->source;
  v18 = &v16->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v19 = &v17->input;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20 = *gfxContext;
  v19->codeImages[31] = &v18->m_base;
  mblurFilterMaterial = rgp.mblurFilterMaterial;
  if ( rg.cinematic )
    mblurFilterMaterial = rgp.mblurFilterCinematicMaterial;
  height = (float)viewInfo->sceneViewport.height;
  width = (float)viewInfo->sceneViewport.width;
  v24 = v20;
  RB_ViewportFilterDirectInternal(&v24, mblurFilterMaterial, 0xFFFFFFFF, &viewInfo->sceneViewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(64)");
}

/*
==============
R_MBlur_TileNeighbor
==============
*/
void R_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *srcVelocityTileRt)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v9; 
  GfxCmdBufSourceState *v10; 
  R_RT_Image *v11; 
  GfxCmdBufInput *v12; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext v14; 

  Surface = R_RT_Handle::GetSurface(srcVelocityRt);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[29] = &p_m_image->m_base;
  v9 = R_RT_Handle::GetSurface(srcVelocityTileRt);
  v10 = gfxContext->source;
  v11 = &v9->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v12 = &v10->input;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v13 = *gfxContext;
  v12->codeImages[30] = &v11->m_base;
  v14 = v13;
  RB_FullScreenFilterInternal(&v14, rgp.mblurTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(53)");
}

/*
==============
R_MBlur_VelocityTileDownsampleHorizontal
==============
*/
void R_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  float v6; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  R_RT_Handle v10; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v13; 
  R_RT_Handle v14; 
  R_RT_Group v15; 
  R_RT_Group v16; 

  v6 = 1.0 / (float)R_RT_Handle::GetSurface(dstVelocityRt)->m_image.m_base.width;
  R_RT_Handle::GetSurface(dstVelocityRt);
  source = gfxContext->source;
  source->input.consts[123].v[0] = (float)((float)(v6 * 0.1) * 0.5) - (float)(v6 * 0.5);
  source->input.consts[123].v[1] = v6 * 0.1;
  *(_QWORD *)&source->input.consts[123].xyz.z = 0i64;
  ++source->constVersions[123];
  p_m_image = &R_RT_Handle::GetSurface(srcVelocityRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v10 = dstVelocityRt->R_RT_Handle;
  p_input->codeImages[29] = &p_m_image->m_base;
  v14 = v10;
  height = R_RT_Handle::GetSurface(&v14)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v14);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v14 = dstVelocityRt->R_RT_Handle;
  R_RT_Group::AssignColor(&v15, (R_RT_ColorHandle *)&v14);
  *(__m256i *)&v16.m_colorRtCount = *(__m256i *)&v15.m_colorRtCount;
  *(__m256i *)&v16.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v15.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v16.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v15.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v16.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v15.m_colorRts[2].m_tracking.m_location;
  v13 = *gfxContext;
  *(__m256i *)&v16.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v15.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v16.m_depthRt.m_tracking.m_location = *(__m256i *)&v15.m_depthRt.m_tracking.m_location;
  v16.m_vrsRt.m_tracking.m_location = v15.m_vrsRt.m_tracking.m_location;
  *(GfxCmdBufContext *)&v14.m_surfaceID = v13;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v14, &v16, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(27)");
  *(GfxCmdBufContext *)&v14.m_surfaceID = *gfxContext;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v14, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(28)");
}

/*
==============
R_MBlur_VelocityTileDownsampleVertical
==============
*/
void R_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  float v8; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v11; 
  GfxCmdBufContext v12; 

  R_RT_Handle::GetSurface(dstVelocityRt);
  Surface = R_RT_Handle::GetSurface(dstVelocityRt);
  source = gfxContext->source;
  v8 = 1.0 / (float)Surface->m_image.m_base.height;
  source->input.consts[123].v[0] = (float)((float)(v8 * 0.1) * 0.5) - (float)(v8 * 0.5);
  source->input.consts[123].v[1] = v8 * 0.1;
  source->input.consts[123].v[2] = 0.0;
  source->input.consts[123].v[3] = 1.0;
  ++source->constVersions[123];
  p_m_image = &R_RT_Handle::GetSurface(srcVelocityRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11 = *gfxContext;
  p_input->codeImages[29] = &p_m_image->m_base;
  v12 = v11;
  RB_FullScreenFilterInternal(&v12, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(45)");
}

