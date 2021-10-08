/*
==============
R_InitRootSignatures
==============
*/

void __fastcall R_InitRootSignatures(ID3D12Device *device)
{
  ?R_InitRootSignatures@@YAXPEAUID3D12Device@@@Z(device);
}

/*
==============
R_CheckReserveDescriptorHeaps
==============
*/

bool __fastcall R_CheckReserveDescriptorHeaps(GfxDescriptorState *descState)
{
  return ?R_CheckReserveDescriptorHeaps@@YA_NPEAUGfxDescriptorState@@@Z(descState);
}

/*
==============
R_FlushDescriptorStateInternal
==============
*/

void __fastcall R_FlushDescriptorStateInternal(ID3D12GraphicsCommandList *cmdList, GfxDescriptorState *descState)
{
  ?R_FlushDescriptorStateInternal@@YAXPEAUID3D12GraphicsCommandList@@PEAUGfxDescriptorState@@@Z(cmdList, descState);
}

/*
==============
R_InitDescriptorState
==============
*/

void __fastcall R_InitDescriptorState(GfxDescriptorState *descState)
{
  ?R_InitDescriptorState@@YAXPEAUGfxDescriptorState@@@Z(descState);
}

/*
==============
R_InitCommandSignatures
==============
*/

void __fastcall R_InitCommandSignatures(ID3D12Device *device)
{
  ?R_InitCommandSignatures@@YAXPEAUID3D12Device@@@Z(device);
}

/*
==============
R_RebindDescriptorState
==============
*/

void __fastcall R_RebindDescriptorState(CmdBufState *state)
{
  ?R_RebindDescriptorState@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
R_ResetGfxDescriptorTable
==============
*/

void __fastcall R_ResetGfxDescriptorTable(GfxDescriptorTable *table)
{
  ?R_ResetGfxDescriptorTable@@YAXPEAUGfxDescriptorTable@@@Z(table);
}

/*
==============
R_ClearDescriptorCBVs
==============
*/

void __fastcall R_ClearDescriptorCBVs(GfxDescriptorState *descState)
{
  ?R_ClearDescriptorCBVs@@YAXPEAUGfxDescriptorState@@@Z(descState);
}

/*
==============
R_SetGfxDescriptorTable
==============
*/

void __fastcall R_SetGfxDescriptorTable(GfxCmdBufState *state, const GfxDescriptorTable *table, unsigned int descriptorIndex)
{
  ?R_SetGfxDescriptorTable@@YAXPEAUGfxCmdBufState@@PEBUGfxDescriptorTable@@I@Z(state, table, descriptorIndex);
}

/*
==============
R_DirtyDescriptorState
==============
*/

void __fastcall R_DirtyDescriptorState(GfxDescriptorState *descState)
{
  ?R_DirtyDescriptorState@@YAXPEAUGfxDescriptorState@@@Z(descState);
}

/*
==============
R_ShutdownGfxDescriptorTable
==============
*/

void __fastcall R_ShutdownGfxDescriptorTable(GfxDescriptorTable *table)
{
  ?R_ShutdownGfxDescriptorTable@@YAXPEAUGfxDescriptorTable@@@Z(table);
}

/*
==============
R_InitDescriptorHeapInfo_Ring
==============
*/

void __fastcall R_InitDescriptorHeapInfo_Ring(GfxDescriptorHeapInfo *descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE type, unsigned int numDescriptors, unsigned int dangerZone, const char *debugName)
{
  ?R_InitDescriptorHeapInfo_Ring@@YAXPEAUGfxDescriptorHeapInfo@@W4D3D12_DESCRIPTOR_HEAP_TYPE@@IIPEBD@Z(descHeapInfo, type, numDescriptors, dangerZone, debugName);
}

/*
==============
R_InitDescriptorHeapInfo_Linear
==============
*/

void __fastcall R_InitDescriptorHeapInfo_Linear(GfxDescriptorHeapInfo *descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE type, unsigned int id, unsigned int numDescriptors, unsigned int dangerZone, int pageSize)
{
  ?R_InitDescriptorHeapInfo_Linear@@YAXPEAUGfxDescriptorHeapInfo@@W4D3D12_DESCRIPTOR_HEAP_TYPE@@IIIH@Z(descHeapInfo, type, id, numDescriptors, dangerZone, pageSize);
}

/*
==============
R_GetSamplerDescriptorHeap
==============
*/

GfxUnifiedDescriptorHeap *__fastcall R_GetSamplerDescriptorHeap()
{
  return ?R_GetSamplerDescriptorHeap@@YAPEAUGfxUnifiedDescriptorHeap@@XZ();
}

/*
==============
R_EndFrameDescriptorHeapInfo
==============
*/

void __fastcall R_EndFrameDescriptorHeapInfo(GfxDescriptorHeapInfo *info, unsigned __int64 fence)
{
  ?R_EndFrameDescriptorHeapInfo@@YAXPEAUGfxDescriptorHeapInfo@@_K@Z(info, fence);
}

/*
==============
R_FlushDescriptorTable
==============
*/

void __fastcall R_FlushDescriptorTable(GfxDescriptorTable *table)
{
  ?R_FlushDescriptorTable@@YAXPEAUGfxDescriptorTable@@@Z(table);
}

/*
==============
R_GetCommandSignature
==============
*/

ID3D12CommandSignature *__fastcall R_GetCommandSignature(GfxCommandSignatureType commandSignatureType)
{
  return ?R_GetCommandSignature@@YAQEAUID3D12CommandSignature@@W4GfxCommandSignatureType@@@Z(commandSignatureType);
}

/*
==============
R_InitGlobalDescriptorPools
==============
*/

void __fastcall R_InitGlobalDescriptorPools(ID3D12Device *device)
{
  ?R_InitGlobalDescriptorPools@@YAXPEAUID3D12Device@@@Z(device);
}

/*
==============
R_InitDescriptorHeapInfoState
==============
*/

void __fastcall R_InitDescriptorHeapInfoState(GfxDescriptorState *descState, GfxDescriptorHeapInfo *descHeapInfo)
{
  ?R_InitDescriptorHeapInfoState@@YAXPEAUGfxDescriptorState@@PEAUGfxDescriptorHeapInfo@@@Z(descState, descHeapInfo);
}

/*
==============
R_ShutdownDescriptorHeap
==============
*/

void __fastcall R_ShutdownDescriptorHeap(GfxDescriptorHeapHandle *descHeap)
{
  ?R_ShutdownDescriptorHeap@@YAXPEAUGfxDescriptorHeapHandle@@@Z(descHeap);
}

/*
==============
R_CreateGfxDescriptorTable
==============
*/

void __fastcall R_CreateGfxDescriptorTable(GfxDescriptorTable *table, GfxDescriptorTableType type, unsigned int size, const char *name)
{
  ?R_CreateGfxDescriptorTable@@YAXPEAUGfxDescriptorTable@@W4GfxDescriptorTableType@@IPEBD@Z(table, type, size, name);
}

/*
==============
R_ShutdownDescriptorHeapInfoState
==============
*/

void __fastcall R_ShutdownDescriptorHeapInfoState(GfxDescriptorState *descState)
{
  ?R_ShutdownDescriptorHeapInfoState@@YAXPEAUGfxDescriptorState@@@Z(descState);
}

/*
==============
R_SetComputeDescriptorTable
==============
*/

void __fastcall R_SetComputeDescriptorTable(ComputeCmdBufState *state, const GfxDescriptorTable *table, unsigned int descriptorIndex)
{
  ?R_SetComputeDescriptorTable@@YAXPEAUComputeCmdBufState@@PEBUGfxDescriptorTable@@I@Z(state, table, descriptorIndex);
}

/*
==============
R_AllocateDescriptorHeap_Linear_Internal
==============
*/
__int64 R_AllocateDescriptorHeap_Linear_Internal(GfxDescriptorState *descState, unsigned int descriptorCount)
{
  GfxDescriptorHeapInfo *descHeapInfo; 
  unsigned int totalSlots; 
  __int64 result; 
  int v7; 
  GfxDescriptorHeapInfo *v8; 
  unsigned int v9; 
  volatile signed __int32 *p_head; 
  unsigned int pageSize; 
  unsigned __int32 v12; 
  unsigned int v13; 
  GfxLinearAllocatorRenderStats *v14; 

  if ( !descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 759, ASSERT_TYPE_ASSERT, "(descState)", (const char *)&queryFormat, "descState") )
    __debugbreak();
  if ( descState->descHeapInfo->type != GFX_DESCHEAP_INFO_LINEAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 760, ASSERT_TYPE_ASSERT, "(descState->descHeapInfo->type == GFX_DESCHEAP_INFO_LINEAR)", (const char *)&queryFormat, "descState->descHeapInfo->type == GFX_DESCHEAP_INFO_LINEAR") )
    __debugbreak();
  descHeapInfo = descState->descHeapInfo;
  totalSlots = descHeapInfo->handle.totalSlots;
  if ( descriptorCount > descHeapInfo->linear.pageSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 766, ASSERT_TYPE_ASSERT, "(descriptorCount <= pageSize)", (const char *)&queryFormat, "descriptorCount <= pageSize") )
    __debugbreak();
  result = (unsigned int)descState->heapHead;
  v7 = result + descriptorCount;
  if ( (signed int)(result + descriptorCount) >= descState->heapPageEnd )
  {
    v8 = descState->descHeapInfo;
    v9 = v8->handle.totalSlots;
    p_head = &v8->linear.head;
    pageSize = v8->linear.pageSize;
    if ( (((_BYTE)v8 + 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v8->ring.ringBuffer.readPos) )
      __debugbreak();
    v12 = _InterlockedExchangeAdd(p_head, pageSize);
    v13 = v12 + pageSize;
    if ( rg.stats )
    {
      v14 = &rg.stats->linearDescriptorHeapsRenderStats[descState->descHeapInfo->linear.id];
      if ( rg.stats->linearDescriptorHeapsRenderStats[descState->descHeapInfo->linear.id].heapHighWaterMark < (signed int)v13 )
        rg.stats->linearDescriptorHeapsRenderStats[descState->descHeapInfo->linear.id].heapHighWaterMark = v13;
      if ( v14->pageHighWaterMark < (signed int)(v13 / pageSize) )
        v14->pageHighWaterMark = v13 / pageSize;
      v14->heapMax = v9;
      v14->pageMax = v9 / pageSize;
    }
    if ( v13 > v9 )
    {
      R_WarnOncePerFrame(R_WARN_DESCRIPTOR_HEAP_OVERFLOW, v13, totalSlots);
      descState->heapOverflow = 1;
      *(_QWORD *)&descState->heapHead = 0i64;
      return 0xFFFFFFFFi64;
    }
    v7 = v12 + descriptorCount;
    descState->heapPageEnd = v13;
    result = v12;
  }
  descState->heapHead = v7;
  return result;
}

/*
==============
R_AllocateDescriptors
==============
*/
__int64 R_AllocateDescriptors(GfxDescriptorState *descState, unsigned int numDescriptors, unsigned int rootSignatureMaxDescriptors)
{
  GfxDescriptorHeapInfo *descHeapInfo; 
  unsigned int DescriptorHeap_Linear_Internal; 
  GfxDescriptorHeapInfoType type; 
  GfxDescriptorHeapInfo *v9; 
  unsigned int v10; 
  int used; 
  unsigned int v12; 
  unsigned int totalSlots; 
  __int64 v15; 

  Profile_Begin(155);
  if ( !numDescriptors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 859, ASSERT_TYPE_ASSERT, "(numDescriptors)", (const char *)&queryFormat, "numDescriptors") )
    __debugbreak();
  descHeapInfo = descState->descHeapInfo;
  if ( !descHeapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 862, ASSERT_TYPE_ASSERT, "(heapInfo)", (const char *)&queryFormat, "heapInfo") )
    __debugbreak();
  DescriptorHeap_Linear_Internal = 0;
  type = descHeapInfo->type;
  if ( type )
  {
    if ( type == GFX_DESCHEAP_INFO_LINEAR )
    {
      DescriptorHeap_Linear_Internal = R_AllocateDescriptorHeap_Linear_Internal(descState, numDescriptors);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled GfxDescriptorHeapInfo type") )
    {
      __debugbreak();
    }
  }
  else
  {
    v9 = descState->descHeapInfo;
    if ( numDescriptors > rootSignatureMaxDescriptors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 815, ASSERT_TYPE_ASSERT, "( numDescriptorsOrig ) <= ( rootSignatureMaxDescriptors )", "%s <= %s\n\t%u, %u", "numDescriptorsOrig", "rootSignatureMaxDescriptors", numDescriptors, rootSignatureMaxDescriptors) )
      __debugbreak();
    if ( descState->descHeapInfo->handle.parent->descriptorSize != 32 )
    {
      LODWORD(v15) = descState->descHeapInfo->handle.parent->descriptorSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 819, ASSERT_TYPE_ASSERT, "( ( descState->descHeapInfo->handle.parent->descriptorSize == DESCRIPTOR_SIZE ) )", "( descState->descHeapInfo->handle.parent->descriptorSize ) = %u", v15) )
        __debugbreak();
    }
    v10 = numDescriptors + (numDescriptors & 1);
    if ( v10 > rootSignatureMaxDescriptors )
      rootSignatureMaxDescriptors = numDescriptors + (numDescriptors & 1);
    used = v9->handle.used;
    v12 = used + rootSignatureMaxDescriptors;
    totalSlots = v9->handle.totalSlots;
    if ( v12 >= totalSlots )
    {
      v9->handle.used = 0;
      used = 0;
    }
    R_DynamicRingBufferAcquire(&v9->ring.ringBuffer, used, used + v10);
    if ( v12 >= totalSlots )
    {
      if ( !R_IsLockedIfGfxImmediateContext(g_dx.immediateContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))g_dx.immediateContext->m_pFunction[22].AddRef)(g_dx.immediateContext, 142868480i64, 0i64, 0xFFFFFFFF00i64);
    }
    DescriptorHeap_Linear_Internal = v9->handle.used;
    v9->handle.used = DescriptorHeap_Linear_Internal + v10;
  }
  Profile_EndInternal(NULL);
  return DescriptorHeap_Linear_Internal;
}

/*
==============
R_BindViewDescriptors
==============
*/
void R_BindViewDescriptors(ID3D12GraphicsCommandList *cmdList, const GfxDescriptorHeapHandle *heapHandle, unsigned int rootDescriptorIndex, unsigned int descriptorSlot, bool isCompute)
{
  unsigned int *m_pCurrent; 
  unsigned int *m_pLimit_Api; 
  __int64 v8; 
  void **v9; 

  m_pCurrent = cmdList->m_Putter.m_pCurrent;
  m_pLimit_Api = cmdList->m_Putter.m_pLimit_Api;
  v8 = rootDescriptorIndex;
  v9 = (void **)(LODWORD(heapHandle->parent->heapStartGPUHandle.ptr) + heapHandle->parent->descriptorSize * (descriptorSlot + heapHandle->startSlot));
  if ( isCompute )
  {
    if ( m_pCurrent >= m_pLimit_Api )
    {
      ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, void **))cmdList->m_pFunction[11].Release)(cmdList, (unsigned int)v8, v9);
    }
    else
    {
      *m_pCurrent = cmdList->m_ComputeRootPacketHeader[v8];
      m_pCurrent[1] = (unsigned int)v9;
      cmdList->m_Putter.m_pCurrent = m_pCurrent + 2;
    }
  }
  else if ( m_pCurrent >= m_pLimit_Api )
  {
    cmdList->m_pFunction[12].QueryInterface(cmdList, (const _GUID *)(unsigned int)v8, v9);
  }
  else
  {
    *m_pCurrent = cmdList->m_GraphicsRootPacketHeader[v8];
    m_pCurrent[1] = (unsigned int)v9;
    cmdList->m_Putter.m_pCurrent = m_pCurrent + 2;
  }
}

/*
==============
R_CheckReserveDescriptorHeaps
==============
*/
char R_CheckReserveDescriptorHeaps(GfxDescriptorState *descState)
{
  GfxDescriptorHeapInfoType type; 
  GfxDescriptorHeapInfo *descHeapInfo; 
  int bufSize; 
  int pendingSize; 
  signed int id; 

  if ( !descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1231, ASSERT_TYPE_ASSERT, "(descState)", (const char *)&queryFormat, "descState") )
    __debugbreak();
  if ( !descState->descHeapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1232, ASSERT_TYPE_ASSERT, "(descState->descHeapInfo)", (const char *)&queryFormat, "descState->descHeapInfo") )
    __debugbreak();
  _RAX = descState->descHeapInfo;
  type = _RAX->type;
  if ( type == GFX_DESCHEAP_INFO_LINEAR )
  {
    descHeapInfo = descState->descHeapInfo;
    if ( _RAX->linear.dangerZone + _RAX->ring.ringBuffer.readPos > descHeapInfo->handle.totalSlots )
    {
      if ( rg.stats )
      {
        rg.stats->linearDescriptorHeapsRenderStats[descHeapInfo->linear.id].reachedDangerZone = 1;
        descHeapInfo = descState->descHeapInfo;
      }
      R_WarnOncePerFrame(R_WARN_DESCRIPTOR_HEAP_OVERFLOW, (unsigned int)descHeapInfo->linear.head, descHeapInfo->handle.totalSlots);
      return 0;
    }
  }
  else if ( type == GFX_DESCHEAP_INFO_RING && _RAX->ring.ringBuffer.settings.disableFenceOnAcquire )
  {
    __asm { vmovss  xmm3, dword ptr [rax+848h] }
    bufSize = _RAX->ring.ringBuffer.bufSize;
    pendingSize = _RAX->ring.ringBuffer.pendingSize;
    __asm { vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush; r_globals_t rg }
    id = _RAX->linear.id;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcmpeqss xmm2, xmm3, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vblendvps xmm3, xmm3, xmm1, xmm2
      vmulss  xmm0, xmm0, xmm3
      vcvttss2si eax, xmm0
    }
    if ( pendingSize >= _EAX )
      return 0;
    if ( pendingSize > bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1273, ASSERT_TYPE_ASSERT, "( pendingSize ) <= ( bufSize )", "%s <= %s\n\t%i, %i", "pendingSize", "bufSize", pendingSize, bufSize) )
      __debugbreak();
    if ( bufSize - pendingSize < id )
      return 0;
  }
  return 1;
}

/*
==============
R_ClearDescriptorCBVs
==============
*/
void R_ClearDescriptorCBVs(GfxDescriptorState *descState)
{
  GfxConstantBufferDescriptor *v1; 
  __int64 v2; 

  v1 = &descState->cbDescs[0][2];
  v2 = 14i64;
  do
  {
    v1[-2].location = 0i64;
    v1[-1].location = 0i64;
    v1->location = 0i64;
    v1[1].location = 0i64;
    v1[2].location = 0i64;
    v1[3].location = 0i64;
    v1 += 6;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_CreateDescriptorHeap
==============
*/
void R_CreateDescriptorHeap(ID3D12Device *device, D3D12_DESCRIPTOR_HEAP_TYPE heapType, bool shaderVisible, unsigned int numDescriptors, GfxUnifiedDescriptorHeap *descHeap)
{
  GraphicsUnknown_Function_Table *m_pFunction; 
  HRESULT v11; 
  const char *v12; 
  GraphicsUnknown_Function_Table *v13; 
  __int64 v14; 
  __int64 v17; 
  __m256i v18; 
  __int128 v19; 
  int v20[4]; 

  m_pFunction = device->m_pFunction;
  _R14 = descHeap;
  v20[0] = heapType;
  v20[1] = numDescriptors;
  v20[2] = shaderVisible;
  v20[3] = 0;
  v11 = ((__int64 (__fastcall *)(ID3D12Device *, int *, GUID *, __int64 *))m_pFunction[4].Release)(device, v20, &GUID_8efb471d_616c_4f49_90f7_127bb763fa51, &v17);
  if ( v11 < 0 )
  {
    v12 = R_ErrorDescription(v11);
    Sys_Error((const ObfuscateErrorText)&stru_14436E460, 381i64, v12);
  }
  v18.m256i_i64[0] = v17;
  v13 = device->m_pFunction;
  v18.m256i_i32[2] = heapType;
  v18.m256i_i32[3] = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD))v13[5].QueryInterface)(device, (unsigned int)heapType);
  v18.m256i_i32[4] = numDescriptors;
  BYTE12(v19) = shaderVisible;
  v18.m256i_i64[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72i64))(v17);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 80i64))(v17);
  __asm { vmovups ymm0, [rsp+98h+var_70] }
  *(_QWORD *)&v19 = v14;
  DWORD2(v19) = 0;
  __asm
  {
    vmovups xmm1, [rsp+98h+var_50]
    vmovups ymmword ptr [r14], ymm0
    vmovups xmmword ptr [r14+20h], xmm1
  }
}

/*
==============
R_CreateGfxDescriptorTable
==============
*/
void R_CreateGfxDescriptorTable(GfxDescriptorTable *table, GfxDescriptorTableType type, unsigned int size, const char *name)
{
  unsigned int *v7; 

  R_InitializeDescriptorHeap(g_dx.d3d12device, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 1, size, &table->m_heapHandle);
  v7 = (unsigned int *)PMem_Alloc(4i64 * size, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "R_InitializeDescriptorHeap_PoolAllocator");
  table->m_type = type;
  table->m_size = size;
  table->m_descriptors = v7;
  table->m_usedSize = 0;
}

/*
==============
R_DirtyDescriptorState
==============
*/
void R_DirtyDescriptorState(GfxDescriptorState *descState)
{
  bool *p_dirty; 
  __int64 v2; 

  descState->dirtyDescriptorRangeMask = 0xFFFF;
  p_dirty = &descState->cbDescs[0][2].dirty;
  *(_WORD *)&descState->anyCbDescsDirty = 257;
  v2 = 14i64;
  do
  {
    *(p_dirty - 32) = 1;
    *(p_dirty - 16) = 1;
    *p_dirty = 1;
    p_dirty[16] = 1;
    p_dirty[32] = 1;
    p_dirty[48] = 1;
    p_dirty += 96;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_EndFrameDescriptorHeapInfo
==============
*/
void R_EndFrameDescriptorHeapInfo(GfxDescriptorHeapInfo *info, unsigned __int64 fence)
{
  GfxDescriptorHeapInfoType type; 
  char v7; 

  type = info->type;
  if ( type )
  {
    if ( type == GFX_DESCHEAP_INFO_LINEAR )
    {
      *(double *)&_XMM0 = I_random();
      _RAX = r_randomFailLinearHeap;
      __asm { vcomiss xmm0, dword ptr [rax+28h] }
      if ( v7 )
      {
        *(double *)&_XMM0 = I_random();
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vmulss  xmm0, xmm0, xmm1
          vcvttss2si rax, xmm0
        }
        info->linear.testFailOffset = _RAX;
      }
      else
      {
        info->linear.testFailOffset = -1;
      }
      info->ring.ringBuffer.readPos = 0;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1224, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled D3DDescriptorHeapInfo type") )
    {
      __debugbreak();
    }
  }
  else
  {
    R_DynamicRingBufferInsertGivenFence(&info->ring.ringBuffer, fence);
  }
}

/*
==============
R_FlushDescriptorRange
==============
*/
void R_FlushDescriptorRange(ID3D12GraphicsCommandList *commandList, GfxDescriptorRange *range, GfxDescriptorHeapHandle *dstHeap, unsigned int numDescriptors, unsigned int dstDescriptorSlot, unsigned int rootSignatureSlot, bool compute)
{
  GfxDescriptorSetBase *descriptorSet; 
  unsigned int v12; 
  GfxDescriptorSetBase *v13; 
  unsigned int **v14; 
  unsigned int *v15; 
  GfxDescriptorRangeType type; 
  GfxDescriptorSetBase *v17; 
  _QWORD *v18; 
  unsigned int *m_pCurrent; 
  unsigned int *m_pLimit_Api; 
  void **v21; 

  descriptorSet = range->descriptorSet;
  if ( !dstHeap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 548, ASSERT_TYPE_ASSERT, "(dstHeap)", (const char *)&queryFormat, "dstHeap") )
    __debugbreak();
  if ( !numDescriptors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 549, ASSERT_TYPE_ASSERT, "(numDescriptors)", (const char *)&queryFormat, "numDescriptors") )
    __debugbreak();
  if ( rootSignatureSlot != range->rootDescriptorSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 550, ASSERT_TYPE_ASSERT, "(rootSignatureSlot == range->rootDescriptorSlot)", (const char *)&queryFormat, "rootSignatureSlot == range->rootDescriptorSlot") )
    __debugbreak();
  Profile_Begin(152);
  v12 = 0;
  if ( range->numSlots <= 0x28 )
  {
    if ( numDescriptors > 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 563, ASSERT_TYPE_SANITY, "( numDescriptors <= ( sizeof( *array_counter( dynamicSet->descs ) ) + 0 ) )", (const char *)&queryFormat, "numDescriptors <= ARRAY_COUNT( dynamicSet->descs )") )
      __debugbreak();
    v15 = (unsigned int *)&descriptorSet[8];
  }
  else
  {
    v13 = range->descriptorSet;
    if ( numDescriptors > *(_DWORD *)(*(_QWORD *)v13 + 36i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 557, ASSERT_TYPE_SANITY, "( numDescriptors <= persistentSet->table->m_size )", (const char *)&queryFormat, "numDescriptors <= persistentSet->table->m_size") )
      __debugbreak();
    v14 = *(unsigned int ***)v13;
    descriptorSet = NULL;
    v15 = *v14;
  }
  type = range->type;
  if ( type )
  {
    if ( type != DESCRIPTOR_RANGE_BUFFER )
    {
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 582, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    if ( numDescriptors )
    {
      v17 = descriptorSet + 8;
      do
      {
        v18 = (_QWORD *)(LODWORD(dstHeap->parent->heapStartCPUHandle.ptr) + dstHeap->parent->descriptorSize * (dstDescriptorSlot + v12 + dstHeap->startSlot));
        if ( g_dx.d3d12device->m_OutOfLineFlags )
        {
          ((void (__fastcall *)(ID3D12Device *, GfxDescriptorSetBase *, _QWORD *, __int64))g_dx.d3d12device->m_pFunction[5].Release)(g_dx.d3d12device, v17, v18, 0x2403C00000001i64);
        }
        else if ( v17 )
        {
          *v18 = *(_QWORD *)v17 + 0x10000000000000i64;
          v18[1] = ((unsigned __int64)*(_DWORD *)&v17[8] >> 4) + 0x2403C00000000i64;
        }
        else
        {
          *v18 = g_dx.d3d12device->m_NullConstantBufferAddress + 0x10000000000000i64;
          v18[1] = 0x2403C00000001i64;
        }
        ++v12;
        v17 += 16;
      }
      while ( v12 < numDescriptors );
    }
  }
  else
  {
    R_FlushDescriptors(dstHeap, &g_descriptorPools.shaderViewPool.handle, v15, dstDescriptorSlot, numDescriptors);
  }
  range->lastBoundStart = dstDescriptorSlot;
  m_pCurrent = commandList->m_Putter.m_pCurrent;
  m_pLimit_Api = commandList->m_Putter.m_pLimit_Api;
  v21 = (void **)(LODWORD(dstHeap->parent->heapStartGPUHandle.ptr) + dstHeap->parent->descriptorSize * (dstDescriptorSlot + dstHeap->startSlot));
  if ( compute )
  {
    if ( m_pCurrent >= m_pLimit_Api )
    {
      ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, void **))commandList->m_pFunction[11].Release)(commandList, rootSignatureSlot, v21);
    }
    else
    {
      *m_pCurrent = commandList->m_ComputeRootPacketHeader[rootSignatureSlot];
      m_pCurrent[1] = (unsigned int)v21;
      commandList->m_Putter.m_pCurrent = m_pCurrent + 2;
    }
  }
  else if ( m_pCurrent >= m_pLimit_Api )
  {
    commandList->m_pFunction[12].QueryInterface(commandList, (const _GUID *)rootSignatureSlot, v21);
  }
  else
  {
    *m_pCurrent = commandList->m_GraphicsRootPacketHeader[rootSignatureSlot];
    m_pCurrent[1] = (unsigned int)v21;
    commandList->m_Putter.m_pCurrent = m_pCurrent + 2;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_FlushDescriptorStateInternal
==============
*/
void R_FlushDescriptorStateInternal(ID3D12GraphicsCommandList *cmdList, GfxDescriptorState *descState)
{
  GfxRootSignatureDesc *v4; 
  GfxRootSignatureType v5; 
  ID3D12RootSignature *rootSignature; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  unsigned int *m_pCurrent; 
  unsigned int ptr; 
  unsigned int *v10; 
  unsigned int v11; 
  bool *p_dirty; 
  __int64 v13; 
  unsigned int dirtyDescriptorRangeMask; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v21; 
  char *v22; 
  __int64 v23; 
  unsigned __int64 *v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  unsigned int Descriptors; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  unsigned int *v31; 
  void **v32; 
  int v33; 
  D3D12_SHADER_VISIBILITY *p_shaderVisibility; 
  unsigned int *m_GraphicsRootPacketHeader; 
  unsigned int *v36; 
  void **location; 
  __int64 rootSignatureSlot; 
  __int64 compute; 
  GfxDescriptorRange *range; 
  char v41; 
  __int64 v42[9]; 
  bool v43; 
  unsigned int v44; 
  GfxRootSignatureType type; 

  if ( descState->rootSignatureType == ROOT_SIGNATURE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1362, ASSERT_TYPE_ASSERT, "(descState->rootSignatureType != UNSET_ROOT_SIGNATURE)", (const char *)&queryFormat, "descState->rootSignatureType != UNSET_ROOT_SIGNATURE") )
    __debugbreak();
  v4 = &g_rootSignatureDescs[descState->rootSignatureType];
  if ( !v4->rootSignature && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1365, ASSERT_TYPE_ASSERT, "(rootSignatureDesc->rootSignature)", (const char *)&queryFormat, "rootSignatureDesc->rootSignature") )
    __debugbreak();
  Profile_Begin(153);
  type = v4->type;
  v5 = v4->type;
  v43 = v4->type == COMPUTE_DEFAULT_ROOT_SIGNATURE;
  if ( descState->rootSignatureDirty )
  {
    rootSignature = v4->rootSignature;
    m_pFunction = cmdList->m_pFunction;
    if ( v5 == COMPUTE_DEFAULT_ROOT_SIGNATURE )
      ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12RootSignature *))m_pFunction[11].QueryInterface)(cmdList, rootSignature);
    else
      ((void (__fastcall *)(ID3D12GraphicsCommandList *, ID3D12RootSignature *))m_pFunction[11].AddRef)(cmdList, rootSignature);
    v42[0] = (__int64)descState->descHeapInfo->handle.parent->d3dheap;
    v42[1] = (__int64)s_descriptorHeaps[4].d3dheap;
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, __int64 *))cmdList->m_pFunction[10].Release)(cmdList, 2i64, v42);
    if ( v5 == COMPUTE_DEFAULT_ROOT_SIGNATURE )
    {
      if ( g_rootSignatureDescs[1].descriptors[4].type != GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1387, ASSERT_TYPE_ASSERT, "(g_rootSignatureDescs[COMPUTE_DEFAULT_ROOT_SIGNATURE].descriptors[s_samplerComputeRootDescriptorIndex].type == GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE)", (const char *)&queryFormat, "g_rootSignatureDescs[COMPUTE_DEFAULT_ROOT_SIGNATURE].descriptors[s_samplerComputeRootDescriptorIndex].type == GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE") )
        __debugbreak();
      m_pCurrent = cmdList->m_Putter.m_pCurrent;
      ptr = s_descriptorHeaps[4].heapStartGPUHandle.ptr;
      if ( m_pCurrent >= cmdList->m_Putter.m_pLimit_Api )
      {
        ((void (__fastcall *)(ID3D12GraphicsCommandList *, __int64, unsigned __int64))cmdList->m_pFunction[11].Release)(cmdList, 4i64, s_descriptorHeaps[4].heapStartGPUHandle.ptr);
      }
      else
      {
        *m_pCurrent = cmdList->m_ComputeRootPacketHeader[4];
        m_pCurrent[1] = ptr;
        cmdList->m_Putter.m_pCurrent = m_pCurrent + 2;
      }
    }
    else
    {
      if ( g_rootSignatureDescs[0].descriptors[23].type != GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1392, ASSERT_TYPE_ASSERT, "(g_rootSignatureDescs[GRAPHICS_DEFAULT_ROOT_SIGNATURE].descriptors[s_samplerGraphicsRootDescriptorIndex].type == GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE)", (const char *)&queryFormat, "g_rootSignatureDescs[GRAPHICS_DEFAULT_ROOT_SIGNATURE].descriptors[s_samplerGraphicsRootDescriptorIndex].type == GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE") )
        __debugbreak();
      v10 = cmdList->m_Putter.m_pCurrent;
      v11 = s_descriptorHeaps[4].heapStartGPUHandle.ptr;
      if ( v10 >= cmdList->m_Putter.m_pLimit_Api )
      {
        cmdList->m_pFunction[12].QueryInterface(cmdList, (const _GUID *)23, (void **)s_descriptorHeaps[4].heapStartGPUHandle.ptr);
      }
      else
      {
        *v10 = cmdList->m_GraphicsRootPacketHeader[23];
        v10[1] = v11;
        cmdList->m_Putter.m_pCurrent = v10 + 2;
      }
    }
    p_dirty = &descState->cbDescs[0][2].dirty;
    v13 = 14i64;
    do
    {
      *(p_dirty - 32) = 1;
      *(p_dirty - 16) = 1;
      *p_dirty = 1;
      p_dirty[16] = 1;
      p_dirty[32] = 1;
      p_dirty[48] = 1;
      p_dirty += 96;
      --v13;
    }
    while ( v13 );
    dirtyDescriptorRangeMask = descState->dirtyDescriptorRangeMask | 0xFFFF;
    *(_WORD *)&descState->anyCbDescsDirty = 1;
    descState->dirtyDescriptorRangeMask = dirtyDescriptorRangeMask;
  }
  else
  {
    dirtyDescriptorRangeMask = descState->dirtyDescriptorRangeMask;
  }
  v15 = 511;
  if ( v5 == COMPUTE_DEFAULT_ROOT_SIGNATURE )
    v15 = 7680;
  v16 = 0;
  v17 = v15 & dirtyDescriptorRangeMask;
  v18 = 0;
  v44 = v15 & dirtyDescriptorRangeMask;
  if ( (v15 & dirtyDescriptorRangeMask) != 0 )
  {
    while ( 2 )
    {
      _RAX = v17;
      __asm { tzcnt   rax, rax }
      v41 = _RAX;
      v21 = _RAX + v18;
      if ( (unsigned int)_RAX + v18 >= 0x10 )
      {
        LODWORD(compute) = 16;
        LODWORD(rootSignatureSlot) = _RAX + v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1428, ASSERT_TYPE_ASSERT, "(unsigned)( dirtyRangeIndex ) < (unsigned)( ( sizeof( *array_counter( descState->ranges ) ) + 0 ) )", "dirtyRangeIndex doesn't index ARRAY_COUNT( descState->ranges )\n\t%i not in [0, %i)", rootSignatureSlot, compute) )
          __debugbreak();
      }
      v22 = (char *)descState + 32 * v21;
      v23 = *((unsigned int *)v22 + 6);
      if ( (unsigned int)v23 >= 0x19 )
      {
        LODWORD(compute) = 25;
        LODWORD(rootSignatureSlot) = *((_DWORD *)v22 + 6);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1431, ASSERT_TYPE_ASSERT, "(unsigned)( rootDescriptorIndex ) < (unsigned)( ( sizeof( *array_counter( rootSignatureDesc->descriptors ) ) + 0 ) )", "rootDescriptorIndex doesn't index ARRAY_COUNT( rootSignatureDesc->descriptors )\n\t%i not in [0, %i)", rootSignatureSlot, compute) )
          __debugbreak();
      }
      range = (GfxDescriptorRange *)(v22 + 8);
      switch ( v4->descriptors[v23].type )
      {
        case GFX_ROOT_DESCRIPTOR_TYPE_UNDEFINED:
          v33 = 1472;
          goto LABEL_54;
        case GFX_ROOT_DESCRIPTOR_TYPE_CBV:
          v33 = 1466;
LABEL_54:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", v33, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid type for descriptor table") )
            __debugbreak();
          goto $LN55_24;
        case GFX_ROOT_DESCRIPTOR_TYPE_CBV_TABLE:
        case GFX_ROOT_DESCRIPTOR_TYPE_SRV_DYNAMIC_TABLE:
        case GFX_ROOT_DESCRIPTOR_TYPE_UAV_TABLE:
        case GFX_ROOT_DESCRIPTOR_TYPE_UAV_VENDOR_TABLE:
          v24 = (unsigned __int64 *)*((_QWORD *)v22 + 4);
          if ( *((_DWORD *)v22 + 3) <= 0x28u )
          {
            v26 = 64 - __lzcnt(*v24);
          }
          else
          {
            v25 = *v24;
            if ( !v25 )
              goto $LN55_24;
            v26 = *(_DWORD *)(v25 + 40);
          }
          if ( v26 )
          {
            Descriptors = R_AllocateDescriptors(descState, v26, v4->descriptors[v23].rangeParameter.NumDescriptors);
            R_FlushDescriptorRange(cmdList, range, &descState->descHeapInfo->handle, v26, Descriptors, v23, v43);
          }
$LN55_24:
          v17 = v44 >> (v41 + 1);
          v18 = v21 + 1;
          v44 = v17;
          if ( v17 )
            continue;
          dirtyDescriptorRangeMask = descState->dirtyDescriptorRangeMask;
          v5 = type;
          break;
        case GFX_ROOT_DESCRIPTOR_TYPE_SRV_PERSISTENT_TABLE:
          v28 = **((_QWORD **)v22 + 4);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 8);
            v30 = *(_DWORD *)(v28 + 16);
            v31 = cmdList->m_Putter.m_pCurrent;
            v32 = (void **)(unsigned int)(*(_DWORD *)(v29 + 32) + *(_DWORD *)(v29 + 12) * v30);
            if ( type == COMPUTE_DEFAULT_ROOT_SIGNATURE )
            {
              if ( v31 >= cmdList->m_Putter.m_pLimit_Api )
              {
                ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, void **))cmdList->m_pFunction[11].Release)(cmdList, (unsigned int)v23, v32);
              }
              else
              {
                *v31 = cmdList->m_ComputeRootPacketHeader[v23];
                v31[1] = (unsigned int)v32;
                cmdList->m_Putter.m_pCurrent = v31 + 2;
              }
            }
            else if ( v31 >= cmdList->m_Putter.m_pLimit_Api )
            {
              cmdList->m_pFunction[12].QueryInterface(cmdList, (const _GUID *)(unsigned int)v23, v32);
            }
            else
            {
              *v31 = cmdList->m_GraphicsRootPacketHeader[v23];
              v31[1] = (unsigned int)v32;
              cmdList->m_Putter.m_pCurrent = v31 + 2;
            }
          }
          goto $LN55_24;
        case GFX_ROOT_DESCRIPTOR_TYPE_SAMPLER_TABLE:
          goto $LN55_24;
        default:
          CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1480, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
          __debugbreak();
      }
      break;
    }
  }
  descState->dirtyDescriptorRangeMask = dirtyDescriptorRangeMask & ~v15;
  if ( descState->anyCbDescsDirty )
  {
    p_shaderVisibility = &v4->descriptors[0].shaderVisibility;
    m_GraphicsRootPacketHeader = cmdList->m_GraphicsRootPacketHeader;
    do
    {
      if ( *((_DWORD *)p_shaderVisibility - 8) == 3 && descState->cbDescs[*((unsigned int *)p_shaderVisibility - 4)][*(int *)p_shaderVisibility].dirty )
      {
        if ( v5 == COMPUTE_DEFAULT_ROOT_SIGNATURE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1500, ASSERT_TYPE_ASSERT, "(!isCompute)", (const char *)&queryFormat, "!isCompute") )
          __debugbreak();
        v36 = cmdList->m_Putter.m_pCurrent;
        location = (void **)descState->cbDescs[*((unsigned int *)p_shaderVisibility - 4)][*(int *)p_shaderVisibility].location;
        if ( v36 >= cmdList->m_Putter.m_pLimit_Api )
        {
          cmdList->m_pFunction[14].QueryInterface(cmdList, (const _GUID *)v16, location);
        }
        else
        {
          *v36 = *m_GraphicsRootPacketHeader;
          *(_QWORD *)(v36 + 1) = location;
          cmdList->m_Putter.m_pCurrent = v36 + 3;
        }
        descState->cbDescs[*((unsigned int *)p_shaderVisibility - 4)][*(int *)p_shaderVisibility].dirty = 0;
      }
      ++v16;
      ++m_GraphicsRootPacketHeader;
      p_shaderVisibility += 14;
    }
    while ( v16 < 0x19 );
    descState->anyCbDescsDirty = 0;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_FlushDescriptorTable
==============
*/
void R_FlushDescriptorTable(GfxDescriptorTable *table)
{
  if ( table->m_usedSize > table->m_heapHandle.totalSlots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1581, ASSERT_TYPE_ASSERT, "(table->m_usedSize <= table->m_heapHandle.totalSlots)", (const char *)&queryFormat, "table->m_usedSize <= table->m_heapHandle.totalSlots") )
    __debugbreak();
  if ( table->m_heapHandle.used && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1582, ASSERT_TYPE_ASSERT, "(table->m_heapHandle.used == 0)", (const char *)&queryFormat, "table->m_heapHandle.used == 0") )
    __debugbreak();
  R_FlushDescriptors(&table->m_heapHandle, &g_descriptorPools.shaderViewPool.handle, table->m_descriptors, 0, table->m_usedSize);
  table->m_heapHandle.used = table->m_usedSize;
}

/*
==============
R_FlushDescriptors
==============
*/
void R_FlushDescriptors(GfxDescriptorHeapHandle *dstHeapHandle, GfxDescriptorHeapHandle *srcHeapHandle, unsigned int *descriptors, unsigned int dstDescriptorSlot, unsigned int numDescriptors)
{
  __int64 v9; 
  __int64 v10; 
  unsigned int *v11; 
  unsigned int v12; 
  D3D12_DESCRIPTOR_HEAP_TYPE heapType; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 

  if ( srcHeapHandle->parent->heapType != dstHeapHandle->parent->heapType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 491, ASSERT_TYPE_ASSERT, "(srcHeapHandle->parent->heapType == dstHeapHandle->parent->heapType)", (const char *)&queryFormat, "srcHeapHandle->parent->heapType == dstHeapHandle->parent->heapType") )
    __debugbreak();
  LODWORD(v9) = 0;
  if ( numDescriptors )
  {
    do
    {
      v10 = (unsigned int)v9;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 < numDescriptors )
      {
        v11 = &descriptors[v9];
        do
        {
          if ( *v11 != descriptors[(unsigned int)(v9 - 1)] + 1 )
            break;
          LODWORD(v9) = v9 + 1;
          ++v11;
        }
        while ( (unsigned int)v9 < numDescriptors );
      }
      v12 = v9 - v10;
      heapType = srcHeapHandle->parent->heapType;
      v14 = LODWORD(srcHeapHandle->parent->heapStartCPUHandle.ptr) + srcHeapHandle->parent->descriptorSize * (srcHeapHandle->startSlot + descriptors[v10]);
      v15 = LODWORD(dstHeapHandle->parent->heapStartCPUHandle.ptr) + dstHeapHandle->parent->descriptorSize * (dstDescriptorSlot + dstHeapHandle->startSlot + (_DWORD)v10);
      if ( g_dx.d3d12device->m_OutOfLineFlags || heapType == D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER )
      {
        ((void (__fastcall *)(ID3D12Device *, _QWORD, __int64, __int64, D3D12_DESCRIPTOR_HEAP_TYPE))g_dx.d3d12device->m_pFunction[8].QueryInterface)(g_dx.d3d12device, v12, v15, v14, srcHeapHandle->parent->heapType);
      }
      else
      {
        v16 = (unsigned int)v14;
        if ( heapType )
        {
          if ( heapType == D3D12XBOX_DESCRIPTOR_HEAP_TYPE_SAMPLER_UNBOUNDED )
          {
            v17 = 1;
          }
          else
          {
            v16 = v14;
            if ( heapType == D3D12_DESCRIPTOR_HEAP_TYPE_RTV )
              v17 = 7;
            else
              v17 = 8;
          }
        }
        else
        {
          v17 = 2;
        }
        v18 = v12 * v17;
        _RCX = (unsigned int)(v16 + HIDWORD(v14));
        _R9 = v15 - v16;
        do
        {
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rcx]
            vmovdqu xmmword ptr [r9+rcx], xmm0
          }
          _RCX += 16i64;
          --v18;
        }
        while ( v18 );
      }
    }
    while ( (unsigned int)v9 < numDescriptors );
  }
}

/*
==============
R_GetCommandSignature
==============
*/
ID3D12CommandSignature *R_GetCommandSignature(GfxCommandSignatureType commandSignatureType)
{
  __int64 v1; 
  bool v2; 

  v1 = commandSignatureType;
  if ( commandSignatureType )
  {
    if ( (unsigned int)commandSignatureType < GFX_COMMAND_SIGNATURE_COUNT )
      return g_commandSignatures[v1];
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1035, ASSERT_TYPE_ASSERT, "(unsigned)( commandSignatureType ) < (unsigned)( GFX_COMMAND_SIGNATURE_COUNT )", "commandSignatureType doesn't index GFX_COMMAND_SIGNATURE_COUNT\n\t%i not in [0, %i)", commandSignatureType, 5);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1034, ASSERT_TYPE_ASSERT, "(commandSignatureType != GFX_COMMAND_SIGNATURE_INVALID)", (const char *)&queryFormat, "commandSignatureType != GFX_COMMAND_SIGNATURE_INVALID");
  }
  if ( v2 )
    __debugbreak();
  return g_commandSignatures[v1];
}

/*
==============
R_GetSamplerDescriptorHeap
==============
*/
GfxUnifiedDescriptorHeap *R_GetSamplerDescriptorHeap()
{
  return &s_descriptorHeaps[4];
}

/*
==============
R_InitCommandSignatures
==============
*/
void R_InitCommandSignatures(ID3D12Device *device)
{
  ID3D12RootSignature *rootSignature; 
  ID3D12RootSignature *v2; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  HRESULT v5; 
  const char *v6; 
  GraphicsUnknown_Function_Table *v7; 
  HRESULT v8; 
  const char *v9; 
  GraphicsUnknown_Function_Table *v10; 
  HRESULT v11; 
  const char *v12; 
  GraphicsUnknown_Function_Table *v13; 
  HRESULT v14; 
  const char *v15; 
  __int64 v16[2]; 
  int v17; 
  int v18; 
  __int64 *v19; 
  int v20; 

  rootSignature = g_rootSignatureDescs[0].rootSignature;
  v2 = g_rootSignatureDescs[1].rootSignature;
  v19 = v16;
  m_pFunction = device->m_pFunction;
  LODWORD(v16[0]) = 1;
  v17 = 20;
  v18 = 1;
  v20 = 0;
  v5 = ((__int64 (__fastcall *)(ID3D12Device *, int *, ID3D12RootSignature *, GUID *, ID3D12CommandSignature **))m_pFunction[13].Release)(device, &v17, g_rootSignatureDescs[0].rootSignature, &GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1, &g_commandSignatures[2]);
  if ( v5 < 0 )
  {
    v6 = R_ErrorDescription(v5);
    Sys_Error((const ObfuscateErrorText)&stru_14436EEE0, 979i64, v6);
  }
  LODWORD(v16[0]) = 0;
  v19 = v16;
  v7 = device->m_pFunction;
  v17 = 16;
  v18 = 1;
  v20 = 0;
  v8 = ((__int64 (__fastcall *)(ID3D12Device *, int *, ID3D12RootSignature *, GUID *, ID3D12CommandSignature **))v7[13].Release)(device, &v17, rootSignature, &GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1, &g_commandSignatures[1]);
  if ( v8 < 0 )
  {
    v9 = R_ErrorDescription(v8);
    Sys_Error((const ObfuscateErrorText)&stru_14436EFE0, 988i64, v9);
  }
  LODWORD(v16[0]) = 2;
  v19 = v16;
  v10 = device->m_pFunction;
  v17 = 12;
  v18 = 1;
  v20 = 0;
  v11 = ((__int64 (__fastcall *)(ID3D12Device *, int *, ID3D12RootSignature *, GUID *, ID3D12CommandSignature **))v10[13].Release)(device, &v17, v2, &GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1, &g_commandSignatures[3]);
  if ( v11 < 0 )
  {
    v12 = R_ErrorDescription(v11);
    Sys_Error((const ObfuscateErrorText)&stru_14436F0E0, 996i64, v12);
  }
  v16[0] = 105i64;
  v19 = v16;
  v13 = device->m_pFunction;
  v17 = 12;
  v18 = 1;
  v20 = 0;
  v14 = ((__int64 (__fastcall *)(ID3D12Device *, int *, ID3D12RootSignature *, GUID *, ID3D12CommandSignature **))v13[13].Release)(device, &v17, v2, &GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1, &g_commandSignatures[4]);
  if ( v14 < 0 )
  {
    v15 = R_ErrorDescription(v14);
    Sys_Error((const ObfuscateErrorText)&stru_14436F0E0, 1009i64, v15);
  }
}

/*
==============
R_InitDescriptorHeapInfoState
==============
*/
void R_InitDescriptorHeapInfoState(GfxDescriptorState *descState, GfxDescriptorHeapInfo *descHeapInfo)
{
  GfxDescriptorHeapInfoType type; 

  type = descHeapInfo->type;
  if ( type )
  {
    if ( type != GFX_DESCHEAP_INFO_LINEAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1185, ASSERT_TYPE_ASSERT, "(descHeapInfo->type == GFX_DESCHEAP_INFO_LINEAR)", (const char *)&queryFormat, "descHeapInfo->type == GFX_DESCHEAP_INFO_LINEAR") )
      __debugbreak();
    if ( descState->descHeapInfo )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1186, ASSERT_TYPE_ASSERT, "(descState->descHeapInfo == nullptr)", (const char *)&queryFormat, "descState->descHeapInfo == nullptr") )
        __debugbreak();
    }
    *(_QWORD *)&descState->heapHead = 0i64;
    descState->descHeapInfo = descHeapInfo;
  }
  else
  {
    descState->heapHead = -1;
    descState->descHeapInfo = descHeapInfo;
  }
}

/*
==============
R_InitDescriptorHeapInfo_Linear
==============
*/
void R_InitDescriptorHeapInfo_Linear(GfxDescriptorHeapInfo *descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE type, unsigned int id, unsigned int numDescriptors, unsigned int dangerZone, int pageSize)
{
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1159, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  if ( !descHeapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1160, ASSERT_TYPE_ASSERT, "(descHeapInfo)", (const char *)&queryFormat, "descHeapInfo") )
    __debugbreak();
  descHeapInfo->type = GFX_DESCHEAP_INFO_LINEAR;
  R_InitializeDescriptorHeap(g_dx.d3d12device, type, 1, numDescriptors, &descHeapInfo->handle);
  descHeapInfo->linear.pageSize = pageSize;
  descHeapInfo->linear.id = id;
  *(_QWORD *)&descHeapInfo->ring.ringBuffer.writePos = dangerZone;
  descHeapInfo->linear.testFailOffset = -1;
}

/*
==============
R_InitDescriptorHeapInfo_Ring
==============
*/
void R_InitDescriptorHeapInfo_Ring(GfxDescriptorHeapInfo *descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE type, unsigned int numDescriptors, unsigned int dangerZone, const char *debugName)
{
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1131, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  if ( !descHeapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1132, ASSERT_TYPE_ASSERT, "(descHeapInfo)", (const char *)&queryFormat, "descHeapInfo") )
    __debugbreak();
  if ( numDescriptors )
  {
    if ( dangerZone < numDescriptors )
      goto LABEL_13;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1133, ASSERT_TYPE_ASSERT, "(numDescriptors)", (const char *)&queryFormat, "numDescriptors") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1135, ASSERT_TYPE_ASSERT, "( dangerZone ) < ( numDescriptors )", "%s < %s\n\t%u, %u", "dangerZone", "numDescriptors", dangerZone, numDescriptors) )
    __debugbreak();
LABEL_13:
  descHeapInfo->type = GFX_DESCHEAP_INFO_RING;
  descHeapInfo->linear.id = dangerZone;
  R_InitializeDescriptorHeap(g_dx.d3d12device, type, 1, numDescriptors, &descHeapInfo->handle);
  memset_0(&descHeapInfo->ring.ringBuffer, 0, sizeof(descHeapInfo->ring.ringBuffer));
  if ( !debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1146, ASSERT_TYPE_ASSERT, "(debugName)", (const char *)&queryFormat, "debugName") )
    __debugbreak();
  descHeapInfo->ring.ringBuffer.name = debugName;
  descHeapInfo->ring.ringBuffer.settings.fencePendingFct = R_HW_IsFencePending;
  descHeapInfo->ring.ringBuffer.bufSize = numDescriptors;
  descHeapInfo->ring.ringBuffer.settings.disableFenceOnAcquire = 1;
}

/*
==============
R_InitDescriptorRange
==============
*/
void R_InitDescriptorRange(GfxDescriptorState *descState, GfxDescriptorRangeIndex rangeIndex, GfxDescriptorRangeType type, unsigned int startSlot, unsigned int numSlots, GfxDescriptorSetBase *descriptorSet)
{
  GfxDescriptorRange *v7; 
  unsigned int *p_rangeIndex; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int *v11; 

  v7 = &descState->ranges[rangeIndex];
  v7->startSlot = startSlot;
  v7->type = type;
  v7->numSlots = numSlots;
  v7->descriptorSet = descriptorSet;
  *(_QWORD *)descriptorSet = 0i64;
  R_ClearDescriptorRangeSlots(descState, rangeIndex, startSlot, numSlots);
  v7->rootDescriptorSlot = -1;
  p_rangeIndex = &g_rootSignatureDescs[0].descriptors[0].rangeIndex;
  v9 = 2i64;
  do
  {
    v10 = 0;
    v11 = p_rangeIndex;
    do
    {
      if ( *(v11 - 7) && *v11 == rangeIndex )
      {
        if ( v7->rootDescriptorSlot != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 452, ASSERT_TYPE_ASSERT, "(range->rootDescriptorSlot == 0xffffffff)", (const char *)&queryFormat, "range->rootDescriptorSlot == UINT_MAX") )
          __debugbreak();
        v7->rootDescriptorSlot = v10;
      }
      ++v10;
      v11 += 14;
    }
    while ( v10 < 0x19 );
    p_rangeIndex += 354;
    --v9;
  }
  while ( v9 );
  if ( v7->rootDescriptorSlot == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 458, ASSERT_TYPE_ASSERT, "(range->rootDescriptorSlot != 0xffffffff)", (const char *)&queryFormat, "range->rootDescriptorSlot != UINT_MAX") )
    __debugbreak();
}

/*
==============
R_InitDescriptorState
==============
*/
void R_InitDescriptorState(GfxDescriptorState *descState)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int *p_rootDescriptorSlot; 
  __int64 v5; 
  D3D12_SHADER_VISIBILITY *p_shaderVisibility; 
  unsigned int v7; 
  D3D12_SHADER_VISIBILITY *v8; 
  GfxConstantBufferDescriptor *v9; 
  __int64 v10; 
  bool *p_dirty; 

  R_InitDescriptorRange(descState, GRAPHICS_DESC_RANGE_START, DESCRIPTOR_RANGE_VIEW, 0, 0x28u, (GfxDescriptorSetBase *)&descState->dynamicDescriptorSets);
  R_InitDescriptorRange(descState, HS_VIEW_RANGE, DESCRIPTOR_RANGE_VIEW, 0, 0x28u, &descState->dynamicDescriptorSets._Elems[1]);
  v2 = 2i64;
  R_InitDescriptorRange(descState, DS_VIEW_RANGE, DESCRIPTOR_RANGE_VIEW, 0, 0x28u, &descState->dynamicDescriptorSets._Elems[2]);
  R_InitDescriptorRange(descState, PS_VIEW_RANGE_LOWER, DESCRIPTOR_RANGE_VIEW, 0, 0x16u, &descState->dynamicDescriptorSets._Elems[3]);
  R_InitDescriptorRange(descState, PS_VIEW_RANGE_UPPER, DESCRIPTOR_RANGE_VIEW, 0x16u, 0x12u, &descState->dynamicDescriptorSets._Elems[4]);
  R_InitDescriptorRange(descState, SCENE_BUFFER_TABLE, DESCRIPTOR_RANGE_VIEW, 0, 0x2Du, (GfxDescriptorSetBase *)&descState->persistentDescriptorSets);
  R_InitDescriptorRange(descState, SCENE_TEXTURE_TABLE, DESCRIPTOR_RANGE_VIEW, 0x2Du, 0x2Bu, &descState->persistentDescriptorSets._Elems[1]);
  R_InitDescriptorRange(descState, GRAPHICS_VIEW_RANGE_LARGE_TABLE, DESCRIPTOR_RANGE_VIEW, 0x58u, 0x400u, &descState->persistentDescriptorSets._Elems[2]);
  R_InitDescriptorRange(descState, PS_RW_VIEW_RANGE, DESCRIPTOR_RANGE_VIEW, 4u, 3u, &descState->dynamicDescriptorSets._Elems[5]);
  v3 = 14i64;
  R_InitDescriptorRange(descState, COMPUTE_DESC_RANGE_START, DESCRIPTOR_RANGE_BUFFER, 0, 0xEu, &descState->dynamicDescriptorSets._Elems[6]);
  R_InitDescriptorRange(descState, COMPUTE_SRV_RANGE, DESCRIPTOR_RANGE_VIEW, 0, 0x24u, &descState->dynamicDescriptorSets._Elems[7]);
  R_InitDescriptorRange(descState, COMPUTE_SRV_RANGE_LARGE_TABLE, DESCRIPTOR_RANGE_VIEW, 0, 0x4000u, &descState->persistentDescriptorSets._Elems[3]);
  R_InitDescriptorRange(descState, COMPUTE_UAV_RANGE, DESCRIPTOR_RANGE_VIEW, 0, 0xAu, &descState->dynamicDescriptorSets._Elems[8]);
  R_InitDescriptorRange(descState, GRAPHICS_SAMPLER_RANGE, DESCRIPTOR_RANGE_SAMPLER, 0, 4u, &descState->dynamicDescriptorSets._Elems[9]);
  R_InitDescriptorRange(descState, COMPUTE_SAMPLER_RANGE, DESCRIPTOR_RANGE_SAMPLER, 0, 4u, &descState->dynamicDescriptorSets._Elems[10]);
  p_rootDescriptorSlot = &descState->cbDescs[0][2].rootDescriptorSlot;
  descState->dirtyDescriptorRangeMask = 0xFFFF;
  v5 = 14i64;
  descState->anyCbDescsDirty = 1;
  do
  {
    *(p_rootDescriptorSlot - 8) = -1;
    *(p_rootDescriptorSlot - 4) = -1;
    *p_rootDescriptorSlot = -1;
    p_rootDescriptorSlot[4] = -1;
    p_rootDescriptorSlot[8] = -1;
    p_rootDescriptorSlot[12] = -1;
    p_rootDescriptorSlot += 24;
    --v5;
  }
  while ( v5 );
  p_shaderVisibility = &g_rootSignatureDescs[0].descriptors[0].shaderVisibility;
  do
  {
    v7 = 0;
    v8 = p_shaderVisibility;
    do
    {
      if ( *((_DWORD *)v8 - 8) == 3 )
      {
        if ( descState->cbDescs[*((unsigned int *)v8 - 4)][*(int *)v8].rootDescriptorSlot != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1086, ASSERT_TYPE_ASSERT, "(descState->cbDescs[rootDesc->startSlot][rootDesc->shaderVisibility].rootDescriptorSlot == 0xffffffff)", (const char *)&queryFormat, "descState->cbDescs[rootDesc->startSlot][rootDesc->shaderVisibility].rootDescriptorSlot == UINT_MAX") )
          __debugbreak();
        descState->cbDescs[*((unsigned int *)v8 - 4)][*(int *)v8].rootDescriptorSlot = v7;
      }
      ++v7;
      v8 += 14;
    }
    while ( v7 < 0x19 );
    p_shaderVisibility += 354;
    --v2;
  }
  while ( v2 );
  v9 = &descState->cbDescs[0][2];
  v10 = 14i64;
  do
  {
    v9[-2].location = 0i64;
    v9[-1].location = 0i64;
    v9->location = 0i64;
    v9[1].location = 0i64;
    v9[2].location = 0i64;
    v9[3].location = 0i64;
    v9 += 6;
    --v10;
  }
  while ( v10 );
  descState->dirtyDescriptorRangeMask = 0xFFFF;
  p_dirty = &descState->cbDescs[0][2].dirty;
  *(_WORD *)&descState->anyCbDescsDirty = 257;
  do
  {
    *(p_dirty - 32) = 1;
    *(p_dirty - 16) = 1;
    *p_dirty = 1;
    p_dirty[16] = 1;
    p_dirty[32] = 1;
    p_dirty[48] = 1;
    p_dirty += 96;
    --v3;
  }
  while ( v3 );
}

/*
==============
R_InitGlobalDescriptorPools
==============
*/
void R_InitGlobalDescriptorPools(ID3D12Device *device)
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int i; 
  unsigned int v7; 
  unsigned int j; 
  unsigned int totalSlots; 
  __int64 v10; 

  R_CreateDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_RTV, 0, 0x1000u, s_descriptorHeaps);
  R_CreateDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_DSV, 0, 0x1000u, &s_descriptorHeaps[1]);
  R_CreateDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 0, 0x17800u, &s_descriptorHeaps[2]);
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v3 = g_primaryDescriptorHeapSize;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
  {
    v3 = g_primaryDescriptorHeapSize + 302016;
    g_primaryDescriptorHeapSize += 302016;
  }
  R_CreateDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 1, PERSISTENT_TABLES_HEAP_SIZE + v3 + 663680, &s_descriptorHeaps[3]);
  R_CreateDescriptorHeap(device, D3D12XBOX_DESCRIPTOR_HEAP_TYPE_SAMPLER_UNBOUNDED, 1, 4u, &s_descriptorHeaps[4]);
  R_InitializeDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_RTV, 0, 0x1000u, &g_descriptorPools.rtViewPool.handle);
  v4 = 1;
  g_descriptorPools.rtViewPool.nextSlot = (unsigned int *)PMem_Alloc(0x4000ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "R_InitializeDescriptorHeap_PoolAllocator");
  g_descriptorPools.rtViewPool.freeSlot = 1;
  g_descriptorPools.rtViewPool.lock = 0;
  g_descriptorPools.rtViewPool.handle.used = 1;
  *g_descriptorPools.rtViewPool.nextSlot = 0;
  v5 = 1;
  for ( i = g_descriptorPools.rtViewPool.handle.totalSlots; v5 < g_descriptorPools.rtViewPool.handle.totalSlots; i = g_descriptorPools.rtViewPool.handle.totalSlots )
  {
    g_descriptorPools.rtViewPool.nextSlot[v5] = v5 + 1;
    ++v5;
  }
  g_descriptorPools.rtViewPool.nextSlot[i - 1] = 0;
  R_InitializeDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_DSV, 0, 0x1000u, &g_descriptorPools.dsViewPool.handle);
  g_descriptorPools.dsViewPool.nextSlot = (unsigned int *)PMem_Alloc(0x4000ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "R_InitializeDescriptorHeap_PoolAllocator");
  g_descriptorPools.dsViewPool.lock = 0;
  g_descriptorPools.dsViewPool.freeSlot = 1;
  g_descriptorPools.dsViewPool.handle.used = 1;
  *g_descriptorPools.dsViewPool.nextSlot = 0;
  v7 = 1;
  for ( j = g_descriptorPools.dsViewPool.handle.totalSlots; v7 < g_descriptorPools.dsViewPool.handle.totalSlots; j = g_descriptorPools.dsViewPool.handle.totalSlots )
  {
    g_descriptorPools.dsViewPool.nextSlot[v7] = v7 + 1;
    ++v7;
  }
  g_descriptorPools.dsViewPool.nextSlot[j - 1] = 0;
  R_InitializeDescriptorHeap(device, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 0, 0x17800u, &g_descriptorPools.shaderViewPool.handle);
  g_descriptorPools.shaderViewPool.nextSlot = (unsigned int *)PMem_Alloc(0x5E000ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "R_InitializeDescriptorHeap_PoolAllocator");
  g_descriptorPools.shaderViewPool.lock = 0;
  g_descriptorPools.shaderViewPool.freeSlot = 1;
  g_descriptorPools.shaderViewPool.handle.used = 1;
  *g_descriptorPools.shaderViewPool.nextSlot = 0;
  totalSlots = g_descriptorPools.shaderViewPool.handle.totalSlots;
  if ( g_descriptorPools.shaderViewPool.handle.totalSlots > 1 )
  {
    do
    {
      v10 = v4++;
      g_descriptorPools.shaderViewPool.nextSlot[v10] = v4;
      totalSlots = g_descriptorPools.shaderViewPool.handle.totalSlots;
    }
    while ( v4 < g_descriptorPools.shaderViewPool.handle.totalSlots );
  }
  g_descriptorPools.shaderViewPool.nextSlot[totalSlots - 1] = 0;
  R_InitGlobalNullDescriptors(device);
}

/*
==============
R_InitGlobalNullDescriptors
==============
*/
void R_InitGlobalNullDescriptors(ID3D12Device *device)
{
  HRESULT v5; 
  const char *v6; 
  ID3D12DeviceChild *v7; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned int freeSlot; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  unsigned __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  int v32; 
  ID3D12Device *v33; 
  ID3D12DeviceChild *resource; 
  unsigned __int64 v35; 
  int v36; 
  _BYTE v37[12]; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  _BYTE v41[48]; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  __m256i v46; 

  *(_QWORD *)&v41[28] = 65537i64;
  v33 = device;
  *(_QWORD *)&v41[8] = 0i64;
  *(_DWORD *)&v41[24] = 1;
  *(_QWORD *)v41 = 1i64;
  *(_QWORD *)&v41[16] = 64i64;
  __asm
  {
    vmovups ymm0, [rbp+80h+var_B8]
    vmovups [rbp+80h+var_68], ymm0
  }
  v42 = 0i64;
  __asm
  {
    vmovsd  xmm0, [rbp+80h+var_88]
    vmovsd  [rbp+80h+var_38], xmm0
  }
  *(_QWORD *)&v41[36] = 1i64;
  *(_DWORD *)&v41[44] = 1;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-18h]
    vmovups [rbp+80h+var_48], xmm1
  }
  v5 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, __m256i *, _QWORD, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, 0i64, &v46, 0i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v5 < 0 )
  {
    v6 = R_ErrorDescription(v5);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v6);
  }
  PIXSetDebugName(resource, "sentinel resource");
  v7 = resource;
  m_pFunction = device->m_pFunction;
  v27 = 41;
  v28 = 1;
  v29 = 5768;
  v30 = 0i64;
  v31 = 1i64;
  v32 = 0;
  m_pFunction[6].QueryInterface(device, (const _GUID *)resource, (void **)&v27);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v9 = v7->m_pFunction->Release(v7);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 666, "sentinelResource", v9) )
    __debugbreak();
  v27 = 41;
  v28 = 1;
  v10 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
  v29 = 5768;
  v30 = 0i64;
  v31 = 0i64;
  v32 = 0;
  while ( 1 )
  {
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  v12 = (__int64)v33;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  }
  g_descriptorPools.shaderViewPool.freeSlot = g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
  g_descriptorPools.shaderViewPool.nextSlot[freeSlot] = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  v35 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
  if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  v13 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
  if ( freeSlot != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 677, ASSERT_TYPE_ASSERT, "(descriptor == UNBOUND_BUFFER_SRV)", (const char *)&queryFormat, "descriptor == UNBOUND_BUFFER_SRV") )
    __debugbreak();
  *(double *)&_XMM0 = (*(double (__fastcall **)(__int64, _QWORD, int *, unsigned __int64))(*(_QWORD *)v12 + 144i64))(v12, 0i64, &v27, v13);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+180h+var_108+4], xmm0
  }
  v27 = 28;
  v28 = 4;
  v29 = 5768;
  v30 = 0xFFFFFFFF00000000ui64;
  LODWORD(v31) = 0;
  while ( 1 )
  {
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v15 = g_descriptorPools.shaderViewPool.freeSlot;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    v15 = g_descriptorPools.shaderViewPool.freeSlot;
  }
  g_descriptorPools.shaderViewPool.freeSlot = g_descriptorPools.shaderViewPool.nextSlot[v15];
  g_descriptorPools.shaderViewPool.nextSlot[v15] = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( ((unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  v16 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v15 + g_descriptorPools.shaderViewPool.handle.startSlot);
  if ( v15 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 688, ASSERT_TYPE_ASSERT, "(descriptor == UNBOUND_TEXTURE_SRV)", (const char *)&queryFormat, "descriptor == UNBOUND_TEXTURE_SRV") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, _QWORD, int *, unsigned __int64))(*(_QWORD *)v12 + 144i64))(v12, 0i64, &v27, v16);
  v36 = 41;
  *(_DWORD *)v37 = 1;
  *(_QWORD *)&v37[4] = 0i64;
  v38 = 0i64;
  v39 = 0i64;
  v40 = 0;
  while ( 1 )
  {
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v17 = g_descriptorPools.shaderViewPool.freeSlot;
  v18 = v35;
  v19 = (__int64)v33;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    v17 = g_descriptorPools.shaderViewPool.freeSlot;
  }
  g_descriptorPools.shaderViewPool.freeSlot = g_descriptorPools.shaderViewPool.nextSlot[v17];
  g_descriptorPools.shaderViewPool.nextSlot[v17] = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  v20 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v17 + g_descriptorPools.shaderViewPool.handle.startSlot);
  if ( v17 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 699, ASSERT_TYPE_ASSERT, "(descriptor == UNBOUND_BUFFER_UAV)", (const char *)&queryFormat, "descriptor == UNBOUND_BUFFER_UAV") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, int *, unsigned __int64))(*(_QWORD *)v19 + 152i64))(v19, 0i64, 0i64, &v36, v20);
  v36 = 28;
  *(_QWORD *)v37 = 4i64;
  *(_DWORD *)&v37[8] = 0;
  while ( 1 )
  {
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v21 = g_descriptorPools.shaderViewPool.freeSlot;
  v22 = v35;
  v23 = (__int64)v33;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    v21 = g_descriptorPools.shaderViewPool.freeSlot;
  }
  g_descriptorPools.shaderViewPool.freeSlot = g_descriptorPools.shaderViewPool.nextSlot[v21];
  g_descriptorPools.shaderViewPool.nextSlot[v21] = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  v24 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v21 + g_descriptorPools.shaderViewPool.handle.startSlot);
  if ( v21 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 707, ASSERT_TYPE_ASSERT, "(descriptor == UNBOUND_TEXTURE_UAV)", (const char *)&queryFormat, "descriptor == UNBOUND_TEXTURE_UAV") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, int *, unsigned __int64))(*(_QWORD *)v23 + 152i64))(v23, 0i64, 0i64, &v36, v24);
  v43 = 28;
  v44 = 4i64;
  v45 = 0;
  while ( 1 )
  {
    if ( ((unsigned __int64)&g_descriptorPools.rtViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.rtViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.rtViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  v25 = g_descriptorPools.rtViewPool.freeSlot;
  if ( !g_descriptorPools.rtViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    v25 = g_descriptorPools.rtViewPool.freeSlot;
  }
  g_descriptorPools.rtViewPool.freeSlot = g_descriptorPools.rtViewPool.nextSlot[v25];
  g_descriptorPools.rtViewPool.nextSlot[v25] = 0;
  ++g_descriptorPools.rtViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.rtViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.rtViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.rtViewPool.lock, 0);
  v26 = g_descriptorPools.rtViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.rtViewPool.handle.parent->descriptorSize * (v25 + g_descriptorPools.rtViewPool.handle.startSlot);
  if ( v25 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 715, ASSERT_TYPE_ASSERT, "(descriptor == UNBOUND_RTV)", (const char *)&queryFormat, "descriptor == UNBOUND_RTV") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, _QWORD, int *, unsigned __int64))(*(_QWORD *)v23 + 160i64))(v23, 0i64, &v43, v26);
}

/*
==============
R_InitRootSignatures
==============
*/
void R_InitRootSignatures(ID3D12Device *device)
{
  ID3D12DeviceChild **p_rootSignature; 
  __int64 v2; 
  unsigned int v3; 
  char *v4; 
  _DWORD *v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  D3D12_STATIC_SAMPLER_DESC *p_staticSampler; 
  unsigned int v11; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  HRESULT v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 
  ID3DBlob *ppBlob; 
  ID3D12Device *v21; 
  D3D12_ROOT_SIGNATURE_DESC pRootSignature; 
  D3D12_STATIC_SAMPLER_DESC staticSampler; 
  char v24[800]; 

  v21 = device;
  p_rootSignature = &g_rootSignatureDescs[0].rootSignature;
  v2 = 2i64;
  do
  {
    v3 = 0;
    v4 = v24;
    v5 = (_DWORD *)p_rootSignature - 341;
    v6 = 25i64;
    do
    {
      v7 = *(v5 - 9);
      switch ( v7 )
      {
        case 0:
          break;
        case 3:
          ++v3;
          *((_DWORD *)v4 + 6) = *(v5 - 1);
          *((_DWORD *)v4 + 2) = *(v5 - 5);
          *((_DWORD *)v4 + 3) = *(v5 - 3);
          *(_DWORD *)v4 = 2;
          break;
        case 6:
          *v5 = 2;
          goto LABEL_6;
        case 7:
        case 8:
          *v5 = 0;
          goto LABEL_6;
        case 9:
        case 11:
          v5[1] = *(v5 - 4);
          v5[2] = *(v5 - 5);
          *v5 = 1;
          if ( v7 == 9 )
            goto LABEL_7;
          v8 = 2000;
          goto LABEL_8;
        case 10:
          *v5 = 3;
LABEL_6:
          v5[1] = *(v5 - 4);
          v5[2] = *(v5 - 5);
LABEL_7:
          v8 = *(v5 - 3);
LABEL_8:
          v5[3] = v8;
          ++v3;
          *((_DWORD *)v4 + 6) = *(v5 - 1);
          v5[4] = -1;
          *(_DWORD *)v4 = 0;
          *((_DWORD *)v4 + 2) = 1;
          *((_QWORD *)v4 + 2) = v5;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 331, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled descriptor type.") )
            __debugbreak();
          break;
      }
      v5 += 14;
      v4 += 32;
      --v6;
    }
    while ( v6 );
    v9 = (__int64)v21;
    pRootSignature.pParameters = (const D3D12_ROOT_PARAMETER *)v24;
    p_staticSampler = &staticSampler;
    pRootSignature.NumParameters = v3;
    v11 = 4;
    pRootSignature.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT;
    do
      R_BuildStaticSamplerStateDesc((MaterialCodeSampler)v11++, p_staticSampler++);
    while ( v11 <= 0xE );
    pRootSignature.NumStaticSamplers = 11;
    pRootSignature.pStaticSamplers = &staticSampler;
    v12 = D3D12SerializeRootSignature_0(&pRootSignature, D3D_ROOT_SIGNATURE_VERSION_1, &ppBlob, NULL);
    if ( v12 < 0 )
    {
      v13 = R_ErrorDescription(v12);
      Sys_Error((const ObfuscateErrorText)&stru_14436E100, 353i64, v13);
    }
    v14 = ((__int64 (__fastcall *)(ID3DBlob *))ppBlob->m_pFunction[1].AddRef)(ppBlob);
    v15 = ((__int64 (__fastcall *)(ID3DBlob *))ppBlob->m_pFunction[1].QueryInterface)(ppBlob);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, GUID *, ID3D12DeviceChild **))(*(_QWORD *)v9 + 128i64))(v9, 0i64, v15, v14, &GUID_c54a6b66_72df_4ee8_8be5_a946a1429214, p_rootSignature);
    if ( v16 < 0 )
    {
      v17 = R_ErrorDescription(v16);
      Sys_Error((const ObfuscateErrorText)&stru_14436E1E0, 354i64, v17);
    }
    if ( *((_DWORD *)p_rootSignature - 352) >= 2u )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = *((_DWORD *)p_rootSignature - 352);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( rootSignatureDesc->type ) < (unsigned)( ( sizeof( *array_counter( g_rootSignatureTypeNames ) ) + 0 ) )", "rootSignatureDesc->type doesn't index ARRAY_COUNT( g_rootSignatureTypeNames )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    PIXSetDebugName(*p_rootSignature, g_rootSignatureTypeNames[*((int *)p_rootSignature - 352)]);
    ppBlob->m_pFunction->Release(ppBlob);
    p_rootSignature += 177;
    ppBlob = NULL;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_InitializeDescriptorHeap
==============
*/
void R_InitializeDescriptorHeap(ID3D12Device *device, D3D12_DESCRIPTOR_HEAP_TYPE heapType, bool shaderVisible, unsigned int numDescriptors, GfxDescriptorHeapHandle *descHeap)
{
  GfxUnifiedDescriptorHeap *v5; 
  bool *p_shaderVisible; 
  __int64 v7; 
  unsigned int used; 
  unsigned int totalSlots; 
  unsigned int v13; 
  D3D12_DESCRIPTOR_HEAP_TYPE v14; 
  BOOL v15; 
  unsigned int v16; 

  v5 = NULL;
  p_shaderVisible = &s_descriptorHeaps[0].shaderVisible;
  v7 = 0i64;
  while ( *((_DWORD *)p_shaderVisible - 9) != heapType || *p_shaderVisible != shaderVisible )
  {
    v7 = (unsigned int)(v7 + 1);
    p_shaderVisible += 48;
    if ( (unsigned int)v7 >= 5 )
      goto LABEL_7;
  }
  v5 = &s_descriptorHeaps[v7];
  if ( v5 )
    goto LABEL_9;
LABEL_7:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 411, ASSERT_TYPE_ASSERT, "(unifiedHeap != nullptr)", (const char *)&queryFormat, "unifiedHeap != nullptr") )
    __debugbreak();
LABEL_9:
  used = v5->used;
  totalSlots = v5->totalSlots;
  if ( used + numDescriptors > totalSlots )
  {
    v16 = numDescriptors + used - totalSlots;
    v15 = shaderVisible;
    v14 = heapType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 414, ASSERT_TYPE_ASSERT, "(unifiedHeap->used + numDescriptors <= unifiedHeap->totalSlots)", "%s\n\tHeap of type %d & GPU Visibility: %d is too short by %d descriptors. Please change R_InitGlobalDescriptorPools to properly account of the memory needed", "unifiedHeap->used + numDescriptors <= unifiedHeap->totalSlots", v14, v15, v16) )
      __debugbreak();
  }
  descHeap->parent = v5;
  v13 = v5->used;
  descHeap->totalSlots = numDescriptors;
  descHeap->startSlot = v13;
  descHeap->used = 0;
  v5->used += numDescriptors;
}

/*
==============
R_RebindDescriptorState
==============
*/
void R_RebindDescriptorState(CmdBufState *state)
{
  GfxDescriptorState *descState; 
  GfxRootSignatureDesc *v3; 
  GfxDevice *device; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  ID3D12RootSignature *rootSignature; 
  GfxRootSignatureType type; 
  unsigned int v8; 
  unsigned int *m_GraphicsRootPacketHeader; 
  unsigned int *p_startSlot; 
  const char *v11; 
  GfxDescriptorSetBase *descriptorSet; 
  unsigned int ptr; 
  unsigned int *v14; 
  unsigned int v15; 
  unsigned int *m_pCurrent; 
  unsigned __int64 location; 
  __int64 v18[2]; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1594, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  descState = state->descState;
  if ( descState )
  {
    if ( descState->rootSignatureType == ROOT_SIGNATURE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1601, ASSERT_TYPE_ASSERT, "(descState->rootSignatureType != UNSET_ROOT_SIGNATURE)", (const char *)&queryFormat, "descState->rootSignatureType != UNSET_ROOT_SIGNATURE") )
      __debugbreak();
    v3 = &g_rootSignatureDescs[descState->rootSignatureType];
    if ( !v3->rootSignature && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1603, ASSERT_TYPE_ASSERT, "(rootSignatureDesc->rootSignature)", (const char *)&queryFormat, "rootSignatureDesc->rootSignature") )
      __debugbreak();
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1606, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    if ( !descState->rootSignatureDirty && descState->rootSignatureType != ROOT_SIGNATURE_COUNT )
    {
      m_pFunction = device->m_pFunction;
      rootSignature = v3->rootSignature;
      type = v3->type;
      if ( v3->type == COMPUTE_DEFAULT_ROOT_SIGNATURE )
        ((void (__fastcall *)(GfxDevice *, ID3D12RootSignature *))m_pFunction[11].QueryInterface)(device, rootSignature);
      else
        ((void (__fastcall *)(GfxDevice *, ID3D12RootSignature *))m_pFunction[11].AddRef)(device, rootSignature);
      v18[0] = (__int64)descState->descHeapInfo->handle.parent->d3dheap;
      v18[1] = (__int64)s_descriptorHeaps[4].d3dheap;
      ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))device->m_pFunction[10].Release)(device, 2i64, v18);
      v8 = 0;
      m_GraphicsRootPacketHeader = device->m_GraphicsRootPacketHeader;
      p_startSlot = &v3->descriptors[0].startSlot;
      v11 = "!isCompute";
      while ( 1 )
      {
        switch ( *(p_startSlot - 4) )
        {
          case 0u:
          case 0xBu:
            goto $LN41_40;
          case 3u:
            if ( type == COMPUTE_DEFAULT_ROOT_SIGNATURE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1662, ASSERT_TYPE_ASSERT, "(!isCompute)", (const char *)&queryFormat, "!isCompute") )
              __debugbreak();
            m_pCurrent = device->m_Putter.m_pCurrent;
            location = descState->cbDescs[*p_startSlot][p_startSlot[4]].location;
            if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
            {
              ((void (__fastcall *)(GfxDevice *, _QWORD, unsigned __int64, const char *))device->m_pFunction[14].QueryInterface)(device, v8, location, v11);
            }
            else
            {
              *m_pCurrent = *m_GraphicsRootPacketHeader;
              *(_QWORD *)(m_pCurrent + 1) = location;
              device->m_Putter.m_pCurrent = m_pCurrent + 3;
            }
            goto $LN41_40;
          case 6u:
          case 7u:
          case 9u:
            R_BindViewDescriptors(device, &descState->descHeapInfo->handle, v8, descState->ranges[p_startSlot[3]].lastBoundStart, type == COMPUTE_DEFAULT_ROOT_SIGNATURE);
            goto $LN41_40;
          case 8u:
            descriptorSet = descState->ranges[p_startSlot[3]].descriptorSet;
            if ( *(_QWORD *)descriptorSet )
              R_BindViewDescriptors(device, (const GfxDescriptorHeapHandle *)(*(_QWORD *)descriptorSet + 8i64), v8, 0, type == COMPUTE_DEFAULT_ROOT_SIGNATURE);
            goto $LN41_40;
          case 0xAu:
            ptr = s_descriptorHeaps[4].heapStartGPUHandle.ptr;
            v14 = device->m_Putter.m_pCurrent;
            if ( type == COMPUTE_DEFAULT_ROOT_SIGNATURE )
            {
              if ( v14 >= device->m_Putter.m_pLimit_Api )
              {
                ((void (__fastcall *)(GfxDevice *, _QWORD, unsigned __int64, const char *))device->m_pFunction[11].Release)(device, v8, s_descriptorHeaps[4].heapStartGPUHandle.ptr, "!isCompute");
                goto $LN41_40;
              }
              v15 = m_GraphicsRootPacketHeader[64];
            }
            else
            {
              if ( v14 >= device->m_Putter.m_pLimit_Api )
              {
                ((void (__fastcall *)(GfxDevice *, _QWORD, unsigned __int64, const char *))device->m_pFunction[12].QueryInterface)(device, v8, s_descriptorHeaps[4].heapStartGPUHandle.ptr, "!isCompute");
                goto $LN41_40;
              }
              v15 = *m_GraphicsRootPacketHeader;
            }
            *v14 = v15;
            v14[1] = ptr;
            device->m_Putter.m_pCurrent = v14 + 2;
$LN41_40:
            ++v8;
            v11 = "!isCompute";
            ++m_GraphicsRootPacketHeader;
            p_startSlot += 14;
            if ( v8 >= 0x19 )
              return;
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1674, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled rootDescriptor type") )
              __debugbreak();
            goto $LN41_40;
        }
      }
    }
  }
}

/*
==============
R_ResetGfxDescriptorTable
==============
*/
void R_ResetGfxDescriptorTable(GfxDescriptorTable *table)
{
  if ( table )
  {
    table->m_usedSize = 0;
    table->m_heapHandle.used = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1573, ASSERT_TYPE_ASSERT, "(table != nullptr)", (const char *)&queryFormat, "table != nullptr") )
      __debugbreak();
    MEMORY[0x28] = 0;
    MEMORY[0x18] = 0;
  }
}

/*
==============
R_SetComputeDescriptorTable
==============
*/
void R_SetComputeDescriptorTable(ComputeCmdBufState *state, const GfxDescriptorTable *table, unsigned int descriptorIndex)
{
  __int64 v3; 

  v3 = descriptorIndex;
  if ( descriptorIndex != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1564, ASSERT_TYPE_ASSERT, "(descriptorIndex >= DESC_TABLE_PERSISTENT_COMPUTE_TABLES_START && descriptorIndex < DESC_TABLE_TABLE_COUNT)", (const char *)&queryFormat, "descriptorIndex >= DESC_TABLE_PERSISTENT_COMPUTE_TABLES_START && descriptorIndex < DESC_TABLE_TABLE_COUNT") )
    __debugbreak();
  state->descState->persistentDescriptorSets._Elems[(unsigned int)(v3 - 11)].table = table;
  state->descState->dirtyDescriptorRangeMask |= 1 << g_TableIndexRangeIndex[v3];
}

/*
==============
R_SetGfxDescriptorTable
==============
*/
void R_SetGfxDescriptorTable(GfxCmdBufState *state, const GfxDescriptorTable *table, unsigned int descriptorIndex)
{
  __int64 v3; 

  v3 = descriptorIndex;
  if ( descriptorIndex - 11 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1555, ASSERT_TYPE_ASSERT, "(descriptorIndex >= DESC_TABLE_PERSISTENT_TABLES_START && descriptorIndex < DESC_TABLE_PERSISTENT_COMPUTE_TABLES_START)", (const char *)&queryFormat, "descriptorIndex >= DESC_TABLE_PERSISTENT_TABLES_START && descriptorIndex < DESC_TABLE_PERSISTENT_COMPUTE_TABLES_START") )
    __debugbreak();
  state->descState->persistentDescriptorSets._Elems[(unsigned int)(v3 - 11)].table = table;
  state->descState->dirtyDescriptorRangeMask |= 1 << g_TableIndexRangeIndex[v3];
}

/*
==============
R_ShutdownDescriptorHeap
==============
*/
void R_ShutdownDescriptorHeap(GfxDescriptorHeapHandle *descHeap)
{
  GfxUnifiedDescriptorHeap *parent; 

  parent = descHeap->parent;
  if ( !descHeap->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1515, ASSERT_TYPE_ASSERT, "(unifiedHeap != nullptr)", (const char *)&queryFormat, "unifiedHeap != nullptr") )
    __debugbreak();
  if ( parent->used != descHeap->totalSlots + descHeap->startSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1518, ASSERT_TYPE_ASSERT, "(unifiedHeap->used == descHeap->startSlot + descHeap->totalSlots)", (const char *)&queryFormat, "unifiedHeap->used == descHeap->startSlot + descHeap->totalSlots") )
    __debugbreak();
  parent->used -= descHeap->totalSlots;
  descHeap->parent = NULL;
  *(_QWORD *)&descHeap->startSlot = 0i64;
  descHeap->used = 0;
}

/*
==============
R_ShutdownDescriptorHeapInfoState
==============
*/
void R_ShutdownDescriptorHeapInfoState(GfxDescriptorState *descState)
{
  if ( descState->descHeapInfo->type == GFX_DESCHEAP_INFO_LINEAR )
    descState->descHeapInfo = NULL;
}

/*
==============
R_ShutdownGfxDescriptorTable
==============
*/
void R_ShutdownGfxDescriptorTable(GfxDescriptorTable *table)
{
  GfxUnifiedDescriptorHeap *parent; 

  parent = table->m_heapHandle.parent;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1515, ASSERT_TYPE_ASSERT, "(unifiedHeap != nullptr)", (const char *)&queryFormat, "unifiedHeap != nullptr") )
    __debugbreak();
  if ( parent->used != table->m_heapHandle.totalSlots + table->m_heapHandle.startSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.cpp", 1518, ASSERT_TYPE_ASSERT, "(unifiedHeap->used == descHeap->startSlot + descHeap->totalSlots)", (const char *)&queryFormat, "unifiedHeap->used == descHeap->startSlot + descHeap->totalSlots") )
    __debugbreak();
  parent->used -= table->m_heapHandle.totalSlots;
  table->m_heapHandle.parent = NULL;
  *(_QWORD *)&table->m_heapHandle.startSlot = 0i64;
  table->m_heapHandle.used = 0;
}

