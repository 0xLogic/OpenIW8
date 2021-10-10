/*
==============
R_SetupPassStateBits
==============
*/

bool __fastcall R_SetupPassStateBits(GfxCmdBufContext *context, const GfxStateBits *refStateBits)
{
  return ?R_SetupPassStateBits@@YA_NUGfxCmdBufContext@@PEBUGfxStateBits@@@Z(context, refStateBits);
}

/*
==============
R_SetupPassStableArgsInternal
==============
*/

void __fastcall R_SetupPassStableArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  ?R_SetupPassStableArgsInternal@@YAXUGfxCmdBufContext@@PEBD@Z(context, fileAndLine);
}

/*
==============
R_CanUseDepthBufferFor2D
==============
*/

bool __fastcall R_CanUseDepthBufferFor2D(GfxRenderTargetId renderTargetId)
{
  return ?R_CanUseDepthBufferFor2D@@YA_NW4GfxRenderTargetId@@@Z(renderTargetId);
}

/*
==============
R_SetDynamicIndexData
==============
*/

int __fastcall R_SetDynamicIndexData(GfxCmdBufState *state, const unsigned __int16 *indices, int triCount)
{
  return ?R_SetDynamicIndexData@@YAHPEAUGfxCmdBufState@@PEBGH@Z(state, indices, triCount);
}

/*
==============
R_SetDynamicVertexData
==============
*/

int __fastcall R_SetDynamicVertexData(GfxCmdBufState *state, const void *data, int vertexCount, int stride)
{
  return ?R_SetDynamicVertexData@@YAHPEAUGfxCmdBufState@@PEBXHH@Z(state, data, vertexCount, stride);
}

/*
==============
R_SetupPassPerObjectArgsInternal
==============
*/

void __fastcall R_SetupPassPerObjectArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  ?R_SetupPassPerObjectArgsInternal@@YAXUGfxCmdBufContext@@PEBD@Z(context, fileAndLine);
}

/*
==============
R_DynamicRingBufferAcquire
==============
*/

bool __fastcall R_DynamicRingBufferAcquire(DynamicRingBuffer *ringBuffer, int beginIndex, int endIndex)
{
  return ?R_DynamicRingBufferAcquire@@YA_NPEAUDynamicRingBuffer@@HH@Z(ringBuffer, beginIndex, endIndex);
}

/*
==============
R_DynamicRingBufferInsertFence
==============
*/

void __fastcall R_DynamicRingBufferInsertFence(DynamicRingBuffer *ringBuffer, bool force)
{
  ?R_DynamicRingBufferInsertFence@@YAXPEAUDynamicRingBuffer@@_N@Z(ringBuffer, force);
}

/*
==============
R_DynamicRingBufferInsertGivenFence
==============
*/

void __fastcall R_DynamicRingBufferInsertGivenFence(DynamicRingBuffer *ringBuffer, unsigned __int64 fence)
{
  ?R_DynamicRingBufferInsertGivenFence@@YAXPEAUDynamicRingBuffer@@_K@Z(ringBuffer, fence);
}

/*
==============
R_SetupPassPerPrimArgsInternal
==============
*/

void __fastcall R_SetupPassPerPrimArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  ?R_SetupPassPerPrimArgsInternal@@YAXUGfxCmdBufContext@@PEBD@Z(context, fileAndLine);
}

/*
==============
R_DynamicRingBufferInsertGivenFenceToAll
==============
*/

void __fastcall R_DynamicRingBufferInsertGivenFenceToAll(GfxCmdBufState *state, unsigned __int64 fence)
{
  ?R_DynamicRingBufferInsertGivenFenceToAll@@YAXPEAUGfxCmdBufState@@_K@Z(state, fence);
}

/*
==============
R_SetMaterialConstantBuffer
==============
*/

void __fastcall R_SetMaterialConstantBuffer(GfxCmdBufState *state, const Material *material)
{
  ?R_SetMaterialConstantBuffer@@YAXPEAUGfxCmdBufState@@PEBUMaterial@@@Z(state, material);
}

/*
==============
R_SetupPass
==============
*/

bool __fastcall R_SetupPass(GfxCmdBufContext *context)
{
  return ?R_SetupPass@@YA_NUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_CanUseDepthBufferFor2D
==============
*/
bool R_CanUseDepthBufferFor2D(GfxRenderTargetId renderTargetId)
{
  return 0;
}

/*
==============
R_DynamicRingBufferAcquire
==============
*/
__int64 R_DynamicRingBufferAcquire(DynamicRingBuffer *ringBuffer, int beginIndex, int endIndex)
{
  const char *v6; 
  int beginIndexReady; 
  unsigned __int8 v8; 
  int v9; 
  __int64 pendingSize; 
  unsigned __int64 (__fastcall *flushFct)(); 
  unsigned __int64 v15; 
  int pendingFencesSize; 
  int bufSize; 
  unsigned int v18; 
  bool disableFenceOnAcquire; 
  int endIndexReady; 
  int v21; 
  int v22; 
  int v23; 
  int v25; 
  char *fmt; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 

  if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( beginIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1190, ASSERT_TYPE_ASSERT, "(beginIndex >= 0)", (const char *)&queryFormat, "beginIndex >= 0") )
    __debugbreak();
  if ( beginIndex >= endIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1191, ASSERT_TYPE_ASSERT, "( beginIndex ) < ( endIndex )", "%s < %s\n\t%i, %i", "beginIndex", "endIndex", beginIndex, endIndex) )
    __debugbreak();
  if ( (unsigned int)beginIndex >= ringBuffer->bufSize )
  {
    LODWORD(v28) = ringBuffer->bufSize;
    LODWORD(v27) = beginIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1192, ASSERT_TYPE_ASSERT, "(unsigned)( beginIndex ) < (unsigned)( ringBuffer->bufSize )", "beginIndex doesn't index ringBuffer->bufSize\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  if ( endIndex > ringBuffer->bufSize )
  {
    LODWORD(v30) = ringBuffer->bufSize;
    LODWORD(v29) = endIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1193, ASSERT_TYPE_ASSERT, "( endIndex ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "endIndex", "ringBuffer->bufSize", v29, v30) )
      __debugbreak();
  }
  if ( ringBuffer->beginIndexReady >= ringBuffer->bufSize )
  {
    LODWORD(v30) = ringBuffer->bufSize;
    LODWORD(v29) = ringBuffer->beginIndexReady;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1194, ASSERT_TYPE_ASSERT, "( ringBuffer->beginIndexReady ) < ( ringBuffer->bufSize )", "%s < %s\n\t%i, %i", "ringBuffer->beginIndexReady", "ringBuffer->bufSize", v29, v30) )
      __debugbreak();
  }
  v6 = "ringBuffer->pendingFencesSize";
  if ( ringBuffer->pendingFencesSize > ringBuffer->bufSize )
  {
    LODWORD(v30) = ringBuffer->bufSize;
    LODWORD(v29) = ringBuffer->pendingFencesSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1195, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingFencesSize ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "ringBuffer->pendingFencesSize", "ringBuffer->bufSize", v29, v30) )
      __debugbreak();
  }
  if ( beginIndex || (beginIndexReady = ringBuffer->beginIndexReady, beginIndexReady <= 0) )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v8 = 1;
    v9 = ringBuffer->bufSize - beginIndexReady;
    ringBuffer->pendingSize += v9;
    ringBuffer->beginIndexReady = 0;
  }
  LODWORD(pendingSize) = ringBuffer->pendingSize;
  if ( !ringBuffer->settings.disableFenceOnAcquire )
  {
    if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    if ( !ringBuffer->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1130, ASSERT_TYPE_ASSERT, "(ringBuffer->bufSize)", (const char *)&queryFormat, "ringBuffer->bufSize") )
      __debugbreak();
    _XMM3 = LODWORD(ringBuffer->settings.fractionFlush);
    pendingSize = (unsigned int)ringBuffer->pendingSize;
    __asm
    {
      vcmpeqss xmm2, xmm3, xmm0
      vblendvps xmm4, xmm3, xmm1, xmm2
    }
    if ( (int)pendingSize >= (int)(float)((float)ringBuffer->bufSize * *(float *)&_XMM4) || v8 )
    {
      flushFct = ringBuffer->settings.flushFct;
      if ( flushFct )
      {
        v15 = ((__int64 (__fastcall *)(__int64, const char *))flushFct)(pendingSize, v6);
      }
      else
      {
        if ( ringBuffer->settings.notUsingImmediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1139, ASSERT_TYPE_ASSERT, "(!ringBuffer->settings.notUsingImmediateContext)", (const char *)&queryFormat, "!ringBuffer->settings.notUsingImmediateContext") )
          __debugbreak();
        v15 = R_KickImmediateContext(D3D12XBOX_FLUSH_NONE);
      }
      R_DynamicRingBufferInsertGivenFence(ringBuffer, v15);
      LODWORD(pendingSize) = ringBuffer->pendingSize;
    }
  }
  pendingFencesSize = ringBuffer->pendingFencesSize;
  bufSize = ringBuffer->bufSize;
  v18 = endIndex - beginIndex;
  if ( endIndex - beginIndex + pendingFencesSize + (int)pendingSize <= bufSize )
  {
LABEL_51:
    endIndexReady = ringBuffer->endIndexReady;
    goto LABEL_52;
  }
  while ( ringBuffer->writePos != ringBuffer->readPos )
  {
LABEL_50:
    R_DynamicRingBufferWaitFence(ringBuffer);
    pendingFencesSize = ringBuffer->pendingFencesSize;
    LODWORD(pendingSize) = ringBuffer->pendingSize;
    bufSize = ringBuffer->bufSize;
    if ( (int)(v18 + pendingSize + pendingFencesSize) <= bufSize )
      goto LABEL_51;
  }
  disableFenceOnAcquire = ringBuffer->settings.disableFenceOnAcquire;
  if ( !disableFenceOnAcquire || !v8 || v9 != (_DWORD)pendingSize )
  {
    LODWORD(v27) = bufSize;
    LODWORD(fmt) = pendingSize;
    Sys_Error((const ObfuscateErrorText)&stru_14443A510, ringBuffer->name, disableFenceOnAcquire, v18, fmt, v27);
    goto LABEL_50;
  }
  if ( pendingFencesSize )
  {
    LODWORD(v29) = pendingFencesSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1236, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingFencesSize ) == ( 0 )", "%s == %s\n\t%i, %i", "ringBuffer->pendingFencesSize", "0", v29, 0i64) )
      __debugbreak();
  }
  v25 = v9 + ringBuffer->endIndexReady;
  ringBuffer->pendingSize = 0;
  endIndexReady = v25 % ringBuffer->bufSize;
  ringBuffer->endIndexReady = endIndexReady;
LABEL_52:
  if ( endIndex > endIndexReady && ringBuffer->beginIndexReady < endIndexReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1273, ASSERT_TYPE_ASSERT, "(endIndex <= ringBuffer->endIndexReady || ringBuffer->beginIndexReady >= ringBuffer->endIndexReady)", (const char *)&queryFormat, "endIndex <= ringBuffer->endIndexReady || ringBuffer->beginIndexReady >= ringBuffer->endIndexReady") )
    __debugbreak();
  if ( v8 )
    ringBuffer->beginIndexReady = 0;
  v21 = ringBuffer->bufSize;
  v22 = v18 + ringBuffer->pendingSize;
  ringBuffer->pendingSize = v22;
  if ( v22 > v21 )
  {
    LODWORD(v30) = v21;
    LODWORD(v29) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1281, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingSize ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "ringBuffer->pendingSize", "ringBuffer->bufSize", v29, v30) )
      __debugbreak();
  }
  v23 = ringBuffer->bufSize;
  if ( endIndex == v23 )
    endIndex = 0;
  ringBuffer->beginIndexReady = endIndex;
  if ( endIndex >= v23 )
  {
    LODWORD(v30) = v23;
    LODWORD(v29) = endIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1283, ASSERT_TYPE_ASSERT, "( ringBuffer->beginIndexReady ) < ( ringBuffer->bufSize )", "%s < %s\n\t%i, %i", "ringBuffer->beginIndexReady", "ringBuffer->bufSize", v29, v30) )
      __debugbreak();
  }
  return v8;
}

/*
==============
R_DynamicRingBufferInsertFence
==============
*/
void R_DynamicRingBufferInsertFence(DynamicRingBuffer *ringBuffer, bool force)
{
  __int64 (*flushFct)(void); 
  unsigned __int64 v8; 

  if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( !ringBuffer->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1130, ASSERT_TYPE_ASSERT, "(ringBuffer->bufSize)", (const char *)&queryFormat, "ringBuffer->bufSize") )
    __debugbreak();
  _XMM3 = LODWORD(ringBuffer->settings.fractionFlush);
  __asm
  {
    vcmpeqss xmm2, xmm3, xmm0
    vblendvps xmm3, xmm3, xmm1, xmm2
  }
  if ( ringBuffer->pendingSize >= (int)(float)((float)ringBuffer->bufSize * *(float *)&_XMM3) || force )
  {
    flushFct = (__int64 (*)(void))ringBuffer->settings.flushFct;
    if ( flushFct )
    {
      v8 = flushFct();
    }
    else
    {
      if ( ringBuffer->settings.notUsingImmediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1139, ASSERT_TYPE_ASSERT, "(!ringBuffer->settings.notUsingImmediateContext)", (const char *)&queryFormat, "!ringBuffer->settings.notUsingImmediateContext") )
        __debugbreak();
      v8 = R_KickImmediateContext(D3D12XBOX_FLUSH_NONE);
    }
    R_DynamicRingBufferInsertGivenFence(ringBuffer, v8);
  }
}

/*
==============
R_DynamicRingBufferInsertGivenFence
==============
*/
void R_DynamicRingBufferInsertGivenFence(DynamicRingBuffer *ringBuffer, unsigned __int64 fence)
{
  int beginIndexReady; 
  __int64 writePos; 
  int v6; 

  if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( ringBuffer->pendingSize )
  {
    ringBuffer->pos[ringBuffer->writePos].fence = fence;
    ringBuffer->pos[ringBuffer->writePos].fenceDataSize = ringBuffer->pendingSize;
    ringBuffer->pendingFencesSize += ringBuffer->pendingSize;
    beginIndexReady = ringBuffer->beginIndexReady;
    writePos = ringBuffer->writePos;
    ringBuffer->pendingSize = 0;
    ringBuffer->pos[writePos].index = beginIndexReady;
    v6 = ((unsigned __int8)ringBuffer->writePos + 1) & 0x7F;
    if ( v6 == ringBuffer->readPos )
      R_DynamicRingBufferWaitFence(ringBuffer);
    ringBuffer->writePos = v6;
  }
}

/*
==============
R_DynamicRingBufferInsertGivenFenceToAll
==============
*/
void R_DynamicRingBufferInsertGivenFenceToAll(GfxCmdBufState *state, unsigned __int64 fence)
{
  GfxConstantBufferAllocations *constantBufferAllocations; 

  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  constantBufferAllocations = state->constantBufferAllocations;
  if ( constantBufferAllocations )
  {
    R_DynamicRingBufferInsertGivenFence(&constantBufferAllocations->constantBufferInfo->ring[0].ringBuffer, fence);
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicIndexRingBuffer, fence);
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicVertexRingBuffer, fence);
    R_DynamicRingBufferInsertGivenFence(&state->descState->descHeapInfo->ring.ringBuffer, fence);
  }
}

/*
==============
R_DynamicRingBufferWaitFence
==============
*/
void R_DynamicRingBufferWaitFence(DynamicRingBuffer *ringBuffer)
{
  unsigned int v2; 
  const char *name; 
  __int64 v4; 
  int fenceDataSize; 
  int endIndexReady; 
  bool v7; 

  if ( ringBuffer->writePos == ringBuffer->readPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1044, ASSERT_TYPE_ASSERT, "(ringBuffer->writePos != ringBuffer->readPos)", "%s\n\tno fences pending", "ringBuffer->writePos != ringBuffer->readPos") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Waiting for ring buffer");
  v2 = 0;
  while ( ringBuffer->settings.fencePendingFct((const unsigned __int64 *)&ringBuffer->pos[ringBuffer->readPos]) )
  {
    name = ringBuffer->name;
    v4 = 2 * (ringBuffer->readPos + 2i64);
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    if ( *((_QWORD *)&ringBuffer->writePos + v4) >= g_dx.immediateCommandQueue.nextFenceValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fence_xb3.h", 21, ASSERT_TYPE_ASSERT, "((*fence) < static_cast< GfxFence >( commandQueueHandle->nextFenceValue ))", "%s\n\tFence deadlock for heap %s on queue %s", "(*fence) < static_cast< GfxFence >( commandQueueHandle->nextFenceValue )", name, g_dx.immediateCommandQueue.debugName) )
      __debugbreak();
    R_WarnOncePerFrame(R_WARN_DYNAMIC_RING_BUFFER, ringBuffer->name);
    ++v2;
    if ( v2 == 3000 * (v2 / 0xBB8) )
      R_WarnOncePerFrame(R_WARN_CMDBUF_MISSING_FENCE_DETECTED, ringBuffer->name, v2);
    Sys_Sleep(1);
  }
  fenceDataSize = ringBuffer->pos[ringBuffer->readPos].fenceDataSize;
  endIndexReady = ringBuffer->endIndexReady;
  ringBuffer->pendingFencesSize -= fenceDataSize;
  v7 = ringBuffer->pendingFencesSize < 0;
  ringBuffer->endIndexReady = (fenceDataSize + endIndexReady) % ringBuffer->bufSize;
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1086, ASSERT_TYPE_ASSERT, "(ringBuffer->pendingFencesSize >= 0)", (const char *)&queryFormat, "ringBuffer->pendingFencesSize >= 0") )
    __debugbreak();
  if ( ringBuffer->endIndexReady != ringBuffer->pos[ringBuffer->readPos].index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1087, ASSERT_TYPE_ASSERT, "(ringBuffer->endIndexReady == ringBuffer->pos[ringBuffer->readPos].index)", (const char *)&queryFormat, "ringBuffer->endIndexReady == ringBuffer->pos[ringBuffer->readPos].index") )
    __debugbreak();
  ringBuffer->readPos = ((unsigned __int8)ringBuffer->readPos + 1) & 0x7F;
  Sys_ProfEndNamedEvent();
}

/*
==============
R_FlushCustomPixelShaderResources
==============
*/
void R_FlushCustomPixelShaderResources(GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  unsigned int i; 
  __int64 v4; 
  __int64 v5; 
  unsigned int counter; 
  const GfxDevice *device; 
  __int64 v8; 
  unsigned int v9; 
  GfxCmdBufState *v10; 
  unsigned int v11; 
  GfxCmdBufState *v12; 

  state = context->state;
  if ( state->customPixelShaderRWViewIndex > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1831, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderRWViewIndex <= GFX_CUSTOM_PIXEL_SHADER_RWVIEW_COUNT)", (const char *)&queryFormat, "context.state->customPixelShaderRWViewIndex <= GFX_CUSTOM_PIXEL_SHADER_RWVIEW_COUNT") )
    __debugbreak();
  for ( i = 0; i < state->customPixelShaderRWViewIndex; ++i )
  {
    v4 = 2 * (3i64 * i + 1089);
    if ( !*(_QWORD *)&state->constantsDirty[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1834, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderRWViews[i].view)", (const char *)&queryFormat, "context.state->customPixelShaderRWViews[i].view") )
    {
      __debugbreak();
      state = context->state;
    }
    v5 = *(_QWORD *)&state->constantsDirty[v4];
    counter = state->customPixelShaderRWViews[i].counter;
    R_SetDescriptorInRange(state->descState, PS_RW_VIEW_RANGE, state->customPixelShaderRWViews[i].slot, *(_DWORD *)(v5 + 16));
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 448, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    if ( !*(_QWORD *)(v5 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 449, ASSERT_TYPE_ASSERT, "(rwView.rwCounterResource)", (const char *)&queryFormat, "rwView.rwCounterResource") )
      __debugbreak();
    if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8) + 88i64))(*(_QWORD *)(v5 + 8));
    ((void (__fastcall *)(const GfxDevice *, __int64, __int64, _QWORD, _DWORD))device->m_pFunction[20].AddRef)(device, v8, 4i64, counter, 0);
    state = context->state;
  }
  state->customPixelShaderRWViewIndex = 0;
  if ( state->customPixelShaderRWTextureIndex > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1839, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderRWTextureIndex <= GFX_CUSTOM_PIXEL_SHADER_RWTEXTURE_COUNT)", (const char *)&queryFormat, "context.state->customPixelShaderRWTextureIndex <= GFX_CUSTOM_PIXEL_SHADER_RWTEXTURE_COUNT") )
  {
    __debugbreak();
    state = context->state;
  }
  v9 = 0;
  if ( state->customPixelShaderRWTextureIndex )
  {
    v10 = state;
    do
    {
      state = v10;
      if ( !v10->customPixelShaderRWTextures[v9].texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1842, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderRWTextures[i].texture)", (const char *)&queryFormat, "context.state->customPixelShaderRWTextures[i].texture") )
      {
        __debugbreak();
        state = context->state;
      }
      R_SetDescriptorInRange(state->descState, PS_RW_VIEW_RANGE, state->customPixelShaderRWTextures[v9].slot, state->customPixelShaderRWTextures[v9].texture->shaderRWView.rwView);
      ++v9;
      v10 = state;
    }
    while ( v9 < state->customPixelShaderRWTextureIndex );
  }
  state->customPixelShaderRWTextureIndex = 0;
  if ( state->customPixelShaderViewIndex > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1847, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderViewIndex <= GFX_CUSTOM_PIXEL_SHADER_VIEW_COUNT)", (const char *)&queryFormat, "context.state->customPixelShaderViewIndex <= GFX_CUSTOM_PIXEL_SHADER_VIEW_COUNT") )
  {
    __debugbreak();
    state = context->state;
  }
  v11 = 0;
  if ( state->customPixelShaderViewIndex )
  {
    do
    {
      v12 = state;
      if ( !state->customPixelShaderViews[v11].view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1850, ASSERT_TYPE_ASSERT, "(context.state->customPixelShaderViews[i].view)", (const char *)&queryFormat, "context.state->customPixelShaderViews[i].view") )
      {
        __debugbreak();
        v12 = context->state;
      }
      R_SetResourceInternal_1(v12, GFX_SHADER_IMAGE_SET_PS, v12->customPixelShaderViews[v11].slot, v12->customPixelShaderViews[v11].view);
      ++v11;
      state = v12;
    }
    while ( v11 < v12->customPixelShaderViewIndex );
    v12->customPixelShaderViewIndex = 0;
  }
  else
  {
    state->customPixelShaderViewIndex = 0;
  }
}

/*
==============
R_GetCodeConstant
==============
*/
const float *R_GetCodeConstant(GfxCmdBufContext *context, unsigned int constant)
{
  __int64 v2; 
  GfxCmdBufSourceState *source; 

  v2 = constant;
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 46, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  source = context->source;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 47, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  if ( (unsigned int)v2 < 0xA0 )
    return (const float *)((char *)&source->input + 16 * v2);
  else
    return R_GetShaderCodeMatrix(source, v2);
}

/*
==============
R_NeedToSetShaderConstantFromCode
==============
*/
char R_NeedToSetShaderConstantFromCode(GfxCmdBufContext *context, const MaterialShaderArgument *arg, GfxShaderConstantState *constantState)
{
  unsigned __int16 index; 
  GfxCmdBufSourceState *v4; 
  char v5; 
  unsigned __int16 i; 
  unsigned __int16 v7; 
  char result; 
  GfxCmdBufSourceState *source; 
  unsigned __int16 v10; 

  index = arg->index;
  if ( index < 0xA0u )
  {
    if ( *(_WORD *)constantState >> 2 == index && constantState->version == context->source->constVersions[index] )
    {
      return 0;
    }
    else
    {
      source = context->source;
      *(_WORD *)constantState = 4 * index;
      v10 = source->constVersions[arg->index];
      result = 1;
      constantState->version = v10;
    }
  }
  else
  {
    v4 = context->source;
    v5 = 0;
    for ( i = 0; i < 4u; ++i )
    {
      v7 = arg->index;
      if ( *(_WORD *)constantState >> 2 != v7 || (*(_WORD *)constantState & 3) != i || constantState->version != v4->matrixVersions[(v7 - 160i64) >> 1] )
      {
        v5 = 1;
        *(_WORD *)constantState = i & 3 | (4 * v7);
        constantState->version = v4->matrixVersions[(arg->index - 160i64) >> 1];
      }
      ++constantState;
    }
    return v5;
  }
  return result;
}

/*
==============
R_SetCBufferFromCode
==============
*/
void R_SetCBufferFromCode(GfxCmdBufContext *context, const MaterialShaderArgument *arg, const char *fileAndLine)
{
  const GfxWrappedBuffer *CodeBuffer; 
  const char *CodeBufferName; 
  int v7; 
  __int64 dest; 
  GfxCmdBufState *state; 
  GfxConstantBufferDesc *v10; 
  __int64 v11; 
  GfxCmdBufState *v12; 
  GfxConstantBufferDesc *v13; 
  __int64 v14; 
  GfxCmdBufState *v15; 
  GfxConstantBufferDesc *v16; 
  __int64 v17; 
  GfxCmdBufState *v18; 
  GfxConstantBufferDesc *v19; 
  GfxConstantBuffer outBuffer; 
  char v21[16]; 
  unsigned __int64 val; 

  CodeBuffer = R_GetCodeBuffer(context->source, arg->index);
  if ( !CodeBuffer )
  {
    CodeBufferName = R_GetCodeBufferName(arg->index);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 474, ASSERT_TYPE_ASSERT, "( buffer != nullptr )", "R_SetCBufferFromCode: attempted to bind %s but the buffer pointer was null", CodeBufferName) )
      __debugbreak();
  }
  ((void (__fastcall *)(ID3D12Resource *, char *))CodeBuffer->buffer->m_pFunction[3].AddRef)(CodeBuffer->buffer, v21);
  v7 = truncate_cast<unsigned int,unsigned __int64>(val);
  R_CreateConstantBufferFromWrappedBuffer(CodeBuffer, v7, &outBuffer);
  if ( (arg->shader & 2) != 0 )
  {
    dest = arg->dest;
    state = context->state;
    v10 = &state->constants[0][dest];
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( v10->bufferData != outBuffer.bufferData || state->constants[0][dest].bufferSize != outBuffer.bufferSize )
    {
      *v10 = outBuffer.GfxConstantBufferDesc;
      state->constants[0][dest].buffer = outBuffer.buffer;
      state->constantsDirty[0] |= 1 << dest;
    }
  }
  if ( (arg->shader & 4) != 0 )
  {
    v11 = arg->dest;
    v12 = context->state;
    v13 = &v12->constants[2][v11];
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( v13->bufferData != outBuffer.bufferData || v12->constants[2][v11].bufferSize != outBuffer.bufferSize )
    {
      *v13 = outBuffer.GfxConstantBufferDesc;
      v12->constants[2][v11].buffer = outBuffer.buffer;
      v12->constantsDirty[2] |= 1 << v11;
    }
  }
  if ( (arg->shader & 8) != 0 )
  {
    v14 = arg->dest;
    v15 = context->state;
    v16 = &v15->constants[3][v14];
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( v16->bufferData != outBuffer.bufferData || v15->constants[3][v14].bufferSize != outBuffer.bufferSize )
    {
      *v16 = outBuffer.GfxConstantBufferDesc;
      v15->constants[3][v14].buffer = outBuffer.buffer;
      v15->constantsDirty[3] |= 1 << v14;
    }
  }
  if ( (arg->shader & 0x10) != 0 )
  {
    v17 = arg->dest;
    v18 = context->state;
    v19 = &v18->constants[1][v17];
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( v19->bufferData != outBuffer.bufferData || v18->constants[1][v17].bufferSize != outBuffer.bufferSize )
    {
      *v19 = outBuffer.GfxConstantBufferDesc;
      v18->constants[1][v17].buffer = outBuffer.buffer;
      v18->constantsDirty[1] |= 1 << v17;
    }
  }
}

/*
==============
R_SetDynamicIndexData
==============
*/
__int64 R_SetDynamicIndexData(GfxCmdBufState *state, const unsigned __int16 *indices, int triCount)
{
  GfxIndexBufferState *dynamicIndexBuffer; 
  bool v7; 
  int v8; 
  int total; 
  GfxDevice *device; 
  unsigned __int16 *v11; 
  __int64 v12; 
  volatile unsigned int used; 
  ID3D12Resource *buffer; 
  unsigned __int16 *v15; 
  GfxDevice *v16; 
  int v17; 
  unsigned int *m_pCurrent; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  int v23; 
  char v24[16]; 
  unsigned __int64 val; 

  dynamicIndexBuffer = state->dynamicIndexBuffer;
  v7 = state->device != g_dx.immediateContext;
  if ( v7 != (dynamicIndexBuffer != &gfxBuf.dynamicIndexBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1295, ASSERT_TYPE_ASSERT, "(deferredContext == (dest != &gfxBuf.dynamicIndexBuffer))", (const char *)&queryFormat, "deferredContext == (dest != &gfxBuf.dynamicIndexBuffer)") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  Profile_Begin(172);
  v8 = 3 * triCount;
  if ( 3 * triCount > dynamicIndexBuffer->total )
  {
    LODWORD(v20) = 3 * triCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1302, ASSERT_TYPE_ASSERT, "( ( indexCount <= dest->total ) )", "( indexCount ) = %i", v20) )
      __debugbreak();
  }
  total = dynamicIndexBuffer->total;
  if ( v8 + dynamicIndexBuffer->used > total )
  {
    if ( v7 )
    {
      state->dynamicBufferOverflow = 1;
      total = dynamicIndexBuffer->total;
    }
    device = state->device;
    v11 = dynamicIndexBuffer->indices;
    v12 = 2i64 * total;
    if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 420, ASSERT_TYPE_ASSERT, "(baseAddress != ((D3D12_GPU_VIRTUAL_ADDRESS)0))", (const char *)&queryFormat, "baseAddress != D3D12_GPU_VIRTUAL_ADDRESS_NULL") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 421, ASSERT_TYPE_ASSERT, "(sizeInBytes)", (const char *)&queryFormat, "sizeInBytes") )
      __debugbreak();
    ((void (__fastcall *)(GfxDevice *, __int64, unsigned __int16 *, unsigned __int64))device->m_pFunction[22].AddRef)(device, 12595200i64, v11, (v12 + 255) & 0xFFFFFFFFFFFFFF00ui64);
    dynamicIndexBuffer->used = 0;
  }
  used = dynamicIndexBuffer->used;
  buffer = dynamicIndexBuffer->buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1322, ASSERT_TYPE_ASSERT, "(ib)", (const char *)&queryFormat, "ib") )
    __debugbreak();
  v15 = &dynamicIndexBuffer->indices[dynamicIndexBuffer->used];
  if ( !v7 )
    R_DynamicRingBufferAcquire(&gfxBuf.dynamicIndexRingBuffer, dynamicIndexBuffer->used, v8 + dynamicIndexBuffer->used);
  dynamicIndexBuffer->used += v8;
  Profile_Begin(183);
  Profile_Begin(186);
  memcpy_0(v15, indices, 2i64 * v8);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->indexBuffer != buffer || state->indexType != DXGI_FORMAT_R16_UINT || !state->isIndexBufferBound )
  {
    v16 = state->device;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    state->indexBuffer = buffer;
    v17 = 57;
    state->indexType = DXGI_FORMAT_R16_UINT;
    v23 = 57;
    if ( buffer )
    {
      ((void (__fastcall *)(ID3D12Resource *, char *))buffer->m_pFunction[3].AddRef)(buffer, v24);
      if ( val >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1658, ASSERT_TYPE_ASSERT, "(ibDesc.Width < 0xffffffff)", (const char *)&queryFormat, "ibDesc.Width < UINT_MAX") )
        __debugbreak();
      v21 = ((__int64 (__fastcall *)(ID3D12Resource *))buffer->m_pFunction[3].Release)(buffer);
      v22 = truncate_cast<unsigned int,unsigned __int64>(val);
      v17 = v23;
    }
    else
    {
      v21 = 0i64;
      v22 = 0;
    }
    m_pCurrent = v16->m_Putter.m_pCurrent;
    if ( m_pCurrent >= v16->m_Putter.m_pLimit_Api )
    {
      ((void (__fastcall *)(GfxDevice *, __int64 *))v16->m_pFunction[15].Release)(v16, &v21);
    }
    else
    {
      *m_pCurrent = v17 + 1073854208;
      *(_QWORD *)(m_pCurrent + 1) = v21;
      v16->m_Putter.m_pCurrent = m_pCurrent + 3;
    }
    state->isIndexBufferBound = buffer != NULL;
  }
  Profile_EndInternal(NULL);
  return used;
}

/*
==============
R_SetDynamicVertexData
==============
*/
__int64 R_SetDynamicVertexData(GfxCmdBufState *state, const void *data, int vertexCount, int stride)
{
  GfxVertexBufferState *dynamicVertexBuffer; 
  bool v9; 
  int total; 
  int v11; 
  unsigned int used; 
  char *v13; 
  ID3D12Resource *buffer; 
  __int64 v16; 

  if ( vertexCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2108, ASSERT_TYPE_ASSERT, "(vertexCount > 0)", (const char *)&queryFormat, "vertexCount > 0") )
    __debugbreak();
  Profile_Begin(177);
  dynamicVertexBuffer = state->dynamicVertexBuffer;
  v9 = state->device != g_dx.immediateContext;
  if ( v9 != (dynamicVertexBuffer != &gfxBuf.dynamicVertexBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2114, ASSERT_TYPE_ASSERT, "(deferredContext == (dest != &gfxBuf.dynamicVertexBuffer))", (const char *)&queryFormat, "deferredContext == (dest != &gfxBuf.dynamicVertexBuffer)") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  total = dynamicVertexBuffer->total;
  v11 = stride * vertexCount;
  if ( v11 > total )
  {
    LODWORD(v16) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2120, ASSERT_TYPE_ASSERT, "( ( allocSize <= totalSize ) )", "( allocSize ) = %i", v16) )
      __debugbreak();
  }
  if ( v11 + dynamicVertexBuffer->used > total )
  {
    if ( v9 )
      state->dynamicBufferOverflow = 1;
    dynamicVertexBuffer->used = 0;
  }
  used = dynamicVertexBuffer->used;
  v13 = (char *)dynamicVertexBuffer->wrappedBuffer.data + dynamicVertexBuffer->used;
  if ( !v9 )
    R_DynamicRingBufferAcquire(&gfxBuf.dynamicVertexRingBuffer, used, used + v11);
  Profile_Begin(183);
  Profile_Begin(187);
  memcpy_0(v13, data, v11);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  dynamicVertexBuffer->used += v11;
  Profile_EndInternal(NULL);
  memset_0(state->streams, 0, sizeof(state->streams));
  *(_QWORD *)state->streamVersions = 0i64;
  *(_QWORD *)&state->streamVersions[2] = 0i64;
  state->streamVersions[4] = 0;
  buffer = dynamicVertexBuffer->buffer;
  if ( state->streams[0].buffer != buffer || state->streams[0].offset != used || state->streams[0].stride != stride )
  {
    state->streams[0].buffer = buffer;
    state->streams[0].offset = used;
    state->streams[0].stride = stride;
    ++state->streamVersions[0];
  }
  return used;
}

/*
==============
R_SetMaterialConstantBuffer
==============
*/
void R_SetMaterialConstantBuffer(GfxCmdBufState *state, const Material *material)
{
  unsigned __int8 v4; 
  MaterialConstantBufferDef *v5; 

  if ( material->constantBufferCount )
  {
    if ( !material->constantBufferIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 902, ASSERT_TYPE_ASSERT, "(material->constantBufferIndex)", (const char *)&queryFormat, "material->constantBufferIndex") )
      __debugbreak();
    v4 = material->constantBufferIndex[state->techType];
    if ( v4 != 0xFF )
    {
      if ( v4 >= material->constantBufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 907, ASSERT_TYPE_ASSERT, "(constantBufferIndex < material->constantBufferCount)", (const char *)&queryFormat, "constantBufferIndex < material->constantBufferCount") )
        __debugbreak();
      v5 = &material->constantBufferTable[v4];
      if ( v5->vsDataSize )
        R_VSSetConstantBuffer(state, 3u, &v5->vsConstantBuffer);
      if ( v5->hsDataSize )
        R_HSSetConstantBuffer(state, 3u, &v5->hsConstantBuffer);
      if ( v5->dsDataSize )
        R_DSSetConstantBuffer(state, 3u, &v5->dsConstantBuffer);
      if ( v5->psDataSize )
        R_PSSetConstantBuffer(state, 3u, &v5->psConstantBuffer);
    }
  }
}

/*
==============
R_SetPassShaderObjectArguments
==============
*/
char R_SetPassShaderObjectArguments(GfxCmdBufContext *context, const MaterialShaderArgument *arg, unsigned int argCount, const char *fileAndLine)
{
  MaterialArgumentType type; 
  char v5; 
  const MaterialShaderArgument *i; 
  unsigned int dest; 
  __int64 v11; 
  unsigned int index; 
  const float *CodeConstant; 
  size_t v15; 
  GfxCmdBufState *v16; 
  GfxCmdBufSourceState *v17; 
  unsigned __int8 *p_shader; 
  const GfxImage *CodeImageTexture; 
  GfxImage *blackImage; 
  const char **p_name; 
  const char *v22; 
  const char *DrawListTypeName; 
  unsigned __int8 v25; 
  __int64 v26; 
  __int64 v27; 
  GfxCmdBufSourceState *source[2]; 

  type = arg->type;
  v5 = 0;
  for ( i = arg; type == MTL_ARG_CODE_CONST; ++i )
  {
    dest = i->dest;
    _XMM6 = *context;
    if ( i->index >= 0xA0u )
      dest += 3;
    if ( dest >= 0x20 )
    {
      LODWORD(v27) = 32;
      LODWORD(v26) = dest;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 283, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->perObjectConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->perObjectConstantState )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v11 = i->dest;
    __asm { vpextrq rdi, xmm6, 1 }
    *(GfxCmdBufContext *)source = _XMM6;
    if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)source, i, (GfxShaderConstantState *)(_RDI + 4 * v11 + 6288)) )
    {
      index = i->index;
      *(GfxCmdBufContext *)source = _XMM6;
      CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)source, index);
      v15 = 16i64;
      if ( i->index >= 0xA0u )
        v15 = 64i64;
      memcpy_0((void *)(_RDI + 16 * (i->dest + 271i64)), CodeConstant, v15);
      v5 = 1;
    }
    if ( !--argCount )
      return v5;
    type = i[1].type;
  }
  if ( type == MTL_ARG_CODE_TEXTURE )
  {
    *(GfxCmdBufContext *)source = *context;
    v16 = (GfxCmdBufState *)source[1];
    v17 = source[0];
    p_shader = &i->shader;
    do
    {
      CodeImageTexture = R_GetCodeImageTexture(v17, *(unsigned __int16 *)(p_shader + 3));
      blackImage = (GfxImage *)CodeImageTexture;
      if ( !CodeImageTexture || !R_IsImageViewValid(v16, CodeImageTexture) )
      {
        if ( r_bindingValidation->current.enabled )
        {
          p_name = &v16->material->name;
          if ( p_name )
            v22 = *p_name;
          else
            v22 = "<NULL>";
          DrawListTypeName = R_GetDrawListTypeName(v17->drawListType);
          R_TextureFromCodeError(*(unsigned __int16 *)(p_shader + 3), v22, DrawListTypeName, 0);
        }
        blackImage = rgp.blackImage;
      }
      v25 = *p_shader;
      if ( (*p_shader & 2) != 0 )
      {
        R_SetVertexTextureInternal(v16, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
        v25 = *p_shader;
      }
      if ( (v25 & 8) != 0 )
      {
        R_SetDomainTextureInternal(v16, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
        v25 = *p_shader;
      }
      if ( (v25 & 0x10) != 0 )
        R_SetPixelTextureInternal(v16, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
      if ( !--argCount )
        return v5;
      p_shader += 6;
    }
    while ( *(p_shader - 1) == 1 );
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 592, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    __debugbreak();
  return 0;
}

/*
==============
R_SetPassShaderStableArguments
==============
*/
bool R_SetPassShaderStableArguments(GfxCmdBufContext *context, const MaterialShaderArgument *arg, unsigned int argCount, const char *fileAndLine)
{
  const MaterialShaderArgument *v4; 
  MaterialArgumentType type; 
  const char *v6; 
  GfxCmdBufContext *v8; 
  unsigned int dest; 
  __int64 v11; 
  unsigned int v13; 
  const float *CodeConstant; 
  size_t v15; 
  bool result; 
  GfxCmdBufState *v17; 
  GfxCmdBufSourceState *v18; 
  const GfxImage *CodeImageTexture; 
  GfxImage *blackImage; 
  const char **p_name; 
  const char *v22; 
  const char *DrawListTypeName; 
  unsigned __int8 shader; 
  GfxCmdBufState *v25; 
  GfxCmdBufSourceState *v26; 
  const GfxImage *CodePersistentImageTexture; 
  GfxImage *v28; 
  const char **v29; 
  const char *v30; 
  const char *v31; 
  unsigned __int8 v32; 
  GfxCmdBufState *v33; 
  GfxCmdBufSourceState *v34; 
  GfxWrappedBuffer *CodeBuffer; 
  const char **v36; 
  const char *v37; 
  const char *v38; 
  unsigned __int8 v39; 
  GfxCmdBufState *v40; 
  GfxCmdBufSourceState *v41; 
  GfxWrappedBuffer *CodePersistentBuffer; 
  const char **v43; 
  const char *v44; 
  const char *v45; 
  unsigned __int8 v46; 
  MaterialTextureDef *textureTable; 
  unsigned __int16 index; 
  const Material *material; 
  unsigned __int8 v52; 
  const GfxImage *image; 
  unsigned int v54; 
  GfxCmdBufSourceState *v55; 
  const GfxImage *v56; 
  const char **v57; 
  const char *v58; 
  const char *v59; 
  const GfxTexture *Resident; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  GfxCmdBufSourceState *source[2]; 
  bool v67; 

  v4 = arg;
  type = arg->type;
  v6 = fileAndLine;
  v67 = 0;
  v8 = context;
  if ( type )
  {
LABEL_14:
    if ( type == MTL_ARG_CODE_TEXTURE )
    {
      *(GfxCmdBufContext *)source = *v8;
      v17 = (GfxCmdBufState *)source[1];
      v18 = source[0];
      while ( 1 )
      {
        CodeImageTexture = R_GetCodeImageTexture(v18, v4->index);
        blackImage = (GfxImage *)CodeImageTexture;
        if ( !CodeImageTexture || !R_IsImageViewValid(v17, CodeImageTexture) )
        {
          if ( r_bindingValidation->current.enabled )
          {
            p_name = &v17->material->name;
            if ( p_name )
              v22 = *p_name;
            else
              v22 = "<NULL>";
            DrawListTypeName = R_GetDrawListTypeName(v18->drawListType);
            R_TextureFromCodeError(v4->index, v22, DrawListTypeName, 0);
          }
          blackImage = rgp.blackImage;
        }
        shader = v4->shader;
        if ( (shader & 2) != 0 )
        {
          R_SetVertexTextureInternal(v17, v4->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
          shader = v4->shader;
        }
        if ( (shader & 8) != 0 )
        {
          R_SetDomainTextureInternal(v17, v4->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
          shader = v4->shader;
        }
        if ( (shader & 0x10) != 0 )
          R_SetPixelTextureInternal(v17, v4->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
        if ( !--argCount )
          break;
        type = v4[1].type;
        ++v4;
        if ( type != MTL_ARG_CODE_TEXTURE )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      if ( type == MTL_ARG_CODE_PERSISTENT_TEXTURE )
      {
        *(GfxCmdBufContext *)source = *v8;
        v25 = (GfxCmdBufState *)source[1];
        v26 = source[0];
        while ( 1 )
        {
          CodePersistentImageTexture = R_GetCodePersistentImageTexture(v26, v4->index);
          v28 = (GfxImage *)CodePersistentImageTexture;
          if ( !CodePersistentImageTexture || !R_IsImageViewValid(v25, CodePersistentImageTexture) )
          {
            if ( r_bindingValidation->current.enabled )
            {
              v29 = &v25->material->name;
              if ( v29 )
                v30 = *v29;
              else
                v30 = "<NULL>";
              v31 = R_GetDrawListTypeName(v26->drawListType);
              R_TextureFromCodeError(v4->index, v30, v31, 1);
            }
            v28 = rgp.blackImage;
          }
          v32 = v4->shader;
          if ( (v32 & 2) != 0 )
          {
            R_SetVertexTextureInternal(v25, v4->dest, v28, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
            v32 = v4->shader;
          }
          if ( (v32 & 8) != 0 )
          {
            R_SetDomainTextureInternal(v25, v4->dest, v28, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
            v32 = v4->shader;
          }
          if ( (v32 & 0x10) != 0 )
            R_SetPixelTextureInternal(v25, v4->dest, v28, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
          if ( !--argCount )
            break;
          type = v4[1].type;
          ++v4;
          if ( type != MTL_ARG_CODE_PERSISTENT_TEXTURE )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        if ( type == MTL_ARG_CODE_BUFFER )
        {
          *(GfxCmdBufContext *)source = *v8;
          v33 = (GfxCmdBufState *)source[1];
          v34 = source[0];
          while ( 1 )
          {
            CodeBuffer = (GfxWrappedBuffer *)R_GetCodeBuffer(v34, v4->index);
            if ( !CodeBuffer )
            {
              if ( r_bindingValidation->current.enabled )
              {
                v36 = &v33->material->name;
                if ( v36 )
                  v37 = *v36;
                else
                  v37 = "<NULL>";
                v38 = R_GetDrawListTypeName(v34->drawListType);
                R_BufferFromCodeError(v4->index, v37, v38, 0);
              }
              CodeBuffer = &gfxBuf.dummyBuffer;
            }
            v39 = v4->shader;
            if ( (v39 & 2) != 0 )
            {
              R_SetResourceInternal_1(v33, GFX_SHADER_IMAGE_SET_VS, v4->dest, &CodeBuffer->view);
              v39 = v4->shader;
            }
            if ( (v39 & 4) != 0 )
            {
              R_SetDescriptorInRange(v33->descState, HS_VIEW_RANGE, v4->dest, CodeBuffer->view.view);
              v39 = v4->shader;
            }
            if ( (v39 & 8) != 0 )
            {
              R_SetResourceInternal_1(v33, GFX_SHADER_IMAGE_SET_DS, v4->dest, &CodeBuffer->view);
              v39 = v4->shader;
            }
            if ( (v39 & 0x10) != 0 )
              R_SetResourceInternal_1(v33, GFX_SHADER_IMAGE_SET_PS, v4->dest, &CodeBuffer->view);
            if ( !--argCount )
              break;
            type = v4[1].type;
            ++v4;
            if ( type != MTL_ARG_CODE_BUFFER )
              goto LABEL_69;
          }
        }
        else
        {
LABEL_69:
          if ( type == MTL_ARG_CODE_PERSISTENT_BUFFER )
          {
            *(GfxCmdBufContext *)source = *v8;
            v40 = (GfxCmdBufState *)source[1];
            v41 = source[0];
            while ( 1 )
            {
              CodePersistentBuffer = (GfxWrappedBuffer *)R_GetCodePersistentBuffer(v41, v4->index);
              if ( !CodePersistentBuffer )
              {
                if ( r_bindingValidation->current.enabled )
                {
                  v43 = &v40->material->name;
                  if ( v43 )
                    v44 = *v43;
                  else
                    v44 = "<NULL>";
                  v45 = R_GetDrawListTypeName(v41->drawListType);
                  R_BufferFromCodeError(v4->index, v44, v45, 1);
                }
                CodePersistentBuffer = &gfxBuf.dummyBuffer;
              }
              v46 = v4->shader;
              if ( (v46 & 2) != 0 )
              {
                R_SetResourceInternal_1(v40, GFX_SHADER_IMAGE_SET_VS, v4->dest, &CodePersistentBuffer->view);
                v46 = v4->shader;
              }
              if ( (v46 & 4) != 0 )
              {
                R_SetDescriptorInRange(v40->descState, HS_VIEW_RANGE, v4->dest, CodePersistentBuffer->view.view);
                v46 = v4->shader;
              }
              if ( (v46 & 8) != 0 )
              {
                R_SetResourceInternal_1(v40, GFX_SHADER_IMAGE_SET_DS, v4->dest, &CodePersistentBuffer->view);
                v46 = v4->shader;
              }
              if ( (v46 & 0x10) != 0 )
                R_SetResourceInternal_1(v40, GFX_SHADER_IMAGE_SET_PS, v4->dest, &CodePersistentBuffer->view);
              if ( !--argCount )
                break;
              type = v4[1].type;
              ++v4;
              if ( type != MTL_ARG_CODE_PERSISTENT_BUFFER )
                goto LABEL_88;
            }
          }
          else
          {
LABEL_88:
            textureTable = v8->state->material->textureTable;
            if ( type == MTL_ARG_MATERIAL_TEXTURE )
            {
              while ( 1 )
              {
                _XMM0 = *v8;
                index = v4->index;
                __asm { vpextrq r15, xmm0, 1 }
                material = _R15->material;
                if ( textureTable->index != index )
                {
                  do
                  {
                    if ( ++textureTable == &material->textureTable[material->textureCount] )
                    {
                      LODWORD(v64) = material->textureCount;
                      LODWORD(v63) = index;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 526, ASSERT_TYPE_SANITY, "(texDef != &material->textureTable[material->textureCount])", "%s\n\t\"material '%s' is missing a required named texture.  Looking for texDef 0x%08x, with count %d.\"", "texDef != &material->textureTable[material->textureCount]", material->name, v63, v64) )
                        __debugbreak();
                    }
                    index = v4->index;
                  }
                  while ( textureTable->index != index );
                  v8 = context;
                  v6 = fileAndLine;
                }
                v52 = v4->shader;
                image = textureTable->image;
                if ( (v52 & 2) != 0 )
                {
                  R_SetVertexTextureInternal(_R15, v4->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(536)");
                  v52 = v4->shader;
                }
                if ( (v52 & 8) != 0 )
                {
                  R_SetDomainTextureInternal(_R15, v4->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(539)");
                  v52 = v4->shader;
                }
                if ( (v52 & 0x10) != 0 )
                  R_SetPixelTextureInternal(_R15, v4->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(542)");
                if ( !--argCount )
                  break;
                type = v4[1].type;
                ++v4;
                if ( type != MTL_ARG_MATERIAL_TEXTURE )
                  goto LABEL_103;
              }
            }
            else
            {
LABEL_103:
              if ( type == MTL_ARG_CODE_RWTEXTURE )
              {
                while ( 1 )
                {
                  v54 = v4->index;
                  v55 = v8->source;
                  *(GfxCmdBufContext *)source = *v8;
                  v56 = R_GetCodeImageTexture(source[0], v54);
                  if ( v56 )
                  {
                    if ( (v4->shader & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 425, ASSERT_TYPE_ASSERT, "(arg->shader & (1 << MTL_PIXEL_SHADER))", (const char *)&queryFormat, "arg->shader & (1 << MTL_PIXEL_SHADER)") )
                      __debugbreak();
                    Resident = R_Texture_GetResident(v56->textureId);
                    R_SetDescriptorInRange(*(GfxDescriptorState **)source[1]->input.consts[43].v, PS_RW_VIEW_RANGE, v4->dest, Resident->shaderRWView.rwView);
                  }
                  else if ( r_bindingValidation->current.enabled )
                  {
                    v57 = *(const char ***)source[1]->input.consts[64].v;
                    if ( v57 )
                      v58 = *v57;
                    else
                      v58 = "<NULL>";
                    v59 = R_GetDrawListTypeName(v55->drawListType);
                    R_TextureFromCodeError(v4->index, v58, v59, 0);
                  }
                  if ( !--argCount )
                    break;
                  type = v4[1].type;
                  ++v4;
                  if ( type != MTL_ARG_CODE_RWTEXTURE )
                    goto LABEL_116;
                }
              }
              else
              {
LABEL_116:
                if ( type == MTL_ARG_CODE_RWBUFFER )
                {
                  while ( 1 )
                  {
                    *(GfxCmdBufContext *)source = *v8;
                    R_SetRWBufferFromCode((GfxCmdBufContext *)source, v4, v6);
                    if ( !--argCount )
                      break;
                    type = v4[1].type;
                    ++v4;
                    if ( type != MTL_ARG_CODE_RWBUFFER )
                      goto LABEL_119;
                  }
                }
                else
                {
LABEL_119:
                  if ( type != MTL_ARG_CODE_CBUFFER )
                  {
LABEL_122:
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 695, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
                      __debugbreak();
                    return 0;
                  }
                  while ( 1 )
                  {
                    *(GfxCmdBufContext *)source = *v8;
                    R_SetCBufferFromCode((GfxCmdBufContext *)source, v4, v6);
                    if ( !--argCount )
                      break;
                    ++v4;
                    if ( v4->type != MTL_ARG_CODE_CBUFFER )
                      goto LABEL_122;
                  }
                }
              }
            }
          }
        }
      }
    }
    return v67;
  }
  while ( 1 )
  {
    dest = v4->dest;
    _XMM6 = *v8;
    if ( v4->index >= 0xA0u )
      dest += 3;
    if ( dest >= 0x46 )
    {
      LODWORD(v62) = 70;
      LODWORD(v61) = dest;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->stableConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->stableConstantState )\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    v11 = v4->dest;
    __asm { vpextrq rdi, xmm6, 1 }
    *(GfxCmdBufContext *)source = _XMM6;
    if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)source, v4, (GfxShaderConstantState *)(_RDI + 4 * v11 + 6416)) )
    {
      v13 = v4->index;
      *(GfxCmdBufContext *)source = _XMM6;
      CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)source, v13);
      v15 = 16i64;
      if ( v4->index >= 0xA0u )
        v15 = 64i64;
      memcpy_0((void *)(_RDI + 16 * (v4->dest + 303i64)), CodeConstant, v15);
      result = 1;
      v67 = 1;
    }
    else
    {
      result = v67;
    }
    if ( !--argCount )
      return result;
    type = v4[1].type;
    ++v4;
    if ( type )
      goto LABEL_14;
  }
}

/*
==============
R_SetRWBufferFromCode
==============
*/
void R_SetRWBufferFromCode(GfxCmdBufContext *context, const MaterialShaderArgument *arg, const char *fileAndLine)
{
  GfxCmdBufSourceState *source; 
  __int64 index; 
  GfxCmdBufInput *p_input; 
  const GfxWrappedRWBuffer *v8; 
  const Material *material; 
  const char *name; 
  const char *DrawListTypeName; 
  __int64 v12; 

  source = context->source;
  index = arg->index;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1567, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1457, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( (_DWORD)index )
  {
    LODWORD(v12) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1458, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( BUFFER_SRC_CODE_RW_COUNT )", "codeBuffer doesn't index BUFFER_SRC_CODE_RW_COUNT\n\t%i not in [0, %i)", v12, 1) )
      __debugbreak();
  }
  v8 = p_input->codeRWBuffers[index];
  if ( v8 )
  {
    if ( (arg->shader & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 459, ASSERT_TYPE_SANITY, "( ( arg->shader & ( 1 << MTL_VERTEX_SHADER ) ) == 0 )", (const char *)&queryFormat, "( arg->shader & ( 1 << MTL_VERTEX_SHADER ) ) == 0") )
      __debugbreak();
    if ( (arg->shader & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 460, ASSERT_TYPE_SANITY, "( ( arg->shader & ( 1 << MTL_HULL_SHADER ) ) == 0 )", (const char *)&queryFormat, "( arg->shader & ( 1 << MTL_HULL_SHADER ) ) == 0") )
      __debugbreak();
    if ( (arg->shader & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 461, ASSERT_TYPE_SANITY, "( ( arg->shader & ( 1 << MTL_DOMAIN_SHADER ) ) == 0 )", (const char *)&queryFormat, "( arg->shader & ( 1 << MTL_DOMAIN_SHADER ) ) == 0") )
      __debugbreak();
    if ( (arg->shader & 0x10) != 0 )
      R_SetDescriptorInRange(context->state->descState, PS_RW_VIEW_RANGE, arg->dest, v8->rwView.rwView);
  }
  else if ( r_bindingValidation->current.enabled )
  {
    material = context->state->material;
    if ( material )
      name = material->name;
    else
      name = "<NULL>";
    DrawListTypeName = R_GetDrawListTypeName(context->source->drawListType);
    R_BufferFromCodeError(arg->index, name, DrawListTypeName, 0);
  }
}

/*
==============
R_SetupPass
==============
*/
char R_SetupPass(GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const Material *material; 
  const GfxStateBits *p_stateBits; 
  GfxCmdBufState *v5; 
  unsigned __int8 v6; 
  __int64 v7; 
  GfxCmdBufState *v8; 
  const MaterialTechnique *technique; 
  unsigned __int8 m_colorRtCount; 
  unsigned __int8 colorRtCount; 
  GfxPixelFormat v12; 
  GfxPixelFormat format; 
  int v14; 
  const MaterialTechnique *v15; 
  int v16; 
  unsigned __int8 i; 
  const Material *v18; 
  const char *name; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  GfxCmdBufContext v25; 

  Profile_Begin(140);
  state = context->state;
  material = state->material;
  p_stateBits = &state->technique->stateBits;
  if ( context->source->viewMode == VIEW_MODE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2070, ASSERT_TYPE_ASSERT, "(context.source->viewMode != VIEW_MODE_NONE)", (const char *)&queryFormat, "context.source->viewMode != VIEW_MODE_NONE") )
    __debugbreak();
  v25 = *context;
  if ( !R_SetState(&v25, p_stateBits) )
    goto LABEL_33;
  v5 = context->state;
  if ( material->constantBufferCount )
  {
    if ( !material->constantBufferIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 902, ASSERT_TYPE_ASSERT, "(material->constantBufferIndex)", (const char *)&queryFormat, "material->constantBufferIndex") )
      __debugbreak();
    v6 = material->constantBufferIndex[v5->techType];
    if ( v6 != 0xFF )
    {
      if ( v6 >= material->constantBufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 907, ASSERT_TYPE_ASSERT, "(constantBufferIndex < material->constantBufferCount)", (const char *)&queryFormat, "constantBufferIndex < material->constantBufferCount") )
        __debugbreak();
      v7 = (__int64)&material->constantBufferTable[v6];
      if ( *(_DWORD *)v7 )
        R_VSSetConstantBuffer(v5, 3u, (const GfxConstantBuffer *)(v7 + 48));
      if ( *(_DWORD *)(v7 + 4) )
        R_HSSetConstantBuffer(v5, 3u, (const GfxConstantBuffer *)(v7 + 72));
      if ( *(_DWORD *)(v7 + 8) )
        R_DSSetConstantBuffer(v5, 3u, (const GfxConstantBuffer *)(v7 + 96));
      if ( *(_DWORD *)(v7 + 12) )
        R_PSSetConstantBuffer(v5, 3u, (const GfxConstantBuffer *)(v7 + 120));
    }
  }
  v25 = *context;
  R_FlushCustomPixelShaderResources(&v25);
  if ( r_rtFormatValidation->current.enabled )
  {
    v8 = v5;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2015, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    technique = v5->technique;
    m_colorRtCount = v5->rtGroup.m_colorRtCount;
    colorRtCount = technique->colorRtCount;
    if ( colorRtCount >= m_colorRtCount )
    {
      v12 = GFX_PF_INVALID;
      format = GFX_PF_INVALID;
      v14 = 0;
      while ( 1 )
      {
        v15 = v8->technique;
        v16 = 0;
        for ( i = 0; i < v8->rtGroup.m_colorRtCount; ++i )
        {
          v12 = v15->renderTargetFormats.colorRtFormats[i];
          format = R_RT_Handle::GetSurface(&v8->rtGroup.m_colorRts[i])->m_image.m_base.format;
          if ( v12 != format )
            break;
          ++v16;
        }
        if ( v16 == v8->rtGroup.m_colorRtCount )
          goto LABEL_35;
        if ( ++v14 )
        {
          v18 = v8->material;
          name = v8->technique->name;
          v20 = v18->name;
          v21 = v18->techniqueSet->name;
          v22 = PixelFormat_GetName(format);
          v23 = PixelFormat_GetName(v12);
          R_WarnOncePerFrame(R_WARN_MATERIAL_RENDERTARGET_MISMATCH, v23, v22, v20, v21, name);
          goto LABEL_33;
        }
      }
    }
    R_WarnOncePerFrame(R_WARN_MATERIAL_RENDERTARGET_COUNT_MISMATCH, colorRtCount, m_colorRtCount, v5->material->name, v5->material->techniqueSet->name, technique->name);
LABEL_33:
    Profile_EndInternal(NULL);
    return 0;
  }
LABEL_35:
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
R_SetupPassPerObjectArgsInternal
==============
*/
void R_SetupPassPerObjectArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  unsigned __int8 perObjArgCount; 
  int perObjArgSize; 
  bool v7; 
  bool v8; 
  __int64 perPrimArgCount; 
  MaterialShaderArgument *args; 
  unsigned __int16 v11; 
  void *bufferData; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  state = context->state;
  technique = state->technique;
  perObjArgCount = technique->perObjArgCount;
  if ( perObjArgCount )
  {
    perObjArgSize = technique->perObjArgSize;
    v8 = __OFSUB__(state->perObjectConstantBoundSize, perObjArgSize);
    v7 = state->perObjectConstantBoundSize - perObjArgSize < 0;
    perPrimArgCount = technique->perPrimArgCount;
    args = technique->args;
    cbuff = (GfxConstantBufferDesc)*context;
    if ( v7 ^ v8 | (unsigned __int8)R_SetPassShaderObjectArguments((GfxCmdBufContext *)&cbuff, &args[perPrimArgCount], perObjArgCount, fileAndLine) )
    {
      v11 = technique->perObjArgSize;
      _XMM0 = *context;
      __asm { vpextrq rbx, xmm0, 1 }
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 768, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6700) = v11;
      cbuff = *R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_PER_OBJECT, v11);
      memcpy_0(cbuff.bufferData, (const void *)(_RBX + 4336), v11);
      R_AllocateConstantBufferEnd((CmdBufState *)_RBX, &cbuff);
      bufferData = cbuff.bufferData;
      bufferSize = cbuff.bufferSize;
      *(_QWORD *)(_RBX + 40) = cbuff.bufferData;
      *(_DWORD *)(_RBX + 48) = bufferSize;
      *(_DWORD *)_RBX |= 2u;
      *(_QWORD *)(_RBX + 376) = bufferData;
      *(_DWORD *)(_RBX + 384) = bufferSize;
      *(_DWORD *)(_RBX + 4) |= 2u;
      *(_QWORD *)(_RBX + 712) = bufferData;
      *(_DWORD *)(_RBX + 720) = bufferSize;
      *(_DWORD *)(_RBX + 8) |= 2u;
      *(_QWORD *)(_RBX + 1048) = bufferData;
      *(_DWORD *)(_RBX + 1056) = bufferSize;
      *(_DWORD *)(_RBX + 12) |= 2u;
    }
  }
}

/*
==============
R_SetupPassPerPrimArgsInternal
==============
*/
void R_SetupPassPerPrimArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  __int128 v2; 
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  unsigned __int8 perPrimArgCount; 
  const MaterialShaderArgument *args; 
  bool v9; 
  int v10; 
  char v11; 
  unsigned int dest; 
  __int64 v13; 
  unsigned int index; 
  const float *CodeConstant; 
  size_t v17; 
  unsigned __int16 perPrimArgSize; 
  void *bufferData; 
  unsigned int bufferSize; 
  __int64 v23; 
  __int64 v24; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 
  __int128 v27; 

  state = context->state;
  technique = state->technique;
  perPrimArgCount = technique->perPrimArgCount;
  if ( perPrimArgCount )
  {
    args = technique->args;
    v27 = v2;
    _XMM6 = (GfxConstantBufferDesc)*context;
    v9 = state->perPrimConstantBoundSize < technique->perPrimArgSize;
    v10 = perPrimArgCount;
    v11 = 0;
    if ( args->type )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 564, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
        __debugbreak();
      v11 = 0;
    }
    else
    {
      while ( 1 )
      {
        dest = args->dest;
        if ( args->index >= 0xA0u )
          dest += 3;
        if ( dest >= 0x50 )
        {
          LODWORD(v24) = 80;
          LODWORD(v23) = dest;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->perPrimConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->perPrimConstantState )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v13 = args->dest;
        __asm { vpextrq rsi, xmm6, 1 }
        cbuff = _XMM6;
        if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)&cbuff, args, (GfxShaderConstantState *)(_RSI + 4 * v13 + 5968)) )
        {
          index = args->index;
          cbuff = _XMM6;
          CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)&cbuff, index);
          v17 = 16i64;
          if ( args->index >= 0xA0u )
            v17 = 64i64;
          memcpy_0((void *)(_RSI + 16 * (args->dest + 191i64)), CodeConstant, v17);
          v11 = 1;
        }
        if ( !--v10 )
          break;
        ++args;
        if ( args->type )
          goto LABEL_14;
      }
    }
    if ( v9 | (unsigned __int8)v11 )
    {
      perPrimArgSize = technique->perPrimArgSize;
      _XMM0 = *context;
      __asm { vpextrq rbx, xmm0, 1 }
      if ( !perPrimArgSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 705, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6696) = perPrimArgSize;
      cbuff = *R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_PER_PRIM, perPrimArgSize);
      memcpy_0(cbuff.bufferData, (const void *)(_RBX + 3056), perPrimArgSize);
      R_AllocateConstantBufferEnd((CmdBufState *)_RBX, &cbuff);
      bufferData = cbuff.bufferData;
      bufferSize = cbuff.bufferSize;
      *(_QWORD *)(_RBX + 16) = cbuff.bufferData;
      *(_DWORD *)(_RBX + 24) = bufferSize;
      *(_DWORD *)_RBX |= 1u;
      *(_QWORD *)(_RBX + 352) = bufferData;
      *(_DWORD *)(_RBX + 360) = bufferSize;
      *(_DWORD *)(_RBX + 4) |= 1u;
      *(_QWORD *)(_RBX + 688) = bufferData;
      *(_DWORD *)(_RBX + 696) = bufferSize;
      *(_DWORD *)(_RBX + 8) |= 1u;
      *(_QWORD *)(_RBX + 1024) = bufferData;
      *(_DWORD *)(_RBX + 1032) = bufferSize;
      *(_DWORD *)(_RBX + 12) |= 1u;
    }
  }
}

/*
==============
R_SetupPassStableArgsInternal
==============
*/
void R_SetupPassStableArgsInternal(GfxCmdBufContext *context, const char *fileAndLine)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  unsigned __int8 stableArgCount; 
  int stableArgSize; 
  bool v7; 
  bool v8; 
  unsigned __int64 v9; 
  MaterialShaderArgument *args; 
  unsigned __int16 v11; 
  void *bufferData; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  state = context->state;
  technique = state->technique;
  stableArgCount = technique->stableArgCount;
  if ( stableArgCount )
  {
    stableArgSize = technique->stableArgSize;
    v8 = __OFSUB__(state->stableConstantBoundSize, stableArgSize);
    v7 = state->stableConstantBoundSize - stableArgSize < 0;
    v9 = technique->perPrimArgCount + (unsigned __int64)technique->perObjArgCount;
    args = technique->args;
    cbuff = (GfxConstantBufferDesc)*context;
    if ( v7 ^ v8 | R_SetPassShaderStableArguments((GfxCmdBufContext *)&cbuff, &args[v9], stableArgCount, fileAndLine) )
    {
      v11 = technique->stableArgSize;
      _XMM0 = *context;
      __asm { vpextrq rbx, xmm0, 1 }
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 831, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6704) = v11;
      cbuff = *R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_STABLE, v11);
      memcpy_0(cbuff.bufferData, (const void *)(_RBX + 4848), v11);
      R_AllocateConstantBufferEnd((CmdBufState *)_RBX, &cbuff);
      bufferData = cbuff.bufferData;
      bufferSize = cbuff.bufferSize;
      *(_QWORD *)(_RBX + 64) = cbuff.bufferData;
      *(_DWORD *)(_RBX + 72) = bufferSize;
      *(_DWORD *)_RBX |= 4u;
      *(_QWORD *)(_RBX + 400) = bufferData;
      *(_DWORD *)(_RBX + 408) = bufferSize;
      *(_DWORD *)(_RBX + 4) |= 4u;
      *(_QWORD *)(_RBX + 736) = bufferData;
      *(_DWORD *)(_RBX + 744) = bufferSize;
      *(_DWORD *)(_RBX + 8) |= 4u;
      *(_QWORD *)(_RBX + 1072) = bufferData;
      *(_DWORD *)(_RBX + 1080) = bufferSize;
      *(_DWORD *)(_RBX + 12) |= 4u;
    }
  }
}

/*
==============
R_SetupPassStateBits
==============
*/
bool R_SetupPassStateBits(GfxCmdBufContext *context, const GfxStateBits *refStateBits)
{
  GfxCmdBufContext v3; 

  v3 = *context;
  return R_SetState(&v3, refStateBits);
}

