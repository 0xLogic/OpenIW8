/*
==============
R_RT_DXResource_CreateCustomTexture
==============
*/

ID3D12Resource *__fastcall R_RT_DXResource_CreateCustomTexture(const R_RT_DXResource_ViewSource *viewSource, unsigned __int64 address, DXGI_FORMAT format, const char *name)
{
  return ?R_RT_DXResource_CreateCustomTexture@@YAPEAUID3D12Resource@@AEBUR_RT_DXResource_ViewSource@@_KW4DXGI_FORMAT@@PEBD@Z(viewSource, address, format, name);
}

/*
==============
R_RT_DXResource_DestroyDepthStencilView
==============
*/

void __fastcall R_RT_DXResource_DestroyDepthStencilView(unsigned int view)
{
  ?R_RT_DXResource_DestroyDepthStencilView@@YAXI@Z(view);
}

/*
==============
R_RT_DXResource_CreateUnorderedAccessView
==============
*/

GfxShaderTextureRWView *__fastcall R_RT_DXResource_CreateUnorderedAccessView(GfxShaderTextureRWView *result, const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel, const char *name)
{
  return ?R_RT_DXResource_CreateUnorderedAccessView@@YA?AUGfxShaderTextureRWView@@AEBUR_RT_DXResource_ViewSource@@W4DXGI_FORMAT@@HHPEBD@Z(result, viewSource, format, optionalArraySliceIndex, optionalMipLevel, name);
}

/*
==============
R_RT_DXResource_CreateHTileBuffer
==============
*/

ID3D12Resource *__fastcall R_RT_DXResource_CreateHTileBuffer(unsigned __int64 address, unsigned int size, const char *name)
{
  return ?R_RT_DXResource_CreateHTileBuffer@@YAPEAUID3D12Resource@@_KIPEBD@Z(address, size, name);
}

/*
==============
R_RT_DXResource_GetLayout
==============
*/

R_RT_DXResource_LayoutKey::Result *__fastcall R_RT_DXResource_GetLayout(R_RT_DXResource_LayoutKey::Result *result, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipCount, unsigned int sampleCount, GfxPixelFormat format, unsigned int bindFlags, unsigned int miscFlags, bool isDepth, bool rotateBank, R_RT_Flags rtFlags)
{
  return ?R_RT_DXResource_GetLayout@@YA?AUResult@R_RT_DXResource_LayoutKey@@IIIIIIW4GfxPixelFormat@@II_N1W4R_RT_Flags@@@Z(result, width, height, depth, arraySliceCount, mipCount, sampleCount, format, bindFlags, miscFlags, isDepth, rotateBank, rtFlags);
}

/*
==============
R_RT_DXResource_CreateCustom4Texture
==============
*/

ID3D12Resource *__fastcall R_RT_DXResource_CreateCustom4Texture(const R_RT_DXResource_ViewSource *viewSource, unsigned __int64 address, DXGI_FORMAT format, const char *name)
{
  return ?R_RT_DXResource_CreateCustom4Texture@@YAPEAUID3D12Resource@@AEBUR_RT_DXResource_ViewSource@@_KW4DXGI_FORMAT@@PEBD@Z(viewSource, address, format, name);
}

/*
==============
R_RT_DXResource_CreateHTileRWView
==============
*/

GfxShaderBufferRWView *__fastcall R_RT_DXResource_CreateHTileRWView(GfxShaderBufferRWView *result, ID3D12Resource *htileBuffer, unsigned int numElements)
{
  return ?R_RT_DXResource_CreateHTileRWView@@YA?AUGfxShaderBufferRWView@@PEAUID3D12Resource@@I@Z(result, htileBuffer, numElements);
}

/*
==============
R_RT_DXResource_CreateHTileView
==============
*/

GfxShaderBufferView *__fastcall R_RT_DXResource_CreateHTileView(GfxShaderBufferView *result, ID3D12Resource *htileBuffer, unsigned int numElements)
{
  return ?R_RT_DXResource_CreateHTileView@@YA?AUGfxShaderBufferView@@PEAUID3D12Resource@@I@Z(result, htileBuffer, numElements);
}

/*
==============
R_RT_DXResource_CreateTexture
==============
*/

ID3D12Resource *__fastcall R_RT_DXResource_CreateTexture(const R_RT_DXResource_TextureInfo *textureInfo, const D3D12_RESOURCE_STATES initialState, const vec4_t *clearColor, unsigned int *outPitch, const char *name)
{
  return ?R_RT_DXResource_CreateTexture@@YAPEAUID3D12Resource@@AEBUR_RT_DXResource_TextureInfo@@W4D3D12_RESOURCE_STATES@@AEBTvec4_t@@PEAIPEBD@Z(textureInfo, initialState, clearColor, outPitch, name);
}

/*
==============
R_RT_DXResource_CreateRenderTargetView
==============
*/

unsigned int __fastcall R_RT_DXResource_CreateRenderTargetView(const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel, const char *name)
{
  return ?R_RT_DXResource_CreateRenderTargetView@@YAIAEBUR_RT_DXResource_ViewSource@@W4DXGI_FORMAT@@HHPEBD@Z(viewSource, format, optionalArraySliceIndex, optionalMipLevel, name);
}

/*
==============
R_RT_DXResource_CreateShaderTextureView
==============
*/

GfxShaderTextureView *__fastcall R_RT_DXResource_CreateShaderTextureView(GfxShaderTextureView *result, const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel, const char *name)
{
  return ?R_RT_DXResource_CreateShaderTextureView@@YA?AUGfxShaderTextureView@@AEBUR_RT_DXResource_ViewSource@@W4DXGI_FORMAT@@HHPEBD@Z(result, viewSource, format, optionalArraySliceIndex, optionalMipLevel, name);
}

/*
==============
R_RT_DXResource_Startup
==============
*/

void R_RT_DXResource_Startup(void)
{
  ?R_RT_DXResource_Startup@@YAXXZ();
}

/*
==============
R_RT_DXResource_CreateFloatRWView
==============
*/

GfxShaderTextureRWView *__fastcall R_RT_DXResource_CreateFloatRWView(GfxShaderTextureRWView *result, ID3D12Resource *floatTexture, DXGI_FORMAT format)
{
  return ?R_RT_DXResource_CreateFloatRWView@@YA?AUGfxShaderTextureRWView@@PEAUID3D12Resource@@W4DXGI_FORMAT@@@Z(result, floatTexture, format);
}

/*
==============
R_RT_DXResource_CreateDepthStencilView
==============
*/

unsigned int __fastcall R_RT_DXResource_CreateDepthStencilView(const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel, const char *name)
{
  return ?R_RT_DXResource_CreateDepthStencilView@@YAIAEBUR_RT_DXResource_ViewSource@@W4DXGI_FORMAT@@HHPEBD@Z(viewSource, format, optionalArraySliceIndex, optionalMipLevel, name);
}

/*
==============
R_RT_DXResource_Shutdown
==============
*/

void R_RT_DXResource_Shutdown(void)
{
  ?R_RT_DXResource_Shutdown@@YAXXZ();
}

/*
==============
R_RT_DXResource_DestroyRenderTargetView
==============
*/

void __fastcall R_RT_DXResource_DestroyRenderTargetView(unsigned int view)
{
  ?R_RT_DXResource_DestroyRenderTargetView@@YAXI@Z(view);
}

/*
==============
R_RT_DXResource_CreateCustom4Texture
==============
*/
ID3D12DeviceChild *R_RT_DXResource_CreateCustom4Texture(const R_RT_DXResource_ViewSource *viewSource, unsigned __int64 address, DXGI_FORMAT format, const char *name)
{
  HRESULT v8; 
  const char *v9; 
  ID3D12DeviceChild *resource[2]; 
  char v12[8]; 
  __int64 v13; 
  DXGI_FORMAT v14; 
  __int64 v15; 
  int v16; 

  resource[1] = (ID3D12DeviceChild *)-2i64;
  Profile_Begin(122);
  ((void (__fastcall *)(ID3D12Resource *, char *))viewSource->m_resource->m_pFunction[3].AddRef)(viewSource->m_resource, v12);
  v13 = 0i64;
  v14 = format;
  v15 = 1i64;
  v16 = 5;
  v8 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, char *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, address, v12, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, resource);
  if ( v8 < 0 )
  {
    v9 = R_ErrorDescription(v8);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v9);
  }
  PIXSetDebugName(resource[0], name);
  Profile_EndInternal(NULL);
  return resource[0];
}

/*
==============
R_RT_DXResource_CreateCustomTexture
==============
*/
ID3D12DeviceChild *R_RT_DXResource_CreateCustomTexture(const R_RT_DXResource_ViewSource *viewSource, unsigned __int64 address, DXGI_FORMAT format, const char *name)
{
  int v8; 
  HRESULT v9; 
  const char *v10; 
  ID3D12DeviceChild *resource[2]; 
  char v13[8]; 
  __int64 v14; 
  DXGI_FORMAT v15; 
  unsigned int v16; 
  int v17; 

  resource[1] = (ID3D12DeviceChild *)-2i64;
  Profile_Begin(122);
  ((void (__fastcall *)(ID3D12Resource *, char *))viewSource->m_resource->m_pFunction[3].AddRef)(viewSource->m_resource, v13);
  v14 = 0i64;
  v15 = format;
  v8 = 1;
  if ( v16 <= 1 )
    v8 = 5;
  v17 = v8;
  v9 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, char *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, address, v13, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, resource);
  if ( v9 < 0 )
  {
    v10 = R_ErrorDescription(v9);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v10);
  }
  PIXSetDebugName(resource[0], name);
  Profile_EndInternal(NULL);
  return resource[0];
}

/*
==============
R_RT_DXResource_CreateDepthStencilView
==============
*/
__int64 R_RT_DXResource_CreateDepthStencilView(const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel)
{
  ID3D12Resource *m_resource; 
  unsigned int m_arraySliceCount; 
  unsigned __int8 m_sampleCount; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int freeSlot; 
  unsigned int *v15; 
  DXGI_FORMAT v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 

  Profile_Begin(122);
  m_resource = viewSource->m_resource;
  if ( !viewSource->m_resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 624, ASSERT_TYPE_ASSERT, "(textureResource)", (const char *)&queryFormat, "textureResource", -2i64) )
    __debugbreak();
  if ( !viewSource->m_isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 625, ASSERT_TYPE_ASSERT, "(viewSource.m_isDepth)", (const char *)&queryFormat, "viewSource.m_isDepth") )
    __debugbreak();
  m_arraySliceCount = viewSource->m_arraySliceCount;
  m_sampleCount = viewSource->m_sampleCount;
  if ( optionalMipLevel < 0 )
    optionalMipLevel = 0;
  v17 = format;
  v19 = 0;
  if ( m_arraySliceCount == 1 )
  {
    if ( m_sampleCount > 1u )
    {
      v18 = 5;
      goto LABEL_28;
    }
    v18 = 3;
    goto LABEL_27;
  }
  if ( m_arraySliceCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 656, ASSERT_TYPE_ASSERT, "(arraySliceCount > 1)", (const char *)&queryFormat, "arraySliceCount > 1") )
    __debugbreak();
  v11 = optionalArraySliceIndex;
  if ( m_sampleCount <= 1u )
  {
    v18 = 4;
    if ( optionalArraySliceIndex < 0 )
      v11 = 0;
    v21 = v11;
    v13 = 1;
    if ( optionalArraySliceIndex < 0 )
      v13 = m_arraySliceCount;
    v22 = v13;
LABEL_27:
    v20 = optionalMipLevel;
    goto LABEL_28;
  }
  v18 = 6;
  if ( optionalArraySliceIndex < 0 )
    v11 = 0;
  v20 = v11;
  v12 = 1;
  if ( optionalArraySliceIndex < 0 )
    v12 = m_arraySliceCount;
  v21 = v12;
LABEL_28:
  R_LockDescriptorPool(&g_descriptorPools.dsViewPool);
  freeSlot = g_descriptorPools.dsViewPool.freeSlot;
  if ( !g_descriptorPools.dsViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.dsViewPool.freeSlot;
  }
  v15 = &g_descriptorPools.dsViewPool.nextSlot[freeSlot];
  g_descriptorPools.dsViewPool.freeSlot = *v15;
  *v15 = 0;
  ++g_descriptorPools.dsViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.dsViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.dsViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.dsViewPool.lock, 0);
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, unsigned __int64))g_dx.d3d12device->m_pFunction[7].QueryInterface)(g_dx.d3d12device, m_resource, &v17, g_descriptorPools.dsViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.dsViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.dsViewPool.handle.startSlot));
  Profile_EndInternal(NULL);
  return freeSlot;
}

/*
==============
R_RT_DXResource_CreateFloatRWView
==============
*/
GfxShaderTextureRWView *R_RT_DXResource_CreateFloatRWView(GfxShaderTextureRWView *result, ID3D12Resource *floatTexture, DXGI_FORMAT format)
{
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 

  Profile_Begin(122);
  viewDesc.Format = format;
  *(_QWORD *)&viewDesc.ViewDimension = 4i64;
  viewDesc.Texture1DArray.FirstArraySlice = 0;
  R_HW_CreateUnorderedAccessView(floatTexture, 0, &viewDesc, result);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
R_RT_DXResource_CreateHTileBuffer
==============
*/
ID3D12DeviceChild *R_RT_DXResource_CreateHTileBuffer(unsigned __int64 address, unsigned int size, const char *name)
{
  __int64 v4; 
  HRESULT v6; 
  const char *v7; 
  ID3D12DeviceChild *resource[2]; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 

  resource[1] = (ID3D12DeviceChild *)-2i64;
  v4 = size;
  Profile_Begin(122);
  v10 = 1;
  v11 = 0x10000i64;
  v14 = 65537i64;
  v12 = v4;
  v13 = 1;
  v15 = 1i64;
  v16 = 1;
  v17 = 4;
  v6 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, address, &v10, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, resource);
  if ( v6 < 0 )
  {
    v7 = R_ErrorDescription(v6);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v7);
  }
  PIXSetDebugName(resource[0], name);
  Profile_EndInternal(NULL);
  return resource[0];
}

/*
==============
R_RT_DXResource_CreateHTileRWView
==============
*/
GfxShaderBufferRWView *R_RT_DXResource_CreateHTileRWView(GfxShaderBufferRWView *result, ID3D12Resource *htileBuffer, unsigned int numElements)
{
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 

  Profile_Begin(122);
  viewDesc.Format = DXGI_FORMAT_R32_TYPELESS;
  viewDesc.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  *(_OWORD *)&viewDesc.Texture3D.WSize = numElements;
  viewDesc.Buffer.Flags = D3D12_BUFFER_UAV_FLAG_RAW;
  R_HW_CreateUnorderedAccessView(htileBuffer, 0, &viewDesc, result);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
R_RT_DXResource_CreateHTileView
==============
*/
GfxShaderBufferView *R_RT_DXResource_CreateHTileView(GfxShaderBufferView *result, ID3D12Resource *htileBuffer, unsigned int numElements)
{
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 

  Profile_Begin(122);
  viewDesc.Format = DXGI_FORMAT_R32_TYPELESS;
  viewDesc.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  viewDesc.Buffer.FirstElement = 0i64;
  *(_QWORD *)&viewDesc.Texture3D.ResourceMinLODClamp = numElements;
  viewDesc.Texture2DArray.PlaneSlice = 1;
  viewDesc.Shader4ComponentMapping = 5768;
  R_HW_CreateShaderResourceView(htileBuffer, &viewDesc, result);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
R_RT_DXResource_CreateRenderTargetView
==============
*/
__int64 R_RT_DXResource_CreateRenderTargetView(const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel)
{
  ID3D12Resource *m_resource; 
  unsigned int m_arraySliceCount; 
  unsigned __int8 m_sampleCount; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int freeSlot; 
  unsigned int *v17; 
  DXGI_FORMAT v19; 
  int v20; 
  __int128 v21; 

  Profile_Begin(122);
  m_resource = viewSource->m_resource;
  if ( !viewSource->m_resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 534, ASSERT_TYPE_ASSERT, "(textureResource)", (const char *)&queryFormat, "textureResource", -2i64) )
    __debugbreak();
  if ( viewSource->m_isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 535, ASSERT_TYPE_ASSERT, "(!viewSource.m_isDepth)", (const char *)&queryFormat, "!viewSource.m_isDepth") )
    __debugbreak();
  m_arraySliceCount = viewSource->m_arraySliceCount;
  m_sampleCount = viewSource->m_sampleCount;
  if ( optionalMipLevel < 0 )
    optionalMipLevel = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v21 = _XMM0;
  v19 = format;
  if ( m_arraySliceCount == 1 )
  {
    if ( m_sampleCount > 1u )
    {
      v20 = 6;
      goto LABEL_29;
    }
    LOWORD(v13) = viewSource->m_depth;
    LODWORD(v21) = optionalMipLevel;
    if ( (unsigned __int16)v13 <= 1u )
    {
      v20 = 4;
      goto LABEL_29;
    }
    v20 = 8;
    DWORD1(v21) = 0;
    v13 = (unsigned __int16)v13;
    goto LABEL_28;
  }
  if ( m_arraySliceCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 574, ASSERT_TYPE_ASSERT, "(arraySliceCount > 1)", (const char *)&queryFormat, "arraySliceCount > 1") )
    __debugbreak();
  v14 = optionalArraySliceIndex;
  if ( m_sampleCount <= 1u )
  {
    v20 = 5;
    LODWORD(v21) = optionalMipLevel;
    if ( optionalArraySliceIndex < 0 )
      v14 = 0;
    DWORD1(v21) = v14;
    v13 = 1;
    if ( optionalArraySliceIndex < 0 )
      v13 = m_arraySliceCount;
LABEL_28:
    DWORD2(v21) = v13;
    goto LABEL_29;
  }
  v20 = 7;
  if ( optionalArraySliceIndex < 0 )
    v14 = 0;
  LODWORD(v21) = v14;
  v15 = 1;
  if ( optionalArraySliceIndex < 0 )
    v15 = m_arraySliceCount;
  DWORD1(v21) = v15;
LABEL_29:
  R_LockDescriptorPool(&g_descriptorPools.rtViewPool);
  freeSlot = g_descriptorPools.rtViewPool.freeSlot;
  if ( !g_descriptorPools.rtViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.rtViewPool.freeSlot;
  }
  v17 = &g_descriptorPools.rtViewPool.nextSlot[freeSlot];
  g_descriptorPools.rtViewPool.freeSlot = *v17;
  *v17 = 0;
  ++g_descriptorPools.rtViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.rtViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.rtViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.rtViewPool.lock, 0);
  ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, DXGI_FORMAT *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].Release)(g_dx.d3d12device, m_resource, &v19, g_descriptorPools.rtViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.rtViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.rtViewPool.handle.startSlot));
  Profile_EndInternal(NULL);
  return freeSlot;
}

/*
==============
R_RT_DXResource_CreateShaderTextureView
==============
*/
GfxShaderTextureView *R_RT_DXResource_CreateShaderTextureView(GfxShaderTextureView *result, const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel)
{
  unsigned int m_arraySliceCount; 
  int v11; 
  unsigned __int8 m_sampleCount; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 

  Profile_Begin(122);
  m_arraySliceCount = viewSource->m_arraySliceCount;
  v11 = optionalMipLevel;
  if ( optionalMipLevel < 0 )
    v11 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)(&viewDesc.Shader4ComponentMapping + 1) = _XMM0;
  *(_QWORD *)&viewDesc.TextureCubeArray.NumCubes = 0i64;
  viewDesc.Texture2DArray.ResourceMinLODClamp = 0.0;
  viewDesc.Format = format;
  viewDesc.Shader4ComponentMapping = 5768;
  m_sampleCount = viewSource->m_sampleCount;
  if ( m_arraySliceCount == 1 )
  {
    if ( m_sampleCount <= 1u )
    {
      viewDesc.Texture1D.MostDetailedMip = v11;
      viewDesc.Texture1D.MipLevels = ((optionalMipLevel >> 31) & 0xFFFFFFFE) + 1;
      if ( viewSource->m_depth <= 1u )
      {
        viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
        if ( format == DXGI_FORMAT_X32_TYPELESS_G8X24_UINT )
          viewDesc.Buffer.NumElements = 1;
      }
      else
      {
        viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
      }
    }
    else
    {
      viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
    }
  }
  else
  {
    if ( m_arraySliceCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 491, ASSERT_TYPE_ASSERT, "(arraySliceCount > 1)", (const char *)&queryFormat, "arraySliceCount > 1", -2i64, *(_QWORD *)&viewDesc.Format, *(_QWORD *)&viewDesc.Shader4ComponentMapping, *(_OWORD *)&viewDesc.Buffer.FirstElement, *(_QWORD *)&viewDesc.TextureCubeArray.ResourceMinLODClamp) )
      __debugbreak();
    if ( viewSource->m_depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 492, ASSERT_TYPE_ASSERT, "(viewSource.m_depth == 1)", (const char *)&queryFormat, "viewSource.m_depth == 1") )
      __debugbreak();
    v14 = optionalArraySliceIndex;
    if ( m_sampleCount <= 1u )
    {
      viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
      viewDesc.Texture1D.MostDetailedMip = v11;
      viewDesc.Texture1D.MipLevels = ((optionalMipLevel >> 31) & 0xFFFFFFFE) + 1;
      if ( optionalArraySliceIndex < 0 )
        v14 = 0;
      viewDesc.Buffer.NumElements = v14;
      v16 = 1;
      if ( optionalArraySliceIndex < 0 )
        v16 = m_arraySliceCount;
      viewDesc.Buffer.StructureByteStride = v16;
    }
    else
    {
      viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
      if ( optionalArraySliceIndex < 0 )
        v14 = 0;
      viewDesc.Texture1D.MostDetailedMip = v14;
      v15 = 1;
      if ( optionalArraySliceIndex < 0 )
        v15 = m_arraySliceCount;
      viewDesc.Texture1D.MipLevels = v15;
    }
  }
  R_HW_CreateShaderResourceView(viewSource->m_resource, &viewDesc, result);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
R_RT_DXResource_CreateTexture
==============
*/
ID3D12DeviceChild *R_RT_DXResource_CreateTexture(const R_RT_DXResource_TextureInfo *textureInfo, const D3D12_RESOURCE_STATES initialState, const vec4_t *clearColor, unsigned int *outPitch, const char *name)
{
  unsigned __int16 m_depth; 
  int v9; 
  char m_tileMode; 
  signed __int8 m_bindFlags; 
  int v12; 
  char v13; 
  unsigned int m_miscFlags; 
  HRESULT v15; 
  const char *v16; 
  ID3D12DeviceChild *v17; 
  unsigned __int64 val[2]; 
  int v20[2]; 
  __int64 v21; 
  __int64 m_width; 
  int m_height; 
  unsigned __int16 m_arraySliceCount; 
  __int16 m_mipCount; 
  int m_format; 
  int m_sampleCount; 
  int v28; 
  int v29; 
  __int64 v30; 

  val[1] = -2i64;
  Profile_Begin(122);
  v20[1] = 0;
  v30 = 0i64;
  m_depth = textureInfo->m_depth;
  v20[0] = (m_depth > 1u) + 3;
  v21 = 0i64;
  m_width = textureInfo->m_width;
  m_height = textureInfo->m_height;
  if ( m_depth <= 1u )
    m_arraySliceCount = textureInfo->m_arraySliceCount;
  else
    m_arraySliceCount = m_depth;
  m_mipCount = textureInfo->m_mipCount;
  m_sampleCount = textureInfo->m_sampleCount;
  v9 = 0;
  if ( (_BYTE)m_sampleCount != 1 )
    v9 = -1;
  v28 = v9;
  m_format = textureInfo->m_format;
  m_tileMode = textureInfo->m_tileMode;
  v29 = m_tileMode | 0x100;
  m_bindFlags = textureInfo->m_bindFlags;
  v12 = (m_bindFlags & 0x20) != 0;
  LODWORD(v30) = v12;
  if ( m_bindFlags < 0 )
  {
    v12 |= 4u;
    LODWORD(v30) = v12;
  }
  v13 = m_bindFlags & 0x40;
  if ( v13 )
  {
    v12 |= 0x1000002u;
    LODWORD(v30) = v12;
  }
  m_miscFlags = textureInfo->m_miscFlags;
  if ( (m_miscFlags & 0x80000) != 0 )
  {
    v12 |= 0x100000u;
    LODWORD(v30) = v12;
  }
  if ( (m_miscFlags & 0x100000) != 0 )
  {
    v12 |= 0x100000u;
    LODWORD(v30) = v12;
  }
  if ( (m_miscFlags & 0x200000) != 0 )
  {
    v12 |= 0x200000u;
    LODWORD(v30) = v12;
  }
  if ( (m_miscFlags & 0x400000) != 0 )
  {
    v12 |= 0x400000u;
    LODWORD(v30) = v12;
  }
  if ( (m_miscFlags & 0x8000) != 0 )
    LODWORD(v30) = v12 | 0x800000;
  if ( m_tileMode == 8 )
  {
    if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 342, ASSERT_TYPE_ASSERT, "(( textureInfo.m_bindFlags & XG_BIND_DEPTH_STENCIL ) == 0)", (const char *)&queryFormat, "( textureInfo.m_bindFlags & XG_BIND_DEPTH_STENCIL ) == 0") )
      __debugbreak();
    ((void (__fastcall *)(ID3D12Device *, int *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, v20, 0i64, 1i64, 0i64, 0i64, 0i64, val, 0i64);
    *outPitch = truncate_cast<unsigned int,unsigned __int64>(val[0]);
  }
  v15 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, int *, _QWORD, _QWORD, GUID *, unsigned __int64 *))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, textureInfo->m_mem, v20, initialState & 0xFC3FFFFF, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, val);
  if ( v15 < 0 )
  {
    v16 = R_ErrorDescription(v15);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v16);
  }
  PIXSetDebugName((ID3D12DeviceChild *)val[0], name);
  v17 = (ID3D12DeviceChild *)val[0];
  if ( !val[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 358, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 196, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  Profile_Begin(124);
  PIXSetDebugName(v17, name);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  return v17;
}

/*
==============
R_RT_DXResource_CreateUnorderedAccessView
==============
*/
GfxShaderTextureRWView *R_RT_DXResource_CreateUnorderedAccessView(GfxShaderTextureRWView *result, const R_RT_DXResource_ViewSource *viewSource, DXGI_FORMAT format, int optionalArraySliceIndex, int optionalMipLevel)
{
  ID3D12Resource *m_resource; 
  unsigned int m_arraySliceCount; 
  int v11; 
  int v12; 
  unsigned int v13; 
  unsigned __int16 m_depth; 
  unsigned int v15; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC viewDesc; 

  Profile_Begin(122);
  m_resource = viewSource->m_resource;
  if ( !viewSource->m_resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 706, ASSERT_TYPE_ASSERT, "(textureResource)", (const char *)&queryFormat, "textureResource", -2i64) )
    __debugbreak();
  m_arraySliceCount = viewSource->m_arraySliceCount;
  v11 = optionalMipLevel;
  if ( optionalMipLevel < 0 )
    v11 = 0;
  viewDesc.Format = format;
  if ( m_arraySliceCount <= 1 )
  {
    m_depth = viewSource->m_depth;
    viewDesc.Texture1DArray.FirstArraySlice = 0;
    if ( m_depth <= 1u )
    {
      viewDesc.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2D;
    }
    else
    {
      viewDesc.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE3D;
      viewDesc.Buffer.NumElements = m_depth;
    }
  }
  else
  {
    viewDesc.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
    viewDesc.Buffer.StructureByteStride = 0;
    v12 = optionalArraySliceIndex;
    if ( optionalArraySliceIndex < 0 )
      v12 = 0;
    viewDesc.Texture1DArray.FirstArraySlice = v12;
    v13 = 1;
    if ( optionalArraySliceIndex < 0 )
      v13 = m_arraySliceCount;
    viewDesc.Buffer.NumElements = v13;
  }
  viewDesc.Texture1D.MipSlice = v11;
  v15 = -1;
  if ( optionalMipLevel >= 0 || optionalArraySliceIndex >= 0 )
  {
    if ( optionalArraySliceIndex < 0 )
      optionalArraySliceIndex = 0;
    v15 = v11 + optionalArraySliceIndex * viewSource->m_mipCount;
  }
  R_HW_CreateUnorderedAccessView(m_resource, v15, &viewDesc, result);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
R_RT_DXResource_DestroyDepthStencilView
==============
*/
void R_RT_DXResource_DestroyDepthStencilView(unsigned int view)
{
  Profile_Begin(123);
  if ( !view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 694, ASSERT_TYPE_ASSERT, "(view)", (const char *)&queryFormat, "view", -2i64) )
    __debugbreak();
  R_ReleaseDescriptor(&g_descriptorPools.dsViewPool, view);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_DXResource_DestroyRenderTargetView
==============
*/
void R_RT_DXResource_DestroyRenderTargetView(unsigned int view)
{
  Profile_Begin(123);
  if ( !view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 612, ASSERT_TYPE_ASSERT, "(view)", (const char *)&queryFormat, "view", -2i64) )
    __debugbreak();
  R_ReleaseDescriptor(&g_descriptorPools.rtViewPool, view);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_DXResource_GetLayout
==============
*/
R_RT_DXResource_LayoutKey::Result *R_RT_DXResource_GetLayout(R_RT_DXResource_LayoutKey::Result *result, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipCount, unsigned int sampleCount, GfxPixelFormat format, unsigned int bindFlags, unsigned int miscFlags, bool isDepth, bool rotateBank, R_RT_Flags rtFlags)
{
  int DXGIFormatForPixelFormat; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  int v19; 
  unsigned int v20; 
  __int64 i; 
  int v22; 
  unsigned __int16 headNodeIndex; 
  __int64 v24; 
  unsigned int v26; 
  enum XG_TILE_MODE v27; 
  R_RT_DXResource_LayoutKey *p_m_resourceKey; 
  R_RT_DXResource_LayoutKey::Result *v29; 
  __m256i v30; 
  __int128 v31; 
  enum XG_TILE_MODE v32; 
  HRESULT v33; 
  const char *v34; 
  HRESULT v35; 
  const char *v36; 
  unsigned int Planes; 
  XG_PLANE_LAYOUT *v38; 
  XG_PLANE_LAYOUT *v39; 
  XG_PLANE_LAYOUT *v40; 
  XG_PLANE_LAYOUT *v41; 
  XG_PLANE_LAYOUT *v42; 
  unsigned __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  unsigned __int64 BankRotationAddressBitMask; 
  unsigned __int32 v47; 
  unsigned __int64 v48; 
  unsigned __int64 v49; 
  int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  __int64 TileMode; 
  XG_PLANE_LAYOUT *v57; 
  unsigned __int64 v59; 
  XG_PLANE_LAYOUT *v61; 
  XG_PLANE_LAYOUT *v62; 
  unsigned int v63; 
  enum XG_TILE_MODE v64[2]; 
  enum XG_TILE_MODE v65; 
  unsigned int v66; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  unsigned int hash; 
  XG_PLANE_LAYOUT *v70; 
  R_RT_DXResource_LayoutKey::Result *v71; 
  __int64 v72; 
  struct XG_TEXTURE2D_DESC v73; 
  R_RT_DXResource_LayoutKey resourceKey; 
  struct XG_RESOURCE_LAYOUT v75; 
  unsigned __int32 formata; 

  v72 = -2i64;
  v66 = depth;
  v71 = result;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(format);
  resourceKey.m_info.m_width = truncate_cast<unsigned short,unsigned int>(width);
  v17 = truncate_cast<unsigned short,unsigned int>(height);
  resourceKey.m_info.m_height = v17;
  resourceKey.m_info.m_arraySliceCount = truncate_cast<unsigned short,unsigned int>(arraySliceCount);
  if ( mipCount > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)mipCount, "unsigned", mipCount) )
    __debugbreak();
  resourceKey.m_info.m_mipCount = mipCount;
  if ( (DXGIFormatForPixelFormat < 0 || (unsigned int)DXGIFormatForPixelFormat > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum XG_FORMAT>(enum XG_FORMAT)", "unsigned", (unsigned __int8)DXGIFormatForPixelFormat, "signed", DXGIFormatForPixelFormat) )
    __debugbreak();
  resourceKey.m_info.m_format = DXGIFormatForPixelFormat;
  if ( bindFlags > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)bindFlags, "unsigned", bindFlags) )
    __debugbreak();
  resourceKey.m_info.m_bindFlags = bindFlags;
  resourceKey.m_info.m_miscFlags = miscFlags;
  resourceKey.m_info.m_isDepth = isDepth;
  if ( sampleCount > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)sampleCount, "unsigned", sampleCount) )
    __debugbreak();
  resourceKey.m_info.m_sampleCount = sampleCount;
  resourceKey.m_info.m_pad0 = 0;
  v18 = truncate_cast<unsigned short,unsigned int>(depth);
  resourceKey.m_info.m_depth = v18;
  v19 = 301796873;
  v20 = 0;
  for ( i = 0i64; i != 18; ++i )
  {
    v22 = (16777619 * v19) ^ *((unsigned __int8 *)&resourceKey.m_info.m_width + i);
    v19 = v22;
  }
  hash = v22;
  headNodeIndex = s_R_RT_DXResource.layoutTable.map.buckets[v22 & 0x3FFF].headNodeIndex;
  if ( headNodeIndex == 0xFFFF )
    goto LABEL_31;
  while ( 1 )
  {
    v24 = headNodeIndex;
    if ( s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_width == resourceKey.m_info.m_width && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_height == v17 && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_arraySliceCount == resourceKey.m_info.m_arraySliceCount && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_mipCount == (_BYTE)mipCount && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_format == (_BYTE)DXGIFormatForPixelFormat && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_miscFlags == miscFlags && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_bindFlags == (_BYTE)bindFlags && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_isDepth == isDepth && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_sampleCount == (_BYTE)sampleCount && s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_depth == v18 )
      break;
    headNodeIndex = s_R_RT_DXResource.layoutTable.allocator.blocks[v24].m_resourceKey.m_info.m_nextHashNodeIndex;
    if ( headNodeIndex == 0xFFFF )
      goto LABEL_31;
  }
  IWDoublyLinkedList<unsigned short,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::ListNodeAccessor>::Erase(&s_R_RT_DXResource.layoutTable.lruList, s_R_RT_DXResource.layoutTable.allocator.blocks, headNodeIndex, 0x1000u);
  IWDoublyLinkedList<unsigned short,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::ListNodeAccessor>::PushBack(&s_R_RT_DXResource.layoutTable.lruList, s_R_RT_DXResource.layoutTable.allocator.blocks, headNodeIndex, 0x1000u);
  p_m_resourceKey = &s_R_RT_DXResource.layoutTable.allocator.blocks[headNodeIndex].m_resourceKey;
  if ( !p_m_resourceKey )
  {
LABEL_31:
    Profile_Begin(122);
    if ( isDepth )
    {
      v65 = XG_TILE_MODE_INVALID;
      v64[0] = XG_TILE_MODE_INVALID;
      if ( DXGIFormatForPixelFormat == 40 || DXGIFormatForPixelFormat == 55 )
      {
        v27 = XG_TILE_MODE_COMP_DEPTH_4;
        v26 = width;
      }
      else
      {
        v26 = width;
        XGComputeOptimalDepthStencilTileModes((enum XG_FORMAT)DXGIFormatForPixelFormat, width, height, arraySliceCount, sampleCount, 1, 0, 0, &v65, v64);
        v27 = v65;
        if ( v65 != v64[0] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1084, ASSERT_TYPE_ASSERT, "(dwTileModeDepth == dwTileModeStencil)", (const char *)&queryFormat, "dwTileModeDepth == dwTileModeStencil") )
            __debugbreak();
          v27 = v65;
        }
      }
    }
    else
    {
      v26 = width;
      if ( (rtFlags & 2) != 0 )
      {
        v27 = XG_TILE_MODE_1D_THICK;
      }
      else if ( (rtFlags & 0x10000) != 0 )
      {
        v27 = XG_TILE_MODE_LINEAR;
      }
      else
      {
        if ( v66 <= 1 )
          v32 = XGComputeOptimalTileMode(XG_RESOURCE_DIMENSION_TEXTURE2D, (enum XG_FORMAT)DXGIFormatForPixelFormat, width, height, arraySliceCount, sampleCount, bindFlags, miscFlags);
        else
          v32 = XGComputeOptimalTileMode(XG_RESOURCE_DIMENSION_TEXTURE3D, (enum XG_FORMAT)DXGIFormatForPixelFormat, width, height, v66, sampleCount, bindFlags, miscFlags);
        v27 = v32;
      }
    }
    if ( v66 <= 1 )
    {
      *(_QWORD *)&v73.ESRAMOffsetBytes = 0i64;
      v73.Pitch = 0;
      v73.Width = v26;
      v73.Height = height;
      v73.MipLevels = mipCount;
      v73.ArraySize = arraySliceCount;
      v73.SampleDesc.Count = sampleCount;
      if ( sampleCount <= 1 )
        v73.SampleDesc.Quality = 0;
      else
        v73.SampleDesc.Quality = 31 - __lzcnt(sampleCount);
      v73.Format = DXGIFormatForPixelFormat;
      v73.MiscFlags = miscFlags;
      v73.Usage = XG_USAGE_DEFAULT;
      v73.BindFlags = bindFlags;
      v73.CPUAccessFlags = 0;
      v73.TileMode = v27;
      v35 = XGComputeTexture2DLayout(&v73, &v75);
      if ( v35 < 0 )
      {
        v36 = R_ErrorDescription(v35);
        Sys_Error((const ObfuscateErrorText)&stru_14442A3B0, 1135i64, v36);
      }
    }
    else
    {
      if ( isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1104, ASSERT_TYPE_ASSERT, "(!isDepth)", (const char *)&queryFormat, "!isDepth") )
        __debugbreak();
      *(_QWORD *)&v73.CPUAccessFlags = 0i64;
      v73.ESRAMUsageBytes = 0;
      v73.Width = v26;
      v73.Height = height;
      v73.MipLevels = v66;
      v73.ArraySize = mipCount;
      v73.Format = DXGIFormatForPixelFormat;
      v73.BindFlags = miscFlags;
      v73.SampleDesc.Count = 0;
      v73.SampleDesc.Quality = bindFlags;
      v73.Usage = XG_USAGE_DEFAULT;
      v73.ESRAMOffsetBytes = v27;
      v33 = XGComputeTexture3DLayout((const struct XG_TEXTURE3D_DESC *)&v73, &v75);
      if ( v33 < 0 )
      {
        v34 = R_ErrorDescription(v33);
        Sys_Error((const ObfuscateErrorText)"c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h (%i) XGComputeTexture3DLayout( &texture3DDescX, &xgLayout ) failed: %s\n", 1117i64, v34);
      }
    }
    Planes = v75.Planes;
    if ( !v75.Planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1138, ASSERT_TYPE_ASSERT, "(planeCount > 0)", (const char *)&queryFormat, "planeCount > 0") )
      __debugbreak();
    v38 = NULL;
    v70 = NULL;
    v39 = NULL;
    v40 = NULL;
    v62 = NULL;
    v41 = NULL;
    v61 = NULL;
    v42 = NULL;
    *(_QWORD *)v64 = 0i64;
    v43 = 0i64;
    v59 = 0i64;
    v67 = 0i64;
    v68 = 0i64;
    formata = rtFlags ^ format;
    v44 = 0;
    if ( Planes )
    {
      while ( 2 )
      {
        v45 = v44;
        v42 = &v75.Plane[v45];
        switch ( v75.Plane[v45].Usage )
        {
          case XG_PLANE_USAGE_UNUSED:
          case XG_PLANE_USAGE_LUMA:
          case XG_PLANE_USAGE_CHROMA:
          case XG_PLANE_USAGE_DELTA_COLOR_COMPRESSION:
            goto $LN518;
          case XG_PLANE_USAGE_DEFAULT:
          case XG_PLANE_USAGE_DEPTH:
            if ( v38 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1155, ASSERT_TYPE_ASSERT, "(!textureLayout)", (const char *)&queryFormat, "!textureLayout") )
                __debugbreak();
              v43 = v59;
            }
            v38 = &v75.Plane[v45];
            v70 = &v75.Plane[v45];
            if ( v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1158, ASSERT_TYPE_ASSERT, "(bankAddressOffset[0] == 0)", (const char *)&queryFormat, "bankAddressOffset[0] == 0") )
              __debugbreak();
            v43 = 0i64;
            v59 = 0i64;
            if ( v44 >= v75.Planes )
              goto LABEL_111;
            if ( !v75.MipLevels )
              goto LABEL_111;
            BankRotationAddressBitMask = v75.Plane[v44].MipLayout[0].BankRotationAddressBitMask;
            if ( !BankRotationAddressBitMask )
              goto LABEL_111;
            v47 = formata;
            v43 = (formata * v75.Plane[v44].MipLayout[0].BankRotationBytesPerSlice) & BankRotationAddressBitMask;
            v59 = v43;
            if ( v67 || v68 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1161, ASSERT_TYPE_ASSERT, "(bankAddressOffset[1] == 0 && bankAddressOffset[2] == 0)", (const char *)&queryFormat, "bankAddressOffset[1] == 0 && bankAddressOffset[2] == 0") )
                __debugbreak();
              v47 = formata;
              v43 = v59;
            }
            v67 = 0i64;
            if ( v44 < v75.Planes )
            {
              if ( v75.MipLevels )
              {
                v48 = v75.Plane[v44].MipLayout[0].BankRotationAddressBitMask;
                if ( v48 )
                  v67 = ((v47 + 1) * v75.Plane[v44].MipLayout[0].BankRotationBytesPerSlice) & v48;
              }
            }
            v68 = 0i64;
            if ( v44 < v75.Planes && v75.MipLevels )
            {
              v49 = v75.Plane[v44].MipLayout[0].BankRotationAddressBitMask;
              v42 = *(XG_PLANE_LAYOUT **)v64;
              if ( v49 )
                v68 = ((v47 + 2) * v75.Plane[v44].MipLayout[0].BankRotationBytesPerSlice) & v49;
              v41 = v61;
            }
            else
            {
LABEL_111:
              v41 = v61;
$LN518:
              v42 = *(XG_PLANE_LAYOUT **)v64;
            }
LABEL_113:
            v40 = v62;
LABEL_114:
            if ( ++v44 == Planes )
              break;
            continue;
          case XG_PLANE_USAGE_COLOR_MASK:
            if ( v62 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1168, ASSERT_TYPE_ASSERT, "(!cmaskLayout)", (const char *)&queryFormat, "!cmaskLayout") )
                __debugbreak();
              v43 = v59;
              v41 = v61;
            }
            v40 = &v75.Plane[v45];
            v62 = v42;
            v42 = *(XG_PLANE_LAYOUT **)v64;
            goto LABEL_114;
          case XG_PLANE_USAGE_FRAGMENT_MASK:
            if ( v41 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1176, ASSERT_TYPE_ASSERT, "(!fmaskLayout)", (const char *)&queryFormat, "!fmaskLayout") )
                __debugbreak();
              v43 = v59;
            }
            v41 = &v75.Plane[v45];
            v61 = &v75.Plane[v45];
            goto $LN518;
          case XG_PLANE_USAGE_HTILE:
            if ( v39 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1172, ASSERT_TYPE_ASSERT, "(!htileLayout)", (const char *)&queryFormat, "!htileLayout") )
                __debugbreak();
              v43 = v59;
              v41 = v61;
            }
            v39 = &v75.Plane[v45];
            goto $LN518;
          case XG_PLANE_USAGE_STENCIL:
            if ( *(_QWORD *)v64 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1180, ASSERT_TYPE_ASSERT, "(!stencilLayout)", (const char *)&queryFormat, "!stencilLayout") )
                __debugbreak();
              v43 = v59;
              v41 = v61;
            }
            *(_QWORD *)v64 = &v75.Plane[v45];
            goto LABEL_113;
          default:
            CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1190, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
            __debugbreak();
        }
        break;
      }
    }
    v50 = 1;
    if ( isDepth )
      v50 = 7;
    if ( v38->Usage != v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1194, ASSERT_TYPE_ASSERT, "(textureLayout->Usage == ( isDepth ? XG_PLANE_USAGE_DEPTH : XG_PLANE_USAGE_DEFAULT ))", (const char *)&queryFormat, "textureLayout->Usage == ( isDepth ? XG_PLANE_USAGE_DEPTH : XG_PLANE_USAGE_DEFAULT )") )
      __debugbreak();
    v66 = truncate_cast<unsigned int,unsigned __int64>(v38->BaseOffsetBytes);
    v65 = truncate_cast<unsigned int,unsigned __int64>(v38->SizeBytes);
    v64[0] = XG_TILE_MODE_COMP_DEPTH_0;
    v63 = 0;
    if ( v39 )
    {
      if ( !isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1205, ASSERT_TYPE_ASSERT, "(isDepth)", (const char *)&queryFormat, "isDepth") )
        __debugbreak();
      if ( v39->Usage != XG_PLANE_USAGE_HTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1206, ASSERT_TYPE_ASSERT, "(htileLayout->Usage == XG_PLANE_USAGE_HTILE)", (const char *)&queryFormat, "htileLayout->Usage == XG_PLANE_USAGE_HTILE") )
        __debugbreak();
      v64[0] = truncate_cast<unsigned int,unsigned __int64>(v39->BaseOffsetBytes);
      v63 = truncate_cast<unsigned int,unsigned __int64>(v39->SizeBytes);
    }
    else if ( isDepth && (miscFlags & 0x100000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1212, ASSERT_TYPE_ASSERT, "(!isDepth || ( ( miscFlags & XG_RESOURCE_MISC_NO_DEPTH_COMPRESSION ) != 0 ))", (const char *)&queryFormat, "!isDepth || ( ( miscFlags & XG_RESOURCE_MISC_NO_DEPTH_COMPRESSION ) != 0 )") )
    {
      __debugbreak();
    }
    v51 = 0;
    v52 = 0;
    if ( v42 )
    {
      if ( !isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1219, ASSERT_TYPE_ASSERT, "(isDepth)", (const char *)&queryFormat, "isDepth") )
        __debugbreak();
      if ( v42->Usage != XG_PLANE_USAGE_STENCIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1220, ASSERT_TYPE_ASSERT, "(stencilLayout->Usage == XG_PLANE_USAGE_STENCIL)", (const char *)&queryFormat, "stencilLayout->Usage == XG_PLANE_USAGE_STENCIL") )
        __debugbreak();
      v51 = truncate_cast<unsigned int,unsigned __int64>(v42->BaseOffsetBytes);
      v52 = truncate_cast<unsigned int,unsigned __int64>(v42->SizeBytes);
    }
    v53 = 0;
    v54 = 0;
    if ( v40 )
    {
      if ( isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1229, ASSERT_TYPE_ASSERT, "(!isDepth)", (const char *)&queryFormat, "!isDepth") )
        __debugbreak();
      if ( (miscFlags & 0x80000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1230, ASSERT_TYPE_ASSERT, "(( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) == 0)", (const char *)&queryFormat, "( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) == 0") )
        __debugbreak();
      if ( v40->Usage != XG_PLANE_USAGE_COLOR_MASK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1231, ASSERT_TYPE_ASSERT, "(cmaskLayout->Usage == XG_PLANE_USAGE_COLOR_MASK)", (const char *)&queryFormat, "cmaskLayout->Usage == XG_PLANE_USAGE_COLOR_MASK") )
        __debugbreak();
      v53 = truncate_cast<unsigned int,unsigned __int64>(v40->BaseOffsetBytes);
      v54 = truncate_cast<unsigned int,unsigned __int64>(v40->SizeBytes);
    }
    else if ( !isDepth && (miscFlags & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1237, ASSERT_TYPE_ASSERT, "(isDepth || ( ( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) != 0 ))", (const char *)&queryFormat, "isDepth || ( ( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) != 0 )") )
    {
      __debugbreak();
    }
    v55 = 0;
    if ( v61 )
    {
      if ( isDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1244, ASSERT_TYPE_ASSERT, "(!isDepth)", (const char *)&queryFormat, "!isDepth") )
        __debugbreak();
      if ( sampleCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1245, ASSERT_TYPE_ASSERT, "(sampleCount > 1)", (const char *)&queryFormat, "sampleCount > 1") )
        __debugbreak();
      if ( (miscFlags & 0x80000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1246, ASSERT_TYPE_ASSERT, "(( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) == 0)", (const char *)&queryFormat, "( miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION ) == 0") )
        __debugbreak();
      if ( v61->Usage != XG_PLANE_USAGE_FRAGMENT_MASK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1247, ASSERT_TYPE_ASSERT, "(fmaskLayout->Usage == XG_PLANE_USAGE_FRAGMENT_MASK)", (const char *)&queryFormat, "fmaskLayout->Usage == XG_PLANE_USAGE_FRAGMENT_MASK") )
        __debugbreak();
      v20 = truncate_cast<unsigned int,unsigned __int64>(v61->BaseOffsetBytes);
      v55 = truncate_cast<unsigned int,unsigned __int64>(v61->SizeBytes);
    }
    else if ( sampleCount != 1 && !isDepth && (miscFlags & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1253, ASSERT_TYPE_ASSERT, "(sampleCount == 1 || isDepth || ( (miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION) != 0 ))", (const char *)&queryFormat, "sampleCount == 1 || isDepth || ( (miscFlags & XG_RESOURCE_MISC_NO_COLOR_COMPRESSION) != 0 )") )
    {
      __debugbreak();
    }
    if ( !v75.MipLevels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1257, ASSERT_TYPE_ASSERT, "(baseMipIndex < xgLayout.MipLevels)", (const char *)&queryFormat, "baseMipIndex < xgLayout.MipLevels") )
      __debugbreak();
    TileMode = v70->MipLayout[0].TileMode;
    if ( truncate_cast<unsigned int,unsigned __int64>(v75.BaseAlignmentBytes) > g_R_RT_surfaceMemoryAlignMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 1261, ASSERT_TYPE_ASSERT, "(align <= g_R_RT_surfaceMemoryAlignMin)", (const char *)&queryFormat, "align <= g_R_RT_surfaceMemoryAlignMin") )
      __debugbreak();
    resourceKey.m_result.m_size = truncate_cast<unsigned int,unsigned __int64>(v75.SizeBytes);
    resourceKey.m_result.m_align = truncate_cast<unsigned int,unsigned __int64>(v75.BaseAlignmentBytes);
    resourceKey.m_result.m_textureOffset = v66;
    resourceKey.m_result.m_textureSize = v65;
    resourceKey.m_result.m_htileOffset = v64[0];
    resourceKey.m_result.m_htileSize = v63;
    resourceKey.m_result.m_stencilOffset = v51;
    resourceKey.m_result.m_stencilSize = v52;
    resourceKey.m_result.m_cmaskOffset = v53;
    resourceKey.m_result.m_cmaskSize = v54;
    resourceKey.m_result.m_fmaskOffset = v20;
    resourceKey.m_result.m_fmaskSize = v55;
    v57 = v70;
    resourceKey.m_result.m_mip0TileCountX = truncate_cast<unsigned short,unsigned int>((v70->MipLayout[0].PaddedWidthElements + 7) >> 3);
    resourceKey.m_result.m_mip0TileCountY = truncate_cast<unsigned short,unsigned int>((v57->MipLayout[0].PaddedHeightElements + 7) >> 3);
    if ( (unsigned int)(TileMode + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,enum XG_TILE_MODE>(enum XG_TILE_MODE)", "signed", (char)TileMode, "signed", TileMode) )
      __debugbreak();
    resourceKey.m_result.m_tileMode = TileMode;
    resourceKey.m_result.m_bankOffsets[0] = v59;
    resourceKey.m_result.m_bankOffsets[1] = v67;
    resourceKey.m_result.m_bankOffsets[2] = v68;
    resourceKey.m_result.m_curBankIdx = 0;
    R_RT_DXResource_Insert_R_RT_DXResource_Table_R_RT_DXResource_LayoutKey_4096__R_RT_DXResource_LayoutKey_(&s_R_RT_DXResource.layoutTable, hash, &resourceKey);
    Profile_EndInternal(NULL);
    v29 = v71;
    *(__m256i *)v71->m_bankOffsets = *(__m256i *)resourceKey.m_result.m_bankOffsets;
    v30 = *(__m256i *)&resourceKey.m_result.m_textureOffset;
    v31 = *(_OWORD *)&resourceKey.m_result.m_fmaskOffset;
  }
  else
  {
    if ( rotateBank )
      p_m_resourceKey->m_result.m_curBankIdx = ((unsigned __int64)p_m_resourceKey->m_result.m_curBankIdx + 1) % 3;
    v29 = v71;
    *(__m256i *)v71->m_bankOffsets = *(__m256i *)p_m_resourceKey->m_result.m_bankOffsets;
    v30 = *(__m256i *)&p_m_resourceKey->m_result.m_textureOffset;
    v31 = *(_OWORD *)&p_m_resourceKey->m_result.m_fmaskOffset;
  }
  *(__m256i *)&v29->m_textureOffset = v30;
  *(_OWORD *)&v29->m_fmaskOffset = v31;
  return v29;
}

/*
==============
R_RT_DXResource_Shutdown
==============
*/
void R_RT_DXResource_Shutdown(void)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 217, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "INCOMPLETE") )
    __debugbreak();
}

/*
==============
R_RT_DXResource_Startup
==============
*/
void R_RT_DXResource_Startup(void)
{
  __int64 v0; 
  __int64 i; 
  IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *p_map; 
  __int64 v3; 

  DebugWipe(s_R_RT_DXResource.layoutTable.allocator.blocks, 0x70000ui64);
  s_R_RT_DXResource.layoutTable.allocator.reset = 1;
  v0 = 0i64;
  for ( i = 0i64; i != 4095; ++i )
    s_R_RT_DXResource.layoutTable.allocator.blocks[i].nextFreeBlockIndex = ++v0;
  s_R_RT_DXResource.layoutTable.allocator.headFreeBlockIndex = 0;
  s_R_RT_DXResource.layoutTable.allocator.blocks[4095].nextFreeBlockIndex = -1;
  p_map = &s_R_RT_DXResource.layoutTable.map;
  v3 = 0x4000i64;
  s_R_RT_DXResource.layoutTable.lruList = (IWDoublyLinkedList<unsigned short,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::ListNodeAccessor>)-1;
  while ( v3 )
  {
    p_map->buckets[0].headNodeIndex = -1;
    p_map = (IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *)((char *)p_map + 2);
    --v3;
  }
}

