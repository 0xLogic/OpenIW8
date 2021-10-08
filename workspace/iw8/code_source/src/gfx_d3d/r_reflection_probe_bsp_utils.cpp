/*
==============
ReflectionProbe_GetDiskImageBuffer
==============
*/

const unsigned __int8 *__fastcall ReflectionProbe_GetDiskImageBuffer(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageBuffer@@YAPEBEPEBUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_GetDiskImageHeader
==============
*/

DiskGfxReflectionProbeImageHeader *__fastcall ReflectionProbe_GetDiskImageHeader(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageHeader@@YAPEAUDiskGfxReflectionProbeImageHeader@@PEAUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_DiskImageTypeGetName
==============
*/

const char *__fastcall ReflectionProbe_DiskImageTypeGetName(const DiskGfxReflectionProbeImageType imageType)
{
  return ?ReflectionProbe_DiskImageTypeGetName@@YAPEBDW4DiskGfxReflectionProbeImageType@@@Z(imageType);
}

/*
==============
ReflectionProbe_GetDiskImageBuffer_Octahedron
==============
*/

unsigned __int8 *__fastcall ReflectionProbe_GetDiskImageBuffer_Octahedron(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageBuffer_Octahedron@@YAPEAEPEAUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_GetDiskReflectionProbe
==============
*/

const DiskGfxReflectionProbe *__fastcall ReflectionProbe_GetDiskReflectionProbe(const GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const unsigned int reflectionProbeCount)
{
  return ?ReflectionProbe_GetDiskReflectionProbe@@YAPEBUDiskGfxReflectionProbe@@PEBUGfxReflectionProbePointers@@II@Z(probePointers, probeIndex, reflectionProbeCount);
}

/*
==============
ReflectionProbe_ImageHasMipmaps
==============
*/

bool __fastcall ReflectionProbe_ImageHasMipmaps(const DiskGfxReflectionProbeImageHeader *imageHeader)
{
  return ?ReflectionProbe_ImageHasMipmaps@@YA_NPEBUDiskGfxReflectionProbeImageHeader@@@Z(imageHeader);
}

/*
==============
ReflectionProbe_GetDiskReflectionProbe
==============
*/

DiskGfxReflectionProbe *__fastcall ReflectionProbe_GetDiskReflectionProbe(GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const unsigned int reflectionProbeCount)
{
  return ?ReflectionProbe_GetDiskReflectionProbe@@YAPEAUDiskGfxReflectionProbe@@PEAUGfxReflectionProbePointers@@II@Z(probePointers, probeIndex, reflectionProbeCount);
}

/*
==============
ReflectionProbe_GetDiskImageHeader
==============
*/

const DiskGfxReflectionProbeImageHeader *__fastcall ReflectionProbe_GetDiskImageHeader(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageHeader@@YAPEBUDiskGfxReflectionProbeImageHeader@@PEBUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_ImageFaceSubresourceSizeBytes
==============
*/

unsigned int __fastcall ReflectionProbe_ImageFaceSubresourceSizeBytes(const unsigned int imageSize, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  return ?ReflectionProbe_ImageFaceSubresourceSizeBytes@@YAIIIW4ReflectionProbeImageFormat@@@Z(imageSize, mipIndex, imageFormat);
}

/*
==============
ReflectionProbe_GetReflectionProbeImageFormatFromString
==============
*/

ReflectionProbeImageFormat __fastcall ReflectionProbe_GetReflectionProbeImageFormatFromString(const char *formatString)
{
  return ?ReflectionProbe_GetReflectionProbeImageFormatFromString@@YA?AW4ReflectionProbeImageFormat@@PEBD@Z(formatString);
}

/*
==============
ReflectionProbe_ImageBufferClear
==============
*/

void __fastcall ReflectionProbe_ImageBufferClear(unsigned __int8 *buffer, const unsigned int bufferSize, const ReflectionProbeImageFormat imageFormat, const ReflectionProbeImageClearColor color)
{
  ?ReflectionProbe_ImageBufferClear@@YAXPEAEIW4ReflectionProbeImageFormat@@W4ReflectionProbeImageClearColor@@@Z(buffer, bufferSize, imageFormat, color);
}

/*
==============
ReflectionProbe_GetDiskImageBuffer_Octahedron
==============
*/

const unsigned __int8 *__fastcall ReflectionProbe_GetDiskImageBuffer_Octahedron(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageBuffer_Octahedron@@YAPEBEPEBUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_GetDiskImageHeaderForProbe
==============
*/

const DiskGfxReflectionProbeImageHeader *__fastcall ReflectionProbe_GetDiskImageHeaderForProbe(const GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const DiskGfxReflectionProbeImageType imageType, const unsigned int reflectionProbeCount, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageHeaderForProbe@@YAPEBUDiskGfxReflectionProbeImageHeader@@PEBUGfxReflectionProbePointers@@IW4DiskGfxReflectionProbeImageType@@II@Z(probePointers, probeIndex, imageType, reflectionProbeCount, imageCount);
}

/*
==============
ReflectionProbe_ImageFaceMipByteOffset
==============
*/

unsigned int __fastcall ReflectionProbe_ImageFaceMipByteOffset(const unsigned int imageSize, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  return ?ReflectionProbe_ImageFaceMipByteOffset@@YAIIIW4ReflectionProbeImageFormat@@@Z(imageSize, mipIndex, imageFormat);
}

/*
==============
ReflectionProbe_GetDiskImageBuffer
==============
*/

unsigned __int8 *__fastcall ReflectionProbe_GetDiskImageBuffer(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  return ?ReflectionProbe_GetDiskImageBuffer@@YAPEAEPEAUGfxReflectionProbePointers@@II@Z(probePointers, imageIndex, imageCount);
}

/*
==============
ReflectionProbe_ImageSubresourceSizeBytes
==============
*/

unsigned int __fastcall ReflectionProbe_ImageSubresourceSizeBytes(const unsigned int mipmapImageSize, const ReflectionProbeImageFormatInfo *imageFormatInfo)
{
  return ?ReflectionProbe_ImageSubresourceSizeBytes@@YAIIPEBUReflectionProbeImageFormatInfo@@@Z(mipmapImageSize, imageFormatInfo);
}

/*
==============
ReflectionProbe_ImageSubresourceByteOffset
==============
*/

unsigned int __fastcall ReflectionProbe_ImageSubresourceByteOffset(const unsigned int imageSize, const unsigned int faceIndex, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  return ?ReflectionProbe_ImageSubresourceByteOffset@@YAIIIIW4ReflectionProbeImageFormat@@@Z(imageSize, faceIndex, mipIndex, imageFormat);
}

/*
==============
ReflectionProbe_GetReflectionProbeImageFormatInfo
==============
*/

void __fastcall ReflectionProbe_GetReflectionProbeImageFormatInfo(const ReflectionProbeImageFormat imageFormat, ReflectionProbeImageFormatInfo *outReflectionProbeImageFormatInfo)
{
  ?ReflectionProbe_GetReflectionProbeImageFormatInfo@@YAXW4ReflectionProbeImageFormat@@PEAUReflectionProbeImageFormatInfo@@@Z(imageFormat, outReflectionProbeImageFormatInfo);
}

/*
==============
ReflectionProbe_ImageFaceDataSizeBytes
==============
*/

unsigned int __fastcall ReflectionProbe_ImageFaceDataSizeBytes(const unsigned int imageSize, const ReflectionProbeImageFormat imageFormat, const bool hasMipmaps)
{
  return ?ReflectionProbe_ImageFaceDataSizeBytes@@YAIIW4ReflectionProbeImageFormat@@_N@Z(imageSize, imageFormat, hasMipmaps);
}

/*
==============
ReflectionProbe_DiskImageTypeGetName
==============
*/
const char *ReflectionProbe_DiskImageTypeGetName(const DiskGfxReflectionProbeImageType imageType)
{
  __int32 v1; 
  __int32 v2; 
  __int32 v3; 

  v1 = imageType - 1;
  if ( !v1 )
    return "Envmap";
  v2 = v1 - 1;
  if ( !v2 )
    return "Albedo";
  v3 = v2 - 1;
  if ( !v3 )
    return "Normal";
  if ( v3 == 1 )
    return "SecondaryDiffuse";
  return "Unknown";
}

/*
==============
ReflectionProbe_GetDiskImageBuffer
==============
*/
unsigned __int8 *ReflectionProbe_GetDiskImageBuffer(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  if ( probePointers && probePointers->imageBuffer )
    return &probePointers->imageBuffer[ReflectionProbe_GetDiskImageHeader(probePointers, imageIndex, imageCount)->imageBufferOffset];
  else
    return 0i64;
}

/*
==============
ReflectionProbe_GetDiskImageBuffer
==============
*/
unsigned __int8 *ReflectionProbe_GetDiskImageBuffer(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  if ( probePointers && probePointers->imageBuffer )
    return &probePointers->imageBuffer[ReflectionProbe_GetDiskImageHeader(probePointers, imageIndex, imageCount)->imageBufferOffset];
  else
    return 0i64;
}

/*
==============
ReflectionProbe_GetDiskImageBuffer_Octahedron
==============
*/
unsigned __int8 *ReflectionProbe_GetDiskImageBuffer_Octahedron(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  if ( probePointers && probePointers->imageBufferOctahedron )
    return &probePointers->imageBufferOctahedron[ReflectionProbe_GetDiskImageHeader(probePointers, imageIndex, imageCount)->imageBufferOffsetOctahedron];
  else
    return 0i64;
}

/*
==============
ReflectionProbe_GetDiskImageBuffer_Octahedron
==============
*/
unsigned __int8 *ReflectionProbe_GetDiskImageBuffer_Octahedron(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  if ( probePointers && probePointers->imageBufferOctahedron )
    return &probePointers->imageBufferOctahedron[ReflectionProbe_GetDiskImageHeader(probePointers, imageIndex, imageCount)->imageBufferOffsetOctahedron];
  else
    return 0i64;
}

/*
==============
ReflectionProbe_GetDiskImageHeader
==============
*/
DiskGfxReflectionProbeImageHeader *ReflectionProbe_GetDiskImageHeader(GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  __int64 v3; 
  DiskGfxReflectionProbeImageHeader *v6; 
  __int64 v8; 

  v3 = imageIndex;
  if ( !probePointers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 34, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
    __debugbreak();
  if ( (unsigned int)v3 > imageCount - 1 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 35, ASSERT_TYPE_ASSERT, "( 0 ) <= ( imageIndex ) && ( imageIndex ) <= ( imageCount - 1 )", "imageIndex not in [0, imageCount - 1]\n\t%i not in [%i, %i]", v8, 0i64, imageCount - 1) )
      __debugbreak();
  }
  v6 = &probePointers->imageHeaders[v3];
  if ( v6->imageIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 38, ASSERT_TYPE_ASSERT, "(imageHeader->imageIndex == imageIndex)", (const char *)&queryFormat, "imageHeader->imageIndex == imageIndex") )
    __debugbreak();
  return v6;
}

/*
==============
ReflectionProbe_GetDiskImageHeader
==============
*/
DiskGfxReflectionProbeImageHeader *ReflectionProbe_GetDiskImageHeader(const GfxReflectionProbePointers *probePointers, const unsigned int imageIndex, const unsigned int imageCount)
{
  __int64 v3; 
  DiskGfxReflectionProbeImageHeader *v6; 
  __int64 v8; 

  v3 = imageIndex;
  if ( !probePointers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 45, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
    __debugbreak();
  if ( (unsigned int)v3 > imageCount - 1 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 46, ASSERT_TYPE_ASSERT, "( 0 ) <= ( imageIndex ) && ( imageIndex ) <= ( imageCount - 1 )", "imageIndex not in [0, imageCount - 1]\n\t%i not in [%i, %i]", v8, 0i64, imageCount - 1) )
      __debugbreak();
  }
  v6 = &probePointers->imageHeaders[v3];
  if ( v6->imageIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 49, ASSERT_TYPE_ASSERT, "(imageHeader->imageIndex == imageIndex)", (const char *)&queryFormat, "imageHeader->imageIndex == imageIndex") )
    __debugbreak();
  return v6;
}

/*
==============
ReflectionProbe_GetDiskImageHeaderForProbe
==============
*/
const DiskGfxReflectionProbeImageHeader *ReflectionProbe_GetDiskImageHeaderForProbe(const GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const DiskGfxReflectionProbeImageType imageType, const unsigned int reflectionProbeCount, const unsigned int imageCount)
{
  __int64 v5; 
  int v9; 
  DiskGfxReflectionProbe *v10; 
  const DiskGfxReflectionProbeImageHeader *DiskImageHeader; 
  __int64 v13; 

  v5 = probeIndex;
  if ( !probePointers )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 105, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 23, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
      __debugbreak();
  }
  v9 = 0;
  if ( (unsigned int)v5 > reflectionProbeCount - 1 )
  {
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 24, ASSERT_TYPE_ASSERT, "( 0 ) <= ( probeIndex ) && ( probeIndex ) <= ( reflectionProbeCount - 1 )", "probeIndex not in [0, reflectionProbeCount - 1]\n\t%i not in [%i, %i]", v13, 0i64, reflectionProbeCount - 1) )
      __debugbreak();
  }
  v10 = &probePointers->reflectionProbes[v5];
  if ( v10->probeIndex != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 27, ASSERT_TYPE_ASSERT, "(reflectionProbe->probeIndex == probeIndex)", (const char *)&queryFormat, "reflectionProbe->probeIndex == probeIndex") )
    __debugbreak();
  if ( !v10->probeImageCount )
    return 0i64;
  while ( 1 )
  {
    DiskImageHeader = ReflectionProbe_GetDiskImageHeader(probePointers, v10->probeImageIndexArray[v9], imageCount);
    if ( !DiskImageHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 112, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( DiskImageHeader->imageType == imageType )
      break;
    if ( ++v9 >= v10->probeImageCount )
      return 0i64;
  }
  return DiskImageHeader;
}

/*
==============
ReflectionProbe_GetDiskReflectionProbe
==============
*/
DiskGfxReflectionProbe *ReflectionProbe_GetDiskReflectionProbe(GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const unsigned int reflectionProbeCount)
{
  __int64 v3; 
  DiskGfxReflectionProbe *v6; 
  __int64 v8; 

  v3 = probeIndex;
  if ( !probePointers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 12, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
    __debugbreak();
  if ( (unsigned int)v3 > reflectionProbeCount - 1 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 13, ASSERT_TYPE_ASSERT, "( 0 ) <= ( probeIndex ) && ( probeIndex ) <= ( reflectionProbeCount - 1 )", "probeIndex not in [0, reflectionProbeCount - 1]\n\t%i not in [%i, %i]", v8, 0i64, reflectionProbeCount - 1) )
      __debugbreak();
  }
  v6 = &probePointers->reflectionProbes[v3];
  if ( v6->probeIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 16, ASSERT_TYPE_ASSERT, "(reflectionProbe->probeIndex == probeIndex)", (const char *)&queryFormat, "reflectionProbe->probeIndex == probeIndex") )
    __debugbreak();
  return v6;
}

/*
==============
ReflectionProbe_GetDiskReflectionProbe
==============
*/
DiskGfxReflectionProbe *ReflectionProbe_GetDiskReflectionProbe(const GfxReflectionProbePointers *probePointers, const unsigned int probeIndex, const unsigned int reflectionProbeCount)
{
  __int64 v3; 
  DiskGfxReflectionProbe *v6; 
  __int64 v8; 

  v3 = probeIndex;
  if ( !probePointers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 23, ASSERT_TYPE_ASSERT, "(probePointers)", (const char *)&queryFormat, "probePointers") )
    __debugbreak();
  if ( (unsigned int)v3 > reflectionProbeCount - 1 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 24, ASSERT_TYPE_ASSERT, "( 0 ) <= ( probeIndex ) && ( probeIndex ) <= ( reflectionProbeCount - 1 )", "probeIndex not in [0, reflectionProbeCount - 1]\n\t%i not in [%i, %i]", v8, 0i64, reflectionProbeCount - 1) )
      __debugbreak();
  }
  v6 = &probePointers->reflectionProbes[v3];
  if ( v6->probeIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 27, ASSERT_TYPE_ASSERT, "(reflectionProbe->probeIndex == probeIndex)", (const char *)&queryFormat, "reflectionProbe->probeIndex == probeIndex") )
    __debugbreak();
  return v6;
}

/*
==============
ReflectionProbe_GetReflectionProbeImageFormatFromString
==============
*/
int ReflectionProbe_GetReflectionProbeImageFormatFromString(const char *formatString)
{
  int result; 

  result = I_strcmp(formatString, "B8G8R8A8");
  if ( result )
  {
    if ( I_strcmp(formatString, "R11G11B10F") )
    {
      if ( I_strcmp(formatString, "R16G16B16A16F") )
      {
        if ( I_strcmp(formatString, "BC6H") )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
            __debugbreak();
          return 4;
        }
        else
        {
          return 2;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 3;
    }
  }
  return result;
}

/*
==============
ReflectionProbe_GetReflectionProbeImageFormatInfo
==============
*/
void ReflectionProbe_GetReflectionProbeImageFormatInfo(const ReflectionProbeImageFormat imageFormat, ReflectionProbeImageFormatInfo *outReflectionProbeImageFormatInfo)
{
  unsigned int v4; 
  unsigned int v5; 

  if ( !outReflectionProbeImageFormatInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 248, ASSERT_TYPE_ASSERT, "(outReflectionProbeImageFormatInfo != nullptr)", (const char *)&queryFormat, "outReflectionProbeImageFormatInfo != nullptr") )
    __debugbreak();
  v4 = 0;
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v5 = 4;
      goto LABEL_13;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v5 = 0;
      goto LABEL_13;
    }
  }
  v5 = 1;
LABEL_13:
  outReflectionProbeImageFormatInfo->blockWidth = v5;
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_20;
    case 2:
      v4 = 4;
      goto LABEL_21;
    case 3:
LABEL_20:
      v4 = 1;
      goto LABEL_21;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
    __debugbreak();
LABEL_21:
  outReflectionProbeImageFormatInfo->blockHeight = v4;
  outReflectionProbeImageFormatInfo->blockSizeBytes = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
}

/*
==============
ReflectionProbe_ImageBufferClear
==============
*/
void ReflectionProbe_ImageBufferClear(unsigned __int8 *buffer, const unsigned int bufferSize, const ReflectionProbeImageFormat imageFormat, const ReflectionProbeImageClearColor color)
{
  const unsigned __int8 *p_Src; 
  unsigned int v8; 
  size_t v9; 
  unsigned int v10; 
  unsigned int i; 
  char Src; 

  Src = 0;
  p_Src = (const unsigned __int8 *)&Src;
  if ( imageFormat )
  {
    switch ( imageFormat )
    {
      case 1:
        p_Src = (const unsigned __int8 *)blockDataR16G16B16A16F[color];
        break;
      case 2:
        p_Src = blockDataBC6H[color];
        break;
      case 3:
        p_Src = (const unsigned __int8 *)blockdata11_11_10[color];
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 393, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
          __debugbreak();
        break;
    }
  }
  else
  {
    p_Src = blockDataR8G8B8A8[color];
  }
  v8 = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
  v9 = v8;
  v10 = 0;
  for ( i = bufferSize / v8; v10 < i; ++v10 )
    memcpy_0(&buffer[(unsigned int)v9 * v10], p_Src, v9);
}

/*
==============
ReflectionProbe_ImageFaceDataSizeBytes
==============
*/
__int64 ReflectionProbe_ImageFaceDataSizeBytes(const unsigned int imageSize, const ReflectionProbeImageFormat imageFormat, const bool hasMipmaps)
{
  unsigned int v3; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v3 = 0;
  v7 = 4;
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v8 = 4;
      goto LABEL_10;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v8 = 0;
      goto LABEL_10;
    }
  }
  v8 = 1;
LABEL_10:
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_17;
    case 2:
      goto LABEL_18;
    case 3:
LABEL_17:
      v7 = 1;
      goto LABEL_18;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
    __debugbreak();
  v7 = 0;
LABEL_18:
  v9 = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
  do
  {
    v10 = (v7 + imageSize - 1) / v7;
    v11 = (v8 + imageSize - 1) / v8;
    imageSize >>= 1;
    v3 += v9 * v11 * v10;
  }
  while ( hasMipmaps && imageSize );
  return v3;
}

/*
==============
ReflectionProbe_ImageFaceMipByteOffset
==============
*/
__int64 ReflectionProbe_ImageFaceMipByteOffset(const unsigned int imageSize, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  unsigned int v3; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 

  v3 = 0;
  v7 = 4;
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v8 = 4;
      goto LABEL_10;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v8 = 0;
      goto LABEL_10;
    }
  }
  v8 = 1;
LABEL_10:
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_17;
    case 2:
      break;
    case 3:
LABEL_17:
      v7 = 1;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v7 = 0;
      break;
  }
  v9 = 0;
  v10 = 0;
  v11 = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
  if ( mipIndex >= 2 )
  {
    v12 = ((mipIndex - 2) >> 1) + 1;
    do
    {
      mipIndex -= 2;
      v13 = (v7 + imageSize - 1) / v7;
      v14 = (v8 + imageSize - 1) / v8;
      v15 = imageSize >> 1;
      v9 += v11 * v14 * v13;
      v16 = (v7 + v15 - 1) / v7;
      v17 = v8 + v15 - 1;
      imageSize = v15 >> 1;
      v10 += v11 * v17 / v8 * v16;
      --v12;
    }
    while ( v12 );
  }
  if ( mipIndex )
    v3 = v11 * (v8 + imageSize - 1) / v8 * ((v7 + imageSize - 1) / v7);
  return v3 + v10 + v9;
}

/*
==============
ReflectionProbe_ImageFaceSubresourceSizeBytes
==============
*/
__int64 ReflectionProbe_ImageFaceSubresourceSizeBytes(const unsigned int imageSize, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  unsigned int v3; 
  char v6; 
  unsigned int v7; 

  v3 = 0;
  v6 = mipIndex;
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v7 = 4;
      goto LABEL_10;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v7 = 0;
      goto LABEL_10;
    }
  }
  v7 = 1;
LABEL_10:
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_17;
    case 2:
      v3 = 4;
      return ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat) * (v3 + (imageSize >> v6) - 1) / v3 * ((v7 + (imageSize >> v6) - 1) / v7);
    case 3:
LABEL_17:
      v3 = 1;
      return ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat) * (v3 + (imageSize >> v6) - 1) / v3 * ((v7 + (imageSize >> v6) - 1) / v7);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
    __debugbreak();
  return ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat) * (v3 + (imageSize >> v6) - 1) / v3 * ((v7 + (imageSize >> v6) - 1) / v7);
}

/*
==============
ReflectionProbe_ImageFormatBlockSizeBytes
==============
*/
__int64 ReflectionProbe_ImageFormatBlockSizeBytes(const ReflectionProbeImageFormat format)
{
  __int32 v1; 
  __int32 v2; 

  if ( format == UNKNOWN )
    return 4i64;
  v1 = format - 1;
  if ( !v1 )
    return 8i64;
  v2 = v1 - 1;
  if ( !v2 )
    return 16i64;
  if ( v2 == 1 )
    return 4i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
    __debugbreak();
  return 0i64;
}

/*
==============
ReflectionProbe_ImageHasMipmaps
==============
*/
char ReflectionProbe_ImageHasMipmaps(const DiskGfxReflectionProbeImageHeader *imageHeader)
{
  if ( imageHeader->imageType == DiskGfxReflectionProbeImageType_ReflectionProbe )
    return 1;
  if ( imageHeader->imageType != DiskGfxReflectionProbeImageType_GbufferAlbedo && imageHeader->imageType != DiskGfxReflectionProbeImageType_GbufferNormal && imageHeader->imageType != DiskGfxReflectionProbeImageType_GbufferSecondaryDiffuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 59, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "imageHeader->imageType invalid") )
    __debugbreak();
  return 0;
}

/*
==============
ReflectionProbe_ImageSubresourceByteOffset
==============
*/
__int64 ReflectionProbe_ImageSubresourceByteOffset(const unsigned int imageSize, const unsigned int faceIndex, const unsigned int mipIndex, const ReflectionProbeImageFormat imageFormat)
{
  unsigned int v4; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 

  v4 = 0;
  v7 = 4;
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v8 = 4;
      goto LABEL_10;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v8 = 0;
      goto LABEL_10;
    }
  }
  v8 = 1;
LABEL_10:
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_18;
    case 2:
      v9 = 4;
      goto LABEL_19;
    case 3:
LABEL_18:
      v9 = 1;
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
    __debugbreak();
  v9 = 0;
LABEL_19:
  v10 = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
  v11 = imageSize;
  v12 = 0;
  do
  {
    v12 += v10 * (v11 + v8 - 1) / v8 * ((v9 + v11 - 1) / v9);
    v11 >>= 1;
  }
  while ( v11 );
  if ( imageFormat && imageFormat != 1 )
  {
    if ( imageFormat == 2 )
    {
      v13 = 4;
      goto LABEL_30;
    }
    if ( imageFormat != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v13 = 0;
      goto LABEL_30;
    }
  }
  v13 = 1;
LABEL_30:
  switch ( imageFormat )
  {
    case 0:
    case 1:
      goto LABEL_37;
    case 2:
      break;
    case 3:
LABEL_37:
      v7 = 1;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_bsp_utils.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported reflection probe image format") )
        __debugbreak();
      v7 = 0;
      break;
  }
  v14 = 0;
  v15 = 0;
  v16 = ReflectionProbe_ImageFormatBlockSizeBytes(imageFormat);
  v17 = mipIndex;
  v18 = v16;
  if ( mipIndex >= 2 )
  {
    v19 = ((mipIndex - 2) >> 1) + 1;
    do
    {
      v17 -= 2;
      v20 = (v7 + imageSize - 1) / v7;
      v21 = (v13 + imageSize - 1) / v13;
      v22 = imageSize >> 1;
      v14 += v18 * v21 * v20;
      v23 = (v7 + v22 - 1) / v7;
      v24 = v13 + v22 - 1;
      imageSize = v22 >> 1;
      v15 += v18 * v24 / v13 * v23;
      --v19;
    }
    while ( v19 );
  }
  if ( v17 )
    v4 = v18 * (v13 + imageSize - 1) / v13 * ((v7 + imageSize - 1) / v7);
  return v4 + v14 + v15 + faceIndex * v12;
}

/*
==============
ReflectionProbe_ImageSubresourceSizeBytes
==============
*/
__int64 ReflectionProbe_ImageSubresourceSizeBytes(const unsigned int mipmapImageSize, const ReflectionProbeImageFormatInfo *imageFormatInfo)
{
  return imageFormatInfo->blockSizeBytes * (imageFormatInfo->blockWidth + mipmapImageSize - 1) / imageFormatInfo->blockWidth * ((imageFormatInfo->blockHeight + mipmapImageSize - 1) / imageFormatInfo->blockHeight);
}

