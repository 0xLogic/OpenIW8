/*
==============
R_RT_CreateColorInternal
==============
*/

R_RT_ColorHandle *__fastcall R_RT_CreateColorInternal(R_RT_ColorHandle *result, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxRenderTargetFormat rtFormat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  return ?R_RT_CreateColorInternal@@YA?AVR_RT_ColorHandle@@IIIIIW4GfxRenderTargetFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@AEBTvec4_t@@W4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@5@Z(result, width, height, depth, arraySliceCount, mipLimit, rtFormat, rtFlags, rtFlagsInternal, clearColor, initialState, name, frontendPass, placement, tiledPlacement, location);
}

/*
==============
R_RT_CreateDepthForDynSceneResInternal
==============
*/

R_RT_DepthHandle *__fastcall R_RT_CreateDepthForDynSceneResInternal(R_RT_DepthHandle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int arraySliceCount, unsigned int mipLimit, GfxDepthStencilFormat dsformat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, float clearDepth, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  return ?R_RT_CreateDepthForDynSceneResInternal@@YA?AVR_RT_DepthHandle@@IIIIIIW4GfxDepthStencilFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@MW4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@4@Z(result, width, height, allocWidth, allocHeight, arraySliceCount, mipLimit, dsformat, rtFlags, rtFlagsInternal, clearDepth, initialState, name, frontendPass, placement, tiledPlacement, location);
}

/*
==============
R_RT_GetSurfaceID
==============
*/

unsigned __int16 __fastcall R_RT_GetSurfaceID(const R_RT_Surface *surface, unsigned __int16 readOnlyFlag)
{
  return ?R_RT_GetSurfaceID@@YAGPEBUR_RT_Surface@@G@Z(surface, readOnlyFlag);
}

/*
==============
R_RT_DepthHandle::GetClearDepth
==============
*/

double __fastcall R_RT_DepthHandle::GetClearDepth(R_RT_DepthHandle *this)
{
  double result; 

  *(float *)&result = ?GetClearDepth@R_RT_DepthHandle@@QEBAMXZ(this);
  return result;
}

/*
==============
R_RT_BufferHandle::GetRWView
==============
*/

const GfxShaderBufferRWView *__fastcall R_RT_BufferHandle::GetRWView(R_RT_BufferHandle *this)
{
  return ?GetRWView@R_RT_BufferHandle@@QEBAAEBUGfxShaderBufferRWView@@XZ(this);
}

/*
==============
R_RT_Handle::ModifySurface
==============
*/

R_RT_Surface *__fastcall R_RT_Handle::ModifySurface(R_RT_Handle *this)
{
  return ?ModifySurface@R_RT_Handle@@AEBAPEAUR_RT_Surface@@XZ(this);
}

/*
==============
R_RT_Handle::GetD3DResource
==============
*/

ID3D12Resource *__fastcall R_RT_Handle::GetD3DResource(R_RT_Handle *this)
{
  return ?GetD3DResource@R_RT_Handle@@QEBAPEAUID3D12Resource@@XZ(this);
}

/*
==============
R_RT_Handle::GetWrappedBuffer
==============
*/

const GfxWrappedRWBuffer *__fastcall R_RT_Handle::GetWrappedBuffer(R_RT_Handle *this)
{
  return ?GetWrappedBuffer@R_RT_Handle@@QEBAPEBUGfxWrappedRWBuffer@@XZ(this);
}

/*
==============
R_RT_GetSurface
==============
*/

const R_RT_Surface *__fastcall R_RT_GetSurface(unsigned __int16 surfaceID)
{
  return ?R_RT_GetSurface@@YAPEBUR_RT_Surface@@G@Z(surfaceID);
}

/*
==============
R_RT_ColorHandle::GetClearColor
==============
*/

const vec4_t *__fastcall R_RT_ColorHandle::GetClearColor(R_RT_ColorHandle *this)
{
  return ?GetClearColor@R_RT_ColorHandle@@QEBAAEBTvec4_t@@XZ(this);
}

/*
==============
R_RT_Handle::GetSurface
==============
*/

const R_RT_Surface *__fastcall R_RT_Handle::GetSurface(R_RT_Handle *this)
{
  return ?GetSurface@R_RT_Handle@@QEBAPEBUR_RT_Surface@@XZ(this);
}

/*
==============
R_RT_Handle::GetD3DTextureResource
==============
*/

ID3D12Resource *__fastcall R_RT_Handle::GetD3DTextureResource(R_RT_Handle *this)
{
  return ?GetD3DTextureResource@R_RT_Handle@@QEBAPEAUID3D12Resource@@XZ(this);
}

/*
==============
R_RT_DepthHandle::XB3_GetDepthFloatView
==============
*/

const GfxShaderTextureView *__fastcall R_RT_DepthHandle::XB3_GetDepthFloatView(R_RT_DepthHandle *this)
{
  return ?XB3_GetDepthFloatView@R_RT_DepthHandle@@QEBAAEBUGfxShaderTextureView@@XZ(this);
}

/*
==============
R_RT_DepthHandle::DX_GetDepthTargetView
==============
*/

unsigned int __fastcall R_RT_DepthHandle::DX_GetDepthTargetView(R_RT_DepthHandle *this)
{
  return ?DX_GetDepthTargetView@R_RT_DepthHandle@@QEBA?BIXZ(this);
}

/*
==============
R_RT_Handle::GetBaseSurface
==============
*/

const R_RT_Surface *__fastcall R_RT_Handle::GetBaseSurface(R_RT_Handle *this)
{
  return ?GetBaseSurface@R_RT_Handle@@QEBAPEBUR_RT_Surface@@XZ(this);
}

/*
==============
R_RT_CreateColorForDynSceneResInternal
==============
*/

R_RT_ColorHandle *__fastcall R_RT_CreateColorForDynSceneResInternal(R_RT_ColorHandle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxRenderTargetFormat rtFormat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  return ?R_RT_CreateColorForDynSceneResInternal@@YA?AVR_RT_ColorHandle@@IIIIIIIW4GfxRenderTargetFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@AEBTvec4_t@@W4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@5@Z(result, width, height, allocWidth, allocHeight, depth, arraySliceCount, mipLimit, rtFormat, rtFlags, rtFlagsInternal, clearColor, initialState, name, frontendPass, placement, tiledPlacement, location);
}

/*
==============
R_RT_CreateDepthInternal
==============
*/

R_RT_DepthHandle *__fastcall R_RT_CreateDepthInternal(R_RT_DepthHandle *result, unsigned int width, unsigned int height, unsigned int arraySliceCount, unsigned int mipLimit, GfxDepthStencilFormat dsformat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, float clearDepth, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  return ?R_RT_CreateDepthInternal@@YA?AVR_RT_DepthHandle@@IIIIW4GfxDepthStencilFormat@@W4R_RT_Flags@@W4R_RT_FlagsInternal@@MW4D3D12_RESOURCE_STATES@@PEBDGPEBUR_RT_Placement@@PEBUR_RT_TiledPlacement@@4@Z(result, width, height, arraySliceCount, mipLimit, dsformat, rtFlags, rtFlagsInternal, clearDepth, initialState, name, frontendPass, placement, tiledPlacement, location);
}

/*
==============
R_RT_Handle::GetSurface
==============
*/
R_RT_Surface *R_RT_Handle::GetSurface(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v3; 
  R_RT_Surface *v4; 
  R_RT_FlagsInternal m_rtFlagsInternal; 

  m_surfaceID = this->m_surfaceID;
  if ( !this->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  v3 = (m_surfaceID & 0x7FFF) - 1;
  if ( v3 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
    __debugbreak();
  v4 = &g_R_RT_ManagerSurfaceAllocator->blocks[v3];
  if ( v4->m_tracking.m_allocCounter != this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v4->m_tracking.m_allocCounter, this->m_tracking.m_allocCounter, this->m_tracking.m_name, this->m_tracking.m_location) )
    __debugbreak();
  m_rtFlagsInternal = v4->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
    __debugbreak();
  return v4;
}

/*
==============
R_RT_BufferHandle::GetRWView
==============
*/
GfxShaderBufferRWView *R_RT_BufferHandle::GetRWView(R_RT_BufferHandle *this)
{
  const R_RT_Surface *Surface; 

  Surface = R_RT_Handle::GetSurface(this);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
    __debugbreak();
  return &Surface->m_buffer.m_wrappedBuffer.rwView;
}

/*
==============
R_RT_Handle::GetWrappedBuffer
==============
*/
$6354FE9254625F25F9BF74DDC4774D51 *R_RT_Handle::GetWrappedBuffer(R_RT_Handle *this)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v2; 

  Surface = R_RT_Handle::GetSurface(this);
  v2 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
    return &Surface->1080;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  return &v2->1080;
}

/*
==============
R_RT_DepthHandle::DX_GetDepthTargetView
==============
*/
__int64 R_RT_DepthHandle::DX_GetDepthTargetView(R_RT_DepthHandle *this)
{
  const R_RT_Surface *Surface; 
  unsigned int m_targetView; 

  Surface = R_RT_Handle::GetSurface(this);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 429, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  m_targetView = Surface->m_targetView;
  if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 431, ASSERT_TYPE_ASSERT, "(depthTargetView)", (const char *)&queryFormat, "depthTargetView") )
    __debugbreak();
  return m_targetView;
}

/*
==============
R_RT_Handle::GetD3DResource
==============
*/
ID3D12Resource *R_RT_Handle::GetD3DResource(R_RT_Handle *this)
{
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 

  m_rtFlagsInternal = R_RT_Handle::GetSurface(this)->m_rtFlagsInternal;
  Surface = R_RT_Handle::GetSurface(this);
  if ( (m_rtFlagsInternal & 8) != 0 )
    return Surface->m_buffer.m_wrappedBuffer.buffer;
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  return Resident->basemap;
}

/*
==============
R_RT_Handle::GetBaseSurface
==============
*/
R_RT_Surface *R_RT_Handle::GetBaseSurface(R_RT_Handle *this)
{
  R_RT_Surface *result; 
  unsigned __int16 m_headViewSurfaceID; 
  unsigned __int16 v3; 

  result = (R_RT_Surface *)R_RT_Handle::GetSurface(this);
  if ( (result->m_rtFlagsInternal & 0x20) != 0 )
  {
    m_headViewSurfaceID = result->m_link.m_base.m_headViewSurfaceID;
    if ( !m_headViewSurfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
      __debugbreak();
    v3 = (m_headViewSurfaceID & 0x7FFF) - 1;
    if ( v3 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 253, ASSERT_TYPE_ASSERT, "(baseSurfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "baseSurfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    return &g_R_RT_ManagerSurfaceAllocator->blocks[v3];
  }
  return result;
}

/*
==============
R_RT_Handle::GetD3DTextureResource
==============
*/
ID3D12Resource *R_RT_Handle::GetD3DTextureResource(R_RT_Handle *this)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const GfxTexture *v3; 

  Surface = R_RT_Handle::GetSurface(this);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v3 = Resident;
  if ( Resident->basemap )
    return Resident->basemap;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  return v3->basemap;
}

/*
==============
R_RT_Handle::ModifySurface
==============
*/
R_RT_Surface *R_RT_Handle::ModifySurface(R_RT_Handle *this)
{
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v3; 
  char *v4; 
  int v5; 
  const char *v6; 
  const R_RT_Surface *Surface; 

  m_surfaceID = this->m_surfaceID;
  if ( this->m_surfaceID )
  {
    R_RT_Handle::GetSurface(this);
  }
  else if ( this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 114, ASSERT_TYPE_ASSERT, "(this->IsValid())", (const char *)&queryFormat, "this->IsValid()") )
    __debugbreak();
  if ( (this->m_surfaceID & 0x8000u) != 0 )
  {
    v3 = (this->m_surfaceID & 0x7FFF) - 1;
    if ( v3 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
      __debugbreak();
    v4 = (char *)g_R_RT_ManagerSurfaceAllocator + 2368 * v3;
    if ( *((_DWORD *)v4 + 572) != this->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", *((_DWORD *)v4 + 572), this->m_tracking.m_allocCounter, this->m_tracking.m_name, this->m_tracking.m_location) )
      __debugbreak();
    v5 = *((_DWORD *)v4 + 4);
    if ( (v5 & 0x3000) != 4096 && (v5 & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
      __debugbreak();
    v6 = (const char *)*((_QWORD *)v4 + 288);
    Surface = R_RT_Handle::GetSurface(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 308, ASSERT_TYPE_ASSERT, "(!this->IsReadOnly())", "%s\n\tname=%s, created-at=%s", "!this->IsReadOnly()", Surface->m_image.m_base.name, v6) )
      __debugbreak();
  }
  return (R_RT_Surface *)R_RT_Handle::GetSurface(this);
}

/*
==============
R_RT_GetSurface
==============
*/
R_RT_Surface *R_RT_GetSurface(unsigned __int16 surfaceID)
{
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v2; 
  unsigned __int64 v3; 

  if ( !surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  v2 = g_R_RT_ManagerSurfaceAllocator;
  v3 = (unsigned __int16)((surfaceID & 0x7FFF) - 1);
  if ( v3 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
    __debugbreak();
  return &v2->blocks[v3];
}

/*
==============
R_RT_GetSurfaceID
==============
*/
unsigned __int16 R_RT_GetSurfaceID(const R_RT_Surface *surface, unsigned __int16 readOnlyFlag)
{
  unsigned __int64 v3; 

  v3 = ((char *)surface - (char *)g_R_RT_ManagerSurfaceAllocator - 8) / 2368;
  if ( v3 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 64, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
    __debugbreak();
  return R_RT_SurfaceIndexToID((unsigned __int16)v3, readOnlyFlag);
}

/*
==============
R_RT_DepthHandle::XB3_GetDepthFloatView
==============
*/
GfxShaderTextureView *R_RT_DepthHandle::XB3_GetDepthFloatView(R_RT_DepthHandle *this)
{
  const R_RT_Surface *Surface; 

  Surface = R_RT_Handle::GetSurface(this);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 455, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
    __debugbreak();
  if ( (Surface->m_depth.m_floatView.view & 0xFFFFFFFD) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 457, ASSERT_TYPE_ASSERT, "(!surface->m_depth.m_floatView.IsNull())", (const char *)&queryFormat, "!surface->m_depth.m_floatView.IsNull()") )
    __debugbreak();
  return &Surface->m_depth.m_floatView;
}

/*
==============
R_RT_CreateColorForDynSceneResInternal
==============
*/
R_RT_ColorHandle *R_RT_CreateColorForDynSceneResInternal(R_RT_ColorHandle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxRenderTargetFormat rtFormat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  R_RT_Handle v23; 
  R_RT_Handle resulta; 

  if ( (rtFlags & 0x3E0080) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 787, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) )") )
    __debugbreak();
  v23 = *R_RT_CreateInternal(&resulta, width, height, allocWidth, allocHeight, depth, arraySliceCount, mipLimit, g_R_RT_renderTargetFmts[(unsigned __int8)rtFormat], rtFlags, rtFlagsInternal, clearColor, initialState, name, frontendPass, placement, tiledPlacement, NULL, location);
  R_RT_ColorHandle::Cast(result, &v23);
  return result;
}

/*
==============
R_RT_CreateColorInternal
==============
*/
R_RT_ColorHandle *R_RT_CreateColorInternal(R_RT_ColorHandle *result, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySliceCount, unsigned int mipLimit, GfxRenderTargetFormat rtFormat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, const vec4_t *clearColor, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  R_RT_Handle v21; 
  R_RT_Handle resulta; 

  if ( (rtFlags & 0x3E0080) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 767, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) )") )
    __debugbreak();
  v21 = *R_RT_CreateInternal(&resulta, width, height, width, height, depth, arraySliceCount, mipLimit, g_R_RT_renderTargetFmts[(unsigned __int8)rtFormat], rtFlags, rtFlagsInternal, clearColor, initialState, name, frontendPass, placement, tiledPlacement, NULL, location);
  R_RT_ColorHandle::Cast(result, &v21);
  return result;
}

/*
==============
R_RT_CreateDepthForDynSceneResInternal
==============
*/
R_RT_DepthHandle *R_RT_CreateDepthForDynSceneResInternal(R_RT_DepthHandle *result, unsigned int width, unsigned int height, unsigned int allocWidth, unsigned int allocHeight, unsigned int arraySliceCount, unsigned int mipLimit, GfxDepthStencilFormat dsformat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, float clearDepth, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  GfxPixelFormat format; 
  R_RT_Handle v23; 
  R_RT_Handle resulta; 
  vec4_t clearColor; 

  if ( (rtFlags & 0x3E0001) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 794, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) )") )
    __debugbreak();
  format = g_R_RT_depthStencilFmts[(unsigned __int8)dsformat];
  clearColor.v[0] = clearDepth;
  v23 = *R_RT_CreateInternal(&resulta, width, height, allocWidth, allocHeight, 1u, arraySliceCount, mipLimit, format, rtFlags, (R_RT_FlagsInternal)(rtFlagsInternal | 0x10), &clearColor, initialState, name, frontendPass, placement, tiledPlacement, NULL, location);
  R_RT_DepthHandle::Cast(result, &v23);
  return result;
}

/*
==============
R_RT_CreateDepthInternal
==============
*/
R_RT_DepthHandle *R_RT_CreateDepthInternal(R_RT_DepthHandle *result, unsigned int width, unsigned int height, unsigned int arraySliceCount, unsigned int mipLimit, GfxDepthStencilFormat dsformat, R_RT_Flags rtFlags, R_RT_FlagsInternal rtFlagsInternal, float clearDepth, D3D12_RESOURCE_STATES initialState, const char *name, unsigned __int16 frontendPass, const R_RT_Placement *placement, const R_RT_TiledPlacement *tiledPlacement, const char *location)
{
  GfxPixelFormat format; 
  R_RT_Handle v21; 
  R_RT_Handle resulta; 
  vec4_t clearColor; 

  if ( (rtFlags & 0x3E0001) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 773, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) )") )
    __debugbreak();
  format = g_R_RT_depthStencilFmts[(unsigned __int8)dsformat];
  clearColor.v[0] = clearDepth;
  v21 = *R_RT_CreateInternal(&resulta, width, height, width, height, 1u, arraySliceCount, mipLimit, format, rtFlags, (R_RT_FlagsInternal)(rtFlagsInternal | 0x10), &clearColor, initialState, name, frontendPass, placement, tiledPlacement, NULL, location);
  R_RT_DepthHandle::Cast(result, &v21);
  return result;
}

/*
==============
R_RT_ColorHandle::GetClearColor
==============
*/
vec4_t *R_RT_ColorHandle::GetClearColor(R_RT_ColorHandle *this)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v2; 

  Surface = R_RT_Handle::GetSurface(this);
  v2 = Surface;
  if ( (Surface->m_rtFlagsInternal & 0x10) == 0 )
    return &Surface->m_color.m_clearColor;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 324, ASSERT_TYPE_ASSERT, "(!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth ))", (const char *)&queryFormat, "!( surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth )") )
    __debugbreak();
  return &v2->m_color.m_clearColor;
}

/*
==============
R_RT_DepthHandle::GetClearDepth
==============
*/
float R_RT_DepthHandle::GetClearDepth(R_RT_DepthHandle *this)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v2; 

  Surface = R_RT_Handle::GetSurface(this);
  v2 = Surface;
  if ( (Surface->m_rtFlagsInternal & 0x10) != 0 )
    return Surface->m_depth.m_clearDepth;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 400, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Depth") )
    __debugbreak();
  return v2->m_depth.m_clearDepth;
}

