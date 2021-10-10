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
  const R_RT_Surface *v12; 
  const GfxTexture *Resident; 
  R_RT_Handle v14; 

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
      v14 = depthRenderTargetHandle->R_RT_Handle;
      m_subresourceToTransition = Surface->m_subresourceToTransition;
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal;
      v12 = R_RT_Handle::GetSurface(&v14);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        Resident = (const GfxTexture *)&v12->1080;
      }
      else
      {
        Resident = R_Texture_GetResident(v12->m_image.m_base.textureId);
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
  const R_RT_Surface *v12; 
  const GfxTexture *Resident; 
  R_RT_Handle v14; 

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
  if ( (R_RT_Handle::GetSurface(colorRenderTargetHandle)->m_rtFlagsInternal & 0x40) == 0 && R_RT_Handle::GetSurface(colorRenderTargetHandle)->m_subresourceToTransition == -1 )
    after |= 0x3400000u;
  Surface = R_RT_Handle::GetSurface(colorRenderTargetHandle);
  v14 = colorRenderTargetHandle->R_RT_Handle;
  m_subresourceToTransition = Surface->m_subresourceToTransition;
  m_rtFlagsInternal = R_RT_Handle::GetSurface(&v14)->m_rtFlagsInternal;
  v12 = R_RT_Handle::GetSurface(&v14);
  if ( (m_rtFlagsInternal & 8) != 0 )
  {
    Resident = (const GfxTexture *)&v12->1080;
  }
  else
  {
    Resident = R_Texture_GetResident(v12->m_image.m_base.textureId);
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
  __int16 v1; 
  int v3; 
  int m_colorRtCount; 
  unsigned int m_allocCounter; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  unsigned __int16 v7; 
  char *v8; 
  int v9; 
  const char *v10; 
  const R_RT_Surface *Surface; 
  bool v12; 
  unsigned int v13; 
  R_RT_FlagsInternal v14; 
  unsigned __int16 v15; 
  char *v16; 
  int v17; 
  const char *v18; 
  const R_RT_Surface *v19; 
  __int64 v20; 
  __int64 v21; 
  R_RT_Handle m_depthRt; 

  if ( RB_IsBackendCmdBufContextState(state) )
  {
    v3 = 0;
    m_colorRtCount = state->rtGroup.m_colorRtCount;
    if ( state->rtGroup.m_colorRtCount )
    {
      do
      {
        m_depthRt = (R_RT_Handle)state->rtGroup.m_colorRts[v3];
        m_allocCounter = m_depthRt.m_tracking.m_allocCounter;
        if ( v1 )
        {
          R_RT_Handle::GetSurface(&m_depthRt);
        }
        else
        {
          if ( m_depthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
            __debugbreak();
        }
        if ( v1 >= 0 )
        {
          if ( v1 )
          {
            R_RT_Handle::GetSurface(&m_depthRt);
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
              __debugbreak();
          }
          m_rtFlagsInternal = R_RT_Handle::GetSurface(&m_depthRt)->m_rtFlagsInternal;
          if ( (m_rtFlagsInternal & 0x800) != 0 )
          {
            if ( (m_rtFlagsInternal & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
              __debugbreak();
            if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
              __debugbreak();
            v7 = (v1 & 0x7FFF) - 1;
            if ( v7 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
              __debugbreak();
            v8 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v7;
            if ( *((_DWORD *)v8 + 572) != m_allocCounter )
            {
              LODWORD(v21) = m_allocCounter;
              LODWORD(v20) = *((_DWORD *)v8 + 572);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v20, v21, m_depthRt.m_tracking.m_name, m_depthRt.m_tracking.m_location) )
                __debugbreak();
            }
            v9 = *((_DWORD *)v8 + 4);
            if ( (v9 & 0x3000) != 4096 && (v9 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
              __debugbreak();
            v10 = (const char *)*((_QWORD *)v8 + 288);
            Surface = R_RT_Handle::GetSurface(&m_depthRt);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1243, ASSERT_TYPE_ASSERT, "(!( colorRt ).GetAuxDirty())", "%s\n\tRT '%s' not cleared before use.  Created at: %s", "!( colorRt ).GetAuxDirty()", Surface->m_image.m_base.name, v10) )
              __debugbreak();
          }
        }
        ++v3;
      }
      while ( v3 != m_colorRtCount );
    }
    m_depthRt = (R_RT_Handle)state->rtGroup.m_depthRt;
    if ( !v1 )
    {
      if ( !m_depthRt.m_tracking.m_allocCounter )
        return;
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      goto LABEL_60;
    }
    R_RT_Handle::GetSurface(&m_depthRt);
    if ( !R_RT_Handle::IsReadOnly(&m_depthRt) )
    {
      v13 = m_depthRt.m_tracking.m_allocCounter;
      R_RT_Handle::GetSurface(&m_depthRt);
      if ( v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 176, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", (const char *)&queryFormat, "!this->IsReadOnly()") )
        __debugbreak();
      v14 = R_RT_Handle::GetSurface(&m_depthRt)->m_rtFlagsInternal;
      if ( (v14 & 0x800) != 0 )
      {
        if ( (v14 & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
          __debugbreak();
        v15 = (v1 & 0x7FFF) - 1;
        if ( v15 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
          __debugbreak();
        v16 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v15;
        if ( *((_DWORD *)v16 + 572) != v13 )
        {
          LODWORD(v21) = v13;
          LODWORD(v20) = *((_DWORD *)v16 + 572);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v20, v21, m_depthRt.m_tracking.m_name, m_depthRt.m_tracking.m_location) )
            __debugbreak();
        }
        v17 = *((_DWORD *)v16 + 4);
        if ( (v17 & 0x3000) != 4096 && (v17 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
          __debugbreak();
        v18 = (const char *)*((_QWORD *)v16 + 288);
        v19 = R_RT_Handle::GetSurface(&m_depthRt);
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1248, ASSERT_TYPE_ASSERT, "(!( depthRt ).GetAuxDirty())", "%s\n\tRT '%s' not cleared before use.  Created at: %s", "!( depthRt ).GetAuxDirty()", v19->m_image.m_base.name, v18);
LABEL_60:
        if ( v12 )
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
  unsigned int v4; 
  D3D12_COMPARISON_FUNC v5; 
  unsigned int v6; 
  D3D12XBOX_TEXTURE_XY_FILTER v7; 
  unsigned int v8; 
  D3D12XBOX_TEXTURE_MIP_FILTER v9; 
  int v10; 
  float value; 
  D3D12XBOX_TEXTURE_Z_FILTER v12; 
  __int128 unsignedInt; 
  D3D12_TEXTURE_ADDRESS_MODE v16; 
  D3D12_TEXTURE_ADDRESS_MODE v17; 
  D3D12_TEXTURE_ADDRESS_MODE v18; 
  unsigned int TrilinearWindowID; 
  __int64 v20; 

  v4 = samplerState;
  v5 = D3D12_COMPARISON_FUNC_NEVER;
  v6 = samplerState & 7;
  if ( (samplerState & 7) != 0 )
  {
    if ( v6 == 1 )
    {
LABEL_6:
      v7 = D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR;
      goto LABEL_11;
    }
    if ( v6 > 1 )
    {
      if ( v6 <= 5 )
      {
        v7 = D3D12XBOX_TEXTURE_XY_FILTER_ANISO_BILINEAR;
        goto LABEL_11;
      }
      if ( v6 == 6 )
        goto LABEL_6;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 99, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(99): unhandled case %d in switch statement", samplerState & 7) )
      __debugbreak();
  }
  v7 = D3D12XBOX_TEXTURE_XY_FILTER_POINT;
LABEL_11:
  v8 = 2;
  switch ( (v4 >> 3) & 3 )
  {
    case 0u:
LABEL_16:
      v9 = D3D12XBOX_TEXTURE_MIP_FILTER_NONE;
      break;
    case 1u:
      v9 = D3D12XBOX_TEXTURE_MIP_FILTER_POINT;
      break;
    case 2u:
      v9 = D3D12XBOX_TEXTURE_MIP_FILTER_LINEAR;
      break;
    default:
      LODWORD(v20) = (v4 >> 3) & 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(121): unhandled case %d in switch statement", v20) )
        __debugbreak();
      goto LABEL_16;
  }
  v10 = (v4 >> 5) & 3;
  switch ( v10 )
  {
    case 0:
LABEL_22:
      value = 0.0;
      break;
    case 1:
      value = r_texFilterMipBias->current.value;
      break;
    case 2:
      unsignedInt = r_smaaGradientAdjust->current.unsignedInt;
      *(float *)&unsignedInt = (float)(*(float *)&unsignedInt * 0.70709997) + (float)(1.0 - *(float *)&unsignedInt);
      _XMM2 = unsignedInt;
      __asm { vmaxss  xmm0, xmm2, cs:__real@3a83126f; X }
      value = log2f(*(float *)&_XMM0);
      break;
    default:
      LODWORD(v20) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 139, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(139): unhandled case %d in switch statement", v20) )
        __debugbreak();
      goto LABEL_22;
  }
  if ( v6 )
  {
    if ( v6 - 1 > 5 )
    {
      LODWORD(v20) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(158): unhandled case %d in switch statement", v20) )
        __debugbreak();
      v12 = D3D12XBOX_TEXTURE_Z_FILTER_POINT;
    }
    else
    {
      v12 = D3D12XBOX_TEXTURE_Z_FILTER_LINEAR;
    }
  }
  else
  {
    v12 = D3D12XBOX_TEXTURE_Z_FILTER_POINT;
  }
  switch ( v6 )
  {
    case 0u:
    case 1u:
    case 6u:
      goto LABEL_35;
    case 2u:
      break;
    case 3u:
      v8 = 4;
      break;
    case 4u:
      v8 = 8;
      break;
    case 5u:
      v8 = 16;
      break;
    default:
      LODWORD(v20) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 181, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(181): unhandled case %d in switch statement", v20) )
        __debugbreak();
LABEL_35:
      v8 = 1;
      break;
  }
  desc->MipLODBias = value;
  desc->FilterMag = v7;
  desc->FilterMin = v7;
  desc->FilterZ = v12;
  desc->FilterMip = v9;
  desc->MaxAnisotropy = v8;
  desc->MaxLOD = 3.4028235e38;
  v16 = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
  if ( (samplerState & 0x80) != 0 )
    v16 = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  desc->AddressU = v16;
  v17 = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
  if ( (samplerState & 0x100) != 0 )
    v17 = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  desc->AddressV = v17;
  v18 = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
  if ( (samplerState & 0x200) != 0 )
    v18 = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
  desc->AddressW = v18;
  desc->Flags = D3D12XBOX_SAMPLER_FLAG_NONE;
  desc->FilterMode = D3D12XBOX_TEXTURE_FILTER_MODE_LERP;
  desc->MinLOD = 0.0;
  desc->MipLODBiasSecondary = 0.0;
  if ( (samplerState & 7) == 6 )
    v5 = D3D12_COMPARISON_FUNC_GREATER;
  desc->ComparisonFunc = v5;
  *(_QWORD *)desc->BorderColor = 0i64;
  *(_QWORD *)&desc->BorderColor[2] = 0i64;
  LODWORD(desc->AnisotropyBias) = r_texFilterAnisoBias->current.integer;
  desc->AnisotropyThreshold = R_FindAnisoWindowID(r_texFilterAnisoWindow->current.value);
  TrilinearWindowID = R_FindTrilinearWindowID(r_texFilterTrilinearWindow->current.value);
  desc->PerformanceZ = 0;
  desc->PerformanceMip = TrilinearWindowID;
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
  D3D12XBOX_TEXTURE_XY_FILTER FilterMin; 
  bool v5; 
  D3D12XBOX_TEXTURE_MIP_FILTER FilterMip; 
  D3D12_COMPARISON_FUNC ComparisonFunc; 
  BOOL v8; 
  int v9; 
  D3D12XBOX_SAMPLER_DESC v14; 

  R_BuildSamplerStateDesc(g_immutableSamplersStatesArray[(unsigned __int8)codeSampler - 4], &v14);
  if ( (v14.MipLODBiasSecondary != 0.0 || v14.PerformanceZ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 397, ASSERT_TYPE_ASSERT, "(dynamicSampler.MipLODBiasSecondary == 0.0f && dynamicSampler.PerformanceZ == 0)", (const char *)&queryFormat, "dynamicSampler.MipLODBiasSecondary == 0.0f && dynamicSampler.PerformanceZ == 0") )
    __debugbreak();
  if ( (v14.BorderColor[0] != 0.0 || v14.BorderColor[1] != 0.0 || v14.BorderColor[2] != 0.0 || v14.BorderColor[3] != 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 401, ASSERT_TYPE_ASSERT, "(dynamicSampler.BorderColor[0] == 0.0f && dynamicSampler.BorderColor[1] == 0.0f && dynamicSampler.BorderColor[2] == 0.0f && dynamicSampler.BorderColor[3] == 0.0f)", (const char *)&queryFormat, "dynamicSampler.BorderColor[0] == 0.0f && dynamicSampler.BorderColor[1] == 0.0f && dynamicSampler.BorderColor[2] == 0.0f && dynamicSampler.BorderColor[3] == 0.0f") )
    __debugbreak();
  FilterMin = v14.FilterMin;
  if ( v14.FilterMin != v14.FilterMag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 402, ASSERT_TYPE_ASSERT, "(dynamicSampler.FilterMin == dynamicSampler.FilterMag)", (const char *)&queryFormat, "dynamicSampler.FilterMin == dynamicSampler.FilterMag") )
    __debugbreak();
  if ( v14.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT )
  {
    v5 = FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT;
    goto LABEL_18;
  }
  if ( v14.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR )
  {
    v5 = FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR;
LABEL_18:
    if ( v5 )
      goto LABEL_21;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 404, ASSERT_TYPE_ASSERT, "(( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT ) || ( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR ))", (const char *)&queryFormat, "( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_POINT && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_POINT ) || ( dynamicSampler.FilterZ == D3D12XBOX_TEXTURE_Z_FILTER_LINEAR && dynamicSampler.FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR )") )
    __debugbreak();
LABEL_21:
  FilterMip = v14.FilterMip;
  ComparisonFunc = v14.ComparisonFunc;
  v8 = v14.FilterMip == D3D12XBOX_TEXTURE_MIP_FILTER_LINEAR;
  if ( v14.ComparisonFunc == D3D12_COMPARISON_FUNC_NEVER )
  {
    if ( v14.FilterMode == D3D12XBOX_TEXTURE_FILTER_MODE_MIN )
    {
      v9 = 16;
    }
    else if ( v14.FilterMode == D3D12XBOX_TEXTURE_FILTER_MODE_MAX )
    {
      v9 = 24;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 8;
  }
  staticSampler->MipLODBias = v14.MipLODBias;
  staticSampler->MinLOD = v14.MinLOD;
  _XMM0 = (unsigned int)FilterMip;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_3_4028235e38);
  __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
  staticSampler->BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
  *(_QWORD *)&staticSampler->RegisterSpace = 0i64;
  staticSampler->ComparisonFunc = ComparisonFunc;
  staticSampler->Filter = v8 | (4 * ((FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR) | (4 * (v9 | (FilterMin == D3D12XBOX_TEXTURE_XY_FILTER_BILINEAR)))));
  staticSampler->AddressU = v14.AddressU;
  staticSampler->AddressV = v14.AddressV;
  staticSampler->AddressW = v14.AddressW;
  staticSampler->MaxAnisotropy = v14.MaxAnisotropy;
  staticSampler->ShaderRegister = (unsigned __int8)codeSampler;
  staticSampler->MaxLOD = *(float *)&_XMM0;
}

/*
==============
R_ChangeDepthHackNearClip
==============
*/
void R_ChangeDepthHackNearClip(GfxCmdBufSourceState *source, unsigned int depthHackFlags)
{
  unsigned int v4; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 610, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( (depthHackFlags & 0xFFFFFFFE) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 611, ASSERT_TYPE_ASSERT, "(!(depthHackFlags & ~(1 << 0)))", (const char *)&queryFormat, "!(depthHackFlags & ~RF_DEPTHHACK)") )
    __debugbreak();
  if ( depthHackFlags != (source->renderFlags & 1) )
  {
    if ( ++source->matrixVersions[1] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 573, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((matrixIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( matrixIndex )] < 0xffff") )
      __debugbreak();
    ++source->matrixVersions[2];
    ++source->matrixVersions[3];
    if ( source->matrixVersions[2] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 587, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((CONST_SRC_CODE_VIEW_PROJECTION_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_VIEW_PROJECTION_MATRIX )] < 0xffff") )
      __debugbreak();
    if ( source->matrixVersions[3] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 588, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( CONST_SRC_CODE_OUTDOOR_LOOKUP_MATRIX )] < 0xffff") )
      __debugbreak();
    v4 = depthHackFlags | source->renderFlags & 0xFFFFFFFE;
    source->renderFlags = v4;
    _XMM0 = v4 & 1;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    source->input.consts[3].v[0] = *(float *)&_XMM0;
    *(_QWORD *)&source->input.consts[3].xyz.y = 0i64;
    source->input.consts[3].v[3] = 0.0;
    ++source->constVersions[3];
  }
}

/*
==============
R_ChangeDepthRange
==============
*/
void R_ChangeDepthRange(GfxCmdBufState *state, GfxDepthRangeType depthRangeType)
{
  float v4; 
  float v5; 
  GfxDevice *device; 
  __int64 v7; 

  if ( state->depthRangeType == depthRangeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1005, ASSERT_TYPE_SANITY, "( state->depthRangeType ) != ( depthRangeType )", "state->depthRangeType != depthRangeType\n\t%i, %i", state->depthRangeType, depthRangeType) )
    __debugbreak();
  state->depthRangeType = depthRangeType;
  v4 = FLOAT_0_984375;
  if ( depthRangeType != GFX_DEPTH_RANGE_FULL )
  {
    if ( depthRangeType == GFX_DEPTH_RANGE_SCENE )
    {
      v5 = FLOAT_0_984375;
      goto LABEL_10;
    }
    if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL )
    {
      LODWORD(v7) = depthRangeType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 978, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for near clip depth: %d", v7) )
        __debugbreak();
    }
  }
  v5 = FLOAT_1_0;
LABEL_10:
  state->depthRangeNear = v5;
  if ( depthRangeType == GFX_DEPTH_RANGE_FULL || depthRangeType == GFX_DEPTH_RANGE_SCENE )
  {
LABEL_15:
    v4 = 0.0;
    goto LABEL_16;
  }
  if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL )
  {
    LODWORD(v7) = depthRangeType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 995, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for far clip depth: %d", v7) )
      __debugbreak();
    goto LABEL_15;
  }
LABEL_16:
  device = state->device;
  state->depthRangeFar = v4;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1011, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  R_HW_SetViewport(device, &state->viewport, state->depthRangeNear, state->depthRangeFar);
  R_HW_SetScissor(state, &state->scissor);
}

/*
==============
R_ChangeObjectPlacementRemote
==============
*/
void R_ChangeObjectPlacementRemote(GfxCmdBufSourceState *source, const GfxPlacement *placement)
{
  R_ChangeObjectPlacement_Core(source, placement, 1.0);
}

/*
==============
R_ChangeObjectPlacement_Core
==============
*/
void R_ChangeObjectPlacement_Core(GfxCmdBufSourceState *source, const GfxPlacement *placement, float scale)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 629, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
    __debugbreak();
  UnitQuatToAxis(&placement->quat, &axis);
  v5 = (float)((float)(axis.m[0].v[0] * axis.m[0].v[0]) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 632, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", axis.m[0].v[0], axis.m[0].v[1], axis.m[0].v[2], fsqrt(v5)) )
    __debugbreak();
  v6 = (float)((float)(axis.m[1].v[0] * axis.m[1].v[0]) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 633, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", axis.m[1].v[0], axis.m[1].v[1], axis.m[1].v[2], fsqrt(v6)) )
    __debugbreak();
  v7 = (float)((float)(axis.m[2].v[0] * axis.m[2].v[0]) + (float)(axis.m[2].v[1] * axis.m[2].v[1])) + (float)(axis.m[2].v[2] * axis.m[2].v[2]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 634, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", axis.m[2].v[0], axis.m[2].v[1], axis.m[2].v[2], fsqrt(v7)) )
    __debugbreak();
  R_MatrixNeedsRefresh(source, 0xAAu);
  R_MatrixChanged(source, 0xAAu);
  v8 = placement->origin.v[1];
  origin.v[0] = placement->origin.v[0];
  origin.v[2] = placement->origin.v[2];
  origin.v[1] = v8;
  MatrixSet44(&source->matrices.matrix[10].m, &origin, &axis, scale);
}

/*
==============
R_ChangeObjectScaledPlacement
==============
*/
void R_ChangeObjectScaledPlacement(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  R_ChangeObjectPlacement_Core(source, &placement->base, placement->scale);
}

/*
==============
R_ChangeObjectScaledPlacementRemote
==============
*/
void R_ChangeObjectScaledPlacementRemote(GfxCmdBufSourceState *source, const GfxScaledPlacement *placement)
{
  R_ChangeObjectPlacement_Core(source, &placement->base, placement->scale);
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
  __int64 v8; 
  __m128 v9; 

  device = state->device;
  v9 = _mm_shuffle_ps(*(__m128 *)&value, *(__m128 *)&value, 0);
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v8 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + buffer->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __m128 *, _DWORD, _QWORD))device->m_pFunction[18].QueryInterface)(device, v8 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v8 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, buffer->rwView.rwResource, &v9, 0, 0i64);
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
  GfxCmdBufState *state; 
  const vec4_t *ClearColor; 
  double ClearDepth; 
  GfxViewport viewport; 
  const R_RT_Surface *Surface; 
  float m_clearDepth; 
  GfxDescriptorState *descState; 
  GfxDevice *device; 
  R_RT_Handle v12; 
  R_RT_DepthHandle m_depthRt; 

  m_depthRt = context->state->rtGroup.m_depthRt;
  v12 = (R_RT_Handle)m_depthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v12);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2902, ASSERT_TYPE_ASSERT, "(depthRt.IsValid())", (const char *)&queryFormat, "depthRt.IsValid()") )
      __debugbreak();
  }
  state = context->state;
  if ( state->viewport.x || state->viewport.y || state->viewport.width != R_RT_Handle::GetSurface(&v12)->m_image.m_base.width || state->viewport.height != R_RT_Handle::GetSurface(&v12)->m_image.m_base.height )
  {
    viewport = state->viewport;
    Surface = R_RT_Handle::GetSurface(&v12);
    if ( (Surface->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
      __debugbreak();
    m_clearDepth = Surface->m_depth.m_clearDepth;
    descState = state->descState;
    device = state->device;
    *(GfxViewport *)&v12.m_surfaceID = viewport;
    R_HW_ClearDepthViewport(device, descState, &m_depthRt, m_clearDepth, (GfxViewport *)&v12);
  }
  else
  {
    if ( state->rtGroup.m_colorRtCount )
      ClearColor = R_RT_ColorHandle::GetClearColor(state->rtGroup.m_colorRts);
    else
      ClearColor = &colorBlack;
    if ( R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
      ClearDepth = R_RT_DepthHandle::GetClearDepth(&state->rtGroup.m_depthRt);
    else
      LODWORD(ClearDepth) = 0;
    R_ClearScreenInternal(state, &state->rtGroup, 0x10u, ClearColor, 1u, *(float *)&ClearDepth, 0);
  }
}

/*
==============
R_ClearImage_Float
==============
*/

void __fastcall R_ClearImage_Float(ComputeCmdBufState *state, const GfxImage *image, double value, PipeFlushMode pipeFlush)
{
  __m128 v7; 
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  GfxDevice *device; 
  const GfxTexture *v11; 
  __int64 v12; 
  __m128 v13; 

  v7 = _mm_shuffle_ps(*(__m128 *)&value, *(__m128 *)&value, 0);
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3007, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  textureId = image->textureId;
  v13 = v7;
  Resident = R_Texture_GetResident(textureId);
  device = state->device;
  v11 = Resident;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v12 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v11->shaderRWView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __m128 *, _DWORD, _QWORD))device->m_pFunction[18].QueryInterface)(device, v12 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v12 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, v11->shaderRWView.rwResource, &v13, 0, 0i64);
  if ( pipeFlush != PIPE_FLUSH_NONE )
    R_ComputeWaitForCompute(state, pipeFlush);
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
  double ClearDepth; 

  if ( rtGroup->m_colorRtCount )
    ClearColor = R_RT_ColorHandle::GetClearColor(rtGroup->m_colorRts);
  else
    ClearColor = &colorBlack;
  if ( R_RT_Handle::IsValid(&rtGroup->m_depthRt) )
    ClearDepth = R_RT_DepthHandle::GetClearDepth(&rtGroup->m_depthRt);
  else
    LODWORD(ClearDepth) = 0;
  R_ClearScreenInternal(state, rtGroup, whichToClear, ClearColor, 1u, *(float *)&ClearDepth, stencil);
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
  R_ClearScreenInternal(state, rtGroup, whichToClear, mrtColor, mrtColorCount, depth, stencil);
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
  double ClearDepth; 

  if ( state->rtGroup.m_colorRtCount )
    ClearColor = R_RT_ColorHandle::GetClearColor(state->rtGroup.m_colorRts);
  else
    ClearColor = &colorBlack;
  if ( R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
    ClearDepth = R_RT_DepthHandle::GetClearDepth(&state->rtGroup.m_depthRt);
  else
    LODWORD(ClearDepth) = 0;
  R_ClearScreenInternal(state, &state->rtGroup, whichToClear, ClearColor, 1u, *(float *)&ClearDepth, stencil);
}

/*
==============
R_ClearScreenInternal
==============
*/
void R_ClearScreenInternal(GfxCmdBufState *state, const R_RT_Group *rtGroup, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  __int16 v7; 
  unsigned __int8 v13; 
  double v14; 
  GfxDevice *device; 
  int m_colorRtCount; 
  int v18; 
  __int64 v19; 
  R_RT_Handle m_depthRt; 
  R_RT_Group result; 

  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2845, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  v13 = whichToClear;
  if ( (whichToClear & 0x80) != 0 )
  {
    LODWORD(v19) = whichToClear;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2846, ASSERT_TYPE_ASSERT, "( ( (whichToClear & ~GFX_CLEAR_VALID_FLAGS) == 0 ) )", "( whichToClear ) = %i", v19) )
      __debugbreak();
  }
  if ( depth < 0.0 || depth > 1.0 )
  {
    v14 = depth;
    v7 = LOWORD(v14);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2847, ASSERT_TYPE_ASSERT, "( ( depth >= 0.0f && depth <= 1.0f ) )", "( depth ) = %g", depth) )
      __debugbreak();
  }
  device = state->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2852, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2866, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  if ( depth < 0.0 || depth > 1.0 )
  {
    v7 = LOWORD(DOUBLE_1_0);
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2867, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depth ) && ( depth ) <= ( 1.0f )", "depth not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", depth, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  R_RT_Group::As((R_RT_Group *)rtGroup, &result, 0);
  R_HW_Clear(device, state->descState, &result, whichToClear, mrtColor, mrtColorCount, depth, stencil);
  if ( (whichToClear & 0xF) != 0 )
  {
    m_colorRtCount = result.m_colorRtCount;
    v18 = 0;
    if ( result.m_colorRtCount )
    {
      do
        R_RT_Handle::ClearAuxDirty(&result.m_colorRts[v18++]);
      while ( v18 != m_colorRtCount );
    }
  }
  if ( (v13 & 0x30) != 0 )
  {
    m_depthRt = (R_RT_Handle)result.m_depthRt;
    if ( v7 )
    {
      R_RT_Handle::GetSurface(&m_depthRt);
      R_RT_Handle::ClearAuxDirty(&m_depthRt);
    }
    else if ( result.m_depthRt.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

/*
==============
R_ClearScreenLegacySlow
==============
*/
void R_ClearScreenLegacySlow(GfxCmdBufState *state, unsigned __int8 whichToClear, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned __int8 stencil)
{
  R_ClearScreenInternal(state, &state->rtGroup, whichToClear, mrtColor, mrtColorCount, depth, stencil);
}

/*
==============
R_DeriveCodeMatrix
==============
*/
void R_DeriveCodeMatrix(GfxCmdBufSourceState *source, GfxCodeMatrices *activeMatrices, unsigned int baseIndex)
{
  __m256i v4; 
  float v6; 
  unsigned int v7; 
  vec4_t v8; 
  tmat44_t<vec4_t> in1; 
  vec4_t vec; 
  vec4_t out; 

  if ( !baseIndex )
  {
    *(__m256i *)source->matrices.matrix[0].m.m[0].v = *(__m256i *)source->viewParms.viewMatrix.m.m[0].v;
    *(__m256i *)source->matrices.matrix[0].m.row2.v = *(__m256i *)source->viewParms.viewMatrix.m.row2.v;
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
      vec = (vec4_t)_xmm;
      MatrixTransformVector44Aligned(&vec, &source->matrices.matrix[1].m, &out);
      MatrixTransformVector44Aligned(&out, &g_drawConsts.outdoorLookupMatrix, &v8);
      MatrixIdentity44(&in1);
      MatrixMultiply44Aligned(&in1, &g_drawConsts.outdoorLookupMatrix, &source->matrices.matrix[6].m);
      source->matrices.matrix[6].m.m[3] = (vec4_t)_mm128_add_ps((__m128)v8, (__m128)source->matrices.matrix[6].m.m[3]);
      v7 = 166;
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
      v4 = *(__m256i *)source->matrices.matrix[10].m.m[0].v;
      *(__m256i *)in1.row2.v = *(__m256i *)source->matrices.matrix[10].m.row2.v;
      *(__m256i *)in1.m[0].v = v4;
      __asm { vextractf128 xmm0, ymm1, 1 }
      v6 = in1.m[3].v[1] - source->eyeOffset.v[1];
      in1.m[3].v[0] = *(float *)&_XMM0 - source->eyeOffset.v[0];
      in1.m[3].v[2] = in1.m[3].v[2] - source->eyeOffset.v[2];
      in1.m[3].v[1] = v6;
      MatrixMultiply44Aligned(&in1, &source->viewParms.viewMatrix.m, &source->matrices.matrix[12].m);
      v7 = 172;
    }
    R_MatrixChanged(source, v7);
    return;
  }
  if ( (source->renderFlags & 1) != 0 )
  {
    if ( source->constVersions[162] != source->matrixVersions[1] )
      R_DeriveProjectionMatrix(source);
    MatrixMultiply44Aligned(&source->viewParms.viewMatrix.m, &source->matrices.matrix[2].m, &source->matrices.matrix[4].m);
  }
  else
  {
    source->matrices.matrix[4] = source->viewParms.viewProjectionMatrix;
  }
  R_MatrixChanged(source, 0xA4u);
}

/*
==============
R_DeriveProjectionMatrix
==============
*/
void R_DeriveProjectionMatrix(GfxCmdBufSourceState *source)
{
  source->matrices.matrix[2] = source->viewParms.projectionMatrix;
  if ( (source->renderFlags & 1) != 0 )
  {
    source->matrices.matrix[2].m.m[0].v[0] = 1.0 / source->viewParms.camera.depthHackFoV.tanHalfFovX;
    source->matrices.matrix[2].m.m[1].v[1] = 1.0 / source->viewParms.camera.depthHackFoV.tanHalfFovY;
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
  const char *m_location; 
  const char *v3; 
  int v4; 
  const char *v5; 
  R_RT_Handle v6; 
  R_RT_Handle v7; 

  v1 = colorRT->m_surfaceID & 0x7FFF;
  if ( !v1 )
    v1 = 0;
  v7.m_surfaceID = v1;
  m_location = colorRT->m_tracking.m_location;
  *(_OWORD *)&v7.m_tracking.m_allocCounter = *(_OWORD *)&colorRT->m_tracking.m_allocCounter;
  v7.m_tracking.m_location = m_location;
  v6 = v7;
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&v6);
    if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_10;
    v3 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v4 = 217;
    v5 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
  }
  else
  {
    if ( !v7.m_tracking.m_allocCounter )
      goto LABEL_10;
    v3 = "!this->m_tracking.m_allocCounter";
    v4 = 100;
    v5 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
    __debugbreak();
LABEL_10:
  v7 = v6;
  R_RT_Handle::SetAuxDirty(&v7);
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    result[1] = _XMM0;
    LOWORD(result[0].source) = 0;
    LODWORD(result[0].state) = 0;
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
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rcx, xmm0, 1; out }
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
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
      __asm { vpextrq rdx, xmm0, 1; in }
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
  GfxCmdBufState *state; 
  unsigned int height; 
  float depthRangeFar; 
  float depthRangeNear; 
  GfxDevice *device; 
  __int64 v8; 
  GfxViewport outViewport; 

  source = context->source;
  R_Set3D(context->source);
  if ( (*((_BYTE *)source + 11668) & 2) != 0 )
  {
    R_GetViewport(source, &outViewport);
    state = context->state;
    height = outViewport.height;
    if ( state->viewport.x != outViewport.x || state->viewport.y != outViewport.y || state->viewport.width != outViewport.width || state->viewport.height != outViewport.height || state->scissor.x != outViewport.x || state->scissor.y != outViewport.y || state->scissor.width != outViewport.width || state->scissor.height != outViewport.height )
    {
      if ( !outViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
        __debugbreak();
      if ( !height )
      {
        LODWORD(v8) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v8) )
          __debugbreak();
      }
      depthRangeFar = state->depthRangeFar;
      depthRangeNear = state->depthRangeNear;
      device = state->device;
      state->viewport = outViewport;
      R_HW_SetViewport(device, &outViewport, depthRangeNear, depthRangeFar);
      R_HW_SetScissor(state, &outViewport);
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
  float v3; 
  float v4; 

  v3 = (float)w;
  source->input.consts[4].v[0] = v3;
  source->input.consts[4].v[2] = 1.0 / v3;
  v4 = (float)h;
  source->input.consts[4].v[1] = v4;
  source->input.consts[4].v[3] = 1.0 / v4;
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
  float depthRangeFar; 
  float depthRangeNear; 
  GfxDevice *device; 
  __int64 v9; 
  int v10; 

  if ( !viewport->width )
  {
    v10 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v10) )
      __debugbreak();
  }
  if ( !viewport->height )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v9) )
      __debugbreak();
  }
  depthRangeFar = state->depthRangeFar;
  depthRangeNear = state->depthRangeNear;
  device = state->device;
  state->viewport = *viewport;
  R_HW_SetViewport(device, viewport, depthRangeNear, depthRangeFar);
  R_HW_SetScissor(state, scissor);
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
  if ( depthRangeType == GFX_DEPTH_RANGE_FULL )
    return FLOAT_1_0;
  if ( depthRangeType )
  {
    if ( depthRangeType != GFX_DEPTH_RANGE_VIEWMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 978, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GfxDepthRangeType for near clip depth: %d", depthRangeType) )
      __debugbreak();
    return FLOAT_1_0;
  }
  return FLOAT_0_984375;
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
  __int16 v1; 
  int v2; 
  int m_colorRtCount; 
  unsigned int v5; 
  __int64 v6; 
  unsigned __int16 m_surfaceID; 
  R_RT_ColorHandle *v8; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  R_RT_Handle m_depthRt; 

  v2 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  v5 = 0;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v6 = v5;
      m_surfaceID = rtGroup->m_colorRts[v6].m_surfaceID;
      v8 = &rtGroup->m_colorRts[v6];
      if ( m_surfaceID )
      {
        R_RT_Handle::GetSurface(&rtGroup->m_colorRts[v6]);
      }
      else if ( rtGroup->m_colorRts[v6].m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
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
  m_depthRt = (R_RT_Handle)rtGroup->m_depthRt;
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&m_depthRt);
    if ( R_RT_Handle::GetAuxDirty(&m_depthRt) )
      v2 |= (R_RT_Handle::GetSurface(&m_depthRt)->m_rtFlags & 0x80 | 0x40u) >> 2;
  }
  else if ( m_depthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&m_depthRt.m_surfaceID) )
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
GfxMatrix *R_GetShaderCodeMatrix(GfxCmdBufSourceState *source, unsigned int sourceIndex)
{
  __int64 v2; 
  unsigned __int64 v4; 
  const char *CodeConstantName; 
  unsigned __int16 v6; 
  unsigned int forceTransposeMatrixChange; 
  int v8; 
  const tmat44_t<vec4_t> *p_m; 
  tmat44_t<vec4_t> *v10; 
  const tmat44_t<vec4_t> *v11; 
  GfxMatrix *v12; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  tmat44_t<vec4_t> *v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  tmat44_t<vec4_t> *v20; 
  __int64 v21; 
  __int64 v22; 
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
    v11 = &source->matrices.matrix[v4].m;
    MatrixTranspose44Aligned(v11, &out);
    v12 = &source->matrices.matrixTranspose[v4];
    if ( (out.m[0].v[0] != v12->m.m[0].v[0] || out.m[0].v[1] != v12->m.m[0].v[1] || out.m[0].v[2] != v12->m.m[0].v[2] || out.m[0].v[3] != v12->m.m[0].v[3]) && (out.m[1].v[0] != v11[14].m[1].v[0] || out.m[1].v[1] != v11[14].m[1].v[1] || out.m[1].v[2] != v11[14].m[1].v[2] || out.m[1].v[3] != v11[14].m[1].v[3]) && (out.m[2].v[0] != v11[14].m[2].v[0] || out.m[2].v[1] != v11[14].m[2].v[1] || out.m[2].v[2] != v11[14].m[2].v[2] || out.m[2].v[3] != v11[14].m[2].v[3]) && (out.m[3].v[0] != v11[14].m[3].v[0] || out.m[3].v[1] != v11[14].m[3].v[1] || out.m[3].v[2] != v11[14].m[3].v[2] || out.m[3].v[3] != v11[14].m[3].v[3]) )
    {
      LODWORD(v22) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 891, ASSERT_TYPE_ASSERT, "(Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[0], tmpMatrix.m[0] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[1], tmpMatrix.m[1] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[2], tmpMatrix.m[2] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[3], tmpMatrix.m[3] ))", "%s\n\tSetting invalid shader transpose matrix %i. Did you directly access any CONST_SRC_FIRST_CODE_MATRIX? Please use R_GetMatrix() interface", "Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[0], tmpMatrix.m[0] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[1], tmpMatrix.m[1] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[2], tmpMatrix.m[2] ) || Vec4Compare( activeMatrices->matrixTranspose[matrixIndex].m[3], tmpMatrix.m[3] )", v22) )
        __debugbreak();
    }
    return v12;
  }
  else
  {
    v14 = v4 & 0xFFFFFFFE;
    if ( source->constVersions[(v4 & 0xFFFFFFFE) + 160] == v6 )
    {
      v15 = (unsigned int)v4;
    }
    else
    {
      R_DeriveCodeMatrix(source, &source->matrices, v14);
      v15 = (unsigned int)v4;
      if ( (((_DWORD)v2 - 168) & 0xFFFFFFFD) != 0 )
      {
        v16 = (unsigned __int64)(unsigned int)v4 << 6;
        v17 = (tmat44_t<vec4_t> *)((char *)&source->matrices.matrixTranspose[0].m + v16);
        MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)((char *)source + v16), v17);
      }
      else
      {
        v18 = (unsigned __int64)(unsigned int)v4 << 6;
        v17 = (tmat44_t<vec4_t> *)((char *)&source->matrices.matrixTranspose[0].m + v18);
        R_SetPreciseWorldMatrixForShader((const tmat44_t<vec4_t> *)((char *)source + v18), v17);
      }
      if ( (_DWORD)v4 == v14 )
        return (GfxMatrix *)v17;
      if ( source->constVersions[v2] == v6 )
      {
        LODWORD(v21) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 913, ASSERT_TYPE_ASSERT, "( ( source->constVersions[sourceIndex] != matrixVersion ) )", "( sourceIndex ) = %i", v21) )
          __debugbreak();
      }
    }
    v19 = v4 ^ 1;
    source->constVersions[v2] = v6;
    if ( source->constVersions[v19 + 160] == v6 )
    {
      v20 = &source->matrices.matrix[v15].m;
      MatrixInverse44Aligned(&source->matrices.matrix[(unsigned __int64)v19].m, v20);
      MatrixTranspose44Aligned(v20, v20 + 14);
      return (GfxMatrix *)&v20[14];
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
  __int64 v4; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2401, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source->viewportBehavior == GFX_USE_VIEWPORT_FULL )
  {
    if ( !source->renderTargetWidth )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2405, ASSERT_TYPE_ASSERT, "( ( source->renderTargetWidth > 0 ) )", "( source->renderTargetWidth ) = %i", v4) )
        __debugbreak();
    }
    if ( !source->renderTargetHeight )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2406, ASSERT_TYPE_ASSERT, "( ( source->renderTargetHeight > 0 ) )", "( source->renderTargetHeight ) = %i", v4) )
        __debugbreak();
    }
    *(_QWORD *)&outViewport->x = 0i64;
    outViewport->width = source->renderTargetWidth;
    outViewport->height = source->renderTargetHeight;
  }
  else
  {
    if ( !source->sceneViewport.width )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2415, ASSERT_TYPE_ASSERT, "( ( source->sceneViewport.width > 0 ) )", "( source->sceneViewport.width ) = %i", v4) )
        __debugbreak();
    }
    if ( !source->sceneViewport.height )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2416, ASSERT_TYPE_ASSERT, "( ( source->sceneViewport.height > 0 ) )", "( source->sceneViewport.height ) = %i", v4) )
        __debugbreak();
    }
    *outViewport = source->sceneViewport;
    if ( !outViewport->width )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2419, ASSERT_TYPE_ASSERT, "( ( outViewport->width > 0 ) )", "( outViewport->width ) = %i", v4) )
        __debugbreak();
    }
    if ( !outViewport->height )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2420, ASSERT_TYPE_ASSERT, "( ( outViewport->height > 0 ) )", "( outViewport->height ) = %i", v4) )
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
  GfxCmdBufSourceState *v2; 
  GfxCmdBufState *v5; 
  unsigned int height; 
  float depthRangeFar; 
  float depthRangeNear; 
  GfxDevice *device; 
  __int64 v10; 
  GfxViewport outViewport; 
  GfxCmdBufState *state[2]; 

  *(GfxCmdBufContext *)state = *context;
  v2 = (GfxCmdBufSourceState *)state[0];
  R_Set3D((GfxCmdBufSourceState *)state[0]);
  if ( (LOBYTE(state[0][1].deviceState.blendFactor[1]) & 2) != 0 )
  {
    R_GetViewport((const GfxCmdBufSourceState *)state[0], &outViewport);
    v5 = state[1];
    height = outViewport.height;
    if ( state[1]->viewport.x != outViewport.x || state[1]->viewport.y != outViewport.y || state[1]->viewport.width != outViewport.width || state[1]->viewport.height != outViewport.height || state[1]->scissor.x != outViewport.x || state[1]->scissor.y != outViewport.y || state[1]->scissor.width != outViewport.width || state[1]->scissor.height != outViewport.height )
    {
      if ( !outViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
        __debugbreak();
      if ( !height )
      {
        LODWORD(v10) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v10) )
          __debugbreak();
      }
      depthRangeFar = v5->depthRangeFar;
      depthRangeNear = v5->depthRangeNear;
      device = v5->device;
      v5->viewport = outViewport;
      R_HW_SetViewport(device, &outViewport, depthRangeNear, depthRangeFar);
      R_HW_SetScissor(v5, &outViewport);
    }
    R_UpdateViewport(v2, &outViewport);
  }
  R_HW_SetScissor(context->state, scissorViewport);
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
  __int16 v4; 
  GfxCmdBufState *v8; 
  char *v9; 
  char v10; 
  int v11; 
  const char *name; 
  char i; 
  char v14; 
  char *v15; 
  const char *v16; 
  char j; 
  R_RT_Handle v19; 
  char str[1024]; 
  __int64 v21; 

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
        v19 = colorRts[v11].R_RT_Handle;
        if ( v4 )
        {
          R_RT_Handle::GetSurface(&v19);
        }
        else
        {
          if ( v19.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2379, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
            __debugbreak();
        }
        *(_WORD *)v9 = 25376;
        v9[2] = v11 + 48;
        v9[3] = 58;
        v9 += 4;
        name = R_RT_Handle::GetSurface(&v19)->m_image.m_base.name;
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
      v14 = 32;
      v15 = (char *)(" d:" - v9);
      do
      {
        *v9++ = v14;
        v14 = v9[(_QWORD)v15];
      }
      while ( v14 );
      v16 = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.name;
      for ( j = *v16; *v16; ++v9 )
      {
        *v9 = j;
        j = *++v16;
      }
    }
    if ( v9 >= (char *)&v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2391, ASSERT_TYPE_ASSERT, "(markerNameEnd < markerName + ( sizeof( *array_counter( markerName ) ) + 0 ))", (const char *)&queryFormat, "markerNameEnd < markerName + ARRAY_COUNT( markerName )") )
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
  R_RT_Handle v3; 

  if ( R_RT_Handle::IsValid(rt) )
  {
    v3 = rt->R_RT_Handle;
    R_RT_DestroyInternal(&v3);
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
  R_RT_Handle v6; 

  if ( R_RT_Handle::IsValid(rt) )
  {
    state = context->state;
    v5 = 0;
    if ( state->rtGroup.m_colorRtCount )
    {
      while ( (*(_DWORD *)&state->rtGroup.m_colorRts[v5].m_surfaceID & 0x7FFF) != (*(_DWORD *)&rt->m_surfaceID & 0x7FFF) )
      {
        if ( ++v5 == state->rtGroup.m_colorRtCount )
          goto LABEL_7;
      }
      *(GfxCmdBufContext *)&v6.m_surfaceID = *context;
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v6, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(2651)");
    }
LABEL_7:
    v6 = rt->R_RT_Handle;
    R_RT_DestroyInternal(&v6);
  }
}

/*
==============
R_RT_Destroy
==============
*/
void R_RT_Destroy(GfxCmdBufContext *context, R_RT_DepthHandle *rt)
{
  R_RT_Handle v4; 

  if ( R_RT_Handle::IsValid(rt) )
  {
    if ( (((unsigned __int16)*(_DWORD *)&rt->m_surfaceID ^ (unsigned __int16)*(_DWORD *)&context->state->rtGroup.m_depthRt.m_surfaceID) & 0xFFFF7FFF) == 0 )
    {
      *(GfxCmdBufContext *)&v4.m_surfaceID = *context;
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v4, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(2670)");
    }
    v4 = rt->R_RT_Handle;
    R_RT_DestroyInternal(&v4);
  }
}

/*
==============
R_ResetRenderTargets
==============
*/
void R_ResetRenderTargets(GfxCmdBufState *state)
{
  R_RT_DepthHandle v4; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->rtGroup.m_colorRtCount || R_RT_Handle::IsValid(&state->rtGroup.m_depthRt) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v4.m_tracking.m_name = _XMM0;
    v4.m_surfaceID = 0;
    v4.m_tracking.m_allocCounter = 0;
    R_HW_SetRenderTargets(state, 0, NULL, &v4);
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
  GfxCmdBufContext *v3; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v6; 
  unsigned int v7; 
  GfxCmdBufState *state; 
  const R_RT_Surface *v10; 
  unsigned int m_subresourceToTransition; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v13; 
  GfxCmdBufState *v14; 
  const GfxTexture *Resident; 
  R_RT_Handle v16; 
  unsigned __int16 m_surfaceID; 
  bool v19; 
  R_RT_DepthHandle v20; 
  GfxCmdBufState *v22; 
  R_RT_Handle v23; 
  GfxCmdBufState *v26; 
  const vec4_t *ClearColor; 
  const R_RT_Surface *v28; 
  R_RT_Handle v29; 
  bool v31; 
  GfxCmdBufState *v32; 
  const R_RT_Surface *v33; 
  unsigned int v34; 
  R_RT_FlagsInternal v35; 
  const R_RT_Surface *v36; 
  GfxCmdBufState *v37; 
  const GfxTexture *v38; 
  bool v40; 
  unsigned __int8 v41; 
  R_RT_Handle v43; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  __m256i v47; 
  R_RT_Handle v48; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  R_RT_Group v52; 

  v3 = context;
  if ( R_RT_Handle::GetAuxDirty(rt) )
  {
    Surface = R_RT_Handle::GetSurface(rt);
    v6 = *rt;
    v7 = (unsigned int)Surface->m_rtFlagsInternal >> 4;
    v46 = *rt;
    if ( (v7 & 1) != 0 )
    {
      v44 = v6;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v46);
        if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v6 = v46;
        }
        else
        {
          v6 = v46;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v6 = v44;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      state = v3->state;
      v51 = v6;
      v10 = R_RT_Handle::GetSurface(&v51);
      v50 = v51;
      m_subresourceToTransition = v10->m_subresourceToTransition;
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v50)->m_rtFlagsInternal;
      v13 = R_RT_Handle::GetSurface(&v50);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        v14 = state;
        Resident = (const GfxTexture *)&v13->1080;
      }
      else
      {
        Resident = R_Texture_GetResident(v13->m_image.m_base.textureId);
        v14 = state;
        if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
        {
          __debugbreak();
          v14 = context->state;
        }
      }
      R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, Resident->basemap, m_subresourceToTransition, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(v14);
      v16 = *rt;
      m_surfaceID = _XMM0;
      v41 = 48;
      v47 = (__m256i)v16;
      v43 = v16;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v43);
        if ( (R_RT_Handle::GetSurface(&v43)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v16 = v43;
          LODWORD(_RBX) = v43.m_tracking.m_allocCounter;
          m_surfaceID = v43.m_surfaceID;
          v47 = (__m256i)v43;
        }
        else
        {
          v16 = v43;
          LODWORD(_RBX) = v43.m_tracking.m_allocCounter;
          m_surfaceID = v43.m_surfaceID;
          v47 = (__m256i)v43;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v16 = (R_RT_Handle)v47;
          if ( v19 )
            __debugbreak();
        }
      }
      v45 = v16;
      if ( m_surfaceID )
      {
        R_RT_Handle::GetSurface(&v45);
        v20 = (R_RT_DepthHandle)v45;
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        v20 = (R_RT_DepthHandle)v47;
      }
      v3 = context;
      v52.m_colorRtCount = 0;
      v52.m_depthRt = v20;
    }
    else
    {
      v45 = v6;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v46);
        if ( (R_RT_Handle::GetSurface(&v46)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v6 = v46;
          __debugbreak();
        }
        else
        {
          v6 = v46;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v6 = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      v22 = v3->state;
      v50 = v6;
      R_AddRenderTargetTransition(v22, (R_RT_ColorHandle *)&v50, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(v3->state);
      v23 = *rt;
      v41 = 15;
      v45 = v23;
      v43 = v23;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v43);
        if ( (R_RT_Handle::GetSurface(&v43)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v23 = v43;
          __debugbreak();
        }
        else
        {
          v23 = v43;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v23 = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      v45 = v23;
      R_RT_Group::AssignColor(&v52, (R_RT_ColorHandle *)&v45);
    }
    _XMM0 = *v3;
    *(GfxCmdBufContext *)v47.m256i_i8 = *v3;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v47, &v52, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp(3173)");
    v26 = v3->state;
    if ( v26->rtGroup.m_colorRtCount )
      ClearColor = R_RT_ColorHandle::GetClearColor(v26->rtGroup.m_colorRts);
    else
      ClearColor = &colorBlack;
    if ( R_RT_Handle::IsValid(&v26->rtGroup.m_depthRt) )
      *(double *)&_XMM0.source = R_RT_DepthHandle::GetClearDepth(&v26->rtGroup.m_depthRt);
    else
      _XMM0 = 0i64;
    R_ClearScreenInternal(v26, &v26->rtGroup, v41, ClearColor, 1u, *(float *)&_XMM0.source, 0);
    v28 = R_RT_Handle::GetSurface(rt);
    v29 = *rt;
    v44 = *rt;
    if ( (v28->m_rtFlagsInternal & 0x10) != 0 )
    {
      v49 = v29;
      if ( LOWORD(_XMM0.source) )
      {
        R_RT_Handle::GetSurface(&v44);
        if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v29 = v44;
        }
        else
        {
          v29 = v44;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v29 = v49;
          if ( v31 )
            __debugbreak();
        }
      }
      v49 = v29;
      v32 = context->state;
      v33 = R_RT_Handle::GetSurface(&v49);
      v48 = v49;
      v34 = v33->m_subresourceToTransition;
      v35 = R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal;
      v36 = R_RT_Handle::GetSurface(&v48);
      if ( (v35 & 8) != 0 )
      {
        v37 = v32;
        v38 = (const GfxTexture *)&v36->1080;
      }
      else
      {
        v38 = R_Texture_GetResident(v36->m_image.m_base.textureId);
        v37 = v32;
        if ( !v38->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
          __debugbreak();
      }
      R_DX12_AddResourceTransition(v32->resourceTransitions, &v32->resourceTransitionCount, v38->basemap, v34, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH_STENCIL|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    else
    {
      v48 = v29;
      if ( LOWORD(_XMM0.source) )
      {
        R_RT_Handle::GetSurface(&v44);
        if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v29 = v44;
          __debugbreak();
        }
        else
        {
          v29 = v44;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v29 = v48;
          if ( v40 )
            __debugbreak();
        }
      }
      v48 = v29;
      v37 = context->state;
      R_AddRenderTargetTransition(v37, (R_RT_ColorHandle *)&v48, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_FlushResourceTransitions(v37);
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
  ID3D12PipelineState *pipelineState; 
  unsigned int *m_pCurrent; 
  __int64 v7; 
  unsigned int *v8; 
  unsigned int *v9; 
  __int64 primType; 
  unsigned int y; 
  GfxDevice *v12; 
  unsigned int height; 
  ID3D12Resource *indexBuffer; 
  DXGI_FORMAT indexType; 
  unsigned int *v16; 
  unsigned int numRenderTargets; 
  GfxDescriptorState *descState; 
  GfxDevice *v19; 
  __int64 v20; 
  unsigned int v21; 
  DXGI_FORMAT v22; 
  int v23[4]; 
  char v24[16]; 
  unsigned __int64 val; 

  device = state->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 3299, ASSERT_TYPE_ASSERT, "(device != nullptr)", (const char *)&queryFormat, "device != nullptr") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  pipelineState = state->deviceState.pipelineState;
  if ( pipelineState )
  {
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      device->m_pFunction[8].AddRef(device);
    }
    else
    {
      *(_OWORD *)m_pCurrent = *(_OWORD *)pipelineState->m_Packet.Descriptor.Data;
      *((_QWORD *)m_pCurrent + 2) = pipelineState->m_Packet.Oword[1].m128i_i64[0];
      device->m_Putter.m_pCurrent = m_pCurrent + 6;
    }
  }
  v7 = (unsigned __int8)((unsigned __int16)WORD2(stateBits->otherBits) >> 8);
  v8 = device->m_Putter.m_pCurrent;
  if ( v8 >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, __int64))device->m_pFunction[8].QueryInterface)(device, v7);
  }
  else
  {
    *v8 = -1073694720;
    v8[1] = v7;
    device->m_Putter.m_pCurrent = v8 + 2;
  }
  ((void (__fastcall *)(GfxDevice *, GfxDeviceState *))device->m_pFunction[7].Release)(device, &state->deviceState);
  v9 = device->m_Putter.m_pCurrent;
  if ( v9 >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD))device->m_pFunction[6].Release)(device, (int)state->primType);
  }
  else
  {
    primType = (int)state->primType;
    *v9 = -1073695232;
    v9[1] = D3D12XBOX_SET_PRIMITIVE_TOPOLOGY_LOOKUP[primType];
    device->m_Putter.m_pCurrent = v9 + 2;
  }
  R_RebindDescriptorState(state);
  if ( state->viewport.width )
  {
    R_HW_SetViewport(state->device, &state->viewport, state->depthRangeNear, state->depthRangeFar);
    y = state->viewport.y;
    v12 = state->device;
    v23[0] = state->viewport.x;
    v23[2] = state->viewport.width + v23[0];
    height = state->viewport.height;
    v23[1] = y;
    v23[3] = y + height;
    if ( !R_IsLockedIfGfxImmediateContext(v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, __int64, int *))v12->m_pFunction[7].AddRef)(v12, 1i64, v23);
  }
  R_FlushStreamSources(state, 0);
  indexBuffer = state->indexBuffer;
  indexType = state->indexType;
  v22 = indexType;
  if ( indexBuffer )
  {
    ((void (__fastcall *)(ID3D12Resource *, char *))indexBuffer->m_pFunction[3].AddRef)(indexBuffer, v24);
    v20 = ((__int64 (__fastcall *)(ID3D12Resource *))state->indexBuffer->m_pFunction[3].Release)(state->indexBuffer);
    v21 = truncate_cast<unsigned int,unsigned __int64>(val);
    indexType = v22;
  }
  else
  {
    v20 = 0i64;
    v21 = 0;
  }
  v16 = device->m_Putter.m_pCurrent;
  if ( v16 >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v20);
  }
  else
  {
    *v16 = indexType + 1073854208;
    *(_QWORD *)(v16 + 1) = v20;
    device->m_Putter.m_pCurrent = v16 + 3;
  }
  numRenderTargets = state->deviceState.numRenderTargets;
  descState = state->descState;
  v19 = state->device;
  state->isIndexBufferBound = state->indexBuffer != NULL;
  R_ResetRenderTargetsState(v19, descState, numRenderTargets, state->deviceState.colorRtViews, state->deviceState.depthRtView);
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
  __int64 v4; 
  GfxViewport v5; 

  renderTargetHeight = source->renderTargetHeight;
  *(_QWORD *)&v5.x = 0i64;
  v5.width = source->renderTargetWidth;
  v5.height = renderTargetHeight;
  if ( !v5.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !renderTargetHeight )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v4) )
      __debugbreak();
  }
  viewportBehavior = source->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v4) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v4) )
      __debugbreak();
  }
  *((_BYTE *)source + 11668) |= 2u;
  source->sceneViewport = v5;
  source->viewMode = VIEW_MODE_NONE;
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
  R_RT_Handle v8; 
  const R_RT_Surface *Surface; 
  __int64 v11; 
  __int64 v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 

  v4 = codeBuffer;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4225, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x34 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v11, 52) )
      __debugbreak();
  }
  if ( handle->m_surfaceID )
  {
    v8 = *handle;
    v14 = v8;
    v13 = v8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v13);
      if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        v8 = v13;
      }
      else
      {
        v8 = v13;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v8 = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    v14 = v8;
    Surface = R_RT_Handle::GetSurface(&v14);
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
      LODWORD(v12) = 52;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1495, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_COUNT\n\t%i not in [0, %i)", v11, v12) )
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
  R_RT_Handle v8; 
  const R_RT_Surface *Surface; 
  __int64 v11; 
  __int64 v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 

  v4 = codePersistentBuffer;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4242, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x29 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4243, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v11, 41) )
      __debugbreak();
  }
  if ( handle->m_surfaceID )
  {
    v8 = *handle;
    v14 = v8;
    v13 = v8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v13);
      if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        v8 = v13;
      }
      else
      {
        v8 = v13;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v8 = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    v14 = v8;
    Surface = R_RT_Handle::GetSurface(&v14);
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
      LODWORD(v12) = 41;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1504, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( BUFFER_SRC_CODE_PERSISTENT_COUNT )", "codePersistentBuffer doesn't index BUFFER_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", v11, v12) )
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
  R_RT_Handle v8; 
  const R_RT_Surface *Surface; 
  __int64 v11; 
  __int64 v12; 
  R_RT_Handle v13; 
  R_RT_Handle v14; 

  v4 = codeBuffer;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4259, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4260, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_RW_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_RW_COUNT\n\t%i not in [0, %i)", v11, 1) )
      __debugbreak();
  }
  if ( handle->m_surfaceID )
  {
    v8 = *handle;
    v14 = v8;
    v13 = v8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v13);
      if ( (R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal & 8) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 348, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsBuffer())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsBuffer()") )
      {
        v8 = v13;
      }
      else
      {
        v8 = v13;
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v8 = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    v14 = v8;
    Surface = R_RT_Handle::GetSurface(&v14);
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
      LODWORD(v12) = 1;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1513, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_RW_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_RW_COUNT\n\t%i not in [0, %i)", v11, v12) )
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
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float scale; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4173, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
    __debugbreak();
  if ( (const GfxScaledPlacement *)source->objectPlacementPrevFrame != placement )
  {
    source->objectPlacementPrevFrame = &placement->base;
    UnitQuatToAxis(&placement->base.quat, &axis);
    v4 = (float)((float)(axis.m[0].v[0] * axis.m[0].v[0]) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4181, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", axis.m[0].v[0], axis.m[0].v[1], axis.m[0].v[2], fsqrt(v4)) )
      __debugbreak();
    v5 = (float)((float)(axis.m[1].v[0] * axis.m[1].v[0]) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4182, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", axis.m[1].v[0], axis.m[1].v[1], axis.m[1].v[2], fsqrt(v5)) )
      __debugbreak();
    v6 = (float)((float)(axis.m[2].v[0] * axis.m[2].v[0]) + (float)(axis.m[2].v[1] * axis.m[2].v[1])) + (float)(axis.m[2].v[2] * axis.m[2].v[2]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 4183, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", axis.m[2].v[0], axis.m[2].v[1], axis.m[2].v[2], fsqrt(v6)) )
      __debugbreak();
    if ( ++source->matrixVersions[4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 573, ASSERT_TYPE_ASSERT, "(source->matrixVersions[(((matrixIndex) - CONST_SRC_FIRST_CODE_MATRIX) >> 1)] < 0xffff)", (const char *)&queryFormat, "source->matrixVersions[MATRIX_VERSION_INDEX( matrixIndex )] < 0xffff") )
      __debugbreak();
    R_MatrixChanged(source, 0xA8u);
    v7 = placement->base.origin.v[1];
    scale = placement->scale;
    origin.v[0] = placement->base.origin.v[0];
    origin.v[2] = placement->base.origin.v[2];
    origin.v[1] = v7;
    MatrixSet44(&source->matrices.matrix[8].m, &origin, &axis, scale);
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
  unsigned __int8 v3; 
  unsigned __int8 pipelineStateInputLayoutCount; 
  const MaterialTechnique *v5; 
  MaterialPipelineState *v6; 
  ID3D12PipelineState *derivedPso; 
  const char *v8; 
  const char **p_name; 
  const char *v10; 
  const char **v11; 
  const char *v12; 
  const char **v13; 
  const char *v14; 
  const char **v15; 
  const char *v16; 
  MaterialStageConfig stageConfig; 
  GfxDevice *device; 
  unsigned int *m_pCurrent; 
  __int64 v21; 

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
    v3 = technique->pipelineStateMap[(unsigned __int16)state->vertDeclType];
    pipelineStateInputLayoutCount = technique->pipelineStateInputLayoutCount;
    if ( v3 >= pipelineStateInputLayoutCount )
    {
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2035, ASSERT_TYPE_ASSERT, "(unsigned)( pipelineStateIndex ) < (unsigned)( MaterialTechnique_GetPipelineStateCount( state->technique ) )", "pipelineStateIndex doesn't index MaterialTechnique_GetPipelineStateCount( state->technique )\n\t%i not in [0, %i)", v21, pipelineStateInputLayoutCount) )
        __debugbreak();
    }
    v5 = state->technique;
    v6 = &v5->pipelineStates[v3];
    state->pipelineStateDirty = 0;
    derivedPso = v6->derivedPso;
    if ( derivedPso != state->deviceState.pipelineState )
    {
      if ( r_profMaterial->current.integer > 1 )
      {
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2064, ASSERT_TYPE_ASSERT, "(state->technique)", (const char *)&queryFormat, "state->technique") )
          __debugbreak();
        v8 = j_va("PSO: v%db", (unsigned __int16)state->vertDeclType);
        R_ProfSetMarker(state, v8);
        if ( !v6->metaData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2067, ASSERT_TYPE_ASSERT, "(pipelineState->metaData)", (const char *)&queryFormat, "pipelineState->metaData") )
          __debugbreak();
        p_name = &v6->serializedShaders[3]->name;
        if ( p_name )
        {
          v10 = j_va("LS: %s (%s)", *p_name, p_name[1]);
          R_ProfSetMarker(state, v10);
        }
        v11 = &v6->serializedShaders[2]->name;
        if ( v11 )
        {
          v12 = j_va("HS: %s (%s)", *v11, v11[1]);
          R_ProfSetMarker(state, v12);
        }
        v13 = &v6->serializedShaders[1]->name;
        if ( v13 )
        {
          v14 = j_va("VS: %s (%s)", *v13, v13[1]);
          R_ProfSetMarker(state, v14);
        }
        v15 = &v6->serializedShaders[0]->name;
        if ( v15 )
        {
          v16 = j_va("PS: %s (%s)", *v15, v15[1]);
          R_ProfSetMarker(state, v16);
        }
      }
      if ( !derivedPso && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2089, ASSERT_TYPE_ASSERT, "(pipelineStateObj)", (const char *)&queryFormat, "pipelineStateObj") )
        __debugbreak();
      if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2090, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
        __debugbreak();
      if ( r_tessellationForceFlushesOnShaderStageChanges->current.value != 0.0 )
      {
        stageConfig = state->technique->stageConfig;
        if ( state->stageConfig != stageConfig )
        {
          state->stageConfig = stageConfig;
          ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, _QWORD))state->device->m_pFunction[22].AddRef)(state->device, 0x1000000i64, 0i64, 0i64);
        }
      }
      device = state->device;
      m_pCurrent = device->m_Putter.m_pCurrent;
      if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
      {
        ((void (__fastcall *)(GfxDevice *, ID3D12PipelineState *))device->m_pFunction[8].AddRef)(device, derivedPso);
      }
      else
      {
        *(_OWORD *)m_pCurrent = *(_OWORD *)derivedPso->m_Packet.Descriptor.Data;
        *((_QWORD *)m_pCurrent + 2) = derivedPso->m_Packet.Oword[1].m128i_i64[0];
        device->m_Putter.m_pCurrent = m_pCurrent + 6;
      }
      state->deviceState.pipelineState = derivedPso;
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
void R_SetRenderSourceSize(GfxCmdBufSourceState *source, R_RT_Handle *srcRt)
{
  float width; 
  int height; 

  width = (float)R_RT_Handle::GetSurface(srcRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height;
  source->input.consts[5].v[0] = width;
  source->input.consts[5].v[3] = 1.0 / (float)height;
  source->input.consts[5].v[1] = (float)height;
  source->input.consts[5].v[2] = 1.0 / width;
  ++source->constVersions[5];
}

/*
==============
R_SetRenderTargetsInternal
==============
*/
void R_SetRenderTargetsInternal(GfxCmdBufContext *context, const R_RT_Group *newRtGroup, const char *location)
{
  unsigned __int16 v4; 
  unsigned int m_colorRtCount; 
  R_RT_Group *p_rtGroup; 
  int v9; 
  R_RT_Handle m_depthRt; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int m_allocCounter; 
  int width; 
  int height; 
  int v18; 
  int v19; 
  int v20; 
  const char *name; 
  const R_RT_Surface *Surface; 
  int v23; 
  int v24; 
  const char *v25; 
  const R_RT_Surface *v26; 
  R_RT_Surface *v27; 
  unsigned __int16 m_headViewSurfaceID; 
  unsigned __int16 v29; 
  int v30; 
  int v31; 
  const char *v32; 
  const R_RT_Surface *v33; 
  bool v34; 
  int v35; 
  int v36; 
  const char *v37; 
  const R_RT_Surface *v38; 
  int v39; 
  int v40; 
  int v41; 
  const char *v42; 
  const R_RT_Surface *v43; 
  GfxCmdBufSourceState *source; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  const char *v48; 
  __int64 v49; 
  const char *v50; 
  const char *v51; 
  __int64 v52; 
  __int64 v53; 
  GfxCmdBufState *state; 
  R_RT_Handle v55; 
  R_RT_Handle v56; 
  int v58; 
  int v60; 

  if ( !newRtGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2747, ASSERT_TYPE_ASSERT, "(&newRtGroup)", (const char *)&queryFormat, "&newRtGroup") )
    __debugbreak();
  m_colorRtCount = newRtGroup->m_colorRtCount;
  state = context->state;
  p_rtGroup = &state->rtGroup;
  if ( m_colorRtCount == state->rtGroup.m_colorRtCount )
  {
    v9 = 0;
    if ( newRtGroup->m_colorRtCount )
    {
      while ( ((v4 ^ (unsigned __int16)*(_DWORD *)&newRtGroup->m_colorRts[v9].m_surfaceID) & 0xFFFF7FFF) == 0 )
      {
        if ( ++v9 == m_colorRtCount )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (((unsigned __int16)*(_DWORD *)&state->rtGroup.m_depthRt.m_surfaceID ^ (unsigned __int16)*(_DWORD *)&newRtGroup->m_depthRt.m_surfaceID) & 0xFFFF7FFF) == 0 )
        return;
    }
  }
  if ( (_BYTE)m_colorRtCount )
  {
    m_depthRt = (R_RT_Handle)newRtGroup->m_colorRts[0];
    v55 = m_depthRt;
    v56 = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v56);
      if ( (R_RT_Handle::GetSurface(&v56)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v11 = "!colorRt.IsValid() || colorRt.IsColor()";
        v12 = 396;
        v13 = "(!colorRt.IsValid() || colorRt.IsColor())";
        goto LABEL_19;
      }
      goto LABEL_21;
    }
  }
  else
  {
    m_depthRt = (R_RT_Handle)newRtGroup->m_depthRt;
    v55 = m_depthRt;
    v56 = m_depthRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v56);
      if ( (R_RT_Handle::GetSurface(&v56)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v11 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v12 = 403;
        v13 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_19:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
        {
          m_depthRt = v56;
          __debugbreak();
          goto LABEL_22;
        }
      }
LABEL_21:
      m_depthRt = v56;
      goto LABEL_22;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    m_depthRt = v55;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_22:
  v56 = m_depthRt;
  m_allocCounter = v56.m_tracking.m_allocCounter;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v56);
    width = R_RT_Handle::GetSurface(&v56)->m_image.m_base.width;
  }
  else
  {
    if ( v56.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    width = 0;
  }
  v60 = width;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v56);
    height = R_RT_Handle::GetSurface(&v56)->m_image.m_base.height;
  }
  else
  {
    if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    height = 0;
  }
  v18 = 0;
  v58 = height;
  if ( m_colorRtCount )
  {
    do
    {
      v55 = (R_RT_Handle)newRtGroup->m_colorRts[v18];
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v55);
      }
      else
      {
        if ( v55.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2767, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      if ( width != R_RT_Handle::GetSurface(&v55)->m_image.m_base.width )
      {
        v19 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
        v20 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.width;
        name = R_RT_Handle::GetSurface(&v55)->m_image.m_base.name;
        Surface = R_RT_Handle::GetSurface(&v56);
        LODWORD(v53) = v19;
        width = v60;
        LODWORD(v52) = v20;
        v50 = name;
        height = v58;
        LODWORD(v47) = v18;
        LODWORD(v46) = v58;
        LODWORD(v45) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2771, ASSERT_TYPE_ASSERT, "(width == colorRt.GetWidth())", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "width == colorRt.GetWidth()", Surface->m_image.m_base.name, v45, v46, v47, v50, v52, v53) )
          __debugbreak();
      }
      if ( height != R_RT_Handle::GetSurface(&v55)->m_image.m_base.height )
      {
        v23 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
        v24 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.width;
        v25 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.name;
        v26 = R_RT_Handle::GetSurface(&v56);
        LODWORD(v53) = v23;
        width = v60;
        LODWORD(v52) = v24;
        LODWORD(v47) = v18;
        LODWORD(v46) = v58;
        LODWORD(v45) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2772, ASSERT_TYPE_ASSERT, "(height == colorRt.GetHeight())", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "height == colorRt.GetHeight()", v26->m_image.m_base.name, v45, v46, v47, v25, v52, v53) )
          __debugbreak();
      }
      v27 = (R_RT_Surface *)R_RT_Handle::GetSurface(&v55);
      if ( (v27->m_rtFlagsInternal & 0x20) != 0 )
      {
        m_headViewSurfaceID = v27->m_link.m_base.m_headViewSurfaceID;
        if ( !m_headViewSurfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
          __debugbreak();
        v29 = (m_headViewSurfaceID & 0x7FFF) - 1;
        if ( v29 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 253, ASSERT_TYPE_ASSERT, "(baseSurfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "baseSurfaceIndex < g_R_RT_surfaceMax") )
          __debugbreak();
        v27 = &g_R_RT_ManagerSurfaceAllocator->blocks[v29];
      }
      if ( (v27->m_rtFlags & 0x800) != 0 )
      {
        height = v58;
      }
      else
      {
        v30 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
        v31 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.width;
        v32 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.name;
        v33 = R_RT_Handle::GetSurface(&v56);
        LODWORD(v53) = v30;
        width = v60;
        LODWORD(v52) = v31;
        v51 = v32;
        height = v58;
        LODWORD(v47) = v18;
        LODWORD(v46) = v58;
        LODWORD(v45) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2773, ASSERT_TYPE_ASSERT, "(( colorRt.GetBaseFlags() & R_RT_Flag_RTView ) != 0)", "%s\n\t'%s'=%dx%d, color%d('%s')=%dx%d", "( colorRt.GetBaseFlags() & R_RT_Flag_RTView ) != 0", v33->m_image.m_base.name, v45, v46, v47, v51, v52, v53) )
          __debugbreak();
      }
      ++v18;
    }
    while ( v18 != m_colorRtCount );
    p_rtGroup = &state->rtGroup;
  }
  v55 = (R_RT_Handle)newRtGroup->m_depthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v55);
    if ( width == R_RT_Handle::GetSurface(&v55)->m_image.m_base.width )
    {
      v39 = v60;
    }
    else
    {
      v35 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
      v36 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.width;
      v37 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.name;
      v38 = R_RT_Handle::GetSurface(&v56);
      v39 = v60;
      LODWORD(v52) = v35;
      LODWORD(v49) = v36;
      v48 = v37;
      height = v58;
      LODWORD(v46) = v58;
      LODWORD(v45) = v60;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2782, ASSERT_TYPE_ASSERT, "(width == depthRt.GetWidth())", "%s\n\t'%s'=%dx%d, depth('%s')=%dx%d", "width == depthRt.GetWidth()", v38->m_image.m_base.name, v45, v46, v48, v49, v52) )
        __debugbreak();
    }
    if ( height == R_RT_Handle::GetSurface(&v55)->m_image.m_base.height )
      goto LABEL_73;
    v40 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
    v41 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.width;
    v42 = R_RT_Handle::GetSurface(&v55)->m_image.m_base.name;
    v43 = R_RT_Handle::GetSurface(&v56);
    LODWORD(v52) = v40;
    LODWORD(v49) = v41;
    LODWORD(v46) = v58;
    LODWORD(v45) = v39;
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2783, ASSERT_TYPE_ASSERT, "(height == depthRt.GetHeight())", "%s\n\t'%s'=%dx%d, depth('%s')=%dx%d", "height == depthRt.GetHeight()", v43->m_image.m_base.name, v45, v46, v42, v49, v52);
    goto LABEL_71;
  }
  if ( v55.m_tracking.m_allocCounter )
  {
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
LABEL_71:
    if ( v34 )
      __debugbreak();
  }
LABEL_73:
  v56 = (R_RT_Handle)newRtGroup->m_depthRt;
  R_HW_SetRenderTargets(state, m_colorRtCount, newRtGroup->m_colorRts, (R_RT_DepthHandle *)&v56);
  R_RT_Tracking_GroupRefDecrement(p_rtGroup);
  R_RT_Tracking_GroupRefIncrement(newRtGroup, location);
  *(_OWORD *)&p_rtGroup->m_colorRtCount = *(_OWORD *)&newRtGroup->m_colorRtCount;
  *(_OWORD *)&p_rtGroup->m_colorRts[0].m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_colorRts[0].m_tracking.m_allocCounter;
  *(_OWORD *)&p_rtGroup->m_colorRts[0].m_tracking.m_location = *(_OWORD *)&newRtGroup->m_colorRts[0].m_tracking.m_location;
  *(_OWORD *)&p_rtGroup->m_colorRts[1].m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_colorRts[1].m_tracking.m_allocCounter;
  *(_OWORD *)&p_rtGroup->m_colorRts[1].m_tracking.m_location = *(_OWORD *)&newRtGroup->m_colorRts[1].m_tracking.m_location;
  *(_OWORD *)&p_rtGroup->m_colorRts[2].m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_colorRts[2].m_tracking.m_allocCounter;
  *(_OWORD *)&p_rtGroup->m_colorRts[2].m_tracking.m_location = *(_OWORD *)&newRtGroup->m_colorRts[2].m_tracking.m_location;
  *(_OWORD *)&p_rtGroup->m_colorRts[3].m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_colorRts[3].m_tracking.m_allocCounter;
  *(_OWORD *)&p_rtGroup->m_colorRts[3].m_tracking.m_location = *(_OWORD *)&newRtGroup->m_colorRts[3].m_tracking.m_location;
  *(_OWORD *)&p_rtGroup->m_depthRt.m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_depthRt.m_tracking.m_allocCounter;
  *(_OWORD *)&p_rtGroup->m_depthRt.m_tracking.m_location = *(_OWORD *)&newRtGroup->m_depthRt.m_tracking.m_location;
  *(_OWORD *)&p_rtGroup->m_vrsRt.m_tracking.m_allocCounter = *(_OWORD *)&newRtGroup->m_vrsRt.m_tracking.m_allocCounter;
  p_rtGroup->m_vrsRt.m_tracking.m_location = newRtGroup->m_vrsRt.m_tracking.m_location;
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
  const GfxTexture *v11; 
  const char *name; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 

  v4 = resourceIndex;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1058, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1059, ASSERT_TYPE_ASSERT, "(state->data)", (const char *)&queryFormat, "state->data") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x28 )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1060, ASSERT_TYPE_ASSERT, "(unsigned)( resourceIndex ) < (unsigned)( ( sizeof( *array_counter( state->shaderResourceViews[imageSetID] ) ) + 0 ) )", "resourceIndex doesn't index ARRAY_COUNT( state->shaderResourceViews[imageSetID] )\n\t%i not in [0, %i)", v15, 40) )
      __debugbreak();
  }
  Stream_UsedImage(image);
  if ( Sys_IsBackendOwnerThread() )
  {
    if ( R_IsLockedIfGfxImmediateContext(state->device) )
      goto LABEL_17;
    v8 = "R_IsLockedIfGfxImmediateContext( state->device )";
    v9 = 1082;
    v10 = "(R_IsLockedIfGfxImmediateContext( state->device ))";
  }
  else
  {
    if ( state->device != g_dx.immediateContext )
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
  v11 = R_Texture_Get(state->data, image->textureId);
  if ( (v11->shaderView.view & 0xFFFFFFFD) == 0 )
  {
    name = "<unknown>";
    if ( image->name )
      name = image->name;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 1106, ASSERT_TYPE_ASSERT, "( !newView.IsNull() )", "R_SetResourceImageInternal: image %s has null shaderView", name) )
      __debugbreak();
  }
  v13 = v4 + 40i64 * (unsigned __int8)imageSetID;
  if ( state->shaderResourceViews[0][v13].buffer.view != v11->shaderView.view || state->shaderResourceViews[0][v13].buffer.resource != v11->shaderView.resource || (v14 = state->resourcesClear[(unsigned __int8)imageSetID], !_bittest64((const __int64 *)&v14, v4)) )
  {
    state->resourcesDirty[(unsigned __int8)imageSetID] |= 1i64 << v4;
    state->resourcesClear[(unsigned __int8)imageSetID] |= 1i64 << v4;
    state->shaderResourceViews[0][v13] = (GfxShaderResource)v11->shaderView;
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
  float depthRangeFar; 
  float depthRangeNear; 
  GfxDevice *device; 
  __int64 v10; 
  int v11; 

  if ( *(_QWORD *)&state->viewport.x == *(_QWORD *)&viewport->x && (width = viewport->width, *(_QWORD *)&state->viewport.width == *(_QWORD *)&viewport->width) )
  {
    if ( state->scissor.x == scissor->x && state->scissor.y == scissor->y && state->scissor.width == scissor->width && state->scissor.height == scissor->height )
      return;
  }
  else
  {
    width = viewport->width;
  }
  if ( !width )
  {
    v11 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v11) )
      __debugbreak();
  }
  if ( !viewport->height )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2429, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v10) )
      __debugbreak();
  }
  depthRangeFar = state->depthRangeFar;
  depthRangeNear = state->depthRangeNear;
  device = state->device;
  state->viewport = *viewport;
  R_HW_SetViewport(device, viewport, depthRangeNear, depthRangeFar);
  R_HW_SetScissor(state, scissor);
}

/*
==============
R_SetViewportMSParams
==============
*/
void R_SetViewportMSParams(GfxCmdBufSourceState *source, float msScale)
{
  *((_BYTE *)source + 11668) |= 2u;
  source->msScale = msScale;
}

/*
==============
R_SetViewportStruct
==============
*/
void R_SetViewportStruct(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  GfxViewportBehavior viewportBehavior; 
  GfxViewport v5; 
  __int64 v6; 
  int v7; 

  if ( !viewport->width )
  {
    v7 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", v7) )
      __debugbreak();
  }
  if ( !viewport->height )
  {
    LODWORD(v6) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v6) )
      __debugbreak();
  }
  viewportBehavior = source->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v6) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v6) )
      __debugbreak();
  }
  v5 = *viewport;
  *((_BYTE *)source + 11668) |= 2u;
  source->sceneViewport = v5;
  source->viewMode = VIEW_MODE_NONE;
}

/*
==============
R_SetViewportValues
==============
*/
void R_SetViewportValues(GfxCmdBufSourceState *source, unsigned int x, unsigned int y, unsigned int width, unsigned int height)
{
  GfxViewportBehavior viewportBehavior; 
  __int64 v7; 
  GfxViewport v8; 

  *(_QWORD *)&v8.x = __PAIR64__(y, x);
  *(_QWORD *)&v8.width = __PAIR64__(height, width);
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2448, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !height )
  {
    LODWORD(v7) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v7) )
      __debugbreak();
  }
  viewportBehavior = source->viewportBehavior;
  if ( viewportBehavior )
  {
    LODWORD(v7) = viewportBehavior;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( source->viewportBehavior == GFX_USE_VIEWPORT_FOR_VIEW ) )", "( source->viewportBehavior ) = %i", v7) )
      __debugbreak();
  }
  *((_BYTE *)source + 11668) |= 2u;
  source->sceneViewport = v8;
  source->viewMode = VIEW_MODE_NONE;
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
  __int16 v2; 
  char v3; 
  int v5; 
  int m_colorRtCount; 
  R_RT_Handle m_depthRt; 

  v3 = whichToClear;
  if ( (whichToClear & 0xF) != 0 )
  {
    v5 = 0;
    m_colorRtCount = rtGroup->m_colorRtCount;
    if ( rtGroup->m_colorRtCount )
    {
      do
        R_RT_Handle::ClearAuxDirty(&rtGroup->m_colorRts[v5++]);
      while ( v5 != m_colorRtCount );
    }
  }
  if ( (v3 & 0x30) != 0 )
  {
    m_depthRt = (R_RT_Handle)rtGroup->m_depthRt;
    if ( v2 )
    {
      R_RT_Handle::GetSurface(&m_depthRt);
      R_RT_Handle::ClearAuxDirty(&m_depthRt);
    }
    else if ( m_depthRt.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&m_depthRt.m_surfaceID) )
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
  float renderTargetWidth; 
  float renderTargetHeight; 
  float width; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  char v13; 
  float v14; 
  float v15; 
  float height; 
  float v17; 
  float y; 
  __int64 x; 
  float v20; 
  float v21; 
  float v22; 
  unsigned int frameCount; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int i; 
  __int64 unsignedInt; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  char v31; 
  __int64 v32; 
  __int64 v33; 
  base_vec2_t<int> v34; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2513, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source->viewMode == VIEW_MODE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2514, ASSERT_TYPE_ASSERT, "(source->viewMode != VIEW_MODE_NONE)", (const char *)&queryFormat, "source->viewMode != VIEW_MODE_NONE") )
    __debugbreak();
  *((_BYTE *)source + 11668) &= ~2u;
  if ( !source->renderTargetWidth )
  {
    LODWORD(v32) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2517, ASSERT_TYPE_ASSERT, "( ( source->renderTargetWidth > 0 ) )", "( source->renderTargetWidth ) = %i", v32) )
      __debugbreak();
  }
  if ( !source->renderTargetHeight )
  {
    LODWORD(v32) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.cpp", 2518, ASSERT_TYPE_ASSERT, "( ( source->renderTargetHeight > 0 ) )", "( source->renderTargetHeight ) = %i", v32) )
      __debugbreak();
  }
  _XMM0 = LODWORD(source->msScale);
  __asm { vmaxss  xmm10, xmm0, xmm13 }
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  width = (float)viewport->width;
  *(float *)&_XMM0 = (float)viewport->height;
  v9 = (float)((float)(width * (float)(1.0 / renderTargetWidth)) * *(float *)&_XMM10) * 0.5;
  v10 = *(float *)&_XMM0 * (float)(1.0 / renderTargetHeight);
  *(float *)&_XMM0 = (float)viewport->x;
  v11 = (float)(v10 * *(float *)&_XMM10) * 0.5;
  v12 = *(float *)&_XMM0 * (float)(1.0 / renderTargetWidth);
  *(float *)&_XMM0 = (float)viewport->y;
  v13 = *((_BYTE *)source + 11668);
  v14 = v12 + v9;
  v15 = (float)(*(float *)&_XMM0 * (float)(1.0 / renderTargetHeight)) + v11;
  if ( (v13 & 0x40) == 0 )
  {
    source->input.consts[4].v[0] = renderTargetWidth;
    source->input.consts[4].v[1] = renderTargetHeight;
    source->input.consts[4].v[2] = 1.0 / renderTargetWidth;
    source->input.consts[4].v[3] = 1.0 / renderTargetHeight;
    ++source->constVersions[4];
    v13 = *((_BYTE *)source + 11668);
  }
  *((_BYTE *)source + 11668) = v13 & 0xBF;
  height = (float)viewport->height;
  v17 = (float)viewport->width;
  y = (float)viewport->y;
  x = viewport->x;
  source->input.consts[6].v[1] = y;
  source->input.consts[6].v[3] = 1.0 / height;
  v20 = (float)x;
  source->input.consts[6].v[0] = v20;
  source->input.consts[6].v[2] = 1.0 / v17;
  ++source->constVersions[6];
  source->input.consts[13].v[1] = COERCE_FLOAT(LODWORD(v11) ^ _xmm);
  source->input.consts[13].v[0] = v9;
  source->input.consts[13].v[2] = v14;
  source->input.consts[13].v[3] = v15;
  ++source->constVersions[13];
  v21 = log10f_0(*(float *)&_XMM10);
  v22 = 0.0;
  frameCount = source->input.data->frameCount;
  v24 = 1;
  v34 = R_VRSGetPixelPositionForSample(frameCount, 0, rg.vrsEmissiveOnly);
  v25 = 1i64;
  for ( i = 4; i < 0x10; i += 4 )
  {
    unsignedInt = frameCount & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( v24 >= 4 )
    {
      LODWORD(v33) = 4;
      LODWORD(v32) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v33) = 4;
      LODWORD(v32) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    v28 = s_VRSSampleToPixelOrdered_0[unsignedInt][v25];
    if ( (unsigned int)v28 >= 4 )
    {
      LODWORD(v33) = 4;
      LODWORD(v32) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    ++v24;
    ++v25;
    v29 = (int)(HIDWORD(*(_QWORD *)&s_VRSSamplePosition_0[v28]) - v34.v[1]);
    v30 = ((((BYTE4(v29) & 7) + (int)v29) >> 3) + 1) << (i + 2);
    v31 = i;
    LODWORD(v22) |= (((int)(*(_QWORD *)&s_VRSSamplePosition_0[v28] - v34.v[0]) / 8 + 1) << v31) | v30;
  }
  source->input.consts[103].v[0] = *(float *)&_XMM10;
  source->input.consts[103].v[1] = v21 * -3.321928;
  source->input.consts[103].v[2] = 1.0 / *(float *)&_XMM10;
  source->input.consts[103].v[3] = v22;
  ++source->constVersions[103];
}

