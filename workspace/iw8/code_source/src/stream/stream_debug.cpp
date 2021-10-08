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

void __fastcall Stream_Debug_BeginScreenUpdateFrame(double _XMM0_8)
{
  const dvar_t *v4; 
  int v5; 
  int v6; 
  bool v26; 
  char *fmt; 
  char *fmta; 
  double v35; 
  double v36; 
  DLogContext context; 
  char dest[256]; 
  char buffer[4096]; 

  v4 = DCONST_DVARINT_stream_printIntervalStreamingQuality;
  if ( !DCONST_DVARINT_stream_printIntervalStreamingQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_printIntervalStreamingQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = 1000 * v4->current.integer;
  if ( v5 > 0 )
  {
    v6 = Sys_Milliseconds();
    if ( v5 + s_lastTimePrintStreamingQuality < v6 )
    {
      _RBX = DVARFLT_stream_distanceImageNeeded;
      __asm
      {
        vmovaps [rsp+12E8h+var_18], xmm6
        vmovaps [rsp+12E8h+var_28], xmm7
        vmovaps [rsp+12E8h+var_38], xmm8
      }
      s_lastTimePrintStreamingQuality = v6;
      if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      _RDX = streamFrontendGlob;
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+28h]
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm7, dword ptr [rdx+0B96B28h]
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (streamFrontendGlob->memoryStats.wantedImageMemory & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
      __asm { vmulss  xmm8, xmm0, cs:__real@35800000 }
      _RCX = 192i64 * streamFrontendGlob->currentSavedViewPos;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rdx+0B96C64h]
        vmovss  xmm3, dword ptr [rcx+rdx+0B96C5Ch]
        vmovss  xmm1, dword ptr [rcx+rdx+0B96C60h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+12E8h+var_12C0], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+12E8h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "%.4f, %.4f, %.4f", *(double *)&_XMM3, *(double *)&fmt, v35);
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcvtss2sd xmm2, xmm7, xmm7
        vcvtss2sd xmm1, xmm8, xmm8
        vmovsd  [rsp+12E8h+var_12C0], xmm0
        vmovq   r8, xmm2
        vmovsd  [rsp+12E8h+fmt], xmm1
      }
      Com_Printf(35, "[StreamingQuality] StreamingQuality is %.4f at position ( %s ). ( %.4f MB is needed to reach Streaming Quality %.4f )\n", *(double *)&_XMM2, dest, *(double *)&fmta, v36);
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v26 = DLog_BeginEvent(&context, "streaming_quality");
        context.autoEndEvent = 1;
        if ( v26 )
        {
          __asm { vmovaps xmm2, xmm7; value }
          if ( DLog_Float32(&context, "streaming_quality", *(float *)&_XMM2) && DLog_String(&context, "view_pos", dest, 0) )
          {
            __asm { vmovaps xmm2, xmm8; value }
            if ( DLog_Float32(&context, "wanted_mb", *(float *)&_XMM2) )
            {
              __asm { vmovaps xmm2, xmm6; value }
              if ( DLog_Float32(&context, "target_quality", *(float *)&_XMM2) )
                DLog_RecordContext(&context);
            }
          }
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+12E8h+var_28]
        vmovaps xmm6, [rsp+12E8h+var_18]
        vmovaps xmm8, [rsp+12E8h+var_38]
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
  unsigned int v4; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  signed int v10; 
  char *v11; 
  StreamFrontendGlob *v12; 
  unsigned int *mStaticForced; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  _RBX = DVARFLT_stream_distanceImageNeeded;
  v4 = GfxImageIndex;
  if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+78h+arg_0], xmm1
    vmovss  [rsp+78h+arg_8], xmm1
  }
  if ( (v19 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  v7 = 0;
  v8 = 0;
  if ( image->streamedPartCount )
  {
    v9 = 4 * v4;
    do
    {
      v10 = v9 + v8;
      v11 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
      if ( v9 + v8 >= 0x50000 )
      {
        LODWORD(v18) = 327680;
        LODWORD(v17) = v9 + v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( *(_DWORD *)&v11[4 * v10 + 2775264] <= v20 >> 7 )
        goto LABEL_34;
      v12 = streamFrontendGlob;
      if ( v10 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v18) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v17) = v9 + v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      mStaticForced = v12->imageBits.mStaticForced;
      if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v14 = mStaticForced[(__int64)v10 >> 5];
      if ( _bittest((const int *)&v14, v10 & 0x1F) )
      {
LABEL_34:
        if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( v8 >= Image_GetStreamedPartCount(image) )
        {
          LODWORD(v18) = Image_GetStreamedPartCount(image);
          LODWORD(v17) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( v8 )
          v15 = ((unsigned int)image->streams[v8].levelCountAndSize >> 4) - (*((_DWORD *)&image->levelCount + 10 * v8) >> 4);
        else
          v15 = (unsigned int)image->streams[0].levelCountAndSize >> 4;
        v7 += v15;
      }
      ++v8;
    }
    while ( v8 < image->streamedPartCount );
  }
  return v7;
}

/*
==============
Stream_Debug_CalculateMemoryStats
==============
*/
void Stream_Debug_CalculateMemoryStats(StreamFrontendMemoryStats *outStats, bool calculateAllStats)
{
  StreamSortListFrame *v7; 
  int v8; 
  __int64 v9; 
  unsigned __int64 *mSorted; 
  unsigned __int64 v11; 
  int v12; 
  __int64 v13; 
  unsigned __int64 *v14; 
  unsigned __int64 v15; 
  int v21; 
  _BYTE v22[96]; 

  _R12 = outStats;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Debug_CalculateMemoryStats");
  _RBX = DVARFLT_stream_distanceImageNeeded;
  if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rsp+118h+var_D8], xmm1
    vmovss  [rsp+118h+var_D0], xmm1
  }
  if ( (v21 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  v7 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead];
  memset_0(v22, 0, 0x70ui64);
  if ( v7 == (StreamSortListFrame *)-4014096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockRead(&v7->imageSortList.mCS);
  StreamSortList_327680_::IterateRange__lambda_2249a83867f5e171be3bcc5afc88c5a3___((_DWORD)v7 + 1351680, 0, (const Stream_Debug_CalculateMemoryStats::__l2::<lambda_2249a83867f5e171be3bcc5afc88c5a3> *)(unsigned int)(v7->imageSortList.mCount - 1));
  Sys_UnlockRead(&v7->imageSortList.mCS);
  if ( calculateAllStats )
  {
    if ( v7 == (StreamSortListFrame *)-4380224i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&v7->meshSortList.mCS);
    v8 = v7->meshSortList.mCount - 1;
    if ( v8 >= 0 )
    {
      v9 = v8 + 1i64;
      mSorted = (unsigned __int64 *)v7->meshSortList.mSorted;
      do
      {
        v11 = *mSorted >> 45;
        if ( !StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v11) )
          *(_QWORD *)&v22[16] += DB_GetXModelSurfsAtIndex(v11)->shared->dataSize;
        ++mSorted;
        --v9;
      }
      while ( v9 );
    }
    Sys_UnlockRead(&v7->meshSortList.mCS);
    if ( v7 == (StreamSortListFrame *)-4688112i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&v7->genericSortList.mCS);
    v12 = v7->genericSortList.mCount - 1;
    if ( v12 >= 0 )
    {
      v13 = v12 + 1i64;
      v14 = (unsigned __int64 *)v7->genericSortList.mSorted;
      do
      {
        v15 = *v14 >> 45;
        if ( !StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, v15) )
          *(_QWORD *)&v22[24] += DB_GetStreamKeyAtIndex(v15)->dataSize;
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    Sys_UnlockRead(&v7->genericSortList.mCS);
  }
  __asm
  {
    vmovups ymm0, [rsp+118h+var_A8]
    vmovups ymmword ptr [r12], ymm0
    vmovups ymm1, [rsp+118h+var_88]
    vmovups ymmword ptr [r12+20h], ymm1
    vmovups ymm0, [rsp+118h+var_68]
    vmovups ymmword ptr [r12+40h], ymm0
    vmovups xmm1, [rsp+118h+var_48]
    vmovups xmmword ptr [r12+60h], xmm1
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Debug_DrawCameraVelocity
==============
*/
void Stream_Debug_DrawCameraVelocity(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v8; 
  GfxFont *FontHandle; 
  __int64 v57; 
  char *fmt; 
  float fmta; 
  double horzAlign; 
  int horzAligna; 
  double vertAlign; 
  float v69; 
  float w; 
  float h; 
  float y; 
  float x; 
  GfxColor color; 
  GfxColor v75; 
  int v77; 
  char dest[128]; 

  v8 = DCONST_DVARBOOL_stream_drawCameraVelocity;
  if ( !DCONST_DVARBOOL_stream_drawCameraVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawCameraVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@43d70000
      vmovss  xmm1, cs:__real@43960000
      vmovaps [rsp+190h+var_20], xmm6
      vmovaps [rsp+190h+var_30], xmm7
      vmovaps [rsp+190h+var_40], xmm8
      vmovss  [rsp+190h+y], xmm0
      vmovss  xmm0, cs:__real@41700000
      vmovaps [rsp+190h+var_50], xmm9
      vxorps  xmm6, xmm6, xmm6
      vmovaps [rsp+190h+var_60], xmm10
      vmovss  [rsp+190h+h], xmm0
      vmovaps [rsp+190h+var_70], xmm11
      vmovss  [rsp+190h+x], xmm6
      vmovss  [rsp+190h+w], xmm1
    }
    ScrPlace_ApplyRect(scrPlace, &x, &y, &w, &h, 1, 1);
    *(double *)&_XMM0 = CL_StreamViews_ParametricVelocity(LOCAL_CLIENT_0);
    __asm { vmovaps xmm7, xmm0 }
    _RAX = CL_StreamViews_GetClientVelocity(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm6, cs:__real@40000000
      vmovsd  xmm1, qword ptr [rax]
    }
    *(float *)&_RAX = _RAX->v[2];
    __asm
    {
      vmulss  xmm3, xmm1, xmm1
      vmovsd  [rbp+90h+var_110], xmm1
      vmovss  xmm1, dword ptr [rbp+90h+var_110+4]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm3, xmm6, [rsp+190h+h]; height
      vaddss  xmm2, xmm6, [rsp+190h+w]; width
    }
    v77 = (int)_RAX;
    __asm
    {
      vmovss  xmm8, [rbp+90h+var_108]
      vmulss  xmm0, xmm8, xmm8
      vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm1, xmm0, xmm4
      vmulss  xmm0, xmm7, cs:__real@437f0000
      vcvttss2si rax, xmm0
      vmovss  xmm0, [rsp+190h+y]
      vsqrtss xmm10, xmm1, xmm1
      vsubss  xmm1, xmm9, xmm7
      vmulss  xmm1, xmm1, cs:__real@437f0000
      vcvttss2si rcx, xmm1
    }
    color.packed = 0x80000000;
    __asm
    {
      vsqrtss xmm11, xmm4, xmm4
      vmovss  xmm4, [rsp+190h+x]
      vsubss  xmm1, xmm0, xmm9; y
      vsubss  xmm0, xmm4, xmm9; x
    }
    v75.packed = _RAX | (((unsigned int)_RCX | 0x7F00) << 16);
    R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color, 0);
    __asm
    {
      vmulss  xmm2, xmm7, [rsp+190h+w]; width
      vmovss  xmm3, [rsp+190h+h]; height
      vmovss  xmm1, [rsp+190h+y]; y
      vmovss  xmm0, [rsp+190h+x]; x
    }
    R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &v75, 1);
    _RBX = DVARFLT_stream_maxAnticipatedVelocity;
    if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+28h]
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  qword ptr [rsp+190h+vertAlign], xmm0
      vcvtss2sd xmm1, xmm11, xmm11
      vcvtss2sd xmm3, xmm10, xmm10
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  qword ptr [rsp+190h+horzAlign], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+190h+fmt], xmm4
    }
    Com_sprintf_truncate<128>((char (*)[128])dest, "Velocity %.03f, %.0f \\ %.0f, XY=%.0f Z=%.0f", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, horzAlign, vertAlign);
    __asm { vmovaps xmm2, xmm9; scale }
    FontHandle = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm11, [rsp+190h+var_70]
      vmovaps xmm10, [rsp+190h+var_60]
    }
    v57 = -1i64;
    __asm
    {
      vmovaps xmm9, [rsp+190h+var_50]
      vmovaps xmm8, [rsp+190h+var_40]
      vmovaps xmm7, [rsp+190h+var_30]
    }
    do
      ++v57;
    while ( dest[v57] );
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vmovss  [rsp+190h+var_150], xmm0
      vmovss  xmm0, cs:__real@43dd0000
      vmovss  [rsp+190h+horzAlign], xmm0
      vmovss  dword ptr [rsp+190h+fmt], xmm6
    }
    UI_DrawText(scrPlace, dest, v57, FontHandle, fmta, *(float *)&horzAligna, 1, 1, v69, &colorWhite, 3);
    __asm { vmovaps xmm6, [rsp+190h+var_20] }
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
  const dvar_t *v4; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  unsigned __int64 SubPageWaste; 
  const char *v17; 
  float fmt; 
  float fontScale; 
  float fontScalea; 
  float fontScaleb; 
  float fontScalec; 
  float fontScaled; 
  float lineHeight; 
  float lineHeighta; 
  float lineHeightb; 
  float lineHeightc; 
  int vertAlign; 
  int vertAligna; 
  int vertAlignb; 
  int vertAlignc; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  StreamDefragRegionStats outMoveableRegionStats; 
  StreamDefragRegionStats stats; 
  StreamDefragRegionStats outFixedRegionStats; 
  StreamDefragRegionStats v43; 

  v4 = DVARBOOL_stream_drawDefrag;
  if ( !DVARBOOL_stream_drawDefrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawDefrag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+228h+var_18], xmm6
      vmovaps [rsp+228h+var_28], xmm7
      vmovaps [rsp+228h+var_38], xmm8
      vmovss  xmm8, cs:__real@3e3851ec
      vmovaps xmm2, xmm8; scale
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientIndex);
    __asm { vmovaps xmm1, xmm8; scale }
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    UI_TextHeight(FontHandle, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    Stream_Defrag_GetRegionStats(DODGE, &outFixedRegionStats, &outMoveableRegionStats);
    Stream_Defrag_GetRegionStats(MOVEMENT, &v43, &stats);
    __asm
    {
      vmovss  xmm0, cs:__real@42066666
      vmovss  xmm7, cs:__real@43000000
      vmovss  [rsp+228h+var_1E8], xmm0
      vmovss  [rsp+228h+vertAlign], xmm7
      vmovss  [rsp+228h+lineHeight], xmm6
      vmovss  [rsp+228h+fontScale], xmm8
    }
    *(float *)&_XMM0 = Stream_Debug_DrawDefragRegion("GPU ^2Moveable^7", 1, &outMoveableRegionStats, ActivePlacement, FontHandle, fontScale, lineHeight, *(float *)&vertAlign, v35);
    __asm
    {
      vmovss  [rsp+228h+var_1E8], xmm0
      vmovss  [rsp+228h+vertAlign], xmm7
      vmovss  [rsp+228h+lineHeight], xmm6
      vmovss  [rsp+228h+fontScale], xmm8
    }
    *(float *)&_XMM0 = Stream_Debug_DrawDefragRegion("^5CPU^7 ^2Moveable^7", 1, &stats, ActivePlacement, FontHandle, fontScalea, lineHeighta, *(float *)&vertAligna, v36);
    __asm
    {
      vmovss  [rsp+228h+var_1E8], xmm0
      vmovss  [rsp+228h+vertAlign], xmm7
      vmovss  [rsp+228h+lineHeight], xmm6
      vmovss  [rsp+228h+fontScale], xmm8
    }
    *(float *)&_XMM0 = Stream_Debug_DrawDefragRegion("GPU ^8Fixed^7", 0, &outFixedRegionStats, ActivePlacement, FontHandle, fontScaleb, lineHeightb, *(float *)&vertAlignb, v37);
    __asm
    {
      vmovss  [rsp+228h+var_1E8], xmm0
      vmovss  [rsp+228h+vertAlign], xmm7
      vmovss  [rsp+228h+lineHeight], xmm6
      vmovss  [rsp+228h+fontScale], xmm8
    }
    *(float *)&_XMM0 = Stream_Debug_DrawDefragRegion("^5CPU^7 ^8Fixed^7", 0, &v43, ActivePlacement, FontHandle, fontScalec, lineHeightc, *(float *)&vertAlignc, v38);
    __asm { vmovaps xmm6, xmm0 }
    SubPageWaste = Mem_Paged_GetSubPageWaste();
    v17 = j_va("Mem_Paged sub-page waste: ^5%zu^7 bytes / ^5%zu^7 KB / ^5%zu^7 MB", SubPageWaste, SubPageWaste >> 10, SubPageWaste >> 20);
    __asm
    {
      vmovss  [rsp+228h+var_1E8], xmm8
      vmovss  [rsp+228h+fontScale], xmm6
      vmovss  dword ptr [rsp+228h+fmt], xmm7
    }
    UI_DrawText(ActivePlacement, v17, 0x7FFFFFFF, FontHandle, fmt, fontScaled, 1, 1, v39, &colorWhite, 3);
    __asm
    {
      vmovaps xmm8, [rsp+228h+var_38]
      vmovaps xmm7, [rsp+228h+var_28]
      vmovaps xmm6, [rsp+228h+var_18]
    }
  }
}

/*
==============
Stream_Debug_DrawDefragRegion
==============
*/
float Stream_Debug_DrawDefragRegion(const char *regionName, bool isMoveableRegion, const StreamDefragRegionStats *stats, const ScreenPlacement *scrPlace, GfxFont *const font, float fontScale, float lineHeight, float x, float y)
{
  unsigned __int64 endAddress; 
  unsigned __int64 baseAddress; 
  unsigned __int64 v28; 
  signed __int64 reserved; 
  __int64 v30; 
  const char *v31; 
  const char *v32; 
  unsigned int *v33; 
  unsigned int *v34; 
  unsigned __int64 allocated; 
  __int64 v55; 
  const char *v56; 
  unsigned int *v57; 
  unsigned __int64 used; 
  __int64 v71; 
  const char *v72; 
  unsigned int *v73; 
  unsigned __int64 committed; 
  __int64 v87; 
  const char *v88; 
  unsigned int *v89; 
  unsigned __int64 alignWaste; 
  __int64 v103; 
  const char *v104; 
  unsigned int *v105; 
  unsigned __int64 fullyUnmappedNotYetReleased; 
  __int64 v119; 
  const char *v120; 
  unsigned int *v121; 
  unsigned __int64 fragmentation; 
  float v149; 
  const char *v150; 
  float v151; 
  const char *v152; 
  float v153; 
  const char *v154; 
  float v155; 
  const char *v156; 
  float v157; 
  const char *v158; 
  float v159; 
  const char *v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  double v165; 
  float v166; 
  double v167; 
  float v168; 
  double v169; 
  float v170; 
  double v171; 
  float v172; 
  double v173; 
  float v174; 
  double v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  char dest[1024]; 
  char v188; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovss  xmm10, dword ptr [r11+40h]
    vmovss  xmm9, dword ptr [r11+38h]
    vmovss  xmm11, dword ptr [r11+30h]
  }
  if ( isMoveableRegion )
  {
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: in-flight defrag moves: ^3%u^7 (incl. outstanding unmaps) ^3%u^7 (copies only)", regionName, stats->inFlightDefragMoveCount, stats->inFlightDefragCopyCount);
    __asm
    {
      vmovss  xmm6, [rsp+508h+y]
      vmovss  [rsp+508h+var_4C8], xmm11
      vmovss  [rsp+508h+var_4E0], xmm6
      vmovss  [rsp+508h+var_4E8], xmm10
    }
    UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v149, v163, 1, 1, v177, &colorWhite, 3);
    __asm { vaddss  xmm6, xmm6, xmm9 }
  }
  else
  {
    __asm { vmovss  xmm6, [rsp+508h+y] }
  }
  endAddress = stats->endAddress;
  baseAddress = stats->baseAddress;
  v28 = 0i64;
  reserved = stats->reserved;
  v30 = 0i64;
  while ( 1 )
  {
    v31 = "bytes";
    if ( reserved >= (unsigned __int64)(unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v30] )
      break;
    if ( (unsigned __int64)++v30 >= 3 )
    {
      v32 = "bytes";
      goto LABEL_9;
    }
  }
  v32 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v30];
LABEL_9:
  v33 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  __asm { vmovaps [rsp+508h+var_58], xmm7 }
  v34 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( reserved < (unsigned __int64)*v34 )
  {
    if ( ++v34 == (unsigned int *)&unk_144132F94 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@5f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rdx
      }
      if ( reserved < 0 )
        __asm { vaddss  xmm0, xmm0, xmm7 }
      goto LABEL_17;
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@5f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
  }
  if ( reserved < 0 )
    __asm { vaddss  xmm1, xmm1, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8
    vdivss  xmm0, xmm1, xmm0
  }
LABEL_17:
  __asm { vcvtss2sd xmm3, xmm0, xmm0 }
  v150 = v32;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: reserved=^5%.2f %s^7 (base=^30x%016zx^7, end=^30x%016zx^7)", regionName, *(double *)&_XMM3, v150, baseAddress, endAddress);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v151, v164, 1, 1, v178, &colorWhite, 3);
  allocated = stats->allocated;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm1, xmm1, r8
  }
  if ( (allocated & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->reserved & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vdivss  xmm0, xmm1, xmm0
    vmulss  xmm0, xmm0, xmm8
    vcvtss2sd xmm2, xmm0, xmm0
  }
  v55 = 0i64;
  while ( allocated < (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v55] )
  {
    if ( (unsigned __int64)++v55 >= 3 )
    {
      v56 = "bytes";
      goto LABEL_26;
    }
  }
  v56 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v55];
LABEL_26:
  v57 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( allocated < *v57 )
  {
    if ( ++v57 == (unsigned int *)&unk_144132F94 )
      goto LABEL_31;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vdivss  xmm1, xmm1, xmm0
  }
LABEL_31:
  __asm
  {
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm2
    vcvtss2sd xmm3, xmm1, xmm1
  }
  v152 = v56;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: allocated=^5%.2f %s^7 (^3%.2f^7%% of reserved) (tail=^30x%016zx^7, head=^30x%016zx^7)", regionName, *(double *)&_XMM3, v152, v165, stats->tailAddress, stats->headAddress);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v153, v166, 1, 1, v179, &colorWhite, 3);
  used = stats->used;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm2, xmm2, r8
  }
  if ( (used & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm2, xmm2, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->allocated & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vdivss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, xmm8
    vcvtss2sd xmm4, xmm1, xmm1
  }
  v71 = 0i64;
  while ( used < (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v71] )
  {
    if ( (unsigned __int64)++v71 >= 3 )
    {
      v72 = "bytes";
      goto LABEL_40;
    }
  }
  v72 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v71];
LABEL_40:
  v73 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( used < *v73 )
  {
    if ( ++v73 == (unsigned int *)&unk_144132F94 )
      goto LABEL_45;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vdivss  xmm2, xmm2, xmm0
  }
LABEL_45:
  __asm
  {
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm4
    vcvtss2sd xmm3, xmm2, xmm2
  }
  v154 = v72;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: used=^5%.2f %s^7 (^3%.2f^7%% of allocated)", regionName, *(double *)&_XMM3, v154, v167);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v155, v168, 1, 1, v180, &colorWhite, 3);
  committed = stats->committed;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm2, xmm2, r8
  }
  if ( (committed & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm2, xmm2, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->used & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vdivss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, xmm8
    vcvtss2sd xmm4, xmm1, xmm1
  }
  v87 = 0i64;
  while ( committed < (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v87] )
  {
    if ( (unsigned __int64)++v87 >= 3 )
    {
      v88 = "bytes";
      goto LABEL_54;
    }
  }
  v88 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v87];
LABEL_54:
  v89 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( committed < *v89 )
  {
    if ( ++v89 == (unsigned int *)&unk_144132F94 )
      goto LABEL_59;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vdivss  xmm2, xmm2, xmm0
  }
LABEL_59:
  __asm
  {
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm4
    vcvtss2sd xmm3, xmm2, xmm2
  }
  v156 = v88;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     committed=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, *(double *)&_XMM3, v156, v169);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v157, v170, 1, 1, v181, &colorWhite, 3);
  alignWaste = stats->alignWaste;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm2, xmm2, r8
  }
  if ( (alignWaste & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm2, xmm2, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->used & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vdivss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, xmm8
    vcvtss2sd xmm4, xmm1, xmm1
  }
  v103 = 0i64;
  while ( alignWaste < (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v103] )
  {
    if ( (unsigned __int64)++v103 >= 3 )
    {
      v104 = "bytes";
      goto LABEL_68;
    }
  }
  v104 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v103];
LABEL_68:
  v105 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( alignWaste < *v105 )
  {
    if ( ++v105 == (unsigned int *)&unk_144132F94 )
      goto LABEL_73;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vdivss  xmm2, xmm2, xmm0
  }
LABEL_73:
  __asm
  {
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm4
    vcvtss2sd xmm3, xmm2, xmm2
  }
  v158 = v104;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     alignment waste=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, *(double *)&_XMM3, v158, v171);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v159, v172, 1, 1, v182, &colorWhite, 3);
  fullyUnmappedNotYetReleased = stats->fullyUnmappedNotYetReleased;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm2, xmm2, r8
  }
  if ( (fullyUnmappedNotYetReleased & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm2, xmm2, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->used & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vdivss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, xmm8
    vcvtss2sd xmm4, xmm1, xmm1
  }
  v119 = 0i64;
  while ( fullyUnmappedNotYetReleased < (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v119] )
  {
    if ( (unsigned __int64)++v119 >= 3 )
    {
      v120 = "bytes";
      goto LABEL_82;
    }
  }
  v120 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v119];
LABEL_82:
  v121 = (unsigned int *)&`_lambda_2261345866dc6f913dffe23b6dba5289_::operator()'::`2'::sizeSteps;
  while ( fullyUnmappedNotYetReleased < *v121 )
  {
    if ( ++v121 == (unsigned int *)&unk_144132F94 )
      goto LABEL_87;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vdivss  xmm2, xmm2, xmm0
  }
LABEL_87:
  __asm
  {
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm4
    vcvtss2sd xmm3, xmm2, xmm2
  }
  v160 = v120;
  __asm { vmovq   r9, xmm3 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s:     fully unmapped (but not yet released)=^5%.2f %s^7 (^3%.2f^7%% of used)", regionName, *(double *)&_XMM3, v160, v173);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v161, v174, 1, 1, v183, &colorWhite, 3);
  fragmentation = stats->fragmentation;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm6, xmm9
    vcvtsi2ss xmm2, xmm2, rdx
  }
  if ( (fragmentation & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm2, xmm2, xmm7 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (stats->allocated & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm7 }
  __asm
  {
    vmovaps xmm7, [rsp+508h+var_58]
    vdivss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+508h+var_68]
    vcvtss2sd xmm4, xmm1, xmm1
  }
  do
  {
    if ( fragmentation >= (unsigned int)`_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::sizeSteps[v28] )
    {
      v31 = `_lambda_abf6705960c7f33a0353bd2135a016ac_::operator()'::`2'::suffixes[v28];
      break;
    }
    ++v28;
  }
  while ( v28 < 3 );
  while ( fragmentation < *v33 )
  {
    if ( ++v33 == (unsigned int *)&unk_144132F94 )
      goto LABEL_100;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vdivss  xmm2, xmm2, xmm0
  }
LABEL_100:
  __asm
  {
    vcvtss2sd xmm3, xmm2, xmm2
    vmovsd  qword ptr [rsp+508h+var_4E0], xmm4
    vmovq   r9, xmm3
  }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: fragmentation=^5%.2f %s^7 (^3%.2f^7%% of allocated)", regionName, *(double *)&_XMM3, v31, v175);
  __asm
  {
    vmovss  [rsp+508h+var_4C8], xmm11
    vmovss  [rsp+508h+var_4E0], xmm6
    vmovss  [rsp+508h+var_4E8], xmm10
  }
  UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, v162, v176, 1, 1, v184, &colorWhite, 3);
  __asm
  {
    vaddss  xmm0, xmm9, xmm6
    vaddss  xmm0, xmm0, xmm9
  }
  _R11 = &v188;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
  }
  return *(float *)&_XMM0;
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
  unsigned int v25; 
  CG_DrawHits_Hit *p_lockedHit; 

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
        _RAX = &s_streamDebugGlob.lockedHit;
        _RCX = &hits[v7];
        do
        {
          _RAX = (CG_DrawHits_Hit *)((char *)_RAX + 128);
          __asm { vmovups xmm0, xmmword ptr [rcx] }
          _RCX = (const CG_DrawHits_Hit *)((char *)_RCX + 128);
          __asm
          {
            vmovups xmmword ptr [rax-80h], xmm0
            vmovups xmm1, xmmword ptr [rcx-70h]
            vmovups xmmword ptr [rax-70h], xmm1
            vmovups xmm0, xmmword ptr [rcx-60h]
            vmovups xmmword ptr [rax-60h], xmm0
            vmovups xmm1, xmmword ptr [rcx-50h]
            vmovups xmmword ptr [rax-50h], xmm1
            vmovups xmm0, xmmword ptr [rcx-40h]
            vmovups xmmword ptr [rax-40h], xmm0
            vmovups xmm1, xmmword ptr [rcx-30h]
            vmovups xmmword ptr [rax-30h], xmm1
            vmovups xmm0, xmmword ptr [rcx-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmm1, xmmword ptr [rcx-10h]
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v10;
        }
        while ( v10 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
          vmovups xmm1, xmmword ptr [rcx+10h]
          vmovups xmmword ptr [rax+10h], xmm1
          vmovups xmm0, xmmword ptr [rcx+20h]
          vmovups xmmword ptr [rax+20h], xmm0
          vmovups xmm1, xmmword ptr [rcx+30h]
          vmovups xmmword ptr [rax+30h], xmm1
        }
        *(_QWORD *)&_RAX->modelInfo.superTerrain.layerMaterialCount = *(_QWORD *)&_RCX->modelInfo.superTerrain.layerMaterialCount;
      }
      v25 = 1;
      p_lockedHit = &s_streamDebugGlob.lockedHit;
    }
    else
    {
      if ( v7 == hitCount )
        return;
      s_streamDebugGlob.isLockedHitSet = 0;
      v25 = hitCount - v7;
      p_lockedHit = (CG_DrawHits_Hit *)&hits[v7];
    }
    Stream_Debug_DrawMetricsHitTableInternal(localClientIndex, p_lockedHit, v25);
  }
}

/*
==============
Stream_Debug_DrawMetricsHitTableInternal
==============
*/
void Stream_Debug_DrawMetricsHitTableInternal(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  __int64 sortListRead; 
  int mCount; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  GfxFont *v27; 
  const char *v30; 
  bool v32; 
  const char *v33; 
  unsigned int v39; 
  unsigned int v40; 
  bool v43; 
  Material *v47; 
  int v48; 
  unsigned int layerCount; 
  int v50; 
  int v51; 
  __int64 v62; 
  const StTerrain *terrain; 
  const dvar_t *v64; 
  StDiskTerrainSurface *v65; 
  unsigned int unsignedInt; 
  unsigned int v68; 
  const Material *v70; 
  char *v72; 
  const char *v75; 
  const char *v76; 
  unsigned int v77; 
  GfxImage *v78; 
  bool v79; 
  bool v80; 
  const XModel *v82; 
  unsigned int XModelIndex; 
  unsigned int v85; 
  unsigned int v88; 
  unsigned __int64 v90; 
  unsigned int v91; 
  unsigned __int64 v92; 
  const XModelSurfs *v93; 
  int XModelSurfsIndex; 
  __int64 v95; 
  bool v99; 
  const char *v100; 
  bool v101; 
  StreamFrontendGlob *v102; 
  const char *v103; 
  unsigned int *v104; 
  int v105; 
  unsigned int *v106; 
  bool v107; 
  const char *v108; 
  const char *v109; 
  const char *v110; 
  bool v111; 
  const char *v112; 
  const char *v113; 
  bool v114; 
  const char *v115; 
  const char *v116; 
  StreamFrontendGlob *v125; 
  StreamDistance v126; 
  const char *SpecialStreamDistanceStr; 
  const Material *v133; 
  unsigned __int64 v135; 
  GfxSurface *surfaces; 
  signed __int64 v137; 
  unsigned __int64 v138; 
  unsigned int v139; 
  unsigned int v140; 
  __int64 v149; 
  float *himipRadiusInvSqCompacted; 
  unsigned int Int_Internal_DebugName; 
  __int64 v152; 
  __int64 v153; 
  Material *v155; 
  char *fmt; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  char *fmta; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  char *fmtq; 
  float fmtr; 
  float fmts; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  int horzAlignc; 
  int horzAlignd; 
  int horzAligne; 
  int horzAlignf; 
  __int64 horzAlignb; 
  int horzAligng; 
  int vertAlignb; 
  int vertAlignc; 
  int vertAlignd; 
  __int64 vertAlign; 
  int vertAligne; 
  double vertAlignf; 
  __int64 vertAligna; 
  int vertAligng; 
  float scalea; 
  float scaleb; 
  float scalec; 
  float scaled; 
  __int64 scale; 
  float scalee; 
  float scalef; 
  float scaleg; 
  float scaleh; 
  float scalei; 
  float scalej; 
  float scalek; 
  float scalel; 
  float scalem; 
  float scalen; 
  float scaleo; 
  float scalep; 
  float color; 
  float colora; 
  __int64 v224; 
  __int64 v225; 
  __int64 v226; 
  bool SortListText_45056; 
  unsigned int v229; 
  GfxFont *font; 
  unsigned int v231; 
  unsigned int v232; 
  int index; 
  const GfxImage **p_combinedAlbedoMap; 
  Material *material; 
  unsigned int v236; 
  unsigned int v237; 
  const char *v238; 
  const char *v239; 
  ScreenPlacement *scrPlace; 
  char sortListText[16]; 
  char dest[1024]; 
  char v245; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _R14 = hits;
  if ( !hitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1205, ASSERT_TYPE_ASSERT, "(hitCount >= 1)", (const char *)&queryFormat, "hitCount >= 1") )
    __debugbreak();
  Sys_WaitStreamFrontendUpdateWorkerCmds();
  _RBX = DVARFLT_stream_drawMetricsFontSize;
  if ( !DVARFLT_stream_drawMetricsFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsFontSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovaps xmm2, xmm8; scale
  }
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientIndex);
  _R15 = scrPlace;
  __asm { vmovaps xmm1, xmm8; scale }
  font = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
  UI_TextHeight(font, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, eax
  }
  sortListRead = streamFrontendGlob->sortListRead;
  mCount = streamFrontendGlob->sortLists[sortListRead].genericSortList.mCount;
  v23 = streamFrontendGlob->sortLists[sortListRead].meshSortList.mCount;
  v24 = streamFrontendGlob->sortLists[sortListRead].imageSortList.mCount;
  v25 = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  LODWORD(horzAlign) = mCount;
  LODWORD(fmt) = v23;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Update frame index: %u   Sort list counts: ^5%d^7 images, ^5%d^7 meshes, ^5%d^7 generics", v25, v24, fmt, horzAlign);
  __asm { vmovss  xmm9, cs:__real@41000000 }
  v27 = font;
  __asm
  {
    vmovss  xmm6, cs:__real@42199999
    vmovss  [rsp+5A0h+scale], xmm8
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+5A0h+fmt], xmm6
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmtb, 1, 1, scalea, &colorWhite);
  v30 = "^2Zone StreamTree^7";
  __asm { vaddss  xmm6, xmm10, xmm6 }
  if ( !rgp.world->materialStreamTreeGrid.cellKeys )
    v30 = "^3Solo StreamTree^7";
  v32 = Stream_UseXModelStreamTree();
  v33 = "^2StreamTree Grid^7";
  if ( !v32 )
    v33 = "^3None^7";
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Accel Struct:    Materials / Images: %s    XModels: %s", v30, v33);
  __asm
  {
    vmovss  [rsp+5A0h+scale], xmm8
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+5A0h+fmt], xmm6
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmtc, 1, 1, scaleb, &colorWhite);
  __asm { vaddss  xmm6, xmm6, xmm10 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "Legend: A=alloc, Lo=loading, I=in-use, L=loaded, S=in sort list, l<idx>/r<idx>=sort list left[unload]/right[load] index, F=forced, T=touched");
  __asm
  {
    vmovss  [rsp+5A0h+scale], xmm8
    vmovss  dword ptr [rsp+5A0h+fmt], xmm6
    vmovaps xmm3, xmm9; x
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmtd, 1, 1, scalec, &colorGreen);
  __asm { vaddss  xmm6, xmm6, xmm10 }
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "        Meshes/generics only: F=freeable, D=in-danger");
  __asm
  {
    vmovss  [rsp+5A0h+scale], xmm8
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+5A0h+fmt], xmm6
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmte, 1, 1, scaled, &colorGreen);
  v39 = hitCount;
  v40 = 0;
  v229 = 0;
  __asm
  {
    vmovss  xmm13, dword ptr [r14]
    vaddss  xmm7, xmm6, xmm10
  }
  v43 = hitCount == 0;
  if ( hitCount )
  {
    __asm { vmovaps xmmword ptr [rsp+5A0h+var_98+8], xmm11 }
    _RBX = &_R14->modelInfo.superTerrain.combinedAlbedoMap;
    __asm
    {
      vmovss  xmm11, cs:__real@3a800000
      vmovaps [rsp+5A0h+var_A8+8], xmm12
      vmovss  xmm12, cs:__real@7f7fff80
    }
    p_combinedAlbedoMap = &_R14->modelInfo.superTerrain.combinedAlbedoMap;
    while ( 1 )
    {
      __asm { vcomiss xmm7, dword ptr [r15+24h] }
      if ( !v43 )
      {
LABEL_122:
        __asm
        {
          vmovaps xmm11, xmmword ptr [rsp+5A0h+var_98+8]
          vmovaps xmm12, [rsp+5A0h+var_A8+8]
        }
        goto LABEL_123;
      }
      v47 = (Material *)*(_RBX - 3);
      material = v47;
      if ( v47 )
        break;
LABEL_121:
      ++v40;
      _RBX += 57;
      v229 = v40;
      p_combinedAlbedoMap = _RBX;
      v43 = v40 <= v39;
      if ( v40 >= v39 )
        goto LABEL_122;
    }
    __asm { vcomiss xmm13, dword ptr [rbx-30h] }
    v48 = *((_DWORD *)_RBX - 4);
    layerCount = v47->layerCount;
    if ( v48 )
    {
      v50 = v48 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 == 1 )
          {
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "super terrain: %u", *((unsigned int *)_RBX - 2));
            __asm
            {
              vmovss  [rsp+5A0h+scale], xmm8
              vmovaps xmm3, xmm9; x
              vmovss  dword ptr [rsp+5A0h+fmt], xmm7
            }
            CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtf, 1, 1, scalee, &colorWhite);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx-4]
              vcvtss2sd xmm2, xmm2, xmm2
              vmovq   r8, xmm2
              vaddss  xmm6, xmm7, xmm10
            }
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "combined maps  ^7himipRadiusInvSq = %f", *(double *)&_XMM2);
            __asm
            {
              vmovss  [rsp+5A0h+scale], xmm8
              vmovaps xmm3, xmm9; x
              vmovss  dword ptr [rsp+5A0h+fmt], xmm6
            }
            CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtg, 1, 1, scalef, &colorWhite);
            __asm
            {
              vaddss  xmm6, xmm6, xmm10
              vmovss  [rsp+5A0h+vertAlign], xmm6
              vmovss  [rsp+5A0h+horzAlign], xmm9
              vmovaps xmm3, xmm8; fontScale
              vmovss  dword ptr [rsp+5A0h+fmt], xmm10
            }
            Stream_Debug_DrawMetricsHitTableInternalImage(*_RBX, _R15, v27, *(float *)&_XMM3, fmth, *(float *)&horzAlignc, *(float *)&vertAlignb);
            __asm
            {
              vaddss  xmm6, xmm6, xmm0
              vmovss  [rsp+5A0h+vertAlign], xmm6
              vmovss  [rsp+5A0h+horzAlign], xmm9
              vmovaps xmm3, xmm8; fontScale
              vmovss  dword ptr [rsp+5A0h+fmt], xmm10
            }
            Stream_Debug_DrawMetricsHitTableInternalImage(_RBX[1], _R15, v27, *(float *)&_XMM3, fmti, *(float *)&horzAlignd, *(float *)&vertAlignc);
            v62 = *((unsigned int *)_RBX - 2);
            terrain = s_stGlob.terrain;
            v64 = DVARINT_stream_drawMetricsLayerScroll;
            __asm { vaddss  xmm7, xmm6, xmm0 }
            v65 = &s_stGlob.terrain->surfaces[v62];
            if ( !DVARINT_stream_drawMetricsLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetricsLayerScroll") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v64);
            unsignedInt = v64->current.unsignedInt;
            _RBX = p_combinedAlbedoMap;
            v68 = *((_DWORD *)p_combinedAlbedoMap + 4);
            _R14 = v68 - 1;
            if ( (unsigned int)_R14 > unsignedInt )
              _R14 = unsignedInt;
            if ( (unsigned int)_R14 < v68 )
            {
              do
              {
                v70 = (const Material *)_RBX[_R14 + 3];
                __asm { vmovss  xmm6, dword ptr [rbx+r14*4+118h] }
                v72 = j_va("layer %u", (unsigned int)_R14);
                __asm
                {
                  vcvtss2sd xmm1, xmm6, xmm6
                  vmovq   rdx, xmm1
                }
                v75 = v72;
                v76 = j_va("^7himipRadiusInvSq = %f", _RDX);
                __asm
                {
                  vmovss  dword ptr [rsp+5A0h+color], xmm7
                  vmovss  [rsp+5A0h+scale], xmm9
                  vmovss  [rsp+5A0h+vertAlign], xmm10
                  vmovss  [rsp+5A0h+horzAlign], xmm8
                }
                Stream_Debug_DrawMetricsHitTableInternalMaterial(v70, v75, v76, _R15, font, *(float *)&horzAligne, *(float *)&vertAlignd, scaleg, color);
                __asm { vaddss  xmm7, xmm7, xmm0 }
                v77 = v65->layerMaskMapIdxs[_R14];
                if ( v77 >= terrain->flattenedImagesCount )
                {
                  LODWORD(vertAlign) = terrain->flattenedImagesCount;
                  LODWORD(horzAligna) = v65->layerMaskMapIdxs[_R14];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1450, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", horzAligna, vertAlign) )
                    __debugbreak();
                }
                v78 = terrain->flattenedImages[(unsigned __int16)v77];
                if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1452, ASSERT_TYPE_ASSERT, "(layerMaskImage)", (const char *)&queryFormat, "layerMaskImage") )
                  __debugbreak();
                v79 = v78 < rgp.whiteImage;
                v80 = v78 == rgp.whiteImage;
                v27 = font;
                if ( v78 != rgp.whiteImage )
                {
                  __asm
                  {
                    vmovss  [rsp+5A0h+vertAlign], xmm7
                    vmovss  [rsp+5A0h+horzAlign], xmm9
                    vmovaps xmm3, xmm8; fontScale
                    vmovss  dword ptr [rsp+5A0h+fmt], xmm10
                  }
                  Stream_Debug_DrawMetricsHitTableInternalImage(v78, _R15, font, *(float *)&_XMM3, fmtj, *(float *)&horzAlignf, *(float *)&vertAligne);
                  __asm { vaddss  xmm7, xmm7, xmm0 }
                }
                __asm { vcomiss xmm7, dword ptr [r15+24h] }
                if ( !v79 && !v80 )
                  break;
                _RBX = p_combinedAlbedoMap;
                _R14 = (unsigned int)(_R14 + 1);
              }
              while ( (unsigned int)_R14 < *((_DWORD *)p_combinedAlbedoMap + 4) );
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1468, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          {
            __debugbreak();
          }
          goto LABEL_119;
        }
      }
      v82 = (const XModel *)*(_RBX - 1);
      XModelIndex = DB_GetXModelIndex(v82);
      __asm { vmovss  xmm0, dword ptr [rbx+8] }
      LODWORD(scale) = *(_DWORD *)_RBX;
      v85 = XModelIndex;
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+5A0h+vertAlign], xmm0
      }
      LODWORD(horzAligna) = *((_DWORD *)_RBX + 4);
      LODWORD(fmta) = *((_DWORD *)_RBX + 3);
      v231 = XModelIndex;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "model: %s ^5[assetIndex=%u, instIdx=%u, colIdx=%u]^7 scale=%.2f, rendered lod %u", v82->name, XModelIndex, fmta, horzAligna, vertAlignf, scale);
      __asm
      {
        vmovss  [rsp+5A0h+scale], xmm8
        vmovaps xmm3, xmm9; x
        vmovss  dword ptr [rsp+5A0h+fmt], xmm7
      }
      CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtk, 1, 1, scaleh, &colorWhite);
      v88 = 0;
      __asm { vaddss  xmm6, xmm7, xmm10 }
      if ( v82->numLods )
      {
        while ( 1 )
        {
          v90 = (unsigned __int64)v88 << 6;
          if ( *(XSurface **)((char *)&v82->lodInfo[0].surfs + v90) )
          {
            if ( XModelSurfs_IsStreamed(*(const XModelSurfs **)((char *)&v82->lodInfo[0].modelSurfsStaging + v90)) )
              break;
          }
          if ( ++v88 >= v82->numLods )
            goto LABEL_83;
        }
        v91 = 0;
        if ( v82->numLods )
        {
          do
          {
            v92 = (unsigned __int64)v91 << 6;
            if ( *(XSurface **)((char *)&v82->lodInfo[0].surfs + v92) )
            {
              v93 = *(XModelSurfs **)((char *)&v82->lodInfo[0].modelSurfsStaging + v92);
              if ( !v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
                __debugbreak();
              if ( !v93->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
                __debugbreak();
              if ( (v93->shared->flags & 1) != 0 )
              {
                XModelSurfsIndex = DB_GetXModelSurfsIndex(v93);
                v95 = XModelSurfsIndex;
                memset(sortListText, 0, sizeof(sortListText));
                index = XModelSurfsIndex;
                __asm { vxorps  xmm0, xmm0, xmm0 }
                SortListText_45056 = Stream_Debug_GetSortListText_45056_(&streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead].meshSortList, XModelSurfsIndex, (char (*)[16])sortListText);
                __asm
                {
                  vcvtsi2ss xmm0, xmm0, rdx
                  vmulss  xmm1, xmm0, xmm11
                  vcvtss2sd xmm7, xmm1, xmm1
                }
                v99 = RequestBits::CheckDanger(&streamFrontendGlob->meshRequest, v95);
                v100 = "^2D^7";
                if ( v99 )
                  v100 = "^1D^7";
                v238 = v100;
                v101 = RequestBits::CheckFreeable(&streamFrontendGlob->meshRequest, v95);
                v102 = streamFrontendGlob;
                v103 = "^1F^7";
                if ( v101 )
                  v103 = "^2F^7";
                v104 = streamFrontendGlob->meshRequest.bits[1];
                v239 = v103;
                v236 = streamFrontendGlob->meshRequest.frame[(unsigned int)v95];
                v237 = streamFrontendGlob->meshRequest.countStable[(unsigned int)v95];
                if ( !v104 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                    __debugbreak();
                  v102 = streamFrontendGlob;
                }
                v105 = 1 << (v95 & 0x1F);
                v80 = (v105 & v104[v95 >> 5]) == 0;
                v106 = v102->meshRequest.bits[0];
                v107 = !v80;
                if ( !v106 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                    __debugbreak();
                  v102 = streamFrontendGlob;
                }
                v80 = !v107 && (v105 & v106[v95 >> 5]) == 0;
                v108 = (char *)&queryFormat.fmt + 3;
                if ( !v80 )
                  v108 = "^2T^7";
                v109 = (char *)&queryFormat.fmt + 3;
                if ( StreamableBits::CheckForced(&v102->meshBits, v95) )
                  v109 = "^2F^7";
                v110 = "^1L^7";
                if ( StreamableBits::CheckLoaded(&streamFrontendGlob->meshBits, v95) )
                  v110 = "^2L^7";
                v111 = StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v95);
                v112 = "^1I^7";
                if ( v111 )
                  v112 = "^2I^7";
                v113 = (char *)&queryFormat.fmt + 3;
                if ( StreamableBits::CheckLoading(&streamFrontendGlob->meshBits, index) )
                  v113 = "^5Lo^7";
                v114 = StreamableBits::CheckAlloc(&streamFrontendGlob->meshBits, index);
                __asm { vmovsd  [rsp+5A0h+var_528], xmm7 }
                v115 = "^1A^7";
                if ( v114 )
                  v115 = "^2A^7";
                v116 = "^1S^7";
                if ( SortListText_45056 )
                  v116 = "^2S^7";
                LODWORD(v225) = v236;
                LODWORD(v224) = v237;
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: %s%s%s%s%s%s%s%s requests = %u frame = %u %s%s %.2f KB", v91, v115, v113, v112, v110, v109, v116, sortListText, v108, v224, v225, v239, v238, v226);
                v27 = font;
                _R15 = scrPlace;
              }
              else
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: ^3<not streamed>^7", v91);
              }
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "  lod %u: ^3<not usable/transient unloaded>^7", v91);
            }
            __asm
            {
              vmovss  [rsp+5A0h+scale], xmm8
              vmovaps xmm3, xmm9; x
              vmovss  dword ptr [rsp+5A0h+fmt], xmm6
            }
            CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtl, 1, 1, scalei, &colorWhite);
            ++v91;
            __asm { vaddss  xmm6, xmm10, xmm6 }
          }
          while ( v91 < v82->numLods );
          v85 = v231;
        }
      }
LABEL_83:
      _RCX = *((unsigned int *)p_combinedAlbedoMap + 1);
      _RAX = v82->himipRadiusInvSq;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+rcx*4]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  himipRadiusInvSq = %f", *(double *)&_XMM2);
      __asm
      {
        vmovss  [rsp+5A0h+scale], xmm8
        vmovaps xmm3, xmm9; x
        vmovss  dword ptr [rsp+5A0h+fmt], xmm6
      }
      CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtm, 1, 1, scalej, &colorCyan);
      __asm { vaddss  xmm7, xmm6, xmm10 }
      if ( XModelHasMaterialsWithStreamedImages(v82) )
      {
        v125 = streamFrontendGlob;
        if ( v85 >= 0x6000 )
        {
          LODWORD(vertAligna) = 24576;
          LODWORD(horzAlignb) = v85;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        v126.mValue = v125->modelDistance.mDistances[v85].mValue;
        if ( v126.mValue == -1 )
        {
          __asm { vmovaps xmm6, xmm12 }
        }
        else
        {
          v232 = v126.mValue << 7;
          __asm { vmovss  xmm6, [rbp+4A0h+var_508] }
        }
        SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v126);
        __asm
        {
          vsqrtss xmm0, xmm6, xmm6
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "  dist =%s %.2f", SpecialStreamDistanceStr, *(double *)&_XMM3);
      }
      else
      {
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <no streamed images/fully resident>");
      }
      __asm
      {
        vmovss  [rsp+5A0h+scale], xmm8
        vmovaps xmm3, xmm9; x
        vmovss  dword ptr [rsp+5A0h+fmt], xmm7
      }
      CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmtn, 1, 1, scalek, &colorYellow);
      v133 = material;
      __asm { vaddss  xmm6, xmm7, xmm10 }
LABEL_118:
      __asm
      {
        vmovss  dword ptr [rsp+5A0h+color], xmm6
        vmovss  [rsp+5A0h+scale], xmm9
        vmovss  [rsp+5A0h+vertAlign], xmm10
        vmovss  [rsp+5A0h+horzAlign], xmm8
      }
      Stream_Debug_DrawMetricsHitTableInternalMaterial(v133, "material", (const char *)&queryFormat.fmt + 3, _R15, v27, *(float *)&horzAligng, *(float *)&vertAligng, scalep, colora);
      __asm { vaddss  xmm7, xmm6, xmm0 }
LABEL_119:
      v40 = v229;
      v39 = hitCount;
      goto LABEL_120;
    }
    if ( !rgp.world->surfaces.himipRadiusInvSqIndirection )
    {
LABEL_120:
      _RBX = p_combinedAlbedoMap;
      goto LABEL_121;
    }
    v135 = (unsigned __int64)*(_RBX - 1);
    surfaces = rgp.world->surfaces.surfaces;
    if ( (v135 < (unsigned __int64)surfaces || v135 >= (unsigned __int64)&surfaces[rgp.world->surfaces.count]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1381, ASSERT_TYPE_ASSERT, "(modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count)", (const char *)&queryFormat, "modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count") )
      __debugbreak();
    v137 = (char *)*(_RBX - 1) - (char *)rgp.world->surfaces.surfaces;
    v138 = v137 / 40;
    if ( (v137 / 40 < 0 || v138 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v138, "signed", v137 / 40) )
      __debugbreak();
    v139 = rgp.world->surfaces.himipRadiusInvSqIndirection[(unsigned int)v138];
    v140 = v139 >> 28;
    _RSI = v139 & 0xFFFFFFF;
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "model: <world> ^5[surfaceIndex: %u]", (unsigned int)v138);
    __asm
    {
      vmovss  [rsp+5A0h+scale], xmm8
      vmovaps xmm3, xmm9; x
      vmovss  dword ptr [rsp+5A0h+fmt], xmm7
    }
    CG_DrawHits_DrawText(_R15, dest, font, *(float *)&_XMM3, fmto, 1, 1, scalel, &colorWhite);
    __asm { vaddss  xmm6, xmm7, xmm10 }
    if ( layerCount )
    {
      v149 = (unsigned int)_RSI;
      if ( v140 > layerCount )
        v140 = layerCount;
      himipRadiusInvSqCompacted = rgp.world->surfaces.himipRadiusInvSqCompacted;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_stream_drawMetricsLayerScroll, "stream_drawMetricsLayerScroll");
      v152 = v140 - 1;
      if ( (unsigned int)v152 > Int_Internal_DebugName )
        v152 = Int_Internal_DebugName;
      if ( (unsigned int)v152 < v140 )
      {
        v153 = v152;
        _R14 = &himipRadiusInvSqCompacted[v149 + (unsigned int)v152];
        v155 = material;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+5A0h+fmt], xmm0
          }
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "  layer %2u ^3%s^7: himipRadiusInvSq = %f", (unsigned int)v152, material->subMaterials[v153], *(double *)&fmtq);
          __asm
          {
            vmovss  [rsp+5A0h+scale], xmm8
            vmovaps xmm3, xmm9; x
            vmovss  dword ptr [rsp+5A0h+fmt], xmm6
          }
          CG_DrawHits_DrawText(_R15, dest, font, *(float *)&_XMM3, fmtr, 1, 1, scalen, &colorCyan);
          LODWORD(v152) = v152 + 1;
          ++_R14;
          ++v153;
          __asm { vaddss  xmm6, xmm6, xmm10 }
        }
        while ( (unsigned int)v152 < v140 );
        v27 = font;
        goto LABEL_117;
      }
      v27 = font;
    }
    else
    {
      if ( !v140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1394, ASSERT_TYPE_ASSERT, "(layerCountCompacted > 0)", (const char *)&queryFormat, "layerCountCompacted > 0") )
        __debugbreak();
      _RCX = rgp.world->surfaces.himipRadiusInvSqCompacted;
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+rsi*4]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  himipRadiusInvSq = %f", *(double *)&_XMM2);
      v27 = font;
      __asm
      {
        vmovss  [rsp+5A0h+scale], xmm8
        vmovaps xmm3, xmm9; x
        vmovss  dword ptr [rsp+5A0h+fmt], xmm6
      }
      CG_DrawHits_DrawText(_R15, dest, font, *(float *)&_XMM3, fmtp, 1, 1, scalem, &colorCyan);
      __asm { vaddss  xmm6, xmm6, xmm10 }
    }
    v155 = material;
LABEL_117:
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <world surface; distance only set on material>");
    __asm
    {
      vmovss  [rsp+5A0h+scale], xmm8
      vmovaps xmm3, xmm9; x
      vmovss  dword ptr [rsp+5A0h+fmt], xmm6
    }
    CG_DrawHits_DrawText(_R15, dest, v27, *(float *)&_XMM3, fmts, 1, 1, scaleo, &colorYellow);
    v133 = v155;
    __asm { vaddss  xmm6, xmm6, xmm10 }
    goto LABEL_118;
  }
LABEL_123:
  _R11 = &v245;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
Stream_Debug_DrawMetricsHitTableInternalImage
==============
*/

float __fastcall Stream_Debug_DrawMetricsHitTableInternalImage(const GfxImage *image, const ScreenPlacement *scrPlace, GfxFont *const font, double fontScale, float lineHeight, float x, float y)
{
  GfxFont *v19; 
  __int64 GfxImageIndex; 
  const char *v23; 
  unsigned __int16 numElements; 
  __int64 height; 
  __int64 width; 
  GfxImageFallback *fallback; 
  const dvar_t *v37; 
  char freqDomainMetricBias; 
  int streamedPartCount; 
  const char *Name; 
  const char *v43; 
  StreamFrontendGlob *v46; 
  StreamDistance v48; 
  unsigned int v49; 
  const char *SpecialStreamDistanceStr; 
  unsigned int v57; 
  int v58; 
  StreamFrontendGlob *v59; 
  int v60; 
  char *v61; 
  StreamDistance v62; 
  __int64 v63; 
  const char *v64; 
  const char *v71; 
  StreamFrontendGlob *v72; 
  __int64 v73; 
  __int64 v74; 
  int v75; 
  StreamFrontendGlob *v76; 
  int v77; 
  int v78; 
  StreamFrontendGlob *v79; 
  const char *v80; 
  unsigned int *mStaticForced; 
  bool v82; 
  const char *v83; 
  unsigned int *mLoaded; 
  const char *v85; 
  StreamFrontendGlob *v86; 
  unsigned int *mUse; 
  StreamFrontendGlob *v88; 
  const char *v89; 
  unsigned int *mLoading; 
  const char *v91; 
  StreamFrontendGlob *v92; 
  unsigned int *mAlloc; 
  const char *v94; 
  const char *v95; 
  float fmtb; 
  char *fmt; 
  char *fmtc; 
  float fmtd; 
  char *fmta; 
  float fmte; 
  float fmtf; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 horzAlignb; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  float scale; 
  float scalea; 
  float scaleb; 
  float scalec; 
  double v126; 
  double v127; 
  bool SortListText_327680; 
  unsigned int v129; 
  int v130; 
  unsigned int v131; 
  unsigned int v132; 
  __int64 v133; 
  __int64 v134; 
  const char *v135; 
  const char *v136; 
  const char *v137; 
  char sortListText[16]; 
  char v141[32]; 
  char v142[64]; 
  char v143[64]; 
  char dest[1024]; 
  char v148; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  v19 = font;
  __asm { vmovaps xmm9, xmm3 }
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1023, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1024, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v23 = Image_TextureSemanticToString(image->semantic);
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "    image: %s ^5[assetIndex: %u](%s)^7", image->name, (unsigned int)GfxImageIndex, v23);
  __asm
  {
    vmovss  xmm10, [rbp+560h+x]
    vmovss  xmm8, [rbp+560h+y]
    vmovss  [rsp+660h+scale], xmm9
    vmovaps xmm3, xmm10; x
    vmovss  dword ptr [rsp+660h+fmt], xmm8
  }
  CG_DrawHits_DrawText(scrPlace, dest, v19, *(float *)&_XMM3, fmtb, 1, 1, scale, &colorWhite);
  numElements = image->numElements;
  height = image->height;
  width = image->width;
  __asm
  {
    vmovss  xmm11, [rbp+560h+lineHeight]
    vaddss  xmm6, xmm11, xmm8
  }
  if ( numElements <= 1u )
  {
    Com_sprintf<64>((char (*)[64])v143, "%ux%u", width, height);
  }
  else
  {
    LODWORD(fmt) = numElements;
    Com_sprintf<64>((char (*)[64])v143, "%ux%u|%u", width, height, fmt);
  }
  fallback = image->fallback;
  __asm { vmovss  xmm13, cs:__real@3a800000 }
  if ( fallback )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm13
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+660h+fmt], xmm2
    }
    Com_sprintf<64>((char (*)[64])v142, "fallback: %ux%u %.2f KB", fallback->width, fallback->height, *(double *)&fmtc);
  }
  else
  {
    Com_sprintf<64>((char (*)[64])v142, "fallback: ^5<none>^7");
  }
  v37 = DVARBOOL_stream_freqDomainMetricBiasEnable;
  memset(v141, 0, sizeof(v141));
  if ( !DVARBOOL_stream_freqDomainMetricBiasEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricBiasEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    freqDomainMetricBias = image->freqDomainMetricBias;
    if ( freqDomainMetricBias )
    {
      *(double *)&_XMM0 = Stream_DecodeFreqDomainMetricBias(freqDomainMetricBias);
      __asm
      {
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<32>((char (*)[32])v141, ", freqBias: ^5%.4f [%d]^7", *(double *)&_XMM2, (unsigned int)image->freqDomainMetricBias);
    }
  }
  streamedPartCount = image->streamedPartCount;
  Name = PixelFormat_GetName(image->format);
  v43 = "^3<not streamed>^7 ";
  if ( (image->flags & 0x40) != 0 )
    v43 = (char *)&queryFormat.fmt + 3;
  LODWORD(horzAlign) = streamedPartCount;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "           %s%s %s %u streamed parts, %s%s", v43, v143, Name, horzAlign, v142, v141);
  __asm
  {
    vmovss  [rsp+660h+scale], xmm9
    vmovaps xmm3, xmm10; x
    vmovss  dword ptr [rsp+660h+fmt], xmm6
  }
  CG_DrawHits_DrawText(scrPlace, dest, v19, *(float *)&_XMM3, fmtd, 1, 1, scalea, &colorWhite);
  __asm { vaddss  xmm6, xmm6, xmm11 }
  if ( (image->flags & 0x40) != 0 )
  {
    v46 = streamFrontendGlob;
    __asm
    {
      vmovaps xmmword ptr [rsp+660h+var_68+8], xmm7
      vmovaps xmmword ptr [rsp+660h+var_B8+8], xmm12
      vmovaps xmmword ptr [rsp+660h+var_D8+8], xmm14
    }
    if ( (unsigned int)GfxImageIndex >= 0x14000 )
    {
      LODWORD(vertAlign) = 81920;
      LODWORD(horzAligna) = GfxImageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAligna, vertAlign) )
        __debugbreak();
    }
    __asm { vmovss  xmm12, cs:__real@7f7fff80 }
    v48.mValue = v46->imageDistance.mDistances[(int)GfxImageIndex].mValue;
    v49 = streamFrontendGlob->imageUsedFrame[GfxImageIndex];
    if ( v48.mValue == -1 )
    {
      __asm { vmovaps xmm7, xmm12 }
    }
    else
    {
      v129 = v48.mValue << 7;
      __asm { vmovss  xmm7, [rbp+560h+var_5DC] }
    }
    SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v48);
    __asm
    {
      vsqrtss xmm0, xmm7, xmm7
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   r9, xmm3
    }
    LODWORD(fmta) = v49;
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "      dist =%s %.4f frame = %u", SpecialStreamDistanceStr, *(double *)&_XMM3, fmta);
    __asm
    {
      vmovss  [rsp+660h+scale], xmm9
      vmovaps xmm3, xmm10; x
      vmovss  dword ptr [rsp+660h+fmt], xmm6
    }
    CG_DrawHits_DrawText(scrPlace, dest, v19, *(float *)&_XMM3, fmte, 1, 1, scaleb, &colorYellow);
    __asm { vaddss  xmm14, xmm6, xmm11 }
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "      ");
    v57 = 0;
    v131 = 0;
    if ( image->streamedPartCount )
    {
      v58 = 4 * GfxImageIndex;
      v130 = 4 * GfxImageIndex;
      do
      {
        v59 = streamFrontendGlob;
        v60 = v58 + v57;
        v61 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
        if ( v58 + v57 >= 0x50000 )
        {
          LODWORD(vertAligna) = 327680;
          LODWORD(horzAlignb) = v58 + v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
          v59 = streamFrontendGlob;
        }
        v62.mValue = *(_DWORD *)&v61[4 * v60 + 2775264];
        memset(sortListText, 0, sizeof(sortListText));
        SortListText_327680 = Stream_Debug_GetSortListText_327680_(&v59->sortLists[v59->sortListRead].imageSortList, v60, (char (*)[16])sortListText);
        v63 = -1i64;
        do
          ++v63;
        while ( dest[v63] );
        v134 = v63;
        v64 = ", ";
        if ( v57 == image->streamedPartCount - 1 )
          v64 = (char *)&queryFormat.fmt + 3;
        v135 = v64;
        if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( v57 >= Image_GetStreamedPartCount(image) )
        {
          LODWORD(vertAligna) = Image_GetStreamedPartCount(image);
          LODWORD(horzAlignb) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm13
          vcvtss2sd xmm7, xmm1, xmm1
        }
        if ( v62.mValue == -1 )
        {
          __asm { vmovaps xmm0, xmm12 }
        }
        else
        {
          v132 = v62.mValue << 7;
          __asm { vmovss  xmm0, dword ptr [rbp+560h+var_5D0] }
        }
        __asm
        {
          vsqrtss xmm0, xmm0, xmm0
          vcvtss2sd xmm6, xmm0, xmm0
        }
        v71 = Stream_Debug_GetSpecialStreamDistanceStr(v62);
        v72 = streamFrontendGlob;
        v136 = v71;
        if ( (unsigned int)(v60 >> 5) >= 0x2800 )
        {
          LODWORD(vertAligna) = 10240;
          LODWORD(horzAlignb) = v60 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        v73 = (__int64)v60 >> 5;
        v133 = v73;
        v74 = (__int64)&v72->imageTouchBits[1][v73];
        if ( (v74 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v74) )
          __debugbreak();
        v75 = *(_DWORD *)v74;
        v76 = streamFrontendGlob;
        v77 = 1 << (v60 & 0x1F);
        v78 = v75 & v77;
        if ( (unsigned int)(v60 >> 5) >= 0x2800 )
        {
          LODWORD(vertAligna) = 10240;
          LODWORD(horzAlignb) = v60 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        if ( (((_BYTE)v76 + 4 * (_BYTE)v73 - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (char *)v76->imageTouchBits + 4 * v73) )
          __debugbreak();
        v79 = streamFrontendGlob;
        v80 = (char *)&queryFormat.fmt + 3;
        if ( v78 != 0 || (v77 & v76->imageTouchBits[0][v73]) != 0 )
          v80 = "^2T^7";
        v137 = v80;
        if ( v60 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(horzAlignb) = v60;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        mStaticForced = v79->imageBits.mStaticForced;
        if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v82 = (v77 & mStaticForced[v73]) == 0;
        v83 = (char *)&queryFormat.fmt + 3;
        if ( !v82 )
          v83 = "^2F^7";
        mLoaded = streamFrontendGlob->imageBits.mLoaded;
        if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v85 = "^1L^7";
        v82 = (v77 & mLoaded[v133]) == 0;
        v86 = streamFrontendGlob;
        if ( !v82 )
          v85 = "^2L^7";
        if ( v131 + v130 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(horzAlignb) = v131 + v130;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        mUse = v86->imageBits.mUse;
        if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v82 = (v77 & mUse[v133]) == 0;
        v88 = streamFrontendGlob;
        v89 = "^1I^7";
        if ( !v82 )
          v89 = "^2I^7";
        if ( v131 + v130 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(horzAlignb) = v131 + v130;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        mLoading = v88->imageBits.mLoading;
        if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v91 = (char *)&queryFormat.fmt + 3;
        v82 = (v77 & mLoading[v133]) == 0;
        v92 = streamFrontendGlob;
        if ( !v82 )
          v91 = "^5Lo^7";
        if ( v131 + v130 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(vertAligna) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(horzAlignb) = v131 + v130;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", horzAlignb, vertAligna) )
            __debugbreak();
        }
        mAlloc = v92->imageBits.mAlloc;
        if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v94 = "^1A^7";
        __asm
        {
          vmovsd  [rsp+660h+var_5F0], xmm7
          vmovsd  [rsp+660h+var_5F8], xmm6
        }
        if ( (v77 & mAlloc[v133]) != 0 )
          v94 = "^2A^7";
        v95 = "^1S^7";
        if ( SortListText_327680 )
          v95 = "^2S^7";
        if ( Com_sprintf_truncate(&dest[v134], 1024 - v134, "part %u %s%s%s%s%s%s%s%s dist =%s %.4f %.2f KB%s", v131, v94, v91, v89, v85, v83, v95, sortListText, v137, v136, v126, v127, v135) < 0 )
          break;
        v57 = v131 + 1;
        v131 = v57;
        v58 = v130;
      }
      while ( v57 < image->streamedPartCount );
      v19 = font;
    }
    __asm
    {
      vmovss  [rsp+660h+scale], xmm9
      vmovaps xmm3, xmm10; x
      vmovss  dword ptr [rsp+660h+fmt], xmm14
    }
    CG_DrawHits_DrawText(scrPlace, dest, v19, *(float *)&_XMM3, fmtf, 1, 1, scalec, &colorYellow);
    __asm
    {
      vmovaps xmm12, xmmword ptr [rsp+660h+var_B8+8]
      vmovaps xmm7, xmmword ptr [rsp+660h+var_68+8]
      vaddss  xmm0, xmm14, xmm11
      vmovaps xmm14, xmmword ptr [rsp+660h+var_D8+8]
      vsubss  xmm0, xmm0, xmm8
    }
  }
  else
  {
    __asm { vsubss  xmm0, xmm6, xmm8 }
  }
  _R11 = &v148;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-90h]
  }
  return *(float *)&_XMM0;
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
  __int64 v22; 
  StreamFrontendGlob *v29; 
  StreamDistance v30; 
  const char *SpecialStreamDistanceStr; 
  unsigned int v38; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 horzAlign; 
  int horzAligna; 
  __int64 vertAlign; 
  int vertAligna; 
  float v57; 
  float v58; 
  unsigned int v59; 
  char dest[1024]; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
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
  v22 = MaterialIndex;
  LODWORD(fmt) = MaterialIndex;
  Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s: %s ^5[assetIndex: %u] %s", materialPre, material->name, fmt, materialPost);
  __asm
  {
    vmovss  xmm8, [rsp+508h+fontScale]
    vmovss  xmm9, [rsp+508h+x]
    vmovss  xmm7, [rsp+508h+y]
    vmovss  [rsp+508h+var_4D0], xmm8
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+508h+fmt], xmm7
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmta, 1, 1, v57, &colorWhite);
  __asm
  {
    vmovss  xmm10, [rsp+508h+lineHeight]
    vaddss  xmm11, xmm10, xmm7
  }
  if ( (material->runtimeFlags & 0x10) != 0 )
  {
    if ( layerCount )
    {
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <layered material with streamed images; distance only set on images>");
    }
    else
    {
      v29 = streamFrontendGlob;
      if ( (unsigned int)v22 >= 0xB400 )
      {
        LODWORD(vertAlign) = 46080;
        LODWORD(horzAlign) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
          __debugbreak();
      }
      v30.mValue = v29->materialDistance.mDistances[v22].mValue;
      if ( v30.mValue == -1 )
      {
        __asm { vmovss  xmm6, cs:__real@7f7fff80 }
      }
      else
      {
        v59 = v30.mValue << 7;
        __asm { vmovss  xmm6, [rsp+508h+var_4B8] }
      }
      SpecialStreamDistanceStr = Stream_Debug_GetSpecialStreamDistanceStr(v30);
      __asm
      {
        vsqrtss xmm0, xmm6, xmm6
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "  dist =%s %.4f", SpecialStreamDistanceStr, *(double *)&_XMM3);
    }
  }
  else
  {
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "  <no streamed images/fully resident>");
  }
  __asm
  {
    vmovss  [rsp+508h+var_4D0], xmm8
    vmovaps xmm3, xmm9; x
    vmovss  dword ptr [rsp+508h+fmt], xmm11
  }
  CG_DrawHits_DrawText(scrPlace, dest, font, *(float *)&_XMM3, fmtb, 1, 1, v58, &colorYellow);
  __asm { vaddss  xmm6, xmm11, xmm10 }
  if ( (material->runtimeFlags & 0x10) != 0 )
  {
    v38 = 0;
    while ( v38 < material->textureCount )
    {
      __asm
      {
        vmovss  dword ptr [rsp+508h+vertAlign], xmm6
        vmovss  [rsp+508h+horzAlign], xmm9
        vmovaps xmm3, xmm8; fontScale
        vmovss  dword ptr [rsp+508h+fmt], xmm10
      }
      Stream_Debug_DrawMetricsHitTableInternalImage(material->textureTable[v38++].image, scrPlace, font, *(double *)&_XMM3, fmtc, *(float *)&horzAligna, *(float *)&vertAligna);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
  }
  __asm { vsubss  xmm0, xmm6, xmm7 }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v3; 
  int integer; 
  StreamFrontendGlob *v10; 
  __int64 sortListRead; 
  char v18; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  float fmtc; 
  float y; 
  float ya; 
  float yb; 
  float filterFuncCommon; 
  float filterFuncCommona; 
  float filterFuncCommonb; 
  Stream_Debug_DrawSortLists::__l13::<lambda_1da4f004ffa682f5aab5718f9b313130> v68; 
  Stream_Debug_DrawSortLists::__l13::<lambda_336efe4c9e8d121aa0cff81226e12fe2> v69; 
  Stream_Debug_DrawSortLists::__l19::<lambda_29f26645933ecb458ce0f93757ef6ca9> v70[2]; 
  float v71; 
  int v72; 
  int v73; 
  Stream_Debug_DrawSortLists::__l2::<lambda_0040f16ab7d9a2fdd62b28d3ddbda264> drawLine; 
  Stream_Debug_DrawSortLists::__l13::<lambda_b267cbc876d3315e4cf100fef167db9d> drawSortListEntryFunc; 
  int v76; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  char dest[32]; 
  char text[1024]; 

  v3 = DVARINT_stream_drawSortLists;
  if ( !DVARINT_stream_drawSortLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawSortLists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer )
  {
    _RDI = DVARFLT_stream_drawSortListsFontSize;
    __asm
    {
      vmovaps [rsp+530h+var_20], xmm6
      vmovaps [rsp+530h+var_30], xmm7
    }
    if ( !DVARFLT_stream_drawSortListsFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawSortListsFontSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  [rsp+530h+var_4C4], xmm0
      vmovss  xmm2, [rsp+530h+var_4C4]; scale
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientIndex);
    __asm { vmovss  xmm1, [rsp+530h+var_4C4]; scale }
    FontHandle = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
    UI_TextHeight(FontHandle, *(float *)&_XMM1);
    v10 = streamFrontendGlob;
    __asm
    {
      vmovss  xmm1, cs:__real@42800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  [rsp+530h+var_4C8], xmm0
      vmovss  xmm0, cs:__real@41c00000
    }
    drawLine.scrPlace = &ActivePlacement;
    drawLine.text = (char (*)[1024])text;
    drawLine.font = &FontHandle;
    drawLine.x = (const float *)&v76;
    drawLine.y = &v71;
    drawLine.fontScale = (const float *)&v73;
    drawLine.lineHeight = (const float *)&v72;
    __asm
    {
      vmovss  [rbp+430h+var_478], xmm1
      vmovss  [rsp+530h+var_4CC], xmm0
    }
    sortListRead = streamFrontendGlob->sortListRead;
    *(double *)&_XMM0 = Stream_LoadQuality_Image();
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = Stream_LoadQuality_Mesh();
    __asm
    {
      vcomiss xmm6, cs:__real@5f7fffc0
      vmovaps xmm7, xmm0
    }
    if ( v18 )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      Com_sprintf<32>((char (*)[32])dest, "%.4f", *(double *)&_XMM2);
    }
    else
    {
      Com_sprintf<32>((char (*)[32])dest, "max");
    }
    __asm
    {
      vcvtss2sd xmm3, xmm7, xmm7
      vmovq   r9, xmm3
    }
    Com_sprintf_truncate<1024>((char (*)[1024])text, "Streaming quality: Image ^5%s^7, Mesh: ^5%.4f^7", dest, *(double *)&_XMM3);
    _RAX = drawLine.fontScale;
    __asm { vmovss  xmm0, dword ptr [rax] }
    _RAX = drawLine.y;
    __asm
    {
      vmovss  dword ptr [rsp+530h+filterFuncCommon], xmm0
      vmovss  xmm0, dword ptr [rax]
    }
    _RAX = drawLine.x;
    __asm
    {
      vmovss  [rsp+530h+y], xmm0
      vmovss  xmm1, dword ptr [rax]
      vmovss  dword ptr [rsp+530h+fmt], xmm1
    }
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, fmt, y, 1, 1, filterFuncCommon, &colorWhite, 3);
    _RCX = drawLine.y;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm0, xmm0, dword ptr [rax]
      vmovss  dword ptr [rcx], xmm0
    }
    LODWORD(fmta) = v10->sortLists[sortListRead].genericSortList.mCount;
    Com_sprintf_truncate<1024>((char (*)[1024])text, "Sort list counts: Image ^2%u^7, Mesh: ^2%u^7, Generic ^2%u^7", (unsigned int)v10->sortLists[sortListRead].imageSortList.mCount, (unsigned int)v10->sortLists[sortListRead].meshSortList.mCount, fmta);
    _RAX = drawLine.fontScale;
    __asm { vmovss  xmm0, dword ptr [rax] }
    _RAX = drawLine.y;
    __asm
    {
      vmovss  dword ptr [rsp+530h+filterFuncCommon], xmm0
      vmovss  xmm0, dword ptr [rax]
    }
    _RAX = drawLine.x;
    __asm
    {
      vmovss  [rsp+530h+y], xmm0
      vmovss  xmm1, dword ptr [rax]
      vmovss  dword ptr [rsp+530h+fmt], xmm1
    }
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, fmtb, ya, 1, 1, filterFuncCommona, &colorWhite, 3);
    _RCX = drawLine.y;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm0, xmm0, dword ptr [rax]
      vmovss  dword ptr [rcx], xmm0
    }
    Com_sprintf_truncate<1024>((char (*)[1024])text, "^2Legend: A=alloc, Lo=loading, I=in-use, L=loaded, F=forced, T=touched - Meshes/generics only: F=freeable, D=in-danger^7");
    _RAX = drawLine.fontScale;
    __asm { vmovss  xmm0, dword ptr [rax] }
    _RAX = drawLine.y;
    __asm
    {
      vmovss  dword ptr [rsp+530h+filterFuncCommon], xmm0
      vmovss  xmm0, dword ptr [rax]
    }
    _RAX = drawLine.x;
    __asm
    {
      vmovss  [rsp+530h+y], xmm0
      vmovss  xmm1, dword ptr [rax]
      vmovss  dword ptr [rsp+530h+fmt], xmm1
    }
    UI_DrawText(*drawLine.scrPlace, (const char *)drawLine.text, 0x7FFFFFFF, *drawLine.font, fmtc, yb, 1, 1, filterFuncCommonb, &colorWhite, 3);
    _RCX = drawLine.y;
    __asm
    {
      vmovaps xmm7, [rsp+530h+var_30]
      vmovaps xmm6, [rsp+530h+var_20]
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm0, xmm0, dword ptr [rax]
      vmovss  dword ptr [rcx], xmm0
      vmovss  xmm1, [rsp+530h+var_4CC]
      vaddss  xmm2, xmm1, [rsp+530h+var_4C8]
      vmovss  [rsp+530h+var_4CC], xmm2
    }
    if ( (unsigned int)(integer - 1) <= 1 )
    {
      v68 = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      v70[0] = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v69 = 0;
      Stream_Debug_DrawSortList_StreamSortList_327680___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_b267cbc876d3315e4cf100fef167db9d___lambda_a03bd0ecdb9f9113e98cb9aecc2cda9e___lambda_336efe4c9e8d121aa0cff81226e12fe2___lambda_1da4f004ffa682f5aab5718f9b313130_(&v71, (char (*)[1024])text, "image parts", &v10->sortLists[sortListRead].imageSortList, &drawLine, &drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l13::<lambda_a03bd0ecdb9f9113e98cb9aecc2cda9e> *)v70, &v69, &v68);
      __asm
      {
        vmovss  xmm0, [rsp+530h+var_4CC]
        vaddss  xmm1, xmm0, [rsp+530h+var_4C8]
        vmovss  [rsp+530h+var_4CC], xmm1
      }
    }
    if ( ((integer - 1) & 0xFFFFFFFD) == 0 )
    {
      v70[0] = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      v68 = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v69 = 0;
      Stream_Debug_DrawSortList_StreamSortList_45056___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_1a974b2214cb727b25cccad923c9b625___lambda_c10e7388bac439afc4fd6fe13f11b20f___lambda_f5c2c8e542714bc7e0013ccec6336e64___lambda_4b8d9d2abd8aabf9589861be19037689_(&v71, (char (*)[1024])text, "meshes", &v10->sortLists[sortListRead].meshSortList, &drawLine, (const Stream_Debug_DrawSortLists::__l16::<lambda_1a974b2214cb727b25cccad923c9b625> *)&drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l16::<lambda_c10e7388bac439afc4fd6fe13f11b20f> *)&v68, (const Stream_Debug_DrawSortLists::__l16::<lambda_f5c2c8e542714bc7e0013ccec6336e64> *)&v69, (const Stream_Debug_DrawSortLists::__l16::<lambda_4b8d9d2abd8aabf9589861be19037689> *)v70);
      __asm
      {
        vmovss  xmm0, [rsp+530h+var_4CC]
        vaddss  xmm1, xmm0, [rsp+530h+var_4C8]
        vmovss  [rsp+530h+var_4CC], xmm1
      }
    }
    if ( integer == 1 || integer == 4 )
    {
      v70[0] = 0;
      drawSortListEntryFunc.text = (char (*)[1024])text;
      v68 = 0;
      drawSortListEntryFunc.drawLine = &drawLine;
      v69 = 0;
      Stream_Debug_DrawSortList_StreamSortList_37888___lambda_0040f16ab7d9a2fdd62b28d3ddbda264___lambda_3f8f3a149303014be627db5456306c7d___lambda_097f47f61de0dc2542c4a4533e5c96ce___lambda_16a05c8dbb37f4c77df9095193df4bf3___lambda_29f26645933ecb458ce0f93757ef6ca9_(&v71, (char (*)[1024])text, "generics", &v10->sortLists[sortListRead].genericSortList, &drawLine, (const Stream_Debug_DrawSortLists::__l19::<lambda_3f8f3a149303014be627db5456306c7d> *)&drawSortListEntryFunc, (const Stream_Debug_DrawSortLists::__l19::<lambda_097f47f61de0dc2542c4a4533e5c96ce> *)&v68, (const Stream_Debug_DrawSortLists::__l19::<lambda_16a05c8dbb37f4c77df9095193df4bf3> *)&v69, v70);
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
  void *v6; 
  const dvar_t *v8; 
  unsigned __int64 v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  StreamSortList<327680> *p_imageSortList; 
  int mSortedRight; 
  int v16; 
  GfxFont *FontHandle; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo *v27; 
  unsigned int *p_wanted; 
  unsigned int v29; 
  unsigned int v30; 
  const char *v31; 
  unsigned int v32; 
  char v33; 
  char v34; 
  char *fmt; 
  float fmta; 
  float y; 
  float v43; 
  bool enabled; 
  bool v45; 
  int integer; 
  int v47; 
  char *v48; 
  Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632> *p_enabled; 
  int *p_integer; 
  int *v51; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo *v52; 
  __int64 v53; 
  FastCriticalSection *p_mCS; 
  Stream_Debug_DrawTopSortedImageList::__l2::ImageInfo _First[2500]; 
  unsigned __int64 v56; 
  char dest[1024]; 
  char v62; 

  v6 = alloca(v1);
  v53 = -2i64;
  __asm
  {
    vmovaps [rsp+13DB0h+var_30], xmm6
    vmovaps [rsp+13DB0h+var_40], xmm7
    vmovaps [rsp+13DB0h+var_50], xmm8
    vmovaps [rsp+13DB0h+var_60], xmm9
  }
  v8 = DVARBOOL_stream_drawTopSortedImages;
  if ( !DVARBOOL_stream_drawTopSortedImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImages") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = 0i64;
    v56 = 0i64;
    v10 = DVARBOOL_stream_drawTopSortedImagesNoPart0;
    if ( !DVARBOOL_stream_drawTopSortedImagesNoPart0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesNoPart0") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    enabled = v10->current.enabled;
    v11 = DVARBOOL_stream_drawTopSortedImagesNoForced;
    if ( !DVARBOOL_stream_drawTopSortedImagesNoForced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesNoForced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v45 = v11->current.enabled;
    v12 = DVARINT_stream_drawTopSortedImagesThresholdKB;
    if ( !DVARINT_stream_drawTopSortedImagesThresholdKB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesThresholdKB") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v47 = v12->current.integer << 10;
    v13 = DVARINT_stream_drawTopSortedImagesSortKey;
    if ( !DVARINT_stream_drawTopSortedImagesSortKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesSortKey") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    p_imageSortList = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead].imageSortList;
    v48 = (char *)&v45;
    p_enabled = (Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632> *)&enabled;
    p_integer = &integer;
    v51 = &v47;
    v52 = _First;
    p_mCS = &p_imageSortList->mCS;
    if ( p_imageSortList == (StreamSortList<327680> *)-2662416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockRead(&p_imageSortList->mCS);
    if ( StreamSortList_327680_::IterateRangeReverse__lambda_350f28fcd4196afffbbe3e932274bded___((int)p_imageSortList, p_imageSortList->mCount - 1, (const Stream_Debug_DrawTopSortedImageList::__l2::<lambda_350f28fcd4196afffbbe3e932274bded> *)(unsigned int)p_imageSortList->mSortedRight) )
    {
      do
      {
        mSortedRight = p_imageSortList->mSortedRight;
        v16 = mSortedRight - 1;
      }
      while ( StreamSortList<327680>::PartialSort(p_imageSortList, mSortedRight - p_imageSortList->mCount) && StreamSortList_327680_::IterateRangeReverse__lambda_350f28fcd4196afffbbe3e932274bded___((int)p_imageSortList, v16, (const Stream_Debug_DrawTopSortedImageList::__l2::<lambda_350f28fcd4196afffbbe3e932274bded> *)(unsigned int)p_imageSortList->mSortedRight) );
    }
    Sys_UnlockRead(&p_imageSortList->mCS);
    if ( v56 )
    {
      if ( v56 == 2500 )
        Com_PrintWarning(35, "Out of ImageInfo array in R_Stream_GetTopSortedImageList() increase from %lu\n", 2500i64);
      std::_Sort_unchecked__Stream_Debug_DrawTopSortedImageList_::_2_::ImageInfo____lambda_6afac1d50d49c5ae90c2e781f9354632___(_First, &_First[v56], (__int64)(32 * v56) >> 5, (Stream_Debug_DrawTopSortedImageList::__l2::<lambda_6afac1d50d49c5ae90c2e781f9354632>)enabled);
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm6, xmm6, xmm6
      }
      _RBX = DVARFLT_stream_drawTopSortedImagesFontSize;
      if ( !DVARFLT_stream_drawTopSortedImagesFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTopSortedImagesFontSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RDI = ScrPlace_GetActivePlacement(localClientIndex);
      __asm { vmovaps xmm2, xmm7; scale }
      FontHandle = UI_GetFontHandle(_RDI, 5, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm7; scale }
      UI_TextHeight(FontHandle, *(float *)&_XMM1);
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vcvtsi2ss xmm9, xmm9, eax
      }
      v27 = &_First[v56];
      if ( _First != v27 )
      {
        p_wanted = &_First[0].wanted;
        while ( 1 )
        {
          if ( !integer )
            goto LABEL_39;
          if ( integer != 1 )
            break;
          v29 = p_wanted[2];
          v32 = p_wanted[1];
          v30 = *p_wanted;
          v31 = "^6wanted ^5%5u^7 KB, ^2loaded ^5%5u^7 KB, ^3total ^5%5u^7 KB: %s\n";
LABEL_41:
          LODWORD(fmt) = v29 >> 10;
          Com_sprintf_truncate<1024>((char (*)[1024])dest, v31, v30 >> 10, v32 >> 10, fmt, **((_QWORD **)p_wanted - 2));
LABEL_42:
          __asm
          {
            vmovss  [rsp+13DB0h+var_13D70], xmm7
            vmovss  [rsp+13DB0h+y], xmm6
            vmovss  dword ptr [rsp+13DB0h+fmt], xmm8
          }
          UI_DrawText(_RDI, dest, 0x7FFFFFFF, FontHandle, fmta, y, 1, 1, v43, &colorWhite, 3);
          __asm
          {
            vaddss  xmm6, xmm6, xmm9
            vcomiss xmm6, dword ptr [rdi+34h]
          }
          if ( v33 | v34 )
          {
            p_wanted += 8;
            if ( p_wanted - 4 != (unsigned int *)v27 )
              continue;
          }
          goto LABEL_44;
        }
        if ( integer == 2 )
        {
LABEL_39:
          v29 = p_wanted[2];
          v30 = p_wanted[1];
          v31 = "^2loaded ^5%5u^7 KB, ^6wanted ^5%5u^7 KB, ^3total ^5%5u^7 KB: %s\n";
        }
        else
        {
          if ( integer != 3 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 1645, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
              __debugbreak();
            goto LABEL_42;
          }
          v29 = p_wanted[1];
          v30 = p_wanted[2];
          v31 = "^3total ^5%5u^7 KB, ^6wanted ^5%5u^7 KB, ^2loaded ^5%5u^7 KB: %s\n";
        }
        v32 = *p_wanted;
        goto LABEL_41;
      }
    }
LABEL_44:
    if ( v56 )
    {
      do
      {
        if ( v9 >= 0x9C4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        ++v9;
      }
      while ( v9 < v56 );
    }
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
Stream_Debug_DrawTouchedImages
==============
*/
void Stream_Debug_DrawTouchedImages(const LocalClientNum_t localClientIndex)
{
  const dvar_t *v8; 
  const ScreenPlacement *v12; 
  GfxFont *v14; 
  unsigned int v17; 
  unsigned int v19; 
  __int64 v21; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  GfxImage *GfxImageAtIndex; 
  const char *name; 
  unsigned int *mLoaded; 
  const char *v31; 
  int v32; 
  bool v33; 
  StreamFrontendGlob *v34; 
  unsigned int *mUse; 
  StreamFrontendGlob *v36; 
  const char *v37; 
  unsigned int *mLoading; 
  StreamFrontendGlob *v39; 
  const char *v40; 
  unsigned int *mAlloc; 
  const char *v42; 
  int v46; 
  float fmt; 
  float fmta; 
  __int64 y; 
  float ya; 
  float yb; 
  __int64 horzAlign; 
  float v69; 
  float v70; 
  int v71; 
  unsigned int v72; 
  unsigned int v73; 
  int v74; 
  __int64 v76; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  char dest[1024]; 

  v8 = DCONST_DVARBOOL_stream_drawTouchedImages;
  if ( !DCONST_DVARBOOL_stream_drawTouchedImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawTouchedImages") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+548h+var_38], xmm6
      vmovaps [rsp+548h+var_48], xmm7
      vmovaps [rsp+548h+var_58], xmm8
      vmovaps [rsp+548h+var_68], xmm9
      vmovaps [rsp+548h+var_78], xmm10
      vmovaps [rsp+548h+var_88], xmm11
      vmovaps [rsp+548h+var_98], xmm12
      vmovss  xmm8, cs:__real@3e19999a
      vmovaps xmm2, xmm8; scale
    }
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientIndex);
    v12 = scrPlace;
    __asm { vmovaps xmm1, xmm8; scale }
    font = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
    v14 = font;
    UI_TextHeight(font, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm9, cs:__real@41c00000
      vmovss  xmm11, cs:__real@43700000
    }
    v17 = 0;
    v71 = 1;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    v19 = 0;
    v74 = 0;
    __asm { vcvtsi2ss xmm10, xmm10, eax }
    v21 = 2365376i64;
    v72 = 0;
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vxorps  xmm7, xmm7, xmm7
      vaddss  xmm6, xmm10, xmm9
    }
    v76 = 2365376i64;
    do
    {
      v25 = *(unsigned int *)((char *)&streamFrontendGlob->modelDistance.mDistances[10240].mValue + v21) | *(unsigned int *)((char *)&streamFrontendGlob->modelDistance.mDistances[0].mValue + v21);
      v73 = v25;
      if ( v25 )
      {
        do
        {
          v26 = __lzcnt(v25);
          v27 = ((_BYTE)v19 - (_BYTE)v26 + 31) & 3;
          GfxImageAtIndex = DB_GetGfxImageAtIndex((v19 - v26 + 31) >> 2);
          if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2175, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
            __debugbreak();
          if ( v27 >= GfxImageAtIndex->streamedPartCount )
          {
            LODWORD(horzAlign) = GfxImageAtIndex->streamedPartCount;
            LODWORD(y) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2176, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( image->streamedPartCount )", "imagePartIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          name = GfxImageAtIndex->name;
          mLoaded = streamFrontendGlob->imageBits.mLoaded;
          if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v31 = "^1L^7";
          v32 = 1 << v27;
          v33 = ((1 << v27) & *mLoaded) == 0;
          v34 = streamFrontendGlob;
          if ( !v33 )
            v31 = "^2L^7";
          if ( v27 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mUse = v34->imageBits.mUse;
          if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v33 = (v32 & *mUse) == 0;
          v36 = streamFrontendGlob;
          v37 = "^1I^7";
          if ( !v33 )
            v37 = "^2I^7";
          if ( v27 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mLoading = v36->imageBits.mLoading;
          if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v33 = (v32 & *mLoading) == 0;
          v39 = streamFrontendGlob;
          v40 = " ";
          if ( !v33 )
            v40 = "^5Lo^7";
          if ( v27 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(horzAlign) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(y) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          mAlloc = v39->imageBits.mAlloc;
          if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v42 = "^1A^7";
          LODWORD(horzAlign) = v27;
          if ( (v32 & *mAlloc) != 0 )
            v42 = "^2A^7";
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "  %s%s%s%s ^5part ^5%u ^3%.55s", v42, v40, v37, v31, horzAlign, name);
          v14 = font;
          v12 = scrPlace;
          __asm
          {
            vmovss  [rsp+548h+var_508], xmm8
            vmovss  [rsp+548h+y], xmm6
            vmovss  dword ptr [rsp+548h+fmt], xmm7
          }
          UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, fmt, ya, 1, 1, v69, &colorWhite, 3);
          v19 = v72;
          _EAX = v71 + 1;
          _ER11 = 60;
          __asm { vmovd   xmm0, eax }
          v46 = 0;
          __asm { vaddss  xmm3, xmm6, xmm10 }
          if ( (unsigned int)(v71 + 1) <= 0x3C )
            v46 = v71 + 1;
          __asm
          {
            vmovd   xmm1, r11d
            vpcmpgtq xmm2, xmm0, xmm1
            vblendvps xmm0, xmm3, xmm9, xmm2
            vmovss  [rsp+548h+var_4D8], xmm0
            vmovss  xmm6, [rsp+548h+var_4D8]
            vmovd   xmm0, eax
            vaddss  xmm3, xmm7, xmm11
          }
          v17 = v74 + 1;
          v71 = v46;
          ++v74;
          __asm { vmovd   xmm1, r11d }
          v25 = ~(0xF0000000 >> (v26 & 0xFC)) & v73;
          v73 = v25;
          __asm
          {
            vpcmpgtq xmm2, xmm0, xmm1
            vblendvps xmm3, xmm7, xmm3, xmm2
            vmovaps xmm7, xmm3
            vmovss  [rsp+548h+var_4C8], xmm3
          }
        }
        while ( v25 );
        v71 = v46;
      }
      v19 += 32;
      v21 = v76 + 4;
      v72 = v19;
      v76 += 4i64;
    }
    while ( v19 < 0x50000 );
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "Touched Images[%d] ^2Legend: A=alloc, Lo=loading, I=in-use, L=loaded", v17);
    __asm
    {
      vmovss  [rsp+548h+var_508], xmm8
      vmovss  [rsp+548h+y], xmm9
      vmovss  dword ptr [rsp+548h+fmt], xmm12
    }
    UI_DrawText(v12, dest, 0x7FFFFFFF, v14, fmta, yb, 1, 1, v70, &colorWhite, 3);
    __asm
    {
      vmovaps xmm12, [rsp+548h+var_98]
      vmovaps xmm11, [rsp+548h+var_88]
      vmovaps xmm10, [rsp+548h+var_78]
      vmovaps xmm9, [rsp+548h+var_68]
      vmovaps xmm8, [rsp+548h+var_58]
      vmovaps xmm7, [rsp+548h+var_48]
      vmovaps xmm6, [rsp+548h+var_38]
    }
  }
}

/*
==============
Stream_Debug_DrawXPakHeatMap
==============
*/

void __fastcall Stream_Debug_DrawXPakHeatMap(double _XMM0_8, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v12; 
  const dvar_t *v13; 
  unsigned __int64 integer; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  int v18; 
  unsigned __int64 i; 
  int xpakIndex; 
  int v21; 
  int v27; 
  __int64 v30; 
  int v32; 
  const char *v43; 
  GfxFont *bigDevFont; 
  const char *v45; 
  int v46; 
  GfxColor v48; 
  FileStreamTrackType *p_trackType; 
  __int64 v52; 
  int v53; 
  GfxColor v56; 
  unsigned int v57; 
  unsigned __int8 v58; 
  unsigned __int64 v59; 
  signed __int64 v60; 
  unsigned __int64 v62; 
  __int64 v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  char *v92; 
  GfxFont *v93; 
  const char *v94; 
  int v95; 
  unsigned __int64 v97; 
  int v98; 
  int v102; 
  float fmt; 
  float fmta; 
  __int64 filled; 
  float filleda; 
  float filledb; 
  __int64 xScale; 
  float xScalea; 
  float xScaleb; 
  float yScale; 
  float yScalea; 
  float rotation; 
  float rotationa; 
  GfxColor v118; 
  unsigned int unsignedInt; 
  __int64 v120; 
  __int64 v121[131]; 
  char v122; 

  v12 = DCONST_DVARBOOL_stream_drawXPakHeatMap;
  if ( !DCONST_DVARBOOL_stream_drawXPakHeatMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = DCONST_DVARINT_stream_drawXPakHeatMapMaxBlockCountOnWidth;
    __asm
    {
      vmovaps [rsp+548h+var_48], xmm7
      vmovaps [rsp+548h+var_58], xmm8
      vmovaps [rsp+548h+var_68], xmm9
      vmovaps [rsp+548h+var_88], xmm11
      vmovaps [rsp+548h+var_98], xmm12
      vmovaps [rsp+548h+var_A8], xmm13
      vmovaps [rsp+548h+var_B8], xmm14
    }
    if ( !DCONST_DVARINT_stream_drawXPakHeatMapMaxBlockCountOnWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMapMaxBlockCountOnWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    v15 = Sys_Milliseconds();
    v16 = DCONST_DVARINT_stream_drawXPakHeatMapTimeLimit;
    v17 = v15;
    if ( !DCONST_DVARINT_stream_drawXPakHeatMapTimeLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawXPakHeatMapTimeLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v18 = v17 - v16->current.integer;
    unsignedInt = v16->current.unsignedInt;
    v118.packed = v18;
    memset(v121, 0, 32);
    v120 = 0i64;
    for ( i = 0i64; i < 1024; ++i )
    {
      if ( s_streamDebugGlob.streamHeatMapData[i].startedTime >= v18 )
      {
        xpakIndex = s_streamDebugGlob.streamHeatMapData[i].xpakIndex;
        LOBYTE(v21) = XPak_IndexToFileID(xpakIndex);
        if ( v21 == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2424, ASSERT_TYPE_ASSERT, "(XPak_IndexToFileID( xpakIndex ) != FileStreamFileID::INVALID)", (const char *)&queryFormat, "XPak_IndexToFileID( xpakIndex ) != FileStreamFileID::INVALID") )
          __debugbreak();
        if ( (unsigned int)(xpakIndex / 8) >= 0x20 )
        {
          LODWORD(xScale) = 32;
          LODWORD(filled) = xpakIndex / 8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 2425, ASSERT_TYPE_ASSERT, "(unsigned)( xpakIndex / 8 ) < (unsigned)( sizeof( xpakUsed ) )", "xpakIndex / 8 doesn't index sizeof( xpakUsed )\n\t%i not in [0, %i)", filled, xScale) )
            __debugbreak();
        }
        *((_DWORD *)v121 + xpakIndex / 32) |= 1 << (xpakIndex & 0x1F);
      }
    }
    __asm
    {
      vmovss  xmm11, cs:__real@42c80000
      vmovss  xmm8, cs:__real@5f800000
      vmovss  xmm7, cs:__real@41200000
      vmovss  xmm12, cs:__real@42dc0000
      vmovss  xmm13, cs:__real@3f800000
    }
    v27 = 255;
    __asm
    {
      vmovaps [rsp+548h+var_38], xmm6
      vmovaps xmm9, xmm11
    }
    _R14 = &v122;
    __asm { vmovaps [rsp+548h+var_78], xmm10 }
    v30 = 256i64;
    __asm { vxorps  xmm14, xmm14, xmm14 }
    do
    {
      v32 = *((_DWORD *)v121 + v27 / 32);
      if ( _bittest(&v32, v27 & 0x1F) )
      {
        __asm
        {
          vmovss  dword ptr [r14], xmm9
          vmovaps xmm10, xmm9
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        if ( (((((unsigned __int64)(XPak_IndexToFileSize(v27) + 0xFFFFF) >> 20) + integer - 1) / integer) & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm0, xmm0, xmm8 }
        __asm
        {
          vmulss  xmm3, xmm0, xmm7; height
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rbp
          vaddss  xmm9, xmm9, xmm3
        }
        if ( (integer & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm0, xmm0, xmm8 }
        __asm
        {
          vmulss  xmm6, xmm0, xmm7
          vmovaps xmm2, xmm6; width
          vmovaps xmm1, xmm10; y
          vmovaps xmm0, xmm11; x
        }
        R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &s_streamHeatMapColorFile, 0);
        v43 = XPak_IndexToName(v27);
        bigDevFont = cls.bigDevFont;
        v45 = v43;
        v46 = R_TextHeight(cls.bigDevFont);
        __asm
        {
          vmovss  [rsp+548h+rotation], xmm14
          vmovss  [rsp+548h+yScale], xmm13
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm1, xmm0, xmm10
          vmovss  [rsp+548h+xScale], xmm13
          vaddss  xmm2, xmm6, xmm12
          vmovss  dword ptr [rsp+548h+filled], xmm1
          vmovss  dword ptr [rsp+548h+fmt], xmm2
        }
        R_AddCmdDrawText(v45, 64, bigDevFont, v46, fmt, filleda, xScalea, yScale, rotation, &colorWhite);
      }
      --v27;
      _R14 -= 4;
      --v30;
    }
    while ( v30 );
    v48 = v118;
    p_trackType = &s_streamDebugGlob.streamHeatMapData[0].trackType;
    __asm
    {
      vmovaps xmm12, [rsp+548h+var_98]
      vmovaps xmm10, [rsp+548h+var_78]
    }
    v52 = 1024i64;
    while ( 1 )
    {
      v53 = *((_DWORD *)p_trackType - 6) - v48.packed;
      if ( v53 > 0 )
      {
        _RAX = *((int *)p_trackType - 5);
        ++v120;
        __asm { vmovss  xmm9, [rsp+rax*4+548h+var_4C8] }
        v56.packed = s_streamHeatMapColorPrimer;
        if ( *p_trackType == FILE_STREAM_TRACK_STREAM )
          v56.packed = s_streamHeatMapColorStream;
        v118 = v56;
        v57 = 255 * v53 / unsignedInt;
        v58 = v57;
        if ( v57 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v57, "unsigned", v57) )
          __debugbreak();
        v59 = *((_QWORD *)p_trackType - 2) >> 20;
        v60 = (unsigned __int64)(*((_QWORD *)p_trackType - 1) + 0xFFFFFi64) >> 20;
        v118.array[3] = v58;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        v62 = v60 + v59 - 1;
        v63 = v62 / integer;
        v64 = v62 % integer;
        v65 = v62 / integer - v59 / integer + 1;
        __asm { vcvtsi2ss xmm0, xmm0, rdx }
        if ( ((v59 % integer) & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm0, xmm0, xmm8 }
        __asm
        {
          vmulss  xmm0, xmm0, xmm7
          vxorps  xmm1, xmm1, xmm1
          vaddss  xmm4, xmm0, xmm11
          vcvtsi2ss xmm1, xmm1, rax
        }
        if ( ((v59 / integer) & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm1, xmm1, xmm8 }
        __asm
        {
          vmulss  xmm0, xmm1, xmm7
          vaddss  xmm6, xmm0, xmm9
        }
        if ( v65 == 1 )
        {
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, rcx
          }
          if ( v60 < 0 )
            __asm { vaddss  xmm2, xmm2, xmm8 }
          __asm
          {
            vmulss  xmm2, xmm2, xmm7
            vmovaps xmm3, xmm7
            vmovaps xmm1, xmm6
            vmovaps xmm0, xmm4
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( (__int64)(integer - v64) < 0 )
            __asm { vaddss  xmm0, xmm0, xmm8 }
          __asm
          {
            vmulss  xmm2, xmm0, xmm7; width
            vmovaps xmm0, xmm4; x
            vmovaps xmm3, xmm7; height
            vmovaps xmm1, xmm6; y
          }
          R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &v118, 1);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( (__int64)(v64 + 1) < 0 )
            __asm { vaddss  xmm0, xmm0, xmm8 }
          __asm
          {
            vmulss  xmm2, xmm0, xmm7; width
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rsi
          }
          if ( v63 < 0 )
            __asm { vaddss  xmm0, xmm0, xmm8 }
          __asm
          {
            vmulss  xmm0, xmm0, xmm7
            vaddss  xmm1, xmm0, xmm9; y
            vmovaps xmm0, xmm11; x
            vmovaps xmm3, xmm7; height
          }
          R_AddCmdDrawRect2D(*(float *)&_XMM0_8, *(float *)&_XMM1_8, *(float *)&_XMM2_8, *(float *)&_XMM3, &v118, 1);
          if ( v65 <= 2 )
            goto LABEL_57;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( (__int64)(v65 - 2) < 0 )
            __asm { vaddss  xmm0, xmm0, xmm8 }
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rbp
            vmulss  xmm3, xmm0, xmm7; height
          }
          if ( (integer & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddss  xmm1, xmm1, xmm8 }
          __asm
          {
            vmulss  xmm2, xmm1, xmm7; width
            vaddss  xmm1, xmm6, xmm7; y
            vmovaps xmm0, xmm11; x
          }
        }
        R_AddCmdDrawRect2D(*(float *)&_XMM0_8, *(float *)&_XMM1_8, *(float *)&_XMM2_8, *(float *)&_XMM3, &v118, 1);
      }
LABEL_57:
      p_trackType += 8;
      if ( !--v52 )
      {
        v92 = j_va("[XPakHeatMap enabled] Streamer in White. Primer in BLUE. Fades out after %d ms. Each block is %zu bytes. Activity count is %zu%s", unsignedInt, 0x100000i64);
        v93 = cls.bigDevFont;
        v94 = v92;
        v95 = R_TextHeight(cls.bigDevFont);
        __asm { vmovaps xmm9, [rsp+548h+var_68] }
        v97 = -1i64;
        v98 = v95;
        __asm
        {
          vmovaps xmm8, [rsp+548h+var_58]
          vmovaps xmm7, [rsp+548h+var_48]
          vmovaps xmm6, [rsp+548h+var_38]
        }
        do
          ++v97;
        while ( v94[v97] );
        v102 = truncate_cast<int,unsigned __int64>(v97);
        __asm
        {
          vmovss  [rsp+548h+rotation], xmm14
          vmovss  [rsp+548h+yScale], xmm13
          vmovss  [rsp+548h+xScale], xmm13
          vmovss  dword ptr [rsp+548h+filled], xmm11
          vmovss  dword ptr [rsp+548h+fmt], xmm11
        }
        R_AddCmdDrawText(v94, v102, v93, v98, fmta, filledb, xScaleb, yScalea, rotationa, &colorWhite);
        __asm
        {
          vmovaps xmm14, [rsp+548h+var_B8]
          vmovaps xmm13, [rsp+548h+var_A8]
          vmovaps xmm11, [rsp+548h+var_88]
        }
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
  const GfxImage *v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int StreamedPartCount; 
  int v14; 
  StreamFrontendGlob *v15; 
  int v16; 
  unsigned int *mStaticForced; 
  __int64 v18; 
  int v19; 
  StreamFrontendGlob *v20; 
  StreamFrontendGlob *v21; 
  unsigned int v22; 
  __int64 v23; 
  StreamFrontendGlob *v24; 
  __int64 v25; 
  int v26; 
  char *v27; 
  const GfxImage *v28; 
  int v29; 
  const char *Name; 
  const char *v32; 
  __int64 v35; 
  const char *v36; 
  const char *v37; 
  __int64 v39; 
  double v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  void *retaddr; 

  _R11 = &retaddr;
  v6 = image;
  if ( (image->flags & 0x40) != 0 )
  {
    __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
    v49 = Stream_Debug_CalcWantedBytesForImage(image);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v60 = 0i64;
    v10 = 0i64;
    v61 = 0i64;
    v54 = 0i64;
    v42 = 4 * DB_GetGfxImageIndex(v6);
    v11 = 0;
    v55 = 0i64;
    v12 = 0i64;
    v58 = 0i64;
    v59 = 0i64;
    v56 = 0i64;
    v57 = 0i64;
    StreamedPartCount = Image_GetStreamedPartCount(v6);
    v47 = StreamedPartCount;
    if ( StreamedPartCount > 0 )
    {
      do
      {
        if ( v6->streamedPartCount >= v11 )
        {
          if ( (v6->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          if ( v11 >= Image_GetStreamedPartCount(v6) )
          {
            LODWORD(v41) = Image_GetStreamedPartCount(v6);
            LODWORD(v39) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v39, v41) )
              __debugbreak();
          }
          if ( v11 )
            v14 = (*(unsigned int *)((char *)&v6->streams[0].levelCountAndSize + v12) >> 4) - ((unsigned int)v6->streams[v11 - 1].levelCountAndSize >> 4);
          else
            v14 = *(unsigned int *)((char *)&v6->streams[0].levelCountAndSize + v12) >> 4;
          *((_DWORD *)&v60 + v10) = (unsigned int)(v14 + 1023) >> 10;
        }
        v15 = streamFrontendGlob;
        v16 = v11 + v42;
        if ( v11 + v42 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v41) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v39) = v11 + v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v39, v41) )
            __debugbreak();
        }
        mStaticForced = v15->imageBits.mStaticForced;
        if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v18 = (__int64)v16 >> 5;
        v19 = 1 << (v16 & 0x1F);
        if ( (v19 & mStaticForced[v18]) != 0 )
          *((_DWORD *)&v58 + v10) = 1;
        v20 = streamFrontendGlob;
        if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, v16) || StreamableBits::CheckLoading(&v20->imageBits, v16) )
          *((_DWORD *)&v56 + v10) = 1;
        v21 = streamFrontendGlob;
        v22 = v16 >> 5;
        if ( v22 >= 0x2800 )
        {
          LODWORD(v41) = 10240;
          LODWORD(v39) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v39, v41) )
            __debugbreak();
        }
        v23 = (__int64)v21->imageTouchBits + 4 * v18;
        if ( (v23 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v23) )
          __debugbreak();
        if ( (v19 & *(_DWORD *)v23) != 0 )
          *((_DWORD *)&v54 + v10) = 1;
        v24 = streamFrontendGlob;
        if ( v22 >= 0x2800 )
        {
          LODWORD(v41) = 10240;
          LODWORD(v39) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v39, v41) )
            __debugbreak();
        }
        v25 = (__int64)&v24->imageTouchBits[1][v18];
        if ( (v25 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v25) )
          __debugbreak();
        if ( (v19 & *(_DWORD *)v25) != 0 )
          *((_DWORD *)&v54 + v10) = 1;
        v6 = image;
        ++v11;
        ++v10;
        v12 += 40i64;
      }
      while ( v10 < v47 );
      v11 = v61;
      v7 = v60;
      LODWORD(v12) = v55;
      v8 = v54;
      v9 = v58;
      LODWORD(v10) = v56;
    }
    v26 = Stream_Debug_CalcBytesLoadedForImage(v6);
    v48 = (unsigned int)(v26 + 1023) >> 10;
    v50 = (unsigned __int64)(v49 + 1023) >> 10;
    v46 = ((unsigned int)(v26 + 0xFFFF) >> 10) & 0x3FFFC0;
    v27 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
    v28 = image;
    v43 = v42 + image->streamedPartCount;
    if ( v43 - 1 >= 0x50000 )
    {
      LODWORD(v41) = 327680;
      LODWORD(v39) = v43 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v39, v41) )
        __debugbreak();
      v28 = image;
    }
    v29 = *(_DWORD *)&v27[4 * v43 + 2775260];
    if ( v29 == -1 )
    {
      __asm { vmovss  xmm6, cs:__real@7f7fff80 }
    }
    else
    {
      v44 = v29 << 7;
      __asm { vmovss  xmm6, [rbp+60h+var_E0] }
    }
    Name = PixelFormat_GetName(v28->format);
    v32 = Image_TextureSemanticToString(image->semantic);
    __asm
    {
      vsqrtss xmm0, xmm6, xmm6
      vcvtss2sd xmm1, xmm0, xmm0
    }
    v35 = (unsigned int)*idx;
    v36 = image->name;
    *idx = v35 + 1;
    __asm { vmovsd  [rsp+1B0h+var_188], xmm1 }
    v37 = j_va("%d,%s,%s,%s,%.2f,%zu,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s\n", v35, v36, v32, Name, v40, v50, v48, v46, v7, HIDWORD(v60), v11, HIDWORD(v61), v8, HIDWORD(v54), v12, HIDWORD(v55), v9, HIDWORD(v58), v59, HIDWORD(v59), v10, HIDWORD(v56), v57, HIDWORD(v57), extraInfo);
    output->m_InvokeFctPtr(v37, &output->m_Data);
    __asm { vmovaps xmm6, xmmword ptr [rsp+1B0h+var_58+8] }
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
  const char *v15; 
  char *v16; 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *m_InvokeFctPtr)(const char *, const void *); 
  int *v19; 
  void (__fastcall *v20)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  void (__fastcall *v21)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v22; 
  void (__fastcall *v23)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v24)(const char *, const void *); 
  int *v25; 
  void (__fastcall *v26)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v27; 
  void (__fastcall *v28)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v29)(const char *, const void *); 
  int *v30; 
  int v31; 
  __int64 v32; 
  float v33; 
  __int64 v34; 
  char *v35; 
  void (__fastcall *v36)(const char *, const void *); 
  void (__fastcall *v37)(void *, const void *, stdext::inplace_function_operation); 
  char v38[64]; 
  int *v39; 
  void (__fastcall *v40)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *v41; 
  void (__fastcall *v42)(const char *, const void *); 
  void (__fastcall *v43)(void *, const void *, stdext::inplace_function_operation); 
  char v44[64]; 
  int *v45; 
  void (__fastcall *v46)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  __int64 v47[2]; 
  void (__fastcall *v48)(const char *, const void *); 
  void (__fastcall *v49)(void *, const void *, stdext::inplace_function_operation); 
  char v50[64]; 
  int *v51; 
  void (__fastcall *v52)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v53; 
  char *v54; 
  void (__fastcall *v55)(const char *, const void *); 
  void (__fastcall *v56)(void *, const void *, stdext::inplace_function_operation); 
  char v57[64]; 
  int *v58; 
  void (__fastcall *v59)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char *inData; 
  void (__fastcall *v61)(const char *, const void *); 
  void (__fastcall *v62)(void *, const void *, stdext::inplace_function_operation); 
  char v63[64]; 
  int *v64; 
  void (__fastcall *v65)(const stdext::inplace_function<void __cdecl(char const *),64,16> *, const GfxImage *, int *, const char *); 
  char v66[10240]; 

  v34 = -2i64;
  memset_0(v66, 0, sizeof(v66));
  v32 = 0i64;
  v33 = 0.0;
  _RCX = streamFrontendGlob;
  currentSavedViewPos = streamFrontendGlob->currentSavedViewPos;
  if ( streamFrontendGlob->savedViewPosCount[currentSavedViewPos][0] )
  {
    _RAX = currentSavedViewPos;
    __asm
    {
      vmovsd  xmm0, qword ptr [rax+rcx+0B96C5Ch]
      vmovsd  [rsp+2AB0h+var_2A88], xmm0
    }
    v33 = streamFrontendGlob->savedViewPos[_RAX][0][0].v[2];
  }
  __asm
  {
    vmovss  xmm3, [rsp+2AB0h+var_2A80]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovss  xmm2, dword ptr [rsp+2AB0h+var_2A88+4]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovss  xmm1, dword ptr [rsp+2AB0h+var_2A88]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v15 = j_va("index,name,semantic,format,distance,wanted_kb,allocd_kb,aligned_kb,part0_kb,part1_kb,part2_kb,part3_kb,touch0,touch1,touch2,touch3,force0,force1,force2,force3,used0,used1,used2,used3,parentStack,version:2,viewpos:%.0f,%.0f,%.0f\n", _RDX, _R8, _R9);
  output->m_InvokeFctPtr(v15, &output->m_Data);
  v31 = 0;
  v16 = v66;
  v35 = v66;
  m_ManagerFctPtr = output->m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v38, &output->m_Data, Copy);
    m_ManagerFctPtr = output->m_ManagerFctPtr;
    v16 = v35;
  }
  m_InvokeFctPtr = output->m_InvokeFctPtr;
  v36 = output->m_InvokeFctPtr;
  v37 = m_ManagerFctPtr;
  v19 = &v31;
  v39 = &v31;
  v20 = Stream_Debug_DumpCurrentImageUsage;
  v21 = Stream_Debug_DumpCurrentImageUsage;
  v40 = Stream_Debug_DumpCurrentImageUsage;
  inData = v16;
  if ( m_ManagerFctPtr )
  {
    m_ManagerFctPtr(v63, v38, Copy);
    v21 = v40;
    v19 = v39;
    m_ManagerFctPtr = v37;
    m_InvokeFctPtr = v36;
  }
  v61 = m_InvokeFctPtr;
  v62 = m_ManagerFctPtr;
  v64 = v19;
  v65 = v21;
  v36 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(v38, NULL, Destroy);
  v37 = NULL;
  DB_EnumXAssets(ASSET_TYPE_XMODEL, Stream_Debug_EnumDumpModelMaterialUsage, &inData, 1);
  v22 = v66;
  v41 = v66;
  v23 = output->m_ManagerFctPtr;
  if ( v23 )
  {
    v23(v44, &output->m_Data, Copy);
    v23 = output->m_ManagerFctPtr;
    v22 = v41;
  }
  v24 = output->m_InvokeFctPtr;
  v42 = output->m_InvokeFctPtr;
  v43 = v23;
  v25 = &v31;
  v45 = &v31;
  v26 = Stream_Debug_DumpCurrentImageUsage;
  v46 = Stream_Debug_DumpCurrentImageUsage;
  v47[0] = (__int64)v22;
  if ( v23 )
  {
    v23(v50, v44, Copy);
    v26 = v46;
    v25 = v45;
    v23 = v43;
    v24 = v42;
  }
  v48 = v24;
  v49 = v23;
  v51 = v25;
  v52 = v26;
  v53 = 0;
  v42 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v23 )
    v23(v44, NULL, Destroy);
  v43 = NULL;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v47, 1);
  v53 = 1;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, Stream_Debug_EnumDumpSurfaceMaterialUsage, v47, 1);
  v27 = v66;
  v35 = v66;
  v28 = output->m_ManagerFctPtr;
  if ( v28 )
  {
    v28(v38, &output->m_Data, Copy);
    v28 = output->m_ManagerFctPtr;
    v27 = v35;
  }
  v29 = output->m_InvokeFctPtr;
  v36 = output->m_InvokeFctPtr;
  v37 = v28;
  v30 = &v31;
  v39 = &v31;
  v40 = Stream_Debug_DumpCurrentImageUsage;
  v54 = v27;
  if ( v28 )
  {
    v28(v57, v38, Copy);
    v20 = v40;
    v30 = v39;
    v28 = v37;
    v29 = v36;
  }
  v55 = v29;
  v56 = v28;
  v58 = v30;
  v59 = v20;
  v36 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v28 )
    v28(v38, NULL, Destroy);
  v37 = NULL;
  DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_Debug_EnumDumpRemainingImageUsage, &v54, 1);
  v55 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v56 )
    v56(v57, NULL, Destroy);
  v56 = NULL;
  v48 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v49 )
    v49(v50, NULL, Destroy);
  v49 = NULL;
  v61 = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
  if ( v62 )
    v62(v63, NULL, Destroy);
}

/*
==============
Stream_Debug_DumpImageUsageInfo
==============
*/
void Stream_Debug_DumpImageUsageInfo(const GfxImage *image, int *idx, const stdext::inplace_function<void __cdecl(char const *),64,16> *output)
{
  unsigned int v7; 
  __int64 v8; 
  int v10; 
  unsigned int v11; 
  StreamFrontendGlob *v12; 
  unsigned int *mStaticForced; 
  StreamFrontendGlob *v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  StreamFrontendGlob *v19; 
  StreamFrontendGlob *v20; 
  int v21; 
  unsigned int *mAlloc; 
  bool v23; 
  __int64 v24; 
  XPakEntryInfo *EntryInfo; 
  char *v26; 
  int v27; 
  int streamedPartCount; 
  const char *v30; 
  const char *v31; 
  unsigned __int64 key; 
  const char *name; 
  __int64 v35; 
  const char *v36; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  double v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  std::_Aligned<64,16,double,0>::type *p_m_Data; 
  int v52; 
  int v55; 

  if ( (image->flags & 0x40) != 0 )
  {
    v7 = 4 * DB_GetGfxImageIndex(image);
    v8 = 0i64;
    v48 = v7;
    v52 = 0;
    if ( image->streamedPartCount )
    {
      __asm
      {
        vmovaps [rsp+0F8h+var_58], xmm6
        vmovaps [rsp+0F8h+var_68], xmm7
        vmovss  xmm7, cs:__real@7f7fff80
      }
      p_m_Data = &output->m_Data;
      do
      {
        v10 = v8 + v7;
        if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v8 >= Image_GetStreamedPartCount(image) )
        {
          LODWORD(v40) = Image_GetStreamedPartCount(image);
          LODWORD(v39) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        v11 = (unsigned int)image->streams[v8].levelCountAndSize >> 4;
        if ( (_DWORD)v8 )
          v11 -= (unsigned int)image->streams[(unsigned int)(v8 - 1)].levelCountAndSize >> 4;
        v12 = streamFrontendGlob;
        if ( v10 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v40) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v39) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        mStaticForced = v12->imageBits.mStaticForced;
        if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v14 = streamFrontendGlob;
        v15 = (__int64)v10 >> 5;
        v16 = 1 << (v10 & 0x1F);
        v47 = v16 & mStaticForced[v15];
        if ( (unsigned int)(v10 >> 5) >= 0x2800 )
        {
          LODWORD(v40) = 10240;
          LODWORD(v39) = v10 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        v17 = (__int64)v14->imageTouchBits + 4 * v15;
        if ( (v17 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v17) )
          __debugbreak();
        v18 = *(_DWORD *)v17;
        v19 = streamFrontendGlob;
        v46 = v18 & v16;
        if ( (unsigned int)(v10 >> 5) >= 0x2800 )
        {
          LODWORD(v40) = 10240;
          LODWORD(v39) = v10 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        if ( (((_BYTE)v19 + 4 * (_BYTE)v15 - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &v19->imageTouchBits[1][v15]) )
          __debugbreak();
        v20 = streamFrontendGlob;
        v21 = v19->imageTouchBits[1][v15] & v16;
        if ( v10 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v40) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v39) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        mAlloc = v20->imageBits.mAlloc;
        if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v23 = (v16 & mAlloc[v15]) == 0;
        v24 = 0i64;
        if ( !v23 )
          v24 = v11;
        EntryInfo = XPak_GetEntryInfo(STREAM_ITEM_IMAGE, v10);
        if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_debug.cpp", 773, ASSERT_TYPE_ASSERT, "(xpakInfo->valid)", (const char *)&queryFormat, "xpakInfo->valid") )
          __debugbreak();
        v26 = (char *)streamFrontendGlob + 4688152 * streamFrontendGlob->sortListRead;
        if ( (unsigned int)v10 >= 0x50000 )
        {
          LODWORD(v40) = 327680;
          LODWORD(v39) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        v27 = *(_DWORD *)&v26[4 * v10 + 2775264];
        if ( v27 == -1 )
        {
          __asm { vmovaps xmm6, xmm7 }
        }
        else
        {
          v55 = v27 << 7;
          __asm { vmovss  xmm6, [rsp+0F8h+arg_18] }
        }
        streamedPartCount = image->streamedPartCount;
        v30 = Image_TextureSemanticToString(image->semantic);
        v31 = XPak_IndexToName(*((unsigned __int8 *)EntryInfo + 24));
        key = EntryInfo->key;
        name = image->name;
        __asm { vcvtss2sd xmm0, xmm6, xmm6 }
        v35 = (unsigned int)*idx;
        *idx = v35 + 1;
        LODWORD(v45) = v46 != 0 || v21 != 0;
        LODWORD(v44) = v47 != 0;
        LODWORD(v43) = v11;
        __asm { vmovsd  [rsp+0F8h+var_B8], xmm0 }
        LODWORD(v41) = streamedPartCount;
        LODWORD(v40) = v52;
        v36 = j_va("%d,%s,%llx,%s,%s,%u,%u,%f,%u,%zu,%d,%d,%d\n", v35, name, key, v31, v30, v40, v41, v42, v43, v24, v44, v45, 0i64);
        output->m_InvokeFctPtr(v36, p_m_Data);
        v8 = (unsigned int)(v52 + 1);
        v52 = v8;
        v7 = v48;
      }
      while ( (unsigned int)v8 < image->streamedPartCount );
      __asm
      {
        vmovaps xmm7, [rsp+0F8h+var_68]
        vmovaps xmm6, [rsp+0F8h+var_58]
      }
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
  __int64 v8; 
  unsigned int *v9; 
  __int64 v10; 
  double v17; 
  __int64 inData; 
  __int64 v19[4]; 
  __int64 v20[2]; 
  int v21; 
  char dest[128]; 
  char v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  inData = 0i64;
  memset(v19, 0, sizeof(v19));
  v20[0] = 0i64;
  v20[1] = 0i64;
  v21 = 0;
  DB_EnumXAssets(ASSET_TYPE_STREAM_KEY, GetStreamKeyCounters, &inData, 1);
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@3a800000
  }
  v8 = 0i64;
  v9 = (unsigned int *)v20 + 1;
  v10 = 4i64;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( v19[v8] < 0 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+138h+var_118], xmm1
    }
    Com_sprintf<128>((char (*)[128])dest, "\t%s (%d): %0.1fk", s_streamKeyBehaviorNames[v8 + 1], *v9, v17);
    output->m_InvokeFctPtr(dest, &output->m_Data);
    ++v9;
    ++v8;
    --v10;
  }
  while ( v10 );
  _R11 = &v23;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  __int64 v1; 
  __int64 v9; 
  char v11[472]; 

  memset_0(v11, 0, 0x1C8ui64);
  _RDX = &s_streamDebugGlob.lockedHit;
  v1 = 3i64;
  _RAX = v11;
  do
  {
    _RDX = (CG_DrawHits_Hit *)((char *)_RDX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128;
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v1;
  }
  while ( v1 );
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v9 = *((_QWORD *)_RAX + 8);
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
  }
  *(_QWORD *)&_RDX->modelInfo.superTerrain.layerMaterialCount = v9;
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

void __fastcall Stream_Debug_TestBandwidth_f(double _XMM0_8)
{
  unsigned int v1; 
  int v2; 
  void *v3; 
  int v4; 
  const char *v5; 
  int v6; 
  FileStreamFileID v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  StreamerMemLoan *optionalLoan; 
  int v27; 
  FileStreamRequestID outId[4]; 
  unsigned int v29; 
  unsigned __int64 v30; 
  __int64 v31; 
  StreamerMemLoan v32; 
  StreamerMemLoan result; 

  v31 = -2i64;
  v1 = 0;
  v2 = 0;
  v32.mUpdateID = 0i64;
  v32.mPages = 0i64;
  v32.mCookie = -1061110033;
  if ( StreamerMemLoan::TryResize(&v32, MOVEMENT, 0x400000ui64) )
  {
    PMem_BeginAlloc("StreamerBandwidthTest", PMEM_STACK_GAME);
    v3 = PMem_AllocWithLoan(0x400000ui64, 0x10ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, &v32, "StreamerBandwidthTest");
    PMem_EndAlloc("StreamerBandwidthTest", PMEM_STACK_GAME);
    if ( Cmd_Argc() >= 2 )
    {
      v5 = Cmd_Argv(1);
      v4 = atoi(v5) << 10;
      if ( v4 > 0x400000 )
        v4 = 0x400000;
    }
    else
    {
      v4 = 0x100000;
    }
    v27 = v4;
    do
    {
      v6 = v2++;
      v7 = XPak_IndexToFileID(v6);
      v8 = FileStream_Easy_FileSize(v7);
    }
    while ( v8 < 524288000 );
    v9 = __rdtsc();
    v30 = v9;
    v29 = 100 * v4;
    s_streamDebugGlob.bandwidthTestReadComplete = 0;
    s_streamDebugGlob.bandwidthTestReadEndTime = v9;
    v10 = 0;
    if ( 100 * v4 )
    {
      v11 = (unsigned int)v4;
      v12 = v8 - (unsigned int)v4;
      do
      {
        v13 = (rand() % v12) & 0xFFFFFFFFFFFF8000ui64;
        if ( !FileStream_AddRequest(v7, v13, v11, v3, 250, FLAT_TIRE, lambda_e7b7e2d3fabc9e58d1c429ac83e03148_::_lambda_invoker_cdecl_, NULL, outId, FILE_STREAM_TRACK_TEST_BANDWIDTH) )
        {
          do
            Sys_Sleep(0);
          while ( !FileStream_AddRequest(v7, v13, v11, v3, 250, FLAT_TIRE, lambda_e7b7e2d3fabc9e58d1c429ac83e03148_::_lambda_invoker_cdecl_, NULL, outId, FILE_STREAM_TRACK_TEST_BANDWIDTH) );
          v4 = v27;
        }
        ++v10;
        v1 += v4;
      }
      while ( v1 < v29 );
      v9 = v30;
    }
    while ( s_streamDebugGlob.bandwidthTestReadComplete != v10 )
      Sys_Sleep(0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(s_streamDebugGlob.bandwidthTestReadEndTime - v9) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm3, xmm0, xmm0
      vmovss  xmm1, cs:__real@3a79ffff
      vdivss  xmm2, xmm1, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm2, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0D8h+optionalLoan], xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(35, "Loaded %u bytes in %f ms (%.2f MB/s)\n", v1, *(double *)&_XMM3, *(double *)&optionalLoan);
    PMem_Free(&result, "StreamerBandwidthTest", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  else
  {
    Com_PrintError(35, "Failed to allocate memory for streamer bandwidth test\n");
  }
  StreamerMemLoan::~StreamerMemLoan(&v32);
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
  __int64 v7; 
  __m256i v8; 
  __m256i v9; 
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
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+1818h+var_17B8+8], xmm0
        }
        v8.m256i_i32[6] = *((_DWORD *)p_name - 2);
        v8.m256i_i32[2] = 1;
        *(__int64 *)((char *)&v8.m256i_i64[1] + 4) = 1i64;
        v9.m256i_i64[0] = 0i64;
        v9.m256i_i32[6] = -1;
        __asm { vmovups ymm1, [rsp+1818h+var_17B8] }
        v8.m256i_i64[0] = __PAIR64__(k, j);
        v8.m256i_i32[5] = 0;
        __asm
        {
          vmovups ymm0, [rsp+1818h+var_17D8]
          vmovups ymmword ptr [rsp+1818h+params.width], ymm0
          vmovups ymmword ptr [rsp+1818h+params.customAllocFunc], ymm1
        }
        Image_GetTextureLayout_XB3(&params, &layout);
        LODWORD(v7) = k;
        Com_Printf(35, "\t%s\t%d\t%d\t%d\t%d\n", *p_name, (unsigned int)j, v7, layout.SizeBytes, layout.BaseAlignmentBytes);
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

