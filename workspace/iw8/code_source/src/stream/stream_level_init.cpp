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
  bool isActiveInFrontend; 
  StreamFrontendGlob *v11; 
  __m256i v12; 
  __m256i v13; 
  __int64 v14; 
  char v15; 
  int v16; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  char v21; 
  char v22[135]; 
  unsigned __int64 v23; 
  ScopedStreamFrontendUpdateLock v26; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 49, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v26);
  memset_0(streamFrontendGlob->imageBits.mStaticForced, 0, 4i64 * streamFrontendGlob->imageBits.mWordCount);
  memset_0(streamFrontendGlob->meshBits.mStaticForced, 0, 4i64 * streamFrontendGlob->meshBits.mWordCount);
  memset_0(streamFrontendGlob->genericBits.mStaticForced, 0, 4i64 * streamFrontendGlob->genericBits.mWordCount);
  streamFrontendGlob->touchMaterialUntilLoadCount = 0;
  streamFrontendGlob->deferredTouchXModelCount = 0;
  StreamUpdateScheduler::EnableSubFrames(&streamFrontendGlob->globalScheduler, 0);
  streamFrontendGlob->gameMode[0] = 0;
  streamFrontendGlob->canStreamMore = 1;
  streamFrontendGlob->canStreamMoreForWrite = 1;
  _RBX = streamFrontendGlob;
  isActiveInFrontend = streamFrontendGlob->loadSync.isActiveInFrontend;
  v14 = 0i64;
  v15 = 0;
  v16 = 1;
  v17 = 257;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0;
  v21 = 0;
  memset_0(v22, 0, 0x80ui64);
  v23 = 0i64;
  _RAX = &v14;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+0B97330h], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+0B97350h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+0B97370h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+0B97390h], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rbx+0B973B0h], ymm0
    vmovups xmm0, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rbx+0B973D0h], xmm0
  }
  _RBX->loadSync.serverEntitiesCheck = v23;
  streamFrontendGlob->loadSync.isActiveInFrontend = isActiveInFrontend;
  Stream_ViewPos_Init();
  Stream_Read_ResetStats();
  Stream_Primer_RequestCancel();
  v12.m256i_i64[0] = 4i64;
  v12.m256i_i8[8] = 0;
  *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 0i64;
  v12.m256i_i64[3] = 0i64;
  memset(&v13, 0, 28);
  __asm
  {
    vmovups ymm0, [rsp+180h+var_150]
    vmovups [rbp+80h+var_40], ymm0
    vmovups ymm1, [rsp+180h+var_130]
    vmovups [rbp+80h+var_20], ymm1
  }
  v11 = streamFrontendGlob;
  *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
  v11->levelInit.initialLoadFinishRequestedDueToError = 0;
  *(_QWORD *)&v11->levelInit.loadingState = 0i64;
  v11->levelInit.loadingProgressByte = 0i64;
  v11->levelInit.loadingRegressByte = 0i64;
  v11->levelInit.loadingProgressCount = 0i64;
  v11->levelInit.loadingRegressCount = 0i64;
  v11->levelInit.useLevelInitEvictor = 0;
  streamFrontendGlob->levelInit.state = LOADING_SAVEGAME;
  Stream_CheckFrontendUpdateLocks();
  streamFrontendGlob->levelInit.loadingProgressTimeMs = Sys_Milliseconds();
  streamFrontendGlob->levelInit.loadingProgressByte = 0i64;
  streamFrontendGlob->levelInit.loadingRegressByte = 0i64;
  streamFrontendGlob->levelInit.loadingProgressCount = 0i64;
  streamFrontendGlob->levelInit.loadingRegressCount = 0i64;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v26);
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
  StreamFrontendGlob *v3; 
  const dvar_t *v4; 
  __m256i v5; 
  _QWORD v6[15]; 

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
        v5.m256i_i64[0] = 4i64;
        v5.m256i_i8[8] = 0;
        *(__int64 *)((char *)&v5.m256i_i64[1] + 4) = 0i64;
        v5.m256i_i64[3] = 0i64;
        memset(v6, 0, 28);
        __asm
        {
          vmovups ymm0, [rsp+0D8h+var_98]
          vmovups [rsp+0D8h+var_50], ymm0
          vmovups ymm1, [rsp+0D8h+var_78]
          vmovups [rsp+0D8h+var_30], ymm1
        }
        v3 = streamFrontendGlob;
        *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
        v3->levelInit.initialLoadFinishRequestedDueToError = 0;
        *(_QWORD *)&v3->levelInit.loadingState = 0i64;
        v3->levelInit.loadingProgressByte = 0i64;
        v3->levelInit.loadingRegressByte = 0i64;
        v3->levelInit.loadingProgressCount = 0i64;
        v3->levelInit.loadingRegressCount = 0i64;
        v3->levelInit.useLevelInitEvictor = 0;
        streamFrontendGlob->levelInit.state = 4;
        v4 = DCONST_DVARBOOL_stream_spawnFrozen;
        if ( !DCONST_DVARBOOL_stream_spawnFrozen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_spawnFrozen") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( v4->current.enabled )
          Dvar_SetBool_Internal(DVARBOOL_stream_freezeState, 1);
      }
    }
    else if ( state != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_level_init.cpp", 171, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid level init state %d", streamFrontendGlob->levelInit.state) )
    {
      __debugbreak();
    }
  }
}

