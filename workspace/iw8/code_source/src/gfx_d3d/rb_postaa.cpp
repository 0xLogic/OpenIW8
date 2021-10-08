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
  bool v10; 
  PostAAMode v16; 
  PostAAMode v17; 
  int v18; 
  int v19; 
  GfxCmdBufContext v20; 
  R_RT_ColorHandle v21; 

  _RBX = viewInfo;
  mode = viewInfo->postAA.mode;
  _RDI = gfxContext;
  if ( mode )
  {
    if ( (unsigned int)(mode - 1) > 2 )
    {
      v17 = mode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 893, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(893): unhandled case %d in switch statement", v17) )
        __debugbreak();
    }
    else
    {
      __asm
      {
        vmovaps [rsp+88h+var_18], xmm6
        vmovups xmm6, xmmword ptr [rcx]
      }
      R_GPU_BeginTimer(GPU_TIMER_POST_AA);
      __asm { vpextrq rbp, xmm6, 1 }
      R_ProfBeginNamedEvent(_RBP, "SMAA");
      if ( (unsigned int)(_RBX->postAA.mode - 1) > 2 )
      {
        v19 = 3;
        v18 = 1;
        v16 = _RBX->postAA.mode;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 663, ASSERT_TYPE_ASSERT, "( POST_AA_MODE_SMAA_1X ) <= ( viewInfo->postAA.mode ) && ( viewInfo->postAA.mode ) <= ( POST_AA_MODE_FILMIC_SMAA_T2X )", "viewInfo->postAA.mode not in [POST_AA_MODE_SMAA_1X, POST_AA_MODE_FILMIC_SMAA_T2X]\n\t%i not in [%i, %i]", v16, v18, v19) )
          __debugbreak();
      }
      __asm { vmovdqa [rsp+88h+var_48], xmm6 }
      RB_PerformPostSMAA_MorphologicalAntialiasing(&v20, _RBX, activeGroup);
      v10 = _RBX->postAA.mode < POST_AA_MODE_SMAA_T2X;
      __asm { vmovdqa [rsp+88h+var_48], xmm6 }
      if ( v10 )
        R_RT_DestroyAndClearGroup(&v20, &_RBX->sceneRtInput.m_lumaGroup);
      else
        RB_PerformPostSMAA_TemporalSupersampling(&v20, _RBX, activeGroup);
      R_ProfEndNamedEvent(_RBP);
      R_GPU_EndTimer();
      __asm { vmovaps xmm6, [rsp+88h+var_18] }
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups [rsp+88h+var_48], xmm0
    }
    R_RT_DestroyAndClearGroup(&v20, &_RBX->sceneRtInput.m_lumaGroup);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+88h+var_48], xmm0
  }
  RB_RotateHalfVelocityRt(&v20, _RBX);
  if ( rg.debugTextureOverlay != 14 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3770h]
      vmovups xmm1, xmmword ptr [rdi]
      vmovups [rsp+88h+var_38], ymm0
      vmovups [rsp+88h+var_48], xmm1
    }
    R_RT_Destroy(&v20, &v21);
    _RBX->sceneRtInput.m_transMask.m_surfaceID = 0;
    _RBX->sceneRtInput.m_transMask.m_tracking.m_allocCounter = 0;
    _RBX->sceneRtInput.m_transMask.m_tracking.m_name = NULL;
    _RBX->sceneRtInput.m_transMask.m_tracking.m_location = NULL;
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
  const dvar_t *v17; 
  unsigned int m_allocHeight; 
  const dvar_t *v19; 
  R_RT_Flags rtFlags; 
  bool v24; 
  const R_RT_Surface *v25; 
  CmdBufState *Resident; 
  const R_RT_Surface *v27; 
  CmdBufState *v28; 
  const R_RT_Surface *v29; 
  CmdBufState *v30; 
  const GfxViewInfo *v32; 
  ComputeCmdBufState *v33; 
  CmdBufState *state[2]; 
  R_RT_Handle v44; 
  unsigned int height; 
  R_RT_Handle v46; 
  R_RT_Handle v47; 
  R_RT_Handle result; 
  R_RT_Handle v50; 

  v4 = gfxContext->state;
  _R13 = gfxContext;
  _RBX = activeGroup;
  _R15 = viewInfo;
  if ( !R_IsLockedIfGfxImmediateContext(v4->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(v4);
  v9 = _RBX->m_colorRtCount == 1;
  state[0] = GfxComputeCmdBufState;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+8]
    vmovups [rbp+0A0h+var_C0], ymm0
  }
  RB_CreateRenderTargetAlias((R_RT_ColorHandle *)&v50, (const R_RT_ColorHandle *)&v47, GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR, "SMAA MLAA Linear");
  if ( _R15->sceneRtInput.m_lumaGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r15+3690h]
    vmovd   eax, xmm0
    vmovups [rbp+0A0h+var_C0], ymm0
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v46);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 281, ASSERT_TYPE_ASSERT, "(lumaRt)", (const char *)&queryFormat, "lumaRt") )
      __debugbreak();
  }
  width = R_RT_Handle::GetSurface(&v50)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(&v50)->m_image.m_base.height;
  m_allocWidth = R_RT_Handle::GetSurface(&v50)->m_allocWidth;
  Surface = R_RT_Handle::GetSurface(&v50);
  v17 = r_deviceDebug;
  m_allocHeight = Surface->m_allocHeight;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
    goto LABEL_25;
  v19 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v19->current.enabled )
LABEL_25:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  _RAX = R_RT_CreateInternal(&result, width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[37], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "SMAA Edges", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(288)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+0A0h+var_A0], ymm0
    vmovups ymmword ptr [rbp+0A0h+var_110.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_110.m_surfaceID]
        vmovups [rbp+0A0h+var_A0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_110.m_surfaceID]
        vmovups [rbp+0A0h+var_A0], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+0A0h+var_A0] }
      if ( v24 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0A0h+var_110.m_surfaceID], ymm0 }
  v25 = R_RT_Handle::GetSurface(&v44);
  Resident = (CmdBufState *)R_Texture_GetResident(v25->m_image.m_base.textureId);
  v27 = R_RT_Handle::GetSurface(&v50);
  v28 = (CmdBufState *)R_Texture_GetResident(v27->m_image.m_base.textureId);
  v29 = R_RT_Handle::GetSurface(&v46);
  v30 = (CmdBufState *)R_Texture_GetResident(v29->m_image.m_base.textureId);
  R_ProfBeginNamedEvent(v4, "Edge Detection");
  __asm
  {
    vmovups ymm0, [rbp+0A0h+var_A0]
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(state[0], &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(state[0], &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(state[0], &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state[0]);
  v32 = _R15;
  v33 = (ComputeCmdBufState *)state[0];
  R_Post_SetComputeConstants((ComputeCmdBufState *)state[0], v32, width, height, 0);
  state[0] = v28;
  R_SetComputeTextures(v33, 2, 1, (const GfxTexture *const *)state);
  state[0] = v30;
  R_SetComputeTextures(v33, 1, 1, (const GfxTexture *const *)state);
  state[0] = Resident;
  R_SetComputeRWTextures(v33, 1, 1, (const GfxTexture *const *)state);
  LODWORD(state[0]) = 0;
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 4, 1, (const GfxShaderBufferRWView *const *)&v44, (const unsigned int *)state);
  LODWORD(state[0]) = 0;
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 5, 1, (const GfxShaderBufferRWView *const *)&v44, (const unsigned int *)state);
  R_SetComputeShader(v33, rgp.smaaEdgeDetectionComputeShader);
  R_Dispatch(v33, (width + 7) >> 3, (height + 7) >> 3, 1u);
  R_ComputeWaitForCompute(v33, PIPE_FLUSH_FULL);
  R_ProfEndNamedEvent(v4);
  R_ProfBeginNamedEvent(v4, "Morphological Antialiasing Resolve");
  R_HW_AddResourceTransition(v33, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PREDICATION|D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v33);
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaIndirectBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 0, 1, (const GfxShaderBufferRWView *const *)&v44, NULL);
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 4, 1, (const GfxShaderBufferRWView *const *)&v44, NULL);
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 5, 1, (const GfxShaderBufferRWView *const *)&v44, NULL);
  R_SetComputeShader(v33, rgp.smaaMorphologicalResolveWorkQueueComputeShader);
  R_Dispatch(v33, 1u, 1u, 1u);
  R_ComputeWaitForCompute(v33, PIPE_FLUSH_FULL);
  R_ProfEndNamedEvent(v4);
  R_ProfBeginNamedEvent(v4, "Morphological Antialiasing");
  __asm
  {
    vmovups ymm0, [rbp+0A0h+var_A0]
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(v33, &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v33, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0A0h+var_60.m_surfaceID]
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(v33, &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+0A0h+var_C0]
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(v33, &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v33);
  *(_QWORD *)&v44.m_surfaceID = Resident;
  R_SetComputeTextures(v33, 3, 1, (const GfxTexture *const *)&v44);
  *(_QWORD *)&v44.m_surfaceID = R_Texture_GetResident(rgp.smaaTexImage->textureId);
  R_SetComputeTextures(v33, 0, 1, (const GfxTexture *const *)&v44);
  *(_QWORD *)&v44.m_surfaceID = v28;
  R_SetComputeRWTextures(v33, 2, 1, (const GfxTexture *const *)&v44);
  *(_QWORD *)&v44.m_surfaceID = v30;
  R_SetComputeRWTextures(v33, 6, 1, (const GfxTexture *const *)&v44);
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 4, 1, (const GfxShaderBufferRWView *const *)&v44, NULL);
  *(_QWORD *)&v44.m_surfaceID = &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v33, 5, 1, (const GfxShaderBufferRWView *const *)&v44, NULL);
  R_SetComputeShader(v33, rgp.smaaMorphologicalAntialiasingVerticalComputeShader);
  R_DispatchIndirect(v33, s_smaaCompute.smaaIndirectBuffer.buffer, 0);
  R_ComputeWaitForCompute(v33, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(v33, rgp.smaaMorphologicalAntialiasingHorizontalComputeShader);
  R_DispatchIndirect(v33, s_smaaCompute.smaaIndirectBuffer.buffer, 0xCu);
  R_ComputeWaitForCompute(v33, PIPE_FLUSH_PARTIAL);
  R_HW_AddResourceTransition(v33, &s_smaaCompute.smaaIndirectBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_PREDICATION|D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v33, &s_smaaCompute.smaaMorphologicalWorkQueueHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(v33, &s_smaaCompute.smaaMorphologicalWorkQueueVBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0A0h+var_60.m_surfaceID]
    vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(v33, &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+0A0h+var_C0]
    vmovups [rbp+0A0h+var_C0], ymm0
  }
  R_HW_AddResourceTransition(v33, &v47, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v33);
  R_ProfEndNamedEvent(v4);
  __asm
  {
    vmovups ymm0, [rbp+0A0h+var_A0]
    vmovups [rbp+0A0h+var_C0], ymm0
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmmword ptr [rbp+0A0h+var_110.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v44, (R_RT_ColorHandle *)&v47);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0A0h+var_60.m_surfaceID]
    vmovups xmm1, xmmword ptr [r13+0]
    vmovups [rbp+0A0h+var_C0], ymm0
    vmovups xmmword ptr [rbp+0A0h+var_110.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v44, (R_RT_ColorHandle *)&v47);
  R_FlushImmediateContext();
}

/*
==============
RB_PerformPostSMAA_TemporalSupersampling
==============
*/
void RB_PerformPostSMAA_TemporalSupersampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  bool v7; 
  __int64 clientIndex; 
  bool v12; 
  const dvar_t *v27; 
  unsigned int sceneWidthStep0; 
  unsigned int sceneHeightStep0; 
  const dvar_t *v30; 
  R_RT_Flags rtFlags; 
  GfxCmdBufState *state; 
  const dvar_t *v37; 
  R_RT_Flags v38; 
  __int64 v45; 
  const char *name; 
  bool v50; 
  GfxCmdBufState *v51; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Handle v109; 
  R_RT_Handle v110; 
  unsigned int v111; 
  GfxCmdBufContext *v113; 
  const GfxViewInfo *v114; 
  R_RT_ColorHandle v116; 
  R_RT_ColorHandle v117; 
  __m256i v118; 
  R_RT_ColorHandle v119; 
  __m256i v120; 
  __m256i v121; 
  R_RT_ColorHandle v123; 
  __m256i v124; 
  R_RT_ColorHandle v125; 
  __int16 v126; 
  int v127; 
  vec4_t clearColor[2]; 
  R_RT_ColorHandle v130; 
  R_RT_ColorHandle result; 

  _R15 = viewInfo;
  v114 = viewInfo;
  _R14 = gfxContext;
  v113 = gfxContext;
  _RSI = activeGroup;
  R_ProfBeginNamedEvent(gfxContext->state, "Temporal Supersampling");
  v7 = _RSI->m_colorRtCount == 1;
  clientIndex = (unsigned int)_R15->clientIndex;
  v111 = _R15->clientIndex;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v7 = _R15->sceneRtInput.m_lumaGroup.m_colorRtCount == 1;
  __asm
  {
    vmovups ymm1, ymmword ptr [rsi+8]
    vmovups [rbp+240h+var_248], ymm1
  }
  if ( !v7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm { vmovups ymm1, [rbp+240h+var_248] }
  }
  __asm { vmovups ymm0, ymmword ptr [r15+3690h] }
  _RDX = 0x140000000ui64;
  v12 = _R15->validFrameCount < 3;
  __asm
  {
    vmovups [rbp+240h+var_220], ymm0
    vmovups ymm0, ymmword ptr [r15+3770h]
    vmovups [rbp+240h+var_100], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rbp+240h+var_D0], xmm0
  }
  v126 = 0;
  v127 = 0;
  __asm { vmovups [rbp+240h+var_140], ymm1 }
  if ( v12 )
  {
    __asm
    {
      vmovdqu xmmword ptr [rbp+240h+var_120+10h], xmm0
      vmovdqu xmmword ptr [rbp+240h+var_1C0+10h], xmm0
      vmovdqu xmmword ptr [rbp+240h+var_1A0+10h], xmm0
      vmovdqu xmmword ptr [rbp+240h+var_180+10h], xmm0
    }
    v109.m_surfaceID = 0;
    v109.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+240h+var_2C0.m_tracking.m_name], xmm0
      vmovdqu xmmword ptr [rbp+240h+var_200+10h], xmm0
      vmovdqu xmmword ptr [rbp+240h+var_1E0+10h], xmm0
      vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
      vmovups [rbp+240h+var_160], ymm0
      vmovups [rbp+240h+var_248], ymm1
    }
    v124.m256i_i16[0] = 0;
    v124.m256i_i32[2] = 0;
    v119.m_surfaceID = 0;
    v119.m_tracking.m_allocCounter = 0;
    v120.m256i_i16[0] = 0;
    v120.m256i_i32[2] = 0;
    v121.m256i_i16[0] = 0;
    v121.m256i_i32[2] = 0;
    v117.m_surfaceID = 0;
    v117.m_tracking.m_allocCounter = 0;
    v118.m256i_i16[0] = 0;
    v118.m256i_i32[2] = 0;
  }
  else
  {
    _RAX = 96 * clientIndex;
    _RCX = 32 * clientIndex;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rdx+144AAD50h]
      vmovups [rbp+240h+var_1C0], ymm0
      vmovups ymm0, ymmword ptr [rax+rdx+144AAD70h]
      vmovups [rbp+240h+var_1A0], ymm0
      vmovups ymm0, ymmword ptr [rax+rdx+144AAD90h]
      vmovups [rbp+240h+var_180], ymm0
      vmovups ymm0, ymmword ptr [rcx+rdx+144AAD10h]
      vmovups [rbp+240h+var_120], ymm0
      vmovups ymm0, ymmword ptr [rcx+rdx+144AACD0h]
      vmovups [rbp+240h+var_160], ymm0
    }
    _RAX = RB_GetHalfVelocityRt(&result, _R15, 0);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+240h+var_200], ymm0
    }
    _RAX = RB_GetHalfVelocityRt(&result, _R15, 1u);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+240h+var_1E0], ymm0
    }
  }
  v27 = r_deviceDebug;
  sceneWidthStep0 = _R15->input.resolution.sceneWidthStep0;
  sceneHeightStep0 = _R15->input.resolution.sceneHeightStep0;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.enabled )
    goto LABEL_19;
  v30 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v30->current.enabled )
LABEL_19:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  _RAX = R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_renderTargetFmts[52], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SMAA Temporal", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(537)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+240h+var_278], ymm0
    vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v109);
    if ( (R_RT_Handle::GetSurface(&v109)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
        vmovups [rbp+240h+var_278], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
        vmovups [rbp+240h+var_278], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rbp+240h+var_278] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  state = _R14->state;
  __asm { vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v109, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v7 = _R15->postAA.mode == POST_AA_MODE_FILMIC_SMAA_T2X;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+240h+var_2C0.m_tracking.m_name], xmm0
    vmovdqu xmmword ptr [rbp+240h+var_2A0.m_tracking.m_name], xmm0
  }
  v109.m_surfaceID = 0;
  v109.m_tracking.m_allocCounter = 0;
  v110.m_surfaceID = 0;
  v110.m_tracking.m_allocCounter = 0;
  if ( v7 )
  {
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_35;
    v37 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( !v37->current.enabled )
LABEL_35:
      v38 = R_RT_Flag_None;
    else
      v38 = R_RT_Flag_PreferESRAM;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rbp+240h+var_C0], xmm0
    }
    _RAX = R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_depthStencilFmts[7], v38, R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_DEPTH_WRITE, "SMAA Depth", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(545)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+240h+var_2A0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v110);
      if ( (R_RT_Handle::GetSurface(&v110)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID]
          vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0
        }
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID]
          vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v45 = 2i64;
    name = "SMAA Filmic [0]";
    if ( (_R15->input.data->frameCount & 1) != 0 )
      name = "SMAA Filmic [1]";
    _RAX = R_RT_CreateInternal(&result, sceneWidthStep0, sceneHeightStep0, sceneWidthStep0, sceneHeightStep0, 1u, 1u, 1u, g_R_RT_renderTargetFmts[52], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(548)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+240h+var_2A0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+240h+var_C0], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)clearColor);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+240h+var_C0]
          vmovups ymmword ptr [rbp+240h+var_2A0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+240h+var_C0]
          vmovups ymmword ptr [rbp+240h+var_2A0.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID] }
        if ( v50 )
          __debugbreak();
      }
    }
    v51 = _R14->state;
    __asm { vmovups ymmword ptr [rbp+240h+var_C0], ymm0 }
    R_AddRenderTargetTransition(v51, (R_RT_ColorHandle *)clearColor, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R14->state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID]
      vmovups ymm1, [rbp+240h+var_278]
    }
    _RSI->m_colorRtCount = 2;
    _RBX = &result;
    __asm
    {
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups [rbp+240h+var_60], ymm1
    }
    _R12 = (char *)_RSI - (char *)&result;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+240h+var_C0], ymm0
      }
      if ( (_WORD)_EAX )
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
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [r12+rbx+8], ymm0
      }
      ++_RBX;
      --v45;
    }
    while ( v45 );
    __asm { vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID] }
    _R14 = v113;
    __asm { vmovups ymmword ptr [rsi+88h], ymm0 }
    state = _R14->state;
    R_ClearRtGroup(state, _RSI, 0x10u, 0, PIPE_FLUSH_FULL);
    _R15 = v114;
  }
  else
  {
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm1, [rbp+240h+var_278]
      vmovups ymmword ptr [rbp+240h+var_C0], ymm1
    }
    R_RT_Group::AssignColor(_RSI, (R_RT_ColorHandle *)clearColor);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
      vmovups ymmword ptr [rbp+240h+var_2C0.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID]
      vmovups ymmword ptr [rbp+240h+var_2A0.m_surfaceID], ymm0
    }
  }
  _RAX = R_RT_Group::GetValidRt(_RSI, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+240h+var_C0], ymm0
  }
  height = R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)clearColor);
  source = _R14->source;
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+240h+var_C0], xmm0
  }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)clearColor, _RSI, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(572)");
  __asm
  {
    vmovups ymm0, [rbp+240h+var_160]
    vmovups ymm1, [rbp+240h+var_220]
    vmovups [rbp+240h+var_A0], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm1
    vmovups xmmword ptr [rbp+240h+var_C0], xmm0
  }
  R_SMAA_TemporalSupersampling((GfxCmdBufContext *)clearColor, _R15, &v123, &result, &v119, &v117, &v130, &v125);
  __asm { vmovups xmm1, xmmword ptr [r14] }
  _RBX = v111;
  _RAX = 0x140000000ui64;
  _R12 = 32i64 * v111;
  __asm
  {
    vmovups xmmword ptr [rbp+240h+var_C0], xmm1
    vmovups ymm0, ymmword ptr [r12+rax+144AAD10h]
    vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
  __asm
  {
    vmovups ymm0, [rbp+240h+var_248]
    vmovups xmm1, xmmword ptr [r14]
  }
  _RAX = 0x140000000ui64;
  __asm { vmovups ymmword ptr [r12+rax+144AAD10h], ymm0 }
  _RBX *= 96i64;
  __asm
  {
    vmovups xmmword ptr [rbp+240h+var_C0], xmm1
    vmovups ymm0, ymmword ptr [rbx+rax+144AAD90h]
    vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
  _RAX = 0x140000000ui64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+rax+144AAD70h]
    vmovups ymmword ptr [rbx+rax+144AAD90h], ymm0
    vmovups ymm0, ymmword ptr [rbx+rax+144AAD50h]
    vmovups ymmword ptr [rbx+rax+144AAD70h], ymm0
    vmovups ymm0, [rbp+240h+var_220]
    vmovups ymmword ptr [rbx+rax+144AAD50h], ymm0
  }
  _R15->sceneRtInput.m_lumaGroup.m_colorRtCount = 0;
  _R15->sceneRtInput.m_lumaGroup.m_depthRt.m_surfaceID = 0;
  _R15->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_allocCounter = 0;
  _R15->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_name = NULL;
  _R15->sceneRtInput.m_lumaGroup.m_depthRt.m_tracking.m_location = NULL;
  _R15->sceneRtInput.m_lumaGroup.m_vrsRt.m_surfaceID = 0;
  _R15->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
  _R15->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_name = NULL;
  _R15->sceneRtInput.m_lumaGroup.m_vrsRt.m_tracking.m_location = NULL;
  if ( _R15->postAA.mode == POST_AA_MODE_FILMIC_SMAA_T2X )
  {
    __asm
    {
      vmovups ymm0, [rbp+240h+var_278]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, &result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+240h+var_2A0.m_surfaceID]
      vmovups [rbp+240h+var_A0], ymm0
    }
    R_RT_Group::AssignColorDepth(_RSI, &v130, (R_RT_DepthHandle *)&result);
    R_SetRenderTargetSize(source, _RSI, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+240h+var_C0], xmm0
    }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)clearColor, _RSI, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(605)");
    __asm
    {
      vmovups ymm0, [rbp+240h+var_248]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+240h+var_160]
      vmovups [rbp+240h+var_A0], ymm0
      vmovups ymm0, [rbp+240h+var_278]
      vmovups [rbp+240h+var_220], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+240h+var_C0], xmm0
    }
    R_SMAA_FilmicFiltering((GfxCmdBufContext *)clearColor, _R15, &v116, &v117, &v130, &result, &v125);
    __asm { vmovups xmm1, xmmword ptr [r14] }
    _RDI = 0x140000000ui64;
    __asm
    {
      vmovups ymm0, ymmword ptr [r12+rdi+144AACD0h]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+240h+var_C0], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    if ( _RSI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+8]
      vmovups ymmword ptr [r12+rdi+144AACD0h], ymm0
      vmovups ymm0, [rbp+240h+var_278]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+240h+var_C0], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+240h+var_2C0.m_surfaceID]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+240h+var_C0], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)clearColor, (R_RT_DepthHandle *)&result);
    if ( _RSI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rsi+8] }
    state = _R14->state;
    __asm { vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(state, &result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    if ( _RSI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+8]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
    }
    _RAX = RB_CreateRenderTargetAlias(&v130, &result, GFX_RENDERTARGET_FORMAT_SMAA_FILMIC, "SMAA Output Alias");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(_RSI, &result);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r12+rax+144AACD0h]
      vmovups xmm1, xmmword ptr [r14]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+240h+var_C0], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)clearColor, &result);
    s_TemporalAAFilmicHistoryRt[_R12 / 0x20].m_surfaceID = 0;
    *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + _R12) = 0;
    *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + _R12) = NULL;
    *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + _R12) = NULL;
    if ( _RSI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    {
      __debugbreak();
      state = _R14->state;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+8]
      vmovups ymmword ptr [rbp+240h+result.baseclass_0.m_surfaceID], ymm0
    }
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
  unsigned __int32 v7; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  R_RT_Handle *v31; 
  R_RT_Image *p_m_image; 
  __int64 v33; 
  const char *v43; 
  GfxCmdBufContext result[2]; 
  R_RT_Handle *v49; 
  R_RT_Group v50; 
  R_RT_Group v51; 

  __asm { vmovaps [rsp+250h+var_50], xmm6 }
  source = gfxContext->source;
  _RSI = gfxContext;
  v7 = viewInfo->postAA.mode - 2;
  v49 = mainSceneColorRt;
  _R12 = postOpaqueLumaRt;
  if ( v7 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 1048, ASSERT_TYPE_ASSERT, "(R_PostAAHasTemporalSupersampling( viewInfo->postAA.mode ))", (const char *)&queryFormat, "R_PostAAHasTemporalSupersampling( viewInfo->postAA.mode )") )
    __debugbreak();
  state = _RSI->state;
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
    _RAX = RB_GetBackendCmdBufContext(result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rdx, xmm0, 1; in
    }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = source->input.data;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12]
    vmovups ymmword ptr [rsp+250h+result.source], ymm0
  }
  height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r12]
    vmovups ymmword ptr [rsp+250h+result.source], ymm0
  }
  R_RT_Group::AssignColor(&v50, (R_RT_ColorHandle *)result);
  _RCX = &v51;
  _RAX = &v50;
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
  m_location = v50.m_vrsRt.m_tracking.m_location;
  __asm
  {
    vmovups ymmword ptr [rcx+0A0h], ymm0
    vmovups xmm0, xmmword ptr [rsi]
  }
  v51.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups xmmword ptr [rsp+250h+result.source], xmm0 }
  R_SetRenderTargetsInternal(result, &v51, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1056)");
  __asm
  {
    vmovups xmm6, xmmword ptr [rsi]
    vpextrq rcx, xmm6, 1
    vmovq   rbx, xmm6
  }
  *(double *)&_XMM0 = R_Tonemap_GetFinalExposureAndRadiometricScale(*(const GfxBackEndData **)(_RCX + 2504), viewInfo);
  v31 = v49;
  *(_QWORD *)(_RBX + 2404) = 0i64;
  *(_DWORD *)(_RBX + 2412) = 0;
  __asm { vmovss  dword ptr [rbx+960h], xmm0 }
  ++*(_WORD *)(_RBX + 10240);
  p_m_image = &R_RT_Handle::GetSurface(v31)->m_image;
  v33 = _RBX + 1792;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(v33 + 6488) = p_m_image;
  __asm { vmovdqa xmmword ptr [rsp+250h+result.source], xmm6 }
  RB_FullScreenFilterInternal(result, rgp.smaaBlitOpaqueLuma, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1012)");
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rbp+150h+var_160], xmm0
    vmovdqu [rbp+150h+var_140], xmm0
  }
  _RCX = &v51;
  v50.m_colorRtCount = 0;
  _RAX = &v50;
  v50.m_depthRt.m_surfaceID = 0;
  v50.m_depthRt.m_tracking.m_allocCounter = 0;
  v50.m_vrsRt.m_surfaceID = 0;
  v50.m_vrsRt.m_tracking.m_allocCounter = 0;
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
  v43 = v50.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v51.m_vrsRt.m_tracking.m_location = v43;
  __asm { vmovups xmmword ptr [rsp+250h+result.source], xmm6 }
  R_SetRenderTargetsInternal(result, &v51, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1059)");
  R_ResetRenderTargets(state);
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    _RAX = RB_GetBackendCmdBufContext(result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rcx, xmm0, 1; out
    }
    if ( state != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, state);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  __asm { vmovaps xmm6, [rsp+250h+var_50] }
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
  const R_RT_Surface *v15; 
  const R_RT_Surface *v19; 
  const GfxTexture *v20; 
  R_RT_ColorHandle v21; 
  R_RT_Handle v22; 
  R_RT_ColorHandle v23; 

  _RBX = fullFloatZ;
  _RSI = mainSceneColorRt;
  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm1, ymmword ptr [rsi]
    vpxor   xmm0, xmm0, xmm0
  }
  v21.m_surfaceID = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+0A8h+var_68+10h], xmm0
    vmovups ymmword ptr [rsp+0A8h+var_48.m_surfaceID], ymm1
  }
  v21.m_tracking.m_allocCounter = 0;
  v15 = R_RT_Handle::GetSurface(&v22);
  R_SetComputeShader(computeState, rgp.postOpaqueProcesses[((unsigned int)v15->m_rtFlags >> 14) & 1]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, [rsp+0A8h+var_68]
    vmovups [rsp+0A8h+var_28], ymm0
    vmovups ymm0, ymmword ptr [rsp+0A8h+var_48.m_surfaceID]
    vmovups [rsp+0A8h+var_68], ymm1
    vmovups ymmword ptr [rsp+0A8h+var_48.m_surfaceID], ymm0
  }
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, (R_RT_ColorHandle *)&v22, &v21, &v23, volScatterImage, volExtinctionImage, NULL);
  v19 = R_RT_Handle::GetSurface(_RSI);
  v20 = R_Texture_GetResident(v19->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  const R_RT_Surface *v23; 
  const GfxTexture *v24; 
  const R_RT_Surface *v25; 
  const GfxTexture *v26; 
  R_RT_ColorHandle v27; 
  R_RT_Handle v28; 
  R_RT_Handle v29; 
  GfxTexture *textures; 

  _RDI = mainSceneColorRt;
  _RSI = postOpaqueLumaRt;
  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm1, ymmword ptr [rdi]
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0B8h+var_78+10h], xmm0
    vmovups ymm0, ymmword ptr [rsi]
  }
  v27.m_surfaceID = 0;
  __asm { vmovups ymmword ptr [rsp+0B8h+var_38.m_surfaceID], ymm0 }
  v27.m_tracking.m_allocCounter = 0;
  __asm { vmovups ymmword ptr [rsp+0B8h+var_58.m_surfaceID], ymm1 }
  v17 = R_RT_Handle::GetSurface(&v29);
  textures = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v18 = R_RT_Handle::GetSurface(&v28);
  R_SetComputeShader(computeState, rgp.postOpaqueProcessesLuma[((unsigned int)v18->m_rtFlags >> 14) & 1]);
  _RAX = fullFloatZ;
  __asm
  {
    vmovups ymm1, [rsp+0B8h+var_78]
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B8h+var_38.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rsp+0B8h+var_58.m_surfaceID]
    vmovups [rsp+0B8h+var_78], ymm1
    vmovups ymmword ptr [rsp+0B8h+var_58.m_surfaceID], ymm0
  }
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, (R_RT_ColorHandle *)&v28, &v27, (R_RT_ColorHandle *)&v29, volScatterImage, volExtinctionImage, NULL);
  v23 = R_RT_Handle::GetSurface(_RDI);
  v24 = R_Texture_GetResident(v23->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v25 = R_RT_Handle::GetSurface(_RSI);
  v26 = R_Texture_GetResident(v25->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  GfxTextureId textureId; 
  const GfxImage *Image; 
  GfxImage *MagmaHeightfield; 
  const GfxBackEndData *v27; 
  const GfxBackEndData *v30; 
  int v41; 
  GfxTexture *textures; 
  base_vec4_t<unsigned int> result; 
  int data[8]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  *(_QWORD *)result.v = scopeImage;
  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v16 = R_RT_Handle::GetSurface(fullFloatZ);
  textures = (GfxTexture *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(volScatterImage->textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(volExtinctionImage->textureId);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&textures);
  if ( (R_RT_Handle::GetSurface(mainSceneColorRt)->m_rtFlags & 0x4000) != 0 )
  {
    v17 = R_RT_Handle::GetSurface(vrsMaskRt);
    textures = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 5, 1, (const GfxTexture *const *)&textures);
    if ( (R_RT_Handle::GetSurface(mainSceneColorRt)->m_rtFlags & 0x8000) != 0 )
      textureId = R_RT_Handle::GetSurface(mainSceneColorRt)->m_color.m_fmaskImage.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(computeState, 4, 1, (const GfxTexture *const *)&textures);
  }
  R_RT_Handle::GetSurface(mainSceneColorRt);
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
  R_RT_Handle::GetSurface(mainSceneColorRt);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
  }
  R_RT_Handle::GetSurface(mainSceneColorRt);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm6
    vmovss  [rbp+3Fh+data], xmm6
    vmovss  [rbp+3Fh+var_98], xmm1
    vmovss  [rbp+3Fh+var_90], xmm1
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
  }
  v27 = viewInfo->input.data;
  __asm
  {
    vdivss  xmm0, xmm0, xmm7
    vmovss  [rbp+3Fh+var_9C], xmm7
    vmovss  [rbp+3Fh+var_94], xmm0
    vmovss  [rbp+3Fh+var_8C], xmm0
  }
  _RAX = R_VRSGetPixelsToSamplesUint(&result, v27->frameCount, rg.vrsEmissiveOnly);
  v30 = computeState->data;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+3Fh+var_80], xmm0
  }
  *(double *)&_XMM0 = R_Tonemap_GetFinalExposureAndRadiometricScale(v30, viewInfo);
  _RBX = DCONST_DVARFLT_r_fogSubsamplingSensitivity;
  __asm { vmovss  [rbp+3Fh+var_84], xmm0 }
  if ( !DCONST_DVARFLT_r_fogSubsamplingSensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_fogSubsamplingSensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rbp+3Fh+var_88], xmm0
  }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  *(_QWORD *)result.v = computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)&result);
  __asm
  {
    vmulss  xmm1, xmm7, cs:__real@3f000000
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm2, xmm4, xmm1, 2
    vmulss  xmm1, xmm6, cs:__real@3f000000
    vcvttss2si eax, xmm2
    vroundss xmm2, xmm4, xmm1, 2
  }
  v41 = _EAX + 7;
  __asm { vcvttss2si eax, xmm2 }
  R_Dispatch(computeState, (_EAX + 7) / 8, v41 / 8, 1u);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+100h+var_58+8]
    vmovaps xmm7, [rsp+100h+var_68+8]
  }
}

/*
==============
RB_SMAA_ComputeTransMask
==============
*/
void RB_SMAA_ComputeTransMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt, R_RT_ColorHandle *postOpaqueLumaRt)
{
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  R_RT_Handle v18; 
  R_RT_ColorHandle mainSceneColorResolvedRt; 
  R_RT_Handle result; 

  _R15 = gfxContext;
  _R14 = postOpaqueLumaRt;
  R_ProfBeginNamedEvent(gfxContext->state, "Trans Mask");
  R_GPU_BeginTimer(GPU_TIMER_TRANS_MASK);
  _RAX = R_RT_CreateInternal(&result, viewInfo->sceneRtInput.sceneRtWidth >> 2, viewInfo->sceneRtInput.sceneRtHeight >> 2, viewInfo->sceneRtInput.maxSceneRtWidth >> 2, viewInfo->sceneRtInput.maxSceneRtHeight >> 2, 1u, 1u, 1u, g_R_RT_renderTargetFmts[62], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Trans Mask", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(1120)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+148h+mainSceneColorResolvedRt.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+148h+var_A8.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v18);
    if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+148h+var_A8.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+148h+var_A8.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+148h+mainSceneColorResolvedRt.baseclass_0.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  state = _R15->state;
  _RBX = &viewInfo->sceneRtInput.m_transMask;
  __asm { vmovups ymmword ptr [rbx], ymm0 }
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v18.m_surfaceID = 0;
  v18.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rsp+148h+var_A8.m_tracking.m_name], xmm0 }
  result.m_surfaceID = 0;
  result.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rsp+148h+result.m_tracking.m_name], xmm0 }
  mainSceneColorResolvedRt.m_surfaceID = 0;
  mainSceneColorResolvedRt.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rsp+148h+mainSceneColorResolvedRt.baseclass_0.m_tracking.m_name], xmm0 }
  R_PostTransResolve(GfxComputeCmdBufState, viewInfo, mainSceneColorRt, &mainSceneColorResolvedRt, _R14, NULL, (const R_RT_ColorHandle *)&result, &viewInfo->sceneRtInput.m_transMask, (const R_RT_ColorHandle *)&v18, 1, 0);
  R_ComputeWaitForCompute(GfxComputeCmdBufState, PIPE_FLUSH_PARTIAL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups xmm1, xmmword ptr [r15]
    vmovups ymmword ptr [rsp+148h+mainSceneColorResolvedRt.baseclass_0.m_surfaceID], ymm0
    vmovups xmmword ptr [rsp+148h+var_A8.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v18, &mainSceneColorResolvedRt);
  _R14->m_surfaceID = 0;
  _R14->m_tracking.m_allocCounter = 0;
  _R14->m_tracking.m_name = NULL;
  _R14->m_tracking.m_location = NULL;
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(_R15->state);
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

  _RBX = result;
  v2 = R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ;
  v3 = _RBX;
  if ( v2 )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f0214d03d72e48f3f2d91683e86809d
      vmovups xmmword ptr [rbx], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003d93dd983f3717593e59b3d0
      vmovups xmmword ptr [rbx], xmm0
    }
  }
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

bool __fastcall R_PostAARequestGradientAdjust(double _XMM0_8)
{
  int integer; 

  integer = r_postAA->current.integer;
  if ( (unsigned int)(integer - 2) <= 1 && integer == 3 )
  {
    _RAX = r_smaaGradientAdjust;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rax+28h]
    }
  }
  return 0;
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
  ComputeCmdBufState *v10; 
  bool v18; 
  const GfxBackEndData *v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v35; 
  __int64 v36; 
  base_vec4_t<unsigned int> result; 
  int data[4]; 
  BOOL v44; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovaps [rsp+138h+var_48], xmm6
  }
  v10 = computeState;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+138h+var_58], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rsp+138h+var_D4], xmm1
    vdivss  xmm1, xmm6, xmm1
    vdivss  xmm0, xmm6, xmm7
    vmovss  [rsp+138h+var_CC], xmm1
    vmovss  [rsp+138h+data], xmm7
    vmovss  [rsp+138h+var_D0], xmm0
  }
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ )
    __asm { vmovups xmm0, cs:__xmm@3f0214d03d72e48f3f2d91683e86809d }
  else
    __asm { vmovups xmm0, cs:__xmm@3f8000003d93dd983f3717593e59b3d0 }
  v18 = viewInfo->postAA.smaaUpsampleMode == SMAA_TEMPORAL_UPSAMPLE_MODE_OFF;
  __asm { vmovups [rsp+138h+var_C8], xmm0 }
  if ( v18 )
  {
    __asm { vmovss  [rsp+138h+var_B8], xmm6 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm7, xmm0
      vmovss  [rsp+138h+var_B8], xmm1
    }
  }
  *(double *)&_XMM0 = R_Tonemap_GetFinalExposureAndRadiometricScale(v10->data, viewInfo);
  __asm
  {
    vmovaps xmm7, [rsp+138h+var_58]
    vmovaps xmm6, [rsp+138h+var_48]
  }
  v44 = viewInfo->input.resolution.step != viewInfo->input.resolution.history[0];
  __asm { vmovss  [rsp+138h+var_A8], xmm0 }
  if ( vrsInlineResolve )
  {
    _RAX = R_VRSGetPixelsToSamplesUint(&result, viewInfo->input.data->frameCount, rg.vrsEmissiveOnly);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    v25 = viewInfo->input.data;
    v26 = 0;
    __asm { vmovups [rsp+138h+var_88], xmm0 }
    v27 = 0i64;
    frameCount = v25->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v36) = 4;
        LODWORD(v35) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v30 = s_VRSSampleToPixelOrdered_1[unsignedInt][v27];
      v31 = (int)v26;
      ++v27;
      ++v26;
      result.v[v31] = v30;
    }
    while ( v26 < 4 );
    __asm { vmovups xmm0, xmmword ptr [rsp+138h+result] }
    v10 = computeState;
    __asm { vmovups [rsp+138h+var_78], xmm0 }
  }
  _RAX = r_vrsQualityThreshold;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rsp+138h+var_A4], xmm0
  }
  R_UploadAndSetComputeConstants(v10, 0, data, 0x70u, NULL);
}

/*
==============
R_RunPostOpaqueLumaBlit
==============
*/
void R_RunPostOpaqueLumaBlit(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *mainSceneColorRt)
{
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v9; 

  _RDI = gfxContext->source;
  _RSI = gfxContext;
  *(double *)&_XMM0 = R_Tonemap_GetFinalExposureAndRadiometricScale(gfxContext->state->data, viewInfo);
  *(_QWORD *)&_RDI->input.consts[38].xyz.y = 0i64;
  _RDI->input.consts[38].v[3] = 0.0;
  __asm { vmovss  dword ptr [rdi+960h], xmm0 }
  ++_RDI->constVersions[38];
  p_m_image = &R_RT_Handle::GetSurface(mainSceneColorRt)->m_image;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RDI == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  _RDI->input.codeImages[43] = &p_m_image->m_base;
  __asm { vmovups xmmword ptr [rsp+48h+var_18.source], xmm0 }
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
  R_RT_ColorHandle v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle v19; 

  _RBX = vrsMaskRt;
  _RDI = mainSceneColorRt;
  Surface = R_RT_Handle::GetSurface(mainSceneColorRt);
  R_SetComputeShader(computeState, rgp.postOpaqueProcesses[((unsigned int)Surface->m_rtFlags >> 14) & 1]);
  _RAX = fullFloatZ;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbx]
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0A8h+var_68], ymm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rsp+0A8h+var_48], ymm1
    vmovups [rsp+0A8h+var_28], ymm0
  }
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, &v19, &v18, &v17, volScatterImage, volExtinctionImage, scopeImage);
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
  R_RT_ColorHandle v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle v21; 
  GfxTexture *textures; 

  _RBX = mainSceneColorRt;
  Surface = R_RT_Handle::GetSurface(postOpaqueLumaRt);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v13 = R_RT_Handle::GetSurface(_RBX);
  R_SetComputeShader(computeState, rgp.postOpaqueProcessesLuma[((unsigned int)v13->m_rtFlags >> 14) & 1]);
  _RAX = fullFloatZ;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  _RAX = vrsMaskRt;
  __asm
  {
    vmovups [rsp+0A8h+var_68], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+0A8h+var_28], ymm0
    vmovups ymm1, ymmword ptr [rax]
    vmovups [rsp+0A8h+var_48], ymm1
  }
  RB_PostOpaqueProcesses_Internal(computeState, viewInfo, &v21, &v20, &v19, volScatterImage, volExtinctionImage, scopeImage);
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
  GfxCmdBufSourceState *v17; 
  GfxCmdBufInput *v18; 
  R_RT_Image *v19; 
  GfxCmdBufSourceState *v20; 
  GfxCmdBufInput *v21; 
  bool IsValid; 
  R_RT_ColorHandle *v23; 
  const R_RT_Surface *v24; 
  GfxCmdBufSourceState *v25; 
  R_RT_Image *v26; 
  GfxCmdBufInput *v27; 
  R_RT_Image *whiteImage; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufInput *v30; 
  const R_RT_Surface *v31; 
  GfxCmdBufSourceState *v32; 
  R_RT_Image *v33; 
  GfxCmdBufInput *v34; 
  GfxCmdBufContext v36[3]; 

  _RSI = gfxContext;
  if ( R_RT_Handle::IsValid(filmicHistoryRt) && R_RT_Handle::GetSurface(filmicHistoryRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 457, ASSERT_TYPE_ASSERT, "(!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC ))", (const char *)&queryFormat, "!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+68h+var_38], xmm0
  }
  R_SMAA_SetGraphicsConstants(v36, viewInfo);
  Surface = R_RT_Handle::GetSurface(filmicTmpRt);
  source = _RSI->source;
  p_m_image = &Surface->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[43] = &p_m_image->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts->R_RT_Handle) )
    defaultVelocityImage = &R_RT_Handle::GetSurface(&velocityRts->R_RT_Handle)->m_image;
  else
    defaultVelocityImage = (R_RT_Image *)rgp.defaultVelocityImage;
  v17 = _RSI->source;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v18 = &v17->input;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v18->codeImages[45] = &defaultVelocityImage->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts[1].R_RT_Handle) )
    v19 = &R_RT_Handle::GetSurface(&velocityRts[1].R_RT_Handle)->m_image;
  else
    v19 = (R_RT_Image *)rgp.defaultVelocityImage;
  v20 = _RSI->source;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v20->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[46] = &v19->m_base;
  IsValid = R_RT_Handle::IsValid(filmicHistoryRt);
  v23 = filmicHistoryRt;
  if ( !IsValid )
    v23 = filmicTmpRt;
  v24 = R_RT_Handle::GetSurface(v23);
  v25 = _RSI->source;
  v26 = &v24->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &v25->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[50] = &v26->m_base;
  if ( R_RT_Handle::IsValid(transMaskRts) )
    whiteImage = &R_RT_Handle::GetSurface(transMaskRts)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v29 = _RSI->source;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v30 = &v29->input;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v30->codeImages[51] = &whiteImage->m_base;
  v31 = R_RT_Handle::GetSurface(srcColorRt);
  v32 = _RSI->source;
  v33 = &v31->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v34 = &v32->input;
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v34->codeImages[71] = &v33->m_base;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_FullScreenFilterInternal(v36, rgp.smaaFilmicFilteringMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(471)");
}

/*
==============
R_SMAA_FreeTemporalRts
==============
*/
void R_SMAA_FreeTemporalRts(void)
{
  __int64 v0; 
  R_RT_Handle *v2; 
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 
  R_RT_Handle v11[2]; 
  __int64 v12; 
  __int64 v13; 

  v13 = 2i64;
  v0 = 0i64;
  v12 = 0i64;
  _R15 = 0i64;
  v2 = &s_TemporalAALumaHistoryRt;
  v3 = 0i64;
  _RSI = 0x140000000ui64;
  do
  {
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAFilmicHistoryRt + v3)) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+rsi+144AACD0h]
        vmovups [rsp+78h+var_58], ymm0
      }
      R_RT_DestroyInternal(v11);
      s_TemporalAAFilmicHistoryRt[_R15 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + _R15) = 0;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + _R15) = NULL;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + _R15) = NULL;
    }
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAColorHistoryRt + v3)) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+rsi+144AAD10h]
        vmovups [rsp+78h+var_58], ymm0
      }
      R_RT_DestroyInternal(v11);
      s_TemporalAAColorHistoryRt[_R15 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_allocCounter + _R15) = 0;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_name + _R15) = NULL;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_location + _R15) = NULL;
    }
    v7 = 0i64;
    v8 = 3i64;
    do
    {
      if ( R_RT_Handle::IsValid(v2) )
      {
        _RDI = &s_TemporalAALumaHistoryRt + v0 + v7;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups [rsp+78h+var_58], ymm0
        }
        R_RT_DestroyInternal(v11);
        _RDI->m_surfaceID = 0;
        _RDI->m_tracking.m_allocCounter = 0;
        _RDI->m_tracking.m_name = NULL;
        _RDI->m_tracking.m_location = NULL;
      }
      ++v2;
      ++v7;
      --v8;
    }
    while ( v8 );
    _RSI = 0x140000000ui64;
    v3 = v12 + 32;
    _R15 += 32i64;
    v0 += 3i64;
    v12 += 32i64;
    --v13;
  }
  while ( v13 );
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

void __fastcall R_SMAA_SetGraphicsConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, __int64 a3, double _XMM3_8)
{
  bool v17; 
  unsigned int frameCount; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, rax
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vdivss  xmm8, xmm0, xmm6
    vdivss  xmm7, xmm0, xmm5
  }
  v17 = viewInfo->postAA.smaaQuincunx && viewInfo->input.resolution.step == GFX_RESOLUTION_STEP_NONE;
  __asm { vxorps  xmm4, xmm4, xmm4 }
  if ( v17 )
  {
    __asm { vmulss  xmm1, xmm7, cs:__real@3f000000 }
    frameCount = viewInfo->input.data->frameCount;
    __asm
    {
      vmulss  xmm2, xmm8, cs:__real@3f000000
      vxorps  xmm3, xmm3, xmm3
      vmovss  dword ptr [rbp+57h+var_60+8], xmm1
      vmovss  [rbp+57h+var_50], xmm1
    }
    _RAX = 2i64 * (frameCount & 1);
    __asm
    {
      vmovss  dword ptr [rbp+57h+var_60], xmm3
      vmovss  dword ptr [rbp+57h+var_60+4], xmm3
      vmovss  dword ptr [rbp+57h+var_60+0Ch], xmm2
      vmovss  [rbp+57h+var_4C], xmm2
      vmovss  [rbp+57h+var_48], xmm3
      vmovss  [rbp+57h+var_44], xmm3
      vmovups xmm0, [rbp+rax*8+57h+var_60]
      vmovups [rbp+57h+var_70], xmm0
      vsubps  xmm1, xmm4, xmm0
      vbroadcastss xmm0, dword ptr [rdx+170h]
      vmulps  xmm0, xmm1, xmm0
      vaddps  xmm1, xmm0, [rbp+57h+var_70]
      vmovups [rbp+57h+var_70], xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups [rbp+57h+var_70], xmm0
    }
  }
  _RBX = gfxContext->source;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RBX->input.consts[38].v[0] = viewInfo->postAA.smaaFilmicStrength;
  __asm
  {
    vmovss  dword ptr [rbx+964h], xmm0
    vmovups xmm0, [rbp+57h+var_70]
  }
  *(_QWORD *)&_RBX->input.consts[38].xyz.z = 0i64;
  ++_RBX->constVersions[38];
  __asm { vmovups xmmword ptr [rbx+970h], xmm0 }
  ++_RBX->constVersions[39];
  __asm
  {
    vmovss  dword ptr [rbx+980h], xmm5
    vmovss  dword ptr [rbx+984h], xmm6
    vmovss  dword ptr [rbx+988h], xmm7
    vmovss  dword ptr [rbx+98Ch], xmm8
  }
  ++_RBX->constVersions[40];
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ )
    __asm { vmovups xmm0, cs:__xmm@3f0214d03d72e48f3f2d91683e86809d }
  else
    __asm { vmovups xmm0, cs:__xmm@3f8000003d93dd983f3717593e59b3d0 }
  __asm { vmovups xmmword ptr [rbx+990h], xmm0 }
  ++_RBX->constVersions[41];
  __asm { vmovups [rbp+57h+var_70], xmm0 }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [rsp+90h+var_28+8]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
R_SMAA_TemporalSupersampling
==============
*/
void R_SMAA_TemporalSupersampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *colorRts, R_RT_ColorHandle *srcLumaRt, const R_RT_ColorHandle *lumaRts, const R_RT_ColorHandle *velocityRts, R_RT_ColorHandle *filmicHistoryRt, R_RT_ColorHandle *transMaskRts)
{
  double v8; 
  __int64 v13; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  bool IsValid; 
  R_RT_ColorHandle *v20; 
  const R_RT_Surface *v21; 
  GfxCmdBufSourceState *v22; 
  R_RT_Image *v23; 
  GfxCmdBufInput *v24; 
  R_RT_Image *defaultVelocityImage; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufInput *v27; 
  R_RT_Image *v28; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufInput *v30; 
  bool v31; 
  R_RT_ColorHandle *v32; 
  const R_RT_Surface *v33; 
  GfxCmdBufSourceState *v34; 
  R_RT_Image *v35; 
  GfxCmdBufInput *v36; 
  bool v37; 
  R_RT_ColorHandle *v38; 
  const R_RT_Surface *v39; 
  GfxCmdBufSourceState *v40; 
  R_RT_Image *v41; 
  GfxCmdBufInput *v42; 
  bool v43; 
  R_RT_ColorHandle *v44; 
  const R_RT_Surface *v45; 
  GfxCmdBufSourceState *v46; 
  R_RT_Image *v47; 
  GfxCmdBufInput *v48; 
  bool v49; 
  R_RT_ColorHandle *v50; 
  const R_RT_Surface *v51; 
  GfxCmdBufSourceState *v52; 
  R_RT_Image *v53; 
  GfxCmdBufInput *v54; 
  R_RT_Image *whiteImage; 
  GfxCmdBufSourceState *v56; 
  GfxCmdBufInput *v57; 
  __int64 smaaUpsampleMode; 
  GfxCmdBufContext v60[3]; 

  _R14 = gfxContext;
  if ( R_RT_Handle::IsValid(&colorRts[1].R_RT_Handle) && R_RT_Handle::GetSurface(&colorRts[1].R_RT_Handle)->m_image.m_base.format != g_R_RT_renderTargetFmts[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 433, ASSERT_TYPE_ASSERT, "(!colorRts[1] || colorRts[1].GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR ))", (const char *)&queryFormat, "!colorRts[1] || colorRts[1].GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_BACKBUFFER_LINEAR )") )
    __debugbreak();
  if ( R_RT_Handle::IsValid(filmicHistoryRt) && R_RT_Handle::GetSurface(filmicHistoryRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 434, ASSERT_TYPE_ASSERT, "(!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC ))", (const char *)&queryFormat, "!filmicHistoryRt || filmicHistoryRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SMAA_FILMIC )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+68h+var_38], xmm0
  }
  R_SMAA_SetGraphicsConstants(v60, viewInfo, v13, v8);
  Surface = R_RT_Handle::GetSurface(&colorRts->R_RT_Handle);
  source = _R14->source;
  p_m_image = &Surface->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[43] = &p_m_image->m_base;
  IsValid = R_RT_Handle::IsValid(&colorRts[1].R_RT_Handle);
  v20 = (R_RT_ColorHandle *)&colorRts[1];
  if ( !IsValid )
    v20 = (R_RT_ColorHandle *)colorRts;
  v21 = R_RT_Handle::GetSurface(v20);
  v22 = _R14->source;
  v23 = &v21->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v24 = &v22->input;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v24->codeImages[44] = &v23->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts->R_RT_Handle) )
    defaultVelocityImage = &R_RT_Handle::GetSurface(&velocityRts->R_RT_Handle)->m_image;
  else
    defaultVelocityImage = (R_RT_Image *)rgp.defaultVelocityImage;
  v26 = _R14->source;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &v26->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[45] = &defaultVelocityImage->m_base;
  if ( R_RT_Handle::IsValid(&velocityRts[1].R_RT_Handle) )
    v28 = &R_RT_Handle::GetSurface(&velocityRts[1].R_RT_Handle)->m_image;
  else
    v28 = (R_RT_Image *)rgp.defaultVelocityImage;
  v29 = _R14->source;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v30 = &v29->input;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v30->codeImages[46] = &v28->m_base;
  v31 = R_RT_Handle::IsValid(&lumaRts->R_RT_Handle);
  v32 = (R_RT_ColorHandle *)lumaRts;
  if ( !v31 )
    v32 = srcLumaRt;
  v33 = R_RT_Handle::GetSurface(v32);
  v34 = _R14->source;
  v35 = &v33->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v36 = &v34->input;
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v36->codeImages[47] = &v35->m_base;
  v37 = R_RT_Handle::IsValid(&lumaRts[1].R_RT_Handle);
  v38 = (R_RT_ColorHandle *)&lumaRts[1];
  if ( !v37 )
    v38 = srcLumaRt;
  v39 = R_RT_Handle::GetSurface(v38);
  v40 = _R14->source;
  v41 = &v39->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v42 = &v40->input;
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v42->codeImages[48] = &v41->m_base;
  v43 = R_RT_Handle::IsValid(&lumaRts[2].R_RT_Handle);
  v44 = (R_RT_ColorHandle *)&lumaRts[2];
  if ( !v43 )
    v44 = srcLumaRt;
  v45 = R_RT_Handle::GetSurface(v44);
  v46 = _R14->source;
  v47 = &v45->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v48 = &v46->input;
  if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v48->codeImages[49] = &v47->m_base;
  v49 = R_RT_Handle::IsValid(filmicHistoryRt);
  v50 = filmicHistoryRt;
  if ( !v49 )
    v50 = (R_RT_ColorHandle *)colorRts;
  v51 = R_RT_Handle::GetSurface(v50);
  v52 = _R14->source;
  v53 = &v51->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v54 = &v52->input;
  if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v54->codeImages[50] = &v53->m_base;
  if ( R_RT_Handle::IsValid(transMaskRts) )
    whiteImage = &R_RT_Handle::GetSurface(transMaskRts)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v56 = _R14->source;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v57 = &v56->input;
  if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r14] }
  v57->codeImages[51] = &whiteImage->m_base;
  smaaUpsampleMode = viewInfo->postAA.smaaUpsampleMode;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_FullScreenFilterInternal(v60, rgp.smaaTemporalSupersamplingMaterial[smaaUpsampleMode], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp(451)");
}

/*
==============
R_SetPostAAInfo
==============
*/

void __fastcall R_SetPostAAInfo(GfxViewInfo *viewInfo, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  bool *p_temporalSamplingEnable; 
  PostAAMode mode; 
  PostAAMode m_postAAMode; 
  int v35; 
  int integer; 
  __int64 v37; 
  bool v38; 
  __int64 v41; 
  int v51; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = viewInfo;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postaa.cpp", 752, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  p_temporalSamplingEnable = &_RBX->postAA.temporalSamplingEnable;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm3, xmm3, xmm3
    vmovaps xmm8, xmm0
    vxorps  xmm5, xmm5, xmm5
    vxorps  xmm7, xmm7, xmm7
  }
  if ( _RBX->postAA.temporalSamplingEnable )
  {
    mode = _RBX->postAA.mode;
    if ( (unsigned int)(mode - 2) <= 1 )
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm8, xmm8, xmm8
        vcvtsi2ss xmm3, xmm3, rax
      }
    }
    if ( mode == POST_AA_MODE_FILMIC_SMAA_T2X )
    {
      __asm
      {
        vxorps  xmm5, xmm5, xmm5
        vmovaps xmm7, xmm0
        vcvtsi2ss xmm5, xmm5, rax
      }
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, cs:__real@49b9145f
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, cs:__real@4afa038d
    vaddss  xmm4, xmm2, xmm0
    vmovss  dword ptr [rbx+1B80h], xmm3
    vmovaps xmm1, xmm4
    vmovaps xmm2, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vmovss  dword ptr [rbx+1B84h], xmm8
    vmovss  dword ptr [rbx+1B8Ch], xmm7
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@490c7fd5
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbx+1B88h], xmm2
  }
  m_postAAMode = _RBX->viewportFeatures.m_postAAMode;
  LOBYTE(v35) = R_Screenshot_GetDeferredScreenshotPipelineStage(_RBX->deferredScreenshotIndex);
  integer = 0;
  if ( v35 == 2 )
    m_postAAMode = POST_AA_MODE_NONE;
  _RBX->postAA.mode = m_postAAMode;
  if ( m_postAAMode )
  {
    v37 = 3i64;
    v38 = !_RBX->tonemap.enabled;
    if ( !_RBX->tonemap.enabled )
    {
      _RBX->postAA.mode = POST_AA_MODE_NONE;
      _RCX = &_RBX->viewParmsSet.frames[2].viewParms;
      _RAX = _RBX;
      v41 = 3i64;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
          vmovups xmm1, xmmword ptr [rcx+10h]
          vmovups xmmword ptr [rax+10h], xmm1
          vmovups xmm0, xmmword ptr [rcx+20h]
          vmovups xmmword ptr [rax+20h], xmm0
          vmovups xmm1, xmmword ptr [rcx+30h]
          vmovups xmmword ptr [rax+30h], xmm1
          vmovups xmm0, xmmword ptr [rcx+40h]
          vmovups xmmword ptr [rax+40h], xmm0
          vmovups xmm1, xmmword ptr [rcx+50h]
          vmovups xmmword ptr [rax+50h], xmm1
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rax+60h], xmm0
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX = (GfxViewParms *)((char *)_RCX + 128);
        _RAX = (GfxViewInfo *)((char *)_RAX + 128);
        __asm { vmovups xmmword ptr [rax-10h], xmm1 }
        v38 = --v41 == 0;
      }
      while ( v41 );
      m_postAAMode = POST_AA_MODE_NONE;
    }
    _RAX = r_smaaFilmicStrength;
    v51 = m_postAAMode;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vucomiss xmm0, xmm6
      vmovss  dword ptr [rbx+2DFCh], xmm0
    }
    if ( v38 && m_postAAMode == POST_AA_MODE_FILMIC_SMAA_T2X )
    {
      v51 = 2;
      _RBX->postAA.mode = POST_AA_MODE_SMAA_T2X;
    }
    _RBX->postAA.smaaQuincunx = r_smaaQuincunx->current.enabled;
    _RBX->postAA.smaaTransMask = r_smaaTransMask->current.enabled;
    if ( _RBX->input.resolution.step && (unsigned int)(v51 - 2) <= 1 )
      integer = r_smaaUpsampleMode->current.integer;
    _RBX->postAA.smaaUpsampleMode = integer;
    if ( _RBX->validFrameCount < 3 )
    {
      _RAX = &_RBX->viewParmsSet.frames[2].viewParms;
      do
      {
        _RBX = (GfxViewInfo *)((char *)_RBX + 128);
        __asm { vmovups xmm0, xmmword ptr [rax] }
        _RAX = (GfxViewParms *)((char *)_RAX + 128);
        __asm
        {
          vmovups xmmword ptr [rbx-80h], xmm0
          vmovups xmm1, xmmword ptr [rax-70h]
          vmovups xmmword ptr [rbx-70h], xmm1
          vmovups xmm0, xmmword ptr [rax-60h]
          vmovups xmmword ptr [rbx-60h], xmm0
          vmovups xmm1, xmmword ptr [rax-50h]
          vmovups xmmword ptr [rbx-50h], xmm1
          vmovups xmm0, xmmword ptr [rax-40h]
          vmovups xmmword ptr [rbx-40h], xmm0
          vmovups xmm1, xmmword ptr [rax-30h]
          vmovups xmmword ptr [rbx-30h], xmm1
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rbx-20h], xmm0
          vmovups xmm1, xmmword ptr [rax-10h]
          vmovups xmmword ptr [rbx-10h], xmm1
        }
        --v37;
      }
      while ( v37 );
    }
    *p_temporalSamplingEnable = r_temporalSamplingEnable->current.enabled;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
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
  R_RT_Handle *v2; 
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 
  R_RT_Handle v11[2]; 
  __int64 v12; 
  __int64 v13; 

  v13 = 2i64;
  v0 = 0i64;
  v12 = 0i64;
  _R15 = 0i64;
  v2 = &s_TemporalAALumaHistoryRt;
  v3 = 0i64;
  _RSI = 0x140000000ui64;
  do
  {
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAFilmicHistoryRt + v3)) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+rsi+144AACD0h]
        vmovups [rsp+78h+var_58], ymm0
      }
      R_RT_DestroyInternal(v11);
      s_TemporalAAFilmicHistoryRt[_R15 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_allocCounter + _R15) = 0;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_name + _R15) = NULL;
      *(const char **)((char *)&s_TemporalAAFilmicHistoryRt[0].m_tracking.m_location + _R15) = NULL;
    }
    if ( R_RT_Handle::IsValid((R_RT_ColorHandle *)((char *)s_TemporalAAColorHistoryRt + v3)) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+rsi+144AAD10h]
        vmovups [rsp+78h+var_58], ymm0
      }
      R_RT_DestroyInternal(v11);
      s_TemporalAAColorHistoryRt[_R15 / 0x20].m_surfaceID = 0;
      *(unsigned int *)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_allocCounter + _R15) = 0;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_name + _R15) = NULL;
      *(const char **)((char *)&s_TemporalAAColorHistoryRt[0].m_tracking.m_location + _R15) = NULL;
    }
    v7 = 0i64;
    v8 = 3i64;
    do
    {
      if ( R_RT_Handle::IsValid(v2) )
      {
        _RDI = &s_TemporalAALumaHistoryRt + v0 + v7;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups [rsp+78h+var_58], ymm0
        }
        R_RT_DestroyInternal(v11);
        _RDI->m_surfaceID = 0;
        _RDI->m_tracking.m_allocCounter = 0;
        _RDI->m_tracking.m_name = NULL;
        _RDI->m_tracking.m_location = NULL;
      }
      ++v2;
      ++v7;
      --v8;
    }
    while ( v8 );
    _RSI = 0x140000000ui64;
    v3 = v12 + 32;
    _R15 += 32i64;
    v0 += 3i64;
    v12 += 32i64;
    --v13;
  }
  while ( v13 );
}

