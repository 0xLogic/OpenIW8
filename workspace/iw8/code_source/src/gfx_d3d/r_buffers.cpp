/*
==============
R_InitDynamicIndices
==============
*/

void __fastcall R_InitDynamicIndices(GfxDynamicIndices *ib, int indexCount)
{
  ?R_InitDynamicIndices@@YAXPEAUGfxDynamicIndices@@H@Z(ib, indexCount);
}

/*
==============
R_EndWrappedBufferDataWrite
==============
*/

void __fastcall R_EndWrappedBufferDataWrite(const GfxWrappedBuffer *buffer)
{
  ?R_EndWrappedBufferDataWrite@@YAXPEBUGfxWrappedBuffer@@@Z(buffer);
}

/*
==============
R_CreatePlacementBuffer
==============
*/

void __fastcall R_CreatePlacementBuffer(const D3D12_RESOURCE_DESC *desc, ID3D12Resource **buffer, const void *data, GfxBufferCreationContext *context, D3D12_RESOURCE_STATES initState)
{
  ?R_CreatePlacementBuffer@@YAXPEBUD3D12_RESOURCE_DESC@@PEAPEAUID3D12Resource@@PEBXUGfxBufferCreationContext@@W4D3D12_RESOURCE_STATES@@@Z(desc, buffer, data, context, initState);
}

/*
==============
R_AddRefPlacementConstantBuffer
==============
*/

void __fastcall R_AddRefPlacementConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ?R_AddRefPlacementConstantBuffer@@YAXPEAUGfxConstantBuffer@@@Z(constantBuffer);
}

/*
==============
R_FlushCPUCache
==============
*/

void __fastcall R_FlushCPUCache(const void *bufferData, unsigned __int64 byteWidth)
{
  ?R_FlushCPUCache@@YAXPEBX_K@Z(bufferData, byteWidth);
}

/*
==============
R_InitDynamicComputeBufferState
==============
*/

void __fastcall R_InitDynamicComputeBufferState(GfxComputeBufferState *cb, unsigned int bytes, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  ?R_InitDynamicComputeBufferState@@YAXPEAUGfxComputeBufferState@@IW4D3D12_RESOURCE_STATES@@UGfxBufferCreationContext@@@Z(cb, bytes, initState, context);
}

/*
==============
R_GetNullGfxWrappedBuffer
==============
*/

GfxWrappedBuffer *__fastcall R_GetNullGfxWrappedBuffer(GfxWrappedBuffer *result)
{
  return ?R_GetNullGfxWrappedBuffer@@YA?AUGfxWrappedBuffer@@XZ(result);
}

/*
==============
Load_RawDataBuffer
==============
*/

void __fastcall Load_RawDataBuffer(ID3D12Resource **buffer, void *data, unsigned int totalBufferSize, const char *name)
{
  ?Load_RawDataBuffer@@YAXPEAPEAUID3D12Resource@@PEAXIPEBD@Z(buffer, data, totalBufferSize, name);
}

/*
==============
Load_IndexBufferView
==============
*/

void __fastcall Load_IndexBufferView(GfxShaderBufferView *view, ID3D12Resource *buffer, unsigned int size, const char *name)
{
  ?Load_IndexBufferView@@YAXPEAUGfxShaderBufferView@@PEAUID3D12Resource@@IPEBD@Z(view, buffer, size, name);
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/

void __fastcall R_CreateGfxWrappedBuffer(GfxWrappedBaseBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  ?R_CreateGfxWrappedBuffer@@YAXPEAUGfxWrappedBaseBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBD@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo);
}

/*
==============
Load_RawBlendShapeWrappedVertBuffer
==============
*/

void __fastcall Load_RawBlendShapeWrappedVertBuffer(GfxWrappedBuffer *buffer, BlendShape *blendShape, const char *bufName)
{
  ?Load_RawBlendShapeWrappedVertBuffer@@YAXPEAUGfxWrappedBuffer@@PEAUBlendShape@@PEBD@Z(buffer, blendShape, bufName);
}

/*
==============
Load_GfxWrappedBuffer
==============
*/

void __fastcall Load_GfxWrappedBuffer(GfxWrappedBaseBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  ?Load_GfxWrappedBuffer@@YAXPEAUGfxWrappedBaseBuffer@@W4GfxWrappedBufferType@@IIPEAXPEBDG@Z(buffer, bufferType, stride, count, data, name, flags);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/

void __fastcall R_ShutdownGfxWrappedBuffer(GfxWrappedBuffer *buffer)
{
  ?R_ShutdownGfxWrappedBuffer@@YAXPEAUGfxWrappedBuffer@@@Z(buffer);
}

/*
==============
Load_VertexBufferRW
==============
*/

void __fastcall Load_VertexBufferRW(ID3D12Resource **vb, void *bufferData, int sizeInBytes, const char *bufferName)
{
  ?Load_VertexBufferRW@@YAXPEAPEAUID3D12Resource@@PEAXHPEBD@Z(vb, bufferData, sizeInBytes, bufferName);
}

/*
==============
R_AllocDynamicIndexBuffer
==============
*/

void *__fastcall R_AllocDynamicIndexBuffer(ID3D12Resource **ib, int sizeInBytes, GfxBufferCreationContext *context)
{
  return ?R_AllocDynamicIndexBuffer@@YAPEAXPEAPEAUID3D12Resource@@HUGfxBufferCreationContext@@@Z(ib, sizeInBytes, context);
}

/*
==============
R_DestroyDynamicComputeBufferState
==============
*/

void __fastcall R_DestroyDynamicComputeBufferState(GfxComputeBufferState *cb)
{
  ?R_DestroyDynamicComputeBufferState@@YAXPEAUGfxComputeBufferState@@@Z(cb);
}

/*
==============
R_ReleaseConstantBuffer
==============
*/

void __fastcall R_ReleaseConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ?R_ReleaseConstantBuffer@@YAXPEAUGfxConstantBuffer@@@Z(constantBuffer);
}

/*
==============
R_UpdateGfxWrappedBuffer
==============
*/

void __fastcall R_UpdateGfxWrappedBuffer(const GfxWrappedBuffer *buffer, const void *data, const unsigned int dataSize)
{
  ?R_UpdateGfxWrappedBuffer@@YAXPEBUGfxWrappedBuffer@@PEBXI@Z(buffer, data, dataSize);
}

/*
==============
R_InitDynamicVertexBufferState
==============
*/

void __fastcall R_InitDynamicVertexBufferState(GfxVertexBufferState *vb, int bytes, bool compute, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  ?R_InitDynamicVertexBufferState@@YAXPEAUGfxVertexBufferState@@H_NW4D3D12_RESOURCE_STATES@@UGfxBufferCreationContext@@@Z(vb, bytes, compute, initState, context);
}

/*
==============
R_InitDynamicComputeStructuredBufferState
==============
*/

void __fastcall R_InitDynamicComputeStructuredBufferState(GfxComputeBufferState *cb, unsigned int stride, unsigned int count, GfxBufferCreationContext *context)
{
  ?R_InitDynamicComputeStructuredBufferState@@YAXPEAUGfxComputeBufferState@@IIUGfxBufferCreationContext@@@Z(cb, stride, count, context);
}

/*
==============
R_FreeStaticVertexBuffer
==============
*/

void __fastcall R_FreeStaticVertexBuffer(ID3D12Resource *vb)
{
  ?R_FreeStaticVertexBuffer@@YAXPEAUID3D12Resource@@@Z(vb);
}

/*
==============
R_CreateGfxWrappedBuffer_Internal
==============
*/

void __fastcall R_CreateGfxWrappedBuffer_Internal(GfxWrappedBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  ?R_CreateGfxWrappedBuffer_Internal@@YAXPEAUGfxWrappedBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBDUGfxBufferCreationContext@@@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, context);
}

/*
==============
R_InitDynamicIndexBufferState
==============
*/

void __fastcall R_InitDynamicIndexBufferState(GfxIndexBufferState *ib, int indexCount, GfxBufferCreationContext *context)
{
  ?R_InitDynamicIndexBufferState@@YAXPEAUGfxIndexBufferState@@HUGfxBufferCreationContext@@@Z(ib, indexCount, context);
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/

void __fastcall R_CreateGfxWrappedBuffer(GfxWrappedRWBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  ?R_CreateGfxWrappedBuffer@@YAXPEAUGfxWrappedRWBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBD@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo);
}

/*
==============
Load_GfxWrappedBuffer
==============
*/

void __fastcall Load_GfxWrappedBuffer(const DBStreamStart streamStart)
{
  ?Load_GfxWrappedBuffer@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_VertexBuffer
==============
*/

void __fastcall Load_VertexBuffer(ID3D12Resource **vb, void *bufferData, int sizeInBytes, const char *bufferName)
{
  ?Load_VertexBuffer@@YAXPEAPEAUID3D12Resource@@PEAXHPEBD@Z(vb, bufferData, sizeInBytes, bufferName);
}

/*
==============
R_GetSkinnedCacheVideoMemorySize
==============
*/

unsigned __int64 __fastcall R_GetSkinnedCacheVideoMemorySize()
{
  return ?R_GetSkinnedCacheVideoMemorySize@@YA_KXZ();
}

/*
==============
R_CreateGfxWrappedBufferBase_Internal
==============
*/

void *__fastcall R_CreateGfxWrappedBufferBase_Internal(GfxWrappedBaseBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  return ?R_CreateGfxWrappedBufferBase_Internal@@YAPEAXPEAUGfxWrappedBaseBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBDUGfxBufferCreationContext@@@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, context);
}

/*
==============
R_BeginWrappedBufferDataWrite
==============
*/

void *__fastcall R_BeginWrappedBufferDataWrite(const GfxWrappedBuffer *buffer)
{
  return ?R_BeginWrappedBufferDataWrite@@YAPEAXPEBUGfxWrappedBuffer@@@Z(buffer);
}

/*
==============
R_CreateConstantBufferFromWrappedBuffer
==============
*/

void __fastcall R_CreateConstantBufferFromWrappedBuffer(const GfxWrappedBuffer *inBuffer, int sizeInBytes, GfxConstantBuffer *outBuffer)
{
  ?R_CreateConstantBufferFromWrappedBuffer@@YAXPEBUGfxWrappedBuffer@@HPEAUGfxConstantBuffer@@@Z(inBuffer, sizeInBytes, outBuffer);
}

/*
==============
Load_GfxWrappedBuffer
==============
*/

void __fastcall Load_GfxWrappedBuffer(GfxWrappedBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  ?Load_GfxWrappedBuffer@@YAXPEAUGfxWrappedBuffer@@W4GfxWrappedBufferType@@IIPEAXPEBDG@Z(buffer, bufferType, stride, count, data, name, flags);
}

/*
==============
R_GetNullGfxWrappedRWBuffer
==============
*/

GfxWrappedRWBuffer *__fastcall R_GetNullGfxWrappedRWBuffer(GfxWrappedRWBuffer *result)
{
  return ?R_GetNullGfxWrappedRWBuffer@@YA?AUGfxWrappedRWBuffer@@XZ(result);
}

/*
==============
R_AllocStaticVertexBuffer
==============
*/

void *__fastcall R_AllocStaticVertexBuffer(ID3D12Resource **vb, int sizeInBytes, GfxBufferCreationContext *context)
{
  return ?R_AllocStaticVertexBuffer@@YAPEAXPEAPEAUID3D12Resource@@HUGfxBufferCreationContext@@@Z(vb, sizeInBytes, context);
}

/*
==============
R_DestroyBuffer
==============
*/

void __fastcall R_DestroyBuffer(ID3D12Resource **buffer)
{
  ?R_DestroyBuffer@@YAXPEAPEAUID3D12Resource@@@Z(buffer);
}

/*
==============
R_DX12_GetAllocSizeFromDesc
==============
*/

unsigned __int64 __fastcall R_DX12_GetAllocSizeFromDesc(D3D12_RESOURCE_DESC *desc)
{
  return ?R_DX12_GetAllocSizeFromDesc@@YA_KPEAUD3D12_RESOURCE_DESC@@@Z(desc);
}

/*
==============
R_ReadbackGfxWrappedBuffer
==============
*/

void __fastcall R_ReadbackGfxWrappedBuffer(const GfxWrappedBuffer *buffer, void *data, const unsigned int dataSize)
{
  ?R_ReadbackGfxWrappedBuffer@@YAXPEBUGfxWrappedBuffer@@PEAXI@Z(buffer, data, dataSize);
}

/*
==============
R_AllocGfxBufferMemory
==============
*/

void *__fastcall R_AllocGfxBufferMemory(unsigned int byteSize, GfxBufferCreationContext *context)
{
  return ?R_AllocGfxBufferMemory@@YAPEAXIUGfxBufferCreationContext@@@Z(byteSize, context);
}

/*
==============
R_CreateSkinnedCache
==============
*/

void R_CreateSkinnedCache(void)
{
  ?R_CreateSkinnedCache@@YAXXZ();
}

/*
==============
R_DX12_CreateBuffer
==============
*/

void *__fastcall R_DX12_CreateBuffer(const D3D12_RESOURCE_DESC *desc, D3D12_HEAP_TYPE __formal, D3D12_RESOURCE_STATES resourceState, unsigned __int8 *const *a4, const void *pInitialData, unsigned int initDataSize, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  return ?R_DX12_CreateBuffer@@YAPEAXPEBUD3D12_RESOURCE_DESC@@W4D3D12_HEAP_TYPE@@W4D3D12_RESOURCE_STATES@@PEBQEAEPEBXIPEAPEAUID3D12Resource@@UGfxBufferCreationContext@@@Z(desc, __formal, resourceState, a4, pInitialData, initDataSize, outBuffer, context);
}

/*
==============
R_CreateConstantBuffer
==============
*/

void __fastcall R_CreateConstantBuffer(unsigned int bufferSize, unsigned int usage, unsigned int accessFlags, const void *initialData, GfxConstantBuffer *constantBuffer, GfxBufferCreationContext *context)
{
  ?R_CreateConstantBuffer@@YAXIIIPEBXPEAUGfxConstantBuffer@@UGfxBufferCreationContext@@@Z(bufferSize, usage, accessFlags, initialData, constantBuffer, context);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/

void __fastcall R_ShutdownGfxWrappedBuffer(GfxWrappedBaseBuffer *buffer)
{
  ?R_ShutdownGfxWrappedBuffer@@YAXPEAUGfxWrappedBaseBuffer@@@Z(buffer);
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/

void __fastcall R_CreateGfxWrappedBuffer(GfxWrappedBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  ?R_CreateGfxWrappedBuffer@@YAXPEAUGfxWrappedBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBD@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo);
}

/*
==============
Load_RawDataBufferView
==============
*/

void __fastcall Load_RawDataBufferView(GfxShaderBufferView *view, ID3D12Resource *buffer, void *data, unsigned int size, const char *name)
{
  ?Load_RawDataBufferView@@YAXPEAUGfxShaderBufferView@@PEAUID3D12Resource@@PEAXIPEBD@Z(view, buffer, data, size, name);
}

/*
==============
Load_RawDataBufferRW
==============
*/

void __fastcall Load_RawDataBufferRW(ID3D12Resource **buffer, void *data, unsigned int totalBufferSize, const char *name)
{
  ?Load_RawDataBufferRW@@YAXPEAPEAUID3D12Resource@@PEAXIPEBD@Z(buffer, data, totalBufferSize, name);
}

/*
==============
Buffers_GetElementSizeForDataFormat
==============
*/

unsigned int __fastcall Buffers_GetElementSizeForDataFormat(GfxDataFormat format)
{
  return ?Buffers_GetElementSizeForDataFormat@@YAIW4GfxDataFormat@@@Z(format);
}

/*
==============
R_InitComputeBufferState
==============
*/

void __fastcall R_InitComputeBufferState(GfxComputeBufferState *cb, unsigned int bytes, GfxBufferCreationContext *context)
{
  ?R_InitComputeBufferState@@YAXPEAUGfxComputeBufferState@@IUGfxBufferCreationContext@@@Z(cb, bytes, context);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/

void __fastcall R_ShutdownGfxWrappedBuffer(GfxWrappedRWBuffer *buffer)
{
  ?R_ShutdownGfxWrappedBuffer@@YAXPEAUGfxWrappedRWBuffer@@@Z(buffer);
}

/*
==============
R_DX12_GetResourceSize
==============
*/

unsigned __int64 __fastcall R_DX12_GetResourceSize(ID3D12Resource *resource)
{
  return ?R_DX12_GetResourceSize@@YA_KPEAUID3D12Resource@@@Z(resource);
}

/*
==============
R_InitDynamicVertexBufferState
==============
*/

void __fastcall R_InitDynamicVertexBufferState(GfxVertexBufferState *vb, int bytes, bool compute, GfxBufferCreationContext *context)
{
  ?R_InitDynamicVertexBufferState@@YAXPEAUGfxVertexBufferState@@H_NUGfxBufferCreationContext@@@Z(vb, bytes, compute, context);
}

/*
==============
R_GetNullGfxWrappedBaseBuffer
==============
*/

GfxWrappedBaseBuffer *__fastcall R_GetNullGfxWrappedBaseBuffer(GfxWrappedBaseBuffer *result)
{
  return ?R_GetNullGfxWrappedBaseBuffer@@YA?AUGfxWrappedBaseBuffer@@XZ(result);
}

/*
==============
Load_IndexBuffer
==============
*/

void __fastcall Load_IndexBuffer(ID3D12Resource **ib, void *bufferData, int indexCount, const char *bufferName)
{
  ?Load_IndexBuffer@@YAXPEAPEAUID3D12Resource@@PEAXHPEBD@Z(ib, bufferData, indexCount, bufferName);
}

/*
==============
Load_GfxWrappedBuffer
==============
*/

void __fastcall Load_GfxWrappedBuffer(GfxWrappedRWBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  ?Load_GfxWrappedBuffer@@YAXPEAUGfxWrappedRWBuffer@@W4GfxWrappedBufferType@@IIPEAXPEBDG@Z(buffer, bufferType, stride, count, data, name, flags);
}

/*
==============
R_CreatePlacementBuffer
==============
*/

void __fastcall R_CreatePlacementBuffer(const D3D12_RESOURCE_DESC *desc, ID3D12Resource **buffer, const void *data, GfxBufferCreationContext *context)
{
  ?R_CreatePlacementBuffer@@YAXPEBUD3D12_RESOURCE_DESC@@PEAPEAUID3D12Resource@@PEBXUGfxBufferCreationContext@@@Z(desc, buffer, data, context);
}

/*
==============
R_InitComputeStructuredBufferState
==============
*/

void __fastcall R_InitComputeStructuredBufferState(GfxComputeBufferState *cb, unsigned int stride, unsigned int count, GfxBufferCreationContext *context)
{
  ?R_InitComputeStructuredBufferState@@YAXPEAUGfxComputeBufferState@@IIUGfxBufferCreationContext@@@Z(cb, stride, count, context);
}

/*
==============
R_AllocStaticVertexBufferWithData
==============
*/

void __fastcall R_AllocStaticVertexBufferWithData(ID3D12Resource **vb, int sizeInBytes, const void *data, GfxBufferCreationContext *context)
{
  ?R_AllocStaticVertexBufferWithData@@YAXPEAPEAUID3D12Resource@@HPEBXUGfxBufferCreationContext@@@Z(vb, sizeInBytes, data, context);
}

/*
==============
R_AllocStaticIndexBuffer
==============
*/

void *__fastcall R_AllocStaticIndexBuffer(ID3D12Resource **ib, int sizeInBytes, GfxBufferCreationContext *context)
{
  return ?R_AllocStaticIndexBuffer@@YAPEAXPEAPEAUID3D12Resource@@HUGfxBufferCreationContext@@@Z(ib, sizeInBytes, context);
}

/*
==============
R_CreateDynamicBuffers
==============
*/

void R_CreateDynamicBuffers(void)
{
  ?R_CreateDynamicBuffers@@YAXXZ();
}

/*
==============
R_AllocDynamicVertexBuffer
==============
*/

void *__fastcall R_AllocDynamicVertexBuffer(ID3D12Resource **vb, int sizeInBytes, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  return ?R_AllocDynamicVertexBuffer@@YAPEAXPEAPEAUID3D12Resource@@HW4D3D12_RESOURCE_STATES@@UGfxBufferCreationContext@@@Z(vb, sizeInBytes, initState, context);
}

/*
==============
R_ReleasePlacementBuffer
==============
*/

void __fastcall R_ReleasePlacementBuffer(ID3D12Resource **buffer)
{
  ?R_ReleasePlacementBuffer@@YAXPEAPEAUID3D12Resource@@@Z(buffer);
}

/*
==============
R_FreeStaticIndexBuffer
==============
*/

void __fastcall R_FreeStaticIndexBuffer(ID3D12Resource *ib)
{
  ?R_FreeStaticIndexBuffer@@YAXPEAUID3D12Resource@@@Z(ib);
}

/*
==============
R_DestroyConstantBuffer
==============
*/

void __fastcall R_DestroyConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ?R_DestroyConstantBuffer@@YAXPEAUGfxConstantBuffer@@@Z(constantBuffer);
}

/*
==============
R_AllocStaticIndexBufferWithData
==============
*/

void __fastcall R_AllocStaticIndexBufferWithData(ID3D12Resource **ib, int sizeInBytes, const void *data, GfxBufferCreationContext *context)
{
  ?R_AllocStaticIndexBufferWithData@@YAXPEAPEAUID3D12Resource@@HPEBXUGfxBufferCreationContext@@@Z(ib, sizeInBytes, data, context);
}

/*
==============
R_CreateGfxWrappedRWBuffer_Internal
==============
*/

void __fastcall R_CreateGfxWrappedRWBuffer_Internal(GfxWrappedRWBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  ?R_CreateGfxWrappedRWBuffer_Internal@@YAXPEAUGfxWrappedRWBuffer@@W4GfxWrappedBufferType@@HIW4GfxDataFormat@@GW4D3D12_RESOURCE_STATES@@PEBQEAEPEBXPEBDUGfxBufferCreationContext@@@Z(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, context);
}

/*
==============
Load_VertexBufferView
==============
*/

void __fastcall Load_VertexBufferView(GfxShaderBufferView *view, ID3D12Resource *vb, unsigned int size, const char *name)
{
  ?Load_VertexBufferView@@YAXPEAUGfxShaderBufferView@@PEAUID3D12Resource@@IPEBD@Z(view, vb, size, name);
}

/*
==============
Load_RawDataBufferRWView
==============
*/

void __fastcall Load_RawDataBufferRWView(GfxShaderBufferRWView *view, ID3D12Resource *buffer, void *data, unsigned int size, const char *name)
{
  ?Load_RawDataBufferRWView@@YAXPEAUGfxShaderBufferRWView@@PEAUID3D12Resource@@PEAXIPEBD@Z(view, buffer, data, size, name);
}

/*
==============
Load_GfxWrappedBuffer
==============
*/
void Load_GfxWrappedBuffer(const DBStreamStart streamStart)
{
  Load_Stream(streamStart, varGfxWrappedBuffer, 0x20ui64);
}

/*
==============
Buffers_GetElementSizeForDataFormat
==============
*/
__int64 Buffers_GetElementSizeForDataFormat(GfxDataFormat format)
{
  __int64 result; 

  switch ( format )
  {
    case GFX_DATA_FORMAT_R8_UNORM:
    case GFX_DATA_FORMAT_R8_UINT:
      result = 1i64;
      break;
    case GFX_DATA_FORMAT_R16_UINT:
      result = 2i64;
      break;
    case GFX_DATA_FORMAT_R32_UINT:
    case GFX_DATA_FORMAT_R32_FLOAT:
    case GFX_DATA_FORMAT_R8G8B8A8_UNORM:
    case GFX_DATA_FORMAT_R11G11B10_FLOAT:
      result = 4i64;
      break;
    case GFX_DATA_FORMAT_R32G32_FLOAT:
    case GFX_DATA_FORMAT_R32G32_UINT:
    case GFX_DATA_FORMAT_R16G16B16A16_FLOAT:
      result = 8i64;
      break;
    case GFX_DATA_FORMAT_R32G32B32A32_FLOAT:
      result = 16i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2950, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
Load_GfxWrappedBuffer
==============
*/
void Load_GfxWrappedBuffer(GfxWrappedBaseBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  double v11; 
  ID3D12Resource *outBuffer[2]; 
  double v13; 

  if ( data && count )
  {
    if ( (((_BYTE)stride * (_BYTE)count) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1790, ASSERT_TYPE_ASSERT, "(( ( count * stride ) % sizeof( uint ) ) == 0)", (const char *)&queryFormat, "( ( count * stride ) % sizeof( uint ) ) == 0") )
      __debugbreak();
    if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3128, ASSERT_TYPE_ASSERT, "(!( flags & GfxWrappedBufferFlags::GfxWrappedBufferFlags_SysMemData ))", (const char *)&queryFormat, "!( flags & GfxWrappedBufferFlags::GfxWrappedBufferFlags_SysMemData )") )
      __debugbreak();
    outBuffer[0] = (ID3D12Resource *)R_GetTrackingZoneName();
    outBuffer[1] = (ID3D12Resource *)name;
    R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, stride, count, (const GfxDataFormat)((stride != 2) + 3), flags | 0x20, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, data, name, (GfxBufferCreationContext *)outBuffer);
  }
  else
  {
    R_AssignNullBuffer(outBuffer);
    R_AssignNullShaderBufferView((GfxShaderBufferView *)&outBuffer[1]);
    v11 = v13;
    *(_OWORD *)&buffer->buffer = *(_OWORD *)outBuffer;
    *(double *)&buffer->view.view = v11;
  }
}

/*
==============
Load_GfxWrappedBuffer
==============
*/
void Load_GfxWrappedBuffer(GfxWrappedBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  ID3D12Resource *outBuffer[2]; 
  __int64 v12; 
  __m256i v13; 

  if ( data && count )
  {
    if ( stride != 2 && (((_BYTE)stride * (_BYTE)count) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1804, ASSERT_TYPE_ASSERT, "(( ( count * stride ) % sizeof( uint ) ) == 0)", (const char *)&queryFormat, "( ( count * stride ) % sizeof( uint ) ) == 0") )
      __debugbreak();
    R_CreateGfxWrappedBuffer(buffer, bufferType, stride, count, (const GfxDataFormat)((stride != 2) + 3), flags, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, data, name);
  }
  else
  {
    R_AssignNullBuffer(outBuffer);
    R_AssignNullShaderBufferView((GfxShaderBufferView *)&outBuffer[1]);
    *(_OWORD *)v13.m256i_i8 = *(_OWORD *)outBuffer;
    v13.m256i_i64[2] = v12;
    v13.m256i_i64[3] = 0i64;
    *(__m256i *)buffer = v13;
  }
}

/*
==============
Load_GfxWrappedBuffer
==============
*/
void Load_GfxWrappedBuffer(GfxWrappedRWBuffer *buffer, GfxWrappedBufferType bufferType, unsigned int stride, unsigned int count, void *data, const char *name, unsigned __int16 flags)
{
  int v11; 
  GfxBufferCreationContext v12; 
  __int32 v13; 
  __int32 v14; 
  ID3D12Resource *v15; 
  ID3D12Resource *v16; 
  ID3D12Resource *v17; 
  __int128 v18; 
  double v19; 
  GfxBufferCreationContext outBuffer_8; 
  __int64 outView_8; 
  const char *v22; 
  GfxWrappedBuffer v23; 
  GfxWrappedBuffer v24; 
  GfxShaderBufferRWView outRWView; 

  v22 = name;
  if ( data && count )
  {
    if ( (((_BYTE)stride * (_BYTE)count) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1818, ASSERT_TYPE_ASSERT, "(( ( count * stride ) % sizeof( uint ) ) == 0)", (const char *)&queryFormat, "( ( count * stride ) % sizeof( uint ) ) == 0") )
      __debugbreak();
    v11 = (stride != 2) + 3;
    outBuffer_8.zoneName = R_GetTrackingZoneName();
    outBuffer_8.objectName = v22;
    v12 = outBuffer_8;
    buffer->data = R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, stride, count, (const GfxDataFormat)v11, flags | 1u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, data, v22, &outBuffer_8);
    if ( (flags & 0x800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3103, ASSERT_TYPE_ASSERT, "(!(flags & GfxWrappedBufferFlags_AccelerationStructure))", "%s\n\tCreating UAV for acceleration structure makes no sense, DXR only uses raw pointers for write access.", "!(flags & GfxWrappedBufferFlags_AccelerationStructure)") )
      __debugbreak();
    if ( bufferType )
    {
      v13 = bufferType - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3119, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
        }
        else
        {
          v15 = buffer->buffer;
          outBuffer_8 = v12;
          R_CreateComputeRawBufferRWView(v15, &buffer->rwView, &outBuffer_8);
        }
      }
      else
      {
        v16 = buffer->buffer;
        outBuffer_8 = v12;
        R_CreateComputeBufferRWView(v16, (GfxDataFormat)v11, &buffer->rwView, &outBuffer_8);
      }
    }
    else
    {
      v17 = buffer->buffer;
      outBuffer_8 = v12;
      R_CreateComputeStructuredBufferRWViewWithFlags(v17, stride, (GfxShaderRWViewFlags)(4 * ((flags & 0x10) != 0)), &buffer->rwView, &outBuffer_8);
    }
  }
  else
  {
    R_AssignNullBuffer((ID3D12Resource **)&outBuffer_8);
    R_AssignNullShaderBufferView((GfxShaderBufferView *)&outBuffer_8.objectName);
    *(GfxBufferCreationContext *)&v23.buffer = outBuffer_8;
    *(double *)&v23.view.view = *(double *)&outView_8;
    v23.data = NULL;
    v24 = v23;
    R_AssignNullShaderBufferRWView(&outRWView);
    v18 = *(_OWORD *)&outRWView.rwResource;
    buffer->GfxWrappedBuffer = v24;
    v19 = *(double *)&outRWView.rwView;
    *(_OWORD *)&buffer->rwView.rwResource = v18;
    *(double *)&buffer->rwView.rwView = v19;
  }
}

/*
==============
Load_IndexBuffer
==============
*/
void Load_IndexBuffer(ID3D12Resource **ib, void *bufferData, int indexCount, const char *bufferName)
{
  __int64 v8; 
  char *v9; 
  unsigned __int64 v10; 
  HRESULT v11; 
  const char *v12; 
  ID3D12DeviceChild *resource; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( bufferData )
  {
    if ( ((unsigned __int8)bufferData & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1928, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, GFX_INDEX_BUFFER_ALIGNMENT )") )
      __debugbreak();
    v18 = 65537i64;
    v14 = 1;
    v17 = 1;
    v8 = (unsigned int)(2 * indexCount);
    v19 = 1i64;
    v20 = 1i64;
    v15 = 0i64;
    v16 = v8;
    if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, bufferData) )
    {
      _mm_mfence();
      v9 = (char *)((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64);
      v10 = (v8 + ((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
      if ( ((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64) < v10 )
      {
        do
        {
          _mm_clflush(v9);
          v9 += 64;
        }
        while ( (unsigned __int64)v9 < v10 );
      }
      _mm_mfence();
    }
    R_GetTrackingZoneName();
    v11 = ((__int64 (__fastcall *)(ID3D12Device *, void *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, bufferData, &v14, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
    if ( v11 < 0 )
    {
      v12 = R_ErrorDescription(v11);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v12);
    }
    PIXSetDebugName(resource, bufferName);
    *ib = (ID3D12Resource *)resource;
  }
  else
  {
    R_AssignNullBuffer(ib);
  }
}

/*
==============
Load_IndexBufferView
==============
*/
void Load_IndexBufferView(GfxShaderBufferView *view, ID3D12Resource *buffer, unsigned int size, const char *name)
{
  GfxBufferCreationContext v7; 

  if ( buffer && size )
  {
    v7.zoneName = R_GetTrackingZoneName();
    v7.objectName = name;
    R_CreateComputeRawBufferView(buffer, view, &v7);
  }
  else
  {
    R_AssignNullShaderBufferView(view);
  }
}

/*
==============
Load_RawBlendShapeWrappedVertBuffer
==============
*/
void Load_RawBlendShapeWrappedVertBuffer(GfxWrappedBuffer *buffer, BlendShape *blendShape, const char *bufName)
{
  bool hasTangents; 
  int v5; 
  const void *initialData; 

  if ( blendShape->vertCount )
  {
    hasTangents = blendShape->hasTangents;
    v5 = 8;
    if ( hasTangents )
      v5 = 16;
    if ( hasTangents )
      initialData = blendShape->verts;
    else
      initialData = blendShape->vertsNoTangentFrame;
    R_CreateGfxWrappedBuffer(buffer, GfxWrappedBuffer_Structured, v5, blendShape->vertCount, GFX_DATA_FORMAT_R32_UINT, 0, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, bufName);
  }
}

/*
==============
Load_RawDataBuffer
==============
*/
void Load_RawDataBuffer(ID3D12Resource **buffer, void *data, unsigned int totalBufferSize, const char *name)
{
  GfxBufferCreationContext v8; 

  if ( data )
  {
    v8.zoneName = R_GetTrackingZoneName();
    v8.objectName = name;
    R_CreateComputeRawBuffer(totalBufferSize, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, data, buffer, &v8);
  }
  else
  {
    R_AssignNullBuffer(buffer);
  }
}

/*
==============
Load_RawDataBufferRW
==============
*/
void Load_RawDataBufferRW(ID3D12Resource **buffer, void *data, unsigned int totalBufferSize, const char *name)
{
  GfxBufferCreationContext v8; 

  if ( data )
  {
    v8.zoneName = R_GetTrackingZoneName();
    v8.objectName = name;
    R_CreateComputeRawBuffer(totalBufferSize, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, data, buffer, &v8);
  }
  else
  {
    R_AssignNullBuffer(buffer);
  }
}

/*
==============
Load_RawDataBufferRWView
==============
*/
void Load_RawDataBufferRWView(GfxShaderBufferRWView *view, ID3D12Resource *buffer, void *data, unsigned int size, const char *name)
{
  GfxBufferCreationContext v7; 

  if ( data && size )
  {
    if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1757, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    v7.zoneName = R_GetTrackingZoneName();
    v7.objectName = name;
    R_CreateComputeRawBufferRWView(buffer, view, &v7);
  }
  else
  {
    R_AssignNullShaderBufferRWView(view);
  }
}

/*
==============
Load_RawDataBufferView
==============
*/
void Load_RawDataBufferView(GfxShaderBufferView *view, ID3D12Resource *buffer, void *data, unsigned int size, const char *name)
{
  GfxBufferCreationContext v7; 

  if ( data && size )
  {
    if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1743, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    v7.zoneName = R_GetTrackingZoneName();
    v7.objectName = name;
    R_CreateComputeRawBufferView(buffer, view, &v7);
  }
  else
  {
    R_AssignNullShaderBufferView(view);
  }
}

/*
==============
Load_VertexBuffer
==============
*/
void Load_VertexBuffer(ID3D12Resource **vb, void *bufferData, int sizeInBytes, const char *bufferName)
{
  Load_VertexBuffer_Internal(vb, bufferData, sizeInBytes, bufferName, 0);
}

/*
==============
Load_VertexBufferRW
==============
*/
void Load_VertexBufferRW(ID3D12Resource **vb, void *bufferData, int sizeInBytes, const char *bufferName)
{
  Load_VertexBuffer_Internal(vb, bufferData, sizeInBytes, bufferName, 1);
}

/*
==============
Load_VertexBufferView
==============
*/
void Load_VertexBufferView(GfxShaderBufferView *view, ID3D12Resource *vb, unsigned int size, const char *name)
{
  GfxBufferCreationContext v7; 

  if ( vb && size )
  {
    v7.zoneName = R_GetTrackingZoneName();
    v7.objectName = name;
    R_CreateComputeRawBufferView(vb, view, &v7);
  }
  else
  {
    R_AssignNullShaderBufferView(view);
  }
}

/*
==============
Load_VertexBuffer_Internal
==============
*/
void Load_VertexBuffer_Internal(ID3D12Resource **vb, void *bufferData, int sizeInBytes, const char *bufferName)
{
  __int64 v7; 
  char *v8; 
  unsigned __int64 v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( bufferData )
  {
    v7 = sizeInBytes;
    v13 = 1;
    v14 = 0i64;
    v15 = sizeInBytes;
    v16 = 1;
    v17 = 65537i64;
    v18 = 1i64;
    v19 = 1i64;
    if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, bufferData) )
    {
      _mm_mfence();
      v8 = (char *)((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64);
      v9 = (v7 + ((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
      if ( ((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64) < v9 )
      {
        do
        {
          _mm_clflush(v8);
          v8 += 64;
        }
        while ( (unsigned __int64)v8 < v9 );
      }
      _mm_mfence();
    }
    R_GetTrackingZoneName();
    v10 = ((__int64 (__fastcall *)(ID3D12Device *, void *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, bufferData, &v13, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
    if ( v10 < 0 )
    {
      v11 = R_ErrorDescription(v10);
      Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
    }
    PIXSetDebugName(resource, bufferName);
    *vb = (ID3D12Resource *)resource;
  }
  else
  {
    R_AssignNullBuffer(vb);
  }
}

/*
==============
R_AddRefPlacementConstantBuffer
==============
*/
void R_AddRefPlacementConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ;
}

/*
==============
R_AllocDynamicIndexBuffer
==============
*/
void *R_AllocDynamicIndexBuffer(ID3D12Resource **ib, int sizeInBytes, GfxBufferCreationContext *context)
{
  char BaseAlignmentBytes; 
  void *v7; 
  HRESULT v8; 
  const char *v9; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  struct XG_RESOURCE_LAYOUT size; 
  struct XG_BUFFER_DESC v14; 
  int v15; 
  __int64 v16; 
  unsigned __int64 SizeBytes; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !ib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2001, ASSERT_TYPE_ASSERT, "(ib)", (const char *)&queryFormat, "ib") )
    __debugbreak();
  v14.ByteWidth = sizeInBytes;
  v14.Usage = XG_USAGE_DEFAULT;
  *(_QWORD *)&v14.ESRAMOffsetBytes = 0i64;
  *(_QWORD *)&v14.BindFlags = 10i64;
  *(_QWORD *)&v14.MiscFlags = 32i64;
  XGComputeBufferLayout(&v14, &size);
  if ( size.BaseAlignmentBytes > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2013, ASSERT_TYPE_ASSERT, "(resourceLayout.BaseAlignmentBytes <= 64)", (const char *)&queryFormat, "resourceLayout.BaseAlignmentBytes <= GFX_INDEX_BUFFER_ALIGNMENT") )
    __debugbreak();
  BaseAlignmentBytes = size.BaseAlignmentBytes;
  if ( (!size.BaseAlignmentBytes || ((size.BaseAlignmentBytes - 1) & size.BaseAlignmentBytes) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((BaseAlignmentBytes - 1) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2014, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast< void * >( 64 ), resourceLayout.BaseAlignmentBytes ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast< void * >( GFX_INDEX_BUFFER_ALIGNMENT ), resourceLayout.BaseAlignmentBytes )") )
    __debugbreak();
  v7 = PMem_Alloc(size.SizeBytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_AllocDynamicIndexBuffer");
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2017, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( ((unsigned __int8)v7 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2018, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, GFX_INDEX_BUFFER_ALIGNMENT )") )
    __debugbreak();
  SizeBytes = size.SizeBytes;
  v15 = 1;
  v16 = 0i64;
  v18 = 1;
  v19 = 65537i64;
  v20 = 1i64;
  v21 = 1i64;
  *(GfxBufferCreationContext *)name = *context;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v8 = ((__int64 (__fastcall *)(ID3D12Device *, void *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v7, &v15, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v8 < 0 )
  {
    v9 = R_ErrorDescription(v8);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v9);
  }
  PIXSetDebugName(resource, name[1]);
  *ib = (ID3D12Resource *)resource;
  return v7;
}

/*
==============
R_AllocDynamicVertexBuffer
==============
*/
void *R_AllocDynamicVertexBuffer(ID3D12Resource **vb, int sizeInBytes, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  char BaseAlignmentBytes; 
  void *v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  struct XG_RESOURCE_LAYOUT size; 
  struct XG_BUFFER_DESC v16; 
  int v17; 
  __int64 v18; 
  unsigned __int64 SizeBytes; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 

  if ( !vb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2045, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
    __debugbreak();
  v16.ByteWidth = sizeInBytes;
  v16.Usage = XG_USAGE_DEFAULT;
  *(_QWORD *)&v16.ESRAMOffsetBytes = 0i64;
  *(_QWORD *)&v16.BindFlags = 137i64;
  *(_QWORD *)&v16.MiscFlags = 32i64;
  XGComputeBufferLayout(&v16, &size);
  if ( size.BaseAlignmentBytes > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2057, ASSERT_TYPE_ASSERT, "(resourceLayout.BaseAlignmentBytes <= 64)", (const char *)&queryFormat, "resourceLayout.BaseAlignmentBytes <= GFX_CODE_VERTEX_BUFFER_ALIGNMENT") )
    __debugbreak();
  BaseAlignmentBytes = size.BaseAlignmentBytes;
  if ( (!size.BaseAlignmentBytes || ((size.BaseAlignmentBytes - 1) & size.BaseAlignmentBytes) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((BaseAlignmentBytes - 1) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2058, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast< void * >( 64 ), resourceLayout.BaseAlignmentBytes ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast< void * >( GFX_CODE_VERTEX_BUFFER_ALIGNMENT ), resourceLayout.BaseAlignmentBytes )") )
    __debugbreak();
  v9 = PMem_Alloc(size.SizeBytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_AllocDynamicVertexBuffer");
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2061, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( ((unsigned __int8)v9 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2062, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, GFX_CODE_VERTEX_BUFFER_ALIGNMENT )") )
    __debugbreak();
  SizeBytes = size.SizeBytes;
  v17 = 1;
  v18 = 0i64;
  v20 = 1;
  v21 = 65537i64;
  v22 = 1i64;
  v23 = 1;
  v24 = 4;
  *(GfxBufferCreationContext *)name = *context;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1900, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, void *, int *, _QWORD, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v9, &v17, (unsigned int)initState, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
  }
  PIXSetDebugName(resource, name[1]);
  *vb = (ID3D12Resource *)resource;
  return v9;
}

/*
==============
R_AllocGfxBufferMemory
==============
*/
void *R_AllocGfxBufferMemory(unsigned int byteSize, GfxBufferCreationContext *context)
{
  const char *v4; 

  _XMM0 = *context;
  __asm { vpextrq [rsp+38h+var_18], xmm0, 1 }
  return PMem_Alloc(byteSize, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, v4);
}

/*
==============
R_AllocStaticIndexBuffer
==============
*/
unsigned __int64 R_AllocStaticIndexBuffer(ID3D12Resource **ib, int sizeInBytes, GfxBufferCreationContext *context)
{
  __int64 v3; 
  char BaseAlignmentBytes; 
  unsigned __int64 v7; 
  char *v8; 
  unsigned __int64 v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  struct XG_RESOURCE_LAYOUT size; 
  struct XG_BUFFER_DESC v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v3 = sizeInBytes;
  v16.ByteWidth = sizeInBytes;
  v16.Usage = XG_USAGE_IMMUTABLE;
  *(_QWORD *)&v16.ESRAMOffsetBytes = 0i64;
  *(_QWORD *)&v16.BindFlags = 10i64;
  *(_QWORD *)&v16.MiscFlags = 32i64;
  XGComputeBufferLayout(&v16, &size);
  if ( size.BaseAlignmentBytes > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2099, ASSERT_TYPE_ASSERT, "(resourceLayout.BaseAlignmentBytes <= 64)", (const char *)&queryFormat, "resourceLayout.BaseAlignmentBytes <= GFX_INDEX_BUFFER_ALIGNMENT") )
    __debugbreak();
  BaseAlignmentBytes = size.BaseAlignmentBytes;
  if ( (!size.BaseAlignmentBytes || ((size.BaseAlignmentBytes - 1) & size.BaseAlignmentBytes) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((BaseAlignmentBytes - 1) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2100, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast< void * >( 64 ), resourceLayout.BaseAlignmentBytes ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast< void * >( GFX_INDEX_BUFFER_ALIGNMENT ), resourceLayout.BaseAlignmentBytes )") )
    __debugbreak();
  v7 = (unsigned __int64)PMem_Alloc(size.SizeBytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_AllocStaticIndexBuffer");
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2103, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( (v7 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2104, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, GFX_INDEX_BUFFER_ALIGNMENT )") )
    __debugbreak();
  v17 = 1;
  v18 = 0i64;
  v19 = v3;
  v20 = 1;
  v21 = 65537i64;
  v22 = 1i64;
  v23 = 1i64;
  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, (const void *const)v7) )
  {
    _mm_mfence();
    v8 = (char *)(v7 & 0xFFFFFFFFFFFFFFC0ui64);
    v9 = (v3 + (v7 & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
    if ( (v7 & 0xFFFFFFFFFFFFFFC0ui64) < v9 )
    {
      do
      {
        _mm_clflush(v8);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v9 );
    }
    _mm_mfence();
  }
  *(GfxBufferCreationContext *)name = *context;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v7, &v17, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
  }
  PIXSetDebugName(resource, name[1]);
  *ib = (ID3D12Resource *)resource;
  return v7;
}

/*
==============
R_AllocStaticIndexBufferWithData
==============
*/
void R_AllocStaticIndexBufferWithData(ID3D12Resource **ib, int sizeInBytes, const void *data, GfxBufferCreationContext *context)
{
  __int64 v4; 
  char *v8; 
  unsigned __int64 v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v4 = sizeInBytes;
  if ( ((unsigned __int8)data & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2178, ASSERT_TYPE_ASSERT, "(IsAligned( data, 64 ))", (const char *)&queryFormat, "IsAligned( data, GFX_INDEX_BUFFER_ALIGNMENT )") )
    __debugbreak();
  v16 = v4;
  v14 = 1;
  v15 = 0i64;
  v17 = 1;
  v18 = 65537i64;
  v19 = 1i64;
  v20 = 1i64;
  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, data) )
  {
    _mm_mfence();
    v8 = (char *)((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64);
    v9 = (v4 + ((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
    if ( ((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64) < v9 )
    {
      do
      {
        _mm_clflush(v8);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v9 );
    }
    _mm_mfence();
  }
  *(GfxBufferCreationContext *)name = *context;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, const void *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, data, &v14, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
  }
  PIXSetDebugName(resource, name[1]);
  *ib = (ID3D12Resource *)resource;
}

/*
==============
R_AllocStaticVertexBuffer
==============
*/
unsigned __int64 R_AllocStaticVertexBuffer(ID3D12Resource **vb, int sizeInBytes, GfxBufferCreationContext *context)
{
  __int64 v3; 
  char BaseAlignmentBytes; 
  unsigned __int64 v7; 
  char *v8; 
  unsigned __int64 v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  struct XG_RESOURCE_LAYOUT size; 
  struct XG_BUFFER_DESC v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v3 = sizeInBytes;
  v16.ByteWidth = sizeInBytes;
  v16.Usage = XG_USAGE_IMMUTABLE;
  *(_QWORD *)&v16.ESRAMOffsetBytes = 0i64;
  *(_QWORD *)&v16.BindFlags = 9i64;
  *(_QWORD *)&v16.MiscFlags = 32i64;
  XGComputeBufferLayout(&v16, &size);
  if ( size.BaseAlignmentBytes > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2145, ASSERT_TYPE_ASSERT, "(resourceLayout.BaseAlignmentBytes <= 64)", (const char *)&queryFormat, "resourceLayout.BaseAlignmentBytes <= GFX_CODE_VERTEX_BUFFER_ALIGNMENT") )
    __debugbreak();
  BaseAlignmentBytes = size.BaseAlignmentBytes;
  if ( (!size.BaseAlignmentBytes || ((size.BaseAlignmentBytes - 1) & size.BaseAlignmentBytes) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((BaseAlignmentBytes - 1) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2146, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast< void * >( 64 ), resourceLayout.BaseAlignmentBytes ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast< void * >( GFX_CODE_VERTEX_BUFFER_ALIGNMENT ), resourceLayout.BaseAlignmentBytes )") )
    __debugbreak();
  v7 = (unsigned __int64)PMem_Alloc(size.SizeBytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_AllocStaticVertexBuffer");
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2149, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( (v7 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2150, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, GFX_CODE_VERTEX_BUFFER_ALIGNMENT )") )
    __debugbreak();
  v17 = 1;
  v18 = 0i64;
  v19 = v3;
  v20 = 1;
  v21 = 65537i64;
  v22 = 1i64;
  v23 = 1i64;
  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, (const void *const)v7) )
  {
    _mm_mfence();
    v8 = (char *)(v7 & 0xFFFFFFFFFFFFFFC0ui64);
    v9 = (v3 + (v7 & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
    if ( (v7 & 0xFFFFFFFFFFFFFFC0ui64) < v9 )
    {
      do
      {
        _mm_clflush(v8);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v9 );
    }
    _mm_mfence();
  }
  *(GfxBufferCreationContext *)name = *context;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int64, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v7, &v17, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
  }
  PIXSetDebugName(resource, name[1]);
  *vb = (ID3D12Resource *)resource;
  return v7;
}

/*
==============
R_AllocStaticVertexBufferWithData
==============
*/
void R_AllocStaticVertexBufferWithData(ID3D12Resource **vb, int sizeInBytes, const void *data, GfxBufferCreationContext *context)
{
  __int64 v4; 
  char *v8; 
  unsigned __int64 v9; 
  HRESULT v10; 
  const char *v11; 
  ID3D12DeviceChild *resource; 
  char *name[2]; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v4 = sizeInBytes;
  v14 = 1;
  v16 = sizeInBytes;
  v15 = 0i64;
  v17 = 1;
  v18 = 65537i64;
  v19 = 1i64;
  v20 = 1i64;
  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, data) )
  {
    _mm_mfence();
    v8 = (char *)((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64);
    v9 = (v4 + ((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
    if ( ((unsigned __int64)data & 0xFFFFFFFFFFFFFFC0ui64) < v9 )
    {
      do
      {
        _mm_clflush(v8);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v9 );
    }
    _mm_mfence();
  }
  *(GfxBufferCreationContext *)name = *context;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v10 = ((__int64 (__fastcall *)(ID3D12Device *, const void *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, data, &v14, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v10 < 0 )
  {
    v11 = R_ErrorDescription(v10);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v11);
  }
  PIXSetDebugName(resource, name[1]);
  *vb = (ID3D12Resource *)resource;
}

/*
==============
R_BeginWrappedBufferDataWrite
==============
*/
void *R_BeginWrappedBufferDataWrite(const GfxWrappedBuffer *buffer)
{
  return buffer->data;
}

/*
==============
R_CreateConstantBuffer
==============
*/
void R_CreateConstantBuffer(unsigned int bufferSize, unsigned int usage, unsigned int accessFlags, const void *initialData, GfxConstantBuffer *constantBuffer, GfxBufferCreationContext *context)
{
  unsigned __int64 v6; 
  GfxBufferCreationContext v8; 
  ID3D12Resource *v9; 
  _BYTE v10[48]; 
  D3D12_RESOURCE_DESC resourceDesc; 

  *(_QWORD *)&v10[28] = 65537i64;
  v6 = (unsigned __int64)initialData;
  *(_OWORD *)v10 = 1ui64;
  *(_DWORD *)&v10[24] = 1;
  *(_QWORD *)&v10[36] = 1i64;
  *(_DWORD *)&v10[44] = 1;
  *(_QWORD *)&v10[16] = bufferSize;
  *(__m256i *)&resourceDesc.Dimension = *(__m256i *)v10;
  *(_OWORD *)&resourceDesc.Format = *(_OWORD *)&v10[32];
  v8 = *context;
  *(double *)&resourceDesc.Flags = 0.0;
  if ( !initialData )
  {
    v6 = (unsigned __int64)PMem_Alloc(bufferSize, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_CreateBuffer");
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 471, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
      __debugbreak();
    if ( (v6 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 472, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, 64 )") )
      __debugbreak();
  }
  v9 = R_HW_CreatePlacedResource(v6, &resourceDesc, D3D12_RESOURCE_STATE_GENERIC_READ, v8.objectName);
  if ( v6 != ((__int64 (__fastcall *)(ID3D12Resource *))v9->m_pFunction[3].Release)(v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 520, ASSERT_TYPE_ASSERT, "(reinterpret_cast<D3D12_GPU_VIRTUAL_ADDRESS>( bufferData ) == ( buffer )->GetGPUVirtualAddress())", (const char *)&queryFormat, "reinterpret_cast<D3D12_GPU_VIRTUAL_ADDRESS>( bufferData ) == BUFFER_RESOURCE( buffer )->GetGPUVirtualAddress()") )
    __debugbreak();
  constantBuffer->buffer = v9;
  constantBuffer->bufferData = (void *)v6;
  constantBuffer->bufferSize = bufferSize;
}

/*
==============
R_CreateConstantBufferFromWrappedBuffer
==============
*/
void R_CreateConstantBufferFromWrappedBuffer(const GfxWrappedBuffer *inBuffer, int sizeInBytes, GfxConstantBuffer *outBuffer)
{
  outBuffer->bufferSize = sizeInBytes;
  outBuffer->bufferData = inBuffer->data;
  outBuffer->buffer = inBuffer->buffer;
}

/*
==============
R_CreateDynamicBuffers
==============
*/
void R_CreateDynamicBuffers(void)
{
  ID3D12Resource **p_buffer; 
  __int64 v1; 
  ID3D12Resource **v2; 
  ID3D12Resource *v3; 
  ID3D12Resource *v4; 
  _QWORD *v5; 
  ID3D12Resource *v6; 
  ID3D12Resource *v7; 
  unsigned __int16 *v8; 
  GfxWrappedRWBuffer *p_wrappedBuffer; 
  __int64 v10; 
  void *v11; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v13; 
  __int64 v14; 
  GfxWrappedBuffer *bspIndirectArgs; 
  __int64 v16; 
  ID3D12Resource **v17; 
  GfxWrappedRWBuffer *v18; 
  void *v19; 
  ID3D12Resource *v20; 
  ID3D12Resource *v21; 
  ID3D12Resource **v22; 
  ID3D12Resource *v23; 
  ID3D12Resource *v24; 
  GfxBufferCreationContext v25; 
  GfxBufferCreationContext v26; 
  GfxBufferCreationContext v27; 
  GfxBufferCreationContext v28; 
  GfxBufferCreationContext v29; 
  GfxBufferCreationContext v30; 
  GfxBufferCreationContext v31; 
  GfxBufferCreationContext v32; 
  GfxBufferCreationContext v33; 
  GfxBufferCreationContext v34; 
  GfxBufferCreationContext v35; 
  GfxBufferCreationContext v36; 
  GfxBufferCreationContext v37; 
  GfxBufferCreationContext v38; 
  GfxBufferCreationContext v39; 
  GfxBufferCreationContext v40; 
  GfxBufferCreationContext v41; 
  GfxBufferCreationContext v42; 
  GfxBufferCreationContext v43; 
  GfxBufferCreationContext v44; 
  GfxBufferCreationContext v45; 
  GfxBufferCreationContext v46; 
  GfxBufferCreationContext v47; 
  GfxBufferCreationContext v48; 
  GfxBufferCreationContext v49; 

  p_buffer = &gfxBuf.skinnedCacheVbPool[0].buffer;
  v1 = 3i64;
  do
  {
    v2 = p_buffer - 1;
    v30.zoneName = (char *)&queryFormat.fmt + 3;
    v30.objectName = "Skinned Cache VB Pool";
    if ( p_buffer == (ID3D12Resource **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
      __debugbreak();
    *v2 = NULL;
    *p_buffer = NULL;
    v2[2] = NULL;
    v2[3] = NULL;
    v2[4] = NULL;
    v2[5] = NULL;
    v2[6] = NULL;
    v2[7] = NULL;
    v2[8] = NULL;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)p_buffer - 1) = 11796480;
    v32 = v30;
    v3 = (ID3D12Resource *)R_AllocDynamicVertexBuffer(p_buffer, 11796480, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, &v32);
    v4 = *p_buffer;
    p_buffer[4] = v3;
    p_buffer[1] = v4;
    v33 = v30;
    R_CreateComputeRawBufferView(v4, (GfxShaderBufferView *)p_buffer + 1, &v33);
    v34 = v30;
    R_CreateComputeRawBufferRWView(v4, (GfxShaderBufferRWView *)(p_buffer + 5), &v34);
    v25.zoneName = (char *)&queryFormat.fmt + 3;
    v5 = p_buffer + 27;
    v25.objectName = "Subdiv Skinned Cache VB Pool";
    if ( p_buffer == (ID3D12Resource **)-216i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
      __debugbreak();
    *v5 = 0i64;
    p_buffer[28] = NULL;
    p_buffer[29] = NULL;
    p_buffer[30] = NULL;
    p_buffer[31] = NULL;
    p_buffer[32] = NULL;
    p_buffer[33] = NULL;
    p_buffer[34] = NULL;
    p_buffer[35] = NULL;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)p_buffer + 55) = 0x200000;
    v35 = v25;
    v6 = (ID3D12Resource *)R_AllocDynamicVertexBuffer(p_buffer + 28, 0x200000, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, &v35);
    v7 = p_buffer[28];
    p_buffer[32] = v6;
    p_buffer[29] = v7;
    v36 = v25;
    R_CreateComputeRawBufferView(v7, (GfxShaderBufferView *)p_buffer + 15, &v36);
    v37 = v25;
    R_CreateComputeRawBufferRWView(v7, (GfxShaderBufferRWView *)p_buffer + 11, &v37);
    p_buffer += 9;
    --v1;
  }
  while ( v1 );
  v26.zoneName = (char *)&queryFormat.fmt + 3;
  v26.objectName = "Dynamic Vertex Buffer";
  gfxBuf.dynamicVertexBuffer.buffer = NULL;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.buffer = NULL;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.view.resource = NULL;
  *(_QWORD *)&gfxBuf.dynamicVertexBuffer.wrappedBuffer.view.view = 0i64;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.data = NULL;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.rwView.rwResource = NULL;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.rwView.rwCounterResource = NULL;
  *(_QWORD *)&gfxBuf.dynamicVertexBuffer.wrappedBuffer.rwView.rwView = 0i64;
  gfxBuf.dynamicVertexBuffer.used = 0;
  gfxBuf.dynamicVertexBuffer.total = 0x400000;
  v38 = v26;
  gfxBuf.dynamicVertexBuffer.wrappedBuffer.data = R_AllocDynamicVertexBuffer(&gfxBuf.dynamicVertexBuffer.buffer, 0x400000, D3D12_RESOURCE_STATE_GENERIC_READ, &v38);
  memset_0(&gfxBuf.dynamicVertexRingBuffer, 0, sizeof(gfxBuf.dynamicVertexRingBuffer));
  gfxBuf.dynamicVertexRingBuffer.bufSize = gfxBuf.dynamicVertexBuffer.total;
  gfxBuf.dynamicVertexRingBuffer.settings.fencePendingFct = R_HW_IsFencePending;
  gfxBuf.dynamicVertexRingBuffer.name = "Vertex";
  gfxBuf.dynamicVertexRingBuffer.settings.disableFenceOnAcquire = 1;
  v26.objectName = "gfxBuf.dynamicIndexBuffer";
  v26.zoneName = (char *)&queryFormat.fmt + 3;
  v39 = v26;
  gfxBuf.dynamicIndexBuffer.used = 0;
  gfxBuf.dynamicIndexBuffer.total = 196608;
  v8 = (unsigned __int16 *)R_AllocDynamicIndexBuffer(&gfxBuf.dynamicIndexBuffer.buffer, 393216, &v39);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2374, ASSERT_TYPE_SANITY, "( indices != nullptr )", (const char *)&queryFormat, "indices != nullptr") )
    __debugbreak();
  gfxBuf.dynamicIndexBuffer.indices = v8;
  memset_0(&gfxBuf.dynamicIndexRingBuffer, 0, sizeof(gfxBuf.dynamicIndexRingBuffer));
  gfxBuf.dynamicIndexRingBuffer.bufSize = gfxBuf.dynamicIndexBuffer.total;
  gfxBuf.dynamicIndexRingBuffer.settings.fencePendingFct = R_HW_IsFencePending;
  gfxBuf.dynamicIndexRingBuffer.name = "Index";
  p_wrappedBuffer = &gfxBuf.tessFactorsBufferPool[0].wrappedBuffer;
  gfxBuf.dynamicIndexRingBuffer.settings.disableFenceOnAcquire = 1;
  v10 = 2i64;
  do
  {
    v27.objectName = "tessFactorsBufferPool";
    v27.zoneName = (char *)&queryFormat.fmt + 3;
    v11 = PMem_Alloc(0x1E0080ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "tessFactorsBufferPool");
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2721, ASSERT_TYPE_ASSERT, "(initData)", (const char *)&queryFormat, "initData") )
      __debugbreak();
    p_wrappedBuffer->data = v11;
    v40 = v27;
    R_CreateComputeRawBuffer(0x1E0080u, 0x14u, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, NULL, v11, &p_wrappedBuffer->buffer, &v40);
    buffer = p_wrappedBuffer->buffer;
    v41 = v27;
    R_CreateComputeBufferView(buffer, GFX_DATA_FORMAT_R32_UINT, &p_wrappedBuffer->view, &v41);
    v13 = p_wrappedBuffer->buffer;
    v42 = v27;
    R_CreateComputeBufferRWView(v13, GFX_DATA_FORMAT_R32_UINT, &p_wrappedBuffer->rwView, &v42);
    p_wrappedBuffer[-1].rwView.rwSubresourceToTransition = 1966208;
    p_wrappedBuffer[-1].rwView.rwView = 0;
    memset_0(p_wrappedBuffer->data, 0, 0x80ui64);
    p_wrappedBuffer = (GfxWrappedRWBuffer *)((char *)p_wrappedBuffer + 64);
    --v10;
  }
  while ( v10 );
  v14 = 2i64;
  v28.objectName = "bspIndirectArgs";
  bspIndirectArgs = gfxBuf.bspIndirectArgs;
  v16 = 2i64;
  do
  {
    v28.zoneName = R_GetTrackingZoneName();
    v43 = v28;
    bspIndirectArgs->data = R_CreateGfxWrappedBufferBase_Internal(bspIndirectArgs, GfxWrappedBuffer_Raw, 20, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0x202u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "bspIndirectArgs", &v43);
    ++bspIndirectArgs;
    --v16;
  }
  while ( v16 );
  v17 = &gfxBuf.mayhemChannelsVbPool[0].buffer;
  v18 = &gfxBuf.mayhemChannelsBufferPool[0].wrappedBuffer;
  do
  {
    v29.objectName = "mayhemChannelsBufferPool";
    v29.zoneName = (char *)&queryFormat.fmt + 3;
    v19 = PMem_Alloc(0x44000ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "mayhemChannelsBufferPool");
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2761, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
      __debugbreak();
    v18->data = v19;
    v44 = v29;
    R_CreateComputeStructuredBuffer(0x4400u, 0x10u, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v19, &v18->buffer, &v44);
    v20 = v18->buffer;
    v45 = v29;
    R_CreateComputeStructuredBufferView(v20, 0x10u, &v18->view, &v45);
    v21 = v18->buffer;
    v46 = v29;
    R_CreateComputeStructuredBufferRWViewWithFlags(v21, 0x10u, GfxShaderRWViewFlags_None, &v18->rwView, &v46);
    v18[-1].rwView.rwSubresourceToTransition = 278528;
    v31.zoneName = (char *)&queryFormat.fmt + 3;
    v22 = v17 - 1;
    v18[-1].rwView.rwView = 0;
    v31.objectName = "mayhemChannelsVbPool";
    if ( v17 == (ID3D12Resource **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
      __debugbreak();
    *v22 = NULL;
    *v17 = NULL;
    v22[2] = NULL;
    v22[3] = NULL;
    v22[4] = NULL;
    v22[5] = NULL;
    v22[6] = NULL;
    v22[7] = NULL;
    v22[8] = NULL;
    *(_DWORD *)v22 = 0;
    *((_DWORD *)v17 - 1) = 278528;
    v47 = v31;
    v23 = (ID3D12Resource *)R_AllocDynamicVertexBuffer(v17, 278528, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, &v47);
    v24 = *v17;
    v17[4] = v23;
    v17[1] = v24;
    v48 = v31;
    R_CreateComputeRawBufferView(v24, (GfxShaderBufferView *)v17 + 1, &v48);
    v49 = v31;
    R_CreateComputeRawBufferRWView(v24, (GfxShaderBufferRWView *)(v17 + 5), &v49);
    v18 = (GfxWrappedRWBuffer *)((char *)v18 + 64);
    v17 += 9;
    --v14;
  }
  while ( v14 );
  R_BuildSamplerStateTable();
  R_InitBindlessSamplerArray();
  R_GPUSorter_Init();
  R_GP_InitBuffers();
  R_UGB_InitBuffers();
  R_CreateFlareDataBuffers();
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/
void R_CreateGfxWrappedBuffer(GfxWrappedBaseBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  GfxBufferCreationContext v14; 

  if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3128, ASSERT_TYPE_ASSERT, "(!( flags & GfxWrappedBufferFlags::GfxWrappedBufferFlags_SysMemData ))", (const char *)&queryFormat, "!( flags & GfxWrappedBufferFlags::GfxWrappedBufferFlags_SysMemData )") )
    __debugbreak();
  if ( !initialData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3129, ASSERT_TYPE_ASSERT, "(initialData != nullptr)", (const char *)&queryFormat, "initialData != nullptr") )
    __debugbreak();
  v14.zoneName = R_GetTrackingZoneName();
  v14.objectName = debugInfo;
  R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, &v14);
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/
void R_CreateGfxWrappedBuffer(GfxWrappedBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  GfxBufferCreationContext v14; 

  v14.zoneName = R_GetTrackingZoneName();
  v14.objectName = debugInfo;
  buffer->data = R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, &v14);
}

/*
==============
R_CreateGfxWrappedBuffer
==============
*/
void R_CreateGfxWrappedBuffer(GfxWrappedRWBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo)
{
  GfxBufferCreationContext v14; 
  __int32 v15; 
  __int32 v16; 
  ID3D12Resource *v17; 
  ID3D12Resource *v18; 
  ID3D12Resource *v19; 
  GfxBufferCreationContext v20; 

  v20.zoneName = R_GetTrackingZoneName();
  v20.objectName = debugInfo;
  v14 = v20;
  buffer->data = R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, &v20);
  if ( (flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3102, ASSERT_TYPE_ASSERT, "((flags & GfxWrappedBufferFlags_RWBuffer ))", (const char *)&queryFormat, "(flags & GfxWrappedBufferFlags_RWBuffer )") )
    __debugbreak();
  if ( (flags & 0x800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3103, ASSERT_TYPE_ASSERT, "(!(flags & GfxWrappedBufferFlags_AccelerationStructure))", "%s\n\tCreating UAV for acceleration structure makes no sense, DXR only uses raw pointers for write access.", "!(flags & GfxWrappedBufferFlags_AccelerationStructure)") )
    __debugbreak();
  if ( bufferType )
  {
    v15 = bufferType - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3119, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
          __debugbreak();
      }
      else
      {
        v17 = buffer->buffer;
        v20 = v14;
        R_CreateComputeRawBufferRWView(v17, &buffer->rwView, &v20);
      }
    }
    else
    {
      v18 = buffer->buffer;
      v20 = v14;
      R_CreateComputeBufferRWView(v18, format, &buffer->rwView, &v20);
    }
  }
  else
  {
    v19 = buffer->buffer;
    v20 = v14;
    R_CreateComputeStructuredBufferRWViewWithFlags(v19, elemSize, (GfxShaderRWViewFlags)(4 * ((flags & 0x10) != 0)), &buffer->rwView, &v20);
  }
}

/*
==============
R_CreateGfxWrappedBufferBase_Internal
==============
*/
void *R_CreateGfxWrappedBufferBase_Internal(GfxWrappedBaseBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  __int16 v15; 
  bool v17; 
  void *v18; 
  char *v19; 
  unsigned __int64 v20; 
  bool v22; 
  int v23; 
  __int32 v24; 
  __int32 v25; 
  D3D12_RESOURCE_STATES v26; 
  ID3D12Resource *v27; 
  D3D12_RESOURCE_STATES v28; 
  ID3D12Resource *v29; 
  D3D12_RESOURCE_STATES v30; 
  ID3D12Resource *v31; 
  char *fmt; 
  bool v34; 
  __int16 v35; 
  __int16 v36; 
  __int16 v37; 
  __int16 v38; 
  GfxBufferCreationContext v39[4]; 
  bool v40; 
  unsigned __int8 v41; 
  bool v42; 

  v41 = flags & 1;
  v42 = (flags & 2) != 0;
  v15 = flags >> 5;
  v38 = flags >> 7;
  v35 = HIBYTE(flags);
  v36 = flags >> 9;
  v37 = flags >> 10;
  v34 = (flags & 0x800) != 0;
  v40 = (flags & 0x1000) != 0;
  v17 = v41 && (flags & 0x40) != 0;
  R_AssignNullBuffer(&buffer->buffer);
  R_AssignNullShaderBufferView(&buffer->view);
  v18 = (void *)initialData;
  if ( initialData )
  {
    if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, initialData) )
    {
      _mm_mfence();
      v19 = (char *)((unsigned __int64)initialData & 0xFFFFFFFFFFFFFFC0ui64);
      v20 = (numElems * elemSize + ((unsigned __int64)initialData & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
      if ( ((unsigned __int64)initialData & 0xFFFFFFFFFFFFFFC0ui64) < v20 )
      {
        do
        {
          _mm_clflush(v19);
          v19 += 64;
        }
        while ( (unsigned __int64)v19 < v20 );
      }
      _mm_mfence();
    }
  }
  else
  {
    _XMM0 = *context;
    __asm { vpextrq [rsp+0A8h+fmt], xmm0, 1 }
    v18 = PMem_Alloc(numElems * elemSize, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, fmt);
  }
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3021, ASSERT_TYPE_ASSERT, "(initData != nullptr)", (const char *)&queryFormat, "initData != nullptr") )
    __debugbreak();
  v22 = v42;
  v23 = v42 | (4 * v41) | (v34 << 7) | (v40 << 8) | (16 * (v38 & 1)) | ((v37 & 1) << 6) | (32 * (v36 & 1)) | (8 * (v35 & 1)) | (2 * (v15 & 1));
  if ( v34 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3034, ASSERT_TYPE_ASSERT, "(!isAccelerationStructure || (1 &&(((1 &&! 1) && (1 && 1) && (1 &&((!(1 &&! 1) && !(1 &&((0 || (1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1))?1:0)&& 1))?1:0)&& 1) && !0 && !(1 &&! 1))?1:0)&& 1))", "%s\n\tCannot create acceleration structure if DXR is not supported", "!isAccelerationStructure || USING( DXR )") )
      __debugbreak();
    if ( bufferType != GfxWrappedBuffer_Raw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3035, ASSERT_TYPE_ASSERT, "(!isAccelerationStructure || bufferType == GfxWrappedBuffer_Raw)", "%s\n\tAcceleration structure must be created as raw buffer.", "!isAccelerationStructure || bufferType == GfxWrappedBuffer_Raw") )
      __debugbreak();
    v22 = v42;
  }
  if ( v40 )
  {
    if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3036, ASSERT_TYPE_ASSERT, "(!isReadback || !isDynamic)", "%s\n\tD3D12 codepath does not support Dynamic + Readback buffers (see R_CreateComputeBuffer for DX12)", "!isReadback || !isDynamic") )
      __debugbreak();
    if ( v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3037, ASSERT_TYPE_ASSERT, "(!isReadback || !isRWBuffer)", "%s\n\tD3D11 does not support readback UAV buffers", "!isReadback || !isRWBuffer") )
      __debugbreak();
  }
  if ( bufferType )
  {
    v24 = bufferType - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          if ( numElems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3063, ASSERT_TYPE_ASSERT, "(numElems == 1)", (const char *)&queryFormat, "numElems == 1") )
            __debugbreak();
          v39[0] = *context;
          R_CreateComputeConstantBuffer(elemSize, v23, initialState, placement, v18, &buffer->buffer, v39);
        }
      }
      else
      {
        v26 = initialState;
        if ( v17 )
          v26 = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
        v39[0] = *context;
        R_CreateComputeRawBuffer(numElems * elemSize, v23, v26, placement, v18, &buffer->buffer, v39);
        v27 = buffer->buffer;
        v39[0] = *context;
        R_CreateComputeRawBufferView(v27, &buffer->view, v39);
      }
    }
    else
    {
      v28 = initialState;
      if ( v17 )
        v28 = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
      v39[0] = *context;
      R_CreateComputeRawBuffer(numElems * elemSize, v23, v28, placement, v18, &buffer->buffer, v39);
      v29 = buffer->buffer;
      v39[0] = *context;
      R_CreateComputeBufferView(v29, format, &buffer->view, v39);
    }
  }
  else
  {
    v30 = initialState;
    if ( v17 )
      v30 = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
    v39[0] = *context;
    R_CreateComputeStructuredBuffer(numElems, elemSize, v23, v30, placement, v18, &buffer->buffer, v39);
    v31 = buffer->buffer;
    v39[0] = *context;
    R_CreateComputeStructuredBufferView(v31, elemSize, &buffer->view, v39);
  }
  PIXSetDebugName(buffer->buffer, debugInfo);
  return v18;
}

/*
==============
R_CreateGfxWrappedBuffer_Internal
==============
*/
void R_CreateGfxWrappedBuffer_Internal(GfxWrappedBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v11; 

  v11 = *context;
  buffer->data = R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, &v11);
}

/*
==============
R_CreateGfxWrappedRWBuffer_Internal
==============
*/
void R_CreateGfxWrappedRWBuffer_Internal(GfxWrappedRWBuffer *buffer, const GfxWrappedBufferType bufferType, const int elemSize, const unsigned int numElems, const GfxDataFormat format, const unsigned __int16 flags, const D3D12_RESOURCE_STATES initialState, unsigned __int8 *const *placement, const void *initialData, const char *debugInfo, GfxBufferCreationContext *context)
{
  __int32 v14; 
  __int32 v15; 
  ID3D12Resource *v16; 
  ID3D12Resource *v17; 
  ID3D12Resource *v18; 
  GfxBufferCreationContext v19; 

  v19 = *context;
  buffer->data = R_CreateGfxWrappedBufferBase_Internal(buffer, bufferType, elemSize, numElems, format, flags, initialState, placement, initialData, debugInfo, &v19);
  if ( (flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3102, ASSERT_TYPE_ASSERT, "((flags & GfxWrappedBufferFlags_RWBuffer ))", (const char *)&queryFormat, "(flags & GfxWrappedBufferFlags_RWBuffer )") )
    __debugbreak();
  if ( (flags & 0x800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3103, ASSERT_TYPE_ASSERT, "(!(flags & GfxWrappedBufferFlags_AccelerationStructure))", "%s\n\tCreating UAV for acceleration structure makes no sense, DXR only uses raw pointers for write access.", "!(flags & GfxWrappedBufferFlags_AccelerationStructure)") )
    __debugbreak();
  if ( bufferType )
  {
    v14 = bufferType - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3119, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
          __debugbreak();
      }
      else
      {
        v16 = buffer->buffer;
        v19 = *context;
        R_CreateComputeRawBufferRWView(v16, &buffer->rwView, &v19);
      }
    }
    else
    {
      v17 = buffer->buffer;
      v19 = *context;
      R_CreateComputeBufferRWView(v17, format, &buffer->rwView, &v19);
    }
  }
  else
  {
    v18 = buffer->buffer;
    v19 = *context;
    R_CreateComputeStructuredBufferRWViewWithFlags(v18, elemSize, (GfxShaderRWViewFlags)(4 * ((flags & 0x10) != 0)), &buffer->rwView, &v19);
  }
}

/*
==============
R_CreatePlacementBuffer
==============
*/
void R_CreatePlacementBuffer(const D3D12_RESOURCE_DESC *desc, ID3D12Resource **buffer, const void *data, GfxBufferCreationContext *context)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1892, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  *buffer = R_HW_CreatePlacedResource((unsigned __int64)data, desc, D3D12_RESOURCE_STATE_GENERIC_READ, context->objectName);
}

/*
==============
R_CreatePlacementBuffer
==============
*/
void R_CreatePlacementBuffer(const D3D12_RESOURCE_DESC *desc, ID3D12Resource **buffer, const void *data, GfxBufferCreationContext *context, D3D12_RESOURCE_STATES initState)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 1900, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  *buffer = R_HW_CreatePlacedResource((unsigned __int64)data, desc, initState, context->objectName);
}

/*
==============
R_CreateSkinnedCache
==============
*/
void R_CreateSkinnedCache(void)
{
  ID3D12Resource **p_buffer; 
  __int64 v1; 
  ID3D12Resource **v2; 
  ID3D12Resource *v3; 
  ID3D12Resource *v4; 
  _QWORD *v5; 
  ID3D12Resource *v6; 
  ID3D12Resource *v7; 
  GfxBufferCreationContext v8; 
  GfxBufferCreationContext v9; 
  GfxBufferCreationContext v10; 
  GfxBufferCreationContext v11; 
  GfxBufferCreationContext v12; 
  GfxBufferCreationContext v13; 
  GfxBufferCreationContext v14; 
  GfxBufferCreationContext v15; 

  p_buffer = &gfxBuf.skinnedCacheVbPool[0].buffer;
  v1 = 3i64;
  do
  {
    v2 = p_buffer - 1;
    v8.zoneName = (char *)&queryFormat.fmt + 3;
    v8.objectName = "Skinned Cache VB Pool";
    if ( p_buffer == (ID3D12Resource **)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
      __debugbreak();
    *v2 = NULL;
    *p_buffer = NULL;
    v2[2] = NULL;
    v2[3] = NULL;
    v2[4] = NULL;
    v2[5] = NULL;
    v2[6] = NULL;
    v2[7] = NULL;
    v2[8] = NULL;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)p_buffer - 1) = 11796480;
    v10 = v8;
    v3 = (ID3D12Resource *)R_AllocDynamicVertexBuffer(p_buffer, 11796480, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, &v10);
    v4 = *p_buffer;
    p_buffer[4] = v3;
    p_buffer[1] = v4;
    v11 = v8;
    R_CreateComputeRawBufferView(v4, (GfxShaderBufferView *)p_buffer + 1, &v11);
    v12 = v8;
    R_CreateComputeRawBufferRWView(v4, (GfxShaderBufferRWView *)(p_buffer + 5), &v12);
    v9.zoneName = (char *)&queryFormat.fmt + 3;
    v5 = p_buffer + 27;
    v9.objectName = "Subdiv Skinned Cache VB Pool";
    if ( p_buffer == (ID3D12Resource **)-216i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
      __debugbreak();
    *v5 = 0i64;
    p_buffer[28] = NULL;
    p_buffer[29] = NULL;
    p_buffer[30] = NULL;
    p_buffer[31] = NULL;
    p_buffer[32] = NULL;
    p_buffer[33] = NULL;
    p_buffer[34] = NULL;
    p_buffer[35] = NULL;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)p_buffer + 55) = 0x200000;
    v13 = v9;
    v6 = (ID3D12Resource *)R_AllocDynamicVertexBuffer(p_buffer + 28, 0x200000, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, &v13);
    v7 = p_buffer[28];
    p_buffer[32] = v6;
    p_buffer[29] = v7;
    v14 = v9;
    R_CreateComputeRawBufferView(v7, (GfxShaderBufferView *)p_buffer + 15, &v14);
    v15 = v9;
    R_CreateComputeRawBufferRWView(v7, (GfxShaderBufferRWView *)p_buffer + 11, &v15);
    p_buffer += 9;
    --v1;
  }
  while ( v1 );
}

/*
==============
R_DX12_CreateBuffer
==============
*/
unsigned __int64 R_DX12_CreateBuffer(const D3D12_RESOURCE_DESC *desc, D3D12_HEAP_TYPE __formal, D3D12_RESOURCE_STATES resourceState, unsigned __int8 *const *a4, const void *pInitialData, unsigned int initDataSize, ID3D12Resource **outBuffer, GfxBufferCreationContext *context)
{
  unsigned __int64 v10; 

  if ( !desc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 458, ASSERT_TYPE_ASSERT, "(desc)", (const char *)&queryFormat, "desc") )
    __debugbreak();
  v10 = (unsigned __int64)pInitialData;
  if ( !pInitialData )
  {
    v10 = (unsigned __int64)PMem_Alloc(initDataSize, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_CreateBuffer");
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 471, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
      __debugbreak();
    if ( (v10 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 472, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, 64 )") )
      __debugbreak();
  }
  *outBuffer = R_HW_CreatePlacedResource(v10, desc, resourceState, context->objectName);
  return v10;
}

/*
==============
R_DX12_GetAllocSizeFromDesc
==============
*/
unsigned __int64 R_DX12_GetAllocSizeFromDesc(D3D12_RESOURCE_DESC *desc)
{
  char v2[24]; 

  return *(_QWORD *)((__int64 (__fastcall *)(char *, ID3D12Device *, _QWORD, __int64, D3D12_RESOURCE_DESC *))g_dx.d3d12device->m_pFunction[8].AddRef)(v2, g_dx.d3d12device, 0i64, 1i64, desc);
}

/*
==============
R_DX12_GetResourceSize
==============
*/
__int64 R_DX12_GetResourceSize(ID3D12Resource *resource)
{
  __int64 v2; 
  char v3[28]; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 

  ((void (__fastcall *)(ID3D12Resource *, char *))resource->m_pFunction[3].AddRef)(resource, v3);
  ((void (__fastcall *)(ID3D12Device *, char *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, v3, 0i64, v4 * (unsigned int)v5, 0i64, 0i64, 0i64, 0i64, &v2);
  return v2;
}

/*
==============
R_DestroyBuffer
==============
*/
void R_DestroyBuffer(ID3D12Resource **buffer)
{
  ID3D12Resource *v1; 
  unsigned int v2; 

  v1 = *buffer;
  *buffer = NULL;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v2 = v1->m_pFunction->Release(v1);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 567, "BUFFER_RESOURCE( *buffer )", v2) )
    __debugbreak();
}

/*
==============
R_DestroyConstantBuffer
==============
*/
void R_DestroyConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ID3D12Resource *buffer; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  buffer = constantBuffer->buffer;
  if ( buffer )
  {
    constantBuffer->buffer = NULL;
    v2 = buffer->m_pFunction->Release(buffer);
    if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v2 )
    {
      v4 = v2;
      v3 = 567;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", v3, "BUFFER_RESOURCE( *buffer )", v4) )
        __debugbreak();
    }
  }
}

/*
==============
R_DestroyDynamicComputeBufferState
==============
*/
void R_DestroyDynamicComputeBufferState(GfxComputeBufferState *cb)
{
  ;
}

/*
==============
R_EndWrappedBufferDataWrite
==============
*/
void R_EndWrappedBufferDataWrite(const GfxWrappedBuffer *buffer)
{
  ;
}

/*
==============
R_FlushCPUCache
==============
*/
void R_FlushCPUCache(const void *bufferData, unsigned __int64 byteWidth)
{
  char *v4; 
  unsigned __int64 i; 

  if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, bufferData) )
  {
    _mm_mfence();
    v4 = (char *)((unsigned __int64)bufferData & 0xFFFFFFFFFFFFFFC0ui64);
    for ( i = (unsigned __int64)&v4[byteWidth + 63] & 0xFFFFFFFFFFFFFFC0ui64; (unsigned __int64)v4 < i; v4 += 64 )
      _mm_clflush(v4);
    _mm_mfence();
  }
}

/*
==============
R_FreeStaticIndexBuffer
==============
*/
void R_FreeStaticIndexBuffer(ID3D12Resource *ib)
{
  unsigned int v2; 

  if ( !ib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v2 = ib->m_pFunction->Release(ib);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2227, "ib", v2) )
    __debugbreak();
}

/*
==============
R_FreeStaticVertexBuffer
==============
*/
void R_FreeStaticVertexBuffer(ID3D12Resource *vb)
{
  unsigned int v2; 

  if ( !vb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v2 = vb->m_pFunction->Release(vb);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2234, "vb", v2) )
    __debugbreak();
}

/*
==============
R_GetNullGfxWrappedBaseBuffer
==============
*/
GfxWrappedBaseBuffer *R_GetNullGfxWrappedBaseBuffer(GfxWrappedBaseBuffer *result)
{
  R_AssignNullBuffer(&result->buffer);
  R_AssignNullShaderBufferView(&result->view);
  return result;
}

/*
==============
R_GetNullGfxWrappedBuffer
==============
*/
GfxWrappedBuffer *R_GetNullGfxWrappedBuffer(GfxWrappedBuffer *result)
{
  double v2; 
  ID3D12Resource *outBuffer[2]; 
  double v5; 

  R_AssignNullBuffer(outBuffer);
  R_AssignNullShaderBufferView((GfxShaderBufferView *)&outBuffer[1]);
  v2 = v5;
  *(_OWORD *)&result->buffer = *(_OWORD *)outBuffer;
  *(double *)&result->view.view = v2;
  result->data = NULL;
  return result;
}

/*
==============
R_GetNullGfxWrappedRWBuffer
==============
*/
GfxWrappedRWBuffer *R_GetNullGfxWrappedRWBuffer(GfxWrappedRWBuffer *result)
{
  ID3D12Resource *outBuffer[2]; 
  double v4; 
  GfxWrappedBuffer v5; 

  R_AssignNullBuffer(outBuffer);
  R_AssignNullShaderBufferView((GfxShaderBufferView *)&outBuffer[1]);
  *(_OWORD *)&v5.buffer = *(_OWORD *)outBuffer;
  *(double *)&v5.view.view = v4;
  v5.data = NULL;
  result->GfxWrappedBuffer = v5;
  R_AssignNullShaderBufferRWView(&result->rwView);
  return result;
}

/*
==============
R_GetSkinnedCacheVideoMemorySize
==============
*/
unsigned __int64 R_GetSkinnedCacheVideoMemorySize()
{
  return 41680896i64;
}

/*
==============
R_InitComputeBufferState
==============
*/
void R_InitComputeBufferState(GfxComputeBufferState *cb, unsigned int bytes, GfxBufferCreationContext *context)
{
  void *v7; 
  GfxBufferCreationContext v8; 
  ID3D12Resource *buffer; 
  char *fmt; 
  GfxBufferCreationContext v11; 
  GfxBufferCreationContext v12; 

  _XMM0 = *context;
  __asm { vpextrq [rsp+68h+fmt], xmm0, 1 }
  v7 = PMem_Alloc(bytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, fmt);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2737, ASSERT_TYPE_ASSERT, "(initData)", (const char *)&queryFormat, "initData") )
    __debugbreak();
  v8 = *context;
  cb->wrappedBuffer.data = v7;
  v11 = v8;
  R_CreateComputeRawBuffer(bytes, 0x10u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v7, &cb->wrappedBuffer.buffer, &v11);
  buffer = cb->wrappedBuffer.buffer;
  v12 = *context;
  R_CreateComputeBufferView(buffer, GFX_DATA_FORMAT_R32_UINT, &cb->wrappedBuffer.view, &v12);
  cb->total = bytes;
  cb->used = 0;
}

/*
==============
R_InitComputeStructuredBufferState
==============
*/
void R_InitComputeStructuredBufferState(GfxComputeBufferState *cb, unsigned int stride, unsigned int count, GfxBufferCreationContext *context)
{
  void *v9; 
  GfxBufferCreationContext v10; 
  ID3D12Resource *buffer; 
  char *fmt; 
  GfxBufferCreationContext v13; 
  GfxBufferCreationContext v14; 

  if ( (stride & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2779, ASSERT_TYPE_ASSERT, "((stride % sizeof( uint ) ) == 0)", (const char *)&queryFormat, "(stride % sizeof( uint ) ) == 0") )
    __debugbreak();
  _XMM0 = *context;
  __asm { vpextrq [rsp+78h+fmt], xmm0, 1 }
  v9 = PMem_Alloc(count * stride, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, fmt);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2785, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  v10 = *context;
  cb->wrappedBuffer.data = v9;
  v13 = v10;
  R_CreateComputeStructuredBuffer(count, stride, 0, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v9, &cb->wrappedBuffer.buffer, &v13);
  buffer = cb->wrappedBuffer.buffer;
  v14 = *context;
  R_CreateComputeStructuredBufferView(buffer, stride, &cb->wrappedBuffer.view, &v14);
  cb->total = count * stride;
  cb->used = 0;
}

/*
==============
R_InitDynamicComputeBufferState
==============
*/
void R_InitDynamicComputeBufferState(GfxComputeBufferState *cb, unsigned int bytes, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  void *v9; 
  GfxBufferCreationContext v10; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v12; 
  char *fmt; 
  GfxBufferCreationContext v14; 
  GfxBufferCreationContext v15; 
  GfxBufferCreationContext v16; 

  _XMM0 = *context;
  __asm { vpextrq [rsp+88h+fmt], xmm0, 1 }
  v9 = PMem_Alloc(bytes, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, fmt);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2721, ASSERT_TYPE_ASSERT, "(initData)", (const char *)&queryFormat, "initData") )
    __debugbreak();
  v10 = *context;
  cb->wrappedBuffer.data = v9;
  v14 = v10;
  R_CreateComputeRawBuffer(bytes, 0x14u, initState, NULL, v9, &cb->wrappedBuffer.buffer, &v14);
  buffer = cb->wrappedBuffer.buffer;
  v15 = *context;
  R_CreateComputeBufferView(buffer, GFX_DATA_FORMAT_R32_UINT, &cb->wrappedBuffer.view, &v15);
  v12 = cb->wrappedBuffer.buffer;
  v16 = *context;
  R_CreateComputeBufferRWView(v12, GFX_DATA_FORMAT_R32_UINT, &cb->wrappedBuffer.rwView, &v16);
  cb->total = bytes;
  cb->used = 0;
}

/*
==============
R_InitDynamicComputeStructuredBufferState
==============
*/
void R_InitDynamicComputeStructuredBufferState(GfxComputeBufferState *cb, unsigned int stride, unsigned int count, GfxBufferCreationContext *context)
{
  void *v9; 
  GfxBufferCreationContext v10; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v12; 
  char *fmt; 
  GfxBufferCreationContext v14; 
  GfxBufferCreationContext v15; 
  GfxBufferCreationContext v16; 

  if ( (stride & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2755, ASSERT_TYPE_ASSERT, "(( stride % sizeof( uint ) ) == 0)", (const char *)&queryFormat, "( stride % sizeof( uint ) ) == 0") )
    __debugbreak();
  _XMM0 = *context;
  __asm { vpextrq [rsp+88h+fmt], xmm0, 1 }
  v9 = PMem_Alloc(count * stride, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, fmt);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2761, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  v10 = *context;
  cb->wrappedBuffer.data = v9;
  v14 = v10;
  R_CreateComputeStructuredBuffer(count, stride, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v9, &cb->wrappedBuffer.buffer, &v14);
  buffer = cb->wrappedBuffer.buffer;
  v15 = *context;
  R_CreateComputeStructuredBufferView(buffer, stride, &cb->wrappedBuffer.view, &v15);
  v12 = cb->wrappedBuffer.buffer;
  v16 = *context;
  R_CreateComputeStructuredBufferRWViewWithFlags(v12, stride, GfxShaderRWViewFlags_None, &cb->wrappedBuffer.rwView, &v16);
  cb->total = count * stride;
  cb->used = 0;
}

/*
==============
R_InitDynamicIndexBufferState
==============
*/
void R_InitDynamicIndexBufferState(GfxIndexBufferState *ib, int indexCount, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v6; 
  unsigned __int16 *v7; 
  GfxBufferCreationContext v8; 

  if ( !ib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2363, ASSERT_TYPE_ASSERT, "(ib)", (const char *)&queryFormat, "ib") )
    __debugbreak();
  v6 = *context;
  ib->used = 0;
  ib->total = indexCount;
  v8 = v6;
  v7 = (unsigned __int16 *)R_AllocDynamicIndexBuffer(&ib->buffer, 2 * indexCount, &v8);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2374, ASSERT_TYPE_SANITY, "( indices != nullptr )", (const char *)&queryFormat, "indices != nullptr") )
    __debugbreak();
  ib->indices = v7;
}

/*
==============
R_InitDynamicIndices
==============
*/
void R_InitDynamicIndices(GfxDynamicIndices *ib, int indexCount)
{
  unsigned __int16 *v4; 
  GfxBufferCreationContext v5; 

  if ( !ib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2386, ASSERT_TYPE_ASSERT, "(ib)", (const char *)&queryFormat, "ib") )
    __debugbreak();
  ib->used = 0;
  v5.zoneName = (char *)&queryFormat.fmt + 3;
  ib->total = indexCount;
  v5.objectName = "Dynamic Index Buffer";
  v4 = (unsigned __int16 *)R_AllocDynamicIndexBuffer(&ib->buffer, 2 * indexCount, &v5);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2400, ASSERT_TYPE_SANITY, "( indices != nullptr )", (const char *)&queryFormat, "indices != nullptr") )
    __debugbreak();
  ib->indices = v4;
}

/*
==============
R_InitDynamicVertexBufferState
==============
*/
void R_InitDynamicVertexBufferState(GfxVertexBufferState *vb, int bytes, bool compute, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v4; 

  v4 = *context;
  R_InitDynamicVertexBufferState(vb, bytes, compute, D3D12_RESOURCE_STATE_GENERIC_READ, &v4);
}

/*
==============
R_InitDynamicVertexBufferState
==============
*/
void R_InitDynamicVertexBufferState(GfxVertexBufferState *vb, int bytes, bool compute, D3D12_RESOURCE_STATES initState, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v9; 
  ID3D12Resource *buffer; 
  GfxBufferCreationContext v11; 
  GfxBufferCreationContext v12; 
  GfxBufferCreationContext v13; 
  GfxBufferCreationContext v14; 

  if ( !vb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 2310, ASSERT_TYPE_ASSERT, "(vb)", (const char *)&queryFormat, "vb") )
    __debugbreak();
  *(_QWORD *)&vb->used = 0i64;
  vb->buffer = NULL;
  v9 = *context;
  vb->wrappedBuffer.buffer = NULL;
  vb->wrappedBuffer.view.resource = NULL;
  *(_QWORD *)&vb->wrappedBuffer.view.view = 0i64;
  vb->wrappedBuffer.data = NULL;
  vb->wrappedBuffer.rwView.rwResource = NULL;
  vb->wrappedBuffer.rwView.rwCounterResource = NULL;
  *(_QWORD *)&vb->wrappedBuffer.rwView.rwView = 0i64;
  vb->used = 0;
  vb->total = bytes;
  v12 = v9;
  vb->wrappedBuffer.data = R_AllocDynamicVertexBuffer(&vb->buffer, bytes, initState, &v12);
  if ( compute )
  {
    buffer = vb->buffer;
    v11 = *context;
    vb->wrappedBuffer.buffer = buffer;
    v13 = v11;
    R_CreateComputeRawBufferView(buffer, &vb->wrappedBuffer.view, &v13);
    v14 = *context;
    R_CreateComputeRawBufferRWView(buffer, &vb->wrappedBuffer.rwView, &v14);
  }
}

/*
==============
R_ReadbackGfxWrappedBuffer
==============
*/
void R_ReadbackGfxWrappedBuffer(const GfxWrappedBuffer *buffer, void *data, const unsigned int dataSize)
{
  size_t v4; 
  void *v6; 

  v4 = dataSize;
  if ( !buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3201, ASSERT_TYPE_ASSERT, "(buffer->data)", (const char *)&queryFormat, "buffer->data") )
    __debugbreak();
  v6 = buffer->data;
  if ( v6 )
    memcpy_0(data, v6, v4);
}

/*
==============
R_ReleaseConstantBuffer
==============
*/
void R_ReleaseConstantBuffer(GfxConstantBuffer *constantBuffer)
{
  ID3D12Resource *buffer; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  buffer = constantBuffer->buffer;
  if ( buffer )
  {
    constantBuffer->buffer = NULL;
    v2 = buffer->m_pFunction->Release(buffer);
    if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v2 )
    {
      v4 = v2;
      v3 = 567;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", v3, "BUFFER_RESOURCE( *buffer )", v4) )
        __debugbreak();
    }
  }
}

/*
==============
R_ReleasePlacementBuffer
==============
*/
void R_ReleasePlacementBuffer(ID3D12Resource **buffer)
{
  ID3D12Resource *v1; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 

  v1 = *buffer;
  if ( *buffer )
  {
    *buffer = NULL;
    v3 = v1->m_pFunction->Release(v1);
    if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
    {
      if ( v3 )
      {
        v5 = v3;
        v4 = 1912;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", v4, "BUFFER_RESOURCE( *buffer )", v5) )
          __debugbreak();
      }
    }
  }
  R_AssignNullBuffer(buffer);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/
void R_ShutdownGfxWrappedBuffer(GfxWrappedBaseBuffer *buffer)
{
  R_DestroyComputeBuffer(&buffer->buffer);
  if ( buffer->view.view >= 2 )
    R_ReleaseShaderBufferView(&buffer->view);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/
void R_ShutdownGfxWrappedBuffer(GfxWrappedBuffer *buffer)
{
  R_DestroyComputeBuffer(&buffer->buffer);
  if ( buffer->view.view >= 2 )
    R_ReleaseShaderBufferView(&buffer->view);
}

/*
==============
R_ShutdownGfxWrappedBuffer
==============
*/
void R_ShutdownGfxWrappedBuffer(GfxWrappedRWBuffer *buffer)
{
  unsigned int rwView; 

  R_DestroyComputeBuffer(&buffer->buffer);
  if ( buffer->view.view >= 2 )
    R_ReleaseShaderBufferView(&buffer->view);
  rwView = buffer->rwView.rwView;
  if ( rwView != 3 )
  {
    if ( rwView )
      R_ReleaseShaderBufferRWView(&buffer->rwView);
  }
}

/*
==============
R_UpdateGfxWrappedBuffer
==============
*/
void R_UpdateGfxWrappedBuffer(const GfxWrappedBuffer *buffer, const void *data, const unsigned int dataSize)
{
  void *v3; 
  size_t v4; 

  v3 = buffer->data;
  v4 = dataSize;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3191, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( v3 == data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_buffers.cpp", 3192, ASSERT_TYPE_ASSERT, "(bufferData != data)", (const char *)&queryFormat, "bufferData != data") )
    __debugbreak();
  if ( v3 )
    memcpy_0(v3, data, v4);
}

