/*
==============
R_RT_Handle::ClearAuxDirty
==============
*/

void __fastcall R_RT_Handle::ClearAuxDirty(R_RT_Handle *this)
{
  ?ClearAuxDirty@R_RT_Handle@@QEBAXXZ(this);
}

/*
==============
R_RT_DestroyHeap
==============
*/

void __fastcall R_RT_DestroyHeap(R_RT_HeapHandle handle)
{
  ?R_RT_DestroyHeap@@YAXVR_RT_HeapHandle@@@Z(handle);
}

/*
==============
R_RT_GetBufferSizeAlign
==============
*/

void __fastcall R_RT_GetBufferSizeAlign(unsigned int elemSize, unsigned int numElems, R_RT_Flags rtFlags, bool *inOutTiledAlloc, unsigned int *outSize, unsigned int *outAlign)
{
  ?R_RT_GetBufferSizeAlign@@YAXIIW4R_RT_Flags@@PEA_NPEAI2@Z(elemSize, numElems, rtFlags, inOutTiledAlloc, outSize, outAlign);
}

/*
==============
R_RT_Group::AssertEmpty
==============
*/

void __fastcall R_RT_Group::AssertEmpty(R_RT_Group *this)
{
  ?AssertEmpty@R_RT_Group@@QEBAXXZ(this);
}

/*
==============
R_RT_GetImageSizeAlign
==============
*/

void __fastcall R_RT_GetImageSizeAlign(unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxPixelFormat format, unsigned int multisample, R_RT_Flags rtFlags, bool *inOutTiledAlloc, unsigned int *outSize, unsigned int *outAlign)
{
  ?R_RT_GetImageSizeAlign@@YAXIIIIIW4GfxPixelFormat@@IW4R_RT_Flags@@PEA_NPEAI3@Z(width, height, depth, arraySliceCount, mipLimit, format, multisample, rtFlags, inOutTiledAlloc, outSize, outAlign);
}

/*
==============
R_RT_Handle::SetAuxDirty
==============
*/

void __fastcall R_RT_Handle::SetAuxDirty(R_RT_Handle *this)
{
  ?SetAuxDirty@R_RT_Handle@@QEAAXXZ(this);
}

/*
==============
R_RT_BackendFrameEnd
==============
*/

void __fastcall R_RT_BackendFrameEnd(unsigned __int16 frontendFramePass, bool aborted)
{
  ?R_RT_BackendFrameEnd@@YAXG_N@Z(frontendFramePass, aborted);
}

/*
==============
R_RT_GetHeapPlacement
==============
*/

R_RT_Placement *__fastcall R_RT_GetHeapPlacement(R_RT_Placement *result, R_RT_HeapHandle heap, unsigned int heapOffset)
{
  return ?R_RT_GetHeapPlacement@@YA?AUR_RT_Placement@@VR_RT_HeapHandle@@I@Z(result, heap, heapOffset);
}

/*
==============
R_RT_Manager_Startup
==============
*/

void R_RT_Manager_Startup(void)
{
  ?R_RT_Manager_Startup@@YAXXZ();
}

/*
==============
R_RT_CreateInternal
==============
*/

R_RT_Handle *__fastcall R_RT_CreateInternal(R_RT_Handle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxPixelFormat format, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const R_RT_DisplayContext *optionalDisplayContext, const char *location)
{
  return ?R_RT_CreateInternal@@YA?AVR_RT_Handle@@IIIIIIIW4GfxPixelFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@AEBTvec4_t@@W4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@PEBUR_RT_DisplayContext@@5@Z(result, width, height, allocWidth, allocHeight, depth, arraySliceCount, mipLimit, format, rtFlags, rtFlagsInternal, clearColor, initialState, name, frontendPass, placement, tiledPlacement, optionalDisplayContext, location);
}

/*
==============
R_RT_AddViewInternal
==============
*/

R_RT_Handle *__fastcall R_RT_AddViewInternal(R_RT_Handle *result, R_RT_Handle *baseRt, int optionalArraySliceIndex, int optionalMipLevel, const char *name, unsigned __int16 frontendPass, const char *location)
{
  return ?R_RT_AddViewInternal@@YA?AVR_RT_Handle@@V1@HHPEBDG1@Z(result, baseRt, optionalArraySliceIndex, optionalMipLevel, name, frontendPass, location);
}

/*
==============
RB_CreateRenderTargetAlias
==============
*/

R_RT_ColorHandle *__fastcall RB_CreateRenderTargetAlias(R_RT_ColorHandle *result, const R_RT_ColorHandle *srcRT, GfxRenderTargetFormat fmt, const char *name)
{
  return ?RB_CreateRenderTargetAlias@@YA?AVR_RT_ColorHandle@@V1@W4GfxRenderTargetFormat@@PEBD@Z(result, srcRT, fmt, name);
}

/*
==============
R_RT_AddViewsInternal
==============
*/

void __fastcall R_RT_AddViewsInternal(R_RT_Handle *baseRt, unsigned int arraySliceCount, unsigned int mipCount, const char *name, unsigned __int16 frontendPass, const char *location)
{
  ?R_RT_AddViewsInternal@@YAXVR_RT_Handle@@IIPEBDG1@Z(baseRt, arraySliceCount, mipCount, name, frontendPass, location);
}

/*
==============
R_RT_HeapHandle::GetAddress
==============
*/

unsigned __int8 *__fastcall R_RT_HeapHandle::GetAddress(R_RT_HeapHandle *this, unsigned int offset)
{
  return ?GetAddress@R_RT_HeapHandle@@QEBAPEAEI@Z(this, offset);
}

/*
==============
R_RT_DestroyInternal
==============
*/

void __fastcall R_RT_DestroyInternal(R_RT_Handle *rt)
{
  ?R_RT_DestroyInternal@@YAXVR_RT_Handle@@@Z(rt);
}

/*
==============
R_RT_GetCommitSizeMax
==============
*/

__int64 __fastcall R_RT_GetCommitSizeMax()
{
  return ?R_RT_GetCommitSizeMax@@YA_JXZ();
}

/*
==============
R_RT_ConstructUnionHandle
==============
*/

R_RT_Handle *__fastcall R_RT_ConstructUnionHandle(R_RT_Handle *result, unsigned __int16 surfaceID)
{
  return ?R_RT_ConstructUnionHandle@@YA?AVR_RT_Handle@@G@Z(result, surfaceID);
}

/*
==============
R_RT_HeapHandle::GetSize
==============
*/

unsigned int __fastcall R_RT_HeapHandle::GetSize(R_RT_HeapHandle *this)
{
  return ?GetSize@R_RT_HeapHandle@@QEBAIXZ(this);
}

/*
==============
R_RT_GetHeapIndex
==============
*/

unsigned __int16 __fastcall R_RT_GetHeapIndex(R_RT_Heap *heap)
{
  return ?R_RT_GetHeapIndex@@YAGPEAUR_RT_Heap@@@Z(heap);
}

/*
==============
R_RT_CreateHeapInternal
==============
*/

R_RT_HeapHandle __fastcall R_RT_CreateHeapInternal(unsigned int size, R_RT_HeapFlags flags, const char *name, const char *location)
{
  return ?R_RT_CreateHeapInternal@@YA?AVR_RT_HeapHandle@@IW4R_RT_HeapFlags@@PEBD1@Z(size, flags, name, location);
}

/*
==============
R_RT_CreateArrayInternal
==============
*/

R_RT_ArrayHandle *__fastcall R_RT_CreateArrayInternal(R_RT_ArrayHandle *result, R_RT_Handle *handles, unsigned int numHandles, R_RT_Lifetime lifetime, const char *name, const char *location)
{
  return ?R_RT_CreateArrayInternal@@YA?AVR_RT_ArrayHandle@@PEAVR_RT_Handle@@IW4R_RT_Lifetime@@PEBD2@Z(result, handles, numHandles, lifetime, name, location);
}

/*
==============
R_RT_GetCommitSize
==============
*/

__int64 __fastcall R_RT_GetCommitSize()
{
  return ?R_RT_GetCommitSize@@YA_JXZ();
}

/*
==============
R_RT_CreateBufferInternal
==============
*/

R_RT_BufferHandle *__fastcall R_RT_CreateBufferInternal(R_RT_BufferHandle *result, unsigned int elemSize, unsigned int numElems, GfxDataFormat format, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  return ?R_RT_CreateBufferInternal@@YA?AVR_RT_BufferHandle@@IIW4GfxDataFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@W4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@4@Z(result, elemSize, numElems, format, rtFlags, rtFlagsInternal, initialState, name, frontendPass, placement, tiledPlacement, location);
}

/*
==============
R_RT_BackendPassBegin
==============
*/

void __fastcall R_RT_BackendPassBegin(unsigned __int16 pass)
{
  ?R_RT_BackendPassBegin@@YAXG@Z(pass);
}

/*
==============
R_RT_Handle::DebugGetLastKnownName
==============
*/

const char *__fastcall R_RT_Handle::DebugGetLastKnownName(R_RT_Handle *this)
{
  return ?DebugGetLastKnownName@R_RT_Handle@@QEBAPEBDXZ(this);
}

/*
==============
R_RT_Group::GetValidRt
==============
*/

R_RT_Handle *__fastcall R_RT_Group::GetValidRt(R_RT_Group *this, R_RT_Handle *result)
{
  return ?GetValidRt@R_RT_Group@@QEBA?AVR_RT_Handle@@XZ(this, result);
}

/*
==============
R_RT_Handle::DebugGetSurface
==============
*/

const R_RT_Surface *__fastcall R_RT_Handle::DebugGetSurface(R_RT_Handle *this)
{
  return ?DebugGetSurface@R_RT_Handle@@QEBAPEBUR_RT_Surface@@XZ(this);
}

/*
==============
R_RT_BackendPassEnd
==============
*/

void __fastcall R_RT_BackendPassEnd(unsigned __int16 pass)
{
  ?R_RT_BackendPassEnd@@YAXG@Z(pass);
}

/*
==============
R_RT_BackendFrameBegin
==============
*/

void R_RT_BackendFrameBegin(void)
{
  ?R_RT_BackendFrameBegin@@YAXXZ();
}

/*
==============
R_RT_ResetCommitSizeMax
==============
*/

void R_RT_ResetCommitSizeMax(void)
{
  ?R_RT_ResetCommitSizeMax@@YAXXZ();
}

/*
==============
R_RT_GetViewInternal
==============
*/

R_RT_Handle *__fastcall R_RT_GetViewInternal(R_RT_Handle *result, R_RT_Handle *baseRt, int optionalArraySliceIndex, int optionalMipLevel)
{
  return ?R_RT_GetViewInternal@@YA?AVR_RT_Handle@@V1@HH@Z(result, baseRt, optionalArraySliceIndex, optionalMipLevel);
}

/*
==============
R_RT_Manager_Shutdown
==============
*/

void R_RT_Manager_Shutdown(void)
{
  ?R_RT_Manager_Shutdown@@YAXXZ();
}

/*
==============
R_RT_Group::AssertEmpty
==============
*/
void R_RT_Group::AssertEmpty(R_RT_Group *this)
{
  unsigned __int8 m_colorRtCount; 
  const char *v3; 
  const char *name; 
  const char *v5; 
  const char *v6; 
  const char *v7; 

  if ( this->m_colorRtCount || R_RT_Handle::IsValid(&this->m_depthRt) )
  {
    m_colorRtCount = this->m_colorRtCount;
    v3 = "<none>";
    if ( this->m_colorRtCount )
      name = R_RT_Handle::GetSurface(this->m_colorRts)->m_image.m_base.name;
    else
      name = "<none>";
    if ( m_colorRtCount <= 1u )
      v5 = "<none>";
    else
      v5 = R_RT_Handle::GetSurface(&this->m_colorRts[1])->m_image.m_base.name;
    if ( m_colorRtCount <= 2u )
      v6 = "<none>";
    else
      v6 = R_RT_Handle::GetSurface(&this->m_colorRts[2])->m_image.m_base.name;
    if ( m_colorRtCount <= 3u )
      v7 = "<none>";
    else
      v7 = R_RT_Handle::GetSurface(&this->m_colorRts[3])->m_image.m_base.name;
    if ( R_RT_Handle::IsValid(&this->m_depthRt) )
      v3 = R_RT_Handle::GetSurface(&this->m_depthRt)->m_image.m_base.name;
    if ( (this->m_colorRtCount || R_RT_Handle::IsValid(&this->m_depthRt)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 359, ASSERT_TYPE_ASSERT, "(this->IsEmpty())", "%s\n\tcolor0=%s, color1=%s, color2=%s, color3=%s, depth=%s", "this->IsEmpty()", name, v5, v6, v7, v3) )
      __debugbreak();
  }
}

/*
==============
R_RT_Handle::ClearAuxDirty
==============
*/
void R_RT_Handle::ClearAuxDirty(R_RT_Handle *this)
{
  R_RT_Surface *v1; 
  R_RT_FlagsInternal m_rtFlagsInternal; 

  v1 = R_RT_Handle::ModifySurface(this);
  m_rtFlagsInternal = v1->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x400) != 0 )
  {
    if ( (m_rtFlagsInternal & 0x800) != 0 )
      v1->m_rtFlagsInternal = m_rtFlagsInternal & 0xFFFFF7FF;
  }
  else if ( (m_rtFlagsInternal & 0x800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 272, ASSERT_TYPE_ASSERT, "(!( rtFlagsInternal & R_RT_FlagInternal_AuxDirty ))", (const char *)&queryFormat, "!( rtFlagsInternal & R_RT_FlagInternal_AuxDirty )") )
  {
    __debugbreak();
  }
}

/*
==============
R_RT_Handle::DebugGetLastKnownName
==============
*/
const char *R_RT_Handle::DebugGetLastKnownName(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 
  const char *result; 
  unsigned __int16 v4; 
  char *v5; 

  m_surfaceID = this->m_surfaceID;
  if ( !m_surfaceID )
    return "<none>";
  result = this->m_tracking.m_name;
  if ( !result )
  {
    if ( this->m_tracking.m_allocCounter && (v4 = R_RT_SurfaceIDToIndex(m_surfaceID), v4 < 0x1000u) && (v5 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v4, *((_DWORD *)v5 + 572) == this->m_tracking.m_allocCounter) && (*((_DWORD *)v5 + 4) & 0x3000) == 4096 )
      return (const char *)*((_QWORD *)v5 + 3);
    else
      return "<unknown>";
  }
  return result;
}

/*
==============
R_RT_Handle::DebugGetSurface
==============
*/
R_RT_Surface *R_RT_Handle::DebugGetSurface(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v3; 
  R_RT_Surface *result; 

  m_surfaceID = this->m_surfaceID;
  if ( !m_surfaceID )
    return 0i64;
  if ( !this->m_tracking.m_allocCounter )
    return 0i64;
  v3 = R_RT_SurfaceIDToIndex(m_surfaceID);
  if ( v3 >= 0x1000u )
    return 0i64;
  result = &g_R_RT_ManagerSurfaceAllocator->blocks[v3];
  if ( result->m_tracking.m_allocCounter != this->m_tracking.m_allocCounter || (result->m_rtFlagsInternal & 0x3000) != 4096 )
    return 0i64;
  return result;
}

/*
==============
R_RT_HeapHandle::GetAddress
==============
*/
unsigned __int8 *R_RT_HeapHandle::GetAddress(R_RT_HeapHandle *this, unsigned int offset)
{
  return (unsigned __int8 *)(*((_QWORD *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[3].m_colorRtIndex + 5 * this->m_heapID) + offset);
}

/*
==============
R_RT_HeapHandle::GetSize
==============
*/
__int64 R_RT_HeapHandle::GetSize(R_RT_HeapHandle *this)
{
  return *(unsigned int *)(&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2].m_useCount + 20 * this->m_heapID + 1);
}

/*
==============
R_RT_Group::GetValidRt
==============
*/
R_RT_Handle *R_RT_Group::GetValidRt(R_RT_Group *this, R_RT_Handle *result)
{
  const char *v7; 
  int v8; 
  const char *v9; 
  unsigned __int16 width; 
  const R_RT_Surface *Surface; 
  int m_colorRtCount; 
  unsigned int v17; 
  unsigned __int16 height; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 

  _RSI = result;
  _RDI = this;
  if ( !this->m_colorRtCount && !R_RT_Handle::IsValid(&this->m_depthRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 328, ASSERT_TYPE_ASSERT, "(!this->IsEmpty())", (const char *)&queryFormat, "!this->IsEmpty()") )
    __debugbreak();
  if ( _RDI->m_colorRtCount )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+8]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v24);
      if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 0x18) != 0 )
      {
        v7 = "!colorRt.IsValid() || colorRt.IsColor()";
        v8 = 396;
        v9 = "(!colorRt.IsValid() || colorRt.IsColor())";
        goto LABEL_15;
      }
      goto LABEL_17;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+88h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v24);
      if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v7 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v8 = 403;
        v9 = "(!depthRt.IsValid() || depthRt.IsDepth())";
LABEL_15:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
          __debugbreak();
          goto LABEL_18;
        }
      }
LABEL_17:
      __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
      goto LABEL_18;
    }
  }
  __asm { vpextrd rax, xmm0, 2 }
  if ( (_DWORD)_RAX )
  {
    __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
LABEL_18:
  _RAX = &v25;
  __asm
  {
    vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi], ymm0
  }
  width = R_RT_Handle::GetSurface(_RSI)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(_RSI);
  m_colorRtCount = _RDI->m_colorRtCount;
  v17 = 0;
  height = Surface->m_image.m_base.height;
  if ( _RDI->m_colorRtCount )
  {
    do
    {
      _RAX = 32i64 * v17;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rdi+8]
        vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
      }
      if ( R_RT_Handle::GetSurface(&v25)->m_image.m_base.width != width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 335, ASSERT_TYPE_ASSERT, "(colorRt.GetWidth() == width)", (const char *)&queryFormat, "colorRt.GetWidth() == width") )
        __debugbreak();
      if ( R_RT_Handle::GetSurface(&v25)->m_image.m_base.height != height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 336, ASSERT_TYPE_ASSERT, "(colorRt.GetHeight() == height)", (const char *)&queryFormat, "colorRt.GetHeight() == height") )
        __debugbreak();
      ++v17;
    }
    while ( v17 != m_colorRtCount );
    _RSI = result;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+88h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( !(_WORD)_EAX )
  {
    if ( !v24.m_tracking.m_allocCounter || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v24.m_surfaceID) )
      return _RSI;
LABEL_36:
    __debugbreak();
    return _RSI;
  }
  R_RT_Handle::GetSurface(&v24);
  if ( R_RT_Handle::GetSurface(&v24)->m_image.m_base.width != width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 341, ASSERT_TYPE_ASSERT, "(depthRt.GetWidth() == width)", (const char *)&queryFormat, "depthRt.GetWidth() == width", *(_QWORD *)&v24.m_surfaceID) )
    __debugbreak();
  if ( R_RT_Handle::GetSurface(&v24)->m_image.m_base.height != height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 342, ASSERT_TYPE_ASSERT, "(depthRt.GetHeight() == height)", (const char *)&queryFormat, "depthRt.GetHeight() == height") )
    goto LABEL_36;
  return _RSI;
}

/*
==============
RB_CreateRenderTargetAlias
==============
*/
R_RT_ColorHandle *RB_CreateRenderTargetAlias(R_RT_ColorHandle *result, const R_RT_ColorHandle *srcRT, GfxRenderTargetFormat fmt, const char *name)
{
  R_RT_Flags rtFlags; 
  const R_RT_Surface *Surface; 
  bool v11; 
  const R_RT_Surface *v12; 
  unsigned int height; 
  const R_RT_Surface *v16; 
  bool v17; 
  unsigned int width; 
  bool v22; 
  const R_RT_Surface *v23; 
  const GfxTexture *Resident; 
  bool v28; 
  const R_RT_Surface *v29; 
  R_RT_Image *p_m_image; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  R_RT_Surface *v32; 
  R_RT_FlagsInternal v33; 
  R_RT_Placement placement; 
  R_RT_DisplayContext optionalDisplayContext[2]; 
  R_RT_Handle v37; 
  R_RT_Handle resulta; 

  _RBX = result;
  _RDI = (R_RT_ColorHandle *)srcRT;
  if ( !R_RT_Handle::IsValid(&srcRT->R_RT_Handle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3318, ASSERT_TYPE_ASSERT, "(srcRT)", (const char *)&queryFormat, "srcRT") )
    __debugbreak();
  rtFlags = R_RT_Handle::GetSurface(_RDI)->m_rtFlags;
  Surface = R_RT_Handle::GetSurface(_RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbp+10h+var_60.m_surfaceID], ymm0
  }
  v11 = (Surface->m_rtFlagsInternal & 0x40) != 0;
  v12 = R_RT_Handle::GetSurface(&v37);
  if ( (v12->m_rtFlagsInternal & 8) != 0 )
    placement.texture = NULL;
  else
    placement.texture = R_Texture_GetResident(v12->m_image.m_base.textureId)->basemap;
  placement.pixels = (unsigned __int8 *)R_Image_GetResidentPixels(&v12->m_image.m_base);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+10h+var_90.texture]
    vmovdqa xmmword ptr [rbp+10h+var_90.texture], xmm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx], ymm0
  }
  height = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height;
  v16 = R_RT_Handle::GetSurface(_RDI);
  v17 = !v11;
  width = v16->m_image.m_base.width;
  if ( v17 )
  {
    if ( (rtFlags & 0x3E0080) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 767, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) )") )
      __debugbreak();
    _RAX = R_RT_CreateInternal(&resulta, width, height, width, height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)fmt], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, name, 0, &placement, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h(3339)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+10h+var_60.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+10h+var_80.m_swapChain], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_80.m_swapChain] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_80.m_swapChain] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_60.m_surfaceID] }
        if ( v28 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbx], ymm0 }
  }
  else
  {
    optionalDisplayContext[0].m_swapChain = NULL;
    optionalDisplayContext[0].m_swapChainBufferIndex = 0;
    if ( (rtFlags & 0x3E0001) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 780, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) )") )
      __debugbreak();
    _RAX = R_RT_CreateInternal(&resulta, width, height, width, height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)fmt], rtFlags, R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, name, 0, &placement, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h(3334)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+10h+var_60.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+10h+var_80.m_swapChain], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_80.m_swapChain] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_80.m_swapChain] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_60.m_surfaceID] }
        if ( v22 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbx], ymm0 }
    v23 = R_RT_Handle::GetSurface(_RBX);
    Resident = R_Texture_GetResident(v23->m_image.m_base.textureId);
    if ( Resident->basemap != placement.texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3335, ASSERT_TYPE_ASSERT, "(aliasRT.GetTexture()->map == placement.texture)", (const char *)&queryFormat, "aliasRT.GetTexture()->map == placement.texture") )
      __debugbreak();
  }
  v29 = R_RT_Handle::GetSurface(_RBX);
  p_m_image = &v29->m_image;
  if ( v29 == (const R_RT_Surface *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 520, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (p_m_image->m_base.flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 522, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned __int8 *)p_m_image->m_base.pixels.streamedDataHandle.data != placement.pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3341, ASSERT_TYPE_ASSERT, "(R_Image_GetResidentPixels( aliasRT.GetImage() ) == placement.pixels)", (const char *)&queryFormat, "R_Image_GetResidentPixels( aliasRT.GetImage() ) == placement.pixels") )
    __debugbreak();
  if ( _RDI->m_surfaceID )
  {
    R_RT_Handle::GetSurface(_RDI);
  }
  else
  {
    if ( _RDI->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
      __debugbreak();
  }
  if ( (_RDI->m_surfaceID & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 176, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", (const char *)&queryFormat, "!this->IsReadOnly()") )
    __debugbreak();
  m_rtFlagsInternal = R_RT_Handle::GetSurface(_RDI)->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x800) != 0 )
  {
    if ( (m_rtFlagsInternal & 0x400) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 180, ASSERT_TYPE_ASSERT, "(rtFlags & R_RT_FlagInternal_AuxUsed)", (const char *)&queryFormat, "rtFlags & R_RT_FlagInternal_AuxUsed") )
      return _RBX;
LABEL_62:
    __debugbreak();
    return _RBX;
  }
  v32 = R_RT_Handle::ModifySurface(_RBX);
  v33 = v32->m_rtFlagsInternal;
  if ( (v33 & 0x400) != 0 )
  {
    if ( (v33 & 0x800) != 0 )
      v32->m_rtFlagsInternal = v33 & 0xFFFFF7FF;
  }
  else if ( (v33 & 0x800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 272, ASSERT_TYPE_ASSERT, "(!( rtFlagsInternal & R_RT_FlagInternal_AuxDirty ))", (const char *)&queryFormat, "!( rtFlagsInternal & R_RT_FlagInternal_AuxDirty )") )
  {
    goto LABEL_62;
  }
  return _RBX;
}

/*
==============
R_RT_AddViewInternal
==============
*/
R_RT_Handle *R_RT_AddViewInternal(R_RT_Handle *result, R_RT_Handle *baseRt, int optionalArraySliceIndex, int optionalMipLevel, const char *name, unsigned __int16 frontendPass, const char *location)
{
  const R_RT_Surface *Surface; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  unsigned int numElements; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int mipCount; 
  int rtFlagsInternal; 
  unsigned int v19; 
  unsigned int v20; 
  R_RT_Surface *v21; 
  unsigned __int16 v22; 
  unsigned __int16 m_tailViewSurfaceID; 
  unsigned __int16 v24; 
  unsigned int m_htileSize; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  ID3D12Resource *basemap; 
  char *namea; 
  R_RT_Flags rtFlags; 
  GfxPixelFormat format; 
  R_RT_Handle v35; 
  unsigned int height; 
  unsigned int levelCount; 
  unsigned int width; 

  _RBX = baseRt;
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2350, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( optionalArraySliceIndex < 0 && optionalMipLevel < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2351, ASSERT_TYPE_ASSERT, "(optionalArraySliceIndex >= 0 || optionalMipLevel >= 0)", (const char *)&queryFormat, "optionalArraySliceIndex >= 0 || optionalMipLevel >= 0") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2352, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+0C8h+var_68.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v35);
  m_rtFlagsInternal = Surface->m_rtFlagsInternal;
  rtFlags = Surface->m_rtFlags;
  if ( (m_rtFlagsInternal & 0x3020) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2357, ASSERT_TYPE_ASSERT, "(( baseRtInternalFlags & ( R_RT_FlagInternal_View | R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || ( baseRtInternalFlags & R_RT_FlagInternal_Placement ) == R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( baseRtInternalFlags & ( R_RT_FlagInternal_View | R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || ( baseRtInternalFlags & R_RT_FlagInternal_Placement ) == R_RT_FlagInternal_Placement") )
    __debugbreak();
  if ( Surface->m_image.m_base.semantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2358, ASSERT_TYPE_ASSERT, "(baseSurface->m_image.m_base.semantic == TS_2D)", (const char *)&queryFormat, "baseSurface->m_image.m_base.semantic == TS_2D") )
    __debugbreak();
  if ( Surface->m_image.m_base.category != IMG_CATEGORY_FIRST_UNMANAGED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2359, ASSERT_TYPE_ASSERT, "(baseSurface->m_image.m_base.category == IMG_CATEGORY_RENDERTARGET)", (const char *)&queryFormat, "baseSurface->m_image.m_base.category == IMG_CATEGORY_RENDERTARGET") )
    __debugbreak();
  if ( (Surface->m_image.m_base.flags & 0xFFFC7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2360, ASSERT_TYPE_ASSERT, "(( baseSurface->m_image.m_base.flags & ~IMG_DISK_FLAG_MAPTYPE_MASK ) == 0)", (const char *)&queryFormat, "( baseSurface->m_image.m_base.flags & ~IMG_DISK_FLAG_MAPTYPE_MASK ) == 0") )
    __debugbreak();
  if ( Surface->m_image.m_base.depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2361, ASSERT_TYPE_ASSERT, "(baseSurface->m_image.m_base.depth == 1)", (const char *)&queryFormat, "baseSurface->m_image.m_base.depth == 1") )
    __debugbreak();
  numElements = Surface->m_image.m_base.numElements;
  format = Surface->m_image.m_base.format;
  width = Surface->m_image.m_base.width;
  levelCount = Surface->m_image.m_base.levelCount;
  height = Surface->m_image.m_base.height;
  v14 = 0;
  if ( numElements > 1 )
    v14 = 0x20000;
  if ( (Surface->m_image.m_base.flags & 0x38000) != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2369, ASSERT_TYPE_ASSERT, "(( baseSurface->m_image.m_base.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == ( baseArraySliceCount > 1 ? IMG_DISK_FLAG_MAPTYPE_ARRAY : IMG_DISK_FLAG_MAPTYPE_2D ))", (const char *)&queryFormat, "( baseSurface->m_image.m_base.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == ( baseArraySliceCount > 1 ? IMG_DISK_FLAG_MAPTYPE_ARRAY : IMG_DISK_FLAG_MAPTYPE_2D )") )
    __debugbreak();
  v15 = 1;
  if ( optionalArraySliceIndex < 0 )
    v15 = numElements;
  if ( optionalArraySliceIndex >= (int)numElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2372, ASSERT_TYPE_ASSERT, "(optionalArraySliceIndex < static_cast<int>( baseArraySliceCount ))", (const char *)&queryFormat, "optionalArraySliceIndex < static_cast<int>( baseArraySliceCount )") )
    __debugbreak();
  v16 = optionalMipLevel;
  if ( optionalMipLevel < 0 )
    v16 = 0;
  mipCount = 1;
  if ( optionalMipLevel < 0 )
    mipCount = levelCount;
  if ( v16 >= levelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2376, ASSERT_TYPE_ASSERT, "(mipLevel < baseMipCount)", (const char *)&queryFormat, "mipLevel < baseMipCount") )
    __debugbreak();
  rtFlagsInternal = m_rtFlagsInternal | 0x20;
  v19 = width >> v16;
  v20 = height >> v16;
  if ( !(height >> v16) )
    v20 = 1;
  if ( !v19 )
    v19 = 1;
  v21 = R_RT_AllocSurface(v19, v20, 1u, v15, format, rtFlags, (R_RT_FlagsInternal)rtFlagsInternal, name, mipCount);
  v22 = R_RT_SurfaceIndexToID((unsigned int)(v21 - g_R_RT_Manager.m_surfaceAllocator.blocks), 0);
  m_tailViewSurfaceID = Surface->m_link.m_base.m_tailViewSurfaceID;
  v24 = v22;
  if ( m_tailViewSurfaceID )
    g_R_RT_Manager.m_surfaceAllocator.blocks[R_RT_WritableSurfaceIDToIndex(m_tailViewSurfaceID)].m_link.m_base.m_tailViewSurfaceID = v22;
  else
    Surface->m_link.m_base.m_headViewSurfaceID = v22;
  Surface->m_link.m_base.m_tailViewSurfaceID = v24;
  v21->m_link.m_base.m_headViewSurfaceID = R_RT_SurfaceIndexToID((unsigned int)(Surface - g_R_RT_Manager.m_surfaceAllocator.blocks), 0);
  v21->m_link.m_base.m_tailViewSurfaceID = 0;
  v21->m_image.m_tileMode = Surface->m_image.m_tileMode;
  if ( (rtFlagsInternal & 0x10) != 0 )
  {
    m_htileSize = Surface->m_htileSize;
    v26 = 0;
    if ( (rtFlags & 0x100) != 0 )
      LOBYTE(v26) = m_htileSize == 0;
    else
      LOBYTE(v26) = m_htileSize != 0;
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2404, ASSERT_TYPE_ASSERT, "((rtFlags & R_RT_Flag_HtileDisabled) ? (baseSurface->m_htileSize == 0) : (baseSurface->m_htileSize > 0))", (const char *)&queryFormat, "(rtFlags & R_RT_Flag_HtileDisabled) ? (baseSurface->m_htileSize == 0) : (baseSurface->m_htileSize > 0)") )
      __debugbreak();
    if ( Surface->m_htileSize % numElements )
    {
      LODWORD(namea) = Surface->m_htileSize % numElements;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2405, ASSERT_TYPE_ASSERT, "( baseSurface->m_htileSize % baseArraySliceCount ) == ( 0 )", "%s == %s\n\t%i, %i", "baseSurface->m_htileSize % baseArraySliceCount", "0", namea, 0i64) )
        __debugbreak();
    }
    if ( !Surface->m_textureSize )
    {
      LODWORD(namea) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2406, ASSERT_TYPE_ASSERT, "( baseSurface->m_textureSize ) > ( 0 )", "%s > %s\n\t%i, %i", "baseSurface->m_textureSize", "0", namea, 0i64) )
        __debugbreak();
    }
    if ( Surface->m_textureSize % numElements )
    {
      LODWORD(namea) = Surface->m_textureSize % numElements;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2407, ASSERT_TYPE_ASSERT, "( baseSurface->m_textureSize % baseArraySliceCount ) == ( 0 )", "%s == %s\n\t%i, %i", "baseSurface->m_textureSize % baseArraySliceCount", "0", namea, 0i64) )
        __debugbreak();
    }
    v27 = Surface->m_htileSize / numElements;
    v21->m_htileSize = v27;
    v21->m_htileOffset = Surface->m_htileOffset + optionalArraySliceIndex * v27;
    v28 = Surface->m_stencilSize / numElements;
    v21->m_stencilSize = v28;
    v21->m_stencilOffset = Surface->m_stencilOffset + optionalArraySliceIndex * v28;
    v29 = Surface->m_textureSize / numElements;
    v21->m_textureSize = v29;
    v21->m_textureOffset = Surface->m_textureOffset + optionalArraySliceIndex * v29;
  }
  if ( (rtFlags & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2418, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_MS_Compressed ) == 0)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_MS_Compressed ) == 0") )
    __debugbreak();
  basemap = R_Texture_GetResident(Surface->m_image.m_base.textureId)->basemap;
  R_Texture_GetResidentMutable(v21->m_image.m_base.textureId)->basemap = basemap;
  R_RT_CreateDXViews(v21, Surface, optionalArraySliceIndex, optionalMipLevel);
  v21->m_tracking.m_memSize = 0;
  R_RT_Tracking_BindSurfaceInfo(&v21->m_tracking, frontendPass, location);
  R_RT_Tracking_AddSurfaceRecord(&v21->m_tracking, (R_RT_FlagsInternal)rtFlagsInternal, v24, name, NULL);
  R_RT_ConstructUnionHandle(result, v24);
  return result;
}

/*
==============
R_RT_AddViewsInternal
==============
*/
void R_RT_AddViewsInternal(R_RT_Handle *baseRt, unsigned int arraySliceCount, unsigned int mipCount, const char *name, unsigned __int16 frontendPass, const char *location)
{
  const char *v6; 
  unsigned int v10; 
  unsigned __int16 *v11; 
  ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *p_freeBlocks; 
  unsigned __int64 i; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v20; 
  unsigned __int16 *v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  bool v24; 
  unsigned __int16 **v25; 
  R_RT_Handle v26; 
  R_RT_Handle v27; 

  v6 = name;
  _R13 = baseRt;
  v10 = 2 * mipCount * arraySliceCount;
  if ( mipCount * arraySliceCount > 1 )
  {
    v11 = (unsigned __int16 *)PagedHeap<2,4096,0>::Allocate(&g_R_RT_Manager.m_viewHeap, v10);
    if ( !v11 )
    {
      p_freeBlocks = &g_R_RT_Manager.m_viewHeap.freeBlocks;
      for ( i = 0i64; p_freeBlocks != (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)&g_R_RT_Manager.m_viewHeap.freeBlocks + 8 * g_R_RT_Manager.m_viewHeap.freeBlocks.m_size); p_freeBlocks = (ntl::fixed_vector_map<unsigned int,unsigned int,4097,ntl::less<unsigned int,unsigned int> > *)((char *)p_freeBlocks + 8) )
      {
        v14 = i;
        i = *(unsigned int *)&p_freeBlocks->m_data.m_buffer[4];
        if ( i <= v14 )
          i = v14;
      }
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)14, "R_RT_AddViewsInternal", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2322, "size=%u largestFreeBlock=%zu numFreeBlocks=%zu", v10, 2 * i, g_R_RT_Manager.m_viewHeap.freeBlocks.m_size);
    }
    v15 = 0;
    if ( arraySliceCount )
    {
      v16 = arraySliceCount;
      do
      {
        v17 = 0;
        if ( mipCount )
        {
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [r13+0]
              vmovups [rsp+0B8h+var_78], ymm0
            }
            R_RT_AddViewInternal(&v27, &v26, v15, v17, v6, frontendPass, location);
            m_surfaceID = v27.m_surfaceID;
            if ( !v27.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
              __debugbreak();
            v20 = (m_surfaceID & 0x7FFF) - 1;
            if ( v20 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2332, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
              __debugbreak();
            v21 = &v11[mipCount * v15 + v17];
            if ( *v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2333, ASSERT_TYPE_ASSERT, "(surfaces[slice * mipCount + mip] == 0)", (const char *)&queryFormat, "surfaces[slice * mipCount + mip] == 0") )
              __debugbreak();
            ++v17;
            *v21 = v20;
            v6 = name;
          }
          while ( v17 < mipCount );
          v16 = arraySliceCount;
        }
        ++v15;
      }
      while ( v15 < v16 );
    }
    v22 = _R13->m_surfaceID;
    if ( !_R13->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v23 = (v22 & 0x7FFF) - 1;
    if ( v23 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2340, ASSERT_TYPE_ASSERT, "(baseSurfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "baseSurfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    v24 = g_R_RT_Manager.m_viewCacheSurfaceBlocks[v23] == NULL;
    v25 = &g_R_RT_Manager.m_viewCacheSurfaceBlocks[v23];
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2341, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_viewCacheSurfaceBlocks[baseSurfaceIndex] == 0)", (const char *)&queryFormat, "g_R_RT_Manager.m_viewCacheSurfaceBlocks[baseSurfaceIndex] == NULL") )
      __debugbreak();
    *v25 = v11;
  }
}

/*
==============
R_RT_AllocResourceMemory
==============
*/
unsigned __int8 *R_RT_AllocResourceMemory(unsigned int size, unsigned __int16 tiledPlacementIndex, R_RT_Surface *const surface, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const char *name, unsigned __int16 frontendPass, const char *location)
{
  char v9; 
  unsigned __int16 SurfaceID; 
  unsigned __int8 v12; 
  int v13; 
  unsigned __int16 m_activePass; 
  unsigned __int8 *v15; 
  R_RT_ESRAM_Allocator *v16; 
  unsigned __int8 *result; 
  R_RT_Tracking_AllocContext allocContext; 
  unsigned __int16 v19; 
  char v21; 

  v21 = rtFlags;
  v9 = rtFlags;
  SurfaceID = R_RT_GetSurfaceID(surface, 0);
  v19 = SurfaceID;
  v12 = -1;
  v13 = v9 & 0x60;
  if ( (v9 & 0x60) != 0 )
  {
    m_activePass = s_R_RT_ManagerInternal.m_activePass;
    if ( frontendPass )
      m_activePass = frontendPass;
    if ( !m_activePass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1216, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
      __debugbreak();
    v12 = R_RT_ESRAM_FindOrAddAllocatorForPass(m_activePass);
    SurfaceID = v19;
  }
  surface->m_allocSize = size;
  if ( v13 && g_R_RT_ESRAM.m_base )
  {
    allocContext.m_name = name;
    allocContext.m_location = location;
    allocContext.m_surfaceID = SurfaceID;
    v15 = (unsigned __int8 *)R_RT_ESRAM_Alloc(v12, 0, size, &allocContext);
    if ( v12 >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 431, ASSERT_TYPE_ASSERT, "(allocatorIndex < ( sizeof( *array_counter( s_R_RT_ESRAM_Internal.m_allocators ) ) + 0 ))", (const char *)&queryFormat, "allocatorIndex < ARRAY_COUNT( s_R_RT_ESRAM_Internal.m_allocators )") )
      __debugbreak();
    v16 = &s_R_RT_ESRAM_Internal.m_allocators[v12];
    if ( !v16->m_pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 433, ASSERT_TYPE_ASSERT, "(allocator->m_pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "allocator->m_pass != g_R_RT_Pass_null") )
      __debugbreak();
    ++v16->m_frameTotals.m_requests;
    v16->m_frameTotals.m_requestKB += size >> 10;
    if ( v15 )
    {
      v16->m_frameTotals.m_successKB += size >> 10;
      result = v15;
      ++v16->m_frameTotals.m_successes;
      surface->m_esramAllocatorIndex = v12;
      return result;
    }
    if ( (v21 & 0x20) != 0 )
      R_WarnOncePerFrame(R_WARN_RT_ESRAM_SPILL, (size + 0xFFFFF) >> 20, name);
  }
  allocContext.m_surfaceID = v19;
  allocContext.m_name = name;
  allocContext.m_location = location;
  return (unsigned __int8 *)R_RT_Heap_AllocInternal(size, tiledPlacementIndex, 0, NULL, (R_RT_Lifetime)(rtFlagsInternal & 3), frontendPass, &allocContext);
}

/*
==============
R_RT_AllocSurface
==============
*/
R_RT_Surface *R_RT_AllocSurface(unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, GfxPixelFormat format, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const char *name, unsigned int mipCount)
{
  int v11; 
  R_RT_Surface *v12; 
  unsigned __int16 surfaceID; 
  R_RT_Surface *result; 

  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 396, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( !g_R_RT_Manager.m_surfaceAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
    __debugbreak();
  v11 = 0;
  if ( g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex == 0xFFFF )
  {
    Com_Printf(1, "\n------------ Surface Records ------------\n\n");
    do
    {
      R_RT_Tracking_DumpSurfacePool(1, (R_RT_Tracking_SurfacePoolID)v11);
      Com_Printf(1, "\n");
      ++v11;
    }
    while ( v11 != 5 );
    if ( !g_R_RT_Manager.m_surfaceAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
      __debugbreak();
    if ( g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 401, ASSERT_TYPE_ASSERT, "(!g_R_RT_Manager.m_surfaceAllocator.Full())", "%s\n\tExceeded surface limit of %zu.  See surface listing above.", "!g_R_RT_Manager.m_surfaceAllocator.Full()", 0x1000ui64) )
      __debugbreak();
  }
  v12 = IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short>>::Alloc(&g_R_RT_Manager.m_surfaceAllocator);
  surfaceID = R_RT_GetSurfaceID(v12, 0);
  if ( v12->m_rtFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 406, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags == 0)", (const char *)&queryFormat, "surface->m_rtFlags == 0") )
    __debugbreak();
  if ( !v12->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 408, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter)", (const char *)&queryFormat, "surface->m_tracking.m_allocCounter") )
    __debugbreak();
  if ( v12->m_tracking.m_refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 409, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_refCount == 0)", (const char *)&queryFormat, "surface->m_tracking.m_refCount == 0") )
    __debugbreak();
  if ( v12->m_tracking.m_refRecordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 410, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_refRecordCount == 0)", (const char *)&queryFormat, "surface->m_tracking.m_refRecordCount == 0") )
    __debugbreak();
  v12->m_rtFlagsInternal = rtFlagsInternal | 0x1000;
  v12->nextFreeBlockIndex = 0;
  v12->m_rtFlags = rtFlags;
  R_RT_ConstructImage(&v12->m_image, width, height, depth, arraySliceCount, format, mipCount, name, surfaceID, Which_Default);
  if ( (rtFlags & 0x80u) != 0 )
  {
    if ( format != GFX_PF_D32F_S8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 18, ASSERT_TYPE_ASSERT, "(depthFormat == GFX_PF_D32F_S8)", (const char *)&queryFormat, "depthFormat == GFX_PF_D32F_S8") )
      __debugbreak();
    R_RT_ConstructImage(&v12->m_color.m_fmaskImage, v12->m_image.m_base.width, v12->m_image.m_base.height, v12->m_image.m_base.depth, v12->m_image.m_base.numElements, GFX_PF_D32F_S8, mipCount, v12->m_image.m_base.name, surfaceID, Which_Stencil);
  }
  v12->m_link = 0;
  result = v12;
  v12->m_esramAllocatorIndex = -1;
  v12->m_tracking.m_surfacePoolID = R_RT_Tracking_SurfacePoolID_INVALID;
  v12->m_allocWidth = width;
  v12->m_allocHeight = height;
  return result;
}

/*
==============
R_RT_AssertSafeToDestroy
==============
*/
void R_RT_AssertSafeToDestroy(R_RT_Surface *surface)
{
  R_RT_Flags m_rtFlags; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  int m_refCount; 
  R_RT_Image *p_m_image; 

  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2595, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( !surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2596, ASSERT_TYPE_ASSERT, "(surface)", (const char *)&queryFormat, "surface") )
    __debugbreak();
  m_rtFlags = surface->m_rtFlags;
  m_rtFlagsInternal = surface->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2600, ASSERT_TYPE_ASSERT, "(( rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || rtFlagsInternal & R_RT_FlagInternal_Placement") )
    __debugbreak();
  Profile_Begin(121);
  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_surfaceRefLock);
  AcquireSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  if ( surface->m_tracking.m_refRecordCount > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1469, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_refRecordCount <= ( sizeof( *array_counter( surfaceInfo->m_refRecords ) ) + 0 ))", (const char *)&queryFormat, "surfaceInfo->m_refRecordCount <= ARRAY_COUNT( surfaceInfo->m_refRecords )") )
    __debugbreak();
  m_refCount = surface->m_tracking.m_refCount;
  p_m_image = &surface->m_image;
  if ( surface->m_tracking.m_refCount )
  {
    R_RT_Tracking_DumpSurfaceRefRecords(&surface->m_tracking, p_m_image->m_base.name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1476, ASSERT_TYPE_ASSERT, "(refCount == 0)", "%s\n\tAttempting to destroy RT \"%s\" while still referenced %d time(s).  See reference listing above.", "refCount == 0", p_m_image->m_base.name, m_refCount) )
      __debugbreak();
  }
  ReleaseSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  Sys_CheckReleaseLock(&s_R_RT_Tracking.m_surfaceRefLock);
  if ( (m_rtFlagsInternal & 3) != 3 && (m_rtFlagsInternal & 0xC) == 0 )
  {
    R_RT_Tracking_AssertUnreferencedImage(&surface->m_image.m_base);
    if ( (m_rtFlagsInternal & 0x10) != 0 )
    {
      if ( (m_rtFlags & 0x80u) != 0 )
        goto LABEL_23;
    }
    else if ( (m_rtFlags & 0x8000) != 0 )
    {
LABEL_23:
      R_RT_Tracking_AssertUnreferencedImage(&surface->m_color.m_fmaskImage.m_base);
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_BackendFrameBegin
==============
*/
void R_RT_BackendFrameBegin(void)
{
  Profile_Begin(116);
  if ( g_R_RT_Manager.m_insideBackendFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3226, ASSERT_TYPE_ASSERT, "(!g_R_RT_Manager.m_insideBackendFrame)", (const char *)&queryFormat, "!g_R_RT_Manager.m_insideBackendFrame", -2i64) )
    __debugbreak();
  g_R_RT_Manager.m_insideBackendFrame = 1;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3229, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( s_R_RT_Heap.m_activePass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1073, ASSERT_TYPE_ASSERT, "(!s_R_RT_Heap.m_activePass)", (const char *)&queryFormat, "!s_R_RT_Heap.m_activePass") )
    __debugbreak();
  *(_QWORD *)&s_R_RT_ESRAM_Internal.m_frameTotals.m_requestKB = 0i64;
  *(_QWORD *)&s_R_RT_ESRAM_Internal.m_frameTotals.m_requests = 0i64;
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_BackendFrameEnd
==============
*/
void R_RT_BackendFrameEnd(unsigned __int16 frontendFramePass, bool aborted)
{
  R_RT_Surface *blocks; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v5; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  R_RT_ESRAM_Allocator *m_allocators; 
  R_RT_ESRAM_Allocator *v8; 
  unsigned __int16 m_pass; 
  __int16 v10; 
  R_RT_Heap_PassRef **p_m_passRefs; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Heap_PassRef *v14; 
  int v15; 
  __int64 v16; 
  __int64 m_commitSize; 
  R_RT_AllocationLockSentry v18; 
  R_RT_AllocationLockSentry v19; 

  Profile_Begin(117);
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3243, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()", -2i64) )
    __debugbreak();
  if ( !g_R_RT_Manager.m_insideBackendFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3244, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_insideBackendFrame)", (const char *)&queryFormat, "g_R_RT_Manager.m_insideBackendFrame") )
    __debugbreak();
  if ( frontendFramePass && (frontendFramePass & 0xFFF) != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3245, ASSERT_TYPE_ASSERT, "(frontendFramePass == g_R_RT_Pass_null || R_RT_IsFramePass( frontendFramePass ))", (const char *)&queryFormat, "frontendFramePass == g_R_RT_Pass_null || R_RT_IsFramePass( frontendFramePass )") )
    __debugbreak();
  if ( aborted )
  {
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v19);
    blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
    v5 = g_R_RT_ManagerSurfaceAllocator + 1;
    if ( g_R_RT_ManagerSurfaceAllocator->blocks != (R_RT_Surface *)&g_R_RT_ManagerSurfaceAllocator[1] )
    {
      do
      {
        m_rtFlagsInternal = blocks->m_rtFlagsInternal;
        if ( (m_rtFlagsInternal & 0x2120) == 256 )
        {
          if ( (m_rtFlagsInternal & 0x3000) != 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3124, ASSERT_TYPE_ASSERT, "(( rtFlagsInternal & ( R_RT_FlagInternal_Abandoned | R_RT_FlagInternal_Allocated ) ) == R_RT_FlagInternal_Allocated)", (const char *)&queryFormat, "( rtFlagsInternal & ( R_RT_FlagInternal_Abandoned | R_RT_FlagInternal_Allocated ) ) == R_RT_FlagInternal_Allocated") )
            __debugbreak();
          R_RT_DestroyInternal(blocks);
        }
        ++blocks;
      }
      while ( blocks != (R_RT_Surface *)v5 );
    }
    R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v19);
    if ( s_R_RT_ManagerInternal.m_activePass )
      R_RT_BackendPassEnd(s_R_RT_ManagerInternal.m_activePass);
  }
  R_RT_CheckSurfaceFrameLeaks(frontendFramePass, aborted);
  R_RT_UpdateAbandonedSurfaces(4u);
  m_allocators = s_R_RT_ESRAM_Internal.m_allocators;
  if ( aborted )
  {
    v8 = s_R_RT_ESRAM_Internal.m_allocators;
    do
    {
      m_pass = v8->m_pass;
      if ( v8->m_pass )
      {
        if ( (m_pass & 0xFFF) == 4095 || (v10 = -1, (frontendFramePass & 0xFFF) == 4095) )
          v10 = -4096;
        if ( (unsigned __int16)(v10 & m_pass) == (unsigned __int16)(v10 & frontendFramePass) )
        {
          R_RT_ESRAM_AssertEmptyAllocator(v8);
          v8->m_pass = 0;
        }
      }
      ++v8;
    }
    while ( v8 != (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals );
  }
  do
  {
    if ( m_allocators->m_pass && R_RT_MatchPasses(m_allocators->m_pass, frontendFramePass) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 397, ASSERT_TYPE_ASSERT, "(!R_RT_MatchPasses( allocatorPass, frontendFramePass ))", (const char *)&queryFormat, "!R_RT_MatchPasses( allocatorPass, frontendFramePass )") )
      __debugbreak();
    ++m_allocators;
  }
  while ( m_allocators != (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals );
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v18);
  if ( s_R_RT_Heap.m_activePass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1084, ASSERT_TYPE_ASSERT, "(!s_R_RT_Heap.m_activePass)", (const char *)&queryFormat, "!s_R_RT_Heap.m_activePass") )
    __debugbreak();
  p_m_passRefs = &s_R_RT_Heap.m_pools[0].m_passRefs;
  v12 = 4i64;
  do
  {
    v13 = (__int64)*(p_m_passRefs - 2);
    v14 = *p_m_passRefs;
    v15 = *((unsigned __int16 *)p_m_passRefs + 5);
    v16 = 0i64;
    if ( *((_WORD *)p_m_passRefs + 5) )
    {
      do
      {
        if ( (*(_BYTE *)(96i64 * v14[v16].m_blockIndex + v13 + 16) & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1103, ASSERT_TYPE_ASSERT, "(!(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Live))", (const char *)&queryFormat, "!(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Live)") )
          __debugbreak();
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (_DWORD)v16 != v15 );
    }
    p_m_passRefs += 6;
    --v12;
  }
  while ( v12 );
  R_RT_Heap_UpdateAbandonedBlocks(4u);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v18);
  R_RT_Tracking_BackendFrameEnd();
  g_R_RT_Manager.m_insideBackendFrame = 0;
  m_commitSize = g_R_RT_Manager.m_commitSize;
  if ( g_R_RT_Manager.m_commitSizeMax > g_R_RT_Manager.m_commitSize )
    m_commitSize = g_R_RT_Manager.m_commitSizeMax;
  g_R_RT_Manager.m_commitSizeMax = m_commitSize;
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_BackendPassBegin
==============
*/
void R_RT_BackendPassBegin(unsigned __int16 pass)
{
  R_RT_AllocationLockSentry v2; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3271, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()", -2i64) )
    __debugbreak();
  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3272, ASSERT_TYPE_ASSERT, "(pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "pass != g_R_RT_Pass_null") )
    __debugbreak();
  if ( (pass & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3273, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( pass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( pass )") )
    __debugbreak();
  Profile_Begin(119);
  if ( s_R_RT_ManagerInternal.m_activePass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3275, ASSERT_TYPE_ASSERT, "(s_R_RT_ManagerInternal.m_activePass == g_R_RT_Pass_null)", (const char *)&queryFormat, "s_R_RT_ManagerInternal.m_activePass == g_R_RT_Pass_null") )
    __debugbreak();
  s_R_RT_ManagerInternal.m_activePass = pass;
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v2);
  R_RT_Heap_ActivatePassBlocks(pass);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v2);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_BackendPassEnd
==============
*/
void R_RT_BackendPassEnd(unsigned __int16 pass)
{
  R_RT_Surface *blocks; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v3; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  unsigned __int16 m_frontendPass; 
  __int16 v6; 
  R_RT_ESRAM_Allocator *m_allocators; 
  unsigned __int16 *p_m_passRefCount; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  R_RT_AllocationLockSentry v13; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3284, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3285, ASSERT_TYPE_ASSERT, "(pass != g_R_RT_Pass_null)", (const char *)&queryFormat, "pass != g_R_RT_Pass_null") )
    __debugbreak();
  Profile_Begin(120);
  Profile_Begin(121);
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v13);
  blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
  v3 = g_R_RT_ManagerSurfaceAllocator + 1;
  if ( g_R_RT_ManagerSurfaceAllocator->blocks != (R_RT_Surface *)&g_R_RT_ManagerSurfaceAllocator[1] )
  {
    do
    {
      m_rtFlagsInternal = blocks->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) == 4096 && (m_rtFlagsInternal & 0x100) != 0 && (blocks->m_tracking.m_frontendPass & 0xFFF) != 4095 )
      {
        if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3062, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
          __debugbreak();
        m_frontendPass = blocks->m_tracking.m_frontendPass;
        if ( (m_frontendPass & 0xFFF) == 4095 || (v6 = -1, (pass & 0xFFF) == 4095) )
          v6 = -4096;
        if ( (unsigned __int16)(v6 & m_frontendPass) == (unsigned __int16)(v6 & pass) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3063, ASSERT_TYPE_ASSERT, "(!R_RT_MatchPasses( surface->m_tracking.m_frontendPass, pass ))", "%s\n\tRT frontend leak: \"%s\" at %s", "!R_RT_MatchPasses( surface->m_tracking.m_frontendPass, pass )", blocks->m_image.m_base.name, blocks->m_tracking.m_location) )
          __debugbreak();
      }
      ++blocks;
    }
    while ( blocks != (R_RT_Surface *)v3 );
  }
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v13);
  Profile_EndInternal(NULL);
  if ( !pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 411, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
    __debugbreak();
  if ( (pass & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 412, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( pass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( pass )") )
    __debugbreak();
  m_allocators = s_R_RT_ESRAM_Internal.m_allocators;
  while ( m_allocators->m_pass != pass )
  {
    if ( ++m_allocators == (R_RT_ESRAM_Allocator *)&s_R_RT_ESRAM_Internal.m_frameTotals )
      goto LABEL_32;
  }
  s_R_RT_ESRAM_Internal.m_frameTotals.m_requestKB += m_allocators->m_frameTotals.m_requestKB;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_successKB += m_allocators->m_frameTotals.m_successKB;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_requests += m_allocators->m_frameTotals.m_requests;
  s_R_RT_ESRAM_Internal.m_frameTotals.m_successes += m_allocators->m_frameTotals.m_successes;
  R_RT_ESRAM_AssertEmptyAllocator(m_allocators);
  m_allocators->m_pass = 0;
LABEL_32:
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v13);
  if ( s_R_RT_Heap.m_activePass != pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1135, ASSERT_TYPE_ASSERT, "(s_R_RT_Heap.m_activePass == pass)", (const char *)&queryFormat, "s_R_RT_Heap.m_activePass == pass") )
    __debugbreak();
  p_m_passRefCount = &s_R_RT_Heap.m_pools[0].m_passRefCount;
  v9 = 4i64;
  do
  {
    v10 = *(_QWORD *)(p_m_passRefCount - 5);
    v11 = *p_m_passRefCount;
    v12 = 0;
    if ( *p_m_passRefCount )
    {
      do
      {
        if ( *(_WORD *)(v10 + 40i64 * v12 + 2) == pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1149, ASSERT_TYPE_ASSERT, "(passRef->m_pass != pass)", "%s\n\tname=%s, location=%s", "passRef->m_pass != pass", *(const char **)(v10 + 40i64 * v12 + 8), *(const char **)(v10 + 40i64 * v12 + 16)) )
          __debugbreak();
        ++v12;
      }
      while ( v12 != v11 );
    }
    p_m_passRefCount += 24;
    --v9;
  }
  while ( v9 );
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v13);
  s_R_RT_Heap.m_activePass = 0;
  s_R_RT_ManagerInternal.m_activePass = 0;
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_CheckSurfaceFrameLeaks
==============
*/
void R_RT_CheckSurfaceFrameLeaks(unsigned __int16 frontendFramePass, bool aborted)
{
  R_RT_Surface *blocks; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v5; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  unsigned __int16 m_frontendPass; 
  __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  R_RT_AllocationLockSentry v11; 

  Profile_Begin(121);
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v11);
  blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
  v5 = g_R_RT_ManagerSurfaceAllocator + 1;
  if ( g_R_RT_ManagerSurfaceAllocator->blocks != (R_RT_Surface *)&g_R_RT_ManagerSurfaceAllocator[1] )
  {
    do
    {
      m_rtFlagsInternal = blocks->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) == 4096 )
      {
        if ( (m_rtFlagsInternal & 3u) < 2 )
        {
          if ( (m_rtFlagsInternal & 0x100) != 0 )
            goto LABEL_8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3086, ASSERT_TYPE_ASSERT, "(lifetime >= R_RT_Lifetime_MultiFrame || ( rtFlagsInternal & R_RT_FlagInternal_Frontend ))", "%s\n\tRT cross-frame leak: \"%s\" at %s", "lifetime >= R_RT_Lifetime_MultiFrame || ( rtFlagsInternal & R_RT_FlagInternal_Frontend )", blocks->m_image.m_base.name, blocks->m_tracking.m_location) )
            __debugbreak();
        }
        if ( (m_rtFlagsInternal & 0x100) != 0 )
        {
LABEL_8:
          if ( !frontendFramePass )
          {
            LODWORD(v10) = 0;
            LODWORD(v9) = blocks->m_tracking.m_frontendPass;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3090, ASSERT_TYPE_ASSERT, "(frontendFramePass != g_R_RT_Pass_null)", "%s\n\tRT frontend transition leak: \"%s\" at %s. surface->m_tracking.m_frontendPass=0x%04x, frontendFramePass=0x%04x", "frontendFramePass != g_R_RT_Pass_null", blocks->m_image.m_base.name, blocks->m_tracking.m_location, v9, v10) )
              __debugbreak();
          }
          if ( aborted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3091, ASSERT_TYPE_ASSERT, "(!aborted)", (const char *)&queryFormat, "!aborted") )
            __debugbreak();
          m_frontendPass = blocks->m_tracking.m_frontendPass;
          if ( (m_frontendPass & 0xFFF) == 4095 || (v8 = -1, (frontendFramePass & 0xFFF) == 4095) )
            v8 = -4096;
          if ( (unsigned __int16)(v8 & m_frontendPass) == (unsigned __int16)(v8 & frontendFramePass) )
          {
            LODWORD(v10) = frontendFramePass;
            LODWORD(v9) = m_frontendPass;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3092, ASSERT_TYPE_ASSERT, "(!R_RT_MatchPasses( surface->m_tracking.m_frontendPass, frontendFramePass ))", "%s\n\tRT frontend leak: \"%s\" at %s. surface->m_tracking.m_frontendPass=0x%04x, frontendFramePass=0x%04x", "!R_RT_MatchPasses( surface->m_tracking.m_frontendPass, frontendFramePass )", blocks->m_image.m_base.name, blocks->m_tracking.m_location, v9, v10) )
              __debugbreak();
          }
        }
      }
      ++blocks;
    }
    while ( blocks != (R_RT_Surface *)v5 );
  }
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v11);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_ConstructImage
==============
*/
void R_RT_ConstructImage(R_RT_Image *outRtImage, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, GfxPixelFormat format, unsigned int mipCount, const char *name, unsigned __int16 surfaceID, R_RT_Tracking_ImageAppendix::Which which)
{
  GfxImageFlags v14; 

  Image_AllocInPlace(&outRtImage->m_base, name, IMG_CATEGORY_FIRST_UNMANAGED, TS_2D);
  outRtImage->m_base.format = format;
  v14 = IMG_FLAG_NONE;
  if ( arraySliceCount > 1 )
    v14 = IMG_DISK_FLAG_MAPTYPE_ARRAY;
  outRtImage->m_base.flags = v14;
  outRtImage->m_base.width = truncate_cast<unsigned short,unsigned int>(width);
  outRtImage->m_base.height = truncate_cast<unsigned short,unsigned int>(height);
  outRtImage->m_base.depth = truncate_cast<unsigned short,unsigned int>(depth);
  outRtImage->m_base.numElements = truncate_cast<unsigned short,unsigned int>(arraySliceCount);
  truncate_store<unsigned char,unsigned int>(&outRtImage->m_base.levelCount, mipCount);
  outRtImage->m_base.textureId = R_Texture_CreateNullRT();
  DebugWipe(&outRtImage->m_tracking, 0x308ui64);
  outRtImage->m_tracking.m_surfaceID = surfaceID;
  outRtImage->m_tracking.m_which = which;
  *(_WORD *)&outRtImage->m_tracking.m_recordCount = 0;
  outRtImage->m_tracking.m_refCounts[1] = 0;
}

/*
==============
R_RT_ConstructUnionHandle
==============
*/
R_RT_Handle *R_RT_ConstructUnionHandle(R_RT_Handle *result, unsigned __int16 surfaceID)
{
  const R_RT_Surface *Surface; 
  unsigned __int16 m_surfaceRecordIndex; 
  __int64 v5; 
  const char *m_location; 
  unsigned int m_allocCounter; 
  const char *v8; 
  R_RT_Handle *v9; 

  result->m_surfaceID = surfaceID;
  Surface = R_RT_GetSurface(surfaceID);
  m_surfaceRecordIndex = Surface->m_tracking.m_surfaceRecordIndex;
  v5 = 98312i64 * Surface->m_tracking.m_surfacePoolID;
  if ( m_surfaceRecordIndex >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1253, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < ( sizeof( *array_counter( surfacePool->m_records ) ) + 0 ))", (const char *)&queryFormat, "surfaceRecordIndex < ARRAY_COUNT( surfacePool->m_records )") )
    __debugbreak();
  m_location = Surface->m_tracking.m_location;
  m_allocCounter = Surface->m_tracking.m_allocCounter;
  v8 = *(const char **)((char *)&s_R_RT_Tracking.m_surfacePools[0].m_records[m_surfaceRecordIndex].m_name + v5);
  if ( !m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking.h", 76, ASSERT_TYPE_ASSERT, "(allocCounter)", (const char *)&queryFormat, "allocCounter") )
    __debugbreak();
  result->m_tracking.m_name = v8;
  v9 = result;
  result->m_tracking.m_location = m_location;
  result->m_tracking.m_allocCounter = m_allocCounter;
  return v9;
}

/*
==============
R_RT_CopyImageMetadata
==============
*/
void R_RT_CopyImageMetadata(R_RT_Image *outRtImage, const R_RT_Image *srcRtImage, GfxPixelFormat format, unsigned int mipCount, unsigned __int16 surfaceID, R_RT_Tracking_ImageAppendix::Which which)
{
  R_RT_ConstructImage(outRtImage, srcRtImage->m_base.width, srcRtImage->m_base.height, srcRtImage->m_base.depth, srcRtImage->m_base.numElements, format, mipCount, srcRtImage->m_base.name, surfaceID, which);
}

/*
==============
R_RT_CreateArrayInternal
==============
*/
R_RT_ArrayHandle *R_RT_CreateArrayInternal(R_RT_ArrayHandle *result, R_RT_Handle *handles, unsigned int numHandles, R_RT_Lifetime lifetime, const char *name, const char *location)
{
  __int64 v8; 
  R_RT_Surface *v11; 
  unsigned __int16 SurfaceID; 
  unsigned __int16 v13; 
  __int64 v14; 
  const char *v19; 
  int v20; 
  const char *v21; 
  R_RT_ArrayHandle *v23; 
  R_RT_Handle v24; 
  R_RT_Handle resulta; 

  v8 = numHandles;
  _RBX = handles;
  _RBP = result;
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1359, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( (unsigned int)v8 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1360, ASSERT_TYPE_ASSERT, "(numHandles <= 8)", (const char *)&queryFormat, "numHandles <= R_RT_ARRAY_HANDLE_LIMIT") )
    __debugbreak();
  v11 = IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short>>::Alloc(&g_R_RT_Manager.m_surfaceAllocator);
  SurfaceID = R_RT_GetSurfaceID(v11, 0);
  *(_DWORD *)&v11->nextFreeBlockIndex = -65536;
  v13 = SurfaceID;
  v11->m_rtFlags = R_RT_Flag_None;
  v11->m_rtFlagsInternal = (unsigned __int8)lifetime | 0x5004;
  v11->m_image.m_base.name = name;
  v11->m_tracking.m_surfacePoolID = R_RT_Tracking_SurfacePoolID_INVALID;
  v11->m_tracking.m_memSize = 0;
  if ( (_DWORD)v8 )
  {
    v14 = v8;
    _RCX = (char *)v11 - (char *)_RBX;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rcx+rbx+438h], ymm0
      }
      ++_RBX;
      --v14;
    }
    while ( v14 );
  }
  v11->m_array.m_handleCount = v8;
  if ( !v11->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1290, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_allocCounter)", (const char *)&queryFormat, "surfaceInfo->m_allocCounter") )
    __debugbreak();
  v11->m_tracking.m_location = location;
  v11->m_tracking.m_frontendPass = 0;
  R_RT_Tracking_AddSurfaceRecord(&v11->m_tracking, v11->m_rtFlagsInternal, v13, name, NULL);
  R_RT_ConstructUnionHandle(&resulta, v13);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+98h+result.m_surfaceID]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v24);
    if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 4) != 0 )
      goto LABEL_20;
    v19 = "!unionHandle.IsValid() || unionHandle.IsArray()";
    v20 = 379;
    v21 = "(!unionHandle.IsValid() || unionHandle.IsArray())";
  }
  else
  {
    if ( !resulta.m_tracking.m_allocCounter )
      goto LABEL_20;
    v19 = "!this->m_tracking.m_allocCounter";
    v20 = 100;
    v21 = "(!this->m_tracking.m_allocCounter)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v20, ASSERT_TYPE_ASSERT, v21, (const char *)&queryFormat, v19) )
    __debugbreak();
LABEL_20:
  __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
  v23 = _RBP;
  __asm { vmovups ymmword ptr [rbp+0], ymm0 }
  return v23;
}

/*
==============
R_RT_CreateBufferInternal
==============
*/
R_RT_BufferHandle *R_RT_CreateBufferInternal(R_RT_BufferHandle *result, unsigned int elemSize, unsigned int numElems, GfxDataFormat format, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  __int32 v16; 
  int i; 
  R_RT_Surface *v18; 
  const char *debugInfo; 
  unsigned int v20; 
  const R_RT_Placement *v21; 
  unsigned __int8 *initialData; 
  signed __int32 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  GfxWrappedRWBuffer *v28; 
  const char *v31; 
  const char *v32; 
  int v33; 
  R_RT_Handle v37; 
  R_RT_Handle resulta; 
  unsigned __int16 rtFlagsa; 

  if ( (rtFlags & 0x81) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1405, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskDepthOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskDepthOnly ) )") )
    __debugbreak();
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1407, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  v16 = rtFlagsInternal | 8;
  Profile_Begin(112);
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry((R_RT_AllocationLockSentry *)&rtFlagsInternal);
  Profile_EndInternal(NULL);
  if ( !g_R_RT_Manager.m_surfaceAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
    __debugbreak();
  if ( g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex == 0xFFFF )
  {
    Com_Printf(1, "\n------------ Surface Records ------------\n\n");
    for ( i = 0; i != 5; ++i )
    {
      R_RT_Tracking_DumpSurfacePool(1, (R_RT_Tracking_SurfacePoolID)i);
      Com_Printf(1, "\n");
    }
    if ( !g_R_RT_Manager.m_surfaceAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
      __debugbreak();
    if ( g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1418, ASSERT_TYPE_ASSERT, "(!g_R_RT_Manager.m_surfaceAllocator.Full())", "%s\n\tExceeded surface limit of %zu.  See surface listing above.", "!g_R_RT_Manager.m_surfaceAllocator.Full()", 0x1000ui64) )
      __debugbreak();
  }
  v18 = IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short>>::Alloc(&g_R_RT_Manager.m_surfaceAllocator);
  rtFlagsa = R_RT_GetSurfaceID(v18, 0);
  v18->nextFreeBlockIndex = 0;
  v18->m_rtFlags = rtFlags;
  v18->m_rtFlagsInternal = v16 | 0x1000;
  debugInfo = name;
  v18->m_image.m_base.name = name;
  v18->m_image.m_base.format = GFX_PF_R32_UINT;
  v18->m_allocWidth = elemSize;
  v18->m_allocHeight = numElems;
  v18->m_esramAllocatorIndex = -1;
  v18->m_tracking.m_surfacePoolID = R_RT_Tracking_SurfacePoolID_INVALID;
  v20 = numElems * elemSize;
  v18->m_tracking.m_memSize = numElems * elemSize;
  v18->m_link = 0;
  v21 = placement;
  R_RT_SetupPlacement(v18, placement, tiledPlacement);
  v18->m_tracking.m_memSize = numElems * elemSize;
  if ( v21 && (initialData = v21->pixels) != NULL )
    v18->m_rtFlagsInternal |= 0x4000u;
  else
    initialData = R_RT_AllocResourceMemory(v20, v18->m_tiledPlacement, v18, rtFlags, (R_RT_FlagsInternal)v16, debugInfo, frontendPass, location);
  if ( (rtFlags & 0x400) != 0 )
  {
    if ( (v16 & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1460, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rtFlagsInternal ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rtFlagsInternal ) >= R_RT_Lifetime_MultiFrame") )
      __debugbreak();
    if ( !initialData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1461, ASSERT_TYPE_ASSERT, "(mem != 0)", (const char *)&queryFormat, "mem != NULL") )
      __debugbreak();
    memset_0(initialData, 0, v20);
  }
  v18->m_image.m_base.pixels.streamedDataHandle.data = (unsigned __int64)initialData;
  if ( (rtFlags & 0x20000) != 0 )
  {
    v23 = 0;
  }
  else
  {
    v23 = (rtFlags & 0x80000 | 0x40000u) >> 18;
    if ( (rtFlags & 0x40000) != 0 )
      v23 = 2;
  }
  v24 = BYTE2(rtFlags) & 0x10 | 2;
  if ( (rtFlags & 0x200000) == 0 )
    v24 = BYTE2(rtFlags) & 0x10;
  v25 = v24 | 0x200;
  if ( (rtFlags & 0x400000) == 0 )
    v25 = v24;
  v26 = v25 | 0x80;
  if ( (rtFlags & 0x800000) == 0 )
    v26 = v25;
  v27 = v26 | 0x400;
  if ( !tiledPlacement )
    v27 = v26;
  v28 = (GfxWrappedRWBuffer *)&v18->1080;
  if ( (rtFlags & 0x1000) != 0 )
    R_CreateGfxWrappedBuffer(v28, (const GfxWrappedBufferType)v23, elemSize, numElems, format, v27 | 1, initialState, NULL, initialData, debugInfo);
  else
    R_CreateGfxWrappedBuffer(v28, (const GfxWrappedBufferType)v23, elemSize, numElems, format, v27, initialState, NULL, initialData, debugInfo);
  R_RT_Tracking_BindSurfaceInfo(&v18->m_tracking, frontendPass, location);
  R_RT_Tracking_AddSurfaceRecord(&v18->m_tracking, v18->m_rtFlagsInternal, rtFlagsa, debugInfo, initialData);
  R_RT_ConstructUnionHandle(&resulta, rtFlagsa);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0D8h+result.m_surfaceID]
    vmovups ymmword ptr [rsp+0D8h+var_78.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v37);
    if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 8) != 0 )
      goto LABEL_53;
    v31 = "!unionHandle.IsValid() || unionHandle.IsBuffer()";
    v32 = "(!unionHandle.IsValid() || unionHandle.IsBuffer())";
    v33 = 348;
  }
  else
  {
    if ( !resulta.m_tracking.m_allocCounter )
      goto LABEL_53;
    v31 = "!this->m_tracking.m_allocCounter";
    v32 = "(!this->m_tracking.m_allocCounter)";
    v33 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v33, ASSERT_TYPE_ASSERT, v32, (const char *)&queryFormat, v31) )
    __debugbreak();
LABEL_53:
  __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_78.m_surfaceID] }
  _RBX = result;
  __asm { vmovups ymmword ptr [rbx], ymm0 }
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry((R_RT_AllocationLockSentry *)&rtFlagsInternal);
  return result;
}

/*
==============
R_RT_CreateDXViews
==============
*/
void R_RT_CreateDXViews(R_RT_Surface *surface, const R_RT_Surface *baseSurface, int optionalArraySliceIndex, int optionalMipLevel)
{
  R_RT_FlagsInternal m_rtFlagsInternal; 
  DXGI_FORMAT DXGIFormatForPixelFormat; 
  int v12; 
  int v13; 
  int v14; 
  DXGI_FORMAT BindableDepthFormat; 
  ID3D12Resource *v19; 
  DXGI_FORMAT v20; 
  DXGI_FORMAT BindableStencilFormat; 
  GfxPixelFormat v25; 
  ID3D12Resource *ResidentPixels; 
  char *v27; 
  HRESULT v28; 
  const char *v29; 
  ID3D12Resource *v30; 
  unsigned int v31; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v35; 
  unsigned int v37; 
  ID3D12Resource *v40; 
  ID3D12Resource *m_stencilTexture; 
  GfxImage *v43; 
  GfxPixelFormat v44; 
  DXGI_FORMAT v45; 
  ID3D12Resource *v46; 
  unsigned int v48; 
  unsigned int v50; 
  DXGI_FORMAT v52; 
  ID3D12Resource *v53; 
  ID3D12Resource *m_floatTexture; 
  __int16 v59; 
  ID3D12Resource *m_resource; 
  int v61; 
  int v62; 
  unsigned int m_arraySliceCount; 
  unsigned int v64; 
  GfxTexture *ResidentMutable; 
  unsigned int freeSlot; 
  unsigned int *v72; 
  __int64 v73; 
  char *name; 
  __int64 v76; 
  R_RT_Flags m_rtFlags; 
  GfxImage *image; 
  GfxShaderView v79; 
  ID3D12Resource *resource[2]; 
  D3D12_SHADER_RESOURCE_VIEW_DESC v81; 
  D3D12_SHADER_RESOURCE_VIEW_DESC v82; 
  GfxShaderView outView; 
  __m256i v84; 
  R_RT_DXResource_ViewSource v85; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v86; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v88; 
  int v89[4]; 
  __int64 v91; 
  __int64 v92; 
  int v93; 
  int v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  GfxShaderView v98; 
  GfxShaderRWView outRWView; 
  GfxShaderRWView v100; 
  GfxShaderRWView v101; 
  GfxShaderRWView v102; 
  GfxShaderRWView v103; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v104; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v105; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v106; 
  D3D12_UNORDERED_ACCESS_VIEW_DESC v107; 
  R_RT_DXResource_ViewSource viewSource; 
  R_RT_DXResource_ViewSource v109; 
  GfxShaderTextureView result; 
  GfxShaderTextureView v111; 
  __m256i v112; 
  int v113; 
  __int64 v114; 
  __int64 resource_low; 
  int v116; 
  __int64 v117; 
  __int64 v118; 
  int v119; 
  int v120; 

  v97 = -2i64;
  __asm { vmovaps [rsp+440h+var_50], xmm6 }
  _RSI = surface;
  m_rtFlags = surface->m_rtFlags;
  m_rtFlagsInternal = surface->m_rtFlagsInternal;
  LODWORD(outView.resource) = surface->m_image.m_base.format;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat((GfxPixelFormat)outView.resource);
  image = &baseSurface->m_image.m_base;
  R_RT_GetViewSourceFromImage(&viewSource, baseSurface->m_rtFlags, baseSurface->m_rtFlagsInternal, &baseSurface->m_image);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+340h+viewSource.m_resource]
    vmovups ymmword ptr [rbp+340h+var_340.m_resource], ymm0
  }
  resource[0] = (ID3D12Resource *)R_Texture_GetResidentMutable(_RSI->m_image.m_base.textureId);
  v79.resource = (ID3D12Resource *)_RSI->m_image.m_base.name;
  v12 = -1;
  if ( optionalMipLevel >= 0 || optionalArraySliceIndex >= 0 )
  {
    v13 = optionalMipLevel;
    if ( optionalMipLevel < 0 )
      v13 = 0;
    v14 = optionalArraySliceIndex;
    if ( optionalArraySliceIndex < 0 )
      v14 = 0;
    v12 = v13 + v14 * baseSurface->m_image.m_base.levelCount;
  }
  _RSI->m_subresourceToTransition = v12;
  if ( (m_rtFlagsInternal & 0x10) != 0 )
    BindableDepthFormat = R_D3D_MakeBindableDepthFormat(DXGIFormatForPixelFormat);
  else
    BindableDepthFormat = DXGIFormatForPixelFormat;
  _RAX = R_RT_DXResource_CreateShaderTextureView(&result, &v85, BindableDepthFormat, optionalArraySliceIndex, optionalMipLevel, (const char *)v79.resource);
  __asm { vmovups xmm0, xmmword ptr [rax] }
  _RAX = resource[0];
  __asm { vmovups xmmword ptr [rax+8], xmm0 }
  if ( (m_rtFlagsInternal & 0x10) != 0 )
  {
    v19 = v79.resource;
    _RSI->m_targetView = R_RT_DXResource_CreateDepthStencilView(&v85, DXGIFormatForPixelFormat, optionalArraySliceIndex, optionalMipLevel, (const char *)v79.resource);
    if ( (m_rtFlags & 0x80) != 0 )
    {
      v20 = R_D3D_GetDXGIFormatForPixelFormat(_RSI->m_color.m_fmaskImage.m_base.format);
      BindableStencilFormat = R_D3D_MakeBindableStencilFormat(v20);
      _RAX = R_RT_DXResource_CreateShaderTextureView(&v111, &v85, BindableStencilFormat, optionalArraySliceIndex, optionalMipLevel, (const char *)v19);
      __asm { vmovups xmm6, xmmword ptr [rax] }
      _RAX = R_Texture_GetResidentMutable(_RSI->m_color.m_fmaskImage.m_base.textureId);
      __asm { vmovups xmmword ptr [rax+8], xmm6 }
    }
    R_AssignNullBuffer(&_RSI->m_depth.m_htileBuffer.buffer);
    _RSI->m_depth.m_htileBuffer.data = NULL;
    R_AssignNullShaderBufferView(&_RSI->m_depth.m_htileBuffer.view);
    R_AssignNullShaderBufferRWView(&_RSI->m_depth.m_htileBuffer.rwView);
    R_AssignNullShaderTextureView(&_RSI->m_depth.m_stencilView);
    R_AssignNullShaderTextureRWView(&_RSI->m_depth.m_stencilRWView);
    R_AssignNullShaderTextureRWView(&_RSI->m_depth.m_stencilRWView);
    R_AssignNullShaderTextureView(&_RSI->m_depth.m_floatView);
    R_AssignNullShaderTextureRWView(&_RSI->m_depth.m_floatRWView);
    R_AssignNullShaderTextureRWView(&_RSI->m_depth.m_floatRWView);
    if ( (m_rtFlagsInternal & 0x20) == 0 )
    {
      v25 = (GfxPixelFormat)outView.resource;
      if ( (unsigned int)(LODWORD(outView.resource) - 20) <= 2 )
      {
        ResidentPixels = (ID3D12Resource *)R_Image_GetResidentPixels(image);
        resource[0] = ResidentPixels;
        if ( (BYTE1(m_rtFlags) & 1) == 0 )
        {
          v27 = (char *)ResidentPixels + _RSI->m_htileOffset;
          LODWORD(outView.resource) = _RSI->m_htileSize;
          Profile_Begin(122);
          v113 = 1;
          v114 = 0x10000i64;
          v117 = 65537i64;
          resource_low = LODWORD(outView.resource);
          v116 = 1;
          v118 = 1i64;
          v119 = 1;
          v120 = 4;
          v28 = ((__int64 (__fastcall *)(ID3D12Device *, char *, int *, __int64, _QWORD, GUID *, GfxImage **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v27, &v113, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &image);
          if ( v28 < 0 )
          {
            v29 = R_ErrorDescription(v28);
            Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v29);
          }
          PIXSetDebugName((ID3D12DeviceChild *)image, (const char *)v79.resource);
          v30 = (ID3D12Resource *)image;
          Profile_EndInternal(NULL);
          _RSI->m_depth.m_htileBuffer.buffer = v30;
          _RSI->m_depth.m_htileBuffer.data = v27;
          Profile_Begin(122);
          viewDesc.Format = DXGI_FORMAT_R32_TYPELESS;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
          viewDesc.Buffer.FirstElement = 0i64;
          v31 = LODWORD(outView.resource) >> 2;
          *(_QWORD *)&viewDesc.Texture3D.ResourceMinLODClamp = LODWORD(outView.resource) >> 2;
          viewDesc.Texture2DArray.PlaneSlice = 1;
          viewDesc.Shader4ComponentMapping = 5768;
          R_HW_CreateShaderResourceView(v30, &viewDesc, &outView);
          Profile_EndInternal(NULL);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+340h+outView.resource]
            vmovups xmmword ptr [rsi+840h], xmm0
          }
          buffer = _RSI->m_depth.m_htileBuffer.buffer;
          Profile_Begin(122);
          v88.Format = DXGI_FORMAT_R32_TYPELESS;
          v88.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
          v88.Buffer.FirstElement = 0i64;
          *(_OWORD *)&v88.Texture3D.WSize = v31;
          v88.Buffer.Flags = D3D12_BUFFER_UAV_FLAG_RAW;
          R_HW_CreateUnorderedAccessView(buffer, 0, &v88, &outRWView);
          Profile_EndInternal(NULL);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+340h+outRWView.rwResource]
            vmovups xmmword ptr [rsi+858h], xmm0
            vmovsd  xmm1, qword ptr [rbp+340h+outRWView.rwView]
            vmovsd  qword ptr [rsi+868h], xmm1
          }
          ResidentPixels = resource[0];
        }
        if ( (m_rtFlags & 0x80) != 0 )
        {
          v35 = (ID3D12Resource *)((char *)ResidentPixels + _RSI->m_stencilOffset);
          outView.resource = v35;
          if ( optionalMipLevel >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 800, ASSERT_TYPE_ASSERT, "( optionalMipLevel ) < ( 0 )", "%s < %s\n\t%i, %i", "optionalMipLevel", "0", optionalMipLevel, 0i64) )
            __debugbreak();
          if ( optionalArraySliceIndex >= 0 )
          {
            LODWORD(v76) = optionalArraySliceIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 801, ASSERT_TYPE_ASSERT, "( optionalArraySliceIndex ) < ( 0 )", "%s < %s\n\t%i, %i", "optionalArraySliceIndex", "0", v76, 0i64) )
              __debugbreak();
          }
          _RSI->m_depth.m_stencilTexture = R_RT_DXResource_CreateCustomTexture(&v85, (unsigned __int64)v35, DXGI_FORMAT_R8_UINT, (const char *)v79.resource);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+340h+var_340.m_resource]
            vmovups [rbp+340h+var_360], ymm0
          }
          truncate_cast<unsigned char,enum DXGI_FORMAT>(DXGI_FORMAT_R8_UINT);
          image = (GfxImage *)_RSI->m_depth.m_stencilTexture;
          Profile_Begin(122);
          v37 = v84.m256i_u16[5];
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr [rbp+340h+var_398+0Ch], xmm0
          }
          *(_QWORD *)&v82.TextureCubeArray.NumCubes = 0i64;
          v82.Texture2DArray.ResourceMinLODClamp = 0.0;
          v82.Format = DXGI_FORMAT_R8_UINT;
          v82.Shader4ComponentMapping = 5768;
          if ( v84.m256i_u16[5] == 1 )
          {
            if ( v84.m256i_u8[17] <= 1u )
            {
              v82.Buffer.FirstElement = 0xFFFFFFFF00000000ui64;
              if ( v84.m256i_i16[4] <= 1u )
                v82.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
              else
                v82.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
            }
            else
            {
              v82.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
            }
          }
          else
          {
            if ( v84.m256i_u16[5] <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 491, ASSERT_TYPE_ASSERT, "(arraySliceCount > 1)", (const char *)&queryFormat, "arraySliceCount > 1") )
              __debugbreak();
            if ( v84.m256i_i16[4] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 492, ASSERT_TYPE_ASSERT, "(viewSource.m_depth == 1)", (const char *)&queryFormat, "viewSource.m_depth == 1") )
              __debugbreak();
            if ( v84.m256i_i8[17] <= 1u )
            {
              v82.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
              v82.Buffer.FirstElement = 0xFFFFFFFF00000000ui64;
              v82.Buffer.NumElements = 0;
              v82.Buffer.StructureByteStride = v37;
            }
            else
            {
              v82.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
              v82.Texture1D.MostDetailedMip = 0;
              v82.Texture1D.MipLevels = v37;
            }
          }
          R_HW_CreateShaderResourceView((ID3D12Resource *)image, &v82, &v98);
          Profile_EndInternal(NULL);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+340h+var_248.resource]
            vmovups xmmword ptr [rsi+880h], xmm0
          }
          if ( (m_rtFlags & 0x4000) != 0 )
          {
            v40 = R_RT_DXResource_CreateCustom4Texture(&v85, (unsigned __int64)outView.resource, DXGI_FORMAT_R32_UINT, (const char *)v79.resource);
            _RSI->m_depth.m_stencil4Texture = v40;
            Profile_Begin(122);
            v104.Format = DXGI_FORMAT_R32_UINT;
            *(_QWORD *)&v104.ViewDimension = 4i64;
            v104.Texture1DArray.FirstArraySlice = 0;
            R_HW_CreateUnorderedAccessView(v40, 0, &v104, &v100);
            Profile_EndInternal(NULL);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+340h+var_220.rwResource]
              vmovsd  xmm1, qword ptr [rbp+340h+var_220.rwView]
            }
          }
          else
          {
            m_stencilTexture = _RSI->m_depth.m_stencilTexture;
            Profile_Begin(122);
            v105.Format = DXGI_FORMAT_R8_UINT;
            *(_QWORD *)&v105.ViewDimension = 4i64;
            v105.Texture1DArray.FirstArraySlice = 0;
            R_HW_CreateUnorderedAccessView(m_stencilTexture, 0, &v105, &v101);
            Profile_EndInternal(NULL);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+340h+var_208.rwResource]
              vmovsd  xmm1, qword ptr [rbp+340h+var_208.rwView]
            }
          }
          __asm
          {
            vmovups xmmword ptr [rsi+890h], xmm0
            vmovsd  qword ptr [rsi+8A0h], xmm1
          }
        }
        v43 = (GfxImage *)((char *)resource[0] + _RSI->m_textureOffset);
        image = v43;
        if ( v25 == GFX_PF_D16 )
        {
          v44 = GFX_PF_R16;
        }
        else if ( (unsigned int)(v25 - 21) > 1 )
        {
          LODWORD(name) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 72, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h(72): unhandled case %d in switch statement", name) )
            __debugbreak();
          v44 = v25;
        }
        else
        {
          v44 = GFX_PF_R32F;
        }
        v45 = R_D3D_GetDXGIFormatForPixelFormat(v44);
        if ( optionalMipLevel >= 0 )
        {
          LODWORD(v76) = optionalMipLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 833, ASSERT_TYPE_ASSERT, "( optionalMipLevel ) < ( 0 )", "%s < %s\n\t%i, %i", "optionalMipLevel", "0", v76, 0i64) )
            __debugbreak();
        }
        if ( optionalArraySliceIndex >= 0 )
        {
          LODWORD(v76) = optionalArraySliceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 834, ASSERT_TYPE_ASSERT, "( optionalArraySliceIndex ) < ( 0 )", "%s < %s\n\t%i, %i", "optionalArraySliceIndex", "0", v76, 0i64) )
            __debugbreak();
        }
        v46 = v79.resource;
        _RSI->m_depth.m_floatTexture = R_RT_DXResource_CreateCustomTexture(&v85, (unsigned __int64)v43, v45, (const char *)v79.resource);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+340h+var_340.m_resource]
          vmovups [rbp+340h+var_360], ymm0
        }
        truncate_cast<unsigned char,enum DXGI_FORMAT>(v45);
        resource[0] = _RSI->m_depth.m_floatTexture;
        Profile_Begin(122);
        v48 = v84.m256i_u16[5];
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+340h+var_3C0+0Ch], xmm0
        }
        *(_QWORD *)&v81.TextureCubeArray.NumCubes = 0i64;
        v81.Texture2DArray.ResourceMinLODClamp = 0.0;
        v81.Format = v45;
        v81.Shader4ComponentMapping = 5768;
        v50 = v84.m256i_u8[17];
        if ( v84.m256i_u16[5] == 1 )
        {
          if ( v84.m256i_u8[17] <= 1u )
          {
            v81.Texture1D.MipLevels = -1;
            if ( v84.m256i_i16[4] <= 1u )
            {
              v81.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
              v81.Texture1D.MostDetailedMip = 0;
              if ( v45 == DXGI_FORMAT_X32_TYPELESS_G8X24_UINT )
                v81.Buffer.NumElements = 1;
            }
            else
            {
              v81.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
              v81.Texture1D.MostDetailedMip = 0;
            }
          }
          else
          {
            v81.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
          }
        }
        else
        {
          if ( v84.m256i_u16[5] <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 491, ASSERT_TYPE_ASSERT, "(arraySliceCount > 1)", (const char *)&queryFormat, "arraySliceCount > 1") )
            __debugbreak();
          if ( v84.m256i_i16[4] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 492, ASSERT_TYPE_ASSERT, "(viewSource.m_depth == 1)", (const char *)&queryFormat, "viewSource.m_depth == 1") )
            __debugbreak();
          v46 = v79.resource;
          v81.Texture1D.MostDetailedMip = 0;
          if ( v50 <= 1 )
          {
            v81.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
            *(_QWORD *)&v81.Texture2D.MipLevels = 0xFFFFFFFFi64;
            v81.Buffer.StructureByteStride = v48;
          }
          else
          {
            v81.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
            v81.Texture1D.MipLevels = v48;
          }
        }
        R_HW_CreateShaderResourceView(resource[0], &v81, &v79);
        Profile_EndInternal(NULL);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+440h+var_3E0.resource]
          vmovups xmmword ptr [rsi+8B8h], xmm0
        }
        if ( (m_rtFlags & 0x4000) != 0 )
        {
          if ( v25 == GFX_PF_D16 )
          {
            v25 = GFX_PF_R16G16B16A16;
          }
          else if ( (unsigned int)(v25 - 21) > 1 )
          {
            LODWORD(name) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h(86): unhandled case %d in switch statement", name) )
              __debugbreak();
          }
          else
          {
            v25 = GFX_PF_R32G32B32A32F;
          }
          v52 = R_D3D_GetDXGIFormatForPixelFormat(v25);
          v53 = R_RT_DXResource_CreateCustom4Texture(&v85, (unsigned __int64)image, v52, (const char *)v46);
          _RSI->m_depth.m_float4Texture = v53;
          Profile_Begin(122);
          v106.Format = v52;
          *(_QWORD *)&v106.ViewDimension = 4i64;
          v106.Texture1DArray.FirstArraySlice = 0;
          R_HW_CreateUnorderedAccessView(v53, 0, &v106, &v102);
          Profile_EndInternal(NULL);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+340h+var_1F0.rwResource]
            vmovups xmmword ptr [rsi+8C8h], xmm0
            vmovsd  xmm1, qword ptr [rbp+340h+var_1F0.rwView]
            vmovsd  qword ptr [rsi+8D8h], xmm1
          }
        }
        else
        {
          m_floatTexture = _RSI->m_depth.m_floatTexture;
          Profile_Begin(122);
          v107.Format = v45;
          *(_QWORD *)&v107.ViewDimension = 4i64;
          v107.Texture1DArray.FirstArraySlice = 0;
          R_HW_CreateUnorderedAccessView(m_floatTexture, 0, &v107, &v103);
          Profile_EndInternal(NULL);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+340h+var_1D8.rwResource]
            vmovups xmmword ptr [rsi+8C8h], xmm0
            vmovsd  xmm1, qword ptr [rbp+340h+var_1D8.rwView]
            vmovsd  qword ptr [rsi+8D8h], xmm1
          }
        }
      }
    }
  }
  else
  {
    v59 = m_rtFlags;
    if ( (m_rtFlags & 0x800) != 0 )
    {
      _RSI->m_targetView = R_RT_DXResource_CreateRenderTargetView(&v85, DXGIFormatForPixelFormat, optionalArraySliceIndex, optionalMipLevel, (const char *)v79.resource);
      v59 = m_rtFlags;
    }
    else
    {
      _RSI->m_targetView = 0;
    }
    if ( (v59 & 0x1000) != 0 )
    {
      Profile_Begin(122);
      m_resource = viewSource.m_resource;
      if ( !viewSource.m_resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 706, ASSERT_TYPE_ASSERT, "(textureResource)", (const char *)&queryFormat, "textureResource") )
        __debugbreak();
      v61 = optionalMipLevel;
      if ( optionalMipLevel < 0 )
        v61 = 0;
      v86.Format = DXGIFormatForPixelFormat;
      if ( v85.m_arraySliceCount <= 1u )
      {
        v86.Texture1DArray.FirstArraySlice = 0;
        if ( v85.m_depth <= 1u )
        {
          v86.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2D;
        }
        else
        {
          v86.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE3D;
          v86.Buffer.NumElements = v85.m_depth;
        }
      }
      else
      {
        v86.ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
        v86.Buffer.StructureByteStride = 0;
        v62 = optionalArraySliceIndex;
        if ( optionalArraySliceIndex < 0 )
          v62 = 0;
        v86.Texture1DArray.FirstArraySlice = v62;
        m_arraySliceCount = 1;
        if ( optionalArraySliceIndex < 0 )
          m_arraySliceCount = v85.m_arraySliceCount;
        v86.Buffer.NumElements = m_arraySliceCount;
      }
      v86.Texture1D.MipSlice = v61;
      if ( optionalMipLevel < 0 && optionalArraySliceIndex < 0 )
      {
        v64 = -1;
      }
      else
      {
        if ( optionalArraySliceIndex < 0 )
          optionalArraySliceIndex = 0;
        v64 = v61 + optionalArraySliceIndex * v85.m_mipCount;
      }
      R_HW_CreateUnorderedAccessView(m_resource, v64, &v86, (GfxShaderRWView *)&v84);
      Profile_EndInternal(NULL);
      __asm { vmovups xmm0, xmmword ptr [rbp+340h+var_360] }
      _RAX = resource[0];
      __asm
      {
        vmovups xmmword ptr [rax+18h], xmm0
        vmovsd  xmm1, qword ptr [rbp+340h+var_360+10h]
        vmovsd  qword ptr [rax+28h], xmm1
      }
      if ( _RSI->m_subresourceToTransition != _RAX[2].m_RefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 889, ASSERT_TYPE_ASSERT, "(surface->m_subresourceToTransition == surfaceTexture->shaderRWView.rwSubresourceToTransition)", (const char *)&queryFormat, "surface->m_subresourceToTransition == surfaceTexture->shaderRWView.rwSubresourceToTransition") )
        __debugbreak();
      v59 = m_rtFlags;
    }
    if ( (v59 & 0x8000) != 0 )
    {
      ResidentMutable = R_Texture_GetResidentMutable(_RSI->m_color.m_fmaskImage.m_base.textureId);
      if ( !ResidentMutable->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 895, ASSERT_TYPE_ASSERT, "(fmaskTexture->map)", (const char *)&queryFormat, "fmaskTexture->map") )
        __debugbreak();
      if ( (baseSurface->m_rtFlags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 707, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_MS_Compressed)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_MS_Compressed") )
        __debugbreak();
      R_RT_GetViewSourceFromImage(&v109, baseSurface->m_rtFlags, baseSurface->m_rtFlagsInternal, &baseSurface->m_color.m_fmaskImage);
      v109.m_sampleCount = 1;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+340h+var_100.m_resource]
        vmovups [rbp+340h+var_C0], ymm0
      }
      resource[0] = (ID3D12Resource *)0x100000000i64;
      resource[1] = NULL;
      v89[0] = 0;
      v89[1] = 4;
      v89[2] = 6432;
      v91 = 0i64;
      v92 = -1i64;
      v93 = 49;
      v94 = 4;
      v95 = 0i64;
      v96 = 0i64;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+440h+resource]
        vmovups [rbp+340h+var_290], xmm0
      }
      R_LockDescriptorPool(&g_descriptorPools.shaderViewPool);
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v72 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v72;
      *v72 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v73 = v112.m256i_i64[0];
      ((void (__fastcall *)(ID3D12Device *, __int64, int *, unsigned __int64))g_dx.d3d12device->m_pFunction[15].AddRef)(g_dx.d3d12device, v112.m256i_i64[0], v89, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
      *(_QWORD *)&ResidentMutable->shaderView.view = 0i64;
      ResidentMutable->shaderView.view = freeSlot;
      ResidentMutable->shaderView.resource = (ID3D12Resource *)v73;
    }
  }
  __asm { vmovaps xmm6, [rsp+440h+var_50] }
}

/*
==============
R_RT_CreateHeapInternal
==============
*/
unsigned __int16 *R_RT_CreateHeapInternal(unsigned __int16 *size, R_RT_HeapFlags flags, const char *name, const char *location, const char *a5)
{
  char v6; 
  __int64 headFreeBlockIndex; 
  R_RT_Heap *v10; 
  unsigned __int16 HeapIndex; 
  unsigned __int8 *Base; 
  unsigned __int16 v13; 
  R_RT_Tracking_AllocContext allocContext; 
  R_RT_AllocationLockSentry v16; 

  v6 = (char)name;
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1287, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( flags )
  {
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v16);
    if ( !g_R_RT_Manager.m_heapAllocator.reset )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 72, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
      if ( !g_R_RT_Manager.m_heapAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
    }
    if ( g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 73, ASSERT_TYPE_ASSERT, "(!this->Full())", (const char *)&queryFormat, "!this->Full()") )
      __debugbreak();
    headFreeBlockIndex = g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex;
    if ( g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex >= 0x10ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
      __debugbreak();
    v10 = &g_R_RT_Manager.m_heapAllocator.blocks[headFreeBlockIndex];
    g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex = v10->nextFreeBlockIndex;
    HeapIndex = R_RT_GetHeapIndex(v10);
    v10->placementCount = 0;
    allocContext.m_name = location;
    allocContext.m_location = a5;
    allocContext.m_surfaceID = 1;
    if ( (v6 & 1) != 0 )
    {
      v10->pageRange.firstPageID = 0;
      v10->pageRange.lastPageID = 512;
      Base = (unsigned __int8 *)Mem_ESRAM_GetBase();
      v10->size = 0x2000000;
      v10->esram = 1;
    }
    else
    {
      v13 = R_RT_GetHeapIndex(v10);
      Base = (unsigned __int8 *)R_RT_Heap_AllocInternal(flags, 0xFFFFu, v13, &v10->pageRange, R_RT_Lifetime_Permanent, 0, &allocContext);
      v10->size = flags;
      v10->esram = 0;
    }
    v10->heapMemory = Base;
    *size = HeapIndex;
    R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v16);
  }
  else
  {
    *size = 0;
  }
  return size;
}

/*
==============
R_RT_CreateInternal
==============
*/
R_RT_Handle *R_RT_CreateInternal(R_RT_Handle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxPixelFormat format, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const R_RT_DisplayContext *optionalDisplayContext, const char *location)
{
  unsigned __int32 v23; 
  const char *v24; 
  unsigned int v25; 
  bool isDepth; 
  GfxPixelFormat v27; 
  unsigned int v28; 
  char v29; 
  signed int v30; 
  bool v31; 
  R_RT_FlagsInternal v32; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  int miscFlags; 
  R_RT_Flags m_rtFlags; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  DXGI_FORMAT DXGIFormatForPixelFormat; 
  DXGI_FORMAT TypelessFormat; 
  unsigned int v60; 
  int v61; 
  unsigned __int8 *pixels; 
  const char *v64; 
  bool v65; 
  bool v66; 
  bool v67; 
  ID3D12Resource *texture; 
  unsigned __int16 v69; 
  unsigned int v72; 
  R_RT_Handle *v73; 
  ID3D12DeviceChild *v75; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  HRESULT v77; 
  const char *v78; 
  unsigned __int8 *ResidentPixels; 
  unsigned __int8 *v80; 
  DXGI_FORMAT v82; 
  ID3D12Resource *v83; 
  unsigned __int16 SurfaceID; 
  unsigned int size; 
  unsigned int mipCount; 
  unsigned int widtha; 
  R_RT_AllocationLockSentry v88; 
  unsigned int sampleCount; 
  unsigned int heighta; 
  void *mem; 
  unsigned __int8 outValue[32]; 
  unsigned int v93; 
  unsigned int v94; 
  D3D12_RESOURCE_STATES v95; 
  unsigned int v96; 
  char *v97; 
  ID3D12DeviceChild *resource; 
  R_RT_Handle *v99; 
  __int64 v100; 
  R_RT_Handle v101; 
  R_RT_DXResource_LayoutKey::Result resulta; 
  R_RT_DXResource_LayoutKey::Result v103; 
  _BYTE v104[64]; 
  __int128 v105; 

  v100 = -2i64;
  __asm { vmovaps [rsp+270h+var_50], xmm6 }
  v96 = allocWidth;
  heighta = height;
  widtha = width;
  v99 = result;
  v23 = rtFlags;
  v95 = initialState;
  v24 = name;
  resource = (ID3D12DeviceChild *)optionalDisplayContext;
  v97 = (char *)location;
  if ( width > allocWidth || height > allocHeight )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1934, ASSERT_TYPE_ASSERT, "(width <= allocWidth && height <= allocHeight)", (const char *)&queryFormat, "width <= allocWidth && height <= allocHeight") )
      __debugbreak();
    v24 = name;
  }
  if ( !placement && !tiledPlacement )
    IWMem_Profile_Push(v24);
  Profile_Begin(111);
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1947, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( width - 1 > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1950, ASSERT_TYPE_ASSERT, "(width > 0 && width <= g_R_RT_extentMax)", (const char *)&queryFormat, "width > 0 && width <= g_R_RT_extentMax") )
    __debugbreak();
  if ( height - 1 > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1951, ASSERT_TYPE_ASSERT, "(height > 0 && height <= g_R_RT_extentMax)", (const char *)&queryFormat, "height > 0 && height <= g_R_RT_extentMax") )
    __debugbreak();
  if ( mipLimit == 1 )
  {
    mipCount = 1;
  }
  else
  {
    v25 = Image_CountMipmaps(width, height, 1u);
    if ( mipLimit && v25 > mipLimit )
      v25 = mipLimit;
    mipCount = v25;
  }
  if ( (rtFlagsInternal & 0x3020) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1957, ASSERT_TYPE_ASSERT, "(( rtFlagsInternal & ( R_RT_FlagInternal_View | R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == 0)", (const char *)&queryFormat, "( rtFlagsInternal & ( R_RT_FlagInternal_View | R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == 0") )
    __debugbreak();
  if ( (frontendPass == 0) != ((BYTE1(rtFlagsInternal) & 1) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1958, ASSERT_TYPE_ASSERT, "(!frontendPass == !( rtFlagsInternal & R_RT_FlagInternal_Frontend ))", (const char *)&queryFormat, "!frontendPass == !( rtFlagsInternal & R_RT_FlagInternal_Frontend )") )
    __debugbreak();
  if ( !arraySliceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1959, ASSERT_TYPE_ASSERT, "(arraySliceCount > 0)", (const char *)&queryFormat, "arraySliceCount > 0") )
    __debugbreak();
  if ( (rtFlags & 0x60) == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1960, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_MaskESRAM ) != R_RT_Flag_MaskESRAM)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_MaskESRAM ) != R_RT_Flag_MaskESRAM") )
    __debugbreak();
  if ( placement && tiledPlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1961, ASSERT_TYPE_ASSERT, "(!placement || !tiledPlacement)", (const char *)&queryFormat, "!placement || !tiledPlacement") )
    __debugbreak();
  if ( (rtFlagsInternal & 3) != 0 || !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_esram, "r_esram") )
    v23 = rtFlags & 0xFFFFFF9F;
  isDepth = (rtFlagsInternal & 0x10) != 0;
  v27 = format;
  if ( isDepth != (unsigned int)(format - 20) <= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1975, ASSERT_TYPE_ASSERT, "(isDepth == R_RT_IsDepthFormat( format ))", (const char *)&queryFormat, "isDepth == R_RT_IsDepthFormat( format )") )
      __debugbreak();
    v27 = format;
  }
  v28 = v23 & 0xFFFFFF7F;
  if ( (rtFlagsInternal & 0x10) != 0 )
    v28 = v23;
  if ( (rtFlagsInternal & 0x10) != 0 )
  {
    if ( (unsigned int)v27 >= GFX_PF_D16 )
    {
      if ( (unsigned int)v27 <= GFX_PF_D32F )
      {
        v29 = 0;
        goto LABEL_55;
      }
      if ( v27 == GFX_PF_D32F_S8 )
      {
        v29 = 1;
LABEL_55:
        if ( ((v28 & 0x80) != 0) != v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1984, ASSERT_TYPE_ASSERT, "(!isDepth || (hasStencil == R_RT_DepthFormatHasStencil( format )))", (const char *)&queryFormat, "!isDepth || (hasStencil == R_RT_DepthFormatHasStencil( format ))") )
          __debugbreak();
        goto LABEL_58;
      }
    }
    CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_util_impl.h", 55, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
    __debugbreak();
  }
LABEL_58:
  v30 = v28 & 0xFFFFF7FF;
  if ( depth <= 1 )
    v30 = v28;
  v31 = (rtFlagsInternal & 0x10) != 0 && (v30 & 0x100) == 0 || (v30 & 0x8009) != 0;
  v32 = rtFlagsInternal | 0xC00;
  if ( !v31 )
    v32 = rtFlagsInternal;
  if ( (rtFlagsInternal & 0x10) == 0 && (v30 & 0x800) != 0 && !PixelFormat_IsRenderTargetValid(format) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1997, ASSERT_TYPE_ASSERT, "(!( !isDepth && ( ( rtFlags & R_RT_Flag_RTView) != 0 ) && !PixelFormat_IsRenderTargetValid( format ) ))", (const char *)&queryFormat, "!( !isDepth && ( ( rtFlags & R_RT_Flag_RTView) != 0 ) && !PixelFormat_IsRenderTargetValid( format ) )") )
    __debugbreak();
  Profile_Begin(112);
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v88);
  Profile_EndInternal(NULL);
  _RSI = R_RT_AllocSurface(widtha, height, depth, arraySliceCount, format, (R_RT_Flags)v30, v32, name, mipCount);
  SurfaceID = R_RT_GetSurfaceID(_RSI, 0);
  _RCX = clearColor;
  if ( (rtFlagsInternal & 0x10) != 0 )
  {
    _RSI->m_depth.m_clearDepth = clearColor->v[0];
  }
  else
  {
    _RSI->m_color.m_clearColor.v[0] = clearColor->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rsi+834h], xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vmovss  dword ptr [rsi+838h], xmm1
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vmovss  dword ptr [rsi+83Ch], xmm0
    }
  }
  v94 = v96;
  v93 = allocHeight;
  if ( (v32 & 0x10) != 0 )
  {
    widtha = (widtha + 7) & 0xFFFFFFF8;
    heighta = (height + 7) & 0xFFFFFFF8;
    v94 = (v96 + 7) & 0xFFFFFFF8;
    v93 = (allocHeight + 7) & 0xFFFFFFF8;
  }
  v38 = 4;
  if ( (v30 & 0x4000) == 0 )
    v38 = 1;
  sampleCount = v38;
  v39 = (unsigned int)v32 >> 4;
  LOBYTE(v39) = (v32 & 0x10) != 0;
  LODWORD(mem) = v39;
  v40 = ((v30 & 0x1000 | ((unsigned int)v30 >> 1) & 0x400) >> 5) | 8;
  if ( (v32 & 0x10) != 0 )
    v40 = 72;
  if ( (v30 & 8) != 0 && Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 559, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
    __debugbreak();
  miscFlags = ~(v30 << 19) & 0x80000 | ((v30 & 8) != 0 ? 0x408000 : 0);
  if ( (_BYTE)mem )
    miscFlags = (v30 & 0x100) != 0 ? 0x300000 : 0;
  _RAX = R_RT_DXResource_GetLayout(&resulta, widtha, heighta, depth, arraySliceCount, mipCount, sampleCount, format, v40, miscFlags, isDepth, 1, (R_RT_Flags)v30);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+170h+outValue], ymm0
    vmovups [rbp+170h+var_B0], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups [rbp+170h+var_170], ymm1
    vmovups [rbp+170h+var_90], ymm1
    vmovups xmm6, xmmword ptr [rax+40h]
    vmovups [rbp+170h+var_70], xmm6
  }
  _RAX = R_RT_DXResource_GetLayout(&v103, v94, v93, depth, arraySliceCount, mipCount, sampleCount, format, v40, miscFlags, isDepth, 0, (R_RT_Flags)v30);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vextractf128 xmm0, ymm2, 1
    vpextrd rcx, xmm0, 2
    vmovups ymm1, ymmword ptr [rbp+170h+outValue]
    vextractf128 xmm1, ymm1, 1
    vpextrd rax, xmm1, 2
  }
  if ( (unsigned int)_RAX > (unsigned int)_RCX )
    LODWORD(_RCX) = _RAX;
  size = _RCX;
  *(_DWORD *)&v104[24] = _RCX;
  __asm
  {
    vpextrb byte ptr [rsi+400h], xmm6, 0Ch
    vmovups ymm2, [rbp+170h+var_170]
    vpextrd dword ptr [rsi+41Ch], xmm2, 2
    vpextrd dword ptr [rsi+418h], xmm2, 3
    vextractf128 xmm0, ymm2, 1
    vmovd   dword ptr [rsi+424h], xmm0
    vextractf128 xmm1, ymm2, 1
    vpextrd dword ptr [rsi+420h], xmm1, 1
    vmovd   dword ptr [rsi+42Ch], xmm2
    vpextrd dword ptr [rsi+428h], xmm2, 1
  }
  if ( (rtFlagsInternal & 0x10) != 0 )
    _RSI->m_color.m_clearColor.v[0] = *((float *)&v105 + 2);
  R_RT_SetupPlacement(_RSI, placement, tiledPlacement);
  m_rtFlags = _RSI->m_rtFlags;
  m_rtFlagsInternal = _RSI->m_rtFlagsInternal;
  *(_WORD *)&outValue[8] = _RSI->m_image.m_base.width;
  *(_WORD *)&outValue[10] = _RSI->m_image.m_base.height;
  *(_WORD *)&outValue[12] = _RSI->m_image.m_base.depth;
  *(_WORD *)&outValue[14] = _RSI->m_image.m_base.numElements;
  outValue[16] = _RSI->m_image.m_base.levelCount;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(_RSI->m_image.m_base.format);
  TypelessFormat = R_D3D_MakeTypelessFormat(DXGIFormatForPixelFormat);
  outValue[17] = truncate_cast<unsigned char,enum DXGI_FORMAT>(TypelessFormat);
  m_rtFlagsInternal = (unsigned int)m_rtFlagsInternal >> 4;
  LOBYTE(m_rtFlagsInternal) = m_rtFlagsInternal & 1;
  LODWORD(mem) = m_rtFlagsInternal;
  if ( (_BYTE)m_rtFlagsInternal )
    v60 = 72;
  else
    v60 = ((m_rtFlags & 0x1000 | ((unsigned int)m_rtFlags >> 1) & 0x400) >> 5) | 8;
  truncate_store<unsigned char,unsigned int>(&outValue[18], v60);
  if ( (m_rtFlags & 8) != 0 && Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 559, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
    __debugbreak();
  v61 = ~(m_rtFlags << 19) & 0x80000 | ((m_rtFlags & 8) != 0 ? 0x408000 : 0);
  if ( (_BYTE)mem )
    v61 = (m_rtFlags & 0x100) != 0 ? 0x300000 : 0;
  *(_DWORD *)&outValue[20] = v61;
  outValue[24] = _RSI->m_image.m_tileMode;
  outValue[25] = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+170h+outValue]
    vmovups ymmword ptr [rbp+170h+outValue], ymm0
  }
  _RSI->m_tracking.m_memSize = size;
  if ( placement && (pixels = placement->pixels, (mem = pixels) != NULL) )
  {
    _RSI->m_rtFlagsInternal |= 0x4000u;
    v64 = name;
  }
  else
  {
    v64 = name;
    pixels = R_RT_AllocResourceMemory(size, _RSI->m_tiledPlacement, _RSI, (R_RT_Flags)v30, v32, name, frontendPass, v97);
    mem = pixels;
  }
  if ( (v30 & 0x400) != 0 )
  {
    if ( (v32 & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2146, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rtFlagsInternal ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rtFlagsInternal ) >= R_RT_Lifetime_MultiFrame") )
      __debugbreak();
    if ( !pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2147, ASSERT_TYPE_ASSERT, "(mem != 0)", (const char *)&queryFormat, "mem != NULL") )
      __debugbreak();
    memset_0(pixels, 0, size);
  }
  *(_QWORD *)outValue = &pixels[*(_QWORD *)&v104[8 * BYTE13(v105)]];
  _RSI->m_image.m_base.pixels.streamedDataHandle.data = (unsigned __int64)pixels;
  _RSI->m_image.m_base.totalSize = size;
  outValue[25] = sampleCount;
  *(_WORD *)&outValue[8] = truncate_cast<unsigned short,unsigned int>(widtha);
  *(_WORD *)&outValue[10] = truncate_cast<unsigned short,unsigned int>(heighta);
  v65 = (v32 & 0x40) != 0;
  v66 = 0;
  if ( placement )
    v66 = placement->texture && v65;
  v67 = v65 && !placement;
  if ( v66 )
  {
    if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2204, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
      __debugbreak();
    _RSI->m_rtFlagsInternal |= 0x4000u;
    texture = placement->texture;
    placement->texture->m_pFunction->AddRef(placement->texture);
    goto LABEL_127;
  }
  if ( v67 )
  {
    v75 = resource;
    if ( !resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2211, ASSERT_TYPE_ASSERT, "(optionalDisplayContext)", (const char *)&queryFormat, "optionalDisplayContext") )
      __debugbreak();
    m_pFunction = v75->m_pFunction;
    if ( !v75->m_pFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2214, ASSERT_TYPE_ASSERT, "(swapChain)", (const char *)&queryFormat, "swapChain") )
      __debugbreak();
    v77 = (*((__int64 (__fastcall **)(GraphicsUnknown_Function_Table *, _QWORD, GUID *, ID3D12DeviceChild **))m_pFunction->QueryInterface + 9))(m_pFunction, *((unsigned __int8 *)&v75->IGraphicsUnknown + 8), &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
    if ( v77 < 0 )
    {
      v78 = R_ErrorDescription(v77);
      Sys_Error((const ObfuscateErrorText)&stru_14442CC40, 2217i64, v78);
    }
    _RSI->m_rtFlagsInternal |= 0x80u;
    texture = (ID3D12Resource *)resource;
    if ( !resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2220, ASSERT_TYPE_ASSERT, "(textureResource)", (const char *)&queryFormat, "textureResource") )
      __debugbreak();
    PIXSetDebugName(texture, name);
    goto LABEL_127;
  }
  texture = R_RT_DXResource_CreateTexture((const R_RT_DXResource_TextureInfo *)outValue, v95, clearColor, &_RSI->m_color.m_pitch, v64);
  if ( (v30 & 0x8000) == 0 || !DWORD1(v105) )
  {
LABEL_127:
    v69 = SurfaceID;
    goto LABEL_128;
  }
  if ( (rtFlagsInternal & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2239, ASSERT_TYPE_ASSERT, "(!isDepth)", (const char *)&queryFormat, "!isDepth") )
    __debugbreak();
  v69 = SurfaceID;
  R_RT_CopyImageMetadata(&_RSI->m_color.m_fmaskImage, &_RSI->m_image, GFX_PF_R8_UINT, 1u, SurfaceID, Which_FMask);
  ResidentPixels = R_Image_GetResidentPixels(&_RSI->m_image.m_base);
  v80 = &ResidentPixels[(unsigned int)v105];
  _RSI->m_color.m_fmaskImage.m_base.pixels.streamedDataHandle.data = (unsigned __int64)v80;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+170h+outValue]
    vmovups ymmword ptr [rbp+170h+outValue], ymm0
  }
  *(_QWORD *)outValue = v80;
  v82 = R_D3D_GetDXGIFormatForPixelFormat(_RSI->m_color.m_fmaskImage.m_base.format);
  outValue[17] = truncate_cast<unsigned char,enum DXGI_FORMAT>(v82);
  outValue[25] = 1;
  v83 = R_RT_DXResource_CreateTexture((const R_RT_DXResource_TextureInfo *)outValue, v95, clearColor, NULL, name);
  R_Texture_GetResidentMutable(_RSI->m_color.m_fmaskImage.m_base.textureId)->basemap = v83;
LABEL_128:
  R_Texture_GetResidentMutable(_RSI->m_image.m_base.textureId)->basemap = texture;
  R_RT_CreateDXViews(_RSI, _RSI, -1, -1);
  R_RT_Tracking_BindSurfaceInfo(&_RSI->m_tracking, frontendPass, v97);
  R_RT_Tracking_AddSurfaceRecord(&_RSI->m_tracking, _RSI->m_rtFlagsInternal, v69, name, mem);
  _RBX = v99;
  R_RT_ConstructUnionHandle(v99, v69);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rbp+170h+var_170], ymm0
  }
  R_RT_AddViewsInternal(&v101, arraySliceCount, mipCount, name, frontendPass, v97);
  v72 = v96;
  _RSI->m_allocWidth = v96;
  _RSI->m_allocHeight = allocHeight;
  if ( (rtFlagsInternal & 0x10) != 0 )
  {
    _RSI->m_allocWidth = (v72 + 7) & 0xFFFFFFF8;
    _RSI->m_allocHeight = (allocHeight + 7) & 0xFFFFFFF8;
  }
  if ( !placement && !tiledPlacement )
    IWMem_Profile_Pop();
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v88);
  Profile_EndInternal(NULL);
  v73 = _RBX;
  __asm { vmovaps xmm6, [rsp+270h+var_50] }
  return v73;
}

/*
==============
R_RT_DestroyHeap
==============
*/
void R_RT_DestroyHeap(R_RT_HeapHandle handle)
{
  R_RT_Heap *v2; 
  unsigned __int8 *heapMemory; 
  R_RT_AllocationLockSentry v4; 

  if ( handle.m_heapID )
  {
    if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1320, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped", -2i64) )
      __debugbreak();
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v4);
    v2 = (R_RT_Heap *)((char *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2] + 40 * handle.m_heapID);
    heapMemory = v2->heapMemory;
    if ( heapMemory )
    {
      if ( v2->esram )
        goto LABEL_9;
      R_RT_Heap_Free(heapMemory);
    }
    if ( !v2->esram )
    {
LABEL_10:
      R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v4);
      return;
    }
LABEL_9:
    IWIndexedBlockAllocatorN<R_RT_Heap,unsigned short,16,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Heap,unsigned short>>::Free(&g_R_RT_Manager.m_heapAllocator, v2);
    goto LABEL_10;
  }
}

/*
==============
R_RT_DestroyInternal
==============
*/
void R_RT_DestroyInternal(R_RT_Surface *surface)
{
  const char *name; 
  unsigned __int16 SurfaceID; 
  unsigned __int8 m_esramAllocatorIndex; 
  unsigned __int8 *ResidentPixels; 

  Profile_Begin(114);
  if ( (surface->m_rtFlagsInternal & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2819, ASSERT_TYPE_ASSERT, "(!( surface->m_rtFlagsInternal & R_RT_FlagInternal_View ))", (const char *)&queryFormat, "!( surface->m_rtFlagsInternal & R_RT_FlagInternal_View )", -2i64) )
    __debugbreak();
  R_RT_AssertSafeToDestroy(surface);
  name = surface->m_image.m_base.name;
  SurfaceID = R_RT_GetSurfaceID(surface, 0);
  R_RT_Tracking_RemoveSurfaceRecord(&surface->m_tracking, SurfaceID, name);
  R_RT_Tracking_UnbindSurfaceInfo(&surface->m_tracking);
  R_RT_DestroyViews(surface);
  m_esramAllocatorIndex = surface->m_esramAllocatorIndex;
  if ( (surface->m_rtFlagsInternal & 0x4000) == 0 && m_esramAllocatorIndex != 0xFF )
  {
    if ( (surface->m_rtFlags & 0x60) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2839, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_MaskESRAM)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_MaskESRAM") )
      __debugbreak();
    if ( (surface->m_rtFlagsInternal & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2840, ASSERT_TYPE_ASSERT, "(!(surface->m_rtFlagsInternal & R_RT_FlagInternal_View))", (const char *)&queryFormat, "!(surface->m_rtFlagsInternal & R_RT_FlagInternal_View)") )
      __debugbreak();
    ResidentPixels = R_Image_GetResidentPixels(&surface->m_image.m_base);
    if ( (unsigned __int64)(ResidentPixels - g_R_RT_ESRAM.m_base) >= 0x2000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2842, ASSERT_TYPE_ASSERT, "(R_RT_ESRAM_IsValidAddress( mem ))", (const char *)&queryFormat, "R_RT_ESRAM_IsValidAddress( mem )") )
      __debugbreak();
    R_RT_ESRAM_Free(m_esramAllocatorIndex, ResidentPixels, surface->m_allocSize);
    surface->m_esramAllocatorIndex = -1;
  }
  R_RT_DestroyNow(surface);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_DestroyInternal
==============
*/
void R_RT_DestroyInternal(R_RT_Handle *rt)
{
  R_RT_Surface *Surface; 
  R_RT_Handle v4; 
  R_RT_AllocationLockSentry v5; 

  _RBX = rt;
  if ( R_RT_Handle::IsValid(rt) )
  {
    Profile_Begin(114);
    Profile_Begin(115);
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v5);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+68h+var_38.m_surfaceID], ymm0
    }
    Surface = (R_RT_Surface *)R_RT_Handle::GetSurface(&v4);
    R_RT_DestroyInternal(Surface);
    R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v5);
    Profile_EndInternal(NULL);
  }
}

/*
==============
R_RT_DestroyNow
==============
*/
void R_RT_DestroyNow(R_RT_Surface *surface)
{
  unsigned int i; 
  R_RT_Surface *v7; 
  unsigned __int8 *ResidentPixels; 
  unsigned __int16 SurfaceID; 
  int v10; 
  const unsigned __int8 *v11; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  R_RT_Handle v13; 
  R_RT_AllocationLockSentry v14; 

  _RSI = surface;
  if ( surface->m_link.m_base.m_headViewSurfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2739, ASSERT_TYPE_ASSERT, "(surface->m_link.m_base.m_headViewSurfaceID == 0)", (const char *)&queryFormat, "surface->m_link.m_base.m_headViewSurfaceID == 0", -2i64) )
    __debugbreak();
  if ( (_RSI->m_rtFlagsInternal & 4) != 0 )
  {
    Profile_EndInternal(NULL);
    for ( i = 0; i < _RSI->m_array.m_handleCount; ++i )
    {
      _RAX = 32i64 * i;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rsi+438h]
        vmovups ymmword ptr [rsp+88h+var_48.m_surfaceID], ymm0
        vmovd   eax, xmm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v13);
        Profile_Begin(114);
        Profile_Begin(115);
        R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v14);
        Profile_EndInternal(NULL);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+88h+var_48.m_surfaceID]
          vmovups ymmword ptr [rsp+88h+var_48.m_surfaceID], ymm0
        }
        v7 = (R_RT_Surface *)R_RT_Handle::GetSurface(&v13);
        R_RT_DestroyInternal(v7);
        R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v14);
        Profile_EndInternal(NULL);
      }
      else if ( v13.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      {
        __debugbreak();
      }
    }
    Profile_Begin(114);
  }
  ResidentPixels = R_Image_GetResidentPixels(&_RSI->m_image.m_base);
  if ( (_RSI->m_rtFlagsInternal & 0x4000) == 0 )
  {
    if ( (unsigned __int64)(ResidentPixels - g_R_RT_ESRAM.m_base) >= 0x2000000 )
    {
      R_RT_Heap_Free(ResidentPixels);
    }
    else
    {
      if ( (_RSI->m_rtFlags & 0x60) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2757, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_MaskESRAM)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_MaskESRAM") )
        __debugbreak();
      if ( _RSI->m_esramAllocatorIndex != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2758, ASSERT_TYPE_ASSERT, "(surface->m_esramAllocatorIndex == g_R_RT_ESRAM_invalidAllocatorIndex)", (const char *)&queryFormat, "surface->m_esramAllocatorIndex == g_R_RT_ESRAM_invalidAllocatorIndex") )
        __debugbreak();
    }
  }
  if ( g_R_RT_Manager.m_delay )
  {
    _RSI->m_image.m_base.pixels.streamedDataHandle.data = 0i64;
    SurfaceID = R_RT_GetSurfaceID(_RSI, 0);
    v10 = _RSI->m_rtFlagsInternal | 0x2000;
    _RSI->m_rtFlagsInternal = v10;
    _RSI->nextFreeBlockIndex = s_R_RT_ManagerInternal.m_headAbandonedSurfaceID;
    _RSI->m_abandonedFrameCount = 0;
    s_R_RT_ManagerInternal.m_headAbandonedSurfaceID = SurfaceID;
    v11 = R_Image_GetResidentPixels(&_RSI->m_image.m_base);
    R_RT_Tracking_AddSurfaceRecord(&_RSI->m_tracking, (R_RT_FlagsInternal)v10, SurfaceID, _RSI->m_image.m_base.name, v11);
  }
  else
  {
    m_rtFlagsInternal = _RSI->m_rtFlagsInternal;
    if ( (m_rtFlagsInternal & 4) == 0 )
    {
      if ( (m_rtFlagsInternal & 8) != 0 )
        R_ShutdownGfxWrappedBuffer((GfxWrappedRWBuffer *)&_RSI->1080);
      else
        R_RT_DestroySurfaceResources(_RSI);
    }
    R_RT_FreeSurface(_RSI);
  }
}

/*
==============
R_RT_DestroySurfaceResources
==============
*/
void R_RT_DestroySurfaceResources(R_RT_Surface *surface)
{
  R_RT_FlagsInternal m_rtFlagsInternal; 
  GfxTexture *ResidentMutable; 
  int v4; 
  GfxTexture *v5; 
  R_RT_Flags m_rtFlags; 

  R_RT_ReleaseDXViews(surface);
  m_rtFlagsInternal = surface->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x20) != 0 )
  {
    ResidentMutable = R_Texture_GetResidentMutable(surface->m_image.m_base.textureId);
    if ( !ResidentMutable->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2656, ASSERT_TYPE_ASSERT, "(surfaceTexture->map)", (const char *)&queryFormat, "surfaceTexture->map") )
      __debugbreak();
    ResidentMutable->basemap = NULL;
    if ( !R_Texture_IsDestroyed(surface->m_image.m_base.textureId) )
    {
      v4 = 2658;
      goto LABEL_13;
    }
  }
  else if ( (m_rtFlagsInternal & 0xC080) != 0 )
  {
    v5 = R_Texture_GetResidentMutable(surface->m_image.m_base.textureId);
    if ( !v5->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2665, ASSERT_TYPE_ASSERT, "(surfaceTexture->map)", (const char *)&queryFormat, "surfaceTexture->map") )
      __debugbreak();
    v5->basemap->m_pFunction->Release(v5->basemap);
    v5->basemap = NULL;
    if ( !R_Texture_IsDestroyed(surface->m_image.m_base.textureId) )
    {
      v4 = 2668;
LABEL_13:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", v4, ASSERT_TYPE_ASSERT, "( ( R_Texture_IsDestroyed( surface->m_image.m_base.textureId ) ) )", "( surface->m_image.m_base.name ) = %s", surface->m_image.m_base.name) )
        __debugbreak();
    }
  }
  Image_Release(&surface->m_image.m_base);
  m_rtFlags = surface->m_rtFlags;
  if ( (surface->m_rtFlagsInternal & 0x10) != 0 )
  {
    if ( (m_rtFlags & 0x80u) == 0 )
      return;
  }
  else if ( (m_rtFlags & 0x8000) == 0 )
  {
    return;
  }
  Image_Release(&surface->m_color.m_fmaskImage.m_base);
}

/*
==============
R_RT_DestroyViews
==============
*/
void R_RT_DestroyViews(R_RT_Surface *surface)
{
  R_RT_Surface *v1; 
  unsigned __int64 v2; 
  unsigned __int16 v3; 
  signed __int16 m_headViewSurfaceID; 
  unsigned __int16 v5; 
  int v6; 
  R_RT_Surface *v7; 
  unsigned int m_allocCounter; 
  int v9; 
  unsigned __int16 v10; 
  void *v11; 

  v1 = surface;
  v2 = (__int64)((unsigned __int128)(((char *)surface - (char *)g_R_RT_Manager.m_surfaceAllocator.blocks) * (__int128)0x3759F22983759F23i64) >> 64) >> 9;
  v3 = R_RT_SurfaceIndexToID((v2 >> 63) + v2, 0);
  m_headViewSurfaceID = v1->m_link.m_base.m_headViewSurfaceID;
  v5 = v3;
  v6 = 0;
  if ( m_headViewSurfaceID )
  {
    do
    {
      if ( m_headViewSurfaceID < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 156, ASSERT_TYPE_ASSERT, "(!R_RT_IsReadOnlySurfaceID( surfaceID ))", (const char *)&queryFormat, "!R_RT_IsReadOnlySurfaceID( surfaceID )") )
        __debugbreak();
      v7 = &g_R_RT_Manager.m_surfaceAllocator.blocks[(unsigned __int16)((m_headViewSurfaceID & 0x7FFF) - 1)];
      if ( v7->m_link.m_base.m_headViewSurfaceID != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2700, ASSERT_TYPE_ASSERT, "(viewSurface->m_link.m_view.m_baseSurfaceID == surfaceID)", (const char *)&queryFormat, "viewSurface->m_link.m_view.m_baseSurfaceID == surfaceID") )
        __debugbreak();
      R_RT_AssertSafeToDestroy(v7);
      R_RT_Tracking_RemoveSurfaceRecord(&v7->m_tracking, m_headViewSurfaceID, v7->m_image.m_base.name);
      m_allocCounter = v7->m_tracking.m_allocCounter;
      if ( !m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1299, ASSERT_TYPE_ASSERT, "(oldAllocCounter)", (const char *)&queryFormat, "oldAllocCounter") )
        __debugbreak();
      v9 = 1;
      if ( m_allocCounter != -1 )
        v9 = m_allocCounter + 1;
      v7->m_tracking.m_allocCounter = v9;
      m_headViewSurfaceID = v7->m_link.m_base.m_tailViewSurfaceID;
      R_RT_DestroySurfaceResources(v7);
      R_RT_FreeSurface(v7);
      ++v6;
    }
    while ( m_headViewSurfaceID );
    v1 = surface;
    if ( v6 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v10 = (v5 & 0x7FFF) - 1;
      v11 = *(void **)&g_R_RT_Manager.m_viewCachePoolData[4 * v10 - 0x4000];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2719, ASSERT_TYPE_ASSERT, "(viewCacheSurfaceBlock)", (const char *)&queryFormat, "viewCacheSurfaceBlock") )
        __debugbreak();
      memset_0(v11, 0, (unsigned int)(2 * v6));
      PagedHeap<2,4096,0>::Free(&g_R_RT_Manager.m_viewHeap, v11);
      *(_QWORD *)&g_R_RT_Manager.m_viewCachePoolData[4 * v10 - 0x4000] = 0i64;
    }
  }
  v1->m_link = 0;
}

/*
==============
R_RT_FreeSurface
==============
*/
void R_RT_FreeSurface(R_RT_Surface *surface)
{
  GfxTextureId textureId; 
  GfxTextureId v3; 
  unsigned int m_allocCounter; 
  unsigned __int64 v5; 

  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 478, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( (surface->m_rtFlagsInternal & 0x5000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 479, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
    __debugbreak();
  if ( (surface->m_rtFlagsInternal & 0xC) == 0 && ((textureId = surface->m_image.m_base.textureId) != NULLID && !R_Texture_IsDestroyed(textureId) || (v3 = surface->m_color.m_fmaskImage.m_base.textureId) != NULLID && !R_Texture_IsDestroyed(v3)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 480, ASSERT_TYPE_ASSERT, "(R_RT_AreAllImagesDestroyed( surface ))", (const char *)&queryFormat, "R_RT_AreAllImagesDestroyed( surface )") )
    __debugbreak();
  if ( surface->m_tracking.m_refCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 483, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_refCount == 0)", (const char *)&queryFormat, "surface->m_tracking.m_refCount == 0") )
    __debugbreak();
  if ( surface->m_tracking.m_refRecordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 484, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_refRecordCount == 0)", (const char *)&queryFormat, "surface->m_tracking.m_refRecordCount == 0") )
    __debugbreak();
  m_allocCounter = surface->m_tracking.m_allocCounter;
  memset_0(surface, 0, sizeof(R_RT_Surface));
  if ( !g_R_RT_Manager.m_surfaceAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 82, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
    __debugbreak();
  v5 = ((char *)surface - (char *)&g_R_RT_Manager.m_surfaceAllocator - 8) / 2368;
  if ( v5 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 85, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
    __debugbreak();
  if ( v5 == g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 86, ASSERT_TYPE_ASSERT, "(index != this->headFreeBlockIndex)", (const char *)&queryFormat, "index != this->headFreeBlockIndex") )
    __debugbreak();
  surface->nextFreeBlockIndex = g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex;
  g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex = ((char *)surface - (char *)&g_R_RT_Manager.m_surfaceAllocator - 8) / 2368;
  surface->m_tracking.m_allocCounter = m_allocCounter;
}

/*
==============
R_RT_GetBufferSizeAlign
==============
*/
void R_RT_GetBufferSizeAlign(unsigned int elemSize, unsigned int numElems, R_RT_Flags rtFlags, bool *inOutTiledAlloc, unsigned int *outSize, unsigned int *outAlign)
{
  *outSize = numElems * elemSize;
  *outAlign = 256;
}

/*
==============
R_RT_GetCommitSize
==============
*/
__int64 R_RT_GetCommitSize()
{
  return g_R_RT_Manager.m_commitSize;
}

/*
==============
R_RT_GetCommitSizeMax
==============
*/
__int64 R_RT_GetCommitSizeMax()
{
  return g_R_RT_Manager.m_commitSizeMax;
}

/*
==============
R_RT_GetHeapIndex
==============
*/
__int64 R_RT_GetHeapIndex(R_RT_Heap *heap)
{
  unsigned __int64 v1; 

  v1 = ((char *)heap - (char *)&g_R_RT_Manager.m_heapAllocator - 8) / 40;
  if ( v1 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 64, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
    __debugbreak();
  return (unsigned int)(v1 + 1);
}

/*
==============
R_RT_GetHeapPlacement
==============
*/
R_RT_Placement *R_RT_GetHeapPlacement(R_RT_Placement *result, R_RT_HeapHandle heap, unsigned int heapOffset)
{
  result->texture = NULL;
  result->pixels = (unsigned __int8 *)(*((_QWORD *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[3].m_colorRtIndex + 5 * heap.m_heapID) + heapOffset);
  return result;
}

/*
==============
R_RT_GetImageSizeAlign
==============
*/
void R_RT_GetImageSizeAlign(unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxPixelFormat format, unsigned int multisample, R_RT_Flags rtFlags, bool *inOutTiledAlloc, unsigned int *outSize, unsigned int *outAlign)
{
  unsigned int mipCount; 
  unsigned int v13; 
  unsigned __int32 v14; 
  unsigned __int32 bindFlags; 
  __int32 miscFlags; 
  R_RT_DXResource_LayoutKey::Result result; 

  if ( mipLimit == 1 )
  {
    mipCount = 1;
  }
  else
  {
    v13 = Image_CountMipmaps(width, height, 1u);
    mipCount = v13;
    if ( mipLimit && v13 > mipLimit )
      mipCount = mipLimit;
  }
  v14 = format - 20;
  if ( multisample > 1 && (rtFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1829, ASSERT_TYPE_ASSERT, "(!( multisample > 1 && !( rtFlags & R_RT_Flag_MS_4xSwizzle ) ))", (const char *)&queryFormat, "!( multisample > 1 && !( rtFlags & R_RT_Flag_MS_4xSwizzle ) )") )
    __debugbreak();
  if ( v14 > 2 )
    bindFlags = (rtFlags & 0x1000 | ((rtFlags & 0x800 | 0x200u) >> 1)) >> 5;
  else
    bindFlags = 72;
  if ( (rtFlags & 8) != 0 && Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 559, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_Dcc ) == 0 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
    __debugbreak();
  miscFlags = ((rtFlags & 8) != 0 ? 0x408000 : 0) | ~(rtFlags << 19) & 0x80000;
  if ( v14 <= 2 )
    miscFlags = (rtFlags & 0x100) != 0 ? 0x300000 : 0;
  _RAX = R_RT_DXResource_GetLayout(&result, width, height, depth, arraySliceCount, mipCount, multisample, format, bindFlags, miscFlags, (unsigned int)(format - 20) <= 2, 0, rtFlags);
  __asm { vmovups ymm2, ymmword ptr [rax] }
  _RAX = outSize;
  __asm
  {
    vextractf128 xmm0, ymm2, 1
    vpextrd dword ptr [rax], xmm0, 2
    vextractf128 xmm0, ymm2, 1
    vpextrq rcx, xmm0, 1
  }
  *outAlign = HIDWORD(_RCX);
}

/*
==============
R_RT_GetViewInternal
==============
*/
R_RT_Handle *R_RT_GetViewInternal(R_RT_Handle *result, R_RT_Handle *baseRt, int optionalArraySliceIndex, int optionalMipLevel)
{
  unsigned int v8; 
  unsigned int v9; 
  const R_RT_Surface *Surface; 
  unsigned int levelCount; 
  unsigned int numElements; 
  unsigned __int16 m_surfaceID; 
  __int64 v15; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  unsigned int m_allocCounter; 
  const char *m_location; 
  const char *m_name; 
  char *v22; 
  int v23; 
  unsigned __int16 v24; 
  char *v25; 
  int v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  R_RT_Handle *v29; 
  __int64 v30; 
  __int64 v31; 
  R_RT_Handle resulta; 

  _R12 = baseRt;
  _R15 = result;
  if ( optionalArraySliceIndex < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2556, ASSERT_TYPE_ASSERT, "(optionalArraySliceIndex >= -1)", (const char *)&queryFormat, "optionalArraySliceIndex >= -1") )
    __debugbreak();
  if ( optionalMipLevel < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2557, ASSERT_TYPE_ASSERT, "(optionalMipLevel >= -1)", (const char *)&queryFormat, "optionalMipLevel >= -1") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  if ( optionalArraySliceIndex > 0 )
    v9 = optionalArraySliceIndex;
  if ( optionalMipLevel > 0 )
    v8 = optionalMipLevel;
  Surface = R_RT_Handle::GetSurface(_R12);
  levelCount = Surface->m_image.m_base.levelCount;
  numElements = Surface->m_image.m_base.numElements;
  if ( numElements * levelCount == 1 )
  {
    __asm { vmovups ymm0, ymmword ptr [r12] }
  }
  else
  {
    m_surfaceID = _R12->m_surfaceID;
    if ( !_R12->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v15 = *(_QWORD *)&g_R_RT_Manager.m_viewCachePoolData[4 * (unsigned __int16)((m_surfaceID & 0x7FFF) - 1) - 0x4000];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2574, ASSERT_TYPE_ASSERT, "(surfaces)", (const char *)&queryFormat, "surfaces") )
      __debugbreak();
    if ( v8 >= levelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2576, ASSERT_TYPE_ASSERT, "(mip < baseMipCount)", (const char *)&queryFormat, "mip < baseMipCount") )
      __debugbreak();
    if ( v9 >= numElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2577, ASSERT_TYPE_ASSERT, "(slice < baseArraySliceCount)", (const char *)&queryFormat, "slice < baseArraySliceCount") )
      __debugbreak();
    v16 = R_RT_SurfaceIndexToID(*(unsigned __int16 *)(v15 + 2i64 * (v8 + v9 * levelCount)), 0);
    R_RT_ConstructUnionHandle(&resulta, v16);
    v17 = resulta.m_surfaceID;
    if ( !resulta.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v18 = (v17 & 0x7FFF) - 1;
    if ( v18 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    m_allocCounter = resulta.m_tracking.m_allocCounter;
    m_location = resulta.m_tracking.m_location;
    m_name = resulta.m_tracking.m_name;
    v22 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v18;
    if ( *((_DWORD *)v22 + 572) != resulta.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", *((_DWORD *)v22 + 572), resulta.m_tracking.m_allocCounter, resulta.m_tracking.m_name, resulta.m_tracking.m_location) )
      __debugbreak();
    v23 = *((_DWORD *)v22 + 4);
    if ( (v23 & 0x3000) != 4096 && (v23 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
      __debugbreak();
    if ( (*((_DWORD *)v22 + 4) & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2582, ASSERT_TYPE_ASSERT, "(( viewRtHandle.GetSurface()->m_rtFlagsInternal & R_RT_FlagInternal_View))", (const char *)&queryFormat, "( viewRtHandle.GetSurface()->m_rtFlagsInternal & R_RT_FlagInternal_View)") )
      __debugbreak();
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v24 = (v17 & 0x7FFF) - 1;
    if ( v24 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    v25 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v24;
    if ( *((_DWORD *)v25 + 572) != m_allocCounter )
    {
      LODWORD(v31) = m_allocCounter;
      LODWORD(v30) = *((_DWORD *)v25 + 572);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v30, v31, m_name, m_location) )
        __debugbreak();
    }
    v26 = *((_DWORD *)v25 + 4);
    if ( (v26 & 0x3000) != 4096 && (v26 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
      __debugbreak();
    v27 = *((_WORD *)v25 + 10);
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v28 = _R12->m_surfaceID;
    if ( !_R12->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    if ( ((v27 ^ v28) & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 2583, ASSERT_TYPE_ASSERT, "(R_RT_SurfaceIDToIndex( viewRtHandle.GetSurface()->m_link.m_base.m_headViewSurfaceID ) == baseRt.GetSurfaceIndex())", (const char *)&queryFormat, "R_RT_SurfaceIDToIndex( viewRtHandle.GetSurface()->m_link.m_base.m_headViewSurfaceID ) == baseRt.GetSurfaceIndex()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rsp+98h+result.m_surfaceID] }
  }
  v29 = _R15;
  __asm { vmovups ymmword ptr [r15], ymm0 }
  return v29;
}

/*
==============
R_RT_GetViewSourceFromImage
==============
*/
void R_RT_GetViewSourceFromImage(R_RT_DXResource_ViewSource *viewSource, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const R_RT_Image *rtImage)
{
  char v6; 
  __int16 v7; 
  GfxPixelFormat format; 
  unsigned __int8 v9; 

  v6 = rtFlagsInternal;
  v7 = rtFlags;
  viewSource->m_resource = R_Texture_GetResident(rtImage->m_base.textureId)->basemap;
  viewSource->m_depth = rtImage->m_base.depth;
  viewSource->m_arraySliceCount = rtImage->m_base.numElements;
  viewSource->m_mipCount = rtImage->m_base.levelCount;
  viewSource->m_isDepth = (v6 & 0x10) != 0;
  format = rtImage->m_base.format;
  if ( (unsigned int)format > (GFX_PF_COUNT|GFX_PF_R16_SNORM|0xC0) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum GfxPixelFormat>(enum GfxPixelFormat)", "unsigned", (unsigned __int8)format, "unsigned", (unsigned int)rtImage->m_base.format) )
    __debugbreak();
  viewSource->m_format = format;
  viewSource->m_tileMode = rtImage->m_tileMode;
  v9 = 1;
  if ( (v7 & 0x4000) != 0 )
    v9 = 4;
  viewSource->m_sampleCount = v9;
  viewSource->m_mem = (unsigned __int64)R_Image_GetResidentPixels(&rtImage->m_base);
}

/*
==============
R_RT_Manager_Shutdown
==============
*/
void R_RT_Manager_Shutdown(void)
{
  R_RT_Surface *blocks; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v1; 
  __int64 v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3192, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3193, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "g_R_RT_Manager.m_startuped") )
    __debugbreak();
  if ( g_R_RT_Manager.m_insideBackendFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3194, ASSERT_TYPE_ASSERT, "(!g_R_RT_Manager.m_insideBackendFrame)", (const char *)&queryFormat, "!g_R_RT_Manager.m_insideBackendFrame") )
    __debugbreak();
  R_RT_UpdateAbandonedSurfaces(0);
  blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
  v1 = g_R_RT_ManagerSurfaceAllocator + 1;
  if ( g_R_RT_ManagerSurfaceAllocator->blocks != (R_RT_Surface *)&g_R_RT_ManagerSurfaceAllocator[1] )
  {
    do
    {
      if ( (blocks->m_rtFlagsInternal & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3206, ASSERT_TYPE_ASSERT, "(!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Allocated ))", "%s\n\tShutdown RT leak: %s (allocated at %s)", "!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Allocated )", blocks->m_image.m_base.name, blocks->m_tracking.m_location) )
        __debugbreak();
      ++blocks;
    }
    while ( blocks != (R_RT_Surface *)v1 );
  }
  s_R_RT_Tracking.m_surfaceRefLock.initialized = 0;
  if ( s_R_RT_Tracking.m_surfaceRefLock.acquireLock )
  {
    LODWORD(v2) = s_R_RT_Tracking.m_surfaceRefLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", v2, 0i64) )
      __debugbreak();
  }
  if ( s_R_RT_Tracking.m_surfaceRefLock.writeThreadId )
  {
    LODWORD(v2) = s_R_RT_Tracking.m_surfaceRefLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64) )
      __debugbreak();
  }
  s_R_RT_Tracking.m_imageRefLock.initialized = 0;
  if ( s_R_RT_Tracking.m_imageRefLock.acquireLock )
  {
    LODWORD(v2) = s_R_RT_Tracking.m_imageRefLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", v2, 0i64) )
      __debugbreak();
  }
  if ( s_R_RT_Tracking.m_imageRefLock.writeThreadId )
  {
    LODWORD(v2) = s_R_RT_Tracking.m_imageRefLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64) )
      __debugbreak();
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 86, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    if ( !s_R_RT_ESRAM_Internal.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 89, ASSERT_TYPE_ASSERT, "(s_R_RT_ESRAM_Internal.m_startuped)", (const char *)&queryFormat, "s_R_RT_ESRAM_Internal.m_startuped") )
      __debugbreak();
    g_R_RT_ESRAM.m_base = NULL;
    s_R_RT_ESRAM_Internal.m_startuped = 0;
  }
  else
  {
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 95, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
      __debugbreak();
    if ( g_R_RT_ESRAM.m_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_esram_impl.h", 96, ASSERT_TYPE_ASSERT, "(!R_RT_ESRAM_IsEnabled())", (const char *)&queryFormat, "!R_RT_ESRAM_IsEnabled()") )
      __debugbreak();
  }
  R_RT_Heap_Shutdown();
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 217, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "INCOMPLETE") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 59, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_R_RT_common.m_frontend = 0;
  if ( (s_R_RT_common.m_allocationMutex.readCount || s_R_RT_common.m_allocationMutex.writeCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 62, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationMutex.readCount == 0 && s_R_RT_common.m_allocationMutex.writeCount == 0)", (const char *)&queryFormat, "s_R_RT_common.m_allocationMutex.readCount == 0 && s_R_RT_common.m_allocationMutex.writeCount == 0") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 63, ASSERT_TYPE_ASSERT, "(s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked)", (const char *)&queryFormat, "s_R_RT_common.m_allocationLockMode == R_RT_AllocationLockMode_Unlocked") )
    __debugbreak();
  memset_0(&g_R_RT_Manager.m_surfaceAllocator, 0, sizeof(g_R_RT_Manager.m_surfaceAllocator));
  g_R_RT_Manager.m_startuped = 0;
  memset_0(g_R_RT_Manager.m_viewCacheSurfaceBlocks, 0, 0xA000ui64);
}

/*
==============
R_RT_Manager_Startup
==============
*/
void R_RT_Manager_Startup(void)
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v1; 
  __int64 v2; 
  __int64 i; 
  IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *p_map; 
  __int64 v5; 
  __int64 v6; 
  __int64 j; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  R_RT_Tracking_SurfaceRecord *m_records; 
  __int64 v13; 
  __int64 v14; 
  R_RT_Tracking_SurfaceRecord *v15; 
  R_RT_Tracking_SurfaceRecord *v16; 
  __int64 v17; 
  unsigned __int8 *p_m_refCount; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3133, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  g_R_RT_Manager.m_delay = R_RT_DELAY_RESOURCE;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 35, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  s_R_RT_common.m_frontend = (R_RT_CommonInternal::<unnamed_type_m_frontend>)268369921;
  v1 = 0x10000;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v1 = 0x20000;
  g_R_RT_surfaceMemoryAlignMin = v1;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.readCount = 0i64;
  s_R_RT_common.m_allocationMutex.tempPriority.threadHandle = NULL;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&s_R_RT_common.m_allocationMutex.writeThreadId = 0i64;
  s_R_RT_common.m_allocationLockMode = R_RT_AllocationLockMode_Unlocked;
  DebugWipe(s_R_RT_DXResource.layoutTable.allocator.blocks, 0x70000ui64);
  s_R_RT_DXResource.layoutTable.allocator.reset = 1;
  v2 = 0i64;
  for ( i = 0i64; i != 4095; ++i )
    s_R_RT_DXResource.layoutTable.allocator.blocks[i].nextFreeBlockIndex = ++v2;
  s_R_RT_DXResource.layoutTable.allocator.headFreeBlockIndex = 0;
  p_map = &s_R_RT_DXResource.layoutTable.map;
  s_R_RT_DXResource.layoutTable.allocator.blocks[4095].nextFreeBlockIndex = -1;
  v5 = 0x4000i64;
  s_R_RT_DXResource.layoutTable.lruList = (IWDoublyLinkedList<unsigned short,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::ListNodeAccessor>)-1;
  while ( v5 )
  {
    p_map->buckets[0].headNodeIndex = -1;
    p_map = (IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *)((char *)p_map + 2);
    --v5;
  }
  R_RT_Heap_Startup();
  R_RT_ESRAM_Startup();
  if ( g_R_RT_Manager.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3163, ASSERT_TYPE_ASSERT, "(!g_R_RT_Manager.m_startuped)", (const char *)&queryFormat, "!g_R_RT_Manager.m_startuped") )
    __debugbreak();
  g_R_RT_Manager.m_startuped = 1;
  memset_0(g_R_RT_Manager.m_surfaceAllocator.blocks, 0, sizeof(g_R_RT_Manager.m_surfaceAllocator.blocks));
  v6 = 0i64;
  g_R_RT_Manager.m_surfaceAllocator.reset = 1;
  for ( j = 0i64; j != 4095; ++j )
    g_R_RT_Manager.m_surfaceAllocator.blocks[j].nextFreeBlockIndex = ++v6;
  g_R_RT_Manager.m_surfaceAllocator.blocks[4095].nextFreeBlockIndex = -1;
  g_R_RT_ManagerSurfaceAllocator = &g_R_RT_Manager.m_surfaceAllocator;
  v8 = 0i64;
  g_R_RT_Manager.m_surfaceAllocator.headFreeBlockIndex = 0;
  v9 = 0i64;
  s_R_RT_ManagerInternal.m_headAbandonedSurfaceID = 0;
  g_R_RT_Manager.m_heapAllocator.reset = 1;
  do
    g_R_RT_Manager.m_heapAllocator.blocks[v9++].nextFreeBlockIndex = ++v8;
  while ( v9 != 15 );
  g_R_RT_Manager.m_heapAllocator.blocks[15].nextFreeBlockIndex = -1;
  v10 = 0i64;
  g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex = 0;
  v11 = 0i64;
  g_R_RT_Manager.m_tiledPlacementAllocator.reset = 1;
  do
    g_R_RT_Manager.m_tiledPlacementAllocator.blocks[v11++].nextFreeBlockIndex = ++v10;
  while ( v11 != 319 );
  g_R_RT_Manager.m_tiledPlacementAllocator.blocks[319].nextFreeBlockIndex = -1;
  m_records = s_R_RT_Tracking.m_surfacePools[0].m_records;
  g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex = 0;
  v13 = 5i64;
  do
  {
    v14 = *(unsigned int *)&m_records[-1].m_surfaceID;
    v15 = m_records;
    *(_DWORD *)&m_records[-1].m_surfaceID = 0;
    v16 = &m_records[v14];
    if ( m_records != v16 )
    {
      do
      {
        v15->m_name = NULL;
        v15->m_mem = NULL;
        v15->m_surfaceID = 0;
        ++v15;
      }
      while ( v15 != v16 );
    }
    m_records = (R_RT_Tracking_SurfaceRecord *)((char *)m_records + 98312);
    --v13;
  }
  while ( v13 );
  Cmd_AddCommandInternal("r_rtDump", R_RT_Tracking_DumpCommand, &stru_153B7E258);
  Dvar_BeginPermanentRegistration();
  s_R_RT_Tracking.r_rtStats = Dvar_RegisterBool("NRKMKLNNP", 0, 4u, "Show RT allocation stats.");
  s_R_RT_Tracking.r_rtSurfaceOrder = Dvar_RegisterEnum("NNTQSSRMSP", s_R_RT_Tracking_surfaceOrderingEnumNames, 0, 4u, "RT surface dump row ordering mode.");
  s_R_RT_Tracking.r_rtAllocOrder = Dvar_RegisterEnum("LQNSTNPPMT", s_R_RT_Tracking_allocOrderingEnumNames, 0, 4u, "RT allocation dump row ordering mode.");
  Dvar_EndPermanentRegistration();
  s_R_RT_Tracking.m_commitRecordQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_commitRecordQueue.start = 0;
  s_R_RT_Tracking.m_decommitRecordQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_decommitRecordQueue.start = 0;
  s_R_RT_Tracking.m_totalsQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_totalsQueue.start = 0;
  InitializeSRWLock((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  s_R_RT_Tracking.m_surfaceRefLock.initialized = -1412623820;
  s_R_RT_Tracking.m_surfaceRefLock.acquireLock = 0;
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = 0;
  InitializeSRWLock((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
  s_R_RT_Tracking.m_imageRefLock.initialized = -1412623820;
  v17 = 4096i64;
  s_R_RT_Tracking.m_imageRefLock.acquireLock = 0;
  s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
  p_m_refCount = &g_R_RT_Manager.m_surfaceAllocator.blocks[0].m_tracking.m_refCount;
  do
  {
    DebugWipe(p_m_refCount - 13, 0x58ui64);
    *(_DWORD *)(p_m_refCount - 13) = 1;
    *(_WORD *)(p_m_refCount - 1) = 255;
    p_m_refCount[1] = 0;
    p_m_refCount += 2368;
    --v17;
  }
  while ( v17 );
  PagedHeap<2,4096,0>::Init(&g_R_RT_Manager.m_viewHeap, g_R_RT_Manager.m_viewCachePoolData, 0x2000ui64, "RT Heap");
  memset_0(g_R_RT_Manager.m_viewCacheSurfaceBlocks, 0, 0xA000ui64);
}

/*
==============
R_RT_ReleaseDXViews
==============
*/
void R_RT_ReleaseDXViews(R_RT_Surface *surface)
{
  R_RT_Flags m_rtFlags; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  GfxTexture *ResidentMutable; 
  unsigned int m_targetView; 
  GfxTexture *v6; 
  ID3D12Resource *m_stencilTexture; 
  ID3D12Resource *m_stencil4Texture; 
  ID3D12Resource *m_floatTexture; 
  ID3D12Resource *m_float4Texture; 
  unsigned int rwView; 
  ID3D12Resource *buffer; 
  unsigned int v13; 
  GfxTexture *v14; 

  m_rtFlags = surface->m_rtFlags;
  m_rtFlagsInternal = surface->m_rtFlagsInternal;
  ResidentMutable = R_Texture_GetResidentMutable(surface->m_image.m_base.textureId);
  if ( (ResidentMutable->shaderView.view & 0xFFFFFFFD) != 0 )
    R_ReleaseShaderTextureView(&ResidentMutable->shaderView);
  if ( (m_rtFlagsInternal & 0x10) != 0 )
  {
    m_targetView = surface->m_targetView;
    Profile_Begin(123);
    if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_dxresource_impl.h", 694, ASSERT_TYPE_ASSERT, "(view)", (const char *)&queryFormat, "view", -2i64) )
      __debugbreak();
    R_ReleaseDescriptor(&g_descriptorPools.dsViewPool, m_targetView);
    Profile_EndInternal(NULL);
    if ( (m_rtFlags & 0x80u) != 0 )
    {
      v6 = R_Texture_GetResidentMutable(surface->m_color.m_fmaskImage.m_base.textureId);
      R_ReleaseShaderTextureView(&v6->shaderView);
    }
    if ( (surface->m_depth.m_stencilView.view & 0xFFFFFFFD) != 0 )
      R_ReleaseShaderTextureView(&surface->m_depth.m_stencilView);
    if ( (surface->m_depth.m_stencilRWView.rwView & 0xFFFFFFFB) != 0 )
    {
      R_ReleaseShaderTextureRWView(&surface->m_depth.m_stencilRWView);
      if ( (surface->m_depth.m_stencilRWView.rwView & 0xFFFFFFFB) != 0 )
        R_ReleaseShaderTextureRWView(&surface->m_depth.m_stencilRWView);
    }
    m_stencilTexture = surface->m_depth.m_stencilTexture;
    if ( m_stencilTexture )
    {
      surface->m_depth.m_stencilTexture = NULL;
      R_ReleaseAndSetNULL<ID3D12Resource>(m_stencilTexture, "surface->m_depth.m_stencilTexture", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 965);
    }
    m_stencil4Texture = surface->m_depth.m_stencil4Texture;
    if ( m_stencil4Texture )
    {
      surface->m_depth.m_stencil4Texture = NULL;
      R_ReleaseAndSetNULL<ID3D12Resource>(m_stencil4Texture, "surface->m_depth.m_stencil4Texture", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 967);
    }
    if ( (surface->m_depth.m_floatView.view & 0xFFFFFFFD) != 0 )
      R_ReleaseShaderTextureView(&surface->m_depth.m_floatView);
    if ( (surface->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) != 0 )
    {
      R_ReleaseShaderTextureRWView(&surface->m_depth.m_floatRWView);
      if ( (surface->m_depth.m_floatRWView.rwView & 0xFFFFFFFB) != 0 )
        R_ReleaseShaderTextureRWView(&surface->m_depth.m_floatRWView);
    }
    m_floatTexture = surface->m_depth.m_floatTexture;
    if ( m_floatTexture )
    {
      surface->m_depth.m_floatTexture = NULL;
      R_ReleaseAndSetNULL<ID3D12Resource>(m_floatTexture, "surface->m_depth.m_floatTexture", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 975);
    }
    m_float4Texture = surface->m_depth.m_float4Texture;
    if ( m_float4Texture )
    {
      surface->m_depth.m_float4Texture = NULL;
      R_ReleaseAndSetNULL<ID3D12Resource>(m_float4Texture, "surface->m_depth.m_float4Texture", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 977);
    }
    if ( surface->m_depth.m_htileBuffer.view.view >= 2 )
      R_ReleaseShaderBufferView(&surface->m_depth.m_htileBuffer.view);
    rwView = surface->m_depth.m_htileBuffer.rwView.rwView;
    if ( rwView != 3 && rwView )
      R_ReleaseShaderBufferRWView(&surface->m_depth.m_htileBuffer.rwView);
    buffer = surface->m_depth.m_htileBuffer.buffer;
    if ( buffer )
    {
      surface->m_depth.m_htileBuffer.buffer = NULL;
      R_ReleaseAndSetNULL<ID3D12Resource>(buffer, "surface->m_depth.m_htileBuffer.buffer", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 983);
    }
    surface->m_depth.m_htileBuffer.data = NULL;
  }
  else
  {
    v13 = surface->m_targetView;
    if ( v13 )
    {
      Profile_Begin(123);
      R_ReleaseDescriptor(&g_descriptorPools.rtViewPool, v13);
      Profile_EndInternal(NULL);
    }
    if ( (ResidentMutable->shaderRWView.rwView & 0xFFFFFFFB) != 0 )
      R_ReleaseShaderTextureRWView(&ResidentMutable->shaderRWView);
    if ( (m_rtFlags & 0x8000) != 0 )
    {
      v14 = R_Texture_GetResidentMutable(surface->m_color.m_fmaskImage.m_base.textureId);
      R_ReleaseShaderTextureView(&v14->shaderView);
    }
  }
}

/*
==============
R_RT_ResetCommitSizeMax
==============
*/
void R_RT_ResetCommitSizeMax(void)
{
  g_R_RT_Manager.m_commitSizeMax = 0i64;
}

/*
==============
R_RT_SetupPlacement
==============
*/
void R_RT_SetupPlacement(R_RT_Surface *surface, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement)
{
  __int64 headFreeBlockIndex; 
  unsigned __int64 v11; 

  _RDI = tiledPlacement;
  if ( placement )
  {
    surface->m_tiledPlacement = -1;
    surface->m_rtFlagsInternal |= 0x4000u;
  }
  else if ( tiledPlacement )
  {
    if ( (unsigned __int16)(tiledPlacement->tiledRangeCount - 1) > 0x13u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 1392, ASSERT_TYPE_ASSERT, "(tiledPlacement->tiledRangeCount > 0 && tiledPlacement->tiledRangeCount <= g_R_RT_tiledPlacementRangesMax)", (const char *)&queryFormat, "tiledPlacement->tiledRangeCount > 0 && tiledPlacement->tiledRangeCount <= g_R_RT_tiledPlacementRangesMax") )
      __debugbreak();
    if ( !g_R_RT_Manager.m_tiledPlacementAllocator.reset )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 72, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
      if ( !g_R_RT_Manager.m_tiledPlacementAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
    }
    if ( g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 73, ASSERT_TYPE_ASSERT, "(!this->Full())", (const char *)&queryFormat, "!this->Full()") )
      __debugbreak();
    headFreeBlockIndex = g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex;
    if ( g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex >= 0x140ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
      __debugbreak();
    _RCX = &g_R_RT_Manager.m_tiledPlacementAllocator.blocks[headFreeBlockIndex];
    g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex = _RCX->nextFreeBlockIndex;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rcx+2], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rcx+22h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rcx+42h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rcx+62h], ymm1
    }
    _RCX->placement.tiledRangeCount = _RDI->tiledRangeCount;
    v11 = ((char *)_RCX - (char *)&g_R_RT_Manager.m_tiledPlacementAllocator - 4) / 132;
    if ( v11 >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 64, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
      __debugbreak();
    surface->m_tiledPlacement = v11;
    surface->m_rtFlagsInternal |= 0x8000u;
  }
  else
  {
    surface->m_tiledPlacement = -1;
  }
}

/*
==============
R_RT_UpdateAbandonedSurfaces
==============
*/
void R_RT_UpdateAbandonedSurfaces(unsigned int decommitFrameDelay)
{
  __int16 m_headAbandonedSurfaceID; 
  R_RT_Surface *p_m_headAbandonedSurfaceID; 
  R_RT_Surface *v4; 
  unsigned __int16 nextFreeBlockIndex; 
  unsigned __int8 v6; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  __int64 v8; 
  __int64 v9; 
  R_RT_AllocationLockSentry v10; 

  v9 = -2i64;
  Profile_Begin(118);
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v10);
  m_headAbandonedSurfaceID = s_R_RT_ManagerInternal.m_headAbandonedSurfaceID;
  p_m_headAbandonedSurfaceID = (R_RT_Surface *)&s_R_RT_ManagerInternal.m_headAbandonedSurfaceID;
  if ( s_R_RT_ManagerInternal.m_headAbandonedSurfaceID )
  {
    while ( 1 )
    {
      if ( m_headAbandonedSurfaceID < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 156, ASSERT_TYPE_ASSERT, "(!R_RT_IsReadOnlySurfaceID( surfaceID ))", (const char *)&queryFormat, "!R_RT_IsReadOnlySurfaceID( surfaceID )", v9) )
        __debugbreak();
      if ( !m_headAbandonedSurfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v4 = &g_R_RT_Manager.m_surfaceAllocator.blocks[(unsigned __int16)((m_headAbandonedSurfaceID & 0x7FFF) - 1)];
      nextFreeBlockIndex = v4->nextFreeBlockIndex;
      if ( g_R_RT_Manager.m_delay == R_RT_DELAY_NONE )
        goto LABEL_19;
      if ( g_R_RT_Manager.m_delay != R_RT_DELAY_RESOURCE )
      {
        LODWORD(v8) = g_R_RT_Manager.m_delay;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h", 3034, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager_impl.h(3034): unhandled case %d in switch statement", v8) )
          __debugbreak();
        goto LABEL_19;
      }
      v6 = v4->m_abandonedFrameCount + 1;
      v4->m_abandonedFrameCount = v6;
      if ( v6 < decommitFrameDelay )
      {
        p_m_headAbandonedSurfaceID = &g_R_RT_Manager.m_surfaceAllocator.blocks[(unsigned __int16)((m_headAbandonedSurfaceID & 0x7FFF) - 1)];
        goto LABEL_19;
      }
      p_m_headAbandonedSurfaceID->nextFreeBlockIndex = nextFreeBlockIndex;
      R_RT_Tracking_RemoveSurfaceRecord(&v4->m_tracking, m_headAbandonedSurfaceID, v4->m_image.m_base.name);
      m_rtFlagsInternal = v4->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 4) != 0 )
        goto LABEL_17;
      if ( (m_rtFlagsInternal & 8) == 0 )
        break;
      R_ShutdownGfxWrappedBuffer((GfxWrappedRWBuffer *)&v4->1080);
      R_RT_FreeSurface(v4);
LABEL_19:
      m_headAbandonedSurfaceID = nextFreeBlockIndex;
      if ( !nextFreeBlockIndex )
        goto LABEL_20;
    }
    R_RT_DestroySurfaceResources(v4);
LABEL_17:
    R_RT_FreeSurface(v4);
    goto LABEL_19;
  }
LABEL_20:
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v10);
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_Handle::SetAuxDirty
==============
*/
void R_RT_Handle::SetAuxDirty(R_RT_Handle *this)
{
  R_RT_Surface *v1; 
  R_RT_FlagsInternal m_rtFlagsInternal; 

  v1 = R_RT_Handle::ModifySurface(this);
  m_rtFlagsInternal = v1->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x400) != 0 )
    v1->m_rtFlagsInternal = m_rtFlagsInternal | 0x800;
}

