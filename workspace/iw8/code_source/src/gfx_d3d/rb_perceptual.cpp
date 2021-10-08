/*
==============
R_Perceptual_Upsample
==============
*/

void __fastcall R_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  ?R_Perceptual_Upsample@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2MM@Z(gfxContext, viewInfo, srcColorRt, addColorRt, weightInput, weightOutput);
}

/*
==============
R_Perceptual_GetSceneDownsampleVeilMip
==============
*/

unsigned int __fastcall R_Perceptual_GetSceneDownsampleVeilMip(unsigned int maxMip)
{
  return ?R_Perceptual_GetSceneDownsampleVeilMip@@YAII@Z(maxMip);
}

/*
==============
RB_Perceptual_Downsample
==============
*/

void __fastcall RB_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, VeilTonemapMode tonemapMode)
{
  ?RB_Perceptual_Downsample@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2W4VeilTonemapMode@@@Z(gfxContext, viewInfo, srcColorRt, dstColorRt, tonemapMode);
}

/*
==============
R_Perceptual_DownsampleCS
==============
*/

void __fastcall R_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcColorVRSMask, R_RT_ColorHandle *dstColorRt, VeilTonemapMode tonemapMode, const bool vrsInlineResolve)
{
  ?R_Perceptual_DownsampleCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22W4VeilTonemapMode@@_N@Z(computeState, viewInfo, srcColorRt, srcColorVRSMask, dstColorRt, tonemapMode, vrsInlineResolve);
}

/*
==============
RB_Perceptual_UpsampleScene
==============
*/

void __fastcall RB_Perceptual_UpsampleScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int baseMip, unsigned int mipCount, const RB_Perceptual_MipChain *srcMipChain, const RB_Perceptual_MipChain *dstMipChain, const float *weights)
{
  ?RB_Perceptual_UpsampleScene@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@IIPEBURB_Perceptual_MipChain@@2PEBM@Z(gfxContext, viewInfo, baseMip, mipCount, srcMipChain, dstMipChain, weights);
}

/*
==============
RB_Perceptual_DownsampleScene
==============
*/

void __fastcall RB_Perceptual_DownsampleScene(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *dstMipChain, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, VeilTonemapMode tonemapMode, unsigned int mipTonemapCutoff)
{
  ?RB_Perceptual_DownsampleScene@@YAXUGfxCmdBufContext@@PEBURB_Perceptual_MipChain@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@W4VeilTonemapMode@@I@Z(gfxContext, dstMipChain, viewInfo, srcRt, tonemapMode, mipTonemapCutoff);
}

/*
==============
R_Perceptual_Downsample
==============
*/

void __fastcall R_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, VeilTonemapMode tonemapMode)
{
  ?R_Perceptual_Downsample@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@W4VeilTonemapMode@@@Z(gfxContext, viewInfo, srcColorRt, tonemapMode);
}

/*
==============
R_Perceptual_Shutdown
==============
*/

void R_Perceptual_Shutdown(void)
{
  ?R_Perceptual_Shutdown@@YAXXZ();
}

/*
==============
R_Perceptual_UpdateLocalTonemapWeights
==============
*/

void R_Perceptual_UpdateLocalTonemapWeights(void)
{
  ?R_Perceptual_UpdateLocalTonemapWeights@@YAXXZ();
}

/*
==============
R_Perceptual_GetSceneDownsampleVeilMipCount
==============
*/

unsigned int __fastcall R_Perceptual_GetSceneDownsampleVeilMipCount(unsigned int srcWidth, unsigned int srcHeight, unsigned int veilMip)
{
  return ?R_Perceptual_GetSceneDownsampleVeilMipCount@@YAIIII@Z(srcWidth, srcHeight, veilMip);
}

/*
==============
R_Perceptual_Init
==============
*/

void R_Perceptual_Init(void)
{
  ?R_Perceptual_Init@@YAXXZ();
}

/*
==============
R_Perceptual_UpdateVeilWeights
==============
*/

void __fastcall R_Perceptual_UpdateVeilWeights(bool useNightAndThermalVisionCombo)
{
  ?R_Perceptual_UpdateVeilWeights@@YAX_N@Z(useNightAndThermalVisionCombo);
}

/*
==============
RB_Perceptual_DecommitMipChain
==============
*/

void __fastcall RB_Perceptual_DecommitMipChain(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *mipChain, unsigned int mipBegin, unsigned int mipEnd)
{
  ?RB_Perceptual_DecommitMipChain@@YAXUGfxCmdBufContext@@PEBURB_Perceptual_MipChain@@II@Z(gfxContext, mipChain, mipBegin, mipEnd);
}

/*
==============
R_Perceptual_UpsampleCS
==============
*/

void __fastcall R_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  ?R_Perceptual_UpsampleCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22MM@Z(computeState, viewInfo, srcColorRt, dstColorRt, addColorRt, weightInput, weightOutput);
}

/*
==============
RB_Perceptual_ScatterBlurScene
==============
*/

void __fastcall RB_Perceptual_ScatterBlurScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sceneColorSrcRt, R_RT_ColorHandle *sceneColorDstRt, bool glossy)
{
  ?RB_Perceptual_ScatterBlurScene@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2_N@Z(gfxContext, viewInfo, sceneColorSrcRt, sceneColorDstRt, glossy);
}

/*
==============
R_Perceptual_GetSceneDownsampleTotalMipCount
==============
*/

unsigned int __fastcall R_Perceptual_GetSceneDownsampleTotalMipCount(unsigned int exposureMip, unsigned int veilMip, unsigned int mipCount)
{
  return ?R_Perceptual_GetSceneDownsampleTotalMipCount@@YAIIII@Z(exposureMip, veilMip, mipCount);
}

/*
==============
RB_Perceptual_CommitMipChain
==============
*/

RB_Perceptual_MipChain *__fastcall RB_Perceptual_CommitMipChain(RB_Perceptual_MipChain *result, GfxCmdBufContext *gfxContext, unsigned int baseMip, unsigned int mipCount, unsigned int baseWidth, unsigned int baseHeight, GfxRenderTargetFormat format, const char *const (*mipNames)[9])
{
  return ?RB_Perceptual_CommitMipChain@@YA?AURB_Perceptual_MipChain@@UGfxCmdBufContext@@IIIIW4GfxRenderTargetFormat@@AEAY08QEBD@Z(result, gfxContext, baseMip, mipCount, baseWidth, baseHeight, format, mipNames);
}

/*
==============
RB_Perceptual_CommitMipChain
==============
*/
RB_Perceptual_MipChain *RB_Perceptual_CommitMipChain(RB_Perceptual_MipChain *result, GfxCmdBufContext *gfxContext, unsigned int baseMip, unsigned int mipCount, unsigned int baseWidth, unsigned int baseHeight, GfxRenderTargetFormat format, const char *const (*mipNames)[9])
{
  unsigned int v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  int v18; 
  int rtFlags; 
  unsigned int v20; 
  unsigned int v21; 
  bool v25; 
  GfxCmdBufState *state; 
  R_RT_Handle v29; 
  R_RT_ColorHandle v30; 
  R_RT_Handle resulta; 

  _RSI = result;
  memset_0(result, 0, sizeof(RB_Perceptual_MipChain));
  v13 = baseMip + mipCount - 1;
  if ( v13 > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 327, ASSERT_TYPE_ASSERT, "(baseMip + mipCount - 1 <= ( sizeof( *array_counter( mipChain.colorRts ) ) + 0 ))", (const char *)&queryFormat, "baseMip + mipCount - 1 <= ARRAY_COUNT( mipChain.colorRts )") )
    __debugbreak();
  v14 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    goto LABEL_13;
  v15 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
LABEL_13:
    v16 = 0;
  else
    v16 = 64;
  v17 = DCONST_DVARINT_r_dccPostFX;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = 2048;
  if ( v17->current.integer == 1 )
    v18 = 2056;
  _RSI->mipBegin = baseMip;
  _RSI->mipEnd = v13;
  if ( baseMip > v13 )
  {
    state = gfxContext->state;
  }
  else
  {
    rtFlags = v16 | v18;
    do
    {
      v20 = 1;
      v21 = 1;
      if ( (int)(baseWidth >> baseMip) > 1 )
        v20 = baseWidth >> baseMip;
      if ( (int)(baseHeight >> baseMip) > 1 )
        v21 = baseHeight >> baseMip;
      _RAX = R_RT_CreateInternal(&resulta, v20, v21, v20, v21, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)format], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, (*mipNames)[baseMip], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(337)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rsp+128h+var_68], ymm0
        vmovups ymmword ptr [rsp+128h+var_88.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v29);
        if ( (R_RT_Handle::GetSurface(&v29)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rsp+128h+var_68] }
          if ( v25 )
            __debugbreak();
        }
      }
      _RBX = 32i64 * baseMip;
      __asm
      {
        vmovups [rsp+128h+var_68], ymm0
        vmovups ymmword ptr [rbx+rsi+8], ymm0
      }
      state = gfxContext->state;
      R_AddRenderTargetTransition(state, &v30, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++baseMip;
    }
    while ( baseMip <= _RSI->mipEnd );
  }
  R_FlushResourceTransitions(state);
  return _RSI;
}

/*
==============
RB_Perceptual_DecommitMipChain
==============
*/
void RB_Perceptual_DecommitMipChain(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *mipChain, unsigned int mipBegin, unsigned int mipEnd)
{
  unsigned int v5; 
  GfxCmdBufContext v11; 
  R_RT_ColorHandle v12; 

  v5 = mipBegin;
  _RSI = mipChain;
  _RBP = gfxContext;
  if ( mipBegin > mipEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 350, ASSERT_TYPE_ASSERT, "(mipBegin <= mipEnd)", (const char *)&queryFormat, "mipBegin <= mipEnd") )
    __debugbreak();
  for ( ; v5 <= mipEnd; ++v5 )
  {
    __asm { vmovups xmm1, xmmword ptr [rbp+0] }
    _RAX = 32i64 * v5;
    __asm
    {
      vmovups [rsp+68h+var_38], xmm1
      vmovups ymm0, ymmword ptr [rax+rsi+8]
      vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_surfaceID], ymm0
    }
    R_RT_Destroy(&v11, &v12);
  }
  R_FlushImmediateContext();
}

/*
==============
RB_Perceptual_Downsample
==============
*/
void RB_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, VeilTonemapMode tonemapMode)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  __int64 v26; 
  GfxPixelFormat format; 
  __int64 v28; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufState *state; 
  R_RT_Handle v33; 
  R_RT_ColorHandle v34; 

  _R14 = gfxContext;
  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  _RBP = dstColorRt;
  _RDI = srcColorRt;
  R_ProfBeginNamedEvent(gfxContext->state, "Downsample Filter");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsp+0B8h+var_88.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v33)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v33);
  source = _R14->source;
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups xmm1, xmmword ptr [r14]
    vmovups [rsp+0B8h+var_68], ymm0
    vmovups xmmword ptr [rsp+0B8h+var_88.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v33, &v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(188)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm6, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+0B8h+var_88.m_surfaceID], ymm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm3, xmm0, cs:__real@3a72b9d6
    vdivss  xmm1, xmm3, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
    vmaxss  xmm0, xmm1, cs:__real@3f800000
    vmovq   rbx, xmm6
    vmovss  dword ptr [rbx+0D38h], xmm0
    vmaxss  xmm0, xmm3, cs:__real@3f800000
    vmovss  dword ptr [rbx+0D3Ch], xmm0
  }
  *(_QWORD *)(_RBX + 3376) = 0i64;
  ++*(_WORD *)(_RBX + 10362);
  p_m_image = &R_RT_Handle::GetSurface(&v33)->m_image;
  v26 = _RBX + 1792;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(v26 + 6192) = p_m_image;
  format = R_RT_Handle::GetSurface(&v33)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v28 = 1i64;
  }
  else
  {
    v28 = 0i64;
    if ( format == GFX_PF_R8G8B8A8 )
      v28 = 2i64;
  }
  __asm { vmovdqa xmmword ptr [rsp+0B8h+var_88.m_surfaceID], xmm6 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v33, *((const Material **)&rgp.veilDownsampleMaterials[0][2 * tonemapMode] + v28 + (int)tonemapMode), "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(135)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbp+0] }
  state = _R14->state;
  p_input->codeImages[6] = NULL;
  __asm { vmovups [rsp+0B8h+var_68], ymm0 }
  R_AddRenderTargetTransition(state, &v34, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_Perceptual_DownsampleScene
==============
*/
void RB_Perceptual_DownsampleScene(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *dstMipChain, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, VeilTonemapMode tonemapMode, unsigned int mipTonemapCutoff)
{
  unsigned int i; 
  VeilTonemapMode v14; 
  GfxCmdBufContext v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle v19; 

  _RSI = dstMipChain;
  _RDI = gfxContext;
  _RBX = srcRt;
  R_ProfBeginNamedEvent(gfxContext->state, "RB_Perceptual_DownsampleScene");
  R_GPU_BeginTimer(GPU_TIMER_DOWNSAMPLE);
  R_Set2D(_RDI->source);
  if ( _RSI->mipEnd < mipTonemapCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 370, ASSERT_TYPE_ASSERT, "(dstMipChain->mipEnd >= mipTonemapCutoff)", (const char *)&queryFormat, "dstMipChain->mipEnd >= mipTonemapCutoff") )
    __debugbreak();
  __asm { vmovups ymm1, ymmword ptr [rbx] }
  for ( i = _RSI->mipBegin; i <= _RSI->mipEnd; ++i )
  {
    _RAX = 32i64 * i;
    __asm
    {
      vmovups [rsp+0B8h+var_58], ymm1
      vmovups ymm0, ymmword ptr [rax+rsi+8]
    }
    v14 = R_VEIL_TONEMAP_DISABLED;
    __asm
    {
      vmovups [rsp+0B8h+var_38], ymm0
      vmovups [rsp+0B8h+var_78], ymm0
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+0B8h+var_88], xmm0
    }
    if ( i < mipTonemapCutoff )
      v14 = tonemapMode;
    RB_Perceptual_Downsample(&v17, viewInfo, &v19, &v18, v14);
    __asm { vmovups ymm1, [rsp+0B8h+var_38] }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+0B8h+var_88], xmm0
  }
  R_SetRenderTargetsInternal_None(&v17, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(385)");
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(_RDI->state);
}

/*
==============
RB_Perceptual_ScatterBlurScene
==============
*/
void RB_Perceptual_ScatterBlurScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sceneColorSrcRt, R_RT_ColorHandle *sceneColorDstRt, bool glossy)
{
  unsigned int v14; 
  bool v20; 
  GfxCmdBufState *state; 
  R_RT_Handle *v24; 
  unsigned int v25; 
  const GfxViewInfo *v26; 
  unsigned int v27; 
  unsigned int height; 
  unsigned int width; 
  GfxCmdBufState *v40; 
  __int64 v41; 
  _QWORD v46[5]; 
  R_RT_Handle v47; 
  __m256i v48; 
  R_RT_Handle *v49; 
  R_RT_Handle v50; 
  R_RT_ColorHandle v51; 
  __m256i v52; 
  _OWORD v53[15]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R13 = gfxContext;
  v49 = sceneColorDstRt;
  v48.m256i_i64[0] = (__int64)viewInfo;
  _R14 = sceneColorDstRt;
  _RBX = sceneColorSrcRt;
  if ( R_RT_Handle::GetSurface(sceneColorDstRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 432, ASSERT_TYPE_ASSERT, "(sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER ))", (const char *)&queryFormat, "sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER )") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rbp+120h+var_110], ymm0
    vxorps  xmm6, xmm6, xmm6
  }
  v14 = 0;
  _RSI = v53;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rbp+120h+var_1A0.m_surfaceID], ymm0
    }
    _RAX = R_RT_GetViewInternal(&v50, &v47, -1, v14);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+120h+var_1A0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+220h+var_1C8+8], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)&v46[1]);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v46[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+220h+var_1C8+8] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+220h+var_1C8+8] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+120h+var_1A0.m_surfaceID] }
        if ( v20 )
          __debugbreak();
      }
    }
    state = _R13->state;
    __asm
    {
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymmword ptr [rbp+120h+var_1A0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v47, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    ++v14;
    _RSI += 2;
  }
  while ( v14 < 4 );
  R_FlushResourceTransitions(state);
  _RSI = v53;
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  v24 = v49;
  v25 = 1;
  if ( glossy )
    v25 = 4;
  v26 = (const GfxViewInfo *)v48.m256i_i64[0];
  v27 = 0;
  do
  {
    if ( v27 )
      _RAX = (__m256i *)&v53[2 * v27 - 2];
    else
      _RAX = &v52;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymm1, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+120h+var_1A0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+220h+var_1C8+8], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+120h+var_180], xmm0
      vmovups [rbp+120h+var_130], ymm1
    }
    RB_Perceptual_Downsample((GfxCmdBufContext *)&v48, v26, &v51, (R_RT_ColorHandle *)&v46[1], R_VEIL_TONEMAP_ENABLED);
    if ( v27 )
    {
      if ( R_RT_Handle::GetSurface(v24)->m_image.m_base.format != g_R_RT_renderTargetFmts[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 460, ASSERT_TYPE_ASSERT, "(sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER ))", (const char *)&queryFormat, "sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER )") )
        __debugbreak();
      height = R_RT_Handle::GetSurface(&v47)->m_image.m_base.height;
      width = R_RT_Handle::GetSurface(&v47)->m_image.m_base.width;
      LOWORD(v46[1]) = 0;
      LODWORD(v46[2]) = 0;
      v48.m256i_i16[0] = 0;
      v48.m256i_i32[2] = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+220h+var_1C8+18h], xmm0
        vmovups ymm1, ymmword ptr [rsp+220h+var_1C8+8]
        vmovdqu xmmword ptr [rbp+120h+var_180+10h], xmm0
        vmovups ymm0, [rbp+120h+var_180]
        vmovups [rbp+120h+var_130], ymm1
        vmovups ymm1, ymmword ptr [rsi]
        vmovups ymmword ptr [rbp+120h+var_1A0.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [r13+0]
        vmovaps xmm2, xmm6
        vmovups ymmword ptr [rsp+220h+var_1C8+8], ymm1
        vmovups [rbp+120h+var_150], ymm1
        vmovups xmmword ptr [rbp+120h+var_180], xmm0
      }
      RB_GaussianFilterHdrImage((GfxCmdBufContext *)&v48, v27, *(float *)&_XMM2, (R_RT_ColorHandle *)&v50, (R_RT_ColorHandle *)&v46[1], (R_RT_ColorHandle *)&v47, &v51, width, height, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, 7u, v26);
    }
    ++v27;
    _RSI += 2;
    __asm { vaddss  xmm6, xmm6, xmm7 }
  }
  while ( v27 < v25 );
  v40 = _R13->state;
  if ( !glossy )
  {
    v41 = 4 - v25;
    _RBX = &v53[2 * v25];
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+120h+var_150], ymm0
      }
      R_AddRenderTargetTransition(v40, (R_RT_ColorHandle *)&v50, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      _RBX += 2;
      --v41;
    }
    while ( v41 );
  }
  R_FlushResourceTransitions(v40);
  __asm
  {
    vmovaps xmm6, [rsp+220h+var_58+8]
    vmovaps xmm7, [rsp+220h+var_68+8]
  }
}

/*
==============
RB_Perceptual_Upsample
==============
*/
void RB_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *addColorRt, R_RT_ColorHandle *dstColorRt, float weightInput, float weightOutput)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  CmdBufState *v25; 
  float fmt; 
  float v27; 
  R_RT_Handle v28; 
  R_RT_ColorHandle v29; 
  R_RT_ColorHandle v30; 

  _R12 = gfxContext;
  _RDI = addColorRt;
  _RSI = srcColorRt;
  R_ProfBeginNamedEvent(gfxContext->state, "Upsample Filter");
  _RBP = dstColorRt;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsp+0A8h+var_78.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v28)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v28);
  source = _R12->source;
  R_SetRenderTargetSize(_R12->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups xmm1, xmmword ptr [r12]
    vmovups [rsp+0A8h+var_58], ymm0
    vmovups xmmword ptr [rsp+0A8h+var_78.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v28, &v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(220)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rsi]
    vmovups [rsp+0A8h+var_58], ymm0
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+0A8h+var_38], ymm1
    vmovss  xmm1, [rsp+0A8h+arg_30]
    vmovups xmmword ptr [rsp+0A8h+var_78.m_surfaceID], xmm0
    vmovss  xmm0, [rsp+0A8h+arg_28]
    vmovss  dword ptr [rsp+0A8h+var_80], xmm1
    vmovss  dword ptr [rsp+0A8h+fmt], xmm0
  }
  R_Perceptual_Upsample((GfxCmdBufContext *)&v28, viewInfo, &v30, &v29, fmt, v27);
  __asm { vmovups ymm0, ymmword ptr [rbp+0] }
  state = _R12->state;
  __asm { vmovups [rsp+0A8h+var_38], ymm0 }
  R_AddRenderTargetTransition(state, &v30, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_R12->state);
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[6] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25 = _R12->state;
  source->input.codeImages[4] = NULL;
  R_ProfEndNamedEvent(v25);
}

/*
==============
RB_Perceptual_UpsampleScene
==============
*/
void RB_Perceptual_UpsampleScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int baseMip, unsigned int mipCount, const RB_Perceptual_MipChain *srcMipChain, const RB_Perceptual_MipChain *dstMipChain, const float *weights)
{
  GfxCmdBufState *state; 
  signed int v14; 
  __int64 v16; 
  unsigned int v18; 
  float v30; 
  float v31; 
  GfxCmdBufContext v32; 
  R_RT_ColorHandle v33; 
  R_RT_ColorHandle v34; 
  R_RT_ColorHandle v35; 

  state = gfxContext->state;
  _R14 = gfxContext;
  R_ProfBeginNamedEvent(state, "RB_Perceptual_UpsampleScene");
  R_GPU_BeginTimer(GPU_TIMER_VEIL);
  R_Set2D(_R14->source);
  _R12 = srcMipChain;
  _R10 = 32i64 * (baseMip + mipCount - 1);
  v14 = mipCount - 1;
  _RBX = (int)(mipCount - 1);
  v16 = v14;
  __asm { vmovups ymm3, ymmword ptr [r10+r12+8] }
  if ( v14 > 0 )
  {
    v18 = v14 + baseMip;
    _RDI = weights;
    _R15 = dstMipChain;
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    do
    {
      if ( _RBX == v16 )
        __asm { vmovss  xmm2, dword ptr [rdi+rbx*4] }
      else
        __asm { vmovaps xmm2, xmm6 }
      _RCX = 32i64 * (v18 - 1);
      __asm
      {
        vmovups [rsp+108h+var_78], ymm3
        vmovups ymm0, ymmword ptr [rcx+r15+8]
        vmovups ymm1, ymmword ptr [rcx+r12+8]
        vmovups [rsp+108h+var_98], ymm1
        vmovss  xmm1, dword ptr [rdi+rbx*4-4]
        vmovss  [rsp+108h+var_D8], xmm1
        vmovups [rsp+108h+var_58], ymm0
        vmovups [rsp+108h+var_B8], ymm0
        vmovups xmm0, xmmword ptr [r14]
        vmovss  [rsp+108h+var_E0], xmm2
        vmovups [rsp+108h+var_C8], xmm0
      }
      RB_Perceptual_Upsample(&v32, viewInfo, &v35, &v34, &v33, v30, v31);
      __asm { vmovups ymm3, [rsp+108h+var_58] }
      --v18;
      --_RBX;
    }
    while ( _RBX > 0 );
    state = _R14->state;
    __asm { vmovaps xmm6, [rsp+108h+var_38] }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+108h+var_C8], xmm0
  }
  R_SetRenderTargetsInternal_None(&v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(420)");
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
}

/*
==============
R_Perceptual_Downsample
==============
*/
void R_Perceptual_Downsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, VeilTonemapMode tonemapMode)
{
  __int64 v7; 
  __int64 v15; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxPixelFormat format; 
  GfxCmdBufContext v20; 

  _R14 = gfxContext;
  _RDI = gfxContext->source;
  v7 = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm3, xmm0, cs:__real@3a72b9d6
    vdivss  xmm1, xmm3, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
    vmaxss  xmm0, xmm1, cs:__real@3f800000
    vmovss  dword ptr [rdi+0D38h], xmm0
    vmaxss  xmm0, xmm3, cs:__real@3f800000
    vmovss  dword ptr [rdi+0D3Ch], xmm0
  }
  *(_QWORD *)_RDI->input.consts[99].v = 0i64;
  ++_RDI->constVersions[99];
  v15 = tonemapMode;
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RDI->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = &p_m_image->m_base;
  format = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v7 = 1i64;
  }
  else if ( format == GFX_PF_R8G8B8A8 )
  {
    v7 = 2i64;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+78h+var_48], xmm0
  }
  RB_FullScreenFilterInternal(&v20, *((const Material **)&rgp.veilDownsampleMaterials[0][2 * v15] + v15 + v7), "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(135)");
}

/*
==============
R_Perceptual_DownsampleCS
==============
*/
void R_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcColorVRSMask, R_RT_ColorHandle *dstColorRt, VeilTonemapMode tonemapMode, const bool vrsInlineResolve)
{
  ComputeCmdBufState *v14; 
  bool v31; 
  unsigned __int16 v32; 
  bool v36; 
  const R_RT_Surface *Surface; 
  bool v44; 
  __int16 v45; 
  unsigned __int16 v46; 
  bool v50; 
  const R_RT_Surface *v52; 
  const R_RT_Surface *v53; 
  const ComputeShader *v54; 
  R_RT_Handle *v55; 
  unsigned int frameCount; 
  unsigned int v68; 
  __int64 v69; 
  __int64 unsignedInt; 
  unsigned int v71; 
  __int64 v72; 
  int width; 
  const R_RT_Surface *v75; 
  __int64 v82; 
  __int64 v83; 
  R_RT_Handle v84; 
  ID3D12Resource *buffers; 
  R_RT_Handle *v86; 
  R_RT_Handle v87; 
  R_RT_Handle v88; 
  int data[8]; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v14 = computeState;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  buffers = (ID3D12Resource *)computeState;
  _RSI = srcColorRt;
  _RCX = dstColorRt;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, cs:__real@3a72b9d6
    vmovups ymm0, ymmword ptr [rcx]
    vdivss  xmm1, xmm2, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
  }
  v86 = dstColorRt;
  __asm
  {
    vmaxss  xmm9, xmm1, xmm6
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
    vmaxss  xmm10, xmm2, xmm6
  }
  _RAX = R_RT_GetViewInternal(&v87, &v88, 0, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v84);
    if ( (R_RT_Handle::GetSurface(&v84)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v84.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v84.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v84.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v84.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID] }
      if ( v31 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0 }
  v32 = _EBX & 0x7FFF;
  if ( !v32 )
    v32 = 0;
  v88.m_surfaceID = v32;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+180h+var_140.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+180h+var_140.m_tracking.m_location]
    vmovups xmmword ptr [rbp+80h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+80h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
  }
  if ( v32 )
  {
    R_RT_Handle::GetSurface(&v88);
    if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_18;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_18;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v36 )
    __debugbreak();
LABEL_18:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v88);
  *(_QWORD *)&v84.m_surfaceID = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(v14, 0, 1, (const GfxTexture *const *)&v84);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v87, &v88, 0, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+180h+var_140.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v84);
    if ( (R_RT_Handle::GetSurface(&v84)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v84.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v84.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v84.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v84.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+180h+var_140.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID] }
      if ( v44 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0 }
  v45 = _EBX & 0x7FFF;
  if ( v45 )
  {
    v46 = v45 | 0x8000;
    v88.m_surfaceID = v46;
  }
  else
  {
    v46 = 0;
    v88.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+180h+var_140.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+180h+var_140.m_tracking.m_location]
    vmovups xmmword ptr [rbp+80h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+80h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
  }
  if ( v46 )
  {
    R_RT_Handle::GetSurface(&v88);
    if ( (R_RT_Handle::GetSurface(&v88)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_36;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_36;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v50 )
    __debugbreak();
LABEL_36:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+80h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+80h+var_F0.m_surfaceID], ymm0
  }
  v52 = R_RT_Handle::GetSurface(&v88);
  *(_QWORD *)&v84.m_surfaceID = R_Texture_GetResident(v52->m_image.m_base.textureId);
  R_SetComputeTextures(v14, 0, 1, (const GfxTexture *const *)&v84);
  if ( vrsInlineResolve )
  {
    v53 = R_RT_Handle::GetSurface(srcColorVRSMask);
    *(_QWORD *)&v84.m_surfaceID = R_Texture_GetResident(v53->m_image.m_base.textureId);
    R_SetComputeTextures(v14, 2, 1, (const GfxTexture *const *)&v84);
    v54 = rgp.veilDownsampleComputeShaderVrsInlineResolve[tonemapMode];
  }
  else
  {
    v54 = rgp.veilDownsampleComputeShader[tonemapMode];
  }
  R_SetComputeShader(v14, v54);
  v55 = v86;
  R_RT_Handle::GetSurface(v86);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm8, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(v55);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm7, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(v55);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, ecx
  }
  R_RT_Handle::GetSurface(v55);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  [rbp+80h+data], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+80h+var_C0], xmm0
    vmovss  [rbp+80h+var_BC], xmm0
    vmovss  [rbp+80h+var_CC], xmm6
    vmovss  [rbp+80h+var_C8], xmm7
    vmovss  [rbp+80h+var_C4], xmm8
    vmovss  [rbp+80h+var_B8], xmm9
    vmovss  [rbp+80h+var_B4], xmm10
  }
  if ( vrsInlineResolve )
  {
    frameCount = viewInfo->input.data->frameCount;
    v68 = 0;
    v69 = 0i64;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v83) = 4;
        LODWORD(v82) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v82, v83) )
          __debugbreak();
      }
      v71 = s_VRSPixelToSampleOrdered_2[unsignedInt][v69];
      v72 = (int)v68;
      ++v69;
      ++v68;
      *((_DWORD *)&v84.m_surfaceID + v72) = v71;
    }
    while ( v68 < 4 );
    __asm { vmovups xmm0, xmmword ptr [rsp+180h+var_140.m_surfaceID] }
    v14 = (ComputeCmdBufState *)buffers;
    v55 = v86;
    __asm { vmovups [rbp+80h+var_B0], xmm0 }
  }
  R_UploadAndSetComputeConstants(v14, 0, data, 0x30u, NULL);
  buffers = v14->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(v14, 7, 1, &buffers);
  width = R_RT_Handle::GetSurface(v55)->m_image.m_base.width;
  v75 = R_RT_Handle::GetSurface(v55);
  R_Dispatch(v14, (unsigned int)(width + 7) >> 3, ((unsigned int)v75->m_image.m_base.height + 7) >> 3, 1u);
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
R_Perceptual_GetSceneDownsampleTotalMipCount
==============
*/
__int64 R_Perceptual_GetSceneDownsampleTotalMipCount(unsigned int exposureMip, unsigned int veilMip, unsigned int mipCount)
{
  __int64 result; 

  if ( exposureMip < veilMip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 88, ASSERT_TYPE_ASSERT, "(exposureMip >= veilMip)", (const char *)&queryFormat, "exposureMip >= veilMip") )
    __debugbreak();
  result = veilMip + mipCount - 1;
  if ( exposureMip > (unsigned int)result )
    return exposureMip;
  return result;
}

/*
==============
R_Perceptual_GetSceneDownsampleVeilMip
==============
*/
__int64 R_Perceptual_GetSceneDownsampleVeilMip(unsigned int maxMip)
{
  __int64 result; 

  result = 2i64;
  if ( maxMip < 2 )
    return maxMip;
  return result;
}

/*
==============
R_Perceptual_GetSceneDownsampleVeilMipCount
==============
*/
__int64 R_Perceptual_GetSceneDownsampleVeilMipCount(unsigned int srcWidth, unsigned int srcHeight, unsigned int veilMip)
{
  unsigned int v3; 
  signed int v5; 
  int v6; 
  __int64 v8; 

  v3 = srcHeight;
  if ( srcHeight > srcWidth )
    v3 = srcWidth;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v5 = 31 - __lzcnt(v3);
  if ( (int)veilMip > 9 )
  {
    LODWORD(v8) = veilMip;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v8, 9) )
      __debugbreak();
  }
  if ( v5 > 9 )
    v5 = 9;
  if ( (int)veilMip > v5 )
    v5 = veilMip;
  v6 = v5 - veilMip;
  if ( v6 > 7 )
    return 7;
  return (unsigned int)v6;
}

/*
==============
R_Perceptual_Init
==============
*/

void __fastcall R_Perceptual_Init(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v9; 
  const dvar_t *v14; 
  const dvar_t *v21; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm13
    vmovaps [rsp+68h+var_28], xmm14
  }
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_r_veilUseTweaks = Dvar_RegisterBool("r_veilUseTweaks", 0, 0x40004u, "Override veil LightSet settings with tweak dvar values.");
  DCONST_DVARBOOL_r_veilTonemap = Dvar_RegisterBool("r_veilTonemap", 1, 0x40004u, "Enables pseudo-tonemapping during the first mip downsample, for firefly control.");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DCONST_DVARBOOL_r_veil = Dvar_RegisterBool("r_veil", 1, 0x40004u, "Apply veiling luminance (HDR glow)");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vxorps  xmm14, xmm14, xmm14
  }
  v9 = Dvar_RegisterFloat("r_veilStrength", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Strength of veiling luminance (HDR glow). Value 0.087 is the physically correct value");
  __asm
  {
    vmovss  xmm13, cs:__real@41200000
    vmovss  xmm3, cs:__real@3fc00000; z
    vmovss  xmm2, cs:__real@3f400000; y
    vmovss  xmm1, cs:__real@3e800000; x
  }
  DCONST_DVARFLT_r_veilStrength = v9;
  __asm
  {
    vmovss  dword ptr [rsp+68h+description], xmm13
    vmovss  [rsp+68h+flags], xmm14
  }
  v14 = Dvar_RegisterVec3("r_veilFalloffWeight1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0x40004u, "Controls the weight of individual Gaussians (Gaussians 1-3 in XYZ, where Gaussian 1 is the narrower one)");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; z
    vmovss  xmm2, cs:__real@40200000; y
    vmovss  xmm1, cs:__real@40000000; x
  }
  DCONST_DVARVEC3_r_veilFalloffWeight1 = v14;
  __asm
  {
    vmovss  dword ptr [rsp+68h+description], xmm13
    vmovss  [rsp+68h+flags], xmm14
  }
  DCONST_DVARVEC3_r_veilFalloffWeight2 = Dvar_RegisterVec3("r_veilFalloffWeight2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, 0x40004u, "Controls the weight of individual Gaussians (Gaussians 4-6 in XYZ, where Gaussian 6 is the wider one)");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3cf5c28f; value
  }
  DCONST_DVARBOOL_r_nvg_veil = Dvar_RegisterBool("r_nvg_veil", 1, 0x40004u, "NVG - Apply veiling luminance (HDR glow)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v21 = Dvar_RegisterFloat("r_nvg_veilStrength", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "NVG - Strength of veiling luminance (HDR glow)");
  __asm
  {
    vmovss  xmm3, cs:__real@3fc00000; z
    vmovss  xmm2, cs:__real@3f400000; y
    vmovss  xmm1, cs:__real@3e800000; x
  }
  DCONST_DVARFLT_r_nvg_veilStrength = v21;
  __asm
  {
    vmovss  dword ptr [rsp+68h+description], xmm13
    vmovss  [rsp+68h+flags], xmm14
  }
  DCONST_DVARVEC3_r_nvg_veilFalloffWeight1 = Dvar_RegisterVec3("r_nvg_veilFalloffWeight1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptionb, 0x40004u, "NVG - Controls the weight of individual Gaussians (Gaussians 1-3 in XYZ, where Gaussian 1 is the narrower one)");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; z
    vmovss  xmm2, cs:__real@40200000; y
    vmovss  xmm1, cs:__real@40000000; x
    vmovss  dword ptr [rsp+68h+description], xmm13
    vmovss  [rsp+68h+flags], xmm14
  }
  DCONST_DVARVEC3_r_nvg_veilFalloffWeight2 = Dvar_RegisterVec3("r_nvg_veilFalloffWeight2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, descriptionc, 0x40004u, "NVG - Controls the weight of individual Gaussians (Gaussians 4-6 in XYZ, where Gaussian 6 is the wider one)");
  __asm
  {
    vmovaps xmm13, [rsp+68h+var_18]
    vmovaps xmm14, [rsp+68h+var_28]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
R_Perceptual_Shutdown
==============
*/
void R_Perceptual_Shutdown(void)
{
  ;
}

/*
==============
R_Perceptual_UpdateLocalTonemapWeights
==============
*/
void R_Perceptual_UpdateLocalTonemapWeights()
{
  int v4; 
  bool v7; 
  __int64 v21; 
  __int64 v22; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  _RBX = DVARVEC4_r_tonemapLocalWeights;
  if ( !DVARVEC4_r_tonemapLocalWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalWeights") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovups xmm0, xmmword ptr [rbx+28h] }
  v4 = 0;
  _RDI = 0i64;
  _RSI = s_localTonemapWeights;
  v7 = 1;
  __asm
  {
    vmovups [rsp+88h+var_48], xmm0
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    if ( !v7 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+rdi+88h+var_48]
      vmovss  dword ptr [rdi+rsi], xmm0
    }
    _RDI += 4i64;
    ++v4;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v7 = (unsigned int)v4 < 4;
  }
  while ( v4 < 4 );
  __asm
  {
    vcomiss xmm6, xmm7
    vmovaps xmm2, xmm6
    vshufps xmm2, xmm2, xmm2, 0
  }
  if ( (unsigned int)v4 > 4 )
  {
    __asm
    {
      vrcpps  xmm1, xmm2
      vmulps  xmm0, xmm1, xmm1
      vmulps  xmm2, xmm0, xmm2
      vaddps  xmm1, xmm1, xmm1
      vsubps  xmm2, xmm1, xmm2
      vmulps  xmm0, xmm2, xmmword ptr cs:?s_localTonemapWeights@@3PAMA; float near * s_localTonemapWeights
      vmovups xmmword ptr cs:?s_localTonemapWeights@@3PAMA, xmm0; float near * s_localTonemapWeights
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
R_Perceptual_UpdateVeilWeights
==============
*/
void R_Perceptual_UpdateVeilWeights(bool useNightAndThermalVisionCombo)
{
  const char *v9; 
  int v17; 
  unsigned int v20; 
  __int64 v35; 
  __int64 v36; 
  char v45; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
  }
  if ( useNightAndThermalVisionCombo )
  {
    _RBX = DCONST_DVARVEC3_r_nvg_veilFalloffWeight1;
    if ( !DCONST_DVARVEC3_r_nvg_veilFalloffWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilFalloffWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DCONST_DVARVEC3_r_nvg_veilFalloffWeight2;
    __asm
    {
      vmovss  [rsp+98h+var_54], xmm1
      vmovss  [rsp+98h+var_50], xmm0
    }
    if ( !DCONST_DVARVEC3_r_nvg_veilFalloffWeight2 )
    {
      v9 = "r_nvg_veilFalloffWeight2";
      goto LABEL_12;
    }
  }
  else
  {
    _RBX = DCONST_DVARVEC3_r_veilFalloffWeight1;
    if ( !DCONST_DVARVEC3_r_veilFalloffWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilFalloffWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DCONST_DVARVEC3_r_veilFalloffWeight2;
    __asm
    {
      vmovss  [rsp+98h+var_54], xmm1
      vmovss  [rsp+98h+var_50], xmm0
    }
    if ( !DCONST_DVARVEC3_r_veilFalloffWeight2 )
    {
      v9 = "r_veilFalloffWeight2";
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  [rsp+98h+var_48], xmm0
    vmovss  xmm0, dword ptr [rbx+30h]
  }
  v17 = 1;
  _RSI = &s_veilWeights[1];
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+98h+var_40], xmm0
    vmovss  [rsp+98h+var_44], xmm1
  }
  v20 = -3;
  __asm
  {
    vmovss  cs:?s_veilWeights@@3PAMA, xmm7; float near * s_veilWeights
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    if ( (unsigned int)(v17 - 1) >= 3 )
    {
      if ( v20 >= 3 )
      {
        LODWORD(v36) = 3;
        LODWORD(v35) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      _RAX = v17;
      __asm { vmovss  xmm0, [rsp+rax*4+98h+var_58] }
    }
    else
    {
      _RAX = v17;
      __asm { vmovss  xmm0, [rsp+rax*4+98h+var_5C] }
    }
    __asm { vmovss  dword ptr [rsi], xmm0 }
    ++_RSI;
    ++v17;
    ++v20;
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  while ( v17 < 7 );
  __asm { vcomiss xmm6, xmm7 }
  if ( (unsigned int)v17 > 7 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm3, xmm0, xmm6
      vshufps xmm3, xmm3, xmm3, 0
      vmulps  xmm2, xmm3, xmmword ptr cs:?s_veilWeights@@3PAMA; float near * s_veilWeights
      vmulss  xmm1, xmm3, cs:?s_veilWeights@@3PAMA+10h; float near * s_veilWeights
      vmulss  xmm0, xmm3, cs:?s_veilWeights@@3PAMA+14h; float near * s_veilWeights
      vmovups xmmword ptr cs:?s_veilWeights@@3PAMA, xmm2; float near * s_veilWeights
      vmulss  xmm2, xmm3, cs:?s_veilWeights@@3PAMA+18h; float near * s_veilWeights
      vmovss  cs:?s_veilWeights@@3PAMA+18h, xmm2; float near * s_veilWeights
      vmovss  cs:?s_veilWeights@@3PAMA+10h, xmm1; float near * s_veilWeights
      vmovss  cs:?s_veilWeights@@3PAMA+14h, xmm0; float near * s_veilWeights
    }
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
R_Perceptual_Upsample
==============
*/
void R_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  R_RT_Image *p_m_image; 
  bool v21; 
  GfxCmdBufInput *p_input; 
  bool v23; 
  R_RT_Image *blackImage; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *v27; 
  GfxPixelFormat format; 
  __int64 v29; 
  const Material *v31; 
  GfxCmdBufContext v33; 

  _RSI = gfxContext;
  _RBX = gfxContext->source;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm4, xmm0, cs:__real@3a72b9d6
    vdivss  xmm1, xmm4, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
    vmovss  xmm0, [rsp+88h+arg_20]
    vmaxss  xmm2, xmm1, cs:__real@3f800000
    vmovss  dword ptr [rbx+0D30h], xmm0
    vmaxss  xmm0, xmm4, cs:__real@3f800000
    vmovss  dword ptr [rbx+0D38h], xmm2
    vmovss  dword ptr [rbx+0D3Ch], xmm0
    vmovaps [rsp+88h+var_48], xmm6
    vmovss  xmm6, [rsp+88h+arg_28]
    vmovss  dword ptr [rbx+0D34h], xmm6
  }
  ++_RBX->constVersions[99];
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = __CFADD__(_RBX, 1792i64) || &_RBX->input == NULL;
  p_input = &_RBX->input;
  if ( !p_input )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input");
    v21 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  p_input->codeImages[6] = &p_m_image->m_base;
  if ( v21 )
    blackImage = (R_RT_Image *)rgp.blackImage;
  else
    blackImage = &R_RT_Handle::GetSurface(addColorRt)->m_image;
  source = _RSI->source;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &source->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[4] = &blackImage->m_base;
  format = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v29 = 1i64;
  }
  else
  {
    v29 = 0i64;
    if ( format == GFX_PF_R8G8B8A8 )
      v29 = 2i64;
  }
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v31 = rgp.veilUpsampleMaterials[v29];
  __asm { vmovups [rsp+88h+var_58], xmm0 }
  RB_FullScreenFilterInternal(&v33, v31, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(211)");
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
R_Perceptual_UpsampleCS
==============
*/
void R_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  R_RT_ColorHandle *v17; 
  bool v31; 
  unsigned __int16 v32; 
  bool v36; 
  const R_RT_Surface *Surface; 
  bool v44; 
  __int16 v45; 
  unsigned __int16 v46; 
  bool v50; 
  const R_RT_Surface *v52; 
  bool v58; 
  __int16 v59; 
  unsigned __int16 v60; 
  bool v64; 
  bool v65; 
  const R_RT_Surface *v66; 
  const R_RT_Surface *v70; 
  GfxTexture *Resident; 
  int width; 
  const R_RT_Surface *v84; 
  R_RT_Handle v92; 
  GfxTexture *textures; 
  R_RT_Handle v94; 
  R_RT_Handle v95; 
  int data[12]; 
  char v97; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovss  xmm6, cs:__real@3f800000
  }
  _R15 = addColorRt;
  v17 = dstColorRt;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, cs:__real@3a72b9d6
    vmovups ymm0, ymmword ptr [r9]
    vdivss  xmm1, xmm2, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
  }
  _R14 = srcColorRt;
  __asm
  {
    vmaxss  xmm10, xmm1, xmm6
    vmaxss  xmm11, xmm2, xmm6
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v94, &v95, 0, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v92);
    if ( (R_RT_Handle::GetSurface(&v92)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID] }
      if ( v31 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0 }
  v32 = _EBX & 0x7FFF;
  if ( v32 )
  {
    v95.m_surfaceID = v32;
  }
  else
  {
    v32 = 0;
    v95.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+170h+var_148.m_tracking.m_name]
    vmovsd  xmm1, [rsp+170h+var_128]
    vmovups xmmword ptr [rbp+70h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+70h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  if ( v32 )
  {
    R_RT_Handle::GetSurface(&v95);
    if ( (R_RT_Handle::GetSurface(&v95)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v36 )
    __debugbreak();
LABEL_19:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v95);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v94, &v95, 0, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v92);
    if ( (R_RT_Handle::GetSurface(&v92)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID] }
      if ( v44 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0 }
  v45 = _EBX & 0x7FFF;
  if ( v45 )
  {
    v46 = v45 | 0x8000;
    v95.m_surfaceID = v46;
  }
  else
  {
    v46 = 0;
    v95.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+170h+var_148.m_tracking.m_name]
    vmovsd  xmm1, [rsp+170h+var_128]
    vmovups xmmword ptr [rbp+70h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+70h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  if ( v46 )
  {
    R_RT_Handle::GetSurface(&v95);
    if ( (R_RT_Handle::GetSurface(&v95)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_37;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_37;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v50 )
    __debugbreak();
LABEL_37:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  v52 = R_RT_Handle::GetSurface(&v95);
  textures = (GfxTexture *)R_Texture_GetResident(v52->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v94, &v95, 0, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v92);
    if ( (R_RT_Handle::GetSurface(&v92)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v92.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v92.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_148.m_tracking.m_allocCounter] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID] }
      if ( v58 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0 }
  v59 = _EBX & 0x7FFF;
  if ( v59 )
    v60 = v59 | 0x8000;
  else
    v60 = 0;
  v95.m_surfaceID = v60;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+170h+var_148.m_tracking.m_name]
    vmovsd  xmm1, [rsp+170h+var_128]
    vmovups xmmword ptr [rbp+70h+var_F0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+70h+var_F0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  if ( v60 )
  {
    R_RT_Handle::GetSurface(&v95);
    v66 = R_RT_Handle::GetSurface(&v95);
    v64 = (v66->m_rtFlagsInternal & 0x18) == 0;
    if ( (v66->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_55;
    v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    v64 = (_DWORD)_RDI == 0;
    if ( !(_DWORD)_RDI )
      goto LABEL_55;
    v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  v64 = !v65;
  if ( v65 )
    __debugbreak();
LABEL_55:
  __asm
  {
    vmovss  xmm9, [rbp+70h+arg_30]
    vmovups ymm0, ymmword ptr [rbp+70h+var_F0.m_surfaceID]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm9, xmm1
    vmovups ymmword ptr [rbp+70h+var_F0.m_surfaceID], ymm0
  }
  if ( v64 )
  {
    Resident = (GfxTexture *)R_Texture_Get(computeState->data, rgp.blackImage->textureId);
  }
  else
  {
    v70 = R_RT_Handle::GetSurface(&v95);
    Resident = (GfxTexture *)R_Texture_GetResident(v70->m_image.m_base.textureId);
  }
  textures = Resident;
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  R_SetComputeShader(computeState, rgp.veilUpsampleComputeShader);
  R_RT_Handle::GetSurface(v17);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm8, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(v17);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm7, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(v17);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, ecx
  }
  R_RT_Handle::GetSurface(v17);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  [rbp+70h+data], xmm0
    vmovss  xmm0, [rbp+70h+arg_28]
    vmovss  [rbp+70h+var_C0], xmm0
    vmovss  [rbp+70h+var_CC], xmm6
    vmovss  [rbp+70h+var_C8], xmm7
    vmovss  [rbp+70h+var_C4], xmm8
    vmovss  [rbp+70h+var_BC], xmm9
    vmovss  [rbp+70h+var_B8], xmm10
    vmovss  [rbp+70h+var_B4], xmm11
  }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  textures = (GfxTexture *)computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)&textures);
  width = R_RT_Handle::GetSurface(v17)->m_image.m_base.width;
  v84 = R_RT_Handle::GetSurface(v17);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, ((unsigned int)v84->m_image.m_base.height + 7) >> 3, 1u);
  _R11 = &v97;
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

