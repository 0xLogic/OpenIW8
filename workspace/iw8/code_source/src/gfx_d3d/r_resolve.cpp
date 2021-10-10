/*
==============
R_Resolve_EliminateFastClear
==============
*/

void __fastcall R_Resolve_EliminateFastClear(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  ?R_Resolve_EliminateFastClear@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@_N@Z(context, colorRt, flushCaches);
}

/*
==============
R_ResolveDepthToState
==============
*/

void __fastcall R_ResolveDepthToState(GfxCmdBufContext *context, D3D12_RESOURCE_STATES finalState)
{
  ?R_ResolveDepthToState@@YAXUGfxCmdBufContext@@W4D3D12_RESOURCE_STATES@@@Z(context, finalState);
}

/*
==============
R_Resolve_CopySampleFromMSAA
==============
*/

void __fastcall R_Resolve_CopySampleFromMSAA(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt)
{
  ?R_Resolve_CopySampleFromMSAA@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(context, srcColorRt, srcAlphaRt);
}

/*
==============
R_Resolve_CopyFrom4xMS
==============
*/

void __fastcall R_Resolve_CopyFrom4xMS(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, R_RT_ColorHandle *dilatedCompactFmaskRt, R_RT_ColorHandle *sample0Color, R_RT_ColorHandle *sample0Alpha)
{
  ?R_Resolve_CopyFrom4xMS@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1111@Z(context, srcColorRt, srcAlphaRt, dilatedCompactFmaskRt, sample0Color, sample0Alpha);
}

/*
==============
R_Resolve_GetCBuffer
==============
*/

ID3D12Resource **__fastcall R_Resolve_GetCBuffer()
{
  return ?R_Resolve_GetCBuffer@@YAPEAPEAUID3D12Resource@@XZ();
}

/*
==============
R_ReProjFloatZClipSpace
==============
*/

void __fastcall R_ReProjFloatZClipSpace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *floatZMipmap, const R_RT_ColorHandle *outReProjFloatZ)
{
  ?R_ReProjFloatZClipSpace@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2@Z(computeState, viewInfo, floatZMipmap, outReProjFloatZ);
}

/*
==============
R_Resolve_CompactFmask
==============
*/

void __fastcall R_Resolve_CompactFmask(ComputeCmdBufState *computeState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, const R_RT_ColorHandle *compactFmaskRtHandle)
{
  ?R_Resolve_CompactFmask@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@1AEBV2@@Z(computeState, srcColorRt, srcAlphaRt, compactFmaskRtHandle);
}

/*
==============
R_ReProjCopyMipmap
==============
*/

void __fastcall R_ReProjCopyMipmap(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const unsigned int mipmap, const R_RT_ColorHandle *floatZMipmap, const R_RT_ColorHandle *outMipmapCopy)
{
  ?R_ReProjCopyMipmap@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IVR_RT_ColorHandle@@2@Z(computeState, viewInfo, mipmap, floatZMipmap, outMipmapCopy);
}

/*
==============
R_ResolveDepth
==============
*/

void __fastcall R_ResolveDepth(GfxCmdBufContext *context)
{
  ?R_ResolveDepth@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_ReProjClipToFloatZ
==============
*/

void __fastcall R_ReProjClipToFloatZ(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *uintReProjFloatZ, const R_RT_ColorHandle *outReProjFloatZ)
{
  ?R_ReProjClipToFloatZ@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2@Z(computeState, viewInfo, uintReProjFloatZ, outReProjFloatZ);
}

/*
==============
RB_ReProjFloatZ_Resources
==============
*/

void __fastcall RB_ReProjFloatZ_Resources(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  ?RB_ReProjFloatZ_Resources@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@@Z(computeState, viewInfo);
}

/*
==============
R_Resolve_MSAAColor4xToFull
==============
*/

void __fastcall R_Resolve_MSAAColor4xToFull(ComputeCmdBufState *computeState, R_RT_ColorHandle *msaaColorRt, R_RT_ColorHandle *colorRt, unsigned int frameIndex)
{
  ?R_Resolve_MSAAColor4xToFull@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@1I@Z(computeState, msaaColorRt, colorRt, frameIndex);
}

/*
==============
R_ReProjFloatZ_FreeTemporalRTs
==============
*/

void R_ReProjFloatZ_FreeTemporalRTs(void)
{
  ?R_ReProjFloatZ_FreeTemporalRTs@@YAXXZ();
}

/*
==============
RB_Resolve_CopyFrom4xMS
==============
*/

void __fastcall RB_Resolve_CopyFrom4xMS(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *dstAlphaRt, R_RT_DepthHandle *dstDepthRt)
{
  ?RB_Resolve_CopyFrom4xMS@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@111VR_RT_DepthHandle@@@Z(context, srcColorRt, srcAlphaRt, dstColorRt, dstAlphaRt, dstDepthRt);
}

/*
==============
R_ReProjFloatZ_RenderTargetInfo
==============
*/

void __fastcall R_ReProjFloatZ_RenderTargetInfo(const unsigned int vroxelsCountX, const unsigned int vroxelsCountY, const unsigned int sceneWidth, const unsigned int sceneHeight, unsigned int *outReProjFloatZMipMap, unsigned int *outReProjFloatZWidth, unsigned int *outReProjFloatZHeight)
{
  ?R_ReProjFloatZ_RenderTargetInfo@@YAXIIIIAEAI00@Z(vroxelsCountX, vroxelsCountY, sceneWidth, sceneHeight, outReProjFloatZMipMap, outReProjFloatZWidth, outReProjFloatZHeight);
}

/*
==============
R_Resolve
==============
*/

void __fastcall R_Resolve(GfxCmdBufContext *context, const GfxImage *image)
{
  ?R_Resolve@@YAXUGfxCmdBufContext@@PEBUGfxImage@@@Z(context, image);
}

/*
==============
R_Resolve_DestroyResources
==============
*/

void R_Resolve_DestroyResources(void)
{
  ?R_Resolve_DestroyResources@@YAXXZ();
}

/*
==============
R_ResummarizeDepth
==============
*/

void __fastcall R_ResummarizeDepth(GfxCmdBufContext *context)
{
  ?R_ResummarizeDepth@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_Resolve_CreateResources
==============
*/

void R_Resolve_CreateResources(void)
{
  ?R_Resolve_CreateResources@@YAXXZ();
}

/*
==============
R_ReProjFloatZ_UpdatePrevMatrix
==============
*/

void __fastcall R_ReProjFloatZ_UpdatePrevMatrix(const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  ?R_ReProjFloatZ_UpdatePrevMatrix@@YAXPEBUGfxViewInfo@@II@Z(viewInfo, rtWidth, rtHeight);
}

/*
==============
R_Resolve_CopyDepthTo4xMS
==============
*/

void __fastcall R_Resolve_CopyDepthTo4xMS(GfxCmdBufContext *context, R_RT_DepthHandle *srcRt, R_RT_DepthHandle *dstRt)
{
  ?R_Resolve_CopyDepthTo4xMS@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@1@Z(context, srcRt, dstRt);
}

/*
==============
R_Resolve_DilateCompactFmask
==============
*/

void __fastcall R_Resolve_DilateCompactFmask(ComputeCmdBufState *computeState, const R_RT_ColorHandle *compactFmaskRtHandle, const R_RT_ColorHandle *dilatedCompactFmaskRtHandle)
{
  ?R_Resolve_DilateCompactFmask@@YAXPEAUComputeCmdBufState@@AEBVR_RT_ColorHandle@@1@Z(computeState, compactFmaskRtHandle, dilatedCompactFmaskRtHandle);
}

/*
==============
R_ResolveFloatZDownsample
==============
*/

void __fastcall R_ResolveFloatZDownsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_DepthHandle *srcDepthRt, R_RT_ColorHandle *dstFloatZFullRt, R_RT_ColorHandle *dstFloatZHalfRt, R_RT_ColorHandle *dstFloatZQuarterRt, R_RT_ColorHandle *dstFloatZEighthRt, R_RT_ColorHandle *dstFloatZEighthMipMinRt, R_RT_DepthHandle *dstZMSAARt, R_RT_ColorHandle *dstStencilRt, const GfxWrappedRWBuffer *dstStencilMaskBuffer)
{
  ?R_ResolveFloatZDownsample@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_DepthHandle@@VR_RT_ColorHandle@@333323PEBUGfxWrappedRWBuffer@@@Z(computeState, viewInfo, srcDepthRt, dstFloatZFullRt, dstFloatZHalfRt, dstFloatZQuarterRt, dstFloatZEighthRt, dstFloatZEighthMipMinRt, dstZMSAARt, dstStencilRt, dstStencilMaskBuffer);
}

/*
==============
R_Resolve_ClearStencilMaskBuffer
==============
*/

void __fastcall R_Resolve_ClearStencilMaskBuffer(ComputeCmdBufState *computeState, R_RT_BufferHandle *stencilMaskBuffer)
{
  ?R_Resolve_ClearStencilMaskBuffer@@YAXPEAUComputeCmdBufState@@VR_RT_BufferHandle@@@Z(computeState, stencilMaskBuffer);
}

/*
==============
R_ResolveFloatZDownsampleCS
==============
*/

void __fastcall R_ResolveFloatZDownsampleCS(ComputeCmdBufState *computeState, R_RT_ColorHandle *floatZMaxColorRt, R_RT_ColorHandle *floatZMinColorRt, unsigned int mipStart, bool minSample, bool onlyBorder)
{
  ?R_ResolveFloatZDownsampleCS@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@1I_N2@Z(computeState, floatZMaxColorRt, floatZMinColorRt, mipStart, minSample, onlyBorder);
}

/*
==============
RB_ReProjFloatZ_RotateRTs
==============
*/

void __fastcall RB_ReProjFloatZ_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_ReProjFloatZ_RotateRTs@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_ResolveSection
==============
*/

void __fastcall R_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, float s0, float t0, float ds, float dt)
{
  ?R_ResolveSection@@YAXUGfxCmdBufContext@@PEBUGfxImage@@MMMM@Z(context, image, s0, t0, ds, dt);
}

/*
==============
RB_ReProjFloatZ_Resources
==============
*/
void RB_ReProjFloatZ_Resources(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  int reProjFloatZMipMap; 
  R_RT_Handle v7; 
  bool v9; 
  unsigned int reProjFloatZWidth; 
  R_RT_Handle v11; 
  bool v13; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v16; 
  const GfxTexture *v17; 
  const R_RT_Surface *v18; 
  const R_RT_Surface *v19; 
  const R_RT_Surface *v20; 
  const R_RT_Surface *v21; 
  const R_RT_Surface *v22; 
  const R_RT_Surface *v23; 
  const R_RT_Surface *v24; 
  const R_RT_Surface *v25; 
  const GfxTexture *v26; 
  const R_RT_Surface *v27; 
  const GfxTexture *v28; 
  unsigned int fmt; 
  R_RT_Handle v31; 
  R_RT_Handle result; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_Handle v36; 
  GfxTexture *textures; 

  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    reProjFloatZMipMap = viewInfo->reProjFloatZMipMap;
    result = (R_RT_Handle)s_previousFloatZ;
    v34 = *R_RT_GetViewInternal(&v36, &result, 0, reProjFloatZMipMap);
    v31 = v34;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v31);
      if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v34 = v31;
        __debugbreak();
      }
      else
      {
        v34 = v31;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v7 = *R_RT_CreateInternal(&result, viewInfo->reProjFloatZWidth, viewInfo->reProjFloatZHeight, viewInfo->reProjFloatZWidth, viewInfo->reProjFloatZHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorZero, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "uint ReProjected FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(831)");
    v35 = v7;
    v31 = v7;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v31);
      if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v7 = v31;
        v35 = v31;
        __debugbreak();
      }
      else
      {
        v7 = v31;
        v35 = v31;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v7 = v35;
        if ( v9 )
          __debugbreak();
      }
    }
    reProjFloatZWidth = viewInfo->reProjFloatZWidth;
    fmt = viewInfo->reProjFloatZHeight;
    v36 = v7;
    v11 = *R_RT_CreateInternal(&result, reProjFloatZWidth, fmt, reProjFloatZWidth, fmt, 1u, 1u, 1u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorZero, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "ReProjected FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(832)");
    v31 = v11;
    v33 = v11;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v33);
      if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v11 = v33;
        v31 = v33;
        __debugbreak();
      }
      else
      {
        v11 = v33;
        v31 = v33;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v11 = v31;
        if ( v13 )
          __debugbreak();
      }
    }
    result = v11;
    R_ProfBeginNamedEvent(computeState, "ReProj Float Z");
    Surface = R_RT_Handle::GetSurface(&v36);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v16 = R_RT_Handle::GetSurface(&result);
    v17 = R_Texture_GetResident(v16->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(computeState);
    v33 = v35;
    v18 = R_RT_Handle::GetSurface(&v33);
    v19 = v18;
    if ( (v18->m_image.m_base.width != viewInfo->reProjFloatZWidth || v18->m_image.m_base.height != viewInfo->reProjFloatZHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 780, ASSERT_TYPE_ASSERT, "(outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight)", (const char *)&queryFormat, "outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight") )
      __debugbreak();
    R_ClearImage_Uint(computeState, &v19->m_image.m_base, 0, PIPE_FLUSH_PARTIAL);
    R_ReProjFloatZ_SetConstantBuffer(computeState, viewInfo, &v19->m_image.m_base);
    v20 = R_RT_Handle::GetSurface(&v34);
    textures = (GfxTexture *)R_Texture_GetResident(v20->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    v21 = R_RT_Handle::GetSurface(&v33);
    textures = (GfxTexture *)R_Texture_GetResident(v21->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    R_SetComputeShader(computeState, rgp.reProjFloatZClipSpace);
    R_Dispatch(computeState, ((unsigned int)v19->m_image.m_base.width + 7) >> 3, ((unsigned int)v19->m_image.m_base.height + 7) >> 3, 1u);
    v34 = v31;
    v33 = v35;
    R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
    v22 = R_RT_Handle::GetSurface(&v34);
    R_ReProjFloatZ_SetConstantBuffer(computeState, viewInfo, &v22->m_image.m_base);
    v23 = R_RT_Handle::GetSurface(&v33);
    textures = (GfxTexture *)R_Texture_GetResident(v23->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    v24 = R_RT_Handle::GetSurface(&v34);
    textures = (GfxTexture *)R_Texture_GetResident(v24->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    R_SetComputeShader(computeState, rgp.reProjClipToFloatZ);
    R_Dispatch(computeState, ((unsigned int)v22->m_image.m_base.width + 7) >> 3, ((unsigned int)v22->m_image.m_base.height + 7) >> 3, 1u);
    v25 = R_RT_Handle::GetSurface(&v36);
    v26 = R_Texture_GetResident(v25->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v27 = R_RT_Handle::GetSurface(&result);
    v28 = R_Texture_GetResident(v27->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v28, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(computeState);
    R_ProfEndNamedEvent(computeState);
    viewInfo->sceneRtInput.m_reProjFloatZ = (R_RT_ColorHandle)v31;
    result = v35;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result);
      R_RT_DestroyInternal(&result);
    }
    else if ( v36.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    result = (R_RT_Handle)s_previousFloatZ;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result);
      R_RT_DestroyInternal(&result);
    }
    else if ( s_previousFloatZ.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousFloatZ.m_surfaceID = 0;
    s_previousFloatZ.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousFloatZ.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousFloatZ.m_tracking.m_allocCounter != s_previousFloatZ.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_previousFloatZ.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
RB_ReProjFloatZ_RotateRTs
==============
*/
void RB_ReProjFloatZ_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  const char *v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  unsigned int height; 
  unsigned int width; 
  __m256i v10; 
  __int64 clientIndex; 
  float v12; 
  float v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext v15; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 

  if ( !R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_floatZFullRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 707, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_floatZFullRt)", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_floatZFullRt") )
    __debugbreak();
  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    v4 = "!s_previousFloatZ.IsValid()";
    v5 = 708;
    v6 = "(!s_previousFloatZ.IsValid())";
    v7 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp";
  }
  else
  {
    if ( s_previousFloatZ.m_tracking.m_allocCounter == s_previousFloatZ.m_surfaceID )
      goto LABEL_10;
    v4 = "!this->m_tracking.m_allocCounter";
    v5 = 100;
    v6 = "(!this->m_tracking.m_allocCounter)";
    v7 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h";
  }
  if ( CoreAssert_Handler(v7, v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_10:
  s_previousFloatZ = viewInfo->sceneRtInput.m_floatZFullRt;
  height = 1;
  if ( R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_reProjFloatZ) )
    width = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_reProjFloatZ)->m_image.m_base.width;
  else
    width = 1;
  if ( R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_reProjFloatZ) )
    height = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_reProjFloatZ)->m_image.m_base.height;
  v10 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
  *(__m256i *)mat.row2.v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
  mat.m[3].v[2] = FLOAT_1_0;
  *(__m256i *)mat.m[0].v = v10;
  MatrixInverse44Aligned(&mat, &dst);
  clientIndex = viewInfo->clientIndex;
  v12 = (float)width;
  in1.m[0].v[0] = (float)(1.0 / v12) * 2.0;
  in1.m[3].v[0] = (float)(1.0 / v12) - 1.0;
  v13 = (float)height;
  in1.m[3].v[1] = (float)(1.0 / v13) - 1.0;
  in1.m[1].v[0] = 0.0;
  in1.m[2].v[0] = 0.0;
  in1.m[0].v[1] = 0.0;
  in1.m[1].v[1] = (float)(1.0 / v13) * 2.0;
  in1.m[2].v[1] = 0.0;
  in1.m[0].v[2] = 0.0;
  in1.m[1].v[2] = 0.0;
  in1.m[2].v[2] = FLOAT_1_0;
  in1.m[3].v[2] = 0.0;
  in1.m[0].v[3] = 0.0;
  in1.m[1].v[3] = 0.0;
  in1.m[2].v[3] = 0.0;
  in1.m[3].v[3] = FLOAT_1_0;
  MatrixMultiply44Aligned(&in1, &dst, &s_invPrevViewProjectionMatrix[clientIndex].m);
  v14 = *gfxContext;
  *(R_RT_ColorHandle *)in1.m[0].v = viewInfo->sceneRtInput.m_reProjFloatZ;
  v15 = v14;
  R_RT_Destroy(&v15, (R_RT_ColorHandle *)&in1);
  viewInfo->sceneRtInput.m_reProjFloatZ.m_surfaceID = 0;
  viewInfo->sceneRtInput.m_reProjFloatZ.m_tracking.m_allocCounter = 0;
  viewInfo->sceneRtInput.m_reProjFloatZ.m_tracking.m_name = NULL;
  viewInfo->sceneRtInput.m_reProjFloatZ.m_tracking.m_location = NULL;
}

/*
==============
RB_Resolve_CompactFmask
==============
*/
void RB_Resolve_CompactFmask(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, const R_RT_ColorHandle *compactFmaskRtHandle)
{
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  R_RT_Handle v9; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v11; 
  const R_RT_Surface *v12; 
  int height; 
  const R_RT_Surface *v14; 
  int width; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  GfxTexture *textures; 

  state = context->state;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  R_GfxComputeWaitForGraphics(state);
  v16 = compactFmaskRtHandle->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v16, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  v9 = srcColorRt->R_RT_Handle;
  v17 = srcAlphaRt->R_RT_Handle;
  v16 = v9;
  R_Resolve_SetConstants(GfxComputeCmdBufState, compactFmaskRtHandle, 0);
  R_SetComputeShader(GfxComputeCmdBufState, rgp.resolveCompactFmask);
  Surface = R_RT_Handle::GetSurface(&v16);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(GfxComputeCmdBufState, 1, 1, (const GfxTexture *const *)&textures);
  v11 = R_RT_Handle::GetSurface(&v17);
  textures = (GfxTexture *)R_Texture_GetResident(v11->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(GfxComputeCmdBufState, 2, 1, (const GfxTexture *const *)&textures);
  v12 = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  textures = (GfxTexture *)R_Texture_GetResident(v12->m_image.m_base.textureId);
  R_SetComputeRWTextures(GfxComputeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
  height = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle)->m_image.m_base.height;
  v14 = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  width = v14->m_image.m_base.width;
  if ( (!v14->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(GfxComputeCmdBufState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  v17 = compactFmaskRtHandle->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v17, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ComputeWaitForCompute(GfxComputeCmdBufState, PIPE_FLUSH_PARTIAL);
}

/*
==============
RB_Resolve_CopyFrom4xMS
==============
*/
void RB_Resolve_CopyFrom4xMS(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *dstAlphaRt, R_RT_DepthHandle *dstDepthRt)
{
  int width; 
  int height; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  GfxCmdBufContext v17; 
  GfxCmdBufContext v18; 
  unsigned int v19; 
  const R_RT_Surface *Surface; 
  const dvar_t *v21; 
  unsigned int v22; 
  const dvar_t *v23; 
  bool v24; 
  R_RT_Flags rtFlags; 
  __int64 v26; 
  R_RT_Handle v27; 
  bool v29; 
  R_RT_Handle v30; 
  bool v32; 
  unsigned __int16 v33; 
  bool v34; 
  unsigned __int16 v35; 
  bool v37; 
  __int64 v39; 
  __int64 v40; 
  __m256i *v42; 
  R_RT_Handle v43; 
  const dvar_t *v45; 
  __int64 v46; 
  unsigned int v47; 
  R_RT_Flags v48; 
  const dvar_t *v49; 
  R_RT_Flags v50; 
  unsigned int v51; 
  unsigned int v52; 
  R_RT_Handle v53; 
  bool v55; 
  R_RT_Handle v56; 
  const dvar_t *v58; 
  const dvar_t *v59; 
  R_RT_Handle v60; 
  bool v62; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  ComputeCmdBufState *v66; 
  const R_RT_Surface *v68; 
  const R_RT_Surface *v69; 
  int v70; 
  const R_RT_Surface *v71; 
  int v72; 
  __m256i v73; 
  GfxCmdBufSourceState **p_source; 
  unsigned int v77; 
  const R_RT_Surface *v78; 
  R_RT_ColorHandle v79; 
  R_RT_Handle v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  R_RT_Handle v85; 
  R_RT_Handle v86; 
  R_RT_Handle v87; 
  GfxCmdBufContext *v88; 
  unsigned int v89; 
  R_RT_ColorHandle *v90; 
  R_RT_ColorHandle *v91; 
  R_RT_ColorHandle *v92; 
  R_RT_ColorHandle *v93; 
  R_RT_Handle v94; 
  R_RT_Handle v95; 
  R_RT_ColorHandle v96; 
  _BYTE v97[128]; 
  _BYTE v98[64]; 
  const char *v99; 
  R_RT_Handle data; 
  R_RT_Handle v101; 
  R_RT_Handle v102; 
  R_RT_Group v103; 
  R_RT_Group v104; 
  R_RT_Handle result; 
  __m256i v106; 

  v88 = context;
  v93 = dstAlphaRt;
  v91 = dstColorRt;
  v90 = srcAlphaRt;
  v92 = srcColorRt;
  width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  if ( 2 * width != R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height, 2 * height != R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 629, ASSERT_TYPE_ASSERT, "(srcColorRt.GetWidth() * 2 == dstColorRt.GetWidth() && srcColorRt.GetHeight() * 2 == dstColorRt.GetHeight())", (const char *)&queryFormat, "srcColorRt.GetWidth() * 2 == dstColorRt.GetWidth() && srcColorRt.GetHeight() * 2 == dstColorRt.GetHeight()") )
      __debugbreak();
  }
  v13 = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  if ( v13 != R_RT_Handle::GetSurface(srcAlphaRt)->m_image.m_base.width || (v14 = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height, v14 != R_RT_Handle::GetSurface(srcAlphaRt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 630, ASSERT_TYPE_ASSERT, "(srcColorRt.GetWidth() == srcAlphaRt.GetWidth() && srcColorRt.GetHeight() == srcAlphaRt.GetHeight())", (const char *)&queryFormat, "srcColorRt.GetWidth() == srcAlphaRt.GetWidth() && srcColorRt.GetHeight() == srcAlphaRt.GetHeight()") )
      __debugbreak();
  }
  v15 = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  if ( v15 != R_RT_Handle::GetSurface(dstDepthRt)->m_image.m_base.width || (v16 = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height, v16 != R_RT_Handle::GetSurface(dstDepthRt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 631, ASSERT_TYPE_ASSERT, "(dstColorRt.GetWidth() == dstDepthRt.GetWidth() && dstColorRt.GetHeight() == dstDepthRt.GetHeight())", (const char *)&queryFormat, "dstColorRt.GetWidth() == dstDepthRt.GetWidth() && dstColorRt.GetHeight() == dstDepthRt.GetHeight()") )
      __debugbreak();
  }
  v17 = *context;
  v85 = srcColorRt->R_RT_Handle;
  *(GfxCmdBufContext *)&data.m_surfaceID = v17;
  R_HW_DecompressFMask((GfxCmdBufContext *)&data, (R_RT_ColorHandle *)&v85, 0);
  v18 = *context;
  v85 = srcAlphaRt->R_RT_Handle;
  *(GfxCmdBufContext *)&data.m_surfaceID = v18;
  R_HW_DecompressFMask((GfxCmdBufContext *)&data, (R_RT_ColorHandle *)&v85, 1);
  v19 = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  *(_DWORD *)&data.m_surfaceID = v19;
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  v21 = r_deviceDebug;
  v22 = Surface->m_image.m_base.height;
  v89 = v22;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
    goto LABEL_21;
  v23 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  v24 = !v23->current.enabled;
  rtFlags = R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( v24 )
LABEL_21:
    rtFlags = R_RT_Flag_RTView;
  v26 = 0i64;
  v27 = *R_RT_CreateInternal(&result, v19, v22, v19, v22, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SAMPLE_MSAA_COLOR", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(646)");
  v87 = v27;
  v85 = v27;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v85);
    if ( (R_RT_Handle::GetSurface(&v85)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v27 = v85;
      __debugbreak();
    }
    else
    {
      v27 = v85;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v27 = v87;
      if ( v29 )
        __debugbreak();
    }
  }
  v102 = v27;
  v30 = *R_RT_CreateInternal(&result, v19, v22, v19, v22, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SAMPLE_MSAA_ALPHA", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(647)");
  v87 = v30;
  v85 = v30;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v85);
    if ( (R_RT_Handle::GetSurface(&v85)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v30 = v85;
      __debugbreak();
    }
    else
    {
      v30 = v85;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v30 = v87;
      if ( v32 )
        __debugbreak();
    }
  }
  v101 = v30;
  R_RT_Handle::ClearAuxDirty(&v102);
  R_RT_Handle::ClearAuxDirty(&v101);
  if ( (v102.m_surfaceID & 0x7FFF) != 0 )
    v33 = v102.m_surfaceID & 0x7FFF | 0x8000;
  else
    v33 = 0;
  v85.m_surfaceID = v33;
  v85.m_tracking = v102.m_tracking;
  if ( v33 )
  {
    R_RT_Handle::GetSurface(&v85);
    if ( (R_RT_Handle::GetSurface(&v85)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_48;
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !v102.m_tracking.m_allocCounter )
      goto LABEL_48;
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v34 )
    __debugbreak();
LABEL_48:
  result = v85;
  if ( (v101.m_surfaceID & 0x7FFF) != 0 )
    v35 = v101.m_surfaceID & 0x7FFF | 0x8000;
  else
    v35 = 0;
  v85.m_surfaceID = v35;
  _XMM0 = *(_OWORD *)&v101.m_tracking.m_allocCounter;
  v85.m_tracking = v101.m_tracking;
  if ( v35 )
  {
    R_RT_Handle::GetSurface(&v85);
    if ( (R_RT_Handle::GetSurface(&v85)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_58;
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !v101.m_tracking.m_allocCounter )
      goto LABEL_58;
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v37 )
    __debugbreak();
LABEL_58:
  v106 = (__m256i)v85;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v85.m_tracking.m_name = _XMM0;
  v85.m_surfaceID = 0;
  v85.m_tracking.m_allocCounter = 0;
  v97[0] = 2;
  v39 = 0i64;
  v40 = 2i64;
  do
  {
    v87 = *(R_RT_Handle *)((char *)&result + v39);
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v87);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(__m256i *)&v97[v39 + 8] = *(__m256i *)((char *)&result + v39);
    v39 += 32i64;
    --v40;
  }
  while ( v40 );
  v42 = (__m256i *)v92;
  *(R_RT_Handle *)&v98[8] = v85;
  *(__m256i *)&v104.m_colorRtCount = *(__m256i *)v97;
  *(__m256i *)&v104.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v97[32];
  *(__m256i *)&v104.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v97[64];
  *(__m256i *)&v104.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v97[96];
  *(__m256i *)&v104.m_colorRts[3].m_tracking.m_location = *(__m256i *)v98;
  *(__m256i *)&v104.m_depthRt.m_tracking.m_location = *(__m256i *)&v98[32];
  v43 = v92->R_RT_Handle;
  v104.m_vrsRt.m_tracking.m_location = v99;
  v87 = v43;
  v85 = v90->R_RT_Handle;
  _XMM0 = *v88;
  *(GfxCmdBufContext *)&v86.m_surfaceID = *v88;
  RB_Resolve_CopySampleFromMSAA((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&v87, (R_RT_ColorHandle *)&v85, &v104);
  v45 = r_deviceDebug;
  v46 = 2i64;
  v47 = v89;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v48 = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( v45->current.enabled )
    goto LABEL_75;
  v49 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v50 = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v49->current.enabled )
LABEL_75:
    v50 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v51 = v47 >> 2;
  v52 = *(_DWORD *)&data.m_surfaceID >> 2;
  v53 = *R_RT_CreateInternal(&result, *(_DWORD *)&data.m_surfaceID >> 2, v51, *(_DWORD *)&data.m_surfaceID >> 2, v51, 1u, 1u, 1u, g_R_RT_renderTargetFmts[42], v50, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_COMPACT_FMASK", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(657)");
  v87 = v53;
  v85 = v53;
  if ( LOWORD(_XMM0.source) )
  {
    R_RT_Handle::GetSurface(&v85);
    if ( (R_RT_Handle::GetSurface(&v85)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v53 = v85;
      __debugbreak();
    }
    else
    {
      v53 = v85;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v55 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v53 = v87;
      if ( v55 )
        __debugbreak();
    }
  }
  v56 = *(R_RT_Handle *)v42;
  v85 = v53;
  v87 = v90->R_RT_Handle;
  data = v56;
  _XMM0 = *v88;
  *(GfxCmdBufContext *)&v86.m_surfaceID = *v88;
  RB_Resolve_CompactFmask((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&data, (R_RT_ColorHandle *)&v87, (const R_RT_ColorHandle *)&v85);
  v58 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
    goto LABEL_92;
  v59 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( !v59->current.enabled )
LABEL_92:
    v48 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v60 = *R_RT_CreateInternal(&result, v52, v51, v52, v51, 1u, 1u, 1u, g_R_RT_renderTargetFmts[42], v48, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DILTATED_COMPACT_FMASK", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(662)");
  v87 = v60;
  v86 = v60;
  if ( LOWORD(_XMM0.source) )
  {
    R_RT_Handle::GetSurface(&v86);
    if ( (R_RT_Handle::GetSurface(&v86)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v60 = v86;
      v87 = v86;
      __debugbreak();
    }
    else
    {
      v60 = v86;
      v87 = v86;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v60 = v87;
      if ( v62 )
        __debugbreak();
    }
  }
  v94 = v60;
  _XMM0 = *v88;
  __asm { vpextrq rsi, xmm0, 1 }
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(_RSI);
  v86 = v87;
  v66 = GfxComputeCmdBufState;
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v86, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_RSI);
  R_GfxComputeWaitForGraphics(_RSI);
  *(_DWORD *)&data.m_surfaceID = R_RT_Handle::GetSurface(&v85)->m_image.m_base.width;
  *((_DWORD *)&data.m_surfaceID + 1) = R_RT_Handle::GetSurface(&v85)->m_image.m_base.height;
  _XMM0 = (__int128)*R_VRSGetPixelsToSamplesUint((base_vec4_t<unsigned int> *)&v86, 0, rg.halfResEmissive);
  *(_OWORD *)&data.m_tracking.m_name = _XMM0;
  R_UploadAndSetComputeConstants(v66, 0, &data, 0x20u, NULL);
  R_SetComputeShader(v66, rgp.resolveCompactFmaskDilate);
  v68 = R_RT_Handle::GetSurface(&v85);
  *(_QWORD *)&data.m_surfaceID = R_Texture_GetResident(v68->m_image.m_base.textureId);
  R_SetComputeTextures(v66, 1, 1, (const GfxTexture *const *)&data);
  v69 = R_RT_Handle::GetSurface(&v94);
  *(_QWORD *)&data.m_surfaceID = R_Texture_GetResident(v69->m_image.m_base.textureId);
  R_SetComputeRWTextures(v66, 0, 1, (const GfxTexture *const *)&data);
  v70 = R_RT_Handle::GetSurface(&v85)->m_image.m_base.height;
  v71 = R_RT_Handle::GetSurface(&v85);
  v72 = v71->m_image.m_base.width;
  if ( (!v71->m_image.m_base.width || !v70) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(v66, (unsigned int)(v72 + 7) >> 3, (unsigned int)(v70 + 7) >> 3, 1u);
  v94 = v87;
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v94, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_RSI);
  R_ComputeWaitForCompute(v66, PIPE_FLUSH_PARTIAL);
  v86.m_surfaceID = 0;
  v86.m_tracking.m_allocCounter = 0;
  v73 = *(__m256i *)v93;
  result = v91->R_RT_Handle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v86.m_tracking.m_name = _XMM0;
  v106 = v73;
  v103.m_colorRtCount = 2;
  do
  {
    v94 = *(R_RT_Handle *)((char *)&result + v26 * 32);
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v94);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v103.m_colorRts[v26] = *(R_RT_ColorHandle *)((char *)&result + v26 * 32);
    ++v26;
    --v46;
  }
  while ( v46 );
  p_source = &v88->source;
  v103.m_depthRt = (R_RT_DepthHandle)v86;
  *(GfxCmdBufContext *)&v86.m_surfaceID = *v88;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v86, &v103, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(671)");
  v86 = v91->R_RT_Handle;
  v77 = R_RT_Handle::GetSurface(&v86)->m_image.m_base.height;
  v78 = R_RT_Handle::GetSurface(&v86);
  R_SetRenderTargetSize(*p_source, v78->m_image.m_base.width, v77, GFX_USE_VIEWPORT_FULL);
  v94 = v101;
  v95 = v87;
  v79 = *v90;
  data = v102;
  v80 = v92->R_RT_Handle;
  v96 = v79;
  v81 = *(_OWORD *)p_source;
  result = v80;
  *(_OWORD *)&v86.m_surfaceID = v81;
  R_Resolve_CopyFrom4xMS((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&result, &v96, (R_RT_ColorHandle *)&v95, (R_RT_ColorHandle *)&data, (R_RT_ColorHandle *)&v94);
  result = v87;
  *(_OWORD *)&v86.m_surfaceID = *(_OWORD *)p_source;
  R_RT_Destroy((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&result);
  v82 = *(_OWORD *)p_source;
  result = v85;
  *(_OWORD *)&v86.m_surfaceID = v82;
  R_RT_Destroy((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&result);
  v83 = *(_OWORD *)p_source;
  result = v101;
  *(_OWORD *)&v86.m_surfaceID = v83;
  R_RT_Destroy((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&result);
  v84 = *(_OWORD *)p_source;
  result = v102;
  *(_OWORD *)&v86.m_surfaceID = v84;
  R_RT_Destroy((GfxCmdBufContext *)&v86, (R_RT_ColorHandle *)&result);
  R_FlushImmediateContext();
}

/*
==============
RB_Resolve_CopySampleFromMSAA
==============
*/
void RB_Resolve_CopySampleFromMSAA(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, const R_RT_Group *dstRt)
{
  unsigned __int16 width; 
  R_RT_Handle m_depthRt; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned __int16 height; 
  R_RT_Handle v16; 
  const char *v17; 
  int v18; 
  const char *v19; 
  bool v21; 
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v24; 
  GfxCmdBufContext v25; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v27; 
  GfxCmdBufState *v28; 
  R_RT_Handle result; 
  R_RT_Handle v30; 

  width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  if ( dstRt->m_colorRtCount )
  {
    m_depthRt = (R_RT_Handle)dstRt->m_colorRts[0];
    v30 = m_depthRt;
    result = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result);
      if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v11 = "!colorRt.IsValid() || colorRt.IsColor()";
        v12 = 396;
        v13 = "(!colorRt.IsValid() || colorRt.IsColor())";
        goto LABEL_11;
      }
      goto LABEL_13;
    }
  }
  else
  {
    m_depthRt = (R_RT_Handle)dstRt->m_depthRt;
    v30 = m_depthRt;
    result = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result);
      if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v11 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v12 = 403;
        v13 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_11:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
        {
          m_depthRt = result;
          __debugbreak();
          goto LABEL_14;
        }
      }
LABEL_13:
      m_depthRt = result;
      goto LABEL_14;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    m_depthRt = v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_14:
  v30 = m_depthRt;
  if ( width == R_RT_Handle::GetSurface(&v30)->m_image.m_base.width )
  {
    height = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height;
    if ( dstRt->m_colorRtCount )
    {
      v16 = (R_RT_Handle)dstRt->m_colorRts[0];
      v30 = v16;
      result = v16;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&result);
        if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v17 = "!colorRt.IsValid() || colorRt.IsColor()";
          v18 = 396;
          v19 = "(!colorRt.IsValid() || colorRt.IsColor())";
          goto LABEL_25;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v16 = (R_RT_Handle)dstRt->m_depthRt;
      v30 = v16;
      result = v16;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&result);
        if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x10) == 0 )
        {
          v17 = "!depthRt.IsValid() || depthRt.IsDepth()";
          v18 = 403;
          v19 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_25:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v18, ASSERT_TYPE_ASSERT, v19, (const char *)&queryFormat, v17) )
          {
            v16 = result;
            __debugbreak();
            goto LABEL_28;
          }
        }
LABEL_27:
        v16 = result;
        goto LABEL_28;
      }
    }
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v16 = v30;
      if ( v21 )
        __debugbreak();
    }
LABEL_28:
    v30 = v16;
    if ( height == R_RT_Handle::GetSurface(&v30)->m_image.m_base.height )
      goto LABEL_31;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 499, ASSERT_TYPE_ASSERT, "(srcColorRt.GetWidth() == dstRt.GetAnyRt().GetWidth() && srcColorRt.GetHeight() == dstRt.GetAnyRt().GetHeight())", (const char *)&queryFormat, "srcColorRt.GetWidth() == dstRt.GetAnyRt().GetWidth() && srcColorRt.GetHeight() == dstRt.GetAnyRt().GetHeight()") )
    __debugbreak();
LABEL_31:
  state = context->state;
  v30 = (R_RT_Handle)dstRt->m_colorRts[0];
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v30 = (R_RT_Handle)dstRt->m_colorRts[1];
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  *(GfxCmdBufContext *)&result.m_surfaceID = *context;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&result, dstRt, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(507)");
  v30 = *R_RT_Group::GetAnyRt((R_RT_Group *)dstRt, &result);
  LODWORD(state) = R_RT_Handle::GetSurface(&v30)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v30);
  R_SetRenderTargetSize(context->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  v24 = srcColorRt->R_RT_Handle;
  v25 = *context;
  result = srcAlphaRt->R_RT_Handle;
  v30 = v24;
  if ( ((R_RT_Handle::GetSurface(&v30)->m_rtFlags & 0x4000) == 0 || (R_RT_Handle::GetSurface(&result)->m_rtFlags & 0x4000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 488, ASSERT_TYPE_ASSERT, "(srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled())", (const char *)&queryFormat, "srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled()") )
    __debugbreak();
  p_m_image = &R_RT_Handle::GetSurface(&v30)->m_image;
  if ( !v25.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v25.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25.source->input.codeImages[22] = &p_m_image->m_base;
  v27 = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( !v25.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v25.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25.source->input.codeImages[23] = &v27->m_base;
  *(GfxCmdBufContext *)&result.m_surfaceID = v25;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&result, rgp.copySampleFromMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(492)");
  v28 = context->state;
  v30 = (R_RT_Handle)dstRt->m_colorRts[0];
  R_AddRenderTargetTransition(v28, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v30 = (R_RT_Handle)dstRt->m_colorRts[1];
  R_AddRenderTargetTransition(v28, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(v28);
}

/*
==============
R_ReProjClipToFloatZ
==============
*/
void R_ReProjClipToFloatZ(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *uintReProjFloatZ, const R_RT_ColorHandle *outReProjFloatZ)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v9; 
  const R_RT_Surface *v10; 
  GfxTexture *textures[3]; 

  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  Surface = R_RT_Handle::GetSurface(&outReProjFloatZ->R_RT_Handle);
  R_ReProjFloatZ_SetConstantBuffer(computeState, viewInfo, &Surface->m_image.m_base);
  v9 = R_RT_Handle::GetSurface(&uintReProjFloatZ->R_RT_Handle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v9->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  v10 = R_RT_Handle::GetSurface(&outReProjFloatZ->R_RT_Handle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v10->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  R_SetComputeShader(computeState, rgp.reProjClipToFloatZ);
  R_Dispatch(computeState, ((unsigned int)Surface->m_image.m_base.width + 7) >> 3, ((unsigned int)Surface->m_image.m_base.height + 7) >> 3, 1u);
}

/*
==============
R_ReProjCopyMipmap
==============
*/
void R_ReProjCopyMipmap(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const unsigned int mipmap, const R_RT_ColorHandle *floatZMipmap, const R_RT_ColorHandle *outMipmapCopy)
{
  unsigned int height; 
  unsigned int width; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v12; 
  const GfxTexture *v13; 

  height = R_RT_Handle::GetSurface(&outMipmapCopy->R_RT_Handle)->m_image.m_base.height;
  width = R_RT_Handle::GetSurface(&outMipmapCopy->R_RT_Handle)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&floatZMipmap->R_RT_Handle);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v12 = R_RT_Handle::GetSurface(&outMipmapCopy->R_RT_Handle);
  v13 = R_Texture_GetResident(v12->m_image.m_base.textureId);
  R_CopyTextureRect(computeState, v13, Resident, 0, 0, 0, 0, 0, 0, mipmap, 0, width, height);
}

/*
==============
R_ReProjFloatZClipSpace
==============
*/
void R_ReProjFloatZClipSpace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *floatZMipmap, const R_RT_ColorHandle *outReProjFloatZ)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v9; 
  const R_RT_Surface *v10; 
  const R_RT_Surface *v11; 
  GfxTexture *textures; 

  Surface = R_RT_Handle::GetSurface(&outReProjFloatZ->R_RT_Handle);
  v9 = Surface;
  if ( __PAIR64__(Surface->m_image.m_base.height, Surface->m_image.m_base.width) != *(_QWORD *)&viewInfo->reProjFloatZWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 780, ASSERT_TYPE_ASSERT, "(outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight)", (const char *)&queryFormat, "outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight") )
    __debugbreak();
  R_ClearImage_Uint(computeState, &v9->m_image.m_base, 0, PIPE_FLUSH_PARTIAL);
  R_ReProjFloatZ_SetConstantBuffer(computeState, viewInfo, &v9->m_image.m_base);
  v10 = R_RT_Handle::GetSurface(&floatZMipmap->R_RT_Handle);
  textures = (GfxTexture *)R_Texture_GetResident(v10->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v11 = R_RT_Handle::GetSurface(&outReProjFloatZ->R_RT_Handle);
  textures = (GfxTexture *)R_Texture_GetResident(v11->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  R_SetComputeShader(computeState, rgp.reProjFloatZClipSpace);
  R_Dispatch(computeState, ((unsigned int)v9->m_image.m_base.width + 7) >> 3, ((unsigned int)v9->m_image.m_base.height + 7) >> 3, 1u);
}

/*
==============
R_ReProjFloatZ_FreeTemporalRTs
==============
*/

void __fastcall R_ReProjFloatZ_FreeTemporalRTs(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    v2 = (R_RT_Handle)s_previousFloatZ;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousFloatZ.m_surfaceID = 0;
    s_previousFloatZ.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousFloatZ.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousFloatZ.m_tracking.m_allocCounter != s_previousFloatZ.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_ReProjFloatZ_RenderTargetInfo
==============
*/
void R_ReProjFloatZ_RenderTargetInfo(const unsigned int vroxelsCountX, const unsigned int vroxelsCountY, const unsigned int sceneWidth, const unsigned int sceneHeight, unsigned int *outReProjFloatZMipMap, unsigned int *outReProjFloatZWidth, unsigned int *outReProjFloatZHeight)
{
  signed int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v8 = sceneWidth / vroxelsCountX;
  v9 = sceneHeight / vroxelsCountY;
  if ( v8 < (int)(sceneHeight / vroxelsCountY) )
    v9 = v8;
  v10 = __lzcnt(v9);
  v11 = 1 << (31 - v10);
  *outReProjFloatZMipMap = 31 - v10;
  *outReProjFloatZWidth = sceneWidth / v11;
  *outReProjFloatZHeight = sceneHeight / v11;
}

/*
==============
R_ReProjFloatZ_SetConstantBuffer
==============
*/
void R_ReProjFloatZ_SetConstantBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *outReProjFloatZImage)
{
  int width; 
  __m256i v4; 
  float v5; 
  int height; 
  float v7; 
  __int64 v8; 
  __m256i v9; 
  __int128 data; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __m256i v15; 
  __m256i v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 

  width = outReProjFloatZImage->width;
  v4 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
  v19 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
  *(float *)&v19.m256i_i32[6] = FLOAT_1_0;
  v5 = (float)width;
  height = outReProjFloatZImage->height;
  v13 = 1.0 / v5;
  v16 = v19;
  v7 = (float)height;
  v8 = (__int64)(int)viewInfo->clientIndex << 6;
  v14 = 1.0 / v7;
  v11 = v5;
  v9 = *(__m256i *)((char *)s_invPrevViewProjectionMatrix[0].m.row2.v + v8);
  v17 = *(__m256i *)((char *)s_invPrevViewProjectionMatrix[0].m.m[0].v + v8);
  data = *(_OWORD *)viewInfo->viewParms.camera.zPlanes;
  v12 = v7;
  v15 = v4;
  v18 = v9;
  R_UploadAndSetComputeConstants(computeState, 0, &data, 0xF0u, NULL);
}

/*
==============
R_ReProjFloatZ_UpdatePrevMatrix
==============
*/
void R_ReProjFloatZ_UpdatePrevMatrix(const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  __m256i v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 clientIndex; 
  float v8; 
  float v9; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> in2; 

  v3 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
  v4 = rtWidth;
  *(__m256i *)mat.m[0].v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
  *(__m256i *)mat.row2.v = v3;
  v6 = rtHeight;
  mat.m[3].v[2] = FLOAT_1_0;
  MatrixInverse44Aligned(&mat, &in2);
  clientIndex = viewInfo->clientIndex;
  v8 = (float)v4;
  in1.m[0].v[0] = (float)(1.0 / v8) * 2.0;
  in1.m[3].v[0] = (float)(1.0 / v8) - 1.0;
  v9 = (float)v6;
  in1.m[3].v[1] = (float)(1.0 / v9) - 1.0;
  in1.m[1].v[0] = 0.0;
  in1.m[2].v[0] = 0.0;
  in1.m[0].v[1] = 0.0;
  in1.m[1].v[1] = (float)(1.0 / v9) * 2.0;
  in1.m[2].v[1] = 0.0;
  in1.m[0].v[2] = 0.0;
  in1.m[1].v[2] = 0.0;
  in1.m[2].v[2] = FLOAT_1_0;
  in1.m[3].v[2] = 0.0;
  in1.m[0].v[3] = 0.0;
  in1.m[1].v[3] = 0.0;
  in1.m[2].v[3] = 0.0;
  in1.m[3].v[3] = FLOAT_1_0;
  MatrixMultiply44Aligned(&in1, &in2, &s_invPrevViewProjectionMatrix[clientIndex].m);
}

/*
==============
R_Resolve
==============
*/
void R_Resolve(GfxCmdBufContext *context, const GfxImage *image)
{
  GfxCmdBufState *state; 
  R_RT_Handle *ValidRt; 
  int width; 
  R_RT_Handle *v7; 
  int height; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  R_RT_Handle result; 

  state = context->state;
  ValidRt = R_RT_Group::GetValidRt(&state->rtGroup, &result);
  width = R_RT_Handle::GetSurface(ValidRt)->m_image.m_base.width;
  v7 = R_RT_Group::GetValidRt(&state->rtGroup, &result);
  height = R_RT_Handle::GetSurface(v7)->m_image.m_base.height;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 65, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->width != width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 66, ASSERT_TYPE_ASSERT, "(image->width == rtWidth)", "%s\n\timage->name=%s, image=%dx%d, rt=%dx%d", "image->width == rtWidth", image->name, image->width, image->height, width, height) )
    __debugbreak();
  if ( image->height != height )
  {
    LODWORD(v12) = height;
    LODWORD(v11) = width;
    LODWORD(v10) = image->height;
    LODWORD(v9) = image->width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 67, ASSERT_TYPE_ASSERT, "(image->height == rtHeight)", "%s\n\timage->name=%s, image=%dx%d, rt=%dx%d", "image->height == rtHeight", image->name, v9, v10, v11, v12) )
      __debugbreak();
  }
  *(GfxCmdBufContext *)&result.m_surfaceID = *context;
  R_HW_Resolve((GfxCmdBufContext *)&result, image);
}

/*
==============
R_ResolveDepth
==============
*/
void R_ResolveDepth(GfxCmdBufContext *context)
{
  GfxCmdBufContext v1; 

  v1 = *context;
  R_HW_ResolveDepth(&v1);
}

/*
==============
R_ResolveDepthToState
==============
*/
void R_ResolveDepthToState(GfxCmdBufContext *context, D3D12_RESOURCE_STATES finalState)
{
  GfxCmdBufContext v2; 

  v2 = *context;
  R_HW_ResolveDepthToState(&v2, finalState);
}

/*
==============
R_ResolveFloatZDownsample
==============
*/
void R_ResolveFloatZDownsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_DepthHandle *srcDepthRt, R_RT_ColorHandle *dstFloatZFullRt, R_RT_ColorHandle *dstFloatZHalfRt, R_RT_ColorHandle *dstFloatZQuarterRt, R_RT_ColorHandle *dstFloatZEighthRt, R_RT_ColorHandle *dstFloatZEighthMipMinRt, R_RT_DepthHandle *dstZMSAARt, R_RT_ColorHandle *dstStencilRt, const GfxWrappedRWBuffer *dstStencilMaskBuffer)
{
  const GfxBackEndData *v14; 
  ID3D12Resource **p_buffer; 
  BOOL IsValid; 
  unsigned int v17; 
  __int64 v18; 
  __int64 width; 
  const R_RT_Surface *Surface; 
  __int128 v21; 
  __int64 height; 
  char *v23; 
  float v24; 
  float v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int unsignedInt; 
  __int64 v29; 
  __int64 v30; 
  base_vec2_t<int> v31; 
  unsigned int v32; 
  __int64 v33; 
  base_vec2_t<int> v34; 
  unsigned int v35; 
  base_vec4_t<unsigned int> *v36; 
  R_RT_Handle *v37; 
  __int128 v38; 
  ComputeCmdBufState *v39; 
  const R_RT_Surface *v40; 
  R_RT_Handle *v41; 
  const R_RT_Surface *v42; 
  const R_RT_Surface *v43; 
  const R_RT_Surface *v44; 
  const R_RT_Surface *v45; 
  const R_RT_Surface *v46; 
  const R_RT_Surface *v47; 
  const R_RT_Surface *v48; 
  R_RT_DepthHandle v49; 
  __int64 v50; 
  __int64 v51; 
  ComputeCmdBufState *state; 
  unsigned int yCount; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v57; 
  R_RT_Handle *v58; 
  R_RT_Handle *v59; 
  R_RT_Handle *v60; 
  R_RT_Handle *v61; 
  GfxShaderBufferRWView *v62; 
  R_RT_Handle *v63; 
  base_vec4_t<unsigned int> result[2]; 
  R_RT_DepthHandle v65; 
  GfxShaderBufferView v66; 
  __int128 data; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  int v73; 
  unsigned int v74; 
  unsigned int v75[38]; 
  char v76; 
  __int128 v77; 

  v57 = dstFloatZHalfRt;
  v58 = dstFloatZQuarterRt;
  v59 = dstFloatZEighthRt;
  v60 = dstFloatZEighthMipMinRt;
  v61 = dstStencilRt;
  v14 = computeState->data;
  state = computeState;
  Resident = dstFloatZFullRt;
  views = (GfxShaderBufferView *)srcDepthRt;
  p_buffer = &v14->globalSceneConstantBuffer->buffer;
  v63 = dstZMSAARt;
  v62 = (GfxShaderBufferRWView *)dstStencilMaskBuffer;
  buffers = *p_buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  IsValid = R_RT_Handle::IsValid(dstZMSAARt);
  v17 = IsValid | 4;
  if ( (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x4000) == 0 )
    v17 = IsValid;
  if ( R_RT_Handle::IsValid(dstZMSAARt) && (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 196, ASSERT_TYPE_ASSERT, "(!(dstZMSAARt && srcDepthRt.IsMultisampled()))", "%s\n\tInput MSAA and output MSAA is not supported. What would be the reason?", "!(dstZMSAARt && srcDepthRt.IsMultisampled())") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
    v17 |= 2u;
  v18 = v17 | 8;
  if ( !dstStencilMaskBuffer )
    v18 = v17;
  R_SetComputeShader(computeState, rgp.resolveFloatZDownsampleComputeShader[v18]);
  width = R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(srcDepthRt);
  v21 = *(_OWORD *)viewInfo->viewParms.camera.zPlanes;
  height = Surface->m_image.m_base.height;
  v23 = &v76;
  LODWORD(buffers) = (unsigned int)(width + 7) >> 3;
  v24 = (float)width;
  data = v21;
  v25 = (float)height;
  yCount = (unsigned int)(height + 7) >> 3;
  v70 = 1.0 / v24;
  v73 = 0;
  v26 = 0;
  v75[4] = 0;
  v68 = v24;
  v69 = v25;
  v71 = 1.0 / v25;
  v72 = 0.0;
  do
  {
    v27 = 2 * v26;
    unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( unsignedInt == -1 )
      unsignedInt = viewInfo->input.data->frameCount & 3;
    if ( (unsigned int)v27 >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = 2 * v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    if ( unsignedInt >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v29 = s_VRSSampleToPixelOrdered[unsignedInt][v27];
    if ( (unsigned int)v29 >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v30 = (unsigned int)(v27 + 1);
    v31 = s_VRSSamplePosition[v29];
    *(base_vec2_t<int> *)result[0].v = v31;
    v32 = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( v32 == -1 )
      v32 = viewInfo->input.data->frameCount & 3;
    if ( (unsigned int)v30 >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    if ( v32 >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v33 = s_VRSSampleToPixelOrdered[v32][v30];
    if ( (unsigned int)v33 >= 4 )
    {
      LODWORD(v51) = 4;
      LODWORD(v50) = v33;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v34 = s_VRSSamplePosition[v33];
    v35 = result[0].v[1];
    ++v26;
    *((_DWORD *)v23 - 1) = v31.v[0];
    *(_DWORD *)v23 = v35;
    *(base_vec2_t<int> *)(v23 + 4) = v34;
    v23 += 16;
  }
  while ( v26 < 2 );
  v36 = R_VRSGetPixelsToSamplesUint(result, viewInfo->input.data->frameCount, rg.vrsEmissiveOnly);
  v37 = (R_RT_Handle *)views;
  v38 = (__int128)*v36;
  *(__m256i *)result[0].v = *(__m256i *)&views->resource;
  v77 = v38;
  R_RT_GetHtileInfo((R_RT_DepthHandle *)result, &v74, v75);
  *(__m256i *)result[0].v = *(__m256i *)v37;
  R_RT_GetHtileView(&v66, (R_RT_DepthHandle *)result);
  v39 = state;
  views = &v66;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
  *(__m256i *)result[0].v = *(__m256i *)v37;
  R_RT_BindCompressedDepthComputeView(state, (R_RT_DepthHandle *)result, 0);
  v40 = R_RT_Handle::GetSurface(v37);
  if ( (v40->m_rtFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 414, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_Stencil)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_Stencil") )
    __debugbreak();
  if ( (v40->m_rtFlagsInternal & 0x2000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 415, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None") )
    __debugbreak();
  state = (ComputeCmdBufState *)R_Texture_GetResident(v40->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(v39, 1, 1, (const GfxTexture *const *)&state);
  R_UploadAndSetComputeConstants(v39, 0, &data, 0xF0u, NULL);
  v41 = v63;
  if ( R_RT_Handle::IsValid(v63) )
  {
    v42 = R_RT_Handle::GetSurface(v41);
    if ( (v42->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 474, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
      __debugbreak();
    if ( (v42->m_rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 475, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle") )
      __debugbreak();
    if ( (v42->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 477, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_float4RWView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_float4RWView.IsNull()") )
      __debugbreak();
    state = (ComputeCmdBufState *)((char *)&v42->m_array + 1168);
    R_SetComputeTextureRWViews(v39, 7, 1, (const GfxShaderTextureRWView *const *)&state);
    v41 = v63;
  }
  v43 = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v43->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 0, 1, (const GfxTexture *const *)&Resident);
  v44 = R_RT_Handle::GetSurface(v57);
  v57 = (R_RT_Handle *)R_Texture_GetResident(v44->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 1, 1, (const GfxTexture *const *)&v57);
  v45 = R_RT_Handle::GetSurface(v58);
  v58 = (R_RT_Handle *)R_Texture_GetResident(v45->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 2, 1, (const GfxTexture *const *)&v58);
  v46 = R_RT_Handle::GetSurface(v59);
  v59 = (R_RT_Handle *)R_Texture_GetResident(v46->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 3, 1, (const GfxTexture *const *)&v59);
  v47 = R_RT_Handle::GetSurface(v60);
  v60 = (R_RT_Handle *)R_Texture_GetResident(v47->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 4, 1, (const GfxTexture *const *)&v60);
  v48 = R_RT_Handle::GetSurface(v61);
  v61 = (R_RT_Handle *)R_Texture_GetResident(v48->m_image.m_base.textureId);
  R_SetComputeRWTextures(v39, 5, 1, (const GfxTexture *const *)&v61);
  if ( v62 )
  {
    v62 = (GfxShaderBufferRWView *)((char *)v62 + 32);
    R_SetComputeRWViewsWithCounters(v39, 6, 1, (const GfxShaderBufferRWView *const *)&v62, NULL);
  }
  R_Dispatch(v39, (unsigned int)buffers, yCount, 1u);
  if ( R_RT_Handle::IsValid(v41) )
  {
    v49 = (R_RT_DepthHandle)*v37;
    *(__m256i *)result[0].v = *(__m256i *)v41;
    v65 = v49;
    R_ResolveHiZDownsample(v39, &v65, (R_RT_DepthHandle *)result);
  }
}

/*
==============
R_ResolveFloatZDownsampleCS
==============
*/
void R_ResolveFloatZDownsampleCS(ComputeCmdBufState *computeState, R_RT_ColorHandle *floatZMaxColorRt, R_RT_ColorHandle *floatZMinColorRt, unsigned int mipStart, bool minSample, bool onlyBorder)
{
  unsigned int levelCount; 
  signed int v12; 
  unsigned int v13; 
  R_RT_Handle v14; 
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v17; 
  R_RT_Handle v19; 
  bool v20; 
  R_RT_Handle v21; 
  unsigned __int16 v22; 
  bool v24; 
  unsigned __int16 v25; 
  bool v26; 
  int width; 
  const R_RT_Surface *Surface; 
  int v29; 
  int height; 
  int v31; 
  signed int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  __int128 v38; 
  bool v39; 
  const R_RT_Surface *v40; 
  const R_RT_Surface *v41; 
  unsigned int v42; 
  int v43; 
  ComputeCmdBufState *v44; 
  unsigned int v45; 
  unsigned int v46; 
  R_RT_Handle v47; 
  unsigned __int16 v48; 
  bool v50; 
  unsigned __int16 v51; 
  const char *v53; 
  int v54; 
  const char *v55; 
  const R_RT_Surface *v56; 
  R_RT_Handle v57; 
  unsigned __int16 v58; 
  bool v60; 
  unsigned __int16 v61; 
  const char *v62; 
  int v63; 
  const char *v64; 
  const R_RT_Surface *v65; 
  unsigned int v66; 
  ComputeCmdBufState *v67; 
  ComputeShader *floatZDownsampleBorderComputeShader; 
  const R_RT_Surface *v69; 
  const R_RT_Surface *v70; 
  unsigned int v71; 
  int v72; 
  int i; 
  R_RT_Handle v74; 
  unsigned __int16 v75; 
  bool v77; 
  unsigned __int16 v78; 
  const char *v80; 
  int v81; 
  const char *v82; 
  const R_RT_Surface *v83; 
  int v84; 
  R_RT_Handle v85; 
  unsigned __int16 v86; 
  bool v88; 
  unsigned __int16 v89; 
  const char *v90; 
  int v91; 
  const char *v92; 
  const R_RT_Surface *v93; 
  int v94; 
  R_RT_Handle v95; 
  unsigned __int16 v96; 
  bool v98; 
  unsigned __int16 v99; 
  const char *v100; 
  int v101; 
  const char *v102; 
  const R_RT_Surface *v103; 
  const R_RT_Surface *v104; 
  R_RT_Handle v105; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  R_RT_Handle v108; 
  unsigned int v109; 
  int v110; 
  int v111; 
  unsigned int v112; 
  unsigned int xCount; 
  ComputeCmdBufState *state; 
  unsigned int v115; 
  R_RT_ColorHandle *v116; 
  R_RT_ColorHandle *v117; 
  R_RT_Handle v118; 
  R_RT_Handle v119; 
  R_RT_Handle v120; 
  int data[8]; 

  state = computeState;
  v109 = mipStart;
  v117 = floatZMinColorRt;
  v116 = floatZMaxColorRt;
  levelCount = R_RT_Handle::GetSurface(floatZMaxColorRt)->m_image.m_base.levelCount;
  if ( levelCount - R_RT_Handle::GetSurface(floatZMinColorRt)->m_image.m_base.levelCount != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 313, ASSERT_TYPE_ASSERT, "((resMipCount - floatZMinColorRt.GetMipCount()) == MAX_MIN_MIP_DIFFERENCE)", (const char *)&queryFormat, "(resMipCount - floatZMinColorRt.GetMipCount()) == MAX_MIN_MIP_DIFFERENCE") )
    __debugbreak();
  v115 = mipStart + 1;
  if ( mipStart + 1 >= levelCount )
    return;
  v12 = levelCount - mipStart - 1;
  v120 = floatZMaxColorRt->R_RT_Handle;
  if ( v12 > 4 )
    v12 = 4;
  v13 = v12 - onlyBorder;
  v112 = v13;
  v14 = *R_RT_GetViewInternal(&v118, &v120, 0, mipStart);
  m_surfaceID = _XMM0;
  v108 = v14;
  v105 = v14;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v105);
    if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
      m_surfaceID = v105.m_surfaceID;
      v14 = v105;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
      m_surfaceID = v105.m_surfaceID;
      v14 = v105;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v14 = v108;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v120 = v14;
  v17 = m_surfaceID & 0x7FFF;
  if ( v17 )
  {
    v119.m_surfaceID = v17;
  }
  else
  {
    v17 = 0;
    v119.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
  v119.m_tracking = v105.m_tracking;
  v19 = v119;
  v105 = v119;
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v105);
    if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v19 = v105;
      __debugbreak();
    }
    else
    {
      v19 = v105;
    }
  }
  else if ( (_DWORD)_RDI )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
    v19 = v119;
    if ( v20 )
      __debugbreak();
  }
  v108 = v19;
  if ( !onlyBorder )
  {
    v120 = floatZMinColorRt->R_RT_Handle;
    v21 = *R_RT_GetViewInternal(&v118, &v120, 0, mipStart - 3);
    v22 = _XMM0;
    v119 = v21;
    v105 = v21;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v105);
      if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
        v22 = v105.m_surfaceID;
        v21 = v105;
        __debugbreak();
      }
      else
      {
        LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
        v22 = v105.m_surfaceID;
        v21 = v105;
      }
    }
    else
    {
      __asm { vpextrd rdi, xmm0, 2 }
      if ( (_DWORD)_RDI )
      {
        v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v21 = v119;
        if ( v24 )
          __debugbreak();
      }
    }
    v120 = v21;
    v25 = v22 & 0x7FFF;
    if ( v25 )
    {
      v119.m_surfaceID = v25;
    }
    else
    {
      v25 = 0;
      v119.m_surfaceID = 0;
    }
    v119.m_tracking = v105.m_tracking;
    if ( v25 )
    {
      R_RT_Handle::GetSurface(&v119);
      if ( (R_RT_Handle::GetSurface(&v119)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_43:
        if ( v26 )
          __debugbreak();
      }
    }
    else if ( (_DWORD)_RDI )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      goto LABEL_43;
    }
    v19 = v119;
  }
  v120 = v19;
  width = R_RT_Handle::GetSurface(&v108)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v108);
  v29 = (unsigned int)(width + 15) >> 4;
  v110 = v29;
  height = Surface->m_image.m_base.height;
  v31 = Surface->m_image.m_base.height & 0xF;
  v32 = (unsigned int)(height + 15) >> 4;
  v111 = v32;
  if ( (width & 0xF) != 0 )
  {
    v29 -= 2;
    if ( v29 < 0 )
      v29 = 0;
    v110 = v29;
  }
  if ( v31 )
  {
    v32 -= 2;
    if ( v32 < 0 )
      v32 = 0;
    v111 = v32;
  }
  if ( (width & 0xF) == 0 || (v33 = 1, !v31) )
    v33 = 0;
  data[4] = v29;
  v34 = 0;
  data[5] = v32;
  if ( (width & 0xF) != 0 )
    v34 = v32;
  data[7] = v13;
  data[6] = v34;
  v35 = 0;
  if ( v31 )
    v35 = v29;
  v36 = v33 + v34 + v35;
  *(float *)data = (float)width;
  v38 = LODWORD(FLOAT_1_0);
  *(float *)&v38 = 1.0 / (float)width;
  _XMM0 = v38;
  xCount = v36;
  *(float *)&data[1] = (float)height;
  data[2] = v38;
  *(float *)&data[3] = 1.0 / (float)height;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  v39 = onlyBorder;
  if ( onlyBorder || v29 <= 0 || v32 <= 0 )
  {
    v67 = computeState;
  }
  else
  {
    if ( v13 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 362, ASSERT_TYPE_ASSERT, "( mipCount ) == ( 4 )", "%s == %s\n\t%i, %i", "mipCount", "4", v13, 4) )
      __debugbreak();
    R_SetComputeShader(computeState, rgp.floatZDownsampleInteriorComputeShader);
    v40 = R_RT_Handle::GetSurface(&v108);
    textures = (GfxTexture *)R_Texture_GetResident(v40->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 8, 1, (const GfxTexture *const *)&textures);
    v41 = R_RT_Handle::GetSurface(&v120);
    textures = (GfxTexture *)R_Texture_GetResident(v41->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 9, 1, (const GfxTexture *const *)&textures);
    if ( v13 )
    {
      v42 = v112;
      v43 = mipStart - 2;
      v44 = state;
      v45 = 6 - mipStart;
      v46 = 2 - v109;
      while ( 1 )
      {
        v119 = v116->R_RT_Handle;
        v47 = *R_RT_GetViewInternal(&v118, &v119, 0, v43 + 3);
        v48 = _XMM0;
        v119 = v47;
        v105 = v47;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v105);
          if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v48 = v105.m_surfaceID;
            v47 = v105;
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v48 = v105.m_surfaceID;
            v47 = v105;
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v47 = v119;
            if ( v50 )
              __debugbreak();
          }
        }
        v119 = v47;
        v51 = v48 & 0x7FFF;
        if ( v51 )
        {
          v119.m_surfaceID = v51;
        }
        else
        {
          v51 = 0;
          v119.m_surfaceID = 0;
        }
        _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
        v119.m_tracking = v105.m_tracking;
        if ( v51 )
        {
          R_RT_Handle::GetSurface(&v119);
          if ( (R_RT_Handle::GetSurface(&v119)->m_rtFlagsInternal & 0x18) == 0 )
            goto LABEL_87;
          v53 = "!unionHandle.IsValid() || unionHandle.IsColor()";
          v54 = 217;
          v55 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
        }
        else
        {
          if ( !(_DWORD)_RDI )
            goto LABEL_87;
          v53 = "!this->m_tracking.m_allocCounter";
          v54 = 100;
          v55 = "(!this->m_tracking.m_allocCounter)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v54, ASSERT_TYPE_ASSERT, v55, (const char *)&queryFormat, v53) )
          __debugbreak();
LABEL_87:
        v56 = R_RT_Handle::GetSurface(&v119);
        textures = (GfxTexture *)R_Texture_GetResident(v56->m_image.m_base.textureId);
        R_SetComputeRWTextures(v44, v46 + v43, 1, (const GfxTexture *const *)&textures);
        v119 = v117->R_RT_Handle;
        v57 = *R_RT_GetViewInternal(&v118, &v119, 0, v43);
        v58 = _XMM0;
        v119 = v57;
        v105 = v57;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v105);
          if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v58 = v105.m_surfaceID;
            v57 = v105;
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v58 = v105.m_surfaceID;
            v57 = v105;
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v57 = v119;
            if ( v60 )
              __debugbreak();
          }
        }
        v119 = v57;
        v61 = v58 & 0x7FFF;
        if ( v61 )
        {
          v119.m_surfaceID = v61;
        }
        else
        {
          v61 = 0;
          v119.m_surfaceID = 0;
        }
        _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
        v119.m_tracking = v105.m_tracking;
        if ( v61 )
        {
          R_RT_Handle::GetSurface(&v119);
          if ( (R_RT_Handle::GetSurface(&v119)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v62 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v63 = 217;
            v64 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_103:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v63, ASSERT_TYPE_ASSERT, v64, (const char *)&queryFormat, v62) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v62 = "!this->m_tracking.m_allocCounter";
          v63 = 100;
          v64 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_103;
        }
        v65 = R_RT_Handle::GetSurface(&v119);
        Resident = (GfxTexture *)R_Texture_GetResident(v65->m_image.m_base.textureId);
        R_SetComputeRWTextures(v44, v45 + v43++, 1, (const GfxTexture *const *)&Resident);
        if ( v46 + v43 >= v42 )
        {
          v29 = v110;
          v32 = v111;
          v13 = v112;
          v36 = xCount;
          break;
        }
      }
    }
    v66 = v32;
    v67 = state;
    R_Dispatch(state, v29, v66, 1u);
    v39 = 0;
  }
  if ( v36 > 0 )
  {
    floatZDownsampleBorderComputeShader = rgp.floatZDownsampleBorderComputeShader;
    if ( v39 )
      floatZDownsampleBorderComputeShader = rgp.floatZDownsampleBorderLastMinOnlyComputeShader;
    R_SetComputeShader(v67, floatZDownsampleBorderComputeShader);
    v69 = R_RT_Handle::GetSurface(&v108);
    Resident = (GfxTexture *)R_Texture_GetResident(v69->m_image.m_base.textureId);
    R_SetComputeRWTextures(v67, 8, 1, (const GfxTexture *const *)&Resident);
    v70 = R_RT_Handle::GetSurface(&v120);
    Resident = (GfxTexture *)R_Texture_GetResident(v70->m_image.m_base.textureId);
    R_SetComputeRWTextures(v67, 9, 1, (const GfxTexture *const *)&Resident);
    if ( v13 )
    {
      v71 = 3 - v109;
      v72 = ~v109;
      for ( i = v115; i + v72 < v13; ++i )
      {
        v120 = v116->R_RT_Handle;
        v74 = *R_RT_GetViewInternal(&v118, &v120, 0, i);
        v75 = _XMM0;
        v120 = v74;
        v105 = v74;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v105);
          if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v75 = v105.m_surfaceID;
            v74 = v105;
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v75 = v105.m_surfaceID;
            v74 = v105;
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v77 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v74 = v120;
            if ( v77 )
              __debugbreak();
          }
        }
        v120 = v74;
        v78 = v75 & 0x7FFF;
        if ( v78 )
        {
          v108.m_surfaceID = v78;
        }
        else
        {
          v78 = 0;
          v108.m_surfaceID = 0;
        }
        _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
        v108.m_tracking = v105.m_tracking;
        if ( v78 )
        {
          R_RT_Handle::GetSurface(&v108);
          if ( (R_RT_Handle::GetSurface(&v108)->m_rtFlagsInternal & 0x18) == 0 )
            goto LABEL_132;
          v80 = "!unionHandle.IsValid() || unionHandle.IsColor()";
          v81 = 217;
          v82 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
        }
        else
        {
          if ( !(_DWORD)_RDI )
            goto LABEL_132;
          v80 = "!this->m_tracking.m_allocCounter";
          v81 = 100;
          v82 = "(!this->m_tracking.m_allocCounter)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v81, ASSERT_TYPE_ASSERT, v82, (const char *)&queryFormat, v80) )
          __debugbreak();
LABEL_132:
        v83 = R_RT_Handle::GetSurface(&v108);
        Resident = (GfxTexture *)R_Texture_GetResident(v83->m_image.m_base.textureId);
        R_SetComputeRWTextures(v67, i + v72, 1, (const GfxTexture *const *)&Resident);
        v84 = 0;
        if ( !onlyBorder )
          v84 = i - 3;
        v120 = v117->R_RT_Handle;
        v85 = *R_RT_GetViewInternal(&v118, &v120, 0, v84);
        v86 = _XMM0;
        v120 = v85;
        v105 = v85;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v105);
          if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v86 = v105.m_surfaceID;
            v85 = v105;
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v86 = v105.m_surfaceID;
            v85 = v105;
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v85 = v120;
            if ( v88 )
              __debugbreak();
          }
        }
        v120 = v85;
        v89 = v86 & 0x7FFF;
        if ( v89 )
        {
          v108.m_surfaceID = v89;
        }
        else
        {
          v89 = 0;
          v108.m_surfaceID = 0;
        }
        _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
        v108.m_tracking = v105.m_tracking;
        if ( v89 )
        {
          R_RT_Handle::GetSurface(&v108);
          if ( (R_RT_Handle::GetSurface(&v108)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v90 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v91 = 217;
            v92 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_150:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v91, ASSERT_TYPE_ASSERT, v92, (const char *)&queryFormat, v90) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v90 = "!this->m_tracking.m_allocCounter";
          v91 = 100;
          v92 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_150;
        }
        v93 = R_RT_Handle::GetSurface(&v108);
        textures = (GfxTexture *)R_Texture_GetResident(v93->m_image.m_base.textureId);
        R_SetComputeRWTextures(v67, v71 + i, 1, (const GfxTexture *const *)&textures);
      }
    }
    if ( v13 < 4 )
    {
      v94 = v13 + v109;
      do
      {
        v120 = v116->R_RT_Handle;
        v95 = *R_RT_GetViewInternal(&v118, &v120, 0, v94);
        v96 = _XMM0;
        v120 = v95;
        v105 = v95;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v105);
          if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v96 = v105.m_surfaceID;
            v95 = v105;
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v105.m_tracking.m_allocCounter;
            v96 = v105.m_surfaceID;
            v95 = v105;
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v98 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v95 = v120;
            if ( v98 )
              __debugbreak();
          }
        }
        v120 = v95;
        v99 = v96 & 0x7FFF;
        if ( v99 )
        {
          v108.m_surfaceID = v99;
        }
        else
        {
          v99 = 0;
          v108.m_surfaceID = 0;
        }
        _XMM0 = *(_OWORD *)&v105.m_tracking.m_allocCounter;
        v108.m_tracking = v105.m_tracking;
        if ( v99 )
        {
          R_RT_Handle::GetSurface(&v108);
          if ( (R_RT_Handle::GetSurface(&v108)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v100 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v101 = 217;
            v102 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_171:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v101, ASSERT_TYPE_ASSERT, v102, (const char *)&queryFormat, v100) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v100 = "!this->m_tracking.m_allocCounter";
          v101 = 100;
          v102 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_171;
        }
        v120 = v108;
        v103 = R_RT_Handle::GetSurface(&v120);
        Resident = (GfxTexture *)R_Texture_GetResident(v103->m_image.m_base.textureId);
        R_SetComputeRWTextures(v67, v13, 1, (const GfxTexture *const *)&Resident);
        v104 = R_RT_Handle::GetSurface(&v120);
        textures = (GfxTexture *)R_Texture_GetResident(v104->m_image.m_base.textureId);
        R_SetComputeRWTextures(v67, v13 + 4, 1, (const GfxTexture *const *)&textures);
        ++v13;
      }
      while ( v13 < 4 );
    }
    R_Dispatch(v67, xCount, 1u, 1u);
  }
}

/*
==============
R_ResolveHiZDownsample
==============
*/
void R_ResolveHiZDownsample(ComputeCmdBufState *computeState, R_RT_DepthHandle *srcDepthRt, R_RT_DepthHandle *dstZMSAARt)
{
  unsigned int width; 
  unsigned int height; 
  bool v8; 
  ComputeShader *resolveHiZDownsampleScorpioComputeShader; 
  int v10; 
  int v11; 
  GfxShaderBufferView *views[2]; 
  R_RT_DepthHandle v13; 
  GfxShaderBufferView v14; 
  GfxShaderBufferRWView v15; 
  char data[40]; 
  unsigned int v17; 
  unsigned int v18[2]; 
  unsigned int v19; 
  unsigned int v20[46]; 

  width = R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.width;
  if ( width >> 1 != R_RT_Handle::GetSurface(dstZMSAARt)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.height, height >> 1 != R_RT_Handle::GetSurface(dstZMSAARt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 117, ASSERT_TYPE_ASSERT, "(( srcDepthRt.GetWidth( ) / 2 == dstZMSAARt.GetWidth( ) ) && ( srcDepthRt.GetHeight( ) / 2 == dstZMSAARt.GetHeight( ) ))", (const char *)&queryFormat, "( srcDepthRt.GetWidth( ) / 2 == dstZMSAARt.GetWidth( ) ) && ( srcDepthRt.GetHeight( ) / 2 == dstZMSAARt.GetHeight( ) )") )
      __debugbreak();
  }
  v8 = (R_RT_Handle::GetSurface(dstZMSAARt)->m_rtFlags & 0x80) != 0;
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    resolveHiZDownsampleScorpioComputeShader = rgp.resolveHiZDownsampleScorpioComputeShader;
    if ( v8 )
      resolveHiZDownsampleScorpioComputeShader = rgp.resolveHiZHiSDownsampleScorpioComputeShader;
  }
  else
  {
    resolveHiZDownsampleScorpioComputeShader = rgp.resolveHiZDownsampleComputeShader;
    if ( v8 )
      resolveHiZDownsampleScorpioComputeShader = rgp.resolveHiZHiSDownsampleComputeShader;
  }
  R_SetComputeShader(computeState, resolveHiZDownsampleScorpioComputeShader);
  v10 = R_RT_Handle::GetSurface(dstZMSAARt)->m_image.m_base.width;
  v11 = R_RT_Handle::GetSurface(dstZMSAARt)->m_image.m_base.height;
  v13 = *srcDepthRt;
  R_RT_GetHtileInfo(&v13, &v17, v18);
  v13 = *srcDepthRt;
  R_RT_GetHtileView(&v14, &v13);
  views[0] = &v14;
  R_SetComputeViews(computeState, 3, 1, (const GfxShaderBufferView *const *)views);
  v13 = *dstZMSAARt;
  R_RT_GetHtileInfo(&v13, &v19, v20);
  v13 = *dstZMSAARt;
  R_RT_GetHtileRWView(&v15, &v13);
  views[0] = (GfxShaderBufferView *)&v15;
  R_SetComputeRWViewsWithCounters(computeState, 8, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  v18[1] = ((unsigned int)R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags >> 7) & 1;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0xF0u, NULL);
  R_Dispatch(computeState, (unsigned int)(v10 + 63) >> 6, (unsigned int)(v11 + 63) >> 6, 1u);
}

/*
==============
R_ResolveSection
==============
*/
void R_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, float s0, float t0, float ds, float dt)
{
  GfxCmdBufContext v8; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 76, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  v8 = *context;
  R_HW_ResolveSection(&v8, image, s0, t0, ds, dt);
}

/*
==============
R_Resolve_ClearStencilMaskBuffer
==============
*/
void R_Resolve_ClearStencilMaskBuffer(ComputeCmdBufState *computeState, R_RT_BufferHandle *stencilMaskBuffer)
{
  const R_RT_Surface *Surface; 
  GfxDevice *device; 
  __int64 v5; 
  __int64 v6[2]; 

  v6[0] = 0i64;
  v6[1] = 0i64;
  Surface = R_RT_Handle::GetSurface(stencilMaskBuffer);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
    __debugbreak();
  device = computeState->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v5 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + Surface->m_buffer.m_wrappedBuffer.rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v5 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v5, Surface->m_buffer.m_wrappedBuffer.rwView.rwResource, v6, 0, 0i64);
}

/*
==============
R_Resolve_CompactFmask
==============
*/
void R_Resolve_CompactFmask(ComputeCmdBufState *computeState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, const R_RT_ColorHandle *compactFmaskRtHandle)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v9; 
  const R_RT_Surface *v10; 
  int height; 
  const R_RT_Surface *v12; 
  int width; 
  GfxTexture *textures[3]; 

  R_Resolve_SetConstants(computeState, compactFmaskRtHandle, 0);
  R_SetComputeShader(computeState, rgp.resolveCompactFmask);
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  textures[0] = (GfxTexture *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)textures);
  v9 = R_RT_Handle::GetSurface(srcAlphaRt);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v9->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)textures);
  v10 = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v10->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  height = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle)->m_image.m_base.height;
  v12 = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  width = v12->m_image.m_base.width;
  if ( (!v12->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_Resolve_CopyDepthTo4xMS
==============
*/
void R_Resolve_CopyDepthTo4xMS(GfxCmdBufContext *context, R_RT_DepthHandle *srcRt, R_RT_DepthHandle *dstRt)
{
  unsigned int width; 
  unsigned int height; 
  GfxCmdBufContext v8; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_DepthHandle v11; 
  GfxCmdBufContext v12; 
  unsigned int v13; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v17; 
  R_RT_Handle v18; 
  R_RT_DepthHandle v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __m256i v23; 
  _BYTE v24[72]; 
  R_RT_Group v25; 

  width = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.width;
  if ( width >> 1 != R_RT_Handle::GetSurface(dstRt)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height, height >> 1 != R_RT_Handle::GetSurface(dstRt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 462, ASSERT_TYPE_ASSERT, "(srcRt.GetWidth( ) / 2 == dstRt.GetWidth( ) && srcRt.GetHeight( ) / 2 == dstRt.GetHeight( ))", (const char *)&queryFormat, "srcRt.GetWidth( ) / 2 == dstRt.GetWidth( ) && srcRt.GetHeight( ) / 2 == dstRt.GetHeight( )") )
      __debugbreak();
  }
  v8 = *context;
  source = context->source;
  v19 = *srcRt;
  *(GfxCmdBufContext *)&v18.m_surfaceID = v8;
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v18, &v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(466)");
  *(GfxCmdBufContext *)&v18.m_surfaceID = *context;
  R_HW_ResolveDepth((GfxCmdBufContext *)&v18);
  p_m_image = &R_RT_Handle::GetSurface(srcRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11 = *dstRt;
  v12 = *context;
  source->input.codeImages[23] = &p_m_image->m_base;
  v19 = v11;
  *(GfxCmdBufContext *)&v18.m_surfaceID = v12;
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v18, &v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(470)");
  v18 = dstRt->R_RT_Handle;
  v13 = R_RT_Handle::GetSurface(&v18)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v18);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, v13, GFX_USE_VIEWPORT_FULL);
  _XMM0 = *context;
  *(GfxCmdBufContext *)&v18.m_surfaceID = *context;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v18, rgp.copyTo4xMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(473)");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v24[24] = _XMM0;
  *(_OWORD *)&v24[56] = _XMM0;
  v20.m256i_i8[0] = 0;
  *(_WORD *)&v24[8] = 0;
  *(_DWORD *)&v24[16] = 0;
  *(_WORD *)&v24[40] = 0;
  *(_DWORD *)&v24[48] = 0;
  *(__m256i *)&v25.m_colorRtCount = v20;
  *(__m256i *)&v25.m_colorRts[0].m_tracking.m_location = v21;
  *(__m256i *)&v25.m_colorRts[1].m_tracking.m_location = v22;
  *(__m256i *)&v25.m_colorRts[2].m_tracking.m_location = v23;
  v17 = *context;
  *(__m256i *)&v25.m_colorRts[3].m_tracking.m_location = *(__m256i *)v24;
  *(__m256i *)&v25.m_depthRt.m_tracking.m_location = *(__m256i *)&v24[32];
  v25.m_vrsRt.m_tracking.m_location = *(const char **)&v24[64];
  *(GfxCmdBufContext *)&v18.m_surfaceID = v17;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v18, &v25, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(482)");
}

/*
==============
R_Resolve_CopyFrom4xMS
==============
*/
void R_Resolve_CopyFrom4xMS(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt, R_RT_ColorHandle *dilatedCompactFmaskRt, R_RT_ColorHandle *sample0Color, R_RT_ColorHandle *sample0Alpha)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v14; 
  GfxCmdBufSourceState *v15; 
  R_RT_Image *v16; 
  GfxCmdBufInput *v17; 
  const R_RT_Surface *v18; 
  GfxCmdBufSourceState *v19; 
  $6354FE9254625F25F9BF74DDC4774D51 *v20; 
  GfxCmdBufInput *v21; 
  const R_RT_Surface *v22; 
  GfxCmdBufSourceState *v23; 
  $6354FE9254625F25F9BF74DDC4774D51 *v24; 
  GfxCmdBufInput *v25; 
  const R_RT_Surface *v26; 
  GfxCmdBufSourceState *v27; 
  R_RT_Image *v28; 
  GfxCmdBufInput *v29; 
  const R_RT_Surface *v30; 
  GfxCmdBufSourceState *v31; 
  R_RT_Image *v32; 
  GfxCmdBufInput *v33; 
  const R_RT_Surface *v34; 
  GfxCmdBufSourceState *v35; 
  R_RT_Image *v36; 
  GfxCmdBufInput *v37; 
  GfxCmdBufContext v38; 
  GfxCmdBufContext v39; 

  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = context->source;
  p_m_image = &Surface->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[8] = &p_m_image->m_base;
  v14 = R_RT_Handle::GetSurface(srcAlphaRt);
  v15 = context->source;
  v16 = &v14->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v17 = &v15->input;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17->codeImages[9] = &v16->m_base;
  v18 = R_RT_Handle::GetSurface(srcColorRt);
  v19 = context->source;
  v20 = &v18->1080;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v19->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[22] = &v20->m_color.m_fmaskImage.m_base;
  v22 = R_RT_Handle::GetSurface(srcAlphaRt);
  v23 = context->source;
  v24 = &v22->1080;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v25 = &v23->input;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25->codeImages[23] = &v24->m_color.m_fmaskImage.m_base;
  v26 = R_RT_Handle::GetSurface(dilatedCompactFmaskRt);
  v27 = context->source;
  v28 = &v26->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v27->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[24] = &v28->m_base;
  v30 = R_RT_Handle::GetSurface(sample0Color);
  v31 = context->source;
  v32 = &v30->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v33 = &v31->input;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v33->codeImages[25] = &v32->m_base;
  v34 = R_RT_Handle::GetSurface(sample0Alpha);
  v35 = context->source;
  v36 = &v34->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v37 = &v35->input;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v38 = *context;
  v37->codeImages[26] = &v36->m_base;
  v39 = v38;
  RB_FullScreenFilterInternal(&v39, rgp.copyFrom4xMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(622)");
}

/*
==============
R_Resolve_CopySampleFromMSAA
==============
*/
void R_Resolve_CopySampleFromMSAA(GfxCmdBufContext *context, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcAlphaRt)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v10; 
  GfxCmdBufSourceState *v11; 
  R_RT_Image *v12; 
  GfxCmdBufInput *v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext v15; 

  if ( ((R_RT_Handle::GetSurface(srcColorRt)->m_rtFlags & 0x4000) == 0 || (R_RT_Handle::GetSurface(srcAlphaRt)->m_rtFlags & 0x4000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 488, ASSERT_TYPE_ASSERT, "(srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled())", (const char *)&queryFormat, "srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled()") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = context->source;
  p_m_image = &Surface->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  v10 = R_RT_Handle::GetSurface(srcAlphaRt);
  v11 = context->source;
  v12 = &v10->m_image;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v13 = &v11->input;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v14 = *context;
  v13->codeImages[23] = &v12->m_base;
  v15 = v14;
  RB_FullScreenFilterInternal(&v15, rgp.copySampleFromMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(492)");
}

/*
==============
R_Resolve_CreateResources
==============
*/
void R_Resolve_CreateResources(void)
{
  ;
}

/*
==============
R_Resolve_DestroyResources
==============
*/
void R_Resolve_DestroyResources(void)
{
  ;
}

/*
==============
R_Resolve_DilateCompactFmask
==============
*/
void R_Resolve_DilateCompactFmask(ComputeCmdBufState *computeState, const R_RT_ColorHandle *compactFmaskRtHandle, const R_RT_ColorHandle *dilatedCompactFmaskRtHandle)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v7; 
  int height; 
  const R_RT_Surface *v9; 
  int width; 
  GfxTexture *textures; 

  R_Resolve_SetConstants(computeState, compactFmaskRtHandle, 0);
  R_SetComputeShader(computeState, rgp.resolveCompactFmaskDilate);
  Surface = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v7 = R_RT_Handle::GetSurface(&dilatedCompactFmaskRtHandle->R_RT_Handle);
  textures = (GfxTexture *)R_Texture_GetResident(v7->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  height = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle)->m_image.m_base.height;
  v9 = R_RT_Handle::GetSurface(&compactFmaskRtHandle->R_RT_Handle);
  width = v9->m_image.m_base.width;
  if ( (!v9->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_Resolve_EliminateFastClear
==============
*/
void R_Resolve_EliminateFastClear(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  GfxCmdBufContext v6; 
  GfxCmdBufContext v7; 
  R_RT_ColorHandle v8; 

  R_ProfBeginNamedEvent(context->state, "Eliminate Fast Clear");
  v6 = *context;
  v8 = *colorRt;
  v7 = v6;
  R_HW_EliminateFastClear(&v7, &v8, flushCaches);
  R_ProfEndNamedEvent(context->state);
}

/*
==============
R_Resolve_GetCBuffer
==============
*/
ID3D12Resource **R_Resolve_GetCBuffer()
{
  return 0i64;
}

/*
==============
R_Resolve_MSAAColor4xToFull
==============
*/
void R_Resolve_MSAAColor4xToFull(ComputeCmdBufState *computeState, R_RT_ColorHandle *msaaColorRt, R_RT_ColorHandle *colorRt, unsigned int frameIndex)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v8; 
  const R_RT_Surface *v9; 
  int height; 
  const R_RT_Surface *v11; 
  int width; 
  GfxTexture *textures[3]; 

  R_Resolve_SetConstants(computeState, msaaColorRt, frameIndex);
  R_SetComputeShader(computeState, rgp.resolveMSAA4xToFull);
  Surface = R_RT_Handle::GetSurface(msaaColorRt);
  textures[0] = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  v8 = R_RT_Handle::GetSurface(msaaColorRt);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v8->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)textures);
  v9 = R_RT_Handle::GetSurface(colorRt);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v9->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)textures);
  height = R_RT_Handle::GetSurface(msaaColorRt)->m_image.m_base.height;
  v11 = R_RT_Handle::GetSurface(msaaColorRt);
  width = v11->m_image.m_base.width;
  if ( (!v11->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_Resolve_SetConstants
==============
*/
void R_Resolve_SetConstants(ComputeCmdBufState *computeState, const R_RT_ColorHandle *rt, unsigned int frameIndex)
{
  base_vec4_t<unsigned int> result; 
  int data[4]; 
  __int128 v8; 

  data[0] = R_RT_Handle::GetSurface(&rt->R_RT_Handle)->m_image.m_base.width;
  data[1] = R_RT_Handle::GetSurface(&rt->R_RT_Handle)->m_image.m_base.height;
  v8 = (__int128)*R_VRSGetPixelsToSamplesUint(&result, frameIndex, rg.halfResEmissive);
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
}

/*
==============
R_ResummarizeDepth
==============
*/
void R_ResummarizeDepth(GfxCmdBufContext *context)
{
  GfxCmdBufContext v1; 

  v1 = *context;
  R_HW_ResummarizeDepth(&v1);
}

