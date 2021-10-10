/*
==============
CopyLoadScreenToBackBuffer
==============
*/

void CopyLoadScreenToBackBuffer(void)
{
  ?CopyLoadScreenToBackBuffer@@YAXXZ();
}

/*
==============
LoadRestartImage
==============
*/

unsigned __int8 *__fastcall LoadRestartImage(const char *imagePath, unsigned __int16 *widthOut, unsigned __int16 *heightOut, unsigned int *imageSize, RestartImageFormat format)
{
  return ?LoadRestartImage@@YAPEAEPEBDPEAG1PEAIW4RestartImageFormat@@@Z(imagePath, widthOut, heightOut, imageSize, format);
}

/*
==============
ShowLoadScreen
==============
*/

void __fastcall ShowLoadScreen(bool doPresent)
{
  ?ShowLoadScreen@@YAX_N@Z(doPresent);
}

/*
==============
FreeLoadScreen
==============
*/

void FreeLoadScreen(void)
{
  ?FreeLoadScreen@@YAXXZ();
}

/*
==============
CopyLoadScreenToBackBuffer
==============
*/
void CopyLoadScreenToBackBuffer(void)
{
  IDXGISwapChain1 *displaySwapChain; 
  HRESULT v1; 
  unsigned int v2; 
  const char *v3; 
  char ActiveGameMode; 
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v6; 
  unsigned __int64 v7; 
  const char *v8; 
  const char *imagePath; 
  unsigned __int8 *textureData; 
  __int64 textureWidth; 
  unsigned int textureHeight; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  char *v18; 
  unsigned __int64 v19; 
  HRESULT v20; 
  const char *v21; 
  ID3D12DeviceChild *v22; 
  unsigned __int64 v23; 
  const char *v24; 
  const char *v25; 
  ID3D12DeviceChild *resource; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29[2]; 
  int v30; 
  __int64 v31; 
  ID3D12DeviceChild *v32; 
  int v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  __m256i v38; 
  _BYTE v39[24]; 
  __m256i v40; 
  __int128 v41; 
  double v42; 

  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  displaySwapChain = g_dx.displaySwapChain;
  if ( g_dx.gameDvrSdrSwapChain )
    displaySwapChain = g_dx.gameDvrSdrSwapChain;
  v1 = ((__int64 (__fastcall *)(IDXGISwapChain1 *, _QWORD, GUID *, __int64 *))displaySwapChain->m_pFunction[3].QueryInterface)(displaySwapChain, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &v28);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = R_ErrorDescription(v1);
    Com_PrintError(8, "Couldn't get back buffer surface: %s (0x%08x)\n", v3, v2);
    return;
  }
  (*(void (__fastcall **)(__int64, __m256i *))(*(_QWORD *)v28 + 80i64))(v28, &v40);
  v38 = v40;
  *(double *)&v39[16] = v42;
  *(_OWORD *)v39 = v41;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode && ActiveGameMode != 1 && ActiveGameMode != 2 && ActiveGameMode != 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 264, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
      __debugbreak();
    return;
  }
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v6 = v38.m256i_u32[6];
  v7 = v38.m256i_u64[2];
  if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
  {
    if ( v40.m256i_i64[2] != 1920 && v40.m256i_i32[6] != 1080 )
      Com_PrintError(8, "Unexpected backbuffer dims [%d x %d] != [1920x1080].  Restart image will not fit correctly\n", v40.m256i_i64[2], v40.m256i_u32[6]);
    v8 = RESTART_DEFAULT_1080_IMAGE_FILE_PATH;
  }
  else
  {
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 252, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
      __debugbreak();
    if ( v7 != 3840 && v6 != 2160 )
      Com_PrintError(8, "Unexpected backbuffer dims [%d x %d] != [3840x2160].  Restart image will not fit correctly\n", v7, v6);
    v8 = RESTART_DEFAULT_2160_IMAGE_FILE_PATH;
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 268, ASSERT_TYPE_ASSERT, "(imagePath)", (const char *)&queryFormat, "imagePath") )
    __debugbreak();
  imagePath = s_restartImage.imagePath;
  if ( s_restartImage.imagePath == v8 )
  {
    textureData = s_restartImage.textureData;
  }
  else
  {
    if ( s_restartImage.imageSize )
      VirtualFree(s_restartImage.textureData, 0i64, 0x8000u);
    s_restartImage.imagePath = v8;
    textureData = LoadRestartImage(v8, &s_restartImage.textureWidth, &s_restartImage.textureHeight, &s_restartImage.imageSize, R10G10B10A2);
    s_restartImage.textureData = textureData;
    imagePath = s_restartImage.imagePath;
  }
  if ( !textureData )
  {
    v24 = "null";
    v25 = "No pre-renderer splash image will be displayed.  Failed to load restart image:  %s\n";
    if ( imagePath )
      v24 = imagePath;
    goto LABEL_60;
  }
  textureWidth = s_restartImage.textureWidth;
  if ( s_restartImage.textureWidth > v7 || (textureHeight = s_restartImage.textureHeight, s_restartImage.textureHeight > v6) )
  {
    v24 = "null";
    v25 = "No pre-renderer splash image will be displayed. Restart image is too large:  %s\n";
    if ( imagePath )
      v24 = imagePath;
LABEL_60:
    Com_PrintWarning(16, v25, v24);
    return;
  }
  v13 = v6 >> 1;
  v14 = s_restartImage.textureWidth;
  LODWORD(resource) = v13 - (s_restartImage.textureHeight >> 1);
  v15 = s_restartImage.textureWidth >> 1;
  v27 = (v7 >> 1) - v15;
  v16 = (s_restartImage.textureHeight >> 1) + v13 + (s_restartImage.textureHeight & 1);
  if ( v15 + (v14 & 1) + v15 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 303, ASSERT_TYPE_ASSERT, "(destRegion.right - destRegion.left == textureWidth)", (const char *)&queryFormat, "destRegion.right - destRegion.left == textureWidth") )
    __debugbreak();
  v17 = (unsigned int)resource;
  if ( v16 - (_DWORD)resource != textureHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 304, ASSERT_TYPE_ASSERT, "(destRegion.bottom - destRegion.top == textureHeight)", (const char *)&queryFormat, "destRegion.bottom - destRegion.top == textureHeight") )
    __debugbreak();
  _mm_mfence();
  v18 = (char *)((unsigned __int64)textureData & 0xFFFFFFFFFFFFFFC0ui64);
  v19 = ((int)(4 * v14 * textureHeight) + ((unsigned __int64)textureData & 0xFFFFFFFFFFFFFFC0ui64) + 63) & 0xFFFFFFFFFFFFFFC0ui64;
  if ( ((unsigned __int64)textureData & 0xFFFFFFFFFFFFFFC0ui64) < v19 )
  {
    do
    {
      _mm_clflush(v18);
      v18 += 64;
    }
    while ( (unsigned __int64)v18 < v19 );
  }
  _mm_mfence();
  v38.m256i_i64[3] = textureHeight | 0x1000100000000i64;
  v38.m256i_i32[0] = 3;
  *(_DWORD *)v39 = 25;
  v38.m256i_i64[2] = textureWidth;
  v38.m256i_i64[1] = 0i64;
  *(_QWORD *)&v39[12] = 264i64;
  *(_QWORD *)&v39[4] = 1i64;
  v20 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int8 *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, textureData, &v38, 2048i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v20 < 0 )
  {
    v21 = R_ErrorDescription(v20);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v21);
  }
  PIXSetDebugName(resource, "CopyLoadScreenToBackBuffer");
  v22 = resource;
  v35 = v28;
  v36 = 0;
  v37 = 0;
  v32 = resource;
  v33 = 0;
  v34 = 0;
  v29[0] = 0i64;
  v29[1] = v28;
  v31 = 0x40000000000i64;
  v30 = -1;
  ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, v29);
  ((void (__fastcall *)(GfxDevice *, __int64 *, _QWORD, _QWORD, _DWORD, ID3D12DeviceChild **, _QWORD, _DWORD))g_dx.immediateContext->m_pFunction[27].Release)(g_dx.immediateContext, &v35, v27, v17, 0, &v32, 0i64, 0);
  v31 = 1024i64;
  ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, v29);
  v23 = R_FlushImmediateContext();
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
  if ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < v23 )
  {
    for ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence); g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < v23; g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence) )
      Sys_Sleep(0);
  }
  v22->m_pFunction->Release(v22);
}

/*
==============
FreeLoadScreen
==============
*/
void FreeLoadScreen(void)
{
  if ( s_restartImage.imagePath )
  {
    if ( s_restartImage.imageSize )
      VirtualFree(s_restartImage.textureData, 0i64, 0x8000u);
    s_restartImage.textureData = NULL;
    *(_QWORD *)&s_restartImage.textureWidth = 0i64;
    s_restartImage.imagePath = NULL;
  }
}

/*
==============
LoadRestartImage
==============
*/
char *LoadRestartImage(const char *imagePath, unsigned __int16 *widthOut, unsigned __int16 *heightOut, unsigned int *imageSize, RestartImageFormat format)
{
  unsigned int *v6; 
  __int64 v9; 
  unsigned int v11; 
  char *v12; 
  char *v13; 
  unsigned int v14; 
  char *v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  __int64 v20; 
  bool topDownOut; 
  fileHandle_t file; 
  unsigned __int16 bitDepthOut; 
  unsigned int *v24; 
  __int64 buffer[2]; 
  __int16 v26; 

  v24 = imageSize;
  buffer[0] = 0i64;
  buffer[1] = 0i64;
  v6 = imageSize;
  v26 = 0;
  if ( !imagePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 49, ASSERT_TYPE_ASSERT, "(imagePath)", (const char *)&queryFormat, "imagePath") )
    __debugbreak();
  v9 = 0i64;
  file.handle.handle = -1i64;
  if ( v6 )
    *v6 = 0;
  FS_FOpenFileRead(imagePath, &file);
  if ( file.handle.handle == -1 )
  {
    Com_PrintWarning(16, "Failed to open restart image:  %s\n", imagePath);
    return 0i64;
  }
  if ( FS_Read(buffer, 0x12ui64, file) != 18 )
  {
    Com_PrintWarning(16, "Failed to read restart image:  %s\n", imagePath);
LABEL_14:
    FS_FCloseFile(file);
    return 0i64;
  }
  if ( !R_ParseTargaHeader((const unsigned __int8 *)buffer, widthOut, heightOut, &bitDepthOut, &topDownOut) || bitDepthOut != 32 )
  {
    Com_PrintWarning(16, "Unsupported targa format:  %s\n", imagePath);
    goto LABEL_14;
  }
  v11 = 4 * *heightOut * *widthOut;
  v12 = (char *)VirtualAlloc(NULL, v11, 0x30001000u, 0x40004u);
  v13 = v12;
  if ( !v12 )
  {
    Com_PrintWarning(16, "Failed to allocate memory for restart image\n");
    goto LABEL_14;
  }
  if ( topDownOut )
  {
    if ( FS_Read(v12, v11, file) != v11 )
    {
LABEL_17:
      Com_PrintWarning(16, "Failed to read restart image:  %s\n", imagePath);
      goto LABEL_14;
    }
  }
  else
  {
    v14 = 4 * *widthOut;
    v15 = &v12[v14 * (*heightOut - 1)];
    if ( v15 >= v12 )
    {
      v16 = v14;
      while ( FS_Read(v15, v16, file) == v16 )
      {
        v15 -= v16;
        if ( v15 < v13 )
          goto LABEL_22;
      }
      goto LABEL_17;
    }
  }
LABEL_22:
  FS_FCloseFile(file);
  if ( format == R8G8B8A8 )
  {
    if ( v11 >> 2 )
    {
      do
      {
        v17 = (unsigned int)(4 * v9);
        LODWORD(v9) = v9 + 1;
        v18 = v13[v17];
        v13[(unsigned int)v17] = v13[(unsigned int)(v17 + 2)];
        v13[(unsigned int)(v17 + 2)] = v18;
      }
      while ( (unsigned int)v9 < v11 >> 2 );
    }
  }
  else if ( format == R10G10B10A2 && v11 >> 2 )
  {
    do
    {
      v19 = (unsigned int)(4 * v9);
      v20 = (unsigned int)(v19 + 3);
      if ( (unsigned int)v20 >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_restart_image.cpp", 126, ASSERT_TYPE_ASSERT, "(pixel * 4 + 3 < imageDataSize)", (const char *)&queryFormat, "pixel * RGBA_CHANNEL_COUNT + 3 < imageDataSize") )
        __debugbreak();
      *(_DWORD *)&v13[4 * v9] = 4 * ((unsigned __int8)v13[(unsigned int)(v19 + 2)] + (((unsigned __int8)v13[(unsigned int)(v19 + 1)] + (((unsigned __int8)v13[v19] + ((unsigned __int8)v13[v20] >> 6 << 8)) << 10)) << 10));
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v11 >> 2 );
    v6 = v24;
  }
  if ( v6 )
    *v6 = v11;
  return v13;
}

/*
==============
SetAndClearBackBuffer
==============
*/

__int64 __fastcall SetAndClearBackBuffer(double _XMM0_8)
{
  R_RT_Handle v1; 
  const R_RT_Surface *Surface; 
  unsigned int m_targetView; 
  const R_RT_Surface *v5; 
  __int64 v7[2]; 
  int v8; 
  __int64 v9; 
  R_RT_Handle v10; 
  R_RT_Handle v11; 
  R_RT_Handle result; 
  unsigned __int64 v13; 

  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v1 = *R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  v11 = v1;
  v10 = v1;
  if ( LOWORD(_XMM0_8) )
  {
    R_RT_Handle::GetSurface(&v10);
    if ( (R_RT_Handle::GetSurface(&v10)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v1 = v10;
      __debugbreak();
    }
    else
    {
      v1 = v10;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v1 = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v11 = v1;
  Surface = R_RT_Handle::GetSurface(&v11);
  if ( (Surface->m_rtFlagsInternal & 0x2010) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 339, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None") )
    __debugbreak();
  m_targetView = Surface->m_targetView;
  if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 341, ASSERT_TYPE_ASSERT, "(colorTargetView)", (const char *)&queryFormat, "colorTargetView") )
    __debugbreak();
  v7[0] = 0i64;
  v5 = R_RT_Handle::GetSurface(&v11);
  v7[1] = (__int64)R_Texture_GetResident(v5->m_image.m_base.textureId)->basemap;
  v9 = 0x400000000i64;
  v8 = -1;
  ((void (__fastcall *)(GfxDevice *, __int64, __int64 *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, v7);
  v13 = g_descriptorPools.rtViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.rtViewPool.handle.parent->descriptorSize * (m_targetView + g_descriptorPools.rtViewPool.handle.startSlot);
  ((void (__fastcall *)(GfxDevice *, __int64, unsigned __int64 *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[16].Release)(g_dx.immediateContext, 1i64, &v13, 0i64, 0i64);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, vec4_t *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[17].AddRef)(g_dx.immediateContext, v13, &colorBlack, 0i64, 0i64);
  v9 = 4i64;
  return ((__int64 (__fastcall *)(GfxDevice *, __int64, __int64 *))g_dx.immediateContext->m_pFunction[8].Release)(g_dx.immediateContext, 1i64, v7);
}

/*
==============
ShowLoadScreen
==============
*/
void ShowLoadScreen(bool doPresent)
{
  double v1; 
  IDXGISwapChain1 *displaySwapChain; 
  R_RT_Handle v4; 
  R_RT_Handle result; 
  R_RT_Handle v6; 

  R_LockGfxImmediateContext();
  SetAndClearBackBuffer(v1);
  CopyLoadScreenToBackBuffer();
  if ( doPresent )
  {
    displaySwapChain = g_dx.displaySwapChain;
    if ( g_dx.gameDvrSdrSwapChain )
      displaySwapChain = g_dx.gameDvrSdrSwapChain;
    ((void (__fastcall *)(IDXGISwapChain1 *, _QWORD, _QWORD))displaySwapChain->m_pFunction[2].Release)(displaySwapChain, 0i64, 0i64);
    if ( displaySwapChain == g_dx.displaySwapChain )
    {
      R_RT_FlipDisplayBufferGlobals();
    }
    else if ( displaySwapChain == g_dx.gameDvrSdrSwapChain )
    {
      R_RT_FlipGameDVRBufferGlobals();
      R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
      R_RT_GetGlobal(&v6, R_RENDERTARGET_DISPLAY_BUFFER_PREV_FRONTEND);
      if ( (result.m_surfaceID & 0x7FFF) != 0 )
        v4.m_surfaceID = result.m_surfaceID & 0x7FFF | 0x8000;
      else
        v4.m_surfaceID = 0;
      v4.m_tracking = result.m_tracking;
      g_R_RT_globals[9] = v4;
      if ( (v6.m_surfaceID & 0x7FFF) != 0 )
        v4.m_surfaceID = v6.m_surfaceID & 0x7FFF | 0x8000;
      else
        v4.m_surfaceID = 0;
      v4.m_tracking = v6.m_tracking;
      g_R_RT_globals[8] = v4;
    }
  }
  R_UnlockGfxImmediateContext();
}

