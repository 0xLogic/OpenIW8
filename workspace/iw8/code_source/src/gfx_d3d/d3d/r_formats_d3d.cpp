/*
==============
R_D3D_MakeNonSRGBFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeNonSRGBFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeNonSRGBFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_MakeTypelessFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeTypelessFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeTypelessFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_MakeSRGBFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeSRGBFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeSRGBFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_MakeBindableDepthFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeBindableDepthFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeBindableDepthFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_GetDXGIFormatBytesPerPixel
==============
*/

unsigned int __fastcall R_D3D_GetDXGIFormatBytesPerPixel(DXGI_FORMAT format)
{
  return ?R_D3D_GetDXGIFormatBytesPerPixel@@YAIW4DXGI_FORMAT@@@Z(format);
}

/*
==============
R_D3D_DXGIFormatFromGfxDataFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_DXGIFormatFromGfxDataFormat(GfxDataFormat format)
{
  return ?R_D3D_DXGIFormatFromGfxDataFormat@@YA?AW4DXGI_FORMAT@@W4GfxDataFormat@@@Z(format);
}

/*
==============
R_D3D_GetPixelFormatForDXGIFormat
==============
*/

GfxPixelFormat __fastcall R_D3D_GetPixelFormatForDXGIFormat(DXGI_FORMAT format)
{
  return ?R_D3D_GetPixelFormatForDXGIFormat@@YA?AW4GfxPixelFormat@@W4DXGI_FORMAT@@@Z(format);
}

/*
==============
R_D3D_IsSRGBFormat
==============
*/

bool __fastcall R_D3D_IsSRGBFormat(DXGI_FORMAT format)
{
  return ?R_D3D_IsSRGBFormat@@YA_NW4DXGI_FORMAT@@@Z(format);
}

/*
==============
R_D3D_GetDXGIFormatFromVertexElementFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_GetDXGIFormatFromVertexElementFormat(GfxVertexElementFormat format)
{
  return ?R_D3D_GetDXGIFormatFromVertexElementFormat@@YA?AW4DXGI_FORMAT@@W4GfxVertexElementFormat@@@Z(format);
}

/*
==============
R_D3D_IsUnormFormat
==============
*/

bool __fastcall R_D3D_IsUnormFormat(DXGI_FORMAT format)
{
  return ?R_D3D_IsUnormFormat@@YA_NW4DXGI_FORMAT@@@Z(format);
}

/*
==============
R_D3D_MakeNonTypelessFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeNonTypelessFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeNonTypelessFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_GetDXGIFormatForPixelFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_GetDXGIFormatForPixelFormat(GfxPixelFormat format)
{
  return ?R_D3D_GetDXGIFormatForPixelFormat@@YA?AW4DXGI_FORMAT@@W4GfxPixelFormat@@@Z(format);
}

/*
==============
R_D3D_MakeBindableStencilFormat
==============
*/

DXGI_FORMAT __fastcall R_D3D_MakeBindableStencilFormat(DXGI_FORMAT format)
{
  return ?R_D3D_MakeBindableStencilFormat@@YA?AW4DXGI_FORMAT@@W41@@Z(format);
}

/*
==============
R_D3D_DXGIFormatFromGfxDataFormat
==============
*/
__int64 R_D3D_DXGIFormatFromGfxDataFormat(GfxDataFormat format)
{
  return (unsigned int)s_formatConversion_2[format];
}

/*
==============
R_D3D_GetDXGIFormatBytesPerPixel
==============
*/
__int64 R_D3D_GetDXGIFormatBytesPerPixel(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R32G32B32A32_TYPELESS:
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
    case DXGI_FORMAT_R32G32B32A32_UINT:
    case DXGI_FORMAT_R32G32B32A32_SINT:
    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
    case DXGI_FORMAT_BC5_TYPELESS:
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_BC5_SNORM:
    case DXGI_FORMAT_BC6H_TYPELESS:
    case DXGI_FORMAT_BC6H_UF16:
    case DXGI_FORMAT_BC6H_SF16:
    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
      result = 16i64;
      break;
    case DXGI_FORMAT_R32G32B32_TYPELESS:
    case DXGI_FORMAT_R32G32B32_FLOAT:
    case DXGI_FORMAT_R32G32B32_UINT:
    case DXGI_FORMAT_R32G32B32_SINT:
      result = 12i64;
      break;
    case DXGI_FORMAT_R16G16B16A16_TYPELESS:
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UNORM:
    case DXGI_FORMAT_R16G16B16A16_UINT:
    case DXGI_FORMAT_R16G16B16A16_SNORM:
    case DXGI_FORMAT_R16G16B16A16_SINT:
    case DXGI_FORMAT_R32G32_TYPELESS:
    case DXGI_FORMAT_R32G32_FLOAT:
    case DXGI_FORMAT_R32G32_UINT:
    case DXGI_FORMAT_R32G32_SINT:
    case DXGI_FORMAT_R32G8X24_TYPELESS:
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
    case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
    case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC4_TYPELESS:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
      result = 8i64;
      break;
    case DXGI_FORMAT_R10G10B10A2_TYPELESS:
    case DXGI_FORMAT_R10G10B10A2_UNORM:
    case DXGI_FORMAT_R10G10B10A2_UINT:
    case DXGI_FORMAT_R11G11B10_FLOAT:
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_R8G8B8A8_SNORM:
    case DXGI_FORMAT_R8G8B8A8_SINT:
    case DXGI_FORMAT_R16G16_TYPELESS:
    case DXGI_FORMAT_R16G16_FLOAT:
    case DXGI_FORMAT_R16G16_UNORM:
    case DXGI_FORMAT_R16G16_UINT:
    case DXGI_FORMAT_R16G16_SNORM:
    case DXGI_FORMAT_R16G16_SINT:
    case DXGI_FORMAT_R32_TYPELESS:
    case DXGI_FORMAT_D32_FLOAT:
    case DXGI_FORMAT_R32_FLOAT:
    case DXGI_FORMAT_R32_UINT:
    case DXGI_FORMAT_R32_SINT:
    case DXGI_FORMAT_R24G8_TYPELESS:
    case DXGI_FORMAT_D24_UNORM_S8_UINT:
    case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
    case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
    case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8X8_UNORM:
    case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
    case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8X8_TYPELESS:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
      result = 4i64;
      break;
    case DXGI_FORMAT_R8G8_TYPELESS:
    case DXGI_FORMAT_R8G8_UNORM:
    case DXGI_FORMAT_R8G8_UINT:
    case DXGI_FORMAT_R8G8_SNORM:
    case DXGI_FORMAT_R8G8_SINT:
    case DXGI_FORMAT_R16_TYPELESS:
    case DXGI_FORMAT_R16_FLOAT:
    case DXGI_FORMAT_D16_UNORM:
    case DXGI_FORMAT_R16_UNORM:
    case DXGI_FORMAT_R16_UINT:
    case DXGI_FORMAT_R16_SNORM:
    case DXGI_FORMAT_R16_SINT:
    case DXGI_FORMAT_R8G8_B8G8_UNORM:
    case DXGI_FORMAT_G8R8_G8B8_UNORM:
    case DXGI_FORMAT_B5G6R5_UNORM:
    case DXGI_FORMAT_B5G5R5A1_UNORM:
    case DXGI_FORMAT_A8P8:
    case DXGI_FORMAT_B4G4R4A4_UNORM:
      result = 2i64;
      break;
    case DXGI_FORMAT_R8_TYPELESS:
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_R8_UINT:
    case DXGI_FORMAT_R8_SNORM:
    case DXGI_FORMAT_R8_SINT:
    case DXGI_FORMAT_A8_UNORM:
    case DXGI_FORMAT_P8:
      result = 1i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\d3d\\r_formats_d3d.cpp", 324, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_GetDXGIFormatBytesPerPixel: unhandled case %d", format) )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
R_D3D_GetDXGIFormatForPixelFormat
==============
*/
__int64 R_D3D_GetDXGIFormatForPixelFormat(GfxPixelFormat format)
{
  return (unsigned int)s_formatConversion[format];
}

/*
==============
R_D3D_GetDXGIFormatFromVertexElementFormat
==============
*/
__int64 R_D3D_GetDXGIFormatFromVertexElementFormat(GfxVertexElementFormat format)
{
  return (unsigned int)s_formatConversion_1[format];
}

/*
==============
R_D3D_GetPixelFormatForDXGIFormat
==============
*/
__int64 R_D3D_GetPixelFormatForDXGIFormat(DXGI_FORMAT format)
{
  const R_D3D_GetPixelFormatForDXGIFormat::__l2::PixelFormatConversion *v1; 

  v1 = s_formatConversion_0;
  do
  {
    if ( v1->dxgiFormat == format )
      return (unsigned int)v1->pixelFormat;
    ++v1;
  }
  while ( v1 != (const R_D3D_GetPixelFormatForDXGIFormat::__l2::PixelFormatConversion *)&unk_143D9E130 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\d3d\\r_formats_d3d.cpp", 168, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_GetPixelFormatForDXGIFormat: unhandled case %d", format) )
    __debugbreak();
  return 0i64;
}

/*
==============
R_D3D_IsSRGBFormat
==============
*/
bool R_D3D_IsSRGBFormat(DXGI_FORMAT format)
{
  bool result; 

  switch ( format )
  {
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
R_D3D_IsUnormFormat
==============
*/
bool R_D3D_IsUnormFormat(DXGI_FORMAT format)
{
  bool result; 

  switch ( format )
  {
    case DXGI_FORMAT_R16G16B16A16_UNORM:
    case DXGI_FORMAT_R10G10B10A2_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R16G16_UNORM:
    case DXGI_FORMAT_D24_UNORM_S8_UINT:
    case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
    case DXGI_FORMAT_R8G8_UNORM:
    case DXGI_FORMAT_D16_UNORM:
    case DXGI_FORMAT_R16_UNORM:
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_A8_UNORM:
    case DXGI_FORMAT_R1_UNORM:
    case DXGI_FORMAT_R8G8_B8G8_UNORM:
    case DXGI_FORMAT_G8R8_G8B8_UNORM:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_B5G6R5_UNORM:
    case DXGI_FORMAT_B5G5R5A1_UNORM:
    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8X8_UNORM:
    case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
    case DXGI_FORMAT_B4G4R4A4_UNORM:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
R_D3D_MakeBindableDepthFormat
==============
*/
__int64 R_D3D_MakeBindableDepthFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      return 21i64;
    case DXGI_FORMAT_D32_FLOAT:
      return 41i64;
    case DXGI_FORMAT_D24_UNORM_S8_UINT:
      return 46i64;
    case DXGI_FORMAT_D16_UNORM:
      return 56i64;
  }
  result = 119i64;
  if ( format != DXGI_FORMAT_D16_UNORM_S8_UINT )
    return (unsigned int)format;
  return result;
}

/*
==============
R_D3D_MakeBindableStencilFormat
==============
*/
__int64 R_D3D_MakeBindableStencilFormat(DXGI_FORMAT format)
{
  __int64 result; 

  if ( format == DXGI_FORMAT_D32_FLOAT_S8X24_UINT )
    return 22i64;
  result = 47i64;
  if ( format != DXGI_FORMAT_D24_UNORM_S8_UINT )
    return (unsigned int)format;
  return result;
}

/*
==============
R_D3D_MakeNonSRGBFormat
==============
*/
__int64 R_D3D_MakeNonSRGBFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
      result = 28i64;
      break;
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
      result = 71i64;
      break;
    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
      result = 74i64;
      break;
    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
      result = 77i64;
      break;
    case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
      result = 87i64;
      break;
    case DXGI_FORMAT_B8G8R8X8_TYPELESS:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
      result = 88i64;
      break;
    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
      result = 98i64;
      break;
    default:
      result = (unsigned int)format;
      break;
  }
  return result;
}

/*
==============
R_D3D_MakeNonTypelessFormat
==============
*/
__int64 R_D3D_MakeNonTypelessFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R32G32_TYPELESS:
      result = 16i64;
      break;
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
      result = 28i64;
      break;
    case DXGI_FORMAT_R32_TYPELESS:
      result = 41i64;
      break;
    case DXGI_FORMAT_R16_TYPELESS:
      result = 56i64;
      break;
    case DXGI_FORMAT_BC1_TYPELESS:
      result = 71i64;
      break;
    case DXGI_FORMAT_BC2_TYPELESS:
      result = 74i64;
      break;
    case DXGI_FORMAT_BC3_TYPELESS:
      result = 77i64;
      break;
    case DXGI_FORMAT_BC5_TYPELESS:
      result = 83i64;
      break;
    case DXGI_FORMAT_BC6H_TYPELESS:
      result = 95i64;
      break;
    case DXGI_FORMAT_BC7_TYPELESS:
      result = 98i64;
      break;
    default:
      result = (unsigned int)format;
      break;
  }
  return result;
}

/*
==============
R_D3D_MakeSRGBFormat
==============
*/
__int64 R_D3D_MakeSRGBFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_R8G8B8A8_SNORM:
    case DXGI_FORMAT_R8G8B8A8_SINT:
      result = 29i64;
      break;
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
      result = 72i64;
      break;
    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM:
      result = 75i64;
      break;
    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM:
      result = 78i64;
      break;
    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8A8_TYPELESS:
      result = 91i64;
      break;
    case DXGI_FORMAT_B8G8R8X8_UNORM:
    case DXGI_FORMAT_B8G8R8X8_TYPELESS:
      result = 93i64;
      break;
    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM:
      result = 99i64;
      break;
    default:
      result = (unsigned int)format;
      break;
  }
  return result;
}

/*
==============
R_D3D_MakeTypelessFormat
==============
*/
__int64 R_D3D_MakeTypelessFormat(DXGI_FORMAT format)
{
  __int64 result; 

  switch ( format )
  {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
    case DXGI_FORMAT_R32G32B32A32_UINT:
    case DXGI_FORMAT_R32G32B32A32_SINT:
      result = 1i64;
      break;
    case DXGI_FORMAT_R32G32B32_FLOAT:
    case DXGI_FORMAT_R32G32B32_UINT:
    case DXGI_FORMAT_R32G32B32_SINT:
      result = 5i64;
      break;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UNORM:
    case DXGI_FORMAT_R16G16B16A16_UINT:
    case DXGI_FORMAT_R16G16B16A16_SNORM:
    case DXGI_FORMAT_R16G16B16A16_SINT:
      result = 9i64;
      break;
    case DXGI_FORMAT_R32G32_FLOAT:
    case DXGI_FORMAT_R32G32_UINT:
    case DXGI_FORMAT_R32G32_SINT:
      result = 15i64;
      break;
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
    case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
      result = 19i64;
      break;
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_R8G8B8A8_SNORM:
    case DXGI_FORMAT_R8G8B8A8_SINT:
      result = 27i64;
      break;
    case DXGI_FORMAT_R16G16_FLOAT:
    case DXGI_FORMAT_R16G16_UNORM:
    case DXGI_FORMAT_R16G16_UINT:
    case DXGI_FORMAT_R16G16_SNORM:
    case DXGI_FORMAT_R16G16_SINT:
      result = 33i64;
      break;
    case DXGI_FORMAT_D32_FLOAT:
    case DXGI_FORMAT_R32_FLOAT:
    case DXGI_FORMAT_R32_UINT:
    case DXGI_FORMAT_R32_SINT:
      result = 39i64;
      break;
    case DXGI_FORMAT_D24_UNORM_S8_UINT:
      result = 44i64;
      break;
    case DXGI_FORMAT_R8G8_UNORM:
    case DXGI_FORMAT_R8G8_UINT:
    case DXGI_FORMAT_R8G8_SNORM:
    case DXGI_FORMAT_R8G8_SINT:
      result = 48i64;
      break;
    case DXGI_FORMAT_R16_FLOAT:
    case DXGI_FORMAT_D16_UNORM:
    case DXGI_FORMAT_R16_UNORM:
    case DXGI_FORMAT_R16_UINT:
    case DXGI_FORMAT_R16_SNORM:
    case DXGI_FORMAT_R16_SINT:
      result = 53i64;
      break;
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_R8_UINT:
    case DXGI_FORMAT_R8_SNORM:
    case DXGI_FORMAT_R8_SINT:
    case DXGI_FORMAT_A8_UNORM:
      result = 60i64;
      break;
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
      result = 70i64;
      break;
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
      result = 73i64;
      break;
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
      result = 76i64;
      break;
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
      result = 79i64;
      break;
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_BC5_SNORM:
      result = 82i64;
      break;
    case DXGI_FORMAT_BC6H_UF16:
    case DXGI_FORMAT_BC6H_SF16:
      result = 94i64;
      break;
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
      result = 97i64;
      break;
    case DXGI_FORMAT_D16_UNORM_S8_UINT:
      result = 119i64;
      break;
    default:
      result = (unsigned int)format;
      break;
  }
  return result;
}

