/*
==============
Image_CubemapFace
==============
*/

GfxCubeFace __fastcall Image_CubemapFace(unsigned int faceIndex)
{
  return ?Image_CubemapFace@@YA?AW4GfxCubeFace@@I@Z(faceIndex);
}

/*
==============
Image_Setup
==============
*/

void __fastcall Image_Setup(GfxImage *image, const Image_SetupParams *params)
{
  ?Image_Setup@@YAXPEAUGfxImage@@AEBUImage_SetupParams@@@Z(image, params);
}

/*
==============
Image_ComputeTileModeWithFlags_XB3
==============
*/

XG_TILE_MODE __fastcall Image_ComputeTileModeWithFlags_XB3(const Image_SetupParams *params)
{
  return ?Image_ComputeTileModeWithFlags_XB3@@YA?AW4XG_TILE_MODE@@AEBUImage_SetupParams@@@Z(params);
}

/*
==============
Image_ConditionallyMakeTypelessFormat
==============
*/

DXGI_FORMAT __fastcall Image_ConditionallyMakeTypelessFormat(GfxImageFlags imageFlags, GfxPixelFormat format)
{
  return ?Image_ConditionallyMakeTypelessFormat@@YA?AW4DXGI_FORMAT@@W4GfxImageFlags@@W4GfxPixelFormat@@@Z(imageFlags, format);
}

/*
==============
Image_UploadData
==============
*/

void __fastcall Image_UploadData(const GfxImage *image, GfxCubeFace face, unsigned int mipLevel, const unsigned __int8 *src)
{
  ?Image_UploadData@@YAXPEBUGfxImage@@W4GfxCubeFace@@IPEBE@Z(image, face, mipLevel, src);
}

/*
==============
Image_ShaderComponentMapping
==============
*/

unsigned int __fastcall Image_ShaderComponentMapping(DXGI_FORMAT format, bool lFormat)
{
  return ?Image_ShaderComponentMapping@@YAIW4DXGI_FORMAT@@_N@Z(format, lFormat);
}

/*
==============
Image_SourceBytesPerSlice
==============
*/

unsigned int __fastcall Image_SourceBytesPerSlice(GfxPixelFormat format, int width, int height)
{
  return ?Image_SourceBytesPerSlice@@YAIW4GfxPixelFormat@@HH@Z(format, width, height);
}

/*
==============
Image_CubemapFaceOrArraySlice
==============
*/

GfxCubeFace __fastcall Image_CubemapFaceOrArraySlice(MapType mapType, unsigned int faceIndex)
{
  return ?Image_CubemapFaceOrArraySlice@@YA?AW4GfxCubeFace@@W4MapType@@I@Z(mapType, faceIndex);
}

/*
==============
Image_ComputeTileMode_XB3
==============
*/

XG_TILE_MODE __fastcall Image_ComputeTileMode_XB3(MapType mapType, XG_FORMAT format, unsigned int width, unsigned int height, unsigned int depth, unsigned int numElements, unsigned int bindFlags)
{
  return ?Image_ComputeTileMode_XB3@@YA?AW4XG_TILE_MODE@@W4MapType@@W4XG_FORMAT@@IIIII@Z(mapType, format, width, height, depth, numElements, bindFlags);
}

/*
==============
Image_GetArraySize
==============
*/

unsigned int __fastcall Image_GetArraySize(const MapType mapType, const unsigned int elementCount)
{
  return ?Image_GetArraySize@@YAIW4MapType@@I@Z(mapType, elementCount);
}

/*
==============
Image_GetBCValidatedDimension
==============
*/

int __fastcall Image_GetBCValidatedDimension(const Image_SetupParams *imageParams, int dim)
{
  return ?Image_GetBCValidatedDimension@@YAHAEBUImage_SetupParams@@H@Z(imageParams, dim);
}

/*
==============
Image_GetMapTypeFromImageFlags
==============
*/

MapType __fastcall Image_GetMapTypeFromImageFlags(GfxImageFlags imageFlags)
{
  return ?Image_GetMapTypeFromImageFlags@@YA?AW4MapType@@W4GfxImageFlags@@@Z(imageFlags);
}

/*
==============
Image_SetupWithData
==============
*/

void __fastcall Image_SetupWithData(GfxImage *image, const Image_SetupParams *params, const Image_SetupData *data)
{
  ?Image_SetupWithData@@YAXPEAUGfxImage@@AEBUImage_SetupParams@@AEBUImage_SetupData@@@Z(image, params, data);
}

/*
==============
Image_CountMipmaps
==============
*/

unsigned int __fastcall Image_CountMipmaps(unsigned int width, unsigned int height, unsigned int depth)
{
  return ?Image_CountMipmaps@@YAIIII@Z(width, height, depth);
}

/*
==============
Image_GetCardMemoryAmount
==============
*/

unsigned int __fastcall Image_GetCardMemoryAmount(const Image_SetupParams *params)
{
  return ?Image_GetCardMemoryAmount@@YAIAEBUImage_SetupParams@@@Z(params);
}

/*
==============
Image_IsLFormat
==============
*/

bool __fastcall Image_IsLFormat(GfxPixelFormat format)
{
  return ?Image_IsLFormat@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
Image_ShaderComponentMapping
==============
*/

unsigned int __fastcall Image_ShaderComponentMapping(GfxPixelFormat format)
{
  return ?Image_ShaderComponentMapping@@YAIW4GfxPixelFormat@@@Z(format);
}

/*
==============
Image_SourceBytesPerRow
==============
*/

unsigned int __fastcall Image_SourceBytesPerRow(GfxPixelFormat format, int width)
{
  return ?Image_SourceBytesPerRow@@YAIW4GfxPixelFormat@@H@Z(format, width);
}

/*
==============
Image_UploadData
==============
*/

void __fastcall Image_UploadData(const GfxImage *image, const Image_SetupData *data)
{
  ?Image_UploadData@@YAXPEBUGfxImage@@AEBUImage_SetupData@@@Z(image, data);
}

/*
==============
Image_GetTextureLayout_XB3
==============
*/

void __fastcall Image_GetTextureLayout_XB3(const Image_SetupParams *params, XG_RESOURCE_LAYOUT *layout)
{
  ?Image_GetTextureLayout_XB3@@YAXAEBUImage_SetupParams@@PEAUXG_RESOURCE_LAYOUT@@@Z(params, layout);
}

/*
==============
Image_ComputeTileModeWithFlags_XB3
==============
*/
XG_TILE_MODE Image_ComputeTileModeWithFlags_XB3(const Image_SetupParams *params)
{
  GfxImageFlags flags; 
  MapType MapTypeFromImageFlags; 
  GfxImageFlags v5; 
  DXGI_FORMAT DXGIFormatForPixelFormat; 
  enum XG_FORMAT TypelessFormat; 
  int height; 
  int width; 
  unsigned __int32 v10; 
  enum XG_RESOURCE_DIMENSION v11; 
  unsigned int numElements; 

  flags = params->flags;
  if ( (flags & 0x20001400) != 0 )
    return 8;
  MapTypeFromImageFlags = Image_GetMapTypeFromImageFlags(flags);
  v5 = params->flags;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(params->format);
  TypelessFormat = DXGIFormatForPixelFormat;
  if ( v5 < IMG_FLAG_NONE )
    TypelessFormat = R_D3D_MakeTypelessFormat(DXGIFormatForPixelFormat);
  height = params->height;
  width = params->width;
  v10 = (params->flags & 0x800000 | 0x80000u) >> 16;
  v11 = XG_RESOURCE_DIMENSION_TEXTURE2D;
  numElements = 1;
  if ( (params->flags & 0x20000000) != 0 )
    v10 = 0;
  switch ( MapTypeFromImageFlags )
  {
    case MAPTYPE_2D:
    case MAPTYPE_CUBE:
    case MAPTYPE_ARRAY:
    case MAPTYPE_CUBE_ARRAY:
      switch ( MapTypeFromImageFlags )
      {
        case MAPTYPE_CUBE:
          numElements = 6;
          break;
        case MAPTYPE_ARRAY:
          numElements = params->numElements;
          break;
        case MAPTYPE_CUBE_ARRAY:
          numElements = 6 * params->numElements;
          break;
      }
      break;
    case MAPTYPE_3D:
      numElements = params->depth;
      v11 = XG_RESOURCE_DIMENSION_TEXTURE3D;
      break;
    case MAPTYPE_1D:
      v11 = XG_RESOURCE_DIMENSION_TEXTURE1D;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
      break;
  }
  return XGComputeOptimalTileMode(v11, TypelessFormat, width, height, numElements, 1u, v10, 0);
}

/*
==============
Image_ComputeTileMode_XB3
==============
*/
XG_TILE_MODE Image_ComputeTileMode_XB3(MapType mapType, XG_FORMAT format, unsigned int width, unsigned int height, unsigned int depth, unsigned int numElements, unsigned int bindFlags)
{
  enum XG_RESOURCE_DIMENSION v7; 
  unsigned int v11; 

  v7 = XG_RESOURCE_DIMENSION_TEXTURE2D;
  v11 = 1;
  switch ( mapType )
  {
    case MAPTYPE_2D:
    case MAPTYPE_CUBE:
    case MAPTYPE_ARRAY:
    case MAPTYPE_CUBE_ARRAY:
      switch ( mapType )
      {
        case MAPTYPE_CUBE:
          v11 = 6;
          break;
        case MAPTYPE_ARRAY:
          v11 = numElements;
          break;
        case MAPTYPE_CUBE_ARRAY:
          v11 = 6 * numElements;
          break;
      }
      break;
    case MAPTYPE_3D:
      v11 = depth;
      v7 = XG_RESOURCE_DIMENSION_TEXTURE3D;
      break;
    case MAPTYPE_1D:
      v7 = XG_RESOURCE_DIMENSION_TEXTURE1D;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
      break;
  }
  return XGComputeOptimalTileMode(v7, format, width, height, v11, 1u, bindFlags, 0);
}

/*
==============
Image_ConditionallyMakeTypelessFormat
==============
*/
DXGI_FORMAT Image_ConditionallyMakeTypelessFormat(GfxImageFlags imageFlags, GfxPixelFormat format)
{
  DXGI_FORMAT result; 

  result = R_D3D_GetDXGIFormatForPixelFormat(format);
  if ( imageFlags < IMG_FLAG_NONE )
    return R_D3D_MakeTypelessFormat(result);
  return result;
}

/*
==============
Image_CountMipmaps
==============
*/
__int64 Image_CountMipmaps(unsigned int width, unsigned int height, unsigned int depth)
{
  unsigned int v3; 

  v3 = depth;
  if ( (int)width > (int)height )
    height = width;
  if ( (int)height > (int)depth )
    v3 = height;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  return 32 - __lzcnt(v3);
}

/*
==============
Image_CubemapFace
==============
*/
__int64 Image_CubemapFace(unsigned int faceIndex)
{
  if ( faceIndex >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1120, ASSERT_TYPE_ASSERT, "( ( faceIndex < 6 ) )", "( faceIndex ) = %i", faceIndex) )
    __debugbreak();
  return faceIndex;
}

/*
==============
Image_CubemapFaceOrArraySlice
==============
*/
__int64 Image_CubemapFaceOrArraySlice(MapType mapType, unsigned int faceIndex)
{
  if ( (unsigned __int8)(mapType - 4) > 1u && faceIndex >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1120, ASSERT_TYPE_ASSERT, "( ( faceIndex < 6 ) )", "( faceIndex ) = %i", faceIndex) )
    __debugbreak();
  return faceIndex;
}

/*
==============
Image_GetArraySize
==============
*/
__int64 Image_GetArraySize(const MapType mapType, const unsigned int elementCount)
{
  switch ( mapType )
  {
    case MAPTYPE_CUBE:
      return 6i64;
    case MAPTYPE_ARRAY:
      return elementCount;
    case MAPTYPE_CUBE_ARRAY:
      return 6 * elementCount;
  }
  return 1i64;
}

/*
==============
Image_GetBCValidatedDimension
==============
*/
__int64 Image_GetBCValidatedDimension(const Image_SetupParams *imageParams, int dim)
{
  if ( (unsigned int)(imageParams->format - 33) <= 0xC && (dim < 4 || (dim & 3) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1189, ASSERT_TYPE_ASSERT, "(!PixelFormat_IsCompressed( imageParams.format ) || (dim >= 4 && (dim & 3) == 0))", (const char *)&queryFormat, "!PixelFormat_IsCompressed( imageParams.format ) || (dim >= 4 && (dim & 3) == 0)") )
    __debugbreak();
  return (unsigned int)dim;
}

/*
==============
Image_GetCardMemoryAmount
==============
*/
unsigned int Image_GetCardMemoryAmount(const Image_SetupParams *params)
{
  const XG_RESOURCE_LAYOUT *customLayout; 
  unsigned __int64 SizeBytes; 
  XG_RESOURCE_LAYOUT layout; 

  customLayout = params->customLayout;
  if ( customLayout )
  {
    if ( customLayout->BaseAlignmentBytes != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 308, ASSERT_TYPE_ASSERT, "( params.customLayout->BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%u, %u", "params.customLayout->BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", customLayout->BaseAlignmentBytes, 256) )
      __debugbreak();
    SizeBytes = params->customLayout->SizeBytes;
  }
  else
  {
    Image_GetTextureLayout_XB3(params, &layout);
    if ( layout.BaseAlignmentBytes != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 315, ASSERT_TYPE_ASSERT, "( layout.BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%u, %u", "layout.BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", LODWORD(layout.BaseAlignmentBytes), 256) )
      __debugbreak();
    SizeBytes = layout.SizeBytes;
  }
  return truncate_cast<unsigned int,unsigned __int64>(SizeBytes);
}

/*
==============
Image_GetMapTypeFromImageFlags
==============
*/
char Image_GetMapTypeFromImageFlags(GfxImageFlags imageFlags)
{
  unsigned __int32 v1; 

  v1 = imageFlags & 0x38000;
  if ( v1 > 0x18000 )
  {
    if ( v1 == 0x20000 )
      return 4;
    if ( v1 == 163840 )
      return 5;
  }
  else
  {
    switch ( v1 )
    {
      case 0x18000u:
        return 3;
      case 0u:
        return 0;
      case 0x8000u:
        return 1;
      case 0x10000u:
        return 2;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1173, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown image map type.") )
    __debugbreak();
  return 6;
}

/*
==============
Image_GetTexture1DDesc_XB3
==============
*/
XG_TEXTURE1D_DESC *Image_GetTexture1DDesc_XB3(XG_TEXTURE1D_DESC *result, const Image_SetupParams *params)
{
  unsigned int v4; 
  unsigned int maxLevelCount; 
  GfxImageFlags flags; 
  XG_FORMAT DXGIFormatForPixelFormat; 
  GfxImageFlags v8; 
  unsigned int v9; 
  int v10; 

  if ( (params->flags & 0x38000) != 98304 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 143, ASSERT_TYPE_ASSERT, "(( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D)", (const char *)&queryFormat, "( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D") )
    __debugbreak();
  if ( params->width < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 144, ASSERT_TYPE_ASSERT, "(params.width >= 1)", (const char *)&queryFormat, "params.width >= 1") )
    __debugbreak();
  if ( params->height != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 145, ASSERT_TYPE_ASSERT, "(params.height == 1)", (const char *)&queryFormat, "params.height == 1") )
    __debugbreak();
  if ( params->depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 146, ASSERT_TYPE_ASSERT, "(params.depth == 1)", (const char *)&queryFormat, "params.depth == 1") )
    __debugbreak();
  if ( params->numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 147, ASSERT_TYPE_ASSERT, "(params.numElements == 1)", (const char *)&queryFormat, "params.numElements == 1") )
    __debugbreak();
  *(_QWORD *)&result->Width = 0i64;
  *(_QWORD *)&result->ArraySize = 0i64;
  *(_QWORD *)&result->Usage = 0i64;
  *(_QWORD *)&result->CPUAccessFlags = 0i64;
  *(_QWORD *)&result->ESRAMOffsetBytes = 0i64;
  *(_QWORD *)&result->TileMode = 0i64;
  result->Width = params->width;
  if ( (params->flags & 2) != 0 || params->maxLevelCount == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = Image_CountMipmaps(params->width, params->height, params->depth);
    maxLevelCount = params->maxLevelCount;
    if ( maxLevelCount && v4 > maxLevelCount )
      v4 = params->maxLevelCount;
  }
  result->MipLevels = v4;
  result->ArraySize = 1;
  flags = params->flags;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(params->format);
  if ( flags < IMG_FLAG_NONE )
    DXGIFormatForPixelFormat = R_D3D_MakeTypelessFormat((DXGI_FORMAT)DXGIFormatForPixelFormat);
  result->Format = DXGIFormatForPixelFormat;
  v8 = params->flags;
  v9 = (v8 & 0x800000 | 0x80000u) >> 16;
  result->Usage = (v8 & 0x20000000) != 0 ? XG_USAGE_STAGING : XG_USAGE_DEFAULT;
  v10 = 0;
  if ( (v8 & 0x20000000) != 0 )
    v9 = 0;
  result->BindFlags = v9;
  result->CPUAccessFlags = 0;
  if ( (v8 & 0x800) != 0 )
  {
    v10 = 0x20000;
    result->CPUAccessFlags = 0x20000;
  }
  if ( (v8 & 0x1000) != 0 )
    result->CPUAccessFlags = v10 | 0x10000;
  result->TileMode = Image_ComputeTileModeWithFlags_XB3(params);
  return result;
}

/*
==============
Image_GetTexture2DDesc_XB3
==============
*/
XG_TEXTURE2D_DESC *Image_GetTexture2DDesc_XB3(XG_TEXTURE2D_DESC *result, const Image_SetupParams *params)
{
  MapType MapTypeFromImageFlags; 
  unsigned int v5; 
  unsigned int maxLevelCount; 
  unsigned int numElements; 
  int v8; 
  GfxImageFlags flags; 
  XG_FORMAT DXGIFormatForPixelFormat; 
  int v11; 
  GfxImageFlags v12; 
  unsigned int v13; 

  MapTypeFromImageFlags = Image_GetMapTypeFromImageFlags(params->flags);
  if ( (MapTypeFromImageFlags & 0xFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 168, ASSERT_TYPE_ASSERT, "(mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY)", (const char *)&queryFormat, "mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY") )
    __debugbreak();
  if ( params->width < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 169, ASSERT_TYPE_ASSERT, "(params.width >= 1)", (const char *)&queryFormat, "params.width >= 1") )
    __debugbreak();
  if ( params->height < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 170, ASSERT_TYPE_ASSERT, "(params.height >= 1)", (const char *)&queryFormat, "params.height >= 1") )
    __debugbreak();
  if ( params->depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 171, ASSERT_TYPE_ASSERT, "(params.depth == 1)", (const char *)&queryFormat, "params.depth == 1") )
    __debugbreak();
  if ( !params->numElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 172, ASSERT_TYPE_ASSERT, "(params.numElements >= 1)", (const char *)&queryFormat, "params.numElements >= 1") )
    __debugbreak();
  *(_QWORD *)&result->Width = 0i64;
  *(_QWORD *)&result->MipLevels = 0i64;
  *(_QWORD *)&result->Format = 0i64;
  *(_QWORD *)&result->SampleDesc.Quality = 0i64;
  *(_QWORD *)&result->BindFlags = 0i64;
  *(_QWORD *)&result->MiscFlags = 0i64;
  *(_QWORD *)&result->ESRAMUsageBytes = 0i64;
  result->Pitch = 0;
  result->Width = params->width;
  result->Height = params->height;
  if ( (params->flags & 2) != 0 || params->maxLevelCount == 1 )
  {
    v5 = 1;
  }
  else
  {
    v5 = Image_CountMipmaps(params->width, params->height, params->depth);
    maxLevelCount = params->maxLevelCount;
    if ( maxLevelCount && v5 > maxLevelCount )
      v5 = params->maxLevelCount;
  }
  result->MipLevels = v5;
  numElements = params->numElements;
  if ( MapTypeFromImageFlags == MAPTYPE_CUBE )
  {
    numElements = 6;
  }
  else if ( MapTypeFromImageFlags != MAPTYPE_ARRAY )
  {
    if ( MapTypeFromImageFlags == MAPTYPE_CUBE_ARRAY )
      numElements *= 6;
    else
      numElements = 1;
  }
  result->ArraySize = numElements;
  v8 = 0;
  result->SampleDesc = (XG_SAMPLE_DESC)1i64;
  flags = params->flags;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(params->format);
  if ( flags < IMG_FLAG_NONE )
    DXGIFormatForPixelFormat = R_D3D_MakeTypelessFormat((DXGI_FORMAT)DXGIFormatForPixelFormat);
  result->Format = DXGIFormatForPixelFormat;
  v11 = 4;
  if ( ((MapTypeFromImageFlags - 1) & 0xFB) != 0 )
    v11 = 0;
  result->MiscFlags |= v11;
  v12 = params->flags;
  v13 = (v12 & 0x800000 | 0x80000u) >> 16;
  result->Usage = (v12 & 0x20000000) != 0 ? XG_USAGE_STAGING : XG_USAGE_DEFAULT;
  if ( (v12 & 0x20000000) != 0 )
    v13 = 0;
  result->BindFlags = v13;
  result->CPUAccessFlags = 0;
  if ( (v12 & 0x800) != 0 )
  {
    v8 = 0x20000;
    result->CPUAccessFlags = 0x20000;
  }
  if ( (v12 & 0x1000) != 0 )
    result->CPUAccessFlags = v8 | 0x10000;
  result->TileMode = Image_ComputeTileModeWithFlags_XB3(params);
  return result;
}

/*
==============
Image_GetTexture3DDesc_XB3
==============
*/
XG_TEXTURE3D_DESC *Image_GetTexture3DDesc_XB3(XG_TEXTURE3D_DESC *result, const Image_SetupParams *params)
{
  unsigned int v4; 
  unsigned int maxLevelCount; 
  GfxImageFlags flags; 
  XG_FORMAT DXGIFormatForPixelFormat; 
  GfxImageFlags v8; 
  unsigned int v9; 
  int v10; 

  if ( (params->flags & 0x38000) != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 195, ASSERT_TYPE_ASSERT, "(( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_3D)", (const char *)&queryFormat, "( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_3D") )
    __debugbreak();
  if ( params->width < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 196, ASSERT_TYPE_ASSERT, "(params.width >= 1)", (const char *)&queryFormat, "params.width >= 1") )
    __debugbreak();
  if ( params->height < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 197, ASSERT_TYPE_ASSERT, "(params.height >= 1)", (const char *)&queryFormat, "params.height >= 1") )
    __debugbreak();
  if ( params->depth < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 198, ASSERT_TYPE_ASSERT, "(params.depth >= 1)", (const char *)&queryFormat, "params.depth >= 1") )
    __debugbreak();
  if ( params->numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 199, ASSERT_TYPE_ASSERT, "(params.numElements == 1)", (const char *)&queryFormat, "params.numElements == 1") )
    __debugbreak();
  *(_QWORD *)&result->Width = 0i64;
  *(_QWORD *)&result->Depth = 0i64;
  *(_QWORD *)&result->Format = 0i64;
  *(_QWORD *)&result->BindFlags = 0i64;
  *(_QWORD *)&result->MiscFlags = 0i64;
  *(_QWORD *)&result->ESRAMUsageBytes = 0i64;
  result->Pitch = 0;
  result->Width = params->width;
  result->Height = params->height;
  result->Depth = params->depth;
  if ( (params->flags & 2) != 0 || params->maxLevelCount == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = Image_CountMipmaps(params->width, params->height, params->depth);
    maxLevelCount = params->maxLevelCount;
    if ( maxLevelCount && v4 > maxLevelCount )
      v4 = params->maxLevelCount;
  }
  result->MipLevels = v4;
  flags = params->flags;
  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(params->format);
  if ( flags < IMG_FLAG_NONE )
    DXGIFormatForPixelFormat = R_D3D_MakeTypelessFormat((DXGI_FORMAT)DXGIFormatForPixelFormat);
  result->Format = DXGIFormatForPixelFormat;
  v8 = params->flags;
  v9 = (v8 & 0x800000 | 0x80000u) >> 16;
  result->Usage = (v8 & 0x20000000) != 0 ? XG_USAGE_STAGING : XG_USAGE_DEFAULT;
  v10 = 0;
  if ( (v8 & 0x20000000) != 0 )
    v9 = 0;
  result->BindFlags = v9;
  result->CPUAccessFlags = 0;
  if ( (v8 & 0x800) != 0 )
  {
    v10 = 0x20000;
    result->CPUAccessFlags = 0x20000;
  }
  if ( (v8 & 0x1000) != 0 )
    result->CPUAccessFlags = v10 | 0x10000;
  result->TileMode = Image_ComputeTileModeWithFlags_XB3(params);
  return result;
}

/*
==============
Image_GetTextureLayout_XB3
==============
*/
void Image_GetTextureLayout_XB3(const Image_SetupParams *params, XG_RESOURCE_LAYOUT *layout)
{
  unsigned __int32 v4; 
  XG_TEXTURE3D_DESC *Texture3DDesc_XB3; 
  HRESULT v6; 
  const char *v7; 
  XG_TEXTURE1D_DESC *Texture1DDesc_XB3; 
  HRESULT v9; 
  const char *v10; 
  HRESULT v11; 
  const char *v12; 
  unsigned __int64 BaseAlignmentBytes; 
  int height; 
  int depth; 
  unsigned int v16; 
  unsigned int maxLevelCount; 
  int width; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  struct XG_TEXTURE2D_DESC v24; 
  XG_TEXTURE2D_DESC result; 

  if ( !layout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 217, ASSERT_TYPE_ASSERT, "(layout)", (const char *)&queryFormat, "layout") )
    __debugbreak();
  v4 = params->flags & 0x38000;
  if ( v4 > 0x18000 )
  {
    if ( ((v4 - 0x20000) & 0xFFFF7FFF) != 0 )
      goto LABEL_13;
LABEL_14:
    v24 = *Image_GetTexture2DDesc_XB3(&result, params);
    v11 = XGComputeTexture2DLayout(&v24, layout);
    if ( v11 < 0 )
    {
      v12 = R_ErrorDescription(v11);
      Sys_Error((const ObfuscateErrorText)&stru_144401AA0, 236i64, v12);
    }
    goto LABEL_16;
  }
  if ( v4 != 98304 )
  {
    if ( (params->flags & 0x30000) != 0 )
    {
      if ( v4 == 0x10000 )
      {
        Texture3DDesc_XB3 = Image_GetTexture3DDesc_XB3((XG_TEXTURE3D_DESC *)&result, params);
        *(__m256i *)&v24.Width = *(__m256i *)&Texture3DDesc_XB3->Width;
        *(_OWORD *)&v24.BindFlags = *(_OWORD *)&Texture3DDesc_XB3->MiscFlags;
        v24.ESRAMUsageBytes = Texture3DDesc_XB3->Pitch;
        v6 = XGComputeTexture3DLayout((const struct XG_TEXTURE3D_DESC *)&v24, layout);
        if ( v6 < 0 )
        {
          v7 = R_ErrorDescription(v6);
          Sys_Error((const ObfuscateErrorText)"c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp (%i) XGComputeTexture3DLayout( &desc, layout ) failed: %s\n", 242i64, v7);
        }
        goto LABEL_16;
      }
LABEL_13:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 246, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    goto LABEL_14;
  }
  Texture1DDesc_XB3 = Image_GetTexture1DDesc_XB3((XG_TEXTURE1D_DESC *)&v24, params);
  *(__m256i *)&result.Width = *(__m256i *)&Texture1DDesc_XB3->Width;
  *(_OWORD *)&result.BindFlags = *(_OWORD *)&Texture1DDesc_XB3->ESRAMOffsetBytes;
  v9 = XGComputeTexture1DLayout((const struct XG_TEXTURE1D_DESC *)&result, layout);
  if ( v9 < 0 )
  {
    v10 = R_ErrorDescription(v9);
    Sys_Error((const ObfuscateErrorText)"c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp (%i) XGComputeTexture1DLayout( &desc, layout ) failed: %s\n", 224i64, v10);
  }
LABEL_16:
  if ( layout->Planes != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 249, ASSERT_TYPE_ASSERT, "(layout->Planes == 1)", (const char *)&queryFormat, "layout->Planes == 1") )
    __debugbreak();
  if ( layout->Plane[0].MipLayout[0].TileMode == XG_TILE_MODE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 250, ASSERT_TYPE_ASSERT, "(layout->Plane[0].MipLayout[0].TileMode != XG_TILE_MODE_INVALID)", (const char *)&queryFormat, "layout->Plane[0].MipLayout[0].TileMode != XG_TILE_MODE_INVALID") )
    __debugbreak();
  BaseAlignmentBytes = layout->BaseAlignmentBytes;
  if ( BaseAlignmentBytes != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 251, ASSERT_TYPE_ASSERT, "( layout->BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%llu, %llu", "layout->BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", BaseAlignmentBytes, 256i64) )
    __debugbreak();
  if ( (params->flags & 2) != 0 || params->maxLevelCount == 1 )
  {
    v16 = 1;
  }
  else
  {
    height = params->height;
    depth = params->depth;
    if ( params->width > height )
      height = params->width;
    if ( height > depth )
      depth = height;
    if ( !depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
    v16 = 32 - __lzcnt(depth);
    maxLevelCount = params->maxLevelCount;
    if ( maxLevelCount && v16 > maxLevelCount )
      v16 = params->maxLevelCount;
  }
  if ( layout->MipLevels != v16 )
  {
    if ( (params->flags & 2) != 0 || params->maxLevelCount == 1 )
    {
      v20 = 1;
    }
    else
    {
      width = params->height;
      v19 = params->depth;
      if ( params->width > width )
        width = params->width;
      if ( width > v19 )
        v19 = width;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
        __debugbreak();
      v20 = 32 - __lzcnt(v19);
      v21 = params->maxLevelCount;
      if ( v21 && v20 > v21 )
        v20 = params->maxLevelCount;
    }
    LODWORD(v23) = v20;
    LODWORD(v22) = layout->MipLevels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 252, ASSERT_TYPE_ASSERT, "( layout->MipLevels ) == ( params.GetLevelCount() )", "%s == %s\n\t%u, %u", "layout->MipLevels", "params.GetLevelCount()", v22, v23) )
      __debugbreak();
  }
}

/*
==============
Image_IsLFormat
==============
*/
bool Image_IsLFormat(GfxPixelFormat format)
{
  return ((format - 3) & 0xFFFFFFFD) == 0;
}

/*
==============
Image_Setup
==============
*/
void Image_Setup(GfxImage *image, const Image_SetupParams *params)
{
  __m256i v2; 
  Image_SetupParams v3; 

  v2 = *(__m256i *)&params->customAllocFunc;
  *(__m256i *)&v3.width = *(__m256i *)&params->width;
  *(__m256i *)&v3.customAllocFunc = v2;
  Image_SetupInternal(image, &v3, NULL);
}

/*
==============
Image_SetupInternal
==============
*/
void Image_SetupInternal(GfxImage *image, Image_SetupParams *params, const Image_SetupData *data)
{
  int height; 
  GfxImageFlags flags; 
  int width; 
  unsigned int numElements; 
  unsigned int maxLevelCount; 
  unsigned int v11; 
  unsigned int v12; 
  const XG_RESOURCE_LAYOUT *customLayout; 
  unsigned __int64 SizeBytes; 
  unsigned int v15; 
  void *(__fastcall *customAllocFunc)(unsigned __int64, unsigned __int64, void *); 
  unsigned __int64 totalSize; 
  const unsigned __int8 *v18; 
  const unsigned __int8 *v19; 
  __m256i v20; 
  GfxTextureId v21; 
  __int64 v22; 
  __int64 v23; 
  GfxTexture_CreateParams paramsa; 
  XG_RESOURCE_LAYOUT layout; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1011, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (!image->name || !*image->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1014, ASSERT_TYPE_ASSERT, "(!I_strempty( image->name ))", (const char *)&queryFormat, "!I_strempty( image->name )") )
    __debugbreak();
  if ( (image->flags & 0x100) != 0 )
    params->format = PixelFormat_MakeSRGBFormat(params->format);
  if ( (unsigned int)(params->format - 33) <= 0xC )
  {
    if ( (params->width < 4 || (params->width & 3) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1025, ASSERT_TYPE_ASSERT, "(params.width >= 4 && ( params.width & 3 ) == 0)", (const char *)&queryFormat, "params.width >= 4 && ( params.width & 3 ) == 0") )
      __debugbreak();
    height = params->height;
    if ( (height < 4 || (height & 3) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1026, ASSERT_TYPE_ASSERT, "(params.height >= 4 && ( params.height & 3 ) == 0)", (const char *)&queryFormat, "params.height >= 4 && ( params.height & 3 ) == 0") )
      __debugbreak();
  }
  flags = params->flags;
  width = params->width;
  image->format = params->format;
  image->flags = flags;
  truncate_store<unsigned short,int>(&image->width, width);
  truncate_store<unsigned short,int>(&image->height, params->height);
  truncate_store<unsigned short,int>(&image->depth, params->depth);
  numElements = params->numElements;
  if ( numElements > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)numElements, "unsigned", params->numElements) )
    __debugbreak();
  image->numElements = numElements;
  if ( (flags & 2) != 0 || (maxLevelCount = params->maxLevelCount, maxLevelCount == 1) )
  {
    v12 = 1;
  }
  else
  {
    v11 = Image_CountMipmaps(params->width, params->height, params->depth);
    v12 = v11;
    if ( maxLevelCount && v11 > maxLevelCount )
      v12 = maxLevelCount;
  }
  if ( v12 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v12, "unsigned", v12) )
    __debugbreak();
  image->levelCount = v12;
  if ( !(_BYTE)v12 )
  {
    LODWORD(v22) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1036, ASSERT_TYPE_ASSERT, "( image->levelCount ) > ( 0 )", "%s > %s\n\t%u, %u", "image->levelCount", "0", v22, 0i64) )
      __debugbreak();
  }
  if ( image->totalSize )
  {
    LODWORD(v22) = image->totalSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1038, ASSERT_TYPE_ASSERT, "( image->totalSize ) == ( 0 )", "%s == %s\n\t%u, %u", "image->totalSize", "0", v22, 0i64) )
      __debugbreak();
  }
  customLayout = params->customLayout;
  if ( customLayout )
  {
    if ( customLayout->BaseAlignmentBytes != 256 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = customLayout->BaseAlignmentBytes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 308, ASSERT_TYPE_ASSERT, "( params.customLayout->BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%u, %u", "params.customLayout->BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", v22, v23) )
        __debugbreak();
    }
    SizeBytes = customLayout->SizeBytes;
  }
  else
  {
    Image_GetTextureLayout_XB3(params, &layout);
    if ( layout.BaseAlignmentBytes != 256 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = layout.BaseAlignmentBytes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 315, ASSERT_TYPE_ASSERT, "( layout.BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%u, %u", "layout.BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", v22, v23) )
        __debugbreak();
    }
    SizeBytes = layout.SizeBytes;
  }
  v15 = truncate_cast<unsigned int,unsigned __int64>(SizeBytes);
  image->totalSize = v15;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1040, ASSERT_TYPE_ASSERT, "( ( image->totalSize > 0 ) )", "( image->name ) = %s", image->name) )
    __debugbreak();
  customAllocFunc = params->customAllocFunc;
  totalSize = image->totalSize;
  if ( customAllocFunc )
  {
    v18 = (const unsigned __int8 *)customAllocFunc(image->totalSize, 256ui64, params->customAllocUserData);
  }
  else
  {
    if ( !image->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 808, ASSERT_TYPE_ASSERT, "(image->name)", (const char *)&queryFormat, "image->name") )
      __debugbreak();
    v18 = (const unsigned __int8 *)PMem_Alloc(totalSize, 0x100ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, image->name);
  }
  v19 = v18;
  if ( (_BYTE)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1056, ASSERT_TYPE_ASSERT, "(IsAligned( pixels, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( pixels, R_IMAGE_ALIGNMENT )") )
    __debugbreak();
  if ( image->pixels.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1061, ASSERT_TYPE_ASSERT, "(image->pixels.residentData == nullptr)", (const char *)&queryFormat, "image->pixels.residentData == nullptr") )
    __debugbreak();
  paramsa.name = image->name;
  image->pixels.streamedDataHandle.data = (unsigned __int64)v19;
  paramsa.pixels = v19;
  v20 = *(__m256i *)&params->customAllocFunc;
  *(__m256i *)&paramsa.params.width = *(__m256i *)&params->width;
  *(__m256i *)&paramsa.params.customAllocFunc = v20;
  if ( data )
    v21 = R_Texture_CreateWithSourceData(&paramsa, data);
  else
    v21 = R_Texture_Create(&paramsa);
  image->textureId = v21;
  if ( data )
    Image_UploadData(image, data);
}

/*
==============
Image_SetupWithData
==============
*/
void Image_SetupWithData(GfxImage *image, const Image_SetupParams *params, const Image_SetupData *data)
{
  __m256i v3; 
  Image_SetupParams v4; 

  v3 = *(__m256i *)&params->customAllocFunc;
  *(__m256i *)&v4.width = *(__m256i *)&params->width;
  *(__m256i *)&v4.customAllocFunc = v3;
  Image_SetupInternal(image, &v4, data);
}

/*
==============
Image_ShaderComponentMapping
==============
*/
__int64 Image_ShaderComponentMapping(DXGI_FORMAT format, bool lFormat)
{
  if ( !lFormat )
    return 5768i64;
  if ( format == DXGI_FORMAT_R8G8_UNORM )
    return 4608i64;
  if ( format != DXGI_FORMAT_R8_UNORM )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1216, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No other type supported here") )
      __debugbreak();
    return 5768i64;
  }
  return 6656i64;
}

/*
==============
Image_ShaderComponentMapping
==============
*/
__int64 Image_ShaderComponentMapping(GfxPixelFormat format)
{
  DXGI_FORMAT DXGIFormatForPixelFormat; 

  DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(format);
  if ( ((format - 3) & 0xFFFFFFFD) != 0 )
    return 5768i64;
  if ( DXGIFormatForPixelFormat == DXGI_FORMAT_R8G8_UNORM )
    return 4608i64;
  if ( DXGIFormatForPixelFormat != DXGI_FORMAT_R8_UNORM )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1216, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No other type supported here") )
      __debugbreak();
    return 5768i64;
  }
  return 6656i64;
}

/*
==============
Image_SourceBytesPerRow
==============
*/
__int64 Image_SourceBytesPerRow(GfxPixelFormat format, int width)
{
  if ( (unsigned int)(format - 33) > 0xC )
    return width * PixelFormat_GetBytesPerPixel(format);
  else
    return ((width + 3) >> 2) * PixelFormat_GetBytesPerBlock(format);
}

/*
==============
Image_SourceBytesPerSlice
==============
*/
__int64 Image_SourceBytesPerSlice(GfxPixelFormat format, int width, int height)
{
  if ( (unsigned int)(format - 33) > 0xC )
    return height * width * PixelFormat_GetBytesPerPixel(format);
  else
    return ((height + 3) >> 2) * ((width + 3) >> 2) * PixelFormat_GetBytesPerBlock(format);
}

/*
==============
Image_Upload1D_CopyData_XB3
==============
*/
void Image_Upload1D_CopyData_XB3(const GfxImage *image, unsigned int mipLevel, const unsigned __int8 *src)
{
  __int64 v5; 
  char *data; 
  __m256i *v7; 
  __m256i v8; 
  struct XG_TEXTURE1D_DESC *Texture1DDesc_XB3; 
  int v10; 
  GfxPixelFormat format; 
  unsigned int v12; 
  GfxPixelFormat v13; 
  unsigned int v14; 
  HRESULT v15; 
  const char *v16; 
  HRESULT v17; 
  const char *v18; 
  unsigned __int64 v19; 
  char *v20; 
  struct XGTextureAddressComputer *v21; 
  Image_SetupParams params; 
  XG_TEXTURE1D_DESC v23; 
  Image_SetupParams result; 
  struct XG_TEXTURE1D_DESC v25; 
  char v26[16]; 
  unsigned int v27; 
  int v28; 
  unsigned __int64 sizeInBytes[736]; 

  v5 = mipLevel;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 559, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 560, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  data = (char *)image->pixels.streamedDataHandle.data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 567, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  v7 = (__m256i *)Image_SetupParams::FromImage(&result, image);
  v8 = v7[1];
  *(__m256i *)&params.width = *v7;
  *(__m256i *)&params.customAllocFunc = v8;
  Texture1DDesc_XB3 = Image_GetTexture1DDesc_XB3(&v23, &params);
  v10 = image->width >> v5;
  format = image->format;
  v25 = *Texture1DDesc_XB3;
  if ( !v10 )
    v10 = 1;
  if ( (unsigned int)(format - 33) > 0xC )
    v12 = v10 * PixelFormat_GetBytesPerPixel(format);
  else
    v12 = ((unsigned int)(v10 + 3) >> 2) * PixelFormat_GetBytesPerBlock(format);
  v13 = image->format;
  if ( (unsigned int)(v13 - 33) > 0xC )
    v14 = v10 * PixelFormat_GetBytesPerPixel(v13);
  else
    v14 = ((unsigned int)(v10 + 3) >> 2) * PixelFormat_GetBytesPerBlock(v13);
  v15 = XGCreateTexture1DComputer(&v25, &v21);
  if ( v15 < 0 )
  {
    v16 = R_ErrorDescription(v15);
    Sys_Error((const ObfuscateErrorText)&stru_144401EA0, 575i64, v16);
  }
  v17 = v21->CopyIntoSubresource(v21, data, 0, v5, src, v12, v14);
  if ( v17 < 0 )
  {
    v18 = R_ErrorDescription(v17);
    Sys_Error((const ObfuscateErrorText)&stru_144401F40, 576i64, v18);
  }
  v21->GetResourceLayout(v21, (XG_RESOURCE_LAYOUT *)v26);
  if ( v28 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 580, ASSERT_TYPE_ASSERT, "(layout.Planes == 1)", (const char *)&queryFormat, "layout.Planes == 1") )
    __debugbreak();
  if ( (unsigned int)v5 >= v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 581, ASSERT_TYPE_ASSERT, "(mipLevel < layout.MipLevels)", (const char *)&queryFormat, "mipLevel < layout.MipLevels") )
    __debugbreak();
  v19 = sizeInBytes[12 * v5];
  v20 = &data[sizeInBytes[12 * v5 + 1]];
  R_LockGfxImmediateContext();
  FlushGpuCacheRange(g_dx.immediateContext, 0xC03000u, v20, v19);
  R_UnlockGfxImmediateContext();
  v21->Release(v21);
}

/*
==============
Image_Upload2D_CopyData_XB3
==============
*/
void Image_Upload2D_CopyData_XB3(const GfxImage *image, unsigned int arrayElement, unsigned int mipLevel, const unsigned __int8 *src)
{
  __int64 v4; 
  char *data; 
  __m256i *v8; 
  __m256i v9; 
  struct XG_TEXTURE2D_DESC *Texture2DDesc_XB3; 
  unsigned int width; 
  unsigned int height; 
  int v13; 
  int v14; 
  GfxPixelFormat format; 
  unsigned int v16; 
  GfxPixelFormat v17; 
  unsigned int v18; 
  unsigned int v19; 
  HRESULT v20; 
  const char *v21; 
  HRESULT v22; 
  const char *v23; 
  unsigned __int64 v24; 
  char *v25; 
  struct XGTextureAddressComputer *v27; 
  const unsigned __int8 *v28; 
  Image_SetupParams params; 
  XG_TEXTURE2D_DESC v30; 
  Image_SetupParams result; 
  struct XG_TEXTURE2D_DESC v32; 
  char v33[16]; 
  unsigned int v34; 
  int v35; 
  __int64 v36[735]; 

  v4 = mipLevel;
  v28 = src;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 600, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 601, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  data = (char *)image->pixels.streamedDataHandle.data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 608, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  v8 = (__m256i *)Image_SetupParams::FromImage(&result, image);
  v9 = v8[1];
  *(__m256i *)&params.width = *v8;
  *(__m256i *)&params.customAllocFunc = v9;
  Texture2DDesc_XB3 = Image_GetTexture2DDesc_XB3(&v30, &params);
  width = image->width;
  height = image->height;
  v32 = *Texture2DDesc_XB3;
  v13 = width >> v4;
  if ( !v13 )
    v13 = 1;
  v14 = height >> v4;
  format = image->format;
  if ( !v14 )
    v14 = 1;
  if ( (unsigned int)(format - 33) > 0xC )
    v16 = v13 * PixelFormat_GetBytesPerPixel(format);
  else
    v16 = ((unsigned int)(v13 + 3) >> 2) * PixelFormat_GetBytesPerBlock(format);
  v17 = image->format;
  if ( (unsigned int)(v17 - 33) > 0xC )
    v18 = v13 * v14 * PixelFormat_GetBytesPerPixel(v17);
  else
    v18 = ((unsigned int)(v13 + 3) >> 2) * ((unsigned int)(v14 + 3) >> 2) * PixelFormat_GetBytesPerBlock(v17);
  v19 = v4 + arrayElement * image->levelCount;
  v20 = XGCreateTexture2DComputer(&v32, &v27);
  if ( v20 < 0 )
  {
    v21 = R_ErrorDescription(v20);
    Sys_Error((const ObfuscateErrorText)&stru_1444020A0, 617i64, v21);
  }
  v22 = v27->CopyIntoSubresource(v27, data, 0, v19, v28, v16, v18);
  if ( v22 < 0 )
  {
    v23 = R_ErrorDescription(v22);
    Sys_Error((const ObfuscateErrorText)&stru_144401F40, 618i64, v23);
  }
  v27->GetResourceLayout(v27, (XG_RESOURCE_LAYOUT *)v33);
  if ( v35 != 1 && v32.Format != XG_FORMAT_D32_FLOAT_S8X24_UINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 623, ASSERT_TYPE_ASSERT, "(layout.Planes == 1 || desc.Format == XG_FORMAT_D32_FLOAT_S8X24_UINT)", (const char *)&queryFormat, "layout.Planes == 1 || desc.Format == XG_FORMAT_D32_FLOAT_S8X24_UINT") )
    __debugbreak();
  if ( (unsigned int)v4 >= v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 627, ASSERT_TYPE_ASSERT, "(mipLevel < layout.MipLevels)", (const char *)&queryFormat, "mipLevel < layout.MipLevels") )
    __debugbreak();
  v24 = v36[12 * v4 + 1];
  v25 = &data[v36[12 * v4] + v4 * v24];
  R_LockGfxImmediateContext();
  FlushGpuCacheRange(g_dx.immediateContext, 0xC03000u, v25, v24);
  R_UnlockGfxImmediateContext();
  v27->Release(v27);
}

/*
==============
Image_Upload3D_CopyData_XB3
==============
*/
void Image_Upload3D_CopyData_XB3(const GfxImage *image, unsigned int mipLevel, const unsigned __int8 *src)
{
  __int64 v5; 
  char *data; 
  __m256i *v7; 
  __m256i v8; 
  struct XG_TEXTURE3D_DESC *Texture3DDesc_XB3; 
  unsigned int width; 
  unsigned int height; 
  int v12; 
  int v13; 
  GfxPixelFormat format; 
  unsigned int v15; 
  GfxPixelFormat v16; 
  unsigned int v17; 
  HRESULT v18; 
  const char *v19; 
  HRESULT v20; 
  const char *v21; 
  unsigned __int64 v22; 
  char *v23; 
  struct XGTextureAddressComputer *v24; 
  Image_SetupParams params; 
  XG_TEXTURE3D_DESC v26; 
  Image_SetupParams result; 
  struct XG_TEXTURE3D_DESC v28; 
  char v29[16]; 
  unsigned int v30; 
  int v31; 
  unsigned __int64 sizeInBytes[736]; 

  v5 = mipLevel;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 646, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 647, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  data = (char *)image->pixels.streamedDataHandle.data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 654, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  v7 = (__m256i *)Image_SetupParams::FromImage(&result, image);
  v8 = v7[1];
  *(__m256i *)&params.width = *v7;
  *(__m256i *)&params.customAllocFunc = v8;
  Texture3DDesc_XB3 = Image_GetTexture3DDesc_XB3(&v26, &params);
  width = image->width;
  height = image->height;
  v28 = *Texture3DDesc_XB3;
  v12 = width >> v5;
  if ( !v12 )
    v12 = 1;
  v13 = height >> v5;
  format = image->format;
  if ( !v13 )
    v13 = 1;
  if ( (unsigned int)(format - 33) > 0xC )
    v15 = v12 * PixelFormat_GetBytesPerPixel(format);
  else
    v15 = ((unsigned int)(v12 + 3) >> 2) * PixelFormat_GetBytesPerBlock(format);
  v16 = image->format;
  if ( (unsigned int)(v16 - 33) > 0xC )
    v17 = v12 * v13 * PixelFormat_GetBytesPerPixel(v16);
  else
    v17 = ((unsigned int)(v12 + 3) >> 2) * ((unsigned int)(v13 + 3) >> 2) * PixelFormat_GetBytesPerBlock(v16);
  v18 = XGCreateTexture3DComputer(&v28, &v24);
  if ( v18 < 0 )
  {
    v19 = R_ErrorDescription(v18);
    Sys_Error((const ObfuscateErrorText)&stru_144402200, 663i64, v19);
  }
  v20 = v24->CopyIntoSubresource(v24, data, 0, v5, src, v15, v17);
  if ( v20 < 0 )
  {
    v21 = R_ErrorDescription(v20);
    Sys_Error((const ObfuscateErrorText)&stru_144401F40, 664i64, v21);
  }
  v24->GetResourceLayout(v24, (XG_RESOURCE_LAYOUT *)v29);
  if ( v31 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 669, ASSERT_TYPE_ASSERT, "(layout.Planes == 1)", (const char *)&queryFormat, "layout.Planes == 1") )
    __debugbreak();
  if ( (unsigned int)v5 >= v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 670, ASSERT_TYPE_ASSERT, "(mipLevel < layout.MipLevels)", (const char *)&queryFormat, "mipLevel < layout.MipLevels") )
    __debugbreak();
  v22 = sizeInBytes[12 * v5];
  v23 = &data[sizeInBytes[12 * v5 + 1]];
  R_LockGfxImmediateContext();
  FlushGpuCacheRange(g_dx.immediateContext, 0xC03000u, v23, v22);
  R_UnlockGfxImmediateContext();
  v24->Release(v24);
}

/*
==============
Image_UploadData
==============
*/
void Image_UploadData(const GfxImage *image, const Image_SetupData *data)
{
  MapType MapTypeFromImageFlags; 
  unsigned int numElements; 
  MapType v6; 
  GfxCubeFace i; 
  __int64 v8; 
  const unsigned __int8 **v9; 
  __int64 v10; 
  MapType v11; 
  unsigned int v12; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 765, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  MapTypeFromImageFlags = Image_GetMapTypeFromImageFlags(image->flags);
  numElements = image->numElements;
  v6 = MapTypeFromImageFlags;
  v11 = MapTypeFromImageFlags;
  v12 = numElements;
  if ( MapTypeFromImageFlags == MAPTYPE_CUBE )
  {
    numElements = 6;
    goto LABEL_13;
  }
  if ( MapTypeFromImageFlags != MAPTYPE_ARRAY )
  {
    if ( MapTypeFromImageFlags != MAPTYPE_CUBE_ARRAY )
    {
      numElements = 1;
LABEL_13:
      v12 = numElements;
      goto LABEL_14;
    }
    numElements *= 6;
    v12 = numElements;
  }
  if ( numElements > 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 773, ASSERT_TYPE_ASSERT, "(arraySize <= IMAGE_MAX_FACES * GFX_CUBE_NUM_FACES)", (const char *)&queryFormat, "arraySize <= IMAGE_MAX_FACES * GFX_CUBE_NUM_FACES") )
    __debugbreak();
LABEL_14:
  if ( image->levelCount > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 774, ASSERT_TYPE_ASSERT, "(image->levelCount <= IMAGE_MAX_MIPS)", (const char *)&queryFormat, "image->levelCount <= IMAGE_MAX_MIPS") )
    __debugbreak();
  for ( i = GFX_CUBE_FACE_POS_X; i < numElements; ++i )
  {
    if ( (unsigned __int8)(v6 - 4) > 1u && (unsigned int)i >= GFX_CUBE_NUM_FACES )
    {
      LODWORD(v10) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1120, ASSERT_TYPE_ASSERT, "( ( faceIndex < 6 ) )", "( faceIndex ) = %i", v10) )
        __debugbreak();
    }
    v8 = 0i64;
    if ( image->levelCount )
    {
      do
      {
        v9 = &data->data[v8][i];
        if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 781, ASSERT_TYPE_ASSERT, "(data.data[mip][face])", (const char *)&queryFormat, "data.data[mip][face]") )
          __debugbreak();
        Image_UploadData(image, i, v8, *v9);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < image->levelCount );
      numElements = v12;
      v6 = v11;
    }
  }
}

/*
==============
Image_UploadData
==============
*/
void Image_UploadData(const GfxImage *image, GfxCubeFace face, unsigned int mipLevel, const unsigned __int8 *src)
{
  unsigned __int32 v8; 
  int v9; 
  unsigned int numElements; 
  int v11; 
  int v12; 

  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 717, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  v8 = image->flags & 0x38000;
  if ( v8 > 0x18000 )
  {
    if ( v8 == 0x20000 )
    {
      v9 = 4;
      goto LABEL_20;
    }
    if ( v8 == 163840 )
    {
      v9 = 5;
      goto LABEL_20;
    }
  }
  else
  {
    switch ( v8 )
    {
      case 0x18000u:
        v9 = 3;
        goto LABEL_20;
      case 0u:
        v9 = 0;
        goto LABEL_20;
      case 0x8000u:
        v9 = 1;
        goto LABEL_20;
      case 0x10000u:
        v9 = 2;
        goto LABEL_20;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 1173, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown image map type.") )
    __debugbreak();
  v9 = 6;
LABEL_20:
  numElements = image->numElements;
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_27;
      numElements *= 6;
    }
    if ( numElements > 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 723, ASSERT_TYPE_ASSERT, "(arraySize <= IMAGE_MAX_FACES * GFX_CUBE_NUM_FACES)", (const char *)&queryFormat, "arraySize <= IMAGE_MAX_FACES * GFX_CUBE_NUM_FACES") )
      __debugbreak();
  }
LABEL_27:
  if ( image->levelCount > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 724, ASSERT_TYPE_ASSERT, "(image->levelCount <= IMAGE_MAX_MIPS)", (const char *)&queryFormat, "image->levelCount <= IMAGE_MAX_MIPS") )
    __debugbreak();
  switch ( Image_GetMapTypeFromImageFlags(image->flags) )
  {
    case MAPTYPE_2D:
    case MAPTYPE_CUBE:
    case MAPTYPE_ARRAY:
    case MAPTYPE_CUBE_ARRAY:
      Image_Upload2D_CopyData_XB3(image, face, mipLevel, src);
      break;
    case MAPTYPE_3D:
      Image_Upload3D_CopyData_XB3(image, mipLevel, src);
      break;
    case MAPTYPE_1D:
      Image_Upload1D_CopyData_XB3(image, mipLevel, src);
      break;
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.cpp", 753, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
}

