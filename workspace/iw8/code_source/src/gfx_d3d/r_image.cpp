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
  __m256i v4; 
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(__m256i *)&viewDesc.Shader4ComponentMapping = v4;
    viewDesc.Format = TypelessFormat;
    viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE1D;
    v24 = Image_ShaderComponentMapping(v22);
    basemap = texture->basemap;
    _XMM0 = 0i64;
    viewDesc.Shader4ComponentMapping = v24;
    viewDesc.Texture1D.ResourceMinLODClamp = 0.0;
    viewDesc.Buffer.FirstElement = mostDetailedMip | 0xFFFFFFFF00000000ui64;
    R_HW_CreateShaderResourceView(basemap, &viewDesc, &texture->shaderView);
  }
  if ( (textureParams->params.flags & 0x800000) != 0 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_QWORD *)&viewDesc.TextureCubeArray.NumCubes = 0i64;
    v27 = texture->basemap;
    *(_OWORD *)(&viewDesc.Shader4ComponentMapping + 1) = _XMM0;
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
  unsigned int v7; 
  unsigned int maxLevelCount; 
  int width; 
  unsigned __int16 v10; 
  unsigned int numElements; 
  unsigned int ArraySize; 
  unsigned __int16 v13; 
  GfxPixelFormat format; 
  GfxImageFlags flags; 
  D3D12_TEXTURE_LAYOUT LayoutMode; 
  bool v17; 
  const unsigned __int8 *pixels; 
  const char *name; 
  int v20; 
  HRESULT v21; 
  const char *v22; 
  ID3D12DeviceChild *v23; 
  GfxPixelFormat v24; 
  DXGI_FORMAT DXGIFormatForPixelFormat; 
  GfxPixelFormat v26; 
  unsigned int v27; 
  unsigned int v28; 
  GfxPixelFormat v29; 
  __int64 v30; 
  D3D12_SHADER_RESOURCE_VIEW_DESC viewDesc; 
  ID3D12DeviceChild *resource; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int64 BCValidatedDimension; 
  int v37; 
  unsigned __int16 v38; 
  unsigned __int16 v39; 
  DXGI_FORMAT TypelessFormat; 
  __int64 v41; 
  D3D12_TEXTURE_LAYOUT v42; 
  int v43; 
  int v44; 

  MapTypeFromImageFlags = Image_GetMapTypeFromImageFlags(textureParams->params.flags);
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
  if ( !texture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1297, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  if ( texture->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1298, ASSERT_TYPE_ASSERT, "(!texture->basemap)", (const char *)&queryFormat, "!texture->basemap") )
    __debugbreak();
  if ( textureParams->params.depth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1299, ASSERT_TYPE_ASSERT, "(imageParams.depth == 1)", (const char *)&queryFormat, "imageParams.depth == 1") )
    __debugbreak();
  if ( (MapTypeFromImageFlags & 0xFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1300, ASSERT_TYPE_ASSERT, "(mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY)", (const char *)&queryFormat, "mapType == MAPTYPE_2D || mapType == MAPTYPE_CUBE || mapType == MAPTYPE_ARRAY || mapType == MAPTYPE_CUBE_ARRAY") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1301, ASSERT_TYPE_ASSERT, "(mipLevelCount > 0)", (const char *)&queryFormat, "mipLevelCount > 0") )
    __debugbreak();
  if ( mostDetailedMip >= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1302, ASSERT_TYPE_ASSERT, "( mostDetailedMip ) < ( mipLevelCount )", "%s < %s\n\t%u, %u", "mostDetailedMip", "mipLevelCount", mostDetailedMip, v7) )
    __debugbreak();
  if ( !textureParams->pixels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1303, ASSERT_TYPE_ASSERT, "(textureParams.pixels)", (const char *)&queryFormat, "textureParams.pixels") )
    __debugbreak();
  width = textureParams->params.width;
  v34 = 0i64;
  v35 = 0;
  v44 = 0;
  v33 = 3;
  BCValidatedDimension = Image_GetBCValidatedDimension(&textureParams->params, width);
  v37 = Image_GetBCValidatedDimension(&textureParams->params, textureParams->params.height);
  v10 = truncate_cast<unsigned short,unsigned int>(v7);
  numElements = textureParams->params.numElements;
  v39 = v10;
  ArraySize = Image_GetArraySize(MapTypeFromImageFlags, numElements);
  v13 = truncate_cast<unsigned short,unsigned int>(ArraySize);
  format = textureParams->params.format;
  flags = textureParams->params.flags;
  v38 = v13;
  v41 = 1i64;
  TypelessFormat = Image_ConditionallyMakeTypelessFormat(flags, format);
  LayoutMode = Image_GetLayoutMode(&textureParams->params);
  v17 = (textureParams->params.flags & 0x800000) == 0;
  pixels = textureParams->pixels;
  name = textureParams->name;
  v42 = LayoutMode;
  v20 = 0;
  if ( !v17 )
    v20 = 4;
  v43 = v20;
  v21 = ((__int64 (__fastcall *)(ID3D12Device *, const unsigned __int8 *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, pixels, &v33, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v21 < 0 )
  {
    v22 = R_ErrorDescription(v21);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v22);
  }
  PIXSetDebugName(resource, name);
  v23 = resource;
  texture->basemap = (ID3D12Resource *)resource;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1326, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
    __debugbreak();
  if ( (textureParams->params.flags & 0x20000000) == 0 )
  {
    v24 = textureParams->params.format;
    memset(&viewDesc, 0, sizeof(viewDesc));
    DXGIFormatForPixelFormat = R_D3D_GetDXGIFormatForPixelFormat(v24);
    v26 = textureParams->params.format;
    viewDesc.Format = DXGIFormatForPixelFormat;
    viewDesc.Shader4ComponentMapping = Image_ShaderComponentMapping(v26);
    if ( MapTypeFromImageFlags )
    {
      switch ( MapTypeFromImageFlags )
      {
        case MAPTYPE_CUBE:
          viewDesc.Texture1D.ResourceMinLODClamp = 0.0;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBE;
          break;
        case MAPTYPE_ARRAY:
          v28 = textureParams->params.numElements;
          viewDesc.Texture2DArray.ResourceMinLODClamp = 0.0;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
          viewDesc.Buffer.NumElements = 0;
          viewDesc.Buffer.StructureByteStride = v28;
          break;
        case MAPTYPE_CUBE_ARRAY:
          v27 = textureParams->params.numElements;
          viewDesc.Texture1DArray.ResourceMinLODClamp = 0.0;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBEARRAY;
          viewDesc.Buffer.NumElements = 0;
          viewDesc.Buffer.StructureByteStride = v27;
          break;
        default:
          LODWORD(v30) = (unsigned __int8)MapTypeFromImageFlags;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported map type %d", v30) )
            __debugbreak();
          goto LABEL_48;
      }
    }
    else
    {
      viewDesc.Texture2D.ResourceMinLODClamp = 0.0;
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
      v29 = textureParams->params.format;
      memset(&viewDesc, 0, sizeof(viewDesc));
      viewDesc.Format = R_D3D_GetDXGIFormatForPixelFormat(v29);
      if ( MapTypeFromImageFlags )
      {
        if ( MapTypeFromImageFlags == MAPTYPE_ARRAY )
        {
          viewDesc.Texture1D.MostDetailedMip = textureParams->params.numElements;
          viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
        }
        else
        {
          LODWORD(v30) = (unsigned __int8)MapTypeFromImageFlags;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1405, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported map type %d", v30) )
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
    _XMM0 = 0i64;
    viewDesc.Shader4ComponentMapping = Image_ShaderComponentMapping(v22);
    viewDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
    viewDesc.Buffer.FirstElement = mostDetailedMip | 0xFFFFFFFF00000000ui64;
    viewDesc.Texture1D.ResourceMinLODClamp = 0.0;
    R_HW_CreateShaderResourceView(v21, &viewDesc, &texture->shaderView);
  }
  if ( (textureParams->params.flags & 0x800000) != 0 )
  {
    viewDesc.Format = TypelessFormat;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    viewDesc.Texture1D.MostDetailedMip = textureParams->params.depth;
    *(_OWORD *)&viewDesc.Texture2D.MipLevels = _XMM0;
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
  float *v8; 
  unsigned __int8 colCount; 
  unsigned __int8 rowCount; 
  float integer; 
  unsigned int textureAtlasTime; 
  unsigned int v13; 
  float v14; 
  unsigned int v15; 
  float v16; 
  unsigned int v17; 
  float v18; 
  float v19; 
  float s0; 
  float *v21; 
  float dt; 
  float t0; 

  v21 = outS0;
  if ( !outS0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2473, ASSERT_TYPE_ASSERT, "(outS0)", (const char *)&queryFormat, "outS0") )
    __debugbreak();
  if ( !outS1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2474, ASSERT_TYPE_ASSERT, "(outS1)", (const char *)&queryFormat, "outS1") )
    __debugbreak();
  if ( !outT0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2475, ASSERT_TYPE_ASSERT, "(outT0)", (const char *)&queryFormat, "outT0") )
    __debugbreak();
  v8 = outT1;
  if ( !outT1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2476, ASSERT_TYPE_ASSERT, "(outT1)", (const char *)&queryFormat, "outT1") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2478, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  colCount = image->atlasInfo.atlasSize.colCount;
  rowCount = image->atlasInfo.atlasSize.rowCount;
  if ( colCount > 1u || rowCount > 1u )
  {
    if ( image->semantic || (integer = image->semanticSpecific.atlasFps, integer == 0.0) )
      integer = (float)r_atlasAnimFPS->current.integer;
    if ( integer <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2487, ASSERT_TYPE_ASSERT, "(fps > 0.f)", (const char *)&queryFormat, "fps > 0.f") )
      __debugbreak();
    textureAtlasTime = rg.textureAtlasTime;
    v13 = colCount * rowCount;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2497, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
      __debugbreak();
    v14 = (float)(1000 * v13);
    v15 = (int)(float)(v14 / integer);
    v16 = (float)(textureAtlasTime % v15);
    v17 = (int)(float)((float)(v16 * integer) * 0.001);
    if ( v17 >= v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2502, ASSERT_TYPE_ASSERT, "(( frame < frameCount ))", "%s\n\tframe:%i  ms:%i  fps:%f  fc:%i  msTtP:%i  msSLB:%i\n", "( frame < frameCount )", (int)(float)((float)(v16 * integer) * 0.001), textureAtlasTime, integer, colCount * rowCount, (int)(float)(v14 / integer), textureAtlasTime % v15) )
      __debugbreak();
    TextureAtlas_GetCoords_ByIndex(v17, colCount, rowCount, &s0, (float *)&outT1, &t0, &dt);
    v18 = *(float *)&outT1;
    v19 = dt;
    *v21 = (float)(*(float *)&outT1 * *v21) + s0;
    *outS1 = (float)(v18 * *outS1) + s0;
    *outT0 = (float)(v19 * *outT0) + t0;
    *v8 = (float)(v19 * *v8) + t0;
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
  __m256i v8; 
  __m256i v9; 
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
  v9.m256i_i64[0] = 0i64;
  *(_OWORD *)&v9.m256i_u64[1] = _XMM0;
  v8.m256i_i32[0] = image->desc.width;
  v8.m256i_i32[1] = image->desc.height;
  v8.m256i_i32[2] = image->desc.depth;
  v8.m256i_i32[3] = image->desc.numElements;
  v9.m256i_i32[6] = -1;
  params.pixels = v5;
  if ( Image_CountMipmaps(v8.m256i_u32[0], v8.m256i_u32[1], v8.m256i_u32[2]) == levelCount )
    levelCount = 0;
  v8.m256i_i32[6] = image->desc.format;
  v8.m256i_i32[4] = levelCount;
  v8.m256i_i32[5] = image->desc.flags;
  *(__m256i *)&params.params.width = v8;
  *(__m256i *)&params.params.customAllocFunc = v9;
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
void R_InitDefaultFogLightmapImage()
{
  __int64 v2; 
  __m256i v3; 
  __m256i v4; 
  Image_SetupParams params; 
  vec3_t vec; 
  vec3_t v7; 
  Image_SetupData data; 

  if ( s_defaultFogLightmapImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2065, ASSERT_TYPE_SANITY, "( !s_defaultFogLightmapImage )", (const char *)&queryFormat, "!s_defaultFogLightmapImage") )
    __debugbreak();
  _XMM0 = 0i64;
  vec.v[0] = 0.0;
  vec.v[1] = 0.0;
  vec.v[2] = 0.0;
  v7.v[0] = FLOAT_1_0;
  v7.v[1] = FLOAT_1_0;
  v7.v[2] = FLOAT_1_0;
  LODWORD(v2) = Vec3PackR11G11B10F(&vec);
  HIDWORD(v2) = Vec3PackR11G11B10F(&v7);
  if ( g_R_RT_renderTargetFmts[50] != GFX_PF_R11G11B10F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2074, ASSERT_TYPE_ASSERT, "(R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_EFFECT_LIGHTING_FOG ) == GFX_PF_R11G11B10F)", (const char *)&queryFormat, "R_RT_PixelFormatFromRenderTargetFormat( GFX_RENDERTARGET_FORMAT_EFFECT_LIGHTING_FOG ) == GFX_PF_R11G11B10F", v2) )
    __debugbreak();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v4.m256i_u64[1] = _XMM0;
  data.data[0][0] = (const unsigned __int8 *)&v2;
  *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 2i64;
  data.data[0][1] = (const unsigned __int8 *)&v2 + 4;
  v4.m256i_i32[6] = -1;
  v4.m256i_i64[0] = 0i64;
  v3.m256i_i32[6] = g_R_RT_renderTargetFmts[50];
  v3.m256i_i32[0] = 1;
  *(__int64 *)((char *)v3.m256i_i64 + 4) = 0x100000001i64;
  v3.m256i_i32[5] = 131075;
  *(__m256i *)&params.width = v3;
  *(__m256i *)&params.customAllocFunc = v4;
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
  int *p_depth; 
  __int64 v5; 
  char *v7; 
  __int64 v8; 
  int v12[4]; 
  Image_SetupParams v13; 
  Image_SetupParams v14; 
  Image_SetupParams v15; 

  if ( s_default2DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1975, ASSERT_TYPE_SANITY, "( !s_default2DImage )", (const char *)&queryFormat, "!s_default2DImage") )
    __debugbreak();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v15.customAllocUserData = _XMM0;
  v15.customAllocFunc = NULL;
  *(_QWORD *)&v15.numElements = 1i64;
  v15.textureLayoutOverride = -1;
  v15.width = 1;
  *(_QWORD *)&v15.height = 0x100000001i64;
  *(_QWORD *)&v15.flags = 0x600000003i64;
  v13 = v15;
  v12[0] = 0;
  s_default2DImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_2D, &v13, v12);
  if ( s_default1DImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1962, ASSERT_TYPE_SANITY, "( !s_default1DImage )", (const char *)&queryFormat, "!s_default1DImage") )
    __debugbreak();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.customAllocUserData = _XMM0;
  v13.height = 1;
  v13.depth = 1;
  *(_QWORD *)&v13.numElements = 1i64;
  v13.customAllocFunc = NULL;
  v13.textureLayoutOverride = -1;
  v13.width = 4;
  v13.flags = IMG_DISK_FLAG_MAPTYPE_1D|IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v13.format = GFX_PF_R8G8B8A8;
  v14 = v13;
  *(_OWORD *)&v15.width = 0ui64;
  s_default1DImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_1D, &v14, &v15);
  if ( s_defaultUIntImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 1988, ASSERT_TYPE_SANITY, "( !s_defaultUIntImage )", (const char *)&queryFormat, "!s_defaultUIntImage") )
    __debugbreak();
  v13.depth = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.customAllocUserData = _XMM0;
  *(_QWORD *)&v13.numElements = 1i64;
  v13.customAllocFunc = NULL;
  v13.textureLayoutOverride = -1;
  v13.width = 4;
  v13.height = 4;
  v13.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v13.format = GFX_PF_R32_UINT;
  v14 = v13;
  memset(&v15, 0, sizeof(v15));
  s_defaultUIntImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_UINT, &v14, &v15);
  if ( s_defaultVelocityImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2002, ASSERT_TYPE_SANITY, "( !s_defaultVelocityImage )", (const char *)&queryFormat, "!s_defaultVelocityImage") )
    __debugbreak();
  p_depth = &v15.depth;
  v5 = 4i64;
  do
  {
    *(p_depth - 2) = -136315905;
    *(p_depth - 1) = -136315905;
    *p_depth = -136315905;
    p_depth[1] = -136315905;
    p_depth += 4;
    --v5;
  }
  while ( v5 );
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.customAllocUserData = _XMM0;
  v13.format = g_R_RT_renderTargetFmts[35];
  v13.depth = 1;
  *(_QWORD *)&v13.numElements = 1i64;
  v13.customAllocFunc = NULL;
  v13.textureLayoutOverride = -1;
  v13.width = 4;
  v13.height = 4;
  v13.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v14 = v13;
  s_defaultVelocityImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_VELOCITY, &v14, &v15);
  if ( s_defaultGtaoImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2027, ASSERT_TYPE_SANITY, "( !s_defaultGtaoImage )", (const char *)&queryFormat, "!s_defaultGtaoImage") )
    __debugbreak();
  v7 = (char *)&v15.width + 3;
  v8 = 4i64;
  do
  {
    *(_DWORD *)(v7 - 3) = 8913032;
    *(_DWORD *)(v7 + 1) = 8913032;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.customAllocUserData = _XMM0;
  v13.format = g_R_RT_renderTargetFmts[39];
  v13.depth = 1;
  *(_QWORD *)&v13.numElements = 1i64;
  v13.customAllocFunc = NULL;
  v13.textureLayoutOverride = -1;
  v13.width = 4;
  v13.height = 4;
  v13.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v14 = v13;
  s_defaultGtaoImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_GTAO, &v14, &v15);
  if ( s_defaultWaveWaterFloatZImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image.cpp", 2050, ASSERT_TYPE_SANITY, "( !s_defaultWaveWaterFloatZImage )", (const char *)&queryFormat, "!s_defaultWaveWaterFloatZImage") )
    __debugbreak();
  _XMM0 = LODWORD(FLOAT_9_8437504e7);
  *(float *)v12 = FLOAT_9_8437504e7;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.customAllocUserData = _XMM0;
  v13.format = g_R_RT_renderTargetFmts[41];
  v13.depth = 1;
  *(_QWORD *)&v13.numElements = 1i64;
  v13.customAllocFunc = NULL;
  v13.textureLayoutOverride = -1;
  v13.width = 1;
  v13.height = 1;
  v13.flags = IMG_DISK_FLAG_NOMIPMAPS|IMG_DISK_FLAG_NOPICMIP;
  v14 = v13;
  s_defaultWaveWaterFloatZImage = R_CreateDefaultProgImage(IMAGE_PROG_DEFAULT_WAVE_WATER_FLOATZ, &v14, v12);
  R_InitDefaultFogLightmapImage();
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

