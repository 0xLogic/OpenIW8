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
  bool v15; 
  unsigned int reProjFloatZWidth; 
  bool v20; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v23; 
  const GfxTexture *v24; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  const R_RT_Surface *v35; 
  const R_RT_Surface *v36; 
  const GfxTexture *v37; 
  const R_RT_Surface *v38; 
  const GfxTexture *v39; 
  unsigned int fmt; 
  R_RT_Handle v49; 
  R_RT_Handle result; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_Handle v54; 
  GfxTexture *textures; 

  _R14 = viewInfo;
  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    __asm { vmovups ymm0, ymmword ptr cs:s_previousFloatZ.baseclass_0.m_surfaceID }
    reProjFloatZMipMap = _R14->reProjFloatZMipMap;
    __asm { vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0 }
    _RAX = R_RT_GetViewInternal(&v54, &result, 0, reProjFloatZMipMap);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+60h+var_80.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+60h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v49);
      if ( (R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
          vmovups ymmword ptr [rbp+60h+var_80.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
          vmovups ymmword ptr [rbp+60h+var_80.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    _RAX = R_RT_CreateInternal(&result, _R14->reProjFloatZWidth, _R14->reProjFloatZHeight, _R14->reProjFloatZWidth, _R14->reProjFloatZHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorZero, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "uint ReProjected FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(831)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+60h+var_60], ymm0
      vmovups ymmword ptr [rbp+60h+var_E0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v49);
      if ( (R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
          vmovups [rbp+60h+var_60], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
          vmovups [rbp+60h+var_60], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+60h+var_60] }
        if ( v15 )
          __debugbreak();
      }
    }
    reProjFloatZWidth = _R14->reProjFloatZWidth;
    fmt = _R14->reProjFloatZHeight;
    __asm { vmovups ymmword ptr [rbp+60h+var_40.m_surfaceID], ymm0 }
    _RAX = R_RT_CreateInternal(&result, reProjFloatZWidth, fmt, reProjFloatZWidth, fmt, 1u, 1u, 1u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorZero, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "ReProjected FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(832)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+60h+var_E0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+60h+var_A0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v51);
      if ( (R_RT_Handle::GetSurface(&v51)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_A0.m_surfaceID]
          vmovups ymmword ptr [rbp+60h+var_E0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+60h+var_A0.m_surfaceID]
          vmovups ymmword ptr [rbp+60h+var_E0.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID] }
        if ( v20 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0 }
    R_ProfBeginNamedEvent(computeState, "ReProj Float Z");
    Surface = R_RT_Handle::GetSurface(&v54);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v23 = R_RT_Handle::GetSurface(&result);
    v24 = R_Texture_GetResident(v23->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(computeState);
    __asm
    {
      vmovups ymm0, [rbp+60h+var_60]
      vmovups ymm1, ymmword ptr [rbp+60h+var_80.m_surfaceID]
      vmovups ymmword ptr [rbp+60h+var_A0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+60h+var_80.m_surfaceID], ymm1
    }
    v27 = R_RT_Handle::GetSurface(&v51);
    v28 = v27;
    if ( (v27->m_image.m_base.width != _R14->reProjFloatZWidth || v27->m_image.m_base.height != _R14->reProjFloatZHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 780, ASSERT_TYPE_ASSERT, "(outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight)", (const char *)&queryFormat, "outReProjFloatZImage->width == viewInfo->reProjFloatZWidth && outReProjFloatZImage->height == viewInfo->reProjFloatZHeight") )
      __debugbreak();
    R_ClearImage_Uint(computeState, &v28->m_image.m_base, 0, PIPE_FLUSH_PARTIAL);
    R_ReProjFloatZ_SetConstantBuffer(computeState, _R14, &v28->m_image.m_base);
    v29 = R_RT_Handle::GetSurface(&v52);
    textures = (GfxTexture *)R_Texture_GetResident(v29->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    v30 = R_RT_Handle::GetSurface(&v51);
    textures = (GfxTexture *)R_Texture_GetResident(v30->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    R_SetComputeShader(computeState, rgp.reProjFloatZClipSpace);
    R_Dispatch(computeState, ((unsigned int)v28->m_image.m_base.width + 7) >> 3, ((unsigned int)v28->m_image.m_base.height + 7) >> 3, 1u);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
      vmovups ymmword ptr [rbp+60h+var_80.m_surfaceID], ymm0
      vmovups ymm0, [rbp+60h+var_60]
      vmovups ymmword ptr [rbp+60h+var_A0.m_surfaceID], ymm0
    }
    R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
    v33 = R_RT_Handle::GetSurface(&v52);
    R_ReProjFloatZ_SetConstantBuffer(computeState, _R14, &v33->m_image.m_base);
    v34 = R_RT_Handle::GetSurface(&v51);
    textures = (GfxTexture *)R_Texture_GetResident(v34->m_image.m_base.textureId);
    R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    v35 = R_RT_Handle::GetSurface(&v52);
    textures = (GfxTexture *)R_Texture_GetResident(v35->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
    R_SetComputeShader(computeState, rgp.reProjClipToFloatZ);
    R_Dispatch(computeState, ((unsigned int)v33->m_image.m_base.width + 7) >> 3, ((unsigned int)v33->m_image.m_base.height + 7) >> 3, 1u);
    v36 = R_RT_Handle::GetSurface(&v54);
    v37 = R_Texture_GetResident(v36->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v37, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v38 = R_RT_Handle::GetSurface(&result);
    v39 = R_Texture_GetResident(v38->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v39, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(computeState);
    R_ProfEndNamedEvent(computeState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+60h+var_E0.m_surfaceID]
      vmovups ymmword ptr [r14+3380h], ymm0
      vmovups ymm0, [rbp+60h+var_60]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+60h+result.m_surfaceID]
        vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&result);
    }
    else if ( v54.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousFloatZ.baseclass_0.m_surfaceID
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+60h+result.m_surfaceID]
        vmovups ymmword ptr [rbp+60h+result.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&result);
    }
    else if ( s_previousFloatZ.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousFloatZ.m_surfaceID = 0;
    s_previousFloatZ.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousFloatZ.baseclass_0.m_tracking.m_name, xmm0 }
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

void __fastcall RB_ReProjFloatZ_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, __int64 a3, double _XMM3_8)
{
  const char *v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  __int64 clientIndex; 
  GfxCmdBufContext v31; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 

  __asm { vmovaps [rsp+140h+var_30], xmm6 }
  _R15 = gfxContext;
  _RSI = viewInfo;
  if ( !R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_floatZFullRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 707, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_floatZFullRt)", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_floatZFullRt") )
    __debugbreak();
  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    v8 = "!s_previousFloatZ.IsValid()";
    v9 = 708;
    v10 = "(!s_previousFloatZ.IsValid())";
    v11 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp";
  }
  else
  {
    if ( s_previousFloatZ.m_tracking.m_allocCounter == s_previousFloatZ.m_surfaceID )
      goto LABEL_10;
    v8 = "!this->m_tracking.m_allocCounter";
    v9 = 100;
    v10 = "(!this->m_tracking.m_allocCounter)";
    v11 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h";
  }
  if ( CoreAssert_Handler(v11, v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_10:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+3340h]
    vmovups ymmword ptr cs:s_previousFloatZ.baseclass_0.m_surfaceID, ymm0
  }
  if ( R_RT_Handle::IsValid(&_RSI->sceneRtInput.m_reProjFloatZ) )
    R_RT_Handle::GetSurface(&_RSI->sceneRtInput.m_reProjFloatZ);
  if ( R_RT_Handle::IsValid(&_RSI->sceneRtInput.m_reProjFloatZ) )
    R_RT_Handle::GetSurface(&_RSI->sceneRtInput.m_reProjFloatZ);
  __asm
  {
    vmovups ymm1, ymmword ptr [rsi+0A0h]
    vmovups ymm0, ymmword ptr [rsi+80h]
    vmovss  xmm6, cs:__real@3f800000
    vmovups ymmword ptr [rbp+40h+mat+20h], ymm1
    vmovss  dword ptr [rbp+40h+mat+38h], xmm6
    vmovups ymmword ptr [rbp+40h+mat], ymm0
  }
  MatrixInverse44Aligned(&mat, &dst);
  clientIndex = _RSI->clientIndex;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm6, xmm0
    vmulss  xmm0, xmm1, cs:__real@40000000
    vmovss  dword ptr [rsp+140h+in1], xmm0
    vsubss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rsp+140h+in1+30h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm6, xmm0
    vmulss  xmm0, xmm1, cs:__real@40000000
    vsubss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rsp+140h+in1+34h], xmm1
    vmovss  dword ptr [rsp+140h+in1+10h], xmm3
    vmovss  dword ptr [rsp+140h+in1+20h], xmm3
    vmovss  dword ptr [rsp+140h+in1+4], xmm3
    vmovss  dword ptr [rsp+140h+in1+14h], xmm0
    vmovss  dword ptr [rsp+140h+in1+24h], xmm3
    vmovss  dword ptr [rsp+140h+in1+8], xmm3
    vmovss  dword ptr [rsp+140h+in1+18h], xmm3
    vmovss  dword ptr [rsp+140h+in1+28h], xmm6
    vmovss  dword ptr [rsp+140h+in1+38h], xmm3
    vmovss  dword ptr [rsp+140h+in1+0Ch], xmm3
    vmovss  dword ptr [rsp+140h+in1+1Ch], xmm3
    vmovss  dword ptr [rsp+140h+in1+2Ch], xmm3
    vmovss  dword ptr [rsp+140h+in1+3Ch], xmm6
  }
  MatrixMultiply44Aligned(&in1, &dst, &s_invPrevViewProjectionMatrix[clientIndex].m);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+3380h]
    vmovups xmm1, xmmword ptr [r15]
    vmovups ymmword ptr [rsp+140h+in1], ymm0
    vmovups [rsp+140h+var_110], xmm1
  }
  R_RT_Destroy(&v31, (R_RT_ColorHandle *)&in1);
  _RSI->sceneRtInput.m_reProjFloatZ.m_surfaceID = 0;
  _RSI->sceneRtInput.m_reProjFloatZ.m_tracking.m_allocCounter = 0;
  _RSI->sceneRtInput.m_reProjFloatZ.m_tracking.m_name = NULL;
  _RSI->sceneRtInput.m_reProjFloatZ.m_tracking.m_location = NULL;
  __asm { vmovaps xmm6, [rsp+140h+var_30] }
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
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  const R_RT_Surface *v14; 
  int height; 
  const R_RT_Surface *v16; 
  int width; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
  GfxTexture *textures; 

  state = context->state;
  _R14 = (R_RT_ColorHandle *)compactFmaskRtHandle;
  _RBX = srcAlphaRt;
  _RDI = srcColorRt;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  R_GfxComputeWaitForGraphics(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v19, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+88h+var_38.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm1
  }
  R_Resolve_SetConstants(GfxComputeCmdBufState, _R14, 0);
  R_SetComputeShader(GfxComputeCmdBufState, rgp.resolveCompactFmask);
  Surface = R_RT_Handle::GetSurface(&v19);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(GfxComputeCmdBufState, 1, 1, (const GfxTexture *const *)&textures);
  v13 = R_RT_Handle::GetSurface(&v20);
  textures = (GfxTexture *)R_Texture_GetResident(v13->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(GfxComputeCmdBufState, 2, 1, (const GfxTexture *const *)&textures);
  v14 = R_RT_Handle::GetSurface(_R14);
  textures = (GfxTexture *)R_Texture_GetResident(v14->m_image.m_base.textureId);
  R_SetComputeRWTextures(GfxComputeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
  height = R_RT_Handle::GetSurface(_R14)->m_image.m_base.height;
  v16 = R_RT_Handle::GetSurface(_R14);
  width = v16->m_image.m_base.width;
  if ( (!v16->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(GfxComputeCmdBufState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rsp+88h+var_38.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v20, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  unsigned int v21; 
  const R_RT_Surface *Surface; 
  const dvar_t *v23; 
  unsigned int v24; 
  const dvar_t *v25; 
  bool v26; 
  R_RT_Flags rtFlags; 
  bool v32; 
  bool v36; 
  unsigned __int16 v37; 
  bool v41; 
  unsigned __int16 v43; 
  bool v47; 
  __int64 v51; 
  const char *v66; 
  const dvar_t *v72; 
  __int64 v73; 
  unsigned int v74; 
  R_RT_Flags v75; 
  const dvar_t *v76; 
  R_RT_Flags v77; 
  unsigned int v78; 
  unsigned int v79; 
  bool v83; 
  const dvar_t *v89; 
  const dvar_t *v90; 
  bool v94; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  ComputeCmdBufState *v100; 
  const R_RT_Surface *v103; 
  const R_RT_Surface *v104; 
  int v105; 
  const R_RT_Surface *v106; 
  int v107; 
  unsigned int v123; 
  const R_RT_Surface *v124; 
  R_RT_Handle v141; 
  R_RT_Handle v142; 
  R_RT_Handle v143; 
  GfxCmdBufContext *v144; 
  unsigned int v145; 
  R_RT_ColorHandle *v146; 
  R_RT_ColorHandle *v147; 
  R_RT_ColorHandle *v148; 
  R_RT_ColorHandle *v149; 
  R_RT_Handle v150; 
  R_RT_ColorHandle v151; 
  R_RT_ColorHandle v152; 
  char v153[136]; 
  const char *v155; 
  R_RT_ColorHandle data; 
  R_RT_Handle v157; 
  R_RT_Handle v158; 
  R_RT_Group v159; 
  R_RT_Group v160; 
  R_RT_Handle result; 

  _RSI = context;
  v144 = context;
  _R15 = srcAlphaRt;
  v149 = dstAlphaRt;
  v147 = dstColorRt;
  _R12 = srcColorRt;
  v146 = srcAlphaRt;
  v148 = srcColorRt;
  width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  if ( 2 * width != R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(_R12)->m_image.m_base.height, 2 * height != R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 629, ASSERT_TYPE_ASSERT, "(srcColorRt.GetWidth() * 2 == dstColorRt.GetWidth() && srcColorRt.GetHeight() * 2 == dstColorRt.GetHeight())", (const char *)&queryFormat, "srcColorRt.GetWidth() * 2 == dstColorRt.GetWidth() && srcColorRt.GetHeight() * 2 == dstColorRt.GetHeight()") )
      __debugbreak();
  }
  v13 = R_RT_Handle::GetSurface(_R12)->m_image.m_base.width;
  if ( v13 != R_RT_Handle::GetSurface(_R15)->m_image.m_base.width || (v14 = R_RT_Handle::GetSurface(_R12)->m_image.m_base.height, v14 != R_RT_Handle::GetSurface(_R15)->m_image.m_base.height) )
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
  __asm
  {
    vmovups ymm0, ymmword ptr [r12]
    vmovups xmm1, xmmword ptr [rsi]
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+3D0h+data], xmm1
  }
  R_HW_DecompressFMask((GfxCmdBufContext *)&data, (R_RT_ColorHandle *)&v141, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups xmm1, xmmword ptr [rsi]
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+3D0h+data], xmm1
  }
  R_HW_DecompressFMask((GfxCmdBufContext *)&data, (R_RT_ColorHandle *)&v141, 1);
  v21 = R_RT_Handle::GetSurface(_R12)->m_image.m_base.width;
  *(_DWORD *)&data.m_surfaceID = v21;
  Surface = R_RT_Handle::GetSurface(_R12);
  v23 = r_deviceDebug;
  v24 = Surface->m_image.m_base.height;
  v145 = v24;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
    goto LABEL_21;
  v25 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  v26 = !v25->current.enabled;
  rtFlags = R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( v26 )
LABEL_21:
    rtFlags = R_RT_Flag_RTView;
  _RDI = 0i64;
  _RAX = R_RT_CreateInternal(&result, v21, v24, v21, v24, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SAMPLE_MSAA_COLOR", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(646)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v141);
    if ( (R_RT_Handle::GetSurface(&v141)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID] }
      if ( v32 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+3D0h+var_250.m_surfaceID], ymm0 }
  _RAX = R_RT_CreateInternal(&result, v21, v24, v21, v24, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SAMPLE_MSAA_ALPHA", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(647)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v141);
    if ( (R_RT_Handle::GetSurface(&v141)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID] }
      if ( v36 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+3D0h+var_270.m_surfaceID], ymm0 }
  R_RT_Handle::ClearAuxDirty(&v158);
  R_RT_Handle::ClearAuxDirty(&v157);
  if ( (v158.m_surfaceID & 0x7FFF) != 0 )
    v37 = v158.m_surfaceID & 0x7FFF | 0x8000;
  else
    v37 = 0;
  v141.m_surfaceID = v37;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+3D0h+var_250.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+3D0h+var_250.m_tracking.m_location]
    vmovups xmmword ptr [rbp+3D0h+var_450.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+3D0h+var_450.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
  }
  if ( v37 )
  {
    R_RT_Handle::GetSurface(&v141);
    if ( (R_RT_Handle::GetSurface(&v141)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_48;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !v158.m_tracking.m_allocCounter )
      goto LABEL_48;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v41 )
    __debugbreak();
LABEL_48:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
  }
  if ( (v157.m_surfaceID & 0x7FFF) != 0 )
    v43 = v157.m_surfaceID & 0x7FFF | 0x8000;
  else
    v43 = 0;
  v141.m_surfaceID = v43;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+3D0h+var_270.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+3D0h+var_270.m_tracking.m_location]
    vmovups xmmword ptr [rbp+3D0h+var_450.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+3D0h+var_450.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
  }
  if ( v43 )
  {
    R_RT_Handle::GetSurface(&v141);
    if ( (R_RT_Handle::GetSurface(&v141)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_58;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !v157.m_tracking.m_allocCounter )
      goto LABEL_58;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v47 )
    __debugbreak();
LABEL_58:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID]
    vmovups [rbp+3D0h+var_70], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+3D0h+var_450.m_tracking.m_name], xmm0
  }
  v141.m_surfaceID = 0;
  v141.m_tracking.m_allocCounter = 0;
  v153[0] = 2;
  _RSI = 0i64;
  v51 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+rsi+3D0h+result.m_surfaceID]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v143);
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
      vmovups ymm0, ymmword ptr [rbp+rsi+3D0h+result.m_surfaceID]
      vmovups [rbp+rsi+3D0h+var_358], ymm0
    }
    _RSI += 32i64;
    --v51;
  }
  while ( v51 );
  __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
  _R12 = v148;
  _RCX = &v160;
  __asm { vmovups [rbp+3D0h+var_2D8], ymm0 }
  _RAX = v153;
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
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v66 = v155;
  __asm
  {
    vmovups ymmword ptr [rcx+0A0h], ymm1
    vmovups ymm1, ymmword ptr [r12]
  }
  v160.m_vrsRt.m_tracking.m_location = v66;
  _RAX = v146;
  __asm
  {
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm1
    vmovups ymm0, ymmword ptr [rax]
  }
  _RAX = v144;
  __asm
  {
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm0
  }
  RB_Resolve_CopySampleFromMSAA((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&v143, (R_RT_ColorHandle *)&v141, &v160);
  v72 = r_deviceDebug;
  v73 = (unsigned int)(unsigned __int8)v51 + 2;
  v74 = v145;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  v75 = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( v72->current.enabled )
    goto LABEL_75;
  v76 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  v77 = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v76->current.enabled )
LABEL_75:
    v77 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v78 = v74 >> 2;
  v79 = *(_DWORD *)&data.m_surfaceID >> 2;
  _RAX = R_RT_CreateInternal(&result, *(_DWORD *)&data.m_surfaceID >> 2, v78, *(_DWORD *)&data.m_surfaceID >> 2, v78, 1u, 1u, 1u, g_R_RT_renderTargetFmts[42], v77, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_COMPACT_FMASK", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(657)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v141);
    if ( (R_RT_Handle::GetSurface(&v141)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID] }
      if ( v83 )
        __debugbreak();
    }
  }
  _RAX = v146;
  __asm
  {
    vmovups ymm1, ymmword ptr [r12]
    vmovups ymmword ptr [rbp+3D0h+var_450.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
  }
  _RAX = v144;
  __asm
  {
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    vmovups [rbp+3D0h+data], ymm1
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm0
  }
  RB_Resolve_CompactFmask((GfxCmdBufContext *)&v142, &data, (R_RT_ColorHandle *)&v143, (const R_RT_ColorHandle *)&v141);
  v89 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v89);
  if ( v89->current.enabled )
    goto LABEL_92;
  v90 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  if ( !v90->current.enabled )
LABEL_92:
    v75 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  _RAX = R_RT_CreateInternal(&result, v79, v78, v79, v78, 1u, 1u, 1u, g_R_RT_renderTargetFmts[42], v75, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DILTATED_COMPACT_FMASK", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(662)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+3D0h+var_430.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v142);
    if ( (R_RT_Handle::GetSurface(&v142)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+3D0h+var_430.m_surfaceID]
        vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+3D0h+var_430.m_surfaceID]
        vmovups ymmword ptr [rbp+3D0h+var_410.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID] }
      if ( v94 )
        __debugbreak();
    }
  }
  _RAX = v144;
  __asm
  {
    vmovups ymmword ptr [rbp+3D0h+var_3C0.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rax]
    vpextrq rsi, xmm0, 1
  }
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(_RSI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+var_430.m_surfaceID], ymm0
  }
  v100 = GfxComputeCmdBufState;
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v142, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_RSI);
  R_GfxComputeWaitForGraphics(_RSI);
  *(_DWORD *)&data.m_surfaceID = R_RT_Handle::GetSurface(&v141)->m_image.m_base.width;
  *((_DWORD *)&data.m_surfaceID + 1) = R_RT_Handle::GetSurface(&v141)->m_image.m_base.height;
  _RAX = R_VRSGetPixelsToSamplesUint((base_vec4_t<unsigned int> *)&v142, 0, rg.halfResEmissive);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+3D0h+data+10h], xmm0
  }
  R_UploadAndSetComputeConstants(v100, 0, &data, 0x20u, NULL);
  R_SetComputeShader(v100, rgp.resolveCompactFmaskDilate);
  v103 = R_RT_Handle::GetSurface(&v141);
  *(_QWORD *)&data.m_surfaceID = R_Texture_GetResident(v103->m_image.m_base.textureId);
  R_SetComputeTextures(v100, 1, 1, (const GfxTexture *const *)&data);
  v104 = R_RT_Handle::GetSurface(&v150);
  *(_QWORD *)&data.m_surfaceID = R_Texture_GetResident(v104->m_image.m_base.textureId);
  R_SetComputeRWTextures(v100, 0, 1, (const GfxTexture *const *)&data);
  v105 = R_RT_Handle::GetSurface(&v141)->m_image.m_base.height;
  v106 = R_RT_Handle::GetSurface(&v141);
  v107 = v106->m_image.m_base.width;
  if ( (!v106->m_image.m_base.width || !v105) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(v100, (unsigned int)(v107 + 7) >> 3, (unsigned int)(v105 + 7) >> 3, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+var_3C0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v150, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_RSI);
  R_ComputeWaitForCompute(v100, PIPE_FLUSH_PARTIAL);
  _RSI = v147;
  _RAX = v149;
  v142.m_surfaceID = 0;
  v142.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymm1, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+3D0h+var_430.m_tracking.m_name], xmm0
    vmovups [rbp+3D0h+var_70], ymm1
  }
  v159.m_colorRtCount = v73;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+rdi+3D0h+result.m_surfaceID]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+3D0h+var_3C0.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v150);
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
      vmovups ymm0, ymmword ptr [rbp+rdi+3D0h+result.m_surfaceID]
      vmovups [rbp+rdi+3D0h+var_228], ymm0
    }
    _RDI += 32i64;
    --v73;
  }
  while ( v73 );
  __asm { vmovups ymm0, ymmword ptr [rbp+3D0h+var_430.m_surfaceID] }
  _RDI = &v144->source;
  __asm
  {
    vmovups [rbp+3D0h+var_1A8], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm0
  }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v142, &v159, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(671)");
  _RSI = v147;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+3D0h+var_430.m_surfaceID], ymm0
  }
  v123 = R_RT_Handle::GetSurface(&v142)->m_image.m_base.height;
  v124 = R_RT_Handle::GetSurface(&v142);
  R_SetRenderTargetSize(*_RDI, v124->m_image.m_base.width, v123, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_270.m_surfaceID]
    vmovups ymm1, ymmword ptr [rbp+3D0h+var_250.m_surfaceID]
  }
  _RAX = v146;
  _R12 = v148;
  __asm
  {
    vmovups ymmword ptr [rbp+3D0h+var_3C0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID]
    vmovups [rbp+3D0h+var_3A0], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+3D0h+data], ymm1
    vmovups ymm1, ymmword ptr [r12]
    vmovups [rbp+3D0h+var_380], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm1
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm0
  }
  R_Resolve_CopyFrom4xMS((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&result, &v152, &v151, &data, (R_RT_ColorHandle *)&v150);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_410.m_surfaceID]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_450.m_surfaceID]
    vmovups xmm1, xmmword ptr [rdi]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_270.m_surfaceID]
    vmovups xmm1, xmmword ptr [rdi]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+3D0h+var_250.m_surfaceID]
    vmovups xmm1, xmmword ptr [rdi]
    vmovups ymmword ptr [rbp+3D0h+result.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+3D0h+var_430.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v142, (R_RT_ColorHandle *)&result);
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
  const char *v14; 
  int v15; 
  const char *v16; 
  unsigned __int16 height; 
  const char *v24; 
  int v25; 
  const char *v26; 
  bool v29; 
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v44; 
  __int64 v45; 
  GfxCmdBufState *v47; 
  R_RT_Handle result; 
  R_RT_Handle v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R12 = context;
  _R15 = srcColorRt;
  _RSI = (R_RT_Group *)dstRt;
  _R13 = srcAlphaRt;
  width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  if ( _RSI->m_colorRtCount )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+8]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result);
      if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v14 = "!colorRt.IsValid() || colorRt.IsColor()";
        v15 = 396;
        v16 = "(!colorRt.IsValid() || colorRt.IsColor())";
        goto LABEL_11;
      }
      goto LABEL_13;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+88h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result);
      if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v14 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v15 = 403;
        v16 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_11:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v15, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v14) )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
          __debugbreak();
          goto LABEL_14;
        }
      }
LABEL_13:
      __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
      goto LABEL_14;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    __asm { vmovups ymm0, ymmword ptr [rbp+var_30.m_surfaceID] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_14:
  __asm { vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0 }
  _RAX = &v51;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
  }
  if ( width == R_RT_Handle::GetSurface(&v51)->m_image.m_base.width )
  {
    height = R_RT_Handle::GetSurface(_R15)->m_image.m_base.height;
    if ( _RSI->m_colorRtCount )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+8]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&result);
        if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v24 = "!colorRt.IsValid() || colorRt.IsColor()";
          v25 = 396;
          v26 = "(!colorRt.IsValid() || colorRt.IsColor())";
          goto LABEL_25;
        }
        goto LABEL_27;
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+88h]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&result);
        if ( (R_RT_Handle::GetSurface(&result)->m_rtFlagsInternal & 0x10) == 0 )
        {
          v24 = "!depthRt.IsValid() || depthRt.IsDepth()";
          v25 = 403;
          v26 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_25:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v25, ASSERT_TYPE_ASSERT, v26, (const char *)&queryFormat, v24) )
          {
            __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
            __debugbreak();
            goto LABEL_28;
          }
        }
LABEL_27:
        __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
        goto LABEL_28;
      }
    }
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+var_30.m_surfaceID] }
      if ( v29 )
        __debugbreak();
    }
LABEL_28:
    __asm { vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0 }
    _RAX = &v51;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
    }
    if ( height == R_RT_Handle::GetSurface(&v51)->m_image.m_base.height )
      goto LABEL_31;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 499, ASSERT_TYPE_ASSERT, "(srcColorRt.GetWidth() == dstRt.GetAnyRt().GetWidth() && srcColorRt.GetHeight() == dstRt.GetAnyRt().GetHeight())", (const char *)&queryFormat, "srcColorRt.GetWidth() == dstRt.GetAnyRt().GetWidth() && srcColorRt.GetHeight() == dstRt.GetAnyRt().GetHeight()") )
    __debugbreak();
LABEL_31:
  __asm { vmovups ymm0, ymmword ptr [rsi+8] }
  state = _R12->state;
  __asm { vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v51, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+28h]
    vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v51, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmmword ptr [rbp+result.m_surfaceID], xmm0
  }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&result, _RSI, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(507)");
  _RAX = R_RT_Group::GetAnyRt(_RSI, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
  }
  LODWORD(state) = R_RT_Handle::GetSurface(&v51)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v51);
  R_SetRenderTargetSize(_R12->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups ymm1, ymmword ptr [r15]
    vmovups xmm6, xmmword ptr [r12]
    vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm1
  }
  if ( ((R_RT_Handle::GetSurface(&v51)->m_rtFlags & 0x4000) == 0 || (R_RT_Handle::GetSurface(&result)->m_rtFlags & 0x4000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 488, ASSERT_TYPE_ASSERT, "(srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled())", (const char *)&queryFormat, "srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled()") )
    __debugbreak();
  __asm { vmovq   rbx, xmm6 }
  p_m_image = &R_RT_Handle::GetSurface(&v51)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = p_m_image;
  v44 = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v45 = _RBX + 1792;
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(v45 + 6328) = v44;
  __asm { vmovdqa xmmword ptr [rbp+result.m_surfaceID], xmm6 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&result, rgp.copySampleFromMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(492)");
  __asm { vmovups ymm0, ymmword ptr [rsi+8] }
  v47 = _R12->state;
  __asm { vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(v47, (R_RT_ColorHandle *)&v51, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+28h]
    vmovups ymmword ptr [rbp+var_30.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(v47, (R_RT_ColorHandle *)&v51, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm { vmovaps xmm6, [rsp+80h+var_10] }
  R_HW_FlushResourceTransitions(v47);
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
  R_RT_Handle v3; 

  if ( s_previousFloatZ.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousFloatZ);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousFloatZ.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousFloatZ.m_surfaceID = 0;
    s_previousFloatZ.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousFloatZ.baseclass_0.m_tracking.m_name, xmm0 }
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

void __fastcall R_ReProjFloatZ_SetConstantBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *outReProjFloatZImage, double _XMM3_8)
{
  __int128 data; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+0A0h]
    vmovss  xmm1, cs:__real@3f800000
    vmovups ymm4, ymmword ptr [rdx+80h]
    vmovups ymmword ptr [r11-38h], ymm0
    vmovss  dword ptr [r11-20h], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
  }
  _R8 = s_invPrevViewProjectionMatrix;
  __asm
  {
    vdivss  xmm0, xmm1, xmm2
    vmovss  [rsp+178h+var_130], xmm0
    vmovups ymm0, ymmword ptr [r11-38h]
    vmovups [rsp+178h+var_E8], ymm0
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax
  }
  _RAX = (__int64)(int)viewInfo->clientIndex << 6;
  __asm
  {
    vdivss  xmm1, xmm1, xmm3
    vmovss  [rsp+178h+var_12C], xmm1
    vmovss  [rsp+178h+var_138], xmm2
    vmovups ymm0, ymmword ptr [rax+r8]
    vmovups ymm1, ymmword ptr [rax+r8+20h]
    vmovups [rsp+178h+var_C8], ymm0
    vmovups xmm0, xmmword ptr [rdx+140h]
    vmovaps [rsp+178h+data], xmm0
    vmovss  [rsp+178h+var_134], xmm3
    vmovups [rsp+178h+var_108], ymm4
    vmovups [rsp+178h+var_A8], ymm1
  }
  R_UploadAndSetComputeConstants(computeState, 0, &data, 0xF0u, NULL);
}

/*
==============
R_ReProjFloatZ_UpdatePrevMatrix
==============
*/

void __fastcall R_ReProjFloatZ_UpdatePrevMatrix(const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight, double _XMM3_8)
{
  const GfxViewInfo *v10; 
  __int64 clientIndex; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> in2; 
  char v28; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups ymm1, ymmword ptr [rcx+0A0h]
    vmovss  xmm6, cs:__real@3f800000
  }
  v10 = viewInfo;
  __asm
  {
    vmovups ymmword ptr [rsp+108h+mat], ymm0
    vmovups ymmword ptr [rsp+108h+mat+20h], ymm1
    vmovss  dword ptr [r11-70h], xmm6
  }
  MatrixInverse44Aligned(&mat, &in2);
  clientIndex = v10->clientIndex;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
    vdivss  xmm1, xmm6, xmm0
    vmulss  xmm0, xmm1, cs:__real@40000000
    vmovss  dword ptr [rsp+108h+in1], xmm0
    vsubss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rsp+108h+in1+30h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
    vdivss  xmm1, xmm6, xmm0
    vmulss  xmm0, xmm1, cs:__real@40000000
    vsubss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rsp+108h+in1+34h], xmm1
    vmovss  dword ptr [rsp+108h+in1+10h], xmm3
    vmovss  dword ptr [rsp+108h+in1+20h], xmm3
    vmovss  dword ptr [rsp+108h+in1+4], xmm3
    vmovss  dword ptr [rsp+108h+in1+14h], xmm0
    vmovss  dword ptr [rsp+108h+in1+24h], xmm3
    vmovss  dword ptr [rsp+108h+in1+8], xmm3
    vmovss  dword ptr [rsp+108h+in1+18h], xmm3
    vmovss  dword ptr [rsp+108h+in1+28h], xmm6
    vmovss  dword ptr [rsp+108h+in1+38h], xmm3
    vmovss  dword ptr [rsp+108h+in1+0Ch], xmm3
    vmovss  dword ptr [rsp+108h+in1+1Ch], xmm3
    vmovss  dword ptr [rsp+108h+in1+2Ch], xmm3
    vmovss  dword ptr [rsp+108h+in1+3Ch], xmm6
  }
  MatrixMultiply44Aligned(&in1, &in2, &s_invPrevViewProjectionMatrix[clientIndex].m);
  _R11 = &v28;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Handle result; 

  state = context->state;
  _RBP = context;
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
    LODWORD(v13) = height;
    LODWORD(v12) = width;
    LODWORD(v11) = image->height;
    LODWORD(v10) = image->width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 67, ASSERT_TYPE_ASSERT, "(image->height == rtHeight)", "%s\n\timage->name=%s, image=%dx%d, rt=%dx%d", "image->height == rtHeight", image->name, v10, v11, v12, v13) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rsp+88h+result.m_surfaceID], xmm0
  }
  R_HW_Resolve((GfxCmdBufContext *)&result, image);
}

/*
==============
R_ResolveDepth
==============
*/
void R_ResolveDepth(GfxCmdBufContext *context)
{
  GfxCmdBufContext v2; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  R_HW_ResolveDepth(&v2);
}

/*
==============
R_ResolveDepthToState
==============
*/
void R_ResolveDepthToState(GfxCmdBufContext *context, D3D12_RESOURCE_STATES finalState)
{
  GfxCmdBufContext v3; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  R_HW_ResolveDepthToState(&v3, finalState);
}

/*
==============
R_ResolveFloatZDownsample
==============
*/
void R_ResolveFloatZDownsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_DepthHandle *srcDepthRt, R_RT_ColorHandle *dstFloatZFullRt, R_RT_ColorHandle *dstFloatZHalfRt, R_RT_ColorHandle *dstFloatZQuarterRt, R_RT_ColorHandle *dstFloatZEighthRt, R_RT_ColorHandle *dstFloatZEighthMipMinRt, R_RT_DepthHandle *dstZMSAARt, R_RT_ColorHandle *dstStencilRt, const GfxWrappedRWBuffer *dstStencilMaskBuffer)
{
  const GfxBackEndData *v16; 
  ID3D12Resource **p_buffer; 
  BOOL IsValid; 
  unsigned int v19; 
  __int64 v20; 
  int width; 
  const R_RT_Surface *Surface; 
  int height; 
  char *v27; 
  unsigned int v34; 
  __int64 v35; 
  unsigned int unsignedInt; 
  __int64 v37; 
  __int64 v38; 
  base_vec2_t<int> v39; 
  unsigned int v40; 
  __int64 v41; 
  base_vec2_t<int> v42; 
  unsigned int v43; 
  ComputeCmdBufState *v49; 
  const R_RT_Surface *v51; 
  const R_RT_Surface *v53; 
  const R_RT_Surface *v54; 
  const R_RT_Surface *v55; 
  const R_RT_Surface *v56; 
  const R_RT_Surface *v57; 
  const R_RT_Surface *v58; 
  const R_RT_Surface *v59; 
  __int64 v62; 
  __int64 v63; 
  ComputeCmdBufState *state; 
  unsigned int yCount; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v69; 
  R_RT_Handle *v70; 
  R_RT_Handle *v71; 
  R_RT_Handle *v72; 
  R_RT_Handle *v73; 
  GfxShaderBufferRWView *v74; 
  R_RT_Handle *v75; 
  base_vec4_t<unsigned int> result[2]; 
  R_RT_DepthHandle v77; 
  GfxShaderBufferView v78; 
  __int128 data; 
  int v85; 
  unsigned int v86; 
  unsigned int v87[38]; 
  char v88; 

  v69 = dstFloatZHalfRt;
  _R13 = viewInfo;
  v70 = dstFloatZQuarterRt;
  v71 = dstFloatZEighthRt;
  v72 = dstFloatZEighthMipMinRt;
  v73 = dstStencilRt;
  v16 = computeState->data;
  state = computeState;
  Resident = dstFloatZFullRt;
  views = (GfxShaderBufferView *)srcDepthRt;
  p_buffer = &v16->globalSceneConstantBuffer->buffer;
  v75 = dstZMSAARt;
  v74 = (GfxShaderBufferRWView *)dstStencilMaskBuffer;
  buffers = *p_buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  IsValid = R_RT_Handle::IsValid(dstZMSAARt);
  v19 = IsValid | 4;
  if ( (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x4000) == 0 )
    v19 = IsValid;
  if ( R_RT_Handle::IsValid(dstZMSAARt) && (R_RT_Handle::GetSurface(srcDepthRt)->m_rtFlags & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 196, ASSERT_TYPE_ASSERT, "(!(dstZMSAARt && srcDepthRt.IsMultisampled()))", "%s\n\tInput MSAA and output MSAA is not supported. What would be the reason?", "!(dstZMSAARt && srcDepthRt.IsMultisampled())") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
    v19 |= 2u;
  v20 = v19 | 8;
  if ( !dstStencilMaskBuffer )
    v20 = v19;
  R_SetComputeShader(computeState, rgp.resolveFloatZDownsampleComputeShader[v20]);
  width = R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(srcDepthRt);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+140h]
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
  }
  height = Surface->m_image.m_base.height;
  v27 = &v88;
  LODWORD(buffers) = (unsigned int)(width + 7) >> 3;
  __asm
  {
    vcvtsi2ss xmm2, xmm2, rbx
    vmovaps [rbp+130h+data], xmm0
    vdivss  xmm0, xmm1, xmm2
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rcx
  }
  yCount = (unsigned int)(height + 7) >> 3;
  __asm
  {
    vmovss  [rbp+130h+var_128], xmm0
    vdivss  xmm1, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
  }
  v85 = 0;
  v34 = 0;
  v87[4] = 0;
  __asm
  {
    vmovss  [rbp+130h+var_130], xmm2
    vmovss  [rbp+130h+var_12C], xmm3
    vmovss  [rbp+130h+var_124], xmm1
    vmovss  [rbp+130h+var_120], xmm0
  }
  do
  {
    v35 = 2 * v34;
    unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( unsignedInt == -1 )
      unsignedInt = _R13->input.data->frameCount & 3;
    if ( (unsigned int)v35 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = 2 * v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    if ( unsignedInt >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    v37 = s_VRSSampleToPixelOrdered[unsignedInt][v35];
    if ( (unsigned int)v37 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    v38 = (unsigned int)(v35 + 1);
    v39 = s_VRSSamplePosition[v37];
    *(base_vec2_t<int> *)result[0].v = v39;
    v40 = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( v40 == -1 )
      v40 = _R13->input.data->frameCount & 3;
    if ( (unsigned int)v38 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = v38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    if ( v40 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    v41 = s_VRSSampleToPixelOrdered[v40][v38];
    if ( (unsigned int)v41 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(v62) = v41;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    v42 = s_VRSSamplePosition[v41];
    v43 = result[0].v[1];
    ++v34;
    *((_DWORD *)v27 - 1) = v39.v[0];
    *(_DWORD *)v27 = v43;
    *(base_vec2_t<int> *)(v27 + 4) = v42;
    v27 += 16;
  }
  while ( v34 < 2 );
  _RAX = R_VRSGetPixelsToSamplesUint(result, _R13->input.data->frameCount, rg.vrsEmissiveOnly);
  _RSI = views;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups ymm1, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+130h+result], ymm1
    vmovups [rbp+130h+var_60], xmm0
  }
  R_RT_GetHtileInfo((R_RT_DepthHandle *)result, &v86, v87);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+130h+result], ymm0
  }
  R_RT_GetHtileView(&v78, (R_RT_DepthHandle *)result);
  v49 = state;
  views = &v78;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+130h+result], ymm0
  }
  R_RT_BindCompressedDepthComputeView(state, (R_RT_DepthHandle *)result, 0);
  v51 = R_RT_Handle::GetSurface((R_RT_Handle *)_RSI);
  if ( (v51->m_rtFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 414, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_Stencil)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_Stencil") )
    __debugbreak();
  if ( (v51->m_rtFlagsInternal & 0x2000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 415, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None") )
    __debugbreak();
  state = (ComputeCmdBufState *)R_Texture_GetResident(v51->m_color.m_fmaskImage.m_base.textureId);
  R_SetComputeTextures(v49, 1, 1, (const GfxTexture *const *)&state);
  R_UploadAndSetComputeConstants(v49, 0, &data, 0xF0u, NULL);
  _RBX = v75;
  if ( R_RT_Handle::IsValid(v75) )
  {
    v53 = R_RT_Handle::GetSurface(_RBX);
    if ( (v53->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 474, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
      __debugbreak();
    if ( (v53->m_rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 475, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle)", (const char *)&queryFormat, "( surface->m_rtFlags & R_RT_Flag_MS_4xSwizzle ) == R_RT_Flag_MS_4xSwizzle") )
      __debugbreak();
    if ( (v53->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 477, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_float4RWView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_float4RWView.IsNull()") )
      __debugbreak();
    state = (ComputeCmdBufState *)((char *)&v53->m_array + 1168);
    R_SetComputeTextureRWViews(v49, 7, 1, (const GfxShaderTextureRWView *const *)&state);
    _RBX = v75;
  }
  v54 = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v54->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 0, 1, (const GfxTexture *const *)&Resident);
  v55 = R_RT_Handle::GetSurface(v69);
  v69 = (R_RT_Handle *)R_Texture_GetResident(v55->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 1, 1, (const GfxTexture *const *)&v69);
  v56 = R_RT_Handle::GetSurface(v70);
  v70 = (R_RT_Handle *)R_Texture_GetResident(v56->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 2, 1, (const GfxTexture *const *)&v70);
  v57 = R_RT_Handle::GetSurface(v71);
  v71 = (R_RT_Handle *)R_Texture_GetResident(v57->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 3, 1, (const GfxTexture *const *)&v71);
  v58 = R_RT_Handle::GetSurface(v72);
  v72 = (R_RT_Handle *)R_Texture_GetResident(v58->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 4, 1, (const GfxTexture *const *)&v72);
  v59 = R_RT_Handle::GetSurface(v73);
  v73 = (R_RT_Handle *)R_Texture_GetResident(v59->m_image.m_base.textureId);
  R_SetComputeRWTextures(v49, 5, 1, (const GfxTexture *const *)&v73);
  if ( v74 )
  {
    v74 = (GfxShaderBufferRWView *)((char *)v74 + 32);
    R_SetComputeRWViewsWithCounters(v49, 6, 1, (const GfxShaderBufferRWView *const *)&v74, NULL);
  }
  R_Dispatch(v49, (unsigned int)buffers, yCount, 1u);
  if ( R_RT_Handle::IsValid(_RBX) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymm1, ymmword ptr [rsi]
      vmovups ymmword ptr [rbp+130h+result], ymm0
      vmovups [rbp+130h+var_170], ymm1
    }
    R_ResolveHiZDownsample(v49, &v77, (R_RT_DepthHandle *)result);
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
  signed int v14; 
  unsigned int v15; 
  unsigned __int16 v20; 
  bool v24; 
  bool v30; 
  unsigned __int16 v31; 
  bool v34; 
  int width; 
  const R_RT_Surface *Surface; 
  int v39; 
  int v40; 
  signed int v41; 
  int v42; 
  int v46; 
  int v47; 
  int v50; 
  bool v53; 
  const R_RT_Surface *v54; 
  const R_RT_Surface *v55; 
  unsigned int v56; 
  int v57; 
  ComputeCmdBufState *v58; 
  unsigned int v59; 
  unsigned int v60; 
  bool v67; 
  unsigned __int16 v68; 
  const char *v72; 
  int v73; 
  const char *v74; 
  const R_RT_Surface *v76; 
  bool v83; 
  unsigned __int16 v84; 
  const char *v87; 
  int v88; 
  const char *v89; 
  const R_RT_Surface *v91; 
  unsigned int v92; 
  ComputeCmdBufState *v93; 
  ComputeShader *floatZDownsampleBorderComputeShader; 
  const R_RT_Surface *v95; 
  const R_RT_Surface *v96; 
  unsigned int v97; 
  int v98; 
  int i; 
  bool v106; 
  unsigned __int16 v107; 
  const char *v111; 
  int v112; 
  const char *v113; 
  const R_RT_Surface *v115; 
  int v117; 
  bool v123; 
  unsigned __int16 v124; 
  const char *v127; 
  int v128; 
  const char *v129; 
  const R_RT_Surface *v131; 
  int v132; 
  bool v139; 
  unsigned __int16 v140; 
  const char *v143; 
  int v144; 
  const char *v145; 
  const R_RT_Surface *v147; 
  const R_RT_Surface *v148; 
  R_RT_Handle v149; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  R_RT_Handle v152; 
  unsigned int v153; 
  int v154; 
  int v155; 
  unsigned int v156; 
  unsigned int xCount; 
  ComputeCmdBufState *state; 
  unsigned int v159; 
  R_RT_ColorHandle *v160; 
  R_RT_ColorHandle *v161; 
  R_RT_Handle v162; 
  R_RT_Handle v163; 
  R_RT_Handle v164; 
  int data[8]; 

  state = computeState;
  v153 = mipStart;
  _R15 = floatZMinColorRt;
  v161 = floatZMinColorRt;
  _RBX = floatZMaxColorRt;
  v160 = floatZMaxColorRt;
  levelCount = R_RT_Handle::GetSurface(floatZMaxColorRt)->m_image.m_base.levelCount;
  if ( levelCount - R_RT_Handle::GetSurface(_R15)->m_image.m_base.levelCount != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 313, ASSERT_TYPE_ASSERT, "((resMipCount - floatZMinColorRt.GetMipCount()) == MAX_MIN_MIP_DIFFERENCE)", (const char *)&queryFormat, "(resMipCount - floatZMinColorRt.GetMipCount()) == MAX_MIN_MIP_DIFFERENCE") )
    __debugbreak();
  v159 = mipStart + 1;
  if ( mipStart + 1 >= levelCount )
    return;
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v14 = levelCount - mipStart - 1;
  __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
  if ( v14 > 4 )
    v14 = 4;
  v15 = v14 - onlyBorder;
  v156 = v15;
  _RAX = R_RT_GetViewInternal(&v162, &v164, 0, mipStart);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v149);
    if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v149.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v149.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
  v20 = _EBX & 0x7FFF;
  if ( v20 )
  {
    v163.m_surfaceID = v20;
  }
  else
  {
    v20 = 0;
    v163.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
    vmovups xmmword ptr [rbp+0C0h+var_B0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+0C0h+var_B0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
    vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
  }
  if ( v20 )
  {
    R_RT_Handle::GetSurface(&v149);
    if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
    }
  }
  else if ( (_DWORD)_RDI )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
    __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID] }
    if ( v24 )
      __debugbreak();
  }
  __asm { vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0 }
  if ( !onlyBorder )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r15]
      vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
    }
    _RAX = R_RT_GetViewInternal(&v162, &v164, 0, mipStart - 3);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   ebx, xmm0
      vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
    }
    if ( (_WORD)_EBX )
    {
      R_RT_Handle::GetSurface(&v149);
      if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
        LOWORD(_EBX) = v149.m_surfaceID;
        __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
        LOWORD(_EBX) = v149.m_surfaceID;
        __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rdi, xmm0, 2 }
      if ( (_DWORD)_RDI )
      {
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID] }
        if ( v30 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
    v31 = _EBX & 0x7FFF;
    if ( v31 )
    {
      v163.m_surfaceID = v31;
    }
    else
    {
      v31 = 0;
      v163.m_surfaceID = 0;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
      vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
      vmovups xmmword ptr [rbp+0C0h+var_B0.m_tracking.m_allocCounter], xmm0
      vmovsd  [rbp+0C0h+var_B0.m_tracking.m_location], xmm1
      vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
      vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
    }
    if ( v31 )
    {
      R_RT_Handle::GetSurface(&v163);
      if ( (R_RT_Handle::GetSurface(&v163)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_43:
        if ( v34 )
          __debugbreak();
      }
    }
    else if ( (_DWORD)_RDI )
    {
      v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      goto LABEL_43;
    }
    __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID] }
  }
  __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
  _RAX = &v164;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
  }
  width = R_RT_Handle::GetSurface(&v152)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v152);
  v39 = (unsigned int)(width + 15) >> 4;
  v154 = v39;
  v40 = Surface->m_image.m_base.height & 0xF;
  v41 = ((unsigned int)Surface->m_image.m_base.height + 15) >> 4;
  v155 = v41;
  if ( (width & 0xF) != 0 )
  {
    v39 -= 2;
    if ( v39 < 0 )
      v39 = 0;
    v154 = v39;
  }
  if ( v40 )
  {
    v41 -= 2;
    if ( v41 < 0 )
      v41 = 0;
    v155 = v41;
  }
  if ( (width & 0xF) == 0 || (v42 = 1, !v40) )
    v42 = 0;
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  data[4] = v39;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
  }
  v46 = 0;
  data[5] = v41;
  if ( (width & 0xF) != 0 )
    v46 = v41;
  data[7] = v15;
  data[6] = v46;
  v47 = 0;
  if ( v40 )
    v47 = v39;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r9d
  }
  v50 = v42 + v46 + v47;
  __asm
  {
    vmovss  [rbp+0C0h+data], xmm0
    vdivss  xmm0, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm2
  }
  xCount = v50;
  __asm
  {
    vmovss  [rbp+0C0h+var_6C], xmm2
    vmovss  [rbp+0C0h+var_68], xmm0
    vmovss  [rbp+0C0h+var_64], xmm1
  }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  v53 = onlyBorder;
  if ( onlyBorder || v39 <= 0 || v41 <= 0 )
  {
    v93 = computeState;
  }
  else
  {
    if ( v15 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 362, ASSERT_TYPE_ASSERT, "( mipCount ) == ( 4 )", "%s == %s\n\t%i, %i", "mipCount", "4", v15, 4) )
      __debugbreak();
    R_SetComputeShader(computeState, rgp.floatZDownsampleInteriorComputeShader);
    v54 = R_RT_Handle::GetSurface(&v152);
    textures = (GfxTexture *)R_Texture_GetResident(v54->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 8, 1, (const GfxTexture *const *)&textures);
    v55 = R_RT_Handle::GetSurface(&v164);
    textures = (GfxTexture *)R_Texture_GetResident(v55->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeState, 9, 1, (const GfxTexture *const *)&textures);
    if ( v15 )
    {
      v56 = v156;
      v57 = mipStart - 2;
      v58 = state;
      v59 = 6 - mipStart;
      v60 = 2 - v153;
      while ( 1 )
      {
        _RAX = v160;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        _RAX = R_RT_GetViewInternal(&v162, &v163, 0, v57 + 3);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
        }
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v149);
          if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID] }
            if ( v67 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0 }
        v68 = _EBX & 0x7FFF;
        if ( v68 )
        {
          v163.m_surfaceID = v68;
        }
        else
        {
          v68 = 0;
          v163.m_surfaceID = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
          vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
          vmovups xmmword ptr [rbp+0C0h+var_B0.m_tracking.m_allocCounter], xmm0
          vmovsd  [rbp+0C0h+var_B0.m_tracking.m_location], xmm1
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        if ( v68 )
        {
          R_RT_Handle::GetSurface(&v163);
          if ( (R_RT_Handle::GetSurface(&v163)->m_rtFlagsInternal & 0x18) == 0 )
            goto LABEL_87;
          v72 = "!unionHandle.IsValid() || unionHandle.IsColor()";
          v73 = 217;
          v74 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
        }
        else
        {
          if ( !(_DWORD)_RDI )
            goto LABEL_87;
          v72 = "!this->m_tracking.m_allocCounter";
          v73 = 100;
          v74 = "(!this->m_tracking.m_allocCounter)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v73, ASSERT_TYPE_ASSERT, v74, (const char *)&queryFormat, v72) )
          __debugbreak();
LABEL_87:
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        v76 = R_RT_Handle::GetSurface(&v163);
        textures = (GfxTexture *)R_Texture_GetResident(v76->m_image.m_base.textureId);
        R_SetComputeRWTextures(v58, v60 + v57, 1, (const GfxTexture *const *)&textures);
        _RAX = v161;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        _RAX = R_RT_GetViewInternal(&v162, &v163, 0, v57);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
        }
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v149);
          if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID] }
            if ( v83 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0 }
        v84 = _EBX & 0x7FFF;
        if ( v84 )
        {
          v163.m_surfaceID = v84;
        }
        else
        {
          v84 = 0;
          v163.m_surfaceID = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
          vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
          vmovups xmmword ptr [rbp+0C0h+var_B0.m_tracking.m_allocCounter], xmm0
          vmovsd  [rbp+0C0h+var_B0.m_tracking.m_location], xmm1
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        if ( v84 )
        {
          R_RT_Handle::GetSurface(&v163);
          if ( (R_RT_Handle::GetSurface(&v163)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v87 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v88 = 217;
            v89 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_103:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v88, ASSERT_TYPE_ASSERT, v89, (const char *)&queryFormat, v87) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v87 = "!this->m_tracking.m_allocCounter";
          v88 = 100;
          v89 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_103;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_B0.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_B0.m_surfaceID], ymm0
        }
        v91 = R_RT_Handle::GetSurface(&v163);
        Resident = (GfxTexture *)R_Texture_GetResident(v91->m_image.m_base.textureId);
        R_SetComputeRWTextures(v58, v59 + v57++, 1, (const GfxTexture *const *)&Resident);
        if ( v60 + v57 >= v56 )
        {
          v39 = v154;
          v41 = v155;
          v15 = v156;
          v50 = xCount;
          break;
        }
      }
    }
    v92 = v41;
    v93 = state;
    R_Dispatch(state, v39, v92, 1u);
    v53 = 0;
  }
  if ( v50 > 0 )
  {
    floatZDownsampleBorderComputeShader = rgp.floatZDownsampleBorderComputeShader;
    if ( v53 )
      floatZDownsampleBorderComputeShader = rgp.floatZDownsampleBorderLastMinOnlyComputeShader;
    R_SetComputeShader(v93, floatZDownsampleBorderComputeShader);
    v95 = R_RT_Handle::GetSurface(&v152);
    Resident = (GfxTexture *)R_Texture_GetResident(v95->m_image.m_base.textureId);
    R_SetComputeRWTextures(v93, 8, 1, (const GfxTexture *const *)&Resident);
    v96 = R_RT_Handle::GetSurface(&v164);
    Resident = (GfxTexture *)R_Texture_GetResident(v96->m_image.m_base.textureId);
    R_SetComputeRWTextures(v93, 9, 1, (const GfxTexture *const *)&Resident);
    if ( v15 )
    {
      v97 = 3 - v153;
      v98 = ~v153;
      for ( i = v159; i + v98 < v15; ++i )
      {
        _RAX = v160;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
        }
        _RAX = R_RT_GetViewInternal(&v162, &v164, 0, i);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
        }
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v149);
          if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_90.m_surfaceID] }
            if ( v106 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
        v107 = _EBX & 0x7FFF;
        if ( v107 )
        {
          v152.m_surfaceID = v107;
        }
        else
        {
          v107 = 0;
          v152.m_surfaceID = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
          vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
          vmovups xmmword ptr [rbp+0C0h+var_130.m_tracking.m_allocCounter], xmm0
          vmovsd  [rbp+0C0h+var_130.m_tracking.m_location], xmm1
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
        }
        if ( v107 )
        {
          R_RT_Handle::GetSurface(&v152);
          if ( (R_RT_Handle::GetSurface(&v152)->m_rtFlagsInternal & 0x18) == 0 )
            goto LABEL_132;
          v111 = "!unionHandle.IsValid() || unionHandle.IsColor()";
          v112 = 217;
          v113 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
        }
        else
        {
          if ( !(_DWORD)_RDI )
            goto LABEL_132;
          v111 = "!this->m_tracking.m_allocCounter";
          v112 = 100;
          v113 = "(!this->m_tracking.m_allocCounter)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v112, ASSERT_TYPE_ASSERT, v113, (const char *)&queryFormat, v111) )
          __debugbreak();
LABEL_132:
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
        }
        v115 = R_RT_Handle::GetSurface(&v152);
        Resident = (GfxTexture *)R_Texture_GetResident(v115->m_image.m_base.textureId);
        R_SetComputeRWTextures(v93, i + v98, 1, (const GfxTexture *const *)&Resident);
        _RAX = v161;
        v117 = 0;
        __asm { vmovups ymm0, ymmword ptr [rax] }
        if ( !onlyBorder )
          v117 = i - 3;
        __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
        _RAX = R_RT_GetViewInternal(&v162, &v164, 0, v117);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
        }
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v149);
          if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v123 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_90.m_surfaceID] }
            if ( v123 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
        v124 = _EBX & 0x7FFF;
        if ( v124 )
        {
          v152.m_surfaceID = v124;
        }
        else
        {
          v124 = 0;
          v152.m_surfaceID = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
          vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
          vmovups xmmword ptr [rbp+0C0h+var_130.m_tracking.m_allocCounter], xmm0
          vmovsd  [rbp+0C0h+var_130.m_tracking.m_location], xmm1
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
        }
        if ( v124 )
        {
          R_RT_Handle::GetSurface(&v152);
          if ( (R_RT_Handle::GetSurface(&v152)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v127 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v128 = 217;
            v129 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_150:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v128, ASSERT_TYPE_ASSERT, v129, (const char *)&queryFormat, v127) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v127 = "!this->m_tracking.m_allocCounter";
          v128 = 100;
          v129 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_150;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
        }
        v131 = R_RT_Handle::GetSurface(&v152);
        textures = (GfxTexture *)R_Texture_GetResident(v131->m_image.m_base.textureId);
        R_SetComputeRWTextures(v93, v97 + i, 1, (const GfxTexture *const *)&textures);
      }
    }
    if ( v15 < 4 )
    {
      v132 = v15 + v153;
      do
      {
        _RAX = v160;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
        }
        _RAX = R_RT_GetViewInternal(&v162, &v164, 0, v132);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+1C0h+var_160.m_surfaceID], ymm0
        }
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v149);
          if ( (R_RT_Handle::GetSurface(&v149)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            LODWORD(_RDI) = v149.m_tracking.m_allocCounter;
            LOWORD(_EBX) = v149.m_surfaceID;
            __asm { vmovups ymm0, ymmword ptr [rsp+1C0h+var_160.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rdi, xmm0, 2 }
          if ( (_DWORD)_RDI )
          {
            v139 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+0C0h+var_90.m_surfaceID] }
            if ( v139 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0 }
        v140 = _EBX & 0x7FFF;
        if ( v140 )
        {
          v152.m_surfaceID = v140;
        }
        else
        {
          v140 = 0;
          v152.m_surfaceID = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1C0h+var_160.m_tracking.m_allocCounter]
          vmovsd  xmm1, [rsp+1C0h+var_160.m_tracking.m_location]
          vmovups xmmword ptr [rbp+0C0h+var_130.m_tracking.m_allocCounter], xmm0
          vmovsd  [rbp+0C0h+var_130.m_tracking.m_location], xmm1
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_130.m_surfaceID], ymm0
        }
        if ( v140 )
        {
          R_RT_Handle::GetSurface(&v152);
          if ( (R_RT_Handle::GetSurface(&v152)->m_rtFlagsInternal & 0x18) != 0 )
          {
            v143 = "!unionHandle.IsValid() || unionHandle.IsColor()";
            v144 = 217;
            v145 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_171:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v144, ASSERT_TYPE_ASSERT, v145, (const char *)&queryFormat, v143) )
              __debugbreak();
          }
        }
        else if ( (_DWORD)_RDI )
        {
          v143 = "!this->m_tracking.m_allocCounter";
          v144 = 100;
          v145 = "(!this->m_tracking.m_allocCounter)";
          goto LABEL_171;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0C0h+var_130.m_surfaceID]
          vmovups ymmword ptr [rbp+0C0h+var_90.m_surfaceID], ymm0
        }
        v147 = R_RT_Handle::GetSurface(&v164);
        Resident = (GfxTexture *)R_Texture_GetResident(v147->m_image.m_base.textureId);
        R_SetComputeRWTextures(v93, v15, 1, (const GfxTexture *const *)&Resident);
        v148 = R_RT_Handle::GetSurface(&v164);
        textures = (GfxTexture *)R_Texture_GetResident(v148->m_image.m_base.textureId);
        R_SetComputeRWTextures(v93, v15 + 4, 1, (const GfxTexture *const *)&textures);
        ++v15;
      }
      while ( v15 < 4 );
    }
    R_Dispatch(v93, xCount, 1u, 1u);
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
  const R_RT_Surface *Surface; 
  int v13; 
  GfxShaderBufferView *views[2]; 
  R_RT_DepthHandle v18; 
  GfxShaderBufferView v19; 
  GfxShaderBufferRWView v20; 
  char data[40]; 
  unsigned int v22; 
  unsigned int v23[2]; 
  unsigned int v24; 
  unsigned int v25[46]; 

  _RSI = dstZMSAARt;
  _RBP = srcDepthRt;
  width = R_RT_Handle::GetSurface(srcDepthRt)->m_image.m_base.width;
  if ( width >> 1 != R_RT_Handle::GetSurface(_RSI)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(_RBP)->m_image.m_base.height, height >> 1 != R_RT_Handle::GetSurface(_RSI)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 117, ASSERT_TYPE_ASSERT, "(( srcDepthRt.GetWidth( ) / 2 == dstZMSAARt.GetWidth( ) ) && ( srcDepthRt.GetHeight( ) / 2 == dstZMSAARt.GetHeight( ) ))", (const char *)&queryFormat, "( srcDepthRt.GetWidth( ) / 2 == dstZMSAARt.GetWidth( ) ) && ( srcDepthRt.GetHeight( ) / 2 == dstZMSAARt.GetHeight( ) )") )
      __debugbreak();
  }
  v8 = (R_RT_Handle::GetSurface(_RSI)->m_rtFlags & 0x80) != 0;
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
  v10 = R_RT_Handle::GetSurface(_RSI)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(_RSI);
  __asm { vmovups ymm0, ymmword ptr [rbp+0] }
  v13 = Surface->m_image.m_base.height;
  __asm { vmovups [rsp+1B8h+var_178], ymm0 }
  R_RT_GetHtileInfo(&v18, &v22, v23);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups [rsp+1B8h+var_178], ymm0
  }
  R_RT_GetHtileView(&v19, &v18);
  views[0] = &v19;
  R_SetComputeViews(computeState, 3, 1, (const GfxShaderBufferView *const *)views);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups [rsp+1B8h+var_178], ymm0
  }
  R_RT_GetHtileInfo(&v18, &v24, v25);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups [rsp+1B8h+var_178], ymm0
  }
  R_RT_GetHtileRWView(&v20, &v18);
  views[0] = (GfxShaderBufferView *)&v20;
  R_SetComputeRWViewsWithCounters(computeState, 8, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  v23[1] = ((unsigned int)R_RT_Handle::GetSurface(_RBP)->m_rtFlags >> 7) & 1;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0xF0u, NULL);
  R_Dispatch(computeState, (unsigned int)(v10 + 63) >> 6, (unsigned int)(v13 + 63) >> 6, 1u);
}

/*
==============
R_ResolveSection
==============
*/

void __fastcall R_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, double s0, double t0, float ds, float dt)
{
  float fmt; 
  float v20; 
  GfxCmdBufContext v21; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = context;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 76, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovss  xmm1, [rsp+68h+arg_28]
    vmovups [rsp+68h+var_38], xmm0
    vmovss  xmm0, [rsp+68h+arg_20]
    vmovss  dword ptr [rsp+68h+var_40], xmm1
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm7
    vmovss  dword ptr [rsp+68h+fmt], xmm0
  }
  R_HW_ResolveSection(&v21, image, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v20);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
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
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  unsigned int v16; 
  const R_RT_Surface *Surface; 
  const char *v29; 
  R_RT_Handle v30; 
  R_RT_DepthHandle v31; 
  char v32; 
  __int16 v33; 
  int v34; 
  __int16 v36; 
  int v37; 
  __int128 v38; 
  R_RT_Group v39; 

  _RSI = context;
  _R15 = dstRt;
  _RDI = srcRt;
  width = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.width;
  if ( width >> 1 != R_RT_Handle::GetSurface(_R15)->m_image.m_base.width || (height = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height, height >> 1 != R_RT_Handle::GetSurface(_R15)->m_image.m_base.height) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 462, ASSERT_TYPE_ASSERT, "(srcRt.GetWidth( ) / 2 == dstRt.GetWidth( ) && srcRt.GetHeight( ) / 2 == dstRt.GetHeight( ))", (const char *)&queryFormat, "srcRt.GetWidth( ) / 2 == dstRt.GetWidth( ) && srcRt.GetHeight( ) / 2 == dstRt.GetHeight( )") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [rsi]
  }
  source = _RSI->source;
  __asm
  {
    vmovups [rsp+250h+var_200], ymm0
    vmovups xmmword ptr [rsp+250h+var_220.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v30, &v31, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(466)");
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rsp+250h+var_220.m_surfaceID], xmm0
  }
  R_HW_ResolveDepth((GfxCmdBufContext *)&v30);
  p_m_image = &R_RT_Handle::GetSurface(_RDI)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups xmm1, xmmword ptr [rsi]
  }
  source->input.codeImages[23] = &p_m_image->m_base;
  __asm
  {
    vmovups [rsp+250h+var_200], ymm0
    vmovups xmmword ptr [rsp+250h+var_220.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v30, &v31, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(470)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rsp+250h+var_220.m_surfaceID], ymm0
  }
  v16 = R_RT_Handle::GetSurface(&v30)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v30);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, v16, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rsp+250h+var_220.m_surfaceID], xmm0
  }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v30, rgp.copyTo4xMs, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(473)");
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rbp+150h+var_148], xmm0
    vmovdqu [rbp+150h+var_128], xmm0
  }
  _RCX = &v39;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  _RAX = &v32;
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
    vmovups xmm0, xmmword ptr [rsi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v29 = (const char *)*((_QWORD *)&v38 + 1);
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v39.m_vrsRt.m_tracking.m_location = v29;
  __asm { vmovups xmmword ptr [rsp+250h+var_220.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v30, &v39, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp(482)");
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
  GfxCmdBufContext v39; 

  _RSI = context;
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = _RSI->source;
  p_m_image = &Surface->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[8] = &p_m_image->m_base;
  v14 = R_RT_Handle::GetSurface(srcAlphaRt);
  v15 = _RSI->source;
  v16 = &v14->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v17 = &v15->input;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17->codeImages[9] = &v16->m_base;
  v18 = R_RT_Handle::GetSurface(srcColorRt);
  v19 = _RSI->source;
  v20 = &v18->1080;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v19->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[22] = &v20->m_color.m_fmaskImage.m_base;
  v22 = R_RT_Handle::GetSurface(srcAlphaRt);
  v23 = _RSI->source;
  v24 = &v22->1080;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v25 = &v23->input;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25->codeImages[23] = &v24->m_color.m_fmaskImage.m_base;
  v26 = R_RT_Handle::GetSurface(dilatedCompactFmaskRt);
  v27 = _RSI->source;
  v28 = &v26->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v27->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[24] = &v28->m_base;
  v30 = R_RT_Handle::GetSurface(sample0Color);
  v31 = _RSI->source;
  v32 = &v30->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v33 = &v31->input;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v33->codeImages[25] = &v32->m_base;
  v34 = R_RT_Handle::GetSurface(sample0Alpha);
  v35 = _RSI->source;
  v36 = &v34->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v37 = &v35->input;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v37->codeImages[26] = &v36->m_base;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
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
  GfxCmdBufContext v15; 

  _RDI = context;
  if ( ((R_RT_Handle::GetSurface(srcColorRt)->m_rtFlags & 0x4000) == 0 || (R_RT_Handle::GetSurface(srcAlphaRt)->m_rtFlags & 0x4000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_resolve.cpp", 488, ASSERT_TYPE_ASSERT, "(srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled())", (const char *)&queryFormat, "srcColorRt.IsMultisampled() && srcAlphaRt.IsMultisampled()") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  v10 = R_RT_Handle::GetSurface(srcAlphaRt);
  v11 = _RDI->source;
  v12 = &v10->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v13 = &v11->input;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  v13->codeImages[23] = &v12->m_base;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
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
  GfxCmdBufContext v8; 
  R_RT_ColorHandle v9; 

  _RBX = colorRt;
  _RDI = context;
  R_ProfBeginNamedEvent(context->state, "Eliminate Fast Clear");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups xmm1, xmmword ptr [rdi]
    vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+58h+var_38], xmm1
  }
  R_HW_EliminateFastClear(&v8, &v9, flushCaches);
  R_ProfEndNamedEvent(_RDI->state);
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

  data[0] = R_RT_Handle::GetSurface(&rt->R_RT_Handle)->m_image.m_base.width;
  data[1] = R_RT_Handle::GetSurface(&rt->R_RT_Handle)->m_image.m_base.height;
  _RAX = R_VRSGetPixelsToSamplesUint(&result, frameIndex, rg.halfResEmissive);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rsp+88h+var_38], xmm0
  }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
}

/*
==============
R_ResummarizeDepth
==============
*/
void R_ResummarizeDepth(GfxCmdBufContext *context)
{
  GfxCmdBufContext v2; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  R_HW_ResummarizeDepth(&v2);
}

