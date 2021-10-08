/*
==============
R_UpdateLightmapsCPU
==============
*/

void __fastcall R_UpdateLightmapsCPU(unsigned int x, unsigned int y, unsigned int width, unsigned int height, unsigned int index, const char *buffer, unsigned int bufferSize)
{
  ?R_UpdateLightmapsCPU@@YAXIIIIIPEBDI@Z(x, y, width, height, index, buffer, bufferSize);
}

/*
==============
RB_EndUpdateLightingGPU
==============
*/

void RB_EndUpdateLightingGPU(void)
{
  ?RB_EndUpdateLightingGPU@@YAXXZ();
}

/*
==============
RB_BeginUpdateLightingGPU
==============
*/

void RB_BeginUpdateLightingGPU(void)
{
  ?RB_BeginUpdateLightingGPU@@YAXXZ();
}

/*
==============
R_UpdateLightgridsCPU
==============
*/

void __fastcall R_UpdateLightgridsCPU(unsigned int pool, unsigned int probeCount, const unsigned int *probeIndexSrc, const GfxSHProbeData *probeArraySrc)
{
  ?R_UpdateLightgridsCPU@@YAXIIPEBIPEBUGfxSHProbeData@@@Z(pool, probeCount, probeIndexSrc, probeArraySrc);
}

/*
==============
RB_RadiantLiveGIUpdateAvailable
==============
*/

bool __fastcall RB_RadiantLiveGIUpdateAvailable()
{
  return ?RB_RadiantLiveGIUpdateAvailable@@YA_NXZ();
}

/*
==============
RB_UpdateLightmapsGPU
==============
*/

void __fastcall RB_UpdateLightmapsGPU(ComputeCmdBufState *state)
{
  ?RB_UpdateLightmapsGPU@@YAXPEAUComputeCmdBufState@@@Z(state);
}

/*
==============
RB_BeginUpdateLightingGPU
==============
*/
void RB_BeginUpdateLightingGPU(void)
{
  Sys_EnterCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
  R_LockGfxImmediateContext();
}

/*
==============
RB_EndUpdateLightingGPU
==============
*/
void RB_EndUpdateLightingGPU(void)
{
  s_liveUpdateBufferUsed = 0i64;
  R_UnlockGfxImmediateContext();
  Sys_LeaveCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
}

/*
==============
RB_RadiantLiveGIUpdateAvailable
==============
*/
bool RB_RadiantLiveGIUpdateAvailable()
{
  return g_worldDraw && (s_lightMapStagingTextureCount || s_lightgridUpdateBufferCount);
}

/*
==============
RB_UpdateLightmapsGPU
==============
*/
void RB_UpdateLightmapsGPU(ComputeCmdBufState *state)
{
  ;
}

/*
==============
R_Create2DStagingImage
==============
*/
void R_Create2DStagingImage(unsigned int width, unsigned int height, GfxPixelFormat format, const char *buffer, GfxImage *image)
{
  int v10; 
  __m256i v14; 
  __m256i v15; 
  Image_SetupParams params; 
  Image_SetupData data; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap.cpp", 80, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap.cpp", 81, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  v10 = 0;
  if ( !s_liveUpdateBuffer )
  {
    PMem_BeginAlloc("R_AllocateLiveUpdateBuffer", PMEM_STACK_GAME);
    s_liveUpdateBufferUsed = 0i64;
    s_liveUpdateBuffer = (unsigned __int8 *)PMem_Alloc(0x300000ui64, 0x100ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "R_AllocateLiveUpdateBuffer");
    PMem_EndAlloc("R_AllocateLiveUpdateBuffer", PMEM_STACK_GAME);
  }
  Image_AllocInPlace(image, "$lightmap2dstaging", IMG_CATEGORY_LIGHTMAP, TS_FUNCTION);
  v15.m256i_i64[0] = 0i64;
  v15.m256i_i32[6] = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+300D8h+var_30088+8], xmm0
    vmovups ymm1, [rsp+300D8h+var_30088]
  }
  v14.m256i_i32[2] = 1;
  if ( (unsigned int)(format - 33) > 0xC )
    v10 = 1024;
  *(__int64 *)((char *)&v14.m256i_i64[1] + 4) = 1i64;
  v14.m256i_i64[0] = __PAIR64__(height, width);
  v14.m256i_i32[5] = v10 + 536870915;
  __asm { vmovups ymmword ptr [rsp+300D8h+params.customAllocFunc], ymm1 }
  v14.m256i_i32[6] = format;
  __asm { vmovups ymm0, [rsp+300D8h+var_300A8] }
  params.customAllocFunc = lambda_cc5243ee1bcbb3b97546a825643a93af_::_lambda_invoker_cdecl_;
  __asm { vmovups ymmword ptr [rsp+300D8h+params.width], ymm0 }
  data.data[0][0] = (const unsigned __int8 *)buffer;
  Image_SetupWithData(image, &params, &data);
}

/*
==============
R_UpdateLightgridsCPU
==============
*/
void R_UpdateLightgridsCPU(unsigned int pool, unsigned int probeCount, const unsigned int *probeIndexSrc, const GfxSHProbeData *probeArraySrc)
{
  unsigned int v8; 
  GfxLightgridUpdateBuffer *v9; 
  int ElementSizeForDataFormat; 

  Sys_EnterCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
  v8 = s_lightgridUpdateBufferCount;
  if ( s_lightgridUpdateBufferCount < 0x20 )
  {
    v9 = &s_lightgridUpdateBuffer[s_lightgridUpdateBufferCount];
    v9->m_pool = pool;
    v9->m_probeCount = probeCount;
    s_lightgridUpdateBufferCount = v8 + 1;
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(&v9->m_probeIndexData, GfxWrappedBuffer_Data, ElementSizeForDataFormat, probeCount, GFX_DATA_FORMAT_R32_UINT, 0x20u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, probeIndexSrc, "probeIndex");
    R_CreateGfxWrappedBuffer(&v9->m_probeArray, GfxWrappedBuffer_Data, 64, probeCount, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, probeArraySrc, "probeArray");
  }
  else
  {
    Com_Printf(8, "ERROR: Radiant live can't process more than %zu light grids update commands\n", 0x20ui64);
  }
  Sys_LeaveCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
}

/*
==============
R_UpdateLightmapsCPU
==============
*/
void R_UpdateLightmapsCPU(unsigned int x, unsigned int y, unsigned int width, unsigned int height, unsigned int index, const char *buffer, unsigned int bufferSize)
{
  GfxLightmapStagingTexture *v11; 
  GfxPixelFormat v12; 
  unsigned int v13; 

  if ( width != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap.cpp", 122, ASSERT_TYPE_ASSERT, "(width == MAX_LIVE_LIGHTMAP_SECTION_WIDTH)", (const char *)&queryFormat, "width == MAX_LIVE_LIGHTMAP_SECTION_WIDTH") )
    __debugbreak();
  if ( height != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap.cpp", 123, ASSERT_TYPE_ASSERT, "(height == MAX_LIVE_LIGHTMAP_SECTION_HEIGHT)", (const char *)&queryFormat, "height == MAX_LIVE_LIGHTMAP_SECTION_HEIGHT") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
  if ( s_lightMapStagingTextureCount < 0x20 )
  {
    v11 = &s_lightmapStagingTextureArray[(unsigned __int64)s_lightMapStagingTextureCount];
    v12 = GFX_PF_R9G9B9E5_SHAREDEXP;
    v13 = bufferSize / (height * width);
    if ( index % 3 == 2 )
    {
      v12 = GFX_PF_R8G8;
      v13 = 2;
    }
    else if ( v13 == 1 )
    {
      v12 = GFX_PF_BC6H;
    }
    else if ( v13 == 4 )
    {
      v12 = GFX_PF_R9G9B9E5_SHAREDEXP;
    }
    if ( height * width * v13 != bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap.cpp", 159, ASSERT_TYPE_ASSERT, "(width * height * bytesPerPixel == bufferSize)", (const char *)&queryFormat, "width * height * bytesPerPixel == bufferSize") )
      __debugbreak();
    R_Create2DStagingImage(width, height, v12, buffer, &v11->m_lightmapStagingImage);
    ++s_lightMapStagingTextureCount;
    v11->m_lightmapUpdateIndex = index;
    v11->m_x = x;
    v11->m_y = y;
    v11->m_w = width;
    v11->m_h = height;
  }
  else
  {
    Com_Printf(8, "ERROR: Radiant live can't process more than %d lightmap tiles\n", 32i64);
  }
  Sys_LeaveCriticalSection(CRITSECT_RADIANT_LIVE_LIGHTMAP);
}

