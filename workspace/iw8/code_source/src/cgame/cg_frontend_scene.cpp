/*
==============
CG_FrontEndScene_Init
==============
*/

void CG_FrontEndScene_Init(void)
{
  ?CG_FrontEndScene_Init@@YAXXZ();
}

/*
==============
CG_FrontEndScene_GetCinematicState
==============
*/

void __fastcall CG_FrontEndScene_GetCinematicState(CinematicState *frontendSceneRequest)
{
  ?CG_FrontEndScene_GetCinematicState@@YAXPEAUCinematicState@@@Z(frontendSceneRequest);
}

/*
==============
CG_FrontEndScene_ShouldBlockNewTransientRequests
==============
*/

bool __fastcall CG_FrontEndScene_ShouldBlockNewTransientRequests()
{
  return ?CG_FrontEndScene_ShouldBlockNewTransientRequests@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_GetActiveSectionNameAndParam
==============
*/

void __fastcall CG_FrontEndScene_GetActiveSectionNameAndParam(char *outSectionName, unsigned __int64 outNameSize, unsigned int *outSectionParam)
{
  ?CG_FrontEndScene_GetActiveSectionNameAndParam@@YAXPEAD_KPEAI@Z(outSectionName, outNameSize, outSectionParam);
}

/*
==============
CG_FrontEndScene_FrameUpdate
==============
*/

void __fastcall CG_FrontEndScene_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?CG_FrontEndScene_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FrontEndScene_SetScriptedCameraState
==============
*/

void __fastcall CG_FrontEndScene_SetScriptedCameraState(const BgScriptedCameraState *r_scriptedCameraState)
{
  ?CG_FrontEndScene_SetScriptedCameraState@@YAXAEBUBgScriptedCameraState@@@Z(r_scriptedCameraState);
}

/*
==============
CG_FrontEndScene_HasActiveCinematicPlayback
==============
*/

bool __fastcall CG_FrontEndScene_HasActiveCinematicPlayback()
{
  return ?CG_FrontEndScene_HasActiveCinematicPlayback@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_GetCameraFOV
==============
*/

double __fastcall CG_FrontEndScene_GetCameraFOV()
{
  double result; 

  *(float *)&result = ?CG_FrontEndScene_GetCameraFOV@@YAMXZ();
  return result;
}

/*
==============
CG_FrontendScene_AreRequiredTransientsLoaded
==============
*/

bool __fastcall CG_FrontendScene_AreRequiredTransientsLoaded()
{
  return ?CG_FrontendScene_AreRequiredTransientsLoaded@@YA_NXZ();
}

/*
==============
CG_FrontEndScene_Shutdown
==============
*/

void CG_FrontEndScene_Shutdown(void)
{
  ?CG_FrontEndScene_Shutdown@@YAXXZ();
}

/*
==============
CG_FrontEndScene_SetActiveSection
==============
*/

void __fastcall CG_FrontEndScene_SetActiveSection(const char *sectionName, unsigned int sectionParam)
{
  ?CG_FrontEndScene_SetActiveSection@@YAXPEBDI@Z(sectionName, sectionParam);
}

/*
==============
CG_FrontEndScene_FrameUpdate
==============
*/
void CG_FrontEndScene_FrameUpdate(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  int time; 
  double v4; 
  int v5; 
  double v6; 
  unsigned int v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v8) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v8) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 320, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v2->m_frontEndScene )
  {
    CG_FrontEndScene_UpdateRequiredTransients((LocalClientNum_t)v1, v2->time, &s_cgFrontEndSceneState.m_activeScriptedCameraState);
    time = v2->time;
    if ( s_cgFrontEndSceneState.m_requiredTransientsLoaded && s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeTarget == VISIBLE )
    {
      if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime <= time )
      {
        Com_FrontEndScene_SetOpacityChangeTime(s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime);
        Com_FrontEndScene_ClearOpacityOverride();
      }
    }
    else
    {
      if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime == s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime || s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime <= time )
        LODWORD(v4) = 0;
      else
        v4 = I_fclamp(1.0 - (float)((float)(time - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime) / (float)(s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeEndTime - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fadeStartTime)), 0.0, 1.0);
      Com_FrontEndScene_SetOpacityTargetOverride(0.0, *(const float *)&v4);
    }
    if ( s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime == s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime || (v5 = v2->time, s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime <= v5) )
    {
      s_cgFrontEndSceneState.m_currentFov = (float)s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovTarget;
    }
    else
    {
      v6 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)(v5 - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)(s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovEndTime - s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovStartTime)).m128_f32[0], 0.0, 1.0);
      s_cgFrontEndSceneState.m_currentFov = (float)((float)(1.0 - *(float *)&v6) * _mm_cvtepi32_ps((__m128i)(unsigned int)s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovSource).m128_f32[0]) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)s_cgFrontEndSceneState.m_activeScriptedCameraState.m_fovTarget).m128_f32[0] * *(float *)&v6);
    }
    if ( v2->time >= s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackTime )
    {
      v7 = s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackLooping ? 2 : 0;
      Core_strcpy(s_cgFrontEndSceneState.m_activeCinematic, 0x40ui64, s_cgFrontEndSceneState.m_activeScriptedCameraState.m_cinematicPlaybackName);
      s_cgFrontEndSceneState.m_activeCinematicFlags = v7;
    }
  }
}

/*
==============
CG_FrontEndScene_GetActiveSectionNameAndParam
==============
*/
void CG_FrontEndScene_GetActiveSectionNameAndParam(char *outSectionName, unsigned __int64 outNameSize, unsigned int *outSectionParam)
{
  if ( !outSectionParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 298, ASSERT_TYPE_ASSERT, "(outSectionParam)", (const char *)&queryFormat, "outSectionParam") )
    __debugbreak();
  if ( !outSectionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 299, ASSERT_TYPE_ASSERT, "(outSectionName)", (const char *)&queryFormat, "outSectionName") )
    __debugbreak();
  if ( !outNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 300, ASSERT_TYPE_ASSERT, "(outNameSize)", (const char *)&queryFormat, "outNameSize") )
    __debugbreak();
  if ( s_cgFrontEndSceneActiveSectionLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_cgFrontEndSceneActiveSectionLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_cgFrontEndSceneActiveSectionLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_cgFrontEndSceneActiveSectionLock);
  while ( s_cgFrontEndSceneActiveSectionLock.writeCount )
    Sys_Sleep(0);
  Core_strcpy(outSectionName, outNameSize, s_cgFrontEndSceneState.m_activeSectionName);
  *outSectionParam = s_cgFrontEndSceneState.m_activeSectionParam;
  if ( s_cgFrontEndSceneActiveSectionLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_cgFrontEndSceneActiveSectionLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_cgFrontEndSceneActiveSectionLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_cgFrontEndSceneActiveSectionLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_cgFrontEndSceneActiveSectionLock);
}

/*
==============
CG_FrontEndScene_GetCameraFOV
==============
*/
float CG_FrontEndScene_GetCameraFOV()
{
  return s_cgFrontEndSceneState.m_currentFov;
}

/*
==============
CG_FrontEndScene_GetCinematicState
==============
*/
void CG_FrontEndScene_GetCinematicState(CinematicState *frontendSceneRequest)
{
  if ( !frontendSceneRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_frontend_scene.cpp", 118, ASSERT_TYPE_ASSERT, "(frontendSceneRequest)", (const char *)&queryFormat, "frontendSceneRequest") )
    __debugbreak();
  frontendSceneRequest->playbackFlags = s_cgFrontEndSceneState.m_activeCinematicFlags;
  Core_strcpy(frontendSceneRequest->name, 0x40ui64, s_cgFrontEndSceneState.m_activeCinematic);
  frontendSceneRequest->startOffsetMSec = 0;
}

/*
==============
CG_FrontEndScene_HasActiveCinematicPlayback
==============
*/
bool CG_FrontEndScene_HasActiveCinematicPlayback()
{
  return s_cgFrontEndSceneState.m_activeCinematic[0] != 0;
}

/*
==============
CG_FrontEndScene_Init
==============
*/
void CG_FrontEndScene_Init(void)
{
  memset_0(&s_cgFrontEndSceneState, 0, 0x80ui64);
  s_cgFrontEndSceneState.m_currentFov = FLOAT_65_0;
  *(_QWORD *)s_cgFrontEndSceneState.m_activeCinematic = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[8] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[16] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[24] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[32] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[40] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[48] = 0i64;
  *(_QWORD *)&s_cgFrontEndSceneState.m_activeCinematic[56] = 0i64;
  s_cgFrontEndSceneState.m_activeCinematicFlags = 0;
  s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
  s_cgFrontEndSceneState.m_requiredTransientsTimeout = 0;
}

/*
==============
CG_FrontEndScene_SetActiveSection
==============
*/
void CG_FrontEndScene_SetActiveSection(const char *sectionName, unsigned int sectionParam)
{
  volatile int writeCount; 
  int v5; 
  TempThreadPriority tempPriority; 

  Sys_LockWrite(&s_cgFrontEndSceneActiveSectionLock);
  if ( strcmp(sectionName, s_cgFrontEndSceneState.m_activeSectionName) )
    Dvar_SetString_Internal(DVARSTR_lui_fe_transitioning_scene, sectionName);
  Core_strcpy(s_cgFrontEndSceneState.m_activeSectionName, 0x40ui64, sectionName);
  s_cgFrontEndSceneState.m_activeSectionParam = sectionParam;
  if ( s_cgFrontEndSceneActiveSectionLock.writeCount != 1 )
  {
    v5 = 1;
    writeCount = s_cgFrontEndSceneActiveSectionLock.writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", writeCount, v5) )
      __debugbreak();
  }
  if ( s_cgFrontEndSceneActiveSectionLock.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  s_cgFrontEndSceneActiveSectionLock.writeThreadId = 0;
  tempPriority = s_cgFrontEndSceneActiveSectionLock.tempPriority;
  if ( ((unsigned __int8)&s_cgFrontEndSceneActiveSectionLock.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_cgFrontEndSceneActiveSectionLock.writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_cgFrontEndSceneActiveSectionLock.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
CG_FrontEndScene_SetScriptedCameraState
==============
*/
void CG_FrontEndScene_SetScriptedCameraState(const BgScriptedCameraState *r_scriptedCameraState)
{
  s_cgFrontEndSceneState.m_activeScriptedCameraState = *r_scriptedCameraState;
}

/*
==============
CG_FrontEndScene_ShouldBlockNewTransientRequests
==============
*/
bool CG_FrontEndScene_ShouldBlockNewTransientRequests()
{
  return s_cgFrontEndSceneState.m_requiredTransientsLoaded && Com_FrontEndScene_NeedsDatabaseAccess();
}

/*
==============
CG_FrontEndScene_Shutdown
==============
*/
void CG_FrontEndScene_Shutdown(void)
{
  s_cgFrontEndSceneState.m_activeCinematic[0] = 0;
  s_cgFrontEndSceneState.m_activeCinematicFlags = 0;
}

/*
==============
CG_FrontEndScene_UpdateRequiredTransients
==============
*/
void CG_FrontEndScene_UpdateRequiredTransients(LocalClientNum_t localClientNum, const int cgameTime, const BgScriptedCameraState *r_scriptedCameraState)
{
  bool *m_requiredCharacters; 
  unsigned int v6; 
  unsigned int v7; 
  bool *v8; 
  char v9; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 

  if ( cgameTime < r_scriptedCameraState->m_requiredCharacersTime )
  {
    if ( s_cgFrontEndSceneState.m_requiredTransientsLoaded )
      return;
    goto LABEL_30;
  }
  m_requiredCharacters = r_scriptedCameraState->m_requiredCharacters;
  v6 = 0;
  v7 = 0;
  v8 = r_scriptedCameraState->m_requiredCharacters;
  v9 = 1;
  while ( !*v8 || CG_ClientCharacter_HasCharacterModels(localClientNum, v7) && CG_ClientCharacter_GetCharacterLoaded(localClientNum, v7) )
  {
    ++v7;
    ++v8;
    if ( v7 >= 0x18 )
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  if ( !CG_ClientModel_AreSubAssetsLoadingForAnyModel(localClientNum) && v9 )
  {
    s_cgFrontEndSceneState.m_requiredTransientsTimeout = 0;
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 1;
    return;
  }
  if ( !s_cgFrontEndSceneState.m_requiredTransientsTimeout )
  {
    v10 = DCONST_DVARINT_cg_frontEndSceneTransientTimeout;
    if ( !DCONST_DVARINT_cg_frontEndSceneTransientTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneTransientTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
    s_cgFrontEndSceneState.m_requiredTransientsTimeout = cgameTime + integer;
    goto LABEL_30;
  }
  if ( s_cgFrontEndSceneState.m_requiredTransientsTimeout >= cgameTime )
  {
    s_cgFrontEndSceneState.m_requiredTransientsLoaded = 0;
LABEL_30:
    v12 = DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime;
    if ( !DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneTransientStreamingTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    Com_FrontEndScene_SetForceStreamingDuration(v12->current.unsignedInt);
    return;
  }
  if ( !s_cgFrontEndSceneState.m_requiredTransientsLoaded )
  {
    Com_PrintError(16, "CG_FrontEndScene_UpdateRequiredTransients: Timed out monitoring required transients, have requests been made correclty?\n");
    do
    {
      if ( *m_requiredCharacters )
      {
        if ( CG_ClientCharacter_HasCharacterModels(localClientNum, v6) )
        {
          Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: Transients were not loaded in time for character %i (DB Problem)\n", v6);
          CG_ClientCharacter_PrintCharacterNotLoadedModels(localClientNum, v6);
        }
        else
        {
          Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: No character models have been set for required index %i (LUI Problem)\n", v6);
        }
      }
      ++v6;
      ++m_requiredCharacters;
    }
    while ( v6 < 0x18 );
    if ( CG_ClientModel_AreSubAssetsLoadingForAnyModel(localClientNum) )
    {
      Com_Printf(14, "CG_FrontEndScene_UpdateRequiredTransients: Transients were not loaded in time for some client models (DB Problem)\n");
      CG_ClientModel_Debug_PrintLoadingSubAssets(localClientNum);
    }
  }
  s_cgFrontEndSceneState.m_requiredTransientsLoaded = 1;
}

/*
==============
CG_FrontendScene_AreRequiredTransientsLoaded
==============
*/
_BOOL8 CG_FrontendScene_AreRequiredTransientsLoaded()
{
  return s_cgFrontEndSceneState.m_requiredTransientsLoaded;
}

