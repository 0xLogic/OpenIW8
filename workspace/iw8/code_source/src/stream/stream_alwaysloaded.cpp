/*
==============
Stream_AlwaysLoaded_IsProcessingStreamingInfo
==============
*/

bool __fastcall Stream_AlwaysLoaded_IsProcessingStreamingInfo()
{
  return ?Stream_AlwaysLoaded_IsProcessingStreamingInfo@@YA_NXZ();
}

/*
==============
Stream_AlwaysLoaded_IsProcessStreamingInfoQueued
==============
*/

bool __fastcall Stream_AlwaysLoaded_IsProcessStreamingInfoQueued()
{
  return ?Stream_AlwaysLoaded_IsProcessStreamingInfoQueued@@YA_NXZ();
}

/*
==============
Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload
==============
*/

void Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload(void)
{
  ?Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload@@YAXXZ();
}

/*
==============
Stream_AlwaysLoaded_GetProgress
==============
*/

void __fastcall Stream_AlwaysLoaded_GetProgress(unsigned __int64 *forcedTotal, unsigned __int64 *forcedCompleted)
{
  ?Stream_AlwaysLoaded_GetProgress@@YAXAEA_K0@Z(forcedTotal, forcedCompleted);
}

/*
==============
Stream_AlwaysLoaded_Update
==============
*/

void Stream_AlwaysLoaded_Update(void)
{
  ?Stream_AlwaysLoaded_Update@@YAXXZ();
}

/*
==============
Stream_AlwaysLoaded_QueueProcessStreamingInfo
==============
*/

void Stream_AlwaysLoaded_QueueProcessStreamingInfo(void)
{
  ?Stream_AlwaysLoaded_QueueProcessStreamingInfo@@YAXXZ();
}

/*
==============
Stream_AlwaysLoaded_IsFinished
==============
*/

bool __fastcall Stream_AlwaysLoaded_IsFinished()
{
  return ?Stream_AlwaysLoaded_IsFinished@@YA_NXZ();
}

/*
==============
Stream_AlwaysLoaded_IsLoading
==============
*/

bool __fastcall Stream_AlwaysLoaded_IsLoading()
{
  return ?Stream_AlwaysLoaded_IsLoading@@YA_NXZ();
}

/*
==============
Stream_AlwaysLoaded_IsTimedOut
==============
*/

bool __fastcall Stream_AlwaysLoaded_IsTimedOut()
{
  return ?Stream_AlwaysLoaded_IsTimedOut@@YA_NXZ();
}

/*
==============
Stream_AlwaysLoaded_CancelProcessStreamingInfo
==============
*/

void Stream_AlwaysLoaded_CancelProcessStreamingInfo(void)
{
  ?Stream_AlwaysLoaded_CancelProcessStreamingInfo@@YAXXZ();
}

/*
==============
Stream_AddProgressBits
==============
*/
void Stream_AddProgressBits(unsigned __int64 *hintTotal, unsigned __int64 *hintCompleted, const StreamableBits *bits)
{
  unsigned int mWordCount; 
  unsigned int i; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  mWordCount = bits->mWordCount;
  for ( i = 0; i < mWordCount; *hintCompleted += (int)__popcnt(v9 & v10) )
  {
    if ( i >= bits->mWordCount )
    {
      LODWORD(v12) = bits->mWordCount;
      LODWORD(v11) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v8 = (int)i;
    v9 = bits->mStaticForced[v8];
    if ( i >= bits->mWordCount )
    {
      LODWORD(v12) = bits->mWordCount;
      LODWORD(v11) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v10 = bits->mUse[v8];
    if ( i >= bits->mWordCount )
    {
      LODWORD(v12) = bits->mWordCount;
      LODWORD(v11) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 442, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    ++i;
    *hintTotal += (int)__popcnt(v9 & bits->mValid[v8]);
  }
}

/*
==============
Stream_AlwaysLoadedFlagCallback
==============
*/
bool Stream_AlwaysLoadedFlagCallback(const StreamingInfo *streamingInfo, AlwaysloadedTotalsGather *outTotals)
{
  __int64 AlwaysloadedFlagSetTypeForStreamingInfo; 
  AlwaysloadedFlagSet *v5; 
  int v7; 
  int v8; 

  AlwaysloadedFlagSetTypeForStreamingInfo = (unsigned __int8)DB_GetAlwaysloadedFlagSetTypeForStreamingInfo(streamingInfo);
  if ( (unsigned int)AlwaysloadedFlagSetTypeForStreamingInfo >= 3 )
  {
    v8 = 3;
    v7 = AlwaysloadedFlagSetTypeForStreamingInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( flagSetIndex ) < (unsigned)( ( sizeof( *array_counter( streamingInfo.alwaysloadedFlagSets ) ) + 0 ) )", "flagSetIndex doesn't index ARRAY_COUNT( streamingInfo.alwaysloadedFlagSets )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &streamingInfo->alwaysloadedFlagSets[AlwaysloadedFlagSetTypeForStreamingInfo];
  return Stream_ApplyAlwaysloadedFlags_Images(&v5->globalFlags, streamingInfo, s_processStreamingInfoState.imageForcedBits, outTotals) && Stream_ApplyAlwaysloadedFlags_ModelSurfs(v5->modelSurfs, v5->modelSurfCount, s_processStreamingInfoState.meshForcedBits, outTotals);
}

/*
==============
Stream_AlwaysLoaded_CancelProcessStreamingInfo
==============
*/
void Stream_AlwaysLoaded_CancelProcessStreamingInfo(void)
{
  const char *v0; 
  const char *StatusText; 
  StreamLevelInit::AlwaysLoadedState loadingState; 
  ScopedStreamFrontendUpdateLock v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 278, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v3);
  v0 = (char *)&queryFormat.fmt + 3;
  if ( Stream_Primer_IsAborting() )
    v0 = " (aborting)";
  StatusText = Stream_Primer_GetStatusText();
  Streamer_StatusPrint("Stream_AlwaysLoaded_CancelProcessStreamingInfo() : the state was %s and Primer is %s%s.\n", s_debugEnumText_AlwaysLoadedState[streamFrontendGlob->levelInit.loadingState], StatusText, v0);
  loadingState = streamFrontendGlob->levelInit.loadingState;
  if ( loadingState >= IDLE )
  {
    if ( loadingState <= INITIALIZING )
      goto LABEL_14;
    if ( loadingState == SEARCHING )
    {
      s_processStreamingInfoState.cancel = 1;
      goto LABEL_14;
    }
    if ( loadingState == QOSING )
    {
      Stream_Primer_RequestCancel();
      goto LABEL_14;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 311, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_14:
  streamFrontendGlob->levelInit.loadingState = IDLE;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v3);
}

/*
==============
Stream_AlwaysLoaded_CheckIfFinished
==============
*/
void Stream_AlwaysLoaded_CheckIfFinished()
{
  bool v0; 
  unsigned __int8 v1; 
  unsigned __int64 v2; 
  unsigned __int64 integer; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int v6; 
  StreamFrontendGlob *v7; 
  int v8; 
  const char *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  unsigned __int64 v12; 
  const char *v13; 
  ScopedStreamFrontendUpdateLock v14; 
  unsigned __int64 hintTotal; 
  unsigned __int64 hintCompleted; 
  IterateStillNeededImage::__l2::<lambda_935d73221c458f62f04a17d221d98e82> iterator; 
  __int64 v18; 
  unsigned __int64 bytesToLoad[3]; 
  unsigned __int64 bytesLoaded[3]; 

  v18 = -2i64;
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v14);
  v0 = Stream_Primer_DoWork(0);
  if ( streamFrontendGlob->levelInit.loadingState == QOSING )
  {
    v1 = 0;
    if ( !v0 )
    {
      Stream_Primer_GetProgress((unsigned __int64 (*)[3])bytesToLoad, (unsigned __int64 (*)[3])bytesLoaded);
      v2 = bytesToLoad[1] + bytesToLoad[0] + bytesToLoad[2];
      integer = bytesLoaded[1] + bytesLoaded[0] + bytesLoaded[2];
      if ( Stream_Primer_IsRunning() )
        goto LABEL_20;
    }
    v1 = 1;
    Stream_CheckFrontendUpdateLocks();
    hintTotal = 0i64;
    hintCompleted = 0i64;
    Stream_AddProgressBits(&hintTotal, &hintCompleted, &streamFrontendGlob->imageBits);
    Stream_AddProgressBits(&hintTotal, &hintCompleted, &streamFrontendGlob->meshBits);
    Stream_AddProgressBits(&hintTotal, &hintCompleted, &streamFrontendGlob->genericBits);
    v4 = DCONST_DVARINT_stream_alwaysLoadedSimulateStuck;
    if ( !DCONST_DVARINT_stream_alwaysLoadedSimulateStuck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedSimulateStuck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    if ( integer )
    {
      if ( integer > hintCompleted )
        integer = hintCompleted;
    }
    else
    {
      integer = hintCompleted;
    }
    v2 = hintTotal;
    if ( hintTotal == integer )
    {
      if ( Stream_Primer_IsRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 596, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsRunning())", (const char *)&queryFormat, "!Stream_Primer_IsRunning()") )
        __debugbreak();
      DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion();
      streamFrontendGlob->levelInit.loadingState = IDLE;
    }
    else
    {
LABEL_20:
      v5 = DCONST_DVARINT_stream_alwaysLoadedTimeoutSeconds;
      if ( !DCONST_DVARINT_stream_alwaysLoadedTimeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedTimeoutSeconds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      v6 = v5->current.integer;
      if ( v6 > 0 )
      {
        Stream_CheckFrontendUpdateLocks();
        v7 = streamFrontendGlob;
        v8 = Sys_Milliseconds();
        if ( v8 < v7->levelInit.loadingProgressTimeMs + 1000 * v6 )
        {
          if ( *(&v7->levelInit.loadingProgressByte + 2 * v1) >= integer )
          {
            v12 = *(_QWORD *)&v7->modelDistance.mDistances[4 * v1 + 3037938].mValue;
            if ( v12 > integer )
            {
              v13 = "bytes";
              if ( v1 )
                v13 = "assets";
              Com_PrintError(35, "Stream_AlwaysLoaded_UpdateTimeOut: The progress went backward from %zu to %zu %s.\n", v12, integer, v13);
              *(_QWORD *)&v7->modelDistance.mDistances[4 * v1 + 3037938].mValue = integer;
            }
          }
          else
          {
            *(&v7->levelInit.loadingProgressByte + 2 * v1) = integer;
            *(_QWORD *)&v7->modelDistance.mDistances[4 * v1 + 3037938].mValue = integer;
            v11 = DCONST_DVARBOOL_stream_alwaysLoadedSimulateTimeout;
            if ( !DCONST_DVARBOOL_stream_alwaysLoadedSimulateTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedSimulateTimeout") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v11);
            if ( !v11->current.enabled )
              v7->levelInit.loadingProgressTimeMs = v8;
          }
        }
        else
        {
          Com_PrintError(35, "Stream_AlwaysLoaded_UpdateTimeOut: Timed out at progress %zu.\n", integer);
          v9 = "bytes";
          if ( v1 )
            v9 = "assets";
          Com_PrintError(35, "Stream_AlwaysLoaded_CheckIfFinished: timed out loading %zu of %zu %s\n", integer, v2, v9);
          v10 = DCONST_DVARINT_stream_alwaysLoadedPrintMaxMissingAssets;
          if ( !DCONST_DVARINT_stream_alwaysLoadedPrintMaxMissingAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedPrintMaxMissingAssets") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v10);
          hintCompleted = v10->current.integer;
          hintTotal = (unsigned __int64)&hintCompleted;
          iterator.iterator = (Stream_PrintStillNeededForcedAssets::__l2::<lambda_1ebcdf8ba0344f01575f72d68ef30a07> *)&hintTotal;
          IterateStillNeeded__lambda_935d73221c458f62f04a17d221d98e82_(&streamFrontendGlob->imageBits, (IterateStillNeededImage::__l2::<lambda_935d73221c458f62f04a17d221d98e82>)&iterator);
          iterator.iterator = (Stream_PrintStillNeededForcedAssets::__l2::<lambda_1ebcdf8ba0344f01575f72d68ef30a07> *)&hintTotal;
          IterateStillNeeded__lambda_d65f562c0eafa83d3c8df563c718bfdf_(&streamFrontendGlob->meshBits, (IterateStillNeededMesh::__l2::<lambda_d65f562c0eafa83d3c8df563c718bfdf>)&iterator);
          iterator.iterator = (Stream_PrintStillNeededForcedAssets::__l2::<lambda_1ebcdf8ba0344f01575f72d68ef30a07> *)&hintTotal;
          IterateStillNeeded__lambda_c7e4d268142b8838bc8343f894cb3914_(&streamFrontendGlob->genericBits, (IterateStillNeededGeneric::__l2::<lambda_c7e4d268142b8838bc8343f894cb3914>)&iterator);
          Stream_Primer_RequestCancel();
          streamFrontendGlob->levelInit.loadingState = IDLE;
        }
      }
    }
  }
  else if ( Stream_Primer_IsRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 560, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsRunning())", (const char *)&queryFormat, "!Stream_Primer_IsRunning()") )
  {
    __debugbreak();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v14);
}

/*
==============
Stream_AlwaysLoaded_GetProgress
==============
*/
void Stream_AlwaysLoaded_GetProgress(unsigned __int64 *forcedTotal, unsigned __int64 *forcedCompleted)
{
  const dvar_t *v4; 
  unsigned __int64 integer; 

  Stream_CheckFrontendUpdateLocks();
  *forcedTotal = 0i64;
  *forcedCompleted = 0i64;
  Stream_AddProgressBits(forcedTotal, forcedCompleted, &streamFrontendGlob->imageBits);
  Stream_AddProgressBits(forcedTotal, forcedCompleted, &streamFrontendGlob->meshBits);
  Stream_AddProgressBits(forcedTotal, forcedCompleted, &streamFrontendGlob->genericBits);
  v4 = DCONST_DVARINT_stream_alwaysLoadedSimulateStuck;
  if ( !DCONST_DVARINT_stream_alwaysLoadedSimulateStuck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedSimulateStuck") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( v4->current.integer )
  {
    if ( integer > *forcedCompleted )
      integer = *forcedCompleted;
    *forcedCompleted = integer;
  }
}

/*
==============
Stream_AlwaysLoaded_IsFinished
==============
*/
_BOOL8 Stream_AlwaysLoaded_IsFinished()
{
  bool v0; 
  ScopedStreamFrontendUpdateLock v2; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  v0 = streamFrontendGlob->levelInit.loadingState == IDLE;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
  return v0;
}

/*
==============
Stream_AlwaysLoaded_IsLoading
==============
*/
_BOOL8 Stream_AlwaysLoaded_IsLoading()
{
  bool v0; 
  ScopedStreamFrontendUpdateLock v2; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  v0 = streamFrontendGlob->levelInit.loadingState == QOSING;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
  return v0;
}

/*
==============
Stream_AlwaysLoaded_IsProcessStreamingInfoQueued
==============
*/
_BOOL8 Stream_AlwaysLoaded_IsProcessStreamingInfoQueued()
{
  bool v0; 
  ScopedStreamFrontendUpdateLock v2; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  v0 = streamFrontendGlob->levelInit.loadingState == INITIALIZING;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
  return v0;
}

/*
==============
Stream_AlwaysLoaded_IsProcessingStreamingInfo
==============
*/
_BOOL8 Stream_AlwaysLoaded_IsProcessingStreamingInfo()
{
  bool v0; 
  ScopedStreamFrontendUpdateLock v2; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  v0 = streamFrontendGlob->levelInit.loadingState == SEARCHING;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
  return v0;
}

/*
==============
Stream_AlwaysLoaded_IsTimedOut
==============
*/
char Stream_AlwaysLoaded_IsTimedOut()
{
  const dvar_t *v0; 
  int integer; 
  char v3; 
  ScopedStreamFrontendUpdateLock v4; 

  v0 = DCONST_DVARINT_stream_alwaysLoadedTimeoutSeconds;
  if ( !DCONST_DVARINT_stream_alwaysLoadedTimeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_alwaysLoadedTimeoutSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  if ( integer <= 0 )
    return 0;
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v4);
  if ( streamFrontendGlob->levelInit.loadingProgressTimeMs && Sys_Milliseconds() >= streamFrontendGlob->levelInit.loadingProgressTimeMs + 1000 * integer )
  {
    if ( streamFrontendGlob->forcedState != EvictedForMemPaged )
      streamFrontendGlob->forcedState = TimedOut;
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v4);
  return v3;
}

/*
==============
Stream_AlwaysLoaded_QueueProcessStreamingInfo
==============
*/
void Stream_AlwaysLoaded_QueueProcessStreamingInfo(void)
{
  const char *v0; 
  const char *StatusText; 
  ScopedStreamFrontendUpdateLock v2; 

  if ( !Sys_IsDatabaseThread() && !Sys_IsMainThread() && !Stream_IsBeginScreenUpdateFrameThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 237, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread() || Sys_IsMainThread() || Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread() || Sys_IsMainThread() || Stream_IsBeginScreenUpdateFrameThread()", -2i64) )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  v0 = (char *)&queryFormat.fmt + 3;
  if ( Stream_Primer_IsAborting() )
    v0 = " (aborting)";
  StatusText = Stream_Primer_GetStatusText();
  Streamer_StatusPrint("Stream_AlwaysLoaded_QueueProcessStreamingInfo() : the state was %s and Primer is %s%s.\n", s_debugEnumText_AlwaysLoadedState[streamFrontendGlob->levelInit.loadingState], StatusText, v0);
  Stream_AlwaysLoaded_QueueProcessStreamingInfo_Internal();
  s_processStreamingInfoState.allowLoading = 1;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
}

/*
==============
Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload
==============
*/
void Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload(void)
{
  __int64 loadingState; 
  const char *v1; 
  ScopedStreamFrontendUpdateLock v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 257, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  loadingState = streamFrontendGlob->levelInit.loadingState;
  v1 = "it cannot skip Primer";
  if ( !(_DWORD)loadingState )
    v1 = "it will skip Primer";
  Streamer_StatusPrint("Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload: the state was %s and %s.\n", s_debugEnumText_AlwaysLoadedState[loadingState], v1);
  Stream_AlwaysLoaded_QueueProcessStreamingInfo_Internal();
  s_processStreamingInfoState.allowLoading = (_DWORD)loadingState != 0;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
}

/*
==============
Stream_AlwaysLoaded_QueueProcessStreamingInfo_Internal
==============
*/
void Stream_AlwaysLoaded_QueueProcessStreamingInfo_Internal()
{
  StreamLevelInit::AlwaysLoadedState loadingState; 

  Stream_CheckFrontendUpdateLocks();
  loadingState = streamFrontendGlob->levelInit.loadingState;
  if ( loadingState >= IDLE )
  {
    if ( loadingState <= INITIALIZING )
      goto LABEL_9;
    if ( loadingState == SEARCHING )
    {
      s_processStreamingInfoState.cancel = 1;
      goto LABEL_9;
    }
    if ( loadingState == QOSING )
    {
      Stream_Primer_RequestCancel();
      goto LABEL_9;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 227, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_9:
  streamFrontendGlob->levelInit.loadingState = INITIALIZING;
  Stream_LevelInit_ResetTimeout();
}

/*
==============
Stream_AlwaysLoaded_Update
==============
*/
void Stream_AlwaysLoaded_Update(void)
{
  StreamLevelInit::AlwaysLoadedState loadingState; 
  bool IsEnabled; 
  const dvar_t *v2; 
  ScopedStreamFrontendUpdateLock v3; 

  if ( !Stream_IsBeginScreenUpdateFrameThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 625, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread()") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v3);
  if ( s_processStreamingInfoState.cancel && streamFrontendGlob->levelInit.loadingState > (unsigned int)INITIALIZING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 633, ASSERT_TYPE_ASSERT, "(!s_processStreamingInfoState.cancel || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::PROCESSING_STREAMING_INFO_QUEUED || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::IDLE)", (const char *)&queryFormat, "!s_processStreamingInfoState.cancel || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::PROCESSING_STREAMING_INFO_QUEUED || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::IDLE") )
    __debugbreak();
  loadingState = streamFrontendGlob->levelInit.loadingState;
  if ( loadingState == INITIALIZING )
    streamFrontendGlob->levelInit.loadingState = SEARCHING;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v3);
  if ( loadingState == INITIALIZING )
  {
    if ( !Stream_IsBeginScreenUpdateFrameThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 182, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread()") )
      __debugbreak();
    if ( Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 185, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE )") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_AlwaysLoaded_ProcessStreamingInfo");
    Streamer_StatusPrint("Stream_AlwaysLoaded_ProcessStreamingInfo()\n");
    if ( Stream_Primer_IsRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 192, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsRunning())", (const char *)&queryFormat, "!Stream_Primer_IsRunning()") )
      __debugbreak();
    memset_0(&s_processStreamingInfoState, 0, 0xC880ui64);
    DB_StreamingInfo_ForEachAlwaysloaded(Stream_AlwaysLoadedFlagCallback);
    Sys_ProfEndNamedEvent();
    ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v3);
    if ( s_processStreamingInfoState.cancel && streamFrontendGlob->levelInit.loadingState > (unsigned int)INITIALIZING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 651, ASSERT_TYPE_ASSERT, "(!s_processStreamingInfoState.cancel || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::PROCESSING_STREAMING_INFO_QUEUED || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::IDLE)", (const char *)&queryFormat, "!s_processStreamingInfoState.cancel || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::PROCESSING_STREAMING_INFO_QUEUED || streamFrontendGlob->levelInit.loadingState == StreamLevelInit::AlwaysLoadedState::IDLE") )
      __debugbreak();
    s_processStreamingInfoState.cancel = 0;
    if ( streamFrontendGlob->levelInit.loadingState != SEARCHING )
      goto LABEL_38;
    IsEnabled = Stream_IsEnabled();
    if ( s_processStreamingInfoState.allowLoading )
    {
      if ( IsEnabled )
      {
        streamFrontendGlob->levelInit.loadingState = QOSING;
        Stream_LevelInit_ResetTimeout();
        goto LABEL_31;
      }
      Com_PrintWarning(35, "Stream_AlwaysLoaded_Update: streamer is not enabled. Skipping the loading state.\n");
    }
    else
    {
      Streamer_StatusPrint("Stream_AlwaysLoaded_Update: Skipping the loading state because we are unloading.\n");
    }
    streamFrontendGlob->levelInit.loadingState = IDLE;
LABEL_31:
    if ( streamFrontendGlob->levelInit.loadingState == QOSING )
    {
      v2 = DCONST_DVARBOOL_stream_primerEnable;
      if ( !DCONST_DVARBOOL_stream_primerEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerEnable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
      {
        Streamer_StatusPrint("Stream_AlwaysLoaded_Update: Starting Primer.\n");
        Stream_Primer_Start(s_processStreamingInfoState.imageForcedBits, s_processStreamingInfoState.meshForcedBits, s_processStreamingInfoState.genericForcedBits);
        goto LABEL_38;
      }
      Com_PrintWarning(35, "Stream_AlwaysLoaded_Update: Primer is disabled.\n");
    }
    memcpy_0(streamFrontendGlob->imageBits.mStaticForced, &s_processStreamingInfoState, 4i64 * streamFrontendGlob->imageBits.mWordCount);
    memcpy_0(streamFrontendGlob->meshBits.mStaticForced, s_processStreamingInfoState.meshForcedBits, 4i64 * streamFrontendGlob->meshBits.mWordCount);
    memcpy_0(streamFrontendGlob->genericBits.mStaticForced, s_processStreamingInfoState.genericForcedBits, 4i64 * streamFrontendGlob->genericBits.mWordCount);
LABEL_38:
    ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v3);
  }
  Stream_AlwaysLoaded_CheckIfFinished();
}

/*
==============
Stream_ApplyAlwaysloadedFlags_Images
==============
*/
char Stream_ApplyAlwaysloadedFlags_Images(const AlwaysloadedFlags *flags, const StreamingInfo *streamingInfo, unsigned int *forceBits, AlwaysloadedTotalsGather *outTotals)
{
  unsigned int v4; 
  unsigned int v5; 
  const AlwaysloadedFlags *v7; 
  const char **p_name; 
  unsigned int v9; 
  _DWORD *v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  AlwaysloadedTotalsGather *v16; 
  AlwaysloadedTotalsGather *v17; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 

  v4 = 0;
  v5 = 0;
  v7 = flags;
  v21 = 0;
  if ( !flags->imageCount )
    return 1;
  while ( !s_processStreamingInfoState.cancel )
  {
    p_name = &v7->images[v4]->name;
    if ( ((_DWORD)p_name[3] & 0x40) != 0 )
    {
      v9 = 0;
      v10 = p_name + 11;
      v11 = 4 * DB_GetGfxImageIndex((const GfxImage *)p_name);
      v22 = v11;
      do
      {
        v12 = v11 + v9;
        if ( ((0x80000000 >> (v5 & 0x1F)) & v7->imageFlags[(unsigned __int64)v5 >> 5]) != 0 )
        {
          if ( !*((_QWORD *)v10 - 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 94, ASSERT_TYPE_ASSERT, "( ( image->streams[imagePartIndex].xpakEntry.key ) )", "( image->name ) = %s", *p_name) )
            __debugbreak();
          if ( v12 >= 0x50000 )
          {
            LODWORD(v20) = 327680;
            LODWORD(v19) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( flatIndex ) < (unsigned)( ( sizeof( *array_counter( s_processStreamingInfoState.imageForcedBits ) ) + 0 ) << 5 )", "flatIndex doesn't index ARRAY_COUNT( s_processStreamingInfoState.imageForcedBits ) << 5\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          Stream_ImageRecord_SetImageDistanceAlwaysLoaded(v12);
          if ( !forceBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v13 = (__int64)(int)v12 >> 5;
          v14 = 1 << (v12 & 0x1F);
          if ( (v14 & forceBits[v13]) == 0 )
          {
            if ( ((_DWORD)p_name[3] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
              __debugbreak();
            if ( v9 >= Image_GetStreamedPartCount((const GfxImage *)p_name) )
            {
              LODWORD(v20) = Image_GetStreamedPartCount((const GfxImage *)p_name);
              LODWORD(v19) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            v15 = *v10 >> 4;
            if ( v9 )
              v15 -= LODWORD(p_name[5 * v9 + 6]) >> 4;
            v16 = outTotals;
            if ( !outTotals->perFlagTotal )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded_totals.h", 42, ASSERT_TYPE_ASSERT, "(outTotals.perFlagTotal)", (const char *)&queryFormat, "outTotals.perFlagTotal") )
                __debugbreak();
              v16 = outTotals;
            }
            *v16->perFlagTotal += v15;
            v17 = outTotals;
            if ( !outTotals->perZoneTotal )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded_totals.h", 46, ASSERT_TYPE_ASSERT, "(outTotals.perZoneTotal)", (const char *)&queryFormat, "outTotals.perZoneTotal") )
                __debugbreak();
              v17 = outTotals;
            }
            v17->perZoneTotal->images += v15;
            if ( !forceBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
              __debugbreak();
            forceBits[v13] |= v14;
          }
          v7 = flags;
        }
        v11 = v22;
        ++v5;
        ++v9;
        v10 += 10;
      }
      while ( v9 < 4 );
    }
    else
    {
      v5 += 4;
    }
    v4 = v21 + 1;
    v21 = v4;
    if ( v4 >= v7->imageCount )
      return 1;
  }
  return 0;
}

/*
==============
Stream_ApplyAlwaysloadedFlags_ModelSurfs
==============
*/
char Stream_ApplyAlwaysloadedFlags_ModelSurfs(XModelSurfs **modelSurfsPtr, unsigned int modelSurfCount, unsigned int *meshForced, AlwaysloadedTotalsGather *outTotals)
{
  unsigned int v4; 
  XModelSurfs *v8; 
  unsigned int XModelSurfsIndex; 
  __int64 v10; 
  int v11; 
  unsigned int *v12; 
  unsigned int dataSize; 
  __int64 v15; 
  __int64 v16; 

  v4 = 0;
  if ( !modelSurfCount )
    return 1;
  while ( !s_processStreamingInfoState.cancel )
  {
    v8 = *modelSurfsPtr;
    if ( !*modelSurfsPtr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 133, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
        __debugbreak();
    }
    if ( !v8->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
      __debugbreak();
    if ( (v8->shared->flags & 1) != 0 )
    {
      XModelSurfsIndex = DB_GetXModelSurfsIndex(v8);
      v10 = (int)XModelSurfsIndex;
      if ( XModelSurfsIndex >= 0xB000 )
      {
        LODWORD(v16) = 45056;
        LODWORD(v15) = XModelSurfsIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alwaysloaded.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_processStreamingInfoState.meshForcedBits ) ) + 0 ) << 5 )", "index doesn't index ARRAY_COUNT( s_processStreamingInfoState.meshForcedBits ) << 5\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !meshForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v11 = 1 << (v10 & 0x1F);
      v12 = &meshForced[v10 >> 5];
      if ( (v11 & *v12) == 0 )
      {
        dataSize = v8->shared->dataSize;
        if ( !outTotals->perFlagTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded_totals.h", 54, ASSERT_TYPE_ASSERT, "(outTotals.perFlagTotal)", (const char *)&queryFormat, "outTotals.perFlagTotal") )
          __debugbreak();
        *outTotals->perFlagTotal += dataSize;
        if ( !outTotals->perZoneTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded_totals.h", 58, ASSERT_TYPE_ASSERT, "(outTotals.perZoneTotal)", (const char *)&queryFormat, "outTotals.perZoneTotal") )
          __debugbreak();
        outTotals->perZoneTotal->modelSurfs += dataSize;
        if ( !meshForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        *v12 |= v11;
      }
    }
    ++v4;
    ++modelSurfsPtr;
    if ( v4 >= modelSurfCount )
      return 1;
  }
  return 0;
}

