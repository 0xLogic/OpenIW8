/*
==============
R_DrawIndirectPrimitive
==============
*/

void __fastcall R_DrawIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  ?R_DrawIndirectPrimitive@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@I@Z(state, buffer, offset);
}

/*
==============
R_InitBindlessSamplerArray
==============
*/

void R_InitBindlessSamplerArray(void)
{
  ?R_InitBindlessSamplerArray@@YAXXZ();
}

/*
==============
R_UnmapReadbackRt
==============
*/

void __fastcall R_UnmapReadbackRt(ComputeCmdBufState *state, R_RT_ColorHandle *readbackRt)
{
  ?R_UnmapReadbackRt@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@@Z(state, readbackRt);
}

/*
==============
R_MapReadbackRt
==============
*/

unsigned __int8 *__fastcall R_MapReadbackRt(ComputeCmdBufState *state, R_RT_ColorHandle *readbackRt, unsigned int subresource, unsigned int *rowPitch, unsigned int *depthPitch)
{
  return ?R_MapReadbackRt@@YAPEAEPEAUComputeCmdBufState@@VR_RT_ColorHandle@@IPEAI2@Z(state, readbackRt, subresource, rowPitch, depthPitch);
}

/*
==============
R_GetClipDepthNear
==============
*/

double __fastcall R_GetClipDepthNear(GfxDepthRangeType depthRangeType)
{
  double result; 

  *(float *)&result = ?R_GetClipDepthNear@@YAMW4GfxDepthRangeType@@@Z(depthRangeType);
  return result;
}

/*
==============
R_UpdateAuxDirtyForClear
==============
*/

void __fastcall R_UpdateAuxDirtyForClear(const R_RT_Group *rtGroup, unsigned int whichToClear)
{
  ?R_UpdateAuxDirtyForClear@@YAXAEBUR_RT_Group@@I@Z(rtGroup, whichToClear);
}

/*
==============
R_ClearDepthViewport
==============
*/

void __fastcall R_ClearDepthViewport(GfxCmdBufContext *context)
{
  ?R_ClearDepthViewport@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_TextureFromCodeError
==============
*/

void __fastcall R_TextureFromCodeError(unsigned int codeTexture, const char *pMtlName, const char *pDrawListName, bool persistent)
{
  ?R_TextureFromCodeError@@YAXIPEBD0_N@Z(codeTexture, pMtlName, pDrawListName, persistent);
}

/*
==============
R_SetInputCodeBuffer
==============
*/

void __fastcall R_SetInputCodeBuffer(GfxCmdBufInput *input, unsigned int codeBuffer, R_RT_Handle *handle)
{
  ?R_SetInputCodeBuffer@@YAXPEAUGfxCmdBufInput@@IVR_RT_Handle@@@Z(input, codeBuffer, handle);
}

/*
==============
R_ClearAllDynDescriptorRanges
==============
*/

void __fastcall R_ClearAllDynDescriptorRanges(GfxCmdBufState *state)
{
  ?R_ClearAllDynDescriptorRanges@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_HW_DisableScissor2D
==============
*/

void __fastcall R_HW_DisableScissor2D(GfxCmdBufState *state)
{
  ?R_HW_DisableScissor2D@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_DrawIndirectPrimitive<1,1>
==============
*/

void __fastcall R_DrawIndirectPrimitive<1,1>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ??$R_DrawIndirectPrimitive@$00$00@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_UpdateViewport
==============
*/

void __fastcall R_UpdateViewport(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  ?R_UpdateViewport@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxViewport@@@Z(source, viewport);
}

/*
==============
R_SetState
==============
*/

bool __fastcall R_SetState(GfxCmdBufContext *context, const GfxStateBits *stateBits)
{
  return ?R_SetState@@YA_NUGfxCmdBufContext@@PEBUGfxStateBits@@@Z(context, stateBits);
}

/*
==============
R_SetPixelTextureInternal
==============
*/

void __fastcall R_SetPixelTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName, const char *fileAndLine)
{
  ?R_SetPixelTextureInternal@@YAXPEAUGfxCmdBufState@@IPEBUGfxImage@@PEBD2@Z(state, resourceIndex, image, optionalSlotName, fileAndLine);
}

/*
==============
R_SetInputCodePersistentBuffer
==============
*/

void __fastcall R_SetInputCodePersistentBuffer(GfxCmdBufInput *input, unsigned int codePersistentBuffer, R_RT_Handle *handle)
{
  ?R_SetInputCodePersistentBuffer@@YAXPEAUGfxCmdBufInput@@IVR_RT_Handle@@@Z(input, codePersistentBuffer, handle);
}

/*
==============
R_SetInputCodeRWBuffer
==============
*/

void __fastcall R_SetInputCodeRWBuffer(GfxCmdBufInput *input, unsigned int codeBuffer, R_RT_Handle *handle)
{
  ?R_SetInputCodeRWBuffer@@YAXPEAUGfxCmdBufInput@@IVR_RT_Handle@@@Z(input, codeBuffer, handle);
}

/*
==============
R_ClearBuffer_Float
==============
*/

void __fastcall R_ClearBuffer_Float(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, float value, bool useMemset, PipeFlushMode pipeFlush)
{
  ?R_ClearBuffer_Float@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@M_NW4PipeFlushMode@@@Z(state, buffer, value, useMemset, pipeFlush);
}

/*
==============
R_ChangeObjectPlacementRemote
==============
*/

void __fastcall R_ChangeObjectPlacementRemote(GfxCmdBufSourceState *source, const GfxPlacement *placement)
{
  ?R_ChangeObjectPlacementRemote@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxPlacement@@@Z(source, placement);
}

/*
==============
R_ResetRenderTargetsState
==============
*/

void __fastcall R_ResetRenderTargetsState(GfxDevice *device, GfxDescriptorState *descState, unsigned int count, unsigned int *rtvs, unsigned int dsv)
{
  ?R_ResetRenderTargetsState@@YAXPEAUGfxDevice@@PEAUGfxDescriptorState@@IPEAII@Z(device, descState, count, rtvs, dsv);
}

/*
==============
R_SetViewportValues
==============
*/

void __fastcall R_SetViewportValues(GfxCmdBufSourceState *source, unsigned int x, unsigned int y, unsigned int width, unsigned int height)
{
  ?R_SetViewportValues@@YAXPEAUGfxCmdBufSourceState@@IIII@Z(source, x, y, width, height);
}

/*
==============
R_BufferFromCodeError
==============
*/

void __fastcall R_BufferFromCodeError(unsigned int codeBuffer, const char *pMtlName, const char *pDrawListName, bool persistent)
{
  ?R_BufferFromCodeError@@YAXIPEBD0_N@Z(codeBuffer, pMtlName, pDrawListName, persistent);
}

/*
==============
R_SetViewportStruct
==============
*/

void __fastcall R_SetViewportStruct(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  ?R_SetViewportStruct@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxViewport@@@Z(source, viewport);
}

/*
==============
R_GetShaderCodeMatrix
==============
*/

const float *__fastcall R_GetShaderCodeMatrix(GfxCmdBufSourceState *source, unsigned int sourceIndex)
{
  return ?R_GetShaderCodeMatrix@@YAPEBMPEAUGfxCmdBufSourceState@@I@Z(source, sourceIndex);
}

/*
==============
R_SetViewportMSParams
==============
*/

void __fastcall R_SetViewportMSParams(GfxCmdBufSourceState *source, float msScale)
{
  ?R_SetViewportMSParams@@YAXPEAUGfxCmdBufSourceState@@M@Z(source, msScale);
}

/*
==============
R_SetViewportAndScissorSeparate
==============
*/

void __fastcall R_SetViewportAndScissorSeparate(GfxCmdBufState *state, const GfxViewport *viewport, const GfxViewport *scissor)
{
  ?R_SetViewportAndScissorSeparate@@YAXPEAUGfxCmdBufState@@PEBUGfxViewport@@1@Z(state, viewport, scissor);
}

/*
==============
R_DiscardRt
==============
*/

void __fastcall R_DiscardRt(ComputeCmdBufState *state, R_RT_Handle *rtHandle)
{
  ?R_DiscardRt@@YAXPEAUComputeCmdBufState@@VR_RT_Handle@@@Z(state, rtHandle);
}

/*
==============
R_SetPrimType
==============
*/

void __fastcall R_SetPrimType(GfxCmdBufState *state, unsigned int primType)
{
  ?R_SetPrimType@@YAXPEAUGfxCmdBufState@@I@Z(state, primType);
}

/*
==============
R_GetActiveMatrixForEdit
==============
*/

GfxMatrix *__fastcall R_GetActiveMatrixForEdit(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  return ?R_GetActiveMatrixForEdit@@YAPEAUGfxMatrix@@PEAUGfxCmdBufSourceState@@I@Z(source, matrixIndex);
}

/*
==============
R_ProfMarkRenderTargets
==============
*/

void __fastcall R_ProfMarkRenderTargets(GfxCmdBufState *state, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  ?R_ProfMarkRenderTargets@@YAXPEAUGfxCmdBufState@@IPEBVR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(state, colorRtCount, colorRts, depthRt);
}

/*
==============
R_ClearScreen
==============
*/

void __fastcall R_ClearScreen(GfxCmdBufState *state, unsigned __int8 whichToClear, unsigned __int8 stencil)
{
  ?R_ClearScreen@@YAXPEAUGfxCmdBufState@@EE@Z(state, whichToClear, stencil);
}

/*
==============
R_DrawIndirectPrimitive<0,0>
==============
*/

void __fastcall R_DrawIndirectPrimitive<0,0>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ??$R_DrawIndirectPrimitive@$0A@$0A@@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_SetDomainTextureInternal
==============
*/

void __fastcall R_SetDomainTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName, const char *fileAndLine)
{
  ?R_SetDomainTextureInternal@@YAXPEAUGfxCmdBufState@@IPEBUGfxImage@@PEBD2@Z(state, resourceIndex, image, optionalSlotName, fileAndLine);
}

/*
==============
R_ClearAllHullResources
==============
*/

void __fastcall R_ClearAllHullResources(GfxCmdBufState *state)
{
  ?R_ClearAllHullResources@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ClearResourceBuffers
==============
*/

void __fastcall R_ClearResourceBuffers(GfxCmdBufState *state)
{
  ?R_ClearResourceBuffers@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_BuildSamplerStateDesc
==============
*/

void __fastcall R_BuildSamplerStateDesc(const unsigned __int16 samplerState, D3D12XBOX_SAMPLER_DESC *desc)
{
  ?R_BuildSamplerStateDesc@@YAXGAEAUD3D12XBOX_SAMPLER_DESC@@@Z(samplerState, desc);
}

/*
==============
R_FlushStreamSources
==============
*/

void __fastcall R_FlushStreamSources(GfxCmdBufState *state, unsigned int vertexCount)
{
  ?R_FlushStreamSources@@YAXPEAUGfxCmdBufState@@I@Z(state, vertexCount);
}

/*
==============
R_RT_Destroy
==============
*/

void __fastcall R_RT_Destroy(GfxCmdBufContext *context, R_RT_BufferHandle *rt)
{
  ?R_RT_Destroy@@YAXUGfxCmdBufContext@@VR_RT_BufferHandle@@@Z(context, rt);
}

/*
==============
R_GetViewport
==============
*/

void __fastcall R_GetViewport(const GfxCmdBufSourceState *source, GfxViewport *outViewport)
{
  ?R_GetViewport@@YAXPEBUGfxCmdBufSourceState@@PEAUGfxViewport@@@Z(source, outViewport);
}

/*
==============
R_SetRenderSourceSize
==============
*/

void __fastcall R_SetRenderSourceSize(GfxCmdBufSourceState *source, R_RT_Handle *srcRt)
{
  ?R_SetRenderSourceSize@@YAXPEAUGfxCmdBufSourceState@@VR_RT_Handle@@@Z(source, srcRt);
}

/*
==============
R_SetMovieImages
==============
*/

void __fastcall R_SetMovieImages(GfxCmdBufInput *input)
{
  ?R_SetMovieImages@@YAXPEAUGfxCmdBufInput@@@Z(input);
}

/*
==============
R_SetPipelineState
==============
*/

bool __fastcall R_SetPipelineState(GfxCmdBufState *state)
{
  return ?R_SetPipelineState@@YA_NPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_HW_SetScissor
==============
*/

void __fastcall R_HW_SetScissor(GfxCmdBufState *state, const GfxViewport *scissorViewport)
{
  ?R_HW_SetScissor@@YAXPEAUGfxCmdBufState@@PEBUGfxViewport@@@Z(state, scissorViewport);
}

/*
==============
R_ChangeDepthRange
==============
*/

void __fastcall R_ChangeDepthRange(GfxCmdBufState *state, GfxDepthRangeType depthRangeType)
{
  ?R_ChangeDepthRange@@YAXPEAUGfxCmdBufState@@W4GfxDepthRangeType@@@Z(state, depthRangeType);
}

/*
==============
R_RT_Destroy
==============
*/

void __fastcall R_RT_Destroy(GfxCmdBufContext *context, R_RT_ColorHandle *rt)
{
  ?R_RT_Destroy@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(context, rt);
}

/*
==============
R_DrawIndexedPrimitive
==============
*/

void __fastcall R_DrawIndexedPrimitive(GfxCmdBufState *state, const GfxDrawPrimArgs *args)
{
  ?R_DrawIndexedPrimitive@@YAXPEAUGfxCmdBufState@@PEBUGfxDrawPrimArgs@@@Z(state, args);
}

/*
==============
R_ClearRtGroup
==============
*/

void __fastcall R_ClearRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, unsigned __int8 stencil, PipeFlushMode pipeFlush)
{
  ?R_ClearRtGroup@@YAXPEAUGfxCmdBufState@@AEBUR_RT_Group@@EEW4PipeFlushMode@@@Z(state, rtGroup, whichToClear, stencil, pipeFlush);
}

/*
==============
R_HW_DisableScissor
==============
*/

void __fastcall R_HW_DisableScissor(GfxCmdBufState *state)
{
  ?R_HW_DisableScissor@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_FlushResourceBuffers
==============
*/

void __fastcall R_FlushResourceBuffers(GfxCmdBufState *state)
{
  ?R_FlushResourceBuffers@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ShutdownCmdBufState
==============
*/

void __fastcall R_ShutdownCmdBufState(GfxCmdBufState *state)
{
  ?R_ShutdownCmdBufState@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_InvalidateState
==============
*/

void __fastcall R_InvalidateState(GfxCmdBufState *state)
{
  ?R_InvalidateState@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ClearBuffer_Uint
==============
*/

void __fastcall R_ClearBuffer_Uint(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, unsigned int value, bool useMemset, PipeFlushMode pipeFlush)
{
  ?R_ClearBuffer_Uint@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@I_NW4PipeFlushMode@@@Z(state, buffer, value, useMemset, pipeFlush);
}

/*
==============
R_OverrideGrayscaleImage
==============
*/

const GfxImage *__fastcall R_OverrideGrayscaleImage(int dvarValue, const char *dvarName)
{
  return ?R_OverrideGrayscaleImage@@YAPEBUGfxImage@@HPEBD@Z(dvarValue, dvarName);
}

/*
==============
R_IsStageBoundByTechnique
==============
*/

bool __fastcall R_IsStageBoundByTechnique(GfxCmdBufState *state, GfxShaderStage stage)
{
  return ?R_IsStageBoundByTechnique@@YA_NPEAUGfxCmdBufState@@W4GfxShaderStage@@@Z(state, stage);
}

/*
==============
R_UnbindRenderTarget
==============
*/

void __fastcall R_UnbindRenderTarget(GfxCmdBufContext *context)
{
  ?R_UnbindRenderTarget@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_ClearImage_Float
==============
*/

void __fastcall R_ClearImage_Float(ComputeCmdBufState *state, const GfxImage *image, float value, PipeFlushMode pipeFlush)
{
  ?R_ClearImage_Float@@YAXPEAUComputeCmdBufState@@PEBUGfxImage@@MW4PipeFlushMode@@@Z(state, image, value, pipeFlush);
}

/*
==============
R_SetFullViewport
==============
*/

void __fastcall R_SetFullViewport(GfxCmdBufSourceState *source)
{
  ?R_SetFullViewport@@YAXPEAUGfxCmdBufSourceState@@@Z(source);
}

/*
==============
R_AssertValidRt
==============
*/

void __fastcall R_AssertValidRt(const GfxCmdBufState *state)
{
  ?R_AssertValidRt@@YAXPEBUGfxCmdBufState@@@Z(state);
}

/*
==============
R_MatrixNeedsRefresh
==============
*/

void __fastcall R_MatrixNeedsRefresh(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  ?R_MatrixNeedsRefresh@@YAXPEAUGfxCmdBufSourceState@@I@Z(source, matrixIndex);
}

/*
==============
R_ResetRenderTargets
==============
*/

void __fastcall R_ResetRenderTargets(GfxCmdBufState *state)
{
  ?R_ResetRenderTargets@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_AddRenderTargetTransition
==============
*/

void __fastcall R_AddRenderTargetTransition(GfxCmdBufState *state, R_RT_ColorHandle *colorRenderTargetHandle, GfxRenderTargetTransitionMode transitionMode, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_AddRenderTargetTransition@@YAXPEAUGfxCmdBufState@@VR_RT_ColorHandle@@W4GfxRenderTargetTransitionMode@@W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, colorRenderTargetHandle, transitionMode, flag);
}

/*
==============
R_BuildSamplerStateTable
==============
*/

void R_BuildSamplerStateTable(void)
{
  ?R_BuildSamplerStateTable@@YAXXZ();
}

/*
==============
R_GetRequiredClearFlags
==============
*/

unsigned __int8 __fastcall R_GetRequiredClearFlags(const R_RT_Group *rtGroup)
{
  return ?R_GetRequiredClearFlags@@YAEAEBUR_RT_Group@@@Z(rtGroup);
}

/*
==============
R_DynamicResolutionForceRendertargetConstant
==============
*/

void __fastcall R_DynamicResolutionForceRendertargetConstant(GfxCmdBufSourceState *source, unsigned int w, unsigned int h)
{
  ?R_DynamicResolutionForceRendertargetConstant@@YAXPEAUGfxCmdBufSourceState@@II@Z(source, w, h);
}

/*
==============
R_DiscardRenderTargetContents
==============
*/

void __fastcall R_DiscardRenderTargetContents(const R_RT_ColorHandle *colorRT)
{
  ?R_DiscardRenderTargetContents@@YAXVR_RT_ColorHandle@@@Z(colorRT);
}

/*
==============
R_ForceSetViewportAndScissorSeparate
==============
*/

void __fastcall R_ForceSetViewportAndScissorSeparate(GfxCmdBufState *state, const GfxViewport *viewport, const GfxViewport *scissor)
{
  ?R_ForceSetViewportAndScissorSeparate@@YAXPEAUGfxCmdBufState@@PEBUGfxViewport@@1@Z(state, viewport, scissor);
}

/*
==============
R_DrawIndirectPrimitive<1,0>
==============
*/

void __fastcall R_DrawIndirectPrimitive<1,0>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ??$R_DrawIndirectPrimitive@$00$0A@@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_ChangeObjectScaledPlacementRemote
==============
*/

void __fastcall R_ChangeObjectScaledPlacementRemote(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  ?R_ChangeObjectScaledPlacementRemote@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxScaledPlacement@@@Z(source, placement);
}

/*
==============
R_BeginMaterial
==============
*/

bool __fastcall R_BeginMaterial(GfxCmdBufState *state, const Material *material, MaterialTechniqueType techType)
{
  return ?R_BeginMaterial@@YA_NPEAUGfxCmdBufState@@PEBUMaterial@@W4MaterialTechniqueType@@@Z(state, material, techType);
}

/*
==============
R_DiscardRtGroup
==============
*/

void __fastcall R_DiscardRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToDicard)
{
  ?R_DiscardRtGroup@@YAXPEAUGfxCmdBufState@@AEBUR_RT_Group@@E@Z(state, rtGroup, whichToDicard);
}

/*
==============
R_IsImageViewValid
==============
*/

bool __fastcall R_IsImageViewValid(GfxCmdBufState *state, const GfxImage *image)
{
  return ?R_IsImageViewValid@@YA_NPEAUGfxCmdBufState@@PEBUGfxImage@@@Z(state, image);
}

/*
==============
R_UnbindRenderTargetImages
==============
*/

void __fastcall R_UnbindRenderTargetImages(GfxCmdBufState *state, R_RT_ColorHandle *colorRt)
{
  ?R_UnbindRenderTargetImages@@YAXPEAUGfxCmdBufState@@VR_RT_ColorHandle@@@Z(state, colorRt);
}

/*
==============
R_HW_EnableScissor
==============
*/

void __fastcall R_HW_EnableScissor(GfxCmdBufContext *context, const GfxViewport *scissorViewport)
{
  ?R_HW_EnableScissor@@YAXUGfxCmdBufContext@@PEBUGfxViewport@@@Z(context, scissorViewport);
}

/*
==============
R_DrawMultiIndirectPrimitive
==============
*/

void __fastcall R_DrawMultiIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ?R_DrawMultiIndirectPrimitive@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_DrawIndirectPrimitive<0,1>
==============
*/

void __fastcall R_DrawIndirectPrimitive<0,1>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ??$R_DrawIndirectPrimitive@$0A@$00@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_ClearScreenInternal
==============
*/

void __fastcall R_ClearScreenInternal(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  ?R_ClearScreenInternal@@YAXPEAUGfxCmdBufState@@AEBUR_RT_Group@@EPEBTvec4_t@@IME@Z(state, rtGroup, whichToClear, mrtColor, mrtColorCount, depth, stencil);
}

/*
==============
R_FlushResourceTransitions
==============
*/

void __fastcall R_FlushResourceTransitions(CmdBufState *state)
{
  ?R_FlushResourceTransitions@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
R_ClearAllVertexBuffers
==============
*/

void __fastcall R_ClearAllVertexBuffers(GfxCmdBufState *state)
{
  ?R_ClearAllVertexBuffers@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ClearImage_Uint
==============
*/

void __fastcall R_ClearImage_Uint(ComputeCmdBufState *state, const GfxImage *image, unsigned int value, PipeFlushMode pipeFlush)
{
  ?R_ClearImage_Uint@@YAXPEAUComputeCmdBufState@@PEBUGfxImage@@IW4PipeFlushMode@@@Z(state, image, value, pipeFlush);
}

/*
==============
R_BuildSamplerState
==============
*/

void __fastcall R_BuildSamplerState(const unsigned int samplerStateIndex, const unsigned __int16 samplerState)
{
  ?R_BuildSamplerState@@YAXIG@Z(samplerStateIndex, samplerState);
}

/*
==============
R_IsStageBoundByTechnique
==============
*/

bool __fastcall R_IsStageBoundByTechnique(GfxCmdBufState *state, GfxShaderConstantStage stage)
{
  return ?R_IsStageBoundByTechnique@@YA_NPEAUGfxCmdBufState@@W4GfxShaderConstantStage@@@Z(state, stage);
}

/*
==============
R_SetInputCodePersistentBuffer
==============
*/

void __fastcall R_SetInputCodePersistentBuffer(GfxCmdBufInput *input, unsigned int codePersistentBuffer, const GfxWrappedBuffer *buffer)
{
  ?R_SetInputCodePersistentBuffer@@YAXPEAUGfxCmdBufInput@@IPEBUGfxWrappedBuffer@@@Z(input, codePersistentBuffer, buffer);
}

/*
==============
R_UnmapReadbackBuffer
==============
*/

void __fastcall R_UnmapReadbackBuffer(ComputeCmdBufState *state, R_RT_BufferHandle *readbackBuffer)
{
  ?R_UnmapReadbackBuffer@@YAXPEAUComputeCmdBufState@@VR_RT_BufferHandle@@@Z(state, readbackBuffer);
}

/*
==============
R_RT_Destroy
==============
*/

void __fastcall R_RT_Destroy(GfxCmdBufContext *context, R_RT_DepthHandle *rt)
{
  ?R_RT_Destroy@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@@Z(context, rt);
}

/*
==============
R_ChangeDepthHackNearClip
==============
*/

void __fastcall R_ChangeDepthHackNearClip(GfxCmdBufSourceState *source, unsigned int depthHackFlags)
{
  ?R_ChangeDepthHackNearClip@@YAXPEAUGfxCmdBufSourceState@@I@Z(source, depthHackFlags);
}

/*
==============
R_MapReadbackBuffer
==============
*/

unsigned __int8 *__fastcall R_MapReadbackBuffer(ComputeCmdBufState *state, R_RT_BufferHandle *readbackBuffer)
{
  return ?R_MapReadbackBuffer@@YAPEAEPEAUComputeCmdBufState@@VR_RT_BufferHandle@@@Z(state, readbackBuffer);
}

/*
==============
R_UnbindRenderTargetImages
==============
*/

void __fastcall R_UnbindRenderTargetImages(GfxCmdBufState *state, R_RT_DepthHandle *depthRt)
{
  ?R_UnbindRenderTargetImages@@YAXPEAUGfxCmdBufState@@VR_RT_DepthHandle@@@Z(state, depthRt);
}

/*
==============
R_BuildStaticSamplerStateDesc
==============
*/

void __fastcall R_BuildStaticSamplerStateDesc(MaterialCodeSampler codeSampler, D3D12_STATIC_SAMPLER_DESC *staticSampler)
{
  ?R_BuildStaticSamplerStateDesc@@YAXW4MaterialCodeSampler@@AEAUD3D12_STATIC_SAMPLER_DESC@@@Z(codeSampler, staticSampler);
}

/*
==============
R_SetObjectPrevFrameScaledPlacement
==============
*/

void __fastcall R_SetObjectPrevFrameScaledPlacement(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  ?R_SetObjectPrevFrameScaledPlacement@@YAXPEAUGfxCmdBufSourceState@@PEIBUGfxScaledPlacement@@@Z(source, placement);
}

/*
==============
R_SetRenderTargetsInternal
==============
*/

void __fastcall R_SetRenderTargetsInternal(GfxCmdBufContext *context, const R_RT_Group *newRtGroup, const char *location)
{
  ?R_SetRenderTargetsInternal@@YAXUGfxCmdBufContext@@AEBUR_RT_Group@@PEBD@Z(context, newRtGroup, location);
}

/*
==============
R_DrawIndexedIndirectPrimitive
==============
*/

void __fastcall R_DrawIndexedIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  ?R_DrawIndexedIndirectPrimitive@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@I@Z(state, buffer, offset);
}

/*
==============
R_GetRenderTargetSize
==============
*/

void __fastcall R_GetRenderTargetSize(GfxRenderTargetId targetId, unsigned int *width, unsigned int *height)
{
  ?R_GetRenderTargetSize@@YAXW4GfxRenderTargetId@@PEAI1@Z(targetId, width, height);
}

/*
==============
R_SetCompleteState
==============
*/

void __fastcall R_SetCompleteState(GfxCmdBufState *state, const GfxStateBits *stateBits)
{
  ?R_SetCompleteState@@YAXPEAUGfxCmdBufState@@PEBUGfxStateBits@@@Z(state, stateBits);
}

/*
==============
R_UpdateBindlessSamplerArray
==============
*/

void R_UpdateBindlessSamplerArray(void)
{
  ?R_UpdateBindlessSamplerArray@@YAXXZ();
}

/*
==============
R_DrawInstancedIndexedPrimitive
==============
*/

void __fastcall R_DrawInstancedIndexedPrimitive(GfxCmdBufState *state, const GfxDrawPrimArgs *args, unsigned int instanceCount)
{
  ?R_DrawInstancedIndexedPrimitive@@YAXPEAUGfxCmdBufState@@PEBUGfxDrawPrimArgs@@I@Z(state, args, instanceCount);
}

/*
==============
R_DrawListEnd
==============
*/

void __fastcall R_DrawListEnd(GfxCmdBufContext *context, GfxDrawCallOutput *drawOutput)
{
  ?R_DrawListEnd@@YAXUGfxCmdBufContext@@PEAUGfxDrawCallOutput@@@Z(context, drawOutput);
}

/*
==============
PIXSetDebugFenceName
==============
*/

void __fastcall PIXSetDebugFenceName(void *gpuFence, const char *name)
{
  ?PIXSetDebugFenceName@@YAXPEAXPEBD@Z(gpuFence, name);
}

/*
==============
PIXSetDebugName
==============
*/

void __fastcall PIXSetDebugName(ID3D12DeviceChild *resource, const char *name)
{
  ?PIXSetDebugName@@YAXPEAUID3D12DeviceChild@@PEBD@Z(resource, name);
}

/*
==============
R_DrawMultiIndexedIndirectPrimitive
==============
*/

void __fastcall R_DrawMultiIndexedIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  ?R_DrawMultiIndexedIndirectPrimitive@@YAXPEAUGfxCmdBufState@@PEAUID3D12Resource@@II@Z(state, buffer, offset, drawCount);
}

/*
==============
R_SetMeshStream
==============
*/

void __fastcall R_SetMeshStream(GfxCmdBufState *state, GfxMeshData *mesh, unsigned int vertCount)
{
  ?R_SetMeshStream@@YAXPEAUGfxCmdBufState@@PEAUGfxMeshData@@I@Z(state, mesh, vertCount);
}

/*
==============
R_GetActiveMatrix
==============
*/

const GfxMatrix *__fastcall R_GetActiveMatrix(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  return ?R_GetActiveMatrix@@YAPEBUGfxMatrix@@PEAUGfxCmdBufSourceState@@I@Z(source, matrixIndex);
}

/*
==============
R_AddDepthStencilTransition
==============
*/

void __fastcall R_AddDepthStencilTransition(GfxCmdBufState *state, R_RT_DepthHandle *depthRenderTargetHandle, GfxDepthStencilTransitionMode transitionMode, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_AddDepthStencilTransition@@YAXPEAUGfxCmdBufState@@VR_RT_DepthHandle@@W4GfxDepthStencilTransitionMode@@W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, depthRenderTargetHandle, transitionMode, flag);
}

/*
==============
R_SetAndClearIfRequired
==============
*/

void __fastcall R_SetAndClearIfRequired(GfxCmdBufContext *context, R_RT_Handle *rt)
{
  ?R_SetAndClearIfRequired@@YAXUGfxCmdBufContext@@VR_RT_Handle@@@Z(context, rt);
}

/*
==============
R_HW_EnableScissor2D
==============
*/

void __fastcall R_HW_EnableScissor2D(GfxCmdBufState *state, const GfxViewport *scissorViewport)
{
  ?R_HW_EnableScissor2D@@YAXPEAUGfxCmdBufState@@PEBUGfxViewport@@@Z(state, scissorViewport);
}

/*
==============
R_ClearResourceBuffers
==============
*/

void __fastcall R_ClearResourceBuffers(GfxCmdBufState *state, GfxShaderImageSetStage resourceSet)
{
  ?R_ClearResourceBuffers@@YAXPEAUGfxCmdBufState@@W4GfxShaderImageSetStage@@@Z(state, resourceSet);
}

/*
==============
R_DrawListStart
==============
*/

bool __fastcall R_DrawListStart(GfxCmdBufStateLocal *state, GfxCmdBufSourceState *source, const GfxViewInfo *viewInfo, const GfxViewParms *viewParms, const GfxViewParms *prevFrameViewParms, GfxDrawCallOutput *drawOutput)
{
  return ?R_DrawListStart@@YA_NPEAUGfxCmdBufStateLocal@@PEAUGfxCmdBufSourceState@@PEBUGfxViewInfo@@PEBUGfxViewParms@@3PEAUGfxDrawCallOutput@@@Z(state, source, viewInfo, viewParms, prevFrameViewParms, drawOutput);
}

/*
==============
R_SetVertexTextureInternal
==============
*/

void __fastcall R_SetVertexTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName, const char *fileAndLine)
{
  ?R_SetVertexTextureInternal@@YAXPEAUGfxCmdBufState@@IPEBUGfxImage@@PEBD2@Z(state, resourceIndex, image, optionalSlotName, fileAndLine);
}

/*
==============
R_ChangeObjectScaledPlacement
==============
*/

void __fastcall R_ChangeObjectScaledPlacement(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  ?R_ChangeObjectScaledPlacement@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxScaledPlacement@@@Z(source, placement);
}

/*
==============
R_ClearRtGroup
==============
*/

void __fastcall R_ClearRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil, PipeFlushMode pipeFlush)
{
  ?R_ClearRtGroup@@YAXPEAUGfxCmdBufState@@AEBUR_RT_Group@@EPEBTvec4_t@@IMEW4PipeFlushMode@@@Z(state, rtGroup, whichToClear, mrtColor, mrtColorCount, depth, stencil, pipeFlush);
}

/*
==============
R_DrawSurfs_Viewport
==============
*/

void __fastcall R_DrawSurfs_Viewport(GfxCmdBufContext *context)
{
  ?R_DrawSurfs_Viewport@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_ClearScreenLegacySlow
==============
*/

void __fastcall R_ClearScreenLegacySlow(GfxCmdBufState *state, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  ?R_ClearScreenLegacySlow@@YAXPEAUGfxCmdBufState@@EPEBTvec4_t@@IME@Z(state, whichToClear, mrtColor, mrtColorCount, depth, stencil);
}

/*
==============
R_SetInputCodePersistentBuffer
==============
*/
void R_SetInputCodePersistentBuffer(GfxCmdBufInput *input, unsigned int codePersistentBuffer, const GfxWrappedBuffer *buffer)
{
  __int64 v3; 
  __int64 v6; 

  v3 = codePersistentBuffer;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x29 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1504, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v6, 41) )
      __debugbreak();
  }
  input->codePersistentBuffers[v3] = buffer;
}

/*
==============
R_DrawIndirectPrimitive<1,1>
==============
*/
void R_DrawIndirectPrimitive<1,1>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW_INDEXED;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW_INDEXED);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
R_DrawIndirectPrimitive<1,0>
==============
*/
void R_DrawIndirectPrimitive<1,0>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
R_DrawIndirectPrimitive<0,1>
==============
*/
void R_DrawIndirectPrimitive<0,1>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW_INDEXED;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW_INDEXED);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
R_DrawIndirectPrimitive<0,0>
==============
*/
void R_DrawIndirectPrimitive<0,0>(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
PIXSetDebugFenceName
==============
*/
void PIXSetDebugFenceName(void *gpuFence, const char *name)
{
  int v4; 
  int v5; 
  size_t PtNumOfCharConverted[2]; 
  wchar_t DstBuf[256]; 

  if ( R_ProfIsEnabled() )
  {
    if ( mbstowcs_s(PtNumOfCharConverted, DstBuf, 0x100ui64, name, 0xFFFFFFFFFFFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4214, ASSERT_TYPE_ASSERT, "(mbstowcs_s( &wideNameLen, wideName, name, ((size_t)-1) ) == 0)", (const char *)&queryFormat, "mbstowcs_s( &wideNameLen, wideName, name, ((size_t)-1) ) == 0") )
      __debugbreak();
    if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4216, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
      __debugbreak();
    if ( ((unsigned int (__fastcall *)(ID3D12Device *, void *, wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, gpuFence, DstBuf) == -1 )
    {
      v5 = ((__int64 (__fastcall *)(ID3D12Device *, void *, wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, gpuFence, DstBuf);
      v4 = -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4217, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( reinterpret_cast<D3D12_GPU_VIRTUAL_ADDRESS>(gpuFence), wideName ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( reinterpret_cast<D3D12_GPU_VIRTUAL_ADDRESS>(gpuFence), wideName )", v4, v5) )
        __debugbreak();
    }
  }
}

/*
==============
PIXSetDebugName
==============
*/
void PIXSetDebugName(ID3D12DeviceChild *resource, const char *name)
{
  size_t PtNumOfCharConverted[2]; 
  wchar_t DstBuf[256]; 

  if ( mbstowcs_s(PtNumOfCharConverted, DstBuf, 0x100ui64, name, 0xFFFFFFFFFFFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4197, ASSERT_TYPE_ASSERT, "(mbstowcs_s( &wideNameLen, wideName, name, ((size_t)-1) ) == 0)", (const char *)&queryFormat, "mbstowcs_s( &wideNameLen, wideName, name, ((size_t)-1) ) == 0") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12DeviceChild *, wchar_t *))resource->m_pFunction[2].QueryInterface)(resource, DstBuf);
}

/*
==============
R_AddDepthStencilTransition
==============
*/
void R_AddDepthStencilTransition(GfxCmdBufState *state, R_RT_DepthHandle *depthRenderTargetHandle, GfxDepthStencilTransitionMode transitionMode, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  D3D12_RESOURCE_STATES v7; 
  D3D12_RESOURCE_STATES after; 
  const R_RT_Surface *Surface; 
  unsigned int m_subresourceToTransition; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v13; 
  const GfxTexture *Resident; 
  R_RT_Handle v15; 

  _RBX = depthRenderTargetHandle;
  switch ( transitionMode )
  {
    case DEPTHSTENCIL_TRANSITION_MODE_WRITE:
      v7 = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      after = D3D12_RESOURCE_STATE_DEPTH_WRITE;
      goto LABEL_12;
    case DEPTHSTENCIL_TRANSITION_MODE_READ_DECOMPRESS:
      after = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      goto LABEL_11;
    case DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_COMPRESSION:
      v7 = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      after = D3D12_RESOURCE_STATE_DEPTH_WRITE;
      goto LABEL_12;
    case DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_DEPTH_COMPRESSION:
      v7 = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      after = D3D12_RESOURCE_STATE_DEPTH_WRITE;
      goto LABEL_12;
    case DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_STENCIL_COMPRESSION:
      v7 = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      after = D3D12_RESOURCE_STATE_DEPTH_WRITE;
      goto LABEL_12;
    case DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_COMPRESSION:
      after = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      goto LABEL_11;
    case DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_DEPTH_COMPRESSION:
      after = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      goto LABEL_11;
    case DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_STENCIL_COMPRESSION:
      after = D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
      goto LABEL_11;
    case DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_EXPANDED:
      after = D3D12XBOX_RESOURCE_STATE_PRESERVE_EXPANDED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
LABEL_11:
      v7 = D3D12_RESOURCE_STATE_DEPTH_WRITE;
LABEL_12:
      Surface = R_RT_Handle::GetSurface(depthRenderTargetHandle);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
      }
      m_subresourceToTransition = Surface->m_subresourceToTransition;
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal;
      v13 = R_RT_Handle::GetSurface(&v15);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        Resident = (const GfxTexture *)&v13->1080;
      }
      else
      {
        Resident = R_Texture_GetResident(v13->m_image.m_base.textureId);
        if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
          __debugbreak();
      }
      R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, Resident->basemap, m_subresourceToTransition, v7, after, flag);
      return;
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3542, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
}

/*
==============
R_AddRenderTargetTransition
==============
*/
void R_AddRenderTargetTransition(GfxCmdBufState *state, R_RT_ColorHandle *colorRenderTargetHandle, GfxRenderTargetTransitionMode transitionMode, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  D3D12_RESOURCE_STATES v7; 
  D3D12_RESOURCE_STATES after; 
  const R_RT_Surface *Surface; 
  unsigned int m_subresourceToTransition; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v13; 
  const GfxTexture *Resident; 
  R_RT_Handle v15; 

  _RBX = colorRenderTargetHandle;
  if ( transitionMode )
  {
    if ( transitionMode != RENDERTARGET_TRANSITION_MODE_READ )
    {
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3472, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    v7 = D3D12_RESOURCE_STATE_RENDER_TARGET;
    after = D3D12_RESOURCE_STATE_COMMON;
    if ( (R_RT_Handle::GetSurface(colorRenderTargetHandle)->m_rtFlagsInternal & 0x40) == 0 )
      after = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
  }
  else
  {
    after = D3D12_RESOURCE_STATE_RENDER_TARGET;
    v7 = D3D12_RESOURCE_STATE_COMMON;
    if ( (R_RT_Handle::GetSurface(colorRenderTargetHandle)->m_rtFlagsInternal & 0x40) == 0 )
      v7 = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
  }
  if ( (R_RT_Handle::GetSurface(_RBX)->m_rtFlagsInternal & 0x40) == 0 && R_RT_Handle::GetSurface(_RBX)->m_subresourceToTransition == -1 )
    after |= 0x3400000u;
  Surface = R_RT_Handle::GetSurface(_RBX);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
  }
  m_subresourceToTransition = Surface->m_subresourceToTransition;
  m_rtFlagsInternal = R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal;
  v13 = R_RT_Handle::GetSurface(&v15);
  if ( (m_rtFlagsInternal & 8) != 0 )
  {
    Resident = (const GfxTexture *)&v13->1080;
  }
  else
  {
    Resident = R_Texture_GetResident(v13->m_image.m_base.textureId);
    if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
      __debugbreak();
  }
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, Resident->basemap, m_subresourceToTransition, v7, after, flag);
}

/*
==============
R_AssertValidRt
==============
*/
void R_AssertValidRt(const GfxCmdBufState *state)
{
  unsigned int v3; 
  int m_colorRtCount; 
  unsigned int m_allocCounter; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  unsigned __int16 v10; 
  char *v11; 
  int v12; 
  const char *v13; 
  const R_RT_Surface *Surface; 
  bool v17; 
  unsigned int v18; 
  R_RT_FlagsInternal v19; 
  unsigned __int16 v20; 
  char *v21; 
  int v22; 
  const char *v23; 
  const R_RT_Surface *v24; 
  __int64 v25; 
  __int64 v26; 
  R_RT_Handle v27; 

  _RBP = state;
  if ( RB_IsBackendCmdBufContextState(state) )
  {
    v3 = 0;
    m_colorRtCount = _RBP->rtGroup.m_colorRtCount;
    if ( _RBP->rtGroup.m_colorRtCount )
    {
      do
      {
        _RAX = 32i64 * v3;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax+rbp+0A30h]
          vmovd   ebx, xmm0
          vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
        }
        m_allocCounter = v27.m_tracking.m_allocCounter;
        if ( (_WORD)_EBX )
        {
          R_RT_Handle::GetSurface(&v27);
        }
        else
        {
          if ( v27.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
            __debugbreak();
        }
        if ( (_EBX & 0x8000u) == 0 )
        {
          if ( (_WORD)_EBX )
          {
            R_RT_Handle::GetSurface(&v27);
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
              __debugbreak();
          }
          m_rtFlagsInternal = R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal;
          if ( (m_rtFlagsInternal & 0x800) != 0 )
          {
            if ( (m_rtFlagsInternal & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
              __debugbreak();
            if ( !(_WORD)_EBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
              __debugbreak();
            v10 = (_EBX & 0x7FFF) - 1;
            if ( v10 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
              __debugbreak();
            v11 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v10;
            if ( *((_DWORD *)v11 + 572) != m_allocCounter )
            {
              LODWORD(v26) = m_allocCounter;
              LODWORD(v25) = *((_DWORD *)v11 + 572);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v25, v26, v27.m_tracking.m_name, v27.m_tracking.m_location) )
                __debugbreak();
            }
            v12 = *((_DWORD *)v11 + 4);
            if ( (v12 & 0x3000) != 4096 && (v12 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
              __debugbreak();
            v13 = (const char *)*((_QWORD *)v11 + 288);
            Surface = R_RT_Handle::GetSurface(&v27);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1243, ASSERT_TYPE_ASSERT, "(!( colorRt ).GetAuxDirty())", "%s\n\tRT '%s' not cleared before use.  Created at: %s", "!( colorRt ).GetAuxDirty()", Surface->m_image.m_base.name, v13) )
              __debugbreak();
          }
        }
        ++v3;
      }
      while ( v3 != m_colorRtCount );
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0AB0h]
      vmovd   ebx, xmm0
      vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
    }
    if ( !(_WORD)_EBX )
    {
      if ( !v27.m_tracking.m_allocCounter )
        return;
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      goto LABEL_60;
    }
    R_RT_Handle::GetSurface(&v27);
    if ( !R_RT_Handle::IsReadOnly(&v27) )
    {
      v18 = v27.m_tracking.m_allocCounter;
      R_RT_Handle::GetSurface(&v27);
      if ( (_EBX & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 176, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", (const char *)&queryFormat, "!this->IsReadOnly()") )
        __debugbreak();
      v19 = R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal;
      if ( (v19 & 0x800) != 0 )
      {
        if ( (v19 & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
          __debugbreak();
        v20 = (_EBX & 0x7FFF) - 1;
        if ( v20 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
          __debugbreak();
        v21 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v20;
        if ( *((_DWORD *)v21 + 572) != v18 )
        {
          LODWORD(v26) = v18;
          LODWORD(v25) = *((_DWORD *)v21 + 572);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v25, v26, v27.m_tracking.m_name, v27.m_tracking.m_location) )
            __debugbreak();
        }
        v22 = *((_DWORD *)v21 + 4);
        if ( (v22 & 0x3000) != 4096 && (v22 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
          __debugbreak();
        v23 = (const char *)*((_QWORD *)v21 + 288);
        v24 = R_RT_Handle::GetSurface(&v27);
        v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1248, ASSERT_TYPE_ASSERT, "(!( depthRt ).GetAuxDirty())", "%s\n\tRT '%s' not cleared before use.  Created at: %s", "!( depthRt ).GetAuxDirty()", v24->m_image.m_base.name, v23);
LABEL_60:
        if ( v17 )
          __debugbreak();
      }
    }
  }
}

/*
==============
R_BeginMaterial
==============
*/
bool R_BeginMaterial(GfxCmdBufState *state, const Material *material, MaterialTechniqueType techType)
{
  MaterialTechniqueSet *techniqueSet; 
  const MaterialTechnique *TechSetTechnique; 

  if ( !material )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1123, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
  }
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  techniqueSet = material->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  TechSetTechnique = Material_GetTechSetTechnique(techniqueSet, techType);
  if ( TechSetTechnique )
  {
    state->technique = TechSetTechnique;
    LOBYTE(TechSetTechnique) = 1;
    state->material = material;
    state->techType = techType;
  }
  return (char)TechSetTechnique;
}

/*
==============
R_BufferFromCodeError
==============
*/
void R_BufferFromCodeError(unsigned int codeBuffer, const char *pMtlName, const char *pDrawListName, bool persistent)
{
  const char *CodeBufferName; 
  const char *v9; 

  CodeBufferName = R_GetCodeBufferName(codeBuffer);
  v9 = (char *)&queryFormat.fmt + 3;
  if ( persistent )
    v9 = "Persistent";
  Com_Printf(8, "invalid code%sBuffer: %d '%s' material: '%s' drawlist: '%s'\n", v9, codeBuffer, CodeBufferName, pMtlName, pDrawListName);
}

/*
==============
R_BuildSamplerState
==============
*/
void R_BuildSamplerState(const unsigned int samplerStateIndex, const unsigned __int16 samplerState)
{
  GfxUnifiedDescriptorHeap *SamplerDescriptorHeap; 
  int v6; 
  D3D12XBOX_SAMPLER_DESC desc; 

  if ( samplerStateIndex >= 4 )
  {
    v6 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( samplerStateIndex ) < (unsigned)( SAMPLER_SRC_CODE_ARRAY_COUNT )", "samplerStateIndex doesn't index SAMPLER_SRC_CODE_ARRAY_COUNT\n\t%i not in [0, %i)", samplerStateIndex, v6) )
      __debugbreak();
  }
  R_BuildSamplerStateDesc(samplerState, &desc);
  SamplerDescriptorHeap = R_GetSamplerDescriptorHeap();
  ((void (__fastcall *)(ID3D12Device *, D3D12XBOX_SAMPLER_DESC *, unsigned __int64))g_dx.d3d12device->m_pFunction[20].AddRef)(g_dx.d3d12device, &desc, SamplerDescriptorHeap->heapStartCPUHandle.ptr + samplerStateIndex * SamplerDescriptorHeap->descriptorSize);
}

/*
==============
R_BuildSamplerStateDesc
==============
*/
void R_BuildSamplerStateDesc(const unsigned __int16 samplerState, D3D12XBOX_SAMPLER_DESC *desc)
{
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v13; 
  int v22; 
  int v23; 
  int v24; 
  unsigned int TrilinearWindowID; 
  __int64 v31; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _R12 = desc;
  v5 = samplerState;
  v6 = 1;
  v7 = samplerState & 7;
  if ( (samplerState & 7) != 0 )
  {
    if ( v7 == 1 )
    {
LABEL_6:
      v8 = 1;
      goto LABEL_11;
    }
    if ( v7 > 1 )
    {
      if ( v7 <= 5 )
      {
        v8 = 3;
        goto LABEL_11;
      }
      if ( v7 == 6 )
        goto LABEL_6;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 99, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(99): unhandled case %d in switch statement", samplerState & 7) )
      __debugbreak();
  }
  v8 = 0;
LABEL_11:
  v9 = 2;
  switch ( (v5 >> 3) & 3 )
  {
    case 0u:
LABEL_16:
      v10 = 0;
      break;
    case 1u:
      v10 = 1;
      break;
    case 2u:
      v10 = 2;
      break;
    default:
      LODWORD(v31) = (v5 >> 3) & 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(121): unhandled case %d in switch statement", v31) )
        __debugbreak();
      goto LABEL_16;
  }
  v11 = (v5 >> 5) & 3;
  switch ( v11 )
  {
    case 0:
LABEL_22:
      __asm { vxorps  xmm6, xmm6, xmm6 }
      break;
    case 1:
      _RAX = r_texFilterMipBias;
      __asm { vmovss  xmm6, dword ptr [rax+28h] }
      break;
    case 2:
      _RAX = r_smaaGradientAdjust;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, dword ptr [rax+28h]
        vmulss  xmm2, xmm1, cs:__real@3f350481
        vsubss  xmm1, xmm0, xmm1
        vaddss  xmm2, xmm2, xmm1
        vmaxss  xmm0, xmm2, cs:__real@3a83126f; X
      }
      *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
      break;
    default:
      LODWORD(v31) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 139, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(139): unhandled case %d in switch statement", v31) )
        __debugbreak();
      goto LABEL_22;
  }
  if ( v7 )
  {
    if ( v7 - 1 > 5 )
    {
      LODWORD(v31) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(158): unhandled case %d in switch statement", v31) )
        __debugbreak();
      v13 = 1;
    }
    else
    {
      v13 = 2;
    }
  }
  else
  {
    v13 = 1;
  }
  switch ( v7 )
  {
    case 0u:
    case 1u:
    case 6u:
      goto LABEL_35;
    case 2u:
      break;
    case 3u:
      v9 = 4;
      break;
    case 4u:
      v9 = 8;
      break;
    case 5u:
      v9 = 16;
      break;
    default:
      LODWORD(v31) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 181, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(181): unhandled case %d in switch statement", v31) )
        __debugbreak();
LABEL_35:
      v9 = 1;
      break;
  }
  __asm { vmovss  dword ptr [r12+2Ch], xmm6; jumptable 000000014238BBDC case 2 }
  _R12->FilterMag = v8;
  _R12->FilterMin = v8;
  _R12->FilterZ = v13;
  _R12->FilterMip = v10;
  _R12->MaxAnisotropy = v9;
  _R12->MaxLOD = 3.4028235e38;
  v22 = 1;
  if ( (samplerState & 0x80) != 0 )
    v22 = 3;
  _R12->AddressU = v22;
  v23 = 1;
  if ( (samplerState & 0x100) != 0 )
    v23 = 3;
  _R12->AddressV = v23;
  v24 = 1;
  if ( (samplerState & 0x200) != 0 )
    v24 = 3;
  _R12->AddressW = v24;
  _R12->Flags = D3D12XBOX_SAMPLER_FLAG_NONE;
  _R12->FilterMode = D3D12XBOX_TEXTURE_FILTER_MODE_LERP;
  _R12->MinLOD = 0.0;
  _R12->MipLODBiasSecondary = 0.0;
  if ( (samplerState & 7) == 6 )
    v6 = 5;
  _R12->ComparisonFunc = v6;
  *(_QWORD *)_R12->BorderColor = 0i64;
  *(_QWORD *)&_R12->BorderColor[2] = 0i64;
  LODWORD(_R12->AnisotropyBias) = r_texFilterAnisoBias->current.integer;
  _RAX = r_texFilterAnisoWindow;
  __asm { vmovss  xmm0, dword ptr [rax+28h]; window }
  _R12->AnisotropyThreshold = R_FindAnisoWindowID(*(float *)&_XMM0);
  _RAX = r_texFilterTrilinearWindow;
  __asm { vmovss  xmm0, dword ptr [rax+28h]; window }
  TrilinearWindowID = R_FindTrilinearWindowID(*(float *)&_XMM0);
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  _R12->PerformanceZ = 0;
  _R12->PerformanceMip = TrilinearWindowID;
}

/*
==============
R_BuildSamplerStateTable
==============
*/
void R_BuildSamplerStateTable(void)
{
  const dvar_t *v0; 
  bool enabled; 
  const dvar_t *v2; 
  bool v3; 
  __int16 v4; 
  unsigned __int16 v5; 

  v0 = r_texFilter;
  if ( !r_texFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  enabled = v0->current.enabled;
  v2 = r_texFilterMipMode;
  if ( !r_texFilterMipMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.enabled;
  v4 = 1;
  if ( R_PostAARequestGradientAdjust() )
    v4 = 2;
  v5 = enabled | (unsigned __int16)(8 * (v3 | (unsigned __int16)(4 * v4)));
  R_BuildSamplerState(0, v5 | 0x180);
  R_BuildSamplerState(1u, v5 | 0x100);
  R_BuildSamplerState(2u, v5 | 0x80);
  R_BuildSamplerState(3u, v5);
}

/*
==============
R_BuildStaticSamplerStateDesc
==============
*/
void R_BuildStaticSamplerStateDesc(MaterialCodeSampler codeSampler, D3D12_STATIC_SAMPLER_DESC *staticSampler)
{
  bool v8; 
  bool v9; 
  D3D12XBOX_TEXTURE_XY_FILTER FilterMin; 
  bool v15; 
  D3D12_COMPARISON_FUNC ComparisonFunc; 
  BOOL v19; 
  int v20; 
  D3D12XBOX_SAMPLER_DESC v30; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = staticSampler;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  R_BuildSamplerStateDesc(g_immutableSamplersStatesArray[(unsigned __int8)codeSampler - 4], &v30);
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_48]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( !v8 || (v8 = v30.PerformanceZ == 0, v30.PerformanceZ) )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 397, ASSERT_TYPE_ASSERT, "(dynamicSampler.MipLODBiasSecondary == 0.0f && dynamicSampler.PerformanceZ == 0)", (const char *)&queryFormat, "dynamicSampler.MipLODBiasSecondary == 0.0f && dynamicSampler.PerformanceZ == 0");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_34]
    vucomiss xmm0, xmm6
  }
  if ( !v8 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_30]
    vucomiss xmm0, xmm6
  }
  if ( !v8 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_2C]
    vucomiss xmm0, xmm6
  }
  if ( !v8 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_28]
    vucomiss xmm0, xmm6
  }
  if ( !v8 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 401, ASSERT_TYPE_ASSERT, "(dynamicSampler.BorderColor[0] == 0.0f && dynamicSampler.BorderColor[1] == 0.0f && dynamicSampler.BorderColor[2] == 0.0f && dynamicSampler.BorderColor[3] == 0.0f)", (const char *)&queryFormat, "dynamicSampler.BorderColor[0] == 0.0f && dynamicSampler.BorderColor[1] == 0.0f && dynamicSampler.BorderColor[2] == 0.0f && dynamicSampler.BorderColor[3] == 0.0f") )
      __debugbreak();
  }
  FilterMin = v30.FilterMin;
  if ( v30.FilterMin != v30.FilterMag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 402, ASSERT_TYPE_ASSERT, "(dynamicSampler.FilterMin == dynamicSampler.FilterMag)", (const char *)&queryFormat, "dynamicSampler.FilterMin == dynamicSampler.FilterMag") )
    __debugbreak();
  if ( v30.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT )
  {
    v15 = FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT;
    goto LABEL_18;
  }
  if ( v30.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR )
  {
    v15 = FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR;
LABEL_18:
    if ( v15 )
      goto LABEL_21;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 404, ASSERT_TYPE_ASSERT, "(( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT ) || ( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR ))", (const char *)&queryFormat, "( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT ) || ( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR )") )
    __debugbreak();
LABEL_21:
  _ER8 = v30.FilterMip;
  _ER11 = 0;
  ComparisonFunc = v30.ComparisonFunc;
  v19 = v30.FilterMip == D3D12XBOX_TEXTURE_MIP_FILTER_LINEAR;
  if ( v30.ComparisonFunc == D3D12_COMPARISON_FUNC_NEVER )
  {
    if ( v30.FilterMode == D3D12XBOX_TEXTURE_FILTER_MODE_MIN )
    {
      v20 = 16;
    }
    else if ( v30.FilterMode == D3D12XBOX_TEXTURE_FILTER_MODE_MAX )
    {
      v20 = 24;
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    v20 = 8;
  }
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_4C]
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  xmm0, [rsp+0A8h+var_54]
    vmovd   xmm1, r11d
    vmovss  dword ptr [rdi+20h], xmm0
    vmovd   xmm0, r8d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@7f7fffff
    vblendvps xmm0, xmm1, xmm6, xmm2
  }
  _RDI->BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
  *(_QWORD *)&_RDI->RegisterSpace = 0i64;
  _R11 = &v31;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  _RDI->ComparisonFunc = ComparisonFunc;
  _RDI->Filter = v19 | (4 * ((FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR) | (4 * (v20 | (FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR)))));
  _RDI->AddressU = v30.AddressU;
  _RDI->AddressV = v30.AddressV;
  _RDI->AddressW = v30.AddressW;
  _RDI->MaxAnisotropy = v30.MaxAnisotropy;
  _RDI->ShaderRegister = (unsigned __int8)codeSampler;
  __asm { vmovss  dword ptr [rdi+24h], xmm0 }
}

/*
==============
R_ChangeDepthHackNearClip
==============
*/

void __fastcall R_ChangeDepthHackNearClip(GfxCmdBufSourceState *source, unsigned int depthHackFlags, double _XMM2_8)
{
  unsigned int v6; 

  _RBX = source;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 610, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( (depthHackFlags & 0xFFFFFFFE) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 611, ASSERT_TYPE_ASSERT, "(!(depthHackFlags & ~(1 << 0)))", (const char *)&queryFormat, "!(depthHackFlags & ~RF_DEPTHHACK)") )
    __debugbreak();
  if ( depthHackFlags != (_RBX->renderFlags & 1) )
  {
    if ( ++_RBX->matrixVersions[1] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 573, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((matrixIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( matrixIndex )] < 0xffff") )
      __debugbreak();
    ++_RBX->matrixVersions[2];
    ++_RBX->matrixVersions[3];
    if ( _RBX->matrixVersions[2] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 587, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((CONST_SRC_CODE_VIEW_PROJECTION_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_VIEW_PROJECTION_MATRIX )] < 0xffff") )
      __debugbreak();
    if ( _RBX->matrixVersions[3] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 588, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX )] < 0xffff") )
      __debugbreak();
    _ECX = 0;
    v6 = depthHackFlags | _RBX->renderFlags & 0xFFFFFFFE;
    _RBX->renderFlags = v6;
    _EAX = v6 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, ecx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [rbx+730h], xmm0
    }
    *(_QWORD *)&_RBX->input.consts[3].xyz.y = 0i64;
    _RBX->input.consts[3].v[3] = 0.0;
    ++_RBX->constVersions[3];
  }
}

/*
==============
R_ChangeDepthRange
==============
*/
void R_ChangeDepthRange(GfxCmdBufState *state, GfxDepthRangeType depthRangeType)
{
  GfxDevice *device; 
  __int64 v11; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = state;
  if ( state->depthRangeType == depthRangeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1005, ASSERT_TYPE_SANITY, "( state->depthRangeType ) != ( depthRangeType )", "state->depthRangeType != depthRangeType\n\t%i, %i", state->depthRangeType, depthRangeType) )
    __debugbreak();
  _RDI->depthRangeType = depthRangeType;
  __asm { vmovss  xmm6, cs:__real@3f7c0000 }
  if ( depthRangeType != GFX_DEPTH_RANGE_FULL )
  {
    if ( depthRangeType == GFX_DEPTH_RANGE_SCENE )
    {
      __asm { vmovaps xmm0, xmm6 }
      goto LABEL_10;
    }
    if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL )
    {
      LODWORD(v11) = depthRangeType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 978, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for near clip depth: %d", v11) )
        __debugbreak();
    }
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
LABEL_10:
  __asm { vmovss  dword ptr [rdi+9F4h], xmm0 }
  if ( depthRangeType == GFX_DEPTH_RANGE_FULL || depthRangeType == GFX_DEPTH_RANGE_SCENE )
  {
LABEL_15:
    __asm { vxorps  xmm6, xmm6, xmm6 }
    goto LABEL_16;
  }
  if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL )
  {
    LODWORD(v11) = depthRangeType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 995, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for far clip depth: %d", v11) )
      __debugbreak();
    goto LABEL_15;
  }
LABEL_16:
  device = _RDI->device;
  __asm { vmovss  dword ptr [rdi+9F8h], xmm6 }
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1011, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+9F8h]; farValue
    vmovss  xmm2, dword ptr [rdi+9F4h]; nearValue
  }
  R_HW_SetViewport(device, &_RDI->viewport, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  R_HW_SetScissor(_RDI, &_RDI->scissor);
}

/*
==============
R_ChangeObjectPlacementRemote
==============
*/
void R_ChangeObjectPlacementRemote(GfxCmdBufSourceState *source, const GfxPlacement *placement)
{
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  R_ChangeObjectPlacement_Core(source, placement, *(float *)&_XMM2);
}

/*
==============
R_ChangeObjectPlacement_Core
==============
*/

void __fastcall R_ChangeObjectPlacement_Core(GfxCmdBufSourceState *source, const GfxPlacement *placement, double scale)
{
  char v7; 
  bool v23; 
  bool v39; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0B8h+var_28], xmm9 }
  _RBX = placement;
  __asm { vmovaps xmm9, xmm2 }
  if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 629, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
    __debugbreak();
  UnitQuatToAxis(&_RBX->quat, &axis);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0B8h+axis]
    vmovss  xmm3, dword ptr [rsp+0B8h+axis+4]
    vmovss  xmm5, dword ptr [rsp+0B8h+axis+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v7 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_78], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0B8h+var_80], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0B8h+var_88], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 632, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v60, v63, v66, v69);
    v7 = 0;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0B8h+axis+0Ch]
    vmovss  xmm3, dword ptr [rsp+0B8h+axis+10h]
    vmovss  xmm5, dword ptr [rsp+0B8h+axis+14h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v7 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_78], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0B8h+var_80], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0B8h+var_88], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 633, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v61, v64, v67, v70);
    v7 = 0;
    if ( v39 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0B8h+axis+18h]
    vmovss  xmm3, dword ptr [rsp+0B8h+axis+1Ch]
    vmovss  xmm5, dword ptr [rsp+0B8h+axis+20h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v7 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_78], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0B8h+var_80], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0B8h+var_88], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 634, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v62, v65, v68, v71) )
      __debugbreak();
  }
  R_MatrixNeedsRefresh(source, 0xAAu);
  R_MatrixChanged(source, 0xAAu);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+0B8h+origin], xmm0
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovaps xmm3, xmm9; scale
    vmovss  dword ptr [rsp+0B8h+origin+8], xmm0
    vmovss  dword ptr [rsp+0B8h+origin+4], xmm1
  }
  MatrixSet44(&source->matrices.matrix[10].m, &origin, &axis, *(float *)&_XMM3);
  __asm { vmovaps xmm9, [rsp+0B8h+var_28] }
}

/*
==============
R_ChangeObjectScaledPlacement
==============
*/
void R_ChangeObjectScaledPlacement(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  __asm { vmovss  xmm2, dword ptr [rdx+1Ch] }
  R_ChangeObjectPlacement_Core(source, &placement->base, *(double *)&_XMM2);
}

/*
==============
R_ChangeObjectScaledPlacementRemote
==============
*/
void R_ChangeObjectScaledPlacementRemote(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  __asm { vmovss  xmm2, dword ptr [rdx+1Ch] }
  R_ChangeObjectPlacement_Core(source, &placement->base, *(double *)&_XMM2);
}

/*
==============
R_ClearAllDynDescriptorRanges
==============
*/
void R_ClearAllDynDescriptorRanges(GfxCmdBufState *state)
{
  GfxDescriptorState *descState; 

  descState = state->descState;
  R_ClearDescriptorRangeSlots(descState, GRAPHICS_DESC_RANGE_START, descState->ranges[0].startSlot, descState->ranges[0].numSlots);
  R_ClearDescriptorRangeSlots(descState, HS_VIEW_RANGE, descState->ranges[1].startSlot, descState->ranges[1].numSlots);
  R_ClearDescriptorRangeSlots(descState, DS_VIEW_RANGE, descState->ranges[2].startSlot, descState->ranges[2].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_VIEW_RANGE_LOWER, descState->ranges[3].startSlot, descState->ranges[3].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_VIEW_RANGE_UPPER, descState->ranges[4].startSlot, descState->ranges[4].numSlots);
  R_ClearDescriptorRangeSlots(descState, GRAPHICS_VIEW_RANGE_LARGE_TABLE, 0, descState->ranges[7].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_RW_VIEW_RANGE, descState->ranges[8].startSlot, descState->ranges[8].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_DESC_RANGE_START, 0, descState->ranges[9].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, 0, descState->ranges[10].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_UAV_RANGE, 0, descState->ranges[12].numSlots);
}

/*
==============
R_ClearAllHullResources
==============
*/
void R_ClearAllHullResources(GfxCmdBufState *state)
{
  R_ClearDescriptorRangeSlots(state->descState, HS_VIEW_RANGE, 0, state->descState->ranges[1].numSlots);
}

/*
==============
R_ClearAllVertexBuffers
==============
*/
void R_ClearAllVertexBuffers(GfxCmdBufState *state)
{
  GfxDevice *device; 
  char *v3; 
  int v4; 
  unsigned int *m_pCurrent; 
  unsigned int *v6; 
  __int64 v7; 
  char v8[512]; 

  memset_0(v8, 0, sizeof(v8));
  device = state->device;
  v3 = v8;
  v4 = 32;
  m_pCurrent = device->m_Putter.m_pCurrent;
  if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, char *))device->m_pFunction[16].QueryInterface)(state->device, 0i64, 32i64, v8);
  }
  else
  {
    *m_pCurrent = 1077921280;
    v6 = m_pCurrent + 1;
    do
    {
      v7 = *((unsigned int *)v3 + 3);
      v3 += 16;
      *(_QWORD *)v6 = *((_QWORD *)v3 - 2) + (v7 << 48);
      v6 += 2;
      --v4;
    }
    while ( v4 );
    device->m_Putter.m_pCurrent = v6;
  }
}

/*
==============
R_ClearBuffer_Float
==============
*/

void __fastcall R_ClearBuffer_Float(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, double value, bool useMemset, PipeFlushMode pipeFlush)
{
  GfxDevice *device; 
  __int64 v9; 
  __int128 v10; 

  __asm { vshufps xmm2, xmm2, xmm2, 0 }
  device = state->device;
  __asm { vmovups [rsp+78h+var_38], xmm2 }
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v9 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + buffer->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int128 *, _DWORD, _QWORD))device->m_pFunction[18].QueryInterface)(device, v9 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v9 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, buffer->rwView.rwResource, &v10, 0, 0i64);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
}

/*
==============
R_ClearBuffer_Uint
==============
*/
void R_ClearBuffer_Uint(ComputeCmdBufState *state, const GfxWrappedRWBuffer *buffer, unsigned int value, bool useMemset, PipeFlushMode pipeFlush)
{
  GfxDevice *device; 
  __int64 v8; 
  int v9[4]; 

  device = state->device;
  v9[0] = value;
  v9[1] = value;
  v9[2] = value;
  v9[3] = value;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v8 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + buffer->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, int *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v8 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v8 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, buffer->rwView.rwResource, v9, 0, 0i64);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
}

/*
==============
R_ClearDepthViewport
==============
*/
void R_ClearDepthViewport(GfxCmdBufContext *context)
{
  const vec4_t *ClearColor; 
  GfxDescriptorState *descState; 
  GfxDevice *device; 
  float v16; 
  R_RT_Handle v17; 
  R_RT_DepthHandle v18; 

  _RAX = context->state;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0AB0h]
    vmovd   eax, xmm0
    vmovups [rsp+98h+var_38], ymm0
    vmovups ymmword ptr [rsp+98h+var_58.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v17);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2902, ASSERT_TYPE_ASSERT, "(depthRt.IsValid())", (const char *)&queryFormat, "depthRt.IsValid()") )
      __debugbreak();
  }
  _RBX = context->state;
  if ( _RBX->viewport.x || _RBX->viewport.y || _RBX->viewport.width != R_RT_Handle::GetSurface(&v17)->m_image.m_base.width || _RBX->viewport.height != R_RT_Handle::GetSurface(&v17)->m_image.m_base.height )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovups xmm6, xmmword ptr [rbx+0A04h]
    }
    _RSI = R_RT_Handle::GetSurface(&v17);
    if ( (_RSI->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, [rsp+98h+var_38]
      vmovss  xmm3, dword ptr [rsi+8E0h]
    }
    descState = _RBX->descState;
    device = _RBX->device;
    __asm
    {
      vmovups [rsp+98h+var_38], ymm0
      vmovups xmmword ptr [rsp+98h+var_58.m_surfaceID], xmm6
    }
    R_HW_ClearDepthViewport(device, descState, &v18, *(float *)&_XMM3, (GfxViewport *)&v17);
    __asm { vmovaps xmm6, [rsp+98h+var_18] }
  }
  else
  {
    if ( _RBX->rtGroup.m_colorRtCount )
      ClearColor = R_RT_ColorHandle::GetClearColor(_RBX->rtGroup.m_colorRts);
    else
      ClearColor = &colorBlack;
    if ( R_RT_Handle::IsValid(&_RBX->rtGroup.m_depthRt) )
      *(double *)&_XMM0 = R_RT_DepthHandle::GetClearDepth(&_RBX->rtGroup.m_depthRt);
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
    __asm { vmovss  dword ptr [rsp+98h+var_70], xmm0 }
    R_ClearScreenInternal(_RBX, &_RBX->rtGroup, 0x10u, ClearColor, 1u, v16, 0);
  }
}

/*
==============
R_ClearImage_Float
==============
*/

void __fastcall R_ClearImage_Float(ComputeCmdBufState *state, const GfxImage *image, double value, PipeFlushMode pipeFlush)
{
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  GfxDevice *device; 
  const GfxTexture *v13; 
  __int64 v14; 
  __int128 v16; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps xmm6, xmm2
    vshufps xmm6, xmm6, xmm6, 0
  }
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3007, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  textureId = image->textureId;
  __asm { vmovups [rsp+98h+var_58], xmm6 }
  Resident = R_Texture_GetResident(textureId);
  device = state->device;
  v13 = Resident;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v14 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v13->shaderRWView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int128 *, _DWORD, _QWORD))device->m_pFunction[18].QueryInterface)(device, v14 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v14 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, v13->shaderRWView.rwResource, &v16, 0, 0i64);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
R_ClearImage_Uint
==============
*/
void R_ClearImage_Uint(ComputeCmdBufState *state, const GfxImage *image, unsigned int value, PipeFlushMode pipeFlush)
{
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  GfxDevice *device; 
  const GfxTexture *v11; 
  __int64 v12; 
  int v13[4]; 

  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2988, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  textureId = image->textureId;
  v13[0] = value;
  v13[1] = value;
  v13[2] = value;
  v13[3] = value;
  Resident = R_Texture_GetResident(textureId);
  device = state->device;
  v11 = Resident;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v12 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v11->shaderRWView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, int *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v12 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v12 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, v11->shaderRWView.rwResource, v13, 0, 0i64);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
}

/*
==============
R_ClearResourceBuffers
==============
*/
void R_ClearResourceBuffers(GfxCmdBufState *state)
{
  unsigned int i; 
  __int64 v2; 

  for ( i = 0; i < 3; ++i )
  {
    v2 = (unsigned __int8)i;
    state->resourcesDirty[v2] = 0i64;
    state->resourcesClear[v2] = 0i64;
  }
}

/*
==============
R_ClearResourceBuffers
==============
*/
void R_ClearResourceBuffers(GfxCmdBufState *state, GfxShaderImageSetStage resourceSet)
{
  state->resourcesDirty[(unsigned __int8)resourceSet] = 0i64;
  state->resourcesClear[(unsigned __int8)resourceSet] = 0i64;
}

/*
==============
R_ClearRtGroup
==============
*/
void R_ClearRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, unsigned __int8 stencil, PipeFlushMode pipeFlush)
{
  const vec4_t *ClearColor; 
  float v11; 

  if ( rtGroup->m_colorRtCount )
    ClearColor = R_RT_ColorHandle::GetClearColor(rtGroup->m_colorRts);
  else
    ClearColor = &colorBlack;
  if ( R_RT_Handle::IsValid(&rtGroup->m_depthRt) )
    *(double *)&_XMM0 = R_RT_DepthHandle::GetClearDepth(&rtGroup->m_depthRt);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  [rsp+58h+var_30], xmm0 }
  R_ClearScreenInternal(state, rtGroup, whichToClear, ClearColor, 1u, v11, stencil);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
}

/*
==============
R_ClearRtGroup
==============
*/
void R_ClearRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil, PipeFlushMode pipeFlush)
{
  float v10; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+depth]
    vmovss  [rsp+48h+var_20], xmm0
  }
  R_ClearScreenInternal(state, rtGroup, whichToClear, mrtColor, mrtColorCount, v10, stencil);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
}

/*
==============
R_ClearScreen
==============
*/
void R_ClearScreen(GfxCmdBufState *state, unsigned __int8 whichToClear, unsigned __int8 stencil)
{
  const vec4_t *ClearColor; 
  float v8; 

  if ( state->rtGroup.m_colorRtCount )
    ClearColor = R_RT_ColorHandle::GetClearColor(state->rtGroup.m_colorRts);
  else
    ClearColor = &colorBlack;
  if ( R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
    *(double *)&_XMM0 = R_RT_DepthHandle::GetClearDepth(&state->rtGroup.m_depthRt);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  [rsp+58h+var_30], xmm0 }
  R_ClearScreenInternal(state, &state->rtGroup, whichToClear, ClearColor, 1u, v8, stencil);
}

/*
==============
R_ClearScreenInternal
==============
*/
void R_ClearScreenInternal(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  unsigned __int8 v16; 
  bool v17; 
  bool v18; 
  GfxDevice *device; 
  bool v22; 
  bool v23; 
  int m_colorRtCount; 
  int v27; 
  __int64 v32; 
  double v33; 
  double v34; 
  double v35; 
  float v36; 
  double v37; 
  R_RT_Handle v38; 
  R_RT_Group result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2845, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  v16 = whichToClear;
  v17 = (whichToClear & 0x80) == 0;
  if ( (whichToClear & 0x80) != 0 )
  {
    LODWORD(v32) = whichToClear;
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2846, ASSERT_TYPE_ASSERT, "( ( (whichToClear & ~GFX_CLEAR_VALID_FLAGS) == 0 ) )", "( whichToClear ) = %i", v32);
    v17 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+1A8h+depth]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v17 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  qword ptr [rsp+1A8h+var_180], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2847, ASSERT_TYPE_ASSERT, "( ( depth >= 0.0f && depth <= 1.0f ) )", "( depth ) = %g", v33) )
      __debugbreak();
  }
  device = state->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2852, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v22 = whichToClear == 0;
  if ( !whichToClear )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2866, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, xmm8
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v22 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  qword ptr [rsp+1A8h+var_170], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+1A8h+var_178], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  qword ptr [rsp+1A8h+var_180], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2867, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depth ) && ( depth ) <= ( 1.0f )", "depth not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v34, v35, v37) )
      __debugbreak();
  }
  R_RT_Group::As((R_RT_Group *)rtGroup, &result, 0);
  __asm { vmovss  dword ptr [rsp+1A8h+var_178], xmm6 }
  R_HW_Clear(device, state->descState, &result, whichToClear, mrtColor, mrtColorCount, v36, stencil);
  if ( (whichToClear & 0xF) != 0 )
  {
    m_colorRtCount = result.m_colorRtCount;
    v27 = 0;
    if ( result.m_colorRtCount )
    {
      do
        R_RT_Handle::ClearAuxDirty(&result.m_colorRts[v27++]);
      while ( v27 != m_colorRtCount );
    }
  }
  if ( (v16 & 0x30) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1A8h+result.m_depthRt.baseclass_0.m_surfaceID]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+1A8h+var_168.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v38);
      R_RT_Handle::ClearAuxDirty(&v38);
    }
    else if ( result.m_depthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+1A8h+var_58]
    vmovaps xmm8, [rsp+1A8h+var_68]
  }
}

/*
==============
R_ClearScreenLegacySlow
==============
*/
void R_ClearScreenLegacySlow(GfxCmdBufState *state, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  float v7; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+depth]
    vmovss  [rsp+48h+var_20], xmm0
  }
  R_ClearScreenInternal(state, &state->rtGroup, whichToClear, mrtColor, mrtColorCount, v7, stencil);
}

/*
==============
R_DeriveCodeMatrix
==============
*/
void R_DeriveCodeMatrix(GfxCmdBufSourceState *source, GfxCodeMatrices *activeMatrices, unsigned int baseIndex)
{
  unsigned int v12; 
  vec4_t v20; 
  tmat44_t<vec4_t> in1; 
  vec4_t vec; 
  vec4_t out; 

  _RDI = source;
  if ( !baseIndex )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+2610h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm1, ymmword ptr [rcx+2630h]
      vmovups ymmword ptr [rcx+20h], ymm1
    }
    R_MatrixChanged(source, 0xA0u);
    return;
  }
  if ( baseIndex == 2 )
  {
    R_DeriveProjectionMatrix(source);
    return;
  }
  if ( baseIndex != 4 )
  {
    if ( baseIndex == 6 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@00000000c18000000000000000000000
        vmovups xmmword ptr [rsp+0B8h+vec], xmm0
      }
      MatrixTransformVector44Aligned(&vec, &source->matrices.matrix[1].m, &out);
      MatrixTransformVector44Aligned(&out, &g_drawConsts.outdoorLookupMatrix, &v20);
      MatrixIdentity44(&in1);
      MatrixMultiply44Aligned(&in1, &g_drawConsts.outdoorLookupMatrix, &_RDI->matrices.matrix[6].m);
      __asm
      {
        vmovaps xmm1, xmmword ptr [rsp+0B8h+var_88]
        vaddps  xmm1, xmm1, xmmword ptr [rdi+1B0h]
        vmovups xmmword ptr [rdi+1B0h], xmm1
      }
      v12 = 166;
    }
    else
    {
      if ( baseIndex != 12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 845, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled case %i", baseIndex) )
          __debugbreak();
        return;
      }
      if ( source->constVersions[170] != source->matrixVersions[5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 698, ASSERT_TYPE_ASSERT, "(R_IsMatrixConstantUpToDate( source, CONST_SRC_CODE_WORLD_MATRIX ))", (const char *)&queryFormat, "R_IsMatrixConstantUpToDate( source, CONST_SRC_CODE_WORLD_MATRIX )") )
        __debugbreak();
      __asm
      {
        vmovups ymm1, ymmword ptr [rdi+2A0h]
        vmovups ymm0, ymmword ptr [rdi+280h]
        vmovups ymmword ptr [rsp+0B8h+in1+20h], ymm1
        vmovups ymmword ptr [rsp+0B8h+in1], ymm0
        vextractf128 xmm0, ymm1, 1
        vmovss  xmm1, dword ptr [rsp+0B8h+in1+34h]
        vsubss  xmm0, xmm0, dword ptr [rdi+2790h]
        vsubss  xmm2, xmm1, dword ptr [rdi+2794h]
        vmovss  dword ptr [rsp+0B8h+in1+30h], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+in1+38h]
        vsubss  xmm1, xmm0, dword ptr [rdi+2798h]
        vmovss  dword ptr [rsp+0B8h+in1+38h], xmm1
        vmovss  dword ptr [rsp+0B8h+in1+34h], xmm2
      }
      MatrixMultiply44Aligned(&in1, &_RDI->viewParms.viewMatrix.m, &_RDI->matrices.matrix[12].m);
      v12 = 172;
    }
    R_MatrixChanged(_RDI, v12);
    return;
  }
  if ( (source->renderFlags & 1) != 0 )
  {
    if ( source->constVersions[162] != source->matrixVersions[1] )
      R_DeriveProjectionMatrix(source);
    MatrixMultiply44Aligned(&_RDI->viewParms.viewMatrix.m, &_RDI->matrices.matrix[2].m, &_RDI->matrices.matrix[4].m);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+2690h]
      vmovups ymmword ptr [rcx+100h], ymm0
      vmovups ymm1, ymmword ptr [rcx+26B0h]
      vmovups ymmword ptr [rcx+120h], ymm1
    }
  }
  R_MatrixChanged(_RDI, 0xA4u);
}

/*
==============
R_DeriveProjectionMatrix
==============
*/
void R_DeriveProjectionMatrix(GfxCmdBufSourceState *source)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+2650h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm1, ymmword ptr [rcx+2670h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  if ( (source->renderFlags & 1) != 0 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm0, xmm1, dword ptr [rcx+2748h]
      vmovss  dword ptr [rcx+80h], xmm0
      vdivss  xmm1, xmm1, dword ptr [rcx+274Ch]
      vmovss  dword ptr [rcx+94h], xmm1
    }
    source->matrices.matrix[2].m.m[3].v[2] = source->viewParms.camera.zPlanes[0];
  }
  R_MatrixChanged(source, 0xA2u);
}

/*
==============
R_DiscardRenderTargetContents
==============
*/
void R_DiscardRenderTargetContents(const R_RT_ColorHandle *colorRT)
{
  unsigned __int16 v1; 
  const char *v5; 
  int v6; 
  const char *v7; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 

  v1 = colorRT->m_surfaceID & 0x7FFF;
  if ( !v1 )
    v1 = 0;
  v10.m_surfaceID = v1;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+8]
    vmovsd  xmm1, qword ptr [rcx+18h]
    vmovups xmmword ptr [rsp+88h+var_38.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+88h+var_38.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+88h+var_38.m_surfaceID]
    vmovups ymmword ptr [rsp+88h+var_58.m_surfaceID], ymm0
  }
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&v9);
    if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_10;
    v5 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v6 = 217;
    v7 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !v10.m_tracking.m_allocCounter )
      goto LABEL_10;
    v5 = "!this->m_tracking.m_allocCounter";
    v6 = 100;
    v7 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
    __debugbreak();
LABEL_10:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+88h+var_58.m_surfaceID]
    vmovups ymmword ptr [rsp+88h+var_38.m_surfaceID], ymm0
  }
  R_RT_Handle::SetAuxDirty(&v10);
}

/*
==============
R_DiscardRt
==============
*/
void R_DiscardRt(ComputeCmdBufState *state, R_RT_Handle *rtHandle)
{
  ;
}

/*
==============
R_DiscardRtGroup
==============
*/
void R_DiscardRtGroup(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToDicard)
{
  ;
}

/*
==============
R_DrawIndexedIndirectPrimitive
==============
*/
void R_DrawIndexedIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  __int64 v4; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v9; 
  GfxDescriptorState *v10; 
  int v11; 

  v4 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW_INDEXED;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW_INDEXED);
    descState = state->descState;
    v9 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v10 = state->descState;
    if ( v10->rootSignatureDirty )
      goto LABEL_12;
    v11 = 511;
    if ( v10->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v11 = 7680;
    if ( (v11 & v10->dirtyDescriptorRangeMask) != 0 || v10->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v10);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, __int64, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v9, 1i64, buffer, v4, 0i64, 0i64);
  }
}

/*
==============
R_DrawIndexedPrimitive
==============
*/
void R_DrawIndexedPrimitive(GfxCmdBufState *state, const GfxDrawPrimArgs *args)
{
  int primCount; 
  unsigned int vertIndexBase; 
  unsigned int v6; 
  GfxDevice *device; 
  GfxDescriptorState *descState; 
  GfxDescriptorState *v9; 
  int v10; 
  Material *material; 
  unsigned int techType; 
  int v13; 
  DXGI_FORMAT indexType; 
  int v15; 
  unsigned int v16; 
  DXGI_FORMAT v17; 
  __int64 v18; 
  unsigned int *m_pCurrent; 
  ID3D12Resource *indexBuffer; 
  __int64 baseIndex; 
  unsigned int *v22; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )", -2i64) )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    Profile_Begin(133);
    primCount = args->primCount;
    vertIndexBase = args->vertIndexBase;
    R_AssertValidRt(state);
    RB_TrackDrawPrimCall(args->trackFrameIndex, (GfxViewStatsTarget)args->viewStatsTarget, (GfxPrimStatsTarget)args->primStatsTarget, (GfxPrimStatsTriSource)args->triSource, args->primCount, 1u);
    v6 = R_IndexCountForPrimitiveType(state->primType, primCount);
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1528, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    if ( primCount > 0 )
    {
      descState = state->descState;
      if ( descState->rootSignatureType )
      {
        descState->rootSignatureDirty = 1;
        descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
      }
      R_SetPipelineState(state);
      v9 = state->descState;
      v10 = 511;
      if ( v9->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
        v10 = 7680;
      if ( v9->rootSignatureDirty || (v10 & v9->dirtyDescriptorRangeMask) != 0 || v9->anyCbDescsDirty )
        R_FlushDescriptorStateInternal(device, v9);
      if ( rg.gpuCpGroupedDrawsAllowed && (rg.gpuCpGroupedDrawsForDepthPrepassMaterial && ((material = (Material *)state->material, material == rgp.standardPrepassModelMaterial) || material == rgp.standardPrepassStaticModelMaterial || material == rgp.standardPrepassSplinedStaticModelMaterial || material == rgp.standardPrepassWorldMaterial || material == rgp.eidOnlyPrepassModelMaterial) || rg.gpuCpGroupedDrawsForShadowsAndDepthPrepasses && (techType = state->techType, techType <= 0x1B) && (v13 = 134479873, _bittest(&v13, techType))) )
      {
        indexType = state->indexType;
        if ( indexType != DXGI_FORMAT_R16_UINT && indexType != DXGI_FORMAT_R32_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1568, ASSERT_TYPE_ASSERT, "(state->indexType == DXGI_FORMAT_R16_UINT || state->indexType == DXGI_FORMAT_R32_UINT)", (const char *)&queryFormat, "state->indexType == GFX_INDEX_TYPE_USHORT || state->indexType == GFX_INDEX_TYPE_UINT") )
          __debugbreak();
        v15 = 4;
        if ( state->indexType == DXGI_FORMAT_R16_UINT )
          v15 = 2;
        v16 = v15 * args->baseIndex;
        R_ProfBeginNamedEvent(state, "DrawIndexedX");
        v17 = state->indexType;
        v18 = ((__int64 (__fastcall *)(ID3D12Resource *))state->indexBuffer->m_pFunction[3].Release)(state->indexBuffer) + v16;
        m_pCurrent = device->m_Putter.m_pCurrent;
        if ( m_pCurrent >= device->m_Putter.m_pLimit_Draw )
        {
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, _QWORD, unsigned int))device->m_pFunction[27].QueryInterface)(device, v18, (unsigned int)v17, v6, vertIndexBase);
        }
        else
        {
          *m_pCurrent = 1074056448;
          *(_QWORD *)(m_pCurrent + 1) = v18;
          m_pCurrent[3] = v17;
          m_pCurrent[4] = v6;
          m_pCurrent[5] = vertIndexBase;
          device->m_Putter.m_pCurrent = m_pCurrent + 6;
        }
        R_ProfEndNamedEvent(state);
        state->isIndexBufferBound = 0;
      }
      else
      {
        if ( !state->isIndexBufferBound )
        {
          indexBuffer = state->indexBuffer;
          state->indexBuffer = NULL;
          R_SetIndicesWithType(state, indexBuffer, state->indexType);
        }
        baseIndex = (unsigned int)args->baseIndex;
        v22 = device->m_Putter.m_pCurrent;
        if ( v22 >= device->m_Putter.m_pLimit_Draw )
        {
          ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, __int64, unsigned int, _DWORD))device->m_pFunction[4].AddRef)(device, v6, 1i64, baseIndex, vertIndexBase, 0);
        }
        else
        {
          *v22 = 1074053632;
          v22[1] = 1;
          v22[2] = baseIndex;
          v22[3] = v6;
          v22[4] = vertIndexBase;
          v22[5] = 0;
          device->m_Putter.m_pCurrent = v22 + 6;
        }
      }
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
R_DrawIndexedPrimitive_BisectIgnore
==============
*/
bool R_DrawIndexedPrimitive_BisectIgnore(GfxCmdBufState *state)
{
  int v1; 

  if ( !g_drawConsts.primBisect )
    return 0;
  if ( ((unsigned __int8)&g_drawConsts.primCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_drawConsts.primCount) )
    __debugbreak();
  v1 = _InterlockedIncrement(&g_drawConsts.primCount);
  return v1 < g_drawConsts.primBegin || v1 > g_drawConsts.primEnd;
}

/*
==============
R_DrawIndexedPrimitive_Validate
==============
*/
void R_DrawIndexedPrimitive_Validate(GfxCmdBufState *state)
{
  unsigned int i; 
  unsigned int *streamVersions; 
  __int64 v4; 
  __int64 v5; 

  for ( i = 0; i < 3; ++i )
  {
    if ( state->resourcesDirty[(unsigned __int8)i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1414, ASSERT_TYPE_ASSERT, "(R_GetDirtyResourceBuffers( state, static_cast<GfxShaderImageSetStage>(resourceSet) ) == 0)", (const char *)&queryFormat, "R_GetDirtyResourceBuffers( state, static_cast<GfxShaderImageSetStage>(resourceSet) ) == 0") )
      __debugbreak();
  }
  streamVersions = state->streamVersions;
  v4 = 5i64;
  do
  {
    if ( *streamVersions )
    {
      LODWORD(v5) = *streamVersions;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1420, ASSERT_TYPE_ASSERT, "( ( state->streamVersions[streamIndex] == 0 ) )", "( state->streamVersions[streamIndex] ) = %i", v5) )
        __debugbreak();
    }
    ++streamVersions;
    --v4;
  }
  while ( v4 );
}

/*
==============
R_DrawIndirectPrimitive
==============
*/
void R_DrawIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  __int64 v4; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v9; 
  GfxDescriptorState *v10; 
  int v11; 

  v4 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW);
    descState = state->descState;
    v9 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v10 = state->descState;
    if ( v10->rootSignatureDirty )
      goto LABEL_12;
    v11 = 511;
    if ( v10->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v11 = 7680;
    if ( (v11 & v10->dirtyDescriptorRangeMask) != 0 || v10->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v10);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, __int64, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v9, 1i64, buffer, v4, 0i64, 0i64);
  }
}

/*
==============
R_DrawInstancedIndexedPrimitive
==============
*/
void R_DrawInstancedIndexedPrimitive(GfxCmdBufState *state, const GfxDrawPrimArgs *args, unsigned int instanceCount)
{
  GfxDevice *device; 
  int primCount; 
  unsigned int vertIndexBase; 
  GfxDescriptorState *descState; 
  GfxDescriptorState *v10; 
  int v11; 
  unsigned int v12; 
  __int64 baseIndex; 
  __int64 v14; 
  unsigned int *m_pCurrent; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    device = state->device;
    primCount = args->primCount;
    vertIndexBase = args->vertIndexBase;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1640, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    descState = state->descState;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v10 = state->descState;
    if ( v10->rootSignatureDirty )
      goto LABEL_15;
    v11 = 511;
    if ( v10->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v11 = 7680;
    if ( (v11 & v10->dirtyDescriptorRangeMask) != 0 || v10->anyCbDescsDirty )
LABEL_15:
      R_FlushDescriptorStateInternal(state->device, v10);
    R_AssertValidRt(state);
    RB_TrackDrawPrimCall(args->trackFrameIndex, (GfxViewStatsTarget)args->viewStatsTarget, (GfxPrimStatsTarget)args->primStatsTarget, (GfxPrimStatsTriSource)args->triSource, args->primCount, instanceCount);
    v12 = R_IndexCountForPrimitiveType(state->primType, primCount);
    baseIndex = (unsigned int)args->baseIndex;
    v14 = v12;
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Draw )
    {
      ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64, unsigned int, _DWORD))device->m_pFunction[4].AddRef)(device, v14, instanceCount, baseIndex, vertIndexBase, 0);
    }
    else
    {
      *m_pCurrent = 1074053632;
      m_pCurrent[1] = instanceCount;
      m_pCurrent[2] = baseIndex;
      m_pCurrent[3] = v14;
      m_pCurrent[4] = vertIndexBase;
      m_pCurrent[5] = 0;
      device->m_Putter.m_pCurrent = m_pCurrent + 6;
    }
  }
}

/*
==============
R_DrawListEnd
==============
*/
void R_DrawListEnd(GfxCmdBufContext *context, GfxDrawCallOutput *drawOutput)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext result[2]; 

  state = context->state;
  source = context->source;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->rtGroup.m_colorRtCount || R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+result.source+10h], xmm0
    }
    LOWORD(result[0].source) = 0;
    LODWORD(result[0].state) = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+result.source]
      vmovups ymmword ptr [rsp+58h+result.source], ymm1
    }
    R_HW_SetRenderTargets(state, 0, NULL, (R_RT_DepthHandle *)result);
    R_RT_Tracking_GroupRefDecrement(&state->rtGroup);
    state->rtGroup.m_colorRtCount = 0;
    state->rtGroup.m_depthRt.m_surfaceID = 0;
    state->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
    state->rtGroup.m_depthRt.m_tracking.m_name = NULL;
    state->rtGroup.m_depthRt.m_tracking.m_location = NULL;
    state->rtGroup.m_vrsRt.m_surfaceID = 0;
    state->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
    state->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
    state->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
  }
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
}

/*
==============
R_DrawListStart
==============
*/
bool R_DrawListStart(GfxCmdBufStateLocal *state, GfxCmdBufSourceState *source, const GfxViewInfo *viewInfo, const GfxViewParms *viewParms, const GfxViewParms *prevFrameViewParms, GfxDrawCallOutput *drawOutput)
{
  GfxConstantBufferAllocations *p_immediateConstantBufferAllocations; 
  GfxDescriptorState *p_immediateDescState; 
  int v12; 
  GfxCmdBufContext result; 

  R_InitCmdBufSourceState(source, &viewInfo->input);
  R_BeginViewInternal(source, &viewInfo->sceneDef, viewParms, prevFrameViewParms);
  if ( drawOutput->cmdBuf.useImmediateContext )
  {
    p_immediateConstantBufferAllocations = &g_dx.immediateConstantBufferAllocations;
    state->device = g_dx.immediateContext;
    p_immediateDescState = &g_dx.immediateDescState;
  }
  else
  {
    state->device = drawOutput->cmdBuf.device;
    p_immediateDescState = &drawOutput->cmdBuf.descState;
    p_immediateConstantBufferAllocations = &drawOutput->cmdBuf.constantBufferAllocations;
  }
  state->constantBufferAllocations = p_immediateConstantBufferAllocations;
  state->descState = p_immediateDescState;
  v12 = R_CheckReserveBuffers(state);
  if ( v12 )
  {
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_InitCmdBufState(state);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext(&result);
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
    LOBYTE(v12) = 1;
  }
  return v12;
}

/*
==============
R_DrawMultiIndexedIndirectPrimitive
==============
*/
void R_DrawMultiIndexedIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW_INDEXED;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW_INDEXED);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
R_DrawMultiIndirectPrimitive
==============
*/
void R_DrawMultiIndirectPrimitive(GfxCmdBufState *state, ID3D12Resource *buffer, unsigned int offset, unsigned int drawCount)
{
  __int64 v5; 
  GfxDevice *device; 
  ID3D12CommandSignature *CommandSignature; 
  GfxDescriptorState *descState; 
  ID3D12CommandSignature *v11; 
  GfxDescriptorState *v12; 
  int v13; 

  v5 = offset;
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !R_DrawIndexedPrimitive_BisectIgnore(state) )
  {
    R_FlushConstantBuffers(state);
    R_FlushResourceBuffers(state);
    R_DrawIndexedPrimitive_Validate(state);
    R_AssertValidRt(state);
    device = state->device;
    state->commandSignatureType = GFX_COMMAND_SIGNATURE_DRAW;
    CommandSignature = R_GetCommandSignature(GFX_COMMAND_SIGNATURE_DRAW);
    descState = state->descState;
    v11 = CommandSignature;
    if ( descState->rootSignatureType )
    {
      descState->rootSignatureDirty = 1;
      descState->rootSignatureType = GRAPHICS_DEFAULT_ROOT_SIGNATURE;
    }
    R_SetPipelineState(state);
    v12 = state->descState;
    if ( v12->rootSignatureDirty )
      goto LABEL_12;
    v13 = 511;
    if ( v12->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      v13 = 7680;
    if ( (v13 & v12->dirtyDescriptorRangeMask) != 0 || v12->anyCbDescsDirty )
LABEL_12:
      R_FlushDescriptorStateInternal(device, v12);
    ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, _QWORD, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, v11, drawCount, buffer, v5, 0i64, 0i64);
  }
}

/*
==============
R_DrawSurfs_Viewport
==============
*/
void R_DrawSurfs_Viewport(GfxCmdBufContext *context)
{
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  GfxDevice *device; 
  __int64 v9; 
  GfxViewport outViewport; 

  source = context->source;
  R_Set3D(context->source);
  if ( (*((_BYTE *)source + 11668) & 2) != 0 )
  {
    R_GetViewport(source, &outViewport);
    _RBX = context->state;
    height = outViewport.height;
    if ( _RBX->viewport.x != outViewport.x || _RBX->viewport.y != outViewport.y || _RBX->viewport.width != outViewport.width || _RBX->viewport.height != outViewport.height || _RBX->scissor.x != outViewport.x || _RBX->scissor.y != outViewport.y || _RBX->scissor.width != outViewport.width || _RBX->scissor.height != outViewport.height )
    {
      if ( !outViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
        __debugbreak();
      if ( !height )
      {
        LODWORD(v9) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v9) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+48h+outViewport.x]
        vmovss  xmm3, dword ptr [rbx+9F8h]; farValue
        vmovss  xmm2, dword ptr [rbx+9F4h]; nearValue
      }
      device = _RBX->device;
      __asm { vmovups xmmword ptr [rbx+0A04h], xmm0 }
      R_HW_SetViewport(device, &outViewport, *(float *)&_XMM2, *(float *)&_XMM3);
      R_HW_SetScissor(_RBX, &outViewport);
    }
    R_UpdateViewport(context->source, &outViewport);
  }
}

/*
==============
R_DynamicResolutionForceRendertargetConstant
==============
*/
void R_DynamicResolutionForceRendertargetConstant(GfxCmdBufSourceState *source, unsigned int w, unsigned int h)
{
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rcx+740h], xmm0
    vdivss  xmm0, xmm1, xmm0
    vmovss  dword ptr [rcx+748h], xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovss  dword ptr [rcx+744h], xmm2
    vdivss  xmm1, xmm1, xmm2
    vmovss  dword ptr [rcx+74Ch], xmm1
  }
  ++source->constVersions[4];
  *((_BYTE *)source + 11668) |= 0x40u;
}

/*
==============
R_FlushConstantBuffers
==============
*/
void R_FlushConstantBuffers(GfxCmdBufState *state)
{
  GfxCmdBufState *v1; 
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  unsigned int *v6; 
  int v7; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  GfxDescriptorState *descState; 
  void *bufferData; 
  int v16; 
  int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int *v21; 
  unsigned int v23; 
  int v24; 

  v1 = state;
  v2 = 0;
  v23 = 0;
  v3 = 3;
  if ( v1->technique->stageConfig != MTL_TESSELLATION_STAGES )
    v3 = 1;
  v18 = v3;
  do
  {
    v4 = (unsigned __int8)v2;
    _EDX = v1->constantsDirty[(unsigned __int8)v2];
    v6 = &v1->constantsDirty[(unsigned __int8)v2];
    v20 = (unsigned __int8)v2;
    v21 = v6;
    if ( _EDX )
    {
      v7 = (unsigned __int8)v2;
      v17 = (unsigned __int8)v2;
      do
      {
        __asm { tzcnt   r15d, edx }
        v24 = _EDX;
        v16 = (1 << _ER15) ^ _EDX;
        if ( v7 )
        {
          switch ( v7 )
          {
            case 1:
              v9 = 80i64;
              break;
            case 2:
              v9 = 32i64;
              break;
            case 3:
              v9 = 48i64;
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1173, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
                __debugbreak();
              v1 = state;
              v4 = v20;
              v9 = 0i64;
              break;
          }
        }
        else
        {
          v9 = 16i64;
        }
        v10 = _ER15;
        if ( _ER15 < _ER15 + 1 )
        {
          v11 = 14 * v4;
          v19 = 14 * v4;
          v12 = _ER15;
          v13 = v9 + v12 * 96;
          do
          {
            descState = v1->descState;
            bufferData = v1->constants[0][_ER15 + v11 + v10 - _ER15].bufferData;
            if ( v10 >= 0xE )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1136, ASSERT_TYPE_ASSERT, "(slot < 14)", (const char *)&queryFormat, "slot < R_MAX_SHADER_CONSTANT_BUFFERS") )
                __debugbreak();
              v1 = state;
              v11 = v19;
            }
            if ( *(void **)((char *)&descState->cbDescs[0][0].location + v13) != bufferData )
            {
              *(unsigned __int64 *)((char *)&descState->cbDescs[0][0].location + v13) = (unsigned __int64)bufferData;
              *(&descState->cbDescs[0][0].dirty + v13) = 1;
              descState->anyCbDescsDirty = 1;
            }
            if ( (void *)descState->cbDescs[v12][0].location != bufferData )
            {
              descState->cbDescs[v12][0].location = (unsigned __int64)bufferData;
              descState->cbDescs[v12][0].dirty = 1;
              descState->anyCbDescsDirty = 1;
            }
            ++v10;
            v13 += 96i64;
            ++v12;
          }
          while ( v10 < _ER15 + 1 );
        }
        _EDX = v16;
        v7 = v17;
        v4 = v20;
      }
      while ( 1 << _ER15 != v24 );
      v2 = v23;
      v6 = v21;
    }
    ++v2;
    *v6 = 0;
    v23 = v2;
  }
  while ( v2 <= v18 );
}

/*
==============
R_FlushResourceBuffers
==============
*/
void R_FlushResourceBuffers(GfxCmdBufState *state)
{
  unsigned int v1; 
  GfxCmdBufState *v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  unsigned __int64 *v5; 
  int v7; 
  int v9; 
  char *v12; 
  GfxDescriptorState *descState; 
  unsigned int v14; 
  char *v15; 
  int v16; 
  unsigned int v17; 
  char *v18; 
  __int64 v19; 
  _QWORD *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned __int64 *v27; 
  unsigned int v29; 
  int v30; 
  char *v31; 

  LOBYTE(v1) = 0;
  v25 = 0i64;
  v29 = 0;
  v2 = state;
  v3 = 0i64;
  do
  {
    v4 = v1 + 1;
    v5 = &v2->resourcesDirty[(unsigned __int8)v1];
    _R8 = *v5;
    v27 = v5;
    if ( *v5 )
    {
      v7 = v4;
      v30 = v4;
      do
      {
        __asm { tzcnt   r13, r8 }
        v9 = 0;
        _RDX = ~_R8 & (-1i64 << _R13);
        __asm { tzcnt   rbx, rdx }
        v26 = _RBX;
        _R8 &= ~(0xFFFFFFFFFFFFFFFFui64 >> (64 - (unsigned __int8)_RBX));
        v12 = (char *)v2->shaderResourceViews + 16 * (unsigned int)_R13 + 16 * v3;
        v24 = _R8;
        v31 = v12;
        if ( v7 != 1 )
        {
          if ( v7 == 2 )
          {
            v9 = 2;
          }
          else if ( v7 == 3 )
          {
            v9 = 13;
          }
          else
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 433, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
              __debugbreak();
            _R8 = v24;
            v12 = (char *)v2->shaderResourceViews + 16 * (unsigned int)_R13 + 16 * v3;
          }
        }
        descState = v2->descState;
        v14 = _R13;
        if ( (unsigned int)_R13 < (unsigned int)_RBX )
        {
          do
          {
            v15 = &v12[16 * (v14 - (unsigned int)_R13)];
            if ( *((_DWORD *)v15 + 2) <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 440, ASSERT_TYPE_ASSERT, "(!bufferView.IsNull())", "%s\n\tResource buffer view is null.", "!bufferView.IsNull()") )
              __debugbreak();
            v16 = *((_DWORD *)v15 + 2);
            v17 = v9;
            if ( v16 )
            {
              if ( v9 == 13 )
                v17 = 4 - (v14 < descState->ranges[3].numSlots);
              v18 = (char *)descState + 32 * v17;
              v19 = v14 - *((_DWORD *)v18 + 2);
              if ( *((_DWORD *)v18 + 4) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 625, ASSERT_TYPE_ASSERT, "(range->type != DESCRIPTOR_RANGE_BUFFER)", (const char *)&queryFormat, "range->type != DESCRIPTOR_RANGE_BUFFER") )
                __debugbreak();
              if ( (unsigned int)v19 >= *((_DWORD *)v18 + 3) )
              {
                LODWORD(v23) = *((_DWORD *)v18 + 3);
                LODWORD(v22) = v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 627, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( range->numSlots )", "slot doesn't index range->numSlots\n\t%i not in [0, %i)", v22, v23) )
                  __debugbreak();
              }
              if ( *((_DWORD *)v18 + 3) <= 0x28u )
              {
                v20 = (_QWORD *)*((_QWORD *)v18 + 4);
                v21 = 1i64 << v17;
                if ( *((_DWORD *)v20 + v19 + 2) == v16 )
                  LODWORD(v21) = 0;
                descState->dirtyDescriptorRangeMask |= v21;
                *v20 |= 1i64 << v19;
                *((_DWORD *)v20 + v19 + 2) = v16;
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 630, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_SetDescriptorInRange cannot be called on persistent table") )
              {
                __debugbreak();
              }
            }
            v12 = v31;
            ++v14;
          }
          while ( v14 < v26 );
          _R8 = v24;
          v2 = state;
          v3 = v25;
        }
        v7 = v30;
      }
      while ( _R8 );
      v5 = v27;
    }
    *v5 = 0i64;
    v3 += 40i64;
    v1 = v29 + 1;
    v25 = v3;
    v29 = v1;
  }
  while ( v1 < 3 );
}

/*
==============
R_FlushResourceTransitions
==============
*/
void R_FlushResourceTransitions(CmdBufState *state)
{
  GfxDevice *device; 
  GfxDescriptorState *descState; 
  unsigned int resourceTransitionCount; 

  R_LockIfGfxImmediateContext(state->device);
  device = state->device;
  descState = state->descState;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 180, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 181, ASSERT_TYPE_ASSERT, "(descState)", (const char *)&queryFormat, "descState") )
    __debugbreak();
  resourceTransitionCount = state->resourceTransitionCount;
  if ( resourceTransitionCount )
  {
    if ( resourceTransitionCount > 0x20 )
    {
      R_WarnOncePerFrame(R_WARN_RESOURCE_BARRIER_BATCH, resourceTransitionCount, 32i64, "Resource Transitions");
      resourceTransitionCount = state->resourceTransitionCount;
    }
    R_DX12_TransitionResources(device, descState, state->resourceTransitions, resourceTransitionCount);
    state->resourceTransitionCount = 0;
  }
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_FlushStreamSources
==============
*/
void R_FlushStreamSources(GfxCmdBufState *state, unsigned int vertexCount)
{
  GfxDevice *device; 
  unsigned int *streamVersions; 
  GfxCmdBufStream *streams; 
  unsigned int i; 
  unsigned int v6; 
  ID3D12Resource *buffer; 
  unsigned int *v8; 
  __int64 offset; 
  unsigned int stride; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int *m_pCurrent; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  unsigned int v18; 
  char v19[16]; 
  unsigned __int64 val; 
  int v21; 

  device = state->device;
  streamVersions = state->streamVersions;
  streams = state->streams;
  for ( i = 0; i < 5; ++i )
  {
    v6 = *streamVersions;
    if ( *streamVersions > 1 )
    {
      R_WarnOncePerFrame(R_WARN_STREAM_SET_REDUNDANTLY, i);
      v6 = *streamVersions;
    }
    if ( v6 )
    {
      buffer = streams->buffer;
      if ( streams->buffer )
        goto LABEL_15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2271, ASSERT_TYPE_ASSERT, "(stream->buffer)", (const char *)&queryFormat, "stream->buffer") )
        __debugbreak();
      buffer = streams->buffer;
      if ( streams->buffer )
      {
LABEL_15:
        offset = streams->offset;
        stride = streams->stride;
        if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
          __debugbreak();
        ((void (__fastcall *)(ID3D12Resource *, char *))buffer->m_pFunction[3].AddRef)(buffer, v19);
        v11 = truncate_cast<unsigned int,unsigned __int64>(val);
        v12 = ((__int64 (__fastcall *)(ID3D12Resource *))buffer->m_pFunction[3].Release)(buffer);
        if ( v21 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1247, ASSERT_TYPE_ASSERT, "(resource.Height == 1)", (const char *)&queryFormat, "resource.Height == 1") )
          __debugbreak();
        if ( v11 <= (unsigned int)offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1253, ASSERT_TYPE_ASSERT, "(size > offset)", (const char *)&queryFormat, "size > offset") )
          __debugbreak();
        m_pCurrent = device->m_Putter.m_pCurrent;
        v16 = v12 + offset;
        v18 = stride;
        v17 = v11 - offset;
        if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
        {
          ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, __int64 *))device->m_pFunction[16].QueryInterface)(device, i, 1i64, &v16);
        }
        else
        {
          *m_pCurrent = i + 1073858048;
          *(_QWORD *)(m_pCurrent + 1) = v16 + ((unsigned __int64)v18 << 48);
          device->m_Putter.m_pCurrent = m_pCurrent + 3;
        }
      }
      else
      {
        if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
          __debugbreak();
        v8 = device->m_Putter.m_pCurrent;
        v14 = 0i64;
        v15 = 0i64;
        if ( v8 >= device->m_Putter.m_pLimit_Api )
        {
          ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, __int64 *))device->m_pFunction[16].QueryInterface)(device, i, 1i64, &v14);
        }
        else
        {
          *v8 = i + 1073858048;
          *(_QWORD *)(v8 + 1) = v14 + ((unsigned __int64)HIDWORD(v15) << 48);
          device->m_Putter.m_pCurrent = v8 + 3;
        }
      }
      *streamVersions = 0;
    }
    ++streamVersions;
    ++streams;
  }
}

/*
==============
R_ForceSetViewportAndScissorSeparate
==============
*/
void R_ForceSetViewportAndScissorSeparate(GfxCmdBufState *state, const GfxViewport *viewport, const GfxViewport *scissor)
{
  GfxDevice *device; 
  __int64 v10; 
  int v11; 

  _RBX = viewport;
  _RDI = state;
  if ( !viewport->width )
  {
    v11 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v11) )
      __debugbreak();
  }
  if ( !_RBX->height )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v10) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm3, dword ptr [rdi+9F8h]; farValue
    vmovss  xmm2, dword ptr [rdi+9F4h]; nearValue
  }
  device = _RDI->device;
  __asm { vmovups xmmword ptr [rdi+0A04h], xmm0 }
  R_HW_SetViewport(device, _RBX, *(float *)&_XMM2, *(float *)&_XMM3);
  R_HW_SetScissor(_RDI, scissor);
}

/*
==============
R_GetActiveMatrix
==============
*/
const GfxMatrix *R_GetActiveMatrix(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  return (const GfxMatrix *)((char *)source + 64 * (unsigned __int64)(matrixIndex - 160));
}

/*
==============
R_GetActiveMatrixForEdit
==============
*/
GfxMatrix *R_GetActiveMatrixForEdit(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  R_MatrixNeedsRefresh(source, matrixIndex);
  R_MatrixChanged(source, matrixIndex);
  return (GfxMatrix *)((char *)source + 64 * (unsigned __int64)(matrixIndex - 160));
}

/*
==============
R_GetClipDepthNear
==============
*/
float R_GetClipDepthNear(GfxDepthRangeType depthRangeType)
{
  if ( depthRangeType != GFX_DEPTH_RANGE_FULL )
  {
    if ( depthRangeType == GFX_DEPTH_RANGE_SCENE )
    {
      __asm { vmovss  xmm0, cs:__real@3f7c0000 }
      return *(float *)&_XMM0;
    }
    if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 978, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for near clip depth: %d", depthRangeType) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
R_GetRenderTargetSize
==============
*/
void R_GetRenderTargetSize(GfxRenderTargetId targetId, unsigned int *width, unsigned int *height)
{
  R_RT_Handle result; 

  if ( (unsigned __int8)targetId > R_RENDERTARGET_DISPLAY_BUFFER_PREV_FRONTEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2698, ASSERT_TYPE_ASSERT, "( 0 ) <= ( targetId ) && ( targetId ) <= ( R_RENDERTARGET_COUNT - 1 )", "targetId not in [0, R_RENDERTARGET_COUNT - 1]\n\t%i not in [%i, %i]", (unsigned __int8)targetId, 0i64, 9) )
    __debugbreak();
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2699, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2700, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  R_RT_GetGlobal(&result, targetId);
  *width = R_RT_Handle::GetSurface(&result)->m_image.m_base.width;
  *height = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
}

/*
==============
R_GetRequiredClearFlags
==============
*/
__int64 R_GetRequiredClearFlags(const R_RT_Group *rtGroup)
{
  int v2; 
  int m_colorRtCount; 
  unsigned int v5; 
  __int64 v6; 
  unsigned __int16 m_surfaceID; 
  R_RT_Handle *v8; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  R_RT_Handle v13; 

  v2 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  _R14 = rtGroup;
  v5 = 0;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v6 = v5;
      m_surfaceID = _R14->m_colorRts[v6].m_surfaceID;
      v8 = &_R14->m_colorRts[v6];
      if ( m_surfaceID )
      {
        R_RT_Handle::GetSurface(&_R14->m_colorRts[v6]);
      }
      else if ( _R14->m_colorRts[v6].m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      {
        __debugbreak();
      }
      if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
        __debugbreak();
      if ( (v8->m_surfaceID & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 176, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", (const char *)&queryFormat, "!this->IsReadOnly()") )
        __debugbreak();
      m_rtFlagsInternal = R_RT_Handle::GetSurface(v8)->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x800) != 0 )
      {
        if ( (m_rtFlagsInternal & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
          __debugbreak();
        v2 |= 0xFu;
      }
      ++v5;
    }
    while ( v5 != m_colorRtCount );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+88h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v13);
    if ( R_RT_Handle::GetAuxDirty(&v13) )
      v2 |= (R_RT_Handle::GetSurface(&v13)->m_rtFlags & 0x80 | 0x40u) >> 2;
  }
  else if ( v13.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v13.m_surfaceID) )
  {
    __debugbreak();
    return (unsigned __int8)v2;
  }
  return (unsigned __int8)v2;
}

/*
==============
R_GetShaderCodeMatrix
==============
*/
tmat44_t<vec4_t> *R_GetShaderCodeMatrix(GfxCmdBufSourceState *source, unsigned int sourceIndex)
{
  __int64 v2; 
  unsigned __int64 v4; 
  const char *CodeConstantName; 
  unsigned __int16 v6; 
  unsigned int forceTransposeMatrixChange; 
  int v8; 
  const tmat44_t<vec4_t> *p_m; 
  tmat44_t<vec4_t> *v10; 
  __int64 v13; 
  bool v14; 
  unsigned int v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  tmat44_t<vec4_t> *v35; 
  unsigned __int64 v36; 
  unsigned int v37; 
  tmat44_t<vec4_t> *v38; 
  __int64 v39; 
  __int64 v40; 
  tmat44_t<vec4_t> out; 

  v2 = sourceIndex;
  v4 = sourceIndex - 160;
  if ( !source->matrixVersions[v4 >> 1] )
  {
    CodeConstantName = R_GetCodeConstantName(sourceIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 860, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((sourceIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)])", "%s\n\tMatrix %s hasn't been set, but the shader needs it", "source->matrixVersions[MATRIX_VERSION_INDEX( sourceIndex )]", CodeConstantName) )
      __debugbreak();
  }
  v6 = source->matrixVersions[v4 >> 1];
  if ( source->constVersions[v2] == v6 )
  {
    if ( (unsigned int)v4 >= 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 868, ASSERT_TYPE_ASSERT, "(matrixIndex < 31)", (const char *)&queryFormat, "matrixIndex < 31") )
      __debugbreak();
    forceTransposeMatrixChange = source->forceTransposeMatrixChange;
    if ( (forceTransposeMatrixChange & (1 << v4)) != 0 )
    {
      v8 = forceTransposeMatrixChange & ~(1 << v4);
      p_m = &source->matrices.matrix[(unsigned __int64)(unsigned int)v4].m;
      source->forceTransposeMatrixChange = v8;
      v10 = (tmat44_t<vec4_t> *)&p_m[14];
      if ( (((_DWORD)v2 - 168) & 0xFFFFFFFD) != 0 )
        MatrixTranspose44Aligned(p_m, v10);
      else
        R_SetPreciseWorldMatrixForShader(p_m, v10);
    }
    _RDI = &source->matrices.matrix[v4].m;
    MatrixTranspose44Aligned(_RDI, &out);
    __asm { vmovss  xmm0, dword ptr [rsp+0C8h+out] }
    v13 = (v4 + 14) << 6;
    v14 = (GfxCmdBufSourceState *)((char *)source + v13) == NULL;
    _RBX = (char *)source + v13;
    __asm { vucomiss xmm0, dword ptr [rbx] }
    if ( !v14 )
      goto LABEL_48;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+out+4]
      vucomiss xmm0, dword ptr [rbx+4]
    }
    if ( !v14 )
      goto LABEL_48;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+out+8]
      vucomiss xmm0, dword ptr [rbx+8]
    }
    if ( !v14 )
      goto LABEL_48;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+out+0Ch]
      vucomiss xmm0, dword ptr [rbx+0Ch]
    }
    if ( !v14 )
    {
LABEL_48:
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+out+10h]
        vucomiss xmm0, dword ptr [rdi+390h]
      }
      if ( !v14 )
        goto LABEL_49;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+out+14h]
        vucomiss xmm0, dword ptr [rdi+394h]
      }
      if ( !v14 )
        goto LABEL_49;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+out+18h]
        vucomiss xmm0, dword ptr [rdi+398h]
      }
      if ( !v14 )
        goto LABEL_49;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+out+1Ch]
        vucomiss xmm0, dword ptr [rdi+39Ch]
      }
      if ( !v14 )
      {
LABEL_49:
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+out+20h]
          vucomiss xmm0, dword ptr [rdi+3A0h]
        }
        if ( !v14 )
          goto LABEL_24;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+out+24h]
          vucomiss xmm0, dword ptr [rdi+3A4h]
        }
        if ( !v14 )
          goto LABEL_24;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+out+28h]
          vucomiss xmm0, dword ptr [rdi+3A8h]
        }
        if ( !v14 )
          goto LABEL_24;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+out+2Ch]
          vucomiss xmm0, dword ptr [rdi+3ACh]
        }
        if ( !v14 )
        {
LABEL_24:
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+out+30h]
            vucomiss xmm0, dword ptr [rdi+3B0h]
          }
          if ( !v14 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+out+34h]
            vucomiss xmm0, dword ptr [rdi+3B4h]
          }
          if ( !v14 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+out+38h]
            vucomiss xmm0, dword ptr [rdi+3B8h]
          }
          if ( !v14 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0C8h+out+3Ch]
            vucomiss xmm0, dword ptr [rdi+3BCh]
          }
          if ( !v14 )
          {
LABEL_28:
            LODWORD(v40) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 891, ASSERT_TYPE_ASSERT, "(Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[0], tmpMatrix.m[0] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[1], tmpMatrix.m[1] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[2], tmpMatrix.m[2] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[3], tmpMatrix.m[3] ))", "%s\n\tSetting invalid shader transpose matrix %i. Did you directly access any CONST_SRC_FIRST_CODE_MATRIX? Please use R_GetMatrix() interface", "Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[0], tmpMatrix.m[0] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[1], tmpMatrix.m[1] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[2], tmpMatrix.m[2] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[3], tmpMatrix.m[3] )", v40) )
              __debugbreak();
          }
        }
      }
    }
    return (tmat44_t<vec4_t> *)_RBX;
  }
  else
  {
    v32 = v4 & 0xFFFFFFFE;
    if ( source->constVersions[(v4 & 0xFFFFFFFE) + 160] == v6 )
    {
      v33 = (unsigned int)v4;
    }
    else
    {
      R_DeriveCodeMatrix(source, &source->matrices, v32);
      v33 = (unsigned int)v4;
      if ( (((_DWORD)v2 - 168) & 0xFFFFFFFD) != 0 )
      {
        v34 = (unsigned __int64)(unsigned int)v4 << 6;
        v35 = (tmat44_t<vec4_t> *)((char *)&source->matrices.matrixTranspose[0].m + v34);
        MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)((char *)source + v34), v35);
      }
      else
      {
        v36 = (unsigned __int64)(unsigned int)v4 << 6;
        v35 = (tmat44_t<vec4_t> *)((char *)&source->matrices.matrixTranspose[0].m + v36);
        R_SetPreciseWorldMatrixForShader((const tmat44_t<vec4_t> *)((char *)source + v36), v35);
      }
      if ( (_DWORD)v4 == v32 )
        return v35;
      if ( source->constVersions[v2] == v6 )
      {
        LODWORD(v39) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 913, ASSERT_TYPE_ASSERT, "( ( source->constVersions[sourceIndex] != matrixVersion ) )", "( sourceIndex ) = %i", v39) )
          __debugbreak();
      }
    }
    v37 = v4 ^ 1;
    source->constVersions[v2] = v6;
    if ( source->constVersions[v37 + 160] == v6 )
    {
      v38 = &source->matrices.matrix[v33].m;
      MatrixInverse44Aligned(&source->matrices.matrix[(unsigned __int64)v37].m, v38);
      MatrixTranspose44Aligned(v38, v38 + 14);
      return v38 + 14;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 926, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      return 0i64;
    }
  }
}

/*
==============
R_GetViewport
==============
*/
void R_GetViewport(const GfxCmdBufSourceState *source, GfxViewport *outViewport)
{
  __int64 v5; 

  _RDI = outViewport;
  _RBX = source;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2401, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX->viewportBehavior == GFX_USE_VIEWPORT_FULL )
  {
    if ( !_RBX->renderTargetWidth )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2405, ASSERT_TYPE_ASSERT, "( ( source->renderTargetWidth > 0 ) )", "( source->renderTargetWidth ) = %i", v5) )
        __debugbreak();
    }
    if ( !_RBX->renderTargetHeight )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2406, ASSERT_TYPE_ASSERT, "( ( source->renderTargetHeight > 0 ) )", "( source->renderTargetHeight ) = %i", v5) )
        __debugbreak();
    }
    *(_QWORD *)&_RDI->x = 0i64;
    _RDI->width = _RBX->renderTargetWidth;
    _RDI->height = _RBX->renderTargetHeight;
  }
  else
  {
    if ( !_RBX->sceneViewport.width )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2415, ASSERT_TYPE_ASSERT, "( ( source->sceneViewport.width > 0 ) )", "( source->sceneViewport.width ) = %i", v5) )
        __debugbreak();
    }
    if ( !_RBX->sceneViewport.height )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2416, ASSERT_TYPE_ASSERT, "( ( source->sceneViewport.height > 0 ) )", "( source->sceneViewport.height ) = %i", v5) )
        __debugbreak();
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+2D04h]
      vmovups xmmword ptr [rdi], xmm0
    }
    if ( !_RDI->width )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2419, ASSERT_TYPE_ASSERT, "( ( outViewport->width > 0 ) )", "( outViewport->width ) = %i", v5) )
        __debugbreak();
    }
    if ( !_RDI->height )
    {
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2420, ASSERT_TYPE_ASSERT, "( ( outViewport->height > 0 ) )", "( outViewport->height ) = %i", v5) )
        __debugbreak();
    }
  }
}

/*
==============
R_HW_DisableScissor2D
==============
*/
void R_HW_DisableScissor2D(GfxCmdBufState *state)
{
  R_HW_SetScissorTestEnable(state, 0);
}

/*
==============
R_HW_DisableScissor
==============
*/
void R_HW_DisableScissor(GfxCmdBufState *state)
{
  R_HW_SetScissorTestEnable(state, 0);
}

/*
==============
R_HW_EnableScissor2D
==============
*/

void __fastcall R_HW_EnableScissor2D(GfxCmdBufState *state, const GfxViewport *scissorViewport)
{
  R_HW_SetScissor(state, scissorViewport);
}

/*
==============
R_HW_EnableScissor
==============
*/
void R_HW_EnableScissor(GfxCmdBufContext *context, const GfxViewport *scissorViewport)
{
  GfxCmdBufContext *v4; 
  unsigned int height; 
  GfxDevice *device; 
  __int64 v12; 
  GfxViewport outViewport; 
  GfxCmdBufState *state[2]; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovq   rsi, xmm0
  }
  v4 = context;
  __asm { vmovups xmmword ptr [rsp+68h+state], xmm0 }
  R_Set3D((GfxCmdBufSourceState *)_RSI);
  if ( (*(_BYTE *)(_RSI + 11668) & 2) != 0 )
  {
    R_GetViewport((const GfxCmdBufSourceState *)_RSI, &outViewport);
    _RBX = state[1];
    height = outViewport.height;
    if ( state[1]->viewport.x != outViewport.x || state[1]->viewport.y != outViewport.y || state[1]->viewport.width != outViewport.width || state[1]->viewport.height != outViewport.height || state[1]->scissor.x != outViewport.x || state[1]->scissor.y != outViewport.y || state[1]->scissor.width != outViewport.width || state[1]->scissor.height != outViewport.height )
    {
      if ( !outViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
        __debugbreak();
      if ( !height )
      {
        LODWORD(v12) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v12) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+68h+outViewport.x]
        vmovss  xmm3, dword ptr [rbx+9F8h]; farValue
        vmovss  xmm2, dword ptr [rbx+9F4h]; nearValue
      }
      device = _RBX->device;
      __asm { vmovups xmmword ptr [rbx+0A04h], xmm0 }
      R_HW_SetViewport(device, &outViewport, *(float *)&_XMM2, *(float *)&_XMM3);
      R_HW_SetScissor(_RBX, &outViewport);
    }
    R_UpdateViewport((GfxCmdBufSourceState *)_RSI, &outViewport);
  }
  R_HW_SetScissor(v4->state, scissorViewport);
}

/*
==============
R_HW_SetScissor
==============
*/
void R_HW_SetScissor(GfxCmdBufState *state, const GfxViewport *scissorViewport)
{
  signed int x; 
  signed int y; 
  signed int v6; 
  unsigned int v7; 
  unsigned int v8; 
  GfxDevice *device; 
  unsigned int height; 
  signed int v11; 
  signed int v12; 
  signed int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19[4]; 

  x = scissorViewport->x;
  y = scissorViewport->y;
  v6 = scissorViewport->x + scissorViewport->width;
  if ( x < (signed int)state->viewport.x || y < (signed int)state->viewport.y || v6 > (signed int)(x + state->viewport.width) || (signed int)(y + scissorViewport->height) > (signed int)(y + state->viewport.height) )
  {
    v18 = y + state->viewport.height;
    v17 = x + state->viewport.width;
    v16 = state->viewport.y;
    v15 = state->viewport.x;
    v14 = y + scissorViewport->height;
    v13 = v6;
    v12 = y;
    v11 = x;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3642, ASSERT_TYPE_ASSERT, "(Sx0 >= Vx0 && Sy0 >= Vy0 && Sx1 <= Vx1 && Sy1 <= Vy1)", "%s\n\tscissor={%d,%d,%d,%d}, viewport={%d,%d,%d,%d}", "Sx0 >= Vx0 && Sy0 >= Vy0 && Sx1 <= Vx1 && Sy1 <= Vy1", v11, v12, v13, v14, v15, v16, v17, v18) )
      __debugbreak();
  }
  v7 = scissorViewport->x;
  if ( state->scissor.x != scissorViewport->x || state->scissor.y != scissorViewport->y || state->scissor.width != scissorViewport->width || state->scissor.height != scissorViewport->height )
  {
    v8 = scissorViewport->y;
    device = state->device;
    v19[0] = scissorViewport->x;
    v19[2] = scissorViewport->width + v7;
    height = scissorViewport->height;
    v19[1] = v8;
    v19[3] = v8 + height;
    if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, __int64, int *))device->m_pFunction[7].AddRef)(device, 1i64, v19);
    state->scissor.x = scissorViewport->x;
    state->scissor.y = scissorViewport->y;
    state->scissor.width = scissorViewport->width;
    state->scissor.height = scissorViewport->height;
  }
}

/*
==============
R_IndexCountForPrimitiveType
==============
*/
__int64 R_IndexCountForPrimitiveType(unsigned int primType, unsigned int triCount)
{
  switch ( primType )
  {
    case 2u:
      return 2 * triCount;
    case 4u:
    case 0x23u:
      return 3 * triCount;
    case 0x30u:
      return 16 * triCount;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1222, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled primitive type: %d", primType) )
    __debugbreak();
  return 0i64;
}

/*
==============
R_InitBindlessSamplerArray
==============
*/
void R_InitBindlessSamplerArray(void)
{
  ;
}

/*
==============
R_InvalidateState
==============
*/
void R_InvalidateState(GfxCmdBufState *state)
{
  GfxDevice *device; 
  GfxDescriptorState *descState; 
  GfxDevice *v4; 
  unsigned int *m_pCurrent; 
  unsigned int numRenderTargets; 
  GfxDescriptorState *v7; 
  unsigned int fmt; 

  device = state->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3366, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  descState = state->descState;
  state->pipelineStateDirty = 1;
  state->deviceState.pipelineState = NULL;
  if ( descState )
    R_DirtyDescriptorState(descState);
  v4 = state->device;
  state->refStateBits.otherBits = 0x1000000040i64;
  state->refStateBits.blendBits = GFXS_BLEND_STATE_BITS_EMPTY;
  state->primType = 4;
  m_pCurrent = v4->m_Putter.m_pCurrent;
  if ( m_pCurrent >= v4->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, __int64))v4->m_pFunction[6].Release)(v4, 4i64);
  }
  else
  {
    *m_pCurrent = -1073695232;
    m_pCurrent[1] = 4;
    v4->m_Putter.m_pCurrent = m_pCurrent + 2;
  }
  state->streams[0].buffer = NULL;
  state->streams[1].buffer = NULL;
  state->streams[2].buffer = NULL;
  state->streams[3].buffer = NULL;
  state->streams[4].buffer = NULL;
  numRenderTargets = state->deviceState.numRenderTargets;
  v7 = state->descState;
  fmt = state->deviceState.depthRtView;
  state->indexBuffer = NULL;
  state->isIndexBufferBound = 0;
  R_ResetRenderTargetsState(device, v7, numRenderTargets, state->deviceState.colorRtViews, fmt);
  *(_QWORD *)&state->scissor.x = -1i64;
  *(_QWORD *)&state->scissor.width = -1i64;
}

/*
==============
R_IsImageViewValid
==============
*/
bool R_IsImageViewValid(GfxCmdBufState *state, const GfxImage *image)
{
  return image && (R_Texture_Get(state->data, image->textureId)->shaderView.view & 0xFFFFFFFD) != 0;
}

/*
==============
R_IsStageBoundByTechnique
==============
*/
char R_IsStageBoundByTechnique(GfxCmdBufState *state, GfxShaderConstantStage stage)
{
  return 1;
}

/*
==============
R_IsStageBoundByTechnique
==============
*/
char R_IsStageBoundByTechnique(GfxCmdBufState *state, GfxShaderStage stage)
{
  return 1;
}

/*
==============
R_MapReadbackBuffer
==============
*/
unsigned __int8 *R_MapReadbackBuffer(ComputeCmdBufState *state, R_RT_BufferHandle *readbackBuffer)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v4; 

  if ( (BYTE2(R_RT_Handle::GetSurface(readbackBuffer)->m_rtFlags) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3098, ASSERT_TYPE_ASSERT, "(readbackBuffer.GetFlags() & R_RT_Flag_Readback)", (const char *)&queryFormat, "readbackBuffer.GetFlags() & R_RT_Flag_Readback") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(readbackBuffer);
  v4 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
    return (unsigned __int8 *)Surface->m_buffer.m_wrappedBuffer.data;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 561, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  return (unsigned __int8 *)v4->m_buffer.m_wrappedBuffer.data;
}

/*
==============
R_MapReadbackRt
==============
*/
unsigned __int8 *R_MapReadbackRt(ComputeCmdBufState *state, R_RT_ColorHandle *readbackRt, unsigned int subresource, unsigned int *rowPitch)
{
  const R_RT_Surface *Surface; 
  unsigned __int8 *result; 
  unsigned __int8 *v8; 
  const R_RT_Surface *v9; 

  if ( (BYTE2(R_RT_Handle::GetSurface(readbackRt)->m_rtFlags) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3065, ASSERT_TYPE_ASSERT, "(readbackRt.GetFlags() & R_RT_Flag_Readback)", (const char *)&queryFormat, "readbackRt.GetFlags() & R_RT_Flag_Readback") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(readbackRt);
  result = (unsigned __int8 *)R_Image_GetResidentPixels(&Surface->m_image.m_base);
  v8 = result;
  if ( rowPitch )
  {
    v9 = R_RT_Handle::GetSurface(readbackRt);
    if ( (v9->m_rtFlagsInternal & 0x1C) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 276, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Buffer | R_RT_FlagInternal_Depth | R_RT_FlagInternal_Array ) ) == 0)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Buffer | R_RT_FlagInternal_Depth | R_RT_FlagInternal_Array ) ) == 0") )
      __debugbreak();
    *rowPitch = v9->m_color.m_pitch;
    return v8;
  }
  return result;
}

/*
==============
R_MatrixChanged
==============
*/
void R_MatrixChanged(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  __int64 v2; 
  int v5; 
  int v6; 

  v2 = matrixIndex;
  if ( matrixIndex - 160 > 0xE )
  {
    v6 = 174;
    v5 = 160;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 560, ASSERT_TYPE_ASSERT, "( CONST_SRC_FIRST_CODE_MATRIX ) <= ( matrixIndex ) && ( matrixIndex ) <= ( CONST_SRC_TOTAL_COUNT )", "matrixIndex not in [CONST_SRC_FIRST_CODE_MATRIX, CONST_SRC_TOTAL_COUNT]\n\t%i not in [%i, %i]", matrixIndex, v5, v6) )
      __debugbreak();
  }
  source->constVersions[v2] = source->matrixVersions[(unsigned __int64)(unsigned int)(v2 - 160) >> 1];
  source->forceTransposeMatrixChange |= 1 << (v2 + 96);
}

/*
==============
R_MatrixNeedsRefresh
==============
*/
void R_MatrixNeedsRefresh(GfxCmdBufSourceState *source, unsigned int matrixIndex)
{
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  const char *v7; 
  int v8; 
  const char *v9; 

  if ( matrixIndex - 160 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 569, ASSERT_TYPE_ASSERT, "( CONST_SRC_FIRST_CODE_MATRIX ) <= ( matrixIndex ) && ( matrixIndex ) <= ( CONST_SRC_TOTAL_COUNT )", "matrixIndex not in [CONST_SRC_FIRST_CODE_MATRIX, CONST_SRC_TOTAL_COUNT]\n\t%i not in [%i, %i]", matrixIndex, 160, 174) )
    __debugbreak();
  v4 = (unsigned __int64)(matrixIndex - 160) >> 1;
  if ( ++source->matrixVersions[v4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 573, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((matrixIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( matrixIndex )] < 0xffff") )
    __debugbreak();
  v5 = matrixIndex - 160;
  if ( v5 && (v6 = v5 - 2) != 0 )
  {
    if ( v6 == 8 && ++source->matrixVersions[6] == 0xFFFF )
    {
      v7 = "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_WORLD_VIEW_MATRIX )] < 0xffff";
      v8 = 580;
      v9 = "(source->matrixVersions[(((CONST_SRC_CODE_WORLD_VIEW_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)";
      goto LABEL_17;
    }
  }
  else
  {
    ++source->matrixVersions[2];
    ++source->matrixVersions[3];
    if ( source->matrixVersions[2] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 587, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((CONST_SRC_CODE_VIEW_PROJECTION_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_VIEW_PROJECTION_MATRIX )] < 0xffff") )
      __debugbreak();
    if ( source->matrixVersions[3] == 0xFFFF )
    {
      v7 = "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX )] < 0xffff";
      v8 = 588;
      v9 = "(source->matrixVersions[(((CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)";
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
        __debugbreak();
    }
  }
}

/*
==============
R_OverrideGrayscaleImage
==============
*/
GfxImage *R_OverrideGrayscaleImage(int dvarValue, const char *dvarName)
{
  if ( dvarValue == 2 )
    return rgp.whiteImage;
  if ( !dvarValue )
    return rgp.blackImage;
  if ( dvarValue != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 962, ASSERT_TYPE_ASSERT, "(dvarValue == R_COLOR_OVERRIDE_GRAY)", "%s\n\t%s = %i", "dvarValue == R_COLOR_OVERRIDE_GRAY", dvarName, dvarValue) )
    __debugbreak();
  return rgp.grayImage;
}

/*
==============
R_ProfMarkRenderTargets
==============
*/
void R_ProfMarkRenderTargets(GfxCmdBufState *state, unsigned int colorRtCount, const R_RT_ColorHandle *colorRts, R_RT_DepthHandle *depthRt)
{
  GfxCmdBufState *v8; 
  char *v9; 
  char v10; 
  unsigned int v11; 
  const char *name; 
  char i; 
  char v16; 
  char *v17; 
  const char *v18; 
  char j; 
  R_RT_Handle v21; 
  char str[1024]; 
  __int64 v23; 

  _R14 = colorRts;
  v8 = state;
  if ( colorRtCount || R_RT_Handle::IsValid(depthRt) )
  {
    v9 = str;
    v10 = 84;
    do
    {
      *v9++ = v10;
      v10 = v9["Trgt:" - str];
    }
    while ( v10 );
    v11 = 0;
    if ( colorRtCount )
    {
      do
      {
        _RAX = 32i64 * v11;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax+r14]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rsp+4A8h+var_470.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v21);
        }
        else
        {
          if ( v21.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2379, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
            __debugbreak();
        }
        *(_WORD *)v9 = 25376;
        v9[2] = v11 + 48;
        v9[3] = 58;
        v9 += 4;
        name = R_RT_Handle::GetSurface(&v21)->m_image.m_base.name;
        for ( i = *name; *name; ++v9 )
        {
          *v9 = i;
          i = *++name;
        }
        ++v11;
      }
      while ( v11 != colorRtCount );
      v8 = state;
    }
    if ( R_RT_Handle::IsValid(depthRt) )
    {
      v16 = 32;
      v17 = (char *)(" d:" - v9);
      do
      {
        *v9++ = v16;
        v16 = v9[(_QWORD)v17];
      }
      while ( v16 );
      v18 = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.name;
      for ( j = *v18; *v18; ++v9 )
      {
        *v9 = j;
        j = *++v18;
      }
    }
    if ( v9 >= (char *)&v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2391, ASSERT_TYPE_ASSERT, "(markerNameEnd < markerName + ( sizeof( *array_counter( markerName ) ) + 0 ))", (const char *)&queryFormat, "markerNameEnd < markerName + ARRAY_COUNT( markerName )") )
      __debugbreak();
    *v9 = 0;
    R_ProfSetMarker(v8, str);
  }
}

/*
==============
R_RT_Destroy
==============
*/
void R_RT_Destroy(GfxCmdBufContext *context, R_RT_BufferHandle *rt)
{
  R_RT_Handle v4; 

  _RBX = rt;
  if ( R_RT_Handle::IsValid(rt) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
  }
}

/*
==============
R_RT_Destroy
==============
*/
void R_RT_Destroy(GfxCmdBufContext *context, R_RT_ColorHandle *rt)
{
  GfxCmdBufState *state; 
  int v5; 
  R_RT_Handle v8; 

  _RDI = context;
  _RBX = rt;
  if ( R_RT_Handle::IsValid(rt) )
  {
    state = _RDI->state;
    v5 = 0;
    if ( state->rtGroup.m_colorRtCount )
    {
      while ( (*(_DWORD *)&state->rtGroup.m_colorRts[v5].m_surfaceID & 0x7FFF) != (*(_DWORD *)&_RBX->m_surfaceID & 0x7FFF) )
      {
        if ( ++v5 == state->rtGroup.m_colorRtCount )
          goto LABEL_7;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+48h+var_28.m_surfaceID], xmm0
      }
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v8, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(2651)");
    }
LABEL_7:
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v8);
  }
}

/*
==============
R_RT_Destroy
==============
*/
void R_RT_Destroy(GfxCmdBufContext *context, R_RT_DepthHandle *rt)
{
  R_RT_Handle v6; 

  _RDI = context;
  _RBX = rt;
  if ( R_RT_Handle::IsValid(rt) )
  {
    if ( (((unsigned __int16)*(_DWORD *)&_RBX->m_surfaceID ^ (unsigned __int16)*(_DWORD *)&_RDI->state->rtGroup.m_depthRt.m_surfaceID) & 0xFFFF7FFF) == 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+48h+var_28.m_surfaceID], xmm0
      }
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v6, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(2670)");
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v6);
  }
}

/*
==============
R_ResetRenderTargets
==============
*/
void R_ResetRenderTargets(GfxCmdBufState *state)
{
  R_RT_DepthHandle v5; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->rtGroup.m_colorRtCount || R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28.baseclass_0.m_tracking.m_name], xmm0
    }
    v5.m_surfaceID = 0;
    v5.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm1
    }
    R_HW_SetRenderTargets(state, 0, NULL, &v5);
    R_RT_Tracking_GroupRefDecrement(&state->rtGroup);
    state->rtGroup.m_colorRtCount = 0;
    state->rtGroup.m_depthRt.m_surfaceID = 0;
    state->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
    state->rtGroup.m_depthRt.m_tracking.m_name = NULL;
    state->rtGroup.m_depthRt.m_tracking.m_location = NULL;
    state->rtGroup.m_vrsRt.m_surfaceID = 0;
    state->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
    state->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
    state->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
  }
}

/*
==============
R_ResetRenderTargetsState
==============
*/
void R_ResetRenderTargetsState(GfxDevice *device, GfxDescriptorState *descState, unsigned int count, unsigned int *rtvs, unsigned int dsv)
{
  __int64 v6; 
  GfxUnifiedDescriptorHeap *parent; 
  char *v9; 
  unsigned int startSlot; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  char v14[64]; 

  v6 = count;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( (unsigned int)v6 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3277, ASSERT_TYPE_ASSERT, "(count < ( sizeof( *array_counter( rtvHandles ) ) + 0 ))", (const char *)&queryFormat, "count < ARRAY_COUNT( rtvHandles )") )
    __debugbreak();
  if ( (_DWORD)v6 )
  {
    parent = g_descriptorPools.rtViewPool.handle.parent;
    v9 = v14;
    startSlot = g_descriptorPools.rtViewPool.handle.startSlot;
    v11 = v6;
    do
    {
      v9 += 8;
      v12 = startSlot + *rtvs++;
      *((_QWORD *)v9 - 1) = parent->heapStartCPUHandle.ptr + parent->descriptorSize * v12;
      --v11;
    }
    while ( v11 );
  }
  if ( dsv )
  {
    v13 = g_descriptorPools.dsViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.dsViewPool.handle.parent->descriptorSize * (dsv + g_descriptorPools.dsViewPool.handle.startSlot);
    ((void (__fastcall *)(GfxDevice *, _QWORD, char *, _QWORD, unsigned __int64 *))device->m_pFunction[16].Release)(device, (unsigned int)v6, v14, 0i64, &v13);
  }
  else
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD, char *, _QWORD, _QWORD))device->m_pFunction[16].Release)(device, (unsigned int)v6, v14, 0i64, 0i64);
  }
}

/*
==============
R_SetAndClearIfRequired
==============
*/
void R_SetAndClearIfRequired(GfxCmdBufContext *context, R_RT_Handle *rt)
{
  const R_RT_Surface *Surface; 
  unsigned int v7; 
  GfxCmdBufState *state; 
  const R_RT_Surface *v11; 
  unsigned int m_subresourceToTransition; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v15; 
  GfxCmdBufState *v16; 
  const GfxTexture *Resident; 
  bool v21; 
  GfxCmdBufState *v24; 
  GfxCmdBufState *v29; 
  const vec4_t *ClearColor; 
  const R_RT_Surface *v31; 
  unsigned int v33; 
  bool v36; 
  GfxCmdBufState *v37; 
  const R_RT_Surface *v38; 
  unsigned int v40; 
  R_RT_FlagsInternal v41; 
  const R_RT_Surface *v42; 
  GfxCmdBufState *v43; 
  const GfxTexture *v44; 
  bool v46; 
  float after; 
  unsigned __int8 v48; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_Handle v53; 
  __m256i v54; 
  R_RT_Handle v55; 
  R_RT_Handle v56; 
  R_RT_Handle v57; 
  R_RT_Handle v58; 
  R_RT_Group v59; 

  _RDI = context;
  _R15 = rt;
  if ( R_RT_Handle::GetAuxDirty(rt) )
  {
    Surface = R_RT_Handle::GetSurface(_R15);
    __asm { vmovups ymm0, ymmword ptr [r15] }
    v7 = (unsigned int)Surface->m_rtFlagsInternal >> 4;
    __asm
    {
      vmovups ymmword ptr [rbp+180h+var_1D0.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (v7 & 1) != 0 )
    {
      __asm { vmovups ymmword ptr [rsp+280h+var_210.m_surfaceID], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v53);
        if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1D0.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1D0.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_210.m_surfaceID] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      state = _RDI->state;
      __asm { vmovups ymmword ptr [rbp+180h+var_130.m_surfaceID], ymm0 }
      v11 = R_RT_Handle::GetSurface(&v58);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+180h+var_130.m_surfaceID]
        vmovups ymmword ptr [rbp+180h+var_150.m_surfaceID], ymm0
      }
      m_subresourceToTransition = v11->m_subresourceToTransition;
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal;
      v15 = R_RT_Handle::GetSurface(&v57);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        v16 = state;
        Resident = (const GfxTexture *)&v15->1080;
      }
      else
      {
        Resident = R_Texture_GetResident(v15->m_image.m_base.textureId);
        v16 = state;
        if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
        {
          __debugbreak();
          v16 = context->state;
        }
      }
      R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, Resident->basemap, m_subresourceToTransition, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(v16);
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovd   edi, xmm0
      }
      v48 = 48;
      __asm
      {
        vmovups [rbp+180h+var_1B0], ymm0
        vmovups ymmword ptr [rsp+280h+var_230.m_surfaceID], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v50);
        if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_230.m_surfaceID] }
          LODWORD(_RBX) = v50.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v50.m_surfaceID;
          __asm { vmovups [rbp+180h+var_1B0], ymm0 }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_230.m_surfaceID] }
          LODWORD(_RBX) = v50.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v50.m_surfaceID;
          __asm { vmovups [rbp+180h+var_1B0], ymm0 }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+180h+var_1B0] }
          if ( v21 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+180h+var_1F0.m_surfaceID], ymm0 }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v52);
        __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1F0.m_surfaceID] }
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        __asm { vmovups ymm0, [rbp+180h+var_1B0] }
      }
      _RDI = context;
      v59.m_colorRtCount = 0;
      __asm { vmovups [rbp+180h+var_88], ymm0 }
    }
    else
    {
      __asm { vmovups ymmword ptr [rbp+180h+var_1F0.m_surfaceID], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v53);
        if ( (R_RT_Handle::GetSurface(&v53)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1D0.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1D0.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1F0.m_surfaceID] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      v24 = _RDI->state;
      __asm { vmovups ymmword ptr [rbp+180h+var_150.m_surfaceID], ymm0 }
      R_AddRenderTargetTransition(v24, (R_RT_ColorHandle *)&v57, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(_RDI->state);
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovd   eax, xmm0
      }
      v48 = 15;
      __asm
      {
        vmovups ymmword ptr [rbp+180h+var_1F0.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+280h+var_230.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v50);
        if ( (R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_230.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_230.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_1F0.m_surfaceID] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+180h+var_1F0.m_surfaceID], ymm0 }
      R_RT_Group::AssignColor(&v59, (R_RT_ColorHandle *)&v52);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rbp+180h+var_1B0], xmm0
    }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v54, &v59, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(3173)");
    v29 = _RDI->state;
    if ( v29->rtGroup.m_colorRtCount )
      ClearColor = R_RT_ColorHandle::GetClearColor(v29->rtGroup.m_colorRts);
    else
      ClearColor = &colorBlack;
    if ( R_RT_Handle::IsValid(&v29->rtGroup.m_depthRt) )
      *(double *)&_XMM0 = R_RT_DepthHandle::GetClearDepth(&v29->rtGroup.m_depthRt);
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
    __asm { vmovss  [rsp+280h+after], xmm0 }
    R_ClearScreenInternal(v29, &v29->rtGroup, v48, ClearColor, 1u, after, 0);
    v31 = R_RT_Handle::GetSurface(_R15);
    __asm
    {
      vmovups ymm0, ymmword ptr [r15]
      vmovups ymmword ptr [rsp+280h+var_210.m_surfaceID], ymm0
    }
    v33 = (unsigned int)v31->m_rtFlagsInternal >> 4;
    __asm { vmovd   eax, xmm0 }
    if ( (v33 & 1) != 0 )
    {
      __asm { vmovups ymmword ptr [rbp+180h+var_170.m_surfaceID], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v51);
        if ( (R_RT_Handle::GetSurface(&v51)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_210.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_210.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_170.m_surfaceID] }
          if ( v36 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+180h+var_170.m_surfaceID], ymm0 }
      v37 = context->state;
      v38 = R_RT_Handle::GetSurface(&v56);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+180h+var_170.m_surfaceID]
        vmovups ymmword ptr [rbp+180h+var_190.m_surfaceID], ymm0
      }
      v40 = v38->m_subresourceToTransition;
      v41 = R_RT_Handle::GetSurface(&v55)->m_rtFlagsInternal;
      v42 = R_RT_Handle::GetSurface(&v55);
      if ( (v41 & 8) != 0 )
      {
        v43 = v37;
        v44 = (const GfxTexture *)&v42->1080;
      }
      else
      {
        v44 = R_Texture_GetResident(v42->m_image.m_base.textureId);
        v43 = v37;
        if ( !v44->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
          __debugbreak();
      }
      R_DX12_AddResourceTransition(v37->resourceTransitions, &v37->resourceTransitionCount, v44->basemap, v40, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    else
    {
      __asm { vmovups ymmword ptr [rbp+180h+var_190.m_surfaceID], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v51);
        if ( (R_RT_Handle::GetSurface(&v51)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_210.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+280h+var_210.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+180h+var_190.m_surfaceID] }
          if ( v46 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+180h+var_190.m_surfaceID], ymm0 }
      v43 = context->state;
      R_AddRenderTargetTransition(v43, (R_RT_ColorHandle *)&v55, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_FlushResourceTransitions(v43);
    R_FlushImmediateContext();
  }
}

/*
==============
R_SetCompleteState
==============
*/
void R_SetCompleteState(GfxCmdBufState *state, const GfxStateBits *stateBits)
{
  GfxDevice *device; 
  __int64 v9; 
  unsigned int *m_pCurrent; 
  unsigned int *v11; 
  __int64 primType; 
  int y; 
  const GfxDevice *v16; 
  unsigned int height; 
  ID3D12Resource *indexBuffer; 
  int indexType; 
  unsigned int *v20; 
  unsigned int numRenderTargets; 
  GfxDescriptorState *descState; 
  GfxDevice *v23; 
  __int64 v26; 
  unsigned int v27; 
  int v28; 
  int v29[4]; 
  char v30[16]; 
  unsigned __int64 val; 

  device = state->device;
  _RSI = state;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3299, ASSERT_TYPE_ASSERT, "(device != nullptr)", (const char *)&queryFormat, "device != nullptr") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  _RDX = _RSI->deviceState.pipelineState;
  if ( _RDX )
  {
    _RCX = device->m_Putter.m_pCurrent;
    if ( _RCX >= device->m_Putter.m_pLimit_Api )
    {
      device->m_pFunction[8].AddRef(device);
    }
    else
    {
      __asm
      {
        vmovdqu xmm0, xmmword ptr [rdx+10h]
        vmovdqu xmmword ptr [rcx], xmm0
      }
      *((_QWORD *)_RCX + 2) = _RDX->m_Packet.Oword[1].m128i_i64[0];
      device->m_Putter.m_pCurrent = _RCX + 6;
    }
  }
  v9 = (unsigned __int8)((unsigned __int16)WORD2(stateBits->otherBits) >> 8);
  m_pCurrent = device->m_Putter.m_pCurrent;
  if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, __int64))device->m_pFunction[8].QueryInterface)(device, v9);
  }
  else
  {
    *m_pCurrent = -1073694720;
    m_pCurrent[1] = v9;
    device->m_Putter.m_pCurrent = m_pCurrent + 2;
  }
  ((void (__fastcall *)(GfxDevice *, GfxDeviceState *))device->m_pFunction[7].Release)(device, &_RSI->deviceState);
  v11 = device->m_Putter.m_pCurrent;
  if ( v11 >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD))device->m_pFunction[6].Release)(device, (int)_RSI->primType);
  }
  else
  {
    primType = (int)_RSI->primType;
    *v11 = -1073695232;
    v11[1] = D3D12XBOX_SET_PRIMITIVE_TOPOLOGY_LOOKUP[primType];
    device->m_Putter.m_pCurrent = v11 + 2;
  }
  R_RebindDescriptorState(_RSI);
  if ( _RSI->viewport.width )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+9F8h]; farValue
      vmovss  xmm2, dword ptr [rsi+9F4h]; nearValue
    }
    R_HW_SetViewport(_RSI->device, &_RSI->viewport, *(float *)&_XMM2, *(float *)&_XMM3);
    y = _RSI->viewport.y;
    v16 = _RSI->device;
    v29[0] = _RSI->viewport.x;
    v29[2] = _RSI->viewport.width + v29[0];
    height = _RSI->viewport.height;
    v29[1] = y;
    v29[3] = y + height;
    if ( !R_IsLockedIfGfxImmediateContext(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    ((void (__fastcall *)(const GfxDevice *, __int64, int *))v16->m_pFunction[7].AddRef)(v16, 1i64, v29);
  }
  R_FlushStreamSources(_RSI, 0);
  indexBuffer = _RSI->indexBuffer;
  indexType = _RSI->indexType;
  v28 = indexType;
  if ( indexBuffer )
  {
    ((void (__fastcall *)(ID3D12Resource *, char *))indexBuffer->m_pFunction[3].AddRef)(indexBuffer, v30);
    v26 = ((__int64 (__fastcall *)(ID3D12Resource *))_RSI->indexBuffer->m_pFunction[3].Release)(_RSI->indexBuffer);
    v27 = truncate_cast<unsigned int,unsigned __int64>(val);
    indexType = v28;
  }
  else
  {
    v26 = 0i64;
    v27 = 0;
  }
  v20 = device->m_Putter.m_pCurrent;
  if ( v20 >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v26);
  }
  else
  {
    *v20 = indexType + 1073854208;
    *(_QWORD *)(v20 + 1) = v26;
    device->m_Putter.m_pCurrent = v20 + 3;
  }
  numRenderTargets = _RSI->deviceState.numRenderTargets;
  descState = _RSI->descState;
  v23 = _RSI->device;
  _RSI->isIndexBufferBound = _RSI->indexBuffer != NULL;
  R_ResetRenderTargetsState(v23, descState, numRenderTargets, _RSI->deviceState.colorRtViews, _RSI->deviceState.depthRtView);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
  }
  device->m_pFunction[22].Release(device);
}

/*
==============
R_SetDomainTextureInternal
==============
*/
void R_SetDomainTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName)
{
  R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_DS, resourceIndex, image);
}

/*
==============
R_SetFullViewport
==============
*/
void R_SetFullViewport(GfxCmdBufSourceState *source)
{
  unsigned int renderTargetHeight; 
  GfxViewportBehavior viewportBehavior; 
  __int64 v5; 
  __int128 v6; 

  _RBX = source;
  renderTargetHeight = source->renderTargetHeight;
  *(_QWORD *)&v6 = 0i64;
  DWORD2(v6) = source->renderTargetWidth;
  HIDWORD(v6) = renderTargetHeight;
  if ( !DWORD2(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !renderTargetHeight )
  {
    LODWORD(v5) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v5) )
      __debugbreak();
  }
  viewportBehavior = _RBX->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v5) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v5) )
      __debugbreak();
  }
  __asm { vmovups xmm0, [rsp+48h+var_18] }
  *((_BYTE *)_RBX + 11668) |= 2u;
  __asm { vmovups xmmword ptr [rbx+2D04h], xmm0 }
  _RBX->viewMode = VIEW_MODE_NONE;
}

/*
==============
R_SetInputCodeBuffer
==============
*/
void R_SetInputCodeBuffer(GfxCmdBufInput *input, unsigned int codeBuffer, R_RT_Handle *handle)
{
  __int64 v4; 
  GfxWrappedBuffer *p_dummyBuffer; 
  const R_RT_Surface *Surface; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 

  v4 = codeBuffer;
  _RSI = handle;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4225, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x34 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v12, 52) )
      __debugbreak();
  }
  if ( _RSI->m_surfaceID )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+98h+var_58.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v14);
      if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_38.m_surfaceID] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0 }
    Surface = R_RT_Handle::GetSurface(&v15);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    p_dummyBuffer = (GfxWrappedBuffer *)&Surface->1080;
  }
  else
  {
    if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    if ( (unsigned int)v4 >= 0x34 )
    {
      LODWORD(v13) = 52;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1495, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_dummyBuffer = &gfxBuf.dummyBuffer;
  }
  input->codeBuffers[v4] = p_dummyBuffer;
}

/*
==============
R_SetInputCodePersistentBuffer
==============
*/
void R_SetInputCodePersistentBuffer(GfxCmdBufInput *input, unsigned int codePersistentBuffer, R_RT_Handle *handle)
{
  __int64 v4; 
  GfxWrappedBuffer *p_dummyBuffer; 
  const R_RT_Surface *Surface; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 

  v4 = codePersistentBuffer;
  _RSI = handle;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4242, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x29 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4243, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v12, 41) )
      __debugbreak();
  }
  if ( _RSI->m_surfaceID )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+98h+var_58.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v14);
      if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_38.m_surfaceID] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0 }
    Surface = R_RT_Handle::GetSurface(&v15);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    p_dummyBuffer = (GfxWrappedBuffer *)&Surface->1080;
  }
  else
  {
    if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    if ( (unsigned int)v4 >= 0x29 )
    {
      LODWORD(v13) = 41;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1504, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_dummyBuffer = &gfxBuf.dummyBuffer;
  }
  input->codePersistentBuffers[v4] = p_dummyBuffer;
}

/*
==============
R_SetInputCodeRWBuffer
==============
*/
void R_SetInputCodeRWBuffer(GfxCmdBufInput *input, unsigned int codeBuffer, R_RT_Handle *handle)
{
  __int64 v4; 
  GfxWrappedRWBuffer *p_dummyRWBuffer; 
  const R_RT_Surface *Surface; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Handle v14; 
  R_RT_Handle v15; 

  v4 = codeBuffer;
  _RSI = handle;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4259, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4260, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_RW_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_RW_COUNT\n\t%i not in [0, %i)", v12, 1) )
      __debugbreak();
  }
  if ( _RSI->m_surfaceID )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+98h+var_58.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v14);
      if ( (R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_58.m_surfaceID] }
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_38.m_surfaceID] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rsp+98h+var_38.m_surfaceID], ymm0 }
    Surface = R_RT_Handle::GetSurface(&v15);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    p_dummyRWBuffer = (GfxWrappedRWBuffer *)&Surface->1080;
  }
  else
  {
    if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1512, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    if ( (_DWORD)v4 )
    {
      LODWORD(v13) = 1;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1513, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_RW_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_RW_COUNT\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_dummyRWBuffer = &gfxBuf.dummyRWBuffer;
  }
  input->codeRWBuffers[v4] = p_dummyRWBuffer;
}

/*
==============
R_SetMeshStream
==============
*/
void R_SetMeshStream(GfxCmdBufState *state, GfxMeshData *mesh, unsigned int vertCount)
{
  unsigned int vertSize; 
  ID3D12Resource *buffer; 

  R_SetIndicesWithType(state, mesh->ib, DXGI_FORMAT_R16_UINT);
  vertSize = mesh->vertSize;
  buffer = mesh->vb.buffer;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1810, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state->streams[0].buffer != buffer || state->streams[0].offset || state->streams[0].stride != vertSize )
  {
    state->streams[0].buffer = buffer;
    state->streams[0].offset = 0;
    state->streams[0].stride = vertSize;
    ++state->streamVersions[0];
  }
  R_FlushStreamSources(state, vertCount);
}

/*
==============
R_SetMovieImages
==============
*/
void R_SetMovieImages(GfxCmdBufInput *input)
{
  Online_VideoStreaming *Instance; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1019, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  R_Cinematic_SetRendererImagesToFrame(input);
  Instance = Online_VideoStreaming::GetInstance();
  Online_VideoStreaming::SetRendererTexturesToFrame(Instance, input);
}

/*
==============
R_SetObjectPrevFrameScaledPlacement
==============
*/
void R_SetObjectPrevFrameScaledPlacement(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  char v4; 
  bool v20; 
  bool v36; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  _RDI = placement;
  if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4173, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
    __debugbreak();
  if ( (const GfxScaledPlacement *)source->objectPlacementPrevFrame != _RDI )
  {
    source->objectPlacementPrevFrame = &_RDI->base;
    UnitQuatToAxis(&_RDI->base.quat, &axis);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0A8h+axis]
      vmovss  xmm3, dword ptr [rsp+0A8h+axis+4]
      vmovss  xmm5, dword ptr [rsp+0A8h+axis+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v4 )
    {
      __asm
      {
        vsqrtss xmm0, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_68], xmm1
        vcvtss2sd xmm2, xmm5, xmm5
        vmovsd  [rsp+0A8h+var_70], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0A8h+var_78], xmm3
        vcvtss2sd xmm0, xmm4, xmm4
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4181, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v56, v59, v62, v65);
      v4 = 0;
      if ( v20 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0A8h+axis+0Ch]
      vmovss  xmm3, dword ptr [rsp+0A8h+axis+10h]
      vmovss  xmm5, dword ptr [rsp+0A8h+axis+14h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v4 )
    {
      __asm
      {
        vsqrtss xmm0, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_68], xmm1
        vcvtss2sd xmm2, xmm5, xmm5
        vmovsd  [rsp+0A8h+var_70], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0A8h+var_78], xmm3
        vcvtss2sd xmm0, xmm4, xmm4
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4182, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v57, v60, v63, v66);
      v4 = 0;
      if ( v36 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0A8h+axis+18h]
      vmovss  xmm3, dword ptr [rsp+0A8h+axis+1Ch]
      vmovss  xmm5, dword ptr [rsp+0A8h+axis+20h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v4 )
    {
      __asm
      {
        vsqrtss xmm0, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_68], xmm1
        vcvtss2sd xmm2, xmm5, xmm5
        vmovsd  [rsp+0A8h+var_70], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0A8h+var_78], xmm3
        vcvtss2sd xmm0, xmm4, xmm4
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4183, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v58, v61, v64, v67) )
        __debugbreak();
    }
    if ( ++source->matrixVersions[4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 573, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((matrixIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( matrixIndex )] < 0xffff") )
      __debugbreak();
    R_MatrixChanged(source, 0xA8u);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovss  xmm1, dword ptr [rdi+14h]
      vmovss  xmm3, dword ptr [rdi+1Ch]; scale
      vmovss  dword ptr [rsp+0A8h+origin], xmm0
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
      vmovss  dword ptr [rsp+0A8h+origin+4], xmm1
    }
    MatrixSet44(&source->matrices.matrix[8].m, &origin, &axis, *(float *)&_XMM3);
  }
}

/*
==============
R_SetPipelineState
==============
*/
char R_SetPipelineState(GfxCmdBufState *state)
{
  const MaterialTechnique *technique; 
  unsigned __int8 v4; 
  unsigned __int8 pipelineStateInputLayoutCount; 
  const MaterialTechnique *v6; 
  MaterialPipelineState *v7; 
  const char *v9; 
  const char **p_name; 
  const char *v11; 
  const char **v12; 
  const char *v13; 
  const char **v14; 
  const char *v15; 
  const char **v16; 
  const char *v17; 
  bool v18; 
  bool v19; 
  MaterialStageConfig stageConfig; 
  GfxDevice *device; 
  __int64 v27; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1966, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1967, ASSERT_TYPE_ASSERT, "(state->material)", (const char *)&queryFormat, "state->material") )
    __debugbreak();
  if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1968, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
    __debugbreak();
  if ( !state->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1969, ASSERT_TYPE_ASSERT, "(state->technique)", (const char *)&queryFormat, "state->technique") )
    __debugbreak();
  if ( state->pipelineStateDirty )
  {
    Profile_Begin(156);
    technique = state->technique;
    v4 = technique->pipelineStateMap[(unsigned __int16)state->vertDeclType];
    pipelineStateInputLayoutCount = technique->pipelineStateInputLayoutCount;
    if ( v4 >= pipelineStateInputLayoutCount )
    {
      LODWORD(v27) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2035, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineStateIndex ) < (unsigned)( MaterialTechnique_GetPipelineStateCount( state->technique ) )", "pipelineStateIndex doesn't index MaterialTechnique_GetPipelineStateCount( state->technique )\n\t%i not in [0, %i)", v27, pipelineStateInputLayoutCount) )
        __debugbreak();
    }
    v6 = state->technique;
    v7 = &v6->pipelineStates[v4];
    state->pipelineStateDirty = 0;
    _RSI = v7->derivedPso;
    if ( _RSI != state->deviceState.pipelineState )
    {
      if ( r_profMaterial->current.integer > 1 )
      {
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2064, ASSERT_TYPE_ASSERT, "(state->technique)", (const char *)&queryFormat, "state->technique") )
          __debugbreak();
        v9 = j_va("PSO: v%db", (unsigned __int16)state->vertDeclType);
        R_ProfSetMarker(state, v9);
        if ( !v7->metaData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2067, ASSERT_TYPE_ASSERT, "(pipelineState->metaData)", (const char *)&queryFormat, "pipelineState->metaData") )
          __debugbreak();
        p_name = &v7->serializedShaders[3]->name;
        if ( p_name )
        {
          v11 = j_va("LS: %s (%s)", *p_name, p_name[1]);
          R_ProfSetMarker(state, v11);
        }
        v12 = &v7->serializedShaders[2]->name;
        if ( v12 )
        {
          v13 = j_va("HS: %s (%s)", *v12, v12[1]);
          R_ProfSetMarker(state, v13);
        }
        v14 = &v7->serializedShaders[1]->name;
        if ( v14 )
        {
          v15 = j_va("VS: %s (%s)", *v14, v14[1]);
          R_ProfSetMarker(state, v15);
        }
        v16 = &v7->serializedShaders[0]->name;
        if ( v16 )
        {
          v17 = j_va("PS: %s (%s)", *v16, v16[1]);
          R_ProfSetMarker(state, v17);
        }
      }
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2089, ASSERT_TYPE_ASSERT, "(pipelineStateObj)", (const char *)&queryFormat, "pipelineStateObj") )
        __debugbreak();
      v18 = state->device == NULL;
      if ( !state->device )
      {
        v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2090, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device");
        v18 = !v19;
        if ( v19 )
          __debugbreak();
      }
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RAX = r_tessellationForceFlushesOnShaderStageChanges;
      __asm { vucomiss xmm0, dword ptr [rax+28h] }
      if ( !v18 )
      {
        stageConfig = state->technique->stageConfig;
        if ( state->stageConfig != stageConfig )
        {
          state->stageConfig = stageConfig;
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, _QWORD))state->device->m_pFunction[22].AddRef)(state->device, 0x1000000i64, 0i64, 0i64);
        }
      }
      device = state->device;
      _RDX = device->m_Putter.m_pCurrent;
      if ( _RDX >= device->m_Putter.m_pLimit_Api )
      {
        ((void (__fastcall *)(GfxDevice *, ID3D12PipelineState *))device->m_pFunction[8].AddRef)(device, _RSI);
      }
      else
      {
        __asm
        {
          vmovdqu xmm0, xmmword ptr [rsi+10h]
          vmovdqu xmmword ptr [rdx], xmm0
        }
        *((_QWORD *)_RDX + 2) = _RSI->m_Packet.Oword[1].m128i_i64[0];
        device->m_Putter.m_pCurrent = _RDX + 6;
      }
      state->deviceState.pipelineState = _RSI;
    }
    Profile_EndInternal(NULL);
  }
  return 1;
}

/*
==============
R_SetPixelTextureInternal
==============
*/
void R_SetPixelTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName)
{
  R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_PS, resourceIndex, image);
}

/*
==============
R_SetPrimType
==============
*/
void R_SetPrimType(GfxCmdBufState *state, unsigned int primType)
{
  GfxDevice *device; 
  unsigned int *m_pCurrent; 

  if ( state->primType != primType )
  {
    state->primType = primType;
    device = state->device;
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      device->m_pFunction[6].Release(device);
    }
    else
    {
      *m_pCurrent = -1073695232;
      m_pCurrent[1] = D3D12XBOX_SET_PRIMITIVE_TOPOLOGY_LOOKUP[primType];
      device->m_Putter.m_pCurrent = m_pCurrent + 2;
    }
  }
}

/*
==============
R_SetRenderSourceSize
==============
*/

void __fastcall R_SetRenderSourceSize(GfxCmdBufSourceState *source, R_RT_Handle *srcRt, double _XMM2_8)
{
  _RDI = source;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  R_RT_Handle::GetSurface(srcRt);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, r8d
  }
  R_RT_Handle::GetSurface(srcRt);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi+750h], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, edx
    vdivss  xmm1, xmm1, xmm2
    vmovss  dword ptr [rdi+75Ch], xmm1
    vmovss  dword ptr [rdi+754h], xmm2
    vmovss  dword ptr [rdi+758h], xmm0
  }
  ++_RDI->constVersions[5];
}

/*
==============
R_SetRenderTargetsInternal
==============
*/
void R_SetRenderTargetsInternal(GfxCmdBufContext *context, const R_RT_Group *newRtGroup, const char *location)
{
  unsigned int m_colorRtCount; 
  unsigned int v9; 
  int v12; 
  const char *v15; 
  int v16; 
  const char *v17; 
  unsigned int m_allocCounter; 
  int width; 
  int height; 
  unsigned int v26; 
  int v29; 
  int v30; 
  const char *name; 
  const R_RT_Surface *Surface; 
  int v33; 
  int v34; 
  const char *v35; 
  const R_RT_Surface *v36; 
  R_RT_Surface *v37; 
  unsigned __int16 m_headViewSurfaceID; 
  unsigned __int16 v39; 
  int v40; 
  int v41; 
  const char *v42; 
  const R_RT_Surface *v43; 
  bool v46; 
  int v47; 
  int v48; 
  const char *v49; 
  const R_RT_Surface *v50; 
  int v51; 
  int v52; 
  int v53; 
  const char *v54; 
  const R_RT_Surface *v55; 
  GfxCmdBufSourceState *source; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  const char *v73; 
  __int64 v74; 
  const char *v75; 
  const char *v76; 
  __int64 v77; 
  __int64 v78; 
  GfxCmdBufState *state; 
  R_RT_Handle v80; 
  R_RT_Handle v81; 
  int v83; 
  int v85; 

  _R14 = newRtGroup;
  if ( !newRtGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2747, ASSERT_TYPE_ASSERT, "(&newRtGroup)", (const char *)&queryFormat, "&newRtGroup") )
    __debugbreak();
  m_colorRtCount = _R14->m_colorRtCount;
  state = context->state;
  _R15 = &state->rtGroup;
  if ( m_colorRtCount == state->rtGroup.m_colorRtCount )
  {
    v9 = 0;
    if ( _R14->m_colorRtCount )
    {
      while ( 1 )
      {
        _RAX = v9;
        __asm { vmovups ymm1, ymmword ptr [rax+r15+8] }
        v12 = (unsigned __int16)*(_DWORD *)&_R14->m_colorRts[_RAX].m_surfaceID;
        __asm { vmovd   eax, xmm1 }
        if ( (((unsigned __int16)(_RAX * 32) ^ v12) & 0xFFFF7FFF) != 0 )
          break;
        if ( ++v9 == m_colorRtCount )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (((unsigned __int16)*(_DWORD *)&state->rtGroup.m_depthRt.m_surfaceID ^ (unsigned __int16)*(_DWORD *)&_R14->m_depthRt.m_surfaceID) & 0xFFFF7FFF) == 0 )
        return;
    }
  }
  if ( (_BYTE)m_colorRtCount )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14+8]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_80.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v81);
      if ( (R_RT_Handle::GetSurface(&v81)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v15 = "!colorRt.IsValid() || colorRt.IsColor()";
        v16 = 396;
        v17 = "(!colorRt.IsValid() || colorRt.IsColor())";
        goto LABEL_19;
      }
      goto LABEL_21;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14+88h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+57h+var_80.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v81);
      if ( (R_RT_Handle::GetSurface(&v81)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v15 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v16 = 403;
        v17 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_19:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v16, ASSERT_TYPE_ASSERT, v17, (const char *)&queryFormat, v15) )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
          __debugbreak();
          goto LABEL_22;
        }
      }
LABEL_21:
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
      goto LABEL_22;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_80.m_surfaceID] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_22:
  __asm { vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0 }
  _RAX = &v81;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   edi, xmm0
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
  }
  m_allocCounter = v81.m_tracking.m_allocCounter;
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v81);
    width = R_RT_Handle::GetSurface(&v81)->m_image.m_base.width;
  }
  else
  {
    if ( v81.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    width = 0;
  }
  v85 = width;
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v81);
    height = R_RT_Handle::GetSurface(&v81)->m_image.m_base.height;
  }
  else
  {
    if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    height = 0;
  }
  v26 = 0;
  v83 = height;
  if ( m_colorRtCount )
  {
    do
    {
      _RAX = 32i64 * v26;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+r14+8]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+57h+var_80.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v80);
      }
      else
      {
        if ( v80.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2767, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      if ( width != R_RT_Handle::GetSurface(&v80)->m_image.m_base.width )
      {
        v29 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.height;
        v30 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.width;
        name = R_RT_Handle::GetSurface(&v80)->m_image.m_base.name;
        Surface = R_RT_Handle::GetSurface(&v81);
        LODWORD(v78) = v29;
        width = v85;
        LODWORD(v77) = v30;
        v75 = name;
        height = v83;
        LODWORD(v72) = v26;
        LODWORD(v71) = v83;
        LODWORD(v70) = v85;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2771, ASSERT_TYPE_ASSERT, "(width == colorRt.GetWidth())", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "width == colorRt.GetWidth()", Surface->m_image.m_base.name, v70, v71, v72, v75, v77, v78) )
          __debugbreak();
      }
      if ( height != R_RT_Handle::GetSurface(&v80)->m_image.m_base.height )
      {
        v33 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.height;
        v34 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.width;
        v35 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.name;
        v36 = R_RT_Handle::GetSurface(&v81);
        LODWORD(v78) = v33;
        width = v85;
        LODWORD(v77) = v34;
        LODWORD(v72) = v26;
        LODWORD(v71) = v83;
        LODWORD(v70) = v85;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2772, ASSERT_TYPE_ASSERT, "(height == colorRt.GetHeight())", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "height == colorRt.GetHeight()", v36->m_image.m_base.name, v70, v71, v72, v35, v77, v78) )
          __debugbreak();
      }
      v37 = (R_RT_Surface *)R_RT_Handle::GetSurface(&v80);
      if ( (v37->m_rtFlagsInternal & 0x20) != 0 )
      {
        m_headViewSurfaceID = v37->m_link.m_base.m_headViewSurfaceID;
        if ( !m_headViewSurfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
          __debugbreak();
        v39 = (m_headViewSurfaceID & 0x7FFF) - 1;
        if ( v39 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 253, ASSERT_TYPE_ASSERT, "(baseSurfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "baseSurfaceIndex < g_R_RT_surfaceMax") )
          __debugbreak();
        v37 = &g_R_RT_ManagerSurfaceAllocator->blocks[v39];
      }
      if ( (v37->m_rtFlags & 0x800) != 0 )
      {
        height = v83;
      }
      else
      {
        v40 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.height;
        v41 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.width;
        v42 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.name;
        v43 = R_RT_Handle::GetSurface(&v81);
        LODWORD(v78) = v40;
        width = v85;
        LODWORD(v77) = v41;
        v76 = v42;
        height = v83;
        LODWORD(v72) = v26;
        LODWORD(v71) = v83;
        LODWORD(v70) = v85;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2773, ASSERT_TYPE_ASSERT, "(( colorRt.GetBaseFlags() & R_RT_Flag_RTView ) != 0)", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "( colorRt.GetBaseFlags() & R_RT_Flag_RTView ) != 0", v43->m_image.m_base.name, v70, v71, v72, v76, v77, v78) )
          __debugbreak();
      }
      ++v26;
    }
    while ( v26 != m_colorRtCount );
    _R15 = &state->rtGroup;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+88h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+var_80.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v80);
    if ( width == R_RT_Handle::GetSurface(&v80)->m_image.m_base.width )
    {
      v51 = v85;
    }
    else
    {
      v47 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.height;
      v48 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.width;
      v49 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.name;
      v50 = R_RT_Handle::GetSurface(&v81);
      v51 = v85;
      LODWORD(v77) = v47;
      LODWORD(v74) = v48;
      v73 = v49;
      height = v83;
      LODWORD(v71) = v83;
      LODWORD(v70) = v85;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2782, ASSERT_TYPE_ASSERT, "(width == depthRt.GetWidth())", "%s\n\t'%s'=%dx%d, depth('%s')=%dx%d", "width == depthRt.GetWidth()", v50->m_image.m_base.name, v70, v71, v73, v74, v77) )
        __debugbreak();
    }
    if ( height == R_RT_Handle::GetSurface(&v80)->m_image.m_base.height )
      goto LABEL_73;
    v52 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.height;
    v53 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.width;
    v54 = R_RT_Handle::GetSurface(&v80)->m_image.m_base.name;
    v55 = R_RT_Handle::GetSurface(&v81);
    LODWORD(v77) = v52;
    LODWORD(v74) = v53;
    LODWORD(v71) = v83;
    LODWORD(v70) = v51;
    v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2783, ASSERT_TYPE_ASSERT, "(height == depthRt.GetHeight())", "%s\n\t'%s'=%dx%d, depth('%s')=%dx%d", "height == depthRt.GetHeight()", v55->m_image.m_base.name, v70, v71, v54, v74, v77);
    goto LABEL_71;
  }
  if ( v80.m_tracking.m_allocCounter )
  {
    v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
LABEL_71:
    if ( v46 )
      __debugbreak();
  }
LABEL_73:
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+88h]
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
  }
  R_HW_SetRenderTargets(state, m_colorRtCount, _R14->m_colorRts, (R_RT_DepthHandle *)&v81);
  R_RT_Tracking_GroupRefDecrement(_R15);
  R_RT_Tracking_GroupRefIncrement(_R14, location);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [r15], xmm0
    vmovups xmm1, xmmword ptr [r14+10h]
    vmovups xmmword ptr [r15+10h], xmm1
    vmovups xmm0, xmmword ptr [r14+20h]
    vmovups xmmword ptr [r15+20h], xmm0
    vmovups xmm1, xmmword ptr [r14+30h]
    vmovups xmmword ptr [r15+30h], xmm1
    vmovups xmm0, xmmword ptr [r14+40h]
    vmovups xmmword ptr [r15+40h], xmm0
    vmovups xmm1, xmmword ptr [r14+50h]
    vmovups xmmword ptr [r15+50h], xmm1
    vmovups xmm0, xmmword ptr [r14+60h]
    vmovups xmmword ptr [r15+60h], xmm0
    vmovups xmm0, xmmword ptr [r14+70h]
    vmovups xmmword ptr [r15+70h], xmm0
    vmovups xmm1, xmmword ptr [r14+80h]
    vmovups xmmword ptr [r15+80h], xmm1
    vmovups xmm0, xmmword ptr [r14+90h]
    vmovups xmmword ptr [r15+90h], xmm0
    vmovups xmm1, xmmword ptr [r14+0A0h]
    vmovups xmmword ptr [r15+0A0h], xmm1
    vmovups xmm0, xmmword ptr [r14+0B0h]
    vmovups xmmword ptr [r15+0B0h], xmm0
  }
  _R15->m_vrsRt.m_tracking.m_location = _R14->m_vrsRt.m_tracking.m_location;
  source = context->source;
  *((_BYTE *)source + 11668) |= 2u;
  source->viewMode = VIEW_MODE_NONE;
}

/*
==============
R_SetResourceImageInternal
==============
*/
void R_SetResourceImageInternal(GfxCmdBufState *state, GfxShaderImageSetStage imageSetID, unsigned int resourceIndex, const GfxImage *image)
{
  unsigned __int64 v4; 
  const char *v8; 
  int v9; 
  const char *v10; 
  const char *name; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v17; 

  v4 = resourceIndex;
  _RBX = state;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1058, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !_RBX->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1059, ASSERT_TYPE_ASSERT, "(state->data)", (const char *)&queryFormat, "state->data") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x28 )
  {
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1060, ASSERT_TYPE_ASSERT, "(unsigned)( resourceIndex ) < (unsigned)( ( sizeof( *array_counter( state->shaderResourceViews[imageSetID] ) ) + 0 ) )", "resourceIndex doesn't index ARRAY_COUNT( state->shaderResourceViews[imageSetID] )\n\t%i not in [0, %i)", v17, 40) )
      __debugbreak();
  }
  Stream_UsedImage(image);
  if ( Sys_IsBackendOwnerThread() )
  {
    if ( R_IsLockedIfGfxImmediateContext(_RBX->device) )
      goto LABEL_17;
    v8 = "R_IsLockedIfGfxImmediateContext( state->device )";
    v9 = 1082;
    v10 = "(R_IsLockedIfGfxImmediateContext( state->device ))";
  }
  else
  {
    if ( _RBX->device != g_dx.immediateContext )
      goto LABEL_17;
    v8 = "!R_IsImmediateContext( state->device )";
    v9 = 1086;
    v10 = "(!R_IsImmediateContext( state->device ))";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_17:
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1104, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  _RDI = R_Texture_Get(_RBX->data, image->textureId);
  if ( (_RDI->shaderView.view & 0xFFFFFFFD) == 0 )
  {
    name = "<unknown>";
    if ( image->name )
      name = image->name;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1106, ASSERT_TYPE_ASSERT, "( !newView.IsNull() )", "R_SetResourceImageInternal: image %s has null shaderView", name) )
      __debugbreak();
  }
  v13 = v4 + 40i64 * (unsigned __int8)imageSetID;
  if ( _RBX->shaderResourceViews[0][v13].buffer.view != _RDI->shaderView.view || _RBX->shaderResourceViews[0][v13].buffer.resource != _RDI->shaderView.resource || (v14 = _RBX->resourcesClear[(unsigned __int8)imageSetID], !_bittest64((const __int64 *)&v14, v4)) )
  {
    _RBX->resourcesDirty[(unsigned __int8)imageSetID] |= 1i64 << v4;
    _RBX->resourcesClear[(unsigned __int8)imageSetID] |= 1i64 << v4;
    __asm { vmovups xmm0, xmmword ptr [rdi+8] }
    _RAX = 2 * (v13 + 420);
    __asm { vmovups xmmword ptr [rbx+rax*8], xmm0 }
  }
}

/*
==============
R_SetState
==============
*/
bool R_SetState(GfxCmdBufContext *context, const GfxStateBits *stateBits)
{
  GfxCmdBufState *state; 
  GfxOtherStateBits otherBits; 
  __int64 v4; 
  GfxDevice *device; 
  unsigned int *m_pCurrent; 
  __int64 v7; 
  const char *v8; 
  bool result; 

  state = context->state;
  otherBits = stateBits->otherBits;
  v4 = stateBits->otherBits ^ state->refStateBits.otherBits;
  if ( v4 )
  {
    if ( (v4 & 0xFF0000000000i64) != 0 )
    {
      device = state->device;
      m_pCurrent = device->m_Putter.m_pCurrent;
      if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
      {
        ((void (__fastcall *)(GfxDevice *, _QWORD))device->m_pFunction[8].QueryInterface)(device, BYTE5(otherBits));
      }
      else
      {
        *m_pCurrent = -1073694720;
        m_pCurrent[1] = BYTE5(otherBits);
        device->m_Putter.m_pCurrent = m_pCurrent + 2;
      }
    }
    if ( (v4 & 0x180) == 0 )
      goto LABEL_14;
    v7 = otherBits & 0x180;
    if ( (otherBits & 0x180) != 0 )
    {
      if ( v7 == 128 )
      {
        v8 = "MS: 1x1";
      }
      else
      {
        if ( v7 != 256 )
        {
LABEL_14:
          state->refStateBits.otherBits = otherBits;
          goto LABEL_15;
        }
        v8 = "MS: 2x2";
      }
    }
    else
    {
      v8 = "MS: Off";
    }
    R_ProfSetMarker(state, v8);
    goto LABEL_14;
  }
LABEL_15:
  result = 1;
  state->pipelineStateDirty = 1;
  return result;
}

/*
==============
R_SetVertexTextureInternal
==============
*/
void R_SetVertexTextureInternal(GfxCmdBufState *state, unsigned int resourceIndex, const GfxImage *image, const char *optionalSlotName)
{
  R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_VS, resourceIndex, image);
}

/*
==============
R_SetViewportAndScissorSeparate
==============
*/
void R_SetViewportAndScissorSeparate(GfxCmdBufState *state, const GfxViewport *viewport, const GfxViewport *scissor)
{
  unsigned int width; 
  GfxDevice *device; 
  __int64 v11; 
  int v12; 

  _RDI = viewport;
  _RBX = state;
  if ( *(_QWORD *)&state->viewport.x == *(_QWORD *)&viewport->x && (width = viewport->width, *(_QWORD *)&_RBX->viewport.width == *(_QWORD *)&viewport->width) )
  {
    if ( _RBX->scissor.x == scissor->x && _RBX->scissor.y == scissor->y && _RBX->scissor.width == scissor->width && _RBX->scissor.height == scissor->height )
      return;
  }
  else
  {
    width = viewport->width;
  }
  if ( !width )
  {
    v12 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v12) )
      __debugbreak();
  }
  if ( !_RDI->height )
  {
    LODWORD(v11) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v11) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovss  xmm3, dword ptr [rbx+9F8h]; farValue
    vmovss  xmm2, dword ptr [rbx+9F4h]; nearValue
  }
  device = _RBX->device;
  __asm { vmovups xmmword ptr [rbx+0A04h], xmm0 }
  R_HW_SetViewport(device, _RDI, *(float *)&_XMM2, *(float *)&_XMM3);
  R_HW_SetScissor(_RBX, scissor);
}

/*
==============
R_SetViewportMSParams
==============
*/

void __fastcall R_SetViewportMSParams(GfxCmdBufSourceState *source, double msScale)
{
  *((_BYTE *)source + 11668) |= 2u;
  __asm { vmovss  dword ptr [rcx+2D50h], xmm1 }
}

/*
==============
R_SetViewportStruct
==============
*/
void R_SetViewportStruct(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  GfxViewportBehavior viewportBehavior; 
  __int64 v6; 
  int v7; 

  _RDI = viewport;
  _RBX = source;
  if ( !viewport->width )
  {
    v7 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v7) )
      __debugbreak();
  }
  if ( !_RDI->height )
  {
    LODWORD(v6) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v6) )
      __debugbreak();
  }
  viewportBehavior = _RBX->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v6) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v6) )
      __debugbreak();
  }
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  *((_BYTE *)_RBX + 11668) |= 2u;
  __asm { vmovups xmmword ptr [rbx+2D04h], xmm0 }
  _RBX->viewMode = VIEW_MODE_NONE;
}

/*
==============
R_SetViewportValues
==============
*/
void R_SetViewportValues(GfxCmdBufSourceState *source, unsigned int x, unsigned int y, unsigned int width, unsigned int height)
{
  GfxViewportBehavior viewportBehavior; 
  __int64 v8; 
  __int128 v9; 

  _RBX = source;
  HIDWORD(v9) = height;
  LODWORD(v9) = x;
  *(_QWORD *)((char *)&v9 + 4) = __PAIR64__(width, y);
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !height )
  {
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v8) )
      __debugbreak();
  }
  viewportBehavior = _RBX->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v8) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v8) )
      __debugbreak();
  }
  __asm { vmovups xmm0, [rsp+48h+var_18] }
  *((_BYTE *)_RBX + 11668) |= 2u;
  __asm { vmovups xmmword ptr [rbx+2D04h], xmm0 }
  _RBX->viewMode = VIEW_MODE_NONE;
}

/*
==============
R_ShutdownCmdBufState
==============
*/
void R_ShutdownCmdBufState(GfxCmdBufState *state)
{
  GfxDevice *device; 
  char *v3; 
  int v4; 
  unsigned int *m_pCurrent; 
  unsigned int *v6; 
  __int64 v7; 
  GfxDescriptorState *descState; 
  unsigned int i; 
  __int64 v10; 
  char v11[512]; 

  R_SetIndicesWithType(state, NULL, DXGI_FORMAT_R16_UINT);
  memset_0(v11, 0, sizeof(v11));
  device = state->device;
  v3 = v11;
  v4 = 32;
  m_pCurrent = device->m_Putter.m_pCurrent;
  if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, char *))device->m_pFunction[16].QueryInterface)(state->device, 0i64, 32i64, v11);
  }
  else
  {
    *m_pCurrent = 1077921280;
    v6 = m_pCurrent + 1;
    do
    {
      v7 = *((unsigned int *)v3 + 3);
      v3 += 16;
      *(_QWORD *)v6 = *((_QWORD *)v3 - 2) + (v7 << 48);
      v6 += 2;
      --v4;
    }
    while ( v4 );
    device->m_Putter.m_pCurrent = v6;
  }
  R_ClearDescriptorRangeSlots(state->descState, HS_VIEW_RANGE, 0, state->descState->ranges[1].numSlots);
  descState = state->descState;
  R_ClearDescriptorRangeSlots(descState, GRAPHICS_DESC_RANGE_START, descState->ranges[0].startSlot, descState->ranges[0].numSlots);
  R_ClearDescriptorRangeSlots(descState, HS_VIEW_RANGE, descState->ranges[1].startSlot, descState->ranges[1].numSlots);
  R_ClearDescriptorRangeSlots(descState, DS_VIEW_RANGE, descState->ranges[2].startSlot, descState->ranges[2].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_VIEW_RANGE_LOWER, descState->ranges[3].startSlot, descState->ranges[3].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_VIEW_RANGE_UPPER, descState->ranges[4].startSlot, descState->ranges[4].numSlots);
  R_ClearDescriptorRangeSlots(descState, GRAPHICS_VIEW_RANGE_LARGE_TABLE, 0, descState->ranges[7].numSlots);
  R_ClearDescriptorRangeSlots(descState, PS_RW_VIEW_RANGE, descState->ranges[8].startSlot, descState->ranges[8].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_DESC_RANGE_START, 0, descState->ranges[9].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, 0, descState->ranges[10].numSlots);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_UAV_RANGE, 0, descState->ranges[12].numSlots);
  for ( i = 0; i < 3; ++i )
  {
    v10 = (unsigned __int8)i;
    state->resourcesDirty[v10] = 0i64;
    state->resourcesClear[v10] = 0i64;
  }
  R_FlushResourceBuffers(state);
  R_ShutdownGfxComputeCmdBufState(state);
}

/*
==============
R_TextureFromCodeError
==============
*/
void R_TextureFromCodeError(unsigned int codeTexture, const char *pMtlName, const char *pDrawListName, bool persistent)
{
  const char *CodeTextureName; 
  const char *v9; 

  CodeTextureName = R_GetCodeTextureName(codeTexture);
  v9 = (char *)&queryFormat.fmt + 3;
  if ( persistent )
    v9 = "Persistent";
  Com_Printf(8, "invalid code%sTexture: %d '%s' material: '%s' drawlist: '%s'\n", v9, codeTexture, CodeTextureName, pMtlName, pDrawListName);
}

/*
==============
R_UnbindRenderTarget
==============
*/
void R_UnbindRenderTarget(GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 

  state = context->state;
  R_RT_Tracking_GroupRefDecrement(&state->rtGroup);
  R_HW_SetRenderTargetsDX(state->device, state->descState, 0, NULL, 0);
  state->rtGroup.m_colorRtCount = 0;
  state->rtGroup.m_depthRt.m_surfaceID = 0;
  state->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
  state->rtGroup.m_depthRt.m_tracking.m_name = NULL;
  state->rtGroup.m_depthRt.m_tracking.m_location = NULL;
  state->rtGroup.m_vrsRt.m_surfaceID = 0;
  state->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
  state->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
  state->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
  state->deviceState.numRenderTargets = 0;
}

/*
==============
R_UnbindRenderTargetImage
==============
*/
void R_UnbindRenderTargetImage(GfxCmdBufState *state, const GfxImage *image)
{
  unsigned int v3; 
  GfxShaderResource (*shaderResourceViews)[40]; 
  unsigned int v5; 
  const GfxTexture *Resident; 
  unsigned int v7; 
  GfxShaderResource *v8; 
  GfxShaderResource *v9; 

  v3 = 0;
  shaderResourceViews = state->shaderResourceViews;
  v5 = 0;
  Resident = R_Texture_GetResident(image->textureId);
  do
  {
    if ( (*shaderResourceViews)[0].buffer.view == Resident->shaderView.view && (*shaderResourceViews)[0].buffer.resource == Resident->shaderView.resource )
      R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_VS, v5, NULL);
    ++v5;
    shaderResourceViews = (GfxShaderResource (*)[40])((char *)shaderResourceViews + 16);
  }
  while ( v5 < 0x28 );
  v7 = 0;
  v8 = state->shaderResourceViews[1];
  do
  {
    if ( v8->buffer.view == Resident->shaderView.view && v8->buffer.resource == Resident->shaderView.resource )
      R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_DS, v7, NULL);
    ++v7;
    ++v8;
  }
  while ( v7 < 0x28 );
  v9 = state->shaderResourceViews[2];
  do
  {
    if ( v9->buffer.view == Resident->shaderView.view && v9->buffer.resource == Resident->shaderView.resource )
      R_SetResourceImageInternal(state, GFX_SHADER_IMAGE_SET_PS, v3, NULL);
    ++v3;
    ++v9;
  }
  while ( v3 < 0x28 );
  R_FlushResourceBuffers(state);
}

/*
==============
R_UnbindRenderTargetImages
==============
*/
void R_UnbindRenderTargetImages(GfxCmdBufState *state, R_RT_ColorHandle *colorRt)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v5; 

  Surface = R_RT_Handle::GetSurface(colorRt);
  R_UnbindRenderTargetImage(state, &Surface->m_image.m_base);
  if ( (R_RT_Handle::GetSurface(colorRt)->m_rtFlags & 0x8000) != 0 )
  {
    v5 = R_RT_Handle::GetSurface(colorRt);
    R_UnbindRenderTargetImage(state, &v5->m_color.m_fmaskImage.m_base);
  }
}

/*
==============
R_UnbindRenderTargetImages
==============
*/
void R_UnbindRenderTargetImages(GfxCmdBufState *state, R_RT_DepthHandle *depthRt)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v5; 

  Surface = R_RT_Handle::GetSurface(depthRt);
  R_UnbindRenderTargetImage(state, &Surface->m_image.m_base);
  if ( (R_RT_Handle::GetSurface(depthRt)->m_rtFlags & 0x80) != 0 )
  {
    v5 = R_RT_Handle::GetSurface(depthRt);
    if ( (v5->m_rtFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 414, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_Stencil)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_Stencil") )
      __debugbreak();
    if ( (v5->m_rtFlagsInternal & 0x2000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 415, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & R_RT_FlagInternal_Abandoned ) == R_RT_FlagInternal_None") )
      __debugbreak();
    R_UnbindRenderTargetImage(state, &v5->m_color.m_fmaskImage.m_base);
  }
}

/*
==============
R_UnmapReadbackBuffer
==============
*/
void R_UnmapReadbackBuffer(ComputeCmdBufState *state, R_RT_BufferHandle *readbackBuffer)
{
  ;
}

/*
==============
R_UnmapReadbackRt
==============
*/
void R_UnmapReadbackRt(ComputeCmdBufState *state, R_RT_ColorHandle *readbackRt)
{
  ;
}

/*
==============
R_UpdateAuxDirtyForClear
==============
*/
void R_UpdateAuxDirtyForClear(const R_RT_Group *rtGroup, unsigned int whichToClear)
{
  char v3; 
  int v5; 
  int m_colorRtCount; 
  R_RT_Handle v9; 

  v3 = whichToClear;
  _RDI = rtGroup;
  if ( (whichToClear & 0xF) != 0 )
  {
    v5 = 0;
    m_colorRtCount = rtGroup->m_colorRtCount;
    if ( rtGroup->m_colorRtCount )
    {
      do
        R_RT_Handle::ClearAuxDirty(&_RDI->m_colorRts[v5++]);
      while ( v5 != m_colorRtCount );
    }
  }
  if ( (v3 & 0x30) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+88h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v9);
      R_RT_Handle::ClearAuxDirty(&v9);
    }
    else if ( v9.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v9.m_surfaceID) )
        __debugbreak();
    }
  }
}

/*
==============
R_UpdateBindlessSamplerArray
==============
*/
void R_UpdateBindlessSamplerArray(void)
{
  ;
}

/*
==============
R_UpdateViewport
==============
*/
void R_UpdateViewport(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  char v36; 
  int v52; 
  unsigned int frameCount; 
  unsigned int v55; 
  __int64 v56; 
  unsigned int i; 
  __int64 unsignedInt; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  char v62; 
  __int64 v75; 
  __int64 v76; 
  base_vec2_t<int> v77; 
  int v78; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RSI = source;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
  }
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2513, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RSI->viewMode == VIEW_MODE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2514, ASSERT_TYPE_ASSERT, "(source->viewMode != VIEW_MODE_NONE)", (const char *)&queryFormat, "source->viewMode != VIEW_MODE_NONE") )
    __debugbreak();
  *((_BYTE *)_RSI + 11668) &= ~2u;
  if ( !_RSI->renderTargetWidth )
  {
    LODWORD(v75) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2517, ASSERT_TYPE_ASSERT, "( ( source->renderTargetWidth > 0 ) )", "( source->renderTargetWidth ) = %i", v75) )
      __debugbreak();
  }
  if ( !_RSI->renderTargetHeight )
  {
    LODWORD(v75) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2518, ASSERT_TYPE_ASSERT, "( ( source->renderTargetHeight > 0 ) )", "( source->renderTargetHeight ) = %i", v75) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rsi+2D50h]
    vmaxss  xmm10, xmm0, xmm13
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vdivss  xmm4, xmm13, xmm6
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm1, xmm10
    vmulss  xmm8, xmm2, cs:__real@3f000000
    vdivss  xmm5, xmm13, xmm7
    vmulss  xmm1, xmm0, xmm5
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm1, xmm10
    vmulss  xmm9, xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  v36 = *((_BYTE *)_RSI + 11668);
  __asm
  {
    vaddss  xmm11, xmm1, xmm8
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm12, xmm1, xmm9
  }
  if ( (v36 & 0x40) == 0 )
  {
    __asm
    {
      vmovss  dword ptr [rsi+740h], xmm6
      vmovss  dword ptr [rsi+744h], xmm7
      vmovss  dword ptr [rsi+748h], xmm4
      vmovss  dword ptr [rsi+74Ch], xmm5
    }
    ++_RSI->constVersions[4];
    v36 = *((_BYTE *)_RSI + 11668);
  }
  *((_BYTE *)_RSI + 11668) = v36 & 0xBF;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm4, xmm13, xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovss  dword ptr [rsi+764h], xmm2
    vmovss  dword ptr [rsi+76Ch], xmm4
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rsi+760h], xmm0
    vxorps  xmm0, xmm9, cs:__xmm@80000000800000008000000080000000
    vdivss  xmm3, xmm13, xmm1
    vmovss  dword ptr [rsi+768h], xmm3
  }
  ++_RSI->constVersions[6];
  __asm
  {
    vmovss  dword ptr [rsi+7D4h], xmm0
    vmovaps xmm0, xmm10; X
    vmovss  dword ptr [rsi+7D0h], xmm8
    vmovss  dword ptr [rsi+7D8h], xmm11
    vmovss  dword ptr [rsi+7DCh], xmm12
  }
  ++_RSI->constVersions[13];
  *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
  v52 = 0;
  __asm { vmulss  xmm6, xmm0, cs:__real@c0549a78 }
  frameCount = _RSI->input.data->frameCount;
  v55 = 1;
  v77 = R_VRSGetPixelPositionForSample(frameCount, 0, rg.vrsEmissiveOnly);
  v56 = 1i64;
  for ( i = 4; i < 0x10; i += 4 )
  {
    unsignedInt = frameCount & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( v55 >= 4 )
    {
      LODWORD(v76) = 4;
      LODWORD(v75) = v55;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v75, v76) )
        __debugbreak();
    }
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v76) = 4;
      LODWORD(v75) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v75, v76) )
        __debugbreak();
    }
    v59 = s_VRSSampleToPixelOrdered_0[unsignedInt][v56];
    if ( (unsigned int)v59 >= 4 )
    {
      LODWORD(v76) = 4;
      LODWORD(v75) = v59;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v75, v76) )
        __debugbreak();
    }
    ++v55;
    ++v56;
    v60 = (int)(HIDWORD(*(_QWORD *)&s_VRSSamplePosition_0[v59]) - v77.v[1]);
    v61 = ((((BYTE4(v60) & 7) + (int)v60) >> 3) + 1) << (i + 2);
    v62 = i;
    v52 |= (((int)(*(_QWORD *)&s_VRSSamplePosition_0[v59] - v77.v[0]) / 8 + 1) << v62) | v61;
  }
  _RSI = source;
  _R11 = &v83;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vdivss  xmm0, xmm13, xmm10
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rsi+0D70h], xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rsi+0D74h], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovss  dword ptr [rsi+0D78h], xmm0
  }
  v78 = v52;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0F8h+var_B8]
    vmovss  dword ptr [rsi+0D7Ch], xmm1
  }
  ++source->constVersions[103];
}

