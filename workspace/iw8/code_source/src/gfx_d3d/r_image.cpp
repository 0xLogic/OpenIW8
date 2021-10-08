/*
==============
R_SumOfUsedImages
==============
*/

void __fastcall R_SumOfUsedImages(Image_MemUsage *usage)
{
  ?R_SumOfUsedImages@@YAXPEAUImage_MemUsage@@@Z(usage);
}

/*
==============
R_ShutdownImages
==============
*/

void R_ShutdownImages(void)
{
  ?R_ShutdownImages@@YAXXZ();
}

/*
==============
Image_CreatePlacementTexture_XB3
==============
*/

void __fastcall Image_CreatePlacementTexture_XB3(const GfxTexture_CreateParams *textureParams, GfxTexture *texture, unsigned int mostDetailedMip)
{
  ?Image_CreatePlacementTexture_XB3@@YAXAEBUGfxTexture_CreateParams@@PEAUGfxTexture@@I@Z(textureParams, texture, mostDetailedMip);
}

/*
==============
Image_Process2DTextureCoordsForAtlasing
==============
*/

void __fastcall Image_Process2DTextureCoordsForAtlasing(const GfxImage *image, float *outS0, float *outS1, float *outT0, float *outT1)
{
  ?Image_Process2DTextureCoordsForAtlasing@@YAXPEBUGfxImage@@PEAM111@Z(image, outS0, outS1, outT0, outT1);
}

/*
==============
R_RegisterCodeImages
==============
*/

void R_RegisterCodeImages(void)
{
  ?R_RegisterCodeImages@@YAXXZ();
}

/*
==============
Image_UnAlias
==============
*/

void __fastcall Image_UnAlias(GfxImage *image)
{
  ?Image_UnAlias@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
Load_ImagePixels
==============
*/

void __fastcall Load_ImagePixels(unsigned __int8 **pixelsPtr, GfxImage *image)
{
  ?Load_ImagePixels@@YAXPEAPEAEPEAUGfxImage@@@Z(pixelsPtr, image);
}

/*
==============
ImageRaw_Release
==============
*/

void __fastcall ImageRaw_Release(GfxImageRaw *image)
{
  ?ImageRaw_Release@@YAXPEAUGfxImageRaw@@@Z(image);
}

/*
==============
R_InitImages
==============
*/

void R_InitImages(void)
{
  ?R_InitImages@@YAXXZ();
}

/*
==============
R_ImageList_f
==============
*/

void R_ImageList_f(void)
{
  ?R_ImageList_f@@YAXXZ();
}

/*
==============
Image_Release
==============
*/

void __fastcall Image_Release(GfxImage *image)
{
  ?Image_Release@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
Image_Register
==============
*/

GfxImage *__fastcall Image_Register(const char *imageName, ImageTrack imageTrack)
{
  return ?Image_Register@@YAPEAUGfxImage@@PEBDW4ImageTrack@@@Z(imageName, imageTrack);
}

/*
==============
Load_ImagePixelsRaw
==============
*/

void __fastcall Load_ImagePixelsRaw(unsigned __int8 **pixelsPtr, GfxImageRaw *image)
{
  ?Load_ImagePixelsRaw@@YAXPEAPEAEPEAUGfxImageRaw@@@Z(pixelsPtr, image);
}

/*
==============
Image_IsReleased
==============
*/

bool __fastcall Image_IsReleased(const GfxImage *image)
{
  return ?Image_IsReleased@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
Image_AllocProg
==============
*/

GfxImage *__fastcall Image_AllocProg(R_ImageProgID imageProgType, GfxImageCategory category, TextureSemantic semantic)
{
  return ?Image_AllocProg@@YAPEAUGfxImage@@W4R_ImageProgID@@W4GfxImageCategory@@W4TextureSemantic@@@Z(imageProgType, category, semantic);
}

/*
==============
Image_IsProg
==============
*/

bool __fastcall Image_IsProg(GfxImage *image)
{
  return ?Image_IsProg@@YA_NPEAUGfxImage@@@Z(image);
}

/*
==============
ImageRaw_IsReleased
==============
*/

bool __fastcall ImageRaw_IsReleased(const GfxImageRaw *image)
{
  return ?ImageRaw_IsReleased@@YA_NPEBUGfxImageRaw@@@Z(image);
}

/*
==============
Image_AllocInPlace
==============
*/

void __fastcall Image_AllocInPlace(GfxImage *image, const char *name, GfxImageCategory category, TextureSemantic semantic)
{
  ?Image_AllocInPlace@@YAXPEAUGfxImage@@PEBDW4GfxImageCategory@@W4TextureSemantic@@@Z(image, name, category, semantic);
}

/*
==============
Image_FindExisting
==============
*/

GfxImage *__fastcall Image_FindExisting(const char *name)
{
  return ?Image_FindExisting@@YAPEAUGfxImage@@PEBD@Z(name);
}

/*
==============
ImageRaw_IsReleased
==============
*/
bool ImageRaw_IsReleased(const GfxImageRaw *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 455, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  return image->textureId == NULLID;
}

/*
==============
ImageRaw_Release
==============
*/
void ImageRaw_Release(GfxImageRaw *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 445, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 446, ASSERT_TYPE_ASSERT, "( image->textureId != GfxTextureId::NULLID )", "Attempting to release already released raw image or the raw image was never fully loaded, which indicates a bug") )
    __debugbreak();
  R_Texture_Destroy(image->textureId);
  image->textureId = NULLID;
}

/*
==============
Image_AllocInPlace
==============
*/
void Image_AllocInPlace(GfxImage *image, const char *name, GfxImageCategory category, TextureSemantic semantic)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 588, ASSERT_TYPE_SANITY, "( image )", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( I_strempty(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 589, ASSERT_TYPE_SANITY, "( !I_strempty( name ) )", (const char *)&queryFormat, "!I_strempty( name )") )
    __debugbreak();
  if ( image->textureId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 590, ASSERT_TYPE_SANITY, "( image->textureId == GfxTextureId::NULLID )", (const char *)&queryFormat, "image->textureId == GfxTextureId::NULLID") )
    __debugbreak();
  memset_0(&image->packedAtlasData, 0, 0xE0ui64);
  image->name = name;
  Image_Construct(category, semantic, IMAGE_TRACK_MISC, image);
}

/*
==============
Image_AllocProg
==============
*/
GfxImage *Image_AllocProg(R_ImageProgID imageProgType, GfxImageCategory category, TextureSemantic semantic)
{
  __int64 v3; 
  GfxImage *v6; 
  const char *v7; 

  v3 = (unsigned __int8)imageProgType;
  v6 = &s_imageProgs[(unsigned __int8)imageProgType];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 563, ASSERT_TYPE_SANITY, "( image )", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( v6->textureId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 564, ASSERT_TYPE_SANITY, "( image->textureId == GfxTextureId::NULLID )", (const char *)&queryFormat, "image->textureId == GfxTextureId::NULLID") )
    __debugbreak();
  memset_0(v6, 0, sizeof(GfxImage));
  v7 = s_imageProgNames[v3];
  if ( I_strempty(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 569, ASSERT_TYPE_SANITY, "( !I_strempty( name ) )", (const char *)&queryFormat, "!I_strempty( name )") )
    __debugbreak();
  v6->name = v7;
  Image_Construct(category, semantic, IMAGE_TRACK_MISC, v6);
  return v6;
}

/*
==============
Image_Construct
==============
*/
void Image_Construct(GfxImageCategory category, TextureSemantic semantic, ImageTrack imageTrack, GfxImage *image)
{
  if ( category == IMG_CATEGORY_UNKNOWN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 539, ASSERT_TYPE_ASSERT, "(category != IMG_CATEGORY_UNKNOWN)", (const char *)&queryFormat, "category != IMG_CATEGORY_UNKNOWN") )
    __debugbreak();
  if ( semantic == TS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 540, ASSERT_TYPE_ASSERT, "(semantic != TS_COUNT)", (const char *)&queryFormat, "semantic != TS_COUNT") )
    __debugbreak();
  if ( imageTrack == IMAGE_TRACK_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 541, ASSERT_TYPE_ASSERT, "(imageTrack != IMAGE_TRACK_COUNT)", (const char *)&queryFormat, "imageTrack != IMAGE_TRACK_COUNT") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 543, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (!image->name || !*image->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 544, ASSERT_TYPE_ASSERT, "(!I_strempty( image->name ))", (const char *)&queryFormat, "!I_strempty( image->name )") )
    __debugbreak();
  if ( image->flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 545, ASSERT_TYPE_ASSERT, "(image->flags == 0)", (const char *)&queryFormat, "image->flags == 0") )
    __debugbreak();
  if ( image->totalSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 546, ASSERT_TYPE_ASSERT, "( image->totalSize ) == ( 0 )", "%s == %s\n\t%u, %u", "image->totalSize", "0", image->totalSize, 0i64) )
    __debugbreak();
  image->category = category;
  image->semantic = semantic;
}

/*
==============
Image_CreatePlacementTexture1D_XB3
==============
*/
void Image_CreatePlacementTexture1D_XB3(const GfxTexture_CreateParams *textureParams, GfxTexture *texture, unsigned int mostDetailedMip)
{
  unsigned int v8; 
  unsigned int maxLevelCount; 
  int width; 
  unsigned __int16 v11; 
  GfxPixelFormat format; 
  GfxImageFlags flags; 
  D3D12_TEXTURE_LAYOUT LayoutMode; 
  bool v15; 
  const unsigned __int8 *pixels; 
  const char *name; 
  int v18; 
  HRESULT v19; 
  const char *v20; 
  ID3D12DeviceChild *v21; 
  GfxPixelFormat v22; 
  unsigned int v24; 
  ID3D12Resource *basemap; 
  ID3D12Resource *v27; 
  ID3D12DeviceChild *resource; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  __int64 v30[3]; 
  int v31; 
  __int16 v32; 
  unsigned __int16 v33; 
  DXGI_FORMAT TypelessFormat; 
  __int64 v35; 
  D3D12_TEXTURE_LAYOUT v36; 
  int v37; 
  int v38; 

  if ( (textureParams->params.flags & 2) != 0 || textureParams->params.maxLevelCount == 1 )
  {
    v8 = 1;
  }
  else
  {
    v8 = Image_CountMipmaps(textureParams->params.width, textureParams->params.height, textureParams->params.depth);
    maxLevelCount = textureParams->params.maxLevelCount;
    if ( maxLevelCount && v8 > maxLevelCount )
      v8 = textureParams->params.maxLevelCount;
  }
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1217, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( texture->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1218, ASSERT_TYPE_ASSERT, "(!texture->basemap)", (const char *)&queryFormat, "!texture->basemap") )
    __debugbreak();
  if ( textureParams->params.height != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1219, ASSERT_TYPE_ASSERT, "(imageParams.height == 1)", (const char *)&queryFormat, "imageParams.height == 1") )
    __debugbreak();
  if ( textureParams->params.depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1220, ASSERT_TYPE_ASSERT, "(imageParams.depth == 1)", (const char *)&queryFormat, "imageParams.depth == 1") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x38000) != 98304 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1221, ASSERT_TYPE_ASSERT, "(( imageParams.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D)", (const char *)&queryFormat, "( imageParams.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1222, ASSERT_TYPE_ASSERT, "(mipLevelCount > 0)", (const char *)&queryFormat, "mipLevelCount > 0") )
    __debugbreak();
  if ( mostDetailedMip >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1223, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) < ( mipLevelCount )", "%s < %s\n\t%u, %u", "mostDetailedMip", "mipLevelCount", mostDetailedMip, v8) )
    __debugbreak();
  if ( textureParams->params.numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1224, ASSERT_TYPE_ASSERT, "(imageParams.numElements == 1)", (const char *)&queryFormat, "imageParams.numElements == 1") )
    __debugbreak();
  if ( !textureParams->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1225, ASSERT_TYPE_ASSERT, "(textureParams.pixels)", (const char *)&queryFormat, "textureParams.pixels") )
    __debugbreak();
  width = textureParams->params.width;
  v38 = 0;
  v30[1] = 0i64;
  v30[0] = 2i64;
  v30[2] = Image_GetBCValidatedDimension(&textureParams->params, width);
  v31 = 1;
  v32 = 1;
  v11 = truncate_cast<unsigned short,unsigned int>(v8);
  format = textureParams->params.format;
  flags = textureParams->params.flags;
  v33 = v11;
  TypelessFormat = Image_ConditionallyMakeTypelessFormat(flags, format);
  v35 = 1i64;
  LayoutMode = Image_GetLayoutMode(&textureParams->params);
  v15 = (textureParams->params.flags & 0x800000) == 0;
  pixels = textureParams->pixels;
  name = textureParams->name;
  v36 = LayoutMode;
  v18 = 0;
  if ( !v15 )
    v18 = 4;
  v37 = v18;
  v19 = ((__int64 (__fastcall *)(ID3D12Device *, const unsigned __int8 *, __int64 *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, pixels, v30, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v19 < 0 )
  {
    v20 = R_ErrorDescription(v19);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v20);
  }
  PIXSetDebugName(resource, name);
  v21 = resource;
  texture->basemap = (ID3D12Resource *)resource;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1249, ASSERT_TYPE_ASSERT, "(texture->linemap)", (const char *)&queryFormat, "texture->linemap") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x20000000) != 0 )
  {
    R_AssignNullShaderTextureView(&texture->shaderView);
  }
  else
  {
    v22 = textureParams->params.format;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu ymmword ptr [rbp+57h+viewDesc.Shader4ComponentMapping], ymm0
    }
    viewDesc.Format = TypelessFormat;
    viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE1D;
    v24 = Image_ShaderComponentMapping(v22);
    basemap = texture->basemap;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    viewDesc.Shader4ComponentMapping = v24;
    __asm { vmovss  dword ptr [rbp+57h+viewDesc.___u3+8], xmm0 }
    viewDesc.Buffer.FirstElement = mostDetailedMip | 0xFFFFFFFF00000000ui64;
    R_HW_CreateShaderResourceView(basemap, &viewDesc, &texture->shaderView);
  }
  if ( (textureParams->params.flags & 0x800000) != 0 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_QWORD *)&viewDesc.TextureCubeArray.NumCubes = 0i64;
    v27 = texture->basemap;
    __asm { vmovdqu xmmword ptr [rbp+57h+viewDesc+0Ch], xmm0 }
    viewDesc.Texture2DArray.ResourceMinLODClamp = 0.0;
    viewDesc.Format = TypelessFormat;
    *(_QWORD *)&viewDesc.ViewDimension = 2i64;
    R_HW_CreateUnorderedAccessView(v27, 0xFFFFFFFF, (const D3D12_UNORDERED_ACCESS_VIEW_DESC *)&viewDesc, &texture->shaderRWView);
  }
  else
  {
    R_AssignNullShaderTextureRWView(&texture->shaderRWView);
  }
}

/*
==============
Image_CreatePlacementTexture2D_XB3
==============
*/
void Image_CreatePlacementTexture2D_XB3(const GfxTexture_CreateParams *textureParams, GfxTexture *texture, unsigned int mostDetailedMip)
{
  MapType MapTypeFromImageFlags; 
  unsigned int v8; 
  unsigned int maxLevelCount; 
  int width; 
  unsigned __int16 v11; 
  unsigned int numElements; 
  unsigned int ArraySize; 
  unsigned __int16 v14; 
  GfxPixelFormat format; 
  GfxImageFlags flags; 
  D3D12_TEXTURE_LAYOUT LayoutMode; 
  bool v18; 
  const unsigned __int8 *pixels; 
  const char *name; 
  int v21; 
  HRESULT v22; 
  const char *v23; 
  ID3D12DeviceChild *v24; 
  GfxPixelFormat v25; 
  DXGI_FORMAT DXGIFormatForPixelFormat; 
  GfxPixelFormat v27; 
  unsigned int v28; 
  unsigned int v30; 
  GfxPixelFormat v34; 
  __int64 v35; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  ID3D12DeviceChild *resource; 
  int v38; 
  __int64 v39; 
  int v40; 
  __int64 BCValidatedDimension; 
  int v42; 
  unsigned __int16 v43; 
  unsigned __int16 v44; 
  DXGI_FORMAT TypelessFormat; 
  __int64 v46; 
  D3D12_TEXTURE_LAYOUT v47; 
  int v48; 
  int v49; 

  MapTypeFromImageFlags = Image_GetMapTypeFromImageFlags(textureParams->params.flags);
  if ( (textureParams->params.flags & 2) != 0 || textureParams->params.maxLevelCount == 1 )
  {
    v8 = 1;
  }
  else
  {
    v8 = Image_CountMipmaps(textureParams->params.width, textureParams->params.height, textureParams->params.depth);
    maxLevelCount = textureParams->params.maxLevelCount;
    if ( maxLevelCount && v8 > maxLevelCount )
      v8 = textureParams->params.maxLevelCount;
  }
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1297, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( texture->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1298, ASSERT_TYPE_ASSERT, "(!texture->basemap)", (const char *)&queryFormat, "!texture->basemap") )
    __debugbreak();
  if ( textureParams->params.depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1299, ASSERT_TYPE_ASSERT, "(imageParams.depth == 1)", (const char *)&queryFormat, "imageParams.depth == 1") )
    __debugbreak();
  if ( (MapTypeFromImageFlags & 0xFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1300, ASSERT_TYPE_ASSERT, "(mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY)", (const char *)&queryFormat, "mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1301, ASSERT_TYPE_ASSERT, "(mipLevelCount > 0)", (const char *)&queryFormat, "mipLevelCount > 0") )
    __debugbreak();
  if ( mostDetailedMip >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1302, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) < ( mipLevelCount )", "%s < %s\n\t%u, %u", "mostDetailedMip", "mipLevelCount", mostDetailedMip, v8) )
    __debugbreak();
  if ( !textureParams->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1303, ASSERT_TYPE_ASSERT, "(textureParams.pixels)", (const char *)&queryFormat, "textureParams.pixels") )
    __debugbreak();
  width = textureParams->params.width;
  v39 = 0i64;
  v40 = 0;
  v49 = 0;
  v38 = 3;
  BCValidatedDimension = Image_GetBCValidatedDimension(&textureParams->params, width);
  v42 = Image_GetBCValidatedDimension(&textureParams->params, textureParams->params.height);
  v11 = truncate_cast<unsigned short,unsigned int>(v8);
  numElements = textureParams->params.numElements;
  v44 = v11;
  ArraySize = Image_GetArraySize(MapTypeFromImageFlags, numElements);
  v14 = truncate_cast<unsigned short,unsigned int>(ArraySize);
  format = textureParams->params.format;
  flags = textureParams->params.flags;
  v43 = v14;
  v46 = 1i64;
  TypelessFormat = Image_ConditionallyMakeTypelessFormat(flags, format);
  LayoutMode = Image_GetLayoutMode(&textureParams->params);
  v18 = (textureParams->params.flags & 0x800000) == 0;
  pixels = textureParams->pixels;
  name = textureParams->name;
  v47 = LayoutMode;
  v21 = 0;
  if ( !v18 )
    v21 = 4;
  v48 = v21;
  v22 = ((__int64 (__fastcall *)(ID3D12Device *, const unsigned __int8 *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, pixels, &v38, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v22 < 0 )
  {
    v23 = R_ErrorDescription(v22);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v23);
  }
  PIXSetDebugName(resource, name);
  v24 = resource;
  texture->basemap = (ID3D12Resource *)resource;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1326, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x20000000) == 0 )
  {
    v25 = textureParams->params.format;
    memset(&viewDesc, 0, sizeof(viewDesc));
    DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(v25);
    v27 = textureParams->params.format;
    viewDesc.Format = DXGIFormatForPixelFormat;
    viewDesc.Shader4ComponentMapping = Image_ShaderComponentMapping(v27);
    if ( MapTypeFromImageFlags )
    {
      switch ( MapTypeFromImageFlags )
      {
        case MAPTYPE_CUBE:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rbp+57h+viewDesc.___u3+8], xmm0
          }
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBE;
          break;
        case MAPTYPE_ARRAY:
          v30 = textureParams->params.numElements;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rbp+57h+viewDesc.___u3+14h], xmm0
          }
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
          viewDesc.Buffer.NumElements = 0;
          viewDesc.Buffer.StructureByteStride = v30;
          break;
        case MAPTYPE_CUBE_ARRAY:
          v28 = textureParams->params.numElements;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rbp+57h+viewDesc.___u3+10h], xmm0
          }
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBEARRAY;
          viewDesc.Buffer.NumElements = 0;
          viewDesc.Buffer.StructureByteStride = v28;
          break;
        default:
          LODWORD(v35) = (unsigned __int8)MapTypeFromImageFlags;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported map type %d", v35) )
            __debugbreak();
          goto LABEL_48;
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+57h+viewDesc.___u3+0Ch], xmm0
      }
      viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    }
    viewDesc.Buffer.FirstElement = mostDetailedMip | 0xFFFFFFFF00000000ui64;
LABEL_48:
    R_HW_CreateShaderResourceView(texture->basemap, &viewDesc, &texture->shaderView);
    goto LABEL_50;
  }
  R_AssignNullShaderTextureView(&texture->shaderView);
LABEL_50:
  if ( (textureParams->params.flags & 0x800000) != 0 )
  {
    if ( ((MapTypeFromImageFlags - 1) & 0xFB) != 0 )
    {
      v34 = textureParams->params.format;
      memset(&viewDesc, 0, sizeof(viewDesc));
      viewDesc.Format = R_D3D_GetDXGIFormatForPixelFormat(v34);
      if ( MapTypeFromImageFlags )
      {
        if ( MapTypeFromImageFlags == MAPTYPE_ARRAY )
        {
          viewDesc.Texture1D.MostDetailedMip = textureParams->params.numElements;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
        }
        else
        {
          LODWORD(v35) = (unsigned __int8)MapTypeFromImageFlags;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1405, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported map type %d", v35) )
            __debugbreak();
        }
      }
      else
      {
        viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
      }
      R_HW_CreateUnorderedAccessView(texture->basemap, 0xFFFFFFFF, (const D3D12_UNORDERED_ACCESS_VIEW_DESC *)&viewDesc, &texture->shaderRWView);
    }
    else
    {
      R_AssignNullShaderTextureRWView(&texture->shaderRWView);
      Com_PrintWarning(8, "WARNING: UAV's not supported for CubeMaps.  Not creating one for image %s.  If shader write access is needed, please create a 2DArray UAV for each MIP level.  If not, please remove the IMG_CREATE_FLAG_RW_VIEW flag from this asset.\n", textureParams->name);
    }
  }
  else
  {
    R_AssignNullShaderTextureRWView(&texture->shaderRWView);
  }
}

/*
==============
Image_CreatePlacementTexture3D_XB3
==============
*/
void Image_CreatePlacementTexture3D_XB3(const GfxTexture_CreateParams *textureParams, GfxTexture *texture, unsigned int mostDetailedMip)
{
  unsigned int v7; 
  unsigned int maxLevelCount; 
  int width; 
  unsigned __int16 v10; 
  int depth; 
  GfxPixelFormat format; 
  GfxImageFlags flags; 
  D3D12_TEXTURE_LAYOUT LayoutMode; 
  bool v15; 
  const unsigned __int8 *pixels; 
  const char *name; 
  int v18; 
  HRESULT v19; 
  const char *v20; 
  ID3D12Resource *v21; 
  GfxPixelFormat v22; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  ID3D12DeviceChild *resource; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 BCValidatedDimension; 
  int v30; 
  __int16 v31; 
  unsigned __int16 v32; 
  DXGI_FORMAT TypelessFormat; 
  __int64 v34; 
  D3D12_TEXTURE_LAYOUT v35; 
  int v36; 
  int v37; 

  if ( (textureParams->params.flags & 2) != 0 || textureParams->params.maxLevelCount == 1 )
  {
    v7 = 1;
  }
  else
  {
    v7 = Image_CountMipmaps(textureParams->params.width, textureParams->params.height, textureParams->params.depth);
    maxLevelCount = textureParams->params.maxLevelCount;
    if ( maxLevelCount && v7 > maxLevelCount )
      v7 = textureParams->params.maxLevelCount;
  }
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1425, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( texture->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1426, ASSERT_TYPE_ASSERT, "(!texture->basemap)", (const char *)&queryFormat, "!texture->basemap") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x38000) != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1427, ASSERT_TYPE_ASSERT, "(( imageParams.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_3D)", (const char *)&queryFormat, "( imageParams.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_3D") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1428, ASSERT_TYPE_ASSERT, "(mipLevelCount > 0)", (const char *)&queryFormat, "mipLevelCount > 0") )
    __debugbreak();
  if ( mostDetailedMip >= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1429, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) < ( mipLevelCount )", "%s < %s\n\t%u, %u", "mostDetailedMip", "mipLevelCount", mostDetailedMip, v7) )
    __debugbreak();
  if ( textureParams->params.numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1430, ASSERT_TYPE_ASSERT, "(imageParams.numElements == 1)", (const char *)&queryFormat, "imageParams.numElements == 1") )
    __debugbreak();
  if ( !textureParams->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1431, ASSERT_TYPE_ASSERT, "(textureParams.pixels)", (const char *)&queryFormat, "textureParams.pixels") )
    __debugbreak();
  width = textureParams->params.width;
  v27 = 0i64;
  v28 = 0;
  v37 = 0;
  v26 = 4;
  BCValidatedDimension = Image_GetBCValidatedDimension(&textureParams->params, width);
  v30 = Image_GetBCValidatedDimension(&textureParams->params, textureParams->params.height);
  v10 = truncate_cast<unsigned short,unsigned int>(v7);
  depth = textureParams->params.depth;
  v32 = v10;
  if ( (depth < 0 || (unsigned int)depth > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)depth, "signed", depth) )
    __debugbreak();
  format = textureParams->params.format;
  flags = textureParams->params.flags;
  v31 = depth;
  v34 = 1i64;
  TypelessFormat = Image_ConditionallyMakeTypelessFormat(flags, format);
  LayoutMode = Image_GetLayoutMode(&textureParams->params);
  v15 = (textureParams->params.flags & 0x800000) == 0;
  pixels = textureParams->pixels;
  name = textureParams->name;
  v35 = LayoutMode;
  v18 = 0;
  if ( !v15 )
    v18 = 4;
  v36 = v18;
  v19 = ((__int64 (__fastcall *)(ID3D12Device *, const unsigned __int8 *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, pixels, &v26, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v19 < 0 )
  {
    v20 = R_ErrorDescription(v19);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v20);
  }
  PIXSetDebugName(resource, name);
  v21 = (ID3D12Resource *)resource;
  texture->basemap = (ID3D12Resource *)resource;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1454, ASSERT_TYPE_ASSERT, "(texture->volmap)", (const char *)&queryFormat, "texture->volmap") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x20000000) != 0 )
  {
    R_AssignNullShaderTextureView(&texture->shaderView);
  }
  else
  {
    v22 = textureParams->params.format;
    memset(&viewDesc.Shader4ComponentMapping + 1, 0, 28);
    viewDesc.Format = TypelessFormat;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    viewDesc.Shader4ComponentMapping = Image_ShaderComponentMapping(v22);
    viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
    viewDesc.Buffer.FirstElement = mostDetailedMip | 0xFFFFFFFF00000000ui64;
    __asm { vmovss  dword ptr [rbp+57h+viewDesc.___u3+8], xmm0 }
    R_HW_CreateShaderResourceView(v21, &viewDesc, &texture->shaderView);
  }
  if ( (textureParams->params.flags & 0x800000) != 0 )
  {
    viewDesc.Format = TypelessFormat;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    viewDesc.Texture1D.MostDetailedMip = textureParams->params.depth;
    __asm { vmovdqu xmmword ptr [rbp+57h+viewDesc.___u3+4], xmm0 }
    viewDesc.Texture2DArray.ResourceMinLODClamp = 0.0;
    *(_QWORD *)&viewDesc.ViewDimension = 8i64;
    *(&viewDesc.Shader4ComponentMapping + 1) = 0;
    R_HW_CreateUnorderedAccessView(v21, 0xFFFFFFFF, (const D3D12_UNORDERED_ACCESS_VIEW_DESC *)&viewDesc, &texture->shaderRWView);
  }
  else
  {
    R_AssignNullShaderTextureRWView(&texture->shaderRWView);
  }
}

/*
==============
Image_CreatePlacementTexture_XB3
==============
*/
void Image_CreatePlacementTexture_XB3(const GfxTexture_CreateParams *textureParams, GfxTexture *texture, unsigned int mostDetailedMip)
{
  unsigned __int32 v3; 

  v3 = textureParams->params.flags & 0x38000;
  if ( v3 > 0x18000 )
  {
    if ( ((v3 - 0x20000) & 0xFFFF7FFF) != 0 )
      goto LABEL_8;
  }
  else
  {
    if ( v3 == 98304 )
    {
      Image_CreatePlacementTexture1D_XB3(textureParams, texture, mostDetailedMip);
      return;
    }
    if ( (textureParams->params.flags & 0x30000) != 0 )
    {
      if ( v3 == 0x10000 )
      {
        Image_CreatePlacementTexture3D_XB3(textureParams, texture, mostDetailedMip);
        return;
      }
LABEL_8:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1517, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
  }
  Image_CreatePlacementTexture2D_XB3(textureParams, texture, mostDetailedMip);
}

/*
==============
Image_FindExisting
==============
*/
GfxImage *Image_FindExisting(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_IMAGE, name, 1).image;
}

/*
==============
Image_GetLayoutMode
==============
*/
__int64 Image_GetLayoutMode(const Image_SetupParams *params)
{
  XG_TILE_MODE v2; 
  unsigned int v3; 
  __int64 result; 

  v2 = Image_ComputeTileModeWithFlags_XB3(params);
  if ( (unsigned int)v2 > XG_TILE_MODE_LINEAR_GENERAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1184, ASSERT_TYPE_ASSERT, "(tileMode >= XG_TILE_MODE_COMP_DEPTH_0 && tileMode <= XG_TILE_MODE_LINEAR_GENERAL)", (const char *)&queryFormat, "tileMode >= XG_TILE_MODE_COMP_DEPTH_0 && tileMode <= XG_TILE_MODE_LINEAR_GENERAL") )
    __debugbreak();
  v3 = v2 | 0x100;
  if ( (params->flags & 0x40000000) != 0 )
    v3 = 275;
  if ( v3 - 256 > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1198, ASSERT_TYPE_ASSERT, "(layoutMode >= D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_0 && layoutMode <= D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_LINEAR_GENERAL)", (const char *)&queryFormat, "layoutMode >= D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_COMP_DEPTH_0 && layoutMode <= D3D12XBOX_TEXTURE_LAYOUT_TILE_MODE_LINEAR_GENERAL") )
    __debugbreak();
  result = (unsigned int)params->textureLayoutOverride;
  if ( (_DWORD)result == -1 )
    return v3;
  return result;
}

/*
==============
Image_IsProg
==============
*/
bool Image_IsProg(GfxImage *image)
{
  return image >= s_imageProgs && image < (GfxImage *)&s_default1DImage;
}

/*
==============
Image_IsReleased
==============
*/
bool Image_IsReleased(const GfxImage *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 438, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  return image->textureId == NULLID;
}

/*
==============
Image_Process2DTextureCoordsForAtlasing
==============
*/
void Image_Process2DTextureCoordsForAtlasing(const GfxImage *image, float *outS0, float *outS1, float *outT0, float *outT1)
{
  unsigned __int8 colCount; 
  unsigned __int8 rowCount; 
  unsigned int textureAtlasTime; 
  unsigned int v16; 
  double v39; 
  float s0; 
  float *v42; 
  float dt; 
  float t0; 

  v42 = outS0;
  _R12 = outT0;
  _R13 = outS1;
  _RBX = image;
  if ( !outS0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2473, ASSERT_TYPE_ASSERT, "(outS0)", (const char *)&queryFormat, "outS0") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2474, ASSERT_TYPE_ASSERT, "(outS1)", (const char *)&queryFormat, "outS1") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2475, ASSERT_TYPE_ASSERT, "(outT0)", (const char *)&queryFormat, "outT0") )
    __debugbreak();
  _R15 = outT1;
  if ( !outT1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2476, ASSERT_TYPE_ASSERT, "(outT1)", (const char *)&queryFormat, "outT1") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2478, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  colCount = _RBX->atlasInfo.atlasSize.colCount;
  rowCount = _RBX->atlasInfo.atlasSize.rowCount;
  if ( colCount > 1u || rowCount > 1u )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm6
      vxorps  xmm0, xmm0, xmm0
    }
    if ( _RBX->semantic )
      goto LABEL_20;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+20h]
      vucomiss xmm6, xmm0
    }
    if ( _RBX->semantic == TS_2D )
    {
LABEL_20:
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, dword ptr [rax+28h]
      }
    }
    __asm { vcomiss xmm6, xmm0 }
    if ( _RBX->semantic == TS_2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2487, ASSERT_TYPE_ASSERT, "(fps > 0.f)", (const char *)&queryFormat, "fps > 0.f") )
      __debugbreak();
    textureAtlasTime = rg.textureAtlasTime;
    v16 = colCount * rowCount;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2497, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm1, xmm0, xmm6
      vcvttss2si r8, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, cs:__real@3a83126f
      vcvttss2si r14, xmm2
    }
    if ( (unsigned int)_R14 >= v16 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0B8h+var_78], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2502, ASSERT_TYPE_ASSERT, "(( frame < frameCount ))", "%s\n\tframe:%i  ms:%i  fps:%f  fc:%i  msTtP:%i  msSLB:%i\n", "( frame < frameCount )", _R14, textureAtlasTime, v39, colCount * rowCount, _R8, textureAtlasTime % (unsigned int)_R8) )
        __debugbreak();
    }
    TextureAtlas_GetCoords_ByIndex(_R14, colCount, rowCount, &s0, (float *)&outT1, &t0, &dt);
    __asm { vmovss  xmm1, dword ptr [rsp+0B8h+outT1] }
    _RAX = v42;
    __asm
    {
      vmovss  xmm3, [rsp+0B8h+arg_10]
      vmovaps xmm6, [rsp+0B8h+var_58]
      vmulss  xmm0, xmm1, dword ptr [rax]
      vaddss  xmm0, xmm0, [rsp+0B8h+s0]
      vmovss  dword ptr [rax], xmm0
      vmulss  xmm1, xmm1, dword ptr [r13+0]
      vaddss  xmm0, xmm1, [rsp+0B8h+s0]
      vmovss  dword ptr [r13+0], xmm0
      vmulss  xmm0, xmm3, dword ptr [r12]
      vaddss  xmm0, xmm0, [rsp+0B8h+arg_18]
      vmovss  dword ptr [r12], xmm0
      vmulss  xmm1, xmm3, dword ptr [r15]
      vaddss  xmm0, xmm1, [rsp+0B8h+arg_18]
      vmovss  dword ptr [r15], xmm0
    }
  }
}

/*
==============
Image_Register
==============
*/
GfxImage *Image_Register(const char *imageName, ImageTrack imageTrack)
{
  return DB_FindXAssetHeader(ASSET_TYPE_IMAGE, imageName, 1).image;
}

/*
==============
Image_Release
==============
*/
void Image_Release(GfxImage *image)
{
  unsigned int v2; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 407, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 408, ASSERT_TYPE_ASSERT, "( image->textureId != GfxTextureId::NULLID )", "Attempting to release already released image '%s' or the image was never fully loaded, which indicates a bug", image->name) )
    __debugbreak();
  R_Texture_Destroy(image->textureId);
  v2 = (unsigned int)image->flags >> 6;
  image->textureId = NULLID;
  if ( (v2 & 1) != 0 && image->pixels.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 418, ASSERT_TYPE_ASSERT, "(image->pixels.streamedDataHandle.data == 0)", (const char *)&queryFormat, "image->pixels.streamedDataHandle.data == 0") )
    __debugbreak();
}

/*
==============
Image_UnAlias
==============
*/
void Image_UnAlias(GfxImage *image)
{
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 426, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( image->textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 427, ASSERT_TYPE_ASSERT, "( image->textureId != GfxTextureId::NULLID )", "Attempting to release already released image '%s' or the image was never fully loaded, which indicates a bug", image->name) )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 429, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  R_Texture_UnAlias(image->textureId);
  image->textureId = NULLID;
}

/*
==============
Load_ImagePixels
==============
*/
void Load_ImagePixels(unsigned __int8 **pixelsPtr, GfxImage *image)
{
  ;
}

/*
==============
Load_ImagePixelsRaw
==============
*/
void Load_ImagePixelsRaw(unsigned __int8 **pixelsPtr, GfxImageRaw *image)
{
  unsigned __int8 *v5; 
  int levelCount; 
  unsigned int v8; 
  __m256i v11; 
  __m256i v12; 
  GfxTexture_CreateParams params; 

  if ( !pixelsPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1533, ASSERT_TYPE_ASSERT, "(pixelsPtr)", (const char *)&queryFormat, "pixelsPtr") )
    __debugbreak();
  v5 = *pixelsPtr;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1536, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  if ( image->pixels != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1537, ASSERT_TYPE_ASSERT, "(image->pixels == pixels)", (const char *)&queryFormat, "image->pixels == pixels") )
    __debugbreak();
  levelCount = image->desc.levelCount;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v12.m256i_i64[0] = 0i64;
  __asm { vmovdqu xmmword ptr [rsp+0C8h+var_78+8], xmm0 }
  v11.m256i_i32[0] = image->desc.width;
  v11.m256i_i32[1] = image->desc.height;
  v11.m256i_i32[2] = image->desc.depth;
  v11.m256i_i32[3] = image->desc.numElements;
  v12.m256i_i32[6] = -1;
  v8 = Image_CountMipmaps(v11.m256i_u32[0], v11.m256i_u32[1], v11.m256i_u32[2]);
  __asm { vmovups ymm1, [rsp+0C8h+var_78] }
  params.pixels = v5;
  v11.m256i_i32[5] = image->desc.flags;
  if ( v8 == levelCount )
    levelCount = 0;
  v11.m256i_i32[6] = image->desc.format;
  v11.m256i_i32[4] = levelCount;
  __asm
  {
    vmovups ymm0, [rsp+0C8h+var_98]
    vmovups ymmword ptr [rsp+0C8h+params.params.width], ymm0
    vmovups ymmword ptr [rsp+0C8h+params.params.customAllocFunc], ymm1
  }
  params.name = "<raw img>";
  image->textureId = R_Texture_CreateWithTiledPixelsData(&params);
}

/*
==============
R_AddImageToList
==============
*/
void R_AddImageToList(XAssetHeader header, void *data)
{
  if ( *(_DWORD *)data >= 0x20000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 320, ASSERT_TYPE_ASSERT, "(imageList->count < ( sizeof( *array_counter( imageList->image ) ) + 0 ))", (const char *)&queryFormat, "imageList->count < ARRAY_COUNT( imageList->image )") )
    __debugbreak();
  *((XAssetHeader *)data + (unsigned int)(*(_DWORD *)data)++ + 1) = header;
}

/*
==============
R_CreateDefaultProgImage
==============
*/
GfxImage *R_CreateDefaultProgImage(R_ImageProgID progId, Image_SetupParams *params, const void *src)
{
  GfxImage *v6; 
  Image_SetupData data; 

  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1945, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( (params->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1946, ASSERT_TYPE_ASSERT, "(params.flags & IMG_DISK_FLAG_NOMIPMAPS)", (const char *)&queryFormat, "params.flags & IMG_DISK_FLAG_NOMIPMAPS") )
    __debugbreak();
  if ( (params->flags & 0x38000) != 0 && (params->flags & 0x38000) != 98304 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1947, ASSERT_TYPE_ASSERT, "(( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_2D || ( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D)", (const char *)&queryFormat, "( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_2D || ( params.flags & IMG_DISK_FLAG_MAPTYPE_MASK ) == IMG_DISK_FLAG_MAPTYPE_1D") )
    __debugbreak();
  data.data[0][0] = (const unsigned __int8 *)src;
  v6 = Image_AllocProg(progId, IMG_CATEGORY_RAW, TS_FUNCTION);
  Image_SetupWithData(v6, params, &data);
  return v6;
}

/*
==============
R_ImageList_f
==============
*/
void R_ImageList_f(void)
{
	//Failed decompiling
}

/*
==============
R_InitDefaultFogLightmapImage
==============
*/

void __fastcall R_InitDefaultFogLightmapImage(double _XMM0_8)
{
  __int64 v6; 
  __m256i v7; 
  __m256i v8; 
  Image_SetupParams params; 
  vec3_t vec; 
  vec3_t v11; 
  Image_SetupData data; 

  if ( s_defaultFogLightmapImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2065, ASSERT_TYPE_SANITY, "( !s_defaultFogLightmapImage )", (const char *)&queryFormat, "!s_defaultFogLightmapImage") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+2FFF0h+vec], xmm0
    vmovss  dword ptr [rbp+2FFF0h+vec+4], xmm0
    vmovss  dword ptr [rbp+2FFF0h+vec+8], xmm0
    vmovss  dword ptr [rbp+2FFF0h+var_30020], xmm1
    vmovss  dword ptr [rbp+2FFF0h+var_30020+4], xmm1
    vmovss  dword ptr [rbp+2FFF0h+var_30020+8], xmm1
  }
  LODWORD(v6) = Vec3PackR11G11B10F(&vec);
  HIDWORD(v6) = Vec3PackR11G11B10F(&v11);
  if ( g_R_RT_renderTargetFmts[50] != GFX_PF_R11G11B10F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2074, ASSERT_TYPE_ASSERT, "(R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_EFFECT_LIGHTING_FOG ) == GFX_PF_R11G11B10F)", (const char *)&queryFormat, "R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_EFFECT_LIGHTING_FOG ) == GFX_PF_R11G11B10F", v6) )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+300F0h+var_30098+8], xmm0
  }
  data.data[0][0] = (const unsigned __int8 *)&v6;
  *(__int64 *)((char *)&v7.m256i_i64[1] + 4) = 2i64;
  data.data[0][1] = (const unsigned __int8 *)&v6 + 4;
  v8.m256i_i32[6] = -1;
  v8.m256i_i64[0] = 0i64;
  __asm { vmovups ymm1, ymmword ptr [rsp+300F0h+var_30098] }
  v7.m256i_i32[6] = g_R_RT_renderTargetFmts[50];
  v7.m256i_i32[0] = 1;
  *(__int64 *)((char *)v7.m256i_i64 + 4) = 0x100000001i64;
  v7.m256i_i32[5] = 131075;
  __asm
  {
    vmovups ymm0, [rsp+300F0h+var_300B8]
    vmovups ymmword ptr [rbp+2FFF0h+params.width], ymm0
    vmovups ymmword ptr [rbp+2FFF0h+params.customAllocFunc], ymm1
  }
  s_defaultFogLightmapImage = Image_AllocProg(IMAGE_PROG_DEFAULT_FOG_LIGHTMAP, IMG_CATEGORY_RAW, TS_FUNCTION);
  Image_SetupWithData(s_defaultFogLightmapImage, &params, &data);
}

/*
==============
R_InitDefaultImages
==============
*/

void __fastcall R_InitDefaultImages(double _XMM0_8)
{
  _DWORD *v10; 
  __int64 v11; 
  char *v15; 
  __int64 v16; 
  int v24[4]; 
  Image_SetupParams v25; 
  Image_SetupParams v26; 
  _OWORD v27[4]; 

  if ( s_default2DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1975, ASSERT_TYPE_SANITY, "( !s_default2DImage )", (const char *)&queryFormat, "!s_default2DImage") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+10h+var_30+8], xmm0
  }
  *(_QWORD *)&v27[2] = 0i64;
  *(_QWORD *)((char *)v27 + 12) = 1i64;
  DWORD2(v27[3]) = -1;
  __asm { vmovups ymm1, [rbp+10h+var_30] }
  LODWORD(v27[0]) = 1;
  *(_QWORD *)((char *)v27 + 4) = 0x100000001i64;
  *(_QWORD *)((char *)&v27[1] + 4) = 0x600000003i64;
  __asm
  {
    vmovups ymm0, [rbp+10h+var_50]
    vmovups [rsp+110h+var_D0], ymm0
    vmovups [rsp+110h+var_B0], ymm1
  }
  v24[0] = 0;
  s_default2DImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_2D, &v25, v24);
  if ( s_default1DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1962, ASSERT_TYPE_SANITY, "( !s_default1DImage )", (const char *)&queryFormat, "!s_default1DImage") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+var_B0+8], xmm0
  }
  v25.height = 1;
  v25.depth = 1;
  *(_QWORD *)&v25.numElements = 1i64;
  v25.customAllocFunc = NULL;
  v25.textureLayoutOverride = -1;
  __asm { vmovups ymm1, [rsp+110h+var_B0] }
  v25.width = 4;
  v25.flags = IMG_DISK_FLAG_MAPTYPE_1D|IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v25.format = GFX_PF_R8G8B8A8;
  __asm
  {
    vmovups ymm0, [rsp+110h+var_D0]
    vmovups [rbp+10h+var_90], ymm0
    vmovups [rbp+10h+var_70], ymm1
  }
  v27[0] = 0ui64;
  s_default1DImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_1D, &v26, v27);
  if ( s_defaultUIntImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1988, ASSERT_TYPE_SANITY, "( !s_defaultUIntImage )", (const char *)&queryFormat, "!s_defaultUIntImage") )
    __debugbreak();
  v25.depth = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+var_B0+8], xmm0
  }
  *(_QWORD *)&v25.numElements = 1i64;
  v25.customAllocFunc = NULL;
  v25.textureLayoutOverride = -1;
  __asm { vmovups ymm1, [rsp+110h+var_B0] }
  v25.width = 4;
  v25.height = 4;
  v25.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v25.format = GFX_PF_R32_UINT;
  __asm
  {
    vmovups ymm0, [rsp+110h+var_D0]
    vmovups [rbp+10h+var_90], ymm0
    vmovups [rbp+10h+var_70], ymm1
  }
  memset(v27, 0, sizeof(v27));
  s_defaultUIntImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_UINT, &v26, v27);
  if ( s_defaultVelocityImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2002, ASSERT_TYPE_SANITY, "( !s_defaultVelocityImage )", (const char *)&queryFormat, "!s_defaultVelocityImage") )
    __debugbreak();
  v10 = (_DWORD *)v27 + 2;
  v11 = 4i64;
  do
  {
    *(v10 - 2) = -136315905;
    *(v10 - 1) = -136315905;
    *v10 = -136315905;
    v10[1] = -136315905;
    v10 += 4;
    --v11;
  }
  while ( v11 );
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+var_B0+8], xmm0
  }
  v25.format = g_R_RT_renderTargetFmts[35];
  v25.depth = 1;
  *(_QWORD *)&v25.numElements = 1i64;
  v25.customAllocFunc = NULL;
  v25.textureLayoutOverride = -1;
  __asm { vmovups ymm1, [rsp+110h+var_B0] }
  v25.width = 4;
  v25.height = 4;
  v25.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  __asm
  {
    vmovups ymm0, [rsp+110h+var_D0]
    vmovups [rbp+10h+var_90], ymm0
    vmovups [rbp+10h+var_70], ymm1
  }
  s_defaultVelocityImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_VELOCITY, &v26, v27);
  if ( s_defaultGtaoImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2027, ASSERT_TYPE_SANITY, "( !s_defaultGtaoImage )", (const char *)&queryFormat, "!s_defaultGtaoImage") )
    __debugbreak();
  v15 = (char *)v27 + 3;
  v16 = 4i64;
  do
  {
    *(_DWORD *)(v15 - 3) = 8913032;
    *(_DWORD *)(v15 + 1) = 8913032;
    v15 += 8;
    --v16;
  }
  while ( v16 );
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+var_B0+8], xmm0
  }
  v25.format = g_R_RT_renderTargetFmts[39];
  v25.depth = 1;
  *(_QWORD *)&v25.numElements = 1i64;
  v25.customAllocFunc = NULL;
  v25.textureLayoutOverride = -1;
  __asm { vmovups ymm1, [rsp+110h+var_B0] }
  v25.width = 4;
  v25.height = 4;
  v25.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  __asm
  {
    vmovups ymm0, [rsp+110h+var_D0]
    vmovups [rbp+10h+var_90], ymm0
    vmovups [rbp+10h+var_70], ymm1
  }
  s_defaultGtaoImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_GTAO, &v26, v27);
  if ( s_defaultWaveWaterFloatZImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2050, ASSERT_TYPE_SANITY, "( !s_defaultWaveWaterFloatZImage )", (const char *)&queryFormat, "!s_defaultWaveWaterFloatZImage") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@4cbbc130
    vmovss  [rsp+110h+var_E0], xmm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+var_B0+8], xmm0
  }
  v25.format = g_R_RT_renderTargetFmts[41];
  v25.depth = 1;
  *(_QWORD *)&v25.numElements = 1i64;
  v25.customAllocFunc = NULL;
  v25.textureLayoutOverride = -1;
  __asm { vmovups ymm1, [rsp+110h+var_B0] }
  v25.width = 1;
  v25.height = 1;
  v25.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  __asm
  {
    vmovups ymm0, [rsp+110h+var_D0]
    vmovups [rbp+10h+var_90], ymm0
    vmovups [rbp+10h+var_70], ymm1
  }
  s_defaultWaveWaterFloatZImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_WAVE_WATER_FLOATZ, &v26, v24);
  R_InitDefaultFogLightmapImage(*(double *)&_XMM0);
}

/*
==============
R_InitImages
==============
*/

void __fastcall R_InitImages(double _XMM0_8)
{
  R_InitDefaultImages(_XMM0_8);
}

/*
==============
R_RegisterCodeImages
==============
*/
void R_RegisterCodeImages(void)
{
  rgp.whiteImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$white", 1).image;
  if ( !rgp.whiteImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2147, ASSERT_TYPE_SANITY, "( rgp.whiteImage )", (const char *)&queryFormat, "rgp.whiteImage") )
    __debugbreak();
  rgp.whiteUintImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$white_uint", 1).image;
  if ( !rgp.whiteUintImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2150, ASSERT_TYPE_SANITY, "( rgp.whiteUintImage )", (const char *)&queryFormat, "rgp.whiteUintImage") )
    __debugbreak();
  rgp.blackImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$black", 1).image;
  if ( !rgp.blackImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2153, ASSERT_TYPE_SANITY, "( rgp.blackImage )", (const char *)&queryFormat, "rgp.blackImage") )
    __debugbreak();
  rgp.zeroImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$zero", 1).image;
  if ( !rgp.zeroImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2156, ASSERT_TYPE_SANITY, "( rgp.zeroImage )", (const char *)&queryFormat, "rgp.zeroImage") )
    __debugbreak();
  rgp.zero1DImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$zero_1d", 1).image;
  if ( !rgp.zero1DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2159, ASSERT_TYPE_SANITY, "( rgp.zero1DImage )", (const char *)&queryFormat, "rgp.zero1DImage") )
    __debugbreak();
  rgp.defaultVelocityImage = s_defaultVelocityImage;
  if ( !s_defaultVelocityImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2163, ASSERT_TYPE_SANITY, "( rgp.defaultVelocityImage )", (const char *)&queryFormat, "rgp.defaultVelocityImage") )
    __debugbreak();
  rgp.defaultGtaoImage = s_defaultGtaoImage;
  if ( !s_defaultGtaoImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2168, ASSERT_TYPE_SANITY, "( rgp.defaultGtaoImage )", (const char *)&queryFormat, "rgp.defaultGtaoImage") )
    __debugbreak();
  rgp.defaultWaveWaterFloatZImage = s_defaultWaveWaterFloatZImage;
  if ( !s_defaultWaveWaterFloatZImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2173, ASSERT_TYPE_SANITY, "( rgp.defaultWaveWaterFloatZImage )", (const char *)&queryFormat, "rgp.defaultWaveWaterFloatZImage") )
    __debugbreak();
  rgp.defaultFogLightmapImage = s_defaultFogLightmapImage;
  if ( !s_defaultFogLightmapImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2177, ASSERT_TYPE_SANITY, "( rgp.defaultFogLightmapImage )", (const char *)&queryFormat, "rgp.defaultFogLightmapImage") )
    __debugbreak();
  rgp.blackImage3D = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$black_3d", 1).image;
  if ( !rgp.blackImage3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2180, ASSERT_TYPE_SANITY, "( rgp.blackImage3D )", (const char *)&queryFormat, "rgp.blackImage3D") )
    __debugbreak();
  rgp.blackShadowImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$blackshadow", 1).image;
  if ( !rgp.blackShadowImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2183, ASSERT_TYPE_SANITY, "( rgp.blackShadowImage )", (const char *)&queryFormat, "rgp.blackShadowImage") )
    __debugbreak();
  rgp.blackUintImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$black_uint", 1).image;
  if ( !rgp.blackUintImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2186, ASSERT_TYPE_SANITY, "( rgp.blackUintImage )", (const char *)&queryFormat, "rgp.blackUintImage") )
    __debugbreak();
  rgp.whiteImage3D = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$white_3d", 1).image;
  if ( !rgp.whiteImage3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2189, ASSERT_TYPE_SANITY, "( rgp.whiteImage3D )", (const char *)&queryFormat, "rgp.whiteImage3D") )
    __debugbreak();
  rgp.blackImageCube = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$black_cube", 1).image;
  if ( !rgp.blackImageCube && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2192, ASSERT_TYPE_SANITY, "( rgp.blackImageCube )", (const char *)&queryFormat, "rgp.blackImageCube") )
    __debugbreak();
  rgp.grayImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "$gray", 1).image;
  if ( !rgp.grayImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2195, ASSERT_TYPE_SANITY, "( rgp.grayImage )", (const char *)&queryFormat, "rgp.grayImage") )
    __debugbreak();
  rgp.umbraOcclusionScene = R_Umbra_GetUmbraOcclusionSceneImage();
  rgp.cloudNoiseImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "cloud_shadows", 1).image;
  rgp.hgPhaseFunction = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "hg_lut", 1).image;
  rgp.digitalDistortionImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "digital_distort_map", 1).image;
  rgp.watersheetingDistortionImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "vfx_distort_watersheeting", 1).image;
  rgp.ggxEnvBrdf = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "ggx_env_brdf_lut", 1).image;
  rgp.ggxSgLut = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "ggx_sg_lut", 1).image;
  rgp.gtso = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "gtso_lut", 1).image;
  rgp.fontCacheImage = FontCache_GetImage();
  if ( !rgp.fontCacheImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2217, ASSERT_TYPE_ASSERT, "(rgp.fontCacheImage)", (const char *)&queryFormat, "rgp.fontCacheImage") )
    __debugbreak();
  rgp.mdaoOcclusionLut = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "mdao_occlusion_lut", 1).image;
  rgp.smaaTexImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "smaa_area_tex", 1).image;
  rgp.blueNoiseImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "blue_noise", 1).image;
  rgp.physPerfRaycastImage = PhysPerfRaycast_GetImage();
  rgp.default1DImage = s_default1DImage;
  if ( !s_default1DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2237, ASSERT_TYPE_SANITY, "( rgp.default1DImage )", (const char *)&queryFormat, "rgp.default1DImage") )
    __debugbreak();
  rgp.default2DImage = s_default2DImage;
  if ( !s_default2DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2240, ASSERT_TYPE_SANITY, "( rgp.default2DImage )", (const char *)&queryFormat, "rgp.default2DImage") )
    __debugbreak();
  rgp.defaultUIntImage = s_defaultUIntImage;
  if ( !s_defaultUIntImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2243, ASSERT_TYPE_SANITY, "( rgp.defaultUIntImage )", (const char *)&queryFormat, "rgp.defaultUIntImage") )
    __debugbreak();
  rgp.refImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "ref_image", 1).image;
  rgp.shimmerEffectImage = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "shimmer_effect_image", 1).image;
  rgp.animatedLoadImageDefault = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "icon_spinner", 1).image;
  rgp.animatedLoadImageF2P = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "spinner_wz", 1).image;
  rgp.animatedLoadImagePremium = DB_FindXAssetHeader(ASSET_TYPE_IMAGE, "spinner_mw", 1).image;
}

/*
==============
R_ShutdownDefaultImages
==============
*/
void R_ShutdownDefaultImages()
{
  if ( !s_default2DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2108, ASSERT_TYPE_SANITY, "( s_default2DImage )", (const char *)&queryFormat, "s_default2DImage") )
    __debugbreak();
  Image_Release(s_default2DImage);
  s_default2DImage = NULL;
  if ( !s_defaultUIntImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2112, ASSERT_TYPE_SANITY, "( s_defaultUIntImage )", (const char *)&queryFormat, "s_defaultUIntImage") )
    __debugbreak();
  Image_Release(s_defaultUIntImage);
  s_defaultUIntImage = NULL;
  if ( !s_default1DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2116, ASSERT_TYPE_SANITY, "( s_default1DImage )", (const char *)&queryFormat, "s_default1DImage") )
    __debugbreak();
  Image_Release(s_default1DImage);
  s_default1DImage = NULL;
  if ( !s_defaultVelocityImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2121, ASSERT_TYPE_SANITY, "( s_defaultVelocityImage )", (const char *)&queryFormat, "s_defaultVelocityImage") )
    __debugbreak();
  Image_Release(s_defaultVelocityImage);
  s_defaultVelocityImage = NULL;
  if ( !s_defaultGtaoImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2127, ASSERT_TYPE_SANITY, "( s_defaultGtaoImage )", (const char *)&queryFormat, "s_defaultGtaoImage") )
    __debugbreak();
  Image_Release(s_defaultGtaoImage);
  s_defaultGtaoImage = NULL;
  if ( !s_defaultWaveWaterFloatZImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2133, ASSERT_TYPE_SANITY, "( s_defaultWaveWaterFloatZImage )", (const char *)&queryFormat, "s_defaultWaveWaterFloatZImage") )
    __debugbreak();
  Image_Release(s_defaultWaveWaterFloatZImage);
  s_defaultWaveWaterFloatZImage = NULL;
  if ( !s_defaultFogLightmapImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2138, ASSERT_TYPE_SANITY, "( s_defaultFogLightmapImage )", (const char *)&queryFormat, "s_defaultFogLightmapImage") )
    __debugbreak();
  Image_Release(s_defaultFogLightmapImage);
  s_defaultFogLightmapImage = NULL;
}

/*
==============
R_ShutdownImages
==============
*/

void R_ShutdownImages(void)
{
  R_ShutdownDefaultImages();
}

/*
==============
R_SumOfUsedImages
==============
*/
void R_SumOfUsedImages(Image_MemUsage *)
{
	//Failed decompiling
}

/*
==============
imagecompare
==============
*/
_BOOL8 imagecompare(const GfxImage *image1, const GfxImage *image2)
{
  return image1->totalSize < image2->totalSize;
}

