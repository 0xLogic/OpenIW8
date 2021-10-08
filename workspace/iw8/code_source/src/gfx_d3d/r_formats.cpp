/*
==============
PixelFormat_GetBytesPerBlock
==============
*/

unsigned int __fastcall PixelFormat_GetBytesPerBlock(GfxPixelFormat format)
{
  return ?PixelFormat_GetBytesPerBlock@@YAIW4GfxPixelFormat@@@Z(format);
}

/*
==============
PixelFormat_GetName
==============
*/

const char *__fastcall PixelFormat_GetName(GfxPixelFormat format)
{
  return ?PixelFormat_GetName@@YAPEBDW4GfxPixelFormat@@@Z(format);
}

/*
==============
PixelFormat_IsSRGBFormat
==============
*/

bool __fastcall PixelFormat_IsSRGBFormat(GfxPixelFormat format)
{
  return ?PixelFormat_IsSRGBFormat@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
PixelFormat_GetBytesPerPixel
==============
*/

unsigned int __fastcall PixelFormat_GetBytesPerPixel(GfxPixelFormat format)
{
  return ?PixelFormat_GetBytesPerPixel@@YAIW4GfxPixelFormat@@@Z(format);
}

/*
==============
PixelFormat_MakeSRGBFormat
==============
*/

GfxPixelFormat __fastcall PixelFormat_MakeSRGBFormat(GfxPixelFormat format)
{
  return ?PixelFormat_MakeSRGBFormat@@YA?AW4GfxPixelFormat@@W41@@Z(format);
}

/*
==============
PixelFormat_IsFloat
==============
*/

bool __fastcall PixelFormat_IsFloat(GfxPixelFormat format)
{
  return ?PixelFormat_IsFloat@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
PixelFormat_IsRenderTargetValid
==============
*/

bool __fastcall PixelFormat_IsRenderTargetValid(GfxPixelFormat format)
{
  return ?PixelFormat_IsRenderTargetValid@@YA_NW4GfxPixelFormat@@@Z(format);
}

/*
==============
DataFormat_GetBytesPerElement
==============
*/

unsigned int __fastcall DataFormat_GetBytesPerElement(GfxDataFormat format)
{
  return ?DataFormat_GetBytesPerElement@@YAIW4GfxDataFormat@@@Z(format);
}

/*
==============
PixelFormat_MakeNonSRGBFormat
==============
*/

GfxPixelFormat __fastcall PixelFormat_MakeNonSRGBFormat(GfxPixelFormat format)
{
  return ?PixelFormat_MakeNonSRGBFormat@@YA?AW4GfxPixelFormat@@W41@@Z(format);
}

/*
==============
DataFormat_GetBytesPerElement
==============
*/
__int64 DataFormat_GetBytesPerElement(GfxDataFormat format)
{
  __int64 v1; 
  int v4; 

  v1 = format;
  if ( (unsigned int)format >= GFX_DATA_FORMAT_COUNT )
  {
    v4 = 17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( format ) < (unsigned)( ( sizeof( *array_counter( s_bytesPerElem ) ) + 0 ) )", "format doesn't index ARRAY_COUNT( s_bytesPerElem )\n\t%i not in [0, %i)", format, v4) )
      __debugbreak();
  }
  return s_bytesPerElem[v1];
}

/*
==============
PixelFormat_GetBytesPerBlock
==============
*/
__int64 PixelFormat_GetBytesPerBlock(GfxPixelFormat format)
{
  __int64 result; 

  if ( (unsigned int)(format - 33) > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 129, ASSERT_TYPE_ASSERT, "(PixelFormat_IsCompressed( format ))", (const char *)&queryFormat, "PixelFormat_IsCompressed( format )") )
    __debugbreak();
  if ( (unsigned int)(format - 33) <= 1 )
    return 8i64;
  result = 16i64;
  if ( format == GFX_PF_BC4 )
    return 8i64;
  return result;
}

/*
==============
PixelFormat_GetBytesPerPixel
==============
*/
__int64 PixelFormat_GetBytesPerPixel(GfxPixelFormat format)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = (unsigned int)format;
  if ( (unsigned int)(format - 33) <= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 37, ASSERT_TYPE_ASSERT, "(!PixelFormat_IsCompressed( format ))", (const char *)&queryFormat, "!PixelFormat_IsCompressed( format )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x32 )
  {
    v4 = 50;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( format ) < (unsigned)( ( sizeof( *array_counter( s_bytesPerPixel ) ) + 0 ) )", "format doesn't index ARRAY_COUNT( s_bytesPerPixel )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_bytesPerPixel[v1];
}

/*
==============
PixelFormat_GetName
==============
*/
const char *PixelFormat_GetName(GfxPixelFormat format)
{
  return s_names_0[format];
}

/*
==============
PixelFormat_IsFloat
==============
*/
_BOOL8 PixelFormat_IsFloat(GfxPixelFormat format)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)format;
  if ( (unsigned int)format >= GFX_PF_COUNT )
  {
    v4 = 50;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( format ) < (unsigned)( ( sizeof( *array_counter( s_isFloat ) ) + 0 ) )", "format doesn't index ARRAY_COUNT( s_isFloat )\n\t%i not in [0, %i)", format, v4) )
      __debugbreak();
  }
  return s_isFloat[v1];
}

/*
==============
PixelFormat_IsRenderTargetValid
==============
*/
_BOOL8 PixelFormat_IsRenderTargetValid(GfxPixelFormat format)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)format;
  if ( (unsigned int)format >= GFX_PF_COUNT )
  {
    v4 = 50;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_formats.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( format ) < (unsigned)( ( sizeof( *array_counter( s_isRT ) ) + 0 ) )", "format doesn't index ARRAY_COUNT( s_isRT )\n\t%i not in [0, %i)", format, v4) )
      __debugbreak();
  }
  return s_isRT[v1];
}

/*
==============
PixelFormat_IsSRGBFormat
==============
*/
bool PixelFormat_IsSRGBFormat(GfxPixelFormat format)
{
  unsigned __int64 v1; 
  __int64 v2; 
  bool result; 

  result = 0;
  if ( (unsigned int)format <= GFX_PF_BC7_SRGB )
  {
    v1 = (unsigned int)format;
    v2 = 0x205400000080i64;
    if ( _bittest64(&v2, v1) )
      return 1;
  }
  return result;
}

/*
==============
PixelFormat_MakeNonSRGBFormat
==============
*/
__int64 PixelFormat_MakeNonSRGBFormat(GfxPixelFormat format)
{
  __int64 result; 

  switch ( format )
  {
    case GFX_PF_R8G8B8A8_SRGB:
      return 6i64;
    case GFX_PF_BC1_SRGB:
      return 33i64;
    case GFX_PF_BC2_SRGB:
      return 35i64;
    case GFX_PF_BC3_SRGB:
      return 37i64;
  }
  result = 44i64;
  if ( format != GFX_PF_BC7_SRGB )
    return (unsigned int)format;
  return result;
}

/*
==============
PixelFormat_MakeSRGBFormat
==============
*/
__int64 PixelFormat_MakeSRGBFormat(GfxPixelFormat format)
{
  __int64 result; 

  switch ( format )
  {
    case GFX_PF_R8G8B8A8:
      return 7i64;
    case GFX_PF_BC1:
      return 34i64;
    case GFX_PF_BC2:
      return 36i64;
    case GFX_PF_BC3:
      return 38i64;
  }
  result = 45i64;
  if ( format != GFX_PF_BC7 )
    return (unsigned int)format;
  return result;
}

