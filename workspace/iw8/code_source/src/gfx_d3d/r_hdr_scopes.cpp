/*
==============
R_HDRScopes_DestroyResources
==============
*/

void R_HDRScopes_DestroyResources(void)
{
  ?R_HDRScopes_DestroyResources@@YAXXZ();
}

/*
==============
R_HDRScopes_CreateResources
==============
*/

void R_HDRScopes_CreateResources(void)
{
  ?R_HDRScopes_CreateResources@@YAXXZ();
}

/*
==============
RB_HDRScopes_ProcessStage
==============
*/

void __fastcall RB_HDRScopes_ProcessStage(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, R_RT_Handle *dstRt, HDRScopesStage currentStage)
{
  ?RB_HDRScopes_ProcessStage@@YAXAEBUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_Handle@@2W4HDRScopesStage@@@Z(gfxContext, viewInfo, srcRt, dstRt, currentStage);
}

/*
==============
R_HDRScopes_Enabled
==============
*/

bool __fastcall R_HDRScopes_Enabled()
{
  return ?R_HDRScopes_Enabled@@YA_NXZ();
}

/*
==============
R_HDRScopes_RegisterDvars
==============
*/

void R_HDRScopes_RegisterDvars(void)
{
  ?R_HDRScopes_RegisterDvars@@YAXXZ();
}

/*
==============
RB_HDRScopes_ProcessStageDisplay
==============
*/

void __fastcall RB_HDRScopes_ProcessStageDisplay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, HDRScopesStage currentStage)
{
  ?RB_HDRScopes_ProcessStageDisplay@@YAXAEBUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_Handle@@W4HDRScopesStage@@@Z(gfxContext, viewInfo, srcRt, currentStage);
}

/*
==============
RB_HDRScopes_Analyze
==============
*/
void RB_HDRScopes_Analyze(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, R_RT_Handle *dstRt, HDRScopesStage currentStage)
{
  HDRScopesStage activeStage; 
  GfxCmdBufContext v12; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v14; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v16; 
  __int64 panelCount; 
  R_RT_ColorHandle *p_rt; 
  unsigned int m_allocCounter; 
  R_RT_Image *outputImage; 
  const R_RT_Surface *v21; 
  const R_RT_Surface *v22; 
  GfxImage *srcImage; 
  R_RT_Handle v24; 
  __m256i v25; 
  __m256i v26; 
  __m256i v27; 
  __m256i v28; 
  _BYTE v29[72]; 
  ComputeCmdBufState state; 

  activeStage = s_hdrScopes.state.activeStage;
  if ( s_hdrScopes.state.activeStage == HDR_SCOPES_STAGE_NONE )
  {
    activeStage = r_hdrScopesRenderStage->current.integer;
    s_hdrScopes.state.activeStage = activeStage;
  }
  if ( currentStage == activeStage )
  {
    R_LockGfxImmediateContext();
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v29[24] = _XMM0;
    *(_OWORD *)&v29[56] = _XMM0;
    v25.m256i_i8[0] = 0;
    *(_WORD *)&v29[8] = 0;
    *(_DWORD *)&v29[16] = 0;
    *(_WORD *)&v29[40] = 0;
    *(_DWORD *)&v29[48] = 0;
    *(__m256i *)state.constantsDirty = v25;
    *(__m256i *)&state.constants[0][0].buffer = v26;
    *(__m256i *)&state.constants[0][2].bufferData = v27;
    *(__m256i *)&state.constants[0][3].bufferSize = v28;
    v12 = *gfxContext;
    *(__m256i *)&state.constants[0][4].buffer = *(__m256i *)v29;
    *(__m256i *)&state.constants[0][6].bufferData = *(__m256i *)&v29[32];
    *(_QWORD *)&state.constants[0][7].bufferSize = *(_QWORD *)&v29[64];
    *(GfxCmdBufContext *)&v24.m_surfaceID = v12;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v24, (const R_RT_Group *)&state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(523)");
    R_InitGfxComputeCmdBufState(&state, gfxContext->state);
    R_ProfBeginNamedEvent(&state, "R_HDRScopes_Analyze");
    R_GPU_BeginTimer(GPU_TIMER_HDR_SCOPES);
    v24 = *srcRt;
    R_HW_AddResourceTransition(&state, &v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    Surface = R_RT_Handle::GetSurface(dstRt);
    v14 = R_RT_Handle::GetSurface(srcRt);
    R_HDRScopes_InitState(&s_hdrScopes.state, viewInfo, &v14->m_image.m_base, &Surface->m_image.m_base, currentStage);
    p_m_image = NULL;
    v16 = NULL;
    panelCount = s_hdrScopes.state.panelCount;
    if ( s_hdrScopes.state.panelCount > 0 )
    {
      p_rt = &s_hdrScopes.state.panels[0].rt;
      do
      {
        m_allocCounter = p_rt[-1].m_tracking.m_allocCounter;
        if ( m_allocCounter )
        {
          switch ( m_allocCounter )
          {
            case 1u:
              outputImage = &R_RT_Handle::GetSurface(p_rt)->m_image;
              v21 = R_RT_Handle::GetSurface(srcRt);
              R_HDRScopes_ProcessImage(&state, HDR_SCOPES_PANEL_TYPE_HEATMAP, s_hdrScopes.state.srcColorimetry, s_hdrScopes.state.radiometricScale, s_hdrScopes.state.dstColorimetry, &v21->m_image.m_base, &outputImage->m_base);
              break;
            case 2u:
              p_m_image = &R_RT_Handle::GetSurface(p_rt)->m_image;
              break;
            case 3u:
              v16 = &R_RT_Handle::GetSurface(p_rt)->m_image;
              break;
            default:
              LODWORD(srcImage) = p_rt[-1].m_tracking.m_allocCounter;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 567, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", srcImage) )
                __debugbreak();
              break;
          }
        }
        p_rt = (R_RT_ColorHandle *)((char *)p_rt + 56);
        --panelCount;
      }
      while ( panelCount );
      if ( p_m_image || v16 )
      {
        v22 = R_RT_Handle::GetSurface(srcRt);
        R_HDRScopes_AnalyzeScatter(&state, s_hdrScopes.state.srcColorimetry, s_hdrScopes.state.radiometricScale, &v22->m_image.m_base, &p_m_image->m_base, &v16->m_base);
      }
    }
    v24 = *srcRt;
    R_HW_AddResourceTransition(&state, &v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(&state);
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
RB_HDRScopes_ProcessStage
==============
*/
void RB_HDRScopes_ProcessStage(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, R_RT_Handle *dstRt, HDRScopesStage currentStage)
{
  R_RT_Handle v5; 
  HDRScopesStage v8; 
  GfxCmdBufContext v9; 
  R_RT_Handle v10; 
  R_RT_Handle v11; 

  v5 = *srcRt;
  v10 = *dstRt;
  v9 = *gfxContext;
  v11 = v5;
  RB_HDRScopes_Analyze(&v9, viewInfo, &v11, &v10, currentStage);
  if ( currentStage == HDR_SCOPES_STAGE_PRE_2D )
  {
    v9 = *gfxContext;
    RB_HDRScopes_Render(&v9, viewInfo, HDR_SCOPES_STAGE_PRE_2D);
    v8 = HDR_SCOPES_STAGE_SCENE;
  }
  else
  {
    if ( currentStage != HDR_SCOPES_STAGE_POST_2D )
      return;
    v8 = HDR_SCOPES_STAGE_POST_2D;
  }
  v9 = *gfxContext;
  RB_HDRScopes_Render(&v9, viewInfo, v8);
}

/*
==============
RB_HDRScopes_ProcessStageDisplay
==============
*/
void RB_HDRScopes_ProcessStageDisplay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, HDRScopesStage currentStage)
{
  R_RT_ColorHandle *GlobalColor; 
  R_RT_Handle v9; 
  __int32 v10; 
  HDRScopesStage v11; 
  GfxCmdBufContext v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 
  R_RT_ColorHandle v15; 

  GlobalColor = R_RT_GetGlobalColor(&v15, R_RENDERTARGET_DISPLAY_BUFFER);
  v9 = *srcRt;
  v13 = GlobalColor->R_RT_Handle;
  v12 = *gfxContext;
  v14 = v9;
  RB_HDRScopes_Analyze(&v12, viewInfo, &v14, &v13, currentStage);
  v10 = currentStage - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return;
    v11 = HDR_SCOPES_STAGE_POST_2D;
  }
  else
  {
    v12 = *gfxContext;
    RB_HDRScopes_Render(&v12, viewInfo, HDR_SCOPES_STAGE_PRE_2D);
    v11 = HDR_SCOPES_STAGE_SCENE;
  }
  v12 = *gfxContext;
  RB_HDRScopes_Render(&v12, viewInfo, v11);
}

/*
==============
RB_HDRScopes_Render
==============
*/
void RB_HDRScopes_Render(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, HDRScopesStage currentStage)
{
  GfxCmdBufState *v6; 
  __int64 panelCount; 
  R_RT_Image *p_m_image; 
  HDRScopesPanel *panels; 
  __int64 v10; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  __m256i v14; 
  unsigned int height; 
  const R_RT_Surface *v16; 
  GfxCmdBufContext v17; 
  GfxCmdBufSourceState *v19; 
  HDRScopesRect *p_rect; 
  int v21; 
  HdrScopesPanelType v22; 
  const R_RT_Surface *v23; 
  HdrScopesColorimetry srcColorimetry; 
  const R_RT_Surface *v25; 
  GfxCmdBufState *v26; 
  __int64 v29; 
  R_RT_ColorHandle *p_rt; 
  unsigned __int16 m_surfaceID; 
  HdrScopesColorimetry dstColorimetry; 
  GfxImage *srcImage; 
  R_RT_Image *srcImagea; 
  const HDRScopesRect *v35; 
  __m256i v36; 
  __m256i result_8; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  _BYTE v40[64]; 
  __m256i v41; 
  __m256i v42; 
  _BYTE v43[64]; 
  __int64 v44; 
  ComputeCmdBufState state; 

  if ( currentStage == s_hdrScopes.state.activeStage && s_hdrScopes.state.panelCount )
  {
    R_LockGfxImmediateContext();
    R_RT_GetGlobalColor((R_RT_ColorHandle *)&result_8, R_RENDERTARGET_DISPLAY_BUFFER);
    v6 = gfxContext->state;
    R_ProfBeginNamedEvent(v6, "R_HDRScopes_Render");
    R_GPU_BeginTimer(GPU_TIMER_HDR_SCOPES);
    panelCount = s_hdrScopes.state.panelCount;
    p_m_image = NULL;
    v38 = (R_RT_Handle)result_8;
    if ( s_hdrScopes.state.panelCount > 0 )
    {
      panels = s_hdrScopes.state.panels;
      v10 = s_hdrScopes.state.panelCount;
      do
      {
        if ( panels->panelType == HDR_SCOPES_PANEL_TYPE_IMAGE )
          p_m_image = &R_RT_Handle::GetSurface(&panels->rt)->m_image;
        ++panels;
        --v10;
      }
      while ( v10 );
      if ( p_m_image )
      {
        R_InitGfxComputeCmdBufState(&state, v6);
        v36 = result_8;
        R_HW_AddResourceTransition(&state, (R_RT_Handle *)&v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(&state);
        Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&result_8);
        R_HDRScopes_ProcessImage(&state, HDR_SCOPES_PANEL_TYPE_IMAGE, HDR_SCOPES_COLORIMETRY_UNKNOWN, 1.0, HDR_SCOPES_COLORIMETRY_UNKNOWN, &Surface->m_image.m_base, &p_m_image->m_base);
        v36 = result_8;
        R_HW_AddResourceTransition(&state, (R_RT_Handle *)&v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(&state);
      }
    }
    source = gfxContext->source;
    R_InitCmdBufSourceState(gfxContext->source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(v6->device);
      R_InitCmdBufState(v6);
    }
    else
    {
      R_LockGfxImmediateContext();
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v36);
      __asm { vpextrq rdx, xmm0, 1; in }
      if ( v6 != _RDX )
        GfxCmdBufState::Copy(v6, _RDX);
    }
    memset_0(v6->perPrimConstantState, 255, sizeof(v6->perPrimConstantState));
    memset_0(v6->perObjectConstantState, 255, sizeof(v6->perObjectConstantState));
    memset_0(v6->stableConstantState, 255, sizeof(v6->stableConstantState));
    v14 = result_8;
    v6->data = source->input.data;
    v36 = v14;
    height = R_RT_Handle::GetSurface((R_RT_Handle *)&v36)->m_image.m_base.height;
    v16 = R_RT_Handle::GetSurface((R_RT_Handle *)&v36);
    R_SetRenderTargetSize(source, v16->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    v17 = *gfxContext;
    v36 = result_8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)&v36);
      v38 = (R_RT_Handle)v36;
    }
    else
    {
      if ( result_8.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&result_8.m256i_u64[2] = _XMM0;
    result_8.m256i_i16[0] = 0;
    result_8.m256i_i32[2] = 0;
    v40[0] = 1;
    v39 = v38;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v39);
    }
    else
    {
      if ( v36.m256i_i32[2] != (unsigned __int16)_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(R_RT_Handle *)&v40[8] = v38;
    *(__m256i *)&v43[8] = result_8;
    *(__m256i *)state.constantsDirty = *(__m256i *)v40;
    *(__m256i *)&state.constants[0][0].buffer = *(__m256i *)&v40[32];
    *(__m256i *)&state.constants[0][2].bufferData = v41;
    *(__m256i *)&state.constants[0][3].bufferSize = v42;
    *(__m256i *)&state.constants[0][4].buffer = *(__m256i *)v43;
    *(__m256i *)&state.constants[0][6].bufferData = *(__m256i *)&v43[32];
    *(_QWORD *)&state.constants[0][7].bufferSize = v44;
    *(GfxCmdBufContext *)v36.m256i_i8 = v17;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v36, (const R_RT_Group *)&state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(642)");
    v19 = gfxContext->source;
    R_SetViewportStruct(gfxContext->source, &viewInfo->displayViewport);
    if ( panelCount > 0 )
    {
      p_rect = &s_hdrScopes.state.panels[0].rect;
      while ( 1 )
      {
        v21 = p_rect[-1].height;
        if ( !v21 )
          break;
        switch ( v21 )
        {
          case 1:
            v25 = R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y);
            srcColorimetry = s_hdrScopes.state.srcColorimetry;
            v35 = p_rect;
            v22 = HDR_SCOPES_PANEL_TYPE_IMAGE;
            srcImagea = &v25->m_image;
            dstColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
            break;
          case 2:
            v23 = R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y);
            srcColorimetry = s_hdrScopes.state.srcColorimetry;
            v35 = p_rect;
            v22 = HDR_SCOPES_PANEL_TYPE_WAVEFORM;
            srcImagea = &v23->m_image;
            dstColorimetry = s_hdrScopes.state.dstColorimetry;
            break;
          case 3:
            v35 = p_rect;
            srcImagea = &R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y)->m_image;
            v22 = HDR_SCOPES_PANEL_TYPE_CIE_PLOT;
            dstColorimetry = s_hdrScopes.state.dstColorimetry;
            goto LABEL_40;
          default:
            LODWORD(srcImage) = p_rect[-1].height;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 669, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", srcImage) )
              __debugbreak();
            goto LABEL_42;
        }
LABEL_41:
        *(GfxCmdBufContext *)v36.m256i_i8 = v17;
        RB_HDRScopes_RenderPanel((GfxCmdBufContext *)&v36, viewInfo, v22, srcColorimetry, dstColorimetry, &srcImagea->m_base, v35);
LABEL_42:
        p_rect = (HDRScopesRect *)((char *)p_rect + 56);
        if ( !--panelCount )
        {
          v19 = gfxContext->source;
          goto LABEL_44;
        }
      }
      v35 = p_rect;
      srcImagea = &R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y)->m_image;
      v22 = HDR_SCOPES_PANEL_TYPE_IMAGE;
      dstColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
LABEL_40:
      srcColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
      goto LABEL_41;
    }
LABEL_44:
    *(GfxCmdBufContext *)v36.m256i_i8 = v17;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v36);
    v26 = gfxContext->state;
    R_ResetRenderTargets(v26);
    if ( (*((_BYTE *)&v19->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(v26);
      R_UnlockIfGfxImmediateContext(v26->device);
    }
    else
    {
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v36);
      __asm { vpextrq rcx, xmm0, 1; out }
      if ( v26 != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, v26);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v26);
    v29 = s_hdrScopes.state.panelCount;
    if ( s_hdrScopes.state.panelCount > 0 )
    {
      p_rt = &s_hdrScopes.state.panels[0].rt;
      do
      {
        m_surfaceID = p_rt->m_surfaceID;
        if ( p_rt->m_surfaceID )
        {
          R_RT_Handle::GetSurface(p_rt);
        }
        else if ( p_rt->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        {
          __debugbreak();
        }
        if ( m_surfaceID )
        {
          v39 = p_rt->R_RT_Handle;
          *(GfxCmdBufContext *)v36.m256i_i8 = v17;
          R_RT_Destroy((GfxCmdBufContext *)&v36, (R_RT_ColorHandle *)&v39);
          p_rt->m_surfaceID = 0;
          p_rt->m_tracking.m_allocCounter = 0;
          p_rt->m_tracking.m_name = NULL;
          p_rt->m_tracking.m_location = NULL;
        }
        p_rt = (R_RT_ColorHandle *)((char *)p_rt + 56);
        --v29;
      }
      while ( v29 );
    }
    R_UnlockGfxImmediateContext();
    s_hdrScopes.state.activeStage = HDR_SCOPES_STAGE_NONE;
  }
}

/*
==============
RB_HDRScopes_RenderPanel
==============
*/
void RB_HDRScopes_RenderPanel(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, HdrScopesPanelType panelType, HdrScopesColorimetry srcColorimetry, HdrScopesColorimetry dstColorimetry, const GfxImage *srcImage, const HDRScopesRect *panelRect)
{
  float x; 
  float y; 
  float width; 
  float height; 
  GfxCmdBufSourceState *source; 
  float v15; 
  float v16; 
  float value; 
  GfxDisplayMappingParams *HdrDisplayMappingParams; 
  __m128 v19; 
  GfxDisplayMappingParams *SdrDisplayMappingParams; 
  Material *hdrScopesRenderHeatmapMaterial; 
  GfxCmdBufInput *p_input; 
  __int64 v23; 
  GfxCmdBufContext v24; 

  x = (float)panelRect->x;
  y = (float)panelRect->y;
  width = (float)panelRect->width;
  height = (float)panelRect->height;
  v24 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v24);
  v24 = *gfxContext;
  RB_SetUIColorimetryParams(&v24);
  source = gfxContext->source;
  v15 = FLOAT_N1_0;
  source->input.consts[144].v[1] = (float)dstColorimetry;
  source->input.consts[144].v[2] = width;
  source->input.consts[144].v[3] = height;
  source->input.consts[144].v[0] = (float)srcColorimetry;
  ++source->constVersions[144];
  v16 = FLOAT_N1_0;
  value = r_hdrScopesUserValue->current.value;
  if ( srcColorimetry == HDR_SCOPES_COLORIMETRY_BT2020_PQ )
  {
    HdrDisplayMappingParams = R_GetHdrDisplayMappingParams((GfxDisplayMappingParams *)&v24);
    v19 = (__m128)*(unsigned __int64 *)&HdrDisplayMappingParams->gamma;
    *(float *)&v24.state = HdrDisplayMappingParams->maxLuminance;
    v15 = *(float *)&v24.state;
LABEL_5:
    v24.source = (GfxCmdBufSourceState *)v19.m128_u64[0];
    LODWORD(v16) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    goto LABEL_6;
  }
  if ( srcColorimetry == HDR_SCOPES_COLORIMETRY_BT709_SRGB )
  {
    SdrDisplayMappingParams = R_GetSdrDisplayMappingParams((GfxDisplayMappingParams *)&v24);
    v19 = (__m128)*(unsigned __int64 *)&SdrDisplayMappingParams->gamma;
    *(float *)&v24.state = SdrDisplayMappingParams->maxLuminance;
    goto LABEL_5;
  }
LABEL_6:
  hdrScopesRenderHeatmapMaterial = NULL;
  source->input.consts[145].v[3] = 0.0;
  source->input.consts[145].v[0] = value;
  source->input.consts[145].v[1] = v16;
  source->input.consts[145].v[2] = v15;
  ++source->constVersions[145];
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = srcImage;
  if ( panelType )
  {
    switch ( panelType )
    {
      case HDR_SCOPES_PANEL_TYPE_HEATMAP:
        hdrScopesRenderHeatmapMaterial = rgp.hdrScopesRenderHeatmapMaterial;
        break;
      case HDR_SCOPES_PANEL_TYPE_WAVEFORM:
        hdrScopesRenderHeatmapMaterial = rgp.hdrScopesRenderWaveformMaterial;
        break;
      case HDR_SCOPES_PANEL_TYPE_CIE_PLOT:
        hdrScopesRenderHeatmapMaterial = rgp.hdrScopesRenderCiePlotMaterial;
        break;
      default:
        LODWORD(v23) = panelType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 315, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", v23) )
          __debugbreak();
        break;
    }
  }
  else
  {
    hdrScopesRenderHeatmapMaterial = rgp.hdrScopesRenderImageMaterial;
  }
  v24 = *gfxContext;
  RB_DrawStretchPic(&v24, hdrScopesRenderHeatmapMaterial, x, y, width, height, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
}

/*
==============
R_HDRScopes_AnalyzeScatter
==============
*/
void R_HDRScopes_AnalyzeScatter(ComputeCmdBufState *computeState, HdrScopesColorimetry srcColorimetry, float radiometricScale, const GfxImage *srcImage, const GfxImage *waveformImage, const GfxImage *ciePlotImage)
{
  unsigned int height; 
  unsigned int width; 
  const GfxTexture *Resident; 
  unsigned int v12; 
  unsigned int v13; 
  const GfxTexture *v14; 
  const GfxTexture *v15; 
  const GfxTexture *v16; 
  GfxTextureId textureId; 
  GfxTextureId v18; 
  const GfxTexture *v19; 
  const GfxTexture *v20; 
  GfxTexture *textures; 
  vec4_t color; 
  int data[8]; 

  color = (vec4_t)_xmm;
  if ( waveformImage )
  {
    height = waveformImage->height;
    width = waveformImage->width;
    Resident = R_Texture_GetResident(waveformImage->textureId);
    R_SetTextureRect(computeState, Resident, &color, 0, 0, width, height);
  }
  if ( ciePlotImage )
  {
    v12 = ciePlotImage->height;
    v13 = ciePlotImage->width;
    v14 = R_Texture_GetResident(ciePlotImage->textureId);
    R_SetTextureRect(computeState, v14, &color, 0, 0, v13, v12);
  }
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(computeState, rgp.hdrScopesScatterShader);
  if ( waveformImage )
  {
    v15 = R_Texture_GetResident(waveformImage->textureId);
    R_HW_AddResourceTransition(computeState, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  if ( ciePlotImage )
  {
    v16 = R_Texture_GetResident(ciePlotImage->textureId);
    R_HW_AddResourceTransition(computeState, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  if ( waveformImage )
    textureId = waveformImage->textureId;
  else
    textureId = ciePlotImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  if ( ciePlotImage )
    v18 = ciePlotImage->textureId;
  else
    v18 = waveformImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(v18);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(srcImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  data[0] = srcColorimetry;
  data[1] = waveformImage != NULL;
  data[2] = ciePlotImage != NULL;
  *(float *)&data[4] = radiometricScale;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  R_Dispatch(computeState, ((unsigned int)srcImage->width + 7) >> 3, ((unsigned int)srcImage->height + 7) >> 3, 1u);
  if ( waveformImage )
  {
    v19 = R_Texture_GetResident(waveformImage->textureId);
    R_HW_AddResourceTransition(computeState, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  if ( ciePlotImage )
  {
    v20 = R_Texture_GetResident(ciePlotImage->textureId);
    R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
}

/*
==============
R_HDRScopes_CreateResources
==============
*/
void R_HDRScopes_CreateResources(void)
{
  ;
}

/*
==============
R_HDRScopes_DestroyResources
==============
*/
void R_HDRScopes_DestroyResources(void)
{
  ;
}

/*
==============
R_HDRScopes_Enabled
==============
*/
bool R_HDRScopes_Enabled()
{
  return r_hdrScopesRenderStage->current.integer != 0;
}

/*
==============
R_HDRScopes_InitState
==============
*/
void R_HDRScopes_InitState(HDRScopesState *state, const GfxViewInfo *viewInfo, const GfxImage *srcImage, const GfxImage *outputImage, HDRScopesStage stage)
{
  bool v9; 
  HdrScopesColorimetry v10; 
  float v11; 
  int integer; 
  int v13; 
  int v14; 
  bool enabled; 
  int rtHeight; 
  bool v17; 
  int height; 
  int width; 
  unsigned __int16 v20; 
  const dvar_t *v21; 
  int v22; 
  int rtWidth; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  v9 = 0;
  v10 = R_GetFramebufferColorimetry() == GFX_COLORIMETRY_BT2020_PQ;
  state->dstColorimetry = v10;
  if ( stage == HDR_SCOPES_STAGE_SCENE )
    v10 = HDR_SCOPES_COLORIMETRY_SCENE;
  state->srcColorimetry = v10;
  if ( v10 == HDR_SCOPES_COLORIMETRY_SCENE )
    v11 = viewInfo->input.sceneConstants.radiometricScale.v[0];
  else
    v11 = FLOAT_1_0;
  state->radiometricScale = v11;
  state->panelCount = 0;
  integer = r_hdrScopesLayout->current.integer;
  if ( integer )
  {
    if ( integer == 1 )
    {
      v26 = outputImage->width >> 1;
      v27 = outputImage->height >> 1;
      if ( r_hdrScopesResizeScreen->current.enabled )
        R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_IMAGE, 0, 0, v26, v27, v26, outputImage->height >> 1);
      if ( r_hdrScopesDrawWaveform->current.enabled )
        R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_WAVEFORM, 0, outputImage->height >> 1, v26, v27, v26, v27);
      if ( r_hdrScopesDrawCiePlot->current.enabled )
        R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_CIE_PLOT, outputImage->width >> 1, 0, v26, v27, v26, v27);
      if ( r_hdrScopesDrawHeatMap->current.enabled )
        R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_HEATMAP, outputImage->width >> 1, outputImage->height >> 1, v26, v27, v26, v27);
    }
  }
  else
  {
    v13 = 1024;
    v14 = outputImage->height;
    enabled = 0;
    rtHeight = 0;
    if ( (int)(float)((float)v14 * r_hdrScopesOverlaySplit->current.value) < 1024 )
      v13 = (int)(float)((float)v14 * r_hdrScopesOverlaySplit->current.value);
    if ( v13 )
      enabled = r_hdrScopesDrawWaveform->current.enabled;
    if ( enabled )
      rtHeight = v13;
    v17 = 0;
    height = v14 - rtHeight;
    if ( enabled )
      v17 = r_hdrScopesResizeScreen->current.enabled;
    if ( v17 )
      R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_IMAGE, 0, 0, outputImage->width, height, outputImage->width, height);
    if ( enabled )
    {
      width = outputImage->width;
      v20 = width;
      if ( (unsigned __int16)width > srcImage->width )
        v20 = srcImage->width;
      R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_WAVEFORM, 0, height, width, rtHeight, v20, rtHeight);
    }
    v21 = r_hdrScopesOverlayPanelSize;
    v22 = outputImage->height;
    rtWidth = (int)(float)((float)v22 * r_hdrScopesOverlayPanelSize->current.value);
    if ( rtWidth )
      v9 = r_hdrScopesDrawCiePlot->current.enabled;
    if ( v9 )
    {
      R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_CIE_PLOT, outputImage->width - rtWidth - 64, height - rtWidth - 64, rtWidth, rtWidth, rtWidth, rtWidth);
      LOWORD(v22) = outputImage->height;
      v21 = r_hdrScopesOverlayPanelSize;
    }
    v24 = (int)(float)((float)outputImage->width * v21->current.value);
    v25 = (int)(float)((float)(unsigned __int16)v22 * v21->current.value);
    if ( v24 && v25 && r_hdrScopesDrawHeatMap->current.enabled )
      R_HDRScopes_InitStateAddPanel(state, HDR_SCOPES_PANEL_TYPE_HEATMAP, 64, height - v25 - 64, v24, v25, v24, v25);
  }
}

/*
==============
R_HDRScopes_InitStateAddPanel
==============
*/
void R_HDRScopes_InitStateAddPanel(HDRScopesState *state, HdrScopesPanelType panelType, int x, int y, int width, int height, int rtWidth, int rtHeight)
{
  __int64 panelCount; 
  HDRScopesPanel *v14; 
  R_RT_Handle v15; 
  R_RT_Handle *v16; 
  const char *name; 
  __int64 depth; 
  char *location; 
  R_RT_Handle v21; 
  R_RT_Handle v22; 
  R_RT_Handle result; 

  if ( state->panelCount >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 324, ASSERT_TYPE_ASSERT, "(state->panelCount < 4)", (const char *)&queryFormat, "state->panelCount < HDR_SCOPES_MAX_PANEL_COUNT") )
    __debugbreak();
  panelCount = state->panelCount;
  v14 = &state->panels[panelCount];
  state->panelCount = panelCount + 1;
  v14->rect.width = width;
  v14->rect.height = height;
  v14->panelType = panelType;
  v14->rect.x = x;
  v14->rect.y = y;
  switch ( panelType )
  {
    case HDR_SCOPES_PANEL_TYPE_IMAGE:
      location = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(351)";
      name = "HdrScopesResize";
      goto LABEL_19;
    case HDR_SCOPES_PANEL_TYPE_HEATMAP:
      location = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(347)";
      name = "HdrScopesHeatMap";
LABEL_19:
      v16 = R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, location);
LABEL_20:
      v15 = *v16;
      v22 = v15;
      v21 = v15;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v21);
        if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          goto LABEL_13;
        goto LABEL_26;
      }
LABEL_21:
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v15 = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
      goto LABEL_14;
    case HDR_SCOPES_PANEL_TYPE_WAVEFORM:
      v16 = R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[33], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "HdrScopesWaveform", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(339)");
      goto LABEL_20;
    case HDR_SCOPES_PANEL_TYPE_CIE_PLOT:
      v15 = *R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[34], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "HdrScopesCIEPlot", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(343)");
      v22 = v15;
      v21 = v15;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v21);
        if ( (R_RT_Handle::GetSurface(&v21)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
LABEL_13:
          v15 = v21;
LABEL_14:
          v14->rt = (R_RT_ColorHandle)v15;
          return;
        }
LABEL_26:
        v15 = v21;
        __debugbreak();
        goto LABEL_14;
      }
      goto LABEL_21;
  }
  LODWORD(depth) = panelType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 355, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", depth) )
    __debugbreak();
}

/*
==============
R_HDRScopes_ProcessImage
==============
*/
void R_HDRScopes_ProcessImage(ComputeCmdBufState *computeState, HdrScopesPanelType type, HdrScopesColorimetry srcColorimetry, float radiometricScale, HdrScopesColorimetry dstColorimetry, const GfxImage *srcImage, const GfxImage *outputImage)
{
  int width; 
  int height; 
  const GfxTexture *Resident; 
  double DisplayHdrUiMaxLuminance; 
  const GfxTexture *v14; 
  GfxTexture *textures[2]; 
  int data[12]; 

  width = outputImage->width;
  height = outputImage->height;
  R_SetComputeShader(computeState, rgp.hdrScopesProcessShader);
  Resident = R_Texture_GetResident(outputImage->textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  textures[0] = (GfxTexture *)R_Texture_GetResident(outputImage->textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(srcImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  data[2] = dstColorimetry;
  data[4] = outputImage->width;
  data[5] = outputImage->height;
  *(float *)&data[8] = radiometricScale;
  data[0] = type;
  data[1] = srcColorimetry;
  DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
  data[9] = SLODWORD(DisplayHdrUiMaxLuminance);
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  v14 = R_Texture_GetResident(outputImage->textureId);
  R_HW_AddResourceTransition(computeState, v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
}

/*
==============
R_HDRScopes_RegisterDvars
==============
*/
void R_HDRScopes_RegisterDvars(void)
{
  r_hdrScopesRenderStage = Dvar_RegisterEnum("LMTNKKMOOL", s_hdrScopesStageNames, 0, 4u, "HDR Scope Render Stage.");
  r_hdrScopesLayout = Dvar_RegisterEnum("LPTQNTTONN", s_hdrScopesLayoutNames, 0, 4u, "HDR Scope Screen Layout.");
  r_hdrScopesDrawWaveform = Dvar_RegisterBool("SKTPQOKSS", 1, 4u, "Draw the waveform HDR scope.");
  r_hdrScopesResizeScreen = Dvar_RegisterBool("MNOTQLPSMP", 1, 4u, "Resize the game screen when HDR scopes active.");
  r_hdrScopesDrawCiePlot = Dvar_RegisterBool("LKORQOKNPP", 1, 4u, "Draw the CIE plot HDR scope.");
  r_hdrScopesDrawHeatMap = Dvar_RegisterBool("MOOSMMPNTT", 1, 4u, "Draw the heatmap HDR scope.");
  r_hdrScopesOverlaySplit = Dvar_RegisterFloat("LLTQKMMTPP", 0.25, 0.0, 1.0, 4u, "Horizontal split position for HDR scopes in overlay mode.");
  r_hdrScopesOverlayPanelSize = Dvar_RegisterFloat("MKSRSSLKLK", 0.25, 0.0, 0.5, 4u, "Panel size for HDR scopes in overlay mode.");
  r_hdrScopesUserValue = Dvar_RegisterFloat("OLSQTQRPTN", 0.0, 0.0, 1.0, 4u, "User defined line on HDR scopes waveform plot.");
}

