/*
==============
R_Image_GetResidentPixels
==============
*/

unsigned __int8 *__fastcall R_Image_GetResidentPixels(GfxImage *image)
{
  return ?R_Image_GetResidentPixels@@YAPEAEPEAUGfxImage@@@Z(image);
}

/*
==============
R_Image_GetResidentPixels
==============
*/

const unsigned __int8 *__fastcall R_Image_GetResidentPixels(const GfxImage *image)
{
  return ?R_Image_GetResidentPixels@@YAPEBEPEBUGfxImage@@@Z(image);
}

/*
==============
R_Image_GetResidentPixels
==============
*/
const unsigned __int8 *R_Image_GetResidentPixels(const GfxImage *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 520, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 522, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  return image->pixels.residentData;
}

/*
==============
R_Image_GetResidentPixels
==============
*/
unsigned __int8 *R_Image_GetResidentPixels(GfxImage *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  return image->pixels.residentData;
}

