/*
==============
R_SMAA_TemporalSupersampling
==============
*/

void __fastcall R_SMAA_TemporalSupersampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *colorRts, R_RT_ColorHandle *srcLumaRt, const R_RT_ColorHandle *lumaRts, const R_RT_ColorHandle *velocityRts, R_RT_ColorHandle *filmicHistoryRt, R_RT_ColorHandle *transMaskRts)
{
  ?R_SMAA_TemporalSupersampling@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBVR_RT_ColorHandle@@V3@223PEAV3@@Z(gfxContext, viewInfo, colorRts, srcLumaRt, lumaRts, velocityRts, filmicHistoryRt, transMaskRts);
}

/*
==============
R_ShutdownSMAATemporal
==============
*/

void R_ShutdownSMAATemporal(void)
{
  ?R_ShutdownSMAATemporal@@YAXXZ();
}

/*
==============
R_SMAA_MorphologicalAntialiasingResolve
==============
*/

void __fastcall R_SMAA_MorphologicalAntialiasingResolve(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *smaaIndirectBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  ?R_SMAA_MorphologicalAntialiasingResolve@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@11@Z(computeState, smaaIndirectBuffer, smaaMorphologicalWorkQueueHBuffer, smaaMorphologicalWorkQueueVBuffer);
}

/*
==============
RB_SMAA_ComputeTransMask
==============
*/

void __fastcall RB_SMAA_ComputeTransMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *postOpaqueLumaRt)
{
  ?RB_SMAA_ComputeTransMask@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAVR_RT_ColorHandle@@2@Z(gfxContext, viewInfo, mainSceneColorRt, postOpaqueLumaRt);
}

/*
==============
R_SMAA_FilmicFiltering
==============
*/

void __fastcall R_SMAA_FilmicFiltering(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *filmicTmpRt, const R_RT_ColorHandle *velocityRts, R_RT_ColorHandle *filmicHistoryRt, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *transMaskRts)
{
  ?R_SMAA_FilmicFiltering@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@PEBV3@22PEAV3@@Z(gfxContext, viewInfo, filmicTmpRt, velocityRts, filmicHistoryRt, srcColorRt, transMaskRts);
}

/*
==============
RB_PostOpaqueLumaBlit
==============
*/

void __fastcall RB_PostOpaqueLumaBlit(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *postOpaqueLumaRt)
{
  ?RB_PostOpaqueLumaBlit@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAVR_RT_ColorHandle@@2@Z(gfxContext, viewInfo, mainSceneColorRt, postOpaqueLumaRt);
}

/*
==============
RB_PostOpaqueProcessesLuma
==============
*/

void __fastcall RB_PostOpaqueProcessesLuma(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *postOpaqueLumaRt, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *fullFloatZ, GfxImage *volScatterImage, GfxImage *volExtinctionImage)
{
  ?RB_PostOpaqueProcessesLuma@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22PEAUGfxImage@@3@Z(computeState, viewInfo, postOpaqueLumaRt, mainSceneColorRt, fullFloatZ, volScatterImage, volExtinctionImage);
}

/*
==============
RB_ApplyPostAA
==============
*/

void __fastcall RB_ApplyPostAA(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_ApplyPostAA@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_SMAAComputeInitialize
==============
*/

void R_SMAAComputeInitialize(void)
{
  ?R_SMAAComputeInitialize@@YAXXZ();
}

/*
==============
R_SMAA_EdgeDetection
==============
*/

void __fastcall R_SMAA_EdgeDetection(ComputeCmdBufState *computeState, const unsigned int width, const unsigned int height, const GfxTexture *srcColorTex, const GfxTexture *lumaTex, const GfxTexture *smaaEdgesTex, const GfxTexture *vrsMaskTex, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  ?R_SMAA_EdgeDetection@@YAXPEAUComputeCmdBufState@@IIPEBUGfxTexture@@111PEBUGfxWrappedRWBuffer@@2@Z(computeState, width, height, srcColorTex, lumaTex, smaaEdgesTex, vrsMaskTex, smaaMorphologicalWorkQueueHBuffer, smaaMorphologicalWorkQueueVBuffer);
}

/*
==============
R_RunPostOpaqueProcessesLuma
==============
*/

void __fastcall R_RunPostOpaqueProcessesLuma(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *postOpaqueLumaRt, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *vrsMaskRt, R_RT_ColorHandle *fullFloatZ, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage)
{
  ?R_RunPostOpaqueProcessesLuma@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222PEBUGfxImage@@33@Z(computeState, viewInfo, postOpaqueLumaRt, mainSceneColorRt, vrsMaskRt, fullFloatZ, volScatterImage, volExtinctionImage, scopeImage);
}

/*
==============
R_PostAARequestVelocities
==============
*/

bool __fastcall R_PostAARequestVelocities(PostAAMode postAAMode)
{
  return ?R_PostAARequestVelocities@@YA_NW4PostAAMode@@@Z(postAAMode);
}

/*
==============
R_PostTransResolve
==============
*/

void __fastcall R_PostTransResolve(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *mainSceneColorRt, const R_RT_ColorHandle *mainSceneColorResolvedRt, const R_RT_ColorHandle *postOpaqueLumaRt, const GfxWrappedBuffer *stencilMask, const R_RT_ColorHandle *hudOutlineMask, const R_RT_ColorHandle *transMaskRt, const R_RT_ColorHandle *swVrsMaskRt, const bool transMaskResolve, const bool vrsInlineResolve)
{
  ?R_PostTransResolve@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@AEBVR_RT_ColorHandle@@22PEBUGfxWrappedBuffer@@222_N4@Z(computeState, viewInfo, mainSceneColorRt, mainSceneColorResolvedRt, postOpaqueLumaRt, stencilMask, hudOutlineMask, transMaskRt, swVrsMaskRt, transMaskResolve, vrsInlineResolve);
}

/*
==============
R_PostAARequestPreviousFrameVelocities
==============
*/

bool __fastcall R_PostAARequestPreviousFrameVelocities(PostAAMode postAAMode)
{
  return ?R_PostAARequestPreviousFrameVelocities@@YA_NW4PostAAMode@@@Z(postAAMode);
}

/*
==============
R_GetSMAAColorimetryInfo
==============
*/

vec4_t *__fastcall R_GetSMAAColorimetryInfo(vec4_t *result)
{
  return ?R_GetSMAAColorimetryInfo@@YA?ATvec4_t@@XZ(result);
}

/*
==============
R_SMAA_FreeTemporalRts
==============
*/

void R_SMAA_FreeTemporalRts(void)
{
  ?R_SMAA_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_Post_SetComputeConstants
==============
*/

void __fastcall R_Post_SetComputeConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const unsigned int width, const unsigned int height, const bool vrsInlineResolve)
{
  ?R_Post_SetComputeConstants@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@II_N@Z(computeState, viewInfo, width, height, vrsInlineResolve);
}

/*
==============
R_PostAARequestGradientAdjust
==============
*/

bool __fastcall R_PostAARequestGradientAdjust()
{
  return ?R_PostAARequestGradientAdjust@@YA_NXZ();
}

/*
==============
R_RunPostOpaqueLumaBlit
==============
*/

void __fastcall R_RunPostOpaqueLumaBlit(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt)
{
  ?R_RunPostOpaqueLumaBlit@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAVR_RT_ColorHandle@@@Z(gfxContext, viewInfo, mainSceneColorRt);
}

/*
==============
R_GetPostAAModeFromDvars
==============
*/

PostAAMode __fastcall R_GetPostAAModeFromDvars()
{
  return ?R_GetPostAAModeFromDvars@@YA?AW4PostAAMode@@XZ();
}

/*
==============
R_PostAAHasTemporalFiltering
==============
*/

bool __fastcall R_PostAAHasTemporalFiltering(PostAAMode postAAMode)
{
  return ?R_PostAAHasTemporalFiltering@@YA_NW4PostAAMode@@@Z(postAAMode);
}

/*
==============
R_SetPostAAInfo
==============
*/

void __fastcall R_SetPostAAInfo(GfxViewInfo *viewInfo)
{
  ?R_SetPostAAInfo@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_PostAAIsSMAA
==============
*/

bool __fastcall R_PostAAIsSMAA(PostAAMode postAAMode)
{
  return ?R_PostAAIsSMAA@@YA_NW4PostAAMode@@@Z(postAAMode);
}

/*
==============
R_GetSMAATemporalUpsampleMode
==============
*/

SMAATemporalUpsampleMode __fastcall R_GetSMAATemporalUpsampleMode(PostAAMode postAAMode, GfxResolutionStep step)
{
  return ?R_GetSMAATemporalUpsampleMode@@YA?AW4SMAATemporalUpsampleMode@@W4PostAAMode@@W4GfxResolutionStep@@@Z(postAAMode, step);
}

/*
==============
R_PostAAHasTemporalSupersampling
==============
*/

bool __fastcall R_PostAAHasTemporalSupersampling(PostAAMode postAAMode)
{
  return ?R_PostAAHasTemporalSupersampling@@YA_NW4PostAAMode@@@Z(postAAMode);
}

/*
==============
R_RunPostOpaqueProcesses
==============
*/

void __fastcall R_RunPostOpaqueProcesses(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *vrsMaskRt, R_RT_ColorHandle *fullFloatZ, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage)
{
  ?R_RunPostOpaqueProcesses@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22PEBUGfxImage@@33@Z(computeState, viewInfo, mainSceneColorRt, vrsMaskRt, fullFloatZ, volScatterImage, volExtinctionImage, scopeImage);
}

/*
==============
RB_PostOpaqueProcesses
==============
*/

void __fastcall RB_PostOpaqueProcesses(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *fullFloatZ, GfxImage *volScatterImage, GfxImage *volExtinctionImage)
{
  ?RB_PostOpaqueProcesses@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2PEAUGfxImage@@3@Z(computeState, viewInfo, mainSceneColorRt, fullFloatZ, volScatterImage, volExtinctionImage);
}

/*
==============
R_SMAA_MorphologicalAntialiasing
==============
*/

void __fastcall R_SMAA_MorphologicalAntialiasing(ComputeCmdBufState *computeState, const GfxTexture *smaaEdgesTex, const GfxTexture *srcColorTex, const GfxTexture *lumaTex, const GfxWrappedRWBuffer *smaaIndirectBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  ?R_SMAA_MorphologicalAntialiasing@@YAXPEAUComputeCmdBufState@@PEBUGfxTexture@@11PEBUGfxWrappedRWBuffer@@22@Z(computeState, smaaEdgesTex, srcColorTex, lumaTex, smaaIndirectBuffer, smaaMorphologicalWorkQueueHBuffer, smaaMorphologicalWorkQueueVBuffer);
}

/*
==============
RB_ApplyPostAA
==============
*/
void RB_ApplyPostAA(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  PostAAMode mode; 
  bool v9; 
  GfxCmdBufContext v10; 
  PostAAMode v11; 
  PostAAMode v12; 
  int v13; 
  int v14; 
  GfxCmdBufContext v15; 
  R_RT_ColorHandle m_transMask; 

  mode = viewInfo->postAA.mode;
  if ( mode )
  {
    if ( (unsigned int)(mode - 1) > 2 )
    {
      v12 = mode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 893, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(893): unhandled case %d in switch statement", v12) )
        __debugbreak();
    }
    else
    {
      _XMM6 = *gfxContext;
      R_GPU_BeginTimer(GPU_TIMER_POST_AA);
      __asm { vpextrq rbp, xmm6, 1 }
      R_ProfBeginNamedEvent(_RBP, "SMAA");
      if ( (unsigned int)(viewInfo->postAA.mode - 1) > 2 )
      {
        v14 = 3;
        v13 = 1;
        v11 = viewInfo->postAA.mode;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 663, ASSERT_TYPE_ASSERT, "( POST_AA_MODE_SMAA_1X ) <= ( viewInfo->postAA.mode ) && ( viewInfo->postAA.mode ) <= ( POST_AA_MODE_FILMIC_SMAA_T2X )", "viewInfo->postAA.mode not in [POST_AA_MODE_SMAA_1X, POST_AA_MODE_FILMIC_SMAA_T2X]\n\t%i not in [%i, %i]", v11, v13, v14) )
          __debugbreak();
      }
      v15 = _XMM6;
      RB_PerformPostSMAA_MorphologicalAntialiasing(&v15, viewInfo, activeGroup);
      v9 = viewInfo->postAA.mode < POST_AA_MODE_SMAA_T2X;
      v15 = _XMM6;
      if ( v9 )
        R_RT_DestroyAndClearGroup(&v15, &viewInfo->sceneRtInput.m_lumaGroup);
      else
        RB_PerformPostSMAA_TemporalSupersampling(&v15, viewInfo, activeGroup);
      R_ProfEndNamedEvent(_RBP);
      R_GPU_EndTimer();
    }
  }
  else
  {
    v15 = *gfxContext;
    R_RT_DestroyAndClearGroup(&v15, &viewInfo->sceneRtInput.m_lumaGroup);
  }
  v15 = *gfxContext;
  RB_RotateHalfVelocityRt(&v15, viewInfo);
  if ( rg.debugTextureOverlay != 14 )
  {
    v10 = *gfxContext;
    m_transMask = viewInfo->sceneRtInput.m_transMask;
    v15 = v10;
    R_RT_Destroy(&v15, &m_transMask);
    viewInfo->sceneRtInput.m_transMask.m_surfaceID = 0;
    viewInfo->sceneRtInput.m_transMask.m_tracking.m_allocCounter = 0;
    viewInfo->sceneRtInput.m_transMask.m_tracking.m_name = NULL;
    viewInfo->sceneRtInput.m_transMask.m_tracking.m_location = NULL;
  }
}

/*
==============
RB_PerformPostSMAA_MorphologicalAntialiasing
==============
*/
void RB_PerformPostSMAA_MorphologicalAntialiasing(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  GfxCmdBufState *v4; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  bool v9; 
  unsigned int width; 
  unsigned int m_allocWidth; 
  const R_RT_Surface *Surface; 
  const dvar_t *v14; 
  unsigned int m_allocHeight; 
  const dvar_t *v16; 
  R_RT_Flags rtFlags; 
  R_RT_Handle v18; 
  bool v20; 
  const R_RT_Surface *v21; 
  CmdBufState *Resident; 
  const R_RT_Surface *v23; 
  CmdBufState *v24; 
  const R_RT_Surface *v25; 
  CmdBufState *v26; 
  const GfxViewInfo *v27; 
  ComputeCmdBufState *v28; 
  GfxCmdBufContext v29; 
  CmdBufState *state[2]; 
  R_RT_Handle v31; 
  unsigned int height; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_Handle result; 
  R_RT_Handle v37; 

  v4 = gfxContext->state;
  if ( !R_IsLockedIfGfxImmediateContext(v4->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(v4);
  v9 = activeGroup->m_colorRtCount == 1;
  state[0] = GfxComputeCmdBufState;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v34 = (R_RT_Handle)activeGroup->m_colorRts[0];
  RB_CreateRenderTargetAlias((R_RT_ColorHandle *)&v37, (const R_RT_ColorHandle *)&v34, GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR, "SMAA MLAA Linear");
  if ( viewInfo->sceneRtInput.m_lumaGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v34 = (R_RT_Handle)viewInfo->sceneRtInput.m_lumaGroup.m_colorRts[0];
  v33 = v34;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v33);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 281, ASSERT_TYPE_ASSERT, "(lumaRt)", (const char *)&queryFormat, "lumaRt") )
      __debugbreak();
  }
  width = R_RT_Handle::GetSurface(&v37)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(&v37)->m_image.m_base.height;
  m_allocWidth = R_RT_Handle::GetSurface(&v37)->m_allocWidth;
  Surface = R_RT_Handle::GetSurface(&v37);
  v14 = r_deviceDebug;
  m_allocHeight = Surface->m_allocHeight;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    goto LABEL_25;
  v16 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v16->current.enabled )
LABEL_25:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v18 = *R_RT_CreateInternal(&result, width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[37], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "SMAA Edges", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(288)");
  v35 = v18;
  v31 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v18 = v31;
      v35 = v31;
      __debugbreak();
    }
    else
    {
      v18 = v31;
      v35 = v31;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v18 = v35;
      if ( v20 )
        __debugbreak();
    }
  }
  v31 = v18;
  v21 = R_RT_Handle::GetSurface(&v31);
  Resident = (CmdBufState *)R_Texture_GetResident(v21->m_image.m_base.textureId);
  v23 = R_RT_Handle::GetSurface(&v37);
  v24 = (CmdBufState *)R_Texture_GetResident(v23->m_image.m_base.textureId);
  v25 = R_RT_Handle::GetSurface(&v33);
  v26 = (CmdBufState *)R_Texture_GetResident(v25->m_image.m_base.textureId);
  R_ProfBeginNamedEvent(v4, "Edge Detection");
  v33 = v35;
  R_HW_AddResourceTransition(state[0], &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(state[0], &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(state[0], &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state[0]);
  v27 = viewInfo;
  v28 = (ComputeCmdBufState *)state[0];
  R_Post_SetComputeConstants((ComputeCmdBufState *)state[0], v27, width, height, 0);
  state[0] = v24;
  R_SetComputeTextures(v28, 2, 1, (const GfxTexture *const *)state);
  state[0] = v26;
  R_SetComputeTextures(v28, 1, 1, (const GfxTexture *const *)state);
  state[0] = Resident;
  R_SetComputeRWTextures(v28, 1, 1, (const GfxTexture *const *)state);
  LODWORD(state[0]) = 0;
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 4, 1, (const GfxShaderBufferRWView *const *)&v31, (const unsigned int *)state);
  LODWORD(state[0]) = 0;
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 5, 1, (const GfxShaderBufferRWView *const *)&v31, (const unsigned int *)state);
  R_SetComputeShader(v28, rgp.smaaEdgeDetectionComputeShader);
  R_Dispatch(v28, (width + 7) >> 3, (height + 7) >> 3, 1u);
  R_ComputeWaitForCompute(v28, PIPE_FLUSH_FULL);
  R_ProfEndNamedEvent(v4);
  R_ProfBeginNamedEvent(v4, "Morphological Antialiasing Resolve");
  R_HW_AddResourceTransition(v28, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PREDICATION|D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v28);
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaIndirectBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 0, 1, (const GfxShaderBufferRWView *const *)&v31, NULL);
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 4, 1, (const GfxShaderBufferRWView *const *)&v31, NULL);
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 5, 1, (const GfxShaderBufferRWView *const *)&v31, NULL);
  R_SetComputeShader(v28, rgp.smaaMorphologicalResolveWorkQueueComputeShader);
  R_Dispatch(v28, 1u, 1u, 1u);
  R_ComputeWaitForCompute(v28, PIPE_FLUSH_FULL);
  R_ProfEndNamedEvent(v4);
  R_ProfBeginNamedEvent(v4, "Morphological Antialiasing");
  v33 = v35;
  R_HW_AddResourceTransition(v28, &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v28, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v33 = v37;
  R_HW_AddResourceTransition(v28, &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v33 = v34;
  R_HW_AddResourceTransition(v28, &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v28);
  *(_QWORD *)&v31.m_surfaceID = Resident;
  R_SetComputeTextures(v28, 3, 1, (const GfxTexture *const *)&v31);
  *(_QWORD *)&v31.m_surfaceID = R_Texture_GetResident(rgp.smaaTexImage->textureId);
  R_SetComputeTextures(v28, 0, 1, (const GfxTexture *const *)&v31);
  *(_QWORD *)&v31.m_surfaceID = v24;
  R_SetComputeRWTextures(v28, 2, 1, (const GfxTexture *const *)&v31);
  *(_QWORD *)&v31.m_surfaceID = v26;
  R_SetComputeRWTextures(v28, 6, 1, (const GfxTexture *const *)&v31);
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 4, 1, (const GfxShaderBufferRWView *const *)&v31, NULL);
  *(_QWORD *)&v31.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v28, 5, 1, (const GfxShaderBufferRWView *const *)&v31, NULL);
  R_SetComputeShader(v28, rgp.smaaMorphologicalAntialiasingVerticalComputeShader);
  R_DispatchIndirect(v28, s_smaaCompute.smaaIndirectBuffer.buffer, 0);
  R_ComputeWaitForCompute(v28, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(v28, rgp.smaaMorphologicalAntialiasingHorizontalComputeShader);
  R_DispatchIndirect(v28, s_smaaCompute.smaaIndirectBuffer.buffer, 0xCu);
  R_ComputeWaitForCompute(v28, PIPE_FLUSH_PARTIAL);
  R_HW_AddResourceTransition(v28, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_PREDICATION|D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v28, &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v28, &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v33 = v37;
  R_HW_AddResourceTransition(v28, &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v28, &v34, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v28);
  R_ProfEndNamedEvent(v4);
  v34 = v35;
  *(GfxCmdBufContext *)&v31.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&v31, (R_RT_ColorHandle *)&v34);
  v29 = *gfxContext;
  v34 = v37;
  *(GfxCmdBufContext *)&v31.m_surfaceID = v29;
  R_RT_Destroy((GfxCmdBufContext *)&v31, (R_RT_ColorHandle *)&v34);
  R_FlushImmediateContext();
}

/*
==============
RB_PerformPostSMAA_TemporalSupersampling
==============
*/
void RB_PerformPostSMAA_TemporalSupersampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  const GfxViewInfo *v4; 
  GfxCmdBufContext *v5; 
  bool v7; 
  __int64 clientIndex; 
  __m256i v9; 
  bool v10; 
  const dvar_t *v12; 
  unsigned int sceneWidthStep0; 
  unsigned int sceneHeightStep0; 
  const dvar_t *v15; 
  R_RT_Flags rtFlags; 
  R_RT_Handle v17; 
  GfxCmdBufState *state; 
  const dvar_t *v21; 
  R_RT_Flags v22; 
  __int64 v25; 
  const char *name; 
  R_RT_Handle v27; 
  bool v29; 
  GfxCmdBufState *v30; 
  R_RT_ColorHandle v31; 
  __m256i v32; 
  R_RT_ColorHandle *p_result; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  vec4_t v38; 
  __int64 v39; 
  __int64 v40; 
  vec4_t v41; 
  vec4_t v42; 
  vec4_t v43; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  unsigned int v46; 
  R_RT_ColorHandle v47; 
  GfxCmdBufContext *v48; 
  const GfxViewInfo *v49; 
  R_RT_ColorHandle v50; 
  R_RT_ColorHandle v51; 
  R_RT_ColorHandle v52; 
  __m256i v53; 
  R_RT_ColorHandle v54; 
  __m256i v55; 
  __m256i v56; 
  R_RT_Handle v57; 
  __m256i v58; 
  __m256i v59; 
  R_RT_ColorHandle m_transMask; 
  __int16 v61; 
  int v62; 
  __int128 v63; 
  vec4_t clearColor[2]; 
  R_RT_Handle v65; 
  R_RT_ColorHandle result; 
  __m256i v67; 

  v4 = viewInfo;
  v49 = viewInfo;
  v5 = gfxContext;
  v48 = gfxContext;
  R_ProfBeginNamedEvent(gfxContext->state, "Temporal Supersampling");
  v7 = activeGroup->m_colorRtCount == 1;
  clientIndex = (unsigned int)v4->clientIndex;
  v46 = v4->clientIndex;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v7 = v4->sceneRtInput.m_lumaGroup.m_colorRtCount == 1;
  v9 = (__m256i)activeGroup->m_colorRts[0];
  v50 = (R_RT_ColorHandle)v9;
  if ( !v7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v9 = (__m256i)v50;
  }
  v10 = v4->validFrameCount < 3;
  v51 = v4->sceneRtInput.m_lumaGroup.m_colorRts[0];
  m_transMask = v4->sceneRtInput.m_transMask;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v63 = _XMM0;
  v61 = 0;
  v62 = 0;
  v58 = v9;
  if ( v10 )
  {
    *(_OWORD *)&v59.m256i_u64[2] = _XMM0;
    *(_OWORD *)&v54.m_tracking.m_name = _XMM0;
    *(_OWORD *)&v55.m256i_u64[2] = _XMM0;
    *(_OWORD *)&v56.m256i_u64[2] = _XMM0;
    v44.m_surfaceID = 0;
    v44.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v44.m_tracking.m_name = _XMM0;
    *(_OWORD *)&v52.m_tracking.m_name = _XMM0;
    *(_OWORD *)&v53.m256i_u64[2] = _XMM0;
    v57 = v44;
    v50 = (R_RT_ColorHandle)v9;
    v59.m256i_i16[0] = 0;
    v59.m256i_i32[2] = 0;
    v54.m_surfaceID = 0;
    v54.m_tracking.m_allocCounter = 0;
    v55.m256i_i16[0] = 0;
    v55.m256i_i32[2] = 0;
    v56.m256i_i16[0] = 0;
    v56.m256i_i32[2] = 0;
    v52.m_surfaceID = 0;
    v52.m_tracking.m_allocCounter = 0;
    v53.m256i_i16[0] = 0;
    v53.m256i_i32[2] = 0;
  }
  else
  {
    v54 = *((R_RT_ColorHandle *)&s_TemporalAALumaHistoryRt + 3 * clientIndex);
    v55 = stru_1544AAD70[3 * clientIndex];
    v56 = stru_1544AAD70[3 * clientIndex + 1];
    v59 = (__m256i)s_TemporalAAColorHistoryRt[clientIndex];
    v57 = (R_RT_Handle)s_TemporalAAFilmicHistoryRt[clientIndex];
    v52 = *RB_GetHalfVelocityRt(&result, v4, 0);
    v53 = *(__m256i *)RB_GetHalfVelocityRt(&result, v4, 1u);
  }
  v12 = r_deviceDebug;
  sceneWidthStep0 = v4->input.resolution.sceneWidthStep0;
  sceneHeightStep0 = v4->input.resolution.sceneHeightStep0;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
    goto LABEL_19;
  v15 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v15->current.enabled )
LABEL_19:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v17 = *R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_renderTargetFmts[52], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SMAA Temporal", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(537)");
  v47 = (R_RT_ColorHandle)v17;
  v44 = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = v44;
      v47 = (R_RT_ColorHandle)v44;
      __debugbreak();
    }
    else
    {
      v17 = v44;
      v47 = (R_RT_ColorHandle)v44;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = (R_RT_Handle)v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  state = v5->state;
  v44 = v17;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v44, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v7 = v4->postAA.mode == POST_AA_MODE_FILMIC_SMAA_T2X;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v44.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v45.m_tracking.m_name = _XMM0;
  v44.m_surfaceID = 0;
  v44.m_tracking.m_allocCounter = 0;
  v45.m_surfaceID = 0;
  v45.m_tracking.m_allocCounter = 0;
  if ( v7 )
  {
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_35;
    v21 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( !v21->current.enabled )
LABEL_35:
      v22 = R_RT_Flag_None;
    else
      v22 = R_RT_Flag_PreferESRAM;
    _XMM0 = LODWORD(FLOAT_1_0);
    clearColor[0].v[0] = FLOAT_1_0;
    v44 = *R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_depthStencilFmts[7], v22, R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_DEPTH_WRITE, "SMAA Depth", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(545)");
    v45 = v44;
    if ( LOWORD(FLOAT_1_0) )
    {
      R_RT_Handle::GetSurface(&v45);
      if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        v44 = v45;
      }
      else
      {
        v44 = v45;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v25 = 2i64;
    name = "SMAA Filmic [0]";
    if ( (v4->input.data->frameCount & 1) != 0 )
      name = "SMAA Filmic [1]";
    v27 = *R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_renderTargetFmts[52], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(548)");
    v45 = v27;
    *(R_RT_Handle *)clearColor[0].v = v27;
    if ( LOWORD(FLOAT_1_0) )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)clearColor);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v27 = *(R_RT_Handle *)clearColor[0].v;
        v45 = *(R_RT_Handle *)clearColor[0].v;
        __debugbreak();
      }
      else
      {
        v27 = *(R_RT_Handle *)clearColor[0].v;
        v45 = *(R_RT_Handle *)clearColor[0].v;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v27 = v45;
        if ( v29 )
          __debugbreak();
      }
    }
    v30 = v5->state;
    *(R_RT_Handle *)clearColor[0].v = v27;
    R_AddRenderTargetTransition(v30, (R_RT_ColorHandle *)clearColor, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v5->state);
    v31 = (R_RT_ColorHandle)v45;
    v32 = (__m256i)v47;
    activeGroup->m_colorRtCount = 2;
    p_result = &result;
    result = v31;
    v67 = v32;
    do
    {
      *(__m256i *)clearColor[0].v = *(__m256i *)p_result;
      if ( LOWORD(FLOAT_1_0) )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)clearColor);
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      *(R_RT_ColorHandle *)((char *)&p_result->m_tracking.m_allocCounter + (char *)activeGroup - (char *)&result) = *p_result;
      ++p_result;
      --v25;
    }
    while ( v25 );
    v5 = v48;
    activeGroup->m_depthRt = (R_RT_DepthHandle)v44;
    state = v5->state;
    R_ClearRtGroup(state, activeGroup, 0x10u, 0, PIPE_FLUSH_FULL);
    v4 = v49;
  }
  else
  {
    R_FlushResourceTransitions(state);
    *(R_RT_ColorHandle *)clearColor[0].v = v47;
    R_RT_Group::AssignColor(activeGroup, (R_RT_ColorHandle *)clearColor);
  }
  *(__m256i *)clearColor[0].v = *(__m256i *)R_RT_Group::GetValidRt(activeGroup, &result);
  height = R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)clearColor);
  source = v5->source;
  R_SetRenderTargetSize(v5->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  clearColor[0] = *(vec4_t *)v5;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)clearColor, activeGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(572)");
  v65 = v57;
  v38 = *(vec4_t *)v5;
  result = v51;
  clearColor[0] = v38;
  R_SMAA_TemporalSupersampling((GfxCmdBufContext *)clearColor, v4, (const R_RT_ColorHandle *)&v58, &result, &v54, &v52, (R_RT_ColorHandle *)&v65, &m_transMask);
  v39 = v46;
  v40 = v46;
  clearColor[0] = *(vec4_t *)v5;
  result = s_TemporalAAColorHistoryRt[v40];
  R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
  v41 = *(vec4_t *)v5;
  s_TemporalAAColorHistoryRt[v40] = v50;
  v39 *= 96i64;
  clearColor[0] = v41;
  result = *(R_RT_ColorHandle *)((char *)&stru_1544AAD70[1] + v39);
  R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
  *(__m256i *)((char *)&stru_1544AAD70[1] + v39) = *(__m256i *)((char *)stru_1544AAD70 + v39);
  *(__m256i *)((char *)stru_1544AAD70 + v39) = *(__m256i *)((char *)&s_TemporalAALumaHistoryRt + v39);
  *(R_RT_ColorHandle *)((char *)&s_TemporalAALumaHistoryRt + v39) = v51;
  v4->sceneRtInput.m_lumaGroup.m_colorRtCount = 0;
  v4->sceneRtInput.m_lumaGroup.m_depthRt.m_surfaceID = 0;
  v4->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_allocCounter = 0;
  v4->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_name = NULL;
  v4->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_location = NULL;
  v4->sceneRtInput.m_lumaGroup.m_vrsRt.m_surfaceID = 0;
  v4->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
  v4->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_name = NULL;
  v4->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_location = NULL;
  if ( v4->postAA.mode == POST_AA_MODE_FILMIC_SMAA_T2X )
  {
    result = v47;
    R_AddRenderTargetTransition(state, &result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    result = (R_RT_ColorHandle)v44;
    v65 = v45;
    R_RT_Group::AssignColorDepth(activeGroup, (R_RT_ColorHandle *)&v65, (R_RT_DepthHandle *)&result);
    R_SetRenderTargetSize(source, activeGroup, GFX_USE_VIEWPORT_FULL);
    clearColor[0] = *(vec4_t *)v5;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)clearColor, activeGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(605)");
    result = v50;
    v65 = v57;
    v51 = v47;
    clearColor[0] = *(vec4_t *)v5;
    R_SMAA_FilmicFiltering((GfxCmdBufContext *)clearColor, v4, &v51, &v52, (R_RT_ColorHandle *)&v65, &result, &m_transMask);
    v42 = *(vec4_t *)v5;
    result = s_TemporalAAFilmicHistoryRt[v40];
    clearColor[0] = v42;
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    s_TemporalAAFilmicHistoryRt[v40] = activeGroup->m_colorRts[0];
    result = v47;
    clearColor[0] = *(vec4_t *)v5;
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    result = (R_RT_ColorHandle)v44;
    clearColor[0] = *(vec4_t *)v5;
    R_RT_Destroy((GfxCmdBufContext *)clearColor, (R_RT_DepthHandle *)&result);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    state = v5->state;
    result = activeGroup->m_colorRts[0];
    R_AddRenderTargetTransition(state, &result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    result = activeGroup->m_colorRts[0];
    result = *RB_CreateRenderTargetAlias((R_RT_ColorHandle *)&v65, &result, GFX_RENDERTARGET_FORMAT_SMAA_FILMIC, "SMAA Output Alias");
    R_RT_Group::AssignColor(activeGroup, &result);
  }
  else
  {
    v43 = *(vec4_t *)v5;
    result = s_TemporalAAFilmicHistoryRt[v40];
    clearColor[0] = v43;
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    s_TemporalAAFilmicHistoryRt[v40].m_surfaceID = 0;
    *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + v40 * 32) = 0;
    *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + v40 * 32) = NULL;
    *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + v40 * 32) = NULL;
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    {
      __debugbreak();
      state = v5->state;
    }
    result = activeGroup->m_colorRts[0];
    R_AddRenderTargetTransition(state, &result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_PostOpaqueLumaBlit
==============
*/
void RB_PostOpaqueLumaBlit(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *postOpaqueLumaRt)
{
  GfxCmdBufSourceState *source; 
  unsigned __int32 v6; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v16; 
  R_RT_Handle *v18; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext result[2]; 
  R_RT_Handle *v25; 
  R_RT_Group v26; 
  R_RT_Group v27; 

  source = gfxContext->source;
  v6 = viewInfo->postAA.mode - 2;
  v25 = mainSceneColorRt;
  if ( v6 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 1048, ASSERT_TYPE_ASSERT, "(R_PostAAHasTemporalSupersampling( viewInfo->postAA.mode ))", (const char *)&queryFormat, "R_PostAAHasTemporalSupersampling( viewInfo->postAA.mode )") )
    __debugbreak();
  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "Post Opaque Luma");
  R_GPU_BeginTimer(GPU_TIMER_TRANS_MASK);
  R_InitCmdBufSourceState(source, &viewInfo->input);
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = source->input.data;
  *(__m256i *)&result[0].source = *(__m256i *)postOpaqueLumaRt;
  height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  *(__m256i *)&result[0].source = *(__m256i *)postOpaqueLumaRt;
  R_RT_Group::AssignColor(&v26, (R_RT_ColorHandle *)result);
  *(__m256i *)&v27.m_colorRtCount = *(__m256i *)&v26.m_colorRtCount;
  *(__m256i *)&v27.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[2].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v27.m_depthRt.m_tracking.m_location = *(__m256i *)&v26.m_depthRt.m_tracking.m_location;
  _XMM0 = *gfxContext;
  v27.m_vrsRt.m_tracking.m_location = v26.m_vrsRt.m_tracking.m_location;
  result[0] = _XMM0;
  R_SetRenderTargetsInternal(result, &v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1056)");
  _XMM6 = *gfxContext;
  __asm { vpextrq rcx, xmm6, 1 }
  v16 = gfxContext->source;
  *(double *)&_XMM0.source = R_Tonemap_GetFinalExposureAndRadiometricScale(*(const GfxBackEndData **)(_RCX + 2504), viewInfo);
  v18 = v25;
  *(_QWORD *)&v16->input.consts[38].xyz.y = 0i64;
  v16->input.consts[38].v[3] = 0.0;
  v16->input.consts[38].v[0] = *(float *)&_XMM0.source;
  ++v16->constVersions[38];
  p_m_image = &R_RT_Handle::GetSurface(v18)->m_image;
  p_input = &v16->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[43] = &p_m_image->m_base;
  result[0] = _XMM6;
  RB_FullScreenFilterInternal(result, rgp.smaaBlitOpaqueLuma, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1012)");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v26.m_depthRt.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v26.m_vrsRt.m_tracking.m_name = _XMM0;
  v26.m_colorRtCount = 0;
  v26.m_depthRt.m_surfaceID = 0;
  v26.m_depthRt.m_tracking.m_allocCounter = 0;
  v26.m_vrsRt.m_surfaceID = 0;
  v26.m_vrsRt.m_tracking.m_allocCounter = 0;
  *(__m256i *)&v27.m_colorRtCount = *(__m256i *)&v26.m_colorRtCount;
  *(__m256i *)&v27.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[2].m_tracking.m_location;
  *(__m256i *)&v27.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v26.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v27.m_depthRt.m_tracking.m_location = *(__m256i *)&v26.m_depthRt.m_tracking.m_location;
  v27.m_vrsRt.m_tracking.m_location = (const char *)*((_QWORD *)&_XMM0 + 1);
  result[0] = _XMM6;
  R_SetRenderTargetsInternal(result, &v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1059)");
  R_ResetRenderTargets(state);
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rcx, xmm0, 1; out }
    if ( state != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, state);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_PostOpaqueProcesses
==============
*/
void RB_PostOpaqueProcesses(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *fullFloatZ, GfxImage *volScatterImage, GfxImage *volExtinctionImage)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  R_RT_Handle v13; 
  const R_RT_Surface *v15; 
  const R_RT_Surface *v16; 
  const GfxTexture *v17; 
  R_RT_ColorHandle v18; 
  R_RT_Handle v19; 
  R_RT_ColorHandle v20; 

  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  v13 = mainSceneColorRt->R_RT_Handle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v18.m_surfaceID = 0;
  *(_OWORD *)&v18.m_tracking.m_name = _XMM0;
  v19 = v13;
  v18.m_tracking.m_allocCounter = 0;
  v15 = R_RT_Handle::GetSurface(&v19);
  R_SetComputeShader(computeState, rgp.postOpaqueProcesses[((unsigned int)v15->m_rtFlags >> 14) & 1]);
  v20 = *fullFloatZ;
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, (R_RT_ColorHandle *)&v19, &v18, &v20, volScatterImage, volExtinctionImage, NULL);
  v16 = R_RT_Handle::GetSurface(mainSceneColorRt);
  v17 = R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
}

/*
==============
RB_PostOpaqueProcessesLuma
==============
*/
void RB_PostOpaqueProcessesLuma(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *postOpaqueLumaRt, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *fullFloatZ, GfxImage *volScatterImage, GfxImage *volExtinctionImage)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  R_RT_Handle v14; 
  R_RT_Handle v16; 
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  const R_RT_Surface *v19; 
  const GfxTexture *v20; 
  const R_RT_Surface *v21; 
  const GfxTexture *v22; 
  R_RT_ColorHandle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  GfxTexture *textures; 

  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  v14 = mainSceneColorRt->R_RT_Handle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v23.m_tracking.m_name = _XMM0;
  v16 = postOpaqueLumaRt->R_RT_Handle;
  v23.m_surfaceID = 0;
  v25 = v16;
  v23.m_tracking.m_allocCounter = 0;
  v24 = v14;
  v17 = R_RT_Handle::GetSurface(&v25);
  textures = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v18 = R_RT_Handle::GetSurface(&v24);
  R_SetComputeShader(computeState, rgp.postOpaqueProcessesLuma[((unsigned int)v18->m_rtFlags >> 14) & 1]);
  v25 = fullFloatZ->R_RT_Handle;
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, (R_RT_ColorHandle *)&v24, &v23, (R_RT_ColorHandle *)&v25, volScatterImage, volExtinctionImage, NULL);
  v19 = R_RT_Handle::GetSurface(mainSceneColorRt);
  v20 = R_Texture_GetResident(v19->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v21 = R_RT_Handle::GetSurface(postOpaqueLumaRt);
  v22 = R_Texture_GetResident(v21->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v22, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
}

/*
==============
RB_PostOpaqueProcesses_Internal
==============
*/
void RB_PostOpaqueProcesses_Internal(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *vrsMaskRt, R_RT_ColorHandle *fullFloatZ, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  const R_RT_Surface *v14; 
  GfxTextureId textureId; 
  unsigned int v16; 
  const GfxImage *Image; 
  GfxImage *MagmaHeightfield; 
  float v19; 
  __int64 v20; 
  float v21; 
  const GfxBackEndData *v22; 
  __int128 *v23; 
  const GfxBackEndData *v24; 
  double FinalExposureAndRadiometricScale; 
  const dvar_t *v26; 
  __int64 v29; 
  GfxTexture *textures; 
  base_vec4_t<unsigned int> result; 
  int data[8]; 
  __int128 v34; 

  *(_QWORD *)result.v = scopeImage;
  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v13 = R_RT_Handle::GetSurface(fullFloatZ);
  textures = (GfxTexture *)R_Texture_GetResident(v13->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(volScatterImage->textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(volExtinctionImage->textureId);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&textures);
  if ( (R_RT_Handle::GetSurface(mainSceneColorRt)->m_rtFlags & 0x4000) != 0 )
  {
    v14 = R_RT_Handle::GetSurface(vrsMaskRt);
    textures = (GfxTexture *)R_Texture_GetResident(v14->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 5, 1, (const GfxTexture *const *)&textures);
    if ( (R_RT_Handle::GetSurface(mainSceneColorRt)->m_rtFlags & 0x8000) != 0 )
      textureId = R_RT_Handle::GetSurface(mainSceneColorRt)->m_color.m_fmaskImage.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(computeState, 4, 1, (const GfxTexture *const *)&textures);
  }
  v16 = (((unsigned int)R_RT_Handle::GetSurface(mainSceneColorRt)->m_rtFlags >> 14) & 1) + 1;
  *(_QWORD *)result.v = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(*(_QWORD *)result.v + 16i64));
  R_SetComputeTextures(computeState, 6, 1, (const GfxTexture *const *)&result);
  Image = RB_FogSpline_GetImage(&viewInfo->fog, viewInfo->clientIndex);
  *(_QWORD *)result.v = R_Texture_GetResident(Image->textureId);
  R_SetComputeTextures(computeState, 3, 1, (const GfxTexture *const *)&result);
  MagmaHeightfield = (GfxImage *)Particle_GetMagmaHeightfield();
  if ( !MagmaHeightfield )
    MagmaHeightfield = rgp.blackImage;
  *(_QWORD *)result.v = R_Texture_GetResident(MagmaHeightfield->textureId);
  R_SetComputeTextures(computeState, 8, 1, (const GfxTexture *const *)&result);
  v19 = (float)(v16 * R_RT_Handle::GetSurface(mainSceneColorRt)->m_image.m_base.width);
  v20 = v16 * R_RT_Handle::GetSurface(mainSceneColorRt)->m_image.m_base.height;
  *(float *)data = v19;
  *(float *)&data[2] = 1.0 / v19;
  *(float *)&data[4] = 1.0 / v19;
  v21 = (float)v20;
  v22 = viewInfo->input.data;
  *(float *)&data[1] = v21;
  *(float *)&data[3] = 1.0 / v21;
  *(float *)&data[5] = 1.0 / v21;
  v23 = (__int128 *)R_VRSGetPixelsToSamplesUint(&result, v22->frameCount, rg.vrsEmissiveOnly);
  v24 = computeState->data;
  v34 = *v23;
  FinalExposureAndRadiometricScale = R_Tonemap_GetFinalExposureAndRadiometricScale(v24, viewInfo);
  v26 = DCONST_DVARFLT_r_fogSubsamplingSensitivity;
  data[7] = SLODWORD(FinalExposureAndRadiometricScale);
  if ( !DCONST_DVARFLT_r_fogSubsamplingSensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_fogSubsamplingSensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  data[6] = v26->current.integer;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  *(_QWORD *)result.v = computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)&result);
  _XMM4 = 0i64;
  __asm { vroundss xmm2, xmm4, xmm1, 2 }
  v29 = (int)*(float *)&_XMM2 + 7;
  __asm { vroundss xmm2, xmm4, xmm1, 2 }
  R_Dispatch(computeState, ((int)*(float *)&_XMM2 + 7) / 8, ((BYTE4(v29) & 7) + (int)v29) >> 3, 1u);
}

/*
==============
RB_SMAA_ComputeTransMask
==============
*/
void RB_SMAA_ComputeTransMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *postOpaqueLumaRt)
{
  __m256i v9; 
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufContext v14; 
  R_RT_Handle v15; 
  R_RT_ColorHandle mainSceneColorResolvedRt; 
  R_RT_Handle result; 

  R_ProfBeginNamedEvent(gfxContext->state, "Trans Mask");
  R_GPU_BeginTimer(GPU_TIMER_TRANS_MASK);
  v9 = *(__m256i *)R_RT_CreateInternal(&result, viewInfo->sceneRtInput.sceneRtWidth >> 2, viewInfo->sceneRtInput.sceneRtHeight >> 2, viewInfo->sceneRtInput.maxSceneRtWidth >> 2, viewInfo->sceneRtInput.maxSceneRtHeight >> 2, 1u, 1u, 1u, g_R_RT_renderTargetFmts[62], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Trans Mask", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1120)");
  mainSceneColorResolvedRt = (R_RT_ColorHandle)v9;
  v15 = (R_RT_Handle)v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v9 = (__m256i)v15;
      __debugbreak();
    }
    else
    {
      v9 = (__m256i)v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v9 = (__m256i)mainSceneColorResolvedRt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  state = gfxContext->state;
  viewInfo->sceneRtInput.m_transMask = (R_RT_ColorHandle)v9;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v15.m_surfaceID = 0;
  v15.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v15.m_tracking.m_name = _XMM0;
  result.m_surfaceID = 0;
  result.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&result.m_tracking.m_name = _XMM0;
  mainSceneColorResolvedRt.m_surfaceID = 0;
  mainSceneColorResolvedRt.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&mainSceneColorResolvedRt.m_tracking.m_name = _XMM0;
  R_PostTransResolve(GfxComputeCmdBufState, viewInfo, mainSceneColorRt, &mainSceneColorResolvedRt, postOpaqueLumaRt, NULL, (const R_RT_ColorHandle *)&result, &viewInfo->sceneRtInput.m_transMask, (const R_RT_ColorHandle *)&v15, 1, 0);
  R_ComputeWaitForCompute(GfxComputeCmdBufState, PIPE_FLUSH_PARTIAL);
  v14 = *gfxContext;
  mainSceneColorResolvedRt = *postOpaqueLumaRt;
  *(GfxCmdBufContext *)&v15.m_surfaceID = v14;
  R_RT_Destroy((GfxCmdBufContext *)&v15, &mainSceneColorResolvedRt);
  postOpaqueLumaRt->m_surfaceID = 0;
  postOpaqueLumaRt->m_tracking.m_allocCounter = 0;
  postOpaqueLumaRt->m_tracking.m_name = NULL;
  postOpaqueLumaRt->m_tracking.m_location = NULL;
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(gfxContext->state);
}

/*
==============
R_GetPostAAModeFromDvars
==============
*/
__int64 R_GetPostAAModeFromDvars()
{
  return r_postAA->current.unsignedInt;
}

/*
==============
R_GetSMAAColorimetryInfo
==============
*/
vec4_t *R_GetSMAAColorimetryInfo(vec4_t *result)
{
  bool v2; 
  vec4_t *v3; 

  v2 = R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ;
  v3 = result;
  if ( v2 )
    *result = (vec4_t)_xmm;
  else
    *result = (vec4_t)_xmm;
  return v3;
}

/*
==============
R_GetSMAATemporalUpsampleMode
==============
*/
__int64 R_GetSMAATemporalUpsampleMode(PostAAMode postAAMode, GfxResolutionStep step)
{
  if ( step && (unsigned int)(postAAMode - 2) <= 1 )
    return r_smaaUpsampleMode->current.unsignedInt;
  else
    return 0i64;
}

/*
==============
R_PostAAHasTemporalFiltering
==============
*/
bool R_PostAAHasTemporalFiltering(PostAAMode postAAMode)
{
  return postAAMode == POST_AA_MODE_FILMIC_SMAA_T2X;
}

/*
==============
R_PostAAHasTemporalSupersampling
==============
*/
bool R_PostAAHasTemporalSupersampling(PostAAMode postAAMode)
{
  return (unsigned int)(postAAMode - 2) <= 1;
}

/*
==============
R_PostAAIsSMAA
==============
*/
bool R_PostAAIsSMAA(PostAAMode postAAMode)
{
  return (unsigned int)(postAAMode - 1) <= 2;
}

/*
==============
R_PostAARequestGradientAdjust
==============
*/
bool R_PostAARequestGradientAdjust()
{
  int integer; 

  integer = r_postAA->current.integer;
  return (unsigned int)(integer - 2) <= 1 && integer == 3 && r_smaaGradientAdjust->current.value > 0.0;
}

/*
==============
R_PostAARequestPreviousFrameVelocities
==============
*/
bool R_PostAARequestPreviousFrameVelocities(PostAAMode postAAMode)
{
  return (unsigned int)(postAAMode - 2) <= 1;
}

/*
==============
R_PostAARequestVelocities
==============
*/
bool R_PostAARequestVelocities(PostAAMode postAAMode)
{
  return (unsigned int)(postAAMode - 2) <= 1;
}

/*
==============
R_PostTransResolve
==============
*/
void R_PostTransResolve(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *mainSceneColorRt, const R_RT_ColorHandle *mainSceneColorResolvedRt, const R_RT_ColorHandle *postOpaqueLumaRt, const GfxWrappedBuffer *stencilMask, const R_RT_ColorHandle *hudOutlineMask, const R_RT_ColorHandle *transMaskRt, const R_RT_ColorHandle *swVrsMaskRt, const bool transMaskResolve, const bool vrsInlineResolve)
{
  const R_RT_Surface *Surface; 
  bool v16; 
  int width; 
  unsigned int height; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  const R_RT_Surface *v22; 
  R_RT_ColorHandle *v23; 
  GfxTextureId textureId; 
  R_RT_ColorHandle *v25; 
  GfxTextureId v26; 
  R_RT_ColorHandle *v27; 
  GfxTextureId v28; 
  GfxWrappedBuffer *p_dummyDataBufferR32UINT; 
  bool v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  ComputeShader *postTransResolveVrs; 
  ID3D12Resource *buffers; 

  Surface = R_RT_Handle::GetSurface(&mainSceneColorRt->R_RT_Handle);
  v16 = vrsInlineResolve;
  width = Surface->m_image.m_base.width >> 2;
  if ( vrsInlineResolve )
    width = Surface->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(&mainSceneColorRt->R_RT_Handle)->m_image.m_base.height;
  v19 = height >> 2;
  if ( v16 )
    v19 = height;
  v20 = (unsigned int)(width + 7) >> 3;
  v21 = (v19 + 7) >> 3;
  R_Post_SetComputeConstants(computeState, viewInfo, width, v19, v16);
  buffers = computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  v22 = R_RT_Handle::GetSurface(&mainSceneColorRt->R_RT_Handle);
  buffers = (ID3D12Resource *)R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&buffers);
  v23 = (R_RT_ColorHandle *)postOpaqueLumaRt;
  if ( R_RT_Handle::IsValid(&postOpaqueLumaRt->R_RT_Handle) )
    textureId = R_RT_Handle::GetSurface(v23)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage->textureId;
  buffers = (ID3D12Resource *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(computeState, 4, 1, (const GfxTexture *const *)&buffers);
  v25 = (R_RT_ColorHandle *)swVrsMaskRt;
  if ( R_RT_Handle::IsValid(&swVrsMaskRt->R_RT_Handle) )
    v26 = R_RT_Handle::GetSurface(v25)->m_image.m_base.textureId;
  else
    v26 = rgp.blackUintImage->textureId;
  buffers = (ID3D12Resource *)R_Texture_GetResident(v26);
  R_SetComputeTextures(computeState, 3, 1, (const GfxTexture *const *)&buffers);
  v27 = (R_RT_ColorHandle *)hudOutlineMask;
  if ( R_RT_Handle::IsValid(&hudOutlineMask->R_RT_Handle) )
    v28 = R_RT_Handle::GetSurface(v27)->m_image.m_base.textureId;
  else
    v28 = rgp.blackImage->textureId;
  buffers = (ID3D12Resource *)R_Texture_GetResident(v28);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&buffers);
  p_dummyDataBufferR32UINT = &gfxBuf.dummyDataBufferR32UINT;
  if ( stencilMask )
    p_dummyDataBufferR32UINT = (GfxWrappedBuffer *)stencilMask;
  stencilMask = (const GfxWrappedBuffer *)&p_dummyDataBufferR32UINT->view;
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)&stencilMask);
  v30 = transMaskResolve;
  if ( transMaskResolve )
  {
    v31 = R_RT_Handle::GetSurface(&transMaskRt->R_RT_Handle);
    stencilMask = (const GfxWrappedBuffer *)R_Texture_GetResident(v31->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&stencilMask);
  }
  if ( v16 )
  {
    v32 = R_RT_Handle::GetSurface(&mainSceneColorResolvedRt->R_RT_Handle);
    stencilMask = (const GfxWrappedBuffer *)R_Texture_GetResident(v32->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&stencilMask);
    postTransResolveVrs = rgp.postTransResolveVrs;
    if ( v30 )
      postTransResolveVrs = rgp.postTransResolveMaskVrs;
  }
  else
  {
    postTransResolveVrs = rgp.postTransResolveMask;
  }
  R_SetComputeShader(computeState, postTransResolveVrs);
  R_Dispatch(computeState, v20, v21, 1u);
}

/*
==============
R_Post_SetComputeConstants
==============
*/
void R_Post_SetComputeConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const unsigned int width, const unsigned int height, const bool vrsInlineResolve)
{
  __int128 v5; 
  __int128 v6; 
  ComputeCmdBufState *v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  bool v12; 
  double FinalExposureAndRadiometricScale; 
  __int128 v14; 
  const GfxBackEndData *v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  base_vec4_t<unsigned int> result; 
  int data[4]; 
  __int128 v27; 
  float v28; 
  int v29; 
  int integer; 
  BOOL v31; 
  __int128 v32; 
  base_vec4_t<unsigned int> v33; 
  __int128 v34; 
  __int128 v35; 

  v35 = v5;
  v8 = computeState;
  v34 = v6;
  v9 = (float)width;
  v10 = (float)height;
  *(float *)&data[1] = v10;
  *(float *)&data[3] = 1.0 / v10;
  *(float *)data = v9;
  *(float *)&data[2] = 1.0 / v9;
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ )
    v11 = _xmm;
  else
    v11 = _xmm;
  v12 = viewInfo->postAA.smaaUpsampleMode == SMAA_TEMPORAL_UPSAMPLE_MODE_OFF;
  v27 = v11;
  if ( v12 )
    v28 = FLOAT_1_0;
  else
    v28 = v9 / (float)viewInfo->input.resolution.sceneWidthStep0;
  FinalExposureAndRadiometricScale = R_Tonemap_GetFinalExposureAndRadiometricScale(v8->data, viewInfo);
  v31 = viewInfo->input.resolution.step != viewInfo->input.resolution.history[0];
  v29 = SLODWORD(FinalExposureAndRadiometricScale);
  if ( vrsInlineResolve )
  {
    v14 = (__int128)*R_VRSGetPixelsToSamplesUint(&result, viewInfo->input.data->frameCount, rg.vrsEmissiveOnly);
    v15 = viewInfo->input.data;
    v16 = 0;
    v32 = v14;
    v17 = 0i64;
    frameCount = v15->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v23) = 4;
        LODWORD(v22) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v20 = s_VRSSampleToPixelOrdered_1[unsignedInt][v17];
      v21 = (int)v16;
      ++v17;
      ++v16;
      result.v[v21] = v20;
    }
    while ( v16 < 4 );
    v8 = computeState;
    v33 = result;
  }
  integer = r_vrsQualityThreshold->current.integer;
  R_UploadAndSetComputeConstants(v8, 0, data, 0x70u, NULL);
}

/*
==============
R_RunPostOpaqueLumaBlit
==============
*/
void R_RunPostOpaqueLumaBlit(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt)
{
  GfxCmdBufSourceState *source; 
  double FinalExposureAndRadiometricScale; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v8; 
  GfxCmdBufContext v9; 

  source = gfxContext->source;
  FinalExposureAndRadiometricScale = R_Tonemap_GetFinalExposureAndRadiometricScale(gfxContext->state->data, viewInfo);
  *(_QWORD *)&source->input.consts[38].xyz.y = 0i64;
  source->input.consts[38].v[3] = 0.0;
  source->input.consts[38].v[0] = *(float *)&FinalExposureAndRadiometricScale;
  ++source->constVersions[38];
  p_m_image = &R_RT_Handle::GetSurface(mainSceneColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v8 = *gfxContext;
  source->input.codeImages[43] = &p_m_image->m_base;
  v9 = v8;
  RB_FullScreenFilterInternal(&v9, rgp.smaaBlitOpaqueLuma, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1012)");
}

/*
==============
R_RunPostOpaqueProcesses
==============
*/
void R_RunPostOpaqueProcesses(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *vrsMaskRt, R_RT_ColorHandle *fullFloatZ, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage)
{
  const R_RT_Surface *Surface; 
  R_RT_ColorHandle v13; 
  R_RT_ColorHandle v14; 
  R_RT_ColorHandle v15; 
  R_RT_ColorHandle v16; 
  R_RT_ColorHandle v17; 

  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  R_SetComputeShader(computeState, rgp.postOpaqueProcesses[((unsigned int)Surface->m_rtFlags >> 14) & 1]);
  v13 = *vrsMaskRt;
  v15 = *fullFloatZ;
  v14 = *mainSceneColorRt;
  v16 = v13;
  v17 = v14;
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, &v17, &v16, &v15, volScatterImage, volExtinctionImage, scopeImage);
}

/*
==============
R_RunPostOpaqueProcessesLuma
==============
*/
void R_RunPostOpaqueProcessesLuma(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *postOpaqueLumaRt, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *vrsMaskRt, R_RT_ColorHandle *fullFloatZ, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  R_RT_ColorHandle v14; 
  R_RT_ColorHandle v15; 
  R_RT_ColorHandle v16; 
  GfxTexture *textures; 

  Surface = R_RT_Handle::GetSurface(postOpaqueLumaRt);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v13 = R_RT_Handle::GetSurface(mainSceneColorRt);
  R_SetComputeShader(computeState, rgp.postOpaqueProcessesLuma[((unsigned int)v13->m_rtFlags >> 14) & 1]);
  v14 = *fullFloatZ;
  v16 = *mainSceneColorRt;
  v15 = *vrsMaskRt;
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, &v16, &v15, &v14, volScatterImage, volExtinctionImage, scopeImage);
}

/*
==============
R_SMAAComputeInitialize
==============
*/
void R_SMAAComputeInitialize(void)
{
  unsigned int v0; 
  int ElementSizeForDataFormat; 

  v0 = (vidConfig.sceneHeight * vidConfig.sceneWidth) >> 2;
  R_CreateGfxWrappedBuffer(&s_smaaCompute.smaaMorphologicalWorkQueueHBuffer, GfxWrappedBuffer_Structured, 12, v0, GFX_DATA_FORMAT_R32_UINT, 0x19u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "SMAA Morphological Work Queue H");
  R_CreateGfxWrappedBuffer(&s_smaaCompute.smaaMorphologicalWorkQueueVBuffer, GfxWrappedBuffer_Structured, 12, v0, GFX_DATA_FORMAT_R32_UINT, 0x19u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "SMAA Morphological Work Queue V");
  ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
  R_CreateGfxWrappedBuffer(&s_smaaCompute.smaaIndirectBuffer, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 6u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "SMAA Indirect Args");
}

/*
==============
R_SMAA_EdgeDetection
==============
*/
void R_SMAA_EdgeDetection(ComputeCmdBufState *computeState, const unsigned int width, const unsigned int height, const GfxTexture *srcColorTex, const GfxTexture *lumaTex, const GfxTexture *smaaEdgesTex, const GfxTexture *vrsMaskTex, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  unsigned int v9; 
  unsigned int v10; 
  ComputeShader *smaaEdgeDetectionComputeShader; 
  unsigned int initialCounts; 
  GfxTexture *textures; 

  textures = (GfxTexture *)srcColorTex;
  v9 = (width + 7) >> 3;
  v10 = (height + 7) >> 3;
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&textures);
  R_SetComputeTextures(computeState, 1, 1, &lumaTex);
  lumaTex = smaaEdgesTex;
  R_SetComputeRWTextures(computeState, 1, 1, &lumaTex);
  initialCounts = 0;
  lumaTex = (const GfxTexture *)&smaaMorphologicalWorkQueueHBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 4, 1, (const GfxShaderBufferRWView *const *)&lumaTex, &initialCounts);
  initialCounts = 0;
  lumaTex = (const GfxTexture *)&smaaMorphologicalWorkQueueVBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 5, 1, (const GfxShaderBufferRWView *const *)&lumaTex, &initialCounts);
  smaaEdgeDetectionComputeShader = rgp.smaaEdgeDetectionComputeShader;
  if ( vrsMaskTex )
  {
    lumaTex = vrsMaskTex;
    R_SetComputeRWTextures(computeState, 3, 1, &lumaTex);
    smaaEdgeDetectionComputeShader = rgp.smaaEdgeDetectionVRSMaskComputeShader;
  }
  R_SetComputeShader(computeState, smaaEdgeDetectionComputeShader);
  R_Dispatch(computeState, v9, v10, 1u);
}

/*
==============
R_SMAA_FilmicFiltering
==============
*/
void R_SMAA_FilmicFiltering(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *filmicTmpRt, const R_RT_ColorHandle *velocityRts, R_RT_ColorHandle *filmicHistoryRt, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *transMaskRts)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  R_RT_Image *defaultVelocityImage; 
  GfxCmdBufSourceState *v16; 
  GfxCmdBufInput *v17; 
  R_RT_Image *v18; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  bool IsValid; 
  R_RT_ColorHandle *v22; 
  const R_RT_Surface *v23; 
  GfxCmdBufSourceState *v24; 
  R_RT_Image *v25; 
  GfxCmdBufInput *v26; 
  R_RT_Image *whiteImage; 
  GfxCmdBufSourceState *v28; 
  GfxCmdBufInput *v29; 
  const R_RT_Surface *v30; 
  GfxCmdBufSourceState *v31; 
  R_RT_Image *v32; 
  GfxCmdBufInput *v33; 
  GfxCmdBufContext v34; 
  GfxCmdBufContext v35[3]; 

  if ( R_RT_Handle::IsValid(filmicHistoryRt) && R_RT_Handle::GetSurface(filmicHistoryRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 457, ASSERT_TYPE_ASSERT, "(!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC ))", (const char *)&queryFormat, "!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC )") )
    __debugbreak();
  v35[0] = *gfxContext;
  R_SMAA_SetGraphicsConstants(v35, viewInfo);
  Surface = R_RT_Handle::GetSurface(filmicTmpRt);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[43] = &p_m_image->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts->R_RT_Handle) )
    defaultVelocityImage = &R_RT_Handle::GetSurface(&velocityRts->R_RT_Handle)->m_image;
  else
    defaultVelocityImage = (R_RT_Image *)rgp.defaultVelocityImage;
  v16 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v17 = &v16->input;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17->codeImages[45] = &defaultVelocityImage->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts[1].R_RT_Handle) )
    v18 = &R_RT_Handle::GetSurface(&velocityRts[1].R_RT_Handle)->m_image;
  else
    v18 = (R_RT_Image *)rgp.defaultVelocityImage;
  v19 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v19->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20->codeImages[46] = &v18->m_base;
  IsValid = R_RT_Handle::IsValid(filmicHistoryRt);
  v22 = filmicHistoryRt;
  if ( !IsValid )
    v22 = filmicTmpRt;
  v23 = R_RT_Handle::GetSurface(v22);
  v24 = gfxContext->source;
  v25 = &v23->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = &v24->input;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v26->codeImages[50] = &v25->m_base;
  if ( R_RT_Handle::IsValid(transMaskRts) )
    whiteImage = &R_RT_Handle::GetSurface(transMaskRts)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v28 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v28->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[51] = &whiteImage->m_base;
  v30 = R_RT_Handle::GetSurface(srcColorRt);
  v31 = gfxContext->source;
  v32 = &v30->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v33 = &v31->input;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v34 = *gfxContext;
  v33->codeImages[71] = &v32->m_base;
  v35[0] = v34;
  RB_FullScreenFilterInternal(v35, rgp.smaaFilmicFilteringMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(471)");
}

/*
==============
R_SMAA_FreeTemporalRts
==============
*/
void R_SMAA_FreeTemporalRts(void)
{
  __int64 v0; 
  unsigned __int64 v1; 
  R_RT_Handle *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  R_RT_Handle *v6; 
  R_RT_Handle v7[2]; 
  __int64 v8; 
  __int64 v9; 

  v9 = 2i64;
  v0 = 0i64;
  v8 = 0i64;
  v1 = 0i64;
  v2 = &s_TemporalAALumaHistoryRt;
  v3 = 0i64;
  do
  {
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAFilmicHistoryRt + v3)) )
    {
      v7[0] = (R_RT_Handle)s_TemporalAAFilmicHistoryRt[v1 / 0x20];
      R_RT_DestroyInternal(v7);
      s_TemporalAAFilmicHistoryRt[v1 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + v1) = 0;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + v1) = NULL;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + v1) = NULL;
    }
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAColorHistoryRt + v3)) )
    {
      v7[0] = (R_RT_Handle)s_TemporalAAColorHistoryRt[v1 / 0x20];
      R_RT_DestroyInternal(v7);
      s_TemporalAAColorHistoryRt[v1 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_allocCounter + v1) = 0;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_name + v1) = NULL;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_location + v1) = NULL;
    }
    v4 = 0i64;
    v5 = 3i64;
    do
    {
      if ( R_RT_Handle::IsValid(v2) )
      {
        v6 = &s_TemporalAALumaHistoryRt + v0 + v4;
        v7[0] = *v6;
        R_RT_DestroyInternal(v7);
        v6->m_surfaceID = 0;
        v6->m_tracking.m_allocCounter = 0;
        v6->m_tracking.m_name = NULL;
        v6->m_tracking.m_location = NULL;
      }
      ++v2;
      ++v4;
      --v5;
    }
    while ( v5 );
    v3 = v8 + 32;
    v1 += 32i64;
    v0 += 3i64;
    v8 += 32i64;
    --v9;
  }
  while ( v9 );
}

/*
==============
R_SMAA_MorphologicalAntialiasing
==============
*/
void R_SMAA_MorphologicalAntialiasing(ComputeCmdBufState *computeState, const GfxTexture *smaaEdgesTex, const GfxTexture *srcColorTex, const GfxTexture *lumaTex, const GfxWrappedRWBuffer *smaaIndirectBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  const GfxWrappedRWBuffer *v10; 
  GfxTexture *textures; 

  textures = (GfxTexture *)smaaEdgesTex;
  R_SetComputeTextures(computeState, 3, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.smaaTexImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)srcColorTex;
  R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)lumaTex;
  R_SetComputeRWTextures(computeState, 6, 1, (const GfxTexture *const *)&textures);
  smaaMorphologicalWorkQueueHBuffer = (const GfxWrappedRWBuffer *)((char *)smaaMorphologicalWorkQueueHBuffer + 32);
  R_SetComputeRWViewsWithCounters(computeState, 4, 1, (const GfxShaderBufferRWView *const *)&smaaMorphologicalWorkQueueHBuffer, NULL);
  smaaMorphologicalWorkQueueHBuffer = (const GfxWrappedRWBuffer *)&smaaMorphologicalWorkQueueVBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 5, 1, (const GfxShaderBufferRWView *const *)&smaaMorphologicalWorkQueueHBuffer, NULL);
  R_SetComputeShader(computeState, rgp.smaaMorphologicalAntialiasingVerticalComputeShader);
  v10 = smaaIndirectBuffer;
  R_DispatchIndirect(computeState, smaaIndirectBuffer->buffer, 0);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(computeState, rgp.smaaMorphologicalAntialiasingHorizontalComputeShader);
  R_DispatchIndirect(computeState, v10->buffer, 0xCu);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_SMAA_MorphologicalAntialiasingResolve
==============
*/
void R_SMAA_MorphologicalAntialiasingResolve(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *smaaIndirectBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueHBuffer, const GfxWrappedRWBuffer *smaaMorphologicalWorkQueueVBuffer)
{
  GfxShaderBufferRWView *views; 

  views = &smaaIndirectBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &smaaMorphologicalWorkQueueHBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &smaaMorphologicalWorkQueueVBuffer->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 5, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_SetComputeShader(computeState, rgp.smaaMorphologicalResolveWorkQueueComputeShader);
  R_Dispatch(computeState, 1u, 1u, 1u);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_FULL);
}

/*
==============
R_SMAA_SetGraphicsConstants
==============
*/
void R_SMAA_SetGraphicsConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  float width; 
  float height; 
  float v5; 
  float v6; 
  bool v7; 
  const GfxBackEndData *data; 
  unsigned int frameCount; 
  GfxCmdBufSourceState *source; 
  float v12; 
  __int128 v13; 
  __m128 v14; 
  __m128 v15; 
  float v16[8]; 

  width = (float)viewInfo->sceneViewport.width;
  height = (float)viewInfo->sceneViewport.height;
  v5 = 1.0 / height;
  v6 = 1.0 / width;
  v7 = viewInfo->postAA.smaaQuincunx && viewInfo->input.resolution.step == GFX_RESOLUTION_STEP_NONE;
  data = viewInfo->input.data;
  if ( v7 )
  {
    frameCount = data->frameCount;
    v16[2] = v6 * 0.5;
    v16[4] = v6 * 0.5;
    v16[0] = 0.0;
    v16[1] = 0.0;
    v16[3] = v5 * 0.5;
    v16[5] = v5 * 0.5;
    v16[6] = 0.0;
    v16[7] = 0.0;
    v14 = *(__m128 *)&v16[4 * (frameCount & 1)];
    __asm { vbroadcastss xmm0, dword ptr [rdx+170h] }
    v15 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, v14), _XMM0), v14);
  }
  else
  {
    v15 = 0i64;
  }
  source = gfxContext->source;
  v12 = (float)(data->frameCount & 1);
  source->input.consts[38].v[0] = viewInfo->postAA.smaaFilmicStrength;
  source->input.consts[38].v[1] = v12;
  *(_QWORD *)&source->input.consts[38].xyz.z = 0i64;
  ++source->constVersions[38];
  source->input.consts[39] = (vec4_t)v15;
  ++source->constVersions[39];
  source->input.consts[40].v[0] = width;
  source->input.consts[40].v[1] = height;
  source->input.consts[40].v[2] = v6;
  source->input.consts[40].v[3] = v5;
  ++source->constVersions[40];
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ )
    v13 = _xmm;
  else
    v13 = _xmm;
  source->input.consts[41] = (vec4_t)v13;
  ++source->constVersions[41];
}

/*
==============
R_SMAA_TemporalSupersampling
==============
*/
void R_SMAA_TemporalSupersampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *colorRts, R_RT_ColorHandle *srcLumaRt, const R_RT_ColorHandle *lumaRts, const R_RT_ColorHandle *velocityRts, R_RT_ColorHandle *filmicHistoryRt, R_RT_ColorHandle *transMaskRts)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  bool IsValid; 
  R_RT_ColorHandle *v17; 
  const R_RT_Surface *v18; 
  GfxCmdBufSourceState *v19; 
  R_RT_Image *v20; 
  GfxCmdBufInput *v21; 
  R_RT_Image *defaultVelocityImage; 
  GfxCmdBufSourceState *v23; 
  GfxCmdBufInput *v24; 
  R_RT_Image *v25; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufInput *v27; 
  bool v28; 
  R_RT_ColorHandle *v29; 
  const R_RT_Surface *v30; 
  GfxCmdBufSourceState *v31; 
  R_RT_Image *v32; 
  GfxCmdBufInput *v33; 
  bool v34; 
  R_RT_ColorHandle *v35; 
  const R_RT_Surface *v36; 
  GfxCmdBufSourceState *v37; 
  R_RT_Image *v38; 
  GfxCmdBufInput *v39; 
  bool v40; 
  R_RT_ColorHandle *v41; 
  const R_RT_Surface *v42; 
  GfxCmdBufSourceState *v43; 
  R_RT_Image *v44; 
  GfxCmdBufInput *v45; 
  bool v46; 
  R_RT_ColorHandle *v47; 
  const R_RT_Surface *v48; 
  GfxCmdBufSourceState *v49; 
  R_RT_Image *v50; 
  GfxCmdBufInput *v51; 
  R_RT_Image *whiteImage; 
  GfxCmdBufSourceState *v53; 
  GfxCmdBufInput *v54; 
  GfxCmdBufContext v55; 
  __int64 smaaUpsampleMode; 
  GfxCmdBufContext v57[3]; 

  if ( R_RT_Handle::IsValid(&colorRts[1].R_RT_Handle) && R_RT_Handle::GetSurface(&colorRts[1].R_RT_Handle)->m_image.m_base.format != g_R_RT_renderTargetFmts[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 433, ASSERT_TYPE_ASSERT, "(!colorRts[1] || colorRts[1].GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR ))", (const char *)&queryFormat, "!colorRts[1] || colorRts[1].GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR )") )
    __debugbreak();
  if ( R_RT_Handle::IsValid(filmicHistoryRt) && R_RT_Handle::GetSurface(filmicHistoryRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 434, ASSERT_TYPE_ASSERT, "(!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC ))", (const char *)&queryFormat, "!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC )") )
    __debugbreak();
  v57[0] = *gfxContext;
  R_SMAA_SetGraphicsConstants(v57, viewInfo);
  Surface = R_RT_Handle::GetSurface(&colorRts->R_RT_Handle);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[43] = &p_m_image->m_base;
  IsValid = R_RT_Handle::IsValid(&colorRts[1].R_RT_Handle);
  v17 = (R_RT_ColorHandle *)&colorRts[1];
  if ( !IsValid )
    v17 = (R_RT_ColorHandle *)colorRts;
  v18 = R_RT_Handle::GetSurface(v17);
  v19 = gfxContext->source;
  v20 = &v18->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v19->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[44] = &v20->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts->R_RT_Handle) )
    defaultVelocityImage = &R_RT_Handle::GetSurface(&velocityRts->R_RT_Handle)->m_image;
  else
    defaultVelocityImage = (R_RT_Image *)rgp.defaultVelocityImage;
  v23 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v24 = &v23->input;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v24->codeImages[45] = &defaultVelocityImage->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts[1].R_RT_Handle) )
    v25 = &R_RT_Handle::GetSurface(&velocityRts[1].R_RT_Handle)->m_image;
  else
    v25 = (R_RT_Image *)rgp.defaultVelocityImage;
  v26 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &v26->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[46] = &v25->m_base;
  v28 = R_RT_Handle::IsValid(&lumaRts->R_RT_Handle);
  v29 = (R_RT_ColorHandle *)lumaRts;
  if ( !v28 )
    v29 = srcLumaRt;
  v30 = R_RT_Handle::GetSurface(v29);
  v31 = gfxContext->source;
  v32 = &v30->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v33 = &v31->input;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v33->codeImages[47] = &v32->m_base;
  v34 = R_RT_Handle::IsValid(&lumaRts[1].R_RT_Handle);
  v35 = (R_RT_ColorHandle *)&lumaRts[1];
  if ( !v34 )
    v35 = srcLumaRt;
  v36 = R_RT_Handle::GetSurface(v35);
  v37 = gfxContext->source;
  v38 = &v36->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v39 = &v37->input;
  if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v39->codeImages[48] = &v38->m_base;
  v40 = R_RT_Handle::IsValid(&lumaRts[2].R_RT_Handle);
  v41 = (R_RT_ColorHandle *)&lumaRts[2];
  if ( !v40 )
    v41 = srcLumaRt;
  v42 = R_RT_Handle::GetSurface(v41);
  v43 = gfxContext->source;
  v44 = &v42->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v45 = &v43->input;
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v45->codeImages[49] = &v44->m_base;
  v46 = R_RT_Handle::IsValid(filmicHistoryRt);
  v47 = filmicHistoryRt;
  if ( !v46 )
    v47 = (R_RT_ColorHandle *)colorRts;
  v48 = R_RT_Handle::GetSurface(v47);
  v49 = gfxContext->source;
  v50 = &v48->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v51 = &v49->input;
  if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v51->codeImages[50] = &v50->m_base;
  if ( R_RT_Handle::IsValid(transMaskRts) )
    whiteImage = &R_RT_Handle::GetSurface(transMaskRts)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v53 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v54 = &v53->input;
  if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v55 = *gfxContext;
  v54->codeImages[51] = &whiteImage->m_base;
  smaaUpsampleMode = viewInfo->postAA.smaaUpsampleMode;
  v57[0] = v55;
  RB_FullScreenFilterInternal(v57, rgp.smaaTemporalSupersamplingMaterial[smaaUpsampleMode], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(451)");
}

/*
==============
R_SetPostAAInfo
==============
*/
void R_SetPostAAInfo(GfxViewInfo *viewInfo)
{
  GfxViewInfo *v1; 
  bool *p_temporalSamplingEnable; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  PostAAMode mode; 
  float y; 
  float x; 
  float v10; 
  PostAAMode m_postAAMode; 
  int v14; 
  int integer; 
  __int64 v16; 
  GfxViewParms *p_viewParms; 
  GfxViewInfo *v18; 
  __int64 v19; 
  vec4_t v20; 
  int v21; 
  float value; 
  GfxViewParms *v24; 
  GfxStDrawSurfList v25; 

  v1 = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 752, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  p_temporalSamplingEnable = &v1->postAA.temporalSamplingEnable;
  v3 = 0.0;
  v4 = FLOAT_1_0;
  v5 = 0.0;
  v6 = 0.0;
  if ( v1->postAA.temporalSamplingEnable )
  {
    mode = v1->postAA.mode;
    if ( (unsigned int)(mode - 2) <= 1 )
    {
      v4 = 0.0;
      v3 = (float)(v1->input.data->frameCount & 1);
    }
    if ( mode == POST_AA_MODE_FILMIC_SMAA_T2X )
    {
      v6 = FLOAT_1_0;
      v5 = (float)(v1->input.data->frameCount & 0xFFF);
    }
  }
  y = (float)v1->sceneViewport.y;
  x = (float)v1->sceneViewport.x;
  v10 = (float)(y * 1516171.9) + (float)(x * 8192454.5);
  v1->input.sceneConstants.temporalSamplingParams.v[0] = v3;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v1->input.sceneConstants.temporalSamplingParams.v[1] = v4;
  v1->input.sceneConstants.temporalSamplingParams.v[3] = v6;
  v1->input.sceneConstants.temporalSamplingParams.v[2] = (float)((float)(v10 - *(float *)&_XMM3) * 575485.31) + v5;
  m_postAAMode = v1->viewportFeatures.m_postAAMode;
  LOBYTE(v14) = R_Screenshot_GetDeferredScreenshotPipelineStage(v1->deferredScreenshotIndex);
  integer = 0;
  if ( v14 == 2 )
    m_postAAMode = POST_AA_MODE_NONE;
  v1->postAA.mode = m_postAAMode;
  if ( m_postAAMode )
  {
    v16 = 3i64;
    if ( !v1->tonemap.enabled )
    {
      v1->postAA.mode = POST_AA_MODE_NONE;
      p_viewParms = &v1->viewParmsSet.frames[2].viewParms;
      v18 = v1;
      v19 = 3i64;
      do
      {
        v18->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[0] = p_viewParms->viewMatrix.m.m[0];
        v18->viewParms.viewMatrix.m.row1 = p_viewParms->viewMatrix.m.row1;
        v18->viewParms.viewMatrix.m.row2 = p_viewParms->viewMatrix.m.row2;
        v18->viewParms.viewMatrix.m.row3 = p_viewParms->viewMatrix.m.row3;
        v18->viewParms.projectionMatrix.m.m[0] = p_viewParms->projectionMatrix.m.m[0];
        v18->viewParms.projectionMatrix.m.row1 = p_viewParms->projectionMatrix.m.row1;
        v18->viewParms.projectionMatrix.m.row2 = p_viewParms->projectionMatrix.m.row2;
        v20 = p_viewParms->projectionMatrix.m.m[3];
        p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
        v18 = (GfxViewInfo *)((char *)v18 + 128);
        *(vec4_t *)&v18[-1].shellShock.enabled = v20;
        --v19;
      }
      while ( v19 );
      m_postAAMode = POST_AA_MODE_NONE;
    }
    v21 = m_postAAMode;
    value = r_smaaFilmicStrength->current.value;
    v1->postAA.smaaFilmicStrength = value;
    if ( value == 0.0 && m_postAAMode == POST_AA_MODE_FILMIC_SMAA_T2X )
    {
      v21 = 2;
      v1->postAA.mode = POST_AA_MODE_SMAA_T2X;
    }
    v1->postAA.smaaQuincunx = r_smaaQuincunx->current.enabled;
    v1->postAA.smaaTransMask = r_smaaTransMask->current.enabled;
    if ( v1->input.resolution.step && (unsigned int)(v21 - 2) <= 1 )
      integer = r_smaaUpsampleMode->current.integer;
    v1->postAA.smaaUpsampleMode = integer;
    if ( v1->validFrameCount < 3 )
    {
      v24 = &v1->viewParmsSet.frames[2].viewParms;
      do
      {
        v1 = (GfxViewInfo *)((char *)v1 + 128);
        v25 = (GfxStDrawSurfList)v24->viewMatrix.m.m[0];
        v24 = (GfxViewParms *)((char *)v24 + 128);
        v1[-1].drawList[64].superTerrainSurfList = v25;
        *(_OWORD *)&v1[-1].spotshadowActiveCache.m_surfaceID = *(_OWORD *)&v24[-1].camera.axis.row0.y;
        *(_OWORD *)&v1[-1].spotshadowActiveCache.m_tracking.m_name = *(_OWORD *)&v24[-1].camera.axis.row1.z;
        *(_OWORD *)&v1[-1].spotshadowHTileMask = *(_OWORD *)&v24[-1].camera.tanHalfFovX;
        *(_OWORD *)&v1[-1].sunshadowCacheRt.m_surfaceID = *(_OWORD *)v24[-1].camera.zPlanes;
        *(_OWORD *)&v1[-1].sunshadowCacheRt.m_tracking.m_name = *(_OWORD *)&v24[-1].camera.focalLength;
        *(_OWORD *)&v1[-1].sunShadowCacheBeforeState = *(_OWORD *)&v24[-1].camera.visibilityQueryDistance;
        *(_OWORD *)&v1[-1].shellShock.enabled = *(_OWORD *)&v24[-1].cameraMotion;
        --v16;
      }
      while ( v16 );
    }
    *p_temporalSamplingEnable = r_temporalSamplingEnable->current.enabled;
  }
}

/*
==============
R_ShutdownSMAATemporal
==============
*/
void R_ShutdownSMAATemporal(void)
{
  __int64 v0; 
  unsigned __int64 v1; 
  R_RT_Handle *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  R_RT_Handle *v6; 
  R_RT_Handle v7[2]; 
  __int64 v8; 
  __int64 v9; 

  v9 = 2i64;
  v0 = 0i64;
  v8 = 0i64;
  v1 = 0i64;
  v2 = &s_TemporalAALumaHistoryRt;
  v3 = 0i64;
  do
  {
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAFilmicHistoryRt + v3)) )
    {
      v7[0] = (R_RT_Handle)s_TemporalAAFilmicHistoryRt[v1 / 0x20];
      R_RT_DestroyInternal(v7);
      s_TemporalAAFilmicHistoryRt[v1 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + v1) = 0;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + v1) = NULL;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + v1) = NULL;
    }
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAColorHistoryRt + v3)) )
    {
      v7[0] = (R_RT_Handle)s_TemporalAAColorHistoryRt[v1 / 0x20];
      R_RT_DestroyInternal(v7);
      s_TemporalAAColorHistoryRt[v1 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_allocCounter + v1) = 0;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_name + v1) = NULL;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_location + v1) = NULL;
    }
    v4 = 0i64;
    v5 = 3i64;
    do
    {
      if ( R_RT_Handle::IsValid(v2) )
      {
        v6 = &s_TemporalAALumaHistoryRt + v0 + v4;
        v7[0] = *v6;
        R_RT_DestroyInternal(v7);
        v6->m_surfaceID = 0;
        v6->m_tracking.m_allocCounter = 0;
        v6->m_tracking.m_name = NULL;
        v6->m_tracking.m_location = NULL;
      }
      ++v2;
      ++v4;
      --v5;
    }
    while ( v5 );
    v3 = v8 + 32;
    v1 += 32i64;
    v0 += 3i64;
    v8 += 32i64;
    --v9;
  }
  while ( v9 );
}

