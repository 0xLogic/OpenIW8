/*
==============
R_CopyCommandListFencePending
==============
*/

int __fastcall R_CopyCommandListFencePending(const unsigned __int64 *fence)
{
  return ?R_CopyCommandListFencePending@@YAHPEB_K@Z(fence);
}

/*
==============
R_WaitCopyCommandListFence
==============
*/

void __fastcall R_WaitCopyCommandListFence(unsigned __int64 fence)
{
  ?R_WaitCopyCommandListFence@@YAX_K@Z(fence);
}

/*
==============
R_FinishCommandList
==============
*/

void __fastcall R_FinishCommandList(GfxCmdBufHeapContext context)
{
  ?R_FinishCommandList@@YAXW4GfxCmdBufHeapContext@@@Z(context);
}

/*
==============
R_FlushDefragDMACommandList
==============
*/

unsigned __int64 __fastcall R_FlushDefragDMACommandList()
{
  return ?R_FlushDefragDMACommandList@@YA_KXZ();
}

/*
==============
R_WaitDefragDMACommandListFence
==============
*/

void __fastcall R_WaitDefragDMACommandListFence(unsigned __int64 fence)
{
  ?R_WaitDefragDMACommandListFence@@YAX_K@Z(fence);
}

/*
==============
R_FlushComputeCommandList
==============
*/

unsigned __int64 __fastcall R_FlushComputeCommandList(unsigned int computeQueueIndex)
{
  return ?R_FlushComputeCommandList@@YA_KI@Z(computeQueueIndex);
}

/*
==============
R_FlushCommandQueue
==============
*/

D3DCommandListHandle *__fastcall R_FlushCommandQueue(D3DCommandQueueHandle *handle, unsigned __int64 *fence, bool setupNextAllocator)
{
  return ?R_FlushCommandQueue@@YAPEAUD3DCommandListHandle@@PEAUD3DCommandQueueHandle@@PEA_K_N@Z(handle, fence, setupNextAllocator);
}

/*
==============
R_KickCopyCommandList
==============
*/

unsigned __int64 __fastcall R_KickCopyCommandList()
{
  return ?R_KickCopyCommandList@@YA_KXZ();
}

/*
==============
R_SetupNextCommandAllocHandle
==============
*/

void __fastcall R_SetupNextCommandAllocHandle(D3DCommandQueueHandle *handle, unsigned __int64 fence)
{
  ?R_SetupNextCommandAllocHandle@@YAXPEAUD3DCommandQueueHandle@@_K@Z(handle, fence);
}

/*
==============
R_InitCommandQueue
==============
*/

void __fastcall R_InitCommandQueue(D3D12_COMMAND_LIST_TYPE type, unsigned int numAllocs, unsigned int numLists, const char *name, D3DCommandQueueHandle *commandQueueHandle, D3DCommandAllocHandle *commandAllocHandle, D3DCommandListHandle *commandListHandle, unsigned int pipeIndex, unsigned int queueIndex)
{
  ?R_InitCommandQueue@@YAXW4D3D12_COMMAND_LIST_TYPE@@IIPEBDPEAUD3DCommandQueueHandle@@PEAUD3DCommandAllocHandle@@PEAUD3DCommandListHandle@@II@Z(type, numAllocs, numLists, name, commandQueueHandle, commandAllocHandle, commandListHandle, pipeIndex, queueIndex);
}

/*
==============
R_KickImmediateContext
==============
*/

unsigned __int64 __fastcall R_KickImmediateContext(D3D12XBOX_FLUSH flushFlags)
{
  return ?R_KickImmediateContext@@YA_KW4D3D12XBOX_FLUSH@@@Z(flushFlags);
}

/*
==============
R_FlushImmediateContext
==============
*/

unsigned __int64 __fastcall R_FlushImmediateContext()
{
  return ?R_FlushImmediateContext@@YA_KXZ();
}

/*
==============
R_InitContext
==============
*/

void __fastcall R_InitContext(const GfxBackEndData *data, GfxCmdBuf *cmdBuf)
{
  ?R_InitContext@@YAXPEBUGfxBackEndData@@PEAUGfxCmdBuf@@@Z(data, cmdBuf);
}

/*
==============
R_KickDefragDMACommandList
==============
*/

unsigned __int64 __fastcall R_KickDefragDMACommandList()
{
  return ?R_KickDefragDMACommandList@@YA_KXZ();
}

/*
==============
R_DefragDMACommandListFencePending
==============
*/

int __fastcall R_DefragDMACommandListFencePending(const unsigned __int64 *fence)
{
  return ?R_DefragDMACommandListFencePending@@YAHPEB_K@Z(fence);
}

/*
==============
R_ShutdownCmdBuf
==============
*/

void __fastcall R_ShutdownCmdBuf(GfxCmdBuf *cmdBuf, const GfxBackEndData *cmdData)
{
  ?R_ShutdownCmdBuf@@YAXPEAUGfxCmdBuf@@PEBUGfxBackEndData@@@Z(cmdBuf, cmdData);
}

/*
==============
R_FlushCopyCommandList
==============
*/

unsigned __int64 __fastcall R_FlushCopyCommandList()
{
  return ?R_FlushCopyCommandList@@YA_KXZ();
}

/*
==============
R_ExecuteCommandListsOnQueue
==============
*/

void __fastcall R_ExecuteCommandListsOnQueue(D3DCommandQueueHandle *handle, unsigned int cmdListsCount, ID3D12CommandList **cmdLists)
{
  ?R_ExecuteCommandListsOnQueue@@YAXPEAUD3DCommandQueueHandle@@IPEAPEAUID3D12CommandList@@@Z(handle, cmdListsCount, cmdLists);
}

/*
==============
R_SetupCommandListHandle
==============
*/

D3DCommandListHandle *__fastcall R_SetupCommandListHandle(D3DCommandQueueHandle *handle)
{
  return ?R_SetupCommandListHandle@@YAPEAUD3DCommandListHandle@@PEAUD3DCommandQueueHandle@@@Z(handle);
}

/*
==============
R_InitCmdBuf
==============
*/

void __fastcall R_InitCmdBuf(GfxCmdBuf *cmdBuf, const GfxBackEndData *cmdData, const char *debugName)
{
  ?R_InitCmdBuf@@YAXPEAUGfxCmdBuf@@PEBUGfxBackEndData@@PEBD@Z(cmdBuf, cmdData, debugName);
}

/*
==============
R_CopyCommandListFencePending
==============
*/
_BOOL8 R_CopyCommandListFencePending(const unsigned __int64 *fence)
{
  g_dx.copyCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.copyCommandQueue.fence->m_pFunction[2].Release)(g_dx.copyCommandQueue.fence);
  return g_dx.copyCommandQueue.lastQueriedCompletedFenceValue < *fence;
}

/*
==============
R_CustomD3D12XboxCmdBufAllocCallback
==============
*/
unsigned __int64 R_CustomD3D12XboxCmdBufAllocCallback(ID3D12CommandAllocator *d3dCmdAlloc, ID3D12CommandList *d3dCmdList, unsigned int xmemAllocType, unsigned __int64 sizeInBytes, unsigned int alignmentInBytes, unsigned int flags, unsigned __int64 userContext)
{
  GfxCmdBufHeapInfo *v9; 
  __int64 v10; 
  unsigned int v11; 
  $ED4747794882EE4A35DCF49F1A10AB27 *v12; 
  size_t v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  __int64 v17; 

  if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 245, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
    __debugbreak();
  if ( alignmentInBytes > s_cmdBufHeapAlign[userContext] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 246, ASSERT_TYPE_ASSERT, "(alignmentInBytes <= s_cmdBufHeapAlign[userContext])", (const char *)&queryFormat, "alignmentInBytes <= s_cmdBufHeapAlign[userContext]") )
    __debugbreak();
  if ( userContext >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 247, ASSERT_TYPE_ASSERT, "(userContext < ( sizeof( *array_counter( s_cmdBufHeapInfos ) ) + 0 ))", (const char *)&queryFormat, "userContext < ARRAY_COUNT( s_cmdBufHeapInfos )") )
    __debugbreak();
  v9 = &s_cmdBufHeapInfos[userContext];
  if ( !v9->handle.heapBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 252, ASSERT_TYPE_ASSERT, "(cmdBufHandle->heapBuf)", (const char *)&queryFormat, "cmdBufHandle->heapBuf") )
    __debugbreak();
  if ( xmemAllocType != v9->handle.xallocHeapType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 253, ASSERT_TYPE_ASSERT, "(xmemAllocType == cmdBufHandle->xallocHeapType)", (const char *)&queryFormat, "xmemAllocType == cmdBufHandle->xallocHeapType") )
    __debugbreak();
  v10 = s_cmdBufHeapAlign[userContext];
  v9->isInAlloc = 1;
  v11 = truncate_cast<unsigned int,unsigned __int64>(sizeInBytes);
  v12 = &v9->32;
  v13 = AlignUp<unsigned int>(v11, (unsigned int)v10);
  if ( v9->type )
  {
    if ( sizeInBytes + v12->ring.ringBuffer.writePos >= v9->handle.totalSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 270, ASSERT_TYPE_ASSERT, "(cmdBufLinear->offset + sizeInBytes < cmdBufHandle->totalSize)", (const char *)&queryFormat, "cmdBufLinear->offset + sizeInBytes < cmdBufHandle->totalSize") )
      __debugbreak();
    if ( ((unsigned __int8)v12 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v9->32) )
      __debugbreak();
    v14 = _InterlockedExchangeAdd(&v12->linear.offset, v13);
  }
  else
  {
    if ( (unsigned int)v13 >= v9->handle.totalSize )
    {
      LODWORD(v17) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 161, ASSERT_TYPE_ASSERT, "( ( size < heapInfo->handle.totalSize ) )", "( size ) = %u", v17) )
        __debugbreak();
    }
    if ( v9->handle.totalSize != v9->ring.ringBuffer.bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 162, ASSERT_TYPE_ASSERT, "( static_cast<int>( heapInfo->handle.totalSize ) ) == ( ring->ringBuffer.bufSize )", "%s == %s\n\t%i, %i", "static_cast<int>( heapInfo->handle.totalSize )", "ring->ringBuffer.bufSize", v9->handle.totalSize, v9->ring.ringBuffer.bufSize) )
      __debugbreak();
    LODWORD(v14) = 0;
    if ( (unsigned int)(v9->ring.ringBuffer.beginIndexReady + v13) <= v9->handle.totalSize )
      LODWORD(v14) = v9->ring.ringBuffer.beginIndexReady;
    R_DynamicRingBufferAcquire((DynamicRingBuffer *)&v9->32, v14, v14 + v13);
    v14 = (int)v14;
  }
  v15 = (unsigned __int64)&v9->handle.heapBuf[v14];
  memset_0((void *)v15, 205, v13);
  v9->isInAlloc = 0;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 281, ASSERT_TYPE_ASSERT, "(newBuf)", (const char *)&queryFormat, "newBuf") )
    __debugbreak();
  if ( (!v10 || ((v10 - 1) & v10) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((v10 - 1) & v15) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 282, ASSERT_TYPE_ASSERT, "(IsAligned( newBuf, alignment ))", (const char *)&queryFormat, "IsAligned( newBuf, alignment )") )
    __debugbreak();
  return v15;
}

/*
==============
R_DefragDMACommandListFencePending
==============
*/
_BOOL8 R_DefragDMACommandListFencePending(const unsigned __int64 *fence)
{
  g_dx.defragDMACommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.defragDMACommandQueue.fence->m_pFunction[2].Release)(g_dx.defragDMACommandQueue.fence);
  return g_dx.defragDMACommandQueue.lastQueriedCompletedFenceValue < *fence;
}

/*
==============
R_ExecuteCommandListsOnQueue
==============
*/
void R_ExecuteCommandListsOnQueue(D3DCommandQueueHandle *handle, __int64 cmdListsCount, ID3D12CommandList **cmdLists)
{
  ((void (__fastcall *)(ID3D12CommandQueue *, __int64, ID3D12CommandList **))handle->commandQueue->m_pFunction[3].AddRef)(handle->commandQueue, cmdListsCount, cmdLists);
}

/*
==============
R_FinishCommandList
==============
*/
void R_FinishCommandList(GfxCmdBufHeapContext context)
{
  __int64 v1; 
  GfxCmdBufHeapInfoType type; 

  v1 = context;
  type = s_cmdBufHeapInfos[v1].type;
  if ( type )
  {
    if ( type == GFX_CMDBUF_INFO_LINEAR )
    {
      s_cmdBufHeapInfos[v1].ring.ringBuffer.writePos = 0;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 237, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown cmdbuf allocation context %d used in R_FinishCommandList", s_cmdBufHeapInfos[v1].type) )
    {
      __debugbreak();
    }
  }
}

/*
==============
R_FlushCommandQueue
==============
*/
D3DCommandListHandle *R_FlushCommandQueue(D3DCommandQueueHandle *handle, unsigned __int64 *fence, bool setupNextAllocator)
{
  D3DCommandListHandle *v6; 
  unsigned __int64 v7; 
  HRESULT v8; 
  const char *v9; 
  D3DCommandListHandle *v10; 
  ID3D12CommandList *cmdList; 

  Profile_Begin(154);
  v6 = &handle->cmdListRing[handle->currListIndex];
  cmdList = v6->cmdList;
  if ( v6->submitted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 900, ASSERT_TYPE_ASSERT, "(!currList->submitted)", (const char *)&queryFormat, "!currList->submitted") )
    __debugbreak();
  ((void (__fastcall *)(ID3D12CommandQueue *, __int64, ID3D12CommandList **))handle->commandQueue->m_pFunction[3].AddRef)(handle->commandQueue, 1i64, &cmdList);
  if ( (((_BYTE)handle + 24) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &handle->nextFenceValue) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd64(&handle->nextFenceValue, 1ui64);
  *fence = v7;
  v8 = ((__int64 (__fastcall *)(ID3D12CommandQueue *, ID3D12Fence *, unsigned __int64, _QWORD))handle->commandQueue->m_pFunction[7].Release)(handle->commandQueue, handle->fence, v7, 0i64);
  if ( v8 < 0 )
  {
    v9 = R_ErrorDescription(v8);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9200, 908i64, v9);
  }
  v6->submitted = 1;
  if ( setupNextAllocator )
    R_SetupNextCommandAllocHandle(handle, *fence);
  handle->currListIndex = (handle->currListIndex + 1) % handle->numLists;
  R_ResetCommandListHandle(handle);
  v10 = &handle->cmdListRing[handle->currListIndex];
  Profile_EndInternal(NULL);
  return v10;
}

/*
==============
R_FlushComputeCommandList
==============
*/
unsigned __int64 R_FlushComputeCommandList(unsigned int computeQueueIndex)
{
  __int64 v1; 
  HRESULT v2; 
  const char *v3; 
  ID3D12GraphicsCommandList *cmdList; 
  unsigned __int64 result; 
  int v7; 
  unsigned __int64 fence; 

  v1 = computeQueueIndex;
  if ( computeQueueIndex >= 2 )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1214, ASSERT_TYPE_ASSERT, "(unsigned)( computeQueueIndex ) < (unsigned)( NUM_COMPUTE_QUEUES )", "computeQueueIndex doesn't index NUM_COMPUTE_QUEUES\n\t%i not in [0, %i)", computeQueueIndex, v7) )
      __debugbreak();
  }
  if ( !g_dx.computeCommandList[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1219, ASSERT_TYPE_ASSERT, "(g_dx.computeCommandList[computeQueueIndex])", (const char *)&queryFormat, "g_dx.computeCommandList[computeQueueIndex]") )
    __debugbreak();
  v2 = ((__int64 (__fastcall *)(ID3D12GraphicsCommandList *))g_dx.computeCommandList[v1]->m_pFunction[3].QueryInterface)(g_dx.computeCommandList[v1]);
  if ( v2 < 0 )
  {
    v3 = R_ErrorDescription(v2);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9B00, 1221i64, v3);
  }
  if ( g_dx.computeCommandList[v1] != g_dx.computeCommandQueue[v1].cmdListRing[g_dx.computeCommandQueue[v1].currListIndex].cmdList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1223, ASSERT_TYPE_ASSERT, "(g_dx.computeCommandList[computeQueueIndex] == g_dx.computeCommandQueue[computeQueueIndex].cmdListRing[g_dx.computeCommandQueue[computeQueueIndex].currListIndex].cmdList)", (const char *)&queryFormat, "g_dx.computeCommandList[computeQueueIndex] == g_dx.computeCommandQueue[computeQueueIndex].cmdListRing[g_dx.computeCommandQueue[computeQueueIndex].currListIndex].cmdList") )
    __debugbreak();
  cmdList = (ID3D12GraphicsCommandList *)R_FlushCommandQueue(&g_dx.computeCommandQueue[v1], &fence, 1)->cmdList;
  result = fence;
  g_dx.computeCommandList[v1] = cmdList;
  return result;
}

/*
==============
R_FlushCopyCommandList
==============
*/
unsigned __int64 R_FlushCopyCommandList()
{
  HRESULT v0; 
  const char *v1; 
  D3DCommandListHandle *v2; 
  D3DCommandAllocHandle *v3; 
  __int64 cmdAllocHeapContext; 
  __int64 v6; 
  int v7; 
  unsigned __int64 fence; 

  if ( !Sys_InCriticalSection(CRITSECT_GFX_COPY_QUEUE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1148, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_GFX_COPY_QUEUE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_GFX_COPY_QUEUE )") )
    __debugbreak();
  if ( !g_dx.copyCommandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1149, ASSERT_TYPE_ASSERT, "(g_dx.copyCommandList)", (const char *)&queryFormat, "g_dx.copyCommandList") )
    __debugbreak();
  v0 = ((__int64 (__fastcall *)(ID3D12XboxDmaCommandList *))g_dx.copyCommandList->m_pFunction[3].QueryInterface)(g_dx.copyCommandList);
  if ( v0 < 0 )
  {
    v1 = R_ErrorDescription(v0);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9730, 1152i64, v1);
  }
  v2 = R_FlushCommandQueue(&g_dx.copyCommandQueue, &fence, 1);
  v3 = &g_dx.copyCommandQueue.cmdAllocRing[g_dx.copyCommandQueue.currAllocIndex];
  if ( v3->cmdAllocHeapContext >= (unsigned int)GFX_CMDBUF_CONTEXT_TYPE_COUNT )
  {
    v7 = 2;
    LODWORD(v6) = v3->cmdAllocHeapContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( newAlloc->cmdAllocHeapContext ) < (unsigned)( GFX_CMDBUF_CONTEXT_TYPE_COUNT )", "newAlloc->cmdAllocHeapContext doesn't index GFX_CMDBUF_CONTEXT_TYPE_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  cmdAllocHeapContext = v3->cmdAllocHeapContext;
  if ( s_cmdBufHeapInfos[cmdAllocHeapContext].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1161, ASSERT_TYPE_ASSERT, "(heapInfo->type == GFX_CMDBUF_INFO_RING)", (const char *)&queryFormat, "heapInfo->type == GFX_CMDBUF_INFO_RING") )
    __debugbreak();
  if ( s_cmdBufHeapInfos[cmdAllocHeapContext].isInAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1162, ASSERT_TYPE_ASSERT, "(!heapInfo->isInAlloc)", (const char *)&queryFormat, "!heapInfo->isInAlloc") )
    __debugbreak();
  R_DynamicRingBufferInsertFence((DynamicRingBuffer *)&s_cmdBufHeapInfos[cmdAllocHeapContext].32, 0);
  g_dx.copyCommandList = (ID3D12XboxDmaCommandList *)v2->cmdList;
  return fence;
}

/*
==============
R_FlushDefragDMACommandList
==============
*/
unsigned __int64 R_FlushDefragDMACommandList()
{
  HRESULT v0; 
  const char *v1; 
  D3DCommandListHandle *v2; 
  D3DCommandAllocHandle *v3; 
  __int64 cmdAllocHeapContext; 
  __int64 v6; 
  int v7; 
  unsigned __int64 fence; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1238, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( !g_dx.defragDMACommandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1239, ASSERT_TYPE_ASSERT, "(g_dx.defragDMACommandList)", (const char *)&queryFormat, "g_dx.defragDMACommandList") )
    __debugbreak();
  v0 = ((__int64 (__fastcall *)(ID3D12XboxDmaCommandList *))g_dx.defragDMACommandList->m_pFunction[3].QueryInterface)(g_dx.defragDMACommandList);
  if ( v0 < 0 )
  {
    v1 = R_ErrorDescription(v0);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9D90, 1241i64, v1);
  }
  v2 = R_FlushCommandQueue(&g_dx.defragDMACommandQueue, &fence, 1);
  v3 = &g_dx.defragDMACommandQueue.cmdAllocRing[g_dx.defragDMACommandQueue.currAllocIndex];
  if ( v3->cmdAllocHeapContext >= (unsigned int)GFX_CMDBUF_CONTEXT_TYPE_COUNT )
  {
    v7 = 2;
    LODWORD(v6) = v3->cmdAllocHeapContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1248, ASSERT_TYPE_ASSERT, "(unsigned)( newAlloc->cmdAllocHeapContext ) < (unsigned)( GFX_CMDBUF_CONTEXT_TYPE_COUNT )", "newAlloc->cmdAllocHeapContext doesn't index GFX_CMDBUF_CONTEXT_TYPE_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  cmdAllocHeapContext = v3->cmdAllocHeapContext;
  if ( s_cmdBufHeapInfos[cmdAllocHeapContext].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1250, ASSERT_TYPE_ASSERT, "(heapInfo->type == GFX_CMDBUF_INFO_RING)", (const char *)&queryFormat, "heapInfo->type == GFX_CMDBUF_INFO_RING") )
    __debugbreak();
  if ( s_cmdBufHeapInfos[cmdAllocHeapContext].isInAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1251, ASSERT_TYPE_ASSERT, "(!heapInfo->isInAlloc)", (const char *)&queryFormat, "!heapInfo->isInAlloc") )
    __debugbreak();
  R_DynamicRingBufferInsertFence((DynamicRingBuffer *)&s_cmdBufHeapInfos[cmdAllocHeapContext].32, 0);
  g_dx.defragDMACommandList = (ID3D12XboxDmaCommandList *)v2->cmdList;
  return fence;
}

/*
==============
R_FlushImmediateContext
==============
*/
unsigned __int64 R_FlushImmediateContext()
{
  __int128 v0; 
  HRESULT v1; 
  const char *v2; 
  D3DCommandListHandle *v3; 
  GfxCmdBufContext result; 
  unsigned __int64 fence; 

  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v0 = (__int128)*RB_GetBackendCmdBufContext(&result);
  v1 = ((__int64 (__fastcall *)(GfxDevice *))g_dx.immediateContext->m_pFunction[3].QueryInterface)(g_dx.immediateContext);
  if ( v1 < 0 )
  {
    v2 = R_ErrorDescription(v1);
    Sys_Error((const ObfuscateErrorText)&stru_1443D92C0, 1059i64, v2);
  }
  if ( g_dx.immediateContext != g_dx.immediateCommandQueue.cmdListRing[g_dx.immediateCommandQueue.currListIndex].cmdList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1061, ASSERT_TYPE_ASSERT, "(g_dx.immediateContext == g_dx.immediateCommandQueue.cmdListRing[g_dx.immediateCommandQueue.currListIndex].cmdList)", (const char *)&queryFormat, "g_dx.immediateContext == g_dx.immediateCommandQueue.cmdListRing[g_dx.immediateCommandQueue.currListIndex].cmdList") )
    __debugbreak();
  v3 = R_FlushCommandQueue(&g_dx.immediateCommandQueue, &fence, 1);
  if ( (v3->cmdListType == D3D12XBOX_COMMAND_LIST_TYPE_DMA || v3->cmdListType == D3D12_COMMAND_LIST_TYPE_COPY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1070, ASSERT_TYPE_ASSERT, "(newList->cmdListType != D3D12XBOX_COMMAND_LIST_TYPE_DMA && newList->cmdListType != D3D12_COMMAND_LIST_TYPE_COPY && newList->cmdListType != D3D12XBOX_COMMAND_LIST_TYPE_DMA)", (const char *)&queryFormat, "newList->cmdListType != D3D12XBOX_COMMAND_LIST_TYPE_DMA && newList->cmdListType != D3D12_COMMAND_LIST_TYPE_COPY && newList->cmdListType != D3D12XBOX_COMMAND_LIST_TYPE_DMA") )
    __debugbreak();
  R_DynamicRingBufferInsertGivenFenceToAll(*((GfxCmdBufState **)&v0 + 1), fence);
  g_dx.immediateContext = (GfxDevice *)v3->cmdList;
  *(_QWORD *)(*((_QWORD *)&v0 + 1) + 1360i64) = g_dx.immediateContext;
  R_InvalidateState(*((GfxCmdBufState **)&v0 + 1));
  return fence;
}

/*
==============
R_InitCmdBuf
==============
*/
void R_InitCmdBuf(GfxCmdBuf *cmdBuf, const GfxBackEndData *cmdData, const char *debugName)
{
  __int64 v6; 
  unsigned int *cmdAllocInUse; 
  volatile signed __int32 *v8; 
  __int64 cmdBufIndex; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild **p_cmdList; 
  ID3D12GraphicsCommandList *cmdList; 
  HRESULT v14; 
  const char *v15; 
  const char *v16; 
  HRESULT v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  int v21; 

  if ( cmdBuf->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 373, ASSERT_TYPE_ASSERT, "(!cmdBuf->device)", (const char *)&queryFormat, "!cmdBuf->device", -2i64) )
    __debugbreak();
  Profile_Begin(157);
LABEL_5:
  v6 = 0i64;
  cmdAllocInUse = cmdData->cmdAllocInUse;
  while ( 1 )
  {
    if ( !*cmdAllocInUse )
    {
      v8 = (volatile signed __int32 *)&cmdData->cmdAllocInUse[v6];
      if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &cmdData->cmdAllocInUse[v6]) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(v8, 1, 0) )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    ++cmdAllocInUse;
    if ( (unsigned int)v6 >= 6 )
      goto LABEL_5;
  }
  cmdBuf->cmdBufIndex = v6;
  Profile_EndInternal(NULL);
  cmdBufIndex = cmdBuf->cmdBufIndex;
  if ( cmdData->cmdAllocNeedsReset[cmdBufIndex] )
  {
    v10 = cmdData->cmdAllocs[cmdBufIndex]->m_pFunction[2].Release(cmdData->cmdAllocs[cmdBufIndex]);
    if ( v10 < 0 )
    {
      v11 = R_ErrorDescription(v10);
      Sys_Error((const ObfuscateErrorText)&stru_1443D8270, 379i64, v11);
    }
    cmdData->cmdAllocNeedsReset[cmdBuf->cmdBufIndex] = 0;
  }
  p_cmdList = &cmdBuf->cmdList;
  cmdList = cmdBuf->cmdList;
  if ( cmdList )
  {
    v17 = ((__int64 (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12CommandAllocator *, _QWORD))cmdList->m_pFunction[3].AddRef)(cmdList, cmdData->cmdAllocs[cmdBuf->cmdBufIndex], 0i64);
    if ( v17 < 0 )
    {
      v18 = R_ErrorDescription(v17);
      Sys_Error((const ObfuscateErrorText)&stru_1443D8470, 446i64, v18);
    }
  }
  else
  {
    v19 = 0i64;
    v20 = 1;
    v21 = 32;
    v14 = ((__int64 (__fastcall *)(ID3D12Device *, __int64 *, ID3D12CommandAllocator *, _QWORD, GUID *, ID3D12GraphicsCommandList **))g_dx.d3d12device->m_pFunction[24].AddRef)(g_dx.d3d12device, &v19, cmdData->cmdAllocs[cmdBuf->cmdBufIndex], 0i64, &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455, &cmdBuf->cmdList);
    if ( v14 < 0 )
    {
      v15 = R_ErrorDescription(v14);
      Sys_Error((const ObfuscateErrorText)&stru_1443D8300, 396i64, v15);
    }
    v16 = j_va("Cmdbuf command list ( Type %s, Allocator %u )", debugName, cmdBuf->cmdBufIndex);
    PIXSetDebugName(*p_cmdList, v16);
  }
  cmdBuf->device = (GfxDevice *)*p_cmdList;
}

/*
==============
R_InitCmdBufHeapInfo_Ring
==============
*/
void R_InitCmdBufHeapInfo_Ring(GfxCmdBufHeapContext heapContext, const char *debugName)
{
  __int64 v2; 
  int v4; 
  __int64 v5; 
  GfxCmdBufHeapInfo *v6; 
  unsigned int v7; 
  unsigned int v8; 
  bool enabled; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = heapContext;
  v4 = 2;
  if ( heapContext == GFX_CMDBUF_CONTEXT_INVALID )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 178, ASSERT_TYPE_ASSERT, "(heapContext != GFX_CMDBUF_CONTEXT_INVALID)", (const char *)&queryFormat, "heapContext != GFX_CMDBUF_CONTEXT_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)heapContext < GFX_CMDBUF_CONTEXT_TYPE_COUNT )
  {
    goto LABEL_7;
  }
  LODWORD(v14) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( heapContext ) < (unsigned)( GFX_CMDBUF_CONTEXT_TYPE_COUNT )", "heapContext doesn't index GFX_CMDBUF_CONTEXT_TYPE_COUNT\n\t%i not in [0, %i)", v14, 2) )
    __debugbreak();
LABEL_7:
  v5 = v2;
  v6 = &s_cmdBufHeapInfos[v2];
  v7 = s_cmdBufHeapAlign[v5];
  v8 = s_cmdBufHeapSizes[v5];
  v6->type = GFX_CMDBUF_INFO_RING;
  if ( v6->handle.heapBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 116, ASSERT_TYPE_ASSERT, "(heapHandle->heapBuf == nullptr)", (const char *)&queryFormat, "heapHandle->heapBuf == nullptr") )
    __debugbreak();
  if ( r_deviceDebug->current.enabled )
  {
    v6->handle.xallocHeapType = 6;
  }
  else
  {
    enabled = r_deviceProfile->current.enabled;
    v6->handle.xallocHeapType = 5;
    v4 = enabled + 1;
  }
  v10 = v8 * v4;
  if ( v7 != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 141, ASSERT_TYPE_ASSERT, "(alignment == 256)", (const char *)&queryFormat, "alignment == 256") )
    __debugbreak();
  v11 = v6->handle.xallocHeapType & 0xF;
  v6->handle.totalSize = v10;
  v12 = v11 << 29;
  v13 = 134316036i64;
  v6->handle.alignment = v7;
  if ( v10 < 0x400000 )
    v13 = 134299652i64;
  v6->handle.heapBuf = (unsigned __int8 *)XB3XMemAlloc_Alloc(v10, v13 | v12);
  memset_0(&v6->32, 0, sizeof(v6->32));
  if ( !debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 192, ASSERT_TYPE_ASSERT, "(debugName)", (const char *)&queryFormat, "debugName") )
    __debugbreak();
  v6->ring.ringBuffer.bufSize = v6->handle.totalSize;
  v6->ring.ringBuffer.name = debugName;
  v6->ring.ringBuffer.settings.fencePendingFct = R_HW_IsFencePending;
  v6->ring.ringBuffer.settings.disableFenceOnAcquire = 1;
}

/*
==============
R_InitCommandQueue
==============
*/
void R_InitCommandQueue(D3D12_COMMAND_LIST_TYPE type, unsigned int numAllocs, unsigned int numLists, const char *name, D3DCommandQueueHandle *commandQueueHandle, D3DCommandAllocHandle *commandAllocHandle, D3DCommandListHandle *commandListHandle, unsigned int pipeIndex, unsigned int queueIndex)
{
  unsigned int v11; 
  unsigned int v12; 
  void **inited; 
  HRESULT v14; 
  const char *v15; 
  const char *v16; 
  HRESULT v17; 
  const char *v18; 
  unsigned int v19; 
  __int64 v20; 
  D3DCommandAllocHandle *v21; 
  HRESULT v22; 
  const char *v23; 
  const char *v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int64 v27; 
  bool v28; 
  D3DCommandAllocHandle *cmdAllocRing; 
  D3DCommandListHandle *cmdListRing; 
  ID3D12DeviceChild **p_cmdList; 
  HRESULT v32; 
  const char *v33; 
  const char *v34; 
  HRESULT v35; 
  const char *v36; 
  HRESULT v37; 
  const char *v38; 
  int v41[3]; 
  int v42; 
  int v43[4]; 
  GUID v44; 

  v11 = numAllocs;
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 594, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  v12 = pipeIndex;
  v43[3] = queueIndex;
  v43[0] = type;
  inited = (void **)(int)R_InitCommandQueueCustomAllocCallback(type, pipeIndex);
  if ( type == D3D12_COMMAND_LIST_TYPE_COMPUTE )
    v12 = 1;
  v43[2] = v12;
  v43[1] = 0;
  v14 = ((__int64 (__fastcall *)(ID3D12Device *, int *, GUID *, D3DCommandQueueHandle *))g_dx.d3d12device->m_pFunction[16].QueryInterface)(g_dx.d3d12device, v43, &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed, commandQueueHandle);
  if ( v14 < 0 )
  {
    v15 = R_ErrorDescription(v14);
    Sys_Error((const ObfuscateErrorText)&stru_1443D8950, 606i64, v15);
  }
  v16 = j_va("%s command queue", name);
  PIXSetDebugName(commandQueueHandle->commandQueue, v16);
  v17 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, _QWORD, GUID *, ID3D12Fence **))g_dx.d3d12device->m_pFunction[12].QueryInterface)(g_dx.d3d12device, 0i64, 0i64, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &commandQueueHandle->fence);
  if ( v17 < 0 )
  {
    v18 = R_ErrorDescription(v17);
    Sys_Error((const ObfuscateErrorText)&stru_1443D8A70, 620i64, v18);
  }
  commandQueueHandle->cmdAllocRing = commandAllocHandle;
  v19 = 0;
  commandQueueHandle->cmdListRing = commandListHandle;
  commandQueueHandle->nextFenceValue = 1i64;
  if ( v11 )
  {
    v20 = 0i64;
    do
    {
      v21 = &commandQueueHandle->cmdAllocRing[v20];
      v22 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, GUID *, D3DCommandAllocHandle *))g_dx.d3d12device->m_pFunction[3].QueryInterface)(g_dx.d3d12device, (unsigned int)type, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, v21);
      if ( v22 < 0 )
      {
        v23 = R_ErrorDescription(v22);
        Sys_Error((const ObfuscateErrorText)&stru_1443D8B80, 628i64, v23);
      }
      v24 = j_va("%s command allocator %d", name, v19);
      PIXSetDebugName(v21->cmdAlloc, v24);
      v21->cmdAllocHeapContext = (int)inited;
      if ( (_DWORD)inited != -1 )
        v21->cmdAlloc->m_pFunction[3].QueryInterface(v21->cmdAlloc, (const _GUID *)R_CustomD3D12XboxCmdBufAllocCallback, inited);
      ++v19;
      v21->fence = 0i64;
      ++v20;
      v21->submitted = 1;
    }
    while ( v19 < v11 );
  }
  v25 = numLists;
  v26 = 0;
  if ( numLists )
  {
    v27 = 0i64;
    v28 = type == D3D12_COMMAND_LIST_TYPE_COPY || type == D3D12XBOX_COMMAND_LIST_TYPE_DMA;
    while ( 1 )
    {
      cmdAllocRing = commandQueueHandle->cmdAllocRing;
      cmdListRing = commandQueueHandle->cmdListRing;
      v44 = GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455;
      if ( type == D3D12_COMMAND_LIST_TYPE_COPY || type == D3D12XBOX_COMMAND_LIST_TYPE_DMA )
        v44 = GUID_30bc77b9_8379_4b25_95de_b8588c42275d;
      v41[0] = type;
      v41[1] = 0;
      v41[2] = 1;
      if ( type == D3D12_COMMAND_LIST_TYPE_COPY || (v42 = 32, type == D3D12XBOX_COMMAND_LIST_TYPE_DMA) )
        v42 = 0;
      cmdListRing[v27].cmdListType = type;
      p_cmdList = &cmdListRing[v27].cmdList;
      v32 = ((__int64 (__fastcall *)(ID3D12Device *, int *, ID3D12CommandAllocator *, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[24].AddRef)(g_dx.d3d12device, v41, cmdAllocRing->cmdAlloc, 0i64, &v44, p_cmdList);
      if ( v32 < 0 )
      {
        v33 = R_ErrorDescription(v32);
        Sys_Error((const ObfuscateErrorText)&stru_1443D8CA0, 662i64, v33);
      }
      v34 = j_va("%s command list %d", name, v26);
      PIXSetDebugName(*p_cmdList, v34);
      if ( (type & 0xFFFFFFFD) != 0 )
      {
        if ( v28 )
          goto LABEL_40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 713, ASSERT_TYPE_ASSERT, "(type == D3D12_COMMAND_LIST_TYPE_DIRECT || type == D3D12_COMMAND_LIST_TYPE_COMPUTE || copyDMAType)", (const char *)&queryFormat, "type == D3D12_COMMAND_LIST_TYPE_DIRECT || type == D3D12_COMMAND_LIST_TYPE_COMPUTE || copyDMAType") )
          __debugbreak();
      }
      else if ( v28 )
      {
LABEL_40:
        v37 = ((__int64 (__fastcall *)(ID3D12DeviceChild *))(*p_cmdList)->m_pFunction[3].QueryInterface)(*p_cmdList);
        if ( v37 < 0 )
        {
          v38 = R_ErrorDescription(v37);
          Sys_Error((const ObfuscateErrorText)"c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp (%i) static_cast<D3DCopyCommandList*>( cmdListHandle->cmdList )->Close() failed: %s\n", 717i64, v38);
        }
        goto LABEL_36;
      }
      if ( (type & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 721, ASSERT_TYPE_ASSERT, "(type == D3D12_COMMAND_LIST_TYPE_DIRECT || type == D3D12_COMMAND_LIST_TYPE_COMPUTE)", (const char *)&queryFormat, "type == D3D12_COMMAND_LIST_TYPE_DIRECT || type == D3D12_COMMAND_LIST_TYPE_COMPUTE") )
        __debugbreak();
      v35 = ((__int64 (__fastcall *)(ID3D12DeviceChild *))(*p_cmdList)->m_pFunction[3].QueryInterface)(*p_cmdList);
      if ( v35 < 0 )
      {
        v36 = R_ErrorDescription(v35);
        Sys_Error((const ObfuscateErrorText)&stru_1443D9050, 722i64, v36);
      }
LABEL_36:
      v25 = numLists;
      cmdListRing[v27].submitted = 1;
      ++v26;
      ++v27;
      if ( v26 >= numLists )
      {
        v11 = numAllocs;
        break;
      }
    }
  }
  commandQueueHandle->numAllocs = v11;
  commandQueueHandle->currAllocIndex = 0;
  commandQueueHandle->numLists = v25;
  commandQueueHandle->currListIndex = 0;
  commandQueueHandle->debugName = name;
  R_ResetCommandListHandle(commandQueueHandle);
}

/*
==============
R_InitCommandQueueCustomAllocCallback
==============
*/
__int64 R_InitCommandQueueCustomAllocCallback(D3D12_COMMAND_LIST_TYPE type, unsigned int pipeIndex)
{
  __int64 result; 
  float v3; 
  float v4; 

  if ( type == D3D12_COMMAND_LIST_TYPE_DIRECT )
  {
    if ( !pipeIndex || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 575, ASSERT_TYPE_ASSERT, "(pipeIndex == 0)", (const char *)&queryFormat, "pipeIndex == 0") )
      return 0xFFFFFFFFi64;
    goto LABEL_23;
  }
  if ( type == D3D12_COMMAND_LIST_TYPE_COMPUTE )
  {
    if ( !pipeIndex )
      return 0xFFFFFFFFi64;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 570, ASSERT_TYPE_ASSERT, "(pipeIndex == 0)", (const char *)&queryFormat, "pipeIndex == 0") )
      return 0xFFFFFFFFi64;
LABEL_23:
    __debugbreak();
    return 0xFFFFFFFFi64;
  }
  if ( type != D3D12XBOX_COMMAND_LIST_TYPE_DMA )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 583, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      return 0xFFFFFFFFi64;
    goto LABEL_23;
  }
  if ( pipeIndex == 2 )
  {
    R_InitCmdBufHeapInfo_Ring(GFX_CMDBUF_CONTEXT_COPY, "CopyCommandQueue");
    s_cmdBufHeapInfos[0].ring.ringBuffer.settings.fractionFlush = FLOAT_0_25;
    v3 = (float)s_cmdBufHeapInfos[0].ring.ringBuffer.bufSize * 0.25;
    *(_WORD *)&s_cmdBufHeapInfos[0].ring.ringBuffer.settings.notUsingImmediateContext = 257;
    if ( (unsigned int)(int)v3 <= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 542, ASSERT_TYPE_ASSERT, "( static_cast<int>( ringBuffer.settings.fractionFlush * ringBuffer.bufSize ) ) > ( 8 * KB )", "%s > %s\n\t%i, %i", "static_cast<int>( ringBuffer.settings.fractionFlush * ringBuffer.bufSize )", "8 * KB", (int)v3, 0x2000) )
      __debugbreak();
    result = 0i64;
    s_cmdBufHeapInfos[0].ring.ringBuffer.settings.flushFct = R_KickCopyCommandList;
    s_cmdBufHeapInfos[0].ring.ringBuffer.settings.fencePendingFct = R_CopyCommandListFencePending;
  }
  else
  {
    if ( pipeIndex != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 551, ASSERT_TYPE_ASSERT, "(pipeIndex == 1)", (const char *)&queryFormat, "pipeIndex == 1") )
      __debugbreak();
    R_InitCmdBufHeapInfo_Ring(GFX_CMDBUF_CONTEXT_DEFRAG_COPY, "DefragCommandQueue");
    s_cmdBufHeapInfos[1].ring.ringBuffer.settings.fractionFlush = FLOAT_0_25;
    v4 = (float)s_cmdBufHeapInfos[1].ring.ringBuffer.bufSize * 0.25;
    *(_WORD *)&s_cmdBufHeapInfos[1].ring.ringBuffer.settings.notUsingImmediateContext = 257;
    if ( (unsigned int)(int)v4 <= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 559, ASSERT_TYPE_ASSERT, "( static_cast<int>( ringBuffer.settings.fractionFlush * ringBuffer.bufSize ) ) > ( 8 * KB )", "%s > %s\n\t%i, %i", "static_cast<int>( ringBuffer.settings.fractionFlush * ringBuffer.bufSize )", "8 * KB", (int)v4, 0x2000) )
      __debugbreak();
    result = 1i64;
    s_cmdBufHeapInfos[1].ring.ringBuffer.settings.flushFct = R_KickDefragDMACommandList;
    s_cmdBufHeapInfos[1].ring.ringBuffer.settings.fencePendingFct = R_DefragDMACommandListFencePending;
  }
  return result;
}

/*
==============
R_InitContext
==============
*/
void R_InitContext(const GfxBackEndData *data, GfxCmdBuf *cmdBuf)
{
  cmdBuf->useImmediateContext = 1;
}

/*
==============
R_KickCopyCommandList
==============
*/
__int64 R_KickCopyCommandList()
{
  GfxCmdBufHeapContext *p_cmdAllocHeapContext; 
  __int64 v1; 
  __int64 v3; 

  if ( !Sys_InCriticalSection(CRITSECT_GFX_COPY_QUEUE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1175, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_GFX_COPY_QUEUE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_GFX_COPY_QUEUE )") )
    __debugbreak();
  p_cmdAllocHeapContext = &g_dx.copyCommandAllocs[g_dx.copyCommandQueue.currAllocIndex].cmdAllocHeapContext;
  if ( *p_cmdAllocHeapContext >= (unsigned int)GFX_CMDBUF_CONTEXT_TYPE_COUNT )
  {
    LODWORD(v3) = g_dx.copyCommandAllocs[g_dx.copyCommandQueue.currAllocIndex].cmdAllocHeapContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1179, ASSERT_TYPE_ASSERT, "(unsigned)( curAlloc->cmdAllocHeapContext ) < (unsigned)( GFX_CMDBUF_CONTEXT_TYPE_COUNT )", "curAlloc->cmdAllocHeapContext doesn't index GFX_CMDBUF_CONTEXT_TYPE_COUNT\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
  }
  v1 = *(int *)p_cmdAllocHeapContext;
  if ( s_cmdBufHeapInfos[v1].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1181, ASSERT_TYPE_ASSERT, "(heapInfo->type == GFX_CMDBUF_INFO_RING)", (const char *)&queryFormat, "heapInfo->type == GFX_CMDBUF_INFO_RING") )
    __debugbreak();
  if ( s_cmdBufHeapInfos[v1].isInAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1182, ASSERT_TYPE_ASSERT, "(!heapInfo->isInAlloc)", (const char *)&queryFormat, "!heapInfo->isInAlloc") )
    __debugbreak();
  if ( (__int64)g_dx.copyCommandQueue.nextFenceValue < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1189, ASSERT_TYPE_ASSERT, "( g_dx.copyCommandQueue.nextFenceValue ) >= ( 1 )", "%s >= %s\n\t%lli, %lli", "g_dx.copyCommandQueue.nextFenceValue", "1", g_dx.copyCommandQueue.nextFenceValue, 1i64) )
    __debugbreak();
  return g_dx.copyCommandQueue.nextFenceValue - 1;
}

/*
==============
R_KickDefragDMACommandList
==============
*/
__int64 R_KickDefragDMACommandList()
{
  GfxCmdBufHeapContext *p_cmdAllocHeapContext; 
  __int64 v1; 
  __int64 v3; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1265, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  p_cmdAllocHeapContext = &g_dx.defragDMACommandAllocs[g_dx.defragDMACommandQueue.currAllocIndex].cmdAllocHeapContext;
  if ( *p_cmdAllocHeapContext >= (unsigned int)GFX_CMDBUF_CONTEXT_TYPE_COUNT )
  {
    LODWORD(v3) = g_dx.defragDMACommandAllocs[g_dx.defragDMACommandQueue.currAllocIndex].cmdAllocHeapContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1269, ASSERT_TYPE_ASSERT, "(unsigned)( curAlloc->cmdAllocHeapContext ) < (unsigned)( GFX_CMDBUF_CONTEXT_TYPE_COUNT )", "curAlloc->cmdAllocHeapContext doesn't index GFX_CMDBUF_CONTEXT_TYPE_COUNT\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
  }
  v1 = *(int *)p_cmdAllocHeapContext;
  if ( s_cmdBufHeapInfos[v1].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1271, ASSERT_TYPE_ASSERT, "(heapInfo->type == GFX_CMDBUF_INFO_RING)", (const char *)&queryFormat, "heapInfo->type == GFX_CMDBUF_INFO_RING") )
    __debugbreak();
  if ( s_cmdBufHeapInfos[v1].isInAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1272, ASSERT_TYPE_ASSERT, "(!heapInfo->isInAlloc)", (const char *)&queryFormat, "!heapInfo->isInAlloc") )
    __debugbreak();
  if ( (__int64)g_dx.defragDMACommandQueue.nextFenceValue < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 1279, ASSERT_TYPE_ASSERT, "( g_dx.defragDMACommandQueue.nextFenceValue ) >= ( 1 )", "%s >= %s\n\t%lli, %lli", "g_dx.defragDMACommandQueue.nextFenceValue", "1", g_dx.defragDMACommandQueue.nextFenceValue, 1i64) )
    __debugbreak();
  return g_dx.defragDMACommandQueue.nextFenceValue - 1;
}

/*
==============
R_KickImmediateContext
==============
*/
signed __int64 R_KickImmediateContext(D3D12XBOX_FLUSH flushFlags)
{
  signed __int64 v2; 
  HRESULT v3; 
  const char *v4; 

  ((void (__fastcall *)(GfxDevice *))g_dx.immediateContext->m_pFunction[31].QueryInterface)(g_dx.immediateContext);
  if ( ((unsigned __int8)&g_dx.immediateCommandQueue.nextFenceValue & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &g_dx.immediateCommandQueue.nextFenceValue) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd64(&g_dx.immediateCommandQueue.nextFenceValue, 1ui64);
  v3 = ((__int64 (__fastcall *)(ID3D12CommandQueue *, ID3D12Fence *, signed __int64, _QWORD))g_dx.immediateCommandQueue.commandQueue->m_pFunction[7].Release)(g_dx.immediateCommandQueue.commandQueue, g_dx.immediateCommandQueue.fence, v2, (unsigned int)flushFlags);
  if ( v3 < 0 )
  {
    v4 = R_ErrorDescription(v3);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9600, 1123i64, v4);
  }
  return v2;
}

/*
==============
R_ResetCommandListHandle
==============
*/
void R_ResetCommandListHandle(D3DCommandQueueHandle *handle)
{
  D3DCommandListHandle *v1; 
  D3DCommandAllocHandle *v2; 
  ID3D12CommandList *v3; 
  HRESULT v4; 
  const char *v5; 
  HRESULT v6; 
  const char *v7; 
  ID3D12CommandList *cmdList; 
  HRESULT v9; 
  const char *v10; 
  HRESULT v11; 
  const char *v12; 

  v1 = &handle->cmdListRing[handle->currListIndex];
  v2 = &handle->cmdAllocRing[handle->currAllocIndex];
  if ( v1->cmdListType == D3D12_COMMAND_LIST_TYPE_DIRECT || v1->cmdListType == D3D12_COMMAND_LIST_TYPE_COMPUTE )
  {
    cmdList = v1->cmdList;
    if ( !v1->submitted )
    {
      v9 = ((__int64 (__fastcall *)(ID3D12CommandList *))cmdList->m_pFunction[3].QueryInterface)(v1->cmdList);
      if ( v9 < 0 )
      {
        v10 = R_ErrorDescription(v9);
        Sys_Error((const ObfuscateErrorText)&stru_1443D86B0, 507i64, v10);
      }
    }
    v11 = ((__int64 (__fastcall *)(ID3D12CommandList *, ID3D12CommandAllocator *, _QWORD))cmdList->m_pFunction[3].AddRef)(cmdList, v2->cmdAlloc, 0i64);
    if ( v11 < 0 )
    {
      v12 = R_ErrorDescription(v11);
      Sys_Error((const ObfuscateErrorText)&stru_1443D8720, 509i64, v12);
    }
  }
  else
  {
    if ( v1->cmdListType != D3D12_COMMAND_LIST_TYPE_COPY && v1->cmdListType != D3D12XBOX_COMMAND_LIST_TYPE_DMA )
    {
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 514, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    v3 = v1->cmdList;
    if ( !v1->submitted )
    {
      v4 = ((__int64 (__fastcall *)(ID3D12CommandList *))v3->m_pFunction[3].QueryInterface)(v1->cmdList);
      if ( v4 < 0 )
      {
        v5 = R_ErrorDescription(v4);
        Sys_Error((const ObfuscateErrorText)&stru_1443D85A0, 494i64, v5);
      }
    }
    v6 = ((__int64 (__fastcall *)(ID3D12CommandList *, ID3D12CommandAllocator *, _QWORD))v3->m_pFunction[3].AddRef)(v3, v2->cmdAlloc, 0i64);
    if ( v6 < 0 )
    {
      v7 = R_ErrorDescription(v6);
      Sys_Error((const ObfuscateErrorText)"c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp (%i) copyCmdList->Reset( cmdAllocHandle->cmdAlloc, 0 ) failed: %s\n", 496i64, v7);
    }
  }
  v1->submitted = 0;
}

/*
==============
R_SetupCommandListHandle
==============
*/
D3DCommandListHandle *R_SetupCommandListHandle(D3DCommandQueueHandle *handle)
{
  R_ResetCommandListHandle(handle);
  return &handle->cmdListRing[handle->currListIndex];
}

/*
==============
R_SetupNextCommandAllocHandle
==============
*/
void R_SetupNextCommandAllocHandle(D3DCommandQueueHandle *handle, unsigned __int64 fence)
{
  __int64 currAllocIndex; 
  D3DCommandAllocHandle *cmdAllocRing; 
  __int64 v5; 
  D3DCommandAllocHandle *v6; 
  D3DCommandAllocHandle *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  HRESULT v12; 
  const char *v13; 

  currAllocIndex = handle->currAllocIndex;
  cmdAllocRing = handle->cmdAllocRing;
  cmdAllocRing[currAllocIndex].fence = fence;
  cmdAllocRing[currAllocIndex].submitted = 1;
  v5 = (handle->currAllocIndex + 1) % handle->numAllocs;
  v6 = handle->cmdAllocRing;
  handle->currAllocIndex = (handle->currAllocIndex + 1) % handle->numAllocs;
  v7 = &v6[v5];
  if ( v7->submitted )
  {
    v8 = ((__int64 (__fastcall *)(ID3D12Fence *))handle->fence->m_pFunction[2].Release)(handle->fence);
    handle->lastQueriedCompletedFenceValue = v8;
    if ( v8 < v7->fence )
    {
      R_WarnOncePerFrame(R_WARN_RING_BUFFER, handle->debugName);
      Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_SetupNextCommandAllocHandle_WaitForFence");
      if ( handle == &g_dx.immediateCommandQueue && !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
        __debugbreak();
      v9 = ((__int64 (__fastcall *)(ID3D12Fence *))handle->fence->m_pFunction[2].Release)(handle->fence);
      handle->lastQueriedCompletedFenceValue = v9;
      if ( v9 < v7->fence )
      {
        v10 = ((__int64 (__fastcall *)(ID3D12Fence *))handle->fence->m_pFunction[2].Release)(handle->fence);
        handle->lastQueriedCompletedFenceValue = v10;
        if ( v10 < v7->fence )
        {
          do
          {
            Sys_Sleep(0);
            v11 = ((__int64 (__fastcall *)(ID3D12Fence *))handle->fence->m_pFunction[2].Release)(handle->fence);
            handle->lastQueriedCompletedFenceValue = v11;
          }
          while ( v11 < v7->fence );
        }
      }
      Sys_ProfEndNamedEvent();
    }
  }
  v12 = v7->cmdAlloc->m_pFunction[2].Release(v7->cmdAlloc);
  if ( v12 < 0 )
  {
    v13 = R_ErrorDescription(v12);
    Sys_Error((const ObfuscateErrorText)&stru_1443D9140, 847i64, v13);
  }
  v7->submitted = 0;
}

/*
==============
R_ShutdownCmdBuf
==============
*/
void R_ShutdownCmdBuf(GfxCmdBuf *cmdBuf, const GfxBackEndData *cmdData)
{
  HRESULT v4; 
  const char *v5; 
  unsigned int *v6; 

  Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_ShutdownCmdBuf");
  Profile_Begin(158);
  if ( cmdBuf->device )
  {
    v4 = ((__int64 (__fastcall *)(GfxDevice *))cmdBuf->device->m_pFunction[3].QueryInterface)(cmdBuf->device);
    if ( v4 < 0 )
    {
      v5 = R_ErrorDescription(v4);
      Sys_Error((const ObfuscateErrorText)&stru_1443D8520, 464i64, v5);
    }
  }
  v6 = &cmdData->cmdAllocInUse[cmdBuf->cmdBufIndex];
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cmdbuf.cpp", 366, ASSERT_TYPE_ASSERT, "(cmdAllocInUse[cmdAllocIndex])", (const char *)&queryFormat, "cmdAllocInUse[cmdAllocIndex]", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v6) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)v6, 0);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_WaitCopyCommandListFence
==============
*/
void R_WaitCopyCommandListFence(unsigned __int64 fence)
{
  for ( g_dx.copyCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.copyCommandQueue.fence->m_pFunction[2].Release)(g_dx.copyCommandQueue.fence); g_dx.copyCommandQueue.lastQueriedCompletedFenceValue < fence; g_dx.copyCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.copyCommandQueue.fence->m_pFunction[2].Release)(g_dx.copyCommandQueue.fence) )
    _mm_pause();
}

/*
==============
R_WaitDefragDMACommandListFence
==============
*/
void R_WaitDefragDMACommandListFence(unsigned __int64 fence)
{
  for ( g_dx.defragDMACommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.defragDMACommandQueue.fence->m_pFunction[2].Release)(g_dx.defragDMACommandQueue.fence); g_dx.defragDMACommandQueue.lastQueriedCompletedFenceValue < fence; g_dx.defragDMACommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.defragDMACommandQueue.fence->m_pFunction[2].Release)(g_dx.defragDMACommandQueue.fence) )
    _mm_pause();
}

