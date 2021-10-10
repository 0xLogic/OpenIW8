/*
==============
R_WaitAsyncCompute
==============
*/

void __fastcall R_WaitAsyncCompute(GfxCmdBufState *gfxState, const GfxBackEndData *data, ComputeContextType contextType, int done)
{
  ?R_WaitAsyncCompute@@YAXPEAUGfxCmdBufState@@PEBUGfxBackEndData@@W4ComputeContextType@@H@Z(gfxState, data, contextType, done);
}

/*
==============
R_CreateComputeConstantBuffer
==============
*/

void __fastcall R_CreateComputeConstantBuffer(unsigned int size, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initData, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  ?R_CreateComputeConstantBuffer@@YAXIIW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEAPEAUID3D12Resource@@UGfxBufferCreationContext@@@Z(size, gfxBufferType, initialState, placement, initData, outBuffer, context);
}

/*
==============
R_GetComputeHWUnitCnt
==============
*/

void __fastcall R_GetComputeHWUnitCnt(unsigned int *SIMDcnt, unsigned int *CUcnt, unsigned int *SHcnt)
{
  ?R_GetComputeHWUnitCnt@@YAXAEAI00@Z(SIMDcnt, CUcnt, SHcnt);
}

/*
==============
R_GetGfxComputeCmdBufState
==============
*/

ComputeCmdBufState *__fastcall R_GetGfxComputeCmdBufState(GfxCmdBufState *state)
{
  return ?R_GetGfxComputeCmdBufState@@YAPEAUComputeCmdBufState@@PEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ClearComputeCmdList
==============
*/

void __fastcall R_ClearComputeCmdList(ComputeCmdList *list)
{
  ?R_ClearComputeCmdList@@YAXPEAUComputeCmdList@@@Z(list);
}

/*
==============
R_CreateComputeRawBufferRWView
==============
*/

void __fastcall R_CreateComputeRawBufferRWView(ID3D12Resource *bufferHandle, GfxShaderBufferRWView *outRWView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeRawBufferRWView@@YAXPEAUID3D12Resource@@PEAUGfxShaderBufferRWView@@UGfxBufferCreationContext@@@Z(bufferHandle, outRWView, context);
}

/*
==============
R_ShutdownGfxComputeCmdBufState
==============
*/

void __fastcall R_ShutdownGfxComputeCmdBufState(ComputeCmdBufState *state)
{
  ?R_ShutdownGfxComputeCmdBufState@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_ReleaseShaderTextureView
==============
*/

void __fastcall R_ReleaseShaderTextureView(GfxShaderTextureView *view)
{
  ?R_ReleaseShaderTextureView@@YAXPEAUGfxShaderTextureView@@@Z(view);
}

/*
==============
R_NextComputeCmdOfSameType
==============
*/

const ComputeCmdHeader *__fastcall R_NextComputeCmdOfSameType(const ComputeCmdList *list, const ComputeCmdHeader *header)
{
  return ?R_NextComputeCmdOfSameType@@YAPEBUComputeCmdHeader@@PEBUComputeCmdList@@PEBU1@@Z(list, header);
}

/*
==============
R_UploadAndSetComputeConstants
==============
*/

void __fastcall R_UploadAndSetComputeConstants(ComputeCmdBufState *state, int index, const void *data, unsigned int size, void *optArg)
{
  ?R_UploadAndSetComputeConstants@@YAXPEAUComputeCmdBufState@@HPEBXIPEAX@Z(state, index, data, size, optArg);
}

/*
==============
R_CreateComputeStructuredBuffer
==============
*/

void __fastcall R_CreateComputeStructuredBuffer(unsigned int count, unsigned int stride, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *data, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  ?R_CreateComputeStructuredBuffer@@YAXIIIW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEAPEAUID3D12Resource@@UGfxBufferCreationContext@@@Z(count, stride, gfxBufferType, initialState, placement, data, outBuffer, context);
}

/*
==============
R_AssignNullShaderBufferView
==============
*/

void __fastcall R_AssignNullShaderBufferView(GfxShaderBufferView *outView)
{
  ?R_AssignNullShaderBufferView@@YAXPEAUGfxShaderBufferView@@@Z(outView);
}

/*
==============
R_SetComputeShader
==============
*/

void __fastcall R_SetComputeShader(ComputeCmdBufState *state, const ComputeShader *computeShader)
{
  ?R_SetComputeShader@@YAXPEAUComputeCmdBufState@@PEBUComputeShader@@@Z(state, computeShader);
}

/*
==============
R_EndAsyncComputeFrame
==============
*/

void __fastcall R_EndAsyncComputeFrame(ComputeCmdBufState *state)
{
  ?R_EndAsyncComputeFrame@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_AllocComputeCmdData
==============
*/

void *__fastcall R_AllocComputeCmdData(ComputeCmdList *list, int size)
{
  return ?R_AllocComputeCmdData@@YAPEAXPEAUComputeCmdList@@H@Z(list, size);
}

/*
==============
R_SetComputeRWViewsWithCounters
==============
*/

void __fastcall R_SetComputeRWViewsWithCounters(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderBufferRWView *const *views, const unsigned int *initialCounts)
{
  ?R_SetComputeRWViewsWithCounters@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxShaderBufferRWView@@PEBI@Z(state, startIndex, count, views, initialCounts);
}

/*
==============
R_SetComputeConstantBuffers
==============
*/

void __fastcall R_SetComputeConstantBuffers(ComputeCmdBufState *state, int startIndex, int count, ID3D12Resource *const *const buffers)
{
  ?R_SetComputeConstantBuffers@@YAXPEAUComputeCmdBufState@@HHQEBQEAUID3D12Resource@@@Z(state, startIndex, count, buffers);
}

/*
==============
R_AssignNullBuffer
==============
*/

void __fastcall R_AssignNullBuffer(ID3D12Resource **outBuffer)
{
  ?R_AssignNullBuffer@@YAXPEAPEAUID3D12Resource@@@Z(outBuffer);
}

/*
==============
R_ComputeWaitForGraphics
==============
*/

void __fastcall R_ComputeWaitForGraphics(ComputeCmdBufState *computeState, GfxCmdBufState *gfxState)
{
  ?R_ComputeWaitForGraphics@@YAXPEAUComputeCmdBufState@@PEAUGfxCmdBufState@@@Z(computeState, gfxState);
}

/*
==============
R_InitComputeCmdList
==============
*/

void __fastcall R_InitComputeCmdList(ComputeCmdList *list, unsigned __int8 *cmds, int size)
{
  ?R_InitComputeCmdList@@YAXPEAUComputeCmdList@@PEAEH@Z(list, cmds, size);
}

/*
==============
R_DispatchIndirect
==============
*/

void __fastcall R_DispatchIndirect(ComputeCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  ?R_DispatchIndirect@@YAXPEAUComputeCmdBufState@@PEAUID3D12Resource@@I@Z(state, buffer, offset);
}

/*
==============
R_InitComputeCmdBufState
==============
*/

void __fastcall R_InitComputeCmdBufState(ComputeCmdBufState *state, GfxCmdBufState *gfxState, GfxBackEndData *data, ComputeContextType contextType)
{
  ?R_InitComputeCmdBufState@@YAXPEAUComputeCmdBufState@@PEAUGfxCmdBufState@@PEAUGfxBackEndData@@W4ComputeContextType@@@Z(state, gfxState, data, contextType);
}

/*
==============
R_BeginComputeConstants
==============
*/

GfxConstantBufferDesc *__fastcall R_BeginComputeConstants(GfxConstantBufferDesc *result, ComputeCmdBufState *state, int index, unsigned int size)
{
  return ?R_BeginComputeConstants@@YA?AUGfxConstantBufferDesc@@PEAUComputeCmdBufState@@HI@Z(result, state, index, size);
}

/*
==============
R_Dispatch
==============
*/

void __fastcall R_Dispatch(ComputeCmdBufState *state, unsigned int xCount, unsigned int yCount, unsigned int zCount)
{
  ?R_Dispatch@@YAXPEAUComputeCmdBufState@@III@Z(state, xCount, yCount, zCount);
}

/*
==============
R_WaitAsyncComputeForSuspend
==============
*/

void __fastcall R_WaitAsyncComputeForSuspend(GfxBackEndData *data)
{
  ?R_WaitAsyncComputeForSuspend@@YAXPEAUGfxBackEndData@@@Z(data);
}

/*
==============
R_FlushCompute
==============
*/

void __fastcall R_FlushCompute(ComputeCmdBufState *state)
{
  ?R_FlushCompute@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_SetComputeLimitsPerCU
==============
*/

void __fastcall R_SetComputeLimitsPerCU(ComputeCmdBufState *state, ComputeCmdSIMDWalkType simdWalk, unsigned int wavesPerCU, unsigned int threadGroupsPerCu, unsigned int lockThresholdPerCU)
{
  ?R_SetComputeLimitsPerCU@@YAXPEAUComputeCmdBufState@@W4ComputeCmdSIMDWalkType@@III@Z(state, simdWalk, wavesPerCU, threadGroupsPerCu, lockThresholdPerCU);
}

/*
==============
R_CreateComputeRawBufferView
==============
*/

void __fastcall R_CreateComputeRawBufferView(ID3D12Resource *bufferHandle, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeRawBufferView@@YAXPEAUID3D12Resource@@PEAUGfxShaderBufferView@@UGfxBufferCreationContext@@@Z(bufferHandle, outView, context);
}

/*
==============
R_SetComputeTextureRWViews
==============
*/

void __fastcall R_SetComputeTextureRWViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderTextureRWView *const *views)
{
  ?R_SetComputeTextureRWViews@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxShaderTextureRWView@@@Z(state, startIndex, count, views);
}

/*
==============
R_SetComputeRWTextures
==============
*/

void __fastcall R_SetComputeRWTextures(ComputeCmdBufState *state, int startIndex, int count, const GfxTexture *const *textures)
{
  ?R_SetComputeRWTextures@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxTexture@@@Z(state, startIndex, count, textures);
}

/*
==============
R_ComputeCheckReserveDescriptorHeaps
==============
*/

bool __fastcall R_ComputeCheckReserveDescriptorHeaps(ComputeCmdBufState *state)
{
  return ?R_ComputeCheckReserveDescriptorHeaps@@YA_NPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_SetComputeViewWithOffset
==============
*/

void __fastcall R_SetComputeViewWithOffset(ComputeCmdBufState *state, int startIndex, unsigned __int8 *buffer, unsigned int bufferOffset, unsigned int stride, const GfxShaderBufferView *view, ID3D12Resource *resource)
{
  ?R_SetComputeViewWithOffset@@YAXPEAUComputeCmdBufState@@HPEAEIIAEBUGfxShaderBufferView@@PEAUID3D12Resource@@@Z(state, startIndex, buffer, bufferOffset, stride, view, resource);
}

/*
==============
R_CreateComputeStructuredBufferView
==============
*/

void __fastcall R_CreateComputeStructuredBufferView(ID3D12Resource *bufferHandle, unsigned int stride, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeStructuredBufferView@@YAXPEAUID3D12Resource@@IPEAUGfxShaderBufferView@@UGfxBufferCreationContext@@@Z(bufferHandle, stride, outView, context);
}

/*
==============
R_ReleaseShaderBufferView
==============
*/

void __fastcall R_ReleaseShaderBufferView(GfxShaderBufferView *view)
{
  ?R_ReleaseShaderBufferView@@YAXPEAUGfxShaderBufferView@@@Z(view);
}

/*
==============
R_DestroyComputeBuffer
==============
*/

void __fastcall R_DestroyComputeBuffer(ID3D12Resource **buffer)
{
  ?R_DestroyComputeBuffer@@YAXPEAPEAUID3D12Resource@@@Z(buffer);
}

/*
==============
R_ReleaseShaderBufferRWView
==============
*/

void __fastcall R_ReleaseShaderBufferRWView(GfxShaderBufferRWView *rwView)
{
  ?R_ReleaseShaderBufferRWView@@YAXPEAUGfxShaderBufferRWView@@@Z(rwView);
}

/*
==============
R_InitComputeCmdBufState
==============
*/

void __fastcall R_InitComputeCmdBufState(ComputeCmdBufState *state, GfxBackEndData *data, ComputeContextType contextType)
{
  ?R_InitComputeCmdBufState@@YAXPEAUComputeCmdBufState@@PEAUGfxBackEndData@@W4ComputeContextType@@@Z(state, data, contextType);
}

/*
==============
R_AssignNullShaderTextureRWView
==============
*/

void __fastcall R_AssignNullShaderTextureRWView(GfxShaderTextureRWView *outRWView)
{
  ?R_AssignNullShaderTextureRWView@@YAXPEAUGfxShaderTextureRWView@@@Z(outRWView);
}

/*
==============
R_ResetConstantBuffer
==============
*/

void __fastcall R_ResetConstantBuffer(GfxBackEndData *data, GfxDevice *device, ComputeContextType contextType)
{
  ?R_ResetConstantBuffer@@YAXPEAUGfxBackEndData@@PEAUGfxDevice@@W4ComputeContextType@@@Z(data, device, contextType);
}

/*
==============
R_FinishComputeCmdList
==============
*/

void __fastcall R_FinishComputeCmdList(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?R_FinishComputeCmdList@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
R_ComputeWaitForCompute
==============
*/

void __fastcall R_ComputeWaitForCompute(ComputeCmdBufState *state, PipeFlushMode pipeFlushMode)
{
  ?R_ComputeWaitForCompute@@YAXPEAUComputeCmdBufState@@W4PipeFlushMode@@@Z(state, pipeFlushMode);
}

/*
==============
R_AllocComputeCmdDataAligned
==============
*/

void *__fastcall R_AllocComputeCmdDataAligned(ComputeCmdList *list, int size, unsigned int align)
{
  return ?R_AllocComputeCmdDataAligned@@YAPEAXPEAUComputeCmdList@@HI@Z(list, size, align);
}

/*
==============
R_CreateComputeStructuredBufferRWViewWithFlags
==============
*/

void __fastcall R_CreateComputeStructuredBufferRWViewWithFlags(ID3D12Resource *bufferHandle, unsigned int stride, GfxShaderRWViewFlags flags, GfxShaderBufferRWView *outRWView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeStructuredBufferRWViewWithFlags@@YAXPEAUID3D12Resource@@IW4GfxShaderRWViewFlags@@PEAUGfxShaderBufferRWView@@UGfxBufferCreationContext@@@Z(bufferHandle, stride, flags, outRWView, context);
}

/*
==============
R_SetComputeLimitsAbsolute
==============
*/

void __fastcall R_SetComputeLimitsAbsolute(ComputeCmdBufState *state, ComputeCmdSIMDWalkType simdWalk, unsigned int wavesTotal, unsigned int threadGroupsPerCu, unsigned int lockThresholdTotal)
{
  ?R_SetComputeLimitsAbsolute@@YAXPEAUComputeCmdBufState@@W4ComputeCmdSIMDWalkType@@III@Z(state, simdWalk, wavesTotal, threadGroupsPerCu, lockThresholdTotal);
}

/*
==============
R_ReleaseShaderTextureRWView
==============
*/

void __fastcall R_ReleaseShaderTextureRWView(GfxShaderTextureRWView *rwView)
{
  ?R_ReleaseShaderTextureRWView@@YAXPEAUGfxShaderTextureRWView@@@Z(rwView);
}

/*
==============
R_SetComputeCUMask
==============
*/

void __fastcall R_SetComputeCUMask(ComputeCmdBufState *computeState, unsigned int cuMask)
{
  ?R_SetComputeCUMask@@YAXPEAUComputeCmdBufState@@I@Z(computeState, cuMask);
}

/*
==============
R_GetCUMask
==============
*/

unsigned int __fastcall R_GetCUMask(GfxCUMaskMode mode)
{
  return ?R_GetCUMask@@YAIW4GfxCUMaskMode@@@Z(mode);
}

/*
==============
R_AssignNullShaderBufferRWView
==============
*/

void __fastcall R_AssignNullShaderBufferRWView(GfxShaderBufferRWView *outRWView)
{
  ?R_AssignNullShaderBufferRWView@@YAXPEAUGfxShaderBufferRWView@@@Z(outRWView);
}

/*
==============
R_SetComputeTextureViews
==============
*/

void __fastcall R_SetComputeTextureViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderTextureView *const *views)
{
  ?R_SetComputeTextureViews@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxShaderTextureView@@@Z(state, startIndex, count, views);
}

/*
==============
R_InitGfxComputeCmdBufState
==============
*/

void __fastcall R_InitGfxComputeCmdBufState(ComputeCmdBufState *state, const GfxCmdBufState *refGfxState)
{
  ?R_InitGfxComputeCmdBufState@@YAXPEAUComputeCmdBufState@@PEBUGfxCmdBufState@@@Z(state, refGfxState);
}

/*
==============
R_GfxComputeWaitForGraphics
==============
*/

void __fastcall R_GfxComputeWaitForGraphics(GfxCmdBufState *state)
{
  ?R_GfxComputeWaitForGraphics@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ExecuteComputeCmdList
==============
*/

void __fastcall R_ExecuteComputeCmdList(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list)
{
  ?R_ExecuteComputeCmdList@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@@Z(cmdBufState, list);
}

/*
==============
R_SetComputeViews
==============
*/

void __fastcall R_SetComputeViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderBufferView *const *views)
{
  ?R_SetComputeViews@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxShaderBufferView@@@Z(state, startIndex, count, views);
}

/*
==============
R_PrepareExecuteCompute
==============
*/

void __fastcall R_PrepareExecuteCompute(GfxBackEndData *data, GfxDevice *device, ComputeContextType contextType)
{
  ?R_PrepareExecuteCompute@@YAXPEAUGfxBackEndData@@PEAUGfxDevice@@W4ComputeContextType@@@Z(data, device, contextType);
}

/*
==============
R_EndComputeConstants
==============
*/

void __fastcall R_EndComputeConstants(ComputeCmdBufState *state, const GfxConstantBufferDesc *cbDesc)
{
  ?R_EndComputeConstants@@YAXPEAUComputeCmdBufState@@AEBUGfxConstantBufferDesc@@@Z(state, cbDesc);
}

/*
==============
R_ShutdownComputeCmdBufState
==============
*/

void __fastcall R_ShutdownComputeCmdBufState(ComputeCmdBufState *state)
{
  ?R_ShutdownComputeCmdBufState@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_AddComputeCmd
==============
*/

bool __fastcall R_AddComputeCmd(ComputeCmdList *list, ComputeCmdType type, const void *data)
{
  return ?R_AddComputeCmd@@YA_NPEAUComputeCmdList@@W4ComputeCmdType@@PEBX@Z(list, type, data);
}

/*
==============
R_FinishFrontendComputeCmdList
==============
*/

void R_FinishFrontendComputeCmdList(void)
{
  ?R_FinishFrontendComputeCmdList@@YAXXZ();
}

/*
==============
R_DispatchComputeCmd
==============
*/

void __fastcall R_DispatchComputeCmd(const void *const cmdInfo)
{
  ?R_DispatchComputeCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
R_CreateComputeRawBuffer
==============
*/

void __fastcall R_CreateComputeRawBuffer(unsigned int size, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *data, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  ?R_CreateComputeRawBuffer@@YAXIIW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEAPEAUID3D12Resource@@UGfxBufferCreationContext@@@Z(size, gfxBufferType, initialState, placement, data, outBuffer, context);
}

/*
==============
R_SetComputeTextures
==============
*/

void __fastcall R_SetComputeTextures(ComputeCmdBufState *state, int startIndex, int count, const GfxTexture *const *textures)
{
  ?R_SetComputeTextures@@YAXPEAUComputeCmdBufState@@HHPEBQEBUGfxTexture@@@Z(state, startIndex, count, textures);
}

/*
==============
R_FlushAsyncCompute
==============
*/

void __fastcall R_FlushAsyncCompute(ComputeCmdBufState *state)
{
  ?R_FlushAsyncCompute@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_CreateComputeBufferRWView
==============
*/

void __fastcall R_CreateComputeBufferRWView(ID3D12Resource *bufferHandle, GfxDataFormat format, GfxShaderBufferRWView *outRWView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeBufferRWView@@YAXPEAUID3D12Resource@@W4GfxDataFormat@@PEAUGfxShaderBufferRWView@@UGfxBufferCreationContext@@@Z(bufferHandle, format, outRWView, context);
}

/*
==============
R_ResetComputeCUMask
==============
*/

void __fastcall R_ResetComputeCUMask(ComputeCmdBufState *state)
{
  ?R_ResetComputeCUMask@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
R_GetComputeCmdData
==============
*/

void *__fastcall R_GetComputeCmdData(const ComputeCmdList *list, const ComputeCmdHeader *header)
{
  return ?R_GetComputeCmdData@@YAPEAXPEBUComputeCmdList@@PEBUComputeCmdHeader@@@Z(list, header);
}

/*
==============
R_CreateComputeBufferView
==============
*/

void __fastcall R_CreateComputeBufferView(ID3D12Resource *bufferHandle, GfxDataFormat format, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  ?R_CreateComputeBufferView@@YAXPEAUID3D12Resource@@W4GfxDataFormat@@PEAUGfxShaderBufferView@@UGfxBufferCreationContext@@@Z(bufferHandle, format, outView, context);
}

/*
==============
R_AssignNullShaderTextureView
==============
*/

void __fastcall R_AssignNullShaderTextureView(GfxShaderTextureView *outView)
{
  ?R_AssignNullShaderTextureView@@YAXPEAUGfxShaderTextureView@@@Z(outView);
}

/*
==============
R_AddComputeCmd
==============
*/
char R_AddComputeCmd(ComputeCmdList *list, ComputeCmdType type, const void *data)
{
  __int64 v3; 
  volatile int *p_used; 
  signed __int32 v7; 
  unsigned __int8 *cmds; 
  signed __int64 v10; 
  signed __int32 *v11; 
  signed __int32 v12; 
  signed __int32 v13; 
  signed __int32 *v14; 
  __int64 v15; 
  __int64 v16; 

  v3 = type;
  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 386, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 388, ASSERT_TYPE_ASSERT, "(!list->inExecute)", (const char *)&queryFormat, "!list->inExecute") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x23 )
  {
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( COMPUTECMD_COUNT )", "type doesn't index COMPUTECMD_COUNT\n\t%i not in [0, %i)", v15, 35) )
      __debugbreak();
  }
  p_used = &list->used;
  if ( (((_BYTE)list + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &list->used) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd(p_used, 8u);
  if ( v7 + 8 <= list->size )
  {
    cmds = list->cmds;
    v10 = (_BYTE *)data - list->cmds;
    if ( (unsigned __int64)(v10 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v10, "signed", v10) )
      __debugbreak();
    if ( (int)v10 < 0 || (int)v10 > *p_used )
    {
      LODWORD(v16) = *p_used;
      LODWORD(v15) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 402, ASSERT_TYPE_ASSERT, "( 0 ) <= ( dataOffset ) && ( dataOffset ) <= ( list->used )", "dataOffset not in [0, list->used]\n\t%i not in [%i, %i]", v15, 0i64, v16) )
        __debugbreak();
    }
    if ( list->headsOffset < 0 || list->headsOffset > *p_used - 8 )
    {
      LODWORD(v16) = *p_used - 8;
      LODWORD(v15) = list->headsOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 404, ASSERT_TYPE_ASSERT, "( 0 ) <= ( list->headsOffset ) && ( list->headsOffset ) <= ( list->used - static_cast< int >( sizeof( ComputeCmdHeader ) ) )", "list->headsOffset not in [0, list->used - static_cast< int >( sizeof( ComputeCmdHeader ) )]\n\t%i not in [%i, %i]", v15, 0i64, v16) )
        __debugbreak();
    }
    v11 = (signed __int32 *)&cmds[4 * v3 + (int)list->headsOffset];
    while ( 1 )
    {
      v12 = *v11;
      v13 = v7 | (*v11 + 0x1000000) & 0xFF000000;
      if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v11) )
        __debugbreak();
      if ( v12 == _InterlockedCompareExchange(v11, v13, v12) )
        break;
      Sys_Sleep(0);
    }
    v14 = (signed __int32 *)&cmds[v7];
    *v14 = v12 & 0xFFFFFF;
    v14[1] = v10;
    return 1;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_COMPUTE_CMDS_OVERFLOW);
    return 0;
  }
}

/*
==============
R_AllocComputeCmdData
==============
*/
unsigned __int8 *R_AllocComputeCmdData(ComputeCmdList *list, int size)
{
  signed __int32 v4; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 336, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 338, ASSERT_TYPE_ASSERT, "(!list->inExecute)", (const char *)&queryFormat, "!list->inExecute") )
    __debugbreak();
  if ( (((_BYTE)list + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &list->used) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(&list->used, size);
  if ( v4 + size <= list->size )
    return &list->cmds[v4];
  R_WarnOncePerFrame(R_WARN_COMPUTE_CMDS_OVERFLOW);
  return 0i64;
}

/*
==============
R_AllocComputeCmdDataAligned
==============
*/
unsigned __int8 *R_AllocComputeCmdDataAligned(ComputeCmdList *list, int size, unsigned int align)
{
  unsigned int v6; 
  signed __int32 v7; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 356, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 358, ASSERT_TYPE_ASSERT, "(!list->inExecute)", (const char *)&queryFormat, "!list->inExecute") )
    __debugbreak();
  if ( ((align - 1) & align) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 361, ASSERT_TYPE_ASSERT, "(IsPowerOf2( align ))", (const char *)&queryFormat, "IsPowerOf2( align )") )
    __debugbreak();
  v6 = align + size;
  if ( (((_BYTE)list + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &list->used) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd(&list->used, v6);
  if ( (signed __int32)(v7 + v6) <= list->size )
    return &list->cmds[-align & (unsigned __int64)(int)(v7 + align - 1)];
  R_WarnOncePerFrame(R_WARN_COMPUTE_CMDS_OVERFLOW);
  return 0i64;
}

/*
==============
R_AssignNullBuffer
==============
*/
void R_AssignNullBuffer(ID3D12Resource **outBuffer)
{
  *outBuffer = NULL;
}

/*
==============
R_AssignNullShaderBufferRWView
==============
*/
void R_AssignNullShaderBufferRWView(GfxShaderBufferRWView *outRWView)
{
  outRWView->rwView = 3;
  outRWView->rwResource = NULL;
  outRWView->rwCounterResource = NULL;
  outRWView->rwSubresourceToTransition = -1;
}

/*
==============
R_AssignNullShaderBufferView
==============
*/
void R_AssignNullShaderBufferView(GfxShaderBufferView *outView)
{
  *(_QWORD *)&outView->view = 1i64;
  outView->resource = NULL;
}

/*
==============
R_AssignNullShaderTextureRWView
==============
*/
void R_AssignNullShaderTextureRWView(GfxShaderTextureRWView *outRWView)
{
  outRWView->rwView = 4;
  outRWView->rwResource = NULL;
  outRWView->rwCounterResource = NULL;
  outRWView->rwSubresourceToTransition = -1;
}

/*
==============
R_AssignNullShaderTextureView
==============
*/
void R_AssignNullShaderTextureView(GfxShaderTextureView *outView)
{
  *(_QWORD *)&outView->view = 2i64;
  outView->resource = NULL;
}

/*
==============
R_BeginComputeConstants
==============
*/
GfxConstantBufferDesc *R_BeginComputeConstants(GfxConstantBufferDesc *result, ComputeCmdBufState *state, int index, unsigned int size)
{
  __int64 computeContextType; 
  __int64 v8; 
  const GfxBackEndData *data; 
  __int64 v10; 
  unsigned int v11; 
  unsigned __int32 v12; 
  __int64 v13; 
  GfxConstantBufferDesc v15; 
  GfxConstantBufferDesc cbDesc; 
  GfxConstantBufferDesc resulta; 

  computeContextType = (unsigned int)state->computeContextType;
  if ( (_DWORD)computeContextType == 3 )
  {
    v15 = *R_AllocateConstantBufferBegin(&resulta, state, CBUFFER_GFXCOMPUTE, size);
    cbDesc = v15;
    R_HW_SetComputeConstantBuffer(state, index, &cbDesc);
  }
  else
  {
    v8 = computeContextType;
    data = state->data;
    v10 = (__int64)&data->compute.contextData[v8];
    v11 = (size + 63) & 0xFFFFFFC0;
    if ( (((_BYTE)(v8 * 9192) + (_BYTE)data - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &data->compute.contextData[v8]) )
      __debugbreak();
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, v11);
    v13 = *(unsigned int *)(v10 + 64);
    if ( *(_DWORD *)v10 > (int)v13 )
      Sys_Error((const ObfuscateErrorText)&stru_1443C8020, v13, (unsigned int)state->computeContextType);
    v15.bufferData = (void *)(*(_QWORD *)(v10 + 32) + v12);
    v15.bufferSize = v11;
    R_HW_SetComputeConstantBuffer(state, index, &v15);
  }
  *result = v15;
  return result;
}

/*
==============
R_ClearComputeCmdList
==============
*/
void R_ClearComputeCmdList(ComputeCmdList *list)
{
  unsigned __int8 *cmds; 
  __int64 v3; 

  if ( !list->cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1510, ASSERT_TYPE_ASSERT, "(list->cmds)", (const char *)&queryFormat, "list->cmds") )
    __debugbreak();
  cmds = list->cmds;
  v3 = 35i64;
  list->used = 140;
  list->headsOffset = 0;
  do
  {
    *(_DWORD *)cmds = 0xFFFFFF;
    cmds += 4;
    --v3;
  }
  while ( v3 );
}

/*
==============
R_ComputeCheckReserveDescriptorHeaps
==============
*/
bool R_ComputeCheckReserveDescriptorHeaps(ComputeCmdBufState *state)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4538, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  return state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX || R_CheckReserveDescriptorHeaps(state->descState);
}

/*
==============
R_ComputeWaitForCompute
==============
*/
void R_ComputeWaitForCompute(ComputeCmdBufState *state, PipeFlushMode pipeFlushMode)
{
  GfxDevice *device; 
  __int64 v6; 
  __int128 v7; 

  device = state->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4408, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( pipeFlushMode == PIPE_FLUSH_FULL )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v7 = _XMM0;
    v6 = 1i64;
  }
  else
  {
    if ( pipeFlushMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4434, ASSERT_TYPE_ASSERT, "(pipeFlushMode == PIPE_FLUSH_PARTIAL)", (const char *)&queryFormat, "pipeFlushMode == PIPE_FLUSH_PARTIAL") )
      __debugbreak();
    v6 = 2i64;
    *(_QWORD *)&v7 = 0i64;
  }
  ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))device->m_pFunction[8].Release)(device, 1i64, &v6);
}

/*
==============
R_ComputeWaitForGraphics
==============
*/
void R_ComputeWaitForGraphics(ComputeCmdBufState *computeState, GfxCmdBufState *gfxState)
{
  GfxDevice *device; 
  GfxDevice *v5; 
  ComputeFence *p_graphicsFence; 
  volatile unsigned int *address; 
  __int64 v8; 
  __int64 v9; 

  if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4455, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
    __debugbreak();
  device = gfxState->device;
  if ( computeState->device == device )
  {
    if ( computeState->computeContextType != COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4459, ASSERT_TYPE_ASSERT, "(computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "computeState->computeContextType == COMPUTE_CONTEXT_TYPE_GFX") )
      __debugbreak();
    R_LockIfGfxImmediateContext(gfxState->device);
    ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))computeState->device->m_pFunction[22].AddRef)(computeState->device, 0x1000000i64, 0i64, 0xFFFFFFFF00i64);
  }
  else
  {
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4470, ASSERT_TYPE_ASSERT, "(gfxDevice)", (const char *)&queryFormat, "gfxDevice") )
      __debugbreak();
    if ( device != g_dx.immediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4471, ASSERT_TYPE_ASSERT, "(gfxDevice == g_dx.immediateContext)", (const char *)&queryFormat, "gfxDevice == g_dx.immediateContext") )
      __debugbreak();
    R_LockIfGfxImmediateContext(gfxState->device);
    v5 = computeState->device;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4476, ASSERT_TYPE_ASSERT, "(computeDevice)", (const char *)&queryFormat, "computeDevice") )
      __debugbreak();
    if ( !computeState->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4478, ASSERT_TYPE_ASSERT, "(computeState->data)", (const char *)&queryFormat, "computeState->data") )
      __debugbreak();
    if ( computeState->computeContextType >= (unsigned int)COMPUTE_CONTEXT_ASYNC_NUM_TYPES )
    {
      LODWORD(v9) = computeState->computeContextType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4479, ASSERT_TYPE_ASSERT, "(unsigned)( computeState->computeContextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "computeState->computeContextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v9, 2) )
        __debugbreak();
    }
    p_graphicsFence = &computeState->data->compute.contextData[computeState->computeContextType].graphicsFence;
    if ( !p_graphicsFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4481, ASSERT_TYPE_ASSERT, "(fence->address)", (const char *)&queryFormat, "fence->address") )
      __debugbreak();
    address = p_graphicsFence->address;
    v8 = p_graphicsFence->count + 1;
    p_graphicsFence->count = v8;
    ((void (__fastcall *)(GfxDevice *, volatile unsigned int *, __int64, _QWORD, _DWORD))device->m_pFunction[23].QueryInterface)(device, address, v8, 0i64, 0);
    R_FlushImmediateContext();
    ((void (__fastcall *)(GfxDevice *, volatile unsigned int *, __int64, _QWORD, int, _DWORD))v5->m_pFunction[23].Release)(v5, p_graphicsFence->address, 7i64, p_graphicsFence->count, -1, 0);
  }
  R_UnlockIfGfxImmediateContext(gfxState->device);
}

/*
==============
R_CreateComputeBuffer
==============
*/
void R_CreateComputeBuffer(unsigned int size, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initData, GfxBufferCreationContext *context, ID3D12Resource **outBuffer)
{
  D3D12_RESOURCE_FLAGS v8; 
  __int16 v11; 
  signed int v12; 
  GfxBufferCreationContext v13; 
  D3D12_RESOURCE_DESC v14; 

  v8 = D3D12_RESOURCE_FLAG_NONE;
  *(_QWORD *)&v14.Flags = 0i64;
  v14.Alignment = 0i64;
  if ( (gfxBufferType & 4) != 0 )
    v8 = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
  *(_QWORD *)&v14.Dimension = 1i64;
  v14.Width = size;
  v11 = gfxBufferType;
  v14.Height = 1;
  *(_QWORD *)&v14.DepthOrArraySize = 65537i64;
  v14.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  v14.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
  v14.Flags = v8;
  if ( (gfxBufferType & 0x20) != 0 )
    v14.Flags = v8 | 0x20000;
  v12 = (gfxBufferType & 1) + 1;
  if ( (v11 & 0x100) != 0 )
  {
    if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2255, ASSERT_TYPE_ASSERT, "(heapType == D3D12_HEAP_TYPE_DEFAULT)", (const char *)&queryFormat, "heapType == D3D12_HEAP_TYPE_DEFAULT") )
      __debugbreak();
    v12 = 3;
  }
  v13 = *context;
  R_DX12_CreateBuffer(&v14, (D3D12_HEAP_TYPE)v12, initialState, placement, initData, size, outBuffer, &v13);
}

/*
==============
R_CreateComputeBufferRWView
==============
*/
void R_CreateComputeBufferRWView(ID3D12Resource *bufferHandle, GfxDataFormat format, GfxShaderBufferRWView *outRWView, GfxBufferCreationContext *context)
{
  unsigned __int64 v7; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 
  char v9[16]; 
  unsigned __int64 v10; 

  ((void (__fastcall *)(ID3D12Resource *, char *, GfxShaderBufferRWView *, GfxBufferCreationContext *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v9, outRWView, context);
  v7 = v10;
  viewDesc.Format = R_D3D_DXGIFormatFromGfxDataFormat(format);
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  *((_OWORD *)&viewDesc.Texture3D + 1) = 0ui64;
  *(_QWORD *)&viewDesc.Texture3D.WSize = (unsigned int)(v7 / R_SizeForComputeBufferFormat(viewDesc.Format));
  R_HW_CreateUnorderedAccessView(bufferHandle, 0xFFFFFFFF, &viewDesc, outRWView);
}

/*
==============
R_CreateComputeBufferView
==============
*/
void R_CreateComputeBufferView(ID3D12Resource *bufferHandle, GfxDataFormat format, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  unsigned __int64 v7; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  char v9[16]; 
  unsigned __int64 v10; 

  ((void (__fastcall *)(ID3D12Resource *, char *, GfxShaderBufferView *, GfxBufferCreationContext *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v9, outView, context);
  v7 = v10;
  *(_QWORD *)&viewDesc.Shader4ComponentMapping = 5768i64;
  viewDesc.Format = R_D3D_DXGIFormatFromGfxDataFormat(format);
  viewDesc.Buffer.FirstElement = 0i64;
  *(_OWORD *)&viewDesc.Texture3D.ResourceMinLODClamp = (unsigned int)(v7 / R_SizeForComputeBufferFormat(viewDesc.Format));
  viewDesc.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  R_HW_CreateShaderResourceView(bufferHandle, &viewDesc, outView);
}

/*
==============
R_CreateComputeConstantBuffer
==============
*/
void R_CreateComputeConstantBuffer(unsigned int size, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initData, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v7; 

  v7 = *context;
  R_CreateComputeBuffer(size, gfxBufferType, initialState, placement, initData, &v7, outBuffer);
}

/*
==============
R_CreateComputeRawBuffer
==============
*/
void R_CreateComputeRawBuffer(unsigned int size, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *data, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v7; 

  v7 = *context;
  R_CreateComputeBuffer(size, gfxBufferType | 0x20, initialState, placement, data, &v7, outBuffer);
}

/*
==============
R_CreateComputeRawBufferRWView
==============
*/
void R_CreateComputeRawBufferRWView(ID3D12Resource *bufferHandle, GfxShaderBufferRWView *outRWView, GfxBufferCreationContext *context)
{
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 
  char v6[16]; 
  unsigned __int64 v7; 

  ((void (__fastcall *)(ID3D12Resource *, char *, GfxBufferCreationContext *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v6, context);
  *((_QWORD *)&viewDesc.Texture3D + 3) = 1i64;
  viewDesc.Format = DXGI_FORMAT_R32_TYPELESS;
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  *(_OWORD *)&viewDesc.Texture3D.WSize = (unsigned int)(v7 >> 2);
  if ( !(unsigned int)(v7 >> 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2416, ASSERT_TYPE_ASSERT, "(rwViewDesc.Buffer.NumElements > 0)", (const char *)&queryFormat, "rwViewDesc.Buffer.NumElements > 0", *(_QWORD *)&viewDesc.Format, *(_OWORD *)&viewDesc.Buffer.FirstElement, *((_OWORD *)&viewDesc.Texture3D + 1)) )
    __debugbreak();
  R_HW_CreateUnorderedAccessView(bufferHandle, 0xFFFFFFFF, &viewDesc, outRWView);
}

/*
==============
R_CreateComputeRawBufferView
==============
*/
void R_CreateComputeRawBufferView(ID3D12Resource *bufferHandle, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  char v6[16]; 
  unsigned __int64 v7; 

  ((void (__fastcall *)(ID3D12Resource *, char *, GfxBufferCreationContext *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v6, context);
  *(_QWORD *)&viewDesc.Shader4ComponentMapping = 5768i64;
  *(_QWORD *)&viewDesc.TextureCubeArray.ResourceMinLODClamp = 1i64;
  viewDesc.Format = DXGI_FORMAT_R32_TYPELESS;
  viewDesc.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  *(_QWORD *)&viewDesc.Texture3D.ResourceMinLODClamp = (unsigned int)(v7 >> 2);
  if ( !(unsigned int)(v7 >> 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2381, ASSERT_TYPE_ASSERT, "(viewDesc.Buffer.NumElements > 0)", (const char *)&queryFormat, "viewDesc.Buffer.NumElements > 0", *(_QWORD *)&viewDesc.Format, *(_QWORD *)&viewDesc.Shader4ComponentMapping, *(_OWORD *)&viewDesc.Buffer.FirstElement, *(_QWORD *)&viewDesc.TextureCubeArray.ResourceMinLODClamp) )
    __debugbreak();
  R_HW_CreateShaderResourceView(bufferHandle, &viewDesc, outView);
}

/*
==============
R_CreateComputeStructuredBuffer
==============
*/
void R_CreateComputeStructuredBuffer(unsigned int count, unsigned int stride, unsigned int gfxBufferType, D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *data, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v8; 

  v8 = *context;
  R_CreateComputeBuffer(stride * count, gfxBufferType, initialState, placement, data, &v8, outBuffer);
}

/*
==============
R_CreateComputeStructuredBufferRWViewWithFlags
==============
*/
void R_CreateComputeStructuredBufferRWViewWithFlags(ID3D12Resource *bufferHandle, unsigned int stride, GfxShaderRWViewFlags flags, GfxShaderBufferRWView *outRWView)
{
  unsigned __int64 v5; 
  ID3D12Resource *v8; 
  unsigned int freeSlot; 
  unsigned int *v10; 
  GfxBufferCreationContext v11; 
  ID3D12Resource *v12; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 
  D3D12_RESOURCE_DESC v14; 
  char v15[16]; 
  unsigned __int64 v16; 

  v5 = stride;
  ((void (__fastcall *)(ID3D12Resource *, char *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v15);
  viewDesc.Buffer.StructureByteStride = v5;
  viewDesc.Format = DXGI_FORMAT_UNKNOWN;
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  viewDesc.Buffer.NumElements = v16 / v5;
  *((_OWORD *)&viewDesc.Texture3D + 1) = 0ui64;
  if ( !viewDesc.Buffer.NumElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2487, ASSERT_TYPE_ASSERT, "(rwViewDesc.Buffer.NumElements > 0)", (const char *)&queryFormat, "rwViewDesc.Buffer.NumElements > 0") )
    __debugbreak();
  if ( (flags & 4) != 0 )
  {
    v11.objectName = "Counter buffer";
    v11.zoneName = (char *)&queryFormat.fmt + 3;
    *(_QWORD *)&v14.Dimension = 1i64;
    *(_QWORD *)&v14.Flags = 0i64;
    *(_QWORD *)&v14.DepthOrArraySize = 65537i64;
    v14.Alignment = 0i64;
    v14.Width = 4i64;
    v14.Height = 1;
    v14.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
    v14.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    R_DX12_CreateBuffer(&v14, D3D12_HEAP_TYPE_DEFAULT, D3D12_RESOURCE_STATE_COMMON, NULL, NULL, 4u, &v12, &v11);
    v8 = v12;
    R_LockDescriptorPool(&g_descriptorPools.shaderViewPool);
    freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
    if ( !g_descriptorPools.shaderViewPool.freeSlot )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
        __debugbreak();
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
    }
    v10 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
    g_descriptorPools.shaderViewPool.freeSlot = *v10;
    *v10 = 0;
    ++g_descriptorPools.shaderViewPool.handle.used;
    if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
    ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, ID3D12Resource *, D3D12_UNORDERED_ACCESS_VIEW_DESC *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].AddRef)(g_dx.d3d12device, bufferHandle, v8, &viewDesc, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
    outRWView->rwView = freeSlot;
    outRWView->rwResource = bufferHandle;
    outRWView->rwCounterResource = v8;
    outRWView->rwSubresourceToTransition = -1;
  }
  else
  {
    R_HW_CreateUnorderedAccessView(bufferHandle, 0xFFFFFFFF, &viewDesc, outRWView);
  }
}

/*
==============
R_CreateComputeStructuredBufferView
==============
*/
void R_CreateComputeStructuredBufferView(ID3D12Resource *bufferHandle, unsigned int stride, GfxShaderBufferView *outView, GfxBufferCreationContext *context)
{
  unsigned __int64 v5; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  char v8[16]; 
  unsigned __int64 v9; 

  v5 = stride;
  ((void (__fastcall *)(ID3D12Resource *, char *, GfxShaderBufferView *, GfxBufferCreationContext *))bufferHandle->m_pFunction[3].AddRef)(bufferHandle, v8, outView, context);
  *(_QWORD *)&viewDesc.Shader4ComponentMapping = 5768i64;
  *(_QWORD *)&viewDesc.TextureCubeArray.ResourceMinLODClamp = 0i64;
  viewDesc.Format = DXGI_FORMAT_UNKNOWN;
  viewDesc.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  viewDesc.Buffer.NumElements = v9 / v5;
  viewDesc.Buffer.StructureByteStride = v5;
  if ( !viewDesc.Buffer.NumElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2458, ASSERT_TYPE_ASSERT, "(viewDesc.Buffer.NumElements > 0)", (const char *)&queryFormat, "viewDesc.Buffer.NumElements > 0", *(_QWORD *)&viewDesc.Format, *(_QWORD *)&viewDesc.Shader4ComponentMapping, *(_OWORD *)&viewDesc.Buffer.FirstElement, *(_QWORD *)&viewDesc.TextureCubeArray.ResourceMinLODClamp) )
    __debugbreak();
  R_HW_CreateShaderResourceView(bufferHandle, &viewDesc, outView);
}

/*
==============
R_DestroyComputeBuffer
==============
*/
void R_DestroyComputeBuffer(ID3D12Resource **buffer)
{
  if ( *buffer )
    R_DestroyBuffer(buffer);
}

/*
==============
R_Dispatch
==============
*/
void R_Dispatch(ComputeCmdBufState *state, unsigned int xCount, unsigned int yCount, unsigned int zCount)
{
  GfxDevice *device; 
  unsigned int *m_pCurrent; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  R_PreDispatch(state);
  if ( !xCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4101, ASSERT_TYPE_ASSERT, "(xCount > 0)", (const char *)&queryFormat, "xCount > 0") )
    __debugbreak();
  if ( !yCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4102, ASSERT_TYPE_ASSERT, "(yCount > 0)", (const char *)&queryFormat, "yCount > 0") )
    __debugbreak();
  if ( !zCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4103, ASSERT_TYPE_ASSERT, "(zCount > 0)", (const char *)&queryFormat, "zCount > 0") )
    __debugbreak();
  Profile_Begin(250);
  device = state->device;
  m_pCurrent = device->m_Putter.m_pCurrent;
  if ( m_pCurrent >= device->m_Putter.m_pLimit_Draw )
  {
    ((void (__fastcall *)(GfxDevice *, _QWORD, _QWORD, _QWORD))device->m_pFunction[4].Release)(device, xCount, yCount, zCount);
  }
  else
  {
    *m_pCurrent = 1073923072;
    m_pCurrent[1] = xCount;
    m_pCurrent[2] = yCount;
    m_pCurrent[3] = zCount;
    device->m_Putter.m_pCurrent = m_pCurrent + 4;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DispatchComputeCmd
==============
*/
void R_DispatchComputeCmd(const void *const cmdInfo)
{
  GfxBackEndData *v1; 
  ComputeContextType computeContextType; 
  const _GUID **p_endFenceData; 
  GfxDevice *device; 
  __int64 v5; 

  v1 = *(GfxBackEndData **)cmdInfo;
  if ( !*(_QWORD *)cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1432, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !v1->compute.smpEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1433, ASSERT_TYPE_ASSERT, "(data->compute.smpEnabled)", (const char *)&queryFormat, "data->compute.smpEnabled") )
    __debugbreak();
  if ( !v1->compute.asyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1434, ASSERT_TYPE_ASSERT, "(data->compute.asyncEnabled)", (const char *)&queryFormat, "data->compute.asyncEnabled") )
    __debugbreak();
  R_PrepareExecuteCompute(v1, s_computeCmdBufState.device, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND);
  R_InitComputeCmdBufState(&s_computeCmdBufState, v1, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND);
  R_ResetConstantBuffer(v1, s_computeCmdBufState.device, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND);
  R_UGB_UploadPagesCompute(&s_computeCmdBufState, v1);
  R_ExecuteComputeCmdList(&s_computeCmdBufState, &v1->compute.cmdListData);
  if ( !s_computeCmdBufState.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1300, ASSERT_TYPE_ASSERT, "(state->data)", (const char *)&queryFormat, "state->data") )
    __debugbreak();
  if ( !s_computeCmdBufState.data->compute.asyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1301, ASSERT_TYPE_ASSERT, "(state->data->compute.asyncEnabled)", (const char *)&queryFormat, "state->data->compute.asyncEnabled") )
    __debugbreak();
  computeContextType = s_computeCmdBufState.computeContextType;
  if ( s_computeCmdBufState.computeContextType >= (unsigned int)COMPUTE_CONTEXT_ASYNC_NUM_TYPES )
  {
    LODWORD(v5) = s_computeCmdBufState.computeContextType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1303, ASSERT_TYPE_ASSERT, "(unsigned)( state->computeContextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "state->computeContextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
    computeContextType = s_computeCmdBufState.computeContextType;
  }
  p_endFenceData = (const _GUID **)&s_computeCmdBufState.data->compute.contextData[computeContextType].endFenceData;
  if ( !*p_endFenceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1307, ASSERT_TYPE_ASSERT, "(context->endFenceData)", (const char *)&queryFormat, "context->endFenceData") )
    __debugbreak();
  device = s_computeCmdBufState.device;
  if ( !s_computeCmdBufState.device )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1308, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
      __debugbreak();
    device = s_computeCmdBufState.device;
  }
  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))device->m_pFunction[22].AddRef)(device, 145408i64, 0i64, 0xFFFFFFFF00i64);
  s_computeCmdBufState.device->m_pFunction[23].QueryInterface(s_computeCmdBufState.device, *p_endFenceData, (void **)1);
  if ( s_computeCmdBufState.computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_ShutdownGfxComputeCmdBufState(&s_computeCmdBufState);
    R_UnlockIfGfxImmediateContext(s_computeCmdBufState.device);
  }
  else
  {
    R_FlushAsyncCompute(&s_computeCmdBufState);
    R_ShutdownDescriptorHeapInfoState(s_computeCmdBufState.descState);
    s_computeCmdBufState.descState = NULL;
  }
  if ( !v1->compute.cmdPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1460, ASSERT_TYPE_ASSERT, "(data->compute.cmdPending)", (const char *)&queryFormat, "data->compute.cmdPending") )
    __debugbreak();
  v1->compute.cmdPending = 0;
}

/*
==============
R_DispatchIndirect
==============
*/
void R_DispatchIndirect(ComputeCmdBufState *state, ID3D12Resource *buffer, unsigned int offset)
{
  __int64 v3; 
  __int64 v6; 
  bool v7; 
  GfxCommandSignatureType v8; 
  ID3D12CommandSignature *CommandSignature; 
  __int64 v10; 

  v3 = offset;
  R_PreDispatch(state);
  Profile_Begin(250);
  v6 = ((__int64 (__fastcall *)(ID3D12Resource *))buffer->m_pFunction[3].Release)(buffer);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    if ( (v6 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4051, ASSERT_TYPE_ASSERT, "((bufferAddress & 0x7) == 0)", "%s\n\tDrawIndirect base address ( %lx ) must be 8 byte aligned", "(bufferAddress & 0x7) == 0", v6) )
      __debugbreak();
    if ( (v3 & 3) != 0 )
    {
      LODWORD(v10) = v3;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4052, ASSERT_TYPE_ASSERT, "((offset & 0x3) == 0)", "%s\n\tDrawIndirect offset ( %x ) must be 4 byte aligned", "(offset & 0x3) == 0", v10);
      goto LABEL_12;
    }
  }
  else
  {
    if ( (v6 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4056, ASSERT_TYPE_ASSERT, "((bufferAddress & 0x1F) == 0)", "%s\n\tDrawIndirect base address ( %lx ) must be 8 byte aligned", "(bufferAddress & 0x1F) == 0", v6) )
      __debugbreak();
    if ( (v3 & 0x1F) != 0 )
    {
      LODWORD(v10) = v3;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4057, ASSERT_TYPE_ASSERT, "((offset & 0x1F) == 0)", "%s\n\tDrawIndirect offset ( %x ) must be 32 byte aligned when dispatched from async compute pipe", "(offset & 0x1F) == 0", v10);
LABEL_12:
      if ( v7 )
        __debugbreak();
    }
  }
  if ( state->commandSignatureType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4063, ASSERT_TYPE_ASSERT, "(state->commandSignatureType == GFX_COMMAND_SIGNATURE_INVALID)", "%s\n\tDispatchIndirect currently only supports simple signature dispatches ( NumArgumentDescs of 1 ). \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t More complex ones need to be implemented with additional support for async due to  D3D12_INDIRECT_ARGUMENT_TYPE_DISPATCH_L2 limitations", "state->commandSignatureType == GFX_COMMAND_SIGNATURE_INVALID") )
    __debugbreak();
  v8 = (state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX) + 3;
  state->commandSignatureType = v8;
  CommandSignature = R_GetCommandSignature(v8);
  ((void (__fastcall *)(GfxDevice *, ID3D12CommandSignature *, __int64, ID3D12Resource *, __int64, _QWORD, _QWORD))state->device->m_pFunction[19].Release)(state->device, CommandSignature, 1i64, buffer, v3, 0i64, 0i64);
  state->commandSignatureType = GFX_COMMAND_SIGNATURE_INVALID;
  Profile_EndInternal(NULL);
}

/*
==============
R_EndAsyncComputeFrame
==============
*/
void R_EndAsyncComputeFrame(ComputeCmdBufState *state)
{
  const _GUID **p_endFenceData; 
  __int64 v3; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1299, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1300, ASSERT_TYPE_ASSERT, "(state->data)", (const char *)&queryFormat, "state->data") )
    __debugbreak();
  if ( !state->data->compute.asyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1301, ASSERT_TYPE_ASSERT, "(state->data->compute.asyncEnabled)", (const char *)&queryFormat, "state->data->compute.asyncEnabled") )
    __debugbreak();
  if ( state->computeContextType >= (unsigned int)COMPUTE_CONTEXT_ASYNC_NUM_TYPES )
  {
    LODWORD(v3) = state->computeContextType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1303, ASSERT_TYPE_ASSERT, "(unsigned)( state->computeContextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "state->computeContextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
  }
  p_endFenceData = (const _GUID **)&state->data->compute.contextData[state->computeContextType].endFenceData;
  if ( !*p_endFenceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1307, ASSERT_TYPE_ASSERT, "(context->endFenceData)", (const char *)&queryFormat, "context->endFenceData") )
    __debugbreak();
  if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1308, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 145408i64, 0i64, 0xFFFFFFFF00i64);
  state->device->m_pFunction[23].QueryInterface(state->device, *p_endFenceData, (void **)1);
}

/*
==============
R_EndComputeConstants
==============
*/
void R_EndComputeConstants(ComputeCmdBufState *state, const GfxConstantBufferDesc *cbDesc)
{
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_AllocateConstantBufferEnd(state, cbDesc);
}

/*
==============
R_ExecuteComputeCmdList
==============
*/
void R_ExecuteComputeCmdList(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list)
{
  __int64 headsOffset; 

  if ( list->used )
  {
    Profile_Begin(252);
    headsOffset = list->headsOffset;
    if ( ((int)headsOffset < 0 || (int)headsOffset > list->used - 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 949, ASSERT_TYPE_ASSERT, "( 0 ) <= ( headsOffset ) && ( headsOffset ) <= ( list->used - static_cast< int >( sizeof( ComputeCmdHeader ) ) )", "headsOffset not in [0, list->used - static_cast< int >( sizeof( ComputeCmdHeader ) )]\n\t%i not in [%i, %i]", list->headsOffset, 0i64, list->used - 8) )
      __debugbreak();
    R_ExecuteComputeCmdListInternal(cmdBufState, list, (const volatile int *)&list->cmds[headsOffset]);
    Profile_EndInternal(NULL);
  }
}

/*
==============
R_ExecuteComputeCmdListInternal
==============
*/
void R_ExecuteComputeCmdListInternal(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, const volatile int *heads)
{
  const volatile int *v4; 
  char v7; 
  unsigned int i; 
  int v9; 
  GfxDevice *device; 
  const ComputeCmdHeader *v11; 
  GfxDevice *v12; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18[4]; 
  __int64 v19; 
  __int128 v20; 
  unsigned __int8 *cmds; 

  v4 = heads;
  if ( computeLock[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 706, ASSERT_TYPE_ASSERT, "(computeLock == 0)", (const char *)&queryFormat, "computeLock == 0") )
    __debugbreak();
  if ( ((unsigned __int8)computeLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", computeLock) )
    __debugbreak();
  _InterlockedIncrement(computeLock);
  if ( list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 709, ASSERT_TYPE_ASSERT, "(!list->inExecute)", (const char *)&queryFormat, "!list->inExecute") )
    __debugbreak();
  cmds = list->cmds;
  list->inExecute = 1;
  Sys_ProfBeginNamedEvent(0xFF808080, "exec compute cmds");
  R_ProfBeginNamedEvent(cmdBufState, "compute cmds");
  v7 = 0;
  for ( i = 0; i < 0x23; ++i )
  {
    if ( s_computeCmdPauseTypes[i] <= 1 )
      v7 = 1;
    v9 = v4[i] & 0xFFFFFF;
    if ( v9 != 0xFFFFFF )
    {
      if ( v7 )
      {
        if ( s_computeCmdPauseTypes[i] )
        {
          device = cmdBufState->device;
          if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4408, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
            __debugbreak();
          if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
            __debugbreak();
          v18[0] = 2i64;
          v18[1] = 0i64;
          ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))device->m_pFunction[8].Release)(device, 1i64, v18);
        }
        else
        {
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_FULL);
        }
        v7 = 0;
      }
      if ( v9 > list->used - 8 )
      {
        LODWORD(v17) = list->used - 8;
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 760, ASSERT_TYPE_ASSERT, "( 0 ) <= ( headerOffset ) && ( headerOffset ) <= ( list->used - static_cast< int >( sizeof( ComputeCmdHeader ) ) )", "headerOffset not in [0, list->used - static_cast< int >( sizeof( ComputeCmdHeader ) )]\n\t%i not in [%i, %i]", v15, 0i64, v17) )
          __debugbreak();
      }
      v11 = (const ComputeCmdHeader *)&cmds[v9];
      if ( cmdBufState->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
      {
        if ( cmdBufState->wavesTotal )
        {
          cmdBufState->wavesTotal = 0;
          cmdBufState->computeLimitsDirty = 1;
        }
        if ( cmdBufState->threadGroupsPerCu )
        {
          cmdBufState->threadGroupsPerCu = 0;
          cmdBufState->computeLimitsDirty = 1;
        }
        if ( cmdBufState->lockThresholdWavesTotal )
        {
          cmdBufState->lockThresholdWavesTotal = 0;
          cmdBufState->computeLimitsDirty = 1;
        }
      }
      Sys_ProfBeginNamedEvent(0xFF4169E1, s_computeCmdNames[i]);
      R_ProfBeginNamedEvent(cmdBufState, s_computeCmdNames[i]);
      if ( cmdBufState->computeContextType != COMPUTE_CONTEXT_TYPE_GFX && !R_CheckReserveDescriptorHeaps(cmdBufState->descState) )
        Sys_Error((const ObfuscateErrorText)&stru_1443C5C90);
      switch ( i )
      {
        case 0u:
          R_ExecuteReflectionProbeFilteringComputeCmds(cmdBufState, list, COMPUTECMD_REFLECTION_PROBE_FILTERING, v11);
          break;
        case 1u:
          R_ReflectionProbeCompression_ExecuteComputeCmds(cmdBufState, list, COMPUTECMD_REFLECTION_PROBE_COMPRESS, v11);
          break;
        case 2u:
          R_ExecuteBspTessFactorsComputeCmds(cmdBufState, list, COMPUTECMD_BSP_TESS_FACTORS, v11);
          break;
        case 3u:
          R_ExecuteMayhemChannelsComputeCmds(cmdBufState, list, COMPUTECMD_MAYHEM_CHANNELS, v11);
          break;
        case 4u:
          R_ExecuteSkinningComputeCmds(cmdBufState, list, COMPUTECMD_SKINNING, v11);
          break;
        case 5u:
          R_ExecuteReactiveMotionCalcComputeCmds(cmdBufState, list, COMPUTECMD_REACTIVEMOTION_CALC, v11);
          break;
        case 6u:
          R_ExecuteReactiveMotionSimComputeCmds(cmdBufState, list, COMPUTECMD_REACTIVEMOTION_SIM, v11);
          break;
        case 7u:
          R_RuntimeCompression_ExecuteCompressionComputeCmds(cmdBufState, list, COMPUTECMD_COMPRESS_TEXTURE, v11);
          break;
        case 8u:
          R_RuntimeCompression_ExecuteMipgenComputeCmds(cmdBufState, list, COMPUTECMD_GENERATE_MIPS, v11);
          break;
        case 9u:
          R_ExecuteRigidSubdivComputeCmds(cmdBufState, list, COMPUTECMD_RIGID_SUBDIV, v11);
          break;
        case 0xAu:
          R_ExecuteSubdivTransferSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_TRANSFER_SKINNED, v11);
          break;
        case 0xBu:
          R_ExecuteSubdivTessFactorsComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_TESS_FACTORS, v11, 0);
          break;
        case 0xCu:
          R_ExecuteSubdivTransitionPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_TRANSITION_POINTS_SKINNED, v11, 0);
          break;
        case 0xDu:
          R_ExecuteSubdivFacePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_FACE_POINTS_SKINNED, v11, 0);
          break;
        case 0xEu:
          R_ExecuteSubdivEdgePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_EDGE_POINTS_SKINNED, v11, 0);
          break;
        case 0xFu:
          R_ExecuteSubdivVertexPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_VERTEX_POINTS_SKINNED, v11, 0);
          break;
        case 0x10u:
          R_ExecuteSubdivNormalSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV0_NORMALS_SKINNED, v11, 0);
          break;
        case 0x11u:
          R_ExecuteSubdivTessFactorsComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_TESS_FACTORS, v11, 1);
          break;
        case 0x12u:
          R_ExecuteSubdivTransitionPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_TRANSITION_POINTS_SKINNED, v11, 1);
          break;
        case 0x13u:
          R_ExecuteSubdivFacePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_FACE_POINTS_SKINNED, v11, 1);
          break;
        case 0x14u:
          R_ExecuteSubdivEdgePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_EDGE_POINTS_SKINNED, v11, 1);
          break;
        case 0x15u:
          R_ExecuteSubdivVertexPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_VERTEX_POINTS_SKINNED, v11, 1);
          break;
        case 0x16u:
          R_ExecuteSubdivNormalSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV1_NORMALS_SKINNED, v11, 1);
          break;
        case 0x17u:
          R_ExecuteSubdivTessFactorsComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_TESS_FACTORS, v11, 2);
          break;
        case 0x18u:
          R_ExecuteSubdivTransitionPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_TRANSITION_POINTS_SKINNED, v11, 2);
          break;
        case 0x19u:
          R_ExecuteSubdivFacePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_FACE_POINTS_SKINNED, v11, 2);
          break;
        case 0x1Au:
          R_ExecuteSubdivEdgePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_EDGE_POINTS_SKINNED, v11, 2);
          break;
        case 0x1Bu:
          R_ExecuteSubdivVertexPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_VERTEX_POINTS_SKINNED, v11, 2);
          break;
        case 0x1Cu:
          R_ExecuteSubdivNormalSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV2_NORMALS_SKINNED, v11, 2);
          break;
        case 0x1Du:
          R_ExecuteSubdivTessFactorsComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_TESS_FACTORS, v11, 3);
          break;
        case 0x1Eu:
          R_ExecuteSubdivTransitionPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_TRANSITION_POINTS_SKINNED, v11, 3);
          break;
        case 0x1Fu:
          R_ExecuteSubdivFacePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_FACE_POINTS_SKINNED, v11, 3);
          break;
        case 0x20u:
          R_ExecuteSubdivEdgePointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_EDGE_POINTS_SKINNED, v11, 3);
          break;
        case 0x21u:
          R_ExecuteSubdivVertexPointSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_VERTEX_POINTS_SKINNED, v11, 3);
          break;
        case 0x22u:
          R_ExecuteSubdivNormalSkinnedComputeCmds(cmdBufState, list, COMPUTECMD_SUBDIV_LV3_NORMALS_SKINNED, v11, 3);
          break;
        default:
          LODWORD(v16) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 911, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled compute command type %s (%d)", s_computeCmdNames[i], v16) )
            __debugbreak();
          break;
      }
      R_ProfEndNamedEvent(cmdBufState);
      Sys_ProfEndNamedEvent();
      v4 = heads;
    }
  }
  v12 = cmdBufState->device;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4408, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  m_pFunction = v12->m_pFunction;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v19 = 1i64;
  v20 = _XMM0;
  ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))m_pFunction[8].Release)(v12, 1i64, &v19);
  R_ProfEndNamedEvent(cmdBufState);
  Sys_ProfEndNamedEvent();
  list->inExecute = 0;
  if ( computeLock[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 931, ASSERT_TYPE_ASSERT, "(computeLock == 1)", (const char *)&queryFormat, "computeLock == 1") )
    __debugbreak();
  if ( ((unsigned __int64)computeLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", computeLock) )
    __debugbreak();
  _InterlockedDecrement(computeLock);
}

/*
==============
R_FinishComputeCmdList
==============
*/
void R_FinishComputeCmdList(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxCmdBufState *v4; 
  ComputeCmdBufState state; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1361, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1362, ASSERT_TYPE_ASSERT, "(data == backEndData)", (const char *)&queryFormat, "data == backEndData") )
    __debugbreak();
  R_LockGfxImmediateContext();
  R_GPU_BeginTimer(GPU_TIMER_COMPUTE_CMDS);
  if ( data->compute.smpEnabled )
  {
    if ( data->compute.asyncEnabled )
      goto LABEL_12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1382, ASSERT_TYPE_ASSERT, "(data->compute.asyncEnabled)", "%s\n\tR_DispatchComputeCmd should only run when async pipe submission is enabled!", "data->compute.asyncEnabled") )
      __debugbreak();
    if ( data->compute.asyncEnabled )
LABEL_12:
      R_WaitAsyncComputeGPU(gfxContext->state, data, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND, 1);
  }
  else
  {
    v4 = gfxContext->state;
    R_PrepareExecuteCompute((GfxBackEndData *)data, v4->device, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND);
    R_ResetConstantBuffer((GfxBackEndData *)data, v4->device, COMPUTE_CONTEXT_TYPE_ASYNC_FRONTEND);
    R_InitGfxComputeCmdBufState(&state, v4);
    R_UGB_UploadPagesCompute(&state, data);
    R_ExecuteComputeCmdList(&state, &data->compute.cmdListData);
    if ( state.computeContextType != COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1773, ASSERT_TYPE_ASSERT, "(state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX") )
      __debugbreak();
    if ( !state.device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1776, ASSERT_TYPE_ASSERT, "(gfxDevice)", (const char *)&queryFormat, "gfxDevice") )
      __debugbreak();
  }
  R_GPU_EndTimer();
  R_UnlockGfxImmediateContext();
}

/*
==============
R_FinishFrontendComputeCmdList
==============
*/
void R_FinishFrontendComputeCmdList(void)
{
  GfxBackEndData *v0; 
  GfxBackEndData *data; 

  if ( !frontEndDataOut->compute.cmdList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1471, ASSERT_TYPE_ASSERT, "(frontEndDataOut->compute.cmdList)", (const char *)&queryFormat, "frontEndDataOut->compute.cmdList") )
    __debugbreak();
  frontEndDataOut->compute.cmdList = NULL;
  v0 = frontEndDataOut;
  if ( frontEndDataOut->compute.smpEnabled )
  {
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_END_FRONTEND);
    if ( frontEndDataOut->compute.cmdPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1479, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->compute.cmdPending)", (const char *)&queryFormat, "!frontEndDataOut->compute.cmdPending") )
      __debugbreak();
    frontEndDataOut->compute.cmdPending = 1;
    data = frontEndDataOut;
    Sys_AddWorkerCmd(WRKCMD_END_FRONTEND, &data);
    v0 = frontEndDataOut;
  }
  v0->computeReady = 1;
}

/*
==============
R_FlushAsyncCompute
==============
*/
void R_FlushAsyncCompute(ComputeCmdBufState *state)
{
  char *v2; 
  GfxDevice *device; 
  __int64 v4; 
  __int64 v5; 
  ComputeContextType computeContextType; 
  GfxDevice *v7; 
  unsigned int *p_computeQueueIndex; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1250, ASSERT_TYPE_ASSERT, "(state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX") )
    __debugbreak();
  if ( !state->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1251, ASSERT_TYPE_ASSERT, "(state->data)", (const char *)&queryFormat, "state->data") )
    __debugbreak();
  if ( !state->data->compute.asyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1252, ASSERT_TYPE_ASSERT, "(state->data->compute.asyncEnabled)", (const char *)&queryFormat, "state->data->compute.asyncEnabled") )
    __debugbreak();
  if ( state->computeContextType >= (unsigned int)COMPUTE_CONTEXT_ASYNC_NUM_TYPES )
  {
    LODWORD(v10) = state->computeContextType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( state->computeContextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "state->computeContextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  v2 = (char *)state->data + 9192 * (unsigned int)state->computeContextType;
  if ( !*((_QWORD *)v2 + 1676) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1256, ASSERT_TYPE_ASSERT, "(context->computeFence.address)", (const char *)&queryFormat, "context->computeFence.address") )
    __debugbreak();
  device = state->device;
  v4 = *((_QWORD *)v2 + 1676);
  v5 = (unsigned int)(*((_DWORD *)v2 + 3354) + 1);
  *((_DWORD *)v2 + 3354) = v5;
  ((void (__fastcall *)(GfxDevice *, __int64, __int64, _QWORD, _DWORD))device->m_pFunction[23].QueryInterface)(device, v4, v5, 0i64, 0);
  computeContextType = state->computeContextType;
  Profile_Begin(251);
  Sys_ProfBeginNamedEvent(0xFF4169E1, "flush compute");
  if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_FlushImmediateContext();
    state->device = g_dx.immediateContext;
  }
  else
  {
    v7 = state->device;
    p_computeQueueIndex = &state->data->compute.contextData[state->computeContextType].computeQueueIndex;
    v9 = *p_computeQueueIndex;
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = *p_computeQueueIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4224, ASSERT_TYPE_ASSERT, "(unsigned)( computeQueueIndex ) < (unsigned)( ( sizeof( *array_counter( g_dx.computeCommandQueue ) ) + 0 ) )", "computeQueueIndex doesn't index ARRAY_COUNT( g_dx.computeCommandQueue )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !R_IsLockedIfGfxImmediateContext(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    if ( v7 != g_dx.computeCommandList[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4228, ASSERT_TYPE_ASSERT, "(device == g_dx.computeCommandList[computeQueueIndex])", (const char *)&queryFormat, "device == g_dx.computeCommandList[computeQueueIndex]") )
      __debugbreak();
    R_FlushComputeCommandList(v9);
    state->device = (GfxDevice *)g_dx.computeCommandList[*p_computeQueueIndex];
    R_RebindDescriptorState(state);
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_FlushCompute
==============
*/
void R_FlushCompute(ComputeCmdBufState *state)
{
  ComputeContextType computeContextType; 
  GfxDevice *device; 
  unsigned int *p_computeQueueIndex; 
  __int64 v5; 

  computeContextType = state->computeContextType;
  Profile_Begin(251);
  Sys_ProfBeginNamedEvent(0xFF4169E1, "flush compute");
  if ( computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_FlushImmediateContext();
    state->device = g_dx.immediateContext;
  }
  else
  {
    device = state->device;
    p_computeQueueIndex = &state->data->compute.contextData[state->computeContextType].computeQueueIndex;
    v5 = *p_computeQueueIndex;
    if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4224, ASSERT_TYPE_ASSERT, "(unsigned)( computeQueueIndex ) < (unsigned)( ( sizeof( *array_counter( g_dx.computeCommandQueue ) ) + 0 ) )", "computeQueueIndex doesn't index ARRAY_COUNT( g_dx.computeCommandQueue )\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
    if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    if ( device != g_dx.computeCommandList[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4228, ASSERT_TYPE_ASSERT, "(device == g_dx.computeCommandList[computeQueueIndex])", (const char *)&queryFormat, "device == g_dx.computeCommandList[computeQueueIndex]") )
      __debugbreak();
    R_FlushComputeCommandList(v5);
    state->device = (GfxDevice *)g_dx.computeCommandList[*p_computeQueueIndex];
    R_RebindDescriptorState(state);
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_GetCUMask
==============
*/
__int64 R_GetCUMask(GfxCUMaskMode mode)
{
  return 0i64;
}

/*
==============
R_GetComputeCmdData
==============
*/
unsigned __int8 *R_GetComputeCmdData(const ComputeCmdList *list, const ComputeCmdHeader *header)
{
  __int64 dataOffset; 
  __int64 v6; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 430, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( !list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 432, ASSERT_TYPE_ASSERT, "(list->inExecute)", (const char *)&queryFormat, "list->inExecute") )
    __debugbreak();
  dataOffset = header->dataOffset;
  if ( (int)dataOffset < 0 || (int)dataOffset > list->used )
  {
    LODWORD(v6) = dataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 437, ASSERT_TYPE_ASSERT, "( 0 ) <= ( dataOffset ) && ( dataOffset ) <= ( list->used )", "dataOffset not in [0, list->used]\n\t%i not in [%i, %i]", v6, 0i64, list->used) )
      __debugbreak();
  }
  return &list->cmds[dataOffset];
}

/*
==============
R_GetComputeHWUnitCnt
==============
*/
void R_GetComputeHWUnitCnt(unsigned int *SIMDcnt, unsigned int *CUcnt, unsigned int *SHcnt)
{
  *SIMDcnt = 4;
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    *CUcnt = 10;
    *SHcnt = 4;
  }
  else
  {
    *CUcnt = 6;
    *SHcnt = 2;
  }
}

/*
==============
R_GetGfxComputeCmdBufState
==============
*/
GfxCmdBufState *R_GetGfxComputeCmdBufState(GfxCmdBufState *state)
{
  if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1728, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
    __debugbreak();
  return state;
}

/*
==============
R_GfxComputeWaitForGraphics
==============
*/
void R_GfxComputeWaitForGraphics(GfxCmdBufState *state)
{
  R_LockIfGfxImmediateContext(state->device);
  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x1000000i64, 0i64, 0xFFFFFFFF00i64);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_InitComputeCmdBufState
==============
*/
void R_InitComputeCmdBufState(ComputeCmdBufState *state, GfxBackEndData *data, ComputeContextType contextType)
{
  __int64 v3; 
  char *v8; 
  GfxDevice *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  GfxCmdBufContext result; 

  v3 = (unsigned int)contextType;
  if ( contextType == COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1543, ASSERT_TYPE_ASSERT, "(contextType != COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "contextType != COMPUTE_CONTEXT_TYPE_GFX") )
    __debugbreak();
  state->commandSignatureType = GFX_COMMAND_SIGNATURE_INVALID;
  if ( data->compute.asyncEnabled )
  {
    state->pipelineState = NULL;
    state->simdWalk = COMPUTECMD_SIMD_WALK_DEFAULT;
    state->resourceTransitionCount = 0;
    state->resourceTransitionLabelCount = 0;
    state->resourceTransitionDispatchOrDraw = 0;
    state->computeShader = NULL;
    state->device = NULL;
    state->data = data;
    if ( (unsigned int)v3 >= 2 )
    {
      v12 = 2;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1568, ASSERT_TYPE_ASSERT, "(unsigned)( contextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "contextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    state->computeContextType = v3;
    v8 = (char *)data + 9192 * v3;
    v9 = (GfxDevice *)g_dx.computeCommandList[*((unsigned int *)v8 + 3348)];
    state->descState = (GfxDescriptorState *)(v8 + 4328);
    state->device = v9;
    R_InitDescriptorState((GfxDescriptorState *)(v8 + 4328));
    if ( *((_DWORD *)v8 + 3348) >= 2u )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = *((_DWORD *)v8 + 3348);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1591, ASSERT_TYPE_ASSERT, "(unsigned)( contextData->computeQueueIndex ) < (unsigned)( ( sizeof( *array_counter( data->computeDescHeapInfo ) ) + 0 ) )", "contextData->computeQueueIndex doesn't index ARRAY_COUNT( data->computeDescHeapInfo )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    R_InitDescriptorHeapInfoState(state->descState, &data->computeDescHeapInfo[*((unsigned int *)v8 + 3348)]);
    if ( !R_CheckReserveDescriptorHeaps(state->descState) )
      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, *((unsigned int *)v8 + 3348));
    if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
    {
      state->simdWalk = COMPUTECMD_SIMD_WALK_DEFAULT;
      *(_QWORD *)&state->wavesTotal = 0i64;
      state->lockThresholdWavesTotal = 0;
      state->computeLimitsDirty = 0;
    }
  }
  else
  {
    R_LockGfxImmediateContext();
    if ( data != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1552, ASSERT_TYPE_ASSERT, "(data == backEndData)", (const char *)&queryFormat, "data == backEndData") )
      __debugbreak();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
    __asm { vpextrq rdx, xmm0, 1; refGfxState }
    R_InitGfxComputeCmdBufState(state, _RDX);
  }
}

/*
==============
R_InitComputeCmdBufState
==============
*/
void R_InitComputeCmdBufState(ComputeCmdBufState *state, GfxCmdBufState *gfxState, GfxBackEndData *data, ComputeContextType contextType)
{
  if ( contextType != COMPUTE_CONTEXT_TYPE_GFX )
    goto LABEL_5;
  if ( !gfxState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1524, ASSERT_TYPE_ASSERT, "(!(contextType == COMPUTE_CONTEXT_TYPE_GFX && gfxState == nullptr))", "%s\n\tCan't create GFX context without explicit GfxCmdBufState.", "!(contextType == COMPUTE_CONTEXT_TYPE_GFX && gfxState == nullptr)") )
      __debugbreak();
LABEL_5:
    R_InitComputeCmdBufState(state, data, contextType);
    return;
  }
  R_InitGfxComputeCmdBufState(state, gfxState);
}

/*
==============
R_InitComputeCmdList
==============
*/
void R_InitComputeCmdList(ComputeCmdList *list, unsigned __int8 *cmds, int size)
{
  if ( size >= 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1496, ASSERT_TYPE_ASSERT, "(size < 0x00ffffff)", (const char *)&queryFormat, "size < INVALID_COMPUTECMD_OFFSET") )
    __debugbreak();
  list->cmds = cmds;
  list->size = size;
  list->used = 0;
  list->headsOffset = 0xFFFFFF;
}

/*
==============
R_InitGfxComputeCmdBufState
==============
*/
void R_InitGfxComputeCmdBufState(ComputeCmdBufState *state, const GfxCmdBufState *refGfxState)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1739, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !refGfxState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1740, ASSERT_TYPE_ASSERT, "(refGfxState)", (const char *)&queryFormat, "refGfxState") )
    __debugbreak();
  if ( !refGfxState->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1741, ASSERT_TYPE_ASSERT, "(refGfxState->device)", (const char *)&queryFormat, "refGfxState->device") )
    __debugbreak();
  state->device = refGfxState->device;
  state->pipelineState = NULL;
  state->simdWalk = COMPUTECMD_SIMD_WALK_DEFAULT;
  state->resourceTransitionCount = 0;
  state->resourceTransitionLabelCount = 0;
  state->resourceTransitionDispatchOrDraw = 0;
  state->computeShader = NULL;
  state->data = backEndData;
  state->computeContextType = COMPUTE_CONTEXT_TYPE_GFX;
  if ( !refGfxState->descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1758, ASSERT_TYPE_ASSERT, "(refGfxState->descState)", (const char *)&queryFormat, "refGfxState->descState") )
    __debugbreak();
  state->descState = refGfxState->descState;
  state->commandSignatureType = GFX_COMMAND_SIGNATURE_INVALID;
  if ( !refGfxState->constantBufferAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1764, ASSERT_TYPE_ASSERT, "(refGfxState->constantBufferAllocations)", (const char *)&queryFormat, "refGfxState->constantBufferAllocations") )
    __debugbreak();
  state->constantBufferAllocations = refGfxState->constantBufferAllocations;
}

/*
==============
R_NextComputeCmdOfSameType
==============
*/
const ComputeCmdHeader *R_NextComputeCmdOfSameType(const ComputeCmdList *list, const ComputeCmdHeader *header)
{
  __int64 nextOfSameType; 
  __int64 v6; 

  if ( !list && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 681, ASSERT_TYPE_ASSERT, "(list)", (const char *)&queryFormat, "list") )
    __debugbreak();
  if ( !list->inExecute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 683, ASSERT_TYPE_ASSERT, "(list->inExecute)", (const char *)&queryFormat, "list->inExecute") )
    __debugbreak();
  nextOfSameType = header->nextOfSameType;
  if ( (_DWORD)nextOfSameType == 0xFFFFFF )
    return 0i64;
  if ( (int)nextOfSameType < 0 || (int)nextOfSameType > list->used - 8 )
  {
    LODWORD(v6) = nextOfSameType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 691, ASSERT_TYPE_ASSERT, "( 0 ) <= ( nextHeaderOffset ) && ( nextHeaderOffset ) <= ( list->used - static_cast< int >( sizeof( ComputeCmdHeader ) ) )", "nextHeaderOffset not in [0, list->used - static_cast< int >( sizeof( ComputeCmdHeader ) )]\n\t%i not in [%i, %i]", v6, 0i64, list->used - 8) )
      __debugbreak();
  }
  return (const ComputeCmdHeader *)&list->cmds[nextOfSameType];
}

/*
==============
R_PreDispatch
==============
*/
void R_PreDispatch(ComputeCmdBufState *state)
{
  GfxDescriptorState *descState; 
  int v3; 
  GfxDevice *device; 
  unsigned int *m_pCurrent; 
  ID3D12PipelineState *derivedCS; 
  unsigned int v7; 
  GfxDevice *v8; 
  int v9[4]; 
  __int64 v10; 

  descState = state->descState;
  state->resourceTransitionDispatchOrDraw = 1;
  if ( descState->rootSignatureType != COMPUTE_DEFAULT_ROOT_SIGNATURE )
  {
    descState->rootSignatureDirty = 1;
    descState->rootSignatureType = COMPUTE_DEFAULT_ROOT_SIGNATURE;
    descState = state->descState;
  }
  if ( descState->rootSignatureDirty )
    goto LABEL_8;
  v3 = 511;
  if ( descState->rootSignatureType == COMPUTE_DEFAULT_ROOT_SIGNATURE )
    v3 = 7680;
  if ( (v3 & descState->dirtyDescriptorRangeMask) != 0 || descState->anyCbDescsDirty )
LABEL_8:
    R_FlushDescriptorStateInternal(state->device, descState);
  if ( !state->computeShader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3999, ASSERT_TYPE_ASSERT, "(state->computeShader)", (const char *)&queryFormat, "state->computeShader") )
    __debugbreak();
  if ( !state->computeShader->prog.cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4000, ASSERT_TYPE_ASSERT, "(state->computeShader->prog.cs)", (const char *)&queryFormat, "state->computeShader->prog.cs") )
    __debugbreak();
  if ( !state->computeShader->prog.derivedCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 4002, ASSERT_TYPE_ASSERT, "(state->computeShader->prog.derivedCS)", (const char *)&queryFormat, "state->computeShader->prog.derivedCS") )
    __debugbreak();
  device = state->device;
  m_pCurrent = device->m_Putter.m_pCurrent;
  derivedCS = state->computeShader->prog.derivedCS;
  if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
  {
    ((void (__fastcall *)(GfxDevice *, ID3D12PipelineState *))device->m_pFunction[8].AddRef)(device, derivedCS);
  }
  else
  {
    *(_OWORD *)m_pCurrent = *(_OWORD *)derivedCS->m_Packet.Descriptor.Data;
    *((_QWORD *)m_pCurrent + 2) = derivedCS->m_Packet.Oword[1].m128i_i64[0];
    device->m_Putter.m_pCurrent = m_pCurrent + 6;
  }
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX && state->computeLimitsDirty )
  {
    v7 = 480;
    if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
      v7 = 1600;
    if ( state->wavesTotal > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 585, ASSERT_TYPE_ASSERT, "(state->wavesTotal <= waveLimit)", (const char *)&queryFormat, "state->wavesTotal <= waveLimit") )
      __debugbreak();
    if ( state->threadGroupsPerCu > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 586, ASSERT_TYPE_ASSERT, "(state->threadGroupsPerCu <= threadGroupsPerCuLimit)", (const char *)&queryFormat, "state->threadGroupsPerCu <= threadGroupsPerCuLimit") )
      __debugbreak();
    if ( state->lockThresholdWavesTotal > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 587, ASSERT_TYPE_ASSERT, "(state->lockThresholdWavesTotal <= lockThresholdLimit)", (const char *)&queryFormat, "state->lockThresholdWavesTotal <= lockThresholdLimit") )
      __debugbreak();
    v8 = state->device;
    v9[0] = 0;
    v10 = 0i64;
    v9[1] = state->wavesTotal;
    v9[2] = state->threadGroupsPerCu;
    v9[3] = state->lockThresholdWavesTotal;
    ((void (__fastcall *)(GfxDevice *, int *))v8->m_pFunction[32].QueryInterface)(v8, v9);
    state->computeLimitsDirty = 0;
  }
}

/*
==============
R_PrepareExecuteCompute
==============
*/
void R_PrepareExecuteCompute(GfxBackEndData *data, GfxDevice *device, ComputeContextType contextType)
{
  __int64 v3; 
  char *v5; 
  unsigned int v6; 
  bool v7; 
  unsigned int v8; 
  bool v9; 

  v3 = (unsigned int)contextType;
  if ( (unsigned int)contextType >= COMPUTE_CONTEXT_ASYNC_NUM_TYPES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1168, ASSERT_TYPE_ASSERT, "(unsigned)( contextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "contextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", contextType, 2) )
    __debugbreak();
  v5 = (char *)data + 9192 * v3;
  R_WaitAsyncComputeFence(data, (ComputeContextType)v3, 0);
  v6 = *((_DWORD *)v5 + 3354);
  if ( !*((_QWORD *)v5 + 1676) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 162, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( v6 > *((_DWORD *)v5 + 3354) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 163, ASSERT_TYPE_ASSERT, "(step <= count)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "step <= count") )
    __debugbreak();
  if ( **((_DWORD **)v5 + 1676) < v6 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1192, ASSERT_TYPE_ASSERT, "(!context->computeFence.IsPending())", (const char *)&queryFormat, "!context->computeFence.IsPending()");
  }
  else
  {
    if ( **((_DWORD **)v5 + 1676) <= *((_DWORD *)v5 + 3354) )
      goto LABEL_16;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 171, ASSERT_TYPE_ASSERT, "(*address <= count)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*address <= count");
  }
  if ( v7 )
    __debugbreak();
LABEL_16:
  if ( !*((_QWORD *)v5 + 1676) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  **((_DWORD **)v5 + 1676) = 0;
  *((_DWORD *)v5 + 3354) = 0;
  v8 = *((_DWORD *)v5 + 3358);
  if ( !*((_QWORD *)v5 + 1678) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 162, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( v8 > *((_DWORD *)v5 + 3358) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 163, ASSERT_TYPE_ASSERT, "(step <= count)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "step <= count") )
    __debugbreak();
  if ( **((_DWORD **)v5 + 1678) < v8 )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1195, ASSERT_TYPE_ASSERT, "(!context->graphicsFence.IsPending())", (const char *)&queryFormat, "!context->graphicsFence.IsPending()");
  }
  else
  {
    if ( **((_DWORD **)v5 + 1678) <= *((_DWORD *)v5 + 3358) )
      goto LABEL_31;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 171, ASSERT_TYPE_ASSERT, "(*address <= count)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*address <= count");
  }
  if ( v9 )
    __debugbreak();
LABEL_31:
  if ( !*((_QWORD *)v5 + 1678) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  **((_DWORD **)v5 + 1678) = 0;
  *((_DWORD *)v5 + 3358) = 0;
}

/*
==============
R_ReleaseShaderBufferRWView
==============
*/
void R_ReleaseShaderBufferRWView(GfxShaderBufferRWView *rwView)
{
  ID3D12Resource *rwCounterResource; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 

  R_ReleaseDescriptor(&g_descriptorPools.shaderViewPool, rwView->rwView);
  rwCounterResource = rwView->rwCounterResource;
  if ( rwCounterResource )
  {
    rwView->rwCounterResource = NULL;
    v3 = rwCounterResource->m_pFunction->Release(rwCounterResource);
    if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
    {
      if ( v3 )
      {
        v5 = v3;
        v4 = 2600;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", v4, "rwView->rwCounterResource", v5) )
          __debugbreak();
      }
    }
  }
  rwView->rwView = 3;
  rwView->rwResource = NULL;
  rwView->rwCounterResource = NULL;
  rwView->rwSubresourceToTransition = -1;
}

/*
==============
R_ReleaseShaderBufferView
==============
*/
void R_ReleaseShaderBufferView(GfxShaderBufferView *view)
{
  R_ReleaseDescriptor(&g_descriptorPools.shaderViewPool, view->view);
  *(_QWORD *)&view->view = 1i64;
  view->resource = NULL;
}

/*
==============
R_ReleaseShaderTextureRWView
==============
*/
void R_ReleaseShaderTextureRWView(GfxShaderTextureRWView *rwView)
{
  if ( rwView->rwCounterResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 2615, ASSERT_TYPE_ASSERT, "(rwView->rwCounterResource == nullptr)", (const char *)&queryFormat, "rwView->rwCounterResource == nullptr") )
    __debugbreak();
  R_ReleaseDescriptor(&g_descriptorPools.shaderViewPool, rwView->rwView);
  rwView->rwView = 4;
  rwView->rwResource = NULL;
  rwView->rwCounterResource = NULL;
  rwView->rwSubresourceToTransition = -1;
}

/*
==============
R_ReleaseShaderTextureView
==============
*/
void R_ReleaseShaderTextureView(GfxShaderTextureView *view)
{
  R_ReleaseDescriptor(&g_descriptorPools.shaderViewPool, view->view);
  *(_QWORD *)&view->view = 2i64;
  view->resource = NULL;
}

/*
==============
R_ResetComputeCUMask
==============
*/
void R_ResetComputeCUMask(ComputeCmdBufState *state)
{
  ;
}

/*
==============
R_ResetConstantBuffer
==============
*/
void R_ResetConstantBuffer(GfxBackEndData *data, GfxDevice *device, ComputeContextType contextType)
{
  ComputeContextData *v4; 
  __int64 constantBufferSize; 
  void *v6; 

  v4 = &data->compute.contextData[contextType];
  v4->constantBuffer.used = 0;
  R_LockIfGfxImmediateContext(device);
  constantBufferSize = v4->constantBufferSize;
  v6 = v4->constantBuffer.wrappedBuffer.data;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 420, ASSERT_TYPE_ASSERT, "(baseAddress != ((D3D12_GPU_VIRTUAL_ADDRESS)0))", (const char *)&queryFormat, "baseAddress != D3D12_GPU_VIRTUAL_ADDRESS_NULL") )
    __debugbreak();
  if ( !constantBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 421, ASSERT_TYPE_ASSERT, "(sizeInBytes)", (const char *)&queryFormat, "sizeInBytes") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, __int64, void *, unsigned __int64))device->m_pFunction[22].AddRef)(device, 0x8000000i64, v6, (constantBufferSize + 255) & 0xFFFFFFFFFFFFFF00ui64);
  R_UnlockIfGfxImmediateContext(device);
}

/*
==============
R_SetComputeCUMask
==============
*/
void R_SetComputeCUMask(ComputeCmdBufState *computeState, unsigned int cuMask)
{
  ;
}

/*
==============
R_SetComputeConstantBuffers
==============
*/
void R_SetComputeConstantBuffers(ComputeCmdBufState *state, int startIndex, int count, ID3D12Resource *const *const buffers)
{
  __int64 v6; 
  __int64 v7; 
  ID3D12Resource *v9; 
  GfxConstantBufferDesc cbDesc; 
  char v11[16]; 
  unsigned __int64 val; 

  if ( count > 0 )
  {
    v6 = 0i64;
    v7 = count;
    do
    {
      v9 = buffers[v6];
      ((void (__fastcall *)(ID3D12Resource *, char *))v9->m_pFunction[3].AddRef)(v9, v11);
      cbDesc.bufferData = (void *)((__int64 (__fastcall *)(ID3D12Resource *))v9->m_pFunction[3].Release)(v9);
      cbDesc.bufferSize = truncate_cast<unsigned int,unsigned __int64>(val);
      R_HW_SetComputeConstantBuffer(state, startIndex++, &cbDesc);
      ++v6;
    }
    while ( v6 < v7 );
  }
}

/*
==============
R_SetComputeLimitsAbsolute
==============
*/
void R_SetComputeLimitsAbsolute(ComputeCmdBufState *state, ComputeCmdSIMDWalkType simdWalk, unsigned int wavesTotal, unsigned int threadGroupsPerCu, unsigned int lockThresholdTotal)
{
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
  {
    if ( wavesTotal != state->wavesTotal )
    {
      state->wavesTotal = wavesTotal;
      state->computeLimitsDirty = 1;
    }
    if ( threadGroupsPerCu != state->threadGroupsPerCu )
    {
      state->threadGroupsPerCu = threadGroupsPerCu;
      state->computeLimitsDirty = 1;
    }
    if ( lockThresholdTotal != state->lockThresholdWavesTotal )
    {
      state->lockThresholdWavesTotal = lockThresholdTotal;
      state->computeLimitsDirty = 1;
    }
  }
}

/*
==============
R_SetComputeLimitsPerCU
==============
*/
void R_SetComputeLimitsPerCU(ComputeCmdBufState *state, ComputeCmdSIMDWalkType simdWalk, unsigned int wavesPerCU, unsigned int threadGroupsPerCu, unsigned int lockThresholdPerCU)
{
  XB3ConsoleType XB3ConsoleType; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 

  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v9 = 48;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v9 = 160;
  v10 = v9;
  v11 = lockThresholdPerCU * v9;
  v12 = wavesPerCU * v10;
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
  {
    if ( v12 != state->wavesTotal )
    {
      state->wavesTotal = v12;
      state->computeLimitsDirty = 1;
    }
    if ( threadGroupsPerCu != state->threadGroupsPerCu )
    {
      state->threadGroupsPerCu = threadGroupsPerCu;
      state->computeLimitsDirty = 1;
    }
    if ( v11 != state->lockThresholdWavesTotal )
    {
      state->lockThresholdWavesTotal = v11;
      state->computeLimitsDirty = 1;
    }
  }
}

/*
==============
R_SetComputeRWTextures
==============
*/
void R_SetComputeRWTextures(ComputeCmdBufState *state, int startIndex, int count, const GfxTexture *const *textures)
{
  GfxDescriptorState *descState; 
  __int64 v6; 
  __int64 v8; 
  const GfxTexture *v9; 
  __int64 v10; 
  __int64 v11; 

  descState = state->descState;
  v6 = (unsigned int)count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 614, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( (unsigned int)startIndex >= 0xA )
  {
    LODWORD(v10) = startIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 615, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex ) < (unsigned)( 10 )", "startIndex doesn't index R_MAX_COMPUTE_RW_VIEWS\n\t%i not in [0, %i)", v10, 10) )
      __debugbreak();
  }
  if ( (unsigned int)(startIndex + v6 - 1) >= 0xA )
  {
    LODWORD(v11) = 10;
    LODWORD(v10) = startIndex + v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 616, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex + count - 1 ) < (unsigned)( 10 )", "startIndex + count - 1 doesn't index R_MAX_COMPUTE_RW_VIEWS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( (int)v6 > 0 )
  {
    v8 = v6;
    do
    {
      v9 = *textures;
      if ( *textures )
      {
        if ( (unsigned int)startIndex >= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 523, ASSERT_TYPE_ASSERT, "(index < 40)", (const char *)&queryFormat, "index < MAX_DESCRIPTOR_RANGE_SIZE") )
          __debugbreak();
        R_SetDescriptorInRange(descState, COMPUTE_UAV_RANGE, startIndex, v9->shaderRWView.rwView);
      }
      else
      {
        R_ClearDescriptorRangeSlots(descState, COMPUTE_UAV_RANGE, startIndex, 1u);
      }
      ++startIndex;
      ++textures;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
R_SetComputeRWViewsWithCounters
==============
*/
void R_SetComputeRWViewsWithCounters(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderBufferRWView *const *views, const unsigned int *initialCounts)
{
  GfxDevice *device; 
  __int64 v6; 
  __int64 i; 
  const GfxShaderBufferRWView *v11; 
  GfxDescriptorState *descState; 
  const unsigned int *v13; 
  __int64 v14; 
  unsigned int v15; 
  const GfxShaderBufferRWView *v16; 
  __int64 v17; 
  GfxDevice *v18; 

  device = state->device;
  v6 = count;
  v18 = device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3706, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( (int)v6 > 0 )
  {
    for ( i = 0i64; i < v6; ++i )
    {
      v11 = views[i];
      descState = state->descState;
      if ( (unsigned int)startIndex >= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 523, ASSERT_TYPE_ASSERT, "(index < 40)", (const char *)&queryFormat, "index < MAX_DESCRIPTOR_RANGE_SIZE") )
        __debugbreak();
      R_SetDescriptorInRange(descState, COMPUTE_UAV_RANGE, startIndex++, v11->rwView);
    }
    LODWORD(v6) = count;
    device = v18;
  }
  v13 = initialCounts;
  if ( initialCounts && (int)v6 > 0 )
  {
    v14 = (unsigned int)v6;
    do
    {
      if ( !*views && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3717, ASSERT_TYPE_ASSERT, "(views[resourceIndex])", (const char *)&queryFormat, "views[resourceIndex]") )
        __debugbreak();
      if ( !(*views)->rwCounterResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3718, ASSERT_TYPE_ASSERT, "(views[resourceIndex]->rwCounterResource)", (const char *)&queryFormat, "views[resourceIndex]->rwCounterResource") )
        __debugbreak();
      v15 = *v13;
      if ( *v13 != -1 )
      {
        v16 = *views;
        if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 448, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
          __debugbreak();
        if ( !v16->rwCounterResource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 449, ASSERT_TYPE_ASSERT, "(rwView.rwCounterResource)", (const char *)&queryFormat, "rwView.rwCounterResource") )
          __debugbreak();
        if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
          __debugbreak();
        v17 = ((__int64 (__fastcall *)(ID3D12Resource *))v16->rwCounterResource->m_pFunction[3].Release)(v16->rwCounterResource);
        ((void (__fastcall *)(GfxDevice *, __int64, __int64, _QWORD, _DWORD))device->m_pFunction[20].AddRef)(device, v17, 4i64, v15, 0);
      }
      ++v13;
      ++views;
      --v14;
    }
    while ( v14 );
  }
}

/*
==============
R_SetComputeShader
==============
*/
void R_SetComputeShader(ComputeCmdBufState *state, const ComputeShader *computeShader)
{
  if ( !computeShader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3842, ASSERT_TYPE_ASSERT, "(computeShader)", (const char *)&queryFormat, "computeShader") )
    __debugbreak();
  if ( !computeShader->prog.cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3851, ASSERT_TYPE_ASSERT, "(computeShader->prog.cs)", (const char *)&queryFormat, "computeShader->prog.cs") )
    __debugbreak();
  if ( !computeShader->prog.derivedCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3852, ASSERT_TYPE_ASSERT, "(computeShader->prog.derivedCS)", (const char *)&queryFormat, "computeShader->prog.derivedCS") )
    __debugbreak();
  R_ProfSetMarker(state, computeShader->debugName);
  state->computeShader = computeShader;
}

/*
==============
R_SetComputeTextureRWViews
==============
*/
void R_SetComputeTextureRWViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderTextureRWView *const *views)
{
  GfxDescriptorState *descState; 
  __int64 v6; 
  __int64 v8; 
  const GfxShaderTextureRWView *v9; 
  __int64 v10; 
  __int64 v11; 

  descState = state->descState;
  v6 = (unsigned int)count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 590, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( (unsigned int)startIndex >= 0xA )
  {
    LODWORD(v10) = startIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 591, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex ) < (unsigned)( 10 )", "startIndex doesn't index R_MAX_COMPUTE_RW_VIEWS\n\t%i not in [0, %i)", v10, 10) )
      __debugbreak();
  }
  if ( (unsigned int)(startIndex + v6 - 1) >= 0xA )
  {
    LODWORD(v11) = 10;
    LODWORD(v10) = startIndex + v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 592, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex + count - 1 ) < (unsigned)( 10 )", "startIndex + count - 1 doesn't index R_MAX_COMPUTE_RW_VIEWS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( (int)v6 > 0 )
  {
    v8 = v6;
    do
    {
      v9 = *views;
      if ( *views )
      {
        if ( (unsigned int)startIndex >= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 523, ASSERT_TYPE_ASSERT, "(index < 40)", (const char *)&queryFormat, "index < MAX_DESCRIPTOR_RANGE_SIZE") )
          __debugbreak();
        R_SetDescriptorInRange(descState, COMPUTE_UAV_RANGE, startIndex, v9->rwView);
      }
      else
      {
        R_ClearDescriptorRangeSlots(descState, COMPUTE_UAV_RANGE, startIndex, 1u);
      }
      ++startIndex;
      ++views;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
R_SetComputeTextureViews
==============
*/
void R_SetComputeTextureViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderTextureView *const *views)
{
  GfxDescriptorState *descState; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  descState = state->descState;
  v6 = (unsigned int)count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 540, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( !views && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 541, ASSERT_TYPE_ASSERT, "(views)", (const char *)&queryFormat, "views") )
    __debugbreak();
  if ( (unsigned int)startIndex >= 0x24 )
  {
    LODWORD(v8) = startIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 542, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex ) < (unsigned)( 36 )", "startIndex doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, 36) )
      __debugbreak();
  }
  if ( (unsigned int)(startIndex + v6 - 1) >= 0x24 )
  {
    LODWORD(v9) = 36;
    LODWORD(v8) = startIndex + v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 543, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex + count - 1 ) < (unsigned)( 36 )", "startIndex + count - 1 doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (int)v6 > 0 )
  {
    do
    {
      if ( *views )
        R_SetDescriptorInRange(descState, COMPUTE_SRV_RANGE, startIndex, (*views)->view);
      else
        R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, startIndex, 1u);
      ++startIndex;
      ++views;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
R_SetComputeTextures
==============
*/
void R_SetComputeTextures(ComputeCmdBufState *state, int startIndex, int count, const GfxTexture *const *textures)
{
  GfxDescriptorState *descState; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  descState = state->descState;
  v6 = (unsigned int)count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 565, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( !textures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 566, ASSERT_TYPE_ASSERT, "(textures)", (const char *)&queryFormat, "textures") )
    __debugbreak();
  if ( (unsigned int)startIndex >= 0x24 )
  {
    LODWORD(v8) = startIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 567, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex ) < (unsigned)( 36 )", "startIndex doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, 36) )
      __debugbreak();
  }
  if ( (unsigned int)(startIndex + v6 - 1) >= 0x24 )
  {
    LODWORD(v9) = 36;
    LODWORD(v8) = startIndex + v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 568, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex + count - 1 ) < (unsigned)( 36 )", "startIndex + count - 1 doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (int)v6 > 0 )
  {
    do
    {
      if ( *textures )
        R_SetDescriptorInRange(descState, COMPUTE_SRV_RANGE, startIndex, (*textures)->shaderView.view);
      else
        R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, startIndex, 1u);
      ++startIndex;
      ++textures;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
R_SetComputeViewWithOffset
==============
*/
void R_SetComputeViewWithOffset(ComputeCmdBufState *state, int startIndex, unsigned __int8 *buffer, unsigned int bufferOffset, unsigned int stride, const GfxShaderBufferView *view, ID3D12Resource *resource)
{
  GfxDescriptorState *descState; 
  unsigned __int64 v13; 
  __int64 v16; 
  unsigned __int64 v17; 
  int v18[4]; 
  __int64 v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  char v24[64]; 
  unsigned int descriptor; 

  if ( view->view <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3670, ASSERT_TYPE_ASSERT, "(!view.IsNull())", (const char *)&queryFormat, "!view.IsNull()") )
    __debugbreak();
  if ( (bufferOffset & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 3671, ASSERT_TYPE_ASSERT, "(( bufferOffset & ( ( 64 ) - 1 ) ) == 0)", (const char *)&queryFormat, "( bufferOffset & ( GFX_RESOURCE_VIEW_OFFSET_ALIGNMENT - 1 ) ) == 0") )
    __debugbreak();
  _XMM0 = *view;
  descState = state->descState;
  __asm { vpextrd rcx, xmm0, 2 }
  descriptor = _RCX;
  v13 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + (unsigned int)(g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (_RCX + g_descriptorPools.shaderViewPool.handle.startSlot));
  _YMM2 = *(__m256i *)((__int64 (__fastcall *)(char *, ID3D12Resource *))resource->m_pFunction[5].QueryInterface)(v24, resource);
  v18[3] = 0;
  v23 = 0;
  __asm { vextractf128 xmm0, ymm2, 1 }
  v16 = bufferOffset / stride;
  if ( bufferOffset % stride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 474, ASSERT_TYPE_ASSERT, "(offset % stride == 0)", (const char *)&queryFormat, "offset % stride == 0") )
    __debugbreak();
  v17 = (unsigned __int64)_XMM0 / stride;
  if ( (unsigned __int64)_XMM0 % stride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 475, ASSERT_TYPE_ASSERT, "(width % stride == 0)", (const char *)&queryFormat, "width % stride == 0") )
    __debugbreak();
  if ( (unsigned int)v16 >= (unsigned int)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 480, ASSERT_TYPE_ASSERT, "(firstElement < numElements)", (const char *)&queryFormat, "firstElement < numElements") )
    __debugbreak();
  v18[1] = 1;
  v18[0] = 0;
  v22 = 0;
  v18[2] = 5768;
  v19 = v16;
  v20 = v17 - v16;
  v21 = stride;
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, int *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].QueryInterface)(g_dx.d3d12device, resource, v18, v13);
  R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, startIndex, 1u);
  R_SetDescriptorInRange(descState, COMPUTE_SRV_RANGE, startIndex, descriptor);
}

/*
==============
R_SetComputeViews
==============
*/
void R_SetComputeViews(ComputeCmdBufState *state, int startIndex, int count, const GfxShaderBufferView *const *views)
{
  GfxDescriptorState *descState; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  int v10; 

  descState = state->descState;
  v6 = (unsigned int)count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 501, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( (unsigned int)startIndex >= 0x24 )
  {
    v10 = 36;
    LODWORD(v8) = startIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex ) < (unsigned)( 36 )", "startIndex doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)(startIndex + v6 - 1) >= 0x24 )
  {
    LODWORD(v9) = 36;
    LODWORD(v8) = startIndex + v6 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 503, ASSERT_TYPE_ASSERT, "(unsigned)( startIndex + count - 1 ) < (unsigned)( 36 )", "startIndex + count - 1 doesn't index R_MAX_COMPUTE_VIEWS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (int)v6 > 0 )
  {
    do
    {
      if ( *views )
        R_SetDescriptorInRange(descState, COMPUTE_SRV_RANGE, startIndex, (*views)->view);
      else
        R_ClearDescriptorRangeSlots(descState, COMPUTE_SRV_RANGE, startIndex, 1u);
      ++startIndex;
      ++views;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
R_ShutdownComputeCmdBufState
==============
*/
void R_ShutdownComputeCmdBufState(ComputeCmdBufState *state)
{
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_ShutdownGfxComputeCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    R_FlushAsyncCompute(state);
    R_ShutdownDescriptorHeapInfoState(state->descState);
    state->descState = NULL;
  }
}

/*
==============
R_ShutdownGfxComputeCmdBufState
==============
*/
void R_ShutdownGfxComputeCmdBufState(ComputeCmdBufState *state)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1772, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1773, ASSERT_TYPE_ASSERT, "(state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX") )
    __debugbreak();
  if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1776, ASSERT_TYPE_ASSERT, "(gfxDevice)", (const char *)&queryFormat, "gfxDevice") )
    __debugbreak();
}

/*
==============
R_SizeForComputeBufferFormat
==============
*/
__int64 R_SizeForComputeBufferFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
    case DXGI_FORMAT_R32G32B32A32_UINT:
      result = 16i64;
      break;
    case DXGI_FORMAT_R32G32B32_FLOAT:
      result = 12i64;
      break;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UINT:
    case DXGI_FORMAT_R32G32_FLOAT:
    case DXGI_FORMAT_R32G32_UINT:
      result = 8i64;
      break;
    case DXGI_FORMAT_R11G11B10_FLOAT:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_R16G16_UINT:
    case DXGI_FORMAT_R32_FLOAT:
    case DXGI_FORMAT_R32_UINT:
      result = 4i64;
      break;
    case DXGI_FORMAT_R16_FLOAT:
    case DXGI_FORMAT_R16_UINT:
      result = 2i64;
      break;
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_R8_UINT:
      result = 1i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1830, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled format") )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
R_UploadAndSetComputeConstants
==============
*/
void R_UploadAndSetComputeConstants(ComputeCmdBufState *state, int index, const void *data, unsigned int size)
{
  __int64 computeContextType; 
  size_t v8; 
  GfxConstantBufferDesc v9; 
  __int64 v10; 
  const GfxBackEndData *v11; 
  __int64 v12; 
  unsigned __int32 v13; 
  __int64 v14; 
  GfxConstantBufferDesc v15; 
  GfxConstantBufferDesc cbDesc; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  computeContextType = (unsigned int)state->computeContextType;
  v8 = size;
  if ( (_DWORD)computeContextType == 3 )
  {
    v9 = *R_AllocateConstantBufferBegin(&result, state, CBUFFER_GFXCOMPUTE, size);
    cbDesc = v9;
    R_HW_SetComputeConstantBuffer(state, index, &cbDesc);
  }
  else
  {
    v10 = computeContextType;
    v11 = state->data;
    v12 = (__int64)&v11->compute.contextData[v10];
    if ( (((_BYTE)(v10 * 9192) + (_BYTE)v11 - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v11->compute.contextData[v10]) )
      __debugbreak();
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v12, (v8 + 63) & 0xFFFFFFC0);
    v14 = *(unsigned int *)(v12 + 64);
    if ( *(_DWORD *)v12 > (int)v14 )
      Sys_Error((const ObfuscateErrorText)&stru_1443C8020, v14, (unsigned int)state->computeContextType);
    v15.bufferData = (void *)(*(_QWORD *)(v12 + 32) + v13);
    v15.bufferSize = (v8 + 63) & 0xFFFFFFC0;
    R_HW_SetComputeConstantBuffer(state, index, &v15);
    v9 = v15;
  }
  cbuff = v9;
  memcpy_0(v9.bufferData, data, v8);
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_AllocateConstantBufferEnd(state, &cbuff);
}

/*
==============
R_WaitAsyncCompute
==============
*/
void R_WaitAsyncCompute(GfxCmdBufState *gfxState, const GfxBackEndData *data, ComputeContextType contextType, int done)
{
  if ( data->compute.asyncEnabled )
    R_WaitAsyncComputeGPU(gfxState, data, contextType, done);
}

/*
==============
R_WaitAsyncComputeFence
==============
*/
void R_WaitAsyncComputeFence(GfxBackEndData *data, ComputeContextType contextType, bool errorOnTimeout)
{
  ComputeFence *p_computeFence; 
  const char *v6; 
  unsigned int v7; 
  unsigned int count; 
  unsigned int v9; 

  p_computeFence = &data->compute.contextData[contextType].computeFence;
  if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 963, ASSERT_TYPE_ASSERT, "(fence->address)", (const char *)&queryFormat, "fence->address") )
    __debugbreak();
  if ( ComputeFence::IsPending(p_computeFence) )
  {
    v6 = j_va("wait async compute fence, context[%u]", (unsigned int)contextType);
    Sys_ProfBeginNamedEvent(0xFFFFA500, v6);
    v7 = Sys_Milliseconds();
    while ( 1 )
    {
      count = p_computeFence->count;
      if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 162, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
        __debugbreak();
      if ( count > p_computeFence->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 163, ASSERT_TYPE_ASSERT, "(step <= count)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "step <= count") )
        __debugbreak();
      if ( *p_computeFence->address >= count )
        break;
      v9 = Sys_Milliseconds();
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PushUnblockDatabaseThread();
      if ( v9 < v7 || v9 - v7 > 0x3E8 )
      {
        v7 = v9;
      }
      else if ( v9 - v7 > 0x64 )
      {
        if ( errorOnTimeout )
        {
          Sys_Error((const ObfuscateErrorText)&stru_1443C7350, (unsigned int)contextType, 100i64);
        }
        else
        {
          Com_PrintError(16, "Timed out after waiting to reuse async compute buffers for %d ms.\n", 100i64);
          Sys_Sleep(2000);
        }
      }
      Sys_Sleep(1);
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PopUnblockDatabaseThread();
    }
    if ( *p_computeFence->address > p_computeFence->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 171, ASSERT_TYPE_ASSERT, "(*address <= count)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*address <= count") )
      __debugbreak();
    if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
      __debugbreak();
    *p_computeFence->address = 0;
    p_computeFence->count = 0;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
R_WaitAsyncComputeForSuspend
==============
*/
void R_WaitAsyncComputeForSuspend(GfxBackEndData *data)
{
  unsigned int v1; 
  ComputeFence *p_computeFence; 
  const char *v3; 
  unsigned int v4; 
  unsigned int count; 
  unsigned int v6; 

  v1 = 0;
  p_computeFence = &data->compute.contextData[0].computeFence;
  do
  {
    if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 963, ASSERT_TYPE_ASSERT, "(fence->address)", (const char *)&queryFormat, "fence->address") )
      __debugbreak();
    if ( ComputeFence::IsPending(p_computeFence) )
    {
      v3 = j_va("wait async compute fence, context[%u]", v1);
      Sys_ProfBeginNamedEvent(0xFFFFA500, v3);
      v4 = Sys_Milliseconds();
      while ( 1 )
      {
        count = p_computeFence->count;
        if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 162, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
          __debugbreak();
        if ( count > p_computeFence->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 163, ASSERT_TYPE_ASSERT, "(step <= count)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "step <= count") )
          __debugbreak();
        if ( *p_computeFence->address >= count )
          break;
        v6 = Sys_Milliseconds();
        if ( GetCurrentProcessorNumber() == 1 )
          Sys_PushUnblockDatabaseThread();
        if ( v6 < v4 || v6 - v4 > 0x3E8 )
        {
          v4 = v6;
        }
        else if ( v6 - v4 > 0x64 )
        {
          Sys_Error((const ObfuscateErrorText)&stru_1443C7350, v1, 100i64);
        }
        Sys_Sleep(1);
        if ( GetCurrentProcessorNumber() == 1 )
          Sys_PopUnblockDatabaseThread();
      }
      if ( *p_computeFence->address > p_computeFence->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 171, ASSERT_TYPE_ASSERT, "(*address <= count)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*address <= count") )
        __debugbreak();
      if ( !p_computeFence->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
        __debugbreak();
      *p_computeFence->address = 0;
      p_computeFence->count = 0;
      Sys_ProfEndNamedEvent();
    }
    ++v1;
    p_computeFence = (ComputeFence *)((char *)p_computeFence + 9192);
  }
  while ( v1 < 2 );
}

/*
==============
R_WaitAsyncComputeGPU
==============
*/
void R_WaitAsyncComputeGPU(GfxCmdBufState *gfxState, const GfxBackEndData *data, ComputeContextType contextType, int done)
{
  __int64 v5; 
  GfxDevice *device; 
  char *v9; 
  __int64 v10; 
  __int64 v11; 

  v5 = (unsigned int)contextType;
  if ( !data->compute.asyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1090, ASSERT_TYPE_ASSERT, "(data->compute.asyncEnabled)", (const char *)&queryFormat, "data->compute.asyncEnabled") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1091, ASSERT_TYPE_ASSERT, "(unsigned)( contextType ) < (unsigned)( COMPUTE_CONTEXT_ASYNC_NUM_TYPES )", "contextType doesn't index COMPUTE_CONTEXT_ASYNC_NUM_TYPES\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  if ( !gfxState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1093, ASSERT_TYPE_ASSERT, "(gfxState)", (const char *)&queryFormat, "gfxState") )
    __debugbreak();
  device = gfxState->device;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1095, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  R_LockIfGfxImmediateContext(device);
  R_GPU_BeginTimer(GPU_TIMER_WAIT_COMPUTE);
  R_ProfBeginNamedEvent(gfxState, "wait async compute");
  v9 = (char *)data + 9192 * v5;
  if ( done )
  {
    v10 = *((_QWORD *)v9 + 1680);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1107, ASSERT_TYPE_ASSERT, "(endFence)", (const char *)&queryFormat, "endFence") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, __int64, __int64, __int64, int, _DWORD))device->m_pFunction[23].Release)(device, v10, 3i64, 1i64, -1, 0);
    ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64, _DWORD))device->m_pFunction[23].QueryInterface)(device, v10, 0i64, 14336i64, 0);
  }
  else
  {
    if ( !*((_QWORD *)v9 + 1676) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.cpp", 1128, ASSERT_TYPE_ASSERT, "(fence->address)", (const char *)&queryFormat, "fence->address") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, _QWORD, __int64, _QWORD, int, _DWORD))device->m_pFunction[23].Release)(device, *((_QWORD *)v9 + 1676), 7i64, *((unsigned int *)v9 + 3354), -1, 0);
    ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))device->m_pFunction[22].AddRef)(device, 14336i64, 0i64, 0xFFFFFFFF00i64);
  }
  R_ProfEndNamedEvent(gfxState);
  R_GPU_EndTimer();
  R_UnlockIfGfxImmediateContext(device);
}

