/*
==============
Image_GetStreamedPartCount
==============
*/

unsigned int __fastcall Image_GetStreamedPartCount(const GfxImage *image)
{
  return ?Image_GetStreamedPartCount@@YAIPEBUGfxImage@@@Z(image);
}

/*
==============
Image_GetStreamedPartCount
==============
*/
__int64 Image_GetStreamedPartCount(const GfxImage *image)
{
  if ( image )
    return image->streamedPartCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_obj.cpp", 1343, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  return MEMORY[0x31];
}

