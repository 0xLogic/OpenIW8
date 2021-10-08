/*
==============
FlushGpuCacheRange
==============
*/

void __fastcall FlushGpuCacheRange(GfxDevice *device, unsigned int flags, void *baseAddress, unsigned __int64 sizeInBytes)
{
  ?FlushGpuCacheRange@@YAXPEAUGfxDevice@@IPEAX_K@Z(device, flags, baseAddress, sizeInBytes);
}

/*
==============
R_HW_CreatePlacedResource
==============
*/

ID3D12Resource *__fastcall R_HW_CreatePlacedResource(unsigned __int64 resourceLocation, const D3D12_RESOURCE_DESC *resourceDesc, D3D12_RESOURCE_STATES initState, const char *name)
{
  return ?R_HW_CreatePlacedResource@@YAPEAUID3D12Resource@@_KPEBUD3D12_RESOURCE_DESC@@W4D3D12_RESOURCE_STATES@@PEBD@Z(resourceLocation, resourceDesc, initState, name);
}

/*
==============
R_HW_SetRenderTargetsDX
==============
*/

void __fastcall R_HW_SetRenderTargetsDX(GfxDevice *device, GfxDescriptorState *descState, unsigned int count, unsigned int *rtvs, unsigned int dsv)
{
  ?R_HW_SetRenderTargetsDX@@YAXPEAUGfxDevice@@PEAUGfxDescriptorState@@IPEAII@Z(device, descState, count, rtvs, dsv);
}

/*
==============
R_HW_CreateUnorderedAccessView
==============
*/

void __fastcall R_HW_CreateUnorderedAccessView(ID3D12Resource *resource, unsigned int subresourceToTransition, const D3D12_UNORDERED_ACCESS_VIEW_DESC *viewDesc, GfxShaderRWView *outRWView)
{
  ?R_HW_CreateUnorderedAccessView@@YAXPEAUID3D12Resource@@IPEBUD3D12_UNORDERED_ACCESS_VIEW_DESC@@PEAUGfxShaderRWView@@@Z(resource, subresourceToTransition, viewDesc, outRWView);
}

/*
==============
R_HW_CreateShaderResourceView
==============
*/

void __fastcall R_HW_CreateShaderResourceView(ID3D12Resource *resource, const D3D12_SHADER_RESOURCE_VIEW_DESC *viewDesc, GfxShaderView *outView)
{
  ?R_HW_CreateShaderResourceView@@YAXPEAUID3D12Resource@@PEBUD3D12_SHADER_RESOURCE_VIEW_DESC@@PEAUGfxShaderView@@@Z(resource, viewDesc, outView);
}

/*
==============
R_HW_CreateUnorderedAccessView
==============
*/
void R_HW_CreateUnorderedAccessView(ID3D12Resource *resource, unsigned int subresourceToTransition, const D3D12_UNORDERED_ACCESS_VIEW_DESC *viewDesc, GfxShaderRWView *outRWView)
{
  unsigned int freeSlot; 
  unsigned int *v9; 

  while ( 1 )
  {
    if ( ((unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  }
  v9 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
  g_descriptorPools.shaderViewPool.freeSlot = *v9;
  *v9 = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, const D3D12_UNORDERED_ACCESS_VIEW_DESC *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].AddRef)(g_dx.d3d12device, resource, 0i64, viewDesc, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
  outRWView->rwView = freeSlot;
  outRWView->rwResource = resource;
  outRWView->rwCounterResource = NULL;
  outRWView->rwSubresourceToTransition = subresourceToTransition;
}

/*
==============
R_HW_CreateShaderResourceView
==============
*/
void R_HW_CreateShaderResourceView(ID3D12Resource *resource, const D3D12_SHADER_RESOURCE_VIEW_DESC *viewDesc, GfxShaderView *outView)
{
  unsigned int freeSlot; 
  unsigned int *v7; 

  R_LockDescriptorPool(&g_descriptorPools.shaderViewPool);
  freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  }
  v7 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
  g_descriptorPools.shaderViewPool.freeSlot = *v7;
  *v7 = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, const D3D12_SHADER_RESOURCE_VIEW_DESC *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].QueryInterface)(g_dx.d3d12device, resource, viewDesc, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
  *(&outView->view + 1) = 0;
  outView->view = freeSlot;
  outView->resource = resource;
}

/*
==============
R_HW_CreatePlacedResource
==============
*/
ID3D12DeviceChild *R_HW_CreatePlacedResource(unsigned __int64 resourceLocation, const D3D12_RESOURCE_DESC *resourceDesc, D3D12_RESOURCE_STATES initState, const char *name)
{
  HRESULT v5; 
  const char *v6; 
  ID3D12DeviceChild *resource; 

  v5 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, const D3D12_RESOURCE_DESC *, _QWORD, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, resourceLocation, resourceDesc, (unsigned int)initState, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v5 < 0 )
  {
    v6 = R_ErrorDescription(v5);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v6);
  }
  PIXSetDebugName(resource, name);
  return resource;
}

/*
==============
FlushGpuCacheRange
==============
*/
void FlushGpuCacheRange(GfxDevice *device, unsigned int flags, void *baseAddress, unsigned __int64 sizeInBytes)
{
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( !baseAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 420, ASSERT_TYPE_ASSERT, "(baseAddress != ((D3D12_GPU_VIRTUAL_ADDRESS)0))", (const char *)&queryFormat, "baseAddress != D3D12_GPU_VIRTUAL_ADDRESS_NULL") )
    __debugbreak();
  if ( !sizeInBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 421, ASSERT_TYPE_ASSERT, "(sizeInBytes)", (const char *)&queryFormat, "sizeInBytes") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, _QWORD, void *, unsigned __int64))device->m_pFunction[22].AddRef)(device, flags, baseAddress, (sizeInBytes + 255) & 0xFFFFFFFFFFFFFF00ui64);
}

/*
==============
R_HW_SetRenderTargetsDX
==============
*/
void R_HW_SetRenderTargetsDX(GfxDevice *device, GfxDescriptorState *descState, unsigned int count, unsigned int *rtvs, unsigned int dsv)
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
  if ( (unsigned int)v6 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 276, ASSERT_TYPE_ASSERT, "(count < ( sizeof( *array_counter( rtvHandles ) ) + 0 ))", (const char *)&queryFormat, "count < ARRAY_COUNT( rtvHandles )") )
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

