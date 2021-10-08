/*
==============
Image_InclusivePartSize
==============
*/

unsigned int __fastcall Image_InclusivePartSize(const GfxImage *image, const unsigned int part)
{
  return ?Image_InclusivePartSize@@YAIPEBUGfxImage@@I@Z(image, part);
}

/*
==============
Image_PartOffset
==============
*/

unsigned int __fastcall Image_PartOffset(const GfxImage *image, const unsigned int part)
{
  return ?Image_PartOffset@@YAIPEBUGfxImage@@I@Z(image, part);
}

/*
==============
Image_SetupParams::FromImage
==============
*/

Image_SetupParams *__fastcall Image_SetupParams::FromImage(Image_SetupParams *result, const GfxImage *image)
{
  return ?FromImage@Image_SetupParams@@SA?AU1@PEBUGfxImage@@@Z(result, image);
}

/*
==============
Image_ExclusivePartSize
==============
*/

unsigned int __fastcall Image_ExclusivePartSize(const GfxImage *image, const unsigned int part)
{
  return ?Image_ExclusivePartSize@@YAIPEBUGfxImage@@I@Z(image, part);
}

/*
==============
Image_ExclusivePartSize
==============
*/
__int64 Image_ExclusivePartSize(const GfxImage *image, const unsigned int part)
{
  __int64 v2; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  __int64 v6; 
  unsigned int StreamedPartCount; 

  v2 = part;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned int)v2 >= Image_GetStreamedPartCount(image) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(image);
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v6, StreamedPartCount) )
      __debugbreak();
  }
  p_levelCountAndSize = &image->streams[v2].levelCountAndSize;
  if ( (_DWORD)v2 )
    return ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)image->streams[(unsigned int)(v2 - 1)].levelCountAndSize >> 4);
  else
    return (unsigned int)*p_levelCountAndSize >> 4;
}

/*
==============
Image_PartOffset
==============
*/
__int64 Image_PartOffset(const GfxImage *image, const unsigned int part)
{
  __int64 v2; 
  unsigned int v4; 
  __int64 v6; 
  unsigned int StreamedPartCount; 

  v2 = part;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 211, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 192, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned int)v2 >= Image_GetStreamedPartCount(image) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(image);
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 193, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v6, StreamedPartCount) )
      __debugbreak();
  }
  v4 = (unsigned int)image->streams[v2].levelCountAndSize >> 4;
  if ( image->totalSize < v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", image->totalSize, v4) )
    __debugbreak();
  return image->totalSize - v4;
}

/*
==============
Image_InclusivePartSize
==============
*/
__int64 Image_InclusivePartSize(const GfxImage *image, const unsigned int part)
{
  __int64 v2; 
  __int64 v5; 
  unsigned int StreamedPartCount; 

  v2 = part;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 191, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 192, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned int)v2 >= Image_GetStreamedPartCount(image) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(image);
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 193, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v5, StreamedPartCount) )
      __debugbreak();
  }
  return (unsigned int)image->streams[v2].levelCountAndSize >> 4;
}

/*
==============
Image_SetupParams::FromImage
==============
*/
Image_SetupParams *Image_SetupParams::FromImage(Image_SetupParams *result, const GfxImage *image)
{
  unsigned int width; 
  unsigned int v5; 
  unsigned int height; 
  unsigned int depth; 
  unsigned int numElements; 
  unsigned int levelCount; 
  Image_SetupParams *v10; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 58, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  width = image->width;
  v5 = 0;
  height = image->height;
  depth = image->depth;
  numElements = image->numElements;
  result->height = height;
  if ( width > height )
    height = width;
  result->depth = depth;
  *(_QWORD *)&result->maxLevelCount = 0i64;
  if ( height > depth )
    depth = height;
  result->format = GFX_PF_R8G8B8A8;
  result->customAllocFunc = NULL;
  result->customAllocUserData = NULL;
  result->customLayout = NULL;
  result->textureLayoutOverride = -1;
  result->width = width;
  result->numElements = numElements;
  if ( !depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  levelCount = image->levelCount;
  result->flags = image->flags;
  if ( 32 - __lzcnt(depth) != levelCount )
    v5 = levelCount;
  result->format = image->format;
  v10 = result;
  result->maxLevelCount = v5;
  return v10;
}

