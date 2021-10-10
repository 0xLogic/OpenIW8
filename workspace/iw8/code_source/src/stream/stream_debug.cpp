/*
==============
Stream_Debug_GetGenericUsageSummaryText
==============
*/

void __fastcall Stream_Debug_GetGenericUsageSummaryText(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  ?Stream_Debug_GetGenericUsageSummaryText@@YAXAEBV?$inplace_function@$$A6AXPEBD@Z$0EA@$0BA@@stdext@@@Z(output);
}

/*
==============
Stream_Debug_DrawMetricsUpdate
==============
*/

void __fastcall Stream_Debug_DrawMetricsUpdate(LocalClientNum_t localClientIndex)
{
  ?Stream_Debug_DrawMetricsUpdate@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
Stream_Debug_GetSpecialStreamDistanceStr
==============
*/

const char *__fastcall Stream_Debug_GetSpecialStreamDistanceStr(StreamDistance distance)
{
  return ?Stream_Debug_GetSpecialStreamDistanceStr@@YAPEBDUStreamDistance@@@Z(distance);
}

/*
==============
Stream_Debug_GetStreamKeyCountersFromDB
==============
*/

void __fastcall Stream_Debug_GetStreamKeyCountersFromDB(const int numCounters, unsigned __int64 *mem, unsigned int *counts)
{
  ?Stream_Debug_GetStreamKeyCountersFromDB@@YAXHPEA_KPEAI@Z(numCounters, mem, counts);
}

/*
==============
Stream_Debug_DrawXPakHeatMap
==============
*/

void Stream_Debug_DrawXPakHeatMap(void)
{
  ?Stream_Debug_DrawXPakHeatMap@@YAXXZ();
}

/*
==============
Stream_Debug_AddToHeatMap
==============
*/

void __fastcall Stream_Debug_AddToHeatMap(int xpakIndex, __int64 offset, unsigned __int64 size, FileStreamTrackType trackType)
{
  ?Stream_Debug_AddToHeatMap@@YAXH_J_KW4FileStreamTrackType@@@Z(xpakIndex, offset, size, trackType);
}

/*
==============
Stream_Debug_EndOfFullUpdateFrame
==============
*/

void Stream_Debug_EndOfFullUpdateFrame(void)
{
  ?Stream_Debug_EndOfFullUpdateFrame@@YAXXZ();
}

/*
==============
Stream_Debug_RemoveFromHeatMap
==============
*/

void __fastcall Stream_Debug_RemoveFromHeatMap(int xpakIndex)
{
  ?Stream_Debug_RemoveFromHeatMap@@YAXH@Z(xpakIndex);
}

/*
==============
Stream_Debug_PreLevelUnload
==============
*/

void Stream_Debug_PreLevelUnload(void)
{
  ?Stream_Debug_PreLevelUnload@@YAXXZ();
}

/*
==============
Stream_Debug_BeginScreenUpdateFrame
==============
*/

void Stream_Debug_BeginScreenUpdateFrame(void)
{
  ?Stream_Debug_BeginScreenUpdateFrame@@YAXXZ();
}

/*
==============
Stream_Debug_DrawMetricsHitTable
==============
*/

void __fastcall Stream_Debug_DrawMetricsHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  ?Stream_Debug_DrawMetricsHitTable@@YAXW4LocalClientNum_t@@PEBUCG_DrawHits_Hit@@I@Z(localClientIndex, hits, hitCount);
}

/*
==============
Stream_Debug_DrawCameraVelocity
==============
*/

void __fastcall Stream_Debug_DrawCameraVelocity(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?Stream_Debug_DrawCameraVelocity@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
Stream_Debug_Init
==============
*/

void Stream_Debug_Init(void)
{
  ?Stream_Debug_Init@@YAXXZ();
}

/*
==============
Stream_Debug_DrawSortLists
==============
*/

void __fastcall Stream_Debug_DrawSortLists(LocalClientNum_t localClientIndex)
{
  ?Stream_Debug_DrawSortLists@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
Stream_Debug_CalcWantedBytesForImage
==============
*/

int __fastcall Stream_Debug_CalcWantedBytesForImage(const GfxImage *image)
{
  return ?Stream_Debug_CalcWantedBytesForImage@@YAHPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_Debug_DrawTouchedImages
==============
*/

void __fastcall Stream_Debug_DrawTouchedImages(const LocalClientNum_t localClientIndex)
{
  ?Stream_Debug_DrawTouchedImages@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
Stream_Debug_UpdateTexturesForDebugShader
==============
*/

void __fastcall Stream_Debug_UpdateTexturesForDebugShader(const GfxBackEndData *data, bool useDebugShaderStreaming)
{
  ?Stream_Debug_UpdateTexturesForDebugShader@@YAXPEBUGfxBackEndData@@_N@Z(data, useDebugShaderStreaming);
}

/*
==============
Stream_Debug_CalcBytesLoadedForImage
==============
*/

int __fastcall Stream_Debug_CalcBytesLoadedForImage(const GfxImage *image)
{
  return ?Stream_Debug_CalcBytesLoadedForImage@@YAHPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_Debug_UpdateClientFrame
==============
*/

void Stream_Debug_UpdateClientFrame(void)
{
  ?Stream_Debug_UpdateClientFrame@@YAXXZ();
}

/*
==============
Stream_Debug_DrawDebugOverlays
==============
*/

void __fastcall Stream_Debug_DrawDebugOverlays(LocalClientNum_t localClientIndex)
{
  ?Stream_Debug_DrawDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
GetStreamKeyCounters
==============
*/
void GetStreamKeyCounters(XAssetHeader header, void *data)
{
  int StreamKeyIndex; 
  _QWORD *v5; 

  if ( header.physicsLibrary )
  {
    StreamKeyIndex = DB_GetStreamKeyIndex(header.streamKey);
    if ( StreamableBits::CheckAlloc(&streamFrontendGlob->genericBits, StreamKeyIndex) )
    {
      v5 = (char *)data + 8 * LOBYTE(header.physicsLibrary[2].havokDataSize);
      *v5 += *(unsigned int *)&header.physicsLibrary[2].isMaterialList;
      ++*((_DWORD *)data + LOBYTE(header.physicsLibrary[2].havokDataSize) + 10);
    }
  }
}

/*
==============
Stream_Debug_AddImageSizeToCategory
==============
*/
void Stream_Debug_AddImageSizeToCategory(const char *name, const char *label, const int bytesWantedForImage, const int bytesLoadedForImage, const int bytesSurplusForImage)
{
  __int64 v5; 
  const char **v6; 
  __int64 v7; 
  int v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  const dvar_t *v14; 
  const char *string; 
  __int64 v16; 
  __int64 v17; 
  const char *v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  char dest[256]; 

  v5 = bytesLoadedForImage;
  v6 = s_categoriesString;
  v7 = bytesWantedForImage;
  v10 = 0;
  while ( (unsigned int)(v10 - 5) > 2 )
  {
    v11 = *v6;
    v12 = -1i64;
    do
      ++v12;
    while ( v11[v12] );
    if ( !I_strncmp(v11, name, (unsigned int)v12) || (unsigned int)(v10 - 11) <= 1 && strstr_0(label, *v6) )
      goto LABEL_10;
LABEL_8:
    ++v10;
    ++v6;
    if ( v10 >= 13 )
    {
      v10 = 13;
      goto LABEL_10;
    }
  }
  v14 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  string = v14->current.string;
  dest[0] = 0;
  Core_strcpy(dest, 0x100ui64, string);
  I_strcat_truncate(dest, 0x100ui64, *v6);
  v16 = -1i64;
  do
    ++v16;
  while ( dest[v16] );
  v17 = (unsigned int)v16;
  v18 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v19 = v18[dest - name];
    v20 = v17;
    v21 = *v18++;
    --v17;
    if ( !v20 )
      break;
    if ( v19 != v21 )
      goto LABEL_8;
  }
  while ( v19 );
LABEL_10:
  v13 = v10;
  s_imageCategoriesData[v13].wantedSize += v7;
  s_imageCategoriesData[v13].loadedSize += v5;
  s_imageCategoriesData[v13].surplusSize += bytesSurplusForImage;
}

/*
==============
Stream_Debug_AddImageSizeToCategoryCaller
==============
*/
void Stream_Debug_AddImageSizeToCategoryCaller(const stdext::inplace_function<void __cdecl(char const *),64,16> *__formal, const GfxImage *image, int *a3, const char *label)
{
  int v6; 
  int v7; 
  int bytesSurplusForImage; 
  int v9; 

  v6 = Stream_Debug_CalcWantedBytesForImage(image);
  v7 = Stream_Debug_CalcBytesLoadedForImage(image);
  bytesSurplusForImage = v7 - v6;
  v9 = v7;
  if ( v7 - v6 < 0 )
    bytesSurplusForImage = 0;
  if ( v6 > v7 )
    v9 = v6;
  Stream_Debug_AddImageSizeToCategory(image->name, label, v9, v7, bytesSurplusForImage);
}

/*
==============
Stream_Debug_AddToHeatMap
==============
*/
void Stream_Debug_AddToHeatMap(int xpakIndex, __int64 offset, unsigned __int64 size, FileStreamTrackType trackType)
{
  StreamHeatMapData *v8; 
  int v9; 

  if ( (unsigned int)(trackType - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2325, ASSERT_TYPE_ASSERT, "(trackType == FileStreamTrackType::FILE_STREAM_TRACK_PRIMER || trackType == FileStreamTrackType::FILE_STREAM_TRACK_STREAM)", (const char *)&queryFormat, "trackType == FileStreamTrackType::FILE_STREAM_TRACK_PRIMER || trackType == FileStreamTrackType::FILE_STREAM_TRACK_STREAM") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamDebugGlob.streamHeatMapData_next & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamDebugGlob.streamHeatMapData_next) )
    __debugbreak();
  v8 = &s_streamDebugGlob.streamHeatMapData[_InterlockedExchangeAdd(&s_streamDebugGlob.streamHeatMapData_next, 1u) & 0x3FF];
  v9 = Sys_Milliseconds();
  v8->startOffset = offset;
  v8->size = size;
  v8->trackType = trackType;
  v8->startedTime = v9;
  v8->xpakIndex = xpakIndex;
}

/*
==============
Stream_Debug_BeginScreenUpdateFrame
==============
*/
void Stream_Debug_BeginScreenUpdateFrame(void)
{
  const dvar_t *v0; 
  int v1; 
  int v2; 
  const dvar_t *v3; 
  float value; 
  signed __int64 wantedImageMemory; 
  float imageStreamingQuality; 
  float v7; 
  float v8; 
  bool v9; 
  DLogContext context; 
  char dest[256]; 
  char buffer[4096]; 

  v0 = DCONST_DVARINT_stream_printIntervalStreamingQuality;
  if ( !DCONST_DVARINT_stream_printIntervalStreamingQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_printIntervalStreamingQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = 1000 * v0->current.integer;
  if ( v1 > 0 )
  {
    v2 = Sys_Milliseconds();
    if ( v1 + s_lastTimePrintStreamingQuality < v2 )
    {
      v3 = DVARFLT_stream_distanceImageNeeded;
      s_lastTimePrintStreamingQuality = v2;
      if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      value = v3->current.value;
      wantedImageMemory = streamFrontendGlob->memoryStats.wantedImageMemory;
      imageStreamingQuality = streamFrontendGlob->imageStreamingQuality;
      v7 = (float)wantedImageMemory;
      if ( wantedImageMemory < 0 )
      {
        v8 = (float)wantedImageMemory;
        v7 = v8 + 1.8446744e19;
      }
      Com_sprintf(dest, 0x100ui64, "%.4f, %.4f, %.4f", streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][0][0].v[0], streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][0][0].v[1], streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][0][0].v[2]);
      Com_Printf(35, "[StreamingQuality] StreamingQuality is %.4f at position ( %s ). ( %.4f MB is needed to reach Streaming Quality %.4f )\n", imageStreamingQuality, dest, (float)(v7 * 0.00000095367432), value);
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v9 = DLog_BeginEvent(&context, "streaming_quality");
        context.autoEndEvent = 1;
        if ( v9 && DLog_Float32(&context, "streaming_quality", imageStreamingQuality) && DLog_String(&context, "view_pos", dest, 0) && DLog_Float32(&context, "wanted_mb", v7 * 0.00000095367432) && DLog_Float32(&context, "target_quality", value) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
Stream_Debug_CalcBytesLoadedForImage
==============
*/
__int64 Stream_Debug_CalcBytesLoadedForImage(const GfxImage *image)
{
  unsigned int v2; 
  unsigned int GfxImageIndex; 
  unsigned int i; 
  StreamFrontendGlob *v5; 
  unsigned int v6; 
  unsigned int *mAlloc; 
  unsigned int v8; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  unsigned int v10; 
  __int64 v12; 
  __int64 v13; 

  v2 = 0;
  GfxImageIndex = DB_GetGfxImageIndex(image);
  for ( i = 0; i < image->streamedPartCount; ++i )
  {
    v5 = streamFrontendGlob;
    v6 = i + 4 * GfxImageIndex;
    if ( v6 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v13) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v12) = i + 4 * GfxImageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    mAlloc = v5->imageBits.mAlloc;
    if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v8 = mAlloc[(__int64)(int)v6 >> 5];
    if ( _bittest((const int *)&v8, v6 & 0x1F) )
    {
      if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( i >= Image_GetStreamedPartCount(image) )
      {
        LODWORD(v13) = Image_GetStreamedPartCount(image);
        LODWORD(v12) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      p_levelCountAndSize = &image->streams[i].levelCountAndSize;
      if ( i )
        v10 = ((unsigned int)*p_levelCountAndSize >> 4) - (*((_DWORD *)&image->levelCount + 10 * i) >> 4);
      else
        v10 = (unsigned int)*p_levelCountAndSize >> 4;
      v2 += v10;
    }
  }
  return v2;
}

/*
==============
Stream_Debug_CalcWantedBytesForImage
==============
*/
__int64 Stream_Debug_CalcWantedBytesForImage(const GfxImage *image)
{
  unsigned int GfxImageIndex; 
  const dvar_t *v3; 
  unsigned int v4; 
  float value; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  signed int v9; 
  char *v10; 
  StreamFrontendGlob *v11; 
  unsigned int *mStaticForced; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v16; 
  __int64 v17; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  v3 = DVARFLT_stream_distanceImageNeeded;
  v4 = GfxImageIndex;
  if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  if ( (COERCE_UNSIGNED_INT(value * value) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  if ( image->streamedPartCount )
  {
    v8 = 4 * v4;
    do
    {
      v9 = v8 + v7;
      v10 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
      if ( v8 + v7 >= 0x50000 )
      {
        LODWORD(v17) = 327680;
        LODWORD(v16) = v8 + v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( *(_DWORD *)&v10[4 * v9 + 2775264] <= COERCE_UNSIGNED_INT(value * value) >> 7 )
        goto LABEL_34;
      v11 = streamFrontendGlob;
      if ( v9 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v17) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v16) = v8 + v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      mStaticForced = v11->imageBits.mStaticForced;
      if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v13 = mStaticForced[(__int64)v9 >> 5];
      if ( _bittest((const int *)&v13, v9 & 0x1F) )
      {
LABEL_34:
        if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( v7 >= Image_GetStreamedPartCount(image) )
        {
          LODWORD(v17) = Image_GetStreamedPartCount(image);
          LODWORD(v16) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( v7 )
          v14 = ((unsigned int)image->streams[v7].levelCountAndSize >> 4) - (*((_DWORD *)&image->levelCount + 10 * v7) >> 4);
        else
          v14 = (unsigned int)image->streams[0].levelCountAndSize >> 4;
        v6 += v14;
      }
      ++v7;
    }
    while ( v7 < image->streamedPartCount );
  }
  return v6;
}

/*
==============
Stream_Debug_CalculateMemoryStats
==============
*/
void Stream_Debug_CalculateMemoryStats(StreamFrontendMemoryStats *outStats, bool calculateAllStats)
{
  const dvar_t *v4; 
  StreamSortListFrame *v5; 
  int v6; 
  __int64 v7; 
  unsigned __int64 *mSorted; 
  unsigned __int64 v9; 
  int v10; 
  __int64 v11; 
  unsigned __int64 *v12; 
  unsigned __int64 v13; 
  _BYTE v14[96]; 
  __int128 v15; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Debug_CalculateMemoryStats");
  v4 = DVARFLT_stream_distanceImageNeeded;
  if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( (COERCE_UNSIGNED_INT(v4->current.value * v4->current.value) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  v5 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead];
  memset_0(v14, 0, 0x70ui64);
  if ( v5 == (StreamSortListFrame *)-4014096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockRead(&v5->imageSortList.mCS);
  StreamSortList_327680_::IterateRange__lambda_2249a83867f5e171be3bcc5afc88c5a3___((_DWORD)v5 + 1351680, 0, (const Stream_Debug_CalculateMemoryStats::__l2::<lambda_2249a83867f5e171be3bcc5afc88c5a3> *)(unsigned int)(v5->imageSortList.mCount - 1));
  Sys_UnlockRead(&v5->imageSortList.mCS);
  if ( calculateAllStats )
  {
    if ( v5 == (StreamSortListFrame *)-4380224i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&v5->meshSortList.mCS);
    v6 = v5->meshSortList.mCount - 1;
    if ( v6 >= 0 )
    {
      v7 = v6 + 1i64;
      mSorted = (unsigned __int64 *)v5->meshSortList.mSorted;
      do
      {
        v9 = *mSorted >> 45;
        if ( !StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v9) )
          *(_QWORD *)&v14[16] += DB_GetXModelSurfsAtIndex(v9)->shared->dataSize;
        ++mSorted;
        --v7;
      }
      while ( v7 );
    }
    Sys_UnlockRead(&v5->meshSortList.mCS);
    if ( v5 == (StreamSortListFrame *)-4688112i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&v5->genericSortList.mCS);
    v10 = v5->genericSortList.mCount - 1;
    if ( v10 >= 0 )
    {
      v11 = v10 + 1i64;
      v12 = (unsigned __int64 *)v5->genericSortList.mSorted;
      do
      {
        v13 = *v12 >> 45;
        if ( !StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, v13) )
          *(_QWORD *)&v14[24] += DB_GetStreamKeyAtIndex(v13)->dataSize;
        ++v12;
        --v11;
      }
      while ( v11 );
    }
    Sys_UnlockRead(&v5->genericSortList.mCS);
  }
  *(__m256i *)&outStats->wantedImageMemory = *(__m256i *)v14;
  *(__m256i *)outStats->wantedImageMemoryByDistance = *(__m256i *)&v14[32];
  *(__m256i *)&outStats->wantedImageMemoryByDistance[4] = *(__m256i *)&v14[64];
  *(_OWORD *)&outStats->wantedImageMemoryByDistance[8] = v15;
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Debug_DrawCameraVelocity
==============
*/
void Stream_Debug_DrawCameraVelocity(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v2; 
  double v4; 
  const vec3_t *ClientVelocity; 
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  const dvar_t *v11; 
  GfxFont *FontHandle; 
  __int64 v13; 
  float w; 
  float h; 
  float y; 
  float x; 
  GfxColor color; 
  GfxColor v19; 
  double v20; 
  int v21; 
  char dest[128]; 

  v2 = DCONST_DVARBOOL_stream_drawCameraVelocity;
  if ( !DCONST_DVARBOOL_stream_drawCameraVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawCameraVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    y = FLOAT_430_0;
    h = FLOAT_15_0;
    x = 0.0;
    w = FLOAT_300_0;
    ScrPlace_ApplyRect(scrPlace, &x, &y, &w, &h, 1, 1);
    v4 = CL_StreamViews_ParametricVelocity(LOCAL_CLIENT_0);
    ClientVelocity = CL_StreamViews_GetClientVelocity(LOCAL_CLIENT_0);
    v6 = *(double *)ClientVelocity->v;
    *(float *)&ClientVelocity = ClientVelocity->v[2];
    v20 = v6;
    v7 = (float)(*(float *)&v6 * *(float *)&v6) + (float)(*((float *)&v20 + 1) * *((float *)&v20 + 1));
    v21 = (int)ClientVelocity;
    LODWORD(v8) = (unsigned int)ClientVelocity & _xmm;
    v9 = fsqrt((float)(*(float *)&ClientVelocity * *(float *)&ClientVelocity) + v7);
    color.packed = 0x80000000;
    v10 = fsqrt(v7);
    v19.packed = (int)(float)(*(float *)&v4 * 255.0) | (((int)(float)((float)(1.0 - *(float *)&v4) * 255.0) | 0x7F00) << 16);
    R_AddCmdDrawRect2D(x - 1.0, y - 1.0, w + 2.0, h + 2.0, &color, 0);
    R_AddCmdDrawRect2D(x, y, *(float *)&v4 * w, h, &v19, 1);
    v11 = DVARFLT_stream_maxAnticipatedVelocity;
    if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    Com_sprintf_truncate<128>((char (*)[128])dest, "Velocity %.03f, %.0f \\ %.0f, XY=%.0f Z=%.0f", *(float *)&v4, v9, v11->current.value, v10, v8);
    FontHandle = UI_GetFontHandle(scrPlace, 5, 1.0);
    v13 = -1i64;
    do
      ++v13;
    while ( dest[v13] );
    UI_DrawText(scrPlace, dest, v13, FontHandle, 2.0, 442.0, 1, 1, 0.25, &colorWhite, 3);
  }
}

/*
==============
Stream_Debug_DrawDebugOverlays
==============
*/
void Stream_Debug_DrawDebugOverlays(LocalClientNum_t localClientIndex)
{
  Stream_Debug_DrawTopSortedImageList(localClientIndex);
  Stream_Debug_DrawSortLists(localClientIndex);
  Stream_Debug_DrawTouchedImages(localClientIndex);
  Stream_Debug_DrawDefrag(localClientIndex);
}

/*
==============
Stream_Debug_DrawDefrag
==============
*/
void Stream_Debug_DrawDefrag(LocalClientNum_t localClientIndex)
{
  const dvar_t *v1; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float lineHeight; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  unsigned __int64 SubPageWaste; 
  const char *v11; 
  StreamDefragRegionStats outMoveableRegionStats; 
  StreamDefragRegionStats stats; 
  StreamDefragRegionStats outFixedRegionStats; 
  StreamDefragRegionStats v15; 

  v1 = DVARBOOL_stream_drawDefrag;
  if ( !DVARBOOL_stream_drawDefrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawDefrag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientIndex);
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, 0.18000001);
    lineHeight = (float)UI_TextHeight(FontHandle, 0.18000001);
    Stream_Defrag_GetRegionStats(DODGE, &outFixedRegionStats, &outMoveableRegionStats);
    Stream_Defrag_GetRegionStats(MOVEMENT, &v15, &stats);
    v6 = Stream_Debug_DrawDefragRegion("GPU ^2Moveable^7", 1, &outMoveableRegionStats, ActivePlacement, FontHandle, 0.18000001, lineHeight, 128.0, 33.599998);
    v7 = Stream_Debug_DrawDefragRegion("^5CPU^7 ^2Moveable^7", 1, &stats, ActivePlacement, FontHandle, 0.18000001, lineHeight, 128.0, v6);
    v8 = Stream_Debug_DrawDefragRegion("GPU ^8Fixed^7", 0, &outFixedRegionStats, ActivePlacement, FontHandle, 0.18000001, lineHeight, 128.0, v7);
    v9 = Stream_Debug_DrawDefragRegion("^5CPU^7 ^8Fixed^7", 0, &v15, ActivePlacement, FontHandle, 0.18000001, lineHeight, 128.0, v8);
    SubPageWaste = Mem_Paged_GetSubPageWaste();
    v11 = j_va("Mem_Paged sub-page waste: ^5%zu^7 bytes / ^5%zu^7 KB / ^5%zu^7 MB", SubPageWaste, SubPageWaste >> 10, SubPageWaste >> 20);
    UI_DrawText(ActivePlacement, v11, 0x7FFFFFFF, FontHandle, 128.0, v9, 1, 1, 0.18000001, &colorWhite, 3);
  }
}

/*
==============
Stream_Debug_DrawDefragRegion
==============
*/
float Stream_Debug_DrawDefragRegion(const char *regionName, bool isMoveableRegion, const StreamDefragRegionStats *stats, const ScreenPlacement *scrPlace, GfxFont *const font, float fontScale, float lineHeight, float x, float y)
{
  __int128 v9; 
  __int128 v10; 
  float v14; 
  unsigned __int64 endAddress; 
  unsigned __int64 baseAddress; 
  unsigned __int64 v17; 
  signed __int64 reserved; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  unsigned int *v22; 
  unsigned int *v23; 
  __int64 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  signed __int64 allocated; 
  float v32; 
  float v33; 
  float v34; 
  signed __int64 v35; 
  float v36; 
  float v37; 
  double v38; 
  __int64 v39; 
  const char *v40; 
  unsigned int *v41; 
  __int64 v42; 
  float v43; 
  signed __int64 used; 
  float v45; 
  float v46; 
  float v47; 
  signed __int64 v48; 
  float v49; 
  float v50; 
  double v51; 
  __int64 v52; 
  const char *v53; 
  unsigned int *v54; 
  __int64 v55; 
  float v56; 
  signed __int64 committed; 
  float v58; 
  float v59; 
  float v60; 
  signed __int64 v61; 
  float v62; 
  float v63; 
  double v64; 
  __int64 v65; 
  const char *v66; 
  unsigned int *v67; 
  __int64 v68; 
  float v69; 
  signed __int64 alignWaste; 
  float v71; 
  float v72; 
  float v73; 
  signed __int64 v74; 
  float v75; 
  float v76; 
  double v77; 
  __int64 v78; 
  const char *v79; 
  unsigned int *v80; 
  __int64 v81; 
  float v82; 
  signed __int64 fullyUnmappedNotYetReleased; 
  float v84; 
  float v85; 
  float v86; 
  signed __int64 v87; 
  float v88; 
  float v89; 
  double v90; 
  __int64 v91; 
  const char *v92; 
  unsigned int *v93; 
  __int64 v94; 
  float v95; 
  signed __int64 fragmentation; 
  float v97; 
  float v98; 
  float v99; 
  signed __int64 v100; 
  float v101; 
  float v102; 
  double v103; 
  __int64 v104; 
  float v105; 
  char dest[1024]; 
  __int128 v108; 
  __int128 v109; 

  v108 = v10;
  if ( isMoveableRegion )
  {
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: in-flight defrag moves: ^3%u^7 (incl. outstanding unmaps) ^3%u^7 (copies only)", regionName, stats->inFlightDefragMoveCount, stats->inFlightDefragCopyCount);
    UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, y, 1, 1, fontScale, &colorWhite, 3);
    v14 = y + lineHeight;
  }
  else
  {
    v14 = y;
  }
  endAddress = stats->endAddress;
  baseAddress = stats->baseAddress;
  v17 = 0i64;
  reserved = stats->reserved;
  v19 = 0i64;
  while ( 1 )
  {
    v20 = "bytes";
    if ( reserved >= (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v19] )
      break;
    if ( (unsigned __int64)++v19 >= 3 )
    {
      v21 = "bytes";
      goto LABEL_9;
    }
  }
  v21 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v19];
LABEL_9:
  v22 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  v109 = v9;
  v23 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v24 = *v23;
    if ( reserved >= (unsigned __int64)v24 )
      break;
    if ( ++v23 == (unsigned int *)&unk_144132F94 )
    {
      v25 = FLOAT_1_8446744e19;
      v26 = (float)reserved;
      if ( reserved < 0 )
      {
        v27 = (float)reserved;
        v26 = v27 + 1.8446744e19;
      }
      goto LABEL_17;
    }
  }
  v25 = FLOAT_1_8446744e19;
  v28 = (float)reserved;
  if ( reserved < 0 )
  {
    v29 = (float)reserved;
    v28 = v29 + 1.8446744e19;
  }
  v30 = (float)v24;
  v26 = v28 / v30;
LABEL_17:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: reserved=^5%.2f %s^7 (base=^30x%016zx^7, end=^30x%016zx^7)", regionName, v26, v21, baseAddress, endAddress);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v14, 1, 1, fontScale, &colorWhite, 3);
  allocated = stats->allocated;
  v32 = v14 + lineHeight;
  v33 = (float)allocated;
  if ( allocated < 0 )
  {
    v34 = (float)allocated;
    v33 = v34 + v25;
  }
  v35 = stats->reserved;
  v36 = (float)v35;
  if ( v35 < 0 )
  {
    v37 = (float)v35;
    v36 = v37 + v25;
  }
  v38 = (float)((float)(v33 / v36) * 100.0);
  v39 = 0i64;
  while ( allocated < (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v39] )
  {
    if ( (unsigned __int64)++v39 >= 3 )
    {
      v40 = "bytes";
      goto LABEL_26;
    }
  }
  v40 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v39];
LABEL_26:
  v41 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v42 = *v41;
    if ( allocated >= (unsigned __int64)v42 )
      break;
    if ( ++v41 == (unsigned int *)&unk_144132F94 )
      goto LABEL_31;
  }
  v43 = (float)v42;
  v33 = v33 / v43;
LABEL_31:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: allocated=^5%.2f %s^7 (^3%.2f^7%% of reserved) (tail=^30x%016zx^7, head=^30x%016zx^7)", regionName, v33, v40, v38, stats->tailAddress, stats->headAddress);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v32, 1, 1, fontScale, &colorWhite, 3);
  used = stats->used;
  v45 = v32 + lineHeight;
  v46 = (float)used;
  if ( used < 0 )
  {
    v47 = (float)used;
    v46 = v47 + v25;
  }
  v48 = stats->allocated;
  v49 = (float)v48;
  if ( v48 < 0 )
  {
    v50 = (float)v48;
    v49 = v50 + v25;
  }
  v51 = (float)((float)(v46 / v49) * 100.0);
  v52 = 0i64;
  while ( used < (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v52] )
  {
    if ( (unsigned __int64)++v52 >= 3 )
    {
      v53 = "bytes";
      goto LABEL_40;
    }
  }
  v53 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v52];
LABEL_40:
  v54 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v55 = *v54;
    if ( used >= (unsigned __int64)v55 )
      break;
    if ( ++v54 == (unsigned int *)&unk_144132F94 )
      goto LABEL_45;
  }
  v56 = (float)v55;
  v46 = v46 / v56;
LABEL_45:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: used=^5%.2f %s^7 (^3%.2f^7%% of allocated)", regionName, v46, v53, v51);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v45, 1, 1, fontScale, &colorWhite, 3);
  committed = stats->committed;
  v58 = v45 + lineHeight;
  v59 = (float)committed;
  if ( committed < 0 )
  {
    v60 = (float)committed;
    v59 = v60 + v25;
  }
  v61 = stats->used;
  v62 = (float)v61;
  if ( v61 < 0 )
  {
    v63 = (float)v61;
    v62 = v63 + v25;
  }
  v64 = (float)((float)(v59 / v62) * 100.0);
  v65 = 0i64;
  while ( committed < (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v65] )
  {
    if ( (unsigned __int64)++v65 >= 3 )
    {
      v66 = "bytes";
      goto LABEL_54;
    }
  }
  v66 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v65];
LABEL_54:
  v67 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v68 = *v67;
    if ( committed >= (unsigned __int64)v68 )
      break;
    if ( ++v67 == (unsigned int *)&unk_144132F94 )
      goto LABEL_59;
  }
  v69 = (float)v68;
  v59 = v59 / v69;
LABEL_59:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     committed=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, v59, v66, v64);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v58, 1, 1, fontScale, &colorWhite, 3);
  alignWaste = stats->alignWaste;
  v71 = v58 + lineHeight;
  v72 = (float)alignWaste;
  if ( alignWaste < 0 )
  {
    v73 = (float)alignWaste;
    v72 = v73 + v25;
  }
  v74 = stats->used;
  v75 = (float)v74;
  if ( v74 < 0 )
  {
    v76 = (float)v74;
    v75 = v76 + v25;
  }
  v77 = (float)((float)(v72 / v75) * 100.0);
  v78 = 0i64;
  while ( alignWaste < (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v78] )
  {
    if ( (unsigned __int64)++v78 >= 3 )
    {
      v79 = "bytes";
      goto LABEL_68;
    }
  }
  v79 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v78];
LABEL_68:
  v80 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v81 = *v80;
    if ( alignWaste >= (unsigned __int64)v81 )
      break;
    if ( ++v80 == (unsigned int *)&unk_144132F94 )
      goto LABEL_73;
  }
  v82 = (float)v81;
  v72 = v72 / v82;
LABEL_73:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     alignment waste=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, v72, v79, v77);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v71, 1, 1, fontScale, &colorWhite, 3);
  fullyUnmappedNotYetReleased = stats->fullyUnmappedNotYetReleased;
  v84 = v71 + lineHeight;
  v85 = (float)fullyUnmappedNotYetReleased;
  if ( fullyUnmappedNotYetReleased < 0 )
  {
    v86 = (float)fullyUnmappedNotYetReleased;
    v85 = v86 + v25;
  }
  v87 = stats->used;
  v88 = (float)v87;
  if ( v87 < 0 )
  {
    v89 = (float)v87;
    v88 = v89 + v25;
  }
  v90 = (float)((float)(v85 / v88) * 100.0);
  v91 = 0i64;
  while ( fullyUnmappedNotYetReleased < (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v91] )
  {
    if ( (unsigned __int64)++v91 >= 3 )
    {
      v92 = "bytes";
      goto LABEL_82;
    }
  }
  v92 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v91];
LABEL_82:
  v93 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( 1 )
  {
    v94 = *v93;
    if ( fullyUnmappedNotYetReleased >= (unsigned __int64)v94 )
      break;
    if ( ++v93 == (unsigned int *)&unk_144132F94 )
      goto LABEL_87;
  }
  v95 = (float)v94;
  v85 = v85 / v95;
LABEL_87:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     fully unmapped (but not yet released)=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, v85, v92, v90);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v84, 1, 1, fontScale, &colorWhite, 3);
  fragmentation = stats->fragmentation;
  v97 = v84 + lineHeight;
  v98 = (float)fragmentation;
  if ( fragmentation < 0 )
  {
    v99 = (float)fragmentation;
    v98 = v99 + v25;
  }
  v100 = stats->allocated;
  v101 = (float)v100;
  if ( v100 < 0 )
  {
    v102 = (float)v100;
    v101 = v102 + v25;
  }
  v103 = (float)((float)(v98 / v101) * 100.0);
  do
  {
    if ( fragmentation >= (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v17] )
    {
      v20 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v17];
      break;
    }
    ++v17;
  }
  while ( v17 < 3 );
  while ( 1 )
  {
    v104 = *v22;
    if ( fragmentation >= (unsigned __int64)v104 )
      break;
    if ( ++v22 == (unsigned int *)&unk_144132F94 )
      goto LABEL_100;
  }
  v105 = (float)v104;
  v98 = v98 / v105;
LABEL_100:
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: fragmentation=^5%.2f %s^7 (^3%.2f^7%% of allocated)", regionName, v98, v20, v103);
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, x, v97, 1, 1, fontScale, &colorWhite, 3);
  return (float)(lineHeight + v97) + lineHeight;
}

/*
==============
Stream_Debug_DrawMetricsHitTable
==============
*/
void Stream_Debug_DrawMetricsHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  const dvar_t *v6; 
  unsigned int v7; 
  const Material **p_material; 
  const dvar_t *v9; 
  __int64 v10; 
  CG_DrawHits_Hit *p_lockedHit; 
  const CG_DrawHits_Hit *v12; 
  __int128 v13; 
  unsigned int v14; 
  CG_DrawHits_Hit *v15; 

  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1476, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  v6 = DVARBOOL_stream_drawMetrics;
  if ( !DVARBOOL_stream_drawMetrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v7 = 0;
    if ( hitCount )
    {
      p_material = &hits->material;
      do
      {
        if ( *p_material )
          break;
        ++v7;
        p_material += 57;
      }
      while ( v7 < hitCount );
    }
    v9 = DVARBOOL_stream_drawMetricsLockHits;
    if ( !DVARBOOL_stream_drawMetricsLockHits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsLockHits") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      if ( !s_streamDebugGlob.isLockedHitSet )
      {
        if ( v7 == hitCount )
          return;
        v10 = 3i64;
        s_streamDebugGlob.isLockedHitSet = 1;
        p_lockedHit = &s_streamDebugGlob.lockedHit;
        v12 = &hits[v7];
        do
        {
          p_lockedHit = (CG_DrawHits_Hit *)((char *)p_lockedHit + 128);
          v13 = *(_OWORD *)&v12->coord;
          v12 = (const CG_DrawHits_Hit *)((char *)v12 + 128);
          *(_OWORD *)p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq = v13;
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[4] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[4];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[12] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[12];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
          *(_OWORD *)&p_lockedHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28] = *(_OWORD *)&v12[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28];
          --v10;
        }
        while ( v10 );
        *(_OWORD *)&p_lockedHit->coord = *(_OWORD *)&v12->coord;
        *(_OWORD *)&p_lockedHit->surfaceFlags = *(_OWORD *)&v12->surfaceFlags;
        *(_OWORD *)&p_lockedHit->modelType = *(_OWORD *)&v12->modelType;
        *(_OWORD *)&p_lockedHit->modelInfo.superTerrain.combinedAlbedoMap = *(_OWORD *)&v12->modelInfo.superTerrain.combinedAlbedoMap;
        *(_QWORD *)&p_lockedHit->modelInfo.superTerrain.layerMaterialCount = *(_QWORD *)&v12->modelInfo.superTerrain.layerMaterialCount;
      }
      v14 = 1;
      v15 = &s_streamDebugGlob.lockedHit;
    }
    else
    {
      if ( v7 == hitCount )
        return;
      s_streamDebugGlob.isLockedHitSet = 0;
      v14 = hitCount - v7;
      v15 = (CG_DrawHits_Hit *)&hits[v7];
    }
    Stream_Debug_DrawMetricsHitTableInternal(localClientIndex, v15, v14);
  }
}

/*
==============
Stream_Debug_DrawMetricsHitTableInternal
==============
*/
void Stream_Debug_DrawMetricsHitTableInternal(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  const dvar_t *v5; 
  float value; 
  const ScreenPlacement *v7; 
  __int128 v8; 
  __int64 sortListRead; 
  int mCount; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  GfxFont *v14; 
  const char *v15; 
  __int128 v16; 
  bool v17; 
  const char *v18; 
  unsigned int v19; 
  unsigned int v20; 
  float coord; 
  __int128 v22; 
  const GfxImage **p_combinedAlbedoMap; 
  Material *v24; 
  int v25; 
  unsigned int layerCount; 
  int v27; 
  int v28; 
  __int128 v29; 
  float v30; 
  __int64 v31; 
  const StTerrain *terrain; 
  const dvar_t *v33; 
  StDiskTerrainSurface *v34; 
  unsigned int unsignedInt; 
  const GfxImage **v36; 
  unsigned int v37; 
  __int64 v38; 
  const Material *v39; 
  double v40; 
  const char *v41; 
  const char *v42; 
  __int128 v43; 
  unsigned int v44; 
  GfxImage *v45; 
  const XModel *v46; 
  unsigned int XModelIndex; 
  unsigned int v48; 
  unsigned int v49; 
  __int128 v50; 
  __int128 v51; 
  unsigned __int64 v52; 
  unsigned int v53; 
  unsigned __int64 v54; 
  const XModelSurfs *v55; 
  int XModelSurfsIndex; 
  __int64 v57; 
  float dataSize; 
  double v59; 
  bool v60; 
  const char *v61; 
  bool v62; 
  StreamFrontendGlob *v63; 
  const char *v64; 
  unsigned int *v65; 
  int v66; 
  bool v67; 
  unsigned int *v68; 
  bool v69; 
  const char *v70; 
  const char *v71; 
  const char *v72; 
  bool v73; 
  const char *v74; 
  const char *v75; 
  bool v76; 
  const char *v77; 
  const char *v78; 
  __int128 v79; 
  __int128 v80; 
  StreamFrontendGlob *v81; 
  StreamDistance v82; 
  float v83; 
  const char *SpecialStreamDistanceStr; 
  const Material *v85; 
  __int128 v86; 
  unsigned __int64 v87; 
  GfxSurface *surfaces; 
  signed __int64 v89; 
  unsigned __int64 v90; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  __int128 v94; 
  __int128 v95; 
  __int64 v96; 
  float *himipRadiusInvSqCompacted; 
  unsigned int Int_Internal_DebugName; 
  __int64 v99; 
  __int64 v100; 
  float *v101; 
  Material *v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  char *fmt; 
  char *fmta; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 horzAlignb; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  __int64 scale; 
  __int64 v114; 
  __int64 v115; 
  bool SortListText_45056; 
  unsigned int v118; 
  GfxFont *font; 
  unsigned int v120; 
  int index; 
  const GfxImage **v122; 
  Material *material; 
  unsigned int v124; 
  unsigned int v125; 
  const char *v126; 
  const char *v127; 
  ScreenPlacement *scrPlace; 
  char sortListText[16]; 
  char dest[1024]; 

  if ( !hitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1205, ASSERT_TYPE_ASSERT, "(hitCount >= 1)", (const char *)&queryFormat, "hitCount >= 1") )
    __debugbreak();
  Sys_WaitStreamFrontendUpdateWorkerCmds();
  v5 = DVARFLT_stream_drawMetricsFontSize;
  if ( !DVARFLT_stream_drawMetricsFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsFontSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientIndex);
  v7 = scrPlace;
  font = UI_GetFontHandle(scrPlace, 5, value);
  v16 = 0i64;
  *(float *)&v16 = (float)UI_TextHeight(font, value);
  v8 = v16;
  sortListRead = streamFrontendGlob->sortListRead;
  mCount = streamFrontendGlob->sortLists[sortListRead].genericSortList.mCount;
  v11 = streamFrontendGlob->sortLists[sortListRead].meshSortList.mCount;
  v12 = streamFrontendGlob->sortLists[sortListRead].imageSortList.mCount;
  v13 = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  LODWORD(horzAlign) = mCount;
  LODWORD(fmt) = v11;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Update frame index: %u   Sort list counts: ^5%d^7 images, ^5%d^7 meshes, ^5%d^7 generics", v13, v12, fmt, horzAlign);
  v14 = font;
  CG_DrawHits_DrawText(scrPlace, dest, font, 8.0, 38.399998, 1, 1, value, &colorWhite);
  v15 = "^2Zone StreamTree^7";
  *(float *)&v16 = *(float *)&v16 + 38.399998;
  if ( !rgp.world->materialStreamTreeGrid.cellKeys )
    v15 = "^3Solo StreamTree^7";
  v17 = Stream_UseXModelStreamTree();
  v18 = "^2StreamTree Grid^7";
  if ( !v17 )
    v18 = "^3None^7";
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Accel Struct:    Materials / Images: %s    XModels: %s", v15, v18);
  CG_DrawHits_DrawText(scrPlace, dest, font, 8.0, *(float *)&v16, 1, 1, value, &colorWhite);
  *(float *)&v16 = *(float *)&v16 + *(float *)&v8;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Legend: A=alloc, Lo=loading, I=in-use, L=loaded, S=in sort list, l<idx>/r<idx>=sort list left[unload]/right[load] index, F=forced, T=touched");
  CG_DrawHits_DrawText(scrPlace, dest, font, 8.0, *(float *)&v16, 1, 1, value, &colorGreen);
  *(float *)&v16 = *(float *)&v16 + *(float *)&v8;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "        Meshes/generics only: F=freeable, D=in-danger");
  CG_DrawHits_DrawText(scrPlace, dest, font, 8.0, *(float *)&v16, 1, 1, value, &colorGreen);
  v19 = hitCount;
  v20 = 0;
  v118 = 0;
  coord = hits->coord;
  *(float *)&v16 = *(float *)&v16 + *(float *)&v8;
  v22 = v16;
  if ( hitCount )
  {
    p_combinedAlbedoMap = &hits->modelInfo.superTerrain.combinedAlbedoMap;
    v122 = &hits->modelInfo.superTerrain.combinedAlbedoMap;
    while ( 1 )
    {
      if ( *(float *)&v22 > v7->realViewportSize.v[1] )
        return;
      v24 = (Material *)*(p_combinedAlbedoMap - 3);
      material = v24;
      if ( v24 )
        break;
LABEL_122:
      ++v20;
      p_combinedAlbedoMap += 57;
      v118 = v20;
      v122 = p_combinedAlbedoMap;
      if ( v20 >= v19 )
        return;
    }
    if ( coord < *((float *)p_combinedAlbedoMap - 12) )
      return;
    v25 = *((_DWORD *)p_combinedAlbedoMap - 4);
    layerCount = v24->layerCount;
    if ( v25 )
    {
      v27 = v25 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "super terrain: %u", *((unsigned int *)p_combinedAlbedoMap - 2));
            CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v22, 1, 1, value, &colorWhite);
            v29 = v22;
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "combined maps  ^7himipRadiusInvSq = %f", *((float *)p_combinedAlbedoMap - 1));
            CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v22 + *(float *)&v8, 1, 1, value, &colorWhite);
            *(float *)&v29 = (float)((float)(*(float *)&v22 + *(float *)&v8) + *(float *)&v8) + Stream_Debug_DrawMetricsHitTableInternalImage(*p_combinedAlbedoMap, v7, v14, value, *(float *)&v8, 8.0, (float)(*(float *)&v22 + *(float *)&v8) + *(float *)&v8);
            v30 = Stream_Debug_DrawMetricsHitTableInternalImage(p_combinedAlbedoMap[1], v7, v14, value, *(float *)&v8, 8.0, *(float *)&v29);
            v31 = *((unsigned int *)p_combinedAlbedoMap - 2);
            terrain = s_stGlob.terrain;
            v33 = DVARINT_stream_drawMetricsLayerScroll;
            *(float *)&v29 = *(float *)&v29 + v30;
            v22 = v29;
            v34 = &s_stGlob.terrain->surfaces[v31];
            if ( !DVARINT_stream_drawMetricsLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsLayerScroll") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v33);
            unsignedInt = v33->current.unsignedInt;
            v36 = v122;
            v37 = *((_DWORD *)v122 + 4);
            v38 = v37 - 1;
            if ( (unsigned int)v38 > unsignedInt )
              v38 = unsignedInt;
            if ( (unsigned int)v38 < v37 )
            {
              do
              {
                v39 = (const Material *)v36[v38 + 3];
                v40 = *((float *)v36 + v38 + 70);
                v41 = j_va("layer %u", (unsigned int)v38);
                v42 = j_va("^7himipRadiusInvSq = %f", v40);
                v43 = v22;
                *(float *)&v43 = *(float *)&v22 + Stream_Debug_DrawMetricsHitTableInternalMaterial(v39, v41, v42, v7, font, value, *(float *)&v8, 8.0, *(float *)&v22);
                v22 = v43;
                v44 = v34->layerMaskMapIdxs[v38];
                if ( v44 >= terrain->flattenedImagesCount )
                {
                  LODWORD(vertAlign) = terrain->flattenedImagesCount;
                  LODWORD(horzAligna) = v34->layerMaskMapIdxs[v38];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1450, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", horzAligna, vertAlign) )
                    __debugbreak();
                }
                v45 = terrain->flattenedImages[(unsigned __int16)v44];
                if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1452, ASSERT_TYPE_ASSERT, "(layerMaskImage)", (const char *)&queryFormat, "layerMaskImage") )
                  __debugbreak();
                v14 = font;
                if ( v45 != rgp.whiteImage )
                {
                  *(float *)&v43 = *(float *)&v43 + Stream_Debug_DrawMetricsHitTableInternalImage(v45, v7, font, value, *(float *)&v8, 8.0, *(float *)&v43);
                  v22 = v43;
                }
                if ( *(float *)&v22 > v7->realViewportSize.v[1] )
                  break;
                v36 = v122;
                v38 = (unsigned int)(v38 + 1);
              }
              while ( (unsigned int)v38 < *((_DWORD *)v122 + 4) );
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1468, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          {
            __debugbreak();
          }
          goto LABEL_120;
        }
      }
      v46 = (const XModel *)*(p_combinedAlbedoMap - 1);
      XModelIndex = DB_GetXModelIndex(v46);
      LODWORD(scale) = *(_DWORD *)p_combinedAlbedoMap;
      v48 = XModelIndex;
      LODWORD(horzAligna) = *((_DWORD *)p_combinedAlbedoMap + 4);
      LODWORD(fmta) = *((_DWORD *)p_combinedAlbedoMap + 3);
      v120 = XModelIndex;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "model: %s ^5[assetIndex=%u, instIdx=%u, colIdx=%u]^7 scale=%.2f, rendered lod %u", v46->name, XModelIndex, fmta, horzAligna, *((float *)p_combinedAlbedoMap + 2), scale);
      CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v22, 1, 1, value, &colorWhite);
      v49 = 0;
      v51 = v22;
      *(float *)&v51 = *(float *)&v22 + *(float *)&v8;
      v50 = v51;
      if ( v46->numLods )
      {
        while ( 1 )
        {
          v52 = (unsigned __int64)v49 << 6;
          if ( *(XSurface **)((char *)&v46->lodInfo[0].surfs + v52) )
          {
            if ( XModelSurfs_IsStreamed(*(const XModelSurfs **)((char *)&v46->lodInfo[0].modelSurfsStaging + v52)) )
              break;
          }
          if ( ++v49 >= v46->numLods )
            goto LABEL_84;
        }
        v53 = 0;
        if ( v46->numLods )
        {
          do
          {
            v54 = (unsigned __int64)v53 << 6;
            if ( *(XSurface **)((char *)&v46->lodInfo[0].surfs + v54) )
            {
              v55 = *(XModelSurfs **)((char *)&v46->lodInfo[0].modelSurfsStaging + v54);
              if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
                __debugbreak();
              if ( !v55->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
                __debugbreak();
              if ( (v55->shared->flags & 1) != 0 )
              {
                XModelSurfsIndex = DB_GetXModelSurfsIndex(v55);
                v57 = XModelSurfsIndex;
                memset(sortListText, 0, sizeof(sortListText));
                index = XModelSurfsIndex;
                SortListText_45056 = Stream_Debug_GetSortListText_45056_(&streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead].meshSortList, XModelSurfsIndex, (char (*)[16])sortListText);
                dataSize = (float)v55->shared->dataSize;
                v59 = (float)(dataSize * 0.0009765625);
                v60 = RequestBits::CheckDanger(&streamFrontendGlob->meshRequest, v57);
                v61 = "^2D^7";
                if ( v60 )
                  v61 = "^1D^7";
                v126 = v61;
                v62 = RequestBits::CheckFreeable(&streamFrontendGlob->meshRequest, v57);
                v63 = streamFrontendGlob;
                v64 = "^1F^7";
                if ( v62 )
                  v64 = "^2F^7";
                v65 = streamFrontendGlob->meshRequest.bits[1];
                v127 = v64;
                v124 = streamFrontendGlob->meshRequest.frame[(unsigned int)v57];
                v125 = streamFrontendGlob->meshRequest.countStable[(unsigned int)v57];
                if ( !v65 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                    __debugbreak();
                  v63 = streamFrontendGlob;
                }
                v66 = 1 << (v57 & 0x1F);
                v67 = (v66 & v65[v57 >> 5]) == 0;
                v68 = v63->meshRequest.bits[0];
                v69 = !v67;
                if ( !v68 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                    __debugbreak();
                  v63 = streamFrontendGlob;
                }
                v67 = !v69 && (v66 & v68[v57 >> 5]) == 0;
                v70 = (char *)&queryFormat.fmt + 3;
                if ( !v67 )
                  v70 = "^2T^7";
                v71 = (char *)&queryFormat.fmt + 3;
                if ( StreamableBits::CheckForced(&v63->meshBits, v57) )
                  v71 = "^2F^7";
                v72 = "^1L^7";
                if ( StreamableBits::CheckLoaded(&streamFrontendGlob->meshBits, v57) )
                  v72 = "^2L^7";
                v73 = StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v57);
                v74 = "^1I^7";
                if ( v73 )
                  v74 = "^2I^7";
                v75 = (char *)&queryFormat.fmt + 3;
                if ( StreamableBits::CheckLoading(&streamFrontendGlob->meshBits, index) )
                  v75 = "^5Lo^7";
                v76 = StreamableBits::CheckAlloc(&streamFrontendGlob->meshBits, index);
                v77 = "^1A^7";
                if ( v76 )
                  v77 = "^2A^7";
                v78 = "^1S^7";
                if ( SortListText_45056 )
                  v78 = "^2S^7";
                LODWORD(v115) = v124;
                LODWORD(v114) = v125;
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: %s%s%s%s%s%s%s%s requests = %u frame = %u %s%s %.2f KB", v53, v77, v75, v74, v72, v71, v78, sortListText, v70, v114, v115, v127, v126, v59);
                v14 = font;
                v7 = scrPlace;
              }
              else
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: ^3<not streamed>^7", v53);
              }
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: ^3<not usable/transient unloaded>^7", v53);
            }
            CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v50, 1, 1, value, &colorWhite);
            ++v53;
            v79 = v8;
            *(float *)&v79 = *(float *)&v8 + *(float *)&v50;
            v50 = v79;
          }
          while ( v53 < v46->numLods );
          v48 = v120;
        }
      }
LABEL_84:
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  himipRadiusInvSq = %f", v46->himipRadiusInvSq[*((unsigned int *)v122 + 1)]);
      CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v50, 1, 1, value, &colorCyan);
      v80 = v50;
      *(float *)&v80 = *(float *)&v50 + *(float *)&v8;
      if ( XModelHasMaterialsWithStreamedImages(v46) )
      {
        v81 = streamFrontendGlob;
        if ( v48 >= 0x6000 )
        {
          LODWORD(vertAligna) = 24576;
          LODWORD(horzAlignb) = v48;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        v82.mValue = v81->modelDistance.mDistances[v48].mValue;
        if ( v82.mValue == -1 )
          v83 = FLOAT_3_4027977e38;
        else
          LODWORD(v83) = (StreamDistance)(v82.mValue << 7);
        SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v82);
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "  dist =%s %.2f", SpecialStreamDistanceStr, fsqrt(v83));
      }
      else
      {
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <no streamed images/fully resident>");
      }
      CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v80, 1, 1, value, &colorYellow);
      v85 = material;
      *(float *)&v80 = *(float *)&v80 + *(float *)&v8;
      v86 = v80;
LABEL_119:
      v105 = v86;
      *(float *)&v105 = *(float *)&v86 + Stream_Debug_DrawMetricsHitTableInternalMaterial(v85, "material", (const char *)&queryFormat.fmt + 3, v7, v14, value, *(float *)&v8, 8.0, *(float *)&v86);
      v22 = v105;
LABEL_120:
      v20 = v118;
      v19 = hitCount;
      goto LABEL_121;
    }
    if ( !rgp.world->surfaces.himipRadiusInvSqIndirection )
    {
LABEL_121:
      p_combinedAlbedoMap = v122;
      goto LABEL_122;
    }
    v87 = (unsigned __int64)*(p_combinedAlbedoMap - 1);
    surfaces = rgp.world->surfaces.surfaces;
    if ( (v87 < (unsigned __int64)surfaces || v87 >= (unsigned __int64)&surfaces[rgp.world->surfaces.count]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1381, ASSERT_TYPE_ASSERT, "(modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count)", (const char *)&queryFormat, "modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count") )
      __debugbreak();
    v89 = (char *)*(p_combinedAlbedoMap - 1) - (char *)rgp.world->surfaces.surfaces;
    v90 = v89 / 40;
    if ( (v89 / 40 < 0 || v90 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v90, "signed", v89 / 40) )
      __debugbreak();
    v91 = rgp.world->surfaces.himipRadiusInvSqIndirection[(unsigned int)v90];
    v92 = v91 >> 28;
    v93 = v91 & 0xFFFFFFF;
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "model: <world> ^5[surfaceIndex: %u]", (unsigned int)v90);
    CG_DrawHits_DrawText(v7, dest, font, 8.0, *(float *)&v22, 1, 1, value, &colorWhite);
    v95 = v22;
    *(float *)&v95 = *(float *)&v22 + *(float *)&v8;
    v94 = v95;
    if ( layerCount )
    {
      v96 = v93;
      if ( v92 > layerCount )
        v92 = layerCount;
      himipRadiusInvSqCompacted = rgp.world->surfaces.himipRadiusInvSqCompacted;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_stream_drawMetricsLayerScroll, "stream_drawMetricsLayerScroll");
      v99 = v92 - 1;
      if ( (unsigned int)v99 > Int_Internal_DebugName )
        v99 = Int_Internal_DebugName;
      if ( (unsigned int)v99 < v92 )
      {
        v100 = v99;
        v101 = &himipRadiusInvSqCompacted[v96 + (unsigned int)v99];
        v102 = material;
        do
        {
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "  layer %2u ^3%s^7: himipRadiusInvSq = %f", (unsigned int)v99, material->subMaterials[v100], *v101);
          CG_DrawHits_DrawText(v7, dest, font, 8.0, *(float *)&v94, 1, 1, value, &colorCyan);
          LODWORD(v99) = v99 + 1;
          ++v101;
          ++v100;
          v103 = v94;
          *(float *)&v103 = *(float *)&v94 + *(float *)&v8;
          v94 = v103;
        }
        while ( (unsigned int)v99 < v92 );
        v14 = font;
        goto LABEL_118;
      }
      v14 = font;
    }
    else
    {
      if ( !v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1394, ASSERT_TYPE_ASSERT, "(layerCountCompacted > 0)", (const char *)&queryFormat, "layerCountCompacted > 0") )
        __debugbreak();
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  himipRadiusInvSq = %f", rgp.world->surfaces.himipRadiusInvSqCompacted[v93]);
      v14 = font;
      CG_DrawHits_DrawText(v7, dest, font, 8.0, *(float *)&v95, 1, 1, value, &colorCyan);
      *(float *)&v95 = *(float *)&v95 + *(float *)&v8;
      v94 = v95;
    }
    v102 = material;
LABEL_118:
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <world surface; distance only set on material>");
    CG_DrawHits_DrawText(v7, dest, v14, 8.0, *(float *)&v94, 1, 1, value, &colorYellow);
    v85 = v102;
    v104 = v94;
    *(float *)&v104 = *(float *)&v94 + *(float *)&v8;
    v86 = v104;
    goto LABEL_119;
  }
}

/*
==============
Stream_Debug_DrawMetricsHitTableInternalImage
==============
*/
float Stream_Debug_DrawMetricsHitTableInternalImage(const GfxImage *image, const ScreenPlacement *scrPlace, GfxFont *const font, float fontScale, float lineHeight, float x, float y)
{
  GfxFont *v8; 
  __int64 GfxImageIndex; 
  const char *v11; 
  unsigned __int16 numElements; 
  __int64 height; 
  __int64 width; 
  float v15; 
  GfxImageFallback *fallback; 
  float size; 
  const dvar_t *v18; 
  char freqDomainMetricBias; 
  double v20; 
  int streamedPartCount; 
  const char *Name; 
  const char *v23; 
  float v24; 
  StreamFrontendGlob *v25; 
  StreamDistance v26; 
  unsigned int v27; 
  float v28; 
  const char *SpecialStreamDistanceStr; 
  float v30; 
  __int64 v31; 
  int v32; 
  StreamFrontendGlob *v33; 
  int v34; 
  char *v35; 
  StreamDistance v36; 
  __int64 v37; 
  const char *v38; 
  __int64 v39; 
  float v40; 
  double v41; 
  float v42; 
  double v43; 
  const char *v44; 
  StreamFrontendGlob *v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  StreamFrontendGlob *v49; 
  int v50; 
  int v51; 
  StreamFrontendGlob *v52; 
  const char *v53; 
  unsigned int *mStaticForced; 
  bool v55; 
  const char *v56; 
  unsigned int *mLoaded; 
  const char *v58; 
  StreamFrontendGlob *v59; 
  unsigned int *mUse; 
  StreamFrontendGlob *v61; 
  const char *v62; 
  unsigned int *mLoading; 
  const char *v64; 
  StreamFrontendGlob *v65; 
  unsigned int *mAlloc; 
  const char *v67; 
  const char *v68; 
  char *fmt; 
  char *fmta; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 horzAlignb; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  bool SortListText_327680; 
  int v78; 
  unsigned int v79; 
  __int64 v80; 
  __int64 v81; 
  const char *v82; 
  const char *v83; 
  const char *v84; 
  char sortListText[16]; 
  char v88[32]; 
  char v89[64]; 
  char v90[64]; 
  char dest[1024]; 

  v8 = font;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1023, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1024, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v11 = Image_TextureSemanticToString(image->semantic);
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "    image: %s ^5[assetIndex: %u](%s)^7", image->name, (unsigned int)GfxImageIndex, v11);
  CG_DrawHits_DrawText(scrPlace, dest, v8, x, y, 1, 1, fontScale, &colorWhite);
  numElements = image->numElements;
  height = image->height;
  width = image->width;
  v15 = lineHeight + y;
  if ( numElements <= 1u )
  {
    Com_sprintf<64>((char (*)[64])v90, "%ux%u", width, height);
  }
  else
  {
    LODWORD(fmt) = numElements;
    Com_sprintf<64>((char (*)[64])v90, "%ux%u|%u", width, height, fmt);
  }
  fallback = image->fallback;
  if ( fallback )
  {
    size = (float)fallback->size;
    Com_sprintf<64>((char (*)[64])v89, "fallback: %ux%u %.2f KB", fallback->width, fallback->height, (float)(size * 0.0009765625));
  }
  else
  {
    Com_sprintf<64>((char (*)[64])v89, "fallback: ^5<none>^7");
  }
  v18 = DVARBOOL_stream_freqDomainMetricBiasEnable;
  memset(v88, 0, sizeof(v88));
  if ( !DVARBOOL_stream_freqDomainMetricBiasEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricBiasEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    freqDomainMetricBias = image->freqDomainMetricBias;
    if ( freqDomainMetricBias )
    {
      v20 = Stream_DecodeFreqDomainMetricBias(freqDomainMetricBias);
      Com_sprintf_truncate<32>((char (*)[32])v88, ", freqBias: ^5%.4f [%d]^7", *(float *)&v20, (unsigned int)image->freqDomainMetricBias);
    }
  }
  streamedPartCount = image->streamedPartCount;
  Name = PixelFormat_GetName(image->format);
  v23 = "^3<not streamed>^7 ";
  if ( (image->flags & 0x40) != 0 )
    v23 = (char *)&queryFormat.fmt + 3;
  LODWORD(horzAlign) = streamedPartCount;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "           %s%s %s %u streamed parts, %s%s", v23, v90, Name, horzAlign, v89, v88);
  CG_DrawHits_DrawText(scrPlace, dest, v8, x, v15, 1, 1, fontScale, &colorWhite);
  v24 = v15 + lineHeight;
  if ( (image->flags & 0x40) == 0 )
    return v24 - y;
  v25 = streamFrontendGlob;
  if ( (unsigned int)GfxImageIndex >= 0x14000 )
  {
    LODWORD(vertAlign) = 81920;
    LODWORD(horzAligna) = GfxImageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAligna, vertAlign) )
      __debugbreak();
  }
  v26.mValue = v25->imageDistance.mDistances[(int)GfxImageIndex].mValue;
  v27 = streamFrontendGlob->imageUsedFrame[GfxImageIndex];
  if ( v26.mValue == -1 )
    v28 = FLOAT_3_4027977e38;
  else
    LODWORD(v28) = (StreamDistance)(v26.mValue << 7);
  SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v26);
  LODWORD(fmta) = v27;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "      dist =%s %.4f frame = %u", SpecialStreamDistanceStr, fsqrt(v28), fmta);
  CG_DrawHits_DrawText(scrPlace, dest, v8, x, v24, 1, 1, fontScale, &colorYellow);
  v30 = v24 + lineHeight;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "      ");
  v31 = 0i64;
  v79 = 0;
  if ( image->streamedPartCount )
  {
    v32 = 4 * GfxImageIndex;
    v78 = 4 * GfxImageIndex;
    do
    {
      v33 = streamFrontendGlob;
      v34 = v32 + v31;
      v35 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
      if ( (unsigned int)(v32 + v31) >= 0x50000 )
      {
        LODWORD(vertAligna) = 327680;
        LODWORD(horzAlignb) = v32 + v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
        v33 = streamFrontendGlob;
      }
      v36.mValue = *(_DWORD *)&v35[4 * v34 + 2775264];
      memset(sortListText, 0, sizeof(sortListText));
      SortListText_327680 = Stream_Debug_GetSortListText_327680_(&v33->sortLists[v33->sortListRead].imageSortList, v34, (char (*)[16])sortListText);
      v37 = -1i64;
      do
        ++v37;
      while ( dest[v37] );
      v81 = v37;
      v38 = ", ";
      if ( (_DWORD)v31 == image->streamedPartCount - 1 )
        v38 = (char *)&queryFormat.fmt + 3;
      v82 = v38;
      if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v31 >= Image_GetStreamedPartCount(image) )
      {
        LODWORD(vertAligna) = Image_GetStreamedPartCount(image);
        LODWORD(horzAlignb) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      if ( (_DWORD)v31 )
        v39 = ((unsigned int)image->streams[v31].levelCountAndSize >> 4) - ((unsigned int)image->streams[(unsigned int)(v31 - 1)].levelCountAndSize >> 4);
      else
        v39 = (unsigned int)image->streams[v31].levelCountAndSize >> 4;
      v40 = (float)v39;
      v41 = (float)(v40 * 0.0009765625);
      if ( v36.mValue == -1 )
        v42 = FLOAT_3_4027977e38;
      else
        LODWORD(v42) = (StreamDistance)(v36.mValue << 7);
      v43 = fsqrt(v42);
      v44 = Stream_Debug_GetSpecialStreamDistanceStr(v36);
      v45 = streamFrontendGlob;
      v83 = v44;
      if ( (unsigned int)(v34 >> 5) >= 0x2800 )
      {
        LODWORD(vertAligna) = 10240;
        LODWORD(horzAlignb) = v34 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      v46 = (__int64)v34 >> 5;
      v80 = v46;
      v47 = (__int64)&v45->imageTouchBits[1][v46];
      if ( (v47 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v47) )
        __debugbreak();
      v48 = *(_DWORD *)v47;
      v49 = streamFrontendGlob;
      v50 = 1 << (v34 & 0x1F);
      v51 = v48 & v50;
      if ( (unsigned int)(v34 >> 5) >= 0x2800 )
      {
        LODWORD(vertAligna) = 10240;
        LODWORD(horzAlignb) = v34 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      if ( (((_BYTE)v49 + 4 * (_BYTE)v46 - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (char *)v49->imageTouchBits + 4 * v46) )
        __debugbreak();
      v52 = streamFrontendGlob;
      v53 = (char *)&queryFormat.fmt + 3;
      if ( v51 != 0 || (v50 & v49->imageTouchBits[0][v46]) != 0 )
        v53 = "^2T^7";
      v84 = v53;
      if ( v34 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(horzAlignb) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      mStaticForced = v52->imageBits.mStaticForced;
      if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v55 = (v50 & mStaticForced[v46]) == 0;
      v56 = (char *)&queryFormat.fmt + 3;
      if ( !v55 )
        v56 = "^2F^7";
      mLoaded = streamFrontendGlob->imageBits.mLoaded;
      if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v58 = "^1L^7";
      v55 = (v50 & mLoaded[v80]) == 0;
      v59 = streamFrontendGlob;
      if ( !v55 )
        v58 = "^2L^7";
      if ( v79 + v78 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(horzAlignb) = v79 + v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      mUse = v59->imageBits.mUse;
      if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v55 = (v50 & mUse[v80]) == 0;
      v61 = streamFrontendGlob;
      v62 = "^1I^7";
      if ( !v55 )
        v62 = "^2I^7";
      if ( v79 + v78 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(horzAlignb) = v79 + v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      mLoading = v61->imageBits.mLoading;
      if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v64 = (char *)&queryFormat.fmt + 3;
      v55 = (v50 & mLoading[v80]) == 0;
      v65 = streamFrontendGlob;
      if ( !v55 )
        v64 = "^5Lo^7";
      if ( v79 + v78 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(horzAlignb) = v79 + v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
          __debugbreak();
      }
      mAlloc = v65->imageBits.mAlloc;
      if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v67 = "^1A^7";
      if ( (v50 & mAlloc[v80]) != 0 )
        v67 = "^2A^7";
      v68 = "^1S^7";
      if ( SortListText_327680 )
        v68 = "^2S^7";
      if ( Com_sprintf_truncate(&dest[v81], 1024 - v81, "part %u %s%s%s%s%s%s%s%s dist =%s %.4f %.2f KB%s", v79, v67, v64, v62, v58, v56, v68, sortListText, v84, v83, v43, v41, v82) < 0 )
        break;
      v31 = v79 + 1;
      v79 = v31;
      v32 = v78;
    }
    while ( (unsigned int)v31 < image->streamedPartCount );
    v8 = font;
  }
  CG_DrawHits_DrawText(scrPlace, dest, v8, x, v30, 1, 1, fontScale, &colorYellow);
  return (float)(v30 + lineHeight) - y;
}

/*
==============
Stream_Debug_DrawMetricsHitTableInternalMaterial
==============
*/
float Stream_Debug_DrawMetricsHitTableInternalMaterial(const Material *material, const char *materialPre, const char *materialPost, const ScreenPlacement *scrPlace, GfxFont *const font, float fontScale, float lineHeight, float x, float y)
{
  unsigned __int8 layerCount; 
  signed int MaterialIndex; 
  __int64 v15; 
  __int128 v16; 
  StreamFrontendGlob *v17; 
  StreamDistance v18; 
  float v19; 
  const char *SpecialStreamDistanceStr; 
  __int128 v21; 
  unsigned int i; 
  float v23; 
  __int128 v24; 
  char *fmt; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  char dest[1024]; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1121, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !materialPre && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1122, ASSERT_TYPE_ASSERT, "(materialPre)", (const char *)&queryFormat, "materialPre") )
    __debugbreak();
  if ( !materialPost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1123, ASSERT_TYPE_ASSERT, "(materialPost)", (const char *)&queryFormat, "materialPost") )
    __debugbreak();
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1124, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  layerCount = material->layerCount;
  MaterialIndex = DB_GetMaterialIndex(material);
  v15 = MaterialIndex;
  LODWORD(fmt) = MaterialIndex;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: %s ^5[assetIndex: %u] %s", materialPre, material->name, fmt, materialPost);
  CG_DrawHits_DrawText(scrPlace, dest, font, x, y, 1, 1, fontScale, &colorWhite);
  v16 = LODWORD(lineHeight);
  *(float *)&v16 = lineHeight + y;
  if ( (material->runtimeFlags & 0x10) != 0 )
  {
    if ( layerCount )
    {
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <layered material with streamed images; distance only set on images>");
    }
    else
    {
      v17 = streamFrontendGlob;
      if ( (unsigned int)v15 >= 0xB400 )
      {
        LODWORD(vertAlign) = 46080;
        LODWORD(horzAlign) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
          __debugbreak();
      }
      v18.mValue = v17->materialDistance.mDistances[v15].mValue;
      if ( v18.mValue == -1 )
        v19 = FLOAT_3_4027977e38;
      else
        LODWORD(v19) = (StreamDistance)(v18.mValue << 7);
      SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v18);
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  dist =%s %.4f", SpecialStreamDistanceStr, fsqrt(v19));
    }
  }
  else
  {
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <no streamed images/fully resident>");
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, x, *(float *)&v16, 1, 1, fontScale, &colorYellow);
  *(float *)&v16 = *(float *)&v16 + lineHeight;
  v21 = v16;
  if ( (material->runtimeFlags & 0x10) != 0 )
  {
    for ( i = 0; i < material->textureCount; v21 = v24 )
    {
      v23 = Stream_Debug_DrawMetricsHitTableInternalImage(material->textureTable[i++].image, scrPlace, font, fontScale, lineHeight, x, *(float *)&v21);
      v24 = v21;
      *(float *)&v24 = *(float *)&v21 + v23;
    }
  }
  return *(float *)&v21 - y;
}

/*
==============
Stream_Debug_DrawMetricsUpdate
==============
*/
void Stream_Debug_DrawMetricsUpdate(LocalClientNum_t localClientIndex)
{
  const dvar_t *v2; 
  const dvar_t *v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 960, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DVARBOOL_stream_drawMetrics;
  if ( !DVARBOOL_stream_drawMetrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = DVARBOOL_stream_drawMetricsLockView;
    if ( !DVARBOOL_stream_drawMetricsLockView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsLockView") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    CG_DrawHits_Activate(localClientIndex, COUNT, (CG_DrawHits_Filter)6, (CG_DrawHits_Options)v3->current.enabled);
  }
}

/*
==============
Stream_Debug_DrawSortLists
==============
*/
void Stream_Debug_DrawSortLists(LocalClientNum_t localClientIndex)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  StreamFrontendGlob *v6; 
  __int64 sortListRead; 
  double Quality_Image; 
  float v9; 
  double Quality_Mesh; 
  char *fmt; 
  Stream_Debug_DrawSortLists::__l13::<lambda_1da4f004ffa682f5aab5718f9b313130> filterFuncCommon; 
  Stream_Debug_DrawSortLists::__l13::<lambda_336efe4c9e8d121aa0cff81226e12fe2> v13; 
  Stream_Debug_DrawSortLists::__l19::<lambda_29f26645933ecb458ce0f93757ef6ca9> v14[2]; 
  float v15; 
  float v16; 
  float value; 
  Stream_Debug_DrawSortLists::__l2::<lambda_0040f16ab7d9a2fdd62b28d3ddbda264> drawLine; 
  Stream_Debug_DrawSortLists::__l13::<lambda_b267cbc876d3315e4cf100fef167db9d> drawSortListEntryFunc; 
  float v20; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  char dest[32]; 
  char text[1024]; 

  v1 = DVARINT_stream_drawSortLists;
  if ( !DVARINT_stream_drawSortLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawSortLists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( integer )
  {
    v4 = DVARFLT_stream_drawSortListsFontSize;
    if ( !DVARFLT_stream_drawSortListsFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawSortListsFontSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientIndex);
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, value);
    v5 = UI_TextHeight(FontHandle, value);
    v6 = streamFrontendGlob;
    v16 = (float)v5;
    drawLine.scrPlace = &ActivePlacement;
    drawLine.text = (char (*)[1024])text;
    drawLine.font = &FontHandle;
    drawLine.x = &v20;
    drawLine.y = &v15;
    drawLine.fontScale = &value;
    drawLine.lineHeight = &v16;
    v20 = FLOAT_64_0;
    v15 = FLOAT_24_0;
    sortListRead = streamFrontendGlob->sortListRead;
    Quality_Image = Stream_LoadQuality_Image();
    v9 = *(float *)&Quality_Image;
    Quality_Mesh = Stream_LoadQuality_Mesh();
    if ( v9 < 1.8446674e19 )
      Com_sprintf<32>((char (*)[32])dest, "%.4f", v9);
    else
      Com_sprintf<32>((char (*)[32])dest, "max");
    Com_sprintf_truncate<1024>((char (*)[1024])text, "Streaming quality: Image ^5%s^7, Mesh: ^5%.4f^7", dest, *(float *)&Quality_Mesh);
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, *drawLine.x, *drawLine.y, 1, 1, *drawLine.fontScale, &colorWhite, 3);
    *drawLine.y = *drawLine.y + *drawLine.lineHeight;
    LODWORD(fmt) = v6->sortLists[sortListRead].genericSortList.mCount;
    Com_sprintf_truncate<1024>((char (*)[1024])text, "Sort list counts: Image ^2%u^7, Mesh: ^2%u^7, Generic ^2%u^7", (unsigned int)v6->sortLists[sortListRead].imageSortList.mCount, (unsigned int)v6->sortLists[sortListRead].meshSortList.mCount, fmt);
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, *drawLine.x, *drawLine.y, 1, 1, *drawLine.fontScale, &colorWhite, 3);
    *drawLine.y = *drawLine.y + *drawLine.lineHeight;
    Com_sprintf_truncate<1024>((char (*)[1024])text, "^2Legend: A=alloc, Lo=loading, I=in-use, L=loaded, F=forced, T=touched - Meshes/generics only: F=freeable, D=in-danger^7");
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, *drawLine.x, *drawLine.y, 1, 1, *drawLine.fontScale, &colorWhite, 3);
    *drawLine.y = *drawLine.y + *drawLine.lineHeight;
    v15 = v15 + v16;
    if ( (unsigned int)(integer - 1) <= 1 )
    {
      filterFuncCommon = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      v14[0] = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v13 = 0;
      Stream_Debug_DrawSortList_StreamSortList_327680___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_b267cbc876d3315e4cf100fef167db9d___lambda_a03bd0ecdb9f9113e98cb9aecc2cda9e___lambda_336efe4c9e8d121aa0cff81226e12fe2___lambda_1da4f004ffa682f5aab5718f9b313130_(&v15, (char (*)[1024])text, "image parts", &v6->sortLists[sortListRead].imageSortList, &drawLine, &drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l13::<lambda_a03bd0ecdb9f9113e98cb9aecc2cda9e> *)v14, &v13, &filterFuncCommon);
      v15 = v15 + v16;
    }
    if ( ((integer - 1) & 0xFFFFFFFD) == 0 )
    {
      v14[0] = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      filterFuncCommon = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v13 = 0;
      Stream_Debug_DrawSortList_StreamSortList_45056___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_1a974b2214cb727b25cccad923c9b625___lambda_c10e7388bac439afc4fd6fe13f11b20f___lambda_f5c2c8e542714bc7e0013ccec6336e64___lambda_4b8d9d2abd8aabf9589861be19037689_(&v15, (char (*)[1024])text, "meshes", &v6->sortLists[sortListRead].meshSortList, &drawLine, (const Stream_Debug_DrawSortLists::__l16::<lambda_1a974b2214cb727b25cccad923c9b625> *)&drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l16::<lambda_c10e7388bac439afc4fd6fe13f11b20f> *)&filterFuncCommon, (const Stream_Debug_DrawSortLists::__l16::<lambda_f5c2c8e542714bc7e0013ccec6336e64> *)&v13, (const Stream_Debug_DrawSortLists::__l16::<lambda_4b8d9d2abd8aabf9589861be19037689> *)v14);
      v15 = v15 + v16;
    }
    if ( integer == 1 || integer == 4 )
    {
      v14[0] = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      filterFuncCommon = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v13 = 0;
      Stream_Debug_DrawSortList_StreamSortList_37888___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_3f8f3a149303014be627db5456306c7d___lambda_097f47f61de0dc2542c4a4533e5c96ce___lambda_16a05c8dbb37f4c77df9095193df4bf3___lambda_29f26645933ecb458ce0f93757ef6ca9_(&v15, (char (*)[1024])text, "generics", &v6->sortLists[sortListRead].genericSortList, &drawLine, (const Stream_Debug_DrawSortLists::__l19::<lambda_3f8f3a149303014be627db5456306c7d> *)&drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l19::<lambda_097f47f61de0dc2542c4a4533e5c96ce> *)&filterFuncCommon, (const Stream_Debug_DrawSortLists::__l19::<lambda_16a05c8dbb37f4c77df9095193df4bf3> *)&v13, v14);
    }
  }
}

/*
==============
Stream_Debug_DrawTopSortedImageList
==============
*/
void Stream_Debug_DrawTopSortedImageList(LocalClientNum_t localClientIndex)
{
  signed __int64 v1; 
  void *v2; 
  const dvar_t *v4; 
  unsigned __int64 v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  StreamSortList<327680> *p_imageSortList; 
  int mSortedRight; 
  int v12; 
  __int128 y; 
  const dvar_t *v14; 
  float value; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float v18; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo *v19; 
  unsigned int *p_wanted; 
  unsigned int v21; 
  unsigned int v22; 
  const char *v23; 
  unsigned int v24; 
  __int128 v25; 
  char *fmt; 
  bool enabled; 
  bool v28; 
  int integer; 
  int v30; 
  char *v31; 
  Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632> *p_enabled; 
  int *p_integer; 
  int *v34; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo *v35; 
  __int64 v36; 
  FastCriticalSection *p_mCS; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo _First[2500]; 
  unsigned __int64 v39; 
  char dest[1024]; 

  v2 = alloca(v1);
  v36 = -2i64;
  v4 = DVARBOOL_stream_drawTopSortedImages;
  if ( !DVARBOOL_stream_drawTopSortedImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImages") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = 0i64;
    v39 = 0i64;
    v6 = DVARBOOL_stream_drawTopSortedImagesNoPart0;
    if ( !DVARBOOL_stream_drawTopSortedImagesNoPart0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesNoPart0") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    enabled = v6->current.enabled;
    v7 = DVARBOOL_stream_drawTopSortedImagesNoForced;
    if ( !DVARBOOL_stream_drawTopSortedImagesNoForced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesNoForced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v28 = v7->current.enabled;
    v8 = DVARINT_stream_drawTopSortedImagesThresholdKB;
    if ( !DVARINT_stream_drawTopSortedImagesThresholdKB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesThresholdKB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v30 = v8->current.integer << 10;
    v9 = DVARINT_stream_drawTopSortedImagesSortKey;
    if ( !DVARINT_stream_drawTopSortedImagesSortKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesSortKey") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    p_imageSortList = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead].imageSortList;
    v31 = (char *)&v28;
    p_enabled = (Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632> *)&enabled;
    p_integer = &integer;
    v34 = &v30;
    v35 = _First;
    p_mCS = &p_imageSortList->mCS;
    if ( p_imageSortList == (StreamSortList<327680> *)-2662416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&p_imageSortList->mCS);
    if ( StreamSortList_327680_::IterateRangeReverse__lambda_350f28fcd4196afffbbe3e932274bded___((int)p_imageSortList, p_imageSortList->mCount - 1, (const Stream_Debug_DrawTopSortedImageList::__l2::<lambda_350f28fcd4196afffbbe3e932274bded> *)(unsigned int)p_imageSortList->mSortedRight) )
    {
      do
      {
        mSortedRight = p_imageSortList->mSortedRight;
        v12 = mSortedRight - 1;
      }
      while ( StreamSortList<327680>::PartialSort(p_imageSortList, mSortedRight - p_imageSortList->mCount) && StreamSortList_327680_::IterateRangeReverse__lambda_350f28fcd4196afffbbe3e932274bded___((int)p_imageSortList, v12, (const Stream_Debug_DrawTopSortedImageList::__l2::<lambda_350f28fcd4196afffbbe3e932274bded> *)(unsigned int)p_imageSortList->mSortedRight) );
    }
    Sys_UnlockRead(&p_imageSortList->mCS);
    if ( v39 )
    {
      if ( v39 == 2500 )
        Com_PrintWarning(35, "Out of ImageInfo array in R_Stream_GetTopSortedImageList() increase from %lu\n", 2500i64);
      std::_Sort_unchecked__Stream_Debug_DrawTopSortedImageList_::_2_::ImageInfo____lambda_6afac1d50d49c5ae90c2e781f9354632___(_First, &_First[v39], (__int64)(32 * v39) >> 5, (Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632>)enabled);
      y = 0i64;
      v14 = DVARFLT_stream_drawTopSortedImagesFontSize;
      if ( !DVARFLT_stream_drawTopSortedImagesFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesFontSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      value = v14->current.value;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientIndex);
      FontHandle = UI_GetFontHandle(ActivePlacement, 5, value);
      v18 = (float)UI_TextHeight(FontHandle, value);
      v19 = &_First[v39];
      if ( _First != v19 )
      {
        p_wanted = &_First[0].wanted;
        while ( 1 )
        {
          if ( !integer )
            goto LABEL_39;
          if ( integer != 1 )
            break;
          v21 = p_wanted[2];
          v24 = p_wanted[1];
          v22 = *p_wanted;
          v23 = "^6wanted ^5%5u^7 KB, ^2loaded ^5%5u^7 KB, ^3total ^5%5u^7 KB: %s\n";
LABEL_41:
          LODWORD(fmt) = v21 >> 10;
          Com_sprintf_truncate<1024>((char (*)[1024])dest, v23, v22 >> 10, v24 >> 10, fmt, **((_QWORD **)p_wanted - 2));
LABEL_42:
          UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, FontHandle, 0.0, *(float *)&y, 1, 1, value, &colorWhite, 3);
          v25 = y;
          *(float *)&v25 = *(float *)&y + v18;
          y = v25;
          if ( *(float *)&v25 <= ActivePlacement->virtualViewableMax.v[1] )
          {
            p_wanted += 8;
            if ( p_wanted - 4 != (unsigned int *)v19 )
              continue;
          }
          goto LABEL_44;
        }
        if ( integer == 2 )
        {
LABEL_39:
          v21 = p_wanted[2];
          v22 = p_wanted[1];
          v23 = "^2loaded ^5%5u^7 KB, ^6wanted ^5%5u^7 KB, ^3total ^5%5u^7 KB: %s\n";
        }
        else
        {
          if ( integer != 3 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1645, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
              __debugbreak();
            goto LABEL_42;
          }
          v21 = p_wanted[1];
          v22 = p_wanted[2];
          v23 = "^3total ^5%5u^7 KB, ^6wanted ^5%5u^7 KB, ^2loaded ^5%5u^7 KB: %s\n";
        }
        v24 = *p_wanted;
        goto LABEL_41;
      }
    }
LABEL_44:
    if ( v39 )
    {
      do
      {
        if ( v5 >= 0x9C4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        ++v5;
      }
      while ( v5 < v39 );
    }
  }
}

/*
==============
Stream_Debug_DrawTouchedImages
==============
*/
void Stream_Debug_DrawTouchedImages(const LocalClientNum_t localClientIndex)
{
  const dvar_t *v1; 
  const ScreenPlacement *v3; 
  GfxFont *v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  float v8; 
  __int128 v9; 
  __int64 v10; 
  __int128 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  GfxImage *GfxImageAtIndex; 
  const char *name; 
  unsigned int *mLoaded; 
  const char *v19; 
  int v20; 
  bool v21; 
  StreamFrontendGlob *v22; 
  unsigned int *mUse; 
  StreamFrontendGlob *v24; 
  const char *v25; 
  unsigned int *mLoading; 
  StreamFrontendGlob *v27; 
  const char *v28; 
  unsigned int *mAlloc; 
  const char *v30; 
  int v32; 
  __int128 v34; 
  __int64 y; 
  __int64 horzAlign; 
  int v42; 
  unsigned int v43; 
  unsigned int v44; 
  int v45; 
  __int64 v46; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  char dest[1024]; 

  v1 = DCONST_DVARBOOL_stream_drawTouchedImages;
  if ( !DCONST_DVARBOOL_stream_drawTouchedImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTouchedImages") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientIndex);
    v3 = scrPlace;
    font = UI_GetFontHandle(scrPlace, 5, 0.15000001);
    v4 = font;
    v5 = UI_TextHeight(font, 0.15000001);
    v6 = 0;
    v42 = 1;
    v7 = 0;
    v45 = 0;
    v9 = 0i64;
    v8 = (float)v5;
    v10 = 2365376i64;
    v43 = 0;
    _XMM7 = 0i64;
    *(float *)&v9 = (float)v5 + 24.0;
    v12 = v9;
    v46 = 2365376i64;
    do
    {
      v13 = *(unsigned int *)((char *)&streamFrontendGlob->modelDistance.mDistances[10240].mValue + v10) | *(unsigned int *)((char *)&streamFrontendGlob->modelDistance.mDistances[0].mValue + v10);
      v44 = v13;
      if ( v13 )
      {
        do
        {
          v14 = __lzcnt(v13);
          v15 = ((_BYTE)v7 - (_BYTE)v14 + 31) & 3;
          GfxImageAtIndex = DB_GetGfxImageAtIndex((v7 - v14 + 31) >> 2);
          if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2175, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
            __debugbreak();
          if ( v15 >= GfxImageAtIndex->streamedPartCount )
          {
            LODWORD(horzAlign) = GfxImageAtIndex->streamedPartCount;
            LODWORD(y) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2176, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( image->streamedPartCount )", "imagePartIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          name = GfxImageAtIndex->name;
          mLoaded = streamFrontendGlob->imageBits.mLoaded;
          if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v19 = "^1L^7";
          v20 = 1 << v15;
          v21 = ((1 << v15) & *mLoaded) == 0;
          v22 = streamFrontendGlob;
          if ( !v21 )
            v19 = "^2L^7";
          if ( v15 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mUse = v22->imageBits.mUse;
          if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v21 = (v20 & *mUse) == 0;
          v24 = streamFrontendGlob;
          v25 = "^1I^7";
          if ( !v21 )
            v25 = "^2I^7";
          if ( v15 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mLoading = v24->imageBits.mLoading;
          if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v21 = (v20 & *mLoading) == 0;
          v27 = streamFrontendGlob;
          v28 = " ";
          if ( !v21 )
            v28 = "^5Lo^7";
          if ( v15 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mAlloc = v27->imageBits.mAlloc;
          if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v30 = "^1A^7";
          LODWORD(horzAlign) = v15;
          if ( (v20 & *mAlloc) != 0 )
            v30 = "^2A^7";
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "  %s%s%s%s ^5part ^5%u ^3%.55s", v30, v28, v25, v19, horzAlign, name);
          v4 = font;
          v3 = scrPlace;
          UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, *(float *)&_XMM7, *(float *)&v12, 1, 1, 0.15000001, &colorWhite, 3);
          v7 = v43;
          _XMM0 = (unsigned int)(v42 + 1);
          v32 = 0;
          v34 = v12;
          *(float *)&v34 = *(float *)&v12 + v8;
          _XMM3 = v34;
          if ( (unsigned int)(v42 + 1) <= 0x3C )
            v32 = v42 + 1;
          __asm
          {
            vpcmpgtq xmm2, xmm0, xmm1
            vblendvps xmm0, xmm3, xmm9, xmm2
          }
          v12 = (unsigned int)_XMM0;
          _XMM0 = (unsigned int)(v42 + 1);
          v6 = v45 + 1;
          v42 = v32;
          ++v45;
          v13 = ~(0xF0000000 >> (v14 & 0xFC)) & v44;
          v44 = v13;
          __asm
          {
            vpcmpgtq xmm2, xmm0, xmm1
            vblendvps xmm3, xmm7, xmm3, xmm2
          }
          _XMM7 = _XMM3;
        }
        while ( v13 );
        v42 = v32;
      }
      v7 += 32;
      v10 = v46 + 4;
      v43 = v7;
      v46 += 4i64;
    }
    while ( v7 < 0x50000 );
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "Touched Images[%d] ^2Legend: A=alloc, Lo=loading, I=in-use, L=loaded", v6);
    UI_DrawText(v3, dest, 0x7FFFFFFF, v4, 0.0, 24.0, 1, 1, 0.15000001, &colorWhite, 3);
  }
}

/*
==============
Stream_Debug_DrawXPakHeatMap
==============
*/
void Stream_Debug_DrawXPakHeatMap()
{
  __int128 v0; 
  __int128 v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  unsigned __int64 integer; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  int v8; 
  unsigned __int64 i; 
  int xpakIndex; 
  int v11; 
  int v12; 
  __int128 v13; 
  float *v14; 
  __int64 v15; 
  int v16; 
  float v17; 
  signed __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  const char *v24; 
  GfxFont *bigDevFont; 
  const char *v26; 
  int v27; 
  GfxColor v28; 
  FileStreamTrackType *p_trackType; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  float v33; 
  GfxColor v34; 
  unsigned int v35; 
  unsigned __int8 v36; 
  unsigned __int64 v37; 
  signed __int64 v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  char *v67; 
  GfxFont *v68; 
  const char *v69; 
  int v70; 
  unsigned __int64 v71; 
  int v72; 
  int v73; 
  __int64 filled; 
  __int64 xScale; 
  GfxColor v76; 
  unsigned int unsignedInt; 
  __int64 v78; 
  __int64 v79[131]; 
  char v80; 
  __int128 v81; 
  __int128 v82; 

  v2 = DCONST_DVARBOOL_stream_drawXPakHeatMap;
  if ( !DCONST_DVARBOOL_stream_drawXPakHeatMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = DCONST_DVARINT_stream_drawXPakHeatMapMaxBlockCountOnWidth;
    v81 = v1;
    if ( !DCONST_DVARINT_stream_drawXPakHeatMapMaxBlockCountOnWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMapMaxBlockCountOnWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    integer = v3->current.integer;
    v5 = Sys_Milliseconds();
    v6 = DCONST_DVARINT_stream_drawXPakHeatMapTimeLimit;
    v7 = v5;
    if ( !DCONST_DVARINT_stream_drawXPakHeatMapTimeLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMapTimeLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v8 = v7 - v6->current.integer;
    unsignedInt = v6->current.unsignedInt;
    v76.packed = v8;
    memset(v79, 0, 32);
    v78 = 0i64;
    for ( i = 0i64; i < 1024; ++i )
    {
      if ( s_streamDebugGlob.streamHeatMapData[i].startedTime >= v8 )
      {
        xpakIndex = s_streamDebugGlob.streamHeatMapData[i].xpakIndex;
        LOBYTE(v11) = XPak_IndexToFileID(xpakIndex);
        if ( v11 == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2424, ASSERT_TYPE_ASSERT, "(XPak_IndexToFileID( xpakIndex ) != FileStreamFileID::INVALID)", (const char *)&queryFormat, "XPak_IndexToFileID( xpakIndex ) != FileStreamFileID::INVALID") )
          __debugbreak();
        if ( (unsigned int)(xpakIndex / 8) >= 0x20 )
        {
          LODWORD(xScale) = 32;
          LODWORD(filled) = xpakIndex / 8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2425, ASSERT_TYPE_ASSERT, "(unsigned)( xpakIndex / 8 ) < (unsigned)( sizeof( xpakUsed ) )", "xpakIndex / 8 doesn't index sizeof( xpakUsed )\n\t%i not in [0, %i)", filled, xScale) )
            __debugbreak();
        }
        *((_DWORD *)v79 + xpakIndex / 32) |= 1 << (xpakIndex & 0x1F);
      }
    }
    v12 = 255;
    v13 = LODWORD(FLOAT_100_0);
    v14 = (float *)&v80;
    v82 = v0;
    v15 = 256i64;
    do
    {
      v16 = *((_DWORD *)v79 + v12 / 32);
      if ( _bittest(&v16, v12 & 0x1F) )
      {
        *v14 = *(float *)&v13;
        v17 = *(float *)&v13;
        v18 = (((unsigned __int64)(XPak_IndexToFileSize(v12) + 0xFFFFF) >> 20) + integer - 1) / integer;
        v19 = (float)v18;
        if ( v18 < 0 )
        {
          v20 = (float)v18;
          v19 = v20 + 1.8446744e19;
        }
        v21 = v19 * 10.0;
        v22 = (float)(__int64)integer;
        v23 = v13;
        *(float *)&v23 = *(float *)&v13 + v21;
        v13 = v23;
        if ( (integer & 0x8000000000000000ui64) != 0i64 )
          v22 = v22 + 1.8446744e19;
        R_AddCmdDrawRect2D(100.0, v17, v22 * 10.0, v21, &s_streamHeatMapColorFile, 0);
        v24 = XPak_IndexToName(v12);
        bigDevFont = cls.bigDevFont;
        v26 = v24;
        v27 = R_TextHeight(cls.bigDevFont);
        R_AddCmdDrawText(v26, 64, bigDevFont, v27, (float)(v22 * 10.0) + 110.0, (float)v27 + v17, 1.0, 1.0, 0.0, &colorWhite);
      }
      --v12;
      --v14;
      --v15;
    }
    while ( v15 );
    v28 = v76;
    p_trackType = &s_streamDebugGlob.streamHeatMapData[0].trackType;
    v30 = 1024i64;
    while ( 1 )
    {
      v31 = *((_DWORD *)p_trackType - 6) - v28.packed;
      if ( v31 > 0 )
      {
        v32 = *((int *)p_trackType - 5);
        ++v78;
        v33 = *((float *)&v79[4] + v32);
        v34.packed = s_streamHeatMapColorPrimer;
        if ( *p_trackType == FILE_STREAM_TRACK_STREAM )
          v34.packed = s_streamHeatMapColorStream;
        v76 = v34;
        v35 = 255 * v31 / unsignedInt;
        v36 = v35;
        if ( v35 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v35, "unsigned", v35) )
          __debugbreak();
        v37 = *((_QWORD *)p_trackType - 2) >> 20;
        v38 = (unsigned __int64)(*((_QWORD *)p_trackType - 1) + 0xFFFFFi64) >> 20;
        v76.array[3] = v36;
        v39 = v38 + v37 - 1;
        v40 = v39 / integer;
        v41 = v39 % integer;
        v42 = v37 / integer;
        v43 = v39 / integer - v37 / integer + 1;
        v44 = (float)(__int64)(v37 % integer);
        if ( ((v37 % integer) & 0x8000000000000000ui64) != 0i64 )
        {
          v45 = (float)(__int64)(v37 % integer);
          v44 = v45 + 1.8446744e19;
        }
        v46 = (float)(v44 * 10.0) + 100.0;
        v47 = (float)v42;
        if ( v42 < 0 )
        {
          v48 = (float)v42;
          v47 = v48 + 1.8446744e19;
        }
        v49 = (float)(v47 * 10.0) + v33;
        if ( v43 == 1 )
        {
          v50 = (float)v38;
          if ( v38 < 0 )
          {
            v51 = (float)v38;
            v50 = v51 + 1.8446744e19;
          }
          v52 = v50 * 10.0;
          v53 = FLOAT_10_0;
          v54 = (float)(v47 * 10.0) + v33;
          v55 = (float)(v44 * 10.0) + 100.0;
        }
        else
        {
          v56 = (float)(__int64)(integer - v41);
          if ( (__int64)(integer - v41) < 0 )
          {
            v57 = (float)(__int64)(integer - v41);
            v56 = v57 + 1.8446744e19;
          }
          R_AddCmdDrawRect2D(v46, v49, v56 * 10.0, 10.0, &v76, 1);
          v58 = (float)(__int64)(v41 + 1);
          if ( (__int64)(v41 + 1) < 0 )
          {
            v59 = (float)(__int64)(v41 + 1);
            v58 = v59 + 1.8446744e19;
          }
          v60 = v58 * 10.0;
          v61 = (float)v40;
          if ( v40 < 0 )
          {
            v62 = (float)v40;
            v61 = v62 + 1.8446744e19;
          }
          R_AddCmdDrawRect2D(100.0, (float)(v61 * 10.0) + v33, v60, 10.0, &v76, 1);
          if ( v43 <= 2 )
            goto LABEL_57;
          v63 = (float)(__int64)(v43 - 2);
          if ( (__int64)(v43 - 2) < 0 )
          {
            v64 = (float)(__int64)(v43 - 2);
            v63 = v64 + 1.8446744e19;
          }
          v65 = (float)(__int64)integer;
          v53 = v63 * 10.0;
          if ( (integer & 0x8000000000000000ui64) != 0i64 )
          {
            v66 = (float)(__int64)integer;
            v65 = v66 + 1.8446744e19;
          }
          v52 = v65 * 10.0;
          v54 = v49 + 10.0;
          v55 = FLOAT_100_0;
        }
        R_AddCmdDrawRect2D(v55, v54, v52, v53, &v76, 1);
      }
LABEL_57:
      p_trackType += 8;
      if ( !--v30 )
      {
        v67 = j_va("[XPakHeatMap enabled] Streamer in White. Primer in BLUE. Fades out after %d ms. Each block is %zu bytes. Activity count is %zu%s", unsignedInt, 0x100000i64);
        v68 = cls.bigDevFont;
        v69 = v67;
        v70 = R_TextHeight(cls.bigDevFont);
        v71 = -1i64;
        v72 = v70;
        do
          ++v71;
        while ( v69[v71] );
        v73 = truncate_cast<int,unsigned __int64>(v71);
        R_AddCmdDrawText(v69, v73, v68, v72, 100.0, 100.0, 1.0, 1.0, 0.0, &colorWhite);
        return;
      }
    }
  }
}

/*
==============
Stream_Debug_DumpAllUsage_f
==============
*/
void Stream_Debug_DumpAllUsage_f()
{
  s_streamDebugGlob.dump = LONG_LONG;
}

/*
==============
Stream_Debug_DumpCategoricalImageUsage_f
==============
*/
void Stream_Debug_DumpCategoricalImageUsage_f()
{
  s_streamDebugGlob.dump = LONG_DOUBLE;
}

/*
==============
Stream_Debug_DumpCurrentImageUsage
==============
*/
void Stream_Debug_DumpCurrentImageUsage(const stdext::inplace_function<void __cdecl(char const *),64,16> *output, const GfxImage *image, int *idx, const char *extraInfo)
{
  const GfxImage *v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int StreamedPartCount; 
  int v12; 
  StreamFrontendGlob *v13; 
  int v14; 
  unsigned int *mStaticForced; 
  __int64 v16; 
  int v17; 
  StreamFrontendGlob *v18; 
  StreamFrontendGlob *v19; 
  unsigned int v20; 
  __int64 v21; 
  StreamFrontendGlob *v22; 
  __int64 v23; 
  int v24; 
  char *v25; 
  const GfxImage *v26; 
  int v27; 
  float v28; 
  const char *Name; 
  const char *v30; 
  __int64 v31; 
  const char *v32; 
  const char *v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v39; 
  __int64 v40; 
  unsigned int v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 

  v4 = image;
  if ( (image->flags & 0x40) != 0 )
  {
    v42 = Stream_Debug_CalcWantedBytesForImage(image);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v53 = 0i64;
    v8 = 0i64;
    v54 = 0i64;
    v47 = 0i64;
    v36 = 4 * DB_GetGfxImageIndex(v4);
    v9 = 0;
    v48 = 0i64;
    v10 = 0i64;
    v51 = 0i64;
    v52 = 0i64;
    v49 = 0i64;
    v50 = 0i64;
    StreamedPartCount = Image_GetStreamedPartCount(v4);
    v40 = StreamedPartCount;
    if ( StreamedPartCount > 0 )
    {
      do
      {
        if ( v4->streamedPartCount >= v9 )
        {
          if ( (v4->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          if ( v9 >= Image_GetStreamedPartCount(v4) )
          {
            LODWORD(v35) = Image_GetStreamedPartCount(v4);
            LODWORD(v34) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v34, v35) )
              __debugbreak();
          }
          if ( v9 )
            v12 = (*(unsigned int *)((char *)&v4->streams[0].levelCountAndSize + v10) >> 4) - ((unsigned int)v4->streams[v9 - 1].levelCountAndSize >> 4);
          else
            v12 = *(unsigned int *)((char *)&v4->streams[0].levelCountAndSize + v10) >> 4;
          *((_DWORD *)&v53 + v8) = (unsigned int)(v12 + 1023) >> 10;
        }
        v13 = streamFrontendGlob;
        v14 = v9 + v36;
        if ( v9 + v36 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v35) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v34) = v9 + v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        mStaticForced = v13->imageBits.mStaticForced;
        if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v16 = (__int64)v14 >> 5;
        v17 = 1 << (v14 & 0x1F);
        if ( (v17 & mStaticForced[v16]) != 0 )
          *((_DWORD *)&v51 + v8) = 1;
        v18 = streamFrontendGlob;
        if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, v14) || StreamableBits::CheckLoading(&v18->imageBits, v14) )
          *((_DWORD *)&v49 + v8) = 1;
        v19 = streamFrontendGlob;
        v20 = v14 >> 5;
        if ( v20 >= 0x2800 )
        {
          LODWORD(v35) = 10240;
          LODWORD(v34) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v21 = (__int64)v19->imageTouchBits + 4 * v16;
        if ( (v21 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v21) )
          __debugbreak();
        if ( (v17 & *(_DWORD *)v21) != 0 )
          *((_DWORD *)&v47 + v8) = 1;
        v22 = streamFrontendGlob;
        if ( v20 >= 0x2800 )
        {
          LODWORD(v35) = 10240;
          LODWORD(v34) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v23 = (__int64)&v22->imageTouchBits[1][v16];
        if ( (v23 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v23) )
          __debugbreak();
        if ( (v17 & *(_DWORD *)v23) != 0 )
          *((_DWORD *)&v47 + v8) = 1;
        v4 = image;
        ++v9;
        ++v8;
        v10 += 40i64;
      }
      while ( v8 < v40 );
      v9 = v54;
      v5 = v53;
      LODWORD(v10) = v48;
      v6 = v47;
      v7 = v51;
      LODWORD(v8) = v49;
    }
    v24 = Stream_Debug_CalcBytesLoadedForImage(v4);
    v41 = (unsigned int)(v24 + 1023) >> 10;
    v43 = (unsigned __int64)(v42 + 1023) >> 10;
    v39 = ((unsigned int)(v24 + 0xFFFF) >> 10) & 0x3FFFC0;
    v25 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
    v26 = image;
    v37 = v36 + image->streamedPartCount;
    if ( v37 - 1 >= 0x50000 )
    {
      LODWORD(v35) = 327680;
      LODWORD(v34) = v37 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
      v26 = image;
    }
    v27 = *(_DWORD *)&v25[4 * v37 + 2775260];
    if ( v27 == -1 )
      v28 = FLOAT_3_4027977e38;
    else
      LODWORD(v28) = v27 << 7;
    Name = PixelFormat_GetName(v26->format);
    v30 = Image_TextureSemanticToString(image->semantic);
    v31 = (unsigned int)*idx;
    v32 = image->name;
    *idx = v31 + 1;
    v33 = j_va("%d,%s,%s,%s,%.2f,%zu,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s\n", v31, v32, v30, Name, fsqrt(v28), v43, v41, v39, v5, HIDWORD(v53), v9, HIDWORD(v54), v6, HIDWORD(v47), v10, HIDWORD(v48), v7, HIDWORD(v51), v52, HIDWORD(v52), v8, HIDWORD(v49), v50, HIDWORD(v50), extraInfo);
    output->m_InvokeFctPtr(v33, &output->m_Data);
  }
}

/*
==============
Stream_Debug_DumpGenericSortList_f
==============
*/
void Stream_Debug_DumpGenericSortList_f()
{
  s_streamDebugGlob.dump = PTRDIFF;
}

/*
==============
Stream_Debug_DumpGenericUsage
==============
*/
void Stream_Debug_DumpGenericUsage(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  std::_Aligned<64,16,double,0>::type *p_m_Data; 
  void (__fastcall *inData)(const char *, const void *); 
  void (__fastcall *v5)(void *, const void *, stdext::inplace_function_operation); 
  char v6[64]; 
  int v7; 

  m_ManagerFctPtr = output->m_ManagerFctPtr;
  p_m_Data = &output->m_Data;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v6, &output->m_Data, Copy);
    m_ManagerFctPtr = output->m_ManagerFctPtr;
  }
  inData = output->m_InvokeFctPtr;
  v5 = m_ManagerFctPtr;
  v7 = 0;
  inData("index,name,xpak_key,xpak_name,size,alloced,force,requestCount,touched,script\n", p_m_Data);
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, lambda_d99706cfacbd1d807e5ed116a903361c_::_lambda_invoker_cdecl_, &inData, 1);
  inData = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v5 )
    v5(v6, NULL, Destroy);
}

/*
==============
Stream_Debug_DumpGenericUsageInfo
==============
*/
void Stream_Debug_DumpGenericUsageInfo(const StreamKey *streamKey, int *idx, const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  int StreamKeyIndex; 
  __int64 dataSize; 
  __int64 v8; 
  __int64 v9; 
  unsigned int *bitsStable; 
  int v11; 
  XPakEntryInfo *EntryInfo; 
  const char *v13; 
  __int64 v14; 
  unsigned __int64 key; 
  const char *name; 
  const char *v17; 
  bool v18; 
  unsigned int v19; 

  if ( (streamKey->flags & 2) == 0 && streamKey->dataSize )
  {
    StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
    dataSize = streamKey->dataSize;
    v8 = StreamKeyIndex;
    v9 = 0i64;
    if ( StreamableBits::CheckAlloc(&streamFrontendGlob->genericBits, StreamKeyIndex) )
      v9 = (unsigned int)dataSize;
    v18 = StreamableBits::CheckForced(&streamFrontendGlob->genericBits, v8);
    bitsStable = streamFrontendGlob->genericRequest.bitsStable;
    v19 = streamFrontendGlob->genericRequest.countStable[(unsigned int)v8];
    if ( !bitsStable && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v11 = bitsStable[v8 >> 5] & (1 << (v8 & 0x1F));
    EntryInfo = XPak_GetEntryInfo(STREAM_ITEM_GENERIC, v8);
    if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 725, ASSERT_TYPE_ASSERT, "(xpakInfo->valid)", (const char *)&queryFormat, "xpakInfo->valid") )
      __debugbreak();
    v13 = XPak_IndexToName(*((unsigned __int8 *)EntryInfo + 24));
    v14 = (unsigned int)*idx;
    key = EntryInfo->key;
    name = streamKey->name;
    *idx = v14 + 1;
    v17 = j_va("%d,%s,%llx,%s,%zu,%zu,%d,%u,%d,%d\n", v14, name, key, v13, dataSize, v9, v18, v19, v11 != 0, 0i64);
    output->m_InvokeFctPtr(v17, &output->m_Data);
  }
}

/*
==============
Stream_Debug_DumpGenericUsage_f
==============
*/
void Stream_Debug_DumpGenericUsage_f()
{
  s_streamDebugGlob.dump = LONG;
}

/*
==============
Stream_Debug_DumpImageSortList_f
==============
*/
void Stream_Debug_DumpImageSortList_f()
{
  s_streamDebugGlob.dump = MAX_INT;
}

/*
==============
Stream_Debug_DumpImageUsage
==============
*/
void Stream_Debug_DumpImageUsage(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  __int64 currentSavedViewPos; 
  __int64 v3; 
  const char *v4; 
  char *v5; 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *m_InvokeFctPtr)(const char *, const void *); 
  int *v8; 
  void (__fastcall *v9)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  void (__fastcall *v10)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v11; 
  void (__fastcall *v12)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v13)(const char *, const void *); 
  int *v14; 
  void (__fastcall *v15)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v16; 
  void (__fastcall *v17)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v18)(const char *, const void *); 
  int *v19; 
  int v20; 
  __int64 v21; 
  float v22; 
  __int64 v23; 
  char *v24; 
  void (__fastcall *v25)(const char *, const void *); 
  void (__fastcall *v26)(void *, const void *, stdext::inplace_function_operation); 
  char v27[64]; 
  int *v28; 
  void (__fastcall *v29)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v30; 
  void (__fastcall *v31)(const char *, const void *); 
  void (__fastcall *v32)(void *, const void *, stdext::inplace_function_operation); 
  char v33[64]; 
  int *v34; 
  void (__fastcall *v35)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  __int64 v36[2]; 
  void (__fastcall *v37)(const char *, const void *); 
  void (__fastcall *v38)(void *, const void *, stdext::inplace_function_operation); 
  char v39[64]; 
  int *v40; 
  void (__fastcall *v41)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v42; 
  char *v43; 
  void (__fastcall *v44)(const char *, const void *); 
  void (__fastcall *v45)(void *, const void *, stdext::inplace_function_operation); 
  char v46[64]; 
  int *v47; 
  void (__fastcall *v48)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *inData; 
  void (__fastcall *v50)(const char *, const void *); 
  void (__fastcall *v51)(void *, const void *, stdext::inplace_function_operation); 
  char v52[64]; 
  int *v53; 
  void (__fastcall *v54)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v55[10240]; 

  v23 = -2i64;
  memset_0(v55, 0, sizeof(v55));
  v21 = 0i64;
  v22 = 0.0;
  currentSavedViewPos = streamFrontendGlob->currentSavedViewPos;
  if ( streamFrontendGlob->savedViewPosCount[currentSavedViewPos][0] )
  {
    v3 = currentSavedViewPos;
    v21 = *(_QWORD *)streamFrontendGlob->savedViewPos[v3][0][0].v;
    v22 = streamFrontendGlob->savedViewPos[v3][0][0].v[2];
  }
  v4 = j_va("index,name,semantic,format,distance,wanted_kb,allocd_kb,aligned_kb,part0_kb,part1_kb,part2_kb,part3_kb,touch0,touch1,touch2,touch3,force0,force1,force2,force3,used0,used1,used2,used3,parentStack,version:2,viewpos:%.0f,%.0f,%.0f\n", *(float *)&v21, *((float *)&v21 + 1), v22);
  output->m_InvokeFctPtr(v4, &output->m_Data);
  v20 = 0;
  v5 = v55;
  v24 = v55;
  m_ManagerFctPtr = output->m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v27, &output->m_Data, Copy);
    m_ManagerFctPtr = output->m_ManagerFctPtr;
    v5 = v24;
  }
  m_InvokeFctPtr = output->m_InvokeFctPtr;
  v25 = output->m_InvokeFctPtr;
  v26 = m_ManagerFctPtr;
  v8 = &v20;
  v28 = &v20;
  v9 = Stream_Debug_DumpCurrentImageUsage;
  v10 = Stream_Debug_DumpCurrentImageUsage;
  v29 = Stream_Debug_DumpCurrentImageUsage;
  inData = v5;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v52, v27, Copy);
    v10 = v29;
    v8 = v28;
    m_ManagerFctPtr = v26;
    m_InvokeFctPtr = v25;
  }
  v50 = m_InvokeFctPtr;
  v51 = m_ManagerFctPtr;
  v53 = v8;
  v54 = v10;
  v25 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(v27, NULL, Destroy);
  v26 = NULL;
  DB_EnumXAssets(ASSET_TYPE_XMODEL, Stream_Debug_EnumDumpModelMaterialUsage, &inData, 1);
  v11 = v55;
  v30 = v55;
  v12 = output->m_ManagerFctPtr;
  if ( v12 )
  {
    v12(v33, &output->m_Data, Copy);
    v12 = output->m_ManagerFctPtr;
    v11 = v30;
  }
  v13 = output->m_InvokeFctPtr;
  v31 = output->m_InvokeFctPtr;
  v32 = v12;
  v14 = &v20;
  v34 = &v20;
  v15 = Stream_Debug_DumpCurrentImageUsage;
  v35 = Stream_Debug_DumpCurrentImageUsage;
  v36[0] = (__int64)v11;
  if ( v12 )
  {
    v12(v39, v33, Copy);
    v15 = v35;
    v14 = v34;
    v12 = v32;
    v13 = v31;
  }
  v37 = v13;
  v38 = v12;
  v40 = v14;
  v41 = v15;
  v42 = 0;
  v31 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v12 )
    v12(v33, NULL, Destroy);
  v32 = NULL;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v36, 1);
  v42 = 1;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v36, 1);
  v16 = v55;
  v24 = v55;
  v17 = output->m_ManagerFctPtr;
  if ( v17 )
  {
    v17(v27, &output->m_Data, Copy);
    v17 = output->m_ManagerFctPtr;
    v16 = v24;
  }
  v18 = output->m_InvokeFctPtr;
  v25 = output->m_InvokeFctPtr;
  v26 = v17;
  v19 = &v20;
  v28 = &v20;
  v29 = Stream_Debug_DumpCurrentImageUsage;
  v43 = v16;
  if ( v17 )
  {
    v17(v46, v27, Copy);
    v9 = v29;
    v19 = v28;
    v17 = v26;
    v18 = v25;
  }
  v44 = v18;
  v45 = v17;
  v47 = v19;
  v48 = v9;
  v25 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v17 )
    v17(v27, NULL, Destroy);
  v26 = NULL;
  DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_Debug_EnumDumpRemainingImageUsage, &v43, 1);
  v44 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v45 )
    v45(v46, NULL, Destroy);
  v45 = NULL;
  v37 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v38 )
    v38(v39, NULL, Destroy);
  v38 = NULL;
  v50 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v51 )
    v51(v52, NULL, Destroy);
}

/*
==============
Stream_Debug_DumpImageUsageInfo
==============
*/
void Stream_Debug_DumpImageUsageInfo(const GfxImage *image, int *idx, const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  unsigned int v5; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  StreamFrontendGlob *v9; 
  unsigned int *mStaticForced; 
  StreamFrontendGlob *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  StreamFrontendGlob *v16; 
  StreamFrontendGlob *v17; 
  int v18; 
  unsigned int *mAlloc; 
  bool v20; 
  __int64 v21; 
  XPakEntryInfo *EntryInfo; 
  char *v23; 
  int v24; 
  float v25; 
  int streamedPartCount; 
  const char *v27; 
  const char *v28; 
  unsigned __int64 key; 
  const char *name; 
  __int64 v31; 
  const char *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  int v40; 
  unsigned int v41; 
  std::_Aligned<64,16,double,0>::type *p_m_Data; 
  int v43; 

  if ( (image->flags & 0x40) != 0 )
  {
    v5 = 4 * DB_GetGfxImageIndex(image);
    v6 = 0i64;
    v41 = v5;
    v43 = 0;
    if ( image->streamedPartCount )
    {
      p_m_Data = &output->m_Data;
      do
      {
        v7 = v6 + v5;
        if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v6 >= Image_GetStreamedPartCount(image) )
        {
          LODWORD(v34) = Image_GetStreamedPartCount(image);
          LODWORD(v33) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v8 = (unsigned int)image->streams[v6].levelCountAndSize >> 4;
        if ( (_DWORD)v6 )
          v8 -= (unsigned int)image->streams[(unsigned int)(v6 - 1)].levelCountAndSize >> 4;
        v9 = streamFrontendGlob;
        if ( v7 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v34) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v33) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        mStaticForced = v9->imageBits.mStaticForced;
        if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v11 = streamFrontendGlob;
        v12 = (__int64)v7 >> 5;
        v13 = 1 << (v7 & 0x1F);
        v40 = v13 & mStaticForced[v12];
        if ( (unsigned int)(v7 >> 5) >= 0x2800 )
        {
          LODWORD(v34) = 10240;
          LODWORD(v33) = v7 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v14 = (__int64)v11->imageTouchBits + 4 * v12;
        if ( (v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v14) )
          __debugbreak();
        v15 = *(_DWORD *)v14;
        v16 = streamFrontendGlob;
        v39 = v15 & v13;
        if ( (unsigned int)(v7 >> 5) >= 0x2800 )
        {
          LODWORD(v34) = 10240;
          LODWORD(v33) = v7 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( (((_BYTE)v16 + 4 * (_BYTE)v12 - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &v16->imageTouchBits[1][v12]) )
          __debugbreak();
        v17 = streamFrontendGlob;
        v18 = v16->imageTouchBits[1][v12] & v13;
        if ( v7 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v34) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v33) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        mAlloc = v17->imageBits.mAlloc;
        if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v20 = (v13 & mAlloc[v12]) == 0;
        v21 = 0i64;
        if ( !v20 )
          v21 = v8;
        EntryInfo = XPak_GetEntryInfo(STREAM_ITEM_IMAGE, v7);
        if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 773, ASSERT_TYPE_ASSERT, "(xpakInfo->valid)", (const char *)&queryFormat, "xpakInfo->valid") )
          __debugbreak();
        v23 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
        if ( (unsigned int)v7 >= 0x50000 )
        {
          LODWORD(v34) = 327680;
          LODWORD(v33) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        v24 = *(_DWORD *)&v23[4 * v7 + 2775264];
        if ( v24 == -1 )
          v25 = FLOAT_3_4027977e38;
        else
          LODWORD(v25) = v24 << 7;
        streamedPartCount = image->streamedPartCount;
        v27 = Image_TextureSemanticToString(image->semantic);
        v28 = XPak_IndexToName(*((unsigned __int8 *)EntryInfo + 24));
        key = EntryInfo->key;
        name = image->name;
        v31 = (unsigned int)*idx;
        *idx = v31 + 1;
        LODWORD(v38) = v39 != 0 || v18 != 0;
        LODWORD(v37) = v40 != 0;
        LODWORD(v36) = v8;
        LODWORD(v35) = streamedPartCount;
        LODWORD(v34) = v43;
        v32 = j_va("%d,%s,%llx,%s,%s,%u,%u,%f,%u,%zu,%d,%d,%d\n", v31, name, key, v28, v27, v34, v35, v25, v36, v21, v37, v38, 0i64);
        output->m_InvokeFctPtr(v32, p_m_Data);
        v6 = (unsigned int)(v43 + 1);
        v43 = v6;
        v5 = v41;
      }
      while ( (unsigned int)v6 < image->streamedPartCount );
    }
  }
}

/*
==============
Stream_Debug_DumpImageUsage_f
==============
*/
void Stream_Debug_DumpImageUsage_f()
{
  s_streamDebugGlob.dump = HALF;
}

/*
==============
Stream_Debug_DumpMeshSortList_f
==============
*/
void Stream_Debug_DumpMeshSortList_f()
{
  s_streamDebugGlob.dump = SIZE_T;
}

/*
==============
Stream_Debug_DumpMeshUsage
==============
*/
void Stream_Debug_DumpMeshUsage(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  std::_Aligned<64,16,double,0>::type *p_m_Data; 
  void (__fastcall *inData)(const char *, const void *); 
  void (__fastcall *v5)(void *, const void *, stdext::inplace_function_operation); 
  char v6[64]; 
  int v7; 

  m_ManagerFctPtr = output->m_ManagerFctPtr;
  p_m_Data = &output->m_Data;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v6, &output->m_Data, Copy);
    m_ManagerFctPtr = output->m_ManagerFctPtr;
  }
  inData = output->m_InvokeFctPtr;
  v5 = m_ManagerFctPtr;
  v7 = 0;
  inData("index,name,xpak_key,xpak_name,size,alloced,force,requestCount,touched,script\n", p_m_Data);
  DB_EnumXAssets(ASSET_TYPE_XMODEL_SURFS, lambda_698c9799636a6621219772973356a1ff_::_lambda_invoker_cdecl_, &inData, 1);
  inData = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v5 )
    v5(v6, NULL, Destroy);
}

/*
==============
Stream_Debug_DumpMeshUsage_f
==============
*/
void Stream_Debug_DumpMeshUsage_f()
{
  s_streamDebugGlob.dump = HALF_HALF;
}

/*
==============
Stream_Debug_EndOfFullUpdateFrame
==============
*/
void Stream_Debug_EndOfFullUpdateFrame(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  fileHandle_t *v2; 
  const char *v3; 
  void (__fastcall *v4)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v5)(const char *, const void *); 
  const char *v6; 
  StreamSortList<327680> *v7; 
  FastCriticalSection *v8; 
  int mSortedLeft; 
  char *v10; 
  const char *v11; 
  char *v12; 
  const char *v13; 
  std::pair<unsigned __int64,int> *p_First; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  std::pair<unsigned __int64,int> *v18; 
  Stream_Debug_ImageCategoryData *v19; 
  const char *v20; 
  int *p_second; 
  __int64 v22; 
  const char *v23; 
  const dvar_t *v24; 
  bool enabled; 
  const dvar_t *v26; 
  bool v27; 
  const dvar_t *v28; 
  bool v29; 
  const dvar_t *v30; 
  std::greater<void> v31; 
  int v32; 
  fileHandle_t *p_h; 
  fileHandle_t h; 
  stdext::inplace_function<void __cdecl(char const *),64,16> *v35; 
  int *v36; 
  fileHandle_t **p_p_h; 
  stdext::inplace_function<void __cdecl(char const *),64,16> *p_output; 
  int *v39; 
  __int64 v40; 
  stdext::inplace_function<void __cdecl(char const *),64,16> output; 
  void (__fastcall *inData)(const char *, const void *); 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  __int64 dataPtr[8]; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  std::pair<unsigned __int64,int> _First; 
  std::pair<unsigned __int64,int> _Last; 

  v40 = -2i64;
  if ( s_streamDebugGlob.dump )
  {
    output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
    output.m_ManagerFctPtr = NULL;
    h.handle.handle = -1i64;
    v0 = DVARINT_stream_dumpDestination;
    if ( !DVARINT_stream_dumpDestination && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_dumpDestination") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.integer == 1 )
    {
      v1 = DVARSTR_ui_mapname;
      if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      v2 = (fileHandle_t *)j_va("stream_dump_usage_%s.csv", v1->current.string);
      h.handle.handle = (__int64)FS_FOpenTextFileWrite(v2, v3);
      if ( h.handle.handle == -1 )
        Com_PrintWarning(35, "Error opening stream_dump_usage csv\n");
      p_h = &h;
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
      *(_QWORD *)output.m_Data._Space = &h;
      v4 = stdext::inplace_function<void (char const *),64,16>::manage<_lambda_7e52e8aeb36f1aa2dcf51b19a677dbe5_>;
      v5 = stdext::inplace_function<void (char const *),64,16>::invoke<_lambda_7e52e8aeb36f1aa2dcf51b19a677dbe5_>;
    }
    else
    {
      v31 = 0;
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
      v4 = stdext::inplace_function<void (char const *),64,16>::manage<_lambda_50f8596177df01b35a3b376912c165d0_>;
      v5 = stdext::inplace_function<void (char const *),64,16>::invoke<_lambda_50f8596177df01b35a3b376912c165d0_>;
    }
    output.m_InvokeFctPtr = v5;
    output.m_ManagerFctPtr = v4;
    switch ( s_streamDebugGlob.dump )
    {
      case HALF:
        Stream_Debug_DumpImageUsage(&output);
        break;
      case HALF_HALF:
        Stream_Debug_DumpMeshUsage(&output);
        break;
      case LONG:
        goto $LN13_81;
      case LONG_LONG:
        v4(dataPtr, &output.m_Data, Copy);
        inData = output.m_InvokeFctPtr;
        m_ManagerFctPtr = output.m_ManagerFctPtr;
        LODWORD(v45) = 0;
        output.m_InvokeFctPtr("index,name,xpak_key,xpak_name,semantic,part,part_count,distance,size,alloced,touch,force,initial,script\n", &output.m_Data);
        LODWORD(v45) = 0;
        DB_EnumXAssets(ASSET_TYPE_IMAGE, lambda_f0e7d7b272aedda1f04bc8713967e43e_::_lambda_invoker_cdecl_, &inData, 1);
        inData = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
        if ( m_ManagerFctPtr )
          m_ManagerFctPtr(dataPtr, NULL, Destroy);
        output.m_InvokeFctPtr("\n", &output.m_Data);
        Stream_Debug_DumpMeshUsage(&output);
        output.m_InvokeFctPtr("\n", &output.m_Data);
$LN13_81:
        Stream_Debug_DumpGenericUsage(&output);
        break;
      case MAX_INT:
        p_h = (fileHandle_t *)&streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead];
        v6 = j_va("Image sort list with %d elements from left[unload] to right[load]:\n", LODWORD(p_h[501760].handle.handle));
        output.m_InvokeFctPtr(v6, &output.m_Data);
        v32 = 0;
        v7 = (StreamSortList<327680> *)&p_h[168960];
        p_p_h = &p_h;
        p_output = &output;
        v39 = &v32;
        v8 = (FastCriticalSection *)&p_h[501762];
        v35 = (stdext::inplace_function<void __cdecl(char const *),64,16> *)&p_h[501762];
        if ( p_h == (fileHandle_t *)-4014096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
          __debugbreak();
        Sys_LockRead(v8);
        if ( StreamSortList_327680_::IterateRange__lambda_d883b3debaee1363c107441996fac8e7___((int)v7, 0, (const Stream_Debug_DumpImageSortList::__l2::<lambda_d883b3debaee1363c107441996fac8e7> *)(unsigned int)(v7->mSortedLeft - 1)) )
        {
          do
            mSortedLeft = v7->mSortedLeft;
          while ( StreamSortList<327680>::PartialSort(v7, mSortedLeft) && StreamSortList_327680_::IterateRange__lambda_d883b3debaee1363c107441996fac8e7___((int)v7, mSortedLeft, (const Stream_Debug_DumpImageSortList::__l2::<lambda_d883b3debaee1363c107441996fac8e7> *)(unsigned int)(v7->mSortedLeft - 1)) );
        }
        Sys_UnlockRead(v8);
        break;
      case SIZE_T:
        v10 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
        v11 = j_va("Mesh sort list with %d elements from left[unload] to right[load]:\n", *((unsigned int *)v10 + 1788868));
        output.m_InvokeFctPtr(v11, &output.m_Data);
        v32 = 0;
        v35 = &output;
        v36 = &v32;
        StreamSortList_45056_::Iterate__lambda_86ac4c22b553f0b5c778ab0b98f0d715___((const Stream_Debug_DumpMeshSortList::__l2::<lambda_86ac4c22b553f0b5c778ab0b98f0d715> *)(v10 + 6789392));
        break;
      case PTRDIFF:
        v12 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
        v13 = j_va("Generic sort list with %d elements from left[unload] to right[load]:\n", *((unsigned int *)v12 + 1865840));
        output.m_InvokeFctPtr(v13, &output.m_Data);
        v32 = 0;
        v35 = &output;
        v36 = &v32;
        StreamSortList_37888_::Iterate__lambda_ab063b07fb1f724a41ebd59dc2359d88___((const Stream_Debug_DumpGenericSortList::__l2::<lambda_ab063b07fb1f724a41ebd59dc2359d88> *)(v12 + 7155520));
        break;
      case LONG_DOUBLE:
        inData = (void (__fastcall *)(const char *, const void *))"Weapons";
        m_ManagerFctPtr = (void (__fastcall *)(void *, const void *, stdext::inplace_function_operation))"Vehicles";
        dataPtr[0] = (__int64)"Body";
        dataPtr[1] = (__int64)"Head";
        dataPtr[2] = (__int64)"ViewModel";
        dataPtr[3] = (__int64)"CombinedMaps";
        dataPtr[4] = (__int64)"HeightMaps";
        dataPtr[5] = (__int64)"LayerMasks";
        dataPtr[6] = (__int64)"Remesh";
        dataPtr[7] = (__int64)"ProxyCards";
        v45 = "Vfx";
        v46 = "Models";
        v47 = "BSP";
        v48 = "Other";
        memset_0(s_imageCategoriesData, 0, sizeof(s_imageCategoriesData));
        Stream_Debug_RunThroughImages(&output);
        p_First = &_First;
        v15 = 14i64;
        v16 = 14i64;
        do
        {
          std::pair<unsigned __int64,int>::pair<unsigned __int64,int>(p_First++);
          --v16;
        }
        while ( v16 );
        v17 = 0;
        v18 = &_First;
        v19 = s_imageCategoriesData;
        do
        {
          v18->first = v19->wantedSize / 1024;
          v18->second = v17++;
          ++v19;
          ++v18;
        }
        while ( v17 < 14 );
        std::_Sort_unchecked<std::pair<unsigned __int64,int> *,std::greater<void>>(&_First, &_Last, 14i64, v31);
        v20 = j_va("category,loaded_kb,wanted_kb,difference_kb,surplus_kb\n");
        output.m_InvokeFctPtr(v20, &output.m_Data);
        p_second = &_First.second;
        do
        {
          v22 = *p_second;
          v23 = j_va("%s,%zd,%zd,%zd,%zd\n", (const char *)*(&inData + v22), s_imageCategoriesData[v22].loadedSize / 1024, s_imageCategoriesData[v22].wantedSize / 1024, (s_imageCategoriesData[v22].wantedSize - s_imageCategoriesData[v22].loadedSize) / 1024, s_imageCategoriesData[v22].surplusSize / 1024);
          output.m_InvokeFctPtr(v23, &output.m_Data);
          p_second += 4;
          --v15;
        }
        while ( v15 );
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 3081, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        break;
    }
    s_streamDebugGlob.dump = NONE;
    if ( h.handle.handle != -1 )
      FS_FCloseFile(h);
    output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
    if ( output.m_ManagerFctPtr )
      output.m_ManagerFctPtr(&output.m_Data, NULL, Destroy);
  }
  v24 = DCONST_DVARBOOL_cg_drawWantedStreamMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedStreamMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedStreamMem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  enabled = v24->current.enabled;
  v26 = DCONST_DVARBOOL_cg_drawWantedImageMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedImageMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedImageMem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = v26->current.enabled;
  v28 = DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads;
  if ( !DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamerWantedImageLoads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v29 = v28->current.enabled || v27;
  v30 = DCONST_DVARINT_stream_printIntervalStreamingQuality;
  if ( !DCONST_DVARINT_stream_printIntervalStreamingQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_printIntervalStreamingQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v29 || v30->current.integer > 0 || enabled )
    Stream_Debug_CalculateMemoryStats(&streamFrontendGlob->memoryStats, enabled);
}

/*
==============
Stream_Debug_EnumDumpModelMaterialUsage
==============
*/
void Stream_Debug_EnumDumpModelMaterialUsage(XAssetHeader header, void *data)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  char dest[1024]; 

  v4 = 0;
  if ( *(_WORD *)&header.physicsLibrary->isMaterialList )
  {
    v5 = 0i64;
    do
    {
      v6 = *(_QWORD *)&header.physicsLibrary[9].name[v5];
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
        __debugbreak();
      if ( !*(_QWORD *)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
        __debugbreak();
      if ( !**(_BYTE **)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
        __debugbreak();
      Com_sprintf<1024>((char (*)[1024])dest, "|%s|material|%s|model||models", *(const char **)v6, header.physicsLibrary->name);
      v7 = 0i64;
      if ( *(_BYTE *)(v6 + 28) )
      {
        v8 = 0i64;
        do
        {
          Stream_Debug_ProcessImage((UsageInfoBase *)data, *(const GfxImage **)(v8 + *(_QWORD *)(v6 + 72) + 8), dest);
          v8 += 16i64;
          ++v7;
        }
        while ( v7 < *(unsigned __int8 *)(v6 + 28) );
      }
      ++v4;
      v5 += 8i64;
    }
    while ( v4 < *(unsigned __int16 *)&header.physicsLibrary->isMaterialList );
  }
}

/*
==============
Stream_Debug_EnumDumpRemainingImageUsage
==============
*/
void Stream_Debug_EnumDumpRemainingImageUsage(XAssetHeader header, void *data)
{
  const char *v4; 

  v4 = j_va("|%s|image", header.physicsLibrary->name);
  Stream_Debug_ProcessImage((UsageInfoBase *)data, header.image, v4);
}

/*
==============
Stream_Debug_EnumDumpSurfaceMaterialUsage
==============
*/
void Stream_Debug_EnumDumpSurfaceMaterialUsage(XAssetHeader header, void *data)
{
  unsigned __int64 v4; 
  __int64 v5; 
  const GfxImage *v6; 
  signed int GfxImageIndex; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  char dest[1024]; 

  if ( HIBYTE(header.physicsLibrary[1].name) || !*((_BYTE *)data + 112) )
  {
    Com_sprintf<1024>((char (*)[1024])dest, "|%s|material||world||static", header.physicsLibrary->name);
    v4 = 0i64;
    if ( BYTE4(header.physicsLibrary[1].name) )
    {
      v5 = 0i64;
      do
      {
        v6 = *(const GfxImage **)&header.physicsLibrary[3].name[v5 + 8];
        GfxImageIndex = DB_GetGfxImageIndex(v6);
        v8 = *(_QWORD *)data;
        v9 = GfxImageIndex;
        if ( !*(_QWORD *)data && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v10 = 1 << (v9 & 0x1F);
        v11 = 4 * (v9 >> 5);
        if ( (v10 & *(_DWORD *)(v11 + v8)) == 0 )
        {
          v12 = *(_QWORD *)data;
          if ( !*(_QWORD *)data && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          *(_DWORD *)(v11 + v12) |= v10;
          (*((void (__fastcall **)(char *, const GfxImage *, _QWORD, char *))data + 13))((char *)data + 16, v6, *((_QWORD *)data + 12), dest);
        }
        ++v4;
        v5 += 16i64;
      }
      while ( v4 < BYTE4(header.physicsLibrary[1].name) );
    }
  }
}

/*
==============
Stream_Debug_ForceSync_f
==============
*/
void Stream_Debug_ForceSync_f()
{
  Stream_PushSyncDisable();
  Stream_PopSyncDisable();
}

/*
==============
Stream_Debug_GetGenericUsageSummaryText
==============
*/
void Stream_Debug_GetGenericUsageSummaryText(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  __int64 v2; 
  unsigned int *v3; 
  __int64 v4; 
  __int64 v5; 
  float v6; 
  float v7; 
  __int64 inData; 
  __int64 v9[4]; 
  __int64 v10[2]; 
  int v11; 
  char dest[128]; 

  inData = 0i64;
  memset(v9, 0, sizeof(v9));
  v10[0] = 0i64;
  v10[1] = 0i64;
  v11 = 0;
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, GetStreamKeyCounters, &inData, 1);
  v2 = 0i64;
  v3 = (unsigned int *)v10 + 1;
  v4 = 4i64;
  do
  {
    v5 = v9[v2];
    v6 = (float)v5;
    if ( v5 < 0 )
    {
      v7 = (float)v5;
      v6 = v7 + 1.8446744e19;
    }
    Com_sprintf<128>((char (*)[128])dest, "\t%s (%d): %0.1fk", s_streamKeyBehaviorNames[v2 + 1], *v3, (float)(v6 * 0.0009765625));
    output->m_InvokeFctPtr(dest, &output->m_Data);
    ++v3;
    ++v2;
    --v4;
  }
  while ( v4 );
}

/*
==============
Stream_Debug_GetSpecialStreamDistanceStr
==============
*/
const char *Stream_Debug_GetSpecialStreamDistanceStr(StreamDistance distance)
{
  const char *result; 

  switch ( distance.mValue )
  {
    case 0x10006u:
      return " <forced part 0>";
    case 0x10007u:
      return " <forced part 1>";
    case 0x10008u:
      return " <forced part 2>";
    case 0x10009u:
      return " <forced part 3>";
    case 0x10000u:
      return " <min>";
    case 0xFEFFFFu:
      return " <max>";
    case 0xFEFFFEu:
      return " <ultrafar>";
    case 0x7000Au:
      return " <natural>";
  }
  result = " <unset>";
  if ( distance.mValue != -1 )
    return (char *)&queryFormat.fmt + 3;
  return result;
}

/*
==============
Stream_Debug_GetStreamKeyCountersFromDB
==============
*/
void Stream_Debug_GetStreamKeyCountersFromDB(const int numCounters, unsigned __int64 *mem, unsigned int *counts)
{
  int v6; 
  __int64 v7; 
  signed __int64 v8; 
  signed __int64 v9; 
  __int64 inData; 
  __int64 v11[4]; 
  __int64 v12[2]; 
  int v13; 

  if ( numCounters <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 938, ASSERT_TYPE_ASSERT, "(numCounters > 0)", (const char *)&queryFormat, "numCounters > 0") )
    __debugbreak();
  if ( !mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 939, ASSERT_TYPE_ASSERT, "(mem)", (const char *)&queryFormat, "mem") )
    __debugbreak();
  if ( !counts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 940, ASSERT_TYPE_ASSERT, "(counts)", (const char *)&queryFormat, "counts") )
    __debugbreak();
  inData = 0i64;
  memset(v11, 0, sizeof(v11));
  v12[0] = 0i64;
  v12[1] = 0i64;
  v13 = 0;
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, GetStreamKeyCounters, &inData, 1);
  v6 = 4;
  if ( numCounters < 4 )
    v6 = numCounters;
  v7 = v6;
  if ( v6 > 0 )
  {
    v8 = (char *)v11 - (char *)mem;
    v9 = (char *)v12 + 4 - (char *)counts;
    do
    {
      ++counts;
      *mem = *(unsigned __int64 *)((char *)mem + v8);
      ++mem;
      *(counts - 1) = *(unsigned int *)((char *)counts + v9 - 4);
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
Stream_Debug_Init
==============
*/
void Stream_Debug_Init(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2816, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Cmd_AddCommandInternal("stream_forceSync", Stream_Debug_ForceSync_f, &Stream_Debug_ForceSync_f_VAR);
  Cmd_AddCommandInternal("stream_testBandwidth", Stream_Debug_TestBandwidth_f, &Stream_Debug_TestBandwidth_f_VAR);
  Cmd_AddCommandInternal("stream_dumpImageUsage", Stream_Debug_DumpImageUsage_f, &Stream_Debug_DumpImageUsage_f_VAR);
  Cmd_AddCommandInternal("stream_dumpMeshUsage", Stream_Debug_DumpMeshUsage_f, &Stream_Debug_DumpMeshUsage_f_VAR);
  Cmd_AddCommandInternal("stream_dumpGenericUsage", Stream_Debug_DumpGenericUsage_f, &Stream_Debug_DumpGenericUsage_f_VAR);
  Cmd_AddCommandInternal("stream_dumpAllUsage", Stream_Debug_DumpAllUsage_f, &Stream_Debug_DumpAllUsage_f_VAR);
  Cmd_AddCommandInternal("stream_dumpImageSortList", Stream_Debug_DumpImageSortList_f, &Stream_Debug_DumpImageSortList_f_VAR);
  Cmd_AddCommandInternal("stream_dumpMeshSortList", Stream_Debug_DumpMeshSortList_f, &Stream_Debug_DumpMeshSortList_f_VAR);
  Cmd_AddCommandInternal("stream_dumpGenericSortList", Stream_Debug_DumpGenericSortList_f, &Stream_Debug_DumpGenericSortList_f_VAR);
  Cmd_AddCommandInternal("stream_dumpCategoricalImageUsage", Stream_Debug_DumpCategoricalImageUsage_f, &Stream_Debug_DumpCategoricalImageUsage_f_VAR);
  Cmd_AddCommandInternal("stream_resetReadStats", Stream_Debug_ResetReadStats_f, &Stream_Debug_ResetReadStats_f_VAR);
  Cmd_AddCommandInternal("stream_primerRequestCancel", Stream_Debug_PrimerRequestCancel_f, &Stream_Debug_PrimerRequestCancel_f_VAR);
  Cmd_AddCommandInternal("stream_primerCancelAndWait", Stream_Debug_PrimerCancelAndWait_f, &Stream_Debug_PrimerCancelAndWait_f_VAR);
  Cmd_AddCommandInternal("stream_textureSizeAllocInfo", Stream_Debug_TextureSizeAndAlloc_f, &Stream_Debug_TextureSizeAndAlloc_f_VAR);
  Cmd_AddCommandInternal("stream_loggerDump", Stream_Debug_LoggerDump_f, &Stream_Debug_LoggerDump_f_VAR);
}

/*
==============
Stream_Debug_LoggerDump_f
==============
*/
void Stream_Debug_LoggerDump_f()
{
  Stream_Logger_Dump(NULL);
}

/*
==============
Stream_Debug_PreLevelUnload
==============
*/
void Stream_Debug_PreLevelUnload(void)
{
  __m256i *p_lockedHit; 
  __int64 v1; 
  char *v2; 
  __m256i v3; 
  __int128 v4; 
  __int64 v5; 
  char v6[472]; 

  memset_0(v6, 0, 0x1C8ui64);
  p_lockedHit = (__m256i *)&s_streamDebugGlob.lockedHit;
  v1 = 3i64;
  v2 = v6;
  do
  {
    p_lockedHit += 4;
    v3 = *(__m256i *)v2;
    v4 = *((_OWORD *)v2 + 7);
    v2 += 128;
    p_lockedHit[-4] = v3;
    p_lockedHit[-3] = *((__m256i *)v2 - 3);
    p_lockedHit[-2] = *((__m256i *)v2 - 2);
    *(_OWORD *)p_lockedHit[-1].m256i_i8 = *((_OWORD *)v2 - 2);
    *(_OWORD *)&p_lockedHit[-1].m256i_u64[2] = v4;
    --v1;
  }
  while ( v1 );
  v5 = *((_QWORD *)v2 + 8);
  *p_lockedHit = *(__m256i *)v2;
  p_lockedHit[1] = *((__m256i *)v2 + 1);
  p_lockedHit[2].m256i_i64[0] = v5;
  s_streamDebugGlob.isLockedHitSet = 0;
  Dvar_SetBool_Internal(DVARBOOL_stream_drawMetrics, 0);
  Dvar_SetBool_Internal(DVARBOOL_stream_drawMetricsLockHits, 0);
  Dvar_SetBool_Internal(DVARBOOL_stream_drawMetricsLockView, 0);
  Dvar_SetBool_Internal(DVARBOOL_stream_drawTopSortedImages, 0);
  Dvar_SetInt_Internal(DVARINT_stream_drawSortLists, 0);
  Dvar_SetBool_Internal(DVARBOOL_stream_drawDefrag, 0);
}

/*
==============
Stream_Debug_PrimerCancelAndWait_f
==============
*/

void __fastcall Stream_Debug_PrimerCancelAndWait_f()
{
  Stream_Primer_CancelAndWait();
}

/*
==============
Stream_Debug_PrimerRequestCancel_f
==============
*/

void __fastcall Stream_Debug_PrimerRequestCancel_f()
{
  Stream_Primer_RequestCancel();
}

/*
==============
Stream_Debug_ProcessImage
==============
*/
void Stream_Debug_ProcessImage(UsageInfoBase *info, const GfxImage *image, const char *label)
{
  signed int GfxImageIndex; 
  unsigned int *imageWasCountedArray; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  unsigned int *v11; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  imageWasCountedArray = info->imageWasCountedArray;
  v8 = GfxImageIndex;
  if ( !info->imageWasCountedArray && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v9 = 1 << (v8 & 0x1F);
  v10 = v8 >> 5;
  if ( (v9 & imageWasCountedArray[v10]) == 0 )
  {
    v11 = info->imageWasCountedArray;
    if ( !info->imageWasCountedArray && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v11[v10] |= v9;
    info->perImageFunction(&info->output, image, info->idx, label);
  }
}

/*
==============
Stream_Debug_RemoveFromHeatMap
==============
*/
void Stream_Debug_RemoveFromHeatMap(int xpakIndex)
{
  int *p_xpakIndex; 
  __int64 v2; 

  p_xpakIndex = &s_streamDebugGlob.streamHeatMapData[1].xpakIndex;
  v2 = 512i64;
  do
  {
    if ( *(p_xpakIndex - 8) == xpakIndex )
      *(p_xpakIndex - 9) = 0;
    if ( *p_xpakIndex == xpakIndex )
      *(p_xpakIndex - 1) = 0;
    p_xpakIndex += 16;
    --v2;
  }
  while ( v2 );
}

/*
==============
Stream_Debug_ResetReadStats_f
==============
*/
void Stream_Debug_ResetReadStats_f()
{
  Stream_PushSyncDisable();
  Stream_Read_ResetStats();
  Stream_PopSyncDisable();
}

/*
==============
Stream_Debug_RunThroughImages
==============
*/
void Stream_Debug_RunThroughImages(const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  char *v2; 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *m_InvokeFctPtr)(const char *, const void *); 
  int *v5; 
  void (__fastcall *v6)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  void (__fastcall *v7)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v8; 
  void (__fastcall *v9)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v10)(const char *, const void *); 
  int *v11; 
  void (__fastcall *v12)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v13; 
  void (__fastcall *v14)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v15)(const char *, const void *); 
  int *v16; 
  int v17; 
  __int64 v18; 
  char *v19; 
  void (__fastcall *v20)(const char *, const void *); 
  void (__fastcall *v21)(void *, const void *, stdext::inplace_function_operation); 
  char v22[64]; 
  int *v23; 
  void (__fastcall *v24)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v25; 
  void (__fastcall *v26)(const char *, const void *); 
  void (__fastcall *v27)(void *, const void *, stdext::inplace_function_operation); 
  char v28[64]; 
  int *v29; 
  void (__fastcall *v30)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  __int64 v31[2]; 
  void (__fastcall *v32)(const char *, const void *); 
  void (__fastcall *v33)(void *, const void *, stdext::inplace_function_operation); 
  char v34[64]; 
  int *v35; 
  void (__fastcall *v36)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v37; 
  char *v38; 
  void (__fastcall *v39)(const char *, const void *); 
  void (__fastcall *v40)(void *, const void *, stdext::inplace_function_operation); 
  char v41[64]; 
  int *v42; 
  void (__fastcall *v43)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *inData; 
  void (__fastcall *v45)(const char *, const void *); 
  void (__fastcall *v46)(void *, const void *, stdext::inplace_function_operation); 
  char v47[64]; 
  int *v48; 
  void (__fastcall *v49)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v50[10240]; 

  v18 = -2i64;
  memset_0(v50, 0, sizeof(v50));
  v17 = 0;
  v2 = v50;
  v19 = v50;
  m_ManagerFctPtr = output->m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v22, &output->m_Data, Copy);
    m_ManagerFctPtr = output->m_ManagerFctPtr;
    v2 = v19;
  }
  m_InvokeFctPtr = output->m_InvokeFctPtr;
  v20 = output->m_InvokeFctPtr;
  v21 = m_ManagerFctPtr;
  v5 = &v17;
  v23 = &v17;
  v6 = Stream_Debug_AddImageSizeToCategoryCaller;
  v7 = Stream_Debug_AddImageSizeToCategoryCaller;
  v24 = Stream_Debug_AddImageSizeToCategoryCaller;
  inData = v2;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v47, v22, Copy);
    v7 = v24;
    v5 = v23;
    m_ManagerFctPtr = v21;
    m_InvokeFctPtr = v20;
  }
  v45 = m_InvokeFctPtr;
  v46 = m_ManagerFctPtr;
  v48 = v5;
  v49 = v7;
  v20 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(v22, NULL, Destroy);
  v21 = NULL;
  DB_EnumXAssets(ASSET_TYPE_XMODEL, Stream_Debug_EnumDumpModelMaterialUsage, &inData, 1);
  v8 = v50;
  v25 = v50;
  v9 = output->m_ManagerFctPtr;
  if ( v9 )
  {
    v9(v28, &output->m_Data, Copy);
    v9 = output->m_ManagerFctPtr;
    v8 = v25;
  }
  v10 = output->m_InvokeFctPtr;
  v26 = output->m_InvokeFctPtr;
  v27 = v9;
  v11 = &v17;
  v29 = &v17;
  v12 = Stream_Debug_AddImageSizeToCategoryCaller;
  v30 = Stream_Debug_AddImageSizeToCategoryCaller;
  v31[0] = (__int64)v8;
  if ( v9 )
  {
    v9(v34, v28, Copy);
    v12 = v30;
    v11 = v29;
    v9 = v27;
    v10 = v26;
  }
  v32 = v10;
  v33 = v9;
  v35 = v11;
  v36 = v12;
  v37 = 0;
  v26 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v9 )
    v9(v28, NULL, Destroy);
  v27 = NULL;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v31, 1);
  v37 = 1;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v31, 1);
  v13 = v50;
  v19 = v50;
  v14 = output->m_ManagerFctPtr;
  if ( v14 )
  {
    v14(v22, &output->m_Data, Copy);
    v14 = output->m_ManagerFctPtr;
    v13 = v19;
  }
  v15 = output->m_InvokeFctPtr;
  v20 = output->m_InvokeFctPtr;
  v21 = v14;
  v16 = &v17;
  v23 = &v17;
  v24 = Stream_Debug_AddImageSizeToCategoryCaller;
  v38 = v13;
  if ( v14 )
  {
    v14(v41, v22, Copy);
    v6 = v24;
    v16 = v23;
    v14 = v21;
    v15 = v20;
  }
  v39 = v15;
  v40 = v14;
  v42 = v16;
  v43 = v6;
  v20 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v14 )
    v14(v22, NULL, Destroy);
  v21 = NULL;
  DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_Debug_EnumDumpRemainingImageUsage, &v38, 1);
  v39 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v40 )
    v40(v41, NULL, Destroy);
  v40 = NULL;
  v32 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v33 )
    v33(v34, NULL, Destroy);
  v33 = NULL;
  v45 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v46 )
    v46(v47, NULL, Destroy);
}

/*
==============
Stream_Debug_TestBandwidth_f
==============
*/
void Stream_Debug_TestBandwidth_f()
{
  unsigned int v0; 
  int v1; 
  void *v2; 
  int v3; 
  const char *v4; 
  int v5; 
  FileStreamFileID v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int128 v16; 
  __int128 v18; 
  int v20; 
  FileStreamRequestID outId[4]; 
  unsigned int v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  StreamerMemLoan optionalLoan; 
  StreamerMemLoan result; 

  v24 = -2i64;
  v0 = 0;
  v1 = 0;
  optionalLoan.mUpdateID = 0i64;
  optionalLoan.mPages = 0i64;
  optionalLoan.mCookie = -1061110033;
  if ( StreamerMemLoan::TryResize(&optionalLoan, MOVEMENT, 0x400000ui64) )
  {
    PMem_BeginAlloc("StreamerBandwidthTest", PMEM_STACK_GAME);
    v2 = PMem_AllocWithLoan(0x400000ui64, 0x10ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, &optionalLoan, "StreamerBandwidthTest");
    PMem_EndAlloc("StreamerBandwidthTest", PMEM_STACK_GAME);
    if ( Cmd_Argc() >= 2 )
    {
      v4 = Cmd_Argv(1);
      v3 = atoi(v4) << 10;
      if ( v3 > 0x400000 )
        v3 = 0x400000;
    }
    else
    {
      v3 = 0x100000;
    }
    v20 = v3;
    do
    {
      v5 = v1++;
      v6 = XPak_IndexToFileID(v5);
      v7 = FileStream_Easy_FileSize(v6);
    }
    while ( v7 < 524288000 );
    v8 = __rdtsc();
    v23 = v8;
    v9 = 100 * v3;
    v22 = 100 * v3;
    s_streamDebugGlob.bandwidthTestReadComplete = 0;
    s_streamDebugGlob.bandwidthTestReadEndTime = v8;
    v10 = 0;
    if ( 100 * v3 )
    {
      v11 = (unsigned int)v3;
      v12 = v7 - (unsigned int)v3;
      do
      {
        v13 = (rand() % v12) & 0xFFFFFFFFFFFF8000ui64;
        if ( !FileStream_AddRequest(v6, v13, v11, v2, 250, FLAT_TIRE, lambda_e7b7e2d3fabc9e58d1c429ac83e03148_::_lambda_invoker_cdecl_, NULL, outId, FILE_STREAM_TRACK_TEST_BANDWIDTH) )
        {
          do
            Sys_Sleep(0);
          while ( !FileStream_AddRequest(v6, v13, v11, v2, 250, FLAT_TIRE, lambda_e7b7e2d3fabc9e58d1c429ac83e03148_::_lambda_invoker_cdecl_, NULL, outId, FILE_STREAM_TRACK_TEST_BANDWIDTH) );
          v3 = v20;
        }
        ++v10;
        v0 += v3;
        v9 = v22;
      }
      while ( v0 < v22 );
      v8 = v23;
    }
    while ( s_streamDebugGlob.bandwidthTestReadComplete != v10 )
      Sys_Sleep(0);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(s_streamDebugGlob.bandwidthTestReadEndTime - v8) < 0 )
    {
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v16 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v16;
    }
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v18;
    __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
    *(float *)&_XMM0 = (float)v9;
    Com_Printf(35, "Loaded %u bytes in %f ms (%.2f MB/s)\n", v0, *(float *)&_XMM3, (float)((float)(0.00095367426 / *(float *)&_XMM3) * *(float *)&_XMM0));
    PMem_Free(&result, "StreamerBandwidthTest", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  else
  {
    Com_PrintError(35, "Failed to allocate memory for streamer bandwidth test\n");
  }
  StreamerMemLoan::~StreamerMemLoan(&optionalLoan);
}

/*
==============
Stream_Debug_TextureSizeAndAlloc_f
==============
*/

void __fastcall Stream_Debug_TextureSizeAndAlloc_f(double _XMM0_8)
{
  const char **p_name; 
  unsigned int i; 
  int j; 
  int k; 
  __int64 v5; 
  __m256i v6; 
  __m256i v7; 
  Image_SetupParams params; 
  XG_RESOURCE_LAYOUT layout; 

  Com_Printf(35, "\tfmt\twidth\theight\tsize\talign\n");
  p_name = &s_formats[0].name;
  for ( i = 0; i < 0x11; ++i )
  {
    for ( j = 1; j < 0x4000; j *= 2 )
    {
      for ( k = 1; k < 0x4000; k *= 2 )
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v7.m256i_u64[1] = *(_OWORD *)&_XMM0_8;
        v6.m256i_i32[6] = *((_DWORD *)p_name - 2);
        v6.m256i_i32[2] = 1;
        *(__int64 *)((char *)&v6.m256i_i64[1] + 4) = 1i64;
        v7.m256i_i64[0] = 0i64;
        v7.m256i_i32[6] = -1;
        v6.m256i_i64[0] = __PAIR64__(k, j);
        v6.m256i_i32[5] = 0;
        *(__m256i *)&params.width = v6;
        *(__m256i *)&params.customAllocFunc = v7;
        Image_GetTextureLayout_XB3(&params, &layout);
        LODWORD(v5) = k;
        Com_Printf(35, "\t%s\t%d\t%d\t%d\t%d\n", *p_name, (unsigned int)j, v5, layout.SizeBytes, layout.BaseAlignmentBytes);
      }
    }
    p_name += 2;
  }
}

/*
==============
Stream_Debug_UpdateClientFrame
==============
*/
void Stream_Debug_UpdateClientFrame(void)
{
  const dvar_t *v0; 
  __int64 v1; 
  const dvar_t *v2; 
  int integer; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  int v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  StreamerMemLoan result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2925, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = DVARBOOL_stream_useImageFallback;
  if ( !DVARBOOL_stream_useImageFallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_useImageFallback") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  R_Texture_UpdateStreamedFallbacks(v0->current.enabled);
  v1 = tls_index;
  if ( dword_14EC40D64 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC40D64);
    if ( dword_14EC40D64 == -1 )
    {
      streamStealCpuMBLoan.mCookie = -1061110033;
      streamStealCpuMBLoan.mUpdateID = 0i64;
      streamStealCpuMBLoan.mPages = 0i64;
      j_atexit(Stream_Debug_UpdateClientFrame_::_10_::_dynamic_atexit_destructor_for__streamStealCpuMBLoan__);
      j__Init_thread_footer(&dword_14EC40D64);
    }
  }
  v2 = DCONST_DVARINT_stream_stealCpuMB;
  if ( !DCONST_DVARINT_stream_stealCpuMB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_stealCpuMB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer < 0 )
  {
    v4 = Stream_Alloc_GetTotalBytesForPool(MOVEMENT) >> 20;
    v5 = StreamerMemLoan::Size(&streamStealCpuMBLoan);
    integer = truncate_cast<int,unsigned __int64>(v4 + (v5 >> 20));
  }
  v6 = (__int64)integer << 20;
  StreamerMemLoan::TryResize(&streamStealCpuMBLoan, MOVEMENT, v6);
  StreamerMemLoan::MakeReady(&streamStealCpuMBLoan, MOVEMENT, v6);
  if ( dword_14EC40D84 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC40D84);
    if ( dword_14EC40D84 == -1 )
    {
      streamStealGpuMBLoan.mCookie = -1061110033;
      streamStealGpuMBLoan.mUpdateID = 0i64;
      streamStealGpuMBLoan.mPages = 0i64;
      j_atexit(Stream_Debug_UpdateClientFrame_::_14_::_dynamic_atexit_destructor_for__streamStealGpuMBLoan__);
      j__Init_thread_footer(&dword_14EC40D84);
    }
  }
  v7 = DCONST_DVARINT_stream_stealGpuMB;
  if ( !DCONST_DVARINT_stream_stealGpuMB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_stealGpuMB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  if ( v8 < 0 )
  {
    v9 = Stream_Alloc_GetTotalBytesForPool(DODGE) >> 20;
    v10 = StreamerMemLoan::Size(&streamStealGpuMBLoan);
    v8 = truncate_cast<int,unsigned __int64>(v9 + (v10 >> 20));
  }
  v11 = (__int64)v8 << 20;
  StreamerMemLoan::TryResize(&streamStealGpuMBLoan, DODGE, v11);
  StreamerMemLoan::MakeReady(&streamStealGpuMBLoan, DODGE, v11);
  v12 = DCONST_DVARBOOL_stream_memThrashTest;
  if ( !DCONST_DVARBOOL_stream_memThrashTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_memThrashTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled && (unsigned __int8)rand() < 4u )
  {
    v13 = (unsigned __int8)rand() + 1;
    PMem_BeginAlloc("StreamerThrashTest", PMEM_STACK_GAME);
    PMem_Alloc((unsigned __int64)v13 << 20, 0x10ui64, (Mem_Pool)((v13 & 1) == 0), PMEM_STACK_GAME, "StreamerThrashTest");
    PMem_EndAlloc("StreamerThrashTest", PMEM_STACK_GAME);
    PMem_Free(&result, "StreamerThrashTest", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
}

/*
==============
Stream_Debug_UpdateTexturesForDebugShader
==============
*/
void Stream_Debug_UpdateTexturesForDebugShader(const GfxBackEndData *data, bool useDebugShaderStreaming)
{
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2897, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2898, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( s_streamDebugGlob.useDebugShaderStreaming != useDebugShaderStreaming )
  {
    s_streamDebugGlob.useDebugShaderStreaming = useDebugShaderStreaming;
    if ( r_deviceDebug->current.enabled )
      Com_PrintError(35, "\"DebugShaderTexture - Streamer\" doesn't work when \"Device Debug\" is enabled.\n");
    DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_Debug_UpdateTexturesForDebugShader_ForEachImage, (void *)data, 0);
  }
}

/*
==============
Stream_Debug_UpdateTexturesForDebugShader_ForEachImage
==============
*/
void Stream_Debug_UpdateTexturesForDebugShader_ForEachImage(XAssetHeader header, void *userData)
{
  unsigned int v4; 
  char v5; 
  signed int v6; 
  unsigned int GfxImageIndex; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  GfxTextureId havokData; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2853, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2854, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
    __debugbreak();
  if ( header.physicsLibrary )
  {
    if ( ((__int64)header.physicsLibrary[1].name & 0x40) != 0 && !RB_Texture_HasStreamedFallbackAssigned((const GfxBackEndData *)userData, (GfxTextureId)header.physicsLibrary->havokData) )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      GfxImageIndex = DB_GetGfxImageIndex(header.image);
      v8 = 0;
      if ( BYTE1(header.physicsLibrary[2].name) )
      {
        v9 = 3;
        v10 = 4 * GfxImageIndex;
        do
        {
          if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, v10 + v8) )
          {
            v5 = 1;
            v4 = LOBYTE(header.physicsLibrary[2].name) - (*(_DWORD *)(&header.physicsLibrary[3].havokData + 5 * v8) & 0xF);
            v11 = v9;
            if ( v6 > v9 )
              v11 = v6;
            v6 = v11;
          }
          ++v8;
          --v9;
        }
        while ( v8 < BYTE1(header.physicsLibrary[2].name) );
        if ( v5 )
        {
          havokData = (GfxTextureId)header.physicsLibrary->havokData;
          if ( s_streamDebugGlob.useDebugShaderStreaming )
            RB_Texture_UpdateForDebugShaderStreaming((const GfxBackEndData *)userData, havokData, v4, v6);
          else
            RB_Texture_ClearForDebugShaderStreaming((const GfxBackEndData *)userData, havokData, v4, LOBYTE(header.physicsLibrary[2].name));
          Stream_BackendQueue_QueueCopyTextureDesc((const GfxBackEndData *)userData, header.image);
        }
      }
    }
  }
}

/*
==============
Stream_DrawSortListFilterName
==============
*/
char Stream_DrawSortListFilterName(const char *objectName)
{
  const dvar_t *v1; 
  const char *string; 
  const char *v4; 
  char *saveptrctx[2]; 
  char dest[512]; 

  v1 = DVARSTR_stream_drawSortListsFilter;
  if ( !DVARSTR_stream_drawSortListsFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawSortListsFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  string = v1->current.string;
  if ( string && *string )
  {
    Core_strcpy_truncate(dest, 0x200ui64, string);
    saveptrctx[0] = NULL;
    v4 = I_strtok_r(dest, ",", saveptrctx);
    if ( !v4 )
      return 1;
    while ( !I_stristr(objectName, v4) )
    {
      v4 = I_strtok_r(NULL, ",", saveptrctx);
      if ( !v4 )
        return 1;
    }
  }
  return 0;
}

