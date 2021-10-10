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
  R_RT_Handle v22; 
  bool v24; 
  GfxCmdBufState *state; 
  R_RT_Handle v27; 
  __m256i v28; 
  R_RT_Handle resulta; 

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
  result->mipBegin = baseMip;
  result->mipEnd = v13;
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
      v22 = *R_RT_CreateInternal(&resulta, v20, v21, v20, v21, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)format], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, (*mipNames)[baseMip], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(337)");
      v28 = (__m256i)v22;
      v27 = v22;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v27);
        if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v22 = v27;
          __debugbreak();
        }
        else
        {
          v22 = v27;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v22 = (R_RT_Handle)v28;
          if ( v24 )
            __debugbreak();
        }
      }
      v28 = (__m256i)v22;
      result->colorRts[baseMip] = (R_RT_ColorHandle)v22;
      state = gfxContext->state;
      R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v28, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++baseMip;
    }
    while ( baseMip <= result->mipEnd );
  }
  R_FlushResourceTransitions(state);
  return result;
}

/*
==============
RB_Perceptual_DecommitMipChain
==============
*/
void RB_Perceptual_DecommitMipChain(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *mipChain, unsigned int mipBegin, unsigned int mipEnd)
{
  unsigned int v5; 
  GfxCmdBufContext v8; 
  R_RT_ColorHandle v9; 

  v5 = mipBegin;
  if ( mipBegin > mipEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 350, ASSERT_TYPE_ASSERT, "(mipBegin <= mipEnd)", (const char *)&queryFormat, "mipBegin <= mipEnd") )
    __debugbreak();
  for ( ; v5 <= mipEnd; ++v5 )
  {
    v8 = *gfxContext;
    v9 = mipChain->colorRts[v5];
    R_RT_Destroy(&v8, &v9);
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
  GfxCmdBufContext v11; 
  GfxCmdBufContext v12; 
  __int128 v13; 
  R_RT_Image *p_m_image; 
  GfxPixelFormat format; 
  __int64 v20; 
  GfxCmdBufInput *p_input; 
  R_RT_ColorHandle v22; 
  GfxCmdBufState *state; 
  R_RT_Handle v24; 
  R_RT_ColorHandle v25; 

  R_ProfBeginNamedEvent(gfxContext->state, "Downsample Filter");
  v24 = dstColorRt->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&v24)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v24);
  source = gfxContext->source;
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v11 = *gfxContext;
  v25 = *dstColorRt;
  *(GfxCmdBufContext *)&v24.m_surfaceID = v11;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v24, &v25, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(188)");
  v12 = *gfxContext;
  v24 = srcColorRt->R_RT_Handle;
  v13 = 0i64;
  *(float *)&v13 = (float)vidConfig.displayHeight;
  *(float *)&v13 = *(float *)&v13 * 0.00092592591;
  _XMM3 = v13;
  *(float *)&v13 = *(float *)&v13 / vidConfig.aspectRatioScenePixel;
  _XMM1 = v13;
  __asm { vmaxss  xmm0, xmm1, cs:__real@3f800000 }
  v12.source->input.consts[99].v[2] = *(float *)&_XMM0;
  __asm { vmaxss  xmm0, xmm3, cs:__real@3f800000 }
  v12.source->input.consts[99].v[3] = *(float *)&_XMM0;
  *(_QWORD *)v12.source->input.consts[99].v = 0i64;
  ++v12.source->constVersions[99];
  p_m_image = &R_RT_Handle::GetSurface(&v24)->m_image;
  if ( v12.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v12.source->input.codeImages[6] = &p_m_image->m_base;
  format = R_RT_Handle::GetSurface(&v24)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v20 = 1i64;
  }
  else
  {
    v20 = 0i64;
    if ( format == GFX_PF_R8G8B8A8 )
      v20 = 2i64;
  }
  *(GfxCmdBufContext *)&v24.m_surfaceID = v12;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v24, *((const Material **)&rgp.veilDownsampleMaterials[0][2 * tonemapMode] + v20 + (int)tonemapMode), "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(135)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v22 = *dstColorRt;
  state = gfxContext->state;
  p_input->codeImages[6] = NULL;
  v25 = v22;
  R_AddRenderTargetTransition(state, &v25, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_Perceptual_DownsampleScene
==============
*/
void RB_Perceptual_DownsampleScene(GfxCmdBufContext *gfxContext, const RB_Perceptual_MipChain *dstMipChain, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt, VeilTonemapMode tonemapMode, unsigned int mipTonemapCutoff)
{
  R_RT_ColorHandle v10; 
  unsigned int i; 
  VeilTonemapMode v12; 
  GfxCmdBufContext v13; 
  __m256i v14; 
  R_RT_ColorHandle v15; 
  __m256i v16; 

  R_ProfBeginNamedEvent(gfxContext->state, "RB_Perceptual_DownsampleScene");
  R_GPU_BeginTimer(GPU_TIMER_DOWNSAMPLE);
  R_Set2D(gfxContext->source);
  if ( dstMipChain->mipEnd < mipTonemapCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 370, ASSERT_TYPE_ASSERT, "(dstMipChain->mipEnd >= mipTonemapCutoff)", (const char *)&queryFormat, "dstMipChain->mipEnd >= mipTonemapCutoff") )
    __debugbreak();
  v10 = *srcRt;
  for ( i = dstMipChain->mipBegin; i <= dstMipChain->mipEnd; ++i )
  {
    v15 = v10;
    v12 = R_VEIL_TONEMAP_DISABLED;
    v16 = (__m256i)dstMipChain->colorRts[i];
    v14 = v16;
    v13 = *gfxContext;
    if ( i < mipTonemapCutoff )
      v12 = tonemapMode;
    RB_Perceptual_Downsample(&v13, viewInfo, &v15, (R_RT_ColorHandle *)&v14, v12);
    v10 = (R_RT_ColorHandle)v16;
  }
  v13 = *gfxContext;
  R_SetRenderTargetsInternal_None(&v13, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(385)");
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(gfxContext->state);
}

/*
==============
RB_Perceptual_ScatterBlurScene
==============
*/
void RB_Perceptual_ScatterBlurScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sceneColorSrcRt, R_RT_ColorHandle *sceneColorDstRt, bool glossy)
{
  __int128 v9; 
  unsigned int v10; 
  __m256i *v11; 
  R_RT_Handle v12; 
  bool v14; 
  GfxCmdBufState *state; 
  R_RT_Handle *v16; 
  R_RT_Handle *v17; 
  unsigned int v18; 
  const GfxViewInfo *v19; 
  unsigned int v20; 
  __m256i *v21; 
  __m256i v22; 
  unsigned int height; 
  unsigned int width; 
  __m256i v27; 
  GfxCmdBufContext v28; 
  __int128 v29; 
  GfxCmdBufState *v30; 
  __int64 v31; 
  R_RT_Handle *v32; 
  _QWORD v33[5]; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_Handle *v36; 
  R_RT_Handle v37; 
  __m256i v38; 
  __m256i v39; 
  _OWORD v40[8]; 

  v36 = sceneColorDstRt;
  *(_QWORD *)&v35.m_surfaceID = viewInfo;
  if ( R_RT_Handle::GetSurface(sceneColorDstRt)->m_image.m_base.format != g_R_RT_renderTargetFmts[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 432, ASSERT_TYPE_ASSERT, "(sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER ))", (const char *)&queryFormat, "sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER )") )
    __debugbreak();
  v39 = *(__m256i *)sceneColorSrcRt;
  v9 = 0i64;
  v10 = 0;
  v11 = (__m256i *)v40;
  do
  {
    v34 = sceneColorDstRt->R_RT_Handle;
    v12 = *R_RT_GetViewInternal(&v37, &v34, -1, v10);
    v34 = v12;
    *(R_RT_Handle *)&v33[1] = v12;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)&v33[1]);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)&v33[1])->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v12 = *(R_RT_Handle *)&v33[1];
        __debugbreak();
      }
      else
      {
        v12 = *(R_RT_Handle *)&v33[1];
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v12 = v34;
        if ( v14 )
          __debugbreak();
      }
    }
    state = gfxContext->state;
    *(R_RT_Handle *)v11 = v12;
    v34 = v12;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v34, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    ++v10;
    ++v11;
  }
  while ( v10 < 4 );
  R_FlushResourceTransitions(state);
  v16 = (R_RT_Handle *)v40;
  v17 = v36;
  v18 = 1;
  if ( glossy )
    v18 = 4;
  v19 = *(const GfxViewInfo **)&v35.m_surfaceID;
  v20 = 0;
  do
  {
    if ( v20 )
      v21 = (__m256i *)&v40[2 * v20 - 2];
    else
      v21 = &v39;
    v22 = *v21;
    v34 = *v16;
    *(R_RT_Handle *)&v33[1] = v34;
    _XMM0 = *gfxContext;
    *(GfxCmdBufContext *)&v35.m_surfaceID = *gfxContext;
    v38 = v22;
    RB_Perceptual_Downsample((GfxCmdBufContext *)&v35, v19, (R_RT_ColorHandle *)&v38, (R_RT_ColorHandle *)&v33[1], R_VEIL_TONEMAP_ENABLED);
    if ( v20 )
    {
      if ( R_RT_Handle::GetSurface(v17)->m_image.m_base.format != g_R_RT_renderTargetFmts[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp", 460, ASSERT_TYPE_ASSERT, "(sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER ))", (const char *)&queryFormat, "sceneColorDstRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_SCENEBUFFER )") )
        __debugbreak();
      height = R_RT_Handle::GetSurface(&v34)->m_image.m_base.height;
      width = R_RT_Handle::GetSurface(&v34)->m_image.m_base.width;
      LOWORD(v33[1]) = 0;
      LODWORD(v33[2]) = 0;
      v35.m_surfaceID = 0;
      v35.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v33[3] = _XMM0;
      *(_OWORD *)&v35.m_tracking.m_name = _XMM0;
      v38 = *(__m256i *)&v33[1];
      v27 = *(__m256i *)v16;
      v34 = v35;
      v28 = *gfxContext;
      *(__m256i *)&v33[1] = v27;
      v37 = (R_RT_Handle)v27;
      *(GfxCmdBufContext *)&v35.m_surfaceID = v28;
      RB_GaussianFilterHdrImage((GfxCmdBufContext *)&v35, v20, *(float *)&v9, (R_RT_ColorHandle *)&v37, (R_RT_ColorHandle *)&v33[1], (R_RT_ColorHandle *)&v34, (R_RT_ColorHandle *)&v38, width, height, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, 7u, v19);
    }
    ++v20;
    ++v16;
    v29 = v9;
    *(float *)&v29 = *(float *)&v9 + 0.5;
    v9 = v29;
  }
  while ( v20 < v18 );
  v30 = gfxContext->state;
  if ( !glossy )
  {
    v31 = 4 - v18;
    v32 = (R_RT_Handle *)&v40[2 * v18];
    do
    {
      v37 = *v32;
      R_AddRenderTargetTransition(v30, (R_RT_ColorHandle *)&v37, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++v32;
      --v31;
    }
    while ( v31 );
  }
  R_FlushResourceTransitions(v30);
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
  GfxCmdBufContext v14; 
  R_RT_ColorHandle v15; 
  GfxCmdBufContext v16; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v18; 
  R_RT_Handle v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle v21; 

  R_ProfBeginNamedEvent(gfxContext->state, "Upsample Filter");
  v19 = dstColorRt->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&v19)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v19);
  source = gfxContext->source;
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v14 = *gfxContext;
  v20 = *dstColorRt;
  *(GfxCmdBufContext *)&v19.m_surfaceID = v14;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v19, &v20, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(220)");
  v15 = *srcColorRt;
  v20 = *addColorRt;
  v16 = *gfxContext;
  v21 = v15;
  *(GfxCmdBufContext *)&v19.m_surfaceID = v16;
  R_Perceptual_Upsample((GfxCmdBufContext *)&v19, viewInfo, &v21, &v20, weightInput, weightOutput);
  state = gfxContext->state;
  v21 = *dstColorRt;
  R_AddRenderTargetTransition(state, &v21, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(gfxContext->state);
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[6] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v18 = gfxContext->state;
  source->input.codeImages[4] = NULL;
  R_ProfEndNamedEvent(v18);
}

/*
==============
RB_Perceptual_UpsampleScene
==============
*/
void RB_Perceptual_UpsampleScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int baseMip, unsigned int mipCount, const RB_Perceptual_MipChain *srcMipChain, const RB_Perceptual_MipChain *dstMipChain, const float *weights)
{
  GfxCmdBufState *state; 
  __int64 v11; 
  signed int v12; 
  __int64 v13; 
  __int64 v14; 
  __m256i v15; 
  unsigned int v16; 
  float v17; 
  __int64 v18; 
  __m256i v19; 
  float v20; 
  GfxCmdBufContext v21; 
  __m256i v22; 
  R_RT_ColorHandle v23; 
  __m256i v24; 
  __m256i v25; 

  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "RB_Perceptual_UpsampleScene");
  R_GPU_BeginTimer(GPU_TIMER_VEIL);
  R_Set2D(gfxContext->source);
  v11 = baseMip + mipCount - 1;
  v12 = mipCount - 1;
  v13 = (int)(mipCount - 1);
  v14 = v12;
  v15 = (__m256i)srcMipChain->colorRts[v11];
  if ( v12 > 0 )
  {
    v16 = v12 + baseMip;
    do
    {
      if ( v13 == v14 )
        v17 = weights[v13];
      else
        v17 = FLOAT_1_0;
      v18 = v16 - 1;
      v24 = v15;
      v19 = (__m256i)dstMipChain->colorRts[v18];
      v23 = srcMipChain->colorRts[v18];
      v20 = weights[v13 - 1];
      v25 = v19;
      v22 = v19;
      v21 = *gfxContext;
      RB_Perceptual_Upsample(&v21, viewInfo, (R_RT_ColorHandle *)&v24, &v23, (R_RT_ColorHandle *)&v22, v17, v20);
      v15 = v25;
      --v16;
      --v13;
    }
    while ( v13 > 0 );
    state = gfxContext->state;
  }
  v21 = *gfxContext;
  R_SetRenderTargetsInternal_None(&v21, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(420)");
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
  GfxCmdBufSourceState *source; 
  __int64 v6; 
  __int128 v7; 
  __int64 v13; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxPixelFormat format; 
  GfxCmdBufContext v17; 

  source = gfxContext->source;
  v6 = 0i64;
  v7 = 0i64;
  *(float *)&v7 = (float)vidConfig.displayHeight;
  *(float *)&v7 = *(float *)&v7 * 0.00092592591;
  _XMM3 = v7;
  *(float *)&v7 = *(float *)&v7 / vidConfig.aspectRatioScenePixel;
  _XMM1 = v7;
  __asm { vmaxss  xmm0, xmm1, cs:__real@3f800000 }
  source->input.consts[99].v[2] = *(float *)&_XMM0;
  __asm { vmaxss  xmm0, xmm3, cs:__real@3f800000 }
  source->input.consts[99].v[3] = *(float *)&_XMM0;
  *(_QWORD *)source->input.consts[99].v = 0i64;
  ++source->constVersions[99];
  v13 = tonemapMode;
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = &p_m_image->m_base;
  format = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v6 = 1i64;
  }
  else if ( format == GFX_PF_R8G8B8A8 )
  {
    v6 = 2i64;
  }
  v17 = *gfxContext;
  RB_FullScreenFilterInternal(&v17, *((const Material **)&rgp.veilDownsampleMaterials[0][2 * v13] + v13 + v6), "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(135)");
}

/*
==============
R_Perceptual_DownsampleCS
==============
*/
void R_Perceptual_DownsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcColorVRSMask, R_RT_ColorHandle *dstColorRt, VeilTonemapMode tonemapMode, const bool vrsInlineResolve)
{
  ComputeCmdBufState *v7; 
  __int128 v12; 
  R_RT_Handle v14; 
  R_RT_Handle v18; 
  unsigned __int16 m_surfaceID; 
  bool v21; 
  unsigned __int16 v22; 
  bool v24; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v26; 
  unsigned __int16 v27; 
  bool v29; 
  __int16 v30; 
  unsigned __int16 v31; 
  bool v32; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  const ComputeShader *v35; 
  R_RT_Handle *v36; 
  int v37; 
  int v38; 
  float height; 
  unsigned int frameCount; 
  unsigned int v41; 
  __int64 v42; 
  __int64 unsignedInt; 
  unsigned int v44; 
  __int64 v45; 
  int width; 
  const R_RT_Surface *v47; 
  __int64 v48; 
  __int64 v49; 
  R_RT_Handle v50; 
  ID3D12Resource *buffers; 
  R_RT_Handle *v52; 
  R_RT_Handle v53; 
  R_RT_Handle v54; 
  int data[8]; 
  __int128 v56; 

  v7 = computeState;
  buffers = (ID3D12Resource *)computeState;
  v12 = 0i64;
  *(float *)&v12 = (float)vidConfig.displayHeight;
  _XMM0 = v12;
  *(float *)&v12 = *(float *)&v12 * 0.00092592591;
  _XMM2 = v12;
  v14 = dstColorRt->R_RT_Handle;
  *(float *)&v12 = *(float *)&v12 / vidConfig.aspectRatioScenePixel;
  _XMM1 = v12;
  v52 = dstColorRt;
  __asm { vmaxss  xmm9, xmm1, xmm6 }
  v54 = v14;
  __asm { vmaxss  xmm10, xmm2, xmm6 }
  v18 = *R_RT_GetViewInternal(&v53, &v54, 0, 0);
  m_surfaceID = _XMM0;
  v54 = v18;
  v50 = v18;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v50.m_tracking.m_allocCounter;
      m_surfaceID = v50.m_surfaceID;
      v18 = v50;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v50.m_tracking.m_allocCounter;
      m_surfaceID = v50.m_surfaceID;
      v18 = v50;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v18 = v54;
      if ( v21 )
        __debugbreak();
    }
  }
  v54 = v18;
  v22 = m_surfaceID & 0x7FFF;
  if ( !v22 )
    v22 = 0;
  v54.m_surfaceID = v22;
  _XMM0 = *(_OWORD *)&v50.m_tracking.m_allocCounter;
  v54.m_tracking = v50.m_tracking;
  if ( v22 )
  {
    R_RT_Handle::GetSurface(&v54);
    if ( (R_RT_Handle::GetSurface(&v54)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_18;
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_18;
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v24 )
    __debugbreak();
LABEL_18:
  Surface = R_RT_Handle::GetSurface(&v54);
  *(_QWORD *)&v50.m_surfaceID = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(v7, 0, 1, (const GfxTexture *const *)&v50);
  v54 = srcColorRt->R_RT_Handle;
  v26 = *R_RT_GetViewInternal(&v53, &v54, 0, 0);
  v27 = _XMM0;
  v54 = v26;
  v50 = v26;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v50.m_tracking.m_allocCounter;
      v27 = v50.m_surfaceID;
      v26 = v50;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v50.m_tracking.m_allocCounter;
      v27 = v50.m_surfaceID;
      v26 = v50;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v26 = v54;
      if ( v29 )
        __debugbreak();
    }
  }
  v54 = v26;
  v30 = v27 & 0x7FFF;
  if ( v30 )
  {
    v31 = v30 | 0x8000;
    v54.m_surfaceID = v31;
  }
  else
  {
    v31 = 0;
    v54.m_surfaceID = 0;
  }
  v54.m_tracking = v50.m_tracking;
  if ( v31 )
  {
    R_RT_Handle::GetSurface(&v54);
    if ( (R_RT_Handle::GetSurface(&v54)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_36;
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_36;
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v32 )
    __debugbreak();
LABEL_36:
  v33 = R_RT_Handle::GetSurface(&v54);
  *(_QWORD *)&v50.m_surfaceID = R_Texture_GetResident(v33->m_image.m_base.textureId);
  R_SetComputeTextures(v7, 0, 1, (const GfxTexture *const *)&v50);
  if ( vrsInlineResolve )
  {
    v34 = R_RT_Handle::GetSurface(srcColorVRSMask);
    *(_QWORD *)&v50.m_surfaceID = R_Texture_GetResident(v34->m_image.m_base.textureId);
    R_SetComputeTextures(v7, 2, 1, (const GfxTexture *const *)&v50);
    v35 = rgp.veilDownsampleComputeShaderVrsInlineResolve[tonemapMode];
  }
  else
  {
    v35 = rgp.veilDownsampleComputeShader[tonemapMode];
  }
  R_SetComputeShader(v7, v35);
  v36 = v52;
  *(float *)&v37 = 1.0 / (float)R_RT_Handle::GetSurface(v52)->m_image.m_base.height;
  *(float *)&v38 = 1.0 / (float)R_RT_Handle::GetSurface(v36)->m_image.m_base.width;
  height = (float)R_RT_Handle::GetSurface(v36)->m_image.m_base.height;
  *(float *)data = (float)R_RT_Handle::GetSurface(v36)->m_image.m_base.width;
  *(float *)&data[4] = 0.0;
  *(float *)&data[5] = 0.0;
  *(float *)&data[1] = height;
  data[2] = v38;
  data[3] = v37;
  data[6] = _XMM9;
  data[7] = _XMM10;
  if ( vrsInlineResolve )
  {
    frameCount = viewInfo->input.data->frameCount;
    v41 = 0;
    v42 = 0i64;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v49) = 4;
        LODWORD(v48) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v44 = s_VRSPixelToSampleOrdered_2[unsignedInt][v42];
      v45 = (int)v41;
      ++v42;
      ++v41;
      *((_DWORD *)&v50.m_surfaceID + v45) = v44;
    }
    while ( v41 < 4 );
    v7 = (ComputeCmdBufState *)buffers;
    v36 = v52;
    v56 = *(_OWORD *)&v50.m_surfaceID;
  }
  R_UploadAndSetComputeConstants(v7, 0, data, 0x30u, NULL);
  buffers = v7->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(v7, 7, 1, &buffers);
  width = R_RT_Handle::GetSurface(v36)->m_image.m_base.width;
  v47 = R_RT_Handle::GetSurface(v36);
  R_Dispatch(v7, (unsigned int)(width + 7) >> 3, ((unsigned int)v47->m_image.m_base.height + 7) >> 3, 1u);
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
void R_Perceptual_Init(void)
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_r_veilUseTweaks = Dvar_RegisterBool("r_veilUseTweaks", 0, 0x40004u, "Override veil LightSet settings with tweak dvar values.");
  DCONST_DVARBOOL_r_veilTonemap = Dvar_RegisterBool("r_veilTonemap", 1, 0x40004u, "Enables pseudo-tonemapping during the first mip downsample, for firefly control.");
  DCONST_DVARBOOL_r_veil = Dvar_RegisterBool("r_veil", 1, 0x40004u, "Apply veiling luminance (HDR glow)");
  DCONST_DVARFLT_r_veilStrength = Dvar_RegisterFloat("r_veilStrength", 0.0, 0.0, 1.0, 0x40004u, "Strength of veiling luminance (HDR glow). Value 0.087 is the physically correct value");
  DCONST_DVARVEC3_r_veilFalloffWeight1 = Dvar_RegisterVec3("r_veilFalloffWeight1", 0.25, 0.75, 1.5, 0.0, 10.0, 0x40004u, "Controls the weight of individual Gaussians (Gaussians 1-3 in XYZ, where Gaussian 1 is the narrower one)");
  DCONST_DVARVEC3_r_veilFalloffWeight2 = Dvar_RegisterVec3("r_veilFalloffWeight2", 2.0, 2.5, 3.0, 0.0, 10.0, 0x40004u, "Controls the weight of individual Gaussians (Gaussians 4-6 in XYZ, where Gaussian 6 is the wider one)");
  DCONST_DVARBOOL_r_nvg_veil = Dvar_RegisterBool("r_nvg_veil", 1, 0x40004u, "NVG - Apply veiling luminance (HDR glow)");
  DCONST_DVARFLT_r_nvg_veilStrength = Dvar_RegisterFloat("r_nvg_veilStrength", 0.029999999, 0.0, 1.0, 0x40004u, "NVG - Strength of veiling luminance (HDR glow)");
  DCONST_DVARVEC3_r_nvg_veilFalloffWeight1 = Dvar_RegisterVec3("r_nvg_veilFalloffWeight1", 0.25, 0.75, 1.5, 0.0, 10.0, 0x40004u, "NVG - Controls the weight of individual Gaussians (Gaussians 1-3 in XYZ, where Gaussian 1 is the narrower one)");
  DCONST_DVARVEC3_r_nvg_veilFalloffWeight2 = Dvar_RegisterVec3("r_nvg_veilFalloffWeight2", 2.0, 2.5, 3.0, 0.0, 10.0, 0x40004u, "NVG - Controls the weight of individual Gaussians (Gaussians 4-6 in XYZ, where Gaussian 6 is the wider one)");
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
void R_Perceptual_UpdateLocalTonemapWeights(void)
{
  const dvar_t *v0; 
  __int128 current; 
  int v2; 
  __int64 v3; 
  bool v4; 
  __m128 v5; 
  float v6; 
  __m128 v7; 
  __int64 v10; 
  __int64 v11; 
  __int128 v12; 

  v0 = DVARVEC4_r_tonemapLocalWeights;
  if ( !DVARVEC4_r_tonemapLocalWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalWeights") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  current = (__int128)v0->current;
  v2 = 0;
  v3 = 0i64;
  v4 = 1;
  v12 = current;
  v5 = 0i64;
  do
  {
    if ( !v4 )
    {
      LODWORD(v11) = 4;
      LODWORD(v10) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v6 = *(float *)((char *)&v12 + v3 * 4);
    s_localTonemapWeights[v3++] = v6;
    ++v2;
    v7 = v5;
    v7.m128_f32[0] = v5.m128_f32[0] + v6;
    v5 = v7;
    v4 = (unsigned int)v2 < 4;
  }
  while ( v2 < 4 );
  _XMM2 = _mm_shuffle_ps(v7, v7, 0);
  if ( v7.m128_f32[0] > 0.0 )
  {
    __asm { vrcpps  xmm1, xmm2 }
    *(__m128 *)s_localTonemapWeights = _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), *(__m128 *)s_localTonemapWeights);
  }
}

/*
==============
R_Perceptual_UpdateVeilWeights
==============
*/
void R_Perceptual_UpdateVeilWeights(bool useNightAndThermalVisionCombo)
{
  const dvar_t *v1; 
  float v2; 
  float v3; 
  const dvar_t *v4; 
  const char *v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  int v11; 
  float *v12; 
  unsigned int v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  __m128 v17; 
  __m128 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  int integer; 
  float v23; 
  float v24; 
  int v25; 
  float v26; 
  float v27; 

  if ( useNightAndThermalVisionCombo )
  {
    v1 = DCONST_DVARVEC3_r_nvg_veilFalloffWeight1;
    if ( !DCONST_DVARVEC3_r_nvg_veilFalloffWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilFalloffWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    v2 = v1->current.vector.v[1];
    integer = v1->current.integer;
    v3 = v1->current.vector.v[2];
    v4 = DCONST_DVARVEC3_r_nvg_veilFalloffWeight2;
    v23 = v2;
    v24 = v3;
    if ( !DCONST_DVARVEC3_r_nvg_veilFalloffWeight2 )
    {
      v5 = "r_nvg_veilFalloffWeight2";
      goto LABEL_12;
    }
  }
  else
  {
    v6 = DCONST_DVARVEC3_r_veilFalloffWeight1;
    if ( !DCONST_DVARVEC3_r_veilFalloffWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilFalloffWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.vector.v[1];
    integer = v6->current.integer;
    v8 = v6->current.vector.v[2];
    v4 = DCONST_DVARVEC3_r_veilFalloffWeight2;
    v23 = v7;
    v24 = v8;
    if ( !DCONST_DVARVEC3_r_veilFalloffWeight2 )
    {
      v5 = "r_veilFalloffWeight2";
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v4);
  v9 = v4->current.vector.v[1];
  v25 = v4->current.integer;
  v10 = v4->current.vector.v[2];
  v11 = 1;
  v12 = &s_veilWeights[1];
  v27 = v10;
  v26 = v9;
  v13 = -3;
  s_veilWeights[0] = 0.0;
  v14 = 0i64;
  do
  {
    if ( (unsigned int)(v11 - 1) >= 3 )
    {
      if ( v13 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v15 = *((float *)&integer + v11);
    }
    else
    {
      v15 = *((float *)&v21 + v11);
    }
    *v12++ = v15;
    ++v11;
    ++v13;
    v16 = v14;
    *(float *)&v16 = *(float *)&v14 + v15;
    v14 = v16;
  }
  while ( v11 < 7 );
  if ( *(float *)&v16 > 0.0 )
  {
    v17 = (__m128)LODWORD(FLOAT_1_0);
    v17.m128_f32[0] = 1.0 / *(float *)&v14;
    v18 = _mm_shuffle_ps(v17, v17, 0);
    *(__m128 *)s_veilWeights = _mm128_mul_ps(v18, *(__m128 *)s_veilWeights);
    s_veilWeights[6] = v18.m128_f32[0] * s_veilWeights[6];
    s_veilWeights[4] = v18.m128_f32[0] * s_veilWeights[4];
    s_veilWeights[5] = v18.m128_f32[0] * s_veilWeights[5];
  }
}

/*
==============
R_Perceptual_Upsample
==============
*/
void R_Perceptual_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  GfxCmdBufSourceState *source; 
  __int128 v9; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  R_RT_Image *blackImage; 
  GfxCmdBufSourceState *v18; 
  GfxCmdBufInput *v19; 
  GfxPixelFormat format; 
  __int64 v21; 
  const Material *v22; 
  GfxCmdBufContext v23; 

  source = gfxContext->source;
  v9 = 0i64;
  *(float *)&v9 = (float)vidConfig.displayHeight;
  *(float *)&v9 = *(float *)&v9 * 0.00092592591;
  _XMM4 = v9;
  *(float *)&v9 = *(float *)&v9 / vidConfig.aspectRatioScenePixel;
  _XMM1 = v9;
  __asm { vmaxss  xmm2, xmm1, cs:__real@3f800000 }
  source->input.consts[99].v[0] = weightInput;
  __asm { vmaxss  xmm0, xmm4, cs:__real@3f800000 }
  source->input.consts[99].v[2] = *(float *)&_XMM2;
  source->input.consts[99].v[3] = *(float *)&_XMM0;
  source->input.consts[99].v[1] = weightOutput;
  ++source->constVersions[99];
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = &p_m_image->m_base;
  if ( weightOutput <= 0.0 )
    blackImage = (R_RT_Image *)rgp.blackImage;
  else
    blackImage = &R_RT_Handle::GetSurface(addColorRt)->m_image;
  v18 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v19 = &v18->input;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v19->codeImages[4] = &blackImage->m_base;
  format = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.format;
  if ( format == GFX_PF_R16F || format == GFX_PF_R32F )
  {
    v21 = 1i64;
  }
  else
  {
    v21 = 0i64;
    if ( format == GFX_PF_R8G8B8A8 )
      v21 = 2i64;
  }
  v22 = rgp.veilUpsampleMaterials[v21];
  v23 = *gfxContext;
  RB_FullScreenFilterInternal(&v23, v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_perceptual.cpp(211)");
}

/*
==============
R_Perceptual_UpsampleCS
==============
*/
void R_Perceptual_UpsampleCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *addColorRt, float weightInput, float weightOutput)
{
  __int128 v9; 
  R_RT_Handle v16; 
  unsigned __int16 m_surfaceID; 
  bool v19; 
  unsigned __int16 v20; 
  bool v22; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v24; 
  unsigned __int16 v25; 
  bool v27; 
  __int16 v28; 
  unsigned __int16 v29; 
  bool v31; 
  const R_RT_Surface *v32; 
  R_RT_Handle v33; 
  unsigned __int16 v34; 
  bool v36; 
  __int16 v37; 
  unsigned __int16 v38; 
  bool v39; 
  const R_RT_Surface *v40; 
  GfxTexture *Resident; 
  int v42; 
  int v43; 
  float height; 
  int width; 
  const R_RT_Surface *v46; 
  R_RT_Handle v47; 
  GfxTexture *textures; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  int data[12]; 

  v9 = 0i64;
  *(float *)&v9 = (float)vidConfig.displayHeight;
  _XMM0 = v9;
  *(float *)&v9 = *(float *)&v9 * 0.00092592591;
  _XMM2 = v9;
  *(float *)&v9 = *(float *)&v9 / vidConfig.aspectRatioScenePixel;
  _XMM1 = v9;
  __asm
  {
    vmaxss  xmm10, xmm1, xmm6
    vmaxss  xmm11, xmm2, xmm6
  }
  v50 = dstColorRt->R_RT_Handle;
  v16 = *R_RT_GetViewInternal(&v49, &v50, 0, 0);
  m_surfaceID = _XMM0;
  v50 = v16;
  v47 = v16;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      m_surfaceID = v47.m_surfaceID;
      v16 = v47;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      m_surfaceID = v47.m_surfaceID;
      v16 = v47;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v16 = v50;
      if ( v19 )
        __debugbreak();
    }
  }
  v50 = v16;
  v20 = m_surfaceID & 0x7FFF;
  if ( v20 )
  {
    v50.m_surfaceID = v20;
  }
  else
  {
    v20 = 0;
    v50.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v47.m_tracking.m_allocCounter;
  v50.m_tracking = v47.m_tracking;
  if ( v20 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v22 )
    __debugbreak();
LABEL_19:
  Surface = R_RT_Handle::GetSurface(&v50);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v50 = srcColorRt->R_RT_Handle;
  v24 = *R_RT_GetViewInternal(&v49, &v50, 0, 0);
  v25 = _XMM0;
  v50 = v24;
  v47 = v24;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      v25 = v47.m_surfaceID;
      v24 = v47;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      v25 = v47.m_surfaceID;
      v24 = v47;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v24 = v50;
      if ( v27 )
        __debugbreak();
    }
  }
  v50 = v24;
  v28 = v25 & 0x7FFF;
  if ( v28 )
  {
    v29 = v28 | 0x8000;
    v50.m_surfaceID = v29;
  }
  else
  {
    v29 = 0;
    v50.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v47.m_tracking.m_allocCounter;
  v50.m_tracking = v47.m_tracking;
  if ( v29 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_37;
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_37;
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v31 )
    __debugbreak();
LABEL_37:
  v32 = R_RT_Handle::GetSurface(&v50);
  textures = (GfxTexture *)R_Texture_GetResident(v32->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v50 = addColorRt->R_RT_Handle;
  v33 = *R_RT_GetViewInternal(&v49, &v50, 0, 0);
  v34 = _XMM0;
  v50 = v33;
  v47 = v33;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v47);
    if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      v34 = v47.m_surfaceID;
      v33 = v47;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v47.m_tracking.m_allocCounter;
      v34 = v47.m_surfaceID;
      v33 = v47;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v33 = v50;
      if ( v36 )
        __debugbreak();
    }
  }
  v50 = v33;
  v37 = v34 & 0x7FFF;
  if ( v37 )
    v38 = v37 | 0x8000;
  else
    v38 = 0;
  v50.m_surfaceID = v38;
  v50.m_tracking = v47.m_tracking;
  if ( v38 )
  {
    R_RT_Handle::GetSurface(&v50);
    if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_55;
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_55;
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v39 )
    __debugbreak();
LABEL_55:
  if ( weightOutput <= 0.0 )
  {
    Resident = (GfxTexture *)R_Texture_Get(computeState->data, rgp.blackImage->textureId);
  }
  else
  {
    v40 = R_RT_Handle::GetSurface(&v50);
    Resident = (GfxTexture *)R_Texture_GetResident(v40->m_image.m_base.textureId);
  }
  textures = Resident;
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  R_SetComputeShader(computeState, rgp.veilUpsampleComputeShader);
  *(float *)&v42 = 1.0 / (float)R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height;
  *(float *)&v43 = 1.0 / (float)R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  height = (float)R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height;
  *(float *)data = (float)R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  *(float *)&data[4] = weightInput;
  *(float *)&data[1] = height;
  data[2] = v43;
  data[3] = v42;
  *(float *)&data[5] = weightOutput;
  data[6] = _XMM10;
  data[7] = _XMM11;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
  textures = (GfxTexture *)computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)&textures);
  width = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  v46 = R_RT_Handle::GetSurface(dstColorRt);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, ((unsigned int)v46->m_image.m_base.height + 7) >> 3, 1u);
}

