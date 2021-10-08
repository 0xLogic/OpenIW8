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
  GfxImage *v9; 
  const GfxTexture *Resident; 
  const GfxTexture *v11; 
  HRESULT v13; 
  const char *v14; 
  unsigned int pitch; 
  unsigned int v19; 
  char v33; 
  int v37; 
  unsigned __int8 *jpeg_from_memory_swizzle; 
  __int64 outputXOffset; 
  int y; 
  int x; 
  unsigned __int8 *output; 
  int comp; 
  unsigned int v45[2]; 
  __int128 v46; 
  __m256i v47; 
  __m256i v50; 

  v9 = Image_Register(imageName, IMAGE_TRACK_UI);
  if ( (v9->flags & 0x40) != 0 || !j_stbi_load_jpeg_info_from_memory(buffer, jpegSize, &x, &y, &comp) || x > v9->width || y > v9->height )
    return 0;
  Resident = R_Texture_GetResident(v9->textureId);
  v46 = 0ui64;
  v11 = Resident;
  __asm
  {
    vmovups xmm0, [rbp+60h+var_D0]
    vmovdqa [rbp+60h+var_D0], xmm0
  }
  v13 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int128 *, unsigned __int8 **))Resident->basemap->m_pFunction[2].Release)(Resident->basemap, 0i64, &v46, &output);
  if ( v13 < 0 )
  {
    v14 = R_ErrorDescription(v13);
    Sys_Error((const ObfuscateErrorText)&stru_1444F8C30, 267i64, v14);
  }
  ((void (__fastcall *)(ID3D12Resource *, __m256i *))v11->basemap->m_pFunction[3].AddRef)(v11->basemap, &v47);
  __asm
  {
    vmovups ymm0, [rbp+60h+var_C0]
    vmovups xmm1, [rbp+60h+var_A0]
    vmovups [rbp+60h+var_88], ymm0
    vmovsd  xmm0, [rbp+60h+var_90]
    vmovsd  [rbp+60h+var_58], xmm0
    vmovups [rbp+60h+var_68], xmm1
  }
  ((void (__fastcall *)(ID3D12Device *, __m256i *, _QWORD, __int64, _QWORD, _QWORD, _QWORD, unsigned int *, _QWORD))g_dx.d3d12device->m_pFunction[12].Release)(g_dx.d3d12device, &v50, 0i64, 1i64, 0i64, 0i64, 0i64, v45, 0i64);
  pitch = v45[0];
  if ( *(_QWORD *)v45 > 0xFFFFFFFFui64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", v45[0], "unsigned", *(intmax_t *)v45) )
    __debugbreak();
  v19 = pitch * v9->height;
  if ( !v19 || v19 > v9->totalSize )
  {
    LODWORD(outputXOffset) = pitch * v9->height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_screenshot.cpp", 289, ASSERT_TYPE_ASSERT, "( ( memSize > 0 && memSize <= image->totalSize ) )", "( memSize ) = %u", outputXOffset) )
      __debugbreak();
  }
  memset_0(output, 0, v19);
  j_stbi_set_memglob(decompressBuffer, decompressSize);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r8d
    vdivss  xmm4, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, [rsp+160h+y]
    vcvtsi2ss xmm0, xmm0, ecx
    vcvtsi2ss xmm3, xmm3, r9d
    vdivss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm4, xmm3
    vucomiss xmm2, xmm1
  }
  if ( v33 )
  {
    v37 = 0;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm4, xmm5
      vmulss  xmm1, xmm0, xmm3
      vcvttss2si eax, xmm1
    }
    v37 = (_EAX - x) / 2;
  }
  jpeg_from_memory_swizzle = j_stbi_load_jpeg_from_memory_swizzle(buffer, jpegSize, output, v9->width, v9->height, v37, 0, 4, pitch, 1u, NULL, UI_GetOffsetForTextureCoords, UI_CopyRGBToOutputBuffer);
  j_stbi_clear_memglob();
  v11->basemap->m_pFunction[3].QueryInterface(v11->basemap, NULL, NULL);
  return jpeg_from_memory_swizzle != NULL;
}

