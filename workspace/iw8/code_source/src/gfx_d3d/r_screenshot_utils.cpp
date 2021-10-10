/*
==============
R_LevelShot
==============
*/

void R_LevelShot(void)
{
  ?R_LevelShot@@YAXXZ();
}

/*
==============
R_TakeScreenshotJpg
==============
*/

void __fastcall R_TakeScreenshotJpg(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  ?R_TakeScreenshotJpg@@YAXPEBDHVR_RT_ColorHandle@@HHHH@Z(filename, useFS, colorRt, x, y, width, height);
}

/*
==============
R_Screenshot_WriteFile
==============
*/

void __fastcall R_Screenshot_WriteFile(const char *filename, int useFS, const void *buffer, unsigned __int64 fileSize)
{
  ?R_Screenshot_WriteFile@@YAXPEBDHPEBX_K@Z(filename, useFS, buffer, fileSize);
}

/*
==============
R_TakeScreenshotTga
==============
*/

void __fastcall R_TakeScreenshotTga(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int addClut)
{
  ?R_TakeScreenshotTga@@YAXPEBDHVR_RT_ColorHandle@@HHHHH@Z(filename, useFS, colorRt, x, y, width, height, addClut);
}

/*
==============
R_TakeScreenshotExr
==============
*/

void __fastcall R_TakeScreenshotExr(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int addClut, GfxScreenshotColorimetry clutInputColorimetry, bool exrTmp, GfxScreenshotColorimetry colorimetry)
{
  ?R_TakeScreenshotExr@@YAXPEBDHVR_RT_ColorHandle@@HHHHHUGfxScreenshotColorimetry@@_N2@Z(filename, useFS, colorRt, x, y, width, height, addClut, clutInputColorimetry, exrTmp, colorimetry);
}

/*
==============
R_Screenshot_ScanForFreeFilename
==============
*/

bool __fastcall R_Screenshot_ScanForFreeFilename(const char *nameBase, const char *namePostfix, const char *extension, char (*outFileName)[256])
{
  return ?R_Screenshot_ScanForFreeFilename@@YA_NPEBD00AEAY0BAA@D@Z(nameBase, namePostfix, extension, outFileName);
}

/*
==============
EXR_GetScanlineBlockData_HalfFromR16G16B16A16F
==============
*/

void __fastcall EXR_GetScanlineBlockData_HalfFromR16G16B16A16F(ExrPixelSource *source, ExrWriteDesc *desc, ExrBox2i *blockRegion, BufferedStream *bufferedStream)
{
  ?EXR_GetScanlineBlockData_HalfFromR16G16B16A16F@@YAXPEAUExrPixelSource@@PEAUExrWriteDesc@@PEAUExrBox2i@@PEAUBufferedStream@@@Z(source, desc, blockRegion, bufferedStream);
}

/*
==============
EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F
==============
*/

void __fastcall EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F(ExrPixelSource *source, ExrWriteDesc *desc, ExrBox2i *blockRegion, BufferedStream *bufferedStream)
{
  ?EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F@@YAXPEAUExrPixelSource@@PEAUExrWriteDesc@@PEAUExrBox2i@@PEAUBufferedStream@@@Z(source, desc, blockRegion, bufferedStream);
}

/*
==============
R_SaveGameShot
==============
*/

void __fastcall R_SaveGameShot(const char *saveName)
{
  ?R_SaveGameShot@@YAXPEBD@Z(saveName);
}

/*
==============
EXR_GetScanlineBlockData_HalfFromR16G16B16A16F
==============
*/
void EXR_GetScanlineBlockData_HalfFromR16G16B16A16F(ExrPixelSource *source, ExrWriteDesc *desc, ExrBox2i *blockRegion, BufferedStream *bufferedStream)
{
  unsigned int v8; 
  __int64 v9; 
  __int64 Box2iWidth; 
  __int64 v11; 
  const unsigned __int8 *v12; 
  unsigned int v13; 
  __int64 v14; 
  const unsigned __int8 *v15; 
  __int16 v16; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  unsigned __int8 src[2]; 
  BufferedStreamWriter v20; 
  __int64 v21; 
  __int64 v22; 
  __int128 v23; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 278, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( !desc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 279, ASSERT_TYPE_ASSERT, "(desc)", (const char *)&queryFormat, "desc") )
    __debugbreak();
  if ( !blockRegion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 280, ASSERT_TYPE_ASSERT, "(blockRegion)", (const char *)&queryFormat, "blockRegion") )
    __debugbreak();
  if ( !bufferedStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 281, ASSERT_TYPE_ASSERT, "(bufferedStream)", (const char *)&queryFormat, "bufferedStream") )
    __debugbreak();
  if ( desc->channelCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 283, ASSERT_TYPE_ASSERT, "(desc->channelCount <= 4)", (const char *)&queryFormat, "desc->channelCount <= 4") )
    __debugbreak();
  if ( desc->pixelType != EXR_PIXEL_TYPE_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 284, ASSERT_TYPE_ASSERT, "(desc->pixelType == EXR_PIXEL_TYPE_HALF)", (const char *)&queryFormat, "desc->pixelType == EXR_PIXEL_TYPE_HALF") )
    __debugbreak();
  v20.m_stream = bufferedStream;
  v8 = 4 - desc->channelCount;
  v9 = (unsigned int)(8 * desc->width);
  v22 = (unsigned int)v9;
  v23 = _xmm;
  Box2iWidth = (unsigned int)EXR_GetBox2iWidth(blockRegion);
  LODWORD(v11) = EXR_GetBox2iHeight(blockRegion);
  v12 = &source->buffer[(unsigned int)v9 * (__int64)blockRegion->yMin];
  if ( (int)v11 > 0 )
  {
    v11 = (unsigned int)v11;
    v21 = (unsigned int)v11;
    do
    {
      v13 = 0;
      if ( desc->channelCount )
      {
        do
        {
          if ( (int)Box2iWidth > 0 )
          {
            v14 = Box2iWidth;
            v15 = &v12[2 * *((int *)&v23 + v13 + v8) + 8 * blockRegion->xMin];
            do
            {
              v16 = *(_WORD *)v15;
              *(_WORD *)src = *(_WORD *)v15;
              end = v20.m_stream->end;
              current = v20.m_stream->current;
              if ( end <= current || (unsigned __int64)(end - current) < 2 )
              {
                BufferedStreamWriter::WriteData(&v20, src, 2ui64);
              }
              else
              {
                *(_WORD *)current = v16;
                v20.m_stream->current += 2;
              }
              v15 += 8;
              --v14;
            }
            while ( v14 );
          }
          ++v13;
        }
        while ( v13 < desc->channelCount );
        v11 = v21;
        v9 = v22;
      }
      v12 += v9;
      v21 = --v11;
    }
    while ( v11 );
  }
}

/*
==============
EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F
==============
*/
void EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F(ExrPixelSource *source, ExrWriteDesc *desc, ExrBox2i *blockRegion, BufferedStream *bufferedStream)
{
  unsigned int v8; 
  __int64 v9; 
  __int64 Box2iWidth; 
  __int64 v11; 
  const unsigned __int8 *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 *v15; 
  double v16; 
  float v17; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  unsigned __int8 src[4]; 
  BufferedStreamWriter v21; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 301, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( !desc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 302, ASSERT_TYPE_ASSERT, "(desc)", (const char *)&queryFormat, "desc") )
    __debugbreak();
  if ( !blockRegion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 303, ASSERT_TYPE_ASSERT, "(blockRegion)", (const char *)&queryFormat, "blockRegion") )
    __debugbreak();
  if ( !bufferedStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 304, ASSERT_TYPE_ASSERT, "(bufferedStream)", (const char *)&queryFormat, "bufferedStream") )
    __debugbreak();
  if ( desc->channelCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 306, ASSERT_TYPE_ASSERT, "(desc->channelCount <= 4)", (const char *)&queryFormat, "desc->channelCount <= 4") )
    __debugbreak();
  if ( desc->pixelType != EXR_PIXEL_TYPE_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 307, ASSERT_TYPE_ASSERT, "(desc->pixelType == EXR_PIXEL_TYPE_FLOAT)", (const char *)&queryFormat, "desc->pixelType == EXR_PIXEL_TYPE_FLOAT") )
    __debugbreak();
  v21.m_stream = bufferedStream;
  v8 = 4 - desc->channelCount;
  v9 = (unsigned int)(8 * desc->width);
  v23 = (unsigned int)v9;
  v24 = _xmm;
  Box2iWidth = (unsigned int)EXR_GetBox2iWidth(blockRegion);
  LODWORD(v11) = EXR_GetBox2iHeight(blockRegion);
  v12 = &source->buffer[(unsigned int)v9 * (__int64)blockRegion->yMin];
  if ( (int)v11 > 0 )
  {
    v11 = (unsigned int)v11;
    v22 = (unsigned int)v11;
    do
    {
      v13 = 0;
      if ( desc->channelCount )
      {
        do
        {
          if ( (int)Box2iWidth > 0 )
          {
            v14 = Box2iWidth;
            v15 = (unsigned __int16 *)&v12[2 * *((int *)&v24 + v13 + v8) + 8 * blockRegion->xMin];
            do
            {
              v16 = FloatFromHalf(*v15);
              *(float *)&v16 = powf_0((float)(*(float *)&v16 * 10000.0) * 0.000000097656248, 0.15930176);
              v17 = powf_0((float)((float)(*(float *)&v16 * 18.851562) + 0.8359375) / (float)((float)(*(float *)&v16 * 18.6875) + 1.0), 78.84375);
              *(float *)src = v17;
              end = v21.m_stream->end;
              current = v21.m_stream->current;
              if ( end <= current || (unsigned __int64)(end - current) < 4 )
              {
                BufferedStreamWriter::WriteData(&v21, src, 4ui64);
              }
              else
              {
                *(float *)current = v17;
                v21.m_stream->current += 4;
              }
              v15 += 4;
              --v14;
            }
            while ( v14 );
          }
          ++v13;
        }
        while ( v13 < desc->channelCount );
        v11 = v22;
        v9 = v23;
      }
      v12 += v9;
      v22 = --v11;
    }
    while ( v11 );
  }
}

/*
==============
R_LevelShot
==============
*/
void R_LevelShot(void)
{
  unsigned __int8 *v0; 
  char dest[256]; 

  Com_sprintf<256>((char (*)[256])dest, "levelshots/%s.tga", rgp.world->baseName);
  v0 = R_TakeResampledScreenshot(128, 128, 3, 18);
  if ( v0 )
  {
    *(_QWORD *)v0 = 0i64;
    *((_QWORD *)v0 + 1) = 0i64;
    *((_WORD *)v0 + 8) = 0;
    v0[2] = 2;
    v0[12] = 0x80;
    v0[14] = 0x80;
    v0[16] = 24;
    FS_WriteFile(dest, v0, 0xC012ui64);
    Mem_Virtual_Free(v0);
    Com_Printf(8, "Wrote %s\n", dest);
  }
}

/*
==============
R_SaveGameShot
==============
*/
void R_SaveGameShot(const char *saveName)
{
  unsigned __int8 *image_buffer; 
  char dest[256]; 

  Com_sprintf<256>((char (*)[256])dest, "%s.jpg", saveName);
  image_buffer = R_TakeResampledScreenshot(512, 512, 3, 0);
  if ( image_buffer )
  {
    R_SaveJpg(dest, 90, 1, 512, 512, image_buffer, NULL, NULL, NULL);
    Mem_Virtual_Free(image_buffer);
  }
}

/*
==============
R_Screenshot_ScanForFreeFilename
==============
*/
char R_Screenshot_ScanForFreeFilename(const char *nameBase, const char *namePostfix, const char *extension, char (*outFileName)[256])
{
  const char *v4; 
  const char *v5; 
  int v7; 
  int v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  int v17; 
  const char *v18; 
  int v19; 
  bool v20; 
  const char *v21; 
  bool v22; 

  v4 = "null";
  v5 = "null";
  if ( nameBase )
    v5 = nameBase;
  v7 = 5381;
  v11 = 5381;
  v12 = *v5;
  v13 = v5 + 1;
  if ( *v5 )
  {
    do
    {
      ++v13;
      v7 = v12 ^ (33 * v7);
      v12 = *(v13 - 1);
      v11 = v7;
    }
    while ( *(v13 - 1) );
  }
  v14 = "null";
  if ( namePostfix )
    v14 = namePostfix;
  v15 = *v14;
  v16 = v14 + 1;
  if ( *v14 )
  {
    do
    {
      ++v16;
      v7 = v15 ^ (33 * v7);
      v15 = *(v16 - 1);
      v11 = v7;
    }
    while ( *(v16 - 1) );
  }
  if ( extension )
    v4 = extension;
  v17 = *v4;
  v18 = v4 + 1;
  if ( *v4 )
  {
    do
    {
      ++v18;
      v7 = v17 ^ (33 * v7);
      v17 = *(v18 - 1);
      v11 = v7;
    }
    while ( *(v18 - 1) );
  }
  v19 = freeindex;
  v20 = v11 == prevHash;
  prevHash = v7;
  if ( !v20 )
    v19 = 0;
  freeindex = v19;
  if ( v19 > 9999 )
    return 0;
  v21 = "shot";
  if ( nameBase )
    v21 = nameBase;
  v22 = (unsigned int)v19 <= 0x270F;
  do
  {
    if ( !v22 )
      v19 = 9999;
    if ( namePostfix )
      Com_sprintf<256>(outFileName, "screenshots/%s%04i%s.%s", v21, (unsigned int)v19, namePostfix, extension);
    else
      Com_sprintf<256>(outFileName, "screenshots/%s%04i.%s", v21, (unsigned int)v19, extension);
    v20 = !FS_FileExists((const char *)outFileName);
    v19 = freeindex;
    if ( v20 )
      break;
    v19 = freeindex + 1;
    freeindex = v19;
    v22 = (unsigned int)v19 <= 0x270F;
  }
  while ( v19 <= 9999 );
  if ( v19 >= 9999 )
    return 0;
  freeindex = v19 + 1;
  return 1;
}

/*
==============
R_Screenshot_WriteFile
==============
*/
void R_Screenshot_WriteFile(const char *filename, int useFS, const void *buffer, unsigned __int64 fileSize)
{
  char v7; 
  const char *v8; 
  int i; 
  void *File2; 
  __int64 v11; 
  unsigned int NumberOfBytesWritten; 
  char ospath[256]; 
  wchar_t WideCharStr[256]; 

  if ( useFS )
  {
    if ( !FS_WriteFile(filename, buffer, fileSize) )
      Com_PrintError(8, "ScreenShot: write error when writing %s\n", filename);
  }
  else
  {
    v7 = 0;
    v8 = Sys_DefaultInstallPath();
    FS_BuildOSPath(v8, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])ospath);
    for ( i = 0; i < 3; ++i )
    {
      MultiByteToWideChar(0xFDE9u, 0, ospath, -1, WideCharStr, 256);
      File2 = (void *)CreateFile2(WideCharStr, 0x40000000i64, 0i64, 2i64, 0i64);
      if ( File2 != (void *)-1i64 )
      {
        if ( fileSize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 446, ASSERT_TYPE_ASSERT, "(len <= 0xffffffffui32)", (const char *)&queryFormat, "len <= UINT32_MAX") )
          __debugbreak();
        if ( fileSize > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_files_wrapper_ms.h", 447, ASSERT_TYPE_ASSERT, "(len <= FILEPOS_MAX)", (const char *)&queryFormat, "len <= FILEPOS_MAX") )
          __debugbreak();
        if ( fileSize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned long __cdecl truncate_cast_impl<unsigned long,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)fileSize, "unsigned", fileSize) )
          __debugbreak();
        WriteFile(File2, buffer, fileSize, &NumberOfBytesWritten, NULL);
        v11 = NumberOfBytesWritten;
        if ( fileSize > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "__int64 __cdecl truncate_cast_impl<__int64,unsigned __int64>(unsigned __int64)", "signed", fileSize, "unsigned", fileSize) )
          __debugbreak();
        if ( v11 == fileSize )
        {
          v7 = 1;
          i = 3;
        }
        CloseHandle(File2);
      }
      if ( v7 )
        return;
    }
    Com_PrintError(8, "ScreenShot: write error when writing %s\n", filename);
  }
}

/*
==============
R_TakeScreenshotExr
==============
*/
void R_TakeScreenshotExr(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int addClut, GfxScreenshotColorimetry clutInputColorimetry, bool exrTmp, GfxScreenshotColorimetry colorimetry)
{
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  GfxHdrGradingClutOutputColorimetry v15; 
  GfxHdrGradingClutInputColorimetry v16; 
  int v17; 
  int v18; 
  unsigned __int64 v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  int v22; 
  int v23; 
  unsigned __int64 v24; 
  const char *StatusString; 
  unsigned __int8 *v26; 
  size_t v27; 
  _DWORD *v28; 
  ExrPixelSource source; 
  BufferedStream clutImageDesc; 
  ImageDesc image; 
  ImageDesc versionInfoImageDesc; 
  R_RT_ColorHandle v35; 

  v13 = (unsigned __int8 *)Mem_Virtual_Alloc(8 * width * height, "R_TakeScreenshotExr", TRACK_RENDERER_MISC);
  v14 = v13;
  if ( v13 )
  {
    v35 = *colorRt;
    if ( R_GetBufferData(&v35, x, y, width, height, 8, v13) )
    {
      if ( addClut )
      {
        v15 = HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_UNKNOWN;
        if ( colorimetry.primaries[0] == 2 )
        {
          if ( colorimetry.transfer == EASE_OUT_QUAD )
          {
            v15 = HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_PQ;
          }
          else
          {
            v15 = HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_UNKNOWN;
            if ( colorimetry.transfer == LINEAR )
              v15 = HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_LINEAR;
          }
        }
        v16 = HDR_GRADING_CLUT_INPUT_COLORIMETRY_BT2020_PQ;
        if ( clutInputColorimetry.transfer != EASE_OUT_QUAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 342, ASSERT_TYPE_ASSERT, "(clutInputColorimetry.transfer == GfxScreenshotColorimetry::Transfer::PQ)", (const char *)&queryFormat, "clutInputColorimetry.transfer == GfxScreenshotColorimetry::Transfer::PQ") )
          __debugbreak();
        if ( clutInputColorimetry.primaries[0] == 1 )
        {
          v16 = HDR_GRADING_CLUT_INPUT_COLORIMETRY_BT709_PQ;
        }
        else if ( clutInputColorimetry.primaries[0] == 2 )
        {
          v16 = HDR_GRADING_CLUT_INPUT_COLORIMETRY_BT2020_PQ;
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 355, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported screenshot CLUT input primaries") )
        {
          __debugbreak();
        }
        R_HDRGradingClutImage_GenerateVersionInfoImage(&versionInfoImageDesc, v16, v15);
        R_HDRGradingClutImage_GenerateImage((ImageDesc *)&clutImageDesc, GFX_PF_R32G32B32A32F, v16);
        R_ImageUtil_SetupDesc(&image, GFX_PF_R16G16B16A16F, width, height, 0);
        image.imageBufferTypeless = v14;
        R_ImageUtil_CopyTile(&versionInfoImageDesc, &image, 0, 0);
        R_ImageUtil_CopyTile((const ImageDesc *)&clutImageDesc, &image, versionInfoImageDesc.imageWidth, 0);
        R_ImageUtil_ReleaseBuffer((ImageDesc *)&clutImageDesc);
        R_ImageUtil_ReleaseBuffer(&versionInfoImageDesc);
      }
      v17 = 1;
      v18 = 1;
      if ( colorimetry.transfer )
      {
        if ( colorimetry.transfer == EASE_OUT_QUAD )
        {
          source.GetScanlineBlockData = EXR_GetScanlineBlockData_PQFloatFromLinearR16G16B16A16F;
          v18 = 2;
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 389, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Transfer type not yet implemented.") )
        {
          __debugbreak();
        }
      }
      else
      {
        source.GetScanlineBlockData = EXR_GetScanlineBlockData_HalfFromR16G16B16A16F;
      }
      *(_DWORD *)&v35.m_surfaceID = v18;
      if ( colorimetry.primaries[0] == 2 )
        v17 = 2;
      source.buffer = v14;
      HIDWORD(v35.m_tracking.m_name) = v17;
      *((_DWORD *)&v35.m_surfaceID + 1) = width;
      v35.m_tracking.m_allocCounter = height;
      *(&v35.m_tracking.m_allocCounter + 1) = 3;
      LOBYTE(v35.m_tracking.m_name) = 0;
      if ( exrTmp )
      {
        v27 = 8 * width * (__int64)height;
        v28 = Mem_Virtual_Alloc(v27 + 11, "R_TakeScreenshotExr", TRACK_RENDERER_MISC);
        *v28 = *((_DWORD *)&v35.m_surfaceID + 1);
        v28[1] = v35.m_tracking.m_allocCounter;
        *((_BYTE *)v28 + 8) = v35.m_surfaceID;
        *((_BYTE *)v28 + 9) = *((_BYTE *)&v35.m_tracking.m_allocCounter + 4);
        *((_BYTE *)v28 + 10) = BYTE4(v35.m_tracking.m_name);
        memcpy_0((char *)v28 + 11, v14, v27);
        R_Screenshot_WriteFile(filename, useFS, v28, v27 + 11);
        v26 = (unsigned __int8 *)v28;
        goto LABEL_34;
      }
      v19 = EXR_WriteImage_EstimateBufferSize((ExrWriteDesc *)&v35);
      v20 = (unsigned __int8 *)Mem_Virtual_Alloc(v19, "R_TakeScreenshotExr", TRACK_RENDERER_MISC);
      v21 = v20;
      if ( v20 )
      {
        BufferedStream_MemoryStreamInit(&clutImageDesc, v20, v19);
        LOBYTE(v22) = EXR_WriteImage(&clutImageDesc, (ExrWriteDesc *)&v35, &source);
        v23 = v22;
        v24 = clutImageDesc.GetPosition(&clutImageDesc);
        if ( v23 )
        {
          StatusString = EXR_GetStatusString((const ExrStatus)v23);
          Com_Printf(8, "ScreenShot: Exr write error:'%s' when writing %s\n", StatusString, filename);
          v26 = v21;
LABEL_34:
          Mem_Virtual_Free(v26);
          goto LABEL_35;
        }
        R_Screenshot_WriteFile(filename, useFS, v21, v24);
      }
      v26 = v21;
      goto LABEL_34;
    }
  }
LABEL_35:
  Mem_Virtual_Free(v14);
}

/*
==============
R_TakeScreenshotJpg
==============
*/
void R_TakeScreenshotJpg(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  unsigned __int8 *image_buffer; 
  R_RT_ColorHandle v12; 

  image_buffer = (unsigned __int8 *)Mem_Virtual_Alloc(3 * height * width, "R_TakeScreenshotJpg", TRACK_RENDERER_MISC);
  v12 = *colorRt;
  if ( R_GetBufferData(&v12, x, y, width, height, 3, image_buffer) )
  {
    Profile_Begin(249);
    R_SaveJpg(filename, 90, useFS, width, height, image_buffer, NULL, NULL, NULL);
    Profile_EndInternal(NULL);
  }
  Mem_Virtual_Free(image_buffer);
}

/*
==============
R_TakeScreenshotTga
==============
*/
void R_TakeScreenshotTga(const char *filename, int useFS, R_RT_ColorHandle *colorRt, int x, int y, int width, int height, int addClut)
{
  unsigned __int64 v10; 
  unsigned __int8 *v11; 
  R_RT_ColorHandle v12; 
  __m256i v13[2]; 

  v10 = 3 * height * width + 18;
  v11 = (unsigned __int8 *)Mem_Virtual_Alloc(v10, "R_TakeScreenshotTga", TRACK_RENDERER_MISC);
  if ( addClut )
  {
    if ( x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 191, ASSERT_TYPE_ASSERT, "(x == 0)", (const char *)&queryFormat, "x == 0") )
      __debugbreak();
    if ( y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 192, ASSERT_TYPE_ASSERT, "(y == 0)", (const char *)&queryFormat, "y == 0") )
      __debugbreak();
    if ( width < 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 193, ASSERT_TYPE_ASSERT, "(width >= 32 * 32)", (const char *)&queryFormat, "width >= CLUT_SIZE * CLUT_SIZE") )
      __debugbreak();
    if ( height < 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot_utils.cpp", 194, ASSERT_TYPE_ASSERT, "(height >= 32)", (const char *)&queryFormat, "height >= 32") )
      __debugbreak();
  }
  v12 = *colorRt;
  *(_QWORD *)v11 = 0i64;
  *((_QWORD *)v11 + 1) = 0i64;
  v11[13] = BYTE1(width);
  v11[15] = BYTE1(height);
  v11[2] = 2;
  v11[12] = width;
  v11[14] = height;
  *((_WORD *)v11 + 8) = 8216;
  v13[0] = (__m256i)v12;
  if ( R_GetBufferData((R_RT_ColorHandle *)v13, x, y, width, height, 3, v11 + 18) )
  {
    Profile_Begin(249);
    if ( addClut )
      R_WriteClutIntoScreenshotDataTga(width, v11 + 18, 3);
    R_Screenshot_WriteFile(filename, useFS, v11, v10);
    Profile_EndInternal(NULL);
  }
  Mem_Virtual_Free(v11);
}

/*
==============
WriteHalfFromR16G16B16A16F
==============
*/
void WriteHalfFromR16G16B16A16F(BufferedStreamWriter *stream, unsigned __int16 value)
{
  BufferedStream *m_stream; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  unsigned __int16 src; 

  m_stream = stream->m_stream;
  src = value;
  end = m_stream->end;
  current = m_stream->current;
  if ( end <= current || (unsigned __int64)(end - current) < 2 )
  {
    BufferedStreamWriter::WriteData(stream, (unsigned __int8 *)&src, 2ui64);
  }
  else
  {
    *(_WORD *)current = value;
    stream->m_stream->current += 2;
  }
}

/*
==============
WritePQFloatFromR16G16B16A16F
==============
*/
void WritePQFloatFromR16G16B16A16F(BufferedStreamWriter *stream, unsigned __int16 value)
{
  double v3; 
  float v4; 
  BufferedStream *m_stream; 
  unsigned __int8 *end; 
  float *current; 
  float src; 

  v3 = FloatFromHalf(value);
  *(float *)&v3 = powf_0(*(float *)&v3 * 0.0009765625, 0.15930176);
  v4 = powf_0((float)((float)(*(float *)&v3 * 18.851562) + 0.8359375) / (float)((float)(*(float *)&v3 * 18.6875) + 1.0), 78.84375);
  m_stream = stream->m_stream;
  src = v4;
  end = m_stream->end;
  current = (float *)m_stream->current;
  if ( end <= (unsigned __int8 *)current || (unsigned __int64)(end - (unsigned __int8 *)current) < 4 )
  {
    BufferedStreamWriter::WriteData(stream, (unsigned __int8 *)&src, 4ui64);
  }
  else
  {
    *current = v4;
    m_stream->current += 4;
  }
}

