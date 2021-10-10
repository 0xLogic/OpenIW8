/*
==============
UI_GetOffsetForTextureCoords
==============
*/

unsigned int __fastcall UI_GetOffsetForTextureCoords(unsigned int xPos, unsigned int yPos, unsigned int width, unsigned int height, unsigned int bytesPerPixel, unsigned int pitch, unsigned int linear, void *tp)
{
  return ?UI_GetOffsetForTextureCoords@@YAIIIIIIIIPEAX@Z(xPos, yPos, width, height, bytesPerPixel, pitch, linear, tp);
}

/*
==============
UI_CopyRGBAToOutputBuffer
==============
*/

void __fastcall UI_CopyRGBAToOutputBuffer(unsigned __int8 *output, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  ?UI_CopyRGBAToOutputBuffer@@YAXPEAEEEEE@Z(output, r, g, b, a);
}

/*
==============
UI_JPEGDecompress
==============
*/

bool __fastcall UI_JPEGDecompress(const char *imageName, unsigned __int8 *buffer, unsigned int jpegSize, unsigned __int8 *decompressBuffer, unsigned int decompressSize)
{
  return ?UI_JPEGDecompress@@YA_NPEBDPEAEI1I@Z(imageName, buffer, jpegSize, decompressBuffer, decompressSize);
}

/*
==============
UI_CopyRGBToOutputBuffer
==============
*/

void __fastcall UI_CopyRGBToOutputBuffer(unsigned __int8 *output, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b)
{
  ?UI_CopyRGBToOutputBuffer@@YAXPEAEEEE@Z(output, r, g, b);
}

/*
==============
UI_GetOffsetForTextureCoords
==============
*/

unsigned int __fastcall UI_GetOffsetForTextureCoords(unsigned int xPos, unsigned int yPos, unsigned int width, unsigned int height, unsigned int bytesPerPixel, unsigned int pitch, unsigned int linear)
{
  return ?UI_GetOffsetForTextureCoords@@YAIIIIIIII@Z(xPos, yPos, width, height, bytesPerPixel, pitch, linear);
}

/*
==============
UI_CopyRGBAToOutputBuffer
==============
*/
void UI_CopyRGBAToOutputBuffer(unsigned __int8 *output, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, unsigned __int8 a)
{
  output[3] = a;
  output[2] = b;
  output[1] = g;
  *output = r;
}

/*
==============
UI_CopyRGBToOutputBuffer
==============
*/
void UI_CopyRGBToOutputBuffer(unsigned __int8 *output, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b)
{
  output[3] = -1;
  output[2] = b;
  output[1] = g;
  *output = r;
}

/*
==============
UI_GetOffsetForTextureCoords
==============
*/
__int64 UI_GetOffsetForTextureCoords(unsigned int xPos, unsigned int yPos, unsigned int width, unsigned int height, unsigned int bytesPerPixel, unsigned int pitch)
{
  if ( !pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_screenshot.cpp", 132, ASSERT_TYPE_ASSERT, "(pitch)", (const char *)&queryFormat, "pitch") )
    __debugbreak();
  return pitch * yPos + bytesPerPixel * xPos;
}

/*
==============
UI_GetOffsetForTextureCoords
==============
*/
__int64 UI_GetOffsetForTextureCoords(unsigned int xPos, unsigned int yPos, unsigned int width, unsigned int height, unsigned int bytesPerPixel, unsigned int pitch)
{
  if ( !pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_screenshot.cpp", 148, ASSERT_TYPE_ASSERT, "(pitch)", (const char *)&queryFormat, "pitch") )
    __debugbreak();
  return pitch * yPos + bytesPerPixel * xPos;
}

/*
==============
UI_JPEGDecompress
==============
*/
bool UI_JPEGDecompress(const char *imageName, unsigned __int8 *buffer, unsigned int jpegSize, unsigned __int8 *decompressBuffer, unsigned int decompressSize)
{
  GfxImage *v8; 
  const GfxTexture *Resident; 
  const GfxTexture *v10; 
  HRESULT v11; 
  const char *v12; 
  unsigned int pitch; 
  unsigned int v14; 
  signed int height; 
  signed int width; 
  float v17; 
  int v18; 
  unsigned __int8 *jpeg_from_memory_swizzle; 
  __int64 outputXOffset; 
  int y; 
  int x; 
  unsigned __int8 *output; 
  int comp; 
  unsigned int v26[2]; 
  __int128 v27; 
  __m256i v28; 
  __int128 v29; 
  __int64 v30; 
  __m256i v31; 
  __int128 v32; 
  __int64 v33; 

  v8 = Image_Register(imageName, IMAGE_TRACK_UI);
  if ( (v8->flags & 0x40) != 0 || !j_stbi_load_jpeg_info_from_memory(buffer, jpegSize, &x, &y, &comp) || x > v8->width || y > v8->height )
    return 0;
  Resident = R_Texture_GetResident(v8->textureId);
  v27 = 0ui64;
  v10 = Resident;
  v11 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int128 *, unsigned __int8 **))Resident->basemap->m_pFunction[2].Release)(Resident->basemap, 0i64, &v27, &output);
  if ( v11 < 0 )
  {
    v12 = R_ErrorDescription(v11);
    Sys_Error((const ObfuscateErrorText)&stru_1444F8C30, 267i64, v12);
  }
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))v10->basemap->m_pFunction[3].AddRef)(v10->basemap, &v28);
  v31 = v28;
  v33 = v30;
  v32 = v29;
  ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, unsigned int *, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v31, 0i64, 1i64, 0i64, 0i64, 0i64, v26, 0i64);
  pitch = v26[0];
  if ( *(_QWORD *)v26 > 0xFFFFFFFFui64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", v26[0], "unsigned", *(intmax_t *)v26) )
    __debugbreak();
  v14 = pitch * v8->height;
  if ( !v14 || v14 > v8->totalSize )
  {
    LODWORD(outputXOffset) = pitch * v8->height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_screenshot.cpp", 289, ASSERT_TYPE_ASSERT, "( ( memSize > 0 && memSize <= image->totalSize ) )", "( memSize ) = %u", outputXOffset) )
      __debugbreak();
  }
  memset_0(output, 0, v14);
  j_stbi_set_memglob(decompressBuffer, decompressSize);
  height = v8->height;
  width = v8->width;
  v17 = 1.0 / (float)height;
  v18 = (float)(v17 * (float)width) == (float)((float)x / (float)y) ? 0 : ((int)(float)((float)(v17 * (float)y) * (float)width) - x) / 2;
  jpeg_from_memory_swizzle = j_stbi_load_jpeg_from_memory_swizzle(buffer, jpegSize, output, width, height, v18, 0, 4, pitch, 1u, NULL, UI_GetOffsetForTextureCoords, UI_CopyRGBToOutputBuffer);
  j_stbi_clear_memglob();
  v10->basemap->m_pFunction[3].QueryInterface(v10->basemap, NULL, NULL);
  return jpeg_from_memory_swizzle != NULL;
}

