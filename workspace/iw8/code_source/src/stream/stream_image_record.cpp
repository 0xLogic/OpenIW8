/*
==============
Stream_ImageRecord_InitConfiguration
==============
*/

void Stream_ImageRecord_InitConfiguration(void)
{
  ?Stream_ImageRecord_InitConfiguration@@YAXXZ();
}

/*
==============
Stream_ImageRecord_SetImageDistanceAlwaysLoaded
==============
*/

void __fastcall Stream_ImageRecord_SetImageDistanceAlwaysLoaded(const unsigned int imageFlatIndex)
{
  ?Stream_ImageRecord_SetImageDistanceAlwaysLoaded@@YAXI@Z(imageFlatIndex);
}

/*
==============
Stream_ImageRecord_SetImageDistanceNotStreamed
==============
*/

void __fastcall Stream_ImageRecord_SetImageDistanceNotStreamed(const unsigned int imageIndex)
{
  ?Stream_ImageRecord_SetImageDistanceNotStreamed@@YAXI@Z(imageIndex);
}

/*
==============
Stream_ImageRecord_IsPicmipOverrideBuild
==============
*/

bool __fastcall Stream_ImageRecord_IsPicmipOverrideBuild()
{
  return ?Stream_ImageRecord_IsPicmipOverrideBuild@@YA_NXZ();
}

/*
==============
Stream_ImageRecord_GenerateRecordsForAllImages
==============
*/

void Stream_ImageRecord_GenerateRecordsForAllImages(void)
{
  ?Stream_ImageRecord_GenerateRecordsForAllImages@@YAXXZ();
}

/*
==============
Stream_ImageRecord_ErrorCleanup
==============
*/

void Stream_ImageRecord_ErrorCleanup(void)
{
  ?Stream_ImageRecord_ErrorCleanup@@YAXXZ();
}

/*
==============
Stream_ImageRecord_CopyImagePartDistances
==============
*/

void __fastcall Stream_ImageRecord_CopyImagePartDistances(const StreamSortListFrame *sortListFrame)
{
  ?Stream_ImageRecord_CopyImagePartDistances@@YAXPEBUStreamSortListFrame@@@Z(sortListFrame);
}

/*
==============
Stream_ImageRecord_ClearTracking
==============
*/

void __fastcall Stream_ImageRecord_ClearTracking(const unsigned int imageIndex)
{
  ?Stream_ImageRecord_ClearTracking@@YAXI@Z(imageIndex);
}

/*
==============
Stream_ImageRecord_Thread
==============
*/

void __fastcall __noreturn Stream_ImageRecord_Thread(unsigned int threadContext)
{
  ?Stream_ImageRecord_Thread@@YAXI@Z(threadContext);
}

/*
==============
Stream_ImageRecord_CopyCheck
==============
*/

void __fastcall Stream_ImageRecord_CopyCheck(const unsigned int fromImageIndex)
{
  ?Stream_ImageRecord_CopyCheck@@YAXI@Z(fromImageIndex);
}

/*
==============
Stream_ImageRecord_MoveTracking
==============
*/

void __fastcall Stream_ImageRecord_MoveTracking(const unsigned int fromImageIndex, const unsigned int toImageIndex)
{
  ?Stream_ImageRecord_MoveTracking@@YAXII@Z(fromImageIndex, toImageIndex);
}

/*
==============
Stream_ImageRecord_SwapTracking
==============
*/

void __fastcall Stream_ImageRecord_SwapTracking(const unsigned int fromImageIndex, const unsigned int toImageIndex)
{
  ?Stream_ImageRecord_SwapTracking@@YAXII@Z(fromImageIndex, toImageIndex);
}

/*
==============
Stream_ImageRecord_Init
==============
*/

void Stream_ImageRecord_Init(void)
{
  ?Stream_ImageRecord_Init@@YAXXZ();
}

/*
==============
Stream_ImageRecord_TriggerImageReport
==============
*/

void Stream_ImageRecord_TriggerImageReport(void)
{
  ?Stream_ImageRecord_TriggerImageReport@@YAXXZ();
}

/*
==============
Stream_ImageRecord_InputEvent
==============
*/

void Stream_ImageRecord_InputEvent(void)
{
  ?Stream_ImageRecord_InputEvent@@YAXXZ();
}

/*
==============
Stream_ImageRecord_ValidateOnRelease
==============
*/

void __fastcall Stream_ImageRecord_ValidateOnRelease(const unsigned int imageIndex)
{
  ?Stream_ImageRecord_ValidateOnRelease@@YAXI@Z(imageIndex);
}

/*
==============
Stream_ImageRecord_WaitForReportComplete
==============
*/

void Stream_ImageRecord_WaitForReportComplete(void)
{
  ?Stream_ImageRecord_WaitForReportComplete@@YAXXZ();
}

/*
==============
Stream_ImageRecord_SetImageDistancePartNotStreamed
==============
*/

void __fastcall Stream_ImageRecord_SetImageDistancePartNotStreamed(const unsigned int imageIndex, const unsigned int imagePartIndex)
{
  ?Stream_ImageRecord_SetImageDistancePartNotStreamed@@YAXII@Z(imageIndex, imagePartIndex);
}

/*
==============
Stream_ImageRecord_TriggerTimedReportIfReady
==============
*/

void Stream_ImageRecord_TriggerTimedReportIfReady(void)
{
  ?Stream_ImageRecord_TriggerTimedReportIfReady@@YAXXZ();
}

/*
==============
Stream_ImageRecord_RegisterTracking
==============
*/

void __fastcall Stream_ImageRecord_RegisterTracking(const unsigned int imageIndex, const GfxImage *image)
{
  ?Stream_ImageRecord_RegisterTracking@@YAXIPEBUGfxImage@@@Z(imageIndex, image);
}

/*
==============
Stream_ImageRecord_MarkImageLoaded
==============
*/

void __fastcall Stream_ImageRecord_MarkImageLoaded(const unsigned int imageFlatIndex)
{
  ?Stream_ImageRecord_MarkImageLoaded@@YAXI@Z(imageFlatIndex);
}

/*
==============
Stream_ImageRecord_Disable
==============
*/

void __fastcall Stream_ImageRecord_Disable(const char *reason)
{
  ?Stream_ImageRecord_Disable@@YAXPEBD@Z(reason);
}

/*
==============
Stream_GetImageFlatPartIndex
==============
*/
__int64 Stream_GetImageFlatPartIndex(const unsigned int imageIndex, const unsigned int imagePartIndex)
{
  __int64 v5; 
  __int64 v7; 
  int v8; 

  if ( imageIndex >= 0x14000 )
  {
    v8 = 81920;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, v8) )
      __debugbreak();
  }
  if ( imagePartIndex >= 4 )
  {
    LODWORD(v7) = 4;
    LODWORD(v5) = imagePartIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( IMAGE_STREAM_COUNT )", "imagePartIndex doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return imagePartIndex + 4 * imageIndex;
}

/*
==============
Stream_ImageRecord_AddImageDataRecord
==============
*/
char Stream_ImageRecord_AddImageDataRecord(const GfxImage *image, const unsigned int imageIndex)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const StreamImageRecord *v8; 
  const char *ImageName; 
  const char *name; 
  const char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  unsigned __int16 *texLength; 
  __int64 v17; 
  unsigned __int16 *p_height; 
  unsigned __int16 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  const StreamImageRecord *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  signed __int64 v37; 
  char v38; 
  __int64 v39; 
  char v40; 
  unsigned __int16 *v41; 
  __int64 v42; 
  unsigned int *highestPriorities; 
  unsigned __int16 *v44; 
  const char *v52; 
  unsigned int v53; 
  const char *v54; 
  char v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int *v59; 
  unsigned int ImageFlatPartIndex; 
  unsigned __int64 v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  unsigned int outIndex; 
  unsigned int imageIndexa; 
  const StreamImageRecord *v69; 

  imageIndexa = imageIndex;
  if ( imageIndex >= 0x14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 878, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, 81920) )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 879, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 880, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( Stream_ImageRecord_FindExistingRecord(image->name, &outIndex) )
  {
    v5 = outIndex;
    if ( outIndex >= 0x14000 )
    {
      LODWORD(v64) = 81920;
      LODWORD(v63) = outIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 884, ASSERT_TYPE_ASSERT, "(unsigned)( recordIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.record ) ) + 0 ) )", "recordIndex doesn't index ARRAY_COUNT( s_streamImageTracking.record )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    v6 = v5;
    v7 = 0x7FFFFFFFi64;
    v8 = &s_streamImageTracking.record[v6];
    v69 = v8;
    ImageName = Stream_ImageRecord_GetImageName(v8);
    name = image->name;
    v11 = ImageName;
    if ( !image->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v12 = name - v11;
    do
    {
      v13 = v11[v12];
      v14 = v7;
      v15 = *v11++;
      --v7;
      if ( !v14 )
        break;
      if ( v13 != v15 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 886, ASSERT_TYPE_ASSERT, "(!I_strcmp( image->name, Stream_ImageRecord_GetImageName( imageRecord ) ))", (const char *)&queryFormat, "!I_strcmp( image->name, Stream_ImageRecord_GetImageName( imageRecord ) )") )
          __debugbreak();
        break;
      }
    }
    while ( v13 );
    texLength = v8->texLength;
    v17 = 4i64;
    p_height = &image->streams[0].height;
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vcvttss2si rbx, xmm0
      }
      if ( (unsigned int)_RBX > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)_RBX, "unsigned", (unsigned int)_RBX) )
        __debugbreak();
      v26 = *texLength;
      if ( *texLength != (_WORD)_RBX )
      {
        if ( (unsigned int)_RBX > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)_RBX, "unsigned", (unsigned int)_RBX) )
            __debugbreak();
          v26 = *texLength;
        }
        LODWORD(v66) = (unsigned __int16)_RBX;
        LODWORD(v65) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 897, ASSERT_TYPE_ASSERT, "( imageRecord->texLength[imagePartIndex] ) == ( truncate_cast<ushort>( static_cast<uint>( Vec2Length( texSize ) ) ) )", "%s == %s\n\t%i, %i", "imageRecord->texLength[imagePartIndex]", "truncate_cast<ushort>( static_cast<uint>( Vec2Length( texSize ) ) )", v65, v66) )
          __debugbreak();
      }
      ++texLength;
      p_height += 20;
      --v17;
    }
    while ( v17 );
    v27 = (__int64)v69;
    LODWORD(v28) = outIndex;
  }
  else
  {
    if ( !Stream_ImageRecord_CreateNewRecord(image, &outIndex) )
    {
      Com_PrintError(16, "*********************************************************************************************\n");
      Com_PrintError(16, "***** Error generating image streaming report. This is a serious issue, report to code. *****\n");
      Com_PrintError(16, "*********************************************************************************************\n");
      return 0;
    }
    v30 = outIndex;
    if ( outIndex >= 0x14000 )
    {
      LODWORD(v64) = 81920;
      LODWORD(v63) = outIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 909, ASSERT_TYPE_ASSERT, "(unsigned)( recordIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.record ) ) + 0 ) )", "recordIndex doesn't index ARRAY_COUNT( s_streamImageTracking.record )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    v31 = v30;
    v32 = 0x7FFFFFFFi64;
    v33 = &s_streamImageTracking.record[v31];
    v69 = v33;
    v34 = Stream_ImageRecord_GetImageName(v33);
    v35 = image->name;
    v36 = v34;
    if ( !image->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v37 = v35 - v36;
    do
    {
      v38 = v36[v37];
      v39 = v32;
      v40 = *v36++;
      --v32;
      if ( !v39 )
        break;
      if ( v38 != v40 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 911, ASSERT_TYPE_ASSERT, "(!I_strcmp( image->name, Stream_ImageRecord_GetImageName( imageRecord ) ))", (const char *)&queryFormat, "!I_strcmp( image->name, Stream_ImageRecord_GetImageName( imageRecord ) )") )
          __debugbreak();
        break;
      }
    }
    while ( v38 );
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 830, ASSERT_TYPE_ASSERT, "(imageRecord)", (const char *)&queryFormat, "imageRecord") )
      __debugbreak();
    v41 = &image->streams[0].height;
    v42 = 4i64;
    highestPriorities = v33->highestPriorities;
    v44 = v33->texLength;
    do
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
      *highestPriorities = -1;
      __asm
      {
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcvttss2si rbx, xmm2
      }
      if ( (unsigned int)_RBX > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)_RBX, "unsigned", (unsigned int)_RBX) )
        __debugbreak();
      *v44 = _RBX;
      ++highestPriorities;
      ++v44;
      v41 += 20;
      --v42;
    }
    while ( v42 );
    v28 = outIndex;
    v27 = (__int64)v69;
    if ( outIndex >= 0x14000 )
    {
      LODWORD(v64) = 81920;
      LODWORD(v63) = outIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 740, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.record ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_streamImageTracking.record )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    v52 = Stream_ImageRecord_GetImageName(&s_streamImageTracking.record[v28]);
    v53 = 0;
    v54 = v52;
    if ( v52 )
    {
      v55 = *v52;
      if ( v55 )
      {
        do
        {
          ++v54;
          v53 = v55 + 31 * v53;
          v55 = *v54;
        }
        while ( *v54 );
      }
    }
    v56 = v53 % 0x14009;
    if ( v53 % 0x14009 >= 0x14009 )
    {
      LODWORD(v64) = 81929;
      LODWORD(v63) = v53 % 0x14009;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 748, ASSERT_TYPE_ASSERT, "(unsigned)( hashTableIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.recordHashTable ) ) + 0 ) )", "hashTableIndex doesn't index ARRAY_COUNT( s_streamImageTracking.recordHashTable )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    s_streamImageTracking.record[v28].nextHash = s_streamImageTracking.recordHashTable[v56];
    s_streamImageTracking.recordHashTable[v56] = v28;
  }
  v57 = imageIndexa;
  v58 = 0;
  v59 = (unsigned int *)(v27 + 8);
  do
  {
    ImageFlatPartIndex = Stream_GetImageFlatPartIndex(v57, v58);
    v61 = ImageFlatPartIndex;
    if ( ImageFlatPartIndex >= 0x50000 )
    {
      LODWORD(v64) = 327680;
      LODWORD(v63) = ImageFlatPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 939, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "flatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    if ( (unsigned int)v61 >> 5 >= 0x2800 )
    {
      LODWORD(v64) = 10240;
      LODWORD(v63) = (unsigned int)v61 >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 940, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "flatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    if ( !s_streamImageTracking.curHighestPriority[v61] )
    {
      LODWORD(v65) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 943, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.curHighestPriority[flatIndex] ) != ( S_STREAM_IMAGE_REPORT_INVALID )", "%s != %s\n\t%i, %i", "s_streamImageTracking.curHighestPriority[flatIndex]", "S_STREAM_IMAGE_REPORT_INVALID", v65, 0i64) )
        __debugbreak();
    }
    Stream_GetImageFlatPartIndex(v57, v58);
    if ( s_streamImageTracking.curHighestPriority[v61] == 1 )
    {
      LODWORD(v66) = 1;
      LODWORD(v65) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 948, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.curHighestPriority[flatIndex] ) != ( S_STREAM_IMAGE_REPORT_NOT_STREAMED )", "%s != %s\n\t%i, %i", "s_streamImageTracking.curHighestPriority[flatIndex]", "S_STREAM_IMAGE_REPORT_NOT_STREAMED", v65, v66) )
        __debugbreak();
    }
    if ( *v59 == 1 && s_streamImageTracking.curHighestPriority[v61] != 1 )
    {
      LODWORD(v66) = 1;
      LODWORD(v65) = s_streamImageTracking.curHighestPriority[v61];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 957, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.curHighestPriority[flatIndex] ) == ( S_STREAM_IMAGE_REPORT_NOT_STREAMED )", "%s == %s\n\t%i, %i", "s_streamImageTracking.curHighestPriority[flatIndex]", "S_STREAM_IMAGE_REPORT_NOT_STREAMED", v65, v66) )
        __debugbreak();
    }
    v62 = s_streamImageTracking.curHighestPriority[v61];
    if ( v62 < *v59 )
    {
      *v59 = v62;
      if ( (unsigned int)v28 >> 5 >= 0xA00 )
      {
        LODWORD(v64) = 2560;
        LODWORD(v63) = (unsigned int)v28 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( recordIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.recordDirty ) ) + 0 ) )", "recordIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.recordDirty )\n\t%i not in [0, %i)", v63, v64) )
          __debugbreak();
      }
      s_streamImageTracking.recordDirty[(unsigned __int64)(unsigned int)v28 >> 5] |= 0x80000000 >> (v28 & 0x1F);
    }
    ++v58;
    ++v59;
    s_streamImageTracking.curReportedImages[v61 >> 5] |= 0x80000000 >> (v61 & 0x1F);
  }
  while ( v58 < 4 );
  return 1;
}

/*
==============
Stream_ImageRecord_AllowCollection
==============
*/
char Stream_ImageRecord_AllowCollection()
{
  const dvar_t *v0; 
  const char *v1; 
  _BYTE *integer64; 

  if ( s_streamImageTracking.systemDisabled )
    return 0;
  v0 = DVARBOOL_stream_imagePriorityTracking;
  if ( !DVARBOOL_stream_imagePriorityTracking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityTracking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
  {
    if ( !s_streamImageTracking.systemDisabled )
    {
      v1 = "tracking disabled";
LABEL_15:
      Com_Printf(16, "ImageReporting: Disabled: '%s'\n", v1);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( !createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 236, ASSERT_TYPE_ASSERT, "(createfx)", (const char *)&queryFormat, "createfx") )
    __debugbreak();
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( integer64 && *integer64 )
  {
    if ( !s_streamImageTracking.systemDisabled )
    {
      v1 = "LSTTOTKPNP";
      goto LABEL_15;
    }
LABEL_16:
    s_streamImageTracking.systemDisabled = 1;
    return 0;
  }
  return 1;
}

/*
==============
Stream_ImageRecord_AllowReporting
==============
*/
bool Stream_ImageRecord_AllowReporting()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_stream_imagePriorityReporting;
  if ( !DVARBOOL_stream_imagePriorityReporting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityReporting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && s_streamImageTracking.transferredPrioritiesSinceLastReport && Stream_ImageRecord_AllowCollection();
}

/*
==============
Stream_ImageRecord_CheckPriority
==============
*/
void Stream_ImageRecord_CheckPriority(const unsigned int imageIndex)
{
  __int64 v2; 
  unsigned int *v3; 
  unsigned int *v4; 
  unsigned int *v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  if ( imageIndex >= 0x14000 )
  {
    v9 = 81920;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, v9) )
      __debugbreak();
  }
  v2 = 4 * imageIndex;
  if ( s_streamImageTracking.curHighestPriority[v2] < 2 )
  {
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    v3 = &s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 1)];
    if ( *v3 )
    {
      if ( imageIndex >= 0x14000 )
      {
        LODWORD(v8) = 81920;
        LODWORD(v6) = imageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( *v3 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 500, ASSERT_TYPE_ASSERT, "(( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED ))", (const char *)&queryFormat, "( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED )") )
        __debugbreak();
    }
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    v4 = &s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 2)];
    if ( *v4 )
    {
      if ( imageIndex >= 0x14000 )
      {
        LODWORD(v8) = 81920;
        LODWORD(v6) = imageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( *v4 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 501, ASSERT_TYPE_ASSERT, "(( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED ))", (const char *)&queryFormat, "( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED )") )
        __debugbreak();
    }
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    v5 = &s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 3)];
    if ( *v5 )
    {
      if ( imageIndex >= 0x14000 )
      {
        LODWORD(v8) = 81920;
        LODWORD(v6) = imageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( *v5 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 502, ASSERT_TYPE_ASSERT, "(( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED ))", (const char *)&queryFormat, "( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] == S_STREAM_IMAGE_REPORT_NOT_STREAMED )") )
        goto LABEL_52;
    }
  }
  else
  {
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( !s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 1)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 506, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] != S_STREAM_IMAGE_REPORT_INVALID)", (const char *)&queryFormat, "s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_LOW )] != S_STREAM_IMAGE_REPORT_INVALID") )
      __debugbreak();
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( !s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 2)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 507, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] != S_STREAM_IMAGE_REPORT_INVALID)", (const char *)&queryFormat, "s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_MIDDLE )] != S_STREAM_IMAGE_REPORT_INVALID") )
      __debugbreak();
    if ( imageIndex >= 0x14000 )
    {
      LODWORD(v8) = 81920;
      LODWORD(v6) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( !s_streamImageTracking.curHighestPriority[(unsigned int)(v2 + 3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 508, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] != S_STREAM_IMAGE_REPORT_INVALID)", (const char *)&queryFormat, "s_streamImageTracking.curHighestPriority[Stream_GetImageFlatPartIndex( imageIndex, IMAGE_STREAM_HIGH )] != S_STREAM_IMAGE_REPORT_INVALID") )
LABEL_52:
      __debugbreak();
  }
}

/*
==============
Stream_ImageRecord_CheckReportGeneratingState
==============
*/
char Stream_ImageRecord_CheckReportGeneratingState()
{
  char result; 
  volatile int writeImagePriorityReportState; 
  int v2; 

  result = s_streamImageTracking.writeImagePriorityReportState;
  if ( s_streamImageTracking.writeImagePriorityReportState != 1 )
  {
    v2 = 1;
    writeImagePriorityReportState = s_streamImageTracking.writeImagePriorityReportState;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1427, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.writeImagePriorityReportState ) == ( STREAM_IMAGE_REPORT_GENERATING_DATA )", "%s == %s\n\t%i, %i", "s_streamImageTracking.writeImagePriorityReportState", "STREAM_IMAGE_REPORT_GENERATING_DATA", writeImagePriorityReportState, v2);
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Stream_ImageRecord_ClearTracking
==============
*/
void Stream_ImageRecord_ClearTracking(const unsigned int imageIndex)
{
  unsigned int v2; 
  unsigned int ImageFlatPartIndex; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    v2 = 0;
    do
    {
      ImageFlatPartIndex = Stream_GetImageFlatPartIndex(imageIndex, v2);
      v4 = ImageFlatPartIndex;
      if ( ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v8) = 327680;
        LODWORD(v7) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "flatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >> 5 >= 0x2800 )
      {
        LODWORD(v8) = 10240;
        LODWORD(v7) = (unsigned int)v4 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 614, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "flatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      s_streamImageTracking.curHighestPriority[v4] = 0;
      v5 = v4 >> 5;
      ++v2;
      v6 = ~(0x80000000 >> (v4 & 0x1F));
      s_streamImageTracking.curLoadedImages[v5] &= v6;
      s_streamImageTracking.curReportedImages[v5] &= v6;
    }
    while ( v2 < 4 );
    Stream_ImageRecord_CheckPriority(imageIndex);
  }
}

/*
==============
Stream_ImageRecord_CommitRecords
==============
*/

void __fastcall Stream_ImageRecord_CommitRecords(double _XMM0_8)
{
  const dvar_t *v1; 
  unsigned __int64 v2; 
  unsigned int v3; 
  unsigned int *recordHashTable; 
  __int64 i; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int integer; 
  char *fmt; 
  char *fmta; 
  __int64 v17; 
  StreamImageReportHeader r_header; 

  if ( Stream_ImageRecord_AllowReporting() && s_streamImageTracking.recordCount )
  {
    Com_Printf(16, "ImageReporting: Starting commit of %i records\n", s_streamImageTracking.recordCount);
    Stream_ImageRecord_ReportLocalFile();
    if ( !BB_IsInitializedAndActive() )
      goto LABEL_18;
    v1 = DVARBOOL_stream_imagePriorityUseBlackbox;
    if ( !DVARBOOL_stream_imagePriorityUseBlackbox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityUseBlackbox") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      v2 = __rdtsc();
      r_header = (StreamImageReportHeader)3;
      LODWORD(v17) = s_streamImageTracking.reportIndex;
      LODWORD(fmt) = 0;
      Com_Printf(16, "ImageReporting: Starting Blackbox Report. Version %i, Plat %u, Build %u, Report %i\n", (unsigned __int16)(LOBYTE(s_streamImageTracking.dataVersionNum) + 256), 3i64, fmt, v17);
      v3 = 0;
      if ( s_streamImageTracking.recordCount )
      {
        while ( Stream_ImageRecord_AllowReporting() )
        {
          if ( !Stream_ImageRecord_ReportImageToBlackbox(v3, &s_streamImageTracking.record[v3], &r_header) )
          {
            Com_PrintError(16, "*********************************************************************************************\n");
            Com_PrintError(16, "***** Error generating image streaming report. This is a serious issue, report to code. *****\n");
            Com_PrintError(16, "*********************************************************************************************\n");
            goto LABEL_15;
          }
          if ( ++v3 >= s_streamImageTracking.recordCount )
            goto LABEL_15;
        }
        Com_Printf(16, "ImageReporting: Aborted blackbox report due to system being turned off\n");
      }
LABEL_15:
      BB_NetworkFlush();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(__rdtsc() - v2) < 0 )
        __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      LODWORD(fmta) = s_streamImageTracking.recordNameBufIndex;
      Com_Printf(16, "ImageReporting: Blackbox Report took %f ms. Storage: %i records using %i bytes.\n", *(double *)&_XMM2, s_streamImageTracking.recordCount, fmta);
    }
    else
    {
LABEL_18:
      Com_Printf(16, "ImageReporting: Blackbox Report Disabled.\n");
    }
  }
  else
  {
    Com_Printf(16, "ImageReporting: Skipped commit of %i records\n", s_streamImageTracking.recordCount);
  }
  recordHashTable = s_streamImageTracking.recordHashTable;
  for ( i = 81929i64; i; --i )
    *recordHashTable++ = -1;
  memset_0(s_streamImageTracking.recordDirty, 0, sizeof(s_streamImageTracking.recordDirty));
  s_streamImageTracking.recordCount = 0;
  s_streamImageTracking.recordNameBufIndex = 0;
  *(_WORD *)&s_streamImageTracking.transferredPrioritiesSinceLastReport = 0;
  DebugWipe(s_streamImageTracking.record, 0x280000ui64);
  DebugWipe(s_streamImageTracking.recordNameBuf, 0x500000ui64);
  v12 = DVARINT_stream_imagePriorityReportDelay;
  if ( !DVARINT_stream_imagePriorityReportDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityReportDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer <= 0 )
  {
    s_streamImageTracking.nextTimedReport = 0;
  }
  else
  {
    v13 = DVARINT_stream_imagePriorityReportDelay;
    if ( !DVARINT_stream_imagePriorityReportDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityReportDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    s_streamImageTracking.nextTimedReport = 1000 * integer + Sys_Milliseconds();
  }
}

/*
==============
Stream_ImageRecord_CopyCheck
==============
*/
void Stream_ImageRecord_CopyCheck(const unsigned int fromImageIndex)
{
  unsigned int i; 
  unsigned int ImageFlatPartIndex; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    for ( i = 0; i < 4; ++i )
    {
      ImageFlatPartIndex = Stream_GetImageFlatPartIndex(fromImageIndex, i);
      v4 = ImageFlatPartIndex;
      if ( ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v6) = 327680;
        LODWORD(v5) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 642, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "flatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( s_streamImageTracking.curHighestPriority[v4] != 1 )
      {
        LODWORD(v8) = 1;
        LODWORD(v7) = s_streamImageTracking.curHighestPriority[v4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 643, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.curHighestPriority[flatIndex] ) == ( S_STREAM_IMAGE_REPORT_NOT_STREAMED )", "%s == %s\n\t%i, %i", "s_streamImageTracking.curHighestPriority[flatIndex]", "S_STREAM_IMAGE_REPORT_NOT_STREAMED", v7, v8) )
          __debugbreak();
      }
    }
  }
}

/*
==============
Stream_ImageRecord_CopyImagePartDistances
==============
*/
void Stream_ImageRecord_CopyImagePartDistances(const StreamSortListFrame *sortListFrame)
{
  unsigned int v2; 
  unsigned int *mValueSet; 
  unsigned int i; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    s_streamImageTracking.transferredPrioritiesSinceLastReport = 1;
    if ( !sortListFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 439, ASSERT_TYPE_ASSERT, "(sortListFrame != nullptr)", (const char *)&queryFormat, "sortListFrame != nullptr") )
      __debugbreak();
    v2 = 0;
    mValueSet = sortListFrame->imagePartDistance.mValueSet;
    do
    {
      for ( i = *mValueSet; i; i &= ~v6 )
      {
        v5 = __lzcnt(i);
        v6 = 1 << ((31 - v5) & 0x1F);
        v7 = v2 + 31 - v5;
        if ( v7 >= 0x50000 )
        {
          LODWORD(v9) = 327680;
          LODWORD(v8) = v2 + 31 - v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        Stream_ImageRecord_CopyImagePartIteratorCallback(v7, sortListFrame->imagePartDistance.mDistances[v7]);
      }
      v2 += 32;
      ++mValueSet;
    }
    while ( v2 < 0x50000 );
  }
}

/*
==============
Stream_ImageRecord_CopyImagePartIteratorCallback
==============
*/
void Stream_ImageRecord_CopyImagePartIteratorCallback(const unsigned int imagePartIndex, const StreamDistance distSq)
{
  __int64 v2; 
  unsigned int mValue; 

  v2 = imagePartIndex;
  mValue = distSq.mValue;
  if ( distSq.mValue == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 419, ASSERT_TYPE_ASSERT, "(distSq.IsSet())", (const char *)&queryFormat, "distSq.IsSet()") )
    __debugbreak();
  if ( mValue < s_streamImageTracking.curHighestPriority[v2] )
  {
    if ( mValue < 3 )
      mValue = 3;
    s_streamImageTracking.curHighestPriority[v2] = mValue;
  }
}

/*
==============
Stream_ImageRecord_CreateNewRecord
==============
*/
char Stream_ImageRecord_CreateNewRecord(const GfxImage *image, unsigned int *outRecordIndex)
{
  __int64 recordCount; 
  const char *name; 
  char result; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 788, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !outRecordIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 789, ASSERT_TYPE_ASSERT, "(outRecordIndex)", (const char *)&queryFormat, "outRecordIndex") )
    __debugbreak();
  recordCount = s_streamImageTracking.recordCount;
  name = image->name;
  if ( s_streamImageTracking.recordCount == 81920 )
  {
    Com_PrintError(16, "ImageReporting: Not enough record slots. %s is being dropped.\n", name);
    result = 0;
    *outRecordIndex = 0;
  }
  else
  {
    v7 = -1i64;
    v8 = 5242880 - s_streamImageTracking.recordNameBufIndex;
    do
      ++v7;
    while ( name[v7] );
    if ( (unsigned int)v7 < v8 )
    {
      ++s_streamImageTracking.recordCount;
      if ( (unsigned int)recordCount >= 0x14000 )
      {
        LODWORD(v10) = recordCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 811, ASSERT_TYPE_ASSERT, "(unsigned)( newRecordIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.record ) ) + 0 ) )", "newRecordIndex doesn't index ARRAY_COUNT( s_streamImageTracking.record )\n\t%i not in [0, %i)", v10, 81920) )
          __debugbreak();
      }
      if ( s_streamImageTracking.recordNameBufIndex >= 0x500000 )
      {
        LODWORD(v11) = 5242880;
        LODWORD(v10) = s_streamImageTracking.recordNameBufIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 814, ASSERT_TYPE_ASSERT, "(unsigned)( s_streamImageTracking.recordNameBufIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.recordNameBuf ) ) + 0 ) )", "s_streamImageTracking.recordNameBufIndex doesn't index ARRAY_COUNT( s_streamImageTracking.recordNameBuf )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      Core_strcpy(&s_streamImageTracking.recordNameBuf[s_streamImageTracking.recordNameBufIndex], v8, image->name);
      s_streamImageTracking.record[recordCount].imageNameOffset = s_streamImageTracking.recordNameBufIndex;
      v9 = s_streamImageTracking.recordNameBufIndex + v7 + 1;
      s_streamImageTracking.recordNameBufIndex = v9;
      if ( v9 > 0x500000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 821, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.recordNameBufIndex ) <= ( sizeof( s_streamImageTracking.recordNameBuf ) )", "%s <= %s\n\t%i, %i", "s_streamImageTracking.recordNameBufIndex", "sizeof( s_streamImageTracking.recordNameBuf )", v9, 5242880) )
        __debugbreak();
      *outRecordIndex = recordCount;
      return 1;
    }
    else
    {
      Com_PrintError(16, "ImageReporting: Not enough string buffer space. %s is being dropped.\n", name);
      result = 0;
      *outRecordIndex = 0;
    }
  }
  return result;
}

/*
==============
Stream_ImageRecord_Disable
==============
*/
void Stream_ImageRecord_Disable(const char *reason)
{
  if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 288, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
    __debugbreak();
  if ( !s_streamImageTracking.systemDisabled )
    Com_Printf(16, "ImageReporting: Disabled: '%s'\n", reason);
  s_streamImageTracking.systemDisabled = 1;
}

/*
==============
Stream_ImageRecord_EnumCallback
==============
*/
void Stream_ImageRecord_EnumCallback(XAssetHeader header, void *data)
{
  unsigned int GfxImageIndex; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  GfxImageIndex = DB_GetGfxImageIndex(header.image);
  v4 = GfxImageIndex;
  if ( GfxImageIndex >= 0x14000 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1487, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( IMAGE_POOL_SIZE )", "index doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", GfxImageIndex, 81920) )
      __debugbreak();
    LODWORD(v7) = 81920;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v5 = s_streamImageTracking.curHighestPriority[4 * v4];
  Stream_ImageRecord_CheckPriority(v4);
  if ( v5 < 2 )
  {
    if ( ((__int64)header.physicsLibrary[1].name & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 864, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", "%s\n\tAll streamed images should be reported", "!R_IsStreamedImage( image )") )
      __debugbreak();
  }
  else
  {
    if ( ((__int64)header.physicsLibrary[1].name & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 868, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", "%s\n\tAll reported images should be streamed", "R_IsStreamedImage( image )") )
      __debugbreak();
    Stream_ImageRecord_AddImageDataRecord(header.image, v4);
  }
}

/*
==============
Stream_ImageRecord_ErrorCleanup
==============
*/
void Stream_ImageRecord_ErrorCleanup(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1595, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_streamImageTracking.writeImagePriorityOwnerThread == Sys_GetCurrentThreadId() && s_streamImageTracking.writeImagePriorityReportState == 1 )
    Stream_ImageRecord_TriggerImageReport();
}

/*
==============
Stream_ImageRecord_FindExistingRecord
==============
*/
char Stream_ImageRecord_FindExistingRecord(const char *imageName, unsigned int *outIndex)
{
  unsigned int v4; 
  char v5; 
  const char *v6; 
  unsigned int v7; 
  unsigned int i; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  const char *v12; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  __int64 v18; 
  __int64 v19; 

  if ( !imageName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 759, ASSERT_TYPE_ASSERT, "(imageName)", (const char *)&queryFormat, "imageName") )
    __debugbreak();
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 760, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  v4 = 0;
  if ( imageName )
  {
    v5 = *imageName;
    if ( *imageName )
    {
      v6 = imageName;
      do
      {
        ++v6;
        v4 = v5 + 31 * v4;
        v5 = *v6;
      }
      while ( *v6 );
    }
  }
  v7 = v4 % 0x14009;
  if ( v4 % 0x14009 >= 0x14009 )
  {
    LODWORD(v18) = v4 % 0x14009;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 766, ASSERT_TYPE_ASSERT, "(unsigned)( hashTableIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.recordHashTable ) ) + 0 ) )", "hashTableIndex doesn't index ARRAY_COUNT( s_streamImageTracking.recordHashTable )\n\t%i not in [0, %i)", v18, 81929) )
      __debugbreak();
  }
  for ( i = s_streamImageTracking.recordHashTable[v7]; i != -1; i = s_streamImageTracking.record[v10].nextHash )
  {
    if ( i >= 0x14000 )
    {
      LODWORD(v19) = 81920;
      LODWORD(v18) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 771, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.record ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_streamImageTracking.record )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v9 = 0x7FFFFFFFi64;
    v10 = i;
    v11 = imageName;
    v12 = Stream_ImageRecord_GetImageName(&s_streamImageTracking.record[v10]);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !imageName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v13 = v12 - imageName;
    while ( 1 )
    {
      v14 = v11[v13];
      v15 = v9;
      v16 = *v11++;
      --v9;
      if ( !v15 )
      {
LABEL_29:
        *outIndex = i;
        return 1;
      }
      if ( v14 != v16 )
        break;
      if ( !v14 )
        goto LABEL_29;
    }
  }
  *outIndex = -1;
  return 0;
}

/*
==============
Stream_ImageRecord_GenerateRecordsForAllImages
==============
*/

void __fastcall Stream_ImageRecord_GenerateRecordsForAllImages(double _XMM0_8)
{
  unsigned int recordCount; 
  const dvar_t *v2; 
  __int64 v3; 
  unsigned int *curHighestPriority; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  char *fmt; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    Stream_ImageRecord_CheckReportGeneratingState();
    recordCount = s_streamImageTracking.recordCount;
    __rdtsc();
    Sys_ProfBeginNamedEvent(0xFF9ACD32, "Stream_ImageRecord_GenerateRecordsForAllImages");
    DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_ImageRecord_EnumCallback, NULL, 1);
    v2 = DVARBOOL_stream_imagePriorityResetOnGenerate;
    if ( !DVARBOOL_stream_imagePriorityResetOnGenerate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityResetOnGenerate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = 0i64;
      curHighestPriority = s_streamImageTracking.curHighestPriority;
      v5 = 327680i64;
      do
      {
        v6 = *curHighestPriority;
        if ( *curHighestPriority >= 3 )
        {
          v7 = v3 + 1;
          *curHighestPriority = -1;
          if ( v6 == -1 )
            v7 = v3;
          v3 = v7;
        }
        ++curHighestPriority;
        --v5;
      }
      while ( v5 );
      Com_Printf(16, "ImageReporting: Reset highest priority latch for %i images.\n", v3);
    }
    Sys_ProfEndNamedEvent();
    __rdtsc();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtss2sd xmm3, xmm2, xmm2
    }
    LODWORD(fmt) = s_streamImageTracking.recordCount - recordCount;
    __asm { vmovq   r9, xmm3 }
    Com_Printf(16, "ImageReporting: Generated new reports. %d kb remaining. Spent %f ms to generate %i records\n", (5242880 - (unsigned __int64)s_streamImageTracking.recordNameBufIndex) >> 10, *(double *)&_XMM3, fmt);
  }
  else
  {
    Com_Printf(16, "ImageReporting: Not generating report, collection disabled\n");
  }
}

/*
==============
Stream_ImageRecord_GetImageName
==============
*/
char *Stream_ImageRecord_GetImageName(const StreamImageRecord *imageRecord)
{
  __int64 v3; 

  if ( !imageRecord && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 398, ASSERT_TYPE_ASSERT, "(imageRecord)", (const char *)&queryFormat, "imageRecord") )
    __debugbreak();
  if ( imageRecord->imageNameOffset >= s_streamImageTracking.recordNameBufIndex )
  {
    LODWORD(v3) = imageRecord->imageNameOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( imageRecord->imageNameOffset ) < (unsigned)( s_streamImageTracking.recordNameBufIndex )", "imageRecord->imageNameOffset doesn't index s_streamImageTracking.recordNameBufIndex\n\t%i not in [0, %i)", v3, s_streamImageTracking.recordNameBufIndex) )
      __debugbreak();
  }
  return &s_streamImageTracking.recordNameBuf[imageRecord->imageNameOffset];
}

/*
==============
Stream_ImageRecord_Init
==============
*/
void Stream_ImageRecord_Init(void)
{
  unsigned int *curHighestPriority; 
  __int64 i; 
  unsigned int *recordHashTable; 
  __int64 j; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 342, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(&s_streamImageTracking, 0, sizeof(s_streamImageTracking));
  curHighestPriority = s_streamImageTracking.curHighestPriority;
  for ( i = 327680i64; i; --i )
    *curHighestPriority++ = 0;
  recordHashTable = s_streamImageTracking.recordHashTable;
  for ( j = 81929i64; j; --j )
    *recordHashTable++ = -1;
  memset_0(s_streamImageTracking.recordDirty, 0, sizeof(s_streamImageTracking.recordDirty));
  if ( s_streamImageTracking.systemDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 354, ASSERT_TYPE_ASSERT, "(!s_streamImageTracking.systemDisabled)", (const char *)&queryFormat, "!s_streamImageTracking.systemDisabled") )
    __debugbreak();
  DebugWipe(s_streamImageTracking.record, 0x280000ui64);
  DebugWipe(s_streamImageTracking.recordNameBuf, 0x500000ui64);
}

/*
==============
Stream_ImageRecord_InitConfiguration
==============
*/
void Stream_ImageRecord_InitConfiguration(void)
{
  const RawFile *rawfile; 
  const char *v1; 
  char *data_p[2]; 
  char buf[256]; 

  s_streamImageTracking.dataVersionNum = 0;
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "imagereport.txt", 0).rawfile;
  if ( rawfile )
  {
    Com_BeginParseSession("imagereport.txt");
    DB_GetRawBuffer(rawfile, buf, 256);
    data_p[0] = buf;
    v1 = Com_Parse((const char **)data_p);
    if ( !I_strcmp(v1, "version") )
      s_streamImageTracking.dataVersionNum = Com_ParseInt((const char **)data_p);
    Com_EndParseSession();
  }
}

/*
==============
Stream_ImageRecord_InputEvent
==============
*/
void Stream_ImageRecord_InputEvent(void)
{
  s_streamImageTracking.receivedInputSinceLastReport = 1;
}

/*
==============
Stream_ImageRecord_IsPicmipOverrideBuild
==============
*/
_BOOL8 Stream_ImageRecord_IsPicmipOverrideBuild()
{
  return s_streamImageTracking.picmipOverrideBuild;
}

/*
==============
Stream_ImageRecord_MarkImageLoaded
==============
*/
void Stream_ImageRecord_MarkImageLoaded(const unsigned int imageFlatIndex)
{
  unsigned __int64 v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  int v5; 

  v1 = imageFlatIndex;
  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( (unsigned int)v1 >= 0x50000 )
    {
      v5 = 327680;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 484, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "imageFlatIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v3, v5) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >> 5 >= 0x2800 )
    {
      LODWORD(v4) = 10240;
      LODWORD(v2) = (unsigned int)v1 >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 485, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "imageFlatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v2, v4) )
        __debugbreak();
    }
    s_streamImageTracking.curLoadedImages[v1 >> 5] |= 0x80000000 >> (v1 & 0x1F);
  }
}

/*
==============
Stream_ImageRecord_MoveTracking
==============
*/
void Stream_ImageRecord_MoveTracking(const unsigned int fromImageIndex, const unsigned int toImageIndex)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned __int64 ImageFlatPartIndex; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int *v23; 

  v2 = toImageIndex;
  v3 = fromImageIndex;
  if ( Stream_ImageRecord_AllowCollection() )
  {
    v4 = 0;
    do
    {
      ImageFlatPartIndex = (unsigned int)Stream_GetImageFlatPartIndex(v3, v4);
      v6 = Stream_GetImageFlatPartIndex(v2, v4);
      v7 = v6;
      if ( v6 >= 0x50000 )
      {
        LODWORD(v20) = 327680;
        LODWORD(v19) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( toFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "toFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( (unsigned int)ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v20) = 327680;
        LODWORD(v19) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 686, ASSERT_TYPE_ASSERT, "(unsigned)( fromFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "fromFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v8 = (unsigned int)v7 >> 5;
      if ( (unsigned int)v7 >> 5 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = (unsigned int)v7 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 687, ASSERT_TYPE_ASSERT, "(unsigned)( toFlatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "toFlatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v9 = (unsigned int)ImageFlatPartIndex >> 5;
      if ( (unsigned int)ImageFlatPartIndex >> 5 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = (unsigned int)ImageFlatPartIndex >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 688, ASSERT_TYPE_ASSERT, "(unsigned)( fromFlatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "fromFlatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v23 = &s_streamImageTracking.curHighestPriority[ImageFlatPartIndex];
      s_streamImageTracking.curHighestPriority[v7] = *v23;
      if ( v8 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = (unsigned int)v7 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex >> 5 ) < (unsigned)( bitArraySize )", "toIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( v9 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = (unsigned int)ImageFlatPartIndex >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex >> 5 ) < (unsigned)( bitArraySize )", "fromIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v10 = v7 >> 5;
      v11 = ImageFlatPartIndex >> 5;
      v12 = 0x80000000 >> (ImageFlatPartIndex & 0x1F);
      v13 = 0x80000000 >> (v7 & 0x1F);
      v14 = s_streamImageTracking.curLoadedImages[v7 >> 5];
      if ( (v12 & s_streamImageTracking.curLoadedImages[v11]) != 0 )
        v15 = v13 | v14;
      else
        v15 = ~v13 & v14;
      s_streamImageTracking.curLoadedImages[v10] = v15;
      if ( v8 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = (unsigned int)v7 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex >> 5 ) < (unsigned)( bitArraySize )", "toIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( v9 >= 0x2800 )
      {
        LODWORD(v20) = 10240;
        LODWORD(v19) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex >> 5 ) < (unsigned)( bitArraySize )", "fromIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v16 = s_streamImageTracking.curReportedImages[v10];
      if ( (v12 & s_streamImageTracking.curReportedImages[v11]) != 0 )
        v17 = v13 | v16;
      else
        v17 = ~v13 & v16;
      v2 = toImageIndex;
      v18 = ~v12;
      v3 = fromImageIndex;
      ++v4;
      s_streamImageTracking.curReportedImages[v10] = v17;
      *v23 = 0;
      s_streamImageTracking.curLoadedImages[v11] &= v18;
      s_streamImageTracking.curReportedImages[v11] &= v18;
    }
    while ( v4 < 4 );
    Stream_ImageRecord_CheckPriority(fromImageIndex);
    Stream_ImageRecord_CheckPriority(toImageIndex);
  }
}

/*
==============
Stream_ImageRecord_RegisterTracking
==============
*/
void Stream_ImageRecord_RegisterTracking(const unsigned int imageIndex, const GfxImage *image)
{
  unsigned int v3; 
  unsigned int ImageFlatPartIndex; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 570, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( imageIndex >= 0x14000 )
    {
      v11 = 81920;
      LODWORD(v8) = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v8, v11) )
        __debugbreak();
    }
    v3 = 0;
    do
    {
      ImageFlatPartIndex = Stream_GetImageFlatPartIndex(imageIndex, v3);
      v5 = ImageFlatPartIndex;
      if ( ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v10) = 327680;
        LODWORD(v8) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "flatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v8, v10) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >> 5 >= 0x2800 )
      {
        LODWORD(v10) = 10240;
        LODWORD(v8) = (unsigned int)v5 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 590, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "flatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v8, v10) )
          __debugbreak();
        LODWORD(v12) = 10240;
        LODWORD(v9) = (unsigned int)v5 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 591, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curReportedImages ) ) + 0 ) )", "flatIndex >> 5 doesn't index ARRAY_COUNT( s_streamImageTracking.curReportedImages )\n\t%i not in [0, %i)", v9, v12) )
          __debugbreak();
      }
      s_streamImageTracking.curHighestPriority[v5] = -1;
      v6 = v5 >> 5;
      ++v3;
      v7 = ~(0x80000000 >> (v5 & 0x1F));
      s_streamImageTracking.curLoadedImages[v6] &= v7;
      s_streamImageTracking.curReportedImages[v6] &= v7;
    }
    while ( v3 < 4 );
    Stream_ImageRecord_CheckPriority(imageIndex);
  }
}

/*
==============
Stream_ImageRecord_ReportImageToBlackbox
==============
*/
char Stream_ImageRecord_ReportImageToBlackbox(unsigned int recordIndex, StreamImageRecord *imageRecord, const StreamImageReportHeader *r_header)
{
  const StreamImageReportHeader *v3; 
  StreamImageRecord *v4; 
  const dvar_t *v5; 
  int buildId; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  char *ImageName; 
  BB_PRINT_REASON v16; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int reportIndex; 
  int v35; 
  int platId; 
  int v40; 

  v3 = r_header;
  v4 = imageRecord;
  if ( !imageRecord && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1176, ASSERT_TYPE_ASSERT, "(imageRecord)", (const char *)&queryFormat, "imageRecord") )
    __debugbreak();
  v40 = 3000;
  while ( 2 )
  {
    v5 = DVARBOOL_stream_imagePriorityReporting;
    if ( !DVARBOOL_stream_imagePriorityReporting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityReporting") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled || !s_streamImageTracking.transferredPrioritiesSinceLastReport || !Stream_ImageRecord_AllowCollection() )
    {
      Com_Printf(16, "ImageReporting: Aborted blackbox report due to system being turned off\n");
      return 0;
    }
    if ( !BB_IsInitializedAndActive() )
    {
      Com_PrintWarning(16, "ImageReporting: Failed to report to blackbox, it was deactivated.\n");
      return 0;
    }
    buildId = (unsigned __int8)v3->buildId;
    v7 = v4->highestPriorities[3];
    v8 = v4->texLength[3];
    v9 = v4->highestPriorities[2];
    v10 = v4->texLength[2];
    v11 = v4->highestPriorities[1];
    v12 = v4->texLength[1];
    v13 = v4->highestPriorities[0];
    v14 = v4->texLength[0];
    v35 = buildId;
    reportIndex = s_streamImageTracking.reportIndex;
    platId = (unsigned __int8)r_header->platId;
    ImageName = Stream_ImageRecord_GetImageName(imageRecord);
    LODWORD(v33) = 0;
    LODWORD(v32) = v7;
    LODWORD(v31) = v8;
    LODWORD(v30) = 0;
    LODWORD(v29) = v9;
    LODWORD(v28) = v10;
    LODWORD(v27) = 0;
    LODWORD(v26) = v11;
    LODWORD(v25) = v12;
    LODWORD(v24) = 0;
    LODWORD(v23) = v13;
    LODWORD(v22) = v14;
    LODWORD(v21) = recordIndex;
    LODWORD(v20) = reportIndex;
    LODWORD(v19) = v35;
    LODWORD(v18) = platId;
    v16 = BB_Print(-1, "stream_image_priorities", "version %i name %s platform %u build %u report_id %u sequence_id %u size_base %i pri_base %u load_base %i size_low %i pri_low %u load_low %i size_mid %i pri_mid %u load_mid %i size_hi %i pri_hi %u load_hi %i", (unsigned __int16)(LOBYTE(s_streamImageTracking.dataVersionNum) + 256), ImageName, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
    switch ( v16 )
    {
      case eIDLE:
        return 1;
      case eNEW:
      case eREMOTE_WAITING_FOR_MMING_TOKEN:
        if ( --v40 )
        {
          Sys_Sleep(50);
          v4 = imageRecord;
          v3 = r_header;
          continue;
        }
        Com_PrintError(16, "ImageReporting: Failed to report to blackbox, timed out (%i)\n", (unsigned int)v16);
        return 0;
      case eADDING_LOCAL_PLAYER_TO_DW:
      case eREADY:
      case eUPDATING:
      case eREADY_TO_REMOVE:
        Com_PrintWarning(16, "ImageReporting: Failed to report to blackbox, uninitialized (%i)\n", (unsigned int)v16);
        return 0;
      default:
        LODWORD(v18) = v16;
        v4 = imageRecord;
        v3 = r_header;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1261, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown state '%i'", v18) )
          __debugbreak();
        continue;
    }
  }
}

/*
==============
Stream_ImageRecord_ReportLocalFile
==============
*/

void __fastcall Stream_ImageRecord_ReportLocalFile(double _XMM0_8)
{
  unsigned __int64 v1; 
  int v2; 
  __int64 v3; 
  unsigned int v4; 
  StreamImageRecord *v5; 
  unsigned int v6; 
  int v7; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  char *ImageName; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned __int64 v36; 
  unsigned int v37; 
  StreamImageRecord *imageRecord; 
  char dest[256]; 

  v1 = __rdtsc();
  v36 = v1;
  Com_sprintf(dest, 0x100ui64, "%s%s", "image_streaming_data", ".csv");
  if ( !s_streamImageTracking.rotatedLogFile )
  {
    FS_FRotate(dest);
    s_streamImageTracking.rotatedLogFile = 1;
  }
  if ( s_streamImageTracking.reportFile.handle.handle != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1085, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.reportFile == INVALID_FILE_HANDLE)", (const char *)&queryFormat, "s_streamImageTracking.reportFile == INVALID_FILE_HANDLE") )
    __debugbreak();
  FS_FOpenFileByMode(dest, &s_streamImageTracking.reportFile, FS_APPEND);
  if ( s_streamImageTracking.reportFile.handle.handle == -1 )
  {
    Com_PrintWarning(16, "ImageReporting: Failed to open log file: %s\n", dest);
  }
  else
  {
    Com_Printf(15, "ImageReporting: Reporting to log file: %s\n", dest);
    LODWORD(v25) = 0;
    LODWORD(fmt) = 3;
    v2 = Com_sprintf(s_streamImageTracking.writeScratchBuffer, 0x19400ui64, "#Version %i Platform %u Build %u\n\n%s", (unsigned __int16)(LOBYTE(s_streamImageTracking.dataVersionNum) + 256), fmt, v25, "name,size_base,pri_base,size_low,pri_low,size_mid,pri_mid,size_hi,pri_hi\n");
    if ( v2 >= 0 )
    {
      v3 = FS_Write(s_streamImageTracking.writeScratchBuffer, v2, s_streamImageTracking.reportFile);
      if ( v3 > 0 )
      {
        v35 = 0;
        v33 = 0;
        v4 = 0;
        v37 = s_streamImageTracking.recordCount / 0xA + 1;
        if ( s_streamImageTracking.recordCount )
        {
          v34 = 0;
          while ( 1 )
          {
            v5 = &s_streamImageTracking.record[v4];
            imageRecord = v5;
            v6 = v5->highestPriorities[3];
            v7 = v5->texLength[3];
            v8 = v5->highestPriorities[2];
            v9 = v5->texLength[2];
            v10 = v5->highestPriorities[1];
            v11 = v5->texLength[1];
            v12 = v5->highestPriorities[0];
            LODWORD(v5) = v5->texLength[0];
            ImageName = Stream_ImageRecord_GetImageName(imageRecord);
            LODWORD(v32) = v6;
            LODWORD(v31) = v7;
            LODWORD(v30) = v8;
            LODWORD(v29) = v9;
            LODWORD(v28) = v10;
            LODWORD(v27) = v11;
            LODWORD(v26) = v12;
            LODWORD(fmta) = (_DWORD)v5;
            v14 = Com_sprintf(&s_streamImageTracking.writeScratchBuffer[v33], 103424 - v33, "%s,%u,%u,%u,%u,%u,%u,%u,%u\n", ImageName, fmta, v26, v27, v28, v29, v30, v31, v32);
            if ( v14 < 0 )
              break;
            v15 = v14 + v33;
            v33 = v15;
            if ( v15 > 0x19400 )
            {
              LODWORD(v29) = 103424;
              LODWORD(v28) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1158, ASSERT_TYPE_ASSERT, "( outWriteBufferIndex + writtenStrLen ) <= ( writeBufferCapacity )", "%s <= %s\n\t%i, %i", "outWriteBufferIndex + writtenStrLen", "writeBufferCapacity", v28, v29) )
                __debugbreak();
            }
            if ( v15 > 0x19000 )
            {
              if ( s_streamImageTracking.reportFile.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1302, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.reportFile)", (const char *)&queryFormat, "s_streamImageTracking.reportFile") )
                __debugbreak();
              v16 = FS_Write(s_streamImageTracking.writeScratchBuffer, v15, s_streamImageTracking.reportFile);
              if ( v16 <= 0 )
              {
                Com_PrintWarning(16, "ImageReporting: Failed to write to file (%llx)\n", v16);
                Com_PrintError(16, "*********************************************************************************************\n");
                Com_PrintError(16, "***** Error generating image streaming report. This is a serious issue, report to code. *****\n");
                Com_PrintError(16, "*********************************************************************************************\n");
                goto LABEL_30;
              }
              v33 = 0;
            }
            if ( v35 && !(v35 % v37) )
              Com_Printf(16, "ImageReporting: Reporting to log file: %u %% complete\n", v34 / s_streamImageTracking.recordCount);
            v34 += 100;
            v4 = v35 + 1;
            v35 = v4;
            if ( v4 >= s_streamImageTracking.recordCount )
              goto LABEL_30;
          }
          Com_PrintWarning(16, "ImageReporting: Out of buffer space for sprintf\n");
          Com_PrintError(16, "*********************************************************************************************\n");
          Com_PrintError(16, "***** Error generating image streaming report. This is a serious issue, report to code. *****\n");
          Com_PrintError(16, "*********************************************************************************************\n");
        }
LABEL_30:
        v1 = v36;
      }
      else
      {
        Com_PrintWarning(16, "ImageReporting: Failed to write header string to file (%llx)\n", v3);
      }
    }
    else
    {
      Com_PrintWarning(16, "ImageReporting: Failed to generate header data\n");
    }
    if ( s_streamImageTracking.reportFile.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1101, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.reportFile)", (const char *)&queryFormat, "s_streamImageTracking.reportFile") )
      __debugbreak();
    FS_FCloseFile(s_streamImageTracking.reportFile);
    s_streamImageTracking.reportFile.handle.handle = -1i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - v1) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm { vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
    LODWORD(v27) = s_streamImageTracking.recordNameBufIndex;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm1, xmm1
    }
    LODWORD(v26) = s_streamImageTracking.recordCount;
    __asm { vmovsd  [rsp+1C8h+fmt], xmm2 }
    Com_Printf(16, "ImageReporting: WriteRecords ver %i id %i took %f ms. %i records using %i bytes.\n", (unsigned __int16)(LOBYTE(s_streamImageTracking.dataVersionNum) + 256), s_streamImageTracking.reportIndex, *(double *)&fmtb, v26, v27);
  }
}

/*
==============
Stream_ImageRecord_SetImageDistanceAlwaysLoaded
==============
*/
void Stream_ImageRecord_SetImageDistanceAlwaysLoaded(const unsigned int imageFlatIndex)
{
  __int64 v1; 
  unsigned int v2; 
  bool v3; 
  unsigned int *v4; 
  GfxImage *GfxImageAtIndex; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 

  v1 = imageFlatIndex;
  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( (unsigned int)v1 >= 0x50000 )
    {
      v11 = 327680;
      v7 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 554, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "imageFlatIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v7, v11) )
        __debugbreak();
      LODWORD(v12) = 327680;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 555, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "imageFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v8, v12) )
        __debugbreak();
      LODWORD(v13) = 327680;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "flatIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v9, v13) )
        __debugbreak();
    }
    v2 = (unsigned int)v1 >> 2;
    if ( (unsigned int)v1 >= 0x50000 )
    {
      LODWORD(v10) = 327680;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "flatIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v6, v10) )
        __debugbreak();
    }
    Stream_GetImageFlatPartIndex(v2, v1 & 3);
    v3 = s_streamImageTracking.curHighestPriority[v1] == 1;
    v4 = &s_streamImageTracking.curHighestPriority[v1];
    if ( v3 )
    {
      GfxImageAtIndex = DB_GetGfxImageAtIndex(v2);
      v14 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 561, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[imageFlatIndex] != S_STREAM_IMAGE_REPORT_NOT_STREAMED)", "%s\n\tImage %s mip %i is not streamed but is now marked always loaded", "s_streamImageTracking.curHighestPriority[imageFlatIndex] != S_STREAM_IMAGE_REPORT_NOT_STREAMED", GfxImageAtIndex->name, v14) )
        __debugbreak();
    }
    *v4 = 2;
  }
}

/*
==============
Stream_ImageRecord_SetImageDistanceNotStreamed
==============
*/
void Stream_ImageRecord_SetImageDistanceNotStreamed(const unsigned int imageIndex)
{
  unsigned int i; 
  unsigned int ImageFlatPartIndex; 
  __int64 v4; 
  unsigned int v5; 
  GfxImage *GfxImageAtIndex; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( imageIndex >= 0x14000 )
    {
      v10 = 81920;
      v8 = imageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v8, v10) )
        __debugbreak();
    }
    for ( i = 0; i < 4; ++i )
    {
      if ( Stream_ImageRecord_AllowCollection() )
      {
        if ( imageIndex >= 0x14000 )
        {
          LODWORD(v9) = 81920;
          LODWORD(v7) = imageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 519, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v7, v9) )
            __debugbreak();
        }
        ImageFlatPartIndex = Stream_GetImageFlatPartIndex(imageIndex, i);
        v4 = ImageFlatPartIndex;
        if ( ImageFlatPartIndex >= 0x50000 )
        {
          LODWORD(v9) = 327680;
          LODWORD(v7) = ImageFlatPartIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "imageFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v7, v9) )
            __debugbreak();
        }
        v5 = s_streamImageTracking.curHighestPriority[v4];
        if ( v5 != -1 )
        {
          GfxImageAtIndex = DB_GetGfxImageAtIndex(imageIndex);
          LODWORD(v12) = v5;
          LODWORD(v11) = imageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 526, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[imageFlatIndex] == S_STREAM_IMAGE_REPORT_LOWEST_PRIORITY)", "%s\n\tImage %s mip %i is getting marked as not streamed but it has a priority set (%i)", "s_streamImageTracking.curHighestPriority[imageFlatIndex] == S_STREAM_IMAGE_REPORT_LOWEST_PRIORITY", GfxImageAtIndex->name, v11, v12) )
            __debugbreak();
        }
        s_streamImageTracking.curHighestPriority[v4] = 1;
      }
    }
    Stream_ImageRecord_CheckPriority(imageIndex);
  }
}

/*
==============
Stream_ImageRecord_SetImageDistancePartNotStreamed
==============
*/
void Stream_ImageRecord_SetImageDistancePartNotStreamed(const unsigned int imageIndex, const unsigned int imagePartIndex)
{
  unsigned int ImageFlatPartIndex; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int *v7; 
  GfxImage *GfxImageAtIndex; 
  __int64 v9; 
  __int64 v10; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( imageIndex >= 0x14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 519, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, 81920) )
      __debugbreak();
    if ( imagePartIndex >= 4 )
    {
      LODWORD(v10) = 4;
      LODWORD(v9) = imagePartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( IMAGE_STREAM_COUNT )", "imagePartIndex doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    ImageFlatPartIndex = Stream_GetImageFlatPartIndex(imageIndex, imagePartIndex);
    v5 = ImageFlatPartIndex;
    if ( ImageFlatPartIndex >= 0x50000 )
    {
      LODWORD(v10) = 327680;
      LODWORD(v9) = ImageFlatPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( imageFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "imageFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = s_streamImageTracking.curHighestPriority[v5];
    v7 = &s_streamImageTracking.curHighestPriority[v5];
    if ( v6 != -1 )
    {
      GfxImageAtIndex = DB_GetGfxImageAtIndex(imageIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 526, ASSERT_TYPE_ASSERT, "(s_streamImageTracking.curHighestPriority[imageFlatIndex] == S_STREAM_IMAGE_REPORT_LOWEST_PRIORITY)", "%s\n\tImage %s mip %i is getting marked as not streamed but it has a priority set (%i)", "s_streamImageTracking.curHighestPriority[imageFlatIndex] == S_STREAM_IMAGE_REPORT_LOWEST_PRIORITY", GfxImageAtIndex->name, imageIndex, v6) )
        __debugbreak();
    }
    *v7 = 1;
  }
}

/*
==============
Stream_ImageRecord_SwapTracking
==============
*/
void Stream_ImageRecord_SwapTracking(const unsigned int fromImageIndex, const unsigned int toImageIndex)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int i; 
  unsigned __int64 ImageFlatPartIndex; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 

  v2 = toImageIndex;
  v3 = fromImageIndex;
  if ( Stream_ImageRecord_AllowCollection() )
  {
    for ( i = 0; i < 4; ++i )
    {
      ImageFlatPartIndex = (unsigned int)Stream_GetImageFlatPartIndex(v3, i);
      v6 = Stream_GetImageFlatPartIndex(v2, i);
      v7 = v6;
      if ( v6 >= 0x50000 )
      {
        LODWORD(v25) = 327680;
        LODWORD(v24) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 660, ASSERT_TYPE_ASSERT, "(unsigned)( toFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "toFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( (unsigned int)ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v25) = 327680;
        LODWORD(v24) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 661, ASSERT_TYPE_ASSERT, "(unsigned)( fromFlatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "fromFlatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v8 = s_streamImageTracking.curHighestPriority[v7];
      v9 = (unsigned int)v7 >> 5;
      s_streamImageTracking.curHighestPriority[v7] = s_streamImageTracking.curHighestPriority[ImageFlatPartIndex];
      s_streamImageTracking.curHighestPriority[ImageFlatPartIndex] = v8;
      if ( (unsigned int)v7 >> 5 >= 0x2800 )
      {
        LODWORD(v25) = 10240;
        LODWORD(v24) = (unsigned int)v7 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex >> 5 ) < (unsigned)( bitArraySize )", "toIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( (unsigned int)ImageFlatPartIndex >> 5 >= 0x2800 )
      {
        LODWORD(v25) = 10240;
        LODWORD(v24) = (unsigned int)ImageFlatPartIndex >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 146, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex >> 5 ) < (unsigned)( bitArraySize )", "fromIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v10 = v7 >> 5;
      v11 = ImageFlatPartIndex >> 5;
      v12 = s_streamImageTracking.curLoadedImages[v7 >> 5];
      v13 = 0x80000000 >> (v7 & 0x1F);
      v14 = v13 & v12;
      v15 = 0x80000000 >> (ImageFlatPartIndex & 0x1F);
      if ( (v15 & s_streamImageTracking.curLoadedImages[ImageFlatPartIndex >> 5]) != 0 )
        v16 = v13 | v12;
      else
        v16 = ~v13 & v12;
      s_streamImageTracking.curLoadedImages[v10] = v16;
      v17 = s_streamImageTracking.curLoadedImages[v11];
      if ( v14 )
        v18 = v15 | v17;
      else
        v18 = ~v15 & v17;
      s_streamImageTracking.curLoadedImages[v11] = v18;
      if ( v9 >= 0x2800 )
      {
        LODWORD(v25) = 10240;
        LODWORD(v24) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex >> 5 ) < (unsigned)( bitArraySize )", "toIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( (unsigned int)ImageFlatPartIndex >> 5 >= 0x2800 )
      {
        LODWORD(v25) = 10240;
        LODWORD(v24) = (unsigned int)ImageFlatPartIndex >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 146, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex >> 5 ) < (unsigned)( bitArraySize )", "fromIndex >> 5 doesn't index bitArraySize\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v19 = s_streamImageTracking.curReportedImages[v10];
      v20 = v13 & v19;
      if ( (v15 & s_streamImageTracking.curReportedImages[v11]) != 0 )
        v21 = v13 | v19;
      else
        v21 = ~v13 & v19;
      s_streamImageTracking.curReportedImages[v10] = v21;
      v22 = s_streamImageTracking.curReportedImages[v11];
      if ( v20 )
        v23 = v15 | v22;
      else
        v23 = ~v15 & v22;
      v2 = toImageIndex;
      v3 = fromImageIndex;
      s_streamImageTracking.curReportedImages[v11] = v23;
    }
  }
}

/*
==============
Stream_ImageRecord_Thread
==============
*/
void __noreturn Stream_ImageRecord_Thread(unsigned int threadContext)
{
  double v1; 
  int v3; 

  if ( threadContext != 27 )
  {
    v3 = 27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1610, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_IMAGE_RECORD )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_IMAGE_RECORD", threadContext, v3) )
      __debugbreak();
  }
  while ( 1 )
  {
    Sys_WaitForImageTrackingWake();
    if ( ((unsigned int)&s_streamImageTracking.writeImagePriorityReportState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 3, 2) == 2 )
    {
      Stream_ImageRecord_CommitRecords(v1);
      if ( ((unsigned int)&s_streamImageTracking.writeImagePriorityReportState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 0, 3) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1620, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_IDLE, STREAM_IMAGE_REPORT_PENDING ) == STREAM_IMAGE_REPORT_PENDING)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_IDLE, STREAM_IMAGE_REPORT_PENDING ) == STREAM_IMAGE_REPORT_PENDING") )
        __debugbreak();
      s_streamImageTracking.writeImagePriorityOwnerThread = 0;
    }
  }
}

/*
==============
Stream_ImageRecord_TriggerImageReport
==============
*/
void Stream_ImageRecord_TriggerImageReport(void)
{
  unsigned __int64 v0; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    Stream_ImageRecord_CheckReportGeneratingState();
    v0 = (unsigned __int64)&s_streamImageTracking.writeImagePriorityReportState & 3;
    if ( s_streamImageTracking.recordCount )
    {
      ++s_streamImageTracking.reportIndex;
      Com_Printf(16, "ImageReporting: Triggering a report for %d records\n", s_streamImageTracking.recordCount);
      if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 2, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1555, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_QUEUED, STREAM_IMAGE_REPORT_GENERATING_DATA ) == STREAM_IMAGE_REPORT_GENERATING_DATA)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_QUEUED, STREAM_IMAGE_REPORT_GENERATING_DATA ) == STREAM_IMAGE_REPORT_GENERATING_DATA") )
        __debugbreak();
      Sys_WakeImageTrackingThread();
    }
    else
    {
      Com_Printf(16, "ImageReporting: Not triggering report, no records\n");
      if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1546, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_IDLE, STREAM_IMAGE_REPORT_GENERATING_DATA ) == STREAM_IMAGE_REPORT_GENERATING_DATA)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_streamImageTracking.writeImagePriorityReportState, STREAM_IMAGE_REPORT_IDLE, STREAM_IMAGE_REPORT_GENERATING_DATA ) == STREAM_IMAGE_REPORT_GENERATING_DATA") )
        __debugbreak();
      s_streamImageTracking.writeImagePriorityOwnerThread = 0;
    }
  }
  else
  {
    Com_Printf(16, "ImageReporting: Not triggering report, collection disabled\n");
  }
}

/*
==============
Stream_ImageRecord_TriggerTimedReportIfReady
==============
*/

void __fastcall Stream_ImageRecord_TriggerTimedReportIfReady(double _XMM0_8)
{
  unsigned int recordCount; 
  const dvar_t *v2; 
  __int64 v3; 
  unsigned int *curHighestPriority; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  char *fmt; 

  if ( !Stream_IsBeginScreenUpdateFrameThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1564, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread()") )
    __debugbreak();
  if ( Stream_ImageRecord_AllowCollection() && s_streamImageTracking.receivedInputSinceLastReport && s_streamImageTracking.nextTimedReport && s_streamImageTracking.nextTimedReport - Sys_Milliseconds() <= 0 && Stream_ImageRecord_TryAcquireReportOwnership() )
  {
    if ( Stream_ImageRecord_AllowCollection() )
    {
      Stream_ImageRecord_CheckReportGeneratingState();
      recordCount = s_streamImageTracking.recordCount;
      __rdtsc();
      Sys_ProfBeginNamedEvent(0xFF9ACD32, "Stream_ImageRecord_GenerateRecordsForAllImages");
      DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_ImageRecord_EnumCallback, NULL, 1);
      v2 = DVARBOOL_stream_imagePriorityResetOnGenerate;
      if ( !DVARBOOL_stream_imagePriorityResetOnGenerate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_imagePriorityResetOnGenerate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
      {
        v3 = 0i64;
        curHighestPriority = s_streamImageTracking.curHighestPriority;
        v5 = 327680i64;
        do
        {
          v6 = *curHighestPriority;
          if ( *curHighestPriority >= 3 )
          {
            v7 = v3 + 1;
            *curHighestPriority = -1;
            if ( v6 == -1 )
              v7 = v3;
            v3 = v7;
          }
          ++curHighestPriority;
          --v5;
        }
        while ( v5 );
        Com_Printf(16, "ImageReporting: Reset highest priority latch for %i images.\n", v3);
      }
      Sys_ProfEndNamedEvent();
      __rdtsc();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
        vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtss2sd xmm3, xmm2, xmm2
      }
      LODWORD(fmt) = s_streamImageTracking.recordCount - recordCount;
      __asm { vmovq   r9, xmm3 }
      Com_Printf(16, "ImageReporting: Generated new reports. %d kb remaining. Spent %f ms to generate %i records\n", (5242880 - (unsigned __int64)s_streamImageTracking.recordNameBufIndex) >> 10, *(double *)&_XMM3, fmt);
    }
    else
    {
      Com_Printf(16, "ImageReporting: Not generating report, collection disabled\n");
    }
    Stream_ImageRecord_TriggerImageReport();
  }
}

/*
==============
Stream_ImageRecord_TryAcquireReportOwnership
==============
*/
char Stream_ImageRecord_TryAcquireReportOwnership()
{
  if ( ((unsigned __int8)&s_streamImageTracking.writeImagePriorityReportState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 1, 0) )
    return 0;
  s_streamImageTracking.writeImagePriorityOwnerThread = Sys_GetCurrentThreadId();
  return 1;
}

/*
==============
Stream_ImageRecord_ValidateOnRelease
==============
*/
void Stream_ImageRecord_ValidateOnRelease(const unsigned int imageIndex)
{
  unsigned int i; 
  unsigned int ImageFlatPartIndex; 
  unsigned __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( Stream_ImageRecord_AllowCollection() )
  {
    for ( i = 0; i < 4; ++i )
    {
      ImageFlatPartIndex = Stream_GetImageFlatPartIndex(imageIndex, i);
      v4 = ImageFlatPartIndex;
      if ( ImageFlatPartIndex >= 0x50000 )
      {
        LODWORD(v7) = 327680;
        LODWORD(v6) = ImageFlatPartIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 717, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curHighestPriority ) ) + 0 ) )", "flatIndex doesn't index ARRAY_COUNT( s_streamImageTracking.curHighestPriority )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( s_streamImageTracking.curHighestPriority[v4] >= 2 )
      {
        LODWORD(v6) = s_streamImageTracking.curHighestPriority[v4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 718, ASSERT_TYPE_ASSERT, "( ( ( s_streamImageTracking.curHighestPriority[flatIndex] == S_STREAM_IMAGE_REPORT_INVALID ) || ( s_streamImageTracking.curHighestPriority[flatIndex] == S_STREAM_IMAGE_REPORT_NOT_STREAMED ) ) )", "( s_streamImageTracking.curHighestPriority[flatIndex] ) = %i", v6) )
          __debugbreak();
      }
      s_streamImageTracking.curHighestPriority[v4] = 0;
      if ( (unsigned int)v4 >> 5 >= 0x2800 )
      {
        LODWORD(v7) = 10240;
        LODWORD(v6) = (unsigned int)v4 >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 723, ASSERT_TYPE_ASSERT, "(unsigned)( ( flatIndex >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( s_streamImageTracking.curLoadedImages ) ) + 0 ) )", "( flatIndex >> 5 ) doesn't index ARRAY_COUNT( s_streamImageTracking.curLoadedImages )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      v5 = 0x80000000 >> (v4 & 0x1F);
      if ( (v5 & s_streamImageTracking.curLoadedImages[v4 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 724, ASSERT_TYPE_ASSERT, "(( s_streamImageTracking.curLoadedImages[flatIndex >> 5] & BitShiftMasked( flatIndex ) ) == 0)", (const char *)&queryFormat, "( s_streamImageTracking.curLoadedImages[flatIndex >> 5] & BitShiftMasked( flatIndex ) ) == 0") )
        __debugbreak();
      if ( (v5 & s_streamImageTracking.curReportedImages[v4 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 725, ASSERT_TYPE_ASSERT, "(( s_streamImageTracking.curReportedImages[flatIndex >> 5] & BitShiftMasked( flatIndex ) ) == 0)", (const char *)&queryFormat, "( s_streamImageTracking.curReportedImages[flatIndex >> 5] & BitShiftMasked( flatIndex ) ) == 0") )
        __debugbreak();
    }
    Stream_ImageRecord_CheckPriority(imageIndex);
  }
}

/*
==============
Stream_ImageRecord_WaitForReportComplete
==============
*/
void Stream_ImageRecord_WaitForReportComplete(void)
{
  int v0; 
  int v1; 
  threadId_t writeImagePriorityOwnerThread; 
  threadId_t CurrentThreadId; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1445, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Stream_ImageRecord_AllowCollection() )
  {
    if ( !Stream_ImageRecord_TryAcquireReportOwnership() )
    {
      v0 = Sys_Milliseconds();
      Com_Printf(16, "ImageReporting: Waiting for previous report\n");
      do
      {
        BB_Update();
        BB_PumpTasks();
        Sys_CheckQuitRequest();
        Sys_Sleep(1);
        if ( ((unsigned __int64)&s_streamImageTracking.writeImagePriorityReportState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamImageTracking.writeImagePriorityReportState) )
          __debugbreak();
      }
      while ( _InterlockedCompareExchange(&s_streamImageTracking.writeImagePriorityReportState, 1, 0) );
      s_streamImageTracking.writeImagePriorityOwnerThread = Sys_GetCurrentThreadId();
      v1 = Sys_Milliseconds();
      Com_Printf(16, "ImageReporting: WaitForReportComplete BLOCKED for %d milliseconds!\n", (unsigned int)(v1 - v0));
    }
    Stream_ImageRecord_CheckReportGeneratingState();
    if ( s_streamImageTracking.writeImagePriorityOwnerThread != Sys_GetCurrentThreadId() )
    {
      CurrentThreadId = Sys_GetCurrentThreadId();
      writeImagePriorityOwnerThread = s_streamImageTracking.writeImagePriorityOwnerThread;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_image_record.cpp", 1480, ASSERT_TYPE_ASSERT, "( s_streamImageTracking.writeImagePriorityOwnerThread ) == ( Sys_GetCurrentThreadId() )", "%s == %s\n\t%i, %i", "s_streamImageTracking.writeImagePriorityOwnerThread", "Sys_GetCurrentThreadId()", writeImagePriorityOwnerThread, CurrentThreadId) )
        __debugbreak();
    }
  }
}

