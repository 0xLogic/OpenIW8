/*
==============
R_D3D_IsCompressedDXGIFormat
==============
*/

bool __fastcall R_D3D_IsCompressedDXGIFormat(DXGI_FORMAT format)
{
  return ?R_D3D_IsCompressedDXGIFormat@@YA_NW4DXGI_FORMAT@@@Z(format);
}

/*
==============
R_D3D_IsCompressedDXGIFormat
==============
*/
bool R_D3D_IsCompressedDXGIFormat(DXGI_FORMAT format)
{
  if ( format == DXGI_FORMAT_UNKNOWN )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\d3d\\r_formats_d3d.h", 37, ASSERT_TYPE_ASSERT, "(format != DXGI_FORMAT_UNKNOWN)", (const char *)&queryFormat, "format != DXGI_FORMAT_UNKNOWN") )
    {
      __debugbreak();
      return 0;
    }
    return 0;
  }
  return (unsigned int)(format - 70) <= 0xE || (unsigned int)(format - 94) <= 5;
}

