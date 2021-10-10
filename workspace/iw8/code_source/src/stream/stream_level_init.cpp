/*
==============
Stream_LevelInit_PopUseEvictor
==============
*/

void Stream_LevelInit_PopUseEvictor(void)
{
  ?Stream_LevelInit_PopUseEvictor@@YAXXZ();
}

/*
==============
Stream_LevelInit_ResetTimeout
==============
*/

void Stream_LevelInit_ResetTimeout(void)
{
  ?Stream_LevelInit_ResetTimeout@@YAXXZ();
}

/*
==============
Stream_LevelInit_RequestInitialLoadFinishDueToError
==============
*/

void Stream_LevelInit_RequestInitialLoadFinishDueToError(void)
{
  ?Stream_LevelInit_RequestInitialLoadFinishDueToError@@YAXXZ();
}

/*
==============
Stream_LevelInit_DebugStateString
==============
*/

const char *__fastcall Stream_LevelInit_DebugStateString()
{
  return ?Stream_LevelInit_DebugStateString@@YAPEBDXZ();
}

/*
==============
Stream_LevelInit_IsDone
==============
*/

bool __fastcall Stream_LevelInit_IsDone()
{
  return ?Stream_LevelInit_IsDone@@YA_NXZ();
}

/*
==============
Stream_LevelInit_StepStateMachine
==============
*/

void Stream_LevelInit_StepStateMachine(void)
{
  ?Stream_LevelInit_StepStateMachine@@YAXXZ();
}

/*
==============
Stream_LevelInit_PushUseEvictor
==============
*/

void Stream_LevelInit_PushUseEvictor(void)
{
  ?Stream_LevelInit_PushUseEvictor@@YAXXZ();
}

/*
==============
Stream_LevelInit_ResetAndStart
==============
*/

void Stream_LevelInit_ResetAndStart(void)
{
  ?Stream_LevelInit_ResetAndStart@@YAXXZ();
}

/*
==============
Stream_LevelInit_DebugStateString
==============
*/
const char *Stream_LevelInit_DebugStateString()
{
  StreamLevelInit::State state; 
  int v2; 

  if ( streamFrontendGlob->levelInit.state >= 5u )
  {
    v2 = 5;
    state = streamFrontendGlob->levelInit.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 195, ASSERT_TYPE_ASSERT, "(unsigned)( streamFrontendGlob->levelInit.state ) < (unsigned)( ( sizeof( *array_counter( STREAM_LEVELINIT_DEBUG_STATE_STRS ) ) + 0 ) )", "streamFrontendGlob->levelInit.state doesn't index STREAM_LEVELINIT_DEBUG_STATE_STRS\n\t%i not in [0, %i)", state, v2) )
      __debugbreak();
  }
  return STREAM_LEVELINIT_DEBUG_STATE_STRS[streamFrontendGlob->levelInit.state];
}

/*
==============
Stream_LevelInit_IsDone
==============
*/
bool Stream_LevelInit_IsDone()
{
  return streamFrontendGlob->levelInit.state == 4;
}

/*
==============
Stream_LevelInit_PopUseEvictor
==============
*/
void Stream_LevelInit_PopUseEvictor(void)
{
  volatile int *p_useLevelInitEvictor; 
  volatile int useLevelInitEvictor; 

  if ( streamFrontendGlob->levelInit.useLevelInitEvictor <= 0 )
  {
    useLevelInitEvictor = streamFrontendGlob->levelInit.useLevelInitEvictor;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 30, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->levelInit.useLevelInitEvictor ) > ( 0 )", "%s > %s\n\t%i, %i", "streamFrontendGlob->levelInit.useLevelInitEvictor", "0", useLevelInitEvictor, 0i64) )
      __debugbreak();
  }
  p_useLevelInitEvictor = &streamFrontendGlob->levelInit.useLevelInitEvictor;
  if ( (((_BYTE)streamFrontendGlob - 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->levelInit.useLevelInitEvictor) )
    __debugbreak();
  _InterlockedDecrement(p_useLevelInitEvictor);
}

/*
==============
Stream_LevelInit_PushUseEvictor
==============
*/
void Stream_LevelInit_PushUseEvictor(void)
{
  volatile int *p_useLevelInitEvictor; 
  volatile int useLevelInitEvictor; 

  if ( streamFrontendGlob->levelInit.useLevelInitEvictor < 0 )
  {
    useLevelInitEvictor = streamFrontendGlob->levelInit.useLevelInitEvictor;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 23, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->levelInit.useLevelInitEvictor ) >= ( 0 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->levelInit.useLevelInitEvictor", "0", useLevelInitEvictor, 0i64) )
      __debugbreak();
  }
  p_useLevelInitEvictor = &streamFrontendGlob->levelInit.useLevelInitEvictor;
  if ( (((_BYTE)streamFrontendGlob - 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->levelInit.useLevelInitEvictor) )
    __debugbreak();
  _InterlockedIncrement(p_useLevelInitEvictor);
}

/*
==============
Stream_LevelInit_RequestInitialLoadFinishDueToError
==============
*/
void Stream_LevelInit_RequestInitialLoadFinishDueToError(void)
{
  streamFrontendGlob->levelInit.initialLoadFinishRequestedDueToError = 1;
}

/*
==============
Stream_LevelInit_ResetAndStart
==============
*/
void Stream_LevelInit_ResetAndStart(void)
{
  StreamFrontendGlob *v0; 
  bool isActiveInFrontend; 
  StreamFrontendGlob *v2; 
  __m256i v3; 
  __m256i v4; 
  StreamLoadSync v5; 
  __m256i v6; 
  __m256i v7; 
  ScopedStreamFrontendUpdateLock v8; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 49, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v8);
  memset_0(streamFrontendGlob->imageBits.mStaticForced, 0, 4i64 * streamFrontendGlob->imageBits.mWordCount);
  memset_0(streamFrontendGlob->meshBits.mStaticForced, 0, 4i64 * streamFrontendGlob->meshBits.mWordCount);
  memset_0(streamFrontendGlob->genericBits.mStaticForced, 0, 4i64 * streamFrontendGlob->genericBits.mWordCount);
  streamFrontendGlob->touchMaterialUntilLoadCount = 0;
  streamFrontendGlob->deferredTouchXModelCount = 0;
  StreamUpdateScheduler::EnableSubFrames(&streamFrontendGlob->globalScheduler, 0);
  streamFrontendGlob->gameMode[0] = 0;
  streamFrontendGlob->canStreamMore = 1;
  streamFrontendGlob->canStreamMoreForWrite = 1;
  v0 = streamFrontendGlob;
  isActiveInFrontend = streamFrontendGlob->loadSync.isActiveInFrontend;
  *(_QWORD *)&v5.startFrameIndex = 0i64;
  v5.isActiveInFrontend = 0;
  v5.waitType = NO_WAIT_AFTER_LEVEL_LOAD;
  *(_WORD *)&v5.allowTransientLoads = 257;
  memset(&v5.streamOrigin, 0, 21);
  memset_0(v5.debugText, 0, sizeof(v5.debugText));
  v5.serverEntitiesCheck = 0i64;
  v0->loadSync = v5;
  streamFrontendGlob->loadSync.isActiveInFrontend = isActiveInFrontend;
  Stream_ViewPos_Init();
  Stream_Read_ResetStats();
  Stream_Primer_RequestCancel();
  v3.m256i_i64[0] = 4i64;
  v3.m256i_i8[8] = 0;
  *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 0i64;
  v3.m256i_i64[3] = 0i64;
  memset(&v4, 0, 28);
  v6 = v3;
  v7 = v4;
  v2 = streamFrontendGlob;
  *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
  v2->levelInit.initialLoadFinishRequestedDueToError = 0;
  *(_QWORD *)&v2->levelInit.loadingState = 0i64;
  v2->levelInit.loadingProgressByte = 0i64;
  v2->levelInit.loadingRegressByte = 0i64;
  v2->levelInit.loadingProgressCount = 0i64;
  v2->levelInit.loadingRegressCount = 0i64;
  v2->levelInit.useLevelInitEvictor = 0;
  streamFrontendGlob->levelInit.state = LOADING_SAVEGAME;
  Stream_CheckFrontendUpdateLocks();
  streamFrontendGlob->levelInit.loadingProgressTimeMs = Sys_Milliseconds();
  streamFrontendGlob->levelInit.loadingProgressByte = 0i64;
  streamFrontendGlob->levelInit.loadingRegressByte = 0i64;
  streamFrontendGlob->levelInit.loadingProgressCount = 0i64;
  streamFrontendGlob->levelInit.loadingRegressCount = 0i64;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v8);
}

/*
==============
Stream_LevelInit_ResetTimeout
==============
*/
void Stream_LevelInit_ResetTimeout(void)
{
  Stream_CheckFrontendUpdateLocks();
  streamFrontendGlob->levelInit.loadingProgressTimeMs = Sys_Milliseconds();
  streamFrontendGlob->levelInit.loadingProgressByte = 0i64;
  streamFrontendGlob->levelInit.loadingRegressByte = 0i64;
  streamFrontendGlob->levelInit.loadingProgressCount = 0i64;
  streamFrontendGlob->levelInit.loadingRegressCount = 0i64;
}

/*
==============
Stream_LevelInit_StepStateMachine
==============
*/
void Stream_LevelInit_StepStateMachine(void)
{
  StreamLevelInit::State state; 
  StreamFrontendGlob *v1; 
  const dvar_t *v2; 
  StreamLevelInit::State v3; 

  state = streamFrontendGlob->levelInit.state;
  if ( state && state != LOADING_LEVEL )
  {
    if ( state == LOADING_SAVEGAME )
    {
      ProfLoad_Begin("Stream_LevelInit_Start");
      Stream_CheckFrontendUpdateLocks();
      if ( streamFrontendGlob->levelInit.state != LOADING_SAVEGAME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 102, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.state == StreamLevelInit::State::STARTING)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.state == StreamLevelInit::State::STARTING") )
        __debugbreak();
      streamFrontendGlob->levelInit.state = LOADING_SAVEGAME|LOADING_LEVEL;
      streamFrontendGlob->levelInit.initialLoadFinishRequestedDueToError = 0;
      if ( Stream_AlwaysLoaded_IsFinished() )
        Stream_AlwaysLoaded_QueueProcessStreamingInfo();
      ProfLoad_End();
    }
    else if ( state == (LOADING_SAVEGAME|LOADING_LEVEL) )
    {
      Stream_CheckFrontendUpdateLocks();
      if ( streamFrontendGlob->levelInit.state != (LOADING_SAVEGAME|LOADING_LEVEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 116, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.state == StreamLevelInit::State::LOADING_ALWAYS_LOADED_ASSETS)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.state == StreamLevelInit::State::LOADING_ALWAYS_LOADED_ASSETS") )
        __debugbreak();
      if ( Stream_AlwaysLoaded_IsFinished() || streamFrontendGlob->levelInit.initialLoadFinishRequestedDueToError )
      {
        if ( Stream_Primer_IsRunning() )
          Stream_Primer_RequestCancel();
        v1 = streamFrontendGlob;
        *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
        v1->levelInit.initialLoadFinishRequestedDueToError = 0;
        *(_QWORD *)&v1->levelInit.loadingState = 0i64;
        v1->levelInit.loadingProgressByte = 0i64;
        v1->levelInit.loadingRegressByte = 0i64;
        v1->levelInit.loadingProgressCount = 0i64;
        v1->levelInit.loadingRegressCount = 0i64;
        v1->levelInit.useLevelInitEvictor = 0;
        streamFrontendGlob->levelInit.state = 4;
        v2 = DCONST_DVARBOOL_stream_spawnFrozen;
        if ( !DCONST_DVARBOOL_stream_spawnFrozen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_spawnFrozen") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v2);
        if ( v2->current.enabled )
          Dvar_SetBool_Internal(DVARBOOL_stream_freezeState, 1);
      }
    }
    else if ( state != 4 )
    {
      v3 = streamFrontendGlob->levelInit.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 171, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid level init state %d", v3) )
        __debugbreak();
    }
  }
}

