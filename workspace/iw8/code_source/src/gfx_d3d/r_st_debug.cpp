/*
==============
R_ST_LoadedMeshGeoDebugInfoForSurface
==============
*/

void __fastcall R_ST_LoadedMeshGeoDebugInfoForSurface(const StTerrainGrid *grid, StLoadedMeshGeoDebugInfo *loadedMeshGeoInfo)
{
  ?R_ST_LoadedMeshGeoDebugInfoForSurface@@YAXAEBUStTerrainGrid@@AEAUStLoadedMeshGeoDebugInfo@@@Z(grid, loadedMeshGeoInfo);
}

/*
==============
R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage()
{
  return ?R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage@@YAIXZ();
}

/*
==============
R_ST_DebugGetLightmapDensityStatsUnitPerPixel
==============
*/

void __fastcall R_ST_DebugGetLightmapDensityStatsUnitPerPixel(float *outMin, float *outMax, float *outAvg)
{
  ?R_ST_DebugGetLightmapDensityStatsUnitPerPixel@@YAXAEAM00@Z(outMin, outMax, outAvg);
}

/*
==============
R_ST_GetSurfaceCount
==============
*/

unsigned int __fastcall R_ST_GetSurfaceCount()
{
  return ?R_ST_GetSurfaceCount@@YAIXZ();
}

/*
==============
R_ST_DebugGetMaxPopulatedFlattenedImageInfoString
==============
*/

void __fastcall R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(char *text, const unsigned int maxLen)
{
  ?R_ST_DebugGetMaxPopulatedFlattenedImageInfoString@@YAXPEADI@Z(text, maxLen);
}

/*
==============
R_ST_DebugGetTotalStreamedMeshGeoMemory
==============
*/

void __fastcall R_ST_DebugGetTotalStreamedMeshGeoMemory(unsigned int *outTotalMemory, unsigned int *outTotalNodesStreamed)
{
  ?R_ST_DebugGetTotalStreamedMeshGeoMemory@@YAXAEAI0@Z(outTotalMemory, outTotalNodesStreamed);
}

/*
==============
R_ST_DebugGetMaxPopulatedCombinedMapInfoString
==============
*/

void __fastcall R_ST_DebugGetMaxPopulatedCombinedMapInfoString(char *text, const unsigned int maxLen)
{
  ?R_ST_DebugGetMaxPopulatedCombinedMapInfoString@@YAXPEADI@Z(text, maxLen);
}

/*
==============
R_ST_DebugGetFlattenedImageCount
==============
*/

unsigned int __fastcall R_ST_DebugGetFlattenedImageCount()
{
  return ?R_ST_DebugGetFlattenedImageCount@@YAIXZ();
}

/*
==============
R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage()
{
  return ?R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage@@YAIXZ();
}

/*
==============
R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString
==============
*/

void __fastcall R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString(char *text, const unsigned int maxLen)
{
  ?R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString@@YAXPEADI@Z(text, maxLen);
}

/*
==============
R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage()
{
  return ?R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage@@YAIXZ();
}

/*
==============
R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage()
{
  return ?R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage@@YAIXZ();
}

/*
==============
R_ST_DebugGetHeightmapPixelSizeStats
==============
*/

void __fastcall R_ST_DebugGetHeightmapPixelSizeStats(unsigned int *outMin, unsigned int *outMax, unsigned int *outAvg)
{
  ?R_ST_DebugGetHeightmapPixelSizeStats@@YAXAEAI00@Z(outMin, outMax, outAvg);
}

/*
==============
R_ST_DebugGetTotalRenderedMeshGeoMemory
==============
*/

void __fastcall R_ST_DebugGetTotalRenderedMeshGeoMemory(const vec3_t *dpvsCamPos, unsigned int *totalMemory, unsigned int *totalIdealNodesRendered, unsigned int *totalNodesMissing)
{
  ?R_ST_DebugGetTotalRenderedMeshGeoMemory@@YAXAEBTvec3_t@@AEAI11@Z(dpvsCamPos, totalMemory, totalIdealNodesRendered, totalNodesMissing);
}

/*
==============
R_ST_DebugGetRenderedMeshGeoOverlayHeader
==============
*/

const char *__fastcall R_ST_DebugGetRenderedMeshGeoOverlayHeader(unsigned int *lenOut)
{
  return ?R_ST_DebugGetRenderedMeshGeoOverlayHeader@@YAPEBDAEAI@Z(lenOut);
}

/*
==============
R_ST_DebugPopulateFlattenedImageInfoString
==============
*/

void __fastcall R_ST_DebugPopulateFlattenedImageInfoString(const unsigned int imageIndex, char *string, unsigned int stringLength)
{
  ?R_ST_DebugPopulateFlattenedImageInfoString@@YAXIPEADI@Z(imageIndex, string, stringLength);
}

/*
==============
R_ST_DebugGetSurfaceRenderingAvailabilityStats
==============
*/

bool __fastcall R_ST_DebugGetSurfaceRenderingAvailabilityStats(unsigned int *surfaceWarns, unsigned int *surfaceErrors, unsigned int *missingHeights, unsigned int *missingCutouts, unsigned int *missingGeo)
{
  return ?R_ST_DebugGetSurfaceRenderingAvailabilityStats@@YA_NAEAI0000@Z(surfaceWarns, surfaceErrors, missingHeights, missingCutouts, missingGeo);
}

/*
==============
R_ST_DebugPopulateStreamedMeshGeoInfoString
==============
*/

ST_DebugAssetRenderAvailability __fastcall R_ST_DebugPopulateStreamedMeshGeoInfoString(const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  return ?R_ST_DebugPopulateStreamedMeshGeoInfoString@@YA?AW4ST_DebugAssetRenderAvailability@@IPEADI@Z(surfaceIndex, string, stringLength);
}

/*
==============
R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString
==============
*/

void __fastcall R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString(char *text, const unsigned int maxLen)
{
  ?R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString@@YAXPEADI@Z(text, maxLen);
}

/*
==============
R_ST_DebugPopulateRenderedMeshGeoInfoString
==============
*/

ST_DebugAssetRenderAvailability __fastcall R_ST_DebugPopulateRenderedMeshGeoInfoString(const vec3_t *dpvsCamPos, const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  return ?R_ST_DebugPopulateRenderedMeshGeoInfoString@@YA?AW4ST_DebugAssetRenderAvailability@@AEBTvec3_t@@IPEADI@Z(dpvsCamPos, surfaceIndex, string, stringLength);
}

/*
==============
R_ST_DebugGetTerrainSurfaceCount
==============
*/

unsigned int __fastcall R_ST_DebugGetTerrainSurfaceCount()
{
  return ?R_ST_DebugGetTerrainSurfaceCount@@YAIXZ();
}

/*
==============
R_ST_DebugGetTotalLightmapCount
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalLightmapCount()
{
  return ?R_ST_DebugGetTotalLightmapCount@@YAIXZ();
}

/*
==============
R_ST_DrawHitIntersectsSurface
==============
*/

bool __fastcall R_ST_DrawHitIntersectsSurface(unsigned int surfaceIndex, const vec3_t *hitPosition, CG_DrawHits_StModelInfo *hitModelInfoOut)
{
  return ?R_ST_DrawHitIntersectsSurface@@YA_NIAEBTvec3_t@@AEAUCG_DrawHits_StModelInfo@@@Z(surfaceIndex, hitPosition, hitModelInfoOut);
}

/*
==============
R_ST_DebugPopulateCombinedMapImageInfoString
==============
*/

void __fastcall R_ST_DebugPopulateCombinedMapImageInfoString(const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  ?R_ST_DebugPopulateCombinedMapImageInfoString@@YAXIPEADI@Z(surfaceIndex, string, stringLength);
}

/*
==============
R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString
==============
*/

void __fastcall R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString(char *text, const unsigned int maxLen)
{
  ?R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString@@YAXPEADI@Z(text, maxLen);
}

/*
==============
R_ST_DebugGetTotalFlattenedImageMemoryUsage
==============
*/

unsigned int __fastcall R_ST_DebugGetTotalFlattenedImageMemoryUsage()
{
  return ?R_ST_DebugGetTotalFlattenedImageMemoryUsage@@YAIXZ();
}

/*
==============
R_ST_DebugGetFlattenedImageOverlayHeader
==============
*/

const char *__fastcall R_ST_DebugGetFlattenedImageOverlayHeader(unsigned int *lenOut)
{
  return ?R_ST_DebugGetFlattenedImageOverlayHeader@@YAPEBDAEAI@Z(lenOut);
}

/*
==============
R_ST_DebugGetStreamedMeshGeoOverlayHeader
==============
*/

const char *__fastcall R_ST_DebugGetStreamedMeshGeoOverlayHeader(unsigned int *lenOut)
{
  return ?R_ST_DebugGetStreamedMeshGeoOverlayHeader@@YAPEBDAEAI@Z(lenOut);
}

/*
==============
R_ST_DebugGetColorFromAvailablity
==============
*/

const vec4_t *__fastcall R_ST_DebugGetColorFromAvailablity(ST_DebugAssetRenderAvailability availability)
{
  return ?R_ST_DebugGetColorFromAvailablity@@YAAEBTvec4_t@@W4ST_DebugAssetRenderAvailability@@@Z(availability);
}

/*
==============
R_ST_DebugGetMaterialLayerImageInfoFormatString
==============
*/

const char *__fastcall R_ST_DebugGetMaterialLayerImageInfoFormatString()
{
  return ?R_ST_DebugGetMaterialLayerImageInfoFormatString@@YAPEBDXZ();
}

/*
==============
R_ST_DebugGetCombinedMapOverlayHeader
==============
*/

const char *__fastcall R_ST_DebugGetCombinedMapOverlayHeader(unsigned int *lenOut)
{
  return ?R_ST_DebugGetCombinedMapOverlayHeader@@YAPEBDAEAI@Z(lenOut);
}

/*
==============
R_ST_DebugPopulateHeightCutoutLmapImageInfoString
==============
*/

ST_DebugAssetRenderAvailability __fastcall R_ST_DebugPopulateHeightCutoutLmapImageInfoString(const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  return ?R_ST_DebugPopulateHeightCutoutLmapImageInfoString@@YA?AW4ST_DebugAssetRenderAvailability@@IPEADI@Z(surfaceIndex, string, stringLength);
}

/*
==============
R_ST_DebugGetHeightCutoutLmapOverlayHeader
==============
*/

const char *__fastcall R_ST_DebugGetHeightCutoutLmapOverlayHeader()
{
  return ?R_ST_DebugGetHeightCutoutLmapOverlayHeader@@YAPEBDXZ();
}

/*
==============
R_ST_DebugGetColorFromAvailablity
==============
*/
vec4_t *R_ST_DebugGetColorFromAvailablity(ST_DebugAssetRenderAvailability availability)
{
  return &s_textColors[availability];
}

/*
==============
R_ST_DebugGetCombinedMapOverlayHeader
==============
*/
const char *R_ST_DebugGetCombinedMapOverlayHeader(unsigned int *lenOut)
{
  *lenOut = 111;
  return "index: albedo( streamed res / actual res | streamed memory ) nog( streamed res / actual res | streamed memory )";
}

/*
==============
R_ST_DebugGetCurrentlyLoadedImageMemoryAmount
==============
*/
__int64 R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(const GfxImage *image)
{
  unsigned int ImageHighestResidentPart; 
  __int64 v4; 
  __int64 v5; 
  unsigned int StreamedPartCount; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 58, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 )
    return image->totalSize;
  ImageHighestResidentPart = Stream_GetImageHighestResidentPart(image);
  v4 = ImageHighestResidentPart;
  if ( ImageHighestResidentPart == -1 )
    return 0i64;
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 192, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned int)v4 >= Image_GetStreamedPartCount(image) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(image);
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 193, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v5, StreamedPartCount) )
      __debugbreak();
  }
  return (unsigned int)image->streams[v4].levelCountAndSize >> 4;
}

/*
==============
R_ST_DebugGetFlattenedImageCount
==============
*/
__int64 R_ST_DebugGetFlattenedImageCount()
{
  const StTerrain *terrain; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 112, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
      __debugbreak();
    terrain = s_stGlob.terrain;
  }
  return terrain->flattenedImagesCount;
}

/*
==============
R_ST_DebugGetFlattenedImageOverlayHeader
==============
*/
const char *R_ST_DebugGetFlattenedImageOverlayHeader(unsigned int *lenOut)
{
  *lenOut = 73;
  return "Name:\t\t\t\t\t\t                   (streamed / max resolution) streamed memory";
}

/*
==============
R_ST_DebugGetHeightCutoutLmapOverlayHeader
==============
*/
const char *R_ST_DebugGetHeightCutoutLmapOverlayHeader()
{
  return "index: heightmap(actual width) streamed memory | cutout(actual w x h) streamed memory | lightmap(actual width per image) streamed memory";
}

/*
==============
R_ST_DebugGetHeightmapPixelSizeStats
==============
*/
void R_ST_DebugGetHeightmapPixelSizeStats(unsigned int *outMin, unsigned int *outMax, unsigned int *outAvg)
{
  const StTerrain *terrain; 
  unsigned int v7; 
  unsigned int surfaceCount; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 676, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v7 = 0;
  *outMin = -1;
  *outMax = 0;
  *outAvg = 0;
  surfaceCount = terrain->surfaceCount;
  if ( surfaceCount )
  {
    do
    {
      v9 = (__int64)&terrain->surfaces[v7];
      if ( !*(_QWORD *)(v9 + 336) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 686, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
        __debugbreak();
      v10 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 336) + 36i64);
      v11 = *outMin;
      if ( *outMin > v10 )
        v11 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 336) + 36i64);
      *outMin = v11;
      v12 = *outMax;
      if ( v10 > *outMax )
        v12 = v10;
      ++v7;
      *outMax = v12;
      *outAvg += v10;
      surfaceCount = terrain->surfaceCount;
    }
    while ( v7 < surfaceCount );
  }
  if ( !surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 695, ASSERT_TYPE_ASSERT, "(terrain.surfaceCount > 0)", (const char *)&queryFormat, "terrain.surfaceCount > 0") )
    __debugbreak();
  *outAvg /= terrain->surfaceCount;
}

/*
==============
R_ST_DebugGetImageResolutions
==============
*/
void R_ST_DebugGetImageResolutions(const GfxImage *image, unsigned int *curResolution, unsigned int *maxResolution)
{
  unsigned int ImageHighestResidentPart; 
  unsigned int width; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 85, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 )
  {
    ImageHighestResidentPart = Stream_GetImageHighestResidentPart(image);
    if ( ImageHighestResidentPart >= 4 )
      width = 0;
    else
      width = image->streams[ImageHighestResidentPart].width;
  }
  else
  {
    width = image->width;
  }
  *curResolution = width;
  *maxResolution = image->width;
}

/*
==============
R_ST_DebugGetLightmapDensityStatsUnitPerPixel
==============
*/
void R_ST_DebugGetLightmapDensityStatsUnitPerPixel(float *outMin, float *outMax, float *outAvg)
{
  const StTerrain *terrain; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  float v11; 
  float v16; 
  __int64 v17; 
  __int64 v18; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 732, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  *outMin = 3.4028235e38;
  v7 = 0;
  *outMax = 0.0;
  v8 = 0;
  *outAvg = 0.0;
  if ( !terrain->surfaceCount )
    goto LABEL_16;
  do
  {
    v9 = (__int64)&terrain->surfaces[v8];
    v10 = *(_DWORD *)(v9 + 372);
    if ( v10 != 510 )
    {
      if ( v10 >= terrain->lightmapCount )
      {
        LODWORD(v18) = terrain->lightmapCount;
        LODWORD(v17) = *(_DWORD *)(v9 + 372);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 750, ASSERT_TYPE_ASSERT, "(unsigned)( surface.lightmapIndex ) < (unsigned)( terrain.lightmapCount )", "surface.lightmapIndex doesn't index terrain.lightmapCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( !terrain->lightmaps[*(unsigned int *)(v9 + 372)].images[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 751, ASSERT_TYPE_ASSERT, "(terrain.lightmaps[surface.lightmapIndex].images[0])", (const char *)&queryFormat, "terrain.lightmaps[surface.lightmapIndex].images[0]") )
        __debugbreak();
      ++v7;
      v11 = (float)(2.0 * *(float *)(v9 + 80)) / (float)terrain->lightmaps[*(unsigned int *)(v9 + 372)].images[0]->width;
      _XMM1 = *(unsigned int *)outMin;
      __asm { vminss  xmm2, xmm1, xmm3 }
      *outMin = *(float *)&_XMM2;
      _XMM0 = *(unsigned int *)outMax;
      __asm { vmaxss  xmm1, xmm0, xmm3 }
      *outMax = *(float *)&_XMM1;
      *outAvg = v11 + *outAvg;
    }
    ++v8;
  }
  while ( v8 < terrain->surfaceCount );
  if ( v7 )
  {
    v16 = (float)v7;
    *outAvg = *outAvg / v16;
  }
  else
  {
LABEL_16:
    *outMin = 0.0;
  }
}

/*
==============
R_ST_DebugGetMaterialLayerImageInfoFormatString
==============
*/
const char *R_ST_DebugGetMaterialLayerImageInfoFormatString()
{
  return "   %-48.48s: ( %4u / %4u ) %4u kb";
}

/*
==============
R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString
==============
*/
void R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString(char *text, const unsigned int maxLen)
{
  unsigned __int64 v2; 
  char *fmt; 
  __int64 v5; 

  v2 = maxLen;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 343, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 344, ASSERT_TYPE_ASSERT, "(maxLen > 0)", (const char *)&queryFormat, "maxLen > 0") )
    __debugbreak();
  LODWORD(v5) = 99999;
  LODWORD(fmt) = 9999;
  Com_sprintf(text, v2, "   %2u: %4u ( %5u ) | %5u %4u %4u %4u %4u %4u %4u %4u | (%2u kb) %5u kb", 99i64, fmt, v5, 99999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 99, 99999);
}

/*
==============
R_ST_DebugGetMaxPopulatedCombinedMapInfoString
==============
*/
void R_ST_DebugGetMaxPopulatedCombinedMapInfoString(char *text, const unsigned int maxLen)
{
  unsigned __int64 v2; 

  v2 = maxLen;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 208, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 209, ASSERT_TYPE_ASSERT, "(maxLen > 0)", (const char *)&queryFormat, "maxLen > 0") )
    __debugbreak();
  Com_sprintf(text, v2, "   %-48.48s: ( %4u / %4u ) %4u kb", "99", "9999", "9999", "9999");
}

/*
==============
R_ST_DebugGetMaxPopulatedFlattenedImageInfoString
==============
*/
void R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(char *text, const unsigned int maxLen)
{
  unsigned __int64 v2; 
  char *fmt; 
  __int64 v5; 

  v2 = maxLen;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 134, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 135, ASSERT_TYPE_ASSERT, "(maxLen > 0)", (const char *)&queryFormat, "maxLen > 0") )
    __debugbreak();
  LODWORD(v5) = 9999;
  LODWORD(fmt) = 9999;
  Com_sprintf(text, v2, "   %-48.48s: ( %4u / %4u ) %4u kb", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", fmt, v5, 9999);
}

/*
==============
R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString
==============
*/
void R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString(char *text, const unsigned int maxLen)
{
  unsigned __int64 v2; 

  v2 = maxLen;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 558, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 559, ASSERT_TYPE_ASSERT, "(maxLen > 0)", (const char *)&queryFormat, "maxLen > 0") )
    __debugbreak();
  Com_sprintf(text, v2, "   %2u: (%4u) %5u kb | (%4u x %-4u) %4u kb | (%4u %4u %4u) %4u kb", "99", "9999", "99999", "9999", "9999", "9999", "9999", "9999", "9999", "9999");
}

/*
==============
R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString
==============
*/
void R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString(char *text, const unsigned int maxLen)
{
  unsigned __int64 v2; 
  char *fmt; 
  __int64 v5; 

  v2 = maxLen;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 432, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 433, ASSERT_TYPE_ASSERT, "(maxLen > 0)", (const char *)&queryFormat, "maxLen > 0") )
    __debugbreak();
  LODWORD(v5) = 999;
  LODWORD(fmt) = 9999;
  Com_sprintf(text, v2, "   %2u: %4u ( %3u/%-3u ) | %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u | %5u kb", 99i64, fmt, v5, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 99999);
}

/*
==============
R_ST_DebugGetRenderedMeshGeoOverlayHeader
==============
*/
const char *R_ST_DebugGetRenderedMeshGeoOverlayHeader(unsigned int *lenOut)
{
  *lenOut = 136;
  return "index: heightmapSize (ideal total nodes rendered/missing node count) | nodes ideally rendered/missing per level | totalStreamedMemory kb";
}

/*
==============
R_ST_DebugGetStreamedMeshGeoOverlayHeader
==============
*/
const char *R_ST_DebugGetStreamedMeshGeoOverlayHeader(unsigned int *lenOut)
{
  *lenOut = 108;
  return "index: heightmapSize (total nodes loaded) | nodes loaded per level | (low lod memory) totalStreamedMemory kb";
}

/*
==============
R_ST_DebugGetSurfaceRenderingAvailabilityStats
==============
*/
bool R_ST_DebugGetSurfaceRenderingAvailabilityStats(unsigned int *surfaceWarns, unsigned int *surfaceErrors, unsigned int *missingHeights, unsigned int *missingCutouts, unsigned int *missingGeo)
{
  const StTerrain *terrain; 
  unsigned int v10; 
  const StDiskTerrainSurface *v11; 
  bool v12; 
  StTerrainGridLevel *levels; 
  unsigned int v14; 
  __int64 v15; 
  StTerrainGridLevel *v16; 
  const StTerrainNode *nodes; 
  bool v18; 
  bool v20; 
  bool v21; 
  bool v22; 
  const StTerrain *i; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 798, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v10 = 0;
  *surfaceErrors = 0;
  *surfaceWarns = 0;
  *missingHeights = 0;
  *missingCutouts = 0;
  *missingGeo = 0;
  for ( i = terrain; v10 < i->surfaceCount; ++v10 )
  {
    v11 = &terrain->surfaces[v10];
    R_ST_TerrainSurface_PopulateDataInfo(v11, &terrainSurfaceDataInfo);
    if ( !R_ST_IsAnyGeoAvailableForSurface(v11, &terrainSurfaceDataInfo) )
    {
      v22 = R_Umbra_IsBoxVisible(&v11->wldBounds, 0, 0, 0) != 0;
      v20 = !Stream_CheckImageLowMipUsable(v11->heightMap);
      v12 = !Stream_CheckImageLowMipUsable(v11->cutoutMap);
      levels = v11->grid.levels;
      v21 = v12;
      v14 = v11->grid.numLevels - 1;
      v15 = v14;
      if ( (levels[v14].width != 1 || levels[v14].height != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 830, ASSERT_TYPE_ASSERT, "(surface.grid.levels[lowestDetailLod].width == 1 && surface.grid.levels[lowestDetailLod].height == 1)", (const char *)&queryFormat, "surface.grid.levels[lowestDetailLod].width == 1 && surface.grid.levels[lowestDetailLod].height == 1") )
        __debugbreak();
      v16 = v11->grid.levels;
      nodes = v16[v14].nodes;
      v18 = v14 && (nodes->mesh.flags.packed & 2) == 0;
      if ( v20 && R_ST_NodeRequiresHeightmap(v16[v15].nodes) )
        ++*missingHeights;
      if ( v21 && R_ST_NodeRequiresCutoutmap(nodes) )
        ++*missingCutouts;
      if ( v18 )
        ++*missingGeo;
      if ( v22 )
        ++*surfaceErrors;
      else
        ++*surfaceWarns;
    }
    terrain = i;
  }
  return *surfaceErrors || *surfaceWarns;
}

/*
==============
R_ST_DebugGetTerrainSurfaceCount
==============
*/
__int64 R_ST_DebugGetTerrainSurfaceCount()
{
  const StTerrain *terrain; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 185, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
      __debugbreak();
    terrain = s_stGlob.terrain;
  }
  return terrain->surfaceCount;
}

/*
==============
R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage
==============
*/
unsigned int R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage()
{
  return R_ST_DebugIterateSurfacesAndSumCallback(R_ST_DebugReturnCombinedmapMemoryCallback);
}

/*
==============
R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage
==============
*/
unsigned int R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage()
{
  return R_ST_DebugIterateSurfacesAndSumCallback(R_ST_DebugReturnCutoutmapMemoryCallback);
}

/*
==============
R_ST_DebugGetTotalFlattenedImageMemoryUsage
==============
*/
__int64 R_ST_DebugGetTotalFlattenedImageMemoryUsage()
{
  const StTerrain *terrain; 
  unsigned int v1; 
  __int64 i; 
  GfxImage *v3; 
  unsigned int totalSize; 
  unsigned int ImageHighestResidentPart; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 167, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v1 = 0;
  for ( i = 0i64; (unsigned int)i < terrain->flattenedImagesCount; i = (unsigned int)(i + 1) )
  {
    v3 = terrain->flattenedImages[i];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 58, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (v3->flags & 0x40) != 0 )
    {
      ImageHighestResidentPart = Stream_GetImageHighestResidentPart(v3);
      v6 = ImageHighestResidentPart;
      if ( ImageHighestResidentPart == -1 )
      {
        totalSize = 0;
      }
      else
      {
        if ( (v3->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 192, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v6 >= Image_GetStreamedPartCount(v3) )
        {
          LODWORD(v9) = Image_GetStreamedPartCount(v3);
          LODWORD(v8) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 193, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        totalSize = (unsigned int)v3->streams[v6].levelCountAndSize >> 4;
      }
    }
    else
    {
      totalSize = v3->totalSize;
    }
    v1 += totalSize;
  }
  return v1;
}

/*
==============
R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage
==============
*/
unsigned int R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage()
{
  return R_ST_DebugIterateSurfacesAndSumCallback(R_ST_DebugReturnHeightmapMemoryCallback);
}

/*
==============
R_ST_DebugGetTotalLightmapCount
==============
*/
__int64 R_ST_DebugGetTotalLightmapCount()
{
  const StTerrain *terrain; 
  unsigned int v1; 
  unsigned int i; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 40, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v1 = 0;
  for ( i = 0; i < terrain->surfaceCount; v1 += R_ST_DebugReturnLightmapCountCallback(&terrain->surfaces[i++]) )
    ;
  return v1;
}

/*
==============
R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage
==============
*/
unsigned int R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage()
{
  return R_ST_DebugIterateSurfacesAndSumCallback(R_ST_DebugReturnLightmapMemoryCallback);
}

/*
==============
R_ST_DebugGetTotalRenderedMeshGeoMemory
==============
*/
void R_ST_DebugGetTotalRenderedMeshGeoMemory(const vec3_t *dpvsCamPos, unsigned int *totalMemory, unsigned int *totalIdealNodesRendered, unsigned int *totalNodesMissing)
{
  const StTerrain *terrain; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  StRenderedMeshGeoDebugInfo renderedMeshGeoInfo; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 513, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v9 = 0;
  *totalMemory = 0;
  *totalIdealNodesRendered = 0;
  for ( *totalNodesMissing = 0; v9 < terrain->surfaceCount; *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[7] )
  {
    R_ST_DebugGetRenderedGeoStatsForSurface(dpvsCamPos, &terrain->surfaces[v9], &renderedMeshGeoInfo);
    v10 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[0];
    ++v9;
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[0] + renderedMeshGeoInfo.indexSizePerLevel[0];
    *totalIdealNodesRendered += v10;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[0];
    v11 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[1];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[1] + renderedMeshGeoInfo.indexSizePerLevel[1];
    *totalIdealNodesRendered += v11;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[1];
    v12 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[2];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[2] + renderedMeshGeoInfo.indexSizePerLevel[2];
    *totalIdealNodesRendered += v12;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[2];
    v13 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[3];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[3] + renderedMeshGeoInfo.indexSizePerLevel[3];
    *totalIdealNodesRendered += v13;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[3];
    v14 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[4];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[4] + renderedMeshGeoInfo.indexSizePerLevel[4];
    *totalIdealNodesRendered += v14;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[4];
    v15 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[5];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[5] + renderedMeshGeoInfo.indexSizePerLevel[5];
    *totalIdealNodesRendered += v15;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[5];
    v16 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[6];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[6] + renderedMeshGeoInfo.indexSizePerLevel[6];
    *totalIdealNodesRendered += v16;
    *totalNodesMissing += renderedMeshGeoInfo.missingNodesPerLevel[6];
    v17 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[7];
    *totalMemory += renderedMeshGeoInfo.vertSizePerLevel[7] + renderedMeshGeoInfo.indexSizePerLevel[7];
    *totalIdealNodesRendered += v17;
  }
}

/*
==============
R_ST_DebugGetTotalStreamedMeshGeoMemory
==============
*/
void R_ST_DebugGetTotalStreamedMeshGeoMemory(unsigned int *outTotalMemory, unsigned int *outTotalNodesStreamed)
{
  unsigned int *v2; 
  unsigned int *v3; 
  const StTerrain *terrain; 
  __int64 v5; 
  __int64 p_grid; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned __int16 *v10; 
  __int64 v11; 
  char v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int i; 
  const StTerrain *v26; 
  int v27[8]; 
  int v28[8]; 
  int v29[8]; 

  v2 = outTotalMemory;
  v3 = outTotalNodesStreamed;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 302, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v5 = 0i64;
  *v2 = 0;
  *v3 = 0;
  v26 = terrain;
  for ( i = 0; (unsigned int)v5 < terrain->surfaceCount; i = v5 )
  {
    p_grid = (__int64)&terrain->surfaces[v5].grid;
    memset_0(v27, 0, 0x60ui64);
    v7 = 0;
    if ( *(_DWORD *)p_grid )
    {
      do
      {
        v8 = *(_QWORD *)(p_grid + 8) + 16i64 * v7;
        if ( v7 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 283, ASSERT_TYPE_ASSERT, "(levelIndex < ST_TREE_MAX_DEPTH)", (const char *)&queryFormat, "levelIndex < ST_TREE_MAX_DEPTH") )
          __debugbreak();
        v9 = *(_DWORD *)v8 * *(_DWORD *)(v8 + 4);
        if ( v9 )
        {
          v10 = (unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 80i64);
          v11 = v9;
          do
          {
            v12 = *((_BYTE *)v10 + 6);
            if ( (v12 & 6) == 2 )
            {
              ++v27[v7];
              v13 = 8;
              v29[v7] += 6 * v10[1];
              v14 = *v10;
              if ( (v12 & 4) != 0 )
                v13 = 4;
              if ( (v12 & 0x10) == 0 )
                v14 = 0;
              v28[v7] += v13 * *v10 + 4 * v14;
            }
            v10 += 68;
            --v11;
          }
          while ( v11 );
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)p_grid );
      v2 = outTotalMemory;
      v3 = outTotalNodesStreamed;
      terrain = v26;
    }
    v15 = v27[0];
    *v2 += v28[0] + v29[0];
    *v3 += v15;
    v16 = v27[1];
    *v2 += v28[1] + v29[1];
    *v3 += v16;
    v17 = v27[2];
    *v2 += v28[2] + v29[2];
    *v3 += v17;
    v18 = v27[3];
    *v2 += v28[3] + v29[3];
    *v3 += v18;
    v19 = v27[4];
    *v2 += v28[4] + v29[4];
    *v3 += v19;
    v20 = v27[5];
    *v2 += v28[5] + v29[5];
    *v3 += v20;
    v21 = v27[6];
    *v2 += v28[6] + v29[6];
    *v3 += v21;
    v22 = v27[7];
    *v2 += v28[7] + v29[7];
    *v3 += v22;
    v5 = (unsigned int)(i + 1);
  }
}

/*
==============
R_ST_DebugIterateSurfacesAndSumCallback
==============
*/
__int64 R_ST_DebugIterateSurfacesAndSumCallback(unsigned int (*surfaceCallback)(const StDiskTerrainSurface *))
{
  const StTerrain *terrain; 
  unsigned int v3; 
  unsigned int i; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 40, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v3 = 0;
  for ( i = 0; i < terrain->surfaceCount; v3 += surfaceCallback(&terrain->surfaces[i++]) )
    ;
  return v3;
}

/*
==============
R_ST_DebugPopulateCombinedMapImageInfoString
==============
*/
void R_ST_DebugPopulateCombinedMapImageInfoString(__int64 surfaceIndex, char *string, unsigned int stringLength)
{
  unsigned __int64 v3; 
  __int64 v5; 
  const StTerrain *terrain; 
  __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  const GfxImage *v10; 
  unsigned int v11; 
  char *fmt; 
  __int64 v13; 
  int v14[18]; 
  unsigned int maxResolution; 
  int v16; 
  unsigned int curResolution; 
  int v18; 

  v3 = stringLength;
  v5 = (unsigned int)surfaceIndex;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 218, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 219, ASSERT_TYPE_ASSERT, "(stringLength > 0)", (const char *)&queryFormat, "stringLength > 0") )
    __debugbreak();
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 220, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  if ( (unsigned int)v5 >= s_stGlob.terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 223, ASSERT_TYPE_ASSERT, "(surfaceIndex < terrain.surfaceCount)", (const char *)&queryFormat, "surfaceIndex < terrain.surfaceCount") )
    __debugbreak();
  v7 = (__int64)&terrain->surfaces[v5];
  v8 = 0;
  v9 = 0i64;
  do
  {
    if ( v8 )
      v10 = *(const GfxImage **)(v7 + 360);
    else
      v10 = *(const GfxImage **)(v7 + 352);
    if ( v10 )
    {
      R_ST_CheckAndTouchImageLowMipUsable(v10);
      R_ST_DebugGetImageResolutions(v10, &curResolution + v8, &maxResolution + v8);
      v11 = (unsigned int)R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(v10) >> 10;
    }
    else
    {
      if ( v9 >= 2 )
      {
        j___report_rangecheckfailure(surfaceIndex);
        JUMPOUT(0x140AE1DFEi64);
      }
      *(&curResolution + v9) = 0;
      v11 = 0;
      *(&maxResolution + v9) = 0;
    }
    v14[v9] = v11;
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  LODWORD(v13) = maxResolution;
  LODWORD(fmt) = curResolution;
  Com_sprintf(string, v3, "   %2u: ( %4u / %4u | %4u kb ) ( %4u / %4u | %4u kb )", (unsigned int)v5, fmt, v13, v14[0], v18, v16, v14[1]);
}

/*
==============
R_ST_DebugPopulateFlattenedImageInfoString
==============
*/
void R_ST_DebugPopulateFlattenedImageInfoString(const unsigned int imageIndex, char *string, unsigned int stringLength)
{
  unsigned __int64 v3; 
  __int64 v5; 
  const StTerrain *terrain; 
  const char **p_name; 
  unsigned int ImageHighestResidentPart; 
  int v9; 
  int v10; 
  char *fmt; 
  __int64 v12; 
  unsigned int v13; 

  v3 = stringLength;
  v5 = imageIndex;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 145, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 146, ASSERT_TYPE_ASSERT, "(stringLength > 0)", (const char *)&queryFormat, "stringLength > 0") )
    __debugbreak();
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 147, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  if ( (unsigned int)v5 >= s_stGlob.terrain->flattenedImagesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 150, ASSERT_TYPE_ASSERT, "(imageIndex < terrain.flattenedImagesCount)", (const char *)&queryFormat, "imageIndex < terrain.flattenedImagesCount") )
    __debugbreak();
  p_name = &terrain->flattenedImages[v5]->name;
  if ( !p_name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 152, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 85, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
  }
  if ( ((_DWORD)p_name[3] & 0x40) != 0 )
  {
    ImageHighestResidentPart = Stream_GetImageHighestResidentPart((const GfxImage *)p_name);
    v9 = *((unsigned __int16 *)p_name + 18);
    if ( ImageHighestResidentPart >= 4 )
      v10 = 0;
    else
      v10 = WORD2(p_name[5 * ImageHighestResidentPart + 11]);
  }
  else
  {
    v10 = *((unsigned __int16 *)p_name + 18);
    v9 = v10;
  }
  v13 = (unsigned int)R_ST_DebugGetCurrentlyLoadedImageMemoryAmount((const GfxImage *)p_name) >> 10;
  LODWORD(v12) = v9;
  LODWORD(fmt) = v10;
  Com_sprintf(string, v3, "   %-48.48s: ( %4u / %4u ) %4u kb", *p_name, fmt, v12, v13);
}

/*
==============
R_ST_DebugPopulateHeightCutoutLmapImageInfoString
==============
*/
__int64 R_ST_DebugPopulateHeightCutoutLmapImageInfoString(const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  __int64 v4; 
  const StTerrain *terrain; 
  const StDiskTerrainSurface *v6; 
  const GfxImage *heightMap; 
  GfxImage *cutoutMap; 
  unsigned int CurrentlyLoadedImageMemoryAmount; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int lightmapIndex; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  const GfxImage *v17; 
  unsigned int v18; 
  int v19; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  int size_4; 
  int v27; 
  int width; 
  __int64 v30; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 
  __int64 v33; 
  int v34; 

  v4 = surfaceIndex;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 570, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !stringLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 571, ASSERT_TYPE_ASSERT, "(stringLength > 0)", (const char *)&queryFormat, "stringLength > 0") )
    __debugbreak();
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 572, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  if ( (unsigned int)v4 >= s_stGlob.terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 575, ASSERT_TYPE_ASSERT, "(surfaceIndex < terrain.surfaceCount)", (const char *)&queryFormat, "surfaceIndex < terrain.surfaceCount") )
    __debugbreak();
  v6 = &terrain->surfaces[v4];
  if ( !v6->heightMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 577, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
    __debugbreak();
  if ( !v6->cutoutMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 578, ASSERT_TYPE_ASSERT, "(surface.cutoutMap)", (const char *)&queryFormat, "surface.cutoutMap") )
    __debugbreak();
  heightMap = v6->heightMap;
  width = heightMap->width;
  cutoutMap = v6->cutoutMap;
  size_4 = cutoutMap->height;
  v27 = cutoutMap->width;
  CurrentlyLoadedImageMemoryAmount = R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(heightMap);
  v24 = CurrentlyLoadedImageMemoryAmount;
  v10 = R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(v6->cutoutMap);
  if ( CurrentlyLoadedImageMemoryAmount )
  {
    v11 = CurrentlyLoadedImageMemoryAmount >> 10;
    CurrentlyLoadedImageMemoryAmount = 1;
    if ( v11 > 1 )
      CurrentlyLoadedImageMemoryAmount = v11;
    v24 = CurrentlyLoadedImageMemoryAmount;
  }
  if ( v10 )
  {
    v12 = v10 >> 10;
    v10 = 1;
    if ( v12 > 1 )
      v10 = v12;
  }
  lightmapIndex = v6->lightmapIndex;
  v14 = 0;
  v15 = 0;
  if ( lightmapIndex == 510 )
  {
    v19 = 0;
    v33 = 0i64;
  }
  else
  {
    if ( lightmapIndex >= terrain->lightmapCount )
    {
      LODWORD(v22) = v6->lightmapIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 601, ASSERT_TYPE_ASSERT, "(unsigned)( surface.lightmapIndex ) < (unsigned)( terrain.lightmapCount )", "surface.lightmapIndex doesn't index terrain.lightmapCount\n\t%i not in [0, %i)", v22, terrain->lightmapCount) )
        __debugbreak();
    }
    v16 = 0i64;
    v30 = 3i64;
    do
    {
      v17 = (const GfxImage *)*((_QWORD *)&terrain->lightmaps->images[2 * v6->lightmapIndex] + v16 + v6->lightmapIndex);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 605, ASSERT_TYPE_ASSERT, "(lmapImage)", (const char *)&queryFormat, "lmapImage") )
        __debugbreak();
      v15 += R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(v17);
      *((_DWORD *)&v33 + v16++) = v17->width;
      --v30;
    }
    while ( v30 );
    v14 = 0;
    CurrentlyLoadedImageMemoryAmount = v24;
    if ( v15 )
    {
      v18 = v15 >> 10;
      v15 = 1;
      if ( v18 > 1 )
        v15 = v18;
    }
    v19 = v34;
  }
  LODWORD(v23) = v27;
  LODWORD(v22) = CurrentlyLoadedImageMemoryAmount;
  LODWORD(fmt) = width;
  Com_sprintf(string, stringLength, "   %2u: (%4u) %5u kb | (%4u x %-4u) %4u kb | (%4u %4u %4u) %4u kb", surfaceIndex, fmt, v22, v23, size_4, v10, v33, HIDWORD(v33), v19, v15);
  R_ST_TerrainSurface_PopulateDataInfo(v6, &terrainSurfaceDataInfo);
  if ( R_ST_IsAnyGeoAvailableForSurface(v6, &terrainSurfaceDataInfo) )
    return 0i64;
  LOBYTE(v14) = R_Umbra_IsBoxVisible(&v6->wldBounds, 0, 0, 0) != 0;
  return (unsigned int)(v14 + 1);
}

/*
==============
R_ST_DebugPopulateRenderedMeshGeoInfoString
==============
*/
__int64 R_ST_DebugPopulateRenderedMeshGeoInfoString(const vec3_t *dpvsCamPos, const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  unsigned __int64 v4; 
  __int64 v6; 
  const StTerrain *terrain; 
  const StDiskTerrainSurface *v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  bool v13; 
  char *fmt; 
  __int64 v16; 
  unsigned int v17; 
  StRenderedMeshGeoDebugInfo renderedMeshGeoInfo; 

  v4 = stringLength;
  v6 = surfaceIndex;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 445, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 446, ASSERT_TYPE_ASSERT, "(stringLength > 0)", (const char *)&queryFormat, "stringLength > 0") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 450, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  if ( (unsigned int)v6 >= terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 451, ASSERT_TYPE_ASSERT, "(surfaceIndex < terrain.surfaceCount)", (const char *)&queryFormat, "surfaceIndex < terrain.surfaceCount") )
    __debugbreak();
  v8 = &terrain->surfaces[v6];
  v9 = v8->grid.numLevels - 1;
  R_ST_DebugGetRenderedGeoStatsForSurface(dpvsCamPos, v8, &renderedMeshGeoInfo);
  v10 = renderedMeshGeoInfo.vertSizePerLevel[7] + renderedMeshGeoInfo.indexSizePerLevel[7] + renderedMeshGeoInfo.vertSizePerLevel[6] + renderedMeshGeoInfo.indexSizePerLevel[6] + renderedMeshGeoInfo.vertSizePerLevel[5] + renderedMeshGeoInfo.indexSizePerLevel[5] + renderedMeshGeoInfo.vertSizePerLevel[4] + renderedMeshGeoInfo.indexSizePerLevel[4] + renderedMeshGeoInfo.vertSizePerLevel[3] + renderedMeshGeoInfo.indexSizePerLevel[3] + renderedMeshGeoInfo.vertSizePerLevel[2] + renderedMeshGeoInfo.indexSizePerLevel[2] + renderedMeshGeoInfo.vertSizePerLevel[1] + renderedMeshGeoInfo.indexSizePerLevel[1] + renderedMeshGeoInfo.vertSizePerLevel[0] + renderedMeshGeoInfo.indexSizePerLevel[0];
  v11 = renderedMeshGeoInfo.missingNodesPerLevel[0] + renderedMeshGeoInfo.missingNodesPerLevel[1] + renderedMeshGeoInfo.missingNodesPerLevel[2] + renderedMeshGeoInfo.missingNodesPerLevel[3] + renderedMeshGeoInfo.missingNodesPerLevel[4] + renderedMeshGeoInfo.missingNodesPerLevel[5] + renderedMeshGeoInfo.missingNodesPerLevel[6] + renderedMeshGeoInfo.missingNodesPerLevel[7];
  v17 = renderedMeshGeoInfo.idealNodesRenderedPerLevel[0] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[1] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[2] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[3] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[4] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[5] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[6] + renderedMeshGeoInfo.idealNodesRenderedPerLevel[7];
  if ( !v8->heightMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 475, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
    __debugbreak();
  LODWORD(v16) = v17;
  LODWORD(fmt) = terrain->surfaces[v6].heightMap->width;
  Com_sprintf(string, v4, "   %2u: %4u ( %3u/%-3u ) | %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u %3u/%-3u | %5u kb", (unsigned int)v6, fmt, v16, v11, renderedMeshGeoInfo.idealNodesRenderedPerLevel[0], renderedMeshGeoInfo.missingNodesPerLevel[0], renderedMeshGeoInfo.idealNodesRenderedPerLevel[1], renderedMeshGeoInfo.missingNodesPerLevel[1], renderedMeshGeoInfo.idealNodesRenderedPerLevel[2], renderedMeshGeoInfo.missingNodesPerLevel[2], renderedMeshGeoInfo.idealNodesRenderedPerLevel[3], renderedMeshGeoInfo.missingNodesPerLevel[3], renderedMeshGeoInfo.idealNodesRenderedPerLevel[4], renderedMeshGeoInfo.missingNodesPerLevel[4], renderedMeshGeoInfo.idealNodesRenderedPerLevel[5], renderedMeshGeoInfo.missingNodesPerLevel[5], renderedMeshGeoInfo.idealNodesRenderedPerLevel[6], renderedMeshGeoInfo.missingNodesPerLevel[6], renderedMeshGeoInfo.idealNodesRenderedPerLevel[7], renderedMeshGeoInfo.missingNodesPerLevel[7], v10 >> 10);
  if ( !v11 )
    return 0i64;
  v12 = R_Umbra_IsBoxVisible(&v8->wldBounds, 0, 0, 0) != 0;
  if ( v9 >= v8->grid.numLevels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 493, ASSERT_TYPE_ASSERT, "(lowestDetailLod < surface.grid.numLevels)", (const char *)&queryFormat, "lowestDetailLod < surface.grid.numLevels") )
    __debugbreak();
  v13 = v9 && renderedMeshGeoInfo.missingNodesPerLevel[v9];
  if ( v12 && v13 )
    return 2i64;
  else
    return 1i64;
}

/*
==============
R_ST_DebugPopulateStreamedMeshGeoInfoString
==============
*/
__int64 R_ST_DebugPopulateStreamedMeshGeoInfoString(const unsigned int surfaceIndex, char *string, unsigned int stringLength)
{
  __int64 v3; 
  const StTerrain *terrain; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  char *fmt; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int size_4; 
  int v21; 
  __int64 v22; 
  const StTerrain *v23; 
  StLoadedMeshGeoDebugInfo loadedMeshGeoInfo; 

  v3 = surfaceIndex;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 353, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !stringLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 354, ASSERT_TYPE_ASSERT, "(stringLength > 0)", (const char *)&queryFormat, "stringLength > 0") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v23 = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 358, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  if ( (unsigned int)v3 >= terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 359, ASSERT_TYPE_ASSERT, "(surfaceIndex < terrain.surfaceCount)", (const char *)&queryFormat, "surfaceIndex < terrain.surfaceCount") )
    __debugbreak();
  v22 = (__int64)&terrain->surfaces[v3];
  v21 = *(_DWORD *)(v22 + 24) - 1;
  R_ST_LoadedMeshGeoDebugInfoForSurface((const StTerrainGrid *)(v22 + 24), &loadedMeshGeoInfo);
  v6 = loadedMeshGeoInfo.indexSizePerLevel[4] + loadedMeshGeoInfo.vertSizePerLevel[4];
  v7 = loadedMeshGeoInfo.indexSizePerLevel[3] + loadedMeshGeoInfo.vertSizePerLevel[3];
  v8 = loadedMeshGeoInfo.indexSizePerLevel[2] + loadedMeshGeoInfo.vertSizePerLevel[2];
  v9 = loadedMeshGeoInfo.vertSizePerLevel[1] + loadedMeshGeoInfo.indexSizePerLevel[1];
  v10 = loadedMeshGeoInfo.vertSizePerLevel[0] + loadedMeshGeoInfo.indexSizePerLevel[0];
  v11 = loadedMeshGeoInfo.indexSizePerLevel[5] + loadedMeshGeoInfo.vertSizePerLevel[5];
  v17 = loadedMeshGeoInfo.vertSizePerLevel[0] + loadedMeshGeoInfo.indexSizePerLevel[0] + loadedMeshGeoInfo.vertSizePerLevel[1] + loadedMeshGeoInfo.indexSizePerLevel[1] + loadedMeshGeoInfo.indexSizePerLevel[2] + loadedMeshGeoInfo.vertSizePerLevel[2] + loadedMeshGeoInfo.indexSizePerLevel[3] + loadedMeshGeoInfo.vertSizePerLevel[3] + loadedMeshGeoInfo.indexSizePerLevel[4] + loadedMeshGeoInfo.vertSizePerLevel[4] + loadedMeshGeoInfo.indexSizePerLevel[5] + loadedMeshGeoInfo.vertSizePerLevel[5] + loadedMeshGeoInfo.indexSizePerLevel[6] + loadedMeshGeoInfo.vertSizePerLevel[6] + loadedMeshGeoInfo.indexSizePerLevel[7] + loadedMeshGeoInfo.vertSizePerLevel[7];
  size_4 = loadedMeshGeoInfo.nodesPerLevel[0] + loadedMeshGeoInfo.nodesPerLevel[1] + loadedMeshGeoInfo.nodesPerLevel[2] + loadedMeshGeoInfo.nodesPerLevel[3] + loadedMeshGeoInfo.nodesPerLevel[4] + loadedMeshGeoInfo.nodesPerLevel[5] + loadedMeshGeoInfo.nodesPerLevel[6] + loadedMeshGeoInfo.nodesPerLevel[7];
  if ( !loadedMeshGeoInfo.indexSizePerLevel[0] )
    v10 = 0;
  v12 = loadedMeshGeoInfo.indexSizePerLevel[6] + loadedMeshGeoInfo.vertSizePerLevel[6];
  if ( !loadedMeshGeoInfo.indexSizePerLevel[1] )
    v9 = v10;
  if ( !loadedMeshGeoInfo.indexSizePerLevel[2] )
    v8 = v9;
  if ( !loadedMeshGeoInfo.indexSizePerLevel[3] )
    v7 = v8;
  if ( !loadedMeshGeoInfo.indexSizePerLevel[4] )
    v6 = v7;
  if ( !loadedMeshGeoInfo.indexSizePerLevel[5] )
    v11 = v6;
  v13 = loadedMeshGeoInfo.indexSizePerLevel[7] + loadedMeshGeoInfo.vertSizePerLevel[7];
  if ( !loadedMeshGeoInfo.indexSizePerLevel[6] )
    v12 = v11;
  if ( !loadedMeshGeoInfo.indexSizePerLevel[7] )
    v13 = v12;
  if ( !*(_QWORD *)(v22 + 336) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 389, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
    __debugbreak();
  LODWORD(v16) = size_4;
  LODWORD(fmt) = v23->surfaces[v3].heightMap->width;
  Com_sprintf(string, stringLength, "   %2u: %4u ( %5u ) | %5u %4u %4u %4u %4u %4u %4u %4u | (%2u kb) %5u kb", surfaceIndex, fmt, v16, loadedMeshGeoInfo.nodesPerLevel[0], loadedMeshGeoInfo.nodesPerLevel[1], loadedMeshGeoInfo.nodesPerLevel[2], loadedMeshGeoInfo.nodesPerLevel[3], loadedMeshGeoInfo.nodesPerLevel[4], loadedMeshGeoInfo.nodesPerLevel[5], loadedMeshGeoInfo.nodesPerLevel[6], loadedMeshGeoInfo.nodesPerLevel[7], v13 >> 10, v17 >> 10);
  if ( loadedMeshGeoInfo.nodesPerLevel[v21] || !v21 )
    return 0i64;
  else
    return (unsigned int)(R_Umbra_IsBoxVisible((const Bounds *)(v22 + 68), 0, 0, 0) != 0) + 1;
}

/*
==============
R_ST_DebugReturnCombinedmapMemoryCallback
==============
*/
__int64 R_ST_DebugReturnCombinedmapMemoryCallback(const StDiskTerrainSurface *surface)
{
  int CurrentlyLoadedImageMemoryAmount; 

  CurrentlyLoadedImageMemoryAmount = R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(surface->combinedAlbedoMap);
  return CurrentlyLoadedImageMemoryAmount + (unsigned int)R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(surface->combinedNogMap);
}

/*
==============
R_ST_DebugReturnCutoutmapMemoryCallback
==============
*/
__int64 R_ST_DebugReturnCutoutmapMemoryCallback(const StDiskTerrainSurface *surface)
{
  return R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(surface->cutoutMap);
}

/*
==============
R_ST_DebugReturnHeightmapMemoryCallback
==============
*/
__int64 R_ST_DebugReturnHeightmapMemoryCallback(const StDiskTerrainSurface *surface)
{
  return R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(surface->heightMap);
}

/*
==============
R_ST_DebugReturnLightmapCountCallback
==============
*/
_BOOL8 R_ST_DebugReturnLightmapCountCallback(const StDiskTerrainSurface *surface)
{
  return surface->lightmapIndex != 510;
}

/*
==============
R_ST_DebugReturnLightmapMemoryCallback
==============
*/
__int64 R_ST_DebugReturnLightmapMemoryCallback(const StDiskTerrainSurface *surface)
{
  __int64 result; 
  const StTerrain *terrain; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( surface->lightmapIndex == 510 )
    return 0i64;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 711, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  if ( surface->lightmapIndex >= s_stGlob.terrain->lightmapCount )
  {
    LODWORD(v6) = surface->lightmapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 714, ASSERT_TYPE_ASSERT, "(unsigned)( surface.lightmapIndex ) < (unsigned)( terrain.lightmapCount )", "surface.lightmapIndex doesn't index terrain.lightmapCount\n\t%i not in [0, %i)", v6, s_stGlob.terrain->lightmapCount) )
      __debugbreak();
  }
  v4 = 0i64;
  v5 = 3i64;
  do
  {
    if ( !*((_QWORD *)&terrain->lightmaps->images[2 * surface->lightmapIndex] + v4 + surface->lightmapIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 717, ASSERT_TYPE_ASSERT, "(terrain.lightmaps[surface.lightmapIndex].images[lmapIndex])", (const char *)&queryFormat, "terrain.lightmaps[surface.lightmapIndex].images[lmapIndex]") )
      __debugbreak();
    result = R_ST_DebugGetCurrentlyLoadedImageMemoryAmount(*((const GfxImage **)&terrain->lightmaps->images[2 * surface->lightmapIndex] + v4 + surface->lightmapIndex));
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}

/*
==============
R_ST_DrawHitIntersectsSurface
==============
*/
char R_ST_DrawHitIntersectsSurface(unsigned int surfaceIndex, const vec3_t *hitPosition, CG_DrawHits_StModelInfo *hitModelInfoOut)
{
  StDiskTerrainSurface *v6; 
  StTerrainGridLevel *levels; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int i; 
  __int64 v11; 
  __int64 v12; 

  if ( s_stGlob.terrain )
  {
    if ( surfaceIndex < s_stGlob.terrain->surfaceCount )
    {
      v6 = &s_stGlob.terrain->surfaces[surfaceIndex];
      if ( Bounds_ContainsPoint(&v6->wldBounds, hitPosition) )
      {
        levels = v6->grid.levels;
        v8 = levels->width * levels->height;
        v9 = 0i64;
        for ( i = 0; i < v8; ++i )
        {
          v11 = (__int64)&levels->nodes[i];
          if ( (*(_BYTE *)(v11 + 86) & 1) == 0 && Bounds_ContainsPoint((const Bounds *)(v11 + 88), hitPosition) )
          {
            hitModelInfoOut->surfaceIndex = surfaceIndex;
            hitModelInfoOut->combinedMapStreamRadiusInvSq = v6->combinedMapStreamRadiusInvSq;
            hitModelInfoOut->combinedAlbedoMap = v6->combinedAlbedoMap;
            hitModelInfoOut->combinedNogMap = v6->combinedNogMap;
            hitModelInfoOut->layerMaterialCount = v6->layerCount;
            if ( v6->layerCount )
            {
              do
              {
                v12 = (unsigned int)v9;
                hitModelInfoOut->layerMaterials[v9] = v6->layerMaterials[v12].material;
                hitModelInfoOut->layerMaterialsHimipRadiusInvSq[v9] = v6->layerMaterials[v12].himipRadiusInvSq;
                v9 = (unsigned int)(v9 + 1);
              }
              while ( (unsigned int)v9 < v6->layerCount );
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
R_ST_GetSurfaceCount
==============
*/
const StTerrain *R_ST_GetSurfaceCount()
{
  const StTerrain *result; 

  result = s_stGlob.terrain;
  if ( s_stGlob.terrain )
    return (const StTerrain *)s_stGlob.terrain->surfaceCount;
  return result;
}

/*
==============
R_ST_LoadedMeshGeoDebugInfoForSurface
==============
*/
void R_ST_LoadedMeshGeoDebugInfoForSurface(const StTerrainGrid *grid, StLoadedMeshGeoDebugInfo *loadedMeshGeoInfo)
{
  __int64 i; 
  StTerrainGridLevel *v5; 
  unsigned int j; 
  __int64 v7; 
  int v8; 
  unsigned __int16 v9; 
  int v10; 

  memset_0(loadedMeshGeoInfo, 0, sizeof(StLoadedMeshGeoDebugInfo));
  for ( i = 0i64; (unsigned int)i < grid->numLevels; i = (unsigned int)(i + 1) )
  {
    v5 = &grid->levels[(unsigned int)i];
    if ( (unsigned int)i >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_debug.cpp", 283, ASSERT_TYPE_ASSERT, "(levelIndex < ST_TREE_MAX_DEPTH)", (const char *)&queryFormat, "levelIndex < ST_TREE_MAX_DEPTH") )
      __debugbreak();
    for ( j = 0; j < v5->width * v5->height; ++j )
    {
      v7 = (__int64)&v5->nodes[j];
      if ( (*(_BYTE *)(v7 + 86) & 6) == 2 )
      {
        ++loadedMeshGeoInfo->nodesPerLevel[i];
        v8 = 8;
        loadedMeshGeoInfo->indexSizePerLevel[i] += 6 * *(unsigned __int16 *)(v7 + 82);
        v9 = *(_WORD *)(v7 + 80);
        if ( (*(_BYTE *)(v7 + 86) & 4) != 0 )
          v8 = 4;
        v10 = 0;
        if ( (*(_BYTE *)(v7 + 86) & 0x10) != 0 )
          v10 = v9;
        loadedMeshGeoInfo->vertSizePerLevel[i] += v8 * v9 + 4 * v10;
      }
    }
  }
}

