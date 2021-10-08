/*
==============
Stream_IsYielding
==============
*/

bool __fastcall Stream_IsYielding()
{
  return ?Stream_IsYielding@@YA_NXZ();
}

/*
==============
Stream_UpdateClientFrame
==============
*/

void Stream_UpdateClientFrame(void)
{
  ?Stream_UpdateClientFrame@@YAXXZ();
}

/*
==============
Stream_CalculateForced
==============
*/

void __fastcall Stream_CalculateForced(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  ?Stream_CalculateForced@@YAXPEA_K0@Z(imageBytesOut, meshBytesOut);
}

/*
==============
Streamer_StatusPrint
==============
*/

void Streamer_StatusPrint(const char *formatString, ...)
{
  ?Streamer_StatusPrint@@YAXPEBDZZ(formatString);
}

/*
==============
Stream_SetItemXPakPosition
==============
*/

void __fastcall Stream_SetItemXPakPosition(StreamItemType itemType, unsigned int itemIndex, unsigned int xpakIndex, unsigned __int64 xpakOffset)
{
  ?Stream_SetItemXPakPosition@@YAXW4StreamItemType@@II_K@Z(itemType, itemIndex, xpakIndex, xpakOffset);
}

/*
==============
Stream_PushSyncDisable
==============
*/

void Stream_PushSyncDisable(void)
{
  ?Stream_PushSyncDisable@@YAXXZ();
}

/*
==============
Stream_GetForcedState
==============
*/

StreamForcedState __fastcall Stream_GetForcedState()
{
  return ?Stream_GetForcedState@@YA?AW4StreamForcedState@@XZ();
}

/*
==============
Stream_ReleaseAboveLimitLOD
==============
*/

void Stream_ReleaseAboveLimitLOD(void)
{
  ?Stream_ReleaseAboveLimitLOD@@YAXXZ();
}

/*
==============
StreamFrontendGlob::StreamFrontendGlob
==============
*/

void __fastcall StreamFrontendGlob::StreamFrontendGlob(StreamFrontendGlob *this)
{
  ??0StreamFrontendGlob@@QEAA@XZ(this);
}

/*
==============
Stream_CalculateForcedAndLoaded
==============
*/

void __fastcall Stream_CalculateForcedAndLoaded(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  ?Stream_CalculateForcedAndLoaded@@YAXPEA_K0@Z(imageBytesOut, meshBytesOut);
}

/*
==============
Stream_IsInitialized
==============
*/

bool __fastcall Stream_IsInitialized()
{
  return ?Stream_IsInitialized@@YA_NXZ();
}

/*
==============
Stream_CalculateScriptForced
==============
*/

void __fastcall Stream_CalculateScriptForced(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  ?Stream_CalculateScriptForced@@YAXPEA_K0@Z(imageBytesOut, meshBytesOut);
}

/*
==============
Stream_IsEnabled
==============
*/

bool __fastcall Stream_IsEnabled()
{
  return ?Stream_IsEnabled@@YA_NXZ();
}

/*
==============
Stream_LoadQuality_Image
==============
*/

double __fastcall Stream_LoadQuality_Image()
{
  double result; 

  *(float *)&result = ?Stream_LoadQuality_Image@@YAMXZ();
  return result;
}

/*
==============
Stream_PopRequestYield
==============
*/

void Stream_PopRequestYield(void)
{
  ?Stream_PopRequestYield@@YAXXZ();
}

/*
==============
Stream_CheckFrontendUpdateLocks
==============
*/

void Stream_CheckFrontendUpdateLocks(void)
{
  ?Stream_CheckFrontendUpdateLocks@@YAXXZ();
}

/*
==============
Stream_ResetImageQualitySmoothing
==============
*/

void Stream_ResetImageQualitySmoothing(void)
{
  ?Stream_ResetImageQualitySmoothing@@YAXXZ();
}

/*
==============
Stream_Init
==============
*/

void Stream_Init(void)
{
  ?Stream_Init@@YAXXZ();
}

/*
==============
Stream_PopSyncDisable
==============
*/

void Stream_PopSyncDisable(void)
{
  ?Stream_PopSyncDisable@@YAXXZ();
}

/*
==============
Stream_ClearValidityBits
==============
*/

void Stream_ClearValidityBits(void)
{
  ?Stream_ClearValidityBits@@YAXXZ();
}

/*
==============
ScopedTempReleaseStreamerFrontendLock::~ScopedTempReleaseStreamerFrontendLock
==============
*/

void __fastcall ScopedTempReleaseStreamerFrontendLock::~ScopedTempReleaseStreamerFrontendLock(ScopedTempReleaseStreamerFrontendLock *this)
{
  ??1ScopedTempReleaseStreamerFrontendLock@@QEAA@XZ(this);
}

/*
==============
Stream_CalculateLoadingCounts
==============
*/

void __fastcall Stream_CalculateLoadingCounts(unsigned int *images, unsigned int *meshes, unsigned int *generics)
{
  ?Stream_CalculateLoadingCounts@@YAXPEAI00@Z(images, meshes, generics);
}

/*
==============
Stream_CanStreamMore
==============
*/

bool __fastcall Stream_CanStreamMore()
{
  return ?Stream_CanStreamMore@@YA_NXZ();
}

/*
==============
ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock
==============
*/

void __fastcall ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(ScopedStreamFrontendUpdateLock *this)
{
  ??1ScopedStreamFrontendUpdateLock@@QEAA@XZ(this);
}

/*
==============
Stream_GetMemoryStats
==============
*/

void __fastcall Stream_GetMemoryStats(StreamFrontendMemoryStats *outStats)
{
  ?Stream_GetMemoryStats@@YAXAEAUStreamFrontendMemoryStats@@@Z(outStats);
}

/*
==============
Stream_HandleComError
==============
*/

void Stream_HandleComError(void)
{
  ?Stream_HandleComError@@YAXXZ();
}

/*
==============
Stream_UseXModelStreamTree
==============
*/

bool __fastcall Stream_UseXModelStreamTree()
{
  return ?Stream_UseXModelStreamTree@@YA_NXZ();
}

/*
==============
ScopedTempReleaseStreamerFrontendLock::ScopedTempReleaseStreamerFrontendLock
==============
*/

void __fastcall ScopedTempReleaseStreamerFrontendLock::ScopedTempReleaseStreamerFrontendLock(ScopedTempReleaseStreamerFrontendLock *this)
{
  ??0ScopedTempReleaseStreamerFrontendLock@@QEAA@XZ(this);
}

/*
==============
Stream_Shutdown
==============
*/

void Stream_Shutdown(void)
{
  ?Stream_Shutdown@@YAXXZ();
}

/*
==============
Stream_PushRequestYield
==============
*/

void Stream_PushRequestYield(void)
{
  ?Stream_PushRequestYield@@YAXXZ();
}

/*
==============
Stream_ValidateXPakPosition
==============
*/

void __fastcall Stream_ValidateXPakPosition(const unsigned int position)
{
  ?Stream_ValidateXPakPosition@@YAXI@Z(position);
}

/*
==============
Stream_LoadQuality_Mesh
==============
*/

double __fastcall Stream_LoadQuality_Mesh()
{
  double result; 

  *(float *)&result = ?Stream_LoadQuality_Mesh@@YAMXZ();
  return result;
}

/*
==============
ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock
==============
*/

void __fastcall ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(ScopedStreamFrontendUpdateLock *this)
{
  ??0ScopedStreamFrontendUpdateLock@@QEAA@XZ(this);
}

/*
==============
Stream_SyncThenFlush
==============
*/

void Stream_SyncThenFlush(void)
{
  ?Stream_SyncThenFlush@@YAXXZ();
}

/*
==============
Stream_IsYieldingRequested
==============
*/

bool __fastcall Stream_IsYieldingRequested()
{
  return ?Stream_IsYieldingRequested@@YA_NXZ();
}

/*
==============
Stream_GetSModelCollectionLodMaskFromXModelStreamTree
==============
*/

unsigned int __fastcall Stream_GetSModelCollectionLodMaskFromXModelStreamTree(unsigned int smodelCollectionIndex)
{
  return ?Stream_GetSModelCollectionLodMaskFromXModelStreamTree@@YAII@Z(smodelCollectionIndex);
}

/*
==============
ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock
==============
*/
void ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(ScopedStreamFrontendUpdateLock *this)
{
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 203, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 204, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
}

/*
==============
ScopedTempReleaseStreamerFrontendLock::ScopedTempReleaseStreamerFrontendLock
==============
*/
void ScopedTempReleaseStreamerFrontendLock::ScopedTempReleaseStreamerFrontendLock(ScopedTempReleaseStreamerFrontendLock *this)
{
  Stream_CheckFrontendUpdateLocks();
  Sys_LeaveCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
}

/*
==============
StreamFrontendGlob::StreamFrontendGlob
==============
*/
void StreamFrontendGlob::StreamFrontendGlob(StreamFrontendGlob *this)
{
  StreamFrontendGlob *v2; 
  __int64 v3; 
  StreamSortDistanceTracked<46080> *p_materialDistance; 
  __int64 v5; 
  StreamSortDistanceTracked<81920> *p_imageDistance; 
  __int64 v7; 
  __int64 v8; 
  StreamDistanceHintTracker<81920> *p_imageDistanceHint; 
  FastCriticalSection *p_mCS; 
  bitarray<245760> *p_specialImagesTable; 
  __int64 v12; 
  __int64 v13; 
  FastCriticalSectionScopeWrite v14; 
  FastCriticalSectionScopeWrite v15; 
  FastCriticalSectionScopeWrite v16; 

  v13 = -2i64;
  memset_0(this, 0, 0x18000ui64);
  v2 = this;
  v3 = 24576i64;
  do
  {
    StreamDistance::StreamDistance(v2->modelDistance.mDistances);
    v2 = (StreamFrontendGlob *)((char *)v2 + 4);
    --v3;
  }
  while ( v3 );
  memset_0(this->modelDistance.mValueSet, 0, sizeof(this->modelDistance.mValueSet));
  memset_0(&this->materialDistance, 0, 0x2D000ui64);
  p_materialDistance = &this->materialDistance;
  v5 = 46080i64;
  do
  {
    StreamDistance::StreamDistance(p_materialDistance->mDistances);
    p_materialDistance = (StreamSortDistanceTracked<46080> *)((char *)p_materialDistance + 4);
    --v5;
  }
  while ( v5 );
  memset_0(this->materialDistance.mValueSet, 0, sizeof(this->materialDistance.mValueSet));
  memset_0(&this->imageDistance, 0, 0x50000ui64);
  p_imageDistance = &this->imageDistance;
  v7 = 81920i64;
  v8 = 81920i64;
  do
  {
    StreamDistance::StreamDistance(p_imageDistance->mDistances);
    p_imageDistance = (StreamSortDistanceTracked<81920> *)((char *)p_imageDistance + 4);
    --v8;
  }
  while ( v8 );
  memset_0(this->imageDistance.mValueSet, 0, sizeof(this->imageDistance.mValueSet));
  p_imageDistanceHint = &this->imageDistanceHint;
  do
  {
    StreamMiniDistance::StreamMiniDistance(p_imageDistanceHint->mDistances);
    p_imageDistanceHint = (StreamDistanceHintTracker<81920> *)((char *)p_imageDistanceHint + 1);
    --v7;
  }
  while ( v7 );
  memset_0(this->imageXPakPosition, 0, sizeof(this->imageXPakPosition));
  memset_0(this->meshXPakPosition, 0, sizeof(this->meshXPakPosition));
  memset_0(this->genericXPakPosition, 0, sizeof(this->genericXPakPosition));
  this->touchMaterialUntilLoadCount = 0;
  *(_QWORD *)&this->deferredTouchXModelCount = 0i64;
  this->touchBufferIndex = 0;
  memset_0((StreamFrontendGlob *)this->imageTouchBits, 0, 0x64000ui64);
  `eh vector constructor iterator'(this->sortLists, 0x478918ui64, 2ui64, (void (__fastcall *)(void *))StreamSortListFrame::StreamSortListFrame, (void (__fastcall *)(void *))StreamSortListFrame::~StreamSortListFrame);
  *(_QWORD *)this->sortListReadLock = 0i64;
  *(_QWORD *)&this->sortListReadBuildCounter = 0i64;
  this->sortListWrite = 1;
  this->sortListValid = 0;
  this->imageStreamingQuality = 1.0842022e-19;
  *(_QWORD *)&this->imageStreamingQualitySmoothed = 0x20000000i64;
  *(_QWORD *)&this->meshBoost = 0i64;
  this->smoothedImageCurrentReadDistanceSq = 1.0;
  *(_WORD *)&this->canStreamMore = 257;
  this->forcedState = AllLoaded;
  *(_QWORD *)&this->globalScheduler.mFrame = 0i64;
  *(_QWORD *)&this->globalScheduler.mUpdateSubFrameCount = 1i64;
  this->globalScheduler.mSortSubframeCount = 0;
  *(_WORD *)&this->globalScheduler.mUseStreamTree = 0;
  *(_QWORD *)&this->levelInit.state = 4i64;
  this->levelInit.initialLoadFinishRequestedDueToError = 0;
  *(_QWORD *)&this->levelInit.loadingState = 0i64;
  this->levelInit.loadingProgressByte = 0i64;
  this->levelInit.loadingRegressByte = 0i64;
  this->levelInit.loadingProgressCount = 0i64;
  this->levelInit.loadingRegressCount = 0i64;
  this->levelInit.useLevelInitEvictor = 0;
  this->frameState = BEGIN;
  this->frozenState = 0;
  this->desiredStats.desiredMeshBytes = 0i64;
  this->desiredStats.desiredAndInuseMeshBytes = 0i64;
  this->desiredStats.desiredMeshCount = 0i64;
  this->desiredStats.desiredAndInuseMeshCount = 0i64;
  this->desiredStats.desiredGenericBytes = 0i64;
  this->desiredStats.desiredAndInuseGenericBytes = 0i64;
  this->desiredStats.desiredGenericCount = 0i64;
  this->desiredStats.desiredAndInuseGenericCount = 0i64;
  this->numClientsThisFrame = -1;
  this->numClientsLastFrame = 0;
  this->updateFrameInProgress = 0;
  this->isEndingUpdateFrame = 0;
  this->yieldRequestCount = 0;
  this->yieldFrameCount = 0;
  this->currentSavedViewPos = 0;
  memset_0(this->savedViewPosCount, 0, 0x610ui64);
  *(_QWORD *)this->minDistanceToClutter = 0i64;
  this->gameMode[0] = 0;
  *(_QWORD *)&this->loadSync.startFrameIndex = 0i64;
  this->loadSync.isActiveInFrontend = 0;
  this->loadSync.waitType = NO_WAIT_AFTER_LEVEL_LOAD;
  *(_WORD *)&this->loadSync.allowTransientLoads = 257;
  *(_QWORD *)&this->loadSync.resetCount = 0i64;
  this->loadSync.fakeManualView = 0;
  this->loadSync.serverEntitiesCheck = 0i64;
  this->purgeMeshes = 0;
  memset_0(this->smodelsCollectionLods, 0, sizeof(this->smodelsCollectionLods));
  memset_0(&this->memoryStats, 0, sizeof(this->memoryStats));
  this->transientZoneStreamingQuality[0] = 0;
  memset_0(&this->transientZoneStreamingQuality[1], 0, 0xBFFui64);
  StreamableBits::Alloc(&this->imageBits, 0x50000u);
  StreamableBits::Alloc(&this->meshBits, 0xB000u);
  StreamableBits::Alloc(&this->genericBits, 0x9400u);
  RequestBits::Alloc(&this->meshRequest, 0xB000u);
  RequestBits::Alloc(&this->genericRequest, 0x9400u);
  memset_0(this->imageXPakPosition, 0, sizeof(this->imageXPakPosition));
  memset_0(this->meshXPakPosition, 0, sizeof(this->meshXPakPosition));
  memset_0(this->genericXPakPosition, 0, sizeof(this->genericXPakPosition));
  StreamUpdateScheduler::ResetFrame(&this->globalScheduler);
  StreamUpdateScheduler::EnableSubFrames(&this->globalScheduler, 0);
  if ( this->sortLists != (StreamSortListFrame *)this->sortListReadLock )
  {
    p_mCS = &this->sortLists[0].imageSortList.mCS;
    do
    {
      v14.cs = p_mCS;
      if ( !p_mCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs", v13) )
        __debugbreak();
      Sys_LockWrite(p_mCS);
      memset_0(&p_mCS[-83201].tempPriority.oldPriority, 0, 0xA000ui64);
      *(_QWORD *)&p_mCS[-1].tempPriority.oldPriority = 0i64;
      p_mCS[-1].writeThreadId = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v14);
      v15.cs = (FastCriticalSection *)((char *)p_mCS + 366128);
      if ( p_mCS == (FastCriticalSection *)-366128i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockWrite((FastCriticalSection *)((char *)p_mCS + 366128));
      memset_0(&p_mCS[1], 0, 0x1600ui64);
      *(_QWORD *)&p_mCS[11441].readCount = 0i64;
      LODWORD(p_mCS[11441].tempPriority.threadHandle) = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v15);
      v16.cs = p_mCS + 21063;
      if ( p_mCS == (FastCriticalSection *)-674016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockWrite(p_mCS + 21063);
      memset_0(&p_mCS[11442].tempPriority.oldPriority, 0, 0x1280ui64);
      *(_QWORD *)&p_mCS[21062].tempPriority.oldPriority = 0i64;
      p_mCS[21062].writeThreadId = 0;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v16);
      p_mCS = (FastCriticalSection *)((char *)p_mCS + 4688152);
    }
    while ( &p_mCS[-125441].tempPriority.oldPriority != this->sortListReadLock );
  }
  p_specialImagesTable = &this->specialImagesTable;
  v12 = 480i64;
  do
  {
    *(_QWORD *)p_specialImagesTable->array = 0i64;
    *(_QWORD *)&p_specialImagesTable->array[2] = 0i64;
    *(_QWORD *)&p_specialImagesTable->array[4] = 0i64;
    p_specialImagesTable = (bitarray<245760> *)((char *)p_specialImagesTable + 64);
    *(_QWORD *)&p_specialImagesTable[-1].array[7670] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7672] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7674] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7676] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7678] = 0i64;
    --v12;
  }
  while ( v12 );
}

/*
==============
ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock
==============
*/
void ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(ScopedStreamFrontendUpdateLock *this)
{
  Sys_LeaveCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()", -2i64) )
    __debugbreak();
}

/*
==============
ScopedTempReleaseStreamerFrontendLock::~ScopedTempReleaseStreamerFrontendLock
==============
*/
void ScopedTempReleaseStreamerFrontendLock::~ScopedTempReleaseStreamerFrontendLock(ScopedTempReleaseStreamerFrontendLock *this)
{
  Sys_EnterCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
  Stream_CheckFrontendUpdateLocks();
}

/*
==============
ImageByteCounter
==============
*/
unsigned __int64 ImageByteCounter(unsigned int index)
{
  unsigned int v1; 
  GfxImage *GfxImageAtIndex; 
  const GfxImage *v3; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  __int64 v6; 
  unsigned int StreamedPartCount; 

  v1 = index & 3;
  GfxImageAtIndex = DB_GetGfxImageAtIndex(index >> 2);
  v3 = GfxImageAtIndex;
  if ( v1 >= GfxImageAtIndex->streamedPartCount )
    return 0i64;
  if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( v1 >= Image_GetStreamedPartCount(v3) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(v3);
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v6, StreamedPartCount) )
      __debugbreak();
  }
  p_levelCountAndSize = &v3->streams[v1].levelCountAndSize;
  if ( v1 )
    return ((unsigned int)*p_levelCountAndSize >> 4) - (*((_DWORD *)&v3->levelCount + 10 * v1) >> 4);
  else
    return (unsigned int)*p_levelCountAndSize >> 4;
}

/*
==============
MeshByteCounter
==============
*/
unsigned __int64 MeshByteCounter(unsigned int index)
{
  XSurfaceShared *shared; 

  shared = DB_GetXModelSurfsAtIndex(index)->shared;
  if ( shared )
    return shared->dataSize;
  else
    return 0i64;
}

/*
==============
Stream_CalculateForced
==============
*/
void Stream_CalculateForced(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  unsigned int v4; 
  StreamFrontendGlob *v5; 
  unsigned int mWordCount; 
  unsigned int i; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CalculateForced");
  v4 = 0;
  *imageBytesOut = 0i64;
  *meshBytesOut = 0i64;
  v5 = streamFrontendGlob;
  if ( streamFrontendGlob )
  {
    mWordCount = streamFrontendGlob->imageBits.mWordCount;
    for ( i = 0; i < mWordCount; v5 = streamFrontendGlob )
    {
      if ( i >= v5->imageBits.mWordCount )
      {
        LODWORD(v10) = v5->imageBits.mWordCount;
        LODWORD(v9) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      *imageBytesOut += AddIfSet_unsigned___int64____cdecl___unsigned_int__(i, v5->imageBits.mStaticForced[i], ImageByteCounter);
      ++i;
    }
    v8 = v5->meshBits.mWordCount;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v4 >= v5->meshBits.mWordCount )
        {
          LODWORD(v10) = v5->meshBits.mWordCount;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        *meshBytesOut += AddIfSet_unsigned___int64____cdecl___unsigned_int__(v4, v5->meshBits.mStaticForced[v4], MeshByteCounter);
        if ( ++v4 >= v8 )
          break;
        v5 = streamFrontendGlob;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CalculateForcedAndLoaded
==============
*/
void Stream_CalculateForcedAndLoaded(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  unsigned int v4; 
  StreamFrontendGlob *v5; 
  unsigned int mWordCount; 
  unsigned int i; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CalculateForcedAndLoaded");
  v4 = 0;
  *imageBytesOut = 0i64;
  *meshBytesOut = 0i64;
  v5 = streamFrontendGlob;
  if ( streamFrontendGlob )
  {
    mWordCount = streamFrontendGlob->imageBits.mWordCount;
    for ( i = 0; i < mWordCount; v5 = streamFrontendGlob )
    {
      if ( i >= v5->imageBits.mWordCount )
      {
        LODWORD(v10) = v5->imageBits.mWordCount;
        LODWORD(v9) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 238, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( i >= v5->imageBits.mWordCount )
      {
        LODWORD(v10) = v5->imageBits.mWordCount;
        LODWORD(v9) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      *imageBytesOut += AddIfSet_unsigned___int64____cdecl___unsigned_int__(i, v5->imageBits.mStaticForced[i] & v5->imageBits.mUse[i], ImageByteCounter);
      ++i;
    }
    v8 = v5->meshBits.mWordCount;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v4 >= v5->meshBits.mWordCount )
        {
          LODWORD(v10) = v5->meshBits.mWordCount;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 238, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( v4 >= v5->meshBits.mWordCount )
        {
          LODWORD(v10) = v5->meshBits.mWordCount;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        *meshBytesOut += AddIfSet_unsigned___int64____cdecl___unsigned_int__(v4, v5->meshBits.mStaticForced[v4] & v5->meshBits.mUse[v4], MeshByteCounter);
        if ( ++v4 >= v8 )
          break;
        v5 = streamFrontendGlob;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CalculateLoadingCounts
==============
*/
void Stream_CalculateLoadingCounts(unsigned int *images, unsigned int *meshes, unsigned int *generics)
{
  unsigned int v3; 
  unsigned int v6; 
  unsigned int mWordCount; 
  unsigned int *mLoading; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int *v15; 
  __int64 v16; 

  v3 = 0;
  v6 = 0;
  mWordCount = streamFrontendGlob->imageBits.mWordCount;
  if ( mWordCount )
  {
    mLoading = streamFrontendGlob->imageBits.mLoading;
    v9 = mWordCount;
    do
    {
      v6 += __popcnt(*mLoading++);
      --v9;
    }
    while ( v9 );
  }
  *images = v6;
  v10 = 0;
  v11 = streamFrontendGlob->meshBits.mWordCount;
  if ( v11 )
  {
    v12 = streamFrontendGlob->meshBits.mLoading;
    v13 = v11;
    do
    {
      v10 += __popcnt(*v12++);
      --v13;
    }
    while ( v13 );
  }
  *meshes = v10;
  v14 = streamFrontendGlob->genericBits.mWordCount;
  if ( v14 )
  {
    v15 = streamFrontendGlob->genericBits.mLoading;
    v16 = v14;
    do
    {
      v3 += __popcnt(*v15++);
      --v16;
    }
    while ( v16 );
  }
  *generics = v3;
}

/*
==============
Stream_CalculateScriptForced
==============
*/
void Stream_CalculateScriptForced(unsigned __int64 *imageBytesOut, unsigned __int64 *meshBytesOut)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CalculateScriptForced");
  *imageBytesOut = 0i64;
  *meshBytesOut = 0i64;
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CanStreamMore
==============
*/
_BOOL8 Stream_CanStreamMore()
{
  return streamFrontendGlob->canStreamMore;
}

/*
==============
Stream_CheckFrontendUpdateLocks
==============
*/
void Stream_CheckFrontendUpdateLocks(void)
{
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 223, ASSERT_TYPE_ASSERT, "( !R_IsLockedGfxImmediateContext() )", "Shouldn't have gfx immediate context lock upon taking the streamer frontend lock because that could lead to lock inversion!") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 225, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ) )", "Streamer frontend lock not acquired!") )
    __debugbreak();
}

/*
==============
Stream_ClearValidityBits
==============
*/
void Stream_ClearValidityBits(void)
{
  memset_0(streamFrontendGlob->imageBits.mValid, 0, 4i64 * streamFrontendGlob->imageBits.mWordCount);
  memset_0(streamFrontendGlob->meshBits.mValid, 0, 4i64 * streamFrontendGlob->meshBits.mWordCount);
  memset_0(streamFrontendGlob->genericBits.mValid, 0, 4i64 * streamFrontendGlob->genericBits.mWordCount);
}

/*
==============
Stream_GetForcedState
==============
*/
__int64 Stream_GetForcedState()
{
  StreamFrontendGlob *v0; 

  if ( !s_streamIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 492, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  v0 = streamFrontendGlob;
  if ( !streamFrontendGlob )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 493, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
      __debugbreak();
    v0 = streamFrontendGlob;
  }
  return (unsigned int)v0->forcedState;
}

/*
==============
Stream_GetMemoryStats
==============
*/
void Stream_GetMemoryStats(StreamFrontendMemoryStats *outStats)
{
  _RAX = streamFrontendGlob;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0BBD3F0h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rax+0BBD410h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+0BBD430h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups xmm1, xmmword ptr [rax+0BBD450h]
    vmovups xmmword ptr [rcx+60h], xmm1
  }
}

/*
==============
Stream_GetSModelCollectionLodMaskFromXModelStreamTree
==============
*/
__int64 Stream_GetSModelCollectionLodMaskFromXModelStreamTree(unsigned int smodelCollectionIndex)
{
  __int64 v1; 
  int v4; 

  v1 = smodelCollectionIndex;
  if ( smodelCollectionIndex >= 0x10000 )
  {
    v4 = 0x10000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->smodelsCollectionLods ) ) + 0 ) )", "smodelCollectionIndex doesn't index ARRAY_COUNT( streamFrontendGlob->smodelsCollectionLods )\n\t%i not in [0, %i)", smodelCollectionIndex, v4) )
      __debugbreak();
  }
  return streamFrontendGlob->smodelsCollectionLods[v1];
}

/*
==============
Stream_HandleComError
==============
*/
void Stream_HandleComError(void)
{
  if ( s_streamIsInitialized )
  {
    Stream_PushSyncDisable();
    if ( streamFrontendGlob->updateFrameInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 403, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->updateFrameInProgress)", (const char *)&queryFormat, "!streamFrontendGlob->updateFrameInProgress") )
      __debugbreak();
    Stream_InvalidateAllSorting();
    Stream_PopSyncDisable();
  }
}

/*
==============
Stream_Init
==============
*/
void Stream_Init(void)
{
  StreamFrontendGlob *v0; 
  StreamFrontendGlob *v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 77, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_streamIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 78, ASSERT_TYPE_ASSERT, "(!s_streamIsInitialized)", (const char *)&queryFormat, "!s_streamIsInitialized") )
    __debugbreak();
  Stream_RegisterDvars();
  XPak_Init();
  Stream_Logger_Init();
  Stream_CombineTables_OneTimeInit();
  PMem_BeginAlloc("$streamer", PMEM_STACK_GAME);
  Stream_Read_Init();
  Stream_BackendQueue_Init();
  if ( streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 95, ASSERT_TYPE_ASSERT, "(streamFrontendGlob == nullptr)", (const char *)&queryFormat, "streamFrontendGlob == nullptr") )
    __debugbreak();
  v0 = (StreamFrontendGlob *)PMem_Alloc(0xBC5880ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - streamFrontendGlob");
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 97, ASSERT_TYPE_ASSERT, "(streamFrontendGlobMem)", (const char *)&queryFormat, "streamFrontendGlobMem") )
    __debugbreak();
  StreamFrontendGlob::StreamFrontendGlob(v0);
  streamFrontendGlob = v1;
  Stream_Debug_Init();
  Stream_Primer_Init();
  PMem_EndAlloc("$streamer", PMEM_STACK_GAME);
  Stream_ImageRecord_Init();
  if ( !Sys_SpawnImageTrackingThread((void (__fastcall *)(unsigned int))Stream_ImageRecord_Thread) )
    Sys_Error((const ObfuscateErrorText)&stru_1441246B8);
  s_streamIsInitialized = 1;
}

/*
==============
Stream_IsEnabled
==============
*/
bool Stream_IsEnabled()
{
  if ( ((unsigned __int8)&s_streamDisabledCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_streamDisabledCount) )
    __debugbreak();
  return s_streamDisabledCount == 0;
}

/*
==============
Stream_IsInitialized
==============
*/
_BOOL8 Stream_IsInitialized()
{
  return s_streamIsInitialized;
}

/*
==============
Stream_IsYielding
==============
*/
bool Stream_IsYielding()
{
  volatile int *p_yieldFrameCount; 

  p_yieldFrameCount = &streamFrontendGlob->yieldFrameCount;
  if ( (((_BYTE)streamFrontendGlob + 68) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &streamFrontendGlob->yieldFrameCount) )
    __debugbreak();
  return *p_yieldFrameCount != 0;
}

/*
==============
Stream_IsYieldingRequested
==============
*/
bool Stream_IsYieldingRequested()
{
  volatile int *p_yieldRequestCount; 

  p_yieldRequestCount = &streamFrontendGlob->yieldRequestCount;
  if ( (((_BYTE)streamFrontendGlob + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &streamFrontendGlob->yieldRequestCount) )
    __debugbreak();
  return *p_yieldRequestCount > 0;
}

/*
==============
Stream_LoadQuality_Image
==============
*/

float __fastcall Stream_LoadQuality_Image(double _XMM0_8)
{
  double v7; 
  double v8[3]; 

  _RAX = streamFrontendGlob;
  if ( streamFrontendGlob->levelInit.state == 4 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0B96B2Ch]
      vcomiss xmm0, cs:__real@20000000
    }
    if ( streamFrontendGlob->levelInit.state < 4u )
      goto LABEL_5;
    __asm { vcomiss xmm0, cs:__real@5f7fffc0 }
    if ( streamFrontendGlob->levelInit.state > 4u )
    {
LABEL_5:
      __asm
      {
        vcvtss2sd xmm2, xmm0, xmm0
        vmovaps xmm0, cs:__xmm@43effff7ffff00003c00000000000000
        vmovups xmmword ptr [rsp+48h+var_18], xmm0
        vmovsd  [rsp+48h+var_20], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 732, ASSERT_TYPE_ASSERT, "( Stream_GetImageStreamingQualityMin() ) <= ( streamFrontendGlob->imageStreamingQualitySmoothed ) && ( streamFrontendGlob->imageStreamingQualitySmoothed ) <= ( Stream_GetImageStreamingQualityMax() )", "streamFrontendGlob->imageStreamingQualitySmoothed not in [Stream_GetImageStreamingQualityMin(), Stream_GetImageStreamingQualityMax()]\n\t%g not in [%g, %g]", v7, v8[0], v8[1]) )
        __debugbreak();
      _RAX = streamFrontendGlob;
    }
    __asm { vmovss  xmm0, dword ptr [rax+0B96B2Ch] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_LoadQuality_Mesh
==============
*/
float Stream_LoadQuality_Mesh()
{
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm0, xmm0, dword ptr [rax+0B96B34h]
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_PopRequestYield
==============
*/
void Stream_PopRequestYield(void)
{
  volatile int *p_yieldRequestCount; 

  if ( streamFrontendGlob->yieldRequestCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 542, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->yieldRequestCount > 0)", (const char *)&queryFormat, "streamFrontendGlob->yieldRequestCount > 0") )
    __debugbreak();
  p_yieldRequestCount = &streamFrontendGlob->yieldRequestCount;
  if ( (((_BYTE)streamFrontendGlob + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->yieldRequestCount) )
    __debugbreak();
  _InterlockedDecrement(p_yieldRequestCount);
}

/*
==============
Stream_PopSyncDisable
==============
*/
void Stream_PopSyncDisable(void)
{
  int v0; 
  const char *v1; 
  const char *CurrentThreadContextName; 
  char *fmt; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_PopSyncDisable");
  if ( ((unsigned __int8)&s_streamDisabledCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_streamDisabledCount) )
    __debugbreak();
  if ( !s_streamDisabledCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 379, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( ((unsigned __int64)&s_streamDisabledCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_streamDisabledCount) )
    __debugbreak();
  v0 = _InterlockedDecrement(&s_streamDisabledCount);
  if ( v0 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 382, ASSERT_TYPE_ASSERT, "( newDisableCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "newDisableCount", "0", v0, 0i64) )
    __debugbreak();
  if ( v0 <= 0 )
  {
    if ( s_inStreamSyncThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 383, ASSERT_TYPE_ASSERT, "( ( newDisableCount > 0 || s_inStreamSyncThreadId == INVALID_THREAD_ID ) )", "( \"calling PopSyncDisable while in matching PushSyncDisable\" ) = %s", "calling PopSyncDisable while in matching PushSyncDisable") )
      __debugbreak();
    if ( !v0 )
    {
      if ( ((unsigned __int8)&s_isStreamDisabledAndSynced & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_isStreamDisabledAndSynced) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&s_isStreamDisabledAndSynced, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 386, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &s_isStreamDisabledAndSynced )) == (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_isStreamDisabledAndSynced ) == 0") )
        __debugbreak();
    }
  }
  v1 = "disabled";
  if ( !v0 )
    v1 = "enabled";
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  LODWORD(fmt) = v0;
  Com_Printf(35, "Streamer pop sync-disable by %s thread, count %d->%d, streamer is %s\n", CurrentThreadContextName, (unsigned int)(v0 + 1), fmt, v1);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_PushRequestYield
==============
*/
void Stream_PushRequestYield(void)
{
  volatile int *p_yieldRequestCount; 

  p_yieldRequestCount = &streamFrontendGlob->yieldRequestCount;
  if ( (((_BYTE)streamFrontendGlob + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->yieldRequestCount) )
    __debugbreak();
  _InterlockedIncrement(p_yieldRequestCount);
}

/*
==============
Stream_PushSyncDisable
==============
*/
void Stream_PushSyncDisable(void)
{
  unsigned __int64 v0; 
  int v1; 
  unsigned int i; 
  const char *CurrentThreadContextName; 
  char *fmt; 
  __int64 v5; 
  __int64 v6; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_PushSyncDisable");
  if ( !s_streamIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 292, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 293, ASSERT_TYPE_ASSERT, "( !Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ) )", "Streamer frontend lock should not be held when attempting to disable the streamer!") )
    __debugbreak();
  v0 = (unsigned __int64)&s_streamDisabledCount & 3;
  do
  {
    if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_streamDisabledCount) )
      __debugbreak();
    v1 = _InterlockedIncrement(&s_streamDisabledCount);
    if ( v1 == 1 )
    {
      Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_TOUCH_DOBJ);
      Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_TOUCH_MATERIAL_OVERRIDES);
      if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
        __debugbreak();
      if ( Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 203, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 204, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
        __debugbreak();
      Sys_EnterCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
      Stream_Primer_RequestCancel();
      if ( Stream_IsBeginScreenUpdateFrameThread() && streamFrontendGlob->levelInit.state == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 323, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->levelInit.state != StreamLevelInit::State::DONE )", "WRKCMD_STREAM_BEGIN_SCREEN_UPDATE_FRAME attempting to disable streamer outside of level init, which it should never attempt!") )
        __debugbreak();
      if ( s_inStreamSyncThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 325, ASSERT_TYPE_ASSERT, "(s_inStreamSyncThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "s_inStreamSyncThreadId == INVALID_THREAD_ID") )
        __debugbreak();
      s_inStreamSyncThreadId = Sys_GetCurrentThreadId();
      Stream_EndUpdateFrame(1);
      if ( streamFrontendGlob->updateFrameInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 330, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->updateFrameInProgress)", (const char *)&queryFormat, "!streamFrontendGlob->updateFrameInProgress") )
        __debugbreak();
      if ( streamFrontendGlob->numClientsThisFrame != -1 )
      {
        LODWORD(v6) = -1;
        LODWORD(v5) = streamFrontendGlob->numClientsThisFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 331, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) == ( -1 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "-1", v5, v6) )
          __debugbreak();
      }
      if ( Sys_HasPendingStreamFrontendUpdateWorkerCmds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 332, ASSERT_TYPE_ASSERT, "(!Sys_HasPendingStreamFrontendUpdateWorkerCmds())", (const char *)&queryFormat, "!Sys_HasPendingStreamFrontendUpdateWorkerCmds()") )
        __debugbreak();
      memset_0((StreamFrontendGlob *)streamFrontendGlob->imageTouchBits, 0, sizeof(streamFrontendGlob->imageTouchBits));
      memset_0(streamFrontendGlob->imageUsedFrame, 0, sizeof(streamFrontendGlob->imageUsedFrame));
      for ( i = 0; i < 2; ++i )
      {
        RequestBits::ClearBitsAndCount(&streamFrontendGlob->meshRequest, i);
        RequestBits::ClearBitsAndCount(&streamFrontendGlob->genericRequest, i);
      }
      StreamUpdateScheduler::ResetSubFrame(&streamFrontendGlob->globalScheduler);
      if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 223, ASSERT_TYPE_ASSERT, "( !R_IsLockedGfxImmediateContext() )", "Shouldn't have gfx immediate context lock upon taking the streamer frontend lock because that could lead to lock inversion!") )
        __debugbreak();
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 225, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ) )", "Streamer frontend lock not acquired!") )
        __debugbreak();
      Sys_LeaveCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
      Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Sync");
      if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_streamDisabledCount) )
        __debugbreak();
      if ( !s_streamDisabledCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 273, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
        __debugbreak();
      if ( Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 274, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE )") )
        __debugbreak();
      if ( Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 275, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      Stream_WaitFileBlockUpdate();
      Stream_Read_CancelAllInFlightLoads();
      Stream_BackendQueue_ForcedFlush();
      Stream_BackendQueue_UpdateSettings();
      Sys_ProfEndNamedEvent();
      Sys_EnterCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
      if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 223, ASSERT_TYPE_ASSERT, "( !R_IsLockedGfxImmediateContext() )", "Shouldn't have gfx immediate context lock upon taking the streamer frontend lock because that could lead to lock inversion!") )
        __debugbreak();
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 225, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ) )", "Streamer frontend lock not acquired!") )
        __debugbreak();
      if ( Sys_HasPendingStreamFrontendUpdateWorkerCmds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 351, ASSERT_TYPE_ASSERT, "(!Sys_HasPendingStreamFrontendUpdateWorkerCmds())", (const char *)&queryFormat, "!Sys_HasPendingStreamFrontendUpdateWorkerCmds()") )
        __debugbreak();
      if ( ((unsigned __int8)&s_isStreamDisabledAndSynced & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_isStreamDisabledAndSynced) )
        __debugbreak();
      if ( _InterlockedIncrement(&s_isStreamDisabledAndSynced) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 353, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &s_isStreamDisabledAndSynced )) == (1))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_isStreamDisabledAndSynced ) == 1") )
        __debugbreak();
      s_inStreamSyncThreadId = 0;
      Sys_LeaveCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE);
      if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
        __debugbreak();
    }
    else
    {
      if ( v1 <= 1 )
      {
        LODWORD(v6) = 1;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 359, ASSERT_TYPE_ASSERT, "( newDisableCount ) > ( 1 )", "%s > %s\n\t%i, %i", "newDisableCount", "1", v5, v6) )
          __debugbreak();
      }
      Sys_ProcessWorkerCmdsWithTimeout(lambda_e853762a950181bc694f4ed992148b30_::_lambda_invoker_cdecl_, NULL);
    }
    if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_streamDisabledCount) )
      __debugbreak();
  }
  while ( !s_streamDisabledCount );
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  LODWORD(fmt) = v1;
  Com_Printf(35, "Streamer push sync-disable by %s thread, count %d->%d, streamer is disabled\n", CurrentThreadContextName, (unsigned int)(v1 - 1), fmt);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_ReleaseAboveLimitLOD
==============
*/
void Stream_ReleaseAboveLimitLOD(void)
{
  const dvar_t *v0; 
  ScopedCriticalSection v1; 

  v0 = DVARINT_stream_modelLodLimit;
  if ( !DVARINT_stream_modelLodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_modelLodLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer )
  {
    Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
    ScopedCriticalSection::ScopedCriticalSection(&v1, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
    Sys_ProfEndNamedEvent();
    DB_EnumXAssets(ASSET_TYPE_XMODEL, lambda_c0979ba8ac41f5edbce90e1e114f0f7c_::_lambda_invoker_cdecl_, NULL, 1);
    ScopedCriticalSection::~ScopedCriticalSection(&v1);
  }
}

/*
==============
Stream_ResetImageQualitySmoothing
==============
*/
void Stream_ResetImageQualitySmoothing(void)
{
  const dvar_t *v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 752, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 753, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
    __debugbreak();
  v0 = DCONST_DVARBOOL_stream_resetSmoothingEnabled;
  if ( !DCONST_DVARBOOL_stream_resetSmoothingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_resetSmoothingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    streamFrontendGlob->resetQualitySmoothingFrame = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler) + 2;
}

/*
==============
Stream_SetItemXPakPosition
==============
*/
void Stream_SetItemXPakPosition(StreamItemType itemType, unsigned int itemIndex, unsigned int xpakIndex, unsigned __int64 xpakOffset)
{
  __int64 v4; 
  unsigned int *meshXPakPosition; 
  StreamableBits *p_meshBits; 
  unsigned int v9; 
  unsigned int v10; 

  v4 = itemIndex;
  if ( itemType )
  {
    if ( itemType == STREAM_ITEM_MESH )
    {
      if ( itemIndex >= 0xB000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->meshXPakPosition ) ) + 0 ) )", "itemIndex doesn't index ARRAY_COUNT( streamFrontendGlob->meshXPakPosition )\n\t%i not in [0, %i)", itemIndex, 45056) )
        __debugbreak();
      meshXPakPosition = streamFrontendGlob->meshXPakPosition;
      p_meshBits = &streamFrontendGlob->meshBits;
    }
    else
    {
      if ( itemType != STREAM_ITEM_GENERIC )
        return;
      if ( itemIndex >= 0x9400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 457, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->genericXPakPosition ) ) + 0 ) )", "itemIndex doesn't index ARRAY_COUNT( streamFrontendGlob->genericXPakPosition )\n\t%i not in [0, %i)", itemIndex, 37888) )
        __debugbreak();
      meshXPakPosition = streamFrontendGlob->genericXPakPosition;
      p_meshBits = &streamFrontendGlob->genericBits;
    }
  }
  else
  {
    if ( itemIndex >= 0x50000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 447, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->imageXPakPosition ) ) + 0 ) )", "itemIndex doesn't index ARRAY_COUNT( streamFrontendGlob->imageXPakPosition )\n\t%i not in [0, %i)", itemIndex, 327680) )
      __debugbreak();
    meshXPakPosition = streamFrontendGlob->imageXPakPosition;
    p_meshBits = &streamFrontendGlob->imageBits;
  }
  StreamableBits::SetValid(p_meshBits, v4);
  v9 = XPak_ComputeFileBlockID(xpakIndex, xpakOffset);
  v10 = v9;
  if ( v9 >= 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 468, ASSERT_TYPE_ASSERT, "( position ) < ( ( 1u << STREAM_SORT_KEY_XPAK_BITS ) )", "%s < %s\n\t%u, %u", "position", "( 1u << STREAM_SORT_KEY_XPAK_BITS )", v9, 0x40000) )
    __debugbreak();
  meshXPakPosition[v4] = v10;
}

/*
==============
Stream_Shutdown
==============
*/
void Stream_Shutdown(void)
{
  StreamerMemLoan result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 130, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( !s_streamIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 131, ASSERT_TYPE_ASSERT, "(s_streamIsInitialized)", (const char *)&queryFormat, "s_streamIsInitialized") )
    __debugbreak();
  Stream_PushSyncDisable();
  Stream_Primer_Shutdown();
  Stream_Read_Shutdown();
  Stream_BackendQueue_Shutdown();
  `eh vector destructor iterator'(streamFrontendGlob->sortLists, 0x478918ui64, 2ui64, (void (__fastcall *)(void *))StreamSortListFrame::~StreamSortListFrame);
  streamFrontendGlob = NULL;
  PMem_Free(&result, "$streamer", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
  Stream_Logger_Shutdown();
  s_streamIsInitialized = 0;
}

/*
==============
Stream_SyncThenFlush
==============
*/
void Stream_SyncThenFlush(void)
{
  if ( s_streamIsInitialized )
  {
    Stream_PushSyncDisable();
    if ( streamFrontendGlob->updateFrameInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 403, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->updateFrameInProgress)", (const char *)&queryFormat, "!streamFrontendGlob->updateFrameInProgress") )
      __debugbreak();
    Stream_InvalidateAllSorting();
    Stream_PopSyncDisable();
  }
}

/*
==============
Stream_UpdateClientFrame
==============
*/
void Stream_UpdateClientFrame(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream.cpp", 482, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Stream_Read_UpdateClientFrame();
  Stream_Debug_UpdateClientFrame();
}

/*
==============
Stream_UseXModelStreamTree
==============
*/
bool Stream_UseXModelStreamTree()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_stream_xmodelTreeEnable;
  if ( !DCONST_DVARBOOL_stream_xmodelTreeEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xmodelTreeEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && rgp.world && rgp.world->xmodelStreamTreeGrid.version == 1 && rgp.world->xmodelStreamTreeGrid.xmodelCount;
}

/*
==============
Stream_ValidateXPakPosition
==============
*/
void Stream_ValidateXPakPosition(const unsigned int position)
{
  if ( position >= 0x40000 )
    Sys_Error((const ObfuscateErrorText)&stru_1441252E0, position);
}

/*
==============
Streamer_StatusPrint
==============
*/
void Streamer_StatusPrint(const char *formatString, ...)
{
  const dvar_t *v1; 
  char dest[4096]; 
  va_list ap; 

  va_start(ap, formatString);
  v1 = DCONST_DVARINT_stream_printVerbosity;
  if ( !DCONST_DVARINT_stream_printVerbosity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_printVerbosity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer > 0 )
  {
    Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, formatString, ap);
    Com_Printf(35, (const char *)&queryFormat, dest);
  }
}

