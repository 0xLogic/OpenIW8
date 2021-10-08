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
  __int64 v21; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v24; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v26; 
  __int64 panelCount; 
  R_RT_ColorHandle *p_rt; 
  unsigned int m_allocCounter; 
  R_RT_Image *outputImage; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v33; 
  GfxImage *srcImage; 
  R_RT_Handle v37; 
  char v38; 
  __int16 v39; 
  int v40; 
  __int16 v42; 
  int v43; 
  __int128 v44; 
  ComputeCmdBufState state; 

  activeStage = s_hdrScopes.state.activeStage;
  _R12 = srcRt;
  _RBX = gfxContext;
  if ( s_hdrScopes.state.activeStage == HDR_SCOPES_STAGE_NONE )
  {
    activeStage = r_hdrScopesRenderStage->current.integer;
    s_hdrScopes.state.activeStage = activeStage;
  }
  if ( currentStage == activeStage )
  {
    R_LockGfxImmediateContext();
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rbp+0A60h+var_A68], xmm0
      vmovdqu [rbp+0A60h+var_A48], xmm0
    }
    _RCX = &state;
    v38 = 0;
    _RAX = &v38;
    v39 = 0;
    v40 = 0;
    v42 = 0;
    v43 = 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    v21 = *((_QWORD *)&v44 + 1);
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    *(_QWORD *)&state.constants[0][7].bufferSize = v21;
    __asm { vmovups xmmword ptr [rsp+0B60h+var_B20], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v37, (const R_RT_Group *)&state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(523)");
    R_InitGfxComputeCmdBufState(&state, _RBX->state);
    R_ProfBeginNamedEvent(&state, "R_HDRScopes_Analyze");
    R_GPU_BeginTimer(GPU_TIMER_HDR_SCOPES);
    __asm
    {
      vmovups ymm0, ymmword ptr [r12]
      vmovups [rsp+0B60h+var_B20], ymm0
    }
    R_HW_AddResourceTransition(&state, &v37, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    Surface = R_RT_Handle::GetSurface(dstRt);
    v24 = R_RT_Handle::GetSurface(_R12);
    R_HDRScopes_InitState(&s_hdrScopes.state, viewInfo, &v24->m_image.m_base, &Surface->m_image.m_base, currentStage);
    p_m_image = NULL;
    v26 = NULL;
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
              v31 = R_RT_Handle::GetSurface(_R12);
              __asm { vmovss  xmm3, cs:?s_hdrScopes@@3UGfxHdrScopesStaticData@@A.state.radiometricScale; radiometricScale }
              R_HDRScopes_ProcessImage(&state, HDR_SCOPES_PANEL_TYPE_HEATMAP, s_hdrScopes.state.srcColorimetry, *(float *)&_XMM3, s_hdrScopes.state.dstColorimetry, &v31->m_image.m_base, &outputImage->m_base);
              break;
            case 2u:
              p_m_image = &R_RT_Handle::GetSurface(p_rt)->m_image;
              break;
            case 3u:
              v26 = &R_RT_Handle::GetSurface(p_rt)->m_image;
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
      if ( p_m_image || v26 )
      {
        v33 = R_RT_Handle::GetSurface(_R12);
        __asm { vmovss  xmm2, cs:?s_hdrScopes@@3UGfxHdrScopesStaticData@@A.state.radiometricScale; radiometricScale }
        R_HDRScopes_AnalyzeScatter(&state, s_hdrScopes.state.srcColorimetry, *(float *)&_XMM2, &v33->m_image.m_base, &p_m_image->m_base, &v26->m_base);
      }
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [r12]
      vmovups [rsp+0B60h+var_B20], ymm0
    }
    R_HW_AddResourceTransition(&state, &v37, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  HDRScopesStage v12; 
  GfxCmdBufContext v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymm1, ymmword ptr [r8]
  }
  _R9 = &v16;
  __asm
  {
    vmovups ymmword ptr [rax-48h], ymm0
    vmovups xmm0, xmmword ptr [rcx]
  }
  _RSI = gfxContext;
  __asm
  {
    vmovups xmmword ptr [rax-58h], xmm0
    vmovups ymmword ptr [rax-28h], ymm1
  }
  RB_HDRScopes_Analyze(&v15, viewInfo, &v17, &v16, currentStage);
  if ( currentStage == HDR_SCOPES_STAGE_PRE_2D )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+88h+var_58], xmm0
    }
    RB_HDRScopes_Render(&v15, viewInfo, HDR_SCOPES_STAGE_PRE_2D);
    v12 = HDR_SCOPES_STAGE_SCENE;
  }
  else
  {
    if ( currentStage != HDR_SCOPES_STAGE_POST_2D )
      return;
    v12 = HDR_SCOPES_STAGE_POST_2D;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+88h+var_58], xmm0
  }
  RB_HDRScopes_Render(&v15, viewInfo, v12);
}

/*
==============
RB_HDRScopes_ProcessStageDisplay
==============
*/
void RB_HDRScopes_ProcessStageDisplay(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *srcRt, HDRScopesStage currentStage)
{
  __int32 v12; 
  HDRScopesStage v13; 
  GfxCmdBufContext v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_ColorHandle v19; 

  _RBP = gfxContext;
  _RBX = srcRt;
  _RAX = R_RT_GetGlobalColor(&v19, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm1, ymmword ptr [rbx]
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0A8h+var_68], ymm0
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups [rsp+0A8h+var_78], xmm0
    vmovups [rsp+0A8h+var_48], ymm1
  }
  RB_HDRScopes_Analyze(&v16, viewInfo, &v18, &v17, currentStage);
  v12 = currentStage - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      return;
    v13 = HDR_SCOPES_STAGE_POST_2D;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups [rsp+0A8h+var_78], xmm0
    }
    RB_HDRScopes_Render(&v16, viewInfo, HDR_SCOPES_STAGE_PRE_2D);
    v13 = HDR_SCOPES_STAGE_SCENE;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups [rsp+0A8h+var_78], xmm0
  }
  RB_HDRScopes_Render(&v16, viewInfo, v13);
}

/*
==============
RB_HDRScopes_Render
==============
*/
void RB_HDRScopes_Render(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, HDRScopesStage currentStage)
{
  GfxCmdBufState *v8; 
  __int64 panelCount; 
  R_RT_Image *p_m_image; 
  HDRScopesPanel *panels; 
  __int64 v13; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *v23; 
  __int64 v41; 
  GfxCmdBufSourceState *v42; 
  HDRScopesRect *p_rect; 
  int v44; 
  HdrScopesPanelType v45; 
  const R_RT_Surface *v46; 
  HdrScopesColorimetry srcColorimetry; 
  const R_RT_Surface *v48; 
  GfxCmdBufState *v49; 
  __int64 v53; 
  unsigned __int16 m_surfaceID; 
  HdrScopesColorimetry dstColorimetry; 
  GfxImage *srcImage; 
  R_RT_Image *srcImagea; 
  const HDRScopesRect *v61; 
  R_RT_Handle v62; 
  R_RT_Handle result_8; 
  R_RT_Handle v65; 
  char v66; 
  __int64 v69; 
  ComputeCmdBufState state; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = gfxContext;
  if ( currentStage == s_hdrScopes.state.activeStage && s_hdrScopes.state.panelCount )
  {
    __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
    R_LockGfxImmediateContext();
    R_RT_GetGlobalColor((R_RT_ColorHandle *)&result_8, R_RENDERTARGET_DISPLAY_BUFFER);
    v8 = _RSI->state;
    R_ProfBeginNamedEvent(v8, "R_HDRScopes_Render");
    R_GPU_BeginTimer(GPU_TIMER_HDR_SCOPES);
    panelCount = s_hdrScopes.state.panelCount;
    p_m_image = NULL;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8]
      vmovups [rbp+0AD0h+var_B50], ymm0
    }
    if ( s_hdrScopes.state.panelCount > 0 )
    {
      panels = s_hdrScopes.state.panels;
      v13 = s_hdrScopes.state.panelCount;
      do
      {
        if ( panels->panelType == HDR_SCOPES_PANEL_TYPE_IMAGE )
          p_m_image = &R_RT_Handle::GetSurface(&panels->rt)->m_image;
        ++panels;
        --v13;
      }
      while ( v13 );
      if ( p_m_image )
      {
        R_InitGfxComputeCmdBufState(&state, v8);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8]
          vmovups ymmword ptr [rsp+0BD0h+var_B98.state], ymm0
        }
        R_HW_AddResourceTransition(&state, &v62, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(&state);
        Surface = R_RT_Handle::GetSurface(&result_8);
        __asm { vmovss  xmm3, cs:__real@3f800000; radiometricScale }
        R_HDRScopes_ProcessImage(&state, HDR_SCOPES_PANEL_TYPE_IMAGE, HDR_SCOPES_COLORIMETRY_UNKNOWN, *(float *)&_XMM3, HDR_SCOPES_COLORIMETRY_UNKNOWN, &Surface->m_image.m_base, &p_m_image->m_base);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8]
          vmovups ymmword ptr [rsp+0BD0h+var_B98.state], ymm0
        }
        R_HW_AddResourceTransition(&state, &v62, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(&state);
      }
    }
    source = _RSI->source;
    R_InitCmdBufSourceState(_RSI->source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(v8->device);
      R_InitCmdBufState(v8);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v62);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rdx, xmm0, 1; in
      }
      if ( v8 != _RDX )
        GfxCmdBufState::Copy(v8, _RDX);
    }
    memset_0(v8->perPrimConstantState, 255, sizeof(v8->perPrimConstantState));
    memset_0(v8->perObjectConstantState, 255, sizeof(v8->perObjectConstantState));
    memset_0(v8->stableConstantState, 255, sizeof(v8->stableConstantState));
    __asm { vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8] }
    v8->data = source->input.data;
    __asm { vmovups ymmword ptr [rsp+0BD0h+var_B98.state], ymm0 }
    height = R_RT_Handle::GetSurface(&v62)->m_image.m_base.height;
    v23 = R_RT_Handle::GetSurface(&v62);
    R_SetRenderTargetSize(source, v23->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8]
      vmovups xmm6, xmmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+0BD0h+var_B98.state], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v62);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0BD0h+var_B98.state]
        vmovups [rbp+0AD0h+var_B50], ymm0
      }
    }
    else
    {
      if ( result_8.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0BD0h+result+18h], xmm0
      vmovups ymm0, [rbp+0AD0h+var_B50]
      vmovd   eax, xmm0
    }
    result_8.m_surfaceID = 0;
    result_8.m_tracking.m_allocCounter = 0;
    v66 = 1;
    __asm { vmovups ymmword ptr [rbp+0AD0h+var_B30.m_surfaceID], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v65);
    }
    else
    {
      if ( v62.m_tracking.m_allocCounter != (unsigned __int16)_EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rbp+0AD0h+var_B50]
      vmovups [rbp+0AD0h+var_B08], ymm0
      vmovups ymm0, ymmword ptr [rsp+0BD0h+result+8]
      vmovups [rbp+0AD0h+var_A88], ymm0
    }
    _RCX = &state;
    _RAX = &v66;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v41 = v69;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    *(_QWORD *)&state.constants[0][7].bufferSize = v41;
    __asm { vmovdqa xmmword ptr [rsp+0BD0h+var_B98.state], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v62, (const R_RT_Group *)&state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(642)");
    v42 = _RSI->source;
    R_SetViewportStruct(_RSI->source, &viewInfo->displayViewport);
    if ( panelCount > 0 )
    {
      p_rect = &s_hdrScopes.state.panels[0].rect;
      while ( 1 )
      {
        v44 = p_rect[-1].height;
        if ( !v44 )
          break;
        switch ( v44 )
        {
          case 1:
            v48 = R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y);
            srcColorimetry = s_hdrScopes.state.srcColorimetry;
            v61 = p_rect;
            v45 = HDR_SCOPES_PANEL_TYPE_IMAGE;
            srcImagea = &v48->m_image;
            dstColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
            break;
          case 2:
            v46 = R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y);
            srcColorimetry = s_hdrScopes.state.srcColorimetry;
            v61 = p_rect;
            v45 = HDR_SCOPES_PANEL_TYPE_WAVEFORM;
            srcImagea = &v46->m_image;
            dstColorimetry = s_hdrScopes.state.dstColorimetry;
            break;
          case 3:
            v61 = p_rect;
            srcImagea = &R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y)->m_image;
            v45 = HDR_SCOPES_PANEL_TYPE_CIE_PLOT;
            dstColorimetry = s_hdrScopes.state.dstColorimetry;
            goto LABEL_40;
          default:
            LODWORD(srcImage) = p_rect[-1].height;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 669, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", srcImage) )
              __debugbreak();
            goto LABEL_42;
        }
LABEL_41:
        __asm { vmovups xmmword ptr [rsp+0BD0h+var_B98.state], xmm6 }
        RB_HDRScopes_RenderPanel((GfxCmdBufContext *)&v62, viewInfo, v45, srcColorimetry, dstColorimetry, &srcImagea->m_base, v61);
LABEL_42:
        p_rect = (HDRScopesRect *)((char *)p_rect + 56);
        if ( !--panelCount )
        {
          v42 = _RSI->source;
          goto LABEL_44;
        }
      }
      v61 = p_rect;
      srcImagea = &R_RT_Handle::GetSurface((R_RT_Handle *)&p_rect[1].y)->m_image;
      v45 = HDR_SCOPES_PANEL_TYPE_IMAGE;
      dstColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
LABEL_40:
      srcColorimetry = HDR_SCOPES_COLORIMETRY_UNKNOWN;
      goto LABEL_41;
    }
LABEL_44:
    __asm { vmovups xmmword ptr [rsp+0BD0h+var_B98.state], xmm6 }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v62);
    v49 = _RSI->state;
    R_ResetRenderTargets(v49);
    if ( (*((_BYTE *)&v42->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(v49);
      R_UnlockIfGfxImmediateContext(v49->device);
    }
    else
    {
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v62);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rcx, xmm0, 1; out
      }
      if ( v49 != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, v49);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v49);
    v53 = s_hdrScopes.state.panelCount;
    if ( s_hdrScopes.state.panelCount > 0 )
    {
      _RBX = &s_hdrScopes.state.panels[0].rt;
      do
      {
        m_surfaceID = _RBX->m_surfaceID;
        if ( _RBX->m_surfaceID )
        {
          R_RT_Handle::GetSurface(_RBX);
        }
        else if ( _RBX->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        {
          __debugbreak();
        }
        if ( m_surfaceID )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rbp+0AD0h+var_B30.m_surfaceID], ymm0
            vmovdqa xmmword ptr [rsp+0BD0h+var_B98.state], xmm6
          }
          R_RT_Destroy((GfxCmdBufContext *)&v62, (R_RT_ColorHandle *)&v65);
          _RBX->m_surfaceID = 0;
          _RBX->m_tracking.m_allocCounter = 0;
          _RBX->m_tracking.m_name = NULL;
          _RBX->m_tracking.m_location = NULL;
        }
        _RBX = (R_RT_ColorHandle *)((char *)_RBX + 56);
        --v53;
      }
      while ( v53 );
    }
    R_UnlockGfxImmediateContext();
    __asm { vmovaps xmm6, [rsp+0BD0h+var_48+8] }
    s_hdrScopes.state.activeStage = HDR_SCOPES_STAGE_NONE;
  }
}

/*
==============
RB_HDRScopes_RenderPanel
==============
*/
void RB_HDRScopes_RenderPanel(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, HdrScopesPanelType panelType, HdrScopesColorimetry srcColorimetry, HdrScopesColorimetry dstColorimetry, const GfxImage *srcImage)
{
  Material *hdrScopesRenderHeatmapMaterial; 
  GfxCmdBufInput *p_input; 
  float fmt; 
  __int64 v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  GfxCmdBufContext v60[7]; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _R14 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm10, xmm10, dword ptr [rax]
    vcvtsi2ss xmm11, xmm11, dword ptr [rax+4]
    vcvtsi2ss xmm8, xmm8, dword ptr [rax+8]
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, dword ptr [rax+0Ch]
    vmovups [rsp+0D8h+var_78], xmm0
  }
  RB_EndSurfaceIfNeeded(v60);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0D8h+var_78], xmm0
  }
  RB_SetUIColorimetryParams(v60);
  _RBX = _R14->source;
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+0D8h+arg_20]
    vmovss  dword ptr [rbx+1004h], xmm1
    vmovss  dword ptr [rbx+1008h], xmm8
    vmovss  dword ptr [rbx+100Ch], xmm9
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmovss  dword ptr [rbx+1000h], xmm0
  }
  ++_RBX->constVersions[144];
  _RAX = r_hdrScopesUserValue;
  __asm
  {
    vmovaps xmm1, xmm6
    vmovss  xmm7, dword ptr [rax+28h]
  }
  if ( srcColorimetry == HDR_SCOPES_COLORIMETRY_BT2020_PQ )
  {
    _RAX = R_GetHdrDisplayMappingParams((GfxDisplayMappingParams *)v60);
    __asm { vmovsd  xmm0, qword ptr [rax] }
    *(float *)&v60[0].state = _RAX->maxLuminance;
    __asm { vmovss  xmm6, dword ptr [rsp+0D8h+var_78+8] }
LABEL_5:
    __asm
    {
      vmovsd  qword ptr [rsp+0D8h+var_78], xmm0
      vshufps xmm1, xmm0, xmm0, 55h ; 'U'
    }
    goto LABEL_6;
  }
  if ( srcColorimetry == HDR_SCOPES_COLORIMETRY_BT709_SRGB )
  {
    _RAX = R_GetSdrDisplayMappingParams((GfxDisplayMappingParams *)v60);
    __asm { vmovsd  xmm0, qword ptr [rax] }
    *(float *)&v60[0].state = _RAX->maxLuminance;
    goto LABEL_5;
  }
LABEL_6:
  hdrScopesRenderHeatmapMaterial = NULL;
  _RBX->input.consts[145].v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+1010h], xmm7
    vmovss  dword ptr [rbx+1014h], xmm1
    vmovss  dword ptr [rbx+1018h], xmm6
  }
  ++_RBX->constVersions[145];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RBX->input;
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
        LODWORD(v54) = panelType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 315, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid panel type %d", v54) )
          __debugbreak();
        break;
    }
  }
  else
  {
    hdrScopesRenderHeatmapMaterial = rgp.hdrScopesRenderImageMaterial;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vxorps  xmm1, xmm1, xmm1
    vmovups [rsp+0D8h+var_78], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0D8h+var_90], xmm0
    vmovss  [rsp+0D8h+var_98], xmm0
    vmovss  [rsp+0D8h+var_A0], xmm1
    vmovss  [rsp+0D8h+var_A8], xmm1
    vmovss  dword ptr [rsp+0D8h+var_B0], xmm9
    vmovaps xmm3, xmm11
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+0D8h+fmt], xmm8
  }
  RB_DrawStretchPic(v60, hdrScopesRenderHeatmapMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v55, v56, v57, v58, v59, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
R_HDRScopes_AnalyzeScatter
==============
*/

void __fastcall R_HDRScopes_AnalyzeScatter(ComputeCmdBufState *computeState, HdrScopesColorimetry srcColorimetry, double radiometricScale, const GfxImage *srcImage, const GfxImage *waveformImage, const GfxImage *ciePlotImage)
{
  unsigned int height; 
  unsigned int width; 
  const GfxTexture *Resident; 
  unsigned int v16; 
  unsigned int v17; 
  const GfxTexture *v18; 
  const GfxTexture *v19; 
  const GfxTexture *v20; 
  GfxTextureId textureId; 
  GfxTextureId v22; 
  const GfxTexture *v24; 
  const GfxTexture *v25; 
  GfxTexture *textures; 
  vec4_t color; 
  int data[8]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmm6, xmm2
    vmovups xmmword ptr [rsp+0E8h+color], xmm0
  }
  if ( waveformImage )
  {
    height = waveformImage->height;
    width = waveformImage->width;
    Resident = R_Texture_GetResident(waveformImage->textureId);
    R_SetTextureRect(computeState, Resident, &color, 0, 0, width, height);
  }
  if ( ciePlotImage )
  {
    v16 = ciePlotImage->height;
    v17 = ciePlotImage->width;
    v18 = R_Texture_GetResident(ciePlotImage->textureId);
    R_SetTextureRect(computeState, v18, &color, 0, 0, v17, v16);
  }
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(computeState, rgp.hdrScopesScatterShader);
  if ( waveformImage )
  {
    v19 = R_Texture_GetResident(waveformImage->textureId);
    R_HW_AddResourceTransition(computeState, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  if ( ciePlotImage )
  {
    v20 = R_Texture_GetResident(ciePlotImage->textureId);
    R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  if ( waveformImage )
    textureId = waveformImage->textureId;
  else
    textureId = ciePlotImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  if ( ciePlotImage )
    v22 = ciePlotImage->textureId;
  else
    v22 = waveformImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(v22);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(srcImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  data[0] = srcColorimetry;
  data[1] = waveformImage != NULL;
  data[2] = ciePlotImage != NULL;
  __asm { vmovss  [rsp+0E8h+var_78], xmm6 }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  R_Dispatch(computeState, ((unsigned int)srcImage->width + 7) >> 3, ((unsigned int)srcImage->height + 7) >> 3, 1u);
  __asm { vmovaps xmm6, [rsp+0E8h+var_58] }
  if ( waveformImage )
  {
    v24 = R_Texture_GetResident(waveformImage->textureId);
    R_HW_AddResourceTransition(computeState, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  if ( ciePlotImage )
  {
    v25 = R_Texture_GetResident(ciePlotImage->textureId);
    R_HW_AddResourceTransition(computeState, v25, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  int v10; 
  int integer; 
  int v13; 
  bool enabled; 
  int rtHeight; 
  bool v20; 
  int height; 
  int width; 
  unsigned __int16 v23; 
  int rtWidth; 
  int v36; 
  int v37; 

  _RDI = viewInfo;
  _RBP = state;
  v9 = 0;
  v10 = R_GetFramebufferColorimetry() == GFX_COLORIMETRY_BT2020_PQ;
  _RBP->dstColorimetry = v10;
  if ( stage == HDR_SCOPES_STAGE_SCENE )
    v10 = 2;
  _RBP->srcColorimetry = v10;
  if ( v10 == 2 )
    __asm { vmovss  xmm0, dword ptr [rdi+1B50h] }
  else
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  __asm { vmovss  dword ptr [rbp+0Ch], xmm0 }
  _RBP->panelCount = 0;
  integer = r_hdrScopesLayout->current.integer;
  if ( integer )
  {
    if ( integer == 1 )
    {
      v36 = outputImage->width >> 1;
      v37 = outputImage->height >> 1;
      if ( r_hdrScopesResizeScreen->current.enabled )
        R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_IMAGE, 0, 0, v36, v37, v36, outputImage->height >> 1);
      if ( r_hdrScopesDrawWaveform->current.enabled )
        R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_WAVEFORM, 0, outputImage->height >> 1, v36, v37, v36, v37);
      if ( r_hdrScopesDrawCiePlot->current.enabled )
        R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_CIE_PLOT, outputImage->width >> 1, 0, v36, v37, v36, v37);
      if ( r_hdrScopesDrawHeatMap->current.enabled )
        R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_HEATMAP, outputImage->width >> 1, outputImage->height >> 1, v36, v37, v36, v37);
    }
  }
  else
  {
    v13 = 1024;
    enabled = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm0, xmm0, dword ptr [rax+28h]
      vcvttss2si eax, xmm0
    }
    rtHeight = 0;
    if ( _EAX < 1024 )
      v13 = _EAX;
    if ( v13 )
      enabled = r_hdrScopesDrawWaveform->current.enabled;
    if ( enabled )
      rtHeight = v13;
    v20 = 0;
    height = outputImage->height - rtHeight;
    if ( enabled )
      v20 = r_hdrScopesResizeScreen->current.enabled;
    if ( v20 )
      R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_IMAGE, 0, 0, outputImage->width, height, outputImage->width, height);
    if ( enabled )
    {
      width = outputImage->width;
      v23 = width;
      if ( (unsigned __int16)width > srcImage->width )
        v23 = srcImage->width;
      R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_WAVEFORM, 0, height, width, rtHeight, v23, rtHeight);
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8d
      vmulss  xmm0, xmm0, dword ptr [r9+28h]
      vcvttss2si edx, xmm0
    }
    if ( rtWidth )
      v9 = r_hdrScopesDrawCiePlot->current.enabled;
    if ( v9 )
      R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_CIE_PLOT, outputImage->width - rtWidth - 64, height - rtWidth - 64, rtWidth, rtWidth, rtWidth, rtWidth);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [r9+28h]
      vcvttss2si ecx, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [r9+28h]
      vcvttss2si eax, xmm1
    }
    if ( _ECX && _EAX && r_hdrScopesDrawHeatMap->current.enabled )
      R_HDRScopes_InitStateAddPanel(_RBP, HDR_SCOPES_PANEL_TYPE_HEATMAP, 64, height - _EAX - 64, _ECX, _EAX, _ECX, _EAX);
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
  const char *name; 
  __int64 depth; 
  char *location; 
  R_RT_Handle v23; 
  R_RT_Handle result; 

  if ( state->panelCount >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp", 324, ASSERT_TYPE_ASSERT, "(state->panelCount < 4)", (const char *)&queryFormat, "state->panelCount < HDR_SCOPES_MAX_PANEL_COUNT") )
    __debugbreak();
  panelCount = state->panelCount;
  _RBX = &state->panels[panelCount];
  state->panelCount = panelCount + 1;
  _RBX->rect.width = width;
  _RBX->rect.height = height;
  _RBX->panelType = panelType;
  _RBX->rect.x = x;
  _RBX->rect.y = y;
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
      _RAX = R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, location);
LABEL_20:
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+37h+var_50], ymm0
        vmovups ymmword ptr [rbp+37h+var_70.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v23);
        if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          goto LABEL_13;
        goto LABEL_26;
      }
LABEL_21:
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, [rbp+37h+var_50] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
      goto LABEL_14;
    case HDR_SCOPES_PANEL_TYPE_WAVEFORM:
      _RAX = R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[33], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "HdrScopesWaveform", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(339)");
      goto LABEL_20;
    case HDR_SCOPES_PANEL_TYPE_CIE_PLOT:
      _RAX = R_RT_CreateInternal(&result, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[34], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)1, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "HdrScopesCIEPlot", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_scopes.cpp(343)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+37h+var_50], ymm0
        vmovups ymmword ptr [rbp+37h+var_70.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v23);
        if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) == 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
LABEL_13:
          __asm { vmovups ymm0, ymmword ptr [rbp+37h+var_70.m_surfaceID] }
LABEL_14:
          __asm { vmovups ymmword ptr [rbx+18h], ymm0 }
          return;
        }
LABEL_26:
        __asm { vmovups ymm0, ymmword ptr [rbp+37h+var_70.m_surfaceID] }
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

void __fastcall R_HDRScopes_ProcessImage(ComputeCmdBufState *computeState, HdrScopesPanelType type, HdrScopesColorimetry srcColorimetry, double radiometricScale, HdrScopesColorimetry dstColorimetry, const GfxImage *srcImage, const GfxImage *outputImage)
{
  int width; 
  int height; 
  const GfxTexture *Resident; 
  const GfxTexture *v16; 
  GfxTexture *textures[2]; 
  int data[12]; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vmovaps xmm6, xmm3
  }
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
  __asm { vmovss  [rsp+0C8h+var_68], xmm6 }
  data[0] = type;
  data[1] = srcColorimetry;
  *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
  __asm { vmovss  [rsp+0C8h+var_64], xmm0 }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  v16 = R_Texture_GetResident(outputImage->textureId);
  R_HW_AddResourceTransition(computeState, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
}

/*
==============
R_HDRScopes_RegisterDvars
==============
*/

void __fastcall R_HDRScopes_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v6; 
  const dvar_t *v10; 

  r_hdrScopesRenderStage = Dvar_RegisterEnum("LMTNKKMOOL", s_hdrScopesStageNames, 0, 4u, "HDR Scope Render Stage.");
  r_hdrScopesLayout = Dvar_RegisterEnum("LPTQNTTONN", s_hdrScopesLayoutNames, 0, 4u, "HDR Scope Screen Layout.");
  r_hdrScopesDrawWaveform = Dvar_RegisterBool("SKTPQOKSS", 1, 4u, "Draw the waveform HDR scope.");
  r_hdrScopesResizeScreen = Dvar_RegisterBool("MNOTQLPSMP", 1, 4u, "Resize the game screen when HDR scopes active.");
  r_hdrScopesDrawCiePlot = Dvar_RegisterBool("LKORQOKNPP", 1, 4u, "Draw the CIE plot HDR scope.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3e800000; value
  }
  r_hdrScopesDrawHeatMap = Dvar_RegisterBool("MOOSMMPNTT", 1, 4u, "Draw the heatmap HDR scope.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v6 = Dvar_RegisterFloat("LLTQKMMTPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Horizontal split position for HDR scopes in overlay mode.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000; max
    vmovss  xmm1, cs:__real@3e800000; value
  }
  r_hdrScopesOverlaySplit = v6;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v10 = Dvar_RegisterFloat("MKSRSSLKLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Panel size for HDR scopes in overlay mode.");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  r_hdrScopesOverlayPanelSize = v10;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_hdrScopesUserValue = Dvar_RegisterFloat("OLSQTQRPTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "User defined line on HDR scopes waveform plot.");
}

