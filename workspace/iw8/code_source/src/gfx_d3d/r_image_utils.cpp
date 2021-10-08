/*
==============
R_ImageUtil_SetPixelLinearColor
==============
*/

void __fastcall R_ImageUtil_SetPixelLinearColor(ImageDesc *image, int x, int y, const vec4_t *color)
{
  ?R_ImageUtil_SetPixelLinearColor@@YAXPEAUImageDesc@@HHAEBTvec4_t@@@Z(image, x, y, color);
}

/*
==============
R_ImageUtil_CopyImage
==============
*/

void __fastcall R_ImageUtil_CopyImage(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  ?R_ImageUtil_CopyImage@@YAXPEBUImageDesc@@PEAU1@@Z(srcImage, outDstImage);
}

/*
==============
Image_PackNormalMapScaleBias
==============
*/

unsigned int __fastcall Image_PackNormalMapScaleBias(const float glossScale, const float glossBias, const float normalScale)
{
  return ?Image_PackNormalMapScaleBias@@YAIMMM@Z(glossScale, glossBias, normalScale);
}

/*
==============
R_ImageUtil_ReleaseBuffer
==============
*/

void __fastcall R_ImageUtil_ReleaseBuffer(ImageDesc *image)
{
  ?R_ImageUtil_ReleaseBuffer@@YAXPEAUImageDesc@@@Z(image);
}

/*
==============
R_ImageUtil_GetPixel
==============
*/

void __fastcall R_ImageUtil_GetPixel(const ImageDesc *image, int x, int y, vec4_t *color)
{
  ?R_ImageUtil_GetPixel@@YAXPEBUImageDesc@@HHAEATvec4_t@@@Z(image, x, y, color);
}

/*
==============
R_ImageUtil_ResamplePointFilter
==============
*/

void __fastcall R_ImageUtil_ResamplePointFilter(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  ?R_ImageUtil_ResamplePointFilter@@YAXPEBUImageDesc@@PEAU1@@Z(srcImage, outDstImage);
}

/*
==============
R_ImageUtil_CubeMapFlipSides
==============
*/

void __fastcall R_ImageUtil_CubeMapFlipSides(ImageDesc (*srcImageArray)[6])
{
  ?R_ImageUtil_CubeMapFlipSides@@YAXAEAY05UImageDesc@@@Z(srcImageArray);
}

/*
==============
R_ImageUtil_PackPixel
==============
*/

void __fastcall R_ImageUtil_PackPixel(void *pixelBuffer, GfxPixelFormat pixelFormat, const vec4_t *color)
{
  ?R_ImageUtil_PackPixel@@YAXPEAXW4GfxPixelFormat@@AEBTvec4_t@@@Z(pixelBuffer, pixelFormat, color);
}

/*
==============
Image_PackAlbedoMapScaleBias
==============
*/

unsigned int __fastcall Image_PackAlbedoMapScaleBias(const float metalnessScale, const float metalnessBias)
{
  return ?Image_PackAlbedoMapScaleBias@@YAIMM@Z(metalnessScale, metalnessBias);
}

/*
==============
R_ImageUtil_SetupDescWithPitch
==============
*/

void __fastcall R_ImageUtil_SetupDescWithPitch(ImageDesc *image, GfxPixelFormat pixelFormat, int width, int height, int blockRowPitch, int allocateBuffer)
{
  ?R_ImageUtil_SetupDescWithPitch@@YAXPEAUImageDesc@@W4GfxPixelFormat@@HHHH@Z(image, pixelFormat, width, height, blockRowPitch, allocateBuffer);
}

/*
==============
R_ImageUtil_GetPixelLinearColor
==============
*/

void __fastcall R_ImageUtil_GetPixelLinearColor(const ImageDesc *image, int x, int y, vec4_t *color)
{
  ?R_ImageUtil_GetPixelLinearColor@@YAXPEBUImageDesc@@HHAEATvec4_t@@@Z(image, x, y, color);
}

/*
==============
R_ImageUtil_FlipDiagonally
==============
*/

void __fastcall R_ImageUtil_FlipDiagonally(ImageDesc *image)
{
  ?R_ImageUtil_FlipDiagonally@@YAXPEAUImageDesc@@@Z(image);
}

/*
==============
R_ImageUtil_CubeMapFlipSides
==============
*/

void __fastcall R_ImageUtil_CubeMapFlipSides(unsigned __int8 *(*pixel)[6], int imageSize, int bitDepth)
{
  ?R_ImageUtil_CubeMapFlipSides@@YAXAEAY05PEAEHH@Z(pixel, imageSize, bitDepth);
}

/*
==============
R_ImageUtil_GetBlockAddress
==============
*/

void *__fastcall R_ImageUtil_GetBlockAddress(const ImageDesc *image, int blockX, int blockY)
{
  return ?R_ImageUtil_GetBlockAddress@@YAPEAXPEBUImageDesc@@HH@Z(image, blockX, blockY);
}

/*
==============
R_ImageUtil_SavePortableFloatmap
==============
*/

void __fastcall R_ImageUtil_SavePortableFloatmap(const char *filename, const ImageDesc *image, bool flipY)
{
  ?R_ImageUtil_SavePortableFloatmap@@YAXPEBDPEBUImageDesc@@_N@Z(filename, image, flipY);
}

/*
==============
R_ImageUtil_SetPixel
==============
*/

void __fastcall R_ImageUtil_SetPixel(ImageDesc *image, int x, int y, const vec4_t *color)
{
  ?R_ImageUtil_SetPixel@@YAXPEAUImageDesc@@HHAEBTvec4_t@@@Z(image, x, y, color);
}

/*
==============
R_ImageUtil_CopyImageData
==============
*/

void __fastcall R_ImageUtil_CopyImageData(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  ?R_ImageUtil_CopyImageData@@YAXPEBUImageDesc@@PEAU1@@Z(srcImage, outDstImage);
}

/*
==============
R_ImageUtil_FlipHorizontally
==============
*/

void __fastcall R_ImageUtil_FlipHorizontally(ImageDesc *image)
{
  ?R_ImageUtil_FlipHorizontally@@YAXPEAUImageDesc@@@Z(image);
}

/*
==============
R_ImageUtil_CopyTileData
==============
*/

void __fastcall R_ImageUtil_CopyTileData(const ImageDesc *srcImage, ImageDesc *outDstImage, const int dstXOffset, const int dstYOffset)
{
  ?R_ImageUtil_CopyTileData@@YAXPEBUImageDesc@@PEAU1@HH@Z(srcImage, outDstImage, dstXOffset, dstYOffset);
}

/*
==============
R_ParseTargaHeader
==============
*/

bool __fastcall R_ParseTargaHeader(const unsigned __int8 *headerData, unsigned __int16 *widthOut, unsigned __int16 *heightOut, unsigned __int16 *bitDepthOut, bool *topDownOut)
{
  return ?R_ParseTargaHeader@@YA_NPEBEPEAG11PEA_N@Z(headerData, widthOut, heightOut, bitDepthOut, topDownOut);
}

/*
==============
R_ImageUtil_UnpackPixel
==============
*/

void __fastcall R_ImageUtil_UnpackPixel(const void *pixelBuffer, GfxPixelFormat pixelFormat, vec4_t *outColor)
{
  ?R_ImageUtil_UnpackPixel@@YAXPEBXW4GfxPixelFormat@@AEATvec4_t@@@Z(pixelBuffer, pixelFormat, outColor);
}

/*
==============
Image_TextureSemanticToString
==============
*/

const char *__fastcall Image_TextureSemanticToString(TextureSemantic semantic)
{
  return ?Image_TextureSemanticToString@@YAPEBDW4TextureSemantic@@@Z(semantic);
}

/*
==============
R_ImageUtil_CopyTile
==============
*/

void __fastcall R_ImageUtil_CopyTile(const ImageDesc *srcImage, ImageDesc *outDstImage, const int dstXOffset, const int dstYOffset)
{
  ?R_ImageUtil_CopyTile@@YAXPEBUImageDesc@@PEAU1@HH@Z(srcImage, outDstImage, dstXOffset, dstYOffset);
}

/*
==============
R_ImageUtil_SetupDesc
==============
*/

void __fastcall R_ImageUtil_SetupDesc(ImageDesc *image, GfxPixelFormat pixelFormat, int width, int height, int allocateBuffer)
{
  ?R_ImageUtil_SetupDesc@@YAXPEAUImageDesc@@W4GfxPixelFormat@@HHH@Z(image, pixelFormat, width, height, allocateBuffer);
}

/*
==============
R_ImageUtil_FlipVertically
==============
*/

void __fastcall R_ImageUtil_FlipVertically(ImageDesc *image)
{
  ?R_ImageUtil_FlipVertically@@YAXPEAUImageDesc@@@Z(image);
}

/*
==============
Image_PackAlbedoMapScaleBias
==============
*/

__int64 __fastcall Image_PackAlbedoMapScaleBias(double metalnessScale, double metalnessBias)
{
  unsigned int v5; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm1; bias
  }
  v5 = Image_PackBiasToByte(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm0, xmm6; scale
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return (v5 << 8) | Image_PackScaleToByte(*(const float *)&_XMM0);
}

/*
==============
Image_PackBiasToByte
==============
*/

__int64 __fastcall Image_PackBiasToByte(double bias)
{
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@43800000
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vcvttss2si ebx, xmm4
  }
  if ( _EBX >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 1547, ASSERT_TYPE_ASSERT, "(b < 256)", (const char *)&queryFormat, "b < 256") )
    __debugbreak();
  return (unsigned __int8)_EBX;
}

/*
==============
Image_PackNormalMapScaleBias
==============
*/

__int64 __fastcall Image_PackNormalMapScaleBias(double glossScale, double glossBias, double normalScale)
{
  unsigned int v8; 
  unsigned int v10; 
  int v11; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm2; scale
    vmovaps xmm6, xmm1
  }
  v8 = Image_PackScaleToByte(*(const float *)&_XMM0);
  __asm { vmovaps xmm0, xmm6; bias }
  v10 = v8 << 8;
  v11 = Image_PackBiasToByte(*(double *)&_XMM0);
  __asm { vmovaps xmm0, xmm7; scale }
  result = ((v10 | v11) << 8) | Image_PackScaleToByte(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return result;
}

/*
==============
Image_PackScaleToByte
==============
*/

__int64 __fastcall Image_PackScaleToByte(double scale)
{
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@43800000
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vcvttss2si ebx, xmm4
  }
  if ( !_EBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 1537, ASSERT_TYPE_ASSERT, "(s > 0)", (const char *)&queryFormat, "s > 0") )
    __debugbreak();
  if ( _EBX > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 1538, ASSERT_TYPE_ASSERT, "(s <= 256)", (const char *)&queryFormat, "s <= 256") )
    __debugbreak();
  return (unsigned __int8)(_EBX - 1);
}

/*
==============
Image_TextureSemanticToString
==============
*/
const char *Image_TextureSemanticToString(TextureSemantic semantic)
{
  if ( (unsigned __int8)semantic >= TS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 1031, ASSERT_TYPE_ASSERT, "(semantic < TS_COUNT)", (const char *)&queryFormat, "semantic < TS_COUNT") )
    __debugbreak();
  return s_semanticTable[(unsigned __int8)semantic];
}

/*
==============
R_ImageUtil_CopyImage
==============
*/
void R_ImageUtil_CopyImage(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  int v4; 
  int imageWidth; 
  int imageHeight; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  vec4_t color; 

  if ( !srcImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 358, ASSERT_TYPE_ASSERT, "(srcImage)", (const char *)&queryFormat, "srcImage") )
    __debugbreak();
  if ( !outDstImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 359, ASSERT_TYPE_ASSERT, "(outDstImage)", (const char *)&queryFormat, "outDstImage") )
    __debugbreak();
  if ( !srcImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 361, ASSERT_TYPE_ASSERT, "(srcImage->imageBuffer)", (const char *)&queryFormat, "srcImage->imageBuffer") )
    __debugbreak();
  if ( !outDstImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 362, ASSERT_TYPE_ASSERT, "(outDstImage->imageBuffer)", (const char *)&queryFormat, "outDstImage->imageBuffer") )
    __debugbreak();
  if ( srcImage->imageWidth != outDstImage->imageWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 364, ASSERT_TYPE_ASSERT, "( srcImage->imageWidth ) == ( outDstImage->imageWidth )", "%s == %s\n\t%i, %i", "srcImage->imageWidth", "outDstImage->imageWidth", srcImage->imageWidth, outDstImage->imageWidth) )
    __debugbreak();
  if ( srcImage->imageHeight != outDstImage->imageHeight )
  {
    LODWORD(v9) = outDstImage->imageHeight;
    LODWORD(v8) = srcImage->imageHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 365, ASSERT_TYPE_ASSERT, "( srcImage->imageHeight ) == ( outDstImage->imageHeight )", "%s == %s\n\t%i, %i", "srcImage->imageHeight", "outDstImage->imageHeight", v8, v9) )
      __debugbreak();
  }
  if ( srcImage->pixelFormat == outDstImage->pixelFormat )
  {
    R_ImageUtil_CopyImageData(srcImage, outDstImage);
  }
  else
  {
    v4 = 0;
    imageWidth = srcImage->imageWidth;
    imageHeight = srcImage->imageHeight;
    v10 = imageHeight;
    if ( imageHeight > 0 )
    {
      do
      {
        v7 = 0;
        if ( imageWidth > 0 )
        {
          do
          {
            R_ImageUtil_GetPixel(srcImage, v7, v4, &color);
            if ( outDstImage->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 304, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
              __debugbreak();
            if ( outDstImage->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
              __debugbreak();
            if ( (v7 < 0 || v7 >= outDstImage->blockCountX || v4 < 0 || v4 >= outDstImage->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
              __debugbreak();
            R_ImageUtil_PackPixel((char *)outDstImage->imageBufferTypeless + v4 * outDstImage->blockRowPitch + v7 * outDstImage->blockSize, outDstImage->pixelFormat, &color);
            ++v7;
          }
          while ( v7 < imageWidth );
          imageHeight = v10;
        }
        ++v4;
      }
      while ( v4 < imageHeight );
    }
  }
}

/*
==============
R_ImageUtil_CopyImageData
==============
*/
void R_ImageUtil_CopyImageData(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  int blockCountY; 
  char *imageBufferTypeless; 
  char *v6; 
  __int64 v7; 
  size_t v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !srcImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 331, ASSERT_TYPE_ASSERT, "(srcImage)", (const char *)&queryFormat, "srcImage") )
    __debugbreak();
  if ( !outDstImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 332, ASSERT_TYPE_ASSERT, "(outDstImage)", (const char *)&queryFormat, "outDstImage") )
    __debugbreak();
  if ( !srcImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 334, ASSERT_TYPE_ASSERT, "(srcImage->imageBuffer)", (const char *)&queryFormat, "srcImage->imageBuffer") )
    __debugbreak();
  if ( !outDstImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 335, ASSERT_TYPE_ASSERT, "(outDstImage->imageBuffer)", (const char *)&queryFormat, "outDstImage->imageBuffer") )
    __debugbreak();
  if ( srcImage->pixelFormat != outDstImage->pixelFormat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 337, ASSERT_TYPE_ASSERT, "( srcImage->pixelFormat ) == ( outDstImage->pixelFormat )", "%s == %s\n\t%i, %i", "srcImage->pixelFormat", "outDstImage->pixelFormat", srcImage->pixelFormat, outDstImage->pixelFormat) )
    __debugbreak();
  if ( srcImage->imageWidth != outDstImage->imageWidth )
  {
    LODWORD(v10) = outDstImage->imageWidth;
    LODWORD(v9) = srcImage->imageWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 339, ASSERT_TYPE_ASSERT, "( srcImage->imageWidth ) == ( outDstImage->imageWidth )", "%s == %s\n\t%i, %i", "srcImage->imageWidth", "outDstImage->imageWidth", v9, v10) )
      __debugbreak();
  }
  if ( srcImage->imageHeight != outDstImage->imageHeight )
  {
    LODWORD(v10) = outDstImage->imageHeight;
    LODWORD(v9) = srcImage->imageHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 340, ASSERT_TYPE_ASSERT, "( srcImage->imageHeight ) == ( outDstImage->imageHeight )", "%s == %s\n\t%i, %i", "srcImage->imageHeight", "outDstImage->imageHeight", v9, v10) )
      __debugbreak();
  }
  blockCountY = srcImage->blockCountY;
  imageBufferTypeless = (char *)srcImage->imageBufferTypeless;
  v6 = (char *)outDstImage->imageBufferTypeless;
  if ( blockCountY > 0 )
  {
    v7 = (unsigned int)blockCountY;
    v8 = srcImage->blockSize * srcImage->blockCountX;
    do
    {
      memcpy_0(v6, imageBufferTypeless, v8);
      imageBufferTypeless += srcImage->blockRowPitch;
      v6 += outDstImage->blockRowPitch;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
R_ImageUtil_CopyTile
==============
*/
void R_ImageUtil_CopyTile(const ImageDesc *srcImage, ImageDesc *outDstImage, const int dstXOffset, const int dstYOffset)
{
  int v4; 
  int v5; 
  int v8; 
  int imageHeight; 
  int imageWidth; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v17; 
  vec4_t color; 

  v4 = dstYOffset;
  v5 = dstXOffset;
  if ( !srcImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 420, ASSERT_TYPE_ASSERT, "(srcImage)", (const char *)&queryFormat, "srcImage") )
    __debugbreak();
  if ( !outDstImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 421, ASSERT_TYPE_ASSERT, "(outDstImage)", (const char *)&queryFormat, "outDstImage") )
    __debugbreak();
  if ( !srcImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 423, ASSERT_TYPE_ASSERT, "(srcImage->imageBuffer)", (const char *)&queryFormat, "srcImage->imageBuffer") )
    __debugbreak();
  if ( !outDstImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 424, ASSERT_TYPE_ASSERT, "(outDstImage->imageBuffer)", (const char *)&queryFormat, "outDstImage->imageBuffer") )
    __debugbreak();
  v8 = 0;
  if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 426, ASSERT_TYPE_ASSERT, "( dstXOffset ) >= ( 0 )", "%s >= %s\n\t%i, %i", "dstXOffset", "0", v5, 0i64) )
    __debugbreak();
  if ( v4 < 0 )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 427, ASSERT_TYPE_ASSERT, "( dstYOffset ) >= ( 0 )", "%s >= %s\n\t%i, %i", "dstYOffset", "0", v13, 0i64) )
      __debugbreak();
  }
  if ( v5 + srcImage->imageWidth > outDstImage->imageWidth )
  {
    LODWORD(v14) = outDstImage->imageWidth;
    LODWORD(v13) = v5 + srcImage->imageWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 429, ASSERT_TYPE_ASSERT, "( srcImage->imageWidth + dstXOffset ) <= ( outDstImage->imageWidth )", "%s <= %s\n\t%i, %i", "srcImage->imageWidth + dstXOffset", "outDstImage->imageWidth", v13, v14) )
      __debugbreak();
  }
  if ( v4 + srcImage->imageHeight > outDstImage->imageHeight )
  {
    LODWORD(v14) = outDstImage->imageHeight;
    LODWORD(v13) = v4 + srcImage->imageHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 430, ASSERT_TYPE_ASSERT, "( srcImage->imageHeight + dstYOffset ) <= ( outDstImage->imageHeight )", "%s <= %s\n\t%i, %i", "srcImage->imageHeight + dstYOffset", "outDstImage->imageHeight", v13, v14) )
      __debugbreak();
  }
  if ( srcImage->pixelFormat == outDstImage->pixelFormat )
  {
    R_ImageUtil_CopyTileData(srcImage, outDstImage, v5, v4);
  }
  else
  {
    imageHeight = srcImage->imageHeight;
    imageWidth = srcImage->imageWidth;
    v17 = imageHeight;
    if ( imageHeight > 0 )
    {
      do
      {
        if ( imageWidth > 0 )
        {
          v11 = v4 + v8;
          v12 = v5;
          do
          {
            R_ImageUtil_GetPixel(srcImage, v12 - v5, v8, &color);
            if ( outDstImage->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 304, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
              __debugbreak();
            if ( outDstImage->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
              __debugbreak();
            if ( (v12 < 0 || v12 >= outDstImage->blockCountX || v11 < 0 || v11 >= outDstImage->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
              __debugbreak();
            R_ImageUtil_PackPixel((char *)outDstImage->imageBufferTypeless + v11 * outDstImage->blockRowPitch + v12 * outDstImage->blockSize, outDstImage->pixelFormat, &color);
            ++v12;
          }
          while ( v12 - v5 < imageWidth );
          v5 = dstXOffset;
          v4 = dstYOffset;
          imageHeight = v17;
        }
        ++v8;
      }
      while ( v8 < imageHeight );
    }
  }
}

/*
==============
R_ImageUtil_CopyTileData
==============
*/
void R_ImageUtil_CopyTileData(const ImageDesc *srcImage, ImageDesc *outDstImage, const int dstXOffset, const int dstYOffset)
{
  int blockCountY; 
  char *imageBufferTypeless; 
  char *v10; 
  size_t v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !srcImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 390, ASSERT_TYPE_ASSERT, "(srcImage)", (const char *)&queryFormat, "srcImage") )
    __debugbreak();
  if ( !outDstImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 391, ASSERT_TYPE_ASSERT, "(outDstImage)", (const char *)&queryFormat, "outDstImage") )
    __debugbreak();
  if ( !srcImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 393, ASSERT_TYPE_ASSERT, "(srcImage->imageBuffer)", (const char *)&queryFormat, "srcImage->imageBuffer") )
    __debugbreak();
  if ( !outDstImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 394, ASSERT_TYPE_ASSERT, "(outDstImage->imageBuffer)", (const char *)&queryFormat, "outDstImage->imageBuffer") )
    __debugbreak();
  if ( srcImage->pixelFormat != outDstImage->pixelFormat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 396, ASSERT_TYPE_ASSERT, "( srcImage->pixelFormat ) == ( outDstImage->pixelFormat )", "%s == %s\n\t%i, %i", "srcImage->pixelFormat", "outDstImage->pixelFormat", srcImage->pixelFormat, outDstImage->pixelFormat) )
    __debugbreak();
  if ( dstXOffset < 0 )
  {
    LODWORD(v13) = dstXOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 398, ASSERT_TYPE_ASSERT, "( dstXOffset ) >= ( 0 )", "%s >= %s\n\t%i, %i", "dstXOffset", "0", v13, 0i64) )
      __debugbreak();
  }
  if ( dstYOffset < 0 )
  {
    LODWORD(v13) = dstYOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 399, ASSERT_TYPE_ASSERT, "( dstYOffset ) >= ( 0 )", "%s >= %s\n\t%i, %i", "dstYOffset", "0", v13, 0i64) )
      __debugbreak();
  }
  if ( dstXOffset / outDstImage->blockWidth + srcImage->blockCountX > outDstImage->blockCountX )
  {
    LODWORD(v14) = outDstImage->blockCountX;
    LODWORD(v13) = dstXOffset / outDstImage->blockWidth + srcImage->blockCountX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 401, ASSERT_TYPE_ASSERT, "( srcImage->blockCountX + dstXOffset / outDstImage->blockWidth ) <= ( outDstImage->blockCountX )", "%s <= %s\n\t%i, %i", "srcImage->blockCountX + dstXOffset / outDstImage->blockWidth", "outDstImage->blockCountX", v13, v14) )
      __debugbreak();
  }
  if ( dstYOffset / outDstImage->blockHeight + srcImage->blockCountY > outDstImage->blockCountY )
  {
    LODWORD(v14) = outDstImage->blockCountY;
    LODWORD(v13) = dstYOffset / outDstImage->blockHeight + srcImage->blockCountY;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 402, ASSERT_TYPE_ASSERT, "( srcImage->blockCountY + dstYOffset / outDstImage->blockHeight ) <= ( outDstImage->blockCountY )", "%s <= %s\n\t%i, %i", "srcImage->blockCountY + dstYOffset / outDstImage->blockHeight", "outDstImage->blockCountY", v13, v14) )
      __debugbreak();
  }
  blockCountY = srcImage->blockCountY;
  imageBufferTypeless = (char *)srcImage->imageBufferTypeless;
  v10 = (char *)outDstImage->imageBufferTypeless + outDstImage->blockRowPitch * (dstYOffset / outDstImage->blockHeight) + (__int64)(outDstImage->blockSize * (dstXOffset / outDstImage->blockWidth));
  if ( blockCountY > 0 )
  {
    v11 = srcImage->blockCountX * srcImage->blockSize;
    v12 = (unsigned int)blockCountY;
    do
    {
      memcpy_0(v10, imageBufferTypeless, v11);
      imageBufferTypeless += srcImage->blockRowPitch;
      v10 += outDstImage->blockRowPitch;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_ImageUtil_CubeMapFlipSides
==============
*/
void R_ImageUtil_CubeMapFlipSides(unsigned __int8 *(*pixel)[6], int imageSize, int bitDepth)
{
  int *p_blockHeight; 
  __int64 v7; 
  GfxPixelFormat v8; 
  unsigned int BytesPerPixel; 
  int v10; 
  unsigned __int8 *v11; 
  ImageDesc image; 
  ImageDesc v13; 
  ImageDesc v14; 
  ImageDesc v15; 
  ImageDesc v16; 
  ImageDesc v17; 

  p_blockHeight = &image.blockHeight;
  v7 = 0i64;
  do
  {
    v8 = GFX_PF_INVALID;
    switch ( bitDepth )
    {
      case 1:
        v8 = GFX_PF_R8G8B8A8;
        break;
      case 2:
        v8 = GFX_PF_R16G16B16A16F;
        break;
      case 4:
        v8 = GFX_PF_R32G32B32A32F;
        break;
    }
    *(p_blockHeight - 2) = v8;
    *p_blockHeight = 1;
    *(p_blockHeight - 1) = 1;
    BytesPerPixel = PixelFormat_GetBytesPerPixel(v8);
    p_blockHeight[1] = BytesPerPixel;
    v10 = BytesPerPixel * imageSize;
    v11 = (*pixel)[v7++];
    p_blockHeight[2] = imageSize;
    p_blockHeight[3] = imageSize;
    p_blockHeight[4] = imageSize;
    p_blockHeight[6] = v10;
    p_blockHeight[5] = imageSize;
    p_blockHeight[7] = imageSize * v10;
    *((_QWORD *)p_blockHeight - 2) = v11;
    p_blockHeight += 12;
  }
  while ( v7 < 6 );
  R_ImageUtil_FlipDiagonally(&image);
  R_ImageUtil_FlipDiagonally(&v13);
  R_ImageUtil_FlipHorizontally(&v13);
  R_ImageUtil_FlipVertically(&v13);
  R_ImageUtil_FlipVertically(&v14);
  R_ImageUtil_FlipHorizontally(&v15);
  R_ImageUtil_FlipDiagonally(&v16);
  R_ImageUtil_FlipDiagonally(&v17);
}

/*
==============
R_ImageUtil_CubeMapFlipSides
==============
*/
void R_ImageUtil_CubeMapFlipSides(ImageDesc (*srcImageArray)[6])
{
  R_ImageUtil_FlipDiagonally((ImageDesc *)srcImageArray);
  R_ImageUtil_FlipDiagonally(&(*srcImageArray)[1]);
  R_ImageUtil_FlipHorizontally(&(*srcImageArray)[1]);
  R_ImageUtil_FlipVertically(&(*srcImageArray)[1]);
  R_ImageUtil_FlipVertically(&(*srcImageArray)[2]);
  R_ImageUtil_FlipHorizontally(&(*srcImageArray)[3]);
  R_ImageUtil_FlipDiagonally(&(*srcImageArray)[4]);
  R_ImageUtil_FlipDiagonally(&(*srcImageArray)[5]);
}

/*
==============
R_ImageUtil_FlipDiagonally
==============
*/
void R_ImageUtil_FlipDiagonally(ImageDesc *image)
{
  int v2; 
  int v3; 
  int v4; 
  char *v5; 
  size_t blockSize; 
  char *v7; 
  char Src[16]; 

  if ( image->imageWidth != image->imageHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 507, ASSERT_TYPE_ASSERT, "(image->imageWidth == image->imageHeight)", (const char *)&queryFormat, "image->imageWidth == image->imageHeight") )
    __debugbreak();
  v2 = 0;
  if ( image->imageWidth > 0 )
  {
    do
    {
      v3 = v2 + 1;
      v4 = v2 + 1;
      if ( v2 + 1 < image->imageHeight )
      {
        do
        {
          if ( (unsigned int)(image->blockSize - 1) > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 485, ASSERT_TYPE_ASSERT, "(image->blockSize > 0 && image->blockSize <= 16)", (const char *)&queryFormat, "image->blockSize > 0 && image->blockSize <= R_IMAGEUTIL_PIXELSIZE_MAX") )
            __debugbreak();
          if ( image->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 486, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
            __debugbreak();
          if ( image->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 487, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
            __debugbreak();
          if ( (v2 < 0 || v2 >= image->blockCountX || v4 < 0 || v4 >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
            __debugbreak();
          v5 = (char *)image->imageBufferTypeless + v4 * image->blockRowPitch + v2 * image->blockSize;
          if ( (v4 < 0 || v4 >= image->blockCountX || v2 < 0 || v2 >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
            __debugbreak();
          blockSize = image->blockSize;
          v7 = (char *)image->imageBufferTypeless + v4 * image->blockSize + v2 * image->blockRowPitch;
          memcpy_0(Src, v5, blockSize);
          memcpy_0(v5, v7, blockSize);
          memcpy_0(v7, Src, image->blockSize);
          ++v4;
        }
        while ( v4 < image->imageHeight );
        v3 = v2 + 1;
      }
      v2 = v3;
    }
    while ( v3 < image->imageWidth );
  }
}

/*
==============
R_ImageUtil_FlipHorizontally
==============
*/
void R_ImageUtil_FlipHorizontally(ImageDesc *image)
{
  int i; 
  int imageWidth; 
  int j; 
  int v5; 
  char *v6; 
  int v7; 
  size_t blockSize; 
  char *v9; 
  char Src[16]; 

  for ( i = 0; i < image->imageHeight; ++i )
  {
    imageWidth = image->imageWidth;
    for ( j = 0; j < imageWidth / 2; ++j )
    {
      v5 = imageWidth - j - 1;
      if ( (unsigned int)(image->blockSize - 1) > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 485, ASSERT_TYPE_ASSERT, "(image->blockSize > 0 && image->blockSize <= 16)", (const char *)&queryFormat, "image->blockSize > 0 && image->blockSize <= R_IMAGEUTIL_PIXELSIZE_MAX") )
        __debugbreak();
      if ( image->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 486, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
        __debugbreak();
      if ( image->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 487, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
        __debugbreak();
      if ( (j < 0 || j >= image->blockCountX || i < 0 || i >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
        __debugbreak();
      v6 = (char *)image->imageBufferTypeless + image->blockRowPitch * i + image->blockSize * j;
      if ( (v5 < 0 || v5 >= image->blockCountX || i < 0 || i >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
        __debugbreak();
      v7 = v5 * image->blockSize;
      blockSize = image->blockSize;
      v9 = (char *)image->imageBufferTypeless + image->blockRowPitch * i + v7;
      memcpy_0(Src, v6, blockSize);
      memcpy_0(v6, v9, blockSize);
      memcpy_0(v9, Src, image->blockSize);
      imageWidth = image->imageWidth;
    }
  }
}

/*
==============
R_ImageUtil_FlipVertically
==============
*/
void R_ImageUtil_FlipVertically(ImageDesc *image)
{
  void *v2; 
  int imageHeight; 
  int i; 
  int v5; 
  char *v6; 
  char *v7; 

  if ( image->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 542, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
    __debugbreak();
  if ( image->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 543, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
    __debugbreak();
  v2 = Mem_Virtual_Alloc(image->blockRowPitch, "R_ImageUtil_FlipVertically", TRACK_RENDERER_MISC);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 550, ASSERT_TYPE_ASSERT, "(tempRow)", (const char *)&queryFormat, "tempRow") )
    __debugbreak();
  imageHeight = image->imageHeight;
  for ( i = 0; i < imageHeight / 2; ++i )
  {
    v5 = imageHeight - i - 1;
    if ( (image->blockCountX <= 0 || i < 0 || i >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
      __debugbreak();
    v6 = (char *)image->imageBufferTypeless + i * image->blockRowPitch;
    if ( (image->blockCountX <= 0 || v5 < 0 || v5 >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
      __debugbreak();
    v7 = (char *)image->imageBufferTypeless + v5 * image->blockRowPitch;
    memcpy_0(v2, v6, image->blockRowPitch);
    memcpy_0(v6, v7, image->blockRowPitch);
    memcpy_0(v7, v2, image->blockRowPitch);
    imageHeight = image->imageHeight;
  }
  Mem_Virtual_Free(v2);
}

/*
==============
R_ImageUtil_GetBlockAddress
==============
*/
char *R_ImageUtil_GetBlockAddress(const ImageDesc *image, int blockX, int blockY)
{
  if ( (blockX < 0 || blockX >= image->blockCountX || blockY < 0 || blockY >= image->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
    __debugbreak();
  return (char *)image->imageBufferTypeless + blockX * image->blockSize + blockY * image->blockRowPitch;
}

/*
==============
R_ImageUtil_GetPixel
==============
*/
void R_ImageUtil_GetPixel(const ImageDesc *image, int x, int y, vec4_t *color)
{
  float *BlockAddress; 
  vec3_t vec; 

  _RBX = color;
  if ( image->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 284, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
    __debugbreak();
  if ( image->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 285, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
    __debugbreak();
  BlockAddress = (float *)R_ImageUtil_GetBlockAddress(image, x, y);
  switch ( image->pixelFormat )
  {
    case GFX_PF_R8:
    case GFX_PF_L8:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3b808081
      }
      _RBX->v[3] = 1.0;
      __asm { vmovss  dword ptr [rbx], xmm1 }
      *(_QWORD *)&_RBX->xyz.y = 0i64;
      break;
    case GFX_PF_R8G8:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3b808081
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, cs:__real@3b808081
      }
      _RBX->v[3] = 1.0;
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
      _RBX->v[2] = 0.0;
      break;
    case GFX_PF_R8G8B8A8:
      __asm
      {
        vmovss  xmm2, cs:__real@3b808081
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rbx], xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbx+4], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbx+8], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbx+0Ch], xmm0
      }
      break;
    case GFX_PF_R16G16B16A16F:
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*(unsigned __int16 *)BlockAddress);
      __asm { vmovss  dword ptr [rbx], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)BlockAddress + 1));
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)BlockAddress + 2));
      __asm { vmovss  dword ptr [rbx+8], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)BlockAddress + 3));
      __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      break;
    case GFX_PF_R32F:
    case GFX_PF_D32F_S8:
      _RBX->v[0] = *BlockAddress;
      *(_QWORD *)&_RBX->xyz.y = 0i64;
      _RBX->v[3] = 1.0;
      break;
    case GFX_PF_R32G32B32A32F:
      _RBX->v[0] = *BlockAddress;
      _RBX->v[1] = BlockAddress[1];
      _RBX->v[2] = BlockAddress[2];
      _RBX->v[3] = BlockAddress[3];
      break;
    case GFX_PF_R11G11B10F:
      Vec3UnpackR11G11B10F(*(_DWORD *)BlockAddress, &vec);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+vec]
        vmovss  xmm1, dword ptr [rsp+78h+vec+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rsp+78h+vec+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      _RBX->v[3] = 1.0;
      break;
    default:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144402960, 447i64);
      break;
  }
}

/*
==============
R_ImageUtil_GetPixelLinearColor
==============
*/
void R_ImageUtil_GetPixelLinearColor(const ImageDesc *image, int x, int y, vec4_t *color)
{
  bool v6; 
  bool v7; 

  _RDI = color;
  R_ImageUtil_GetPixel(image, x, y, color);
  v6 = image->pixelFormat < (unsigned int)GFX_PF_R8G8B8A8;
  v7 = image->pixelFormat == GFX_PF_R8G8B8A8;
  if ( image->pixelFormat == GFX_PF_R8G8B8A8 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vcomiss xmm0, cs:__real@3d20e411
    }
    if ( image->pixelFormat > (unsigned int)GFX_PF_R8G8B8A8 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f72a76f
        vaddss  xmm0, xmm0, cs:__real@3d55891a; X
        vmovss  xmm1, cs:__real@4019999a; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    else
    {
      __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
    }
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vcomiss xmm0, cs:__real@3d20e411
    }
    if ( v6 || v7 )
    {
      __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f72a76f
        vaddss  xmm0, xmm0, cs:__real@3d55891a; X
        vmovss  xmm1, cs:__real@4019999a; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    __asm
    {
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vcomiss xmm0, cs:__real@3d20e411
    }
    if ( v6 || v7 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3d9e8391
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f72a76f
        vaddss  xmm0, xmm0, cs:__real@3d55891a; X
        vmovss  xmm1, cs:__real@4019999a; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovss  dword ptr [rdi+8], xmm0 }
    }
  }
}

/*
==============
R_ImageUtil_PackPixel
==============
*/
void R_ImageUtil_PackPixel(void *pixelBuffer, GfxPixelFormat pixelFormat, const vec4_t *color)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = color;
  __asm { vmovaps [rsp+58h+var_38], xmm8 }
  switch ( pixelFormat )
  {
    case GFX_PF_R8:
    case GFX_PF_L8:
      __asm
      {
        vmovss  xmm0, dword ptr [r8]; jumptable 00000001422CE706 cases 1,3
        vmulss  xmm1, xmm0, cs:__real@437f0000
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si ecx, xmm1; val
      }
      *(_BYTE *)pixelBuffer = truncate_cast<unsigned char,int>(_ECX);
      break;
    case GFX_PF_R8G8:
      __asm
      {
        vmovss  xmm7, cs:__real@437f0000; jumptable 00000001422CE706 case 4
        vmulss  xmm1, xmm7, dword ptr [r8]
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vxorps  xmm8, xmm8, xmm8
        vroundss xmm3, xmm8, xmm2, 1
        vcvttss2si ecx, xmm3; val
      }
      *(_BYTE *)pixelBuffer = truncate_cast<unsigned char,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbx+4]
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vroundss xmm1, xmm8, xmm3, 1
        vcvttss2si ecx, xmm1; val
      }
      *((_BYTE *)pixelBuffer + 1) = truncate_cast<unsigned char,int>(_ECX);
      break;
    case GFX_PF_R8G8B8A8:
      __asm
      {
        vmovss  xmm7, cs:__real@437f0000; jumptable 00000001422CE706 case 6
        vmulss  xmm1, xmm7, dword ptr [r8]
        vmovss  xmm6, cs:__real@3f000000
        vaddss  xmm2, xmm1, xmm6
        vxorps  xmm8, xmm8, xmm8
        vroundss xmm3, xmm8, xmm2, 1
        vcvttss2si ecx, xmm3; val
      }
      *(_BYTE *)pixelBuffer = truncate_cast<unsigned char,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbx+4]
        vaddss  xmm3, xmm1, xmm6
        vroundss xmm1, xmm8, xmm3, 1
        vcvttss2si ecx, xmm1; val
      }
      *((_BYTE *)pixelBuffer + 1) = truncate_cast<unsigned char,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbx+8]
        vaddss  xmm3, xmm1, xmm6
        vroundss xmm1, xmm8, xmm3, 1
        vcvttss2si ecx, xmm1; val
      }
      *((_BYTE *)pixelBuffer + 2) = truncate_cast<unsigned char,int>(_ECX);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbx+0Ch]
        vaddss  xmm3, xmm1, xmm6
        vroundss xmm1, xmm8, xmm3, 1
        vcvttss2si ecx, xmm1; val
      }
      *((_BYTE *)pixelBuffer + 3) = truncate_cast<unsigned char,int>(_ECX);
      break;
    case GFX_PF_R16F:
      __asm { vmovss  xmm0, dword ptr [r8]; jumptable 00000001422CE706 case 14 }
      *(_WORD *)pixelBuffer = FloatPackFloat16HQ(*(const float *)&_XMM0);
      break;
    case GFX_PF_R16G16B16A16F:
      __asm { vmovss  xmm0, dword ptr [r8]; jumptable 00000001422CE706 case 16 }
      *(_WORD *)pixelBuffer = FloatPackFloat16HQ(*(const float *)&_XMM0);
      __asm { vmovss  xmm0, dword ptr [rbx+4]; v }
      *((_WORD *)pixelBuffer + 1) = FloatPackFloat16HQ(*(const float *)&_XMM0);
      __asm { vmovss  xmm0, dword ptr [rbx+8]; v }
      *((_WORD *)pixelBuffer + 2) = FloatPackFloat16HQ(*(const float *)&_XMM0);
      __asm { vmovss  xmm0, dword ptr [rbx+0Ch]; v }
      *((_WORD *)pixelBuffer + 3) = FloatPackFloat16HQ(*(const float *)&_XMM0);
      break;
    case GFX_PF_R32F:
      *(float *)pixelBuffer = color->v[0];
      break;
    case GFX_PF_R32G32B32A32F:
      *(vec4_t *)pixelBuffer = *color;
      break;
    case GFX_PF_R9G9B9E5_SHAREDEXP:
      *(_DWORD *)pixelBuffer = Vec3PackR9G9B9E5SharedExp((const vec3_t *)color);
      break;
    case GFX_PF_R11G11B10F:
      *(_DWORD *)pixelBuffer = Vec3PackR11G11B10F((const vec3_t *)color);
      break;
    default:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144402960, 448i64);
      break;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
R_ImageUtil_ReleaseBuffer
==============
*/
void R_ImageUtil_ReleaseBuffer(ImageDesc *image)
{
  void *imageBufferTypeless; 

  imageBufferTypeless = image->imageBufferTypeless;
  if ( imageBufferTypeless )
  {
    Mem_Virtual_Free(imageBufferTypeless);
    image->imageBufferTypeless = NULL;
  }
}

/*
==============
R_ImageUtil_ResamplePointFilter
==============
*/
void R_ImageUtil_ResamplePointFilter(const ImageDesc *srcImage, ImageDesc *outDstImage)
{
  int v4; 
  int v5; 
  int v6; 
  int imageHeight; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  vec4_t color; 

  if ( !srcImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 455, ASSERT_TYPE_ASSERT, "(srcImage)", (const char *)&queryFormat, "srcImage") )
    __debugbreak();
  if ( !outDstImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 456, ASSERT_TYPE_ASSERT, "(outDstImage)", (const char *)&queryFormat, "outDstImage") )
    __debugbreak();
  if ( !srcImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 458, ASSERT_TYPE_ASSERT, "(srcImage->imageBuffer)", (const char *)&queryFormat, "srcImage->imageBuffer") )
    __debugbreak();
  if ( !outDstImage->imageBufferTypeless && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 459, ASSERT_TYPE_ASSERT, "(outDstImage->imageBuffer)", (const char *)&queryFormat, "outDstImage->imageBuffer") )
    __debugbreak();
  v4 = srcImage->imageWidth - 1;
  if ( v4 < 1 )
    v4 = 1;
  v5 = srcImage->imageHeight - 1;
  if ( v5 < 1 )
    v5 = 1;
  v6 = outDstImage->imageWidth - 1;
  v17 = v5;
  if ( v6 < 1 )
    v6 = 1;
  v16 = v6;
  imageHeight = outDstImage->imageHeight;
  v8 = imageHeight - 1;
  if ( imageHeight - 1 < 1 )
    v8 = 1;
  v18 = v8;
  v9 = 0;
  if ( imageHeight > 0 )
  {
    v10 = 0;
    v15 = 0;
    do
    {
      v11 = v10 / v8;
      v12 = 0;
      if ( v5 < v10 / v8 )
        v11 = v5;
      if ( v11 < 0 )
        v11 = 0;
      if ( outDstImage->imageWidth > 0 )
      {
        v13 = 0;
        do
        {
          v14 = v13 / v16;
          if ( v4 < v13 / v16 )
            v14 = v4;
          if ( v14 < 0 )
            v14 = 0;
          R_ImageUtil_GetPixel(srcImage, v14, v11, &color);
          if ( outDstImage->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 304, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
            __debugbreak();
          if ( outDstImage->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
            __debugbreak();
          if ( (v12 < 0 || v12 >= outDstImage->blockCountX || v9 < 0 || v9 >= outDstImage->blockCountY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 82, ASSERT_TYPE_ASSERT, "(blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY)", (const char *)&queryFormat, "blockX >= 0 && blockX < image->blockCountX && blockY >= 0 && blockY < image->blockCountY") )
            __debugbreak();
          R_ImageUtil_PackPixel((char *)outDstImage->imageBufferTypeless + v9 * outDstImage->blockRowPitch + v12 * outDstImage->blockSize, outDstImage->pixelFormat, &color);
          ++v12;
          v13 += v4;
        }
        while ( v12 < outDstImage->imageWidth );
        v5 = v17;
      }
      v8 = v18;
      v10 = v5 + v15;
      ++v9;
      v15 += v5;
    }
    while ( v9 < outDstImage->imageHeight );
  }
}

/*
==============
R_ImageUtil_SavePortableFloatmap
==============
*/
void R_ImageUtil_SavePortableFloatmap(const char *filename, const ImageDesc *image, bool flipY)
{
  int blockSize; 
  int imageHeight; 
  int imageWidth; 
  _iobuf *v9; 
  FILE *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int i; 
  __int64 Buffer; 
  vec4_t color; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 986, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  blockSize = image->blockSize;
  if ( (blockSize <= 0 || (unsigned int)blockSize > 0x10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 987, ASSERT_TYPE_ASSERT, "(( image->blockSize > 0 ) && ( image->blockSize <= 4 * sizeof( float ) ))", (const char *)&queryFormat, "( image->blockSize > 0 ) && ( image->blockSize <= 4 * sizeof( float ) )") )
    __debugbreak();
  if ( image->blockRowPitch <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 988, ASSERT_TYPE_ASSERT, "(image->blockRowPitch > 0)", (const char *)&queryFormat, "image->blockRowPitch > 0") )
    __debugbreak();
  if ( image->imageWidth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 989, ASSERT_TYPE_ASSERT, "(image->imageWidth > 0)", (const char *)&queryFormat, "image->imageWidth > 0") )
    __debugbreak();
  if ( image->imageHeight <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 990, ASSERT_TYPE_ASSERT, "(image->imageHeight > 0)", (const char *)&queryFormat, "image->imageHeight > 0") )
    __debugbreak();
  imageHeight = image->imageHeight;
  imageWidth = image->imageWidth;
  LOBYTE(Buffer) = 10;
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 944, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4, Buffer) )
    __debugbreak();
  if ( imageWidth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 945, ASSERT_TYPE_ASSERT, "(width > 0)", (const char *)&queryFormat, "width > 0") )
    __debugbreak();
  if ( imageHeight <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 946, ASSERT_TYPE_ASSERT, "(height > 0)", (const char *)&queryFormat, "height > 0") )
    __debugbreak();
  v9 = fopen(filename, "wb");
  v10 = v9;
  if ( v9 )
  {
    j_fprintf(v9, "PF");
    fwrite(&Buffer, 1ui64, 1ui64, v10);
    j_fprintf(v10, "%d %d", (unsigned int)imageWidth, (unsigned int)imageHeight);
    fwrite(&Buffer, 1ui64, 1ui64, v10);
    j_fprintf(v10, "-1.0000");
    fwrite(&Buffer, 1ui64, 1ui64, v10);
    v11 = image->imageHeight;
    v12 = 0;
    if ( v11 > 0 )
    {
      v13 = image->imageWidth;
      do
      {
        v14 = v12;
        v15 = v11 - v12 - 1;
        if ( flipY )
          v14 = v15;
        for ( i = 0; i < v13; ++i )
        {
          R_ImageUtil_GetPixel(image, i, v14, &color);
          fwrite(&color, 0xCui64, 1ui64, v10);
          v13 = image->imageWidth;
        }
        v11 = image->imageHeight;
        ++v12;
      }
      while ( v12 < v11 );
    }
    fclose(v10);
  }
  else
  {
    j_printf("OpenPortableFloatmapForWrite: Failed to create %s\n", filename);
    j_printf("SavePortableFloatmap: Failed to create %s\n", filename);
  }
}

/*
==============
R_ImageUtil_SetPixel
==============
*/
void R_ImageUtil_SetPixel(ImageDesc *image, int x, int y, const vec4_t *color)
{
  void *BlockAddress; 

  if ( image->blockWidth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 304, ASSERT_TYPE_ASSERT, "(image->blockWidth == 1)", (const char *)&queryFormat, "image->blockWidth == 1") )
    __debugbreak();
  if ( image->blockHeight != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(image->blockHeight == 1)", (const char *)&queryFormat, "image->blockHeight == 1") )
    __debugbreak();
  BlockAddress = R_ImageUtil_GetBlockAddress(image, x, y);
  R_ImageUtil_PackPixel(BlockAddress, image->pixelFormat, color);
}

/*
==============
R_ImageUtil_SetPixelLinearColor
==============
*/
void R_ImageUtil_SetPixelLinearColor(ImageDesc *image, int x, int y, const vec4_t *color)
{
  bool v6; 
  bool v7; 
  bool v8; 
  vec4_t colora; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  v6 = image->pixelFormat < (unsigned int)GFX_PF_R8G8B8A8;
  v7 = image->pixelFormat == GFX_PF_R8G8B8A8;
  v8 = image->pixelFormat <= (unsigned int)GFX_PF_R8G8B8A8;
  __asm
  {
    vmovss  xmm1, dword ptr [r9+0Ch]
    vmovss  xmm0, dword ptr [r9]; X
    vmovss  xmm7, dword ptr [r9+4]
    vmovss  xmm6, dword ptr [r9+8]
    vmovss  dword ptr [rsp+78h+color+0Ch], xmm1
  }
  if ( v7 )
  {
    __asm { vcomiss xmm0, cs:__real@3b4d2e1c }
    if ( v8 )
    {
      __asm { vmulss  xmm1, xmm0, cs:__real@414eb852 }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm1, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vcomiss xmm7, cs:__real@3b4d2e1c
      vmovss  dword ptr [rsp+78h+color], xmm1
    }
    if ( v6 || v7 )
    {
      __asm { vmulss  xmm0, xmm7, cs:__real@414eb852 }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3ed55555; Y
        vmovaps xmm0, xmm7; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm0, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vcomiss xmm6, cs:__real@3b4d2e1c
      vmovss  dword ptr [rsp+78h+color+4], xmm0
    }
    if ( v6 || v7 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@414eb852
        vmovss  dword ptr [rsp+78h+color+8], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3ed55555; Y
        vmovaps xmm0, xmm6; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm0, xmm1, cs:__real@3d6147ae
        vmovss  dword ptr [rsp+78h+color+8], xmm0
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+78h+color], xmm0
      vmovss  dword ptr [rsp+78h+color+4], xmm7
      vmovss  dword ptr [rsp+78h+color+8], xmm6
    }
  }
  R_ImageUtil_SetPixel(image, x, y, &colora);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
R_ImageUtil_SetupDesc
==============
*/
void R_ImageUtil_SetupDesc(ImageDesc *image, GfxPixelFormat pixelFormat, int width, int height, int allocateBuffer)
{
  int v8; 
  int BytesPerPixel; 
  int blockWidth; 
  int v11; 
  int v12; 
  int blockHeight; 
  int v14; 
  int v15; 
  int v16; 
  void *v17; 

  image->imageBufferTypeless = NULL;
  *(_QWORD *)&image->blockSize = 0i64;
  *(_QWORD *)&image->imageHeight = 0i64;
  *(_QWORD *)&image->blockCountY = 0i64;
  image->imageBufferSize = 0;
  v8 = 1;
  image->pixelFormat = pixelFormat;
  if ( (unsigned int)(pixelFormat - 33) <= 0xC )
    v8 = 4;
  image->blockHeight = v8;
  image->blockWidth = v8;
  if ( (unsigned int)(pixelFormat - 33) > 0xC )
    BytesPerPixel = PixelFormat_GetBytesPerPixel(pixelFormat);
  else
    BytesPerPixel = PixelFormat_GetBytesPerBlock(pixelFormat);
  blockWidth = image->blockWidth;
  v11 = BytesPerPixel;
  image->blockSize = BytesPerPixel;
  image->imageWidth = width;
  image->imageHeight = height;
  v12 = (blockWidth + width - 1) / blockWidth;
  blockHeight = image->blockHeight;
  image->blockCountX = v12;
  v14 = v11 * v12;
  v15 = (blockHeight + height - 1) / blockHeight;
  image->blockRowPitch = v14;
  v16 = v15 * v14;
  image->blockCountY = v15;
  image->imageBufferSize = v16;
  if ( allocateBuffer )
  {
    v17 = Mem_Virtual_Alloc(v16, "Image_SetupDesc", TRACK_RENDERER_MISC);
    image->imageBufferTypeless = v17;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 55, ASSERT_TYPE_SANITY, "( image->imageBufferTypeless )", (const char *)&queryFormat, "image->imageBufferTypeless") )
      __debugbreak();
  }
}

/*
==============
R_ImageUtil_SetupDescWithPitch
==============
*/
void R_ImageUtil_SetupDescWithPitch(ImageDesc *image, GfxPixelFormat pixelFormat, int width, int height, int blockRowPitch, int allocateBuffer)
{
  int v9; 
  int BytesPerPixel; 
  int blockWidth; 
  int v12; 
  int v13; 
  int blockHeight; 
  int v15; 
  int v16; 
  void *v17; 

  image->imageBufferTypeless = NULL;
  *(_QWORD *)&image->blockSize = 0i64;
  *(_QWORD *)&image->imageHeight = 0i64;
  *(_QWORD *)&image->blockCountY = 0i64;
  image->imageBufferSize = 0;
  v9 = 1;
  image->pixelFormat = pixelFormat;
  if ( (unsigned int)(pixelFormat - 33) <= 0xC )
    v9 = 4;
  image->blockHeight = v9;
  image->blockWidth = v9;
  if ( (unsigned int)(pixelFormat - 33) > 0xC )
    BytesPerPixel = PixelFormat_GetBytesPerPixel(pixelFormat);
  else
    BytesPerPixel = PixelFormat_GetBytesPerBlock(pixelFormat);
  blockWidth = image->blockWidth;
  v12 = BytesPerPixel;
  image->blockSize = BytesPerPixel;
  image->imageWidth = width;
  image->imageHeight = height;
  v13 = (blockWidth + width - 1) / blockWidth;
  blockHeight = image->blockHeight;
  image->blockCountX = v13;
  image->blockCountY = (blockHeight + height - 1) / blockHeight;
  if ( blockRowPitch )
    v15 = blockRowPitch;
  else
    v15 = v12 * v13;
  image->blockRowPitch = v15;
  v16 = v15 * image->blockCountY;
  image->imageBufferSize = v16;
  if ( allocateBuffer )
  {
    v17 = Mem_Virtual_Alloc(v16, "Image_SetupDesc", TRACK_RENDERER_MISC);
    image->imageBufferTypeless = v17;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 55, ASSERT_TYPE_SANITY, "( image->imageBufferTypeless )", (const char *)&queryFormat, "image->imageBufferTypeless") )
      __debugbreak();
  }
}

/*
==============
R_ImageUtil_UnpackPixel
==============
*/
void R_ImageUtil_UnpackPixel(const void *pixelBuffer, GfxPixelFormat pixelFormat, vec4_t *outColor)
{
  vec3_t vec; 

  _RBX = outColor;
  switch ( pixelFormat )
  {
    case GFX_PF_R8:
    case GFX_PF_L8:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3b808081
      }
      outColor->v[3] = 1.0;
      __asm { vmovss  dword ptr [r8], xmm1 }
      *(_QWORD *)&outColor->xyz.y = 0i64;
      break;
    case GFX_PF_R8G8:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3b808081
        vmovss  dword ptr [r8], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, cs:__real@3b808081
      }
      outColor->v[3] = 1.0;
      __asm { vmovss  dword ptr [r8+4], xmm0 }
      outColor->v[2] = 0.0;
      break;
    case GFX_PF_R8G8B8A8:
      __asm
      {
        vmovss  xmm2, cs:__real@3b808081
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [r8], xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [r8+4], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [r8+8], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [r8+0Ch], xmm0
      }
      break;
    case GFX_PF_R16G16B16A16F:
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*(unsigned __int16 *)pixelBuffer);
      __asm { vmovss  dword ptr [rbx], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)pixelBuffer + 1));
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)pixelBuffer + 2));
      __asm { vmovss  dword ptr [rbx+8], xmm0 }
      *(double *)&_XMM0 = FloatUnpackFloat16HQ(*((unsigned __int16 *)pixelBuffer + 3));
      __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      break;
    case GFX_PF_R32F:
    case GFX_PF_D32F_S8:
      outColor->v[0] = *(float *)pixelBuffer;
      *(_QWORD *)&outColor->xyz.y = 0i64;
      outColor->v[3] = 1.0;
      break;
    case GFX_PF_R32G32B32A32F:
      *outColor = *(vec4_t *)pixelBuffer;
      break;
    case GFX_PF_R11G11B10F:
      Vec3UnpackR11G11B10F(*(_DWORD *)pixelBuffer, &vec);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+48h+vec]
        vmovss  xmm1, dword ptr [rsp+48h+vec+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rsp+48h+vec+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      _RBX->v[3] = 1.0;
      break;
    default:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144402960, 447i64);
      break;
  }
}

/*
==============
R_ParseTargaHeader
==============
*/
char R_ParseTargaHeader(const unsigned __int8 *headerData, unsigned __int16 *widthOut, unsigned __int16 *heightOut, unsigned __int16 *bitDepthOut, bool *topDownOut)
{
  if ( !headerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 842, ASSERT_TYPE_ASSERT, "(headerData)", (const char *)&queryFormat, "headerData") )
    __debugbreak();
  if ( !widthOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 843, ASSERT_TYPE_ASSERT, "(widthOut)", (const char *)&queryFormat, "widthOut") )
    __debugbreak();
  if ( !heightOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 844, ASSERT_TYPE_ASSERT, "(heightOut)", (const char *)&queryFormat, "heightOut") )
    __debugbreak();
  if ( !bitDepthOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_utils.cpp", 845, ASSERT_TYPE_ASSERT, "(bitDepthOut)", (const char *)&queryFormat, "bitDepthOut") )
    __debugbreak();
  if ( headerData[2] != 2 || (headerData[17] & 8) == 0 )
    return 0;
  *widthOut = *((_WORD *)headerData + 6);
  *heightOut = *((_WORD *)headerData + 7);
  *bitDepthOut = headerData[16];
  *topDownOut = (headerData[17] & 0xF7) == 32;
  return 1;
}

