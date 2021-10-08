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
  const char *v7; 
  int beginIndexReady; 
  unsigned __int8 v9; 
  int v10; 
  __int64 pendingSize; 
  unsigned __int64 (__fastcall *flushFct)(); 
  unsigned __int64 v22; 
  int pendingFencesSize; 
  int bufSize; 
  unsigned int v25; 
  bool disableFenceOnAcquire; 
  int endIndexReady; 
  int v28; 
  int v29; 
  int v30; 
  int v32; 
  char *fmt; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 

  _RBX = ringBuffer;
  if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( beginIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1190, ASSERT_TYPE_ASSERT, "(beginIndex >= 0)", (const char *)&queryFormat, "beginIndex >= 0") )
    __debugbreak();
  if ( beginIndex >= endIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1191, ASSERT_TYPE_ASSERT, "( beginIndex ) < ( endIndex )", "%s < %s\n\t%i, %i", "beginIndex", "endIndex", beginIndex, endIndex) )
    __debugbreak();
  if ( (unsigned int)beginIndex >= _RBX->bufSize )
  {
    LODWORD(v35) = _RBX->bufSize;
    LODWORD(v34) = beginIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1192, ASSERT_TYPE_ASSERT, "(unsigned)( beginIndex ) < (unsigned)( ringBuffer->bufSize )", "beginIndex doesn't index ringBuffer->bufSize\n\t%i not in [0, %i)", v34, v35) )
      __debugbreak();
  }
  if ( endIndex > _RBX->bufSize )
  {
    LODWORD(v37) = _RBX->bufSize;
    LODWORD(v36) = endIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1193, ASSERT_TYPE_ASSERT, "( endIndex ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "endIndex", "ringBuffer->bufSize", v36, v37) )
      __debugbreak();
  }
  if ( _RBX->beginIndexReady >= _RBX->bufSize )
  {
    LODWORD(v37) = _RBX->bufSize;
    LODWORD(v36) = _RBX->beginIndexReady;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1194, ASSERT_TYPE_ASSERT, "( ringBuffer->beginIndexReady ) < ( ringBuffer->bufSize )", "%s < %s\n\t%i, %i", "ringBuffer->beginIndexReady", "ringBuffer->bufSize", v36, v37) )
      __debugbreak();
  }
  v7 = "ringBuffer->pendingFencesSize";
  if ( _RBX->pendingFencesSize > _RBX->bufSize )
  {
    LODWORD(v37) = _RBX->bufSize;
    LODWORD(v36) = _RBX->pendingFencesSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1195, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingFencesSize ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "ringBuffer->pendingFencesSize", "ringBuffer->bufSize", v36, v37) )
      __debugbreak();
  }
  if ( beginIndex || (beginIndexReady = _RBX->beginIndexReady, beginIndexReady <= 0) )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v9 = 1;
    v10 = _RBX->bufSize - beginIndexReady;
    _RBX->pendingSize += v10;
    _RBX->beginIndexReady = 0;
  }
  LODWORD(pendingSize) = _RBX->pendingSize;
  if ( !_RBX->settings.disableFenceOnAcquire )
  {
    if ( !_RBX->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    if ( !_RBX->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1130, ASSERT_TYPE_ASSERT, "(ringBuffer->bufSize)", (const char *)&queryFormat, "ringBuffer->bufSize") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+820h]
      vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush; r_globals_t rg
    }
    pendingSize = (unsigned int)_RBX->pendingSize;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcmpeqss xmm2, xmm3, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+18h]
      vblendvps xmm4, xmm3, xmm1, xmm2
      vmulss  xmm0, xmm0, xmm4
      vcvttss2si eax, xmm0
    }
    if ( (int)pendingSize >= _EAX || v9 )
    {
      flushFct = _RBX->settings.flushFct;
      if ( flushFct )
      {
        v22 = ((__int64 (__fastcall *)(__int64, const char *))flushFct)(pendingSize, v7);
      }
      else
      {
        if ( _RBX->settings.notUsingImmediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1139, ASSERT_TYPE_ASSERT, "(!ringBuffer->settings.notUsingImmediateContext)", (const char *)&queryFormat, "!ringBuffer->settings.notUsingImmediateContext") )
          __debugbreak();
        v22 = R_KickImmediateContext(D3D12XBOX_FLUSH_NONE);
      }
      R_DynamicRingBufferInsertGivenFence(_RBX, v22);
      LODWORD(pendingSize) = _RBX->pendingSize;
    }
  }
  pendingFencesSize = _RBX->pendingFencesSize;
  bufSize = _RBX->bufSize;
  v25 = endIndex - beginIndex;
  if ( endIndex - beginIndex + pendingFencesSize + (int)pendingSize <= bufSize )
  {
LABEL_51:
    endIndexReady = _RBX->endIndexReady;
    goto LABEL_52;
  }
  while ( _RBX->writePos != _RBX->readPos )
  {
LABEL_50:
    R_DynamicRingBufferWaitFence(_RBX);
    pendingFencesSize = _RBX->pendingFencesSize;
    LODWORD(pendingSize) = _RBX->pendingSize;
    bufSize = _RBX->bufSize;
    if ( (int)(v25 + pendingSize + pendingFencesSize) <= bufSize )
      goto LABEL_51;
  }
  disableFenceOnAcquire = _RBX->settings.disableFenceOnAcquire;
  if ( !disableFenceOnAcquire || !v9 || v10 != (_DWORD)pendingSize )
  {
    LODWORD(v34) = bufSize;
    LODWORD(fmt) = pendingSize;
    Sys_Error((const ObfuscateErrorText)&stru_14443A510, _RBX->name, disableFenceOnAcquire, v25, fmt, v34);
    goto LABEL_50;
  }
  if ( pendingFencesSize )
  {
    LODWORD(v36) = pendingFencesSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1236, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingFencesSize ) == ( 0 )", "%s == %s\n\t%i, %i", "ringBuffer->pendingFencesSize", "0", v36, 0i64) )
      __debugbreak();
  }
  v32 = v10 + _RBX->endIndexReady;
  _RBX->pendingSize = 0;
  endIndexReady = v32 % _RBX->bufSize;
  _RBX->endIndexReady = endIndexReady;
LABEL_52:
  if ( endIndex > endIndexReady && _RBX->beginIndexReady < endIndexReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1273, ASSERT_TYPE_ASSERT, "(endIndex <= ringBuffer->endIndexReady || ringBuffer->beginIndexReady >= ringBuffer->endIndexReady)", (const char *)&queryFormat, "endIndex <= ringBuffer->endIndexReady || ringBuffer->beginIndexReady >= ringBuffer->endIndexReady") )
    __debugbreak();
  if ( v9 )
    _RBX->beginIndexReady = 0;
  v28 = _RBX->bufSize;
  v29 = v25 + _RBX->pendingSize;
  _RBX->pendingSize = v29;
  if ( v29 > v28 )
  {
    LODWORD(v37) = v28;
    LODWORD(v36) = v29;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1281, ASSERT_TYPE_ASSERT, "( ringBuffer->pendingSize ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "ringBuffer->pendingSize", "ringBuffer->bufSize", v36, v37) )
      __debugbreak();
  }
  v30 = _RBX->bufSize;
  if ( endIndex == v30 )
    endIndex = 0;
  _RBX->beginIndexReady = endIndex;
  if ( endIndex >= v30 )
  {
    LODWORD(v37) = v30;
    LODWORD(v36) = endIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1283, ASSERT_TYPE_ASSERT, "( ringBuffer->beginIndexReady ) < ( ringBuffer->bufSize )", "%s < %s\n\t%i, %i", "ringBuffer->beginIndexReady", "ringBuffer->bufSize", v36, v37) )
      __debugbreak();
  }
  return v9;
}

/*
==============
R_DynamicRingBufferInsertFence
==============
*/
void R_DynamicRingBufferInsertFence(DynamicRingBuffer *ringBuffer, bool force)
{
  __int64 (*flushFct)(void); 
  unsigned __int64 v15; 

  _RBX = ringBuffer;
  if ( !ringBuffer->settings.notUsingImmediateContext && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( !_RBX->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1130, ASSERT_TYPE_ASSERT, "(ringBuffer->bufSize)", (const char *)&queryFormat, "ringBuffer->bufSize") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+820h]
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush; r_globals_t rg
    vxorps  xmm0, xmm0, xmm0
    vcmpeqss xmm2, xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+18h]
    vblendvps xmm3, xmm3, xmm1, xmm2
    vmulss  xmm0, xmm0, xmm3
    vcvttss2si eax, xmm0
  }
  if ( _RBX->pendingSize >= _EAX || force )
  {
    flushFct = (__int64 (*)(void))_RBX->settings.flushFct;
    if ( flushFct )
    {
      v15 = flushFct();
    }
    else
    {
      if ( _RBX->settings.notUsingImmediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 1139, ASSERT_TYPE_ASSERT, "(!ringBuffer->settings.notUsingImmediateContext)", (const char *)&queryFormat, "!ringBuffer->settings.notUsingImmediateContext") )
        __debugbreak();
      v15 = R_KickImmediateContext(D3D12XBOX_FLUSH_NONE);
    }
    R_DynamicRingBufferInsertGivenFence(_RBX, v15);
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
  __int64 v13; 
  GfxCmdBufState *v14; 
  __int64 v18; 
  GfxCmdBufState *v19; 
  __int64 v23; 
  GfxCmdBufState *v24; 
  GfxConstantBuffer outBuffer; 
  char v29[16]; 
  unsigned __int64 val; 

  CodeBuffer = R_GetCodeBuffer(context->source, arg->index);
  if ( !CodeBuffer )
  {
    CodeBufferName = R_GetCodeBufferName(arg->index);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 474, ASSERT_TYPE_ASSERT, "( buffer != nullptr )", "R_SetCBufferFromCode: attempted to bind %s but the buffer pointer was null", CodeBufferName) )
      __debugbreak();
  }
  ((void (__fastcall *)(ID3D12Resource *, char *))CodeBuffer->buffer->m_pFunction[3].AddRef)(CodeBuffer->buffer, v29);
  v7 = truncate_cast<unsigned int,unsigned __int64>(val);
  R_CreateConstantBufferFromWrappedBuffer(CodeBuffer, v7, &outBuffer);
  if ( (arg->shader & 2) != 0 )
  {
    dest = arg->dest;
    state = context->state;
    _RDI = &state->constants[0][dest].bufferData;
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( *_RDI != outBuffer.bufferData || state->constants[0][dest].bufferSize != outBuffer.bufferSize )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+0C8h+outBuffer.baseclass_0.bufferData]
        vmovups xmmword ptr [rdi], xmm0
        vmovsd  xmm1, [rsp+0C8h+outBuffer.buffer]
        vmovsd  qword ptr [rdi+10h], xmm1
      }
      state->constantsDirty[0] |= 1 << dest;
    }
  }
  if ( (arg->shader & 4) != 0 )
  {
    v13 = arg->dest;
    v14 = context->state;
    _RDI = &v14->constants[2][v13].bufferData;
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( *_RDI != outBuffer.bufferData || v14->constants[2][v13].bufferSize != outBuffer.bufferSize )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+0C8h+outBuffer.baseclass_0.bufferData]
        vmovups xmmword ptr [rdi], xmm0
        vmovsd  xmm1, [rsp+0C8h+outBuffer.buffer]
        vmovsd  qword ptr [rdi+10h], xmm1
      }
      v14->constantsDirty[2] |= 1 << v13;
    }
  }
  if ( (arg->shader & 8) != 0 )
  {
    v18 = arg->dest;
    v19 = context->state;
    _RDI = &v19->constants[3][v18].bufferData;
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( *_RDI != outBuffer.bufferData || v19->constants[3][v18].bufferSize != outBuffer.bufferSize )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+0C8h+outBuffer.baseclass_0.bufferData]
        vmovups xmmword ptr [rdi], xmm0
        vmovsd  xmm1, [rsp+0C8h+outBuffer.buffer]
        vmovsd  qword ptr [rdi+10h], xmm1
      }
      v19->constantsDirty[3] |= 1 << v18;
    }
  }
  if ( (arg->shader & 0x10) != 0 )
  {
    v23 = arg->dest;
    v24 = context->state;
    _RBX = &v24->constants[1][v23].bufferData;
    if ( !outBuffer.bufferData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2101, ASSERT_TYPE_ASSERT, "(rhs->bufferData != 0)", (const char *)&queryFormat, "rhs->bufferData != NULL") )
      __debugbreak();
    if ( *_RBX != outBuffer.bufferData || v24->constants[1][v23].bufferSize != outBuffer.bufferSize )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+0C8h+outBuffer.baseclass_0.bufferData]
        vmovups xmmword ptr [rbx], xmm0
        vmovsd  xmm1, [rsp+0C8h+outBuffer.buffer]
        vmovsd  qword ptr [rbx+10h], xmm1
      }
      v24->constantsDirty[1] |= 1 << v23;
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
bool R_SetPassShaderObjectArguments(GfxCmdBufContext *context, const MaterialShaderArgument *arg, unsigned int argCount, const char *fileAndLine)
{
  MaterialArgumentType type; 
  bool v6; 
  const MaterialShaderArgument *v8; 
  unsigned int dest; 
  __int64 v12; 
  unsigned int index; 
  const float *CodeConstant; 
  size_t v16; 
  GfxCmdBufState *v18; 
  GfxCmdBufSourceState *v19; 
  unsigned __int8 *p_shader; 
  const GfxImage *CodeImageTexture; 
  GfxImage *blackImage; 
  const char **p_name; 
  const char *v24; 
  bool result; 
  const char *DrawListTypeName; 
  unsigned __int8 v27; 
  __int64 v29; 
  __int64 v30; 
  GfxCmdBufSourceState *source[2]; 

  type = arg->type;
  v6 = 0;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v8 = arg;
  for ( _RSI = context; type == MTL_ARG_CODE_CONST; ++v8 )
  {
    dest = v8->dest;
    __asm { vmovups xmm6, xmmword ptr [rsi] }
    if ( v8->index >= 0xA0u )
      dest += 3;
    if ( dest >= 0x20 )
    {
      LODWORD(v30) = 32;
      LODWORD(v29) = dest;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 283, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->perObjectConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->perObjectConstantState )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v12 = v8->dest;
    __asm
    {
      vpextrq rdi, xmm6, 1
      vmovdqa xmmword ptr [rsp+88h+source], xmm6
    }
    if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)source, v8, (GfxShaderConstantState *)(_RDI + 4 * v12 + 6288)) )
    {
      index = v8->index;
      __asm { vmovdqa xmmword ptr [rsp+88h+source], xmm6 }
      CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)source, index);
      v16 = 16i64;
      if ( v8->index >= 0xA0u )
        v16 = 64i64;
      memcpy_0((void *)(_RDI + 16 * (v8->dest + 271i64)), CodeConstant, v16);
      v6 = 1;
    }
    if ( !--argCount )
      goto LABEL_20;
    type = v8[1].type;
  }
  if ( type == MTL_ARG_CODE_TEXTURE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsp+88h+source], xmm0
    }
    v18 = (GfxCmdBufState *)source[1];
    v19 = source[0];
    p_shader = &v8->shader;
    while ( 1 )
    {
      CodeImageTexture = R_GetCodeImageTexture(v19, *(unsigned __int16 *)(p_shader + 3));
      blackImage = (GfxImage *)CodeImageTexture;
      if ( !CodeImageTexture || !R_IsImageViewValid(v18, CodeImageTexture) )
      {
        if ( r_bindingValidation->current.enabled )
        {
          p_name = &v18->material->name;
          if ( p_name )
            v24 = *p_name;
          else
            v24 = "<NULL>";
          DrawListTypeName = R_GetDrawListTypeName(v19->drawListType);
          R_TextureFromCodeError(*(unsigned __int16 *)(p_shader + 3), v24, DrawListTypeName, 0);
        }
        blackImage = rgp.blackImage;
      }
      v27 = *p_shader;
      if ( (*p_shader & 2) != 0 )
      {
        R_SetVertexTextureInternal(v18, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
        v27 = *p_shader;
      }
      if ( (v27 & 8) != 0 )
      {
        R_SetDomainTextureInternal(v18, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
        v27 = *p_shader;
      }
      if ( (v27 & 0x10) != 0 )
        R_SetPixelTextureInternal(v18, *(unsigned __int16 *)(p_shader + 1), blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
      if ( !--argCount )
        break;
      p_shader += 6;
      if ( *(p_shader - 1) != 1 )
        goto LABEL_32;
    }
LABEL_20:
    result = v6;
    goto LABEL_35;
  }
LABEL_32:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 592, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    __debugbreak();
  result = 0;
LABEL_35:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
}

/*
==============
R_SetPassShaderStableArguments
==============
*/
bool R_SetPassShaderStableArguments(GfxCmdBufContext *context, const MaterialShaderArgument *arg, unsigned int argCount, const char *fileAndLine)
{
  const MaterialShaderArgument *v5; 
  MaterialArgumentType type; 
  const char *v7; 
  unsigned int dest; 
  __int64 v12; 
  unsigned int v14; 
  const float *CodeConstant; 
  size_t v16; 
  bool result; 
  GfxCmdBufState *v19; 
  GfxCmdBufSourceState *v20; 
  const GfxImage *CodeImageTexture; 
  GfxImage *blackImage; 
  const char **p_name; 
  const char *v24; 
  const char *DrawListTypeName; 
  unsigned __int8 shader; 
  GfxCmdBufState *v28; 
  GfxCmdBufSourceState *v29; 
  const GfxImage *CodePersistentImageTexture; 
  GfxImage *v31; 
  const char **v32; 
  const char *v33; 
  const char *v34; 
  unsigned __int8 v35; 
  GfxCmdBufState *v37; 
  GfxCmdBufSourceState *v38; 
  GfxWrappedBuffer *CodeBuffer; 
  const char **v40; 
  const char *v41; 
  const char *v42; 
  unsigned __int8 v43; 
  GfxCmdBufState *v45; 
  GfxCmdBufSourceState *v46; 
  GfxWrappedBuffer *CodePersistentBuffer; 
  const char **v48; 
  const char *v49; 
  const char *v50; 
  unsigned __int8 v51; 
  MaterialTextureDef *textureTable; 
  unsigned __int16 index; 
  const Material *material; 
  unsigned __int8 v57; 
  const GfxImage *image; 
  unsigned int v60; 
  const GfxImage *v62; 
  const char **v63; 
  const char *v64; 
  const char *v65; 
  const GfxTexture *Resident; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  GfxCmdBufSourceState *source[2]; 
  bool v77; 

  v5 = arg;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  type = arg->type;
  v7 = fileAndLine;
  v77 = 0;
  _R13 = context;
  if ( type )
  {
LABEL_14:
    if ( type == MTL_ARG_CODE_TEXTURE )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r13+0]
        vmovups xmmword ptr [rsp+0A8h+source], xmm0
      }
      v19 = (GfxCmdBufState *)source[1];
      v20 = source[0];
      while ( 1 )
      {
        CodeImageTexture = R_GetCodeImageTexture(v20, v5->index);
        blackImage = (GfxImage *)CodeImageTexture;
        if ( !CodeImageTexture || !R_IsImageViewValid(v19, CodeImageTexture) )
        {
          if ( r_bindingValidation->current.enabled )
          {
            p_name = &v19->material->name;
            if ( p_name )
              v24 = *p_name;
            else
              v24 = "<NULL>";
            DrawListTypeName = R_GetDrawListTypeName(v20->drawListType);
            R_TextureFromCodeError(v5->index, v24, DrawListTypeName, 0);
          }
          blackImage = rgp.blackImage;
        }
        shader = v5->shader;
        if ( (shader & 2) != 0 )
        {
          R_SetVertexTextureInternal(v19, v5->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
          shader = v5->shader;
        }
        if ( (shader & 8) != 0 )
        {
          R_SetDomainTextureInternal(v19, v5->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
          shader = v5->shader;
        }
        if ( (shader & 0x10) != 0 )
          R_SetPixelTextureInternal(v19, v5->dest, blackImage, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
        if ( !--argCount )
          break;
        type = v5[1].type;
        ++v5;
        if ( type != MTL_ARG_CODE_TEXTURE )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      if ( type == MTL_ARG_CODE_PERSISTENT_TEXTURE )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r13+0]
          vmovups xmmword ptr [rsp+0A8h+source], xmm0
        }
        v28 = (GfxCmdBufState *)source[1];
        v29 = source[0];
        while ( 1 )
        {
          CodePersistentImageTexture = R_GetCodePersistentImageTexture(v29, v5->index);
          v31 = (GfxImage *)CodePersistentImageTexture;
          if ( !CodePersistentImageTexture || !R_IsImageViewValid(v28, CodePersistentImageTexture) )
          {
            if ( r_bindingValidation->current.enabled )
            {
              v32 = &v28->material->name;
              if ( v32 )
                v33 = *v32;
              else
                v33 = "<NULL>";
              v34 = R_GetDrawListTypeName(v29->drawListType);
              R_TextureFromCodeError(v5->index, v33, v34, 1);
            }
            v31 = rgp.blackImage;
          }
          v35 = v5->shader;
          if ( (v35 & 2) != 0 )
          {
            R_SetVertexTextureInternal(v28, v5->dest, v31, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(352)");
            v35 = v5->shader;
          }
          if ( (v35 & 8) != 0 )
          {
            R_SetDomainTextureInternal(v28, v5->dest, v31, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(355)");
            v35 = v5->shader;
          }
          if ( (v35 & 0x10) != 0 )
            R_SetPixelTextureInternal(v28, v5->dest, v31, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(358)");
          if ( !--argCount )
            break;
          type = v5[1].type;
          ++v5;
          if ( type != MTL_ARG_CODE_PERSISTENT_TEXTURE )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        if ( type == MTL_ARG_CODE_BUFFER )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r13+0]
            vmovups xmmword ptr [rsp+0A8h+source], xmm0
          }
          v37 = (GfxCmdBufState *)source[1];
          v38 = source[0];
          while ( 1 )
          {
            CodeBuffer = (GfxWrappedBuffer *)R_GetCodeBuffer(v38, v5->index);
            if ( !CodeBuffer )
            {
              if ( r_bindingValidation->current.enabled )
              {
                v40 = &v37->material->name;
                if ( v40 )
                  v41 = *v40;
                else
                  v41 = "<NULL>";
                v42 = R_GetDrawListTypeName(v38->drawListType);
                R_BufferFromCodeError(v5->index, v41, v42, 0);
              }
              CodeBuffer = &gfxBuf.dummyBuffer;
            }
            v43 = v5->shader;
            if ( (v43 & 2) != 0 )
            {
              R_SetResourceInternal_1(v37, GFX_SHADER_IMAGE_SET_VS, v5->dest, &CodeBuffer->view);
              v43 = v5->shader;
            }
            if ( (v43 & 4) != 0 )
            {
              R_SetDescriptorInRange(v37->descState, HS_VIEW_RANGE, v5->dest, CodeBuffer->view.view);
              v43 = v5->shader;
            }
            if ( (v43 & 8) != 0 )
            {
              R_SetResourceInternal_1(v37, GFX_SHADER_IMAGE_SET_DS, v5->dest, &CodeBuffer->view);
              v43 = v5->shader;
            }
            if ( (v43 & 0x10) != 0 )
              R_SetResourceInternal_1(v37, GFX_SHADER_IMAGE_SET_PS, v5->dest, &CodeBuffer->view);
            if ( !--argCount )
              break;
            type = v5[1].type;
            ++v5;
            if ( type != MTL_ARG_CODE_BUFFER )
              goto LABEL_69;
          }
        }
        else
        {
LABEL_69:
          if ( type == MTL_ARG_CODE_PERSISTENT_BUFFER )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r13+0]
              vmovups xmmword ptr [rsp+0A8h+source], xmm0
            }
            v45 = (GfxCmdBufState *)source[1];
            v46 = source[0];
            while ( 1 )
            {
              CodePersistentBuffer = (GfxWrappedBuffer *)R_GetCodePersistentBuffer(v46, v5->index);
              if ( !CodePersistentBuffer )
              {
                if ( r_bindingValidation->current.enabled )
                {
                  v48 = &v45->material->name;
                  if ( v48 )
                    v49 = *v48;
                  else
                    v49 = "<NULL>";
                  v50 = R_GetDrawListTypeName(v46->drawListType);
                  R_BufferFromCodeError(v5->index, v49, v50, 1);
                }
                CodePersistentBuffer = &gfxBuf.dummyBuffer;
              }
              v51 = v5->shader;
              if ( (v51 & 2) != 0 )
              {
                R_SetResourceInternal_1(v45, GFX_SHADER_IMAGE_SET_VS, v5->dest, &CodePersistentBuffer->view);
                v51 = v5->shader;
              }
              if ( (v51 & 4) != 0 )
              {
                R_SetDescriptorInRange(v45->descState, HS_VIEW_RANGE, v5->dest, CodePersistentBuffer->view.view);
                v51 = v5->shader;
              }
              if ( (v51 & 8) != 0 )
              {
                R_SetResourceInternal_1(v45, GFX_SHADER_IMAGE_SET_DS, v5->dest, &CodePersistentBuffer->view);
                v51 = v5->shader;
              }
              if ( (v51 & 0x10) != 0 )
                R_SetResourceInternal_1(v45, GFX_SHADER_IMAGE_SET_PS, v5->dest, &CodePersistentBuffer->view);
              if ( !--argCount )
                break;
              type = v5[1].type;
              ++v5;
              if ( type != MTL_ARG_CODE_PERSISTENT_BUFFER )
                goto LABEL_88;
            }
          }
          else
          {
LABEL_88:
            textureTable = _R13->state->material->textureTable;
            if ( type == MTL_ARG_MATERIAL_TEXTURE )
            {
              while ( 1 )
              {
                __asm { vmovups xmm0, xmmword ptr [r13+0] }
                index = v5->index;
                __asm { vpextrq r15, xmm0, 1 }
                material = _R15->material;
                if ( textureTable->index != index )
                {
                  do
                  {
                    if ( ++textureTable == &material->textureTable[material->textureCount] )
                    {
                      LODWORD(v73) = material->textureCount;
                      LODWORD(v72) = index;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 526, ASSERT_TYPE_SANITY, "(texDef != &material->textureTable[material->textureCount])", "%s\n\t\"material '%s' is missing a required named texture.  Looking for texDef 0x%08x, with count %d.\"", "texDef != &material->textureTable[material->textureCount]", material->name, v72, v73) )
                        __debugbreak();
                    }
                    index = v5->index;
                  }
                  while ( textureTable->index != index );
                  _R13 = context;
                  v7 = fileAndLine;
                }
                v57 = v5->shader;
                image = textureTable->image;
                if ( (v57 & 2) != 0 )
                {
                  R_SetVertexTextureInternal(_R15, v5->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(536)");
                  v57 = v5->shader;
                }
                if ( (v57 & 8) != 0 )
                {
                  R_SetDomainTextureInternal(_R15, v5->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(539)");
                  v57 = v5->shader;
                }
                if ( (v57 & 0x10) != 0 )
                  R_SetPixelTextureInternal(_R15, v5->dest, image, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp(542)");
                if ( !--argCount )
                  break;
                type = v5[1].type;
                ++v5;
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
                  __asm { vmovups xmm0, xmmword ptr [r13+0] }
                  v60 = v5->index;
                  __asm
                  {
                    vmovq   rbp, xmm0
                    vmovups xmmword ptr [rsp+0A8h+source], xmm0
                  }
                  v62 = R_GetCodeImageTexture((const GfxCmdBufSourceState *)_RBP, v60);
                  if ( v62 )
                  {
                    if ( (v5->shader & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 425, ASSERT_TYPE_ASSERT, "(arg->shader & (1 << MTL_PIXEL_SHADER))", (const char *)&queryFormat, "arg->shader & (1 << MTL_PIXEL_SHADER)") )
                      __debugbreak();
                    Resident = R_Texture_GetResident(v62->textureId);
                    R_SetDescriptorInRange(*(GfxDescriptorState **)source[1]->input.consts[43].v, PS_RW_VIEW_RANGE, v5->dest, Resident->shaderRWView.rwView);
                  }
                  else if ( r_bindingValidation->current.enabled )
                  {
                    v63 = *(const char ***)source[1]->input.consts[64].v;
                    if ( v63 )
                      v64 = *v63;
                    else
                      v64 = "<NULL>";
                    v65 = R_GetDrawListTypeName((GfxDrawListType)*(_DWORD *)(_RBP + 11656));
                    R_TextureFromCodeError(v5->index, v64, v65, 0);
                  }
                  if ( !--argCount )
                    break;
                  type = v5[1].type;
                  ++v5;
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
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r13+0]
                      vmovups xmmword ptr [rsp+0A8h+source], xmm0
                    }
                    R_SetRWBufferFromCode((GfxCmdBufContext *)source, v5, v7);
                    if ( !--argCount )
                      break;
                    type = v5[1].type;
                    ++v5;
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
                    result = 0;
                    goto LABEL_125;
                  }
                  while ( 1 )
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r13+0]
                      vmovups xmmword ptr [rsp+0A8h+source], xmm0
                    }
                    R_SetCBufferFromCode((GfxCmdBufContext *)source, v5, v7);
                    if ( !--argCount )
                      break;
                    ++v5;
                    if ( v5->type != MTL_ARG_CODE_CBUFFER )
                      goto LABEL_122;
                  }
                }
              }
            }
          }
        }
      }
    }
    result = v77;
    goto LABEL_125;
  }
  while ( 1 )
  {
    dest = v5->dest;
    __asm { vmovups xmm6, xmmword ptr [r13+0] }
    if ( v5->index >= 0xA0u )
      dest += 3;
    if ( dest >= 0x46 )
    {
      LODWORD(v71) = 70;
      LODWORD(v70) = dest;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->stableConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->stableConstantState )\n\t%i not in [0, %i)", v70, v71) )
        __debugbreak();
    }
    v12 = v5->dest;
    __asm
    {
      vpextrq rdi, xmm6, 1
      vmovdqa xmmword ptr [rsp+0A8h+source], xmm6
    }
    if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)source, v5, (GfxShaderConstantState *)(_RDI + 4 * v12 + 6416)) )
    {
      v14 = v5->index;
      __asm { vmovdqa xmmword ptr [rsp+0A8h+source], xmm6 }
      CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)source, v14);
      v16 = 16i64;
      if ( v5->index >= 0xA0u )
        v16 = 64i64;
      memcpy_0((void *)(_RDI + 16 * (v5->dest + 303i64)), CodeConstant, v16);
      result = 1;
      v77 = 1;
    }
    else
    {
      result = v77;
    }
    if ( !--argCount )
      break;
    type = v5[1].type;
    ++v5;
    if ( type )
      goto LABEL_14;
  }
LABEL_125:
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  return result;
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
  GfxCmdBufState *v6; 
  unsigned __int8 v7; 
  __int64 v8; 
  GfxCmdBufState *v10; 
  const MaterialTechnique *technique; 
  unsigned __int8 m_colorRtCount; 
  unsigned __int8 colorRtCount; 
  GfxPixelFormat v14; 
  GfxPixelFormat format; 
  int v16; 
  const MaterialTechnique *v17; 
  int v18; 
  unsigned __int8 i; 
  const Material *v20; 
  const char *name; 
  __int64 v22; 
  __int64 v23; 
  const char *v24; 
  const char *v25; 
  GfxCmdBufContext v27; 

  _RDI = context;
  Profile_Begin(140);
  state = _RDI->state;
  material = state->material;
  p_stateBits = &state->technique->stateBits;
  if ( _RDI->source->viewMode == VIEW_MODE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2070, ASSERT_TYPE_ASSERT, "(context.source->viewMode != VIEW_MODE_NONE)", (const char *)&queryFormat, "context.source->viewMode != VIEW_MODE_NONE") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+68h+var_38], xmm0
  }
  if ( !R_SetState(&v27, p_stateBits) )
    goto LABEL_33;
  v6 = _RDI->state;
  if ( material->constantBufferCount )
  {
    if ( !material->constantBufferIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 902, ASSERT_TYPE_ASSERT, "(material->constantBufferIndex)", (const char *)&queryFormat, "material->constantBufferIndex") )
      __debugbreak();
    v7 = material->constantBufferIndex[v6->techType];
    if ( v7 != 0xFF )
    {
      if ( v7 >= material->constantBufferCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 907, ASSERT_TYPE_ASSERT, "(constantBufferIndex < material->constantBufferCount)", (const char *)&queryFormat, "constantBufferIndex < material->constantBufferCount") )
        __debugbreak();
      v8 = (__int64)&material->constantBufferTable[v7];
      if ( *(_DWORD *)v8 )
        R_VSSetConstantBuffer(v6, 3u, (const GfxConstantBuffer *)(v8 + 48));
      if ( *(_DWORD *)(v8 + 4) )
        R_HSSetConstantBuffer(v6, 3u, (const GfxConstantBuffer *)(v8 + 72));
      if ( *(_DWORD *)(v8 + 8) )
        R_DSSetConstantBuffer(v6, 3u, (const GfxConstantBuffer *)(v8 + 96));
      if ( *(_DWORD *)(v8 + 12) )
        R_PSSetConstantBuffer(v6, 3u, (const GfxConstantBuffer *)(v8 + 120));
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+68h+var_38], xmm0
  }
  R_FlushCustomPixelShaderResources(&v27);
  if ( r_rtFormatValidation->current.enabled )
  {
    v10 = v6;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 2015, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    technique = v6->technique;
    m_colorRtCount = v6->rtGroup.m_colorRtCount;
    colorRtCount = technique->colorRtCount;
    if ( colorRtCount >= m_colorRtCount )
    {
      v14 = GFX_PF_INVALID;
      format = GFX_PF_INVALID;
      v16 = 0;
      while ( 1 )
      {
        v17 = v10->technique;
        v18 = 0;
        for ( i = 0; i < v10->rtGroup.m_colorRtCount; ++i )
        {
          v14 = v17->renderTargetFormats.colorRtFormats[i];
          format = R_RT_Handle::GetSurface(&v10->rtGroup.m_colorRts[i])->m_image.m_base.format;
          if ( v14 != format )
            break;
          ++v18;
        }
        if ( v18 == v10->rtGroup.m_colorRtCount )
          goto LABEL_35;
        if ( ++v16 )
        {
          v20 = v10->material;
          name = v10->technique->name;
          v22 = (__int64)v20->name;
          v23 = (__int64)v20->techniqueSet->name;
          v24 = PixelFormat_GetName(format);
          v25 = PixelFormat_GetName(v14);
          R_WarnOncePerFrame(R_WARN_MATERIAL_RENDERTARGET_MISMATCH, v25, v24, v22, v23, name);
          goto LABEL_33;
        }
      }
    }
    R_WarnOncePerFrame(R_WARN_MATERIAL_RENDERTARGET_COUNT_MISMATCH, colorRtCount, m_colorRtCount, v6->material->name, v6->material->techniqueSet->name, technique->name);
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
  unsigned __int16 v12; 
  void *bufferData; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  _RSI = context;
  state = context->state;
  technique = state->technique;
  perObjArgCount = technique->perObjArgCount;
  if ( perObjArgCount )
  {
    perObjArgSize = technique->perObjArgSize;
    v8 = __OFSUB__(state->perObjectConstantBoundSize, perObjArgSize);
    v7 = state->perObjectConstantBoundSize - perObjArgSize < 0;
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    perPrimArgCount = technique->perPrimArgCount;
    args = technique->args;
    __asm { vmovups xmmword ptr [rsp+58h+cbuff.bufferData], xmm0 }
    if ( v7 ^ v8 | R_SetPassShaderObjectArguments((GfxCmdBufContext *)&cbuff, &args[perPrimArgCount], perObjArgCount, fileAndLine) )
    {
      v12 = technique->perObjArgSize;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vpextrq rbx, xmm0, 1
      }
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 768, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6700) = v12;
      _RAX = R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_PER_OBJECT, v12);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovq   rcx, xmm0; void *
        vmovups xmmword ptr [rsp+58h+cbuff.bufferData], xmm0
      }
      memcpy_0(_RCX, (const void *)(_RBX + 4336), v12);
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
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  unsigned __int8 perPrimArgCount; 
  const MaterialShaderArgument *args; 
  bool v10; 
  int v11; 
  char v12; 
  unsigned int dest; 
  __int64 v14; 
  unsigned int index; 
  const float *CodeConstant; 
  size_t v18; 
  unsigned __int16 perPrimArgSize; 
  void *bufferData; 
  unsigned int bufferSize; 
  __int64 v28; 
  __int64 v29; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 
  void *retaddr; 

  _RAX = &retaddr;
  state = context->state;
  _R15 = context;
  technique = state->technique;
  perPrimArgCount = technique->perPrimArgCount;
  if ( perPrimArgCount )
  {
    args = technique->args;
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovups xmm6, xmmword ptr [rcx]
    }
    v10 = state->perPrimConstantBoundSize < technique->perPrimArgSize;
    v11 = perPrimArgCount;
    v12 = 0;
    if ( args->type )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 564, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
        __debugbreak();
      v12 = 0;
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
          LODWORD(v29) = 80;
          LODWORD(v28) = dest;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( (arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) ) < (unsigned)( ( sizeof( *array_counter( context.state->perPrimConstantState ) ) + 0 ) )", "(arg->index < CONST_SRC_FIRST_CODE_MATRIX) ? arg->dest : (arg->dest + 3) doesn't index ARRAY_COUNT( context.state->perPrimConstantState )\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        v14 = args->dest;
        __asm
        {
          vpextrq rsi, xmm6, 1
          vmovdqa xmmword ptr [rsp+98h+cbuff.bufferData], xmm6
        }
        if ( R_NeedToSetShaderConstantFromCode((GfxCmdBufContext *)&cbuff, args, (GfxShaderConstantState *)(_RSI + 4 * v14 + 5968)) )
        {
          index = args->index;
          __asm { vmovdqa xmmword ptr [rsp+98h+cbuff.bufferData], xmm6 }
          CodeConstant = R_GetCodeConstant((GfxCmdBufContext *)&cbuff, index);
          v18 = 16i64;
          if ( args->index >= 0xA0u )
            v18 = 64i64;
          memcpy_0((void *)(_RSI + 16 * (args->dest + 191i64)), CodeConstant, v18);
          v12 = 1;
        }
        if ( !--v11 )
          break;
        ++args;
        if ( args->type )
          goto LABEL_14;
      }
    }
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
    if ( v10 | (unsigned __int8)v12 )
    {
      perPrimArgSize = technique->perPrimArgSize;
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vpextrq rbx, xmm0, 1
      }
      if ( !perPrimArgSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 705, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6696) = perPrimArgSize;
      _RAX = R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_PER_PRIM, perPrimArgSize);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovq   rcx, xmm0; void *
        vmovups xmmword ptr [rsp+98h+cbuff.bufferData], xmm0
      }
      memcpy_0(_RCX, (const void *)(_RBX + 3056), perPrimArgSize);
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
  unsigned __int64 v10; 
  MaterialShaderArgument *args; 
  unsigned __int16 v12; 
  void *bufferData; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  _RSI = context;
  state = context->state;
  technique = state->technique;
  stableArgCount = technique->stableArgCount;
  if ( stableArgCount )
  {
    stableArgSize = technique->stableArgSize;
    v8 = __OFSUB__(state->stableConstantBoundSize, stableArgSize);
    v7 = state->stableConstantBoundSize - stableArgSize < 0;
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    v10 = technique->perPrimArgCount + (unsigned __int64)technique->perObjArgCount;
    args = technique->args;
    __asm { vmovups xmmword ptr [rsp+58h+cbuff.bufferData], xmm0 }
    if ( v7 ^ v8 | R_SetPassShaderStableArguments((GfxCmdBufContext *)&cbuff, &args[v10], stableArgCount, fileAndLine) )
    {
      v12 = technique->stableArgSize;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vpextrq rbx, xmm0, 1
      }
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_shade.cpp", 831, ASSERT_TYPE_ASSERT, "(argSize != 0)", (const char *)&queryFormat, "argSize != 0") )
        __debugbreak();
      *(_DWORD *)(_RBX + 6704) = v12;
      _RAX = R_AllocateConstantBufferBegin(&result, (CmdBufState *)_RBX, CBUFFER_STABLE, v12);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovq   rcx, xmm0; void *
        vmovups xmmword ptr [rsp+58h+cbuff.bufferData], xmm0
      }
      memcpy_0(_RCX, (const void *)(_RBX + 4848), v12);
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
  GfxCmdBufContext v4; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  return R_SetState(&v4, refStateBits);
}

